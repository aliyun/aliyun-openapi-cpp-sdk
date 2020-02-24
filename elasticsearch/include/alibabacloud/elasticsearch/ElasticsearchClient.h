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

#ifndef ALIBABACLOUD_ELASTICSEARCH_ELASTICSEARCHCLIENT_H_
#define ALIBABACLOUD_ELASTICSEARCH_ELASTICSEARCHCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "ElasticsearchExport.h"
#include "model/ActivateZonesRequest.h"
#include "model/ActivateZonesResult.h"
#include "model/AddConnectableClusterRequest.h"
#include "model/AddConnectableClusterResult.h"
#include "model/AddSnapshotRepoRequest.h"
#include "model/AddSnapshotRepoResult.h"
#include "model/CancelTaskRequest.h"
#include "model/CancelTaskResult.h"
#include "model/CloseHttpsRequest.h"
#include "model/CloseHttpsResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateLogstashRequest.h"
#include "model/CreateLogstashResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/DeactivateZonesRequest.h"
#include "model/DeactivateZonesResult.h"
#include "model/DeleteConnectedClusterRequest.h"
#include "model/DeleteConnectedClusterResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteLogstashRequest.h"
#include "model/DeleteLogstashResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/DeleteSnapshotRepoRequest.h"
#include "model/DeleteSnapshotRepoResult.h"
#include "model/DescribeConnectableClustersRequest.h"
#include "model/DescribeConnectableClustersResult.h"
#include "model/DescribeElasticsearchHealthRequest.h"
#include "model/DescribeElasticsearchHealthResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeKibanaSettingsRequest.h"
#include "model/DescribeKibanaSettingsResult.h"
#include "model/DescribeLogstashRequest.h"
#include "model/DescribeLogstashResult.h"
#include "model/DescribePipelineManagementConfigRequest.h"
#include "model/DescribePipelineManagementConfigResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GetRegionConfigurationRequest.h"
#include "model/GetRegionConfigurationResult.h"
#include "model/GetSuggestShrinkableNodesRequest.h"
#include "model/GetSuggestShrinkableNodesResult.h"
#include "model/GetTransferableNodesRequest.h"
#include "model/GetTransferableNodesResult.h"
#include "model/InstallKibanaSystemPluginRequest.h"
#include "model/InstallKibanaSystemPluginResult.h"
#include "model/InstallLogstashSystemPluginRequest.h"
#include "model/InstallLogstashSystemPluginResult.h"
#include "model/InstallSystemPluginRequest.h"
#include "model/InstallSystemPluginResult.h"
#include "model/InstallUserPluginsRequest.h"
#include "model/InstallUserPluginsResult.h"
#include "model/InterruptElasticsearchTaskRequest.h"
#include "model/InterruptElasticsearchTaskResult.h"
#include "model/InterruptLogstashTaskRequest.h"
#include "model/InterruptLogstashTaskResult.h"
#include "model/ListAllNodeRequest.h"
#include "model/ListAllNodeResult.h"
#include "model/ListAlternativeSnapshotReposRequest.h"
#include "model/ListAlternativeSnapshotReposResult.h"
#include "model/ListConnectedClustersRequest.h"
#include "model/ListConnectedClustersResult.h"
#include "model/ListInstanceRequest.h"
#include "model/ListInstanceResult.h"
#include "model/ListKibanaPluginsRequest.h"
#include "model/ListKibanaPluginsResult.h"
#include "model/ListLogstashRequest.h"
#include "model/ListLogstashResult.h"
#include "model/ListLogstashLogRequest.h"
#include "model/ListLogstashLogResult.h"
#include "model/ListLogstashPluginsRequest.h"
#include "model/ListLogstashPluginsResult.h"
#include "model/ListPluginsRequest.h"
#include "model/ListPluginsResult.h"
#include "model/ListSearchLogRequest.h"
#include "model/ListSearchLogResult.h"
#include "model/ListSnapshotReposByInstanceIdRequest.h"
#include "model/ListSnapshotReposByInstanceIdResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/OpenHttpsRequest.h"
#include "model/OpenHttpsResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/RenewLogstashRequest.h"
#include "model/RenewLogstashResult.h"
#include "model/RestartInstanceRequest.h"
#include "model/RestartInstanceResult.h"
#include "model/RestartLogstashRequest.h"
#include "model/RestartLogstashResult.h"
#include "model/ResumeElasticsearchTaskRequest.h"
#include "model/ResumeElasticsearchTaskResult.h"
#include "model/ResumeLogstashTaskRequest.h"
#include "model/ResumeLogstashTaskResult.h"
#include "model/RollbackInstanceRequest.h"
#include "model/RollbackInstanceResult.h"
#include "model/ShrinkNodeRequest.h"
#include "model/ShrinkNodeResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TransferNodeRequest.h"
#include "model/TransferNodeResult.h"
#include "model/TriggerNetworkRequest.h"
#include "model/TriggerNetworkResult.h"
#include "model/UninstallKibanaPluginRequest.h"
#include "model/UninstallKibanaPluginResult.h"
#include "model/UninstallLogstashPluginRequest.h"
#include "model/UninstallLogstashPluginResult.h"
#include "model/UninstallPluginRequest.h"
#include "model/UninstallPluginResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAdminPasswordRequest.h"
#include "model/UpdateAdminPasswordResult.h"
#include "model/UpdateAdvancedSettingRequest.h"
#include "model/UpdateAdvancedSettingResult.h"
#include "model/UpdateAliwsDictRequest.h"
#include "model/UpdateAliwsDictResult.h"
#include "model/UpdateBlackIpsRequest.h"
#include "model/UpdateBlackIpsResult.h"
#include "model/UpdateDescriptionRequest.h"
#include "model/UpdateDescriptionResult.h"
#include "model/UpdateDictRequest.h"
#include "model/UpdateDictResult.h"
#include "model/UpdateHotIkDictsRequest.h"
#include "model/UpdateHotIkDictsResult.h"
#include "model/UpdateInstanceRequest.h"
#include "model/UpdateInstanceResult.h"
#include "model/UpdateInstanceChargeTypeRequest.h"
#include "model/UpdateInstanceChargeTypeResult.h"
#include "model/UpdateInstanceSettingsRequest.h"
#include "model/UpdateInstanceSettingsResult.h"
#include "model/UpdateKibanaSettingsRequest.h"
#include "model/UpdateKibanaSettingsResult.h"
#include "model/UpdateKibanaWhiteIpsRequest.h"
#include "model/UpdateKibanaWhiteIpsResult.h"
#include "model/UpdateLogstashRequest.h"
#include "model/UpdateLogstashResult.h"
#include "model/UpdateLogstashChargeTypeRequest.h"
#include "model/UpdateLogstashChargeTypeResult.h"
#include "model/UpdateLogstashDescriptionRequest.h"
#include "model/UpdateLogstashDescriptionResult.h"
#include "model/UpdateLogstashSettingsRequest.h"
#include "model/UpdateLogstashSettingsResult.h"
#include "model/UpdatePipelineManagementConfigRequest.h"
#include "model/UpdatePipelineManagementConfigResult.h"
#include "model/UpdatePipelinesRequest.h"
#include "model/UpdatePipelinesResult.h"
#include "model/UpdatePrivateNetworkWhiteIpsRequest.h"
#include "model/UpdatePrivateNetworkWhiteIpsResult.h"
#include "model/UpdatePublicNetworkRequest.h"
#include "model/UpdatePublicNetworkResult.h"
#include "model/UpdatePublicWhiteIpsRequest.h"
#include "model/UpdatePublicWhiteIpsResult.h"
#include "model/UpdateSnapshotSettingRequest.h"
#include "model/UpdateSnapshotSettingResult.h"
#include "model/UpdateSynonymsDictsRequest.h"
#include "model/UpdateSynonymsDictsResult.h"
#include "model/UpdateWhiteIpsRequest.h"
#include "model/UpdateWhiteIpsResult.h"
#include "model/UpgradeEngineVersionRequest.h"
#include "model/UpgradeEngineVersionResult.h"
#include "model/ValidateShrinkNodesRequest.h"
#include "model/ValidateShrinkNodesResult.h"
#include "model/ValidateTransferableNodesRequest.h"
#include "model/ValidateTransferableNodesResult.h"


