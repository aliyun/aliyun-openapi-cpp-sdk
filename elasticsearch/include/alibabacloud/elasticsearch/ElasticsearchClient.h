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
#include "model/CancelDeletionRequest.h"
#include "model/CancelDeletionResult.h"
#include "model/CancelLogstashDeletionRequest.h"
#include "model/CancelLogstashDeletionResult.h"
#include "model/CancelTaskRequest.h"
#include "model/CancelTaskResult.h"
#include "model/CapacityPlanRequest.h"
#include "model/CapacityPlanResult.h"
#include "model/CloseDiagnosisRequest.h"
#include "model/CloseDiagnosisResult.h"
#include "model/CloseHttpsRequest.h"
#include "model/CloseHttpsResult.h"
#include "model/CloseManagedIndexRequest.h"
#include "model/CloseManagedIndexResult.h"
#include "model/CreateCollectorRequest.h"
#include "model/CreateCollectorResult.h"
#include "model/CreateComponentIndexRequest.h"
#include "model/CreateComponentIndexResult.h"
#include "model/CreateDataStreamRequest.h"
#include "model/CreateDataStreamResult.h"
#include "model/CreateILMPolicyRequest.h"
#include "model/CreateILMPolicyResult.h"
#include "model/CreateIndexTemplateRequest.h"
#include "model/CreateIndexTemplateResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateLogstashRequest.h"
#include "model/CreateLogstashResult.h"
#include "model/CreatePipelinesRequest.h"
#include "model/CreatePipelinesResult.h"
#include "model/CreateSnapshotRequest.h"
#include "model/CreateSnapshotResult.h"
#include "model/CreateVpcEndpointRequest.h"
#include "model/CreateVpcEndpointResult.h"
#include "model/DeactivateZonesRequest.h"
#include "model/DeactivateZonesResult.h"
#include "model/DeleteCollectorRequest.h"
#include "model/DeleteCollectorResult.h"
#include "model/DeleteComponentIndexRequest.h"
#include "model/DeleteComponentIndexResult.h"
#include "model/DeleteConnectedClusterRequest.h"
#include "model/DeleteConnectedClusterResult.h"
#include "model/DeleteDataStreamRequest.h"
#include "model/DeleteDataStreamResult.h"
#include "model/DeleteDataTaskRequest.h"
#include "model/DeleteDataTaskResult.h"
#include "model/DeleteDeprecatedTemplateRequest.h"
#include "model/DeleteDeprecatedTemplateResult.h"
#include "model/DeleteILMPolicyRequest.h"
#include "model/DeleteILMPolicyResult.h"
#include "model/DeleteIndexTemplateRequest.h"
#include "model/DeleteIndexTemplateResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteLogstashRequest.h"
#include "model/DeleteLogstashResult.h"
#include "model/DeletePipelinesRequest.h"
#include "model/DeletePipelinesResult.h"
#include "model/DeleteSnapshotRepoRequest.h"
#include "model/DeleteSnapshotRepoResult.h"
#include "model/DeleteVpcEndpointRequest.h"
#include "model/DeleteVpcEndpointResult.h"
#include "model/DescribeAckOperatorRequest.h"
#include "model/DescribeAckOperatorResult.h"
#include "model/DescribeApmRequest.h"
#include "model/DescribeApmResult.h"
#include "model/DescribeCollectorRequest.h"
#include "model/DescribeCollectorResult.h"
#include "model/DescribeComponentIndexRequest.h"
#include "model/DescribeComponentIndexResult.h"
#include "model/DescribeConnectableClustersRequest.h"
#include "model/DescribeConnectableClustersResult.h"
#include "model/DescribeDeprecatedTemplateRequest.h"
#include "model/DescribeDeprecatedTemplateResult.h"
#include "model/DescribeDiagnoseReportRequest.h"
#include "model/DescribeDiagnoseReportResult.h"
#include "model/DescribeDiagnosisSettingsRequest.h"
#include "model/DescribeDiagnosisSettingsResult.h"
#include "model/DescribeDynamicSettingsRequest.h"
#include "model/DescribeDynamicSettingsResult.h"
#include "model/DescribeElasticsearchHealthRequest.h"
#include "model/DescribeElasticsearchHealthResult.h"
#include "model/DescribeILMPolicyRequest.h"
#include "model/DescribeILMPolicyResult.h"
#include "model/DescribeIndexTemplateRequest.h"
#include "model/DescribeIndexTemplateResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeKibanaSettingsRequest.h"
#include "model/DescribeKibanaSettingsResult.h"
#include "model/DescribeLogstashRequest.h"
#include "model/DescribeLogstashResult.h"
#include "model/DescribePipelineRequest.h"
#include "model/DescribePipelineResult.h"
#include "model/DescribePipelineManagementConfigRequest.h"
#include "model/DescribePipelineManagementConfigResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSnapshotSettingRequest.h"
#include "model/DescribeSnapshotSettingResult.h"
#include "model/DescribeTemplatesRequest.h"
#include "model/DescribeTemplatesResult.h"
#include "model/DescribeXpackMonitorConfigRequest.h"
#include "model/DescribeXpackMonitorConfigResult.h"
#include "model/DiagnoseInstanceRequest.h"
#include "model/DiagnoseInstanceResult.h"
#include "model/DisableKibanaPvlNetworkRequest.h"
#include "model/DisableKibanaPvlNetworkResult.h"
#include "model/EnableKibanaPvlNetworkRequest.h"
#include "model/EnableKibanaPvlNetworkResult.h"
#include "model/EstimatedLogstashRestartTimeRequest.h"
#include "model/EstimatedLogstashRestartTimeResult.h"
#include "model/EstimatedRestartTimeRequest.h"
#include "model/EstimatedRestartTimeResult.h"
#include "model/GetClusterDataInformationRequest.h"
#include "model/GetClusterDataInformationResult.h"
#include "model/GetElastictaskRequest.h"
#include "model/GetElastictaskResult.h"
#include "model/GetEmonGrafanaAlertsRequest.h"
#include "model/GetEmonGrafanaAlertsResult.h"
#include "model/GetEmonGrafanaDashboardsRequest.h"
#include "model/GetEmonGrafanaDashboardsResult.h"
#include "model/GetEmonMonitorDataRequest.h"
#include "model/GetEmonMonitorDataResult.h"
#include "model/GetOpenStoreUsageRequest.h"
#include "model/GetOpenStoreUsageResult.h"
#include "model/GetRegionConfigurationRequest.h"
#include "model/GetRegionConfigurationResult.h"
#include "model/GetRegionalInstanceConfigRequest.h"
#include "model/GetRegionalInstanceConfigResult.h"
#include "model/GetSuggestShrinkableNodesRequest.h"
#include "model/GetSuggestShrinkableNodesResult.h"
#include "model/GetTransferableNodesRequest.h"
#include "model/GetTransferableNodesResult.h"
#include "model/InitializeOperationRoleRequest.h"
#include "model/InitializeOperationRoleResult.h"
#include "model/InstallAckOperatorRequest.h"
#include "model/InstallAckOperatorResult.h"
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
#include "model/ListAckClustersRequest.h"
#include "model/ListAckClustersResult.h"
#include "model/ListAckNamespacesRequest.h"
#include "model/ListAckNamespacesResult.h"
#include "model/ListActionRecordsRequest.h"
#include "model/ListActionRecordsResult.h"
#include "model/ListAllNodeRequest.h"
#include "model/ListAllNodeResult.h"
#include "model/ListAlternativeSnapshotReposRequest.h"
#include "model/ListAlternativeSnapshotReposResult.h"
#include "model/ListApmRequest.h"
#include "model/ListApmResult.h"
#include "model/ListAvailableEsInstanceIdsRequest.h"
#include "model/ListAvailableEsInstanceIdsResult.h"
#include "model/ListCollectorsRequest.h"
#include "model/ListCollectorsResult.h"
#include "model/ListComponentIndicesRequest.h"
#include "model/ListComponentIndicesResult.h"
#include "model/ListConnectedClustersRequest.h"
#include "model/ListConnectedClustersResult.h"
#include "model/ListDataStreamsRequest.h"
#include "model/ListDataStreamsResult.h"
#include "model/ListDataTasksRequest.h"
#include "model/ListDataTasksResult.h"
#include "model/ListDefaultCollectorConfigurationsRequest.h"
#include "model/ListDefaultCollectorConfigurationsResult.h"
#include "model/ListDeprecatedTemplatesRequest.h"
#include "model/ListDeprecatedTemplatesResult.h"
#include "model/ListDiagnoseIndicesRequest.h"
#include "model/ListDiagnoseIndicesResult.h"
#include "model/ListDiagnoseReportRequest.h"
#include "model/ListDiagnoseReportResult.h"
#include "model/ListDiagnoseReportIdsRequest.h"
#include "model/ListDiagnoseReportIdsResult.h"
#include "model/ListDiagnosisItemsRequest.h"
#include "model/ListDiagnosisItemsResult.h"
#include "model/ListDictInformationRequest.h"
#include "model/ListDictInformationResult.h"
#include "model/ListDictsRequest.h"
#include "model/ListDictsResult.h"
#include "model/ListEcsInstancesRequest.h"
#include "model/ListEcsInstancesResult.h"
#include "model/ListExtendfilesRequest.h"
#include "model/ListExtendfilesResult.h"
#include "model/ListILMPoliciesRequest.h"
#include "model/ListILMPoliciesResult.h"
#include "model/ListIndexTemplatesRequest.h"
#include "model/ListIndexTemplatesResult.h"
#include "model/ListInstanceRequest.h"
#include "model/ListInstanceResult.h"
#include "model/ListInstanceHistoryEventsRequest.h"
#include "model/ListInstanceHistoryEventsResult.h"
#include "model/ListInstanceIndicesRequest.h"
#include "model/ListInstanceIndicesResult.h"
#include "model/ListKibanaPluginsRequest.h"
#include "model/ListKibanaPluginsResult.h"
#include "model/ListKibanaPvlNetworkRequest.h"
#include "model/ListKibanaPvlNetworkResult.h"
#include "model/ListLogstashRequest.h"
#include "model/ListLogstashResult.h"
#include "model/ListLogstashLogRequest.h"
#include "model/ListLogstashLogResult.h"
#include "model/ListLogstashPluginsRequest.h"
#include "model/ListLogstashPluginsResult.h"
#include "model/ListNodesRequest.h"
#include "model/ListNodesResult.h"
#include "model/ListPipelineRequest.h"
#include "model/ListPipelineResult.h"
#include "model/ListPipelineIdsRequest.h"
#include "model/ListPipelineIdsResult.h"
#include "model/ListPluginsRequest.h"
#include "model/ListPluginsResult.h"
#include "model/ListSearchLogRequest.h"
#include "model/ListSearchLogResult.h"
#include "model/ListShardRecoveriesRequest.h"
#include "model/ListShardRecoveriesResult.h"
#include "model/ListSnapshotReposByInstanceIdRequest.h"
#include "model/ListSnapshotReposByInstanceIdResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagsRequest.h"
#include "model/ListTagsResult.h"
#include "model/ListVpcEndpointsRequest.h"
#include "model/ListVpcEndpointsResult.h"
#include "model/MigrateToOtherZoneRequest.h"
#include "model/MigrateToOtherZoneResult.h"
#include "model/ModifyDeployMachineRequest.h"
#include "model/ModifyDeployMachineResult.h"
#include "model/ModifyElastictaskRequest.h"
#include "model/ModifyElastictaskResult.h"
#include "model/ModifyInstanceMaintainTimeRequest.h"
#include "model/ModifyInstanceMaintainTimeResult.h"
#include "model/ModifyWhiteIpsRequest.h"
#include "model/ModifyWhiteIpsResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/OpenDiagnosisRequest.h"
#include "model/OpenDiagnosisResult.h"
#include "model/OpenHttpsRequest.h"
#include "model/OpenHttpsResult.h"
#include "model/PostEmonTryAlarmRuleRequest.h"
#include "model/PostEmonTryAlarmRuleResult.h"
#include "model/RecommendTemplatesRequest.h"
#include "model/RecommendTemplatesResult.h"
#include "model/ReinstallCollectorRequest.h"
#include "model/ReinstallCollectorResult.h"
#include "model/RemoveApmRequest.h"
#include "model/RemoveApmResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/RenewLogstashRequest.h"
#include "model/RenewLogstashResult.h"
#include "model/RestartCollectorRequest.h"
#include "model/RestartCollectorResult.h"
#include "model/RestartInstanceRequest.h"
#include "model/RestartInstanceResult.h"
#include "model/RestartLogstashRequest.h"
#include "model/RestartLogstashResult.h"
#include "model/ResumeElasticsearchTaskRequest.h"
#include "model/ResumeElasticsearchTaskResult.h"
#include "model/ResumeLogstashTaskRequest.h"
#include "model/ResumeLogstashTaskResult.h"
#include "model/RolloverDataStreamRequest.h"
#include "model/RolloverDataStreamResult.h"
#include "model/RunPipelinesRequest.h"
#include "model/RunPipelinesResult.h"
#include "model/ShrinkNodeRequest.h"
#include "model/ShrinkNodeResult.h"
#include "model/StartApmRequest.h"
#include "model/StartApmResult.h"
#include "model/StartCollectorRequest.h"
#include "model/StartCollectorResult.h"
#include "model/StopApmRequest.h"
#include "model/StopApmResult.h"
#include "model/StopCollectorRequest.h"
#include "model/StopCollectorResult.h"
#include "model/StopPipelinesRequest.h"
#include "model/StopPipelinesResult.h"
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
#include "model/UpdateApmRequest.h"
#include "model/UpdateApmResult.h"
#include "model/UpdateBlackIpsRequest.h"
#include "model/UpdateBlackIpsResult.h"
#include "model/UpdateCollectorRequest.h"
#include "model/UpdateCollectorResult.h"
#include "model/UpdateCollectorNameRequest.h"
#include "model/UpdateCollectorNameResult.h"
#include "model/UpdateComponentIndexRequest.h"
#include "model/UpdateComponentIndexResult.h"
#include "model/UpdateDescriptionRequest.h"
#include "model/UpdateDescriptionResult.h"
#include "model/UpdateDiagnosisSettingsRequest.h"
#include "model/UpdateDiagnosisSettingsResult.h"
#include "model/UpdateDictRequest.h"
#include "model/UpdateDictResult.h"
#include "model/UpdateDynamicSettingsRequest.h"
#include "model/UpdateDynamicSettingsResult.h"
#include "model/UpdateExtendConfigRequest.h"
#include "model/UpdateExtendConfigResult.h"
#include "model/UpdateExtendfilesRequest.h"
#include "model/UpdateExtendfilesResult.h"
#include "model/UpdateHotIkDictsRequest.h"
#include "model/UpdateHotIkDictsResult.h"
#include "model/UpdateILMPolicyRequest.h"
#include "model/UpdateILMPolicyResult.h"
#include "model/UpdateIndexTemplateRequest.h"
#include "model/UpdateIndexTemplateResult.h"
#include "model/UpdateInstanceRequest.h"
#include "model/UpdateInstanceResult.h"
#include "model/UpdateInstanceChargeTypeRequest.h"
#include "model/UpdateInstanceChargeTypeResult.h"
#include "model/UpdateInstanceSettingsRequest.h"
#include "model/UpdateInstanceSettingsResult.h"
#include "model/UpdateKibanaPvlNetworkRequest.h"
#include "model/UpdateKibanaPvlNetworkResult.h"
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
#include "model/UpdateReadWritePolicyRequest.h"
#include "model/UpdateReadWritePolicyResult.h"
#include "model/UpdateSnapshotSettingRequest.h"
#include "model/UpdateSnapshotSettingResult.h"
#include "model/UpdateSynonymsDictsRequest.h"
#include "model/UpdateSynonymsDictsResult.h"
#include "model/UpdateTemplateRequest.h"
#include "model/UpdateTemplateResult.h"
#include "model/UpdateWhiteIpsRequest.h"
#include "model/UpdateWhiteIpsResult.h"
#include "model/UpdateXpackMonitorConfigRequest.h"
#include "model/UpdateXpackMonitorConfigResult.h"
#include "model/UpgradeEngineVersionRequest.h"
#include "model/UpgradeEngineVersionResult.h"
#include "model/ValidateConnectionRequest.h"
#include "model/ValidateConnectionResult.h"
#include "model/ValidateShrinkNodesRequest.h"
#include "model/ValidateShrinkNodesResult.h"
#include "model/ValidateSlrPermissionRequest.h"
#include "model/ValidateSlrPermissionResult.h"
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
			typedef Outcome<Error, Model::CancelDeletionResult> CancelDeletionOutcome;
			typedef std::future<CancelDeletionOutcome> CancelDeletionOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CancelDeletionRequest&, const CancelDeletionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelDeletionAsyncHandler;
			typedef Outcome<Error, Model::CancelLogstashDeletionResult> CancelLogstashDeletionOutcome;
			typedef std::future<CancelLogstashDeletionOutcome> CancelLogstashDeletionOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CancelLogstashDeletionRequest&, const CancelLogstashDeletionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelLogstashDeletionAsyncHandler;
			typedef Outcome<Error, Model::CancelTaskResult> CancelTaskOutcome;
			typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CancelTaskRequest&, const CancelTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
			typedef Outcome<Error, Model::CapacityPlanResult> CapacityPlanOutcome;
			typedef std::future<CapacityPlanOutcome> CapacityPlanOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CapacityPlanRequest&, const CapacityPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CapacityPlanAsyncHandler;
			typedef Outcome<Error, Model::CloseDiagnosisResult> CloseDiagnosisOutcome;
			typedef std::future<CloseDiagnosisOutcome> CloseDiagnosisOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CloseDiagnosisRequest&, const CloseDiagnosisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseDiagnosisAsyncHandler;
			typedef Outcome<Error, Model::CloseHttpsResult> CloseHttpsOutcome;
			typedef std::future<CloseHttpsOutcome> CloseHttpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CloseHttpsRequest&, const CloseHttpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseHttpsAsyncHandler;
			typedef Outcome<Error, Model::CloseManagedIndexResult> CloseManagedIndexOutcome;
			typedef std::future<CloseManagedIndexOutcome> CloseManagedIndexOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CloseManagedIndexRequest&, const CloseManagedIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseManagedIndexAsyncHandler;
			typedef Outcome<Error, Model::CreateCollectorResult> CreateCollectorOutcome;
			typedef std::future<CreateCollectorOutcome> CreateCollectorOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateCollectorRequest&, const CreateCollectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCollectorAsyncHandler;
			typedef Outcome<Error, Model::CreateComponentIndexResult> CreateComponentIndexOutcome;
			typedef std::future<CreateComponentIndexOutcome> CreateComponentIndexOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateComponentIndexRequest&, const CreateComponentIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateComponentIndexAsyncHandler;
			typedef Outcome<Error, Model::CreateDataStreamResult> CreateDataStreamOutcome;
			typedef std::future<CreateDataStreamOutcome> CreateDataStreamOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateDataStreamRequest&, const CreateDataStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataStreamAsyncHandler;
			typedef Outcome<Error, Model::CreateILMPolicyResult> CreateILMPolicyOutcome;
			typedef std::future<CreateILMPolicyOutcome> CreateILMPolicyOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateILMPolicyRequest&, const CreateILMPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateILMPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateIndexTemplateResult> CreateIndexTemplateOutcome;
			typedef std::future<CreateIndexTemplateOutcome> CreateIndexTemplateOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateIndexTemplateRequest&, const CreateIndexTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIndexTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateLogstashResult> CreateLogstashOutcome;
			typedef std::future<CreateLogstashOutcome> CreateLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateLogstashRequest&, const CreateLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogstashAsyncHandler;
			typedef Outcome<Error, Model::CreatePipelinesResult> CreatePipelinesOutcome;
			typedef std::future<CreatePipelinesOutcome> CreatePipelinesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreatePipelinesRequest&, const CreatePipelinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePipelinesAsyncHandler;
			typedef Outcome<Error, Model::CreateSnapshotResult> CreateSnapshotOutcome;
			typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateSnapshotRequest&, const CreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::CreateVpcEndpointResult> CreateVpcEndpointOutcome;
			typedef std::future<CreateVpcEndpointOutcome> CreateVpcEndpointOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::CreateVpcEndpointRequest&, const CreateVpcEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndpointAsyncHandler;
			typedef Outcome<Error, Model::DeactivateZonesResult> DeactivateZonesOutcome;
			typedef std::future<DeactivateZonesOutcome> DeactivateZonesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeactivateZonesRequest&, const DeactivateZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateZonesAsyncHandler;
			typedef Outcome<Error, Model::DeleteCollectorResult> DeleteCollectorOutcome;
			typedef std::future<DeleteCollectorOutcome> DeleteCollectorOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteCollectorRequest&, const DeleteCollectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCollectorAsyncHandler;
			typedef Outcome<Error, Model::DeleteComponentIndexResult> DeleteComponentIndexOutcome;
			typedef std::future<DeleteComponentIndexOutcome> DeleteComponentIndexOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteComponentIndexRequest&, const DeleteComponentIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteComponentIndexAsyncHandler;
			typedef Outcome<Error, Model::DeleteConnectedClusterResult> DeleteConnectedClusterOutcome;
			typedef std::future<DeleteConnectedClusterOutcome> DeleteConnectedClusterOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteConnectedClusterRequest&, const DeleteConnectedClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConnectedClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataStreamResult> DeleteDataStreamOutcome;
			typedef std::future<DeleteDataStreamOutcome> DeleteDataStreamOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteDataStreamRequest&, const DeleteDataStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataStreamAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataTaskResult> DeleteDataTaskOutcome;
			typedef std::future<DeleteDataTaskOutcome> DeleteDataTaskOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteDataTaskRequest&, const DeleteDataTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeprecatedTemplateResult> DeleteDeprecatedTemplateOutcome;
			typedef std::future<DeleteDeprecatedTemplateOutcome> DeleteDeprecatedTemplateOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteDeprecatedTemplateRequest&, const DeleteDeprecatedTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeprecatedTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteILMPolicyResult> DeleteILMPolicyOutcome;
			typedef std::future<DeleteILMPolicyOutcome> DeleteILMPolicyOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteILMPolicyRequest&, const DeleteILMPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteILMPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteIndexTemplateResult> DeleteIndexTemplateOutcome;
			typedef std::future<DeleteIndexTemplateOutcome> DeleteIndexTemplateOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteIndexTemplateRequest&, const DeleteIndexTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIndexTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteLogstashResult> DeleteLogstashOutcome;
			typedef std::future<DeleteLogstashOutcome> DeleteLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteLogstashRequest&, const DeleteLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogstashAsyncHandler;
			typedef Outcome<Error, Model::DeletePipelinesResult> DeletePipelinesOutcome;
			typedef std::future<DeletePipelinesOutcome> DeletePipelinesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeletePipelinesRequest&, const DeletePipelinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePipelinesAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotRepoResult> DeleteSnapshotRepoOutcome;
			typedef std::future<DeleteSnapshotRepoOutcome> DeleteSnapshotRepoOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteSnapshotRepoRequest&, const DeleteSnapshotRepoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotRepoAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcEndpointResult> DeleteVpcEndpointOutcome;
			typedef std::future<DeleteVpcEndpointOutcome> DeleteVpcEndpointOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DeleteVpcEndpointRequest&, const DeleteVpcEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndpointAsyncHandler;
			typedef Outcome<Error, Model::DescribeAckOperatorResult> DescribeAckOperatorOutcome;
			typedef std::future<DescribeAckOperatorOutcome> DescribeAckOperatorOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeAckOperatorRequest&, const DescribeAckOperatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAckOperatorAsyncHandler;
			typedef Outcome<Error, Model::DescribeApmResult> DescribeApmOutcome;
			typedef std::future<DescribeApmOutcome> DescribeApmOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeApmRequest&, const DescribeApmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApmAsyncHandler;
			typedef Outcome<Error, Model::DescribeCollectorResult> DescribeCollectorOutcome;
			typedef std::future<DescribeCollectorOutcome> DescribeCollectorOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeCollectorRequest&, const DescribeCollectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCollectorAsyncHandler;
			typedef Outcome<Error, Model::DescribeComponentIndexResult> DescribeComponentIndexOutcome;
			typedef std::future<DescribeComponentIndexOutcome> DescribeComponentIndexOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeComponentIndexRequest&, const DescribeComponentIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentIndexAsyncHandler;
			typedef Outcome<Error, Model::DescribeConnectableClustersResult> DescribeConnectableClustersOutcome;
			typedef std::future<DescribeConnectableClustersOutcome> DescribeConnectableClustersOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeConnectableClustersRequest&, const DescribeConnectableClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectableClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeprecatedTemplateResult> DescribeDeprecatedTemplateOutcome;
			typedef std::future<DescribeDeprecatedTemplateOutcome> DescribeDeprecatedTemplateOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeDeprecatedTemplateRequest&, const DescribeDeprecatedTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeprecatedTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnoseReportResult> DescribeDiagnoseReportOutcome;
			typedef std::future<DescribeDiagnoseReportOutcome> DescribeDiagnoseReportOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeDiagnoseReportRequest&, const DescribeDiagnoseReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnoseReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisSettingsResult> DescribeDiagnosisSettingsOutcome;
			typedef std::future<DescribeDiagnosisSettingsOutcome> DescribeDiagnosisSettingsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeDiagnosisSettingsRequest&, const DescribeDiagnosisSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisSettingsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDynamicSettingsResult> DescribeDynamicSettingsOutcome;
			typedef std::future<DescribeDynamicSettingsOutcome> DescribeDynamicSettingsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeDynamicSettingsRequest&, const DescribeDynamicSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDynamicSettingsAsyncHandler;
			typedef Outcome<Error, Model::DescribeElasticsearchHealthResult> DescribeElasticsearchHealthOutcome;
			typedef std::future<DescribeElasticsearchHealthOutcome> DescribeElasticsearchHealthOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeElasticsearchHealthRequest&, const DescribeElasticsearchHealthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElasticsearchHealthAsyncHandler;
			typedef Outcome<Error, Model::DescribeILMPolicyResult> DescribeILMPolicyOutcome;
			typedef std::future<DescribeILMPolicyOutcome> DescribeILMPolicyOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeILMPolicyRequest&, const DescribeILMPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeILMPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeIndexTemplateResult> DescribeIndexTemplateOutcome;
			typedef std::future<DescribeIndexTemplateOutcome> DescribeIndexTemplateOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeIndexTemplateRequest&, const DescribeIndexTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeKibanaSettingsResult> DescribeKibanaSettingsOutcome;
			typedef std::future<DescribeKibanaSettingsOutcome> DescribeKibanaSettingsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeKibanaSettingsRequest&, const DescribeKibanaSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKibanaSettingsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogstashResult> DescribeLogstashOutcome;
			typedef std::future<DescribeLogstashOutcome> DescribeLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeLogstashRequest&, const DescribeLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogstashAsyncHandler;
			typedef Outcome<Error, Model::DescribePipelineResult> DescribePipelineOutcome;
			typedef std::future<DescribePipelineOutcome> DescribePipelineOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribePipelineRequest&, const DescribePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePipelineAsyncHandler;
			typedef Outcome<Error, Model::DescribePipelineManagementConfigResult> DescribePipelineManagementConfigOutcome;
			typedef std::future<DescribePipelineManagementConfigOutcome> DescribePipelineManagementConfigOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribePipelineManagementConfigRequest&, const DescribePipelineManagementConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePipelineManagementConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnapshotSettingResult> DescribeSnapshotSettingOutcome;
			typedef std::future<DescribeSnapshotSettingOutcome> DescribeSnapshotSettingOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeSnapshotSettingRequest&, const DescribeSnapshotSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeTemplatesResult> DescribeTemplatesOutcome;
			typedef std::future<DescribeTemplatesOutcome> DescribeTemplatesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeTemplatesRequest&, const DescribeTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeXpackMonitorConfigResult> DescribeXpackMonitorConfigOutcome;
			typedef std::future<DescribeXpackMonitorConfigOutcome> DescribeXpackMonitorConfigOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DescribeXpackMonitorConfigRequest&, const DescribeXpackMonitorConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeXpackMonitorConfigAsyncHandler;
			typedef Outcome<Error, Model::DiagnoseInstanceResult> DiagnoseInstanceOutcome;
			typedef std::future<DiagnoseInstanceOutcome> DiagnoseInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DiagnoseInstanceRequest&, const DiagnoseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DiagnoseInstanceAsyncHandler;
			typedef Outcome<Error, Model::DisableKibanaPvlNetworkResult> DisableKibanaPvlNetworkOutcome;
			typedef std::future<DisableKibanaPvlNetworkOutcome> DisableKibanaPvlNetworkOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::DisableKibanaPvlNetworkRequest&, const DisableKibanaPvlNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableKibanaPvlNetworkAsyncHandler;
			typedef Outcome<Error, Model::EnableKibanaPvlNetworkResult> EnableKibanaPvlNetworkOutcome;
			typedef std::future<EnableKibanaPvlNetworkOutcome> EnableKibanaPvlNetworkOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::EnableKibanaPvlNetworkRequest&, const EnableKibanaPvlNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableKibanaPvlNetworkAsyncHandler;
			typedef Outcome<Error, Model::EstimatedLogstashRestartTimeResult> EstimatedLogstashRestartTimeOutcome;
			typedef std::future<EstimatedLogstashRestartTimeOutcome> EstimatedLogstashRestartTimeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::EstimatedLogstashRestartTimeRequest&, const EstimatedLogstashRestartTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EstimatedLogstashRestartTimeAsyncHandler;
			typedef Outcome<Error, Model::EstimatedRestartTimeResult> EstimatedRestartTimeOutcome;
			typedef std::future<EstimatedRestartTimeOutcome> EstimatedRestartTimeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::EstimatedRestartTimeRequest&, const EstimatedRestartTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EstimatedRestartTimeAsyncHandler;
			typedef Outcome<Error, Model::GetClusterDataInformationResult> GetClusterDataInformationOutcome;
			typedef std::future<GetClusterDataInformationOutcome> GetClusterDataInformationOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetClusterDataInformationRequest&, const GetClusterDataInformationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterDataInformationAsyncHandler;
			typedef Outcome<Error, Model::GetElastictaskResult> GetElastictaskOutcome;
			typedef std::future<GetElastictaskOutcome> GetElastictaskOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetElastictaskRequest&, const GetElastictaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetElastictaskAsyncHandler;
			typedef Outcome<Error, Model::GetEmonGrafanaAlertsResult> GetEmonGrafanaAlertsOutcome;
			typedef std::future<GetEmonGrafanaAlertsOutcome> GetEmonGrafanaAlertsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetEmonGrafanaAlertsRequest&, const GetEmonGrafanaAlertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEmonGrafanaAlertsAsyncHandler;
			typedef Outcome<Error, Model::GetEmonGrafanaDashboardsResult> GetEmonGrafanaDashboardsOutcome;
			typedef std::future<GetEmonGrafanaDashboardsOutcome> GetEmonGrafanaDashboardsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetEmonGrafanaDashboardsRequest&, const GetEmonGrafanaDashboardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEmonGrafanaDashboardsAsyncHandler;
			typedef Outcome<Error, Model::GetEmonMonitorDataResult> GetEmonMonitorDataOutcome;
			typedef std::future<GetEmonMonitorDataOutcome> GetEmonMonitorDataOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetEmonMonitorDataRequest&, const GetEmonMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEmonMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::GetOpenStoreUsageResult> GetOpenStoreUsageOutcome;
			typedef std::future<GetOpenStoreUsageOutcome> GetOpenStoreUsageOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetOpenStoreUsageRequest&, const GetOpenStoreUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpenStoreUsageAsyncHandler;
			typedef Outcome<Error, Model::GetRegionConfigurationResult> GetRegionConfigurationOutcome;
			typedef std::future<GetRegionConfigurationOutcome> GetRegionConfigurationOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetRegionConfigurationRequest&, const GetRegionConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRegionConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetRegionalInstanceConfigResult> GetRegionalInstanceConfigOutcome;
			typedef std::future<GetRegionalInstanceConfigOutcome> GetRegionalInstanceConfigOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetRegionalInstanceConfigRequest&, const GetRegionalInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRegionalInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::GetSuggestShrinkableNodesResult> GetSuggestShrinkableNodesOutcome;
			typedef std::future<GetSuggestShrinkableNodesOutcome> GetSuggestShrinkableNodesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetSuggestShrinkableNodesRequest&, const GetSuggestShrinkableNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSuggestShrinkableNodesAsyncHandler;
			typedef Outcome<Error, Model::GetTransferableNodesResult> GetTransferableNodesOutcome;
			typedef std::future<GetTransferableNodesOutcome> GetTransferableNodesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::GetTransferableNodesRequest&, const GetTransferableNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTransferableNodesAsyncHandler;
			typedef Outcome<Error, Model::InitializeOperationRoleResult> InitializeOperationRoleOutcome;
			typedef std::future<InitializeOperationRoleOutcome> InitializeOperationRoleOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::InitializeOperationRoleRequest&, const InitializeOperationRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitializeOperationRoleAsyncHandler;
			typedef Outcome<Error, Model::InstallAckOperatorResult> InstallAckOperatorOutcome;
			typedef std::future<InstallAckOperatorOutcome> InstallAckOperatorOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::InstallAckOperatorRequest&, const InstallAckOperatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallAckOperatorAsyncHandler;
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
			typedef Outcome<Error, Model::ListAckClustersResult> ListAckClustersOutcome;
			typedef std::future<ListAckClustersOutcome> ListAckClustersOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListAckClustersRequest&, const ListAckClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAckClustersAsyncHandler;
			typedef Outcome<Error, Model::ListAckNamespacesResult> ListAckNamespacesOutcome;
			typedef std::future<ListAckNamespacesOutcome> ListAckNamespacesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListAckNamespacesRequest&, const ListAckNamespacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAckNamespacesAsyncHandler;
			typedef Outcome<Error, Model::ListActionRecordsResult> ListActionRecordsOutcome;
			typedef std::future<ListActionRecordsOutcome> ListActionRecordsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListActionRecordsRequest&, const ListActionRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListActionRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListAllNodeResult> ListAllNodeOutcome;
			typedef std::future<ListAllNodeOutcome> ListAllNodeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListAllNodeRequest&, const ListAllNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllNodeAsyncHandler;
			typedef Outcome<Error, Model::ListAlternativeSnapshotReposResult> ListAlternativeSnapshotReposOutcome;
			typedef std::future<ListAlternativeSnapshotReposOutcome> ListAlternativeSnapshotReposOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListAlternativeSnapshotReposRequest&, const ListAlternativeSnapshotReposOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlternativeSnapshotReposAsyncHandler;
			typedef Outcome<Error, Model::ListApmResult> ListApmOutcome;
			typedef std::future<ListApmOutcome> ListApmOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListApmRequest&, const ListApmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApmAsyncHandler;
			typedef Outcome<Error, Model::ListAvailableEsInstanceIdsResult> ListAvailableEsInstanceIdsOutcome;
			typedef std::future<ListAvailableEsInstanceIdsOutcome> ListAvailableEsInstanceIdsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListAvailableEsInstanceIdsRequest&, const ListAvailableEsInstanceIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAvailableEsInstanceIdsAsyncHandler;
			typedef Outcome<Error, Model::ListCollectorsResult> ListCollectorsOutcome;
			typedef std::future<ListCollectorsOutcome> ListCollectorsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListCollectorsRequest&, const ListCollectorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCollectorsAsyncHandler;
			typedef Outcome<Error, Model::ListComponentIndicesResult> ListComponentIndicesOutcome;
			typedef std::future<ListComponentIndicesOutcome> ListComponentIndicesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListComponentIndicesRequest&, const ListComponentIndicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListComponentIndicesAsyncHandler;
			typedef Outcome<Error, Model::ListConnectedClustersResult> ListConnectedClustersOutcome;
			typedef std::future<ListConnectedClustersOutcome> ListConnectedClustersOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListConnectedClustersRequest&, const ListConnectedClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConnectedClustersAsyncHandler;
			typedef Outcome<Error, Model::ListDataStreamsResult> ListDataStreamsOutcome;
			typedef std::future<ListDataStreamsOutcome> ListDataStreamsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListDataStreamsRequest&, const ListDataStreamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataStreamsAsyncHandler;
			typedef Outcome<Error, Model::ListDataTasksResult> ListDataTasksOutcome;
			typedef std::future<ListDataTasksOutcome> ListDataTasksOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListDataTasksRequest&, const ListDataTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataTasksAsyncHandler;
			typedef Outcome<Error, Model::ListDefaultCollectorConfigurationsResult> ListDefaultCollectorConfigurationsOutcome;
			typedef std::future<ListDefaultCollectorConfigurationsOutcome> ListDefaultCollectorConfigurationsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListDefaultCollectorConfigurationsRequest&, const ListDefaultCollectorConfigurationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDefaultCollectorConfigurationsAsyncHandler;
			typedef Outcome<Error, Model::ListDeprecatedTemplatesResult> ListDeprecatedTemplatesOutcome;
			typedef std::future<ListDeprecatedTemplatesOutcome> ListDeprecatedTemplatesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListDeprecatedTemplatesRequest&, const ListDeprecatedTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeprecatedTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListDiagnoseIndicesResult> ListDiagnoseIndicesOutcome;
			typedef std::future<ListDiagnoseIndicesOutcome> ListDiagnoseIndicesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListDiagnoseIndicesRequest&, const ListDiagnoseIndicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDiagnoseIndicesAsyncHandler;
			typedef Outcome<Error, Model::ListDiagnoseReportResult> ListDiagnoseReportOutcome;
			typedef std::future<ListDiagnoseReportOutcome> ListDiagnoseReportOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListDiagnoseReportRequest&, const ListDiagnoseReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDiagnoseReportAsyncHandler;
			typedef Outcome<Error, Model::ListDiagnoseReportIdsResult> ListDiagnoseReportIdsOutcome;
			typedef std::future<ListDiagnoseReportIdsOutcome> ListDiagnoseReportIdsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListDiagnoseReportIdsRequest&, const ListDiagnoseReportIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDiagnoseReportIdsAsyncHandler;
			typedef Outcome<Error, Model::ListDiagnosisItemsResult> ListDiagnosisItemsOutcome;
			typedef std::future<ListDiagnosisItemsOutcome> ListDiagnosisItemsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListDiagnosisItemsRequest&, const ListDiagnosisItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDiagnosisItemsAsyncHandler;
			typedef Outcome<Error, Model::ListDictInformationResult> ListDictInformationOutcome;
			typedef std::future<ListDictInformationOutcome> ListDictInformationOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListDictInformationRequest&, const ListDictInformationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDictInformationAsyncHandler;
			typedef Outcome<Error, Model::ListDictsResult> ListDictsOutcome;
			typedef std::future<ListDictsOutcome> ListDictsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListDictsRequest&, const ListDictsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDictsAsyncHandler;
			typedef Outcome<Error, Model::ListEcsInstancesResult> ListEcsInstancesOutcome;
			typedef std::future<ListEcsInstancesOutcome> ListEcsInstancesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListEcsInstancesRequest&, const ListEcsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEcsInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListExtendfilesResult> ListExtendfilesOutcome;
			typedef std::future<ListExtendfilesOutcome> ListExtendfilesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListExtendfilesRequest&, const ListExtendfilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExtendfilesAsyncHandler;
			typedef Outcome<Error, Model::ListILMPoliciesResult> ListILMPoliciesOutcome;
			typedef std::future<ListILMPoliciesOutcome> ListILMPoliciesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListILMPoliciesRequest&, const ListILMPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListILMPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListIndexTemplatesResult> ListIndexTemplatesOutcome;
			typedef std::future<ListIndexTemplatesOutcome> ListIndexTemplatesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListIndexTemplatesRequest&, const ListIndexTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIndexTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceResult> ListInstanceOutcome;
			typedef std::future<ListInstanceOutcome> ListInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListInstanceRequest&, const ListInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceHistoryEventsResult> ListInstanceHistoryEventsOutcome;
			typedef std::future<ListInstanceHistoryEventsOutcome> ListInstanceHistoryEventsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListInstanceHistoryEventsRequest&, const ListInstanceHistoryEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceHistoryEventsAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceIndicesResult> ListInstanceIndicesOutcome;
			typedef std::future<ListInstanceIndicesOutcome> ListInstanceIndicesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListInstanceIndicesRequest&, const ListInstanceIndicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceIndicesAsyncHandler;
			typedef Outcome<Error, Model::ListKibanaPluginsResult> ListKibanaPluginsOutcome;
			typedef std::future<ListKibanaPluginsOutcome> ListKibanaPluginsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListKibanaPluginsRequest&, const ListKibanaPluginsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListKibanaPluginsAsyncHandler;
			typedef Outcome<Error, Model::ListKibanaPvlNetworkResult> ListKibanaPvlNetworkOutcome;
			typedef std::future<ListKibanaPvlNetworkOutcome> ListKibanaPvlNetworkOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListKibanaPvlNetworkRequest&, const ListKibanaPvlNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListKibanaPvlNetworkAsyncHandler;
			typedef Outcome<Error, Model::ListLogstashResult> ListLogstashOutcome;
			typedef std::future<ListLogstashOutcome> ListLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListLogstashRequest&, const ListLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogstashAsyncHandler;
			typedef Outcome<Error, Model::ListLogstashLogResult> ListLogstashLogOutcome;
			typedef std::future<ListLogstashLogOutcome> ListLogstashLogOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListLogstashLogRequest&, const ListLogstashLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogstashLogAsyncHandler;
			typedef Outcome<Error, Model::ListLogstashPluginsResult> ListLogstashPluginsOutcome;
			typedef std::future<ListLogstashPluginsOutcome> ListLogstashPluginsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListLogstashPluginsRequest&, const ListLogstashPluginsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogstashPluginsAsyncHandler;
			typedef Outcome<Error, Model::ListNodesResult> ListNodesOutcome;
			typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListNodesRequest&, const ListNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesAsyncHandler;
			typedef Outcome<Error, Model::ListPipelineResult> ListPipelineOutcome;
			typedef std::future<ListPipelineOutcome> ListPipelineOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListPipelineRequest&, const ListPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelineAsyncHandler;
			typedef Outcome<Error, Model::ListPipelineIdsResult> ListPipelineIdsOutcome;
			typedef std::future<ListPipelineIdsOutcome> ListPipelineIdsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListPipelineIdsRequest&, const ListPipelineIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelineIdsAsyncHandler;
			typedef Outcome<Error, Model::ListPluginsResult> ListPluginsOutcome;
			typedef std::future<ListPluginsOutcome> ListPluginsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListPluginsRequest&, const ListPluginsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPluginsAsyncHandler;
			typedef Outcome<Error, Model::ListSearchLogResult> ListSearchLogOutcome;
			typedef std::future<ListSearchLogOutcome> ListSearchLogOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListSearchLogRequest&, const ListSearchLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSearchLogAsyncHandler;
			typedef Outcome<Error, Model::ListShardRecoveriesResult> ListShardRecoveriesOutcome;
			typedef std::future<ListShardRecoveriesOutcome> ListShardRecoveriesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListShardRecoveriesRequest&, const ListShardRecoveriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListShardRecoveriesAsyncHandler;
			typedef Outcome<Error, Model::ListSnapshotReposByInstanceIdResult> ListSnapshotReposByInstanceIdOutcome;
			typedef std::future<ListSnapshotReposByInstanceIdOutcome> ListSnapshotReposByInstanceIdOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListSnapshotReposByInstanceIdRequest&, const ListSnapshotReposByInstanceIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSnapshotReposByInstanceIdAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagsResult> ListTagsOutcome;
			typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListTagsRequest&, const ListTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointsResult> ListVpcEndpointsOutcome;
			typedef std::future<ListVpcEndpointsOutcome> ListVpcEndpointsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ListVpcEndpointsRequest&, const ListVpcEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointsAsyncHandler;
			typedef Outcome<Error, Model::MigrateToOtherZoneResult> MigrateToOtherZoneOutcome;
			typedef std::future<MigrateToOtherZoneOutcome> MigrateToOtherZoneOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::MigrateToOtherZoneRequest&, const MigrateToOtherZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateToOtherZoneAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeployMachineResult> ModifyDeployMachineOutcome;
			typedef std::future<ModifyDeployMachineOutcome> ModifyDeployMachineOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ModifyDeployMachineRequest&, const ModifyDeployMachineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeployMachineAsyncHandler;
			typedef Outcome<Error, Model::ModifyElastictaskResult> ModifyElastictaskOutcome;
			typedef std::future<ModifyElastictaskOutcome> ModifyElastictaskOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ModifyElastictaskRequest&, const ModifyElastictaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyElastictaskAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceMaintainTimeResult> ModifyInstanceMaintainTimeOutcome;
			typedef std::future<ModifyInstanceMaintainTimeOutcome> ModifyInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ModifyInstanceMaintainTimeRequest&, const ModifyInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyWhiteIpsResult> ModifyWhiteIpsOutcome;
			typedef std::future<ModifyWhiteIpsOutcome> ModifyWhiteIpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ModifyWhiteIpsRequest&, const ModifyWhiteIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWhiteIpsAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::OpenDiagnosisResult> OpenDiagnosisOutcome;
			typedef std::future<OpenDiagnosisOutcome> OpenDiagnosisOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::OpenDiagnosisRequest&, const OpenDiagnosisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenDiagnosisAsyncHandler;
			typedef Outcome<Error, Model::OpenHttpsResult> OpenHttpsOutcome;
			typedef std::future<OpenHttpsOutcome> OpenHttpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::OpenHttpsRequest&, const OpenHttpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenHttpsAsyncHandler;
			typedef Outcome<Error, Model::PostEmonTryAlarmRuleResult> PostEmonTryAlarmRuleOutcome;
			typedef std::future<PostEmonTryAlarmRuleOutcome> PostEmonTryAlarmRuleOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::PostEmonTryAlarmRuleRequest&, const PostEmonTryAlarmRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PostEmonTryAlarmRuleAsyncHandler;
			typedef Outcome<Error, Model::RecommendTemplatesResult> RecommendTemplatesOutcome;
			typedef std::future<RecommendTemplatesOutcome> RecommendTemplatesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RecommendTemplatesRequest&, const RecommendTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecommendTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ReinstallCollectorResult> ReinstallCollectorOutcome;
			typedef std::future<ReinstallCollectorOutcome> ReinstallCollectorOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ReinstallCollectorRequest&, const ReinstallCollectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReinstallCollectorAsyncHandler;
			typedef Outcome<Error, Model::RemoveApmResult> RemoveApmOutcome;
			typedef std::future<RemoveApmOutcome> RemoveApmOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RemoveApmRequest&, const RemoveApmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveApmAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewLogstashResult> RenewLogstashOutcome;
			typedef std::future<RenewLogstashOutcome> RenewLogstashOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RenewLogstashRequest&, const RenewLogstashOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewLogstashAsyncHandler;
			typedef Outcome<Error, Model::RestartCollectorResult> RestartCollectorOutcome;
			typedef std::future<RestartCollectorOutcome> RestartCollectorOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RestartCollectorRequest&, const RestartCollectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartCollectorAsyncHandler;
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
			typedef Outcome<Error, Model::RolloverDataStreamResult> RolloverDataStreamOutcome;
			typedef std::future<RolloverDataStreamOutcome> RolloverDataStreamOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RolloverDataStreamRequest&, const RolloverDataStreamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RolloverDataStreamAsyncHandler;
			typedef Outcome<Error, Model::RunPipelinesResult> RunPipelinesOutcome;
			typedef std::future<RunPipelinesOutcome> RunPipelinesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::RunPipelinesRequest&, const RunPipelinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunPipelinesAsyncHandler;
			typedef Outcome<Error, Model::ShrinkNodeResult> ShrinkNodeOutcome;
			typedef std::future<ShrinkNodeOutcome> ShrinkNodeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ShrinkNodeRequest&, const ShrinkNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShrinkNodeAsyncHandler;
			typedef Outcome<Error, Model::StartApmResult> StartApmOutcome;
			typedef std::future<StartApmOutcome> StartApmOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::StartApmRequest&, const StartApmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartApmAsyncHandler;
			typedef Outcome<Error, Model::StartCollectorResult> StartCollectorOutcome;
			typedef std::future<StartCollectorOutcome> StartCollectorOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::StartCollectorRequest&, const StartCollectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartCollectorAsyncHandler;
			typedef Outcome<Error, Model::StopApmResult> StopApmOutcome;
			typedef std::future<StopApmOutcome> StopApmOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::StopApmRequest&, const StopApmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopApmAsyncHandler;
			typedef Outcome<Error, Model::StopCollectorResult> StopCollectorOutcome;
			typedef std::future<StopCollectorOutcome> StopCollectorOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::StopCollectorRequest&, const StopCollectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopCollectorAsyncHandler;
			typedef Outcome<Error, Model::StopPipelinesResult> StopPipelinesOutcome;
			typedef std::future<StopPipelinesOutcome> StopPipelinesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::StopPipelinesRequest&, const StopPipelinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopPipelinesAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateApmResult> UpdateApmOutcome;
			typedef std::future<UpdateApmOutcome> UpdateApmOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateApmRequest&, const UpdateApmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApmAsyncHandler;
			typedef Outcome<Error, Model::UpdateBlackIpsResult> UpdateBlackIpsOutcome;
			typedef std::future<UpdateBlackIpsOutcome> UpdateBlackIpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateBlackIpsRequest&, const UpdateBlackIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBlackIpsAsyncHandler;
			typedef Outcome<Error, Model::UpdateCollectorResult> UpdateCollectorOutcome;
			typedef std::future<UpdateCollectorOutcome> UpdateCollectorOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateCollectorRequest&, const UpdateCollectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCollectorAsyncHandler;
			typedef Outcome<Error, Model::UpdateCollectorNameResult> UpdateCollectorNameOutcome;
			typedef std::future<UpdateCollectorNameOutcome> UpdateCollectorNameOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateCollectorNameRequest&, const UpdateCollectorNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCollectorNameAsyncHandler;
			typedef Outcome<Error, Model::UpdateComponentIndexResult> UpdateComponentIndexOutcome;
			typedef std::future<UpdateComponentIndexOutcome> UpdateComponentIndexOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateComponentIndexRequest&, const UpdateComponentIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateComponentIndexAsyncHandler;
			typedef Outcome<Error, Model::UpdateDescriptionResult> UpdateDescriptionOutcome;
			typedef std::future<UpdateDescriptionOutcome> UpdateDescriptionOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateDescriptionRequest&, const UpdateDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateDiagnosisSettingsResult> UpdateDiagnosisSettingsOutcome;
			typedef std::future<UpdateDiagnosisSettingsOutcome> UpdateDiagnosisSettingsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateDiagnosisSettingsRequest&, const UpdateDiagnosisSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDiagnosisSettingsAsyncHandler;
			typedef Outcome<Error, Model::UpdateDictResult> UpdateDictOutcome;
			typedef std::future<UpdateDictOutcome> UpdateDictOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateDictRequest&, const UpdateDictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDictAsyncHandler;
			typedef Outcome<Error, Model::UpdateDynamicSettingsResult> UpdateDynamicSettingsOutcome;
			typedef std::future<UpdateDynamicSettingsOutcome> UpdateDynamicSettingsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateDynamicSettingsRequest&, const UpdateDynamicSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDynamicSettingsAsyncHandler;
			typedef Outcome<Error, Model::UpdateExtendConfigResult> UpdateExtendConfigOutcome;
			typedef std::future<UpdateExtendConfigOutcome> UpdateExtendConfigOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateExtendConfigRequest&, const UpdateExtendConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExtendConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateExtendfilesResult> UpdateExtendfilesOutcome;
			typedef std::future<UpdateExtendfilesOutcome> UpdateExtendfilesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateExtendfilesRequest&, const UpdateExtendfilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExtendfilesAsyncHandler;
			typedef Outcome<Error, Model::UpdateHotIkDictsResult> UpdateHotIkDictsOutcome;
			typedef std::future<UpdateHotIkDictsOutcome> UpdateHotIkDictsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateHotIkDictsRequest&, const UpdateHotIkDictsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHotIkDictsAsyncHandler;
			typedef Outcome<Error, Model::UpdateILMPolicyResult> UpdateILMPolicyOutcome;
			typedef std::future<UpdateILMPolicyOutcome> UpdateILMPolicyOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateILMPolicyRequest&, const UpdateILMPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateILMPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateIndexTemplateResult> UpdateIndexTemplateOutcome;
			typedef std::future<UpdateIndexTemplateOutcome> UpdateIndexTemplateOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateIndexTemplateRequest&, const UpdateIndexTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIndexTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceResult> UpdateInstanceOutcome;
			typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateInstanceRequest&, const UpdateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceChargeTypeResult> UpdateInstanceChargeTypeOutcome;
			typedef std::future<UpdateInstanceChargeTypeOutcome> UpdateInstanceChargeTypeOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateInstanceChargeTypeRequest&, const UpdateInstanceChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceSettingsResult> UpdateInstanceSettingsOutcome;
			typedef std::future<UpdateInstanceSettingsOutcome> UpdateInstanceSettingsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateInstanceSettingsRequest&, const UpdateInstanceSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceSettingsAsyncHandler;
			typedef Outcome<Error, Model::UpdateKibanaPvlNetworkResult> UpdateKibanaPvlNetworkOutcome;
			typedef std::future<UpdateKibanaPvlNetworkOutcome> UpdateKibanaPvlNetworkOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateKibanaPvlNetworkRequest&, const UpdateKibanaPvlNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKibanaPvlNetworkAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateReadWritePolicyResult> UpdateReadWritePolicyOutcome;
			typedef std::future<UpdateReadWritePolicyOutcome> UpdateReadWritePolicyOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateReadWritePolicyRequest&, const UpdateReadWritePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateReadWritePolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateSnapshotSettingResult> UpdateSnapshotSettingOutcome;
			typedef std::future<UpdateSnapshotSettingOutcome> UpdateSnapshotSettingOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateSnapshotSettingRequest&, const UpdateSnapshotSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSnapshotSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateSynonymsDictsResult> UpdateSynonymsDictsOutcome;
			typedef std::future<UpdateSynonymsDictsOutcome> UpdateSynonymsDictsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateSynonymsDictsRequest&, const UpdateSynonymsDictsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSynonymsDictsAsyncHandler;
			typedef Outcome<Error, Model::UpdateTemplateResult> UpdateTemplateOutcome;
			typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateTemplateRequest&, const UpdateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateWhiteIpsResult> UpdateWhiteIpsOutcome;
			typedef std::future<UpdateWhiteIpsOutcome> UpdateWhiteIpsOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateWhiteIpsRequest&, const UpdateWhiteIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWhiteIpsAsyncHandler;
			typedef Outcome<Error, Model::UpdateXpackMonitorConfigResult> UpdateXpackMonitorConfigOutcome;
			typedef std::future<UpdateXpackMonitorConfigOutcome> UpdateXpackMonitorConfigOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpdateXpackMonitorConfigRequest&, const UpdateXpackMonitorConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateXpackMonitorConfigAsyncHandler;
			typedef Outcome<Error, Model::UpgradeEngineVersionResult> UpgradeEngineVersionOutcome;
			typedef std::future<UpgradeEngineVersionOutcome> UpgradeEngineVersionOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::UpgradeEngineVersionRequest&, const UpgradeEngineVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeEngineVersionAsyncHandler;
			typedef Outcome<Error, Model::ValidateConnectionResult> ValidateConnectionOutcome;
			typedef std::future<ValidateConnectionOutcome> ValidateConnectionOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ValidateConnectionRequest&, const ValidateConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateConnectionAsyncHandler;
			typedef Outcome<Error, Model::ValidateShrinkNodesResult> ValidateShrinkNodesOutcome;
			typedef std::future<ValidateShrinkNodesOutcome> ValidateShrinkNodesOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ValidateShrinkNodesRequest&, const ValidateShrinkNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateShrinkNodesAsyncHandler;
			typedef Outcome<Error, Model::ValidateSlrPermissionResult> ValidateSlrPermissionOutcome;
			typedef std::future<ValidateSlrPermissionOutcome> ValidateSlrPermissionOutcomeCallable;
			typedef std::function<void(const ElasticsearchClient*, const Model::ValidateSlrPermissionRequest&, const ValidateSlrPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateSlrPermissionAsyncHandler;
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
			CancelDeletionOutcome cancelDeletion(const Model::CancelDeletionRequest &request)const;
			void cancelDeletionAsync(const Model::CancelDeletionRequest& request, const CancelDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelDeletionOutcomeCallable cancelDeletionCallable(const Model::CancelDeletionRequest& request) const;
			CancelLogstashDeletionOutcome cancelLogstashDeletion(const Model::CancelLogstashDeletionRequest &request)const;
			void cancelLogstashDeletionAsync(const Model::CancelLogstashDeletionRequest& request, const CancelLogstashDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelLogstashDeletionOutcomeCallable cancelLogstashDeletionCallable(const Model::CancelLogstashDeletionRequest& request) const;
			CancelTaskOutcome cancelTask(const Model::CancelTaskRequest &request)const;
			void cancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelTaskOutcomeCallable cancelTaskCallable(const Model::CancelTaskRequest& request) const;
			CapacityPlanOutcome capacityPlan(const Model::CapacityPlanRequest &request)const;
			void capacityPlanAsync(const Model::CapacityPlanRequest& request, const CapacityPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CapacityPlanOutcomeCallable capacityPlanCallable(const Model::CapacityPlanRequest& request) const;
			CloseDiagnosisOutcome closeDiagnosis(const Model::CloseDiagnosisRequest &request)const;
			void closeDiagnosisAsync(const Model::CloseDiagnosisRequest& request, const CloseDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseDiagnosisOutcomeCallable closeDiagnosisCallable(const Model::CloseDiagnosisRequest& request) const;
			CloseHttpsOutcome closeHttps(const Model::CloseHttpsRequest &request)const;
			void closeHttpsAsync(const Model::CloseHttpsRequest& request, const CloseHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseHttpsOutcomeCallable closeHttpsCallable(const Model::CloseHttpsRequest& request) const;
			CloseManagedIndexOutcome closeManagedIndex(const Model::CloseManagedIndexRequest &request)const;
			void closeManagedIndexAsync(const Model::CloseManagedIndexRequest& request, const CloseManagedIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseManagedIndexOutcomeCallable closeManagedIndexCallable(const Model::CloseManagedIndexRequest& request) const;
			CreateCollectorOutcome createCollector(const Model::CreateCollectorRequest &request)const;
			void createCollectorAsync(const Model::CreateCollectorRequest& request, const CreateCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCollectorOutcomeCallable createCollectorCallable(const Model::CreateCollectorRequest& request) const;
			CreateComponentIndexOutcome createComponentIndex(const Model::CreateComponentIndexRequest &request)const;
			void createComponentIndexAsync(const Model::CreateComponentIndexRequest& request, const CreateComponentIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateComponentIndexOutcomeCallable createComponentIndexCallable(const Model::CreateComponentIndexRequest& request) const;
			CreateDataStreamOutcome createDataStream(const Model::CreateDataStreamRequest &request)const;
			void createDataStreamAsync(const Model::CreateDataStreamRequest& request, const CreateDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataStreamOutcomeCallable createDataStreamCallable(const Model::CreateDataStreamRequest& request) const;
			CreateILMPolicyOutcome createILMPolicy(const Model::CreateILMPolicyRequest &request)const;
			void createILMPolicyAsync(const Model::CreateILMPolicyRequest& request, const CreateILMPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateILMPolicyOutcomeCallable createILMPolicyCallable(const Model::CreateILMPolicyRequest& request) const;
			CreateIndexTemplateOutcome createIndexTemplate(const Model::CreateIndexTemplateRequest &request)const;
			void createIndexTemplateAsync(const Model::CreateIndexTemplateRequest& request, const CreateIndexTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIndexTemplateOutcomeCallable createIndexTemplateCallable(const Model::CreateIndexTemplateRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateLogstashOutcome createLogstash(const Model::CreateLogstashRequest &request)const;
			void createLogstashAsync(const Model::CreateLogstashRequest& request, const CreateLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLogstashOutcomeCallable createLogstashCallable(const Model::CreateLogstashRequest& request) const;
			CreatePipelinesOutcome createPipelines(const Model::CreatePipelinesRequest &request)const;
			void createPipelinesAsync(const Model::CreatePipelinesRequest& request, const CreatePipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePipelinesOutcomeCallable createPipelinesCallable(const Model::CreatePipelinesRequest& request) const;
			CreateSnapshotOutcome createSnapshot(const Model::CreateSnapshotRequest &request)const;
			void createSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnapshotOutcomeCallable createSnapshotCallable(const Model::CreateSnapshotRequest& request) const;
			CreateVpcEndpointOutcome createVpcEndpoint(const Model::CreateVpcEndpointRequest &request)const;
			void createVpcEndpointAsync(const Model::CreateVpcEndpointRequest& request, const CreateVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpcEndpointOutcomeCallable createVpcEndpointCallable(const Model::CreateVpcEndpointRequest& request) const;
			DeactivateZonesOutcome deactivateZones(const Model::DeactivateZonesRequest &request)const;
			void deactivateZonesAsync(const Model::DeactivateZonesRequest& request, const DeactivateZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactivateZonesOutcomeCallable deactivateZonesCallable(const Model::DeactivateZonesRequest& request) const;
			DeleteCollectorOutcome deleteCollector(const Model::DeleteCollectorRequest &request)const;
			void deleteCollectorAsync(const Model::DeleteCollectorRequest& request, const DeleteCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCollectorOutcomeCallable deleteCollectorCallable(const Model::DeleteCollectorRequest& request) const;
			DeleteComponentIndexOutcome deleteComponentIndex(const Model::DeleteComponentIndexRequest &request)const;
			void deleteComponentIndexAsync(const Model::DeleteComponentIndexRequest& request, const DeleteComponentIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteComponentIndexOutcomeCallable deleteComponentIndexCallable(const Model::DeleteComponentIndexRequest& request) const;
			DeleteConnectedClusterOutcome deleteConnectedCluster(const Model::DeleteConnectedClusterRequest &request)const;
			void deleteConnectedClusterAsync(const Model::DeleteConnectedClusterRequest& request, const DeleteConnectedClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConnectedClusterOutcomeCallable deleteConnectedClusterCallable(const Model::DeleteConnectedClusterRequest& request) const;
			DeleteDataStreamOutcome deleteDataStream(const Model::DeleteDataStreamRequest &request)const;
			void deleteDataStreamAsync(const Model::DeleteDataStreamRequest& request, const DeleteDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataStreamOutcomeCallable deleteDataStreamCallable(const Model::DeleteDataStreamRequest& request) const;
			DeleteDataTaskOutcome deleteDataTask(const Model::DeleteDataTaskRequest &request)const;
			void deleteDataTaskAsync(const Model::DeleteDataTaskRequest& request, const DeleteDataTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataTaskOutcomeCallable deleteDataTaskCallable(const Model::DeleteDataTaskRequest& request) const;
			DeleteDeprecatedTemplateOutcome deleteDeprecatedTemplate(const Model::DeleteDeprecatedTemplateRequest &request)const;
			void deleteDeprecatedTemplateAsync(const Model::DeleteDeprecatedTemplateRequest& request, const DeleteDeprecatedTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeprecatedTemplateOutcomeCallable deleteDeprecatedTemplateCallable(const Model::DeleteDeprecatedTemplateRequest& request) const;
			DeleteILMPolicyOutcome deleteILMPolicy(const Model::DeleteILMPolicyRequest &request)const;
			void deleteILMPolicyAsync(const Model::DeleteILMPolicyRequest& request, const DeleteILMPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteILMPolicyOutcomeCallable deleteILMPolicyCallable(const Model::DeleteILMPolicyRequest& request) const;
			DeleteIndexTemplateOutcome deleteIndexTemplate(const Model::DeleteIndexTemplateRequest &request)const;
			void deleteIndexTemplateAsync(const Model::DeleteIndexTemplateRequest& request, const DeleteIndexTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIndexTemplateOutcomeCallable deleteIndexTemplateCallable(const Model::DeleteIndexTemplateRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteLogstashOutcome deleteLogstash(const Model::DeleteLogstashRequest &request)const;
			void deleteLogstashAsync(const Model::DeleteLogstashRequest& request, const DeleteLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLogstashOutcomeCallable deleteLogstashCallable(const Model::DeleteLogstashRequest& request) const;
			DeletePipelinesOutcome deletePipelines(const Model::DeletePipelinesRequest &request)const;
			void deletePipelinesAsync(const Model::DeletePipelinesRequest& request, const DeletePipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePipelinesOutcomeCallable deletePipelinesCallable(const Model::DeletePipelinesRequest& request) const;
			DeleteSnapshotRepoOutcome deleteSnapshotRepo(const Model::DeleteSnapshotRepoRequest &request)const;
			void deleteSnapshotRepoAsync(const Model::DeleteSnapshotRepoRequest& request, const DeleteSnapshotRepoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotRepoOutcomeCallable deleteSnapshotRepoCallable(const Model::DeleteSnapshotRepoRequest& request) const;
			DeleteVpcEndpointOutcome deleteVpcEndpoint(const Model::DeleteVpcEndpointRequest &request)const;
			void deleteVpcEndpointAsync(const Model::DeleteVpcEndpointRequest& request, const DeleteVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpcEndpointOutcomeCallable deleteVpcEndpointCallable(const Model::DeleteVpcEndpointRequest& request) const;
			DescribeAckOperatorOutcome describeAckOperator(const Model::DescribeAckOperatorRequest &request)const;
			void describeAckOperatorAsync(const Model::DescribeAckOperatorRequest& request, const DescribeAckOperatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAckOperatorOutcomeCallable describeAckOperatorCallable(const Model::DescribeAckOperatorRequest& request) const;
			DescribeApmOutcome describeApm(const Model::DescribeApmRequest &request)const;
			void describeApmAsync(const Model::DescribeApmRequest& request, const DescribeApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApmOutcomeCallable describeApmCallable(const Model::DescribeApmRequest& request) const;
			DescribeCollectorOutcome describeCollector(const Model::DescribeCollectorRequest &request)const;
			void describeCollectorAsync(const Model::DescribeCollectorRequest& request, const DescribeCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCollectorOutcomeCallable describeCollectorCallable(const Model::DescribeCollectorRequest& request) const;
			DescribeComponentIndexOutcome describeComponentIndex(const Model::DescribeComponentIndexRequest &request)const;
			void describeComponentIndexAsync(const Model::DescribeComponentIndexRequest& request, const DescribeComponentIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeComponentIndexOutcomeCallable describeComponentIndexCallable(const Model::DescribeComponentIndexRequest& request) const;
			DescribeConnectableClustersOutcome describeConnectableClusters(const Model::DescribeConnectableClustersRequest &request)const;
			void describeConnectableClustersAsync(const Model::DescribeConnectableClustersRequest& request, const DescribeConnectableClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConnectableClustersOutcomeCallable describeConnectableClustersCallable(const Model::DescribeConnectableClustersRequest& request) const;
			DescribeDeprecatedTemplateOutcome describeDeprecatedTemplate(const Model::DescribeDeprecatedTemplateRequest &request)const;
			void describeDeprecatedTemplateAsync(const Model::DescribeDeprecatedTemplateRequest& request, const DescribeDeprecatedTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeprecatedTemplateOutcomeCallable describeDeprecatedTemplateCallable(const Model::DescribeDeprecatedTemplateRequest& request) const;
			DescribeDiagnoseReportOutcome describeDiagnoseReport(const Model::DescribeDiagnoseReportRequest &request)const;
			void describeDiagnoseReportAsync(const Model::DescribeDiagnoseReportRequest& request, const DescribeDiagnoseReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnoseReportOutcomeCallable describeDiagnoseReportCallable(const Model::DescribeDiagnoseReportRequest& request) const;
			DescribeDiagnosisSettingsOutcome describeDiagnosisSettings(const Model::DescribeDiagnosisSettingsRequest &request)const;
			void describeDiagnosisSettingsAsync(const Model::DescribeDiagnosisSettingsRequest& request, const DescribeDiagnosisSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnosisSettingsOutcomeCallable describeDiagnosisSettingsCallable(const Model::DescribeDiagnosisSettingsRequest& request) const;
			DescribeDynamicSettingsOutcome describeDynamicSettings(const Model::DescribeDynamicSettingsRequest &request)const;
			void describeDynamicSettingsAsync(const Model::DescribeDynamicSettingsRequest& request, const DescribeDynamicSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDynamicSettingsOutcomeCallable describeDynamicSettingsCallable(const Model::DescribeDynamicSettingsRequest& request) const;
			DescribeElasticsearchHealthOutcome describeElasticsearchHealth(const Model::DescribeElasticsearchHealthRequest &request)const;
			void describeElasticsearchHealthAsync(const Model::DescribeElasticsearchHealthRequest& request, const DescribeElasticsearchHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElasticsearchHealthOutcomeCallable describeElasticsearchHealthCallable(const Model::DescribeElasticsearchHealthRequest& request) const;
			DescribeILMPolicyOutcome describeILMPolicy(const Model::DescribeILMPolicyRequest &request)const;
			void describeILMPolicyAsync(const Model::DescribeILMPolicyRequest& request, const DescribeILMPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeILMPolicyOutcomeCallable describeILMPolicyCallable(const Model::DescribeILMPolicyRequest& request) const;
			DescribeIndexTemplateOutcome describeIndexTemplate(const Model::DescribeIndexTemplateRequest &request)const;
			void describeIndexTemplateAsync(const Model::DescribeIndexTemplateRequest& request, const DescribeIndexTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIndexTemplateOutcomeCallable describeIndexTemplateCallable(const Model::DescribeIndexTemplateRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeKibanaSettingsOutcome describeKibanaSettings(const Model::DescribeKibanaSettingsRequest &request)const;
			void describeKibanaSettingsAsync(const Model::DescribeKibanaSettingsRequest& request, const DescribeKibanaSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKibanaSettingsOutcomeCallable describeKibanaSettingsCallable(const Model::DescribeKibanaSettingsRequest& request) const;
			DescribeLogstashOutcome describeLogstash(const Model::DescribeLogstashRequest &request)const;
			void describeLogstashAsync(const Model::DescribeLogstashRequest& request, const DescribeLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogstashOutcomeCallable describeLogstashCallable(const Model::DescribeLogstashRequest& request) const;
			DescribePipelineOutcome describePipeline(const Model::DescribePipelineRequest &request)const;
			void describePipelineAsync(const Model::DescribePipelineRequest& request, const DescribePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePipelineOutcomeCallable describePipelineCallable(const Model::DescribePipelineRequest& request) const;
			DescribePipelineManagementConfigOutcome describePipelineManagementConfig(const Model::DescribePipelineManagementConfigRequest &request)const;
			void describePipelineManagementConfigAsync(const Model::DescribePipelineManagementConfigRequest& request, const DescribePipelineManagementConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePipelineManagementConfigOutcomeCallable describePipelineManagementConfigCallable(const Model::DescribePipelineManagementConfigRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSnapshotSettingOutcome describeSnapshotSetting(const Model::DescribeSnapshotSettingRequest &request)const;
			void describeSnapshotSettingAsync(const Model::DescribeSnapshotSettingRequest& request, const DescribeSnapshotSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotSettingOutcomeCallable describeSnapshotSettingCallable(const Model::DescribeSnapshotSettingRequest& request) const;
			DescribeTemplatesOutcome describeTemplates(const Model::DescribeTemplatesRequest &request)const;
			void describeTemplatesAsync(const Model::DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTemplatesOutcomeCallable describeTemplatesCallable(const Model::DescribeTemplatesRequest& request) const;
			DescribeXpackMonitorConfigOutcome describeXpackMonitorConfig(const Model::DescribeXpackMonitorConfigRequest &request)const;
			void describeXpackMonitorConfigAsync(const Model::DescribeXpackMonitorConfigRequest& request, const DescribeXpackMonitorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeXpackMonitorConfigOutcomeCallable describeXpackMonitorConfigCallable(const Model::DescribeXpackMonitorConfigRequest& request) const;
			DiagnoseInstanceOutcome diagnoseInstance(const Model::DiagnoseInstanceRequest &request)const;
			void diagnoseInstanceAsync(const Model::DiagnoseInstanceRequest& request, const DiagnoseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DiagnoseInstanceOutcomeCallable diagnoseInstanceCallable(const Model::DiagnoseInstanceRequest& request) const;
			DisableKibanaPvlNetworkOutcome disableKibanaPvlNetwork(const Model::DisableKibanaPvlNetworkRequest &request)const;
			void disableKibanaPvlNetworkAsync(const Model::DisableKibanaPvlNetworkRequest& request, const DisableKibanaPvlNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableKibanaPvlNetworkOutcomeCallable disableKibanaPvlNetworkCallable(const Model::DisableKibanaPvlNetworkRequest& request) const;
			EnableKibanaPvlNetworkOutcome enableKibanaPvlNetwork(const Model::EnableKibanaPvlNetworkRequest &request)const;
			void enableKibanaPvlNetworkAsync(const Model::EnableKibanaPvlNetworkRequest& request, const EnableKibanaPvlNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableKibanaPvlNetworkOutcomeCallable enableKibanaPvlNetworkCallable(const Model::EnableKibanaPvlNetworkRequest& request) const;
			EstimatedLogstashRestartTimeOutcome estimatedLogstashRestartTime(const Model::EstimatedLogstashRestartTimeRequest &request)const;
			void estimatedLogstashRestartTimeAsync(const Model::EstimatedLogstashRestartTimeRequest& request, const EstimatedLogstashRestartTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EstimatedLogstashRestartTimeOutcomeCallable estimatedLogstashRestartTimeCallable(const Model::EstimatedLogstashRestartTimeRequest& request) const;
			EstimatedRestartTimeOutcome estimatedRestartTime(const Model::EstimatedRestartTimeRequest &request)const;
			void estimatedRestartTimeAsync(const Model::EstimatedRestartTimeRequest& request, const EstimatedRestartTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EstimatedRestartTimeOutcomeCallable estimatedRestartTimeCallable(const Model::EstimatedRestartTimeRequest& request) const;
			GetClusterDataInformationOutcome getClusterDataInformation(const Model::GetClusterDataInformationRequest &request)const;
			void getClusterDataInformationAsync(const Model::GetClusterDataInformationRequest& request, const GetClusterDataInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterDataInformationOutcomeCallable getClusterDataInformationCallable(const Model::GetClusterDataInformationRequest& request) const;
			GetElastictaskOutcome getElastictask(const Model::GetElastictaskRequest &request)const;
			void getElastictaskAsync(const Model::GetElastictaskRequest& request, const GetElastictaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetElastictaskOutcomeCallable getElastictaskCallable(const Model::GetElastictaskRequest& request) const;
			GetEmonGrafanaAlertsOutcome getEmonGrafanaAlerts(const Model::GetEmonGrafanaAlertsRequest &request)const;
			void getEmonGrafanaAlertsAsync(const Model::GetEmonGrafanaAlertsRequest& request, const GetEmonGrafanaAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEmonGrafanaAlertsOutcomeCallable getEmonGrafanaAlertsCallable(const Model::GetEmonGrafanaAlertsRequest& request) const;
			GetEmonGrafanaDashboardsOutcome getEmonGrafanaDashboards(const Model::GetEmonGrafanaDashboardsRequest &request)const;
			void getEmonGrafanaDashboardsAsync(const Model::GetEmonGrafanaDashboardsRequest& request, const GetEmonGrafanaDashboardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEmonGrafanaDashboardsOutcomeCallable getEmonGrafanaDashboardsCallable(const Model::GetEmonGrafanaDashboardsRequest& request) const;
			GetEmonMonitorDataOutcome getEmonMonitorData(const Model::GetEmonMonitorDataRequest &request)const;
			void getEmonMonitorDataAsync(const Model::GetEmonMonitorDataRequest& request, const GetEmonMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEmonMonitorDataOutcomeCallable getEmonMonitorDataCallable(const Model::GetEmonMonitorDataRequest& request) const;
			GetOpenStoreUsageOutcome getOpenStoreUsage(const Model::GetOpenStoreUsageRequest &request)const;
			void getOpenStoreUsageAsync(const Model::GetOpenStoreUsageRequest& request, const GetOpenStoreUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpenStoreUsageOutcomeCallable getOpenStoreUsageCallable(const Model::GetOpenStoreUsageRequest& request) const;
			GetRegionConfigurationOutcome getRegionConfiguration(const Model::GetRegionConfigurationRequest &request)const;
			void getRegionConfigurationAsync(const Model::GetRegionConfigurationRequest& request, const GetRegionConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRegionConfigurationOutcomeCallable getRegionConfigurationCallable(const Model::GetRegionConfigurationRequest& request) const;
			GetRegionalInstanceConfigOutcome getRegionalInstanceConfig(const Model::GetRegionalInstanceConfigRequest &request)const;
			void getRegionalInstanceConfigAsync(const Model::GetRegionalInstanceConfigRequest& request, const GetRegionalInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRegionalInstanceConfigOutcomeCallable getRegionalInstanceConfigCallable(const Model::GetRegionalInstanceConfigRequest& request) const;
			GetSuggestShrinkableNodesOutcome getSuggestShrinkableNodes(const Model::GetSuggestShrinkableNodesRequest &request)const;
			void getSuggestShrinkableNodesAsync(const Model::GetSuggestShrinkableNodesRequest& request, const GetSuggestShrinkableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSuggestShrinkableNodesOutcomeCallable getSuggestShrinkableNodesCallable(const Model::GetSuggestShrinkableNodesRequest& request) const;
			GetTransferableNodesOutcome getTransferableNodes(const Model::GetTransferableNodesRequest &request)const;
			void getTransferableNodesAsync(const Model::GetTransferableNodesRequest& request, const GetTransferableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTransferableNodesOutcomeCallable getTransferableNodesCallable(const Model::GetTransferableNodesRequest& request) const;
			InitializeOperationRoleOutcome initializeOperationRole(const Model::InitializeOperationRoleRequest &request)const;
			void initializeOperationRoleAsync(const Model::InitializeOperationRoleRequest& request, const InitializeOperationRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitializeOperationRoleOutcomeCallable initializeOperationRoleCallable(const Model::InitializeOperationRoleRequest& request) const;
			InstallAckOperatorOutcome installAckOperator(const Model::InstallAckOperatorRequest &request)const;
			void installAckOperatorAsync(const Model::InstallAckOperatorRequest& request, const InstallAckOperatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallAckOperatorOutcomeCallable installAckOperatorCallable(const Model::InstallAckOperatorRequest& request) const;
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
			ListAckClustersOutcome listAckClusters(const Model::ListAckClustersRequest &request)const;
			void listAckClustersAsync(const Model::ListAckClustersRequest& request, const ListAckClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAckClustersOutcomeCallable listAckClustersCallable(const Model::ListAckClustersRequest& request) const;
			ListAckNamespacesOutcome listAckNamespaces(const Model::ListAckNamespacesRequest &request)const;
			void listAckNamespacesAsync(const Model::ListAckNamespacesRequest& request, const ListAckNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAckNamespacesOutcomeCallable listAckNamespacesCallable(const Model::ListAckNamespacesRequest& request) const;
			ListActionRecordsOutcome listActionRecords(const Model::ListActionRecordsRequest &request)const;
			void listActionRecordsAsync(const Model::ListActionRecordsRequest& request, const ListActionRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListActionRecordsOutcomeCallable listActionRecordsCallable(const Model::ListActionRecordsRequest& request) const;
			ListAllNodeOutcome listAllNode(const Model::ListAllNodeRequest &request)const;
			void listAllNodeAsync(const Model::ListAllNodeRequest& request, const ListAllNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllNodeOutcomeCallable listAllNodeCallable(const Model::ListAllNodeRequest& request) const;
			ListAlternativeSnapshotReposOutcome listAlternativeSnapshotRepos(const Model::ListAlternativeSnapshotReposRequest &request)const;
			void listAlternativeSnapshotReposAsync(const Model::ListAlternativeSnapshotReposRequest& request, const ListAlternativeSnapshotReposAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlternativeSnapshotReposOutcomeCallable listAlternativeSnapshotReposCallable(const Model::ListAlternativeSnapshotReposRequest& request) const;
			ListApmOutcome listApm(const Model::ListApmRequest &request)const;
			void listApmAsync(const Model::ListApmRequest& request, const ListApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApmOutcomeCallable listApmCallable(const Model::ListApmRequest& request) const;
			ListAvailableEsInstanceIdsOutcome listAvailableEsInstanceIds(const Model::ListAvailableEsInstanceIdsRequest &request)const;
			void listAvailableEsInstanceIdsAsync(const Model::ListAvailableEsInstanceIdsRequest& request, const ListAvailableEsInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAvailableEsInstanceIdsOutcomeCallable listAvailableEsInstanceIdsCallable(const Model::ListAvailableEsInstanceIdsRequest& request) const;
			ListCollectorsOutcome listCollectors(const Model::ListCollectorsRequest &request)const;
			void listCollectorsAsync(const Model::ListCollectorsRequest& request, const ListCollectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCollectorsOutcomeCallable listCollectorsCallable(const Model::ListCollectorsRequest& request) const;
			ListComponentIndicesOutcome listComponentIndices(const Model::ListComponentIndicesRequest &request)const;
			void listComponentIndicesAsync(const Model::ListComponentIndicesRequest& request, const ListComponentIndicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListComponentIndicesOutcomeCallable listComponentIndicesCallable(const Model::ListComponentIndicesRequest& request) const;
			ListConnectedClustersOutcome listConnectedClusters(const Model::ListConnectedClustersRequest &request)const;
			void listConnectedClustersAsync(const Model::ListConnectedClustersRequest& request, const ListConnectedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConnectedClustersOutcomeCallable listConnectedClustersCallable(const Model::ListConnectedClustersRequest& request) const;
			ListDataStreamsOutcome listDataStreams(const Model::ListDataStreamsRequest &request)const;
			void listDataStreamsAsync(const Model::ListDataStreamsRequest& request, const ListDataStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataStreamsOutcomeCallable listDataStreamsCallable(const Model::ListDataStreamsRequest& request) const;
			ListDataTasksOutcome listDataTasks(const Model::ListDataTasksRequest &request)const;
			void listDataTasksAsync(const Model::ListDataTasksRequest& request, const ListDataTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataTasksOutcomeCallable listDataTasksCallable(const Model::ListDataTasksRequest& request) const;
			ListDefaultCollectorConfigurationsOutcome listDefaultCollectorConfigurations(const Model::ListDefaultCollectorConfigurationsRequest &request)const;
			void listDefaultCollectorConfigurationsAsync(const Model::ListDefaultCollectorConfigurationsRequest& request, const ListDefaultCollectorConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDefaultCollectorConfigurationsOutcomeCallable listDefaultCollectorConfigurationsCallable(const Model::ListDefaultCollectorConfigurationsRequest& request) const;
			ListDeprecatedTemplatesOutcome listDeprecatedTemplates(const Model::ListDeprecatedTemplatesRequest &request)const;
			void listDeprecatedTemplatesAsync(const Model::ListDeprecatedTemplatesRequest& request, const ListDeprecatedTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeprecatedTemplatesOutcomeCallable listDeprecatedTemplatesCallable(const Model::ListDeprecatedTemplatesRequest& request) const;
			ListDiagnoseIndicesOutcome listDiagnoseIndices(const Model::ListDiagnoseIndicesRequest &request)const;
			void listDiagnoseIndicesAsync(const Model::ListDiagnoseIndicesRequest& request, const ListDiagnoseIndicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDiagnoseIndicesOutcomeCallable listDiagnoseIndicesCallable(const Model::ListDiagnoseIndicesRequest& request) const;
			ListDiagnoseReportOutcome listDiagnoseReport(const Model::ListDiagnoseReportRequest &request)const;
			void listDiagnoseReportAsync(const Model::ListDiagnoseReportRequest& request, const ListDiagnoseReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDiagnoseReportOutcomeCallable listDiagnoseReportCallable(const Model::ListDiagnoseReportRequest& request) const;
			ListDiagnoseReportIdsOutcome listDiagnoseReportIds(const Model::ListDiagnoseReportIdsRequest &request)const;
			void listDiagnoseReportIdsAsync(const Model::ListDiagnoseReportIdsRequest& request, const ListDiagnoseReportIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDiagnoseReportIdsOutcomeCallable listDiagnoseReportIdsCallable(const Model::ListDiagnoseReportIdsRequest& request) const;
			ListDiagnosisItemsOutcome listDiagnosisItems(const Model::ListDiagnosisItemsRequest &request)const;
			void listDiagnosisItemsAsync(const Model::ListDiagnosisItemsRequest& request, const ListDiagnosisItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDiagnosisItemsOutcomeCallable listDiagnosisItemsCallable(const Model::ListDiagnosisItemsRequest& request) const;
			ListDictInformationOutcome listDictInformation(const Model::ListDictInformationRequest &request)const;
			void listDictInformationAsync(const Model::ListDictInformationRequest& request, const ListDictInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDictInformationOutcomeCallable listDictInformationCallable(const Model::ListDictInformationRequest& request) const;
			ListDictsOutcome listDicts(const Model::ListDictsRequest &request)const;
			void listDictsAsync(const Model::ListDictsRequest& request, const ListDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDictsOutcomeCallable listDictsCallable(const Model::ListDictsRequest& request) const;
			ListEcsInstancesOutcome listEcsInstances(const Model::ListEcsInstancesRequest &request)const;
			void listEcsInstancesAsync(const Model::ListEcsInstancesRequest& request, const ListEcsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEcsInstancesOutcomeCallable listEcsInstancesCallable(const Model::ListEcsInstancesRequest& request) const;
			ListExtendfilesOutcome listExtendfiles(const Model::ListExtendfilesRequest &request)const;
			void listExtendfilesAsync(const Model::ListExtendfilesRequest& request, const ListExtendfilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExtendfilesOutcomeCallable listExtendfilesCallable(const Model::ListExtendfilesRequest& request) const;
			ListILMPoliciesOutcome listILMPolicies(const Model::ListILMPoliciesRequest &request)const;
			void listILMPoliciesAsync(const Model::ListILMPoliciesRequest& request, const ListILMPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListILMPoliciesOutcomeCallable listILMPoliciesCallable(const Model::ListILMPoliciesRequest& request) const;
			ListIndexTemplatesOutcome listIndexTemplates(const Model::ListIndexTemplatesRequest &request)const;
			void listIndexTemplatesAsync(const Model::ListIndexTemplatesRequest& request, const ListIndexTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIndexTemplatesOutcomeCallable listIndexTemplatesCallable(const Model::ListIndexTemplatesRequest& request) const;
			ListInstanceOutcome listInstance(const Model::ListInstanceRequest &request)const;
			void listInstanceAsync(const Model::ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceOutcomeCallable listInstanceCallable(const Model::ListInstanceRequest& request) const;
			ListInstanceHistoryEventsOutcome listInstanceHistoryEvents(const Model::ListInstanceHistoryEventsRequest &request)const;
			void listInstanceHistoryEventsAsync(const Model::ListInstanceHistoryEventsRequest& request, const ListInstanceHistoryEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceHistoryEventsOutcomeCallable listInstanceHistoryEventsCallable(const Model::ListInstanceHistoryEventsRequest& request) const;
			ListInstanceIndicesOutcome listInstanceIndices(const Model::ListInstanceIndicesRequest &request)const;
			void listInstanceIndicesAsync(const Model::ListInstanceIndicesRequest& request, const ListInstanceIndicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceIndicesOutcomeCallable listInstanceIndicesCallable(const Model::ListInstanceIndicesRequest& request) const;
			ListKibanaPluginsOutcome listKibanaPlugins(const Model::ListKibanaPluginsRequest &request)const;
			void listKibanaPluginsAsync(const Model::ListKibanaPluginsRequest& request, const ListKibanaPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListKibanaPluginsOutcomeCallable listKibanaPluginsCallable(const Model::ListKibanaPluginsRequest& request) const;
			ListKibanaPvlNetworkOutcome listKibanaPvlNetwork(const Model::ListKibanaPvlNetworkRequest &request)const;
			void listKibanaPvlNetworkAsync(const Model::ListKibanaPvlNetworkRequest& request, const ListKibanaPvlNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListKibanaPvlNetworkOutcomeCallable listKibanaPvlNetworkCallable(const Model::ListKibanaPvlNetworkRequest& request) const;
			ListLogstashOutcome listLogstash(const Model::ListLogstashRequest &request)const;
			void listLogstashAsync(const Model::ListLogstashRequest& request, const ListLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogstashOutcomeCallable listLogstashCallable(const Model::ListLogstashRequest& request) const;
			ListLogstashLogOutcome listLogstashLog(const Model::ListLogstashLogRequest &request)const;
			void listLogstashLogAsync(const Model::ListLogstashLogRequest& request, const ListLogstashLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogstashLogOutcomeCallable listLogstashLogCallable(const Model::ListLogstashLogRequest& request) const;
			ListLogstashPluginsOutcome listLogstashPlugins(const Model::ListLogstashPluginsRequest &request)const;
			void listLogstashPluginsAsync(const Model::ListLogstashPluginsRequest& request, const ListLogstashPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogstashPluginsOutcomeCallable listLogstashPluginsCallable(const Model::ListLogstashPluginsRequest& request) const;
			ListNodesOutcome listNodes(const Model::ListNodesRequest &request)const;
			void listNodesAsync(const Model::ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesOutcomeCallable listNodesCallable(const Model::ListNodesRequest& request) const;
			ListPipelineOutcome listPipeline(const Model::ListPipelineRequest &request)const;
			void listPipelineAsync(const Model::ListPipelineRequest& request, const ListPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelineOutcomeCallable listPipelineCallable(const Model::ListPipelineRequest& request) const;
			ListPipelineIdsOutcome listPipelineIds(const Model::ListPipelineIdsRequest &request)const;
			void listPipelineIdsAsync(const Model::ListPipelineIdsRequest& request, const ListPipelineIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelineIdsOutcomeCallable listPipelineIdsCallable(const Model::ListPipelineIdsRequest& request) const;
			ListPluginsOutcome listPlugins(const Model::ListPluginsRequest &request)const;
			void listPluginsAsync(const Model::ListPluginsRequest& request, const ListPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPluginsOutcomeCallable listPluginsCallable(const Model::ListPluginsRequest& request) const;
			ListSearchLogOutcome listSearchLog(const Model::ListSearchLogRequest &request)const;
			void listSearchLogAsync(const Model::ListSearchLogRequest& request, const ListSearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSearchLogOutcomeCallable listSearchLogCallable(const Model::ListSearchLogRequest& request) const;
			ListShardRecoveriesOutcome listShardRecoveries(const Model::ListShardRecoveriesRequest &request)const;
			void listShardRecoveriesAsync(const Model::ListShardRecoveriesRequest& request, const ListShardRecoveriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListShardRecoveriesOutcomeCallable listShardRecoveriesCallable(const Model::ListShardRecoveriesRequest& request) const;
			ListSnapshotReposByInstanceIdOutcome listSnapshotReposByInstanceId(const Model::ListSnapshotReposByInstanceIdRequest &request)const;
			void listSnapshotReposByInstanceIdAsync(const Model::ListSnapshotReposByInstanceIdRequest& request, const ListSnapshotReposByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSnapshotReposByInstanceIdOutcomeCallable listSnapshotReposByInstanceIdCallable(const Model::ListSnapshotReposByInstanceIdRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagsOutcome listTags(const Model::ListTagsRequest &request)const;
			void listTagsAsync(const Model::ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsOutcomeCallable listTagsCallable(const Model::ListTagsRequest& request) const;
			ListVpcEndpointsOutcome listVpcEndpoints(const Model::ListVpcEndpointsRequest &request)const;
			void listVpcEndpointsAsync(const Model::ListVpcEndpointsRequest& request, const ListVpcEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointsOutcomeCallable listVpcEndpointsCallable(const Model::ListVpcEndpointsRequest& request) const;
			MigrateToOtherZoneOutcome migrateToOtherZone(const Model::MigrateToOtherZoneRequest &request)const;
			void migrateToOtherZoneAsync(const Model::MigrateToOtherZoneRequest& request, const MigrateToOtherZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateToOtherZoneOutcomeCallable migrateToOtherZoneCallable(const Model::MigrateToOtherZoneRequest& request) const;
			ModifyDeployMachineOutcome modifyDeployMachine(const Model::ModifyDeployMachineRequest &request)const;
			void modifyDeployMachineAsync(const Model::ModifyDeployMachineRequest& request, const ModifyDeployMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeployMachineOutcomeCallable modifyDeployMachineCallable(const Model::ModifyDeployMachineRequest& request) const;
			ModifyElastictaskOutcome modifyElastictask(const Model::ModifyElastictaskRequest &request)const;
			void modifyElastictaskAsync(const Model::ModifyElastictaskRequest& request, const ModifyElastictaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyElastictaskOutcomeCallable modifyElastictaskCallable(const Model::ModifyElastictaskRequest& request) const;
			ModifyInstanceMaintainTimeOutcome modifyInstanceMaintainTime(const Model::ModifyInstanceMaintainTimeRequest &request)const;
			void modifyInstanceMaintainTimeAsync(const Model::ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceMaintainTimeOutcomeCallable modifyInstanceMaintainTimeCallable(const Model::ModifyInstanceMaintainTimeRequest& request) const;
			ModifyWhiteIpsOutcome modifyWhiteIps(const Model::ModifyWhiteIpsRequest &request)const;
			void modifyWhiteIpsAsync(const Model::ModifyWhiteIpsRequest& request, const ModifyWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWhiteIpsOutcomeCallable modifyWhiteIpsCallable(const Model::ModifyWhiteIpsRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			OpenDiagnosisOutcome openDiagnosis(const Model::OpenDiagnosisRequest &request)const;
			void openDiagnosisAsync(const Model::OpenDiagnosisRequest& request, const OpenDiagnosisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenDiagnosisOutcomeCallable openDiagnosisCallable(const Model::OpenDiagnosisRequest& request) const;
			OpenHttpsOutcome openHttps(const Model::OpenHttpsRequest &request)const;
			void openHttpsAsync(const Model::OpenHttpsRequest& request, const OpenHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenHttpsOutcomeCallable openHttpsCallable(const Model::OpenHttpsRequest& request) const;
			PostEmonTryAlarmRuleOutcome postEmonTryAlarmRule(const Model::PostEmonTryAlarmRuleRequest &request)const;
			void postEmonTryAlarmRuleAsync(const Model::PostEmonTryAlarmRuleRequest& request, const PostEmonTryAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PostEmonTryAlarmRuleOutcomeCallable postEmonTryAlarmRuleCallable(const Model::PostEmonTryAlarmRuleRequest& request) const;
			RecommendTemplatesOutcome recommendTemplates(const Model::RecommendTemplatesRequest &request)const;
			void recommendTemplatesAsync(const Model::RecommendTemplatesRequest& request, const RecommendTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecommendTemplatesOutcomeCallable recommendTemplatesCallable(const Model::RecommendTemplatesRequest& request) const;
			ReinstallCollectorOutcome reinstallCollector(const Model::ReinstallCollectorRequest &request)const;
			void reinstallCollectorAsync(const Model::ReinstallCollectorRequest& request, const ReinstallCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReinstallCollectorOutcomeCallable reinstallCollectorCallable(const Model::ReinstallCollectorRequest& request) const;
			RemoveApmOutcome removeApm(const Model::RemoveApmRequest &request)const;
			void removeApmAsync(const Model::RemoveApmRequest& request, const RemoveApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveApmOutcomeCallable removeApmCallable(const Model::RemoveApmRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			RenewLogstashOutcome renewLogstash(const Model::RenewLogstashRequest &request)const;
			void renewLogstashAsync(const Model::RenewLogstashRequest& request, const RenewLogstashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewLogstashOutcomeCallable renewLogstashCallable(const Model::RenewLogstashRequest& request) const;
			RestartCollectorOutcome restartCollector(const Model::RestartCollectorRequest &request)const;
			void restartCollectorAsync(const Model::RestartCollectorRequest& request, const RestartCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartCollectorOutcomeCallable restartCollectorCallable(const Model::RestartCollectorRequest& request) const;
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
			RolloverDataStreamOutcome rolloverDataStream(const Model::RolloverDataStreamRequest &request)const;
			void rolloverDataStreamAsync(const Model::RolloverDataStreamRequest& request, const RolloverDataStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RolloverDataStreamOutcomeCallable rolloverDataStreamCallable(const Model::RolloverDataStreamRequest& request) const;
			RunPipelinesOutcome runPipelines(const Model::RunPipelinesRequest &request)const;
			void runPipelinesAsync(const Model::RunPipelinesRequest& request, const RunPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunPipelinesOutcomeCallable runPipelinesCallable(const Model::RunPipelinesRequest& request) const;
			ShrinkNodeOutcome shrinkNode(const Model::ShrinkNodeRequest &request)const;
			void shrinkNodeAsync(const Model::ShrinkNodeRequest& request, const ShrinkNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShrinkNodeOutcomeCallable shrinkNodeCallable(const Model::ShrinkNodeRequest& request) const;
			StartApmOutcome startApm(const Model::StartApmRequest &request)const;
			void startApmAsync(const Model::StartApmRequest& request, const StartApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartApmOutcomeCallable startApmCallable(const Model::StartApmRequest& request) const;
			StartCollectorOutcome startCollector(const Model::StartCollectorRequest &request)const;
			void startCollectorAsync(const Model::StartCollectorRequest& request, const StartCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartCollectorOutcomeCallable startCollectorCallable(const Model::StartCollectorRequest& request) const;
			StopApmOutcome stopApm(const Model::StopApmRequest &request)const;
			void stopApmAsync(const Model::StopApmRequest& request, const StopApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopApmOutcomeCallable stopApmCallable(const Model::StopApmRequest& request) const;
			StopCollectorOutcome stopCollector(const Model::StopCollectorRequest &request)const;
			void stopCollectorAsync(const Model::StopCollectorRequest& request, const StopCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopCollectorOutcomeCallable stopCollectorCallable(const Model::StopCollectorRequest& request) const;
			StopPipelinesOutcome stopPipelines(const Model::StopPipelinesRequest &request)const;
			void stopPipelinesAsync(const Model::StopPipelinesRequest& request, const StopPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopPipelinesOutcomeCallable stopPipelinesCallable(const Model::StopPipelinesRequest& request) const;
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
			UpdateApmOutcome updateApm(const Model::UpdateApmRequest &request)const;
			void updateApmAsync(const Model::UpdateApmRequest& request, const UpdateApmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApmOutcomeCallable updateApmCallable(const Model::UpdateApmRequest& request) const;
			UpdateBlackIpsOutcome updateBlackIps(const Model::UpdateBlackIpsRequest &request)const;
			void updateBlackIpsAsync(const Model::UpdateBlackIpsRequest& request, const UpdateBlackIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBlackIpsOutcomeCallable updateBlackIpsCallable(const Model::UpdateBlackIpsRequest& request) const;
			UpdateCollectorOutcome updateCollector(const Model::UpdateCollectorRequest &request)const;
			void updateCollectorAsync(const Model::UpdateCollectorRequest& request, const UpdateCollectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCollectorOutcomeCallable updateCollectorCallable(const Model::UpdateCollectorRequest& request) const;
			UpdateCollectorNameOutcome updateCollectorName(const Model::UpdateCollectorNameRequest &request)const;
			void updateCollectorNameAsync(const Model::UpdateCollectorNameRequest& request, const UpdateCollectorNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCollectorNameOutcomeCallable updateCollectorNameCallable(const Model::UpdateCollectorNameRequest& request) const;
			UpdateComponentIndexOutcome updateComponentIndex(const Model::UpdateComponentIndexRequest &request)const;
			void updateComponentIndexAsync(const Model::UpdateComponentIndexRequest& request, const UpdateComponentIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateComponentIndexOutcomeCallable updateComponentIndexCallable(const Model::UpdateComponentIndexRequest& request) const;
			UpdateDescriptionOutcome updateDescription(const Model::UpdateDescriptionRequest &request)const;
			void updateDescriptionAsync(const Model::UpdateDescriptionRequest& request, const UpdateDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDescriptionOutcomeCallable updateDescriptionCallable(const Model::UpdateDescriptionRequest& request) const;
			UpdateDiagnosisSettingsOutcome updateDiagnosisSettings(const Model::UpdateDiagnosisSettingsRequest &request)const;
			void updateDiagnosisSettingsAsync(const Model::UpdateDiagnosisSettingsRequest& request, const UpdateDiagnosisSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDiagnosisSettingsOutcomeCallable updateDiagnosisSettingsCallable(const Model::UpdateDiagnosisSettingsRequest& request) const;
			UpdateDictOutcome updateDict(const Model::UpdateDictRequest &request)const;
			void updateDictAsync(const Model::UpdateDictRequest& request, const UpdateDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDictOutcomeCallable updateDictCallable(const Model::UpdateDictRequest& request) const;
			UpdateDynamicSettingsOutcome updateDynamicSettings(const Model::UpdateDynamicSettingsRequest &request)const;
			void updateDynamicSettingsAsync(const Model::UpdateDynamicSettingsRequest& request, const UpdateDynamicSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDynamicSettingsOutcomeCallable updateDynamicSettingsCallable(const Model::UpdateDynamicSettingsRequest& request) const;
			UpdateExtendConfigOutcome updateExtendConfig(const Model::UpdateExtendConfigRequest &request)const;
			void updateExtendConfigAsync(const Model::UpdateExtendConfigRequest& request, const UpdateExtendConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateExtendConfigOutcomeCallable updateExtendConfigCallable(const Model::UpdateExtendConfigRequest& request) const;
			UpdateExtendfilesOutcome updateExtendfiles(const Model::UpdateExtendfilesRequest &request)const;
			void updateExtendfilesAsync(const Model::UpdateExtendfilesRequest& request, const UpdateExtendfilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateExtendfilesOutcomeCallable updateExtendfilesCallable(const Model::UpdateExtendfilesRequest& request) const;
			UpdateHotIkDictsOutcome updateHotIkDicts(const Model::UpdateHotIkDictsRequest &request)const;
			void updateHotIkDictsAsync(const Model::UpdateHotIkDictsRequest& request, const UpdateHotIkDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHotIkDictsOutcomeCallable updateHotIkDictsCallable(const Model::UpdateHotIkDictsRequest& request) const;
			UpdateILMPolicyOutcome updateILMPolicy(const Model::UpdateILMPolicyRequest &request)const;
			void updateILMPolicyAsync(const Model::UpdateILMPolicyRequest& request, const UpdateILMPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateILMPolicyOutcomeCallable updateILMPolicyCallable(const Model::UpdateILMPolicyRequest& request) const;
			UpdateIndexTemplateOutcome updateIndexTemplate(const Model::UpdateIndexTemplateRequest &request)const;
			void updateIndexTemplateAsync(const Model::UpdateIndexTemplateRequest& request, const UpdateIndexTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIndexTemplateOutcomeCallable updateIndexTemplateCallable(const Model::UpdateIndexTemplateRequest& request) const;
			UpdateInstanceOutcome updateInstance(const Model::UpdateInstanceRequest &request)const;
			void updateInstanceAsync(const Model::UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceOutcomeCallable updateInstanceCallable(const Model::UpdateInstanceRequest& request) const;
			UpdateInstanceChargeTypeOutcome updateInstanceChargeType(const Model::UpdateInstanceChargeTypeRequest &request)const;
			void updateInstanceChargeTypeAsync(const Model::UpdateInstanceChargeTypeRequest& request, const UpdateInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceChargeTypeOutcomeCallable updateInstanceChargeTypeCallable(const Model::UpdateInstanceChargeTypeRequest& request) const;
			UpdateInstanceSettingsOutcome updateInstanceSettings(const Model::UpdateInstanceSettingsRequest &request)const;
			void updateInstanceSettingsAsync(const Model::UpdateInstanceSettingsRequest& request, const UpdateInstanceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceSettingsOutcomeCallable updateInstanceSettingsCallable(const Model::UpdateInstanceSettingsRequest& request) const;
			UpdateKibanaPvlNetworkOutcome updateKibanaPvlNetwork(const Model::UpdateKibanaPvlNetworkRequest &request)const;
			void updateKibanaPvlNetworkAsync(const Model::UpdateKibanaPvlNetworkRequest& request, const UpdateKibanaPvlNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateKibanaPvlNetworkOutcomeCallable updateKibanaPvlNetworkCallable(const Model::UpdateKibanaPvlNetworkRequest& request) const;
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
			UpdateReadWritePolicyOutcome updateReadWritePolicy(const Model::UpdateReadWritePolicyRequest &request)const;
			void updateReadWritePolicyAsync(const Model::UpdateReadWritePolicyRequest& request, const UpdateReadWritePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateReadWritePolicyOutcomeCallable updateReadWritePolicyCallable(const Model::UpdateReadWritePolicyRequest& request) const;
			UpdateSnapshotSettingOutcome updateSnapshotSetting(const Model::UpdateSnapshotSettingRequest &request)const;
			void updateSnapshotSettingAsync(const Model::UpdateSnapshotSettingRequest& request, const UpdateSnapshotSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSnapshotSettingOutcomeCallable updateSnapshotSettingCallable(const Model::UpdateSnapshotSettingRequest& request) const;
			UpdateSynonymsDictsOutcome updateSynonymsDicts(const Model::UpdateSynonymsDictsRequest &request)const;
			void updateSynonymsDictsAsync(const Model::UpdateSynonymsDictsRequest& request, const UpdateSynonymsDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSynonymsDictsOutcomeCallable updateSynonymsDictsCallable(const Model::UpdateSynonymsDictsRequest& request) const;
			UpdateTemplateOutcome updateTemplate(const Model::UpdateTemplateRequest &request)const;
			void updateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTemplateOutcomeCallable updateTemplateCallable(const Model::UpdateTemplateRequest& request) const;
			UpdateWhiteIpsOutcome updateWhiteIps(const Model::UpdateWhiteIpsRequest &request)const;
			void updateWhiteIpsAsync(const Model::UpdateWhiteIpsRequest& request, const UpdateWhiteIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWhiteIpsOutcomeCallable updateWhiteIpsCallable(const Model::UpdateWhiteIpsRequest& request) const;
			UpdateXpackMonitorConfigOutcome updateXpackMonitorConfig(const Model::UpdateXpackMonitorConfigRequest &request)const;
			void updateXpackMonitorConfigAsync(const Model::UpdateXpackMonitorConfigRequest& request, const UpdateXpackMonitorConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateXpackMonitorConfigOutcomeCallable updateXpackMonitorConfigCallable(const Model::UpdateXpackMonitorConfigRequest& request) const;
			UpgradeEngineVersionOutcome upgradeEngineVersion(const Model::UpgradeEngineVersionRequest &request)const;
			void upgradeEngineVersionAsync(const Model::UpgradeEngineVersionRequest& request, const UpgradeEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeEngineVersionOutcomeCallable upgradeEngineVersionCallable(const Model::UpgradeEngineVersionRequest& request) const;
			ValidateConnectionOutcome validateConnection(const Model::ValidateConnectionRequest &request)const;
			void validateConnectionAsync(const Model::ValidateConnectionRequest& request, const ValidateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateConnectionOutcomeCallable validateConnectionCallable(const Model::ValidateConnectionRequest& request) const;
			ValidateShrinkNodesOutcome validateShrinkNodes(const Model::ValidateShrinkNodesRequest &request)const;
			void validateShrinkNodesAsync(const Model::ValidateShrinkNodesRequest& request, const ValidateShrinkNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateShrinkNodesOutcomeCallable validateShrinkNodesCallable(const Model::ValidateShrinkNodesRequest& request) const;
			ValidateSlrPermissionOutcome validateSlrPermission(const Model::ValidateSlrPermissionRequest &request)const;
			void validateSlrPermissionAsync(const Model::ValidateSlrPermissionRequest& request, const ValidateSlrPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateSlrPermissionOutcomeCallable validateSlrPermissionCallable(const Model::ValidateSlrPermissionRequest& request) const;
			ValidateTransferableNodesOutcome validateTransferableNodes(const Model::ValidateTransferableNodesRequest &request)const;
			void validateTransferableNodesAsync(const Model::ValidateTransferableNodesRequest& request, const ValidateTransferableNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateTransferableNodesOutcomeCallable validateTransferableNodesCallable(const Model::ValidateTransferableNodesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ELASTICSEARCH_ELASTICSEARCHCLIENT_H_