namespace AlibabaCloud
{
	namespace Elasticsearch
	{
		class ALIBABACLOUD_ELASTICSEARCH_EXPORT ElasticsearchClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateZonesResult> ActivateZonesOutcome;
			typedef std::future<ActivateZonesOutcome> ActivateZonesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ActivateZonesRequest&, const ActivateZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateZonesAsyncHandler;
			typedef Outcome<Error, Model::AddConnectableClusterResult> AddConnectableClusterOutcome;
			typedef std::future<AddConnectableClusterOutcome> AddConnectableClusterOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::AddConnectableClusterRequest&, const AddConnectableClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddConnectableClusterAsyncHandler;
			typedef Outcome<Error, Model::AddSnapshotRepoResult> AddSnapshotRepoOutcome;
			typedef std::future<AddSnapshotRepoOutcome> AddSnapshotRepoOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::AddSnapshotRepoRequest&, const AddSnapshotRepoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSnapshotRepoAsyncHandler;
			typedef Outcome<Error, Model::CancelTaskResult> CancelTaskOutcome;
			typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CancelTaskRequest&, const CancelTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
			typedef Outcome<Error, Model::CloseHttpsResult> CloseHttpsOutcome;
			typedef std::future<CloseHttpsOutcome> CloseHttpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CloseHttpsRequest&, const CloseHttpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseHttpsAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateLogstashResult> CreateLogstashOutcome;
			typedef std::future<CreateLogstashOutcome> CreateLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateLogstashRequest&, const CreateLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogstashAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::DeactivateZonesResult> DeactivateZonesOutcome;
			typedef std::future<DeactivateZonesOutcome> DeactivateZonesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeactivateZonesRequest&, const DeactivateZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateZonesAsyncHandler;
			typedef Outcome<Error, Model::DeleteConnectedClusterResult> DeleteConnectedClusterOutcome;
			typedef std::future<DeleteConnectedClusterOutcome> DeleteConnectedClusterOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteConnectedClusterRequest&, const DeleteConnectedClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConnectedClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteLogstashResult> DeleteLogstashOutcome;
			typedef std::future<DeleteLogstashOutcome> DeleteLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteLogstashRequest&, const DeleteLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogstashAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotRepoResult> DeleteSnapshotRepoOutcome;
			typedef std::future<DeleteSnapshotRepoOutcome> DeleteSnapshotRepoOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteSnapshotRepoRequest&, const DeleteSnapshotRepoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotRepoAsyncHandler;
			typedef Outcome<Error, Model::DescribeConnectableClustersResult> DescribeConnectableClustersOutcome;
			typedef std::future<DescribeConnectableClustersOutcome> DescribeConnectableClustersOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeConnectableClustersRequest&, const DescribeConnectableClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectableClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeElasticsearchHealthResult> DescribeElasticsearchHealthOutcome;
			typedef std::future<DescribeElasticsearchHealthOutcome> DescribeElasticsearchHealthOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeElasticsearchHealthRequest&, const DescribeElasticsearchHealthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElasticsearchHealthAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeKibanaSettingsResult> DescribeKibanaSettingsOutcome;
			typedef std::future<DescribeKibanaSettingsOutcome> DescribeKibanaSettingsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeKibanaSettingsRequest&, const DescribeKibanaSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKibanaSettingsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogstashResult> DescribeLogstashOutcome;
			typedef std::future<DescribeLogstashOutcome> DescribeLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeLogstashRequest&, const DescribeLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogstashAsyncHandler;
			typedef Outcome<Error, Model::DescribePipelineManagementConfigResult> DescribePipelineManagementConfigOutcome;
			typedef std::future<DescribePipelineManagementConfigOutcome> DescribePipelineManagementConfigOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribePipelineManagementConfigRequest&, const DescribePipelineManagementConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePipelineManagementConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GetRegionConfigurationResult> GetRegionConfigurationOutcome;
			typedef std::future<GetRegionConfigurationOutcome> GetRegionConfigurationOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetRegionConfigurationRequest&, const GetRegionConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRegionConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetSuggestShrinkableNodesResult> GetSuggestShrinkableNodesOutcome;
			typedef std::future<GetSuggestShrinkableNodesOutcome> GetSuggestShrinkableNodesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetSuggestShrinkableNodesRequest&, const GetSuggestShrinkableNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSuggestShrinkableNodesAsyncHandler;
			typedef Outcome<Error, Model::GetTransferableNodesResult> GetTransferableNodesOutcome;
			typedef std::future<GetTransferableNodesOutcome> GetTransferableNodesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetTransferableNodesRequest&, const GetTransferableNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTransferableNodesAsyncHandler;
			typedef Outcome<Error, Model::InstallKibanaSystemPluginResult> InstallKibanaSystemPluginOutcome;
			typedef std::future<InstallKibanaSystemPluginOutcome> InstallKibanaSystemPluginOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::InstallKibanaSystemPluginRequest&, const InstallKibanaSystemPluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallKibanaSystemPluginAsyncHandler;
			typedef Outcome<Error, Model::InstallLogstashSystemPluginResult> InstallLogstashSystemPluginOutcome;
			typedef std::future<InstallLogstashSystemPluginOutcome> InstallLogstashSystemPluginOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::InstallLogstashSystemPluginRequest&, const InstallLogstashSystemPluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallLogstashSystemPluginAsyncHandler;
			typedef Outcome<Error, Model::InstallSystemPluginResult> InstallSystemPluginOutcome;
			typedef std::future<InstallSystemPluginOutcome> InstallSystemPluginOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::InstallSystemPluginRequest&, const InstallSystemPluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallSystemPluginAsyncHandler;
			typedef Outcome<Error, Model::InstallUserPluginsResult> InstallUserPluginsOutcome;
			typedef std::future<InstallUserPluginsOutcome> InstallUserPluginsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::InstallUserPluginsRequest&, const InstallUserPluginsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallUserPluginsAsyncHandler;
			typedef Outcome<Error, Model::InterruptElasticsearchTaskResult> InterruptElasticsearchTaskOutcome;
			typedef std::future<InterruptElasticsearchTaskOutcome> InterruptElasticsearchTaskOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::InterruptElasticsearchTaskRequest&, const InterruptElasticsearchTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InterruptElasticsearchTaskAsyncHandler;
			typedef Outcome<Error, Model::InterruptLogstashTaskResult> InterruptLogstashTaskOutcome;
			typedef std::future<InterruptLogstashTaskOutcome> InterruptLogstashTaskOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::InterruptLogstashTaskRequest&, const InterruptLogstashTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InterruptLogstashTaskAsyncHandler;
			typedef Outcome<Error, Model::ListAllNodeResult> ListAllNodeOutcome;
			typedef std::future<ListAllNodeOutcome> ListAllNodeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListAllNodeRequest&, const ListAllNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllNodeAsyncHandler;
			typedef Outcome<Error, Model::ListAlternativeSnapshotReposResult> ListAlternativeSnapshotReposOutcome;
			typedef std::future<ListAlternativeSnapshotReposOutcome> ListAlternativeSnapshotReposOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListAlternativeSnapshotReposRequest&, const ListAlternativeSnapshotReposOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlternativeSnapshotReposAsyncHandler;
			typedef Outcome<Error, Model::ListConnectedClustersResult> ListConnectedClustersOutcome;
			typedef std::future<ListConnectedClustersOutcome> ListConnectedClustersOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListConnectedClustersRequest&, const ListConnectedClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConnectedClustersAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceResult> ListInstanceOutcome;
			typedef std::future<ListInstanceOutcome> ListInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListInstanceRequest&, const ListInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListKibanaPluginsResult> ListKibanaPluginsOutcome;
			typedef std::future<ListKibanaPluginsOutcome> ListKibanaPluginsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListKibanaPluginsRequest&, const ListKibanaPluginsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListKibanaPluginsAsyncHandler;
			typedef Outcome<Error, Model::ListLogstashResult> ListLogstashOutcome;
			typedef std::future<ListLogstashOutcome> ListLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListLogstashRequest&, const ListLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogstashAsyncHandler;
			typedef Outcome<Error, Model::ListLogstashLogResult> ListLogstashLogOutcome;
			typedef std::future<ListLogstashLogOutcome> ListLogstashLogOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListLogstashLogRequest&, const ListLogstashLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogstashLogAsyncHandler;
			typedef Outcome<Error, Model::ListLogstashPluginsResult> ListLogstashPluginsOutcome;
			typedef std::future<ListLogstashPluginsOutcome> ListLogstashPluginsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListLogstashPluginsRequest&, const ListLogstashPluginsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogstashPluginsAsyncHandler;
			typedef Outcome<Error, Model::ListPluginsResult> ListPluginsOutcome;
			typedef std::future<ListPluginsOutcome> ListPluginsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListPluginsRequest&, const ListPluginsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPluginsAsyncHandler;
			typedef Outcome<Error, Model::ListSearchLogResult> ListSearchLogOutcome;
			typedef std::future<ListSearchLogOutcome> ListSearchLogOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListSearchLogRequest&, const ListSearchLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSearchLogAsyncHandler;
			typedef Outcome<Error, Model::ListSnapshotReposByInstanceIdResult> ListSnapshotReposByInstanceIdOutcome;
			typedef std::future<ListSnapshotReposByInstanceIdOutcome> ListSnapshotReposByInstanceIdOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListSnapshotReposByInstanceIdRequest&, const ListSnapshotReposByInstanceIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSnapshotReposByInstanceIdAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::OpenHttpsResult> OpenHttpsOutcome;
			typedef std::future<OpenHttpsOutcome> OpenHttpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::OpenHttpsRequest&, const OpenHttpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenHttpsAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewLogstashResult> RenewLogstashOutcome;
			typedef std::future<RenewLogstashOutcome> RenewLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RenewLogstashRequest&, const RenewLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewLogstashAsyncHandler;
			typedef Outcome<Error, Model::RestartInstanceResult> RestartInstanceOutcome;
			typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RestartInstanceRequest&, const RestartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
			typedef Outcome<Error, Model::RestartLogstashResult> RestartLogstashOutcome;
			typedef std::future<RestartLogstashOutcome> RestartLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RestartLogstashRequest&, const RestartLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartLogstashAsyncHandler;
			typedef Outcome<Error, Model::ResumeElasticsearchTaskResult> ResumeElasticsearchTaskOutcome;
			typedef std::future<ResumeElasticsearchTaskOutcome> ResumeElasticsearchTaskOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ResumeElasticsearchTaskRequest&, const ResumeElasticsearchTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeElasticsearchTaskAsyncHandler;
			typedef Outcome<Error, Model::ResumeLogstashTaskResult> ResumeLogstashTaskOutcome;
			typedef std::future<ResumeLogstashTaskOutcome> ResumeLogstashTaskOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ResumeLogstashTaskRequest&, const ResumeLogstashTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeLogstashTaskAsyncHandler;
			typedef Outcome<Error, Model::RollbackInstanceResult> RollbackInstanceOutcome;
			typedef std::future<RollbackInstanceOutcome> RollbackInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RollbackInstanceRequest&, const RollbackInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackInstanceAsyncHandler;
			typedef Outcome<Error, Model::ShrinkNodeResult> ShrinkNodeOutcome;
			typedef std::future<ShrinkNodeOutcome> ShrinkNodeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ShrinkNodeRequest&, const ShrinkNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShrinkNodeAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TransferNodeResult> TransferNodeOutcome;
			typedef std::future<TransferNodeOutcome> TransferNodeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::TransferNodeRequest&, const TransferNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferNodeAsyncHandler;
			typedef Outcome<Error, Model::TriggerNetworkResult> TriggerNetworkOutcome;
			typedef std::future<TriggerNetworkOutcome> TriggerNetworkOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::TriggerNetworkRequest&, const TriggerNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerNetworkAsyncHandler;
			typedef Outcome<Error, Model::UninstallKibanaPluginResult> UninstallKibanaPluginOutcome;
			typedef std::future<UninstallKibanaPluginOutcome> UninstallKibanaPluginOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UninstallKibanaPluginRequest&, const UninstallKibanaPluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallKibanaPluginAsyncHandler;
			typedef Outcome<Error, Model::UninstallLogstashPluginResult> UninstallLogstashPluginOutcome;
			typedef std::future<UninstallLogstashPluginOutcome> UninstallLogstashPluginOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UninstallLogstashPluginRequest&, const UninstallLogstashPluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallLogstashPluginAsyncHandler;
			typedef Outcome<Error, Model::UninstallPluginResult> UninstallPluginOutcome;
			typedef std::future<UninstallPluginOutcome> UninstallPluginOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UninstallPluginRequest&, const UninstallPluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallPluginAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAdminPasswordResult> UpdateAdminPasswordOutcome;
			typedef std::future<UpdateAdminPasswordOutcome> UpdateAdminPasswordOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateAdminPasswordRequest&, const UpdateAdminPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAdminPasswordAsyncHandler;
			typedef Outcome<Error, Model::UpdateAdvancedSettingResult> UpdateAdvancedSettingOutcome;
			typedef std::future<UpdateAdvancedSettingOutcome> UpdateAdvancedSettingOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateAdvancedSettingRequest&, const UpdateAdvancedSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAdvancedSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateAliwsDictResult> UpdateAliwsDictOutcome;
			typedef std::future<UpdateAliwsDictOutcome> UpdateAliwsDictOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateAliwsDictRequest&, const UpdateAliwsDictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAliwsDictAsyncHandler;
			typedef Outcome<Error, Model::UpdateBlackIpsResult> UpdateBlackIpsOutcome;
			typedef std::future<UpdateBlackIpsOutcome> UpdateBlackIpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateBlackIpsRequest&, const UpdateBlackIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBlackIpsAsyncHandler;
			typedef Outcome<Error, Model::UpdateDescriptionResult> UpdateDescriptionOutcome;
			typedef std::future<UpdateDescriptionOutcome> UpdateDescriptionOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateDescriptionRequest&, const UpdateDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateDictResult> UpdateDictOutcome;
			typedef std::future<UpdateDictOutcome> UpdateDictOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateDictRequest&, const UpdateDictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDictAsyncHandler;
			typedef Outcome<Error, Model::UpdateHotIkDictsResult> UpdateHotIkDictsOutcome;
			typedef std::future<UpdateHotIkDictsOutcome> UpdateHotIkDictsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateHotIkDictsRequest&, const UpdateHotIkDictsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHotIkDictsAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceResult> UpdateInstanceOutcome;
			typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateInstanceRequest&, const UpdateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceChargeTypeResult> UpdateInstanceChargeTypeOutcome;
			typedef std::future<UpdateInstanceChargeTypeOutcome> UpdateInstanceChargeTypeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateInstanceChargeTypeRequest&, const UpdateInstanceChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceSettingsResult> UpdateInstanceSettingsOutcome;
			typedef std::future<UpdateInstanceSettingsOutcome> UpdateInstanceSettingsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateInstanceSettingsRequest&, const UpdateInstanceSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceSettingsAsyncHandler;
			typedef Outcome<Error, Model::UpdateKibanaSettingsResult> UpdateKibanaSettingsOutcome;
			typedef std::future<UpdateKibanaSettingsOutcome> UpdateKibanaSettingsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateKibanaSettingsRequest&, const UpdateKibanaSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKibanaSettingsAsyncHandler;
			typedef Outcome<Error, Model::UpdateKibanaWhiteIpsResult> UpdateKibanaWhiteIpsOutcome;
			typedef std::future<UpdateKibanaWhiteIpsOutcome> UpdateKibanaWhiteIpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateKibanaWhiteIpsRequest&, const UpdateKibanaWhiteIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKibanaWhiteIpsAsyncHandler;
			typedef Outcome<Error, Model::UpdateLogstashResult> UpdateLogstashOutcome;
			typedef std::future<UpdateLogstashOutcome> UpdateLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateLogstashRequest&, const UpdateLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLogstashAsyncHandler;
			typedef Outcome<Error, Model::UpdateLogstashChargeTypeResult> UpdateLogstashChargeTypeOutcome;
			typedef std::future<UpdateLogstashChargeTypeOutcome> UpdateLogstashChargeTypeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateLogstashChargeTypeRequest&, const UpdateLogstashChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLogstashChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::UpdateLogstashDescriptionResult> UpdateLogstashDescriptionOutcome;
			typedef std::future<UpdateLogstashDescriptionOutcome> UpdateLogstashDescriptionOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateLogstashDescriptionRequest&, const UpdateLogstashDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLogstashDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateLogstashSettingsResult> UpdateLogstashSettingsOutcome;
			typedef std::future<UpdateLogstashSettingsOutcome> UpdateLogstashSettingsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateLogstashSettingsRequest&, const UpdateLogstashSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLogstashSettingsAsyncHandler;
			typedef Outcome<Error, Model::UpdatePipelineManagementConfigResult> UpdatePipelineManagementConfigOutcome;
			typedef std::future<UpdatePipelineManagementConfigOutcome> UpdatePipelineManagementConfigOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdatePipelineManagementConfigRequest&, const UpdatePipelineManagementConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePipelineManagementConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdatePipelinesResult> UpdatePipelinesOutcome;
			typedef std::future<UpdatePipelinesOutcome> UpdatePipelinesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdatePipelinesRequest&, const UpdatePipelinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePipelinesAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrivateNetworkWhiteIpsResult> UpdatePrivateNetworkWhiteIpsOutcome;
			typedef std::future<UpdatePrivateNetworkWhiteIpsOutcome> UpdatePrivateNetworkWhiteIpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdatePrivateNetworkWhiteIpsRequest&, const UpdatePrivateNetworkWhiteIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrivateNetworkWhiteIpsAsyncHandler;
			typedef Outcome<Error, Model::UpdatePublicNetworkResult> UpdatePublicNetworkOutcome;
			typedef std::future<UpdatePublicNetworkOutcome> UpdatePublicNetworkOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdatePublicNetworkRequest&, const UpdatePublicNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePublicNetworkAsyncHandler;
			typedef Outcome<Error, Model::UpdatePublicWhiteIpsResult> UpdatePublicWhiteIpsOutcome;
			typedef std::future<UpdatePublicWhiteIpsOutcome> UpdatePublicWhiteIpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdatePublicWhiteIpsRequest&, const UpdatePublicWhiteIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePublicWhiteIpsAsyncHandler;
			typedef Outcome<Error, Model::UpdateSnapshotSettingResult> UpdateSnapshotSettingOutcome;
			typedef std::future<UpdateSnapshotSettingOutcome> UpdateSnapshotSettingOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateSnapshotSettingRequest&, const UpdateSnapshotSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSnapshotSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateSynonymsDictsResult> UpdateSynonymsDictsOutcome;
			typedef std::future<UpdateSynonymsDictsOutcome> UpdateSynonymsDictsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateSynonymsDictsRequest&, const UpdateSynonymsDictsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSynonymsDictsAsyncHandler;
			typedef Outcome<Error, Model::UpdateWhiteIpsResult> UpdateWhiteIpsOutcome;
			typedef std::future<UpdateWhiteIpsOutcome> UpdateWhiteIpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateWhiteIpsRequest&, const UpdateWhiteIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWhiteIpsAsyncHandler;
			typedef Outcome<Error, Model::UpgradeEngineVersionResult> UpgradeEngineVersionOutcome;
			typedef std::future<UpgradeEngineVersionOutcome> UpgradeEngineVersionOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpgradeEngineVersionRequest&, const UpgradeEngineVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeEngineVersionAsyncHandler;
			typedef Outcome<Error, Model::ValidateShrinkNodesResult> ValidateShrinkNodesOutcome;
			typedef std::future<ValidateShrinkNodesOutcome> ValidateShrinkNodesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ValidateShrinkNodesRequest&, const ValidateShrinkNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateShrinkNodesAsyncHandler;
			typedef Outcome<Error, Model::ValidateTransferableNodesResult> ValidateTransferableNodesOutcome;
			typedef std::future<ValidateTransferableNodesOutcome> ValidateTransferableNodesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ValidateTransferableNodesRequest&, const ValidateTransferableNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateTransferableNodesAsyncHandler;

			ElasticsearchClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ElasticsearchClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ElasticsearchClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ElasticsearchClient();
			ActivateZonesOutcome activateZones(const Model::ActivateZonesRequest &request)const;
			void activateZonesAsync(const Model::ActivateZonesRequest& request, const ActivateZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateZonesOutcomeCallable activateZonesCallable(const Model::ActivateZonesRequest& request) const;
			AddConnectableClusterOutcome addConnectableCluster(const Model::AddConnectableClusterRequest &request)const;
			void addConnectableClusterAsync(const Model::AddConnectableClusterRequest& request, const AddConnectableClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddConnectableClusterOutcomeCallable addConnectableClusterCallable(const Model::AddConnectableClusterRequest& request) const;
			AddSnapshotRepoOutcome addSnapshotRepo(const Model::AddSnapshotRepoRequest &request)const;
			void addSnapshotRepoAsync(const Model::AddSnapshotRepoRequest& request, const AddSnapshotRepoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSnapshotRepoOutcomeCallable addSnapshotRepoCallable(const Model::AddSnapshotRepoRequest& request) const;
			CancelTaskOutcome cancelTask(const Model::CancelTaskRequest &request)const;
			void cancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelTaskOutcomeCallable cancelTaskCallable(const Model::CancelTaskRequest& request) const;
			CloseHttpsOutcome closeHttps(const Model::CloseHttpsRequest &request)const;
			void closeHttpsAsync(const Model::CloseHttpsRequest& request, const CloseHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseHttpsOutcomeCallable closeHttpsCallable(const Model::CloseHttpsRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateLogstashOutcome createLogstash(const Model::CreateLogstashRequest &request)const;
			void createLogstashAsync(const Model::CreateLogstashRequest& request, const CreateLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLogstashOutcomeCallable createLogstashCallable(const Model::CreateLogstashRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			DeactivateZonesOutcome deactivateZones(const Model::DeactivateZonesRequest &request)const;
			void deactivateZonesAsync(const Model::DeactivateZonesRequest& request, const DeactivateZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactivateZonesOutcomeCallable deactivateZonesCallable(const Model::DeactivateZonesRequest& request) const;
			DeleteConnectedClusterOutcome deleteConnectedCluster(const Model::DeleteConnectedClusterRequest &request)const;
			void deleteConnectedClusterAsync(const Model::DeleteConnectedClusterRequest& request, const DeleteConnectedClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConnectedClusterOutcomeCallable deleteConnectedClusterCallable(const Model::DeleteConnectedClusterRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteLogstashOutcome deleteLogstash(const Model::DeleteLogstashRequest &request)const;
			void deleteLogstashAsync(const Model::DeleteLogstashRequest& request, const DeleteLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLogstashOutcomeCallable deleteLogstashCallable(const Model::DeleteLogstashRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			DeleteSnapshotRepoOutcome deleteSnapshotRepo(const Model::DeleteSnapshotRepoRequest &request)const;
			void deleteSnapshotRepoAsync(const Model::DeleteSnapshotRepoRequest& request, const DeleteSnapshotRepoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotRepoOutcomeCallable deleteSnapshotRepoCallable(const Model::DeleteSnapshotRepoRequest& request) const;
			DescribeConnectableClustersOutcome describeConnectableClusters(const Model::DescribeConnectableClustersRequest &request)const;
			void describeConnectableClustersAsync(const Model::DescribeConnectableClustersRequest& request, const DescribeConnectableClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConnectableClustersOutcomeCallable describeConnectableClustersCallable(const Model::DescribeConnectableClustersRequest& request) const;
			DescribeElasticsearchHealthOutcome describeElasticsearchHealth(const Model::DescribeElasticsearchHealthRequest &request)const;
			void describeElasticsearchHealthAsync(const Model::DescribeElasticsearchHealthRequest& request, const DescribeElasticsearchHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElasticsearchHealthOutcomeCallable describeElasticsearchHealthCallable(const Model::DescribeElasticsearchHealthRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeKibanaSettingsOutcome describeKibanaSettings(const Model::DescribeKibanaSettingsRequest &request)const;
			void describeKibanaSettingsAsync(const Model::DescribeKibanaSettingsRequest& request, const DescribeKibanaSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKibanaSettingsOutcomeCallable describeKibanaSettingsCallable(const Model::DescribeKibanaSettingsRequest& request) const;
			DescribeLogstashOutcome describeLogstash(const Model::DescribeLogstashRequest &request)const;
			void describeLogstashAsync(const Model::DescribeLogstashRequest& request, const DescribeLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogstashOutcomeCallable describeLogstashCallable(const Model::DescribeLogstashRequest& request) const;
			DescribePipelineManagementConfigOutcome describePipelineManagementConfig(const Model::DescribePipelineManagementConfigRequest &request)const;
			void describePipelineManagementConfigAsync(const Model::DescribePipelineManagementConfigRequest& request, const DescribePipelineManagementConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePipelineManagementConfigOutcomeCallable describePipelineManagementConfigCallable(const Model::DescribePipelineManagementConfigRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GetRegionConfigurationOutcome getRegionConfiguration(const Model::GetRegionConfigurationRequest &request)const;
			void getRegionConfigurationAsync(const Model::GetRegionConfigurationRequest& request, const GetRegionConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRegionConfigurationOutcomeCallable getRegionConfigurationCallable(const Model::GetRegionConfigurationRequest& request) const;
			GetSuggestShrinkableNodesOutcome getSuggestShrinkableNodes(const Model::GetSuggestShrinkableNodesRequest &request)const;
			void getSuggestShrinkableNodesAsync(const Model::GetSuggestShrinkableNodesRequest& request, const GetSuggestShrinkableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSuggestShrinkableNodesOutcomeCallable getSuggestShrinkableNodesCallable(const Model::GetSuggestShrinkableNodesRequest& request) const;
			GetTransferableNodesOutcome getTransferableNodes(const Model::GetTransferableNodesRequest &request)const;
			void getTransferableNodesAsync(const Model::GetTransferableNodesRequest& request, const GetTransferableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTransferableNodesOutcomeCallable getTransferableNodesCallable(const Model::GetTransferableNodesRequest& request) const;
			InstallKibanaSystemPluginOutcome installKibanaSystemPlugin(const Model::InstallKibanaSystemPluginRequest &request)const;
			void installKibanaSystemPluginAsync(const Model::InstallKibanaSystemPluginRequest& request, const InstallKibanaSystemPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallKibanaSystemPluginOutcomeCallable installKibanaSystemPluginCallable(const Model::InstallKibanaSystemPluginRequest& request) const;
			InstallLogstashSystemPluginOutcome installLogstashSystemPlugin(const Model::InstallLogstashSystemPluginRequest &request)const;
			void installLogstashSystemPluginAsync(const Model::InstallLogstashSystemPluginRequest& request, const InstallLogstashSystemPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallLogstashSystemPluginOutcomeCallable installLogstashSystemPluginCallable(const Model::InstallLogstashSystemPluginRequest& request) const;
			InstallSystemPluginOutcome installSystemPlugin(const Model::InstallSystemPluginRequest &request)const;
			void installSystemPluginAsync(const Model::InstallSystemPluginRequest& request, const InstallSystemPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallSystemPluginOutcomeCallable installSystemPluginCallable(const Model::InstallSystemPluginRequest& request) const;
			InstallUserPluginsOutcome installUserPlugins(const Model::InstallUserPluginsRequest &request)const;
			void installUserPluginsAsync(const Model::InstallUserPluginsRequest& request, const InstallUserPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallUserPluginsOutcomeCallable installUserPluginsCallable(const Model::InstallUserPluginsRequest& request) const;
			InterruptElasticsearchTaskOutcome interruptElasticsearchTask(const Model::InterruptElasticsearchTaskRequest &request)const;
			void interruptElasticsearchTaskAsync(const Model::InterruptElasticsearchTaskRequest& request, const InterruptElasticsearchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InterruptElasticsearchTaskOutcomeCallable interruptElasticsearchTaskCallable(const Model::InterruptElasticsearchTaskRequest& request) const;
			InterruptLogstashTaskOutcome interruptLogstashTask(const Model::InterruptLogstashTaskRequest &request)const;
			void interruptLogstashTaskAsync(const Model::InterruptLogstashTaskRequest& request, const InterruptLogstashTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InterruptLogstashTaskOutcomeCallable interruptLogstashTaskCallable(const Model::InterruptLogstashTaskRequest& request) const;
			ListAllNodeOutcome listAllNode(const Model::ListAllNodeRequest &request)const;
			void listAllNodeAsync(const Model::ListAllNodeRequest& request, const ListAllNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllNodeOutcomeCallable listAllNodeCallable(const Model::ListAllNodeRequest& request) const;
			ListAlternativeSnapshotReposOutcome listAlternativeSnapshotRepos(const Model::ListAlternativeSnapshotReposRequest &request)const;
			void listAlternativeSnapshotReposAsync(const Model::ListAlternativeSnapshotReposRequest& request, const ListAlternativeSnapshotReposAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlternativeSnapshotReposOutcomeCallable listAlternativeSnapshotReposCallable(const Model::ListAlternativeSnapshotReposRequest& request) const;
			ListConnectedClustersOutcome listConnectedClusters(const Model::ListConnectedClustersRequest &request)const;
			void listConnectedClustersAsync(const Model::ListConnectedClustersRequest& request, const ListConnectedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConnectedClustersOutcomeCallable listConnectedClustersCallable(const Model::ListConnectedClustersRequest& request) const;
			ListInstanceOutcome listInstance(const Model::ListInstanceRequest &request)const;
			void listInstanceAsync(const Model::ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceOutcomeCallable listInstanceCallable(const Model::ListInstanceRequest& request) const;
			ListKibanaPluginsOutcome listKibanaPlugins(const Model::ListKibanaPluginsRequest &request)const;
			void listKibanaPluginsAsync(const Model::ListKibanaPluginsRequest& request, const ListKibanaPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListKibanaPluginsOutcomeCallable listKibanaPluginsCallable(const Model::ListKibanaPluginsRequest& request) const;
			ListLogstashOutcome listLogstash(const Model::ListLogstashRequest &request)const;
			void listLogstashAsync(const Model::ListLogstashRequest& request, const ListLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogstashOutcomeCallable listLogstashCallable(const Model::ListLogstashRequest& request) const;
			ListLogstashLogOutcome listLogstashLog(const Model::ListLogstashLogRequest &request)const;
			void listLogstashLogAsync(const Model::ListLogstashLogRequest& request, const ListLogstashLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogstashLogOutcomeCallable listLogstashLogCallable(const Model::ListLogstashLogRequest& request) const;
			ListLogstashPluginsOutcome listLogstashPlugins(const Model::ListLogstashPluginsRequest &request)const;
			void listLogstashPluginsAsync(const Model::ListLogstashPluginsRequest& request, const ListLogstashPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogstashPluginsOutcomeCallable listLogstashPluginsCallable(const Model::ListLogstashPluginsRequest& request) const;
			ListPluginsOutcome listPlugins(const Model::ListPluginsRequest &request)const;
			void listPluginsAsync(const Model::ListPluginsRequest& request, const ListPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPluginsOutcomeCallable listPluginsCallable(const Model::ListPluginsRequest& request) const;
			ListSearchLogOutcome listSearchLog(const Model::ListSearchLogRequest &request)const;
			void listSearchLogAsync(const Model::ListSearchLogRequest& request, const ListSearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSearchLogOutcomeCallable listSearchLogCallable(const Model::ListSearchLogRequest& request) const;
			ListSnapshotReposByInstanceIdOutcome listSnapshotReposByInstanceId(const Model::ListSnapshotReposByInstanceIdRequest &request)const;
			void listSnapshotReposByInstanceIdAsync(const Model::ListSnapshotReposByInstanceIdRequest& request, const ListSnapshotReposByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSnapshotReposByInstanceIdOutcomeCallable listSnapshotReposByInstanceIdCallable(const Model::ListSnapshotReposByInstanceIdRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			OpenHttpsOutcome openHttps(const Model::OpenHttpsRequest &request)const;
			void openHttpsAsync(const Model::OpenHttpsRequest& request, const OpenHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenHttpsOutcomeCallable openHttpsCallable(const Model::OpenHttpsRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			RenewLogstashOutcome renewLogstash(const Model::RenewLogstashRequest &request)const;
			void renewLogstashAsync(const Model::RenewLogstashRequest& request, const RenewLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewLogstashOutcomeCallable renewLogstashCallable(const Model::RenewLogstashRequest& request) const;
			RestartInstanceOutcome restartInstance(const Model::RestartInstanceRequest &request)const;
			void restartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartInstanceOutcomeCallable restartInstanceCallable(const Model::RestartInstanceRequest& request) const;
			RestartLogstashOutcome restartLogstash(const Model::RestartLogstashRequest &request)const;
			void restartLogstashAsync(const Model::RestartLogstashRequest& request, const RestartLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartLogstashOutcomeCallable restartLogstashCallable(const Model::RestartLogstashRequest& request) const;
			ResumeElasticsearchTaskOutcome resumeElasticsearchTask(const Model::ResumeElasticsearchTaskRequest &request)const;
			void resumeElasticsearchTaskAsync(const Model::ResumeElasticsearchTaskRequest& request, const ResumeElasticsearchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeElasticsearchTaskOutcomeCallable resumeElasticsearchTaskCallable(const Model::ResumeElasticsearchTaskRequest& request) const;
			ResumeLogstashTaskOutcome resumeLogstashTask(const Model::ResumeLogstashTaskRequest &request)const;
			void resumeLogstashTaskAsync(const Model::ResumeLogstashTaskRequest& request, const ResumeLogstashTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeLogstashTaskOutcomeCallable resumeLogstashTaskCallable(const Model::ResumeLogstashTaskRequest& request) const;
			RollbackInstanceOutcome rollbackInstance(const Model::RollbackInstanceRequest &request)const;
			void rollbackInstanceAsync(const Model::RollbackInstanceRequest& request, const RollbackInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackInstanceOutcomeCallable rollbackInstanceCallable(const Model::RollbackInstanceRequest& request) const;
			ShrinkNodeOutcome shrinkNode(const Model::ShrinkNodeRequest &request)const;
			void shrinkNodeAsync(const Model::ShrinkNodeRequest& request, const ShrinkNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShrinkNodeOutcomeCallable shrinkNodeCallable(const Model::ShrinkNodeRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TransferNodeOutcome transferNode(const Model::TransferNodeRequest &request)const;
			void transferNodeAsync(const Model::TransferNodeRequest& request, const TransferNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferNodeOutcomeCallable transferNodeCallable(const Model::TransferNodeRequest& request) const;
			TriggerNetworkOutcome triggerNetwork(const Model::TriggerNetworkRequest &request)const;
			void triggerNetworkAsync(const Model::TriggerNetworkRequest& request, const TriggerNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerNetworkOutcomeCallable triggerNetworkCallable(const Model::TriggerNetworkRequest& request) const;
			UninstallKibanaPluginOutcome uninstallKibanaPlugin(const Model::UninstallKibanaPluginRequest &request)const;
			void uninstallKibanaPluginAsync(const Model::UninstallKibanaPluginRequest& request, const UninstallKibanaPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallKibanaPluginOutcomeCallable uninstallKibanaPluginCallable(const Model::UninstallKibanaPluginRequest& request) const;
			UninstallLogstashPluginOutcome uninstallLogstashPlugin(const Model::UninstallLogstashPluginRequest &request)const;
			void uninstallLogstashPluginAsync(const Model::UninstallLogstashPluginRequest& request, const UninstallLogstashPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallLogstashPluginOutcomeCallable uninstallLogstashPluginCallable(const Model::UninstallLogstashPluginRequest& request) const;
			UninstallPluginOutcome uninstallPlugin(const Model::UninstallPluginRequest &request)const;
			void uninstallPluginAsync(const Model::UninstallPluginRequest& request, const UninstallPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallPluginOutcomeCallable uninstallPluginCallable(const Model::UninstallPluginRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAdminPasswordOutcome updateAdminPassword(const Model::UpdateAdminPasswordRequest &request)const;
			void updateAdminPasswordAsync(const Model::UpdateAdminPasswordRequest& request, const UpdateAdminPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAdminPasswordOutcomeCallable updateAdminPasswordCallable(const Model::UpdateAdminPasswordRequest& request) const;
			UpdateAdvancedSettingOutcome updateAdvancedSetting(const Model::UpdateAdvancedSettingRequest &request)const;
			void updateAdvancedSettingAsync(const Model::UpdateAdvancedSettingRequest& request, const UpdateAdvancedSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAdvancedSettingOutcomeCallable updateAdvancedSettingCallable(const Model::UpdateAdvancedSettingRequest& request) const;
			UpdateAliwsDictOutcome updateAliwsDict(const Model::UpdateAliwsDictRequest &request)const;
			void updateAliwsDictAsync(const Model::UpdateAliwsDictRequest& request, const UpdateAliwsDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAliwsDictOutcomeCallable updateAliwsDictCallable(const Model::UpdateAliwsDictRequest& request) const;
			UpdateBlackIpsOutcome updateBlackIps(const Model::UpdateBlackIpsRequest &request)const;
			void updateBlackIpsAsync(const Model::UpdateBlackIpsRequest& request, const UpdateBlackIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBlackIpsOutcomeCallable updateBlackIpsCallable(const Model::UpdateBlackIpsRequest& request) const;
			UpdateDescriptionOutcome updateDescription(const Model::UpdateDescriptionRequest &request)const;
			void updateDescriptionAsync(const Model::UpdateDescriptionRequest& request, const UpdateDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDescriptionOutcomeCallable updateDescriptionCallable(const Model::UpdateDescriptionRequest& request) const;
			UpdateDictOutcome updateDict(const Model::UpdateDictRequest &request)const;
			void updateDictAsync(const Model::UpdateDictRequest& request, const UpdateDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDictOutcomeCallable updateDictCallable(const Model::UpdateDictRequest& request) const;
			UpdateHotIkDictsOutcome updateHotIkDicts(const Model::UpdateHotIkDictsRequest &request)const;
			void updateHotIkDictsAsync(const Model::UpdateHotIkDictsRequest& request, const UpdateHotIkDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHotIkDictsOutcomeCallable updateHotIkDictsCallable(const Model::UpdateHotIkDictsRequest& request) const;
			UpdateInstanceOutcome updateInstance(const Model::UpdateInstanceRequest &request)const;
			void updateInstanceAsync(const Model::UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceOutcomeCallable updateInstanceCallable(const Model::UpdateInstanceRequest& request) const;
			UpdateInstanceChargeTypeOutcome updateInstanceChargeType(const Model::UpdateInstanceChargeTypeRequest &request)const;
			void updateInstanceChargeTypeAsync(const Model::UpdateInstanceChargeTypeRequest& request, const UpdateInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceChargeTypeOutcomeCallable updateInstanceChargeTypeCallable(const Model::UpdateInstanceChargeTypeRequest& request) const;
			UpdateInstanceSettingsOutcome updateInstanceSettings(const Model::UpdateInstanceSettingsRequest &request)const;
			void updateInstanceSettingsAsync(const Model::UpdateInstanceSettingsRequest& request, const UpdateInstanceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceSettingsOutcomeCallable updateInstanceSettingsCallable(const Model::UpdateInstanceSettingsRequest& request) const;
			UpdateKibanaSettingsOutcome updateKibanaSettings(const Model::UpdateKibanaSettingsRequest &request)const;
			void updateKibanaSettingsAsync(const Model::UpdateKibanaSettingsRequest& request, const UpdateKibanaSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateKibanaSettingsOutcomeCallable updateKibanaSettingsCallable(const Model::UpdateKibanaSettingsRequest& request) const;
			UpdateKibanaWhiteIpsOutcome updateKibanaWhiteIps(const Model::UpdateKibanaWhiteIpsRequest &request)const;
			void updateKibanaWhiteIpsAsync(const Model::UpdateKibanaWhiteIpsRequest& request, const UpdateKibanaWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateKibanaWhiteIpsOutcomeCallable updateKibanaWhiteIpsCallable(const Model::UpdateKibanaWhiteIpsRequest& request) const;
			UpdateLogstashOutcome updateLogstash(const Model::UpdateLogstashRequest &request)const;
			void updateLogstashAsync(const Model::UpdateLogstashRequest& request, const UpdateLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLogstashOutcomeCallable updateLogstashCallable(const Model::UpdateLogstashRequest& request) const;
			UpdateLogstashChargeTypeOutcome updateLogstashChargeType(const Model::UpdateLogstashChargeTypeRequest &request)const;
			void updateLogstashChargeTypeAsync(const Model::UpdateLogstashChargeTypeRequest& request, const UpdateLogstashChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLogstashChargeTypeOutcomeCallable updateLogstashChargeTypeCallable(const Model::UpdateLogstashChargeTypeRequest& request) const;
			UpdateLogstashDescriptionOutcome updateLogstashDescription(const Model::UpdateLogstashDescriptionRequest &request)const;
			void updateLogstashDescriptionAsync(const Model::UpdateLogstashDescriptionRequest& request, const UpdateLogstashDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLogstashDescriptionOutcomeCallable updateLogstashDescriptionCallable(const Model::UpdateLogstashDescriptionRequest& request) const;
			UpdateLogstashSettingsOutcome updateLogstashSettings(const Model::UpdateLogstashSettingsRequest &request)const;
			void updateLogstashSettingsAsync(const Model::UpdateLogstashSettingsRequest& request, const UpdateLogstashSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLogstashSettingsOutcomeCallable updateLogstashSettingsCallable(const Model::UpdateLogstashSettingsRequest& request) const;
			UpdatePipelineManagementConfigOutcome updatePipelineManagementConfig(const Model::UpdatePipelineManagementConfigRequest &request)const;
			void updatePipelineManagementConfigAsync(const Model::UpdatePipelineManagementConfigRequest& request, const UpdatePipelineManagementConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePipelineManagementConfigOutcomeCallable updatePipelineManagementConfigCallable(const Model::UpdatePipelineManagementConfigRequest& request) const;
			UpdatePipelinesOutcome updatePipelines(const Model::UpdatePipelinesRequest &request)const;
			void updatePipelinesAsync(const Model::UpdatePipelinesRequest& request, const UpdatePipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePipelinesOutcomeCallable updatePipelinesCallable(const Model::UpdatePipelinesRequest& request) const;
			UpdatePrivateNetworkWhiteIpsOutcome updatePrivateNetworkWhiteIps(const Model::UpdatePrivateNetworkWhiteIpsRequest &request)const;
			void updatePrivateNetworkWhiteIpsAsync(const Model::UpdatePrivateNetworkWhiteIpsRequest& request, const UpdatePrivateNetworkWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrivateNetworkWhiteIpsOutcomeCallable updatePrivateNetworkWhiteIpsCallable(const Model::UpdatePrivateNetworkWhiteIpsRequest& request) const;
			UpdatePublicNetworkOutcome updatePublicNetwork(const Model::UpdatePublicNetworkRequest &request)const;
			void updatePublicNetworkAsync(const Model::UpdatePublicNetworkRequest& request, const UpdatePublicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePublicNetworkOutcomeCallable updatePublicNetworkCallable(const Model::UpdatePublicNetworkRequest& request) const;
			UpdatePublicWhiteIpsOutcome updatePublicWhiteIps(const Model::UpdatePublicWhiteIpsRequest &request)const;
			void updatePublicWhiteIpsAsync(const Model::UpdatePublicWhiteIpsRequest& request, const UpdatePublicWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePublicWhiteIpsOutcomeCallable updatePublicWhiteIpsCallable(const Model::UpdatePublicWhiteIpsRequest& request) const;
			UpdateSnapshotSettingOutcome updateSnapshotSetting(const Model::UpdateSnapshotSettingRequest &request)const;
			void updateSnapshotSettingAsync(const Model::UpdateSnapshotSettingRequest& request, const UpdateSnapshotSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSnapshotSettingOutcomeCallable updateSnapshotSettingCallable(const Model::UpdateSnapshotSettingRequest& request) const;
			UpdateSynonymsDictsOutcome updateSynonymsDicts(const Model::UpdateSynonymsDictsRequest &request)const;
			void updateSynonymsDictsAsync(const Model::UpdateSynonymsDictsRequest& request, const UpdateSynonymsDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSynonymsDictsOutcomeCallable updateSynonymsDictsCallable(const Model::UpdateSynonymsDictsRequest& request) const;
			UpdateWhiteIpsOutcome updateWhiteIps(const Model::UpdateWhiteIpsRequest &request)const;
			void updateWhiteIpsAsync(const Model::UpdateWhiteIpsRequest& request, const UpdateWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWhiteIpsOutcomeCallable updateWhiteIpsCallable(const Model::UpdateWhiteIpsRequest& request) const;
			UpgradeEngineVersionOutcome upgradeEngineVersion(const Model::UpgradeEngineVersionRequest &request)const;
			void upgradeEngineVersionAsync(const Model::UpgradeEngineVersionRequest& request, const UpgradeEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeEngineVersionOutcomeCallable upgradeEngineVersionCallable(const Model::UpgradeEngineVersionRequest& request) const;
			ValidateShrinkNodesOutcome validateShrinkNodes(const Model::ValidateShrinkNodesRequest &request)const;
			void validateShrinkNodesAsync(const Model::ValidateShrinkNodesRequest& request, const ValidateShrinkNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateShrinkNodesOutcomeCallable validateShrinkNodesCallable(const Model::ValidateShrinkNodesRequest& request) const;
			ValidateTransferableNodesOutcome validateTransferableNodes(const Model::ValidateTransferableNodesRequest &request)const;
			void validateTransferableNodesAsync(const Model::ValidateTransferableNodesRequest& request, const ValidateTransferableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateTransferableNodesOutcomeCallable validateTransferableNodesCallable(const Model::ValidateTransferableNodesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ELASTICSEARCH_ELASTICSEARCHCLIENT_H_
