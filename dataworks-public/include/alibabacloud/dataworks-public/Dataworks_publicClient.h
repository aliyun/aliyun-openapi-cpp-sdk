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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Dataworks_publicExport.h"
#include "model/AbolishDataServiceApiRequest.h"
#include "model/AbolishDataServiceApiResult.h"
#include "model/AddMetaCollectionEntityRequest.h"
#include "model/AddMetaCollectionEntityResult.h"
#include "model/AddProjectMemberToRoleRequest.h"
#include "model/AddProjectMemberToRoleResult.h"
#include "model/AddRecognizeRuleRequest.h"
#include "model/AddRecognizeRuleResult.h"
#include "model/AddToMetaCategoryRequest.h"
#include "model/AddToMetaCategoryResult.h"
#include "model/ApprovePermissionApplyOrderRequest.h"
#include "model/ApprovePermissionApplyOrderResult.h"
#include "model/CallbackExtensionRequest.h"
#include "model/CallbackExtensionResult.h"
#include "model/ChangeResourceManagerResourceGroupRequest.h"
#include "model/ChangeResourceManagerResourceGroupResult.h"
#include "model/CheckFileDeploymentRequest.h"
#include "model/CheckFileDeploymentResult.h"
#include "model/CheckMetaPartitionRequest.h"
#include "model/CheckMetaPartitionResult.h"
#include "model/CheckMetaTableRequest.h"
#include "model/CheckMetaTableResult.h"
#include "model/CreateBaselineRequest.h"
#include "model/CreateBaselineResult.h"
#include "model/CreateBusinessRequest.h"
#include "model/CreateBusinessResult.h"
#include "model/CreateConnectionRequest.h"
#include "model/CreateConnectionResult.h"
#include "model/CreateDIAlarmRuleRequest.h"
#include "model/CreateDIAlarmRuleResult.h"
#include "model/CreateDIJobRequest.h"
#include "model/CreateDIJobResult.h"
#include "model/CreateDISyncTaskRequest.h"
#include "model/CreateDISyncTaskResult.h"
#include "model/CreateDagComplementRequest.h"
#include "model/CreateDagComplementResult.h"
#include "model/CreateDagTestRequest.h"
#include "model/CreateDagTestResult.h"
#include "model/CreateDataServiceApiRequest.h"
#include "model/CreateDataServiceApiResult.h"
#include "model/CreateDataServiceApiAuthorityRequest.h"
#include "model/CreateDataServiceApiAuthorityResult.h"
#include "model/CreateDataServiceFolderRequest.h"
#include "model/CreateDataServiceFolderResult.h"
#include "model/CreateDataServiceGroupRequest.h"
#include "model/CreateDataServiceGroupResult.h"
#include "model/CreateDataSourceRequest.h"
#include "model/CreateDataSourceResult.h"
#include "model/CreateExportMigrationRequest.h"
#include "model/CreateExportMigrationResult.h"
#include "model/CreateFileRequest.h"
#include "model/CreateFileResult.h"
#include "model/CreateFolderRequest.h"
#include "model/CreateFolderResult.h"
#include "model/CreateImportMigrationRequest.h"
#include "model/CreateImportMigrationResult.h"
#include "model/CreateManualDagRequest.h"
#include "model/CreateManualDagResult.h"
#include "model/CreateMetaCategoryRequest.h"
#include "model/CreateMetaCategoryResult.h"
#include "model/CreateMetaCollectionRequest.h"
#include "model/CreateMetaCollectionResult.h"
#include "model/CreatePermissionApplyOrderRequest.h"
#include "model/CreatePermissionApplyOrderResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/CreateProjectMemberRequest.h"
#include "model/CreateProjectMemberResult.h"
#include "model/CreateQualityEntityRequest.h"
#include "model/CreateQualityEntityResult.h"
#include "model/CreateQualityFollowerRequest.h"
#include "model/CreateQualityFollowerResult.h"
#include "model/CreateQualityRelativeNodeRequest.h"
#include "model/CreateQualityRelativeNodeResult.h"
#include "model/CreateQualityRuleRequest.h"
#include "model/CreateQualityRuleResult.h"
#include "model/CreateRemindRequest.h"
#include "model/CreateRemindResult.h"
#include "model/CreateResourceFileRequest.h"
#include "model/CreateResourceFileResult.h"
#include "model/CreateTableRequest.h"
#include "model/CreateTableResult.h"
#include "model/CreateTableLevelRequest.h"
#include "model/CreateTableLevelResult.h"
#include "model/CreateTableThemeRequest.h"
#include "model/CreateTableThemeResult.h"
#include "model/CreateUdfFileRequest.h"
#include "model/CreateUdfFileResult.h"
#include "model/DeleteBaselineRequest.h"
#include "model/DeleteBaselineResult.h"
#include "model/DeleteBusinessRequest.h"
#include "model/DeleteBusinessResult.h"
#include "model/DeleteConnectionRequest.h"
#include "model/DeleteConnectionResult.h"
#include "model/DeleteDIAlarmRuleRequest.h"
#include "model/DeleteDIAlarmRuleResult.h"
#include "model/DeleteDIJobRequest.h"
#include "model/DeleteDIJobResult.h"
#include "model/DeleteDISyncTaskRequest.h"
#include "model/DeleteDISyncTaskResult.h"
#include "model/DeleteDataServiceApiRequest.h"
#include "model/DeleteDataServiceApiResult.h"
#include "model/DeleteDataServiceApiAuthorityRequest.h"
#include "model/DeleteDataServiceApiAuthorityResult.h"
#include "model/DeleteDataSourceRequest.h"
#include "model/DeleteDataSourceResult.h"
#include "model/DeleteFileRequest.h"
#include "model/DeleteFileResult.h"
#include "model/DeleteFolderRequest.h"
#include "model/DeleteFolderResult.h"
#include "model/DeleteFromMetaCategoryRequest.h"
#include "model/DeleteFromMetaCategoryResult.h"
#include "model/DeleteLineageRelationRequest.h"
#include "model/DeleteLineageRelationResult.h"
#include "model/DeleteMetaCategoryRequest.h"
#include "model/DeleteMetaCategoryResult.h"
#include "model/DeleteMetaCollectionRequest.h"
#include "model/DeleteMetaCollectionResult.h"
#include "model/DeleteMetaCollectionEntityRequest.h"
#include "model/DeleteMetaCollectionEntityResult.h"
#include "model/DeleteProjectMemberRequest.h"
#include "model/DeleteProjectMemberResult.h"
#include "model/DeleteQualityEntityRequest.h"
#include "model/DeleteQualityEntityResult.h"
#include "model/DeleteQualityFollowerRequest.h"
#include "model/DeleteQualityFollowerResult.h"
#include "model/DeleteQualityRelativeNodeRequest.h"
#include "model/DeleteQualityRelativeNodeResult.h"
#include "model/DeleteQualityRuleRequest.h"
#include "model/DeleteQualityRuleResult.h"
#include "model/DeleteRecognizeRuleRequest.h"
#include "model/DeleteRecognizeRuleResult.h"
#include "model/DeleteRemindRequest.h"
#include "model/DeleteRemindResult.h"
#include "model/DeleteTableRequest.h"
#include "model/DeleteTableResult.h"
#include "model/DeleteTableLevelRequest.h"
#include "model/DeleteTableLevelResult.h"
#include "model/DeleteTableThemeRequest.h"
#include "model/DeleteTableThemeResult.h"
#include "model/DeployDISyncTaskRequest.h"
#include "model/DeployDISyncTaskResult.h"
#include "model/DeployFileRequest.h"
#include "model/DeployFileResult.h"
#include "model/DesensitizeDataRequest.h"
#include "model/DesensitizeDataResult.h"
#include "model/DsgDesensPlanAddOrUpdateRequest.h"
#include "model/DsgDesensPlanAddOrUpdateResult.h"
#include "model/DsgDesensPlanDeleteRequest.h"
#include "model/DsgDesensPlanDeleteResult.h"
#include "model/DsgDesensPlanQueryListRequest.h"
#include "model/DsgDesensPlanQueryListResult.h"
#include "model/DsgDesensPlanUpdateStatusRequest.h"
#include "model/DsgDesensPlanUpdateStatusResult.h"
#include "model/DsgPlatformQueryProjectsAndSchemaFromMetaRequest.h"
#include "model/DsgPlatformQueryProjectsAndSchemaFromMetaResult.h"
#include "model/DsgQueryDefaultTemplatesRequest.h"
#include "model/DsgQueryDefaultTemplatesResult.h"
#include "model/DsgQuerySensResultRequest.h"
#include "model/DsgQuerySensResultResult.h"
#include "model/DsgRunSensIdentifyRequest.h"
#include "model/DsgRunSensIdentifyResult.h"
#include "model/DsgSceneAddOrUpdateSceneRequest.h"
#include "model/DsgSceneAddOrUpdateSceneResult.h"
#include "model/DsgSceneQuerySceneListByNameRequest.h"
#include "model/DsgSceneQuerySceneListByNameResult.h"
#include "model/DsgScenedDeleteSceneRequest.h"
#include "model/DsgScenedDeleteSceneResult.h"
#include "model/DsgStopSensIdentifyRequest.h"
#include "model/DsgStopSensIdentifyResult.h"
#include "model/DsgUserGroupAddOrUpdateRequest.h"
#include "model/DsgUserGroupAddOrUpdateResult.h"
#include "model/DsgUserGroupDeleteRequest.h"
#include "model/DsgUserGroupDeleteResult.h"
#include "model/DsgUserGroupGetOdpsRoleGroupsRequest.h"
#include "model/DsgUserGroupGetOdpsRoleGroupsResult.h"
#include "model/DsgUserGroupQueryListRequest.h"
#include "model/DsgUserGroupQueryListResult.h"
#include "model/DsgUserGroupQueryUserListRequest.h"
#include "model/DsgUserGroupQueryUserListResult.h"
#include "model/DsgWhiteListAddOrUpdateRequest.h"
#include "model/DsgWhiteListAddOrUpdateResult.h"
#include "model/DsgWhiteListDeleteListRequest.h"
#include "model/DsgWhiteListDeleteListResult.h"
#include "model/DsgWhiteListQueryListRequest.h"
#include "model/DsgWhiteListQueryListResult.h"
#include "model/EditRecognizeRuleRequest.h"
#include "model/EditRecognizeRuleResult.h"
#include "model/EstablishRelationTableToBusinessRequest.h"
#include "model/EstablishRelationTableToBusinessResult.h"
#include "model/ExportDataSourcesRequest.h"
#include "model/ExportDataSourcesResult.h"
#include "model/GenerateDISyncTaskConfigForCreatingRequest.h"
#include "model/GenerateDISyncTaskConfigForCreatingResult.h"
#include "model/GenerateDISyncTaskConfigForUpdatingRequest.h"
#include "model/GenerateDISyncTaskConfigForUpdatingResult.h"
#include "model/GetAlertMessageRequest.h"
#include "model/GetAlertMessageResult.h"
#include "model/GetBaselineRequest.h"
#include "model/GetBaselineResult.h"
#include "model/GetBaselineConfigRequest.h"
#include "model/GetBaselineConfigResult.h"
#include "model/GetBaselineKeyPathRequest.h"
#include "model/GetBaselineKeyPathResult.h"
#include "model/GetBaselineStatusRequest.h"
#include "model/GetBaselineStatusResult.h"
#include "model/GetBusinessRequest.h"
#include "model/GetBusinessResult.h"
#include "model/GetDDLJobStatusRequest.h"
#include "model/GetDDLJobStatusResult.h"
#include "model/GetDIAlarmRuleRequest.h"
#include "model/GetDIAlarmRuleResult.h"
#include "model/GetDIJobRequest.h"
#include "model/GetDIJobResult.h"
#include "model/GetDISyncInstanceInfoRequest.h"
#include "model/GetDISyncInstanceInfoResult.h"
#include "model/GetDISyncTaskRequest.h"
#include "model/GetDISyncTaskResult.h"
#include "model/GetDagRequest.h"
#include "model/GetDagResult.h"
#include "model/GetDataServiceApiRequest.h"
#include "model/GetDataServiceApiResult.h"
#include "model/GetDataServiceApiTestRequest.h"
#include "model/GetDataServiceApiTestResult.h"
#include "model/GetDataServiceApplicationRequest.h"
#include "model/GetDataServiceApplicationResult.h"
#include "model/GetDataServiceFolderRequest.h"
#include "model/GetDataServiceFolderResult.h"
#include "model/GetDataServiceGroupRequest.h"
#include "model/GetDataServiceGroupResult.h"
#include "model/GetDataServicePublishedApiRequest.h"
#include "model/GetDataServicePublishedApiResult.h"
#include "model/GetDataSourceMetaRequest.h"
#include "model/GetDataSourceMetaResult.h"
#include "model/GetDeploymentRequest.h"
#include "model/GetDeploymentResult.h"
#include "model/GetExtensionRequest.h"
#include "model/GetExtensionResult.h"
#include "model/GetFileRequest.h"
#include "model/GetFileResult.h"
#include "model/GetFileTypeStatisticRequest.h"
#include "model/GetFileTypeStatisticResult.h"
#include "model/GetFileVersionRequest.h"
#include "model/GetFileVersionResult.h"
#include "model/GetFolderRequest.h"
#include "model/GetFolderResult.h"
#include "model/GetIDEEventDetailRequest.h"
#include "model/GetIDEEventDetailResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/GetInstanceConsumeTimeRankRequest.h"
#include "model/GetInstanceConsumeTimeRankResult.h"
#include "model/GetInstanceCountTrendRequest.h"
#include "model/GetInstanceCountTrendResult.h"
#include "model/GetInstanceErrorRankRequest.h"
#include "model/GetInstanceErrorRankResult.h"
#include "model/GetInstanceLogRequest.h"
#include "model/GetInstanceLogResult.h"
#include "model/GetInstanceStatusCountRequest.h"
#include "model/GetInstanceStatusCountResult.h"
#include "model/GetInstanceStatusStatisticRequest.h"
#include "model/GetInstanceStatusStatisticResult.h"
#include "model/GetManualDagInstancesRequest.h"
#include "model/GetManualDagInstancesResult.h"
#include "model/GetMetaCategoryRequest.h"
#include "model/GetMetaCategoryResult.h"
#include "model/GetMetaCollectionDetailRequest.h"
#include "model/GetMetaCollectionDetailResult.h"
#include "model/GetMetaColumnLineageRequest.h"
#include "model/GetMetaColumnLineageResult.h"
#include "model/GetMetaDBInfoRequest.h"
#include "model/GetMetaDBInfoResult.h"
#include "model/GetMetaDBTableListRequest.h"
#include "model/GetMetaDBTableListResult.h"
#include "model/GetMetaTableBasicInfoRequest.h"
#include "model/GetMetaTableBasicInfoResult.h"
#include "model/GetMetaTableChangeLogRequest.h"
#include "model/GetMetaTableChangeLogResult.h"
#include "model/GetMetaTableColumnRequest.h"
#include "model/GetMetaTableColumnResult.h"
#include "model/GetMetaTableFullInfoRequest.h"
#include "model/GetMetaTableFullInfoResult.h"
#include "model/GetMetaTableIntroWikiRequest.h"
#include "model/GetMetaTableIntroWikiResult.h"
#include "model/GetMetaTableLineageRequest.h"
#include "model/GetMetaTableLineageResult.h"
#include "model/GetMetaTableListByCategoryRequest.h"
#include "model/GetMetaTableListByCategoryResult.h"
#include "model/GetMetaTableOutputRequest.h"
#include "model/GetMetaTableOutputResult.h"
#include "model/GetMetaTablePartitionRequest.h"
#include "model/GetMetaTablePartitionResult.h"
#include "model/GetMetaTableProducingTasksRequest.h"
#include "model/GetMetaTableProducingTasksResult.h"
#include "model/GetMetaTableThemeLevelRequest.h"
#include "model/GetMetaTableThemeLevelResult.h"
#include "model/GetMigrationProcessRequest.h"
#include "model/GetMigrationProcessResult.h"
#include "model/GetMigrationSummaryRequest.h"
#include "model/GetMigrationSummaryResult.h"
#include "model/GetNodeRequest.h"
#include "model/GetNodeResult.h"
#include "model/GetNodeChildrenRequest.h"
#include "model/GetNodeChildrenResult.h"
#include "model/GetNodeCodeRequest.h"
#include "model/GetNodeCodeResult.h"
#include "model/GetNodeOnBaselineRequest.h"
#include "model/GetNodeOnBaselineResult.h"
#include "model/GetNodeParentsRequest.h"
#include "model/GetNodeParentsResult.h"
#include "model/GetNodeTypeListInfoRequest.h"
#include "model/GetNodeTypeListInfoResult.h"
#include "model/GetOpRiskDataRequest.h"
#include "model/GetOpRiskDataResult.h"
#include "model/GetOpSensitiveDataRequest.h"
#include "model/GetOpSensitiveDataResult.h"
#include "model/GetOptionValueForProjectRequest.h"
#include "model/GetOptionValueForProjectResult.h"
#include "model/GetPermissionApplyOrderDetailRequest.h"
#include "model/GetPermissionApplyOrderDetailResult.h"
#include "model/GetProjectRequest.h"
#include "model/GetProjectResult.h"
#include "model/GetProjectDetailRequest.h"
#include "model/GetProjectDetailResult.h"
#include "model/GetQualityEntityRequest.h"
#include "model/GetQualityEntityResult.h"
#include "model/GetQualityFollowerRequest.h"
#include "model/GetQualityFollowerResult.h"
#include "model/GetQualityRuleRequest.h"
#include "model/GetQualityRuleResult.h"
#include "model/GetRemindRequest.h"
#include "model/GetRemindResult.h"
#include "model/GetSensitiveDataRequest.h"
#include "model/GetSensitiveDataResult.h"
#include "model/GetSuccessInstanceTrendRequest.h"
#include "model/GetSuccessInstanceTrendResult.h"
#include "model/GetTopicRequest.h"
#include "model/GetTopicResult.h"
#include "model/GetTopicInfluenceRequest.h"
#include "model/GetTopicInfluenceResult.h"
#include "model/ImportDataSourcesRequest.h"
#include "model/ImportDataSourcesResult.h"
#include "model/ListAlertMessagesRequest.h"
#include "model/ListAlertMessagesResult.h"
#include "model/ListBaselineConfigsRequest.h"
#include "model/ListBaselineConfigsResult.h"
#include "model/ListBaselineStatusesRequest.h"
#include "model/ListBaselineStatusesResult.h"
#include "model/ListBaselinesRequest.h"
#include "model/ListBaselinesResult.h"
#include "model/ListBusinessRequest.h"
#include "model/ListBusinessResult.h"
#include "model/ListCalcEnginesRequest.h"
#include "model/ListCalcEnginesResult.h"
#include "model/ListCheckProcessesRequest.h"
#include "model/ListCheckProcessesResult.h"
#include "model/ListClusterConfigsRequest.h"
#include "model/ListClusterConfigsResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/ListConnectionsRequest.h"
#include "model/ListConnectionsResult.h"
#include "model/ListDIAlarmRulesRequest.h"
#include "model/ListDIAlarmRulesResult.h"
#include "model/ListDIJobsRequest.h"
#include "model/ListDIJobsResult.h"
#include "model/ListDIProjectConfigRequest.h"
#include "model/ListDIProjectConfigResult.h"
#include "model/ListDagsRequest.h"
#include "model/ListDagsResult.h"
#include "model/ListDataServiceApiAuthoritiesRequest.h"
#include "model/ListDataServiceApiAuthoritiesResult.h"
#include "model/ListDataServiceApiTestRequest.h"
#include "model/ListDataServiceApiTestResult.h"
#include "model/ListDataServiceApisRequest.h"
#include "model/ListDataServiceApisResult.h"
#include "model/ListDataServiceApplicationsRequest.h"
#include "model/ListDataServiceApplicationsResult.h"
#include "model/ListDataServiceAuthorizedApisRequest.h"
#include "model/ListDataServiceAuthorizedApisResult.h"
#include "model/ListDataServiceFoldersRequest.h"
#include "model/ListDataServiceFoldersResult.h"
#include "model/ListDataServiceGroupsRequest.h"
#include "model/ListDataServiceGroupsResult.h"
#include "model/ListDataServicePublishedApisRequest.h"
#include "model/ListDataServicePublishedApisResult.h"
#include "model/ListDataSourcesRequest.h"
#include "model/ListDataSourcesResult.h"
#include "model/ListDeploymentsRequest.h"
#include "model/ListDeploymentsResult.h"
#include "model/ListEnabledExtensionsForProjectRequest.h"
#include "model/ListEnabledExtensionsForProjectResult.h"
#include "model/ListEntitiesByTagsRequest.h"
#include "model/ListEntitiesByTagsResult.h"
#include "model/ListEntityTagsRequest.h"
#include "model/ListEntityTagsResult.h"
#include "model/ListExtensionsRequest.h"
#include "model/ListExtensionsResult.h"
#include "model/ListFileTypeRequest.h"
#include "model/ListFileTypeResult.h"
#include "model/ListFileVersionsRequest.h"
#include "model/ListFileVersionsResult.h"
#include "model/ListFilesRequest.h"
#include "model/ListFilesResult.h"
#include "model/ListFoldersRequest.h"
#include "model/ListFoldersResult.h"
#include "model/ListInnerNodesRequest.h"
#include "model/ListInnerNodesResult.h"
#include "model/ListInstanceAmountRequest.h"
#include "model/ListInstanceAmountResult.h"
#include "model/ListInstanceHistoryRequest.h"
#include "model/ListInstanceHistoryResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListLineageRequest.h"
#include "model/ListLineageResult.h"
#include "model/ListManualDagInstancesRequest.h"
#include "model/ListManualDagInstancesResult.h"
#include "model/ListMeasureDataRequest.h"
#include "model/ListMeasureDataResult.h"
#include "model/ListMetaCollectionEntitiesRequest.h"
#include "model/ListMetaCollectionEntitiesResult.h"
#include "model/ListMetaCollectionsRequest.h"
#include "model/ListMetaCollectionsResult.h"
#include "model/ListMetaDBRequest.h"
#include "model/ListMetaDBResult.h"
#include "model/ListMigrationsRequest.h"
#include "model/ListMigrationsResult.h"
#include "model/ListNodeIORequest.h"
#include "model/ListNodeIOResult.h"
#include "model/ListNodeInputOrOutputRequest.h"
#include "model/ListNodeInputOrOutputResult.h"
#include "model/ListNodesRequest.h"
#include "model/ListNodesResult.h"
#include "model/ListNodesByBaselineRequest.h"
#include "model/ListNodesByBaselineResult.h"
#include "model/ListNodesByOutputRequest.h"
#include "model/ListNodesByOutputResult.h"
#include "model/ListPermissionApplyOrdersRequest.h"
#include "model/ListPermissionApplyOrdersResult.h"
#include "model/ListProgramTypeCountRequest.h"
#include "model/ListProgramTypeCountResult.h"
#include "model/ListProjectIdsRequest.h"
#include "model/ListProjectIdsResult.h"
#include "model/ListProjectMembersRequest.h"
#include "model/ListProjectMembersResult.h"
#include "model/ListProjectRolesRequest.h"
#include "model/ListProjectRolesResult.h"
#include "model/ListProjectsRequest.h"
#include "model/ListProjectsResult.h"
#include "model/ListQualityResultsByEntityRequest.h"
#include "model/ListQualityResultsByEntityResult.h"
#include "model/ListQualityResultsByRuleRequest.h"
#include "model/ListQualityResultsByRuleResult.h"
#include "model/ListQualityRulesRequest.h"
#include "model/ListQualityRulesResult.h"
#include "model/ListRefDISyncTasksRequest.h"
#include "model/ListRefDISyncTasksResult.h"
#include "model/ListRemindsRequest.h"
#include "model/ListRemindsResult.h"
#include "model/ListResourceGroupsRequest.h"
#include "model/ListResourceGroupsResult.h"
#include "model/ListShiftPersonnelsRequest.h"
#include "model/ListShiftPersonnelsResult.h"
#include "model/ListShiftSchedulesRequest.h"
#include "model/ListShiftSchedulesResult.h"
#include "model/ListSuccessInstanceAmountRequest.h"
#include "model/ListSuccessInstanceAmountResult.h"
#include "model/ListTableLevelRequest.h"
#include "model/ListTableLevelResult.h"
#include "model/ListTableThemeRequest.h"
#include "model/ListTableThemeResult.h"
#include "model/ListTablesRequest.h"
#include "model/ListTablesResult.h"
#include "model/ListTopicsRequest.h"
#include "model/ListTopicsResult.h"
#include "model/OfflineNodeRequest.h"
#include "model/OfflineNodeResult.h"
#include "model/PublishDataServiceApiRequest.h"
#include "model/PublishDataServiceApiResult.h"
#include "model/QueryDISyncTaskConfigProcessResultRequest.h"
#include "model/QueryDISyncTaskConfigProcessResultResult.h"
#include "model/QueryDefaultTemplateRequest.h"
#include "model/QueryDefaultTemplateResult.h"
#include "model/QueryPublicModelEngineRequest.h"
#include "model/QueryPublicModelEngineResult.h"
#include "model/QueryRecognizeDataByRuleTypeRequest.h"
#include "model/QueryRecognizeDataByRuleTypeResult.h"
#include "model/QueryRecognizeRuleDetailRequest.h"
#include "model/QueryRecognizeRuleDetailResult.h"
#include "model/QueryRecognizeRulesTypeRequest.h"
#include "model/QueryRecognizeRulesTypeResult.h"
#include "model/QuerySensClassificationRequest.h"
#include "model/QuerySensClassificationResult.h"
#include "model/QuerySensLevelRequest.h"
#include "model/QuerySensLevelResult.h"
#include "model/QuerySensNodeInfoRequest.h"
#include "model/QuerySensNodeInfoResult.h"
#include "model/RegisterLineageRelationRequest.h"
#include "model/RegisterLineageRelationResult.h"
#include "model/RemoveEntityTagsRequest.h"
#include "model/RemoveEntityTagsResult.h"
#include "model/RemoveProjectMemberFromRoleRequest.h"
#include "model/RemoveProjectMemberFromRoleResult.h"
#include "model/RestartInstanceRequest.h"
#include "model/RestartInstanceResult.h"
#include "model/ResumeInstanceRequest.h"
#include "model/ResumeInstanceResult.h"
#include "model/RevokeTablePermissionRequest.h"
#include "model/RevokeTablePermissionResult.h"
#include "model/RunCycleDagNodesRequest.h"
#include "model/RunCycleDagNodesResult.h"
#include "model/RunManualDagNodesRequest.h"
#include "model/RunManualDagNodesResult.h"
#include "model/RunSmokeTestRequest.h"
#include "model/RunSmokeTestResult.h"
#include "model/RunTriggerNodeRequest.h"
#include "model/RunTriggerNodeResult.h"
#include "model/SaveDataServiceApiTestResultRequest.h"
#include "model/SaveDataServiceApiTestResultResult.h"
#include "model/ScanSensitiveDataRequest.h"
#include "model/ScanSensitiveDataResult.h"
#include "model/SearchMetaTablesRequest.h"
#include "model/SearchMetaTablesResult.h"
#include "model/SearchNodesByOutputRequest.h"
#include "model/SearchNodesByOutputResult.h"
#include "model/SetDataSourceShareRequest.h"
#include "model/SetDataSourceShareResult.h"
#include "model/SetEntityTagsRequest.h"
#include "model/SetEntityTagsResult.h"
#include "model/SetSuccessInstanceRequest.h"
#include "model/SetSuccessInstanceResult.h"
#include "model/StartDIJobRequest.h"
#include "model/StartDIJobResult.h"
#include "model/StartDISyncInstanceRequest.h"
#include "model/StartDISyncInstanceResult.h"
#include "model/StartMigrationRequest.h"
#include "model/StartMigrationResult.h"
#include "model/StopDIJobRequest.h"
#include "model/StopDIJobResult.h"
#include "model/StopDISyncInstanceRequest.h"
#include "model/StopDISyncInstanceResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/SubmitDataServiceApiRequest.h"
#include "model/SubmitDataServiceApiResult.h"
#include "model/SubmitFileRequest.h"
#include "model/SubmitFileResult.h"
#include "model/SuspendInstanceRequest.h"
#include "model/SuspendInstanceResult.h"
#include "model/TerminateDISyncInstanceRequest.h"
#include "model/TerminateDISyncInstanceResult.h"
#include "model/TestDataServiceApiRequest.h"
#include "model/TestDataServiceApiResult.h"
#include "model/TestNetworkConnectionRequest.h"
#include "model/TestNetworkConnectionResult.h"
#include "model/TopTenElapsedTimeInstanceRequest.h"
#include "model/TopTenElapsedTimeInstanceResult.h"
#include "model/TopTenErrorTimesInstanceRequest.h"
#include "model/TopTenErrorTimesInstanceResult.h"
#include "model/UpdateBaselineRequest.h"
#include "model/UpdateBaselineResult.h"
#include "model/UpdateBusinessRequest.h"
#include "model/UpdateBusinessResult.h"
#include "model/UpdateClusterConfigsRequest.h"
#include "model/UpdateClusterConfigsResult.h"
#include "model/UpdateConnectionRequest.h"
#include "model/UpdateConnectionResult.h"
#include "model/UpdateDIAlarmRuleRequest.h"
#include "model/UpdateDIAlarmRuleResult.h"
#include "model/UpdateDIJobRequest.h"
#include "model/UpdateDIJobResult.h"
#include "model/UpdateDIProjectConfigRequest.h"
#include "model/UpdateDIProjectConfigResult.h"
#include "model/UpdateDISyncTaskRequest.h"
#include "model/UpdateDISyncTaskResult.h"
#include "model/UpdateDataServiceApiRequest.h"
#include "model/UpdateDataServiceApiResult.h"
#include "model/UpdateDataSourceRequest.h"
#include "model/UpdateDataSourceResult.h"
#include "model/UpdateFileRequest.h"
#include "model/UpdateFileResult.h"
#include "model/UpdateFolderRequest.h"
#include "model/UpdateFolderResult.h"
#include "model/UpdateIDEEventResultRequest.h"
#include "model/UpdateIDEEventResultResult.h"
#include "model/UpdateMetaCategoryRequest.h"
#include "model/UpdateMetaCategoryResult.h"
#include "model/UpdateMetaCollectionRequest.h"
#include "model/UpdateMetaCollectionResult.h"
#include "model/UpdateMetaTableRequest.h"
#include "model/UpdateMetaTableResult.h"
#include "model/UpdateMetaTableIntroWikiRequest.h"
#include "model/UpdateMetaTableIntroWikiResult.h"
#include "model/UpdateNodeOwnerRequest.h"
#include "model/UpdateNodeOwnerResult.h"
#include "model/UpdateNodeRunModeRequest.h"
#include "model/UpdateNodeRunModeResult.h"
#include "model/UpdateQualityFollowerRequest.h"
#include "model/UpdateQualityFollowerResult.h"
#include "model/UpdateQualityRuleRequest.h"
#include "model/UpdateQualityRuleResult.h"
#include "model/UpdateRemindRequest.h"
#include "model/UpdateRemindResult.h"
#include "model/UpdateTableRequest.h"
#include "model/UpdateTableResult.h"
#include "model/UpdateTableAddColumnRequest.h"
#include "model/UpdateTableAddColumnResult.h"
#include "model/UpdateTableLevelRequest.h"
#include "model/UpdateTableLevelResult.h"
#include "model/UpdateTableModelInfoRequest.h"
#include "model/UpdateTableModelInfoResult.h"
#include "model/UpdateTableThemeRequest.h"
#include "model/UpdateTableThemeResult.h"
#include "model/UpdateUdfFileRequest.h"
#include "model/UpdateUdfFileResult.h"
#include "model/UpdateWorkbenchEventResultRequest.h"
#include "model/UpdateWorkbenchEventResultResult.h"


namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT Dataworks_publicClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbolishDataServiceApiResult> AbolishDataServiceApiOutcome;
			typedef std::future<AbolishDataServiceApiOutcome> AbolishDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::AbolishDataServiceApiRequest&, const AbolishDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbolishDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::AddMetaCollectionEntityResult> AddMetaCollectionEntityOutcome;
			typedef std::future<AddMetaCollectionEntityOutcome> AddMetaCollectionEntityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::AddMetaCollectionEntityRequest&, const AddMetaCollectionEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMetaCollectionEntityAsyncHandler;
			typedef Outcome<Error, Model::AddProjectMemberToRoleResult> AddProjectMemberToRoleOutcome;
			typedef std::future<AddProjectMemberToRoleOutcome> AddProjectMemberToRoleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::AddProjectMemberToRoleRequest&, const AddProjectMemberToRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddProjectMemberToRoleAsyncHandler;
			typedef Outcome<Error, Model::AddRecognizeRuleResult> AddRecognizeRuleOutcome;
			typedef std::future<AddRecognizeRuleOutcome> AddRecognizeRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::AddRecognizeRuleRequest&, const AddRecognizeRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRecognizeRuleAsyncHandler;
			typedef Outcome<Error, Model::AddToMetaCategoryResult> AddToMetaCategoryOutcome;
			typedef std::future<AddToMetaCategoryOutcome> AddToMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::AddToMetaCategoryRequest&, const AddToMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddToMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::ApprovePermissionApplyOrderResult> ApprovePermissionApplyOrderOutcome;
			typedef std::future<ApprovePermissionApplyOrderOutcome> ApprovePermissionApplyOrderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ApprovePermissionApplyOrderRequest&, const ApprovePermissionApplyOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApprovePermissionApplyOrderAsyncHandler;
			typedef Outcome<Error, Model::CallbackExtensionResult> CallbackExtensionOutcome;
			typedef std::future<CallbackExtensionOutcome> CallbackExtensionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CallbackExtensionRequest&, const CallbackExtensionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CallbackExtensionAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceManagerResourceGroupResult> ChangeResourceManagerResourceGroupOutcome;
			typedef std::future<ChangeResourceManagerResourceGroupOutcome> ChangeResourceManagerResourceGroupOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ChangeResourceManagerResourceGroupRequest&, const ChangeResourceManagerResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceManagerResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CheckFileDeploymentResult> CheckFileDeploymentOutcome;
			typedef std::future<CheckFileDeploymentOutcome> CheckFileDeploymentOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CheckFileDeploymentRequest&, const CheckFileDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckFileDeploymentAsyncHandler;
			typedef Outcome<Error, Model::CheckMetaPartitionResult> CheckMetaPartitionOutcome;
			typedef std::future<CheckMetaPartitionOutcome> CheckMetaPartitionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CheckMetaPartitionRequest&, const CheckMetaPartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckMetaPartitionAsyncHandler;
			typedef Outcome<Error, Model::CheckMetaTableResult> CheckMetaTableOutcome;
			typedef std::future<CheckMetaTableOutcome> CheckMetaTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CheckMetaTableRequest&, const CheckMetaTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckMetaTableAsyncHandler;
			typedef Outcome<Error, Model::CreateBaselineResult> CreateBaselineOutcome;
			typedef std::future<CreateBaselineOutcome> CreateBaselineOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateBaselineRequest&, const CreateBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineAsyncHandler;
			typedef Outcome<Error, Model::CreateBusinessResult> CreateBusinessOutcome;
			typedef std::future<CreateBusinessOutcome> CreateBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateBusinessRequest&, const CreateBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBusinessAsyncHandler;
			typedef Outcome<Error, Model::CreateConnectionResult> CreateConnectionOutcome;
			typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateConnectionRequest&, const CreateConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateDIAlarmRuleResult> CreateDIAlarmRuleOutcome;
			typedef std::future<CreateDIAlarmRuleOutcome> CreateDIAlarmRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDIAlarmRuleRequest&, const CreateDIAlarmRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDIAlarmRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateDIJobResult> CreateDIJobOutcome;
			typedef std::future<CreateDIJobOutcome> CreateDIJobOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDIJobRequest&, const CreateDIJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDIJobAsyncHandler;
			typedef Outcome<Error, Model::CreateDISyncTaskResult> CreateDISyncTaskOutcome;
			typedef std::future<CreateDISyncTaskOutcome> CreateDISyncTaskOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDISyncTaskRequest&, const CreateDISyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDISyncTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateDagComplementResult> CreateDagComplementOutcome;
			typedef std::future<CreateDagComplementOutcome> CreateDagComplementOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDagComplementRequest&, const CreateDagComplementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDagComplementAsyncHandler;
			typedef Outcome<Error, Model::CreateDagTestResult> CreateDagTestOutcome;
			typedef std::future<CreateDagTestOutcome> CreateDagTestOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDagTestRequest&, const CreateDagTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDagTestAsyncHandler;
			typedef Outcome<Error, Model::CreateDataServiceApiResult> CreateDataServiceApiOutcome;
			typedef std::future<CreateDataServiceApiOutcome> CreateDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDataServiceApiRequest&, const CreateDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::CreateDataServiceApiAuthorityResult> CreateDataServiceApiAuthorityOutcome;
			typedef std::future<CreateDataServiceApiAuthorityOutcome> CreateDataServiceApiAuthorityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDataServiceApiAuthorityRequest&, const CreateDataServiceApiAuthorityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataServiceApiAuthorityAsyncHandler;
			typedef Outcome<Error, Model::CreateDataServiceFolderResult> CreateDataServiceFolderOutcome;
			typedef std::future<CreateDataServiceFolderOutcome> CreateDataServiceFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDataServiceFolderRequest&, const CreateDataServiceFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataServiceFolderAsyncHandler;
			typedef Outcome<Error, Model::CreateDataServiceGroupResult> CreateDataServiceGroupOutcome;
			typedef std::future<CreateDataServiceGroupOutcome> CreateDataServiceGroupOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDataServiceGroupRequest&, const CreateDataServiceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataServiceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateDataSourceResult> CreateDataSourceOutcome;
			typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDataSourceRequest&, const CreateDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataSourceAsyncHandler;
			typedef Outcome<Error, Model::CreateExportMigrationResult> CreateExportMigrationOutcome;
			typedef std::future<CreateExportMigrationOutcome> CreateExportMigrationOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateExportMigrationRequest&, const CreateExportMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExportMigrationAsyncHandler;
			typedef Outcome<Error, Model::CreateFileResult> CreateFileOutcome;
			typedef std::future<CreateFileOutcome> CreateFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateFileRequest&, const CreateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileAsyncHandler;
			typedef Outcome<Error, Model::CreateFolderResult> CreateFolderOutcome;
			typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateFolderRequest&, const CreateFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFolderAsyncHandler;
			typedef Outcome<Error, Model::CreateImportMigrationResult> CreateImportMigrationOutcome;
			typedef std::future<CreateImportMigrationOutcome> CreateImportMigrationOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateImportMigrationRequest&, const CreateImportMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateImportMigrationAsyncHandler;
			typedef Outcome<Error, Model::CreateManualDagResult> CreateManualDagOutcome;
			typedef std::future<CreateManualDagOutcome> CreateManualDagOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateManualDagRequest&, const CreateManualDagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateManualDagAsyncHandler;
			typedef Outcome<Error, Model::CreateMetaCategoryResult> CreateMetaCategoryOutcome;
			typedef std::future<CreateMetaCategoryOutcome> CreateMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateMetaCategoryRequest&, const CreateMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::CreateMetaCollectionResult> CreateMetaCollectionOutcome;
			typedef std::future<CreateMetaCollectionOutcome> CreateMetaCollectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateMetaCollectionRequest&, const CreateMetaCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMetaCollectionAsyncHandler;
			typedef Outcome<Error, Model::CreatePermissionApplyOrderResult> CreatePermissionApplyOrderOutcome;
			typedef std::future<CreatePermissionApplyOrderOutcome> CreatePermissionApplyOrderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreatePermissionApplyOrderRequest&, const CreatePermissionApplyOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePermissionApplyOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectMemberResult> CreateProjectMemberOutcome;
			typedef std::future<CreateProjectMemberOutcome> CreateProjectMemberOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateProjectMemberRequest&, const CreateProjectMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectMemberAsyncHandler;
			typedef Outcome<Error, Model::CreateQualityEntityResult> CreateQualityEntityOutcome;
			typedef std::future<CreateQualityEntityOutcome> CreateQualityEntityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateQualityEntityRequest&, const CreateQualityEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityEntityAsyncHandler;
			typedef Outcome<Error, Model::CreateQualityFollowerResult> CreateQualityFollowerOutcome;
			typedef std::future<CreateQualityFollowerOutcome> CreateQualityFollowerOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateQualityFollowerRequest&, const CreateQualityFollowerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityFollowerAsyncHandler;
			typedef Outcome<Error, Model::CreateQualityRelativeNodeResult> CreateQualityRelativeNodeOutcome;
			typedef std::future<CreateQualityRelativeNodeOutcome> CreateQualityRelativeNodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateQualityRelativeNodeRequest&, const CreateQualityRelativeNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityRelativeNodeAsyncHandler;
			typedef Outcome<Error, Model::CreateQualityRuleResult> CreateQualityRuleOutcome;
			typedef std::future<CreateQualityRuleOutcome> CreateQualityRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateQualityRuleRequest&, const CreateQualityRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateRemindResult> CreateRemindOutcome;
			typedef std::future<CreateRemindOutcome> CreateRemindOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateRemindRequest&, const CreateRemindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRemindAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceFileResult> CreateResourceFileOutcome;
			typedef std::future<CreateResourceFileOutcome> CreateResourceFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateResourceFileRequest&, const CreateResourceFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceFileAsyncHandler;
			typedef Outcome<Error, Model::CreateTableResult> CreateTableOutcome;
			typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateTableRequest&, const CreateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
			typedef Outcome<Error, Model::CreateTableLevelResult> CreateTableLevelOutcome;
			typedef std::future<CreateTableLevelOutcome> CreateTableLevelOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateTableLevelRequest&, const CreateTableLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableLevelAsyncHandler;
			typedef Outcome<Error, Model::CreateTableThemeResult> CreateTableThemeOutcome;
			typedef std::future<CreateTableThemeOutcome> CreateTableThemeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateTableThemeRequest&, const CreateTableThemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableThemeAsyncHandler;
			typedef Outcome<Error, Model::CreateUdfFileResult> CreateUdfFileOutcome;
			typedef std::future<CreateUdfFileOutcome> CreateUdfFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateUdfFileRequest&, const CreateUdfFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUdfFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteBaselineResult> DeleteBaselineOutcome;
			typedef std::future<DeleteBaselineOutcome> DeleteBaselineOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteBaselineRequest&, const DeleteBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselineAsyncHandler;
			typedef Outcome<Error, Model::DeleteBusinessResult> DeleteBusinessOutcome;
			typedef std::future<DeleteBusinessOutcome> DeleteBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteBusinessRequest&, const DeleteBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBusinessAsyncHandler;
			typedef Outcome<Error, Model::DeleteConnectionResult> DeleteConnectionOutcome;
			typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteConnectionRequest&, const DeleteConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConnectionAsyncHandler;
			typedef Outcome<Error, Model::DeleteDIAlarmRuleResult> DeleteDIAlarmRuleOutcome;
			typedef std::future<DeleteDIAlarmRuleOutcome> DeleteDIAlarmRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteDIAlarmRuleRequest&, const DeleteDIAlarmRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDIAlarmRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteDIJobResult> DeleteDIJobOutcome;
			typedef std::future<DeleteDIJobOutcome> DeleteDIJobOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteDIJobRequest&, const DeleteDIJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDIJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteDISyncTaskResult> DeleteDISyncTaskOutcome;
			typedef std::future<DeleteDISyncTaskOutcome> DeleteDISyncTaskOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteDISyncTaskRequest&, const DeleteDISyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDISyncTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataServiceApiResult> DeleteDataServiceApiOutcome;
			typedef std::future<DeleteDataServiceApiOutcome> DeleteDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteDataServiceApiRequest&, const DeleteDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataServiceApiAuthorityResult> DeleteDataServiceApiAuthorityOutcome;
			typedef std::future<DeleteDataServiceApiAuthorityOutcome> DeleteDataServiceApiAuthorityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteDataServiceApiAuthorityRequest&, const DeleteDataServiceApiAuthorityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataServiceApiAuthorityAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataSourceResult> DeleteDataSourceOutcome;
			typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteDataSourceRequest&, const DeleteDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteFileResult> DeleteFileOutcome;
			typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteFileRequest&, const DeleteFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteFolderResult> DeleteFolderOutcome;
			typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteFolderRequest&, const DeleteFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFolderAsyncHandler;
			typedef Outcome<Error, Model::DeleteFromMetaCategoryResult> DeleteFromMetaCategoryOutcome;
			typedef std::future<DeleteFromMetaCategoryOutcome> DeleteFromMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteFromMetaCategoryRequest&, const DeleteFromMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFromMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteLineageRelationResult> DeleteLineageRelationOutcome;
			typedef std::future<DeleteLineageRelationOutcome> DeleteLineageRelationOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteLineageRelationRequest&, const DeleteLineageRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLineageRelationAsyncHandler;
			typedef Outcome<Error, Model::DeleteMetaCategoryResult> DeleteMetaCategoryOutcome;
			typedef std::future<DeleteMetaCategoryOutcome> DeleteMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteMetaCategoryRequest&, const DeleteMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteMetaCollectionResult> DeleteMetaCollectionOutcome;
			typedef std::future<DeleteMetaCollectionOutcome> DeleteMetaCollectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteMetaCollectionRequest&, const DeleteMetaCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMetaCollectionAsyncHandler;
			typedef Outcome<Error, Model::DeleteMetaCollectionEntityResult> DeleteMetaCollectionEntityOutcome;
			typedef std::future<DeleteMetaCollectionEntityOutcome> DeleteMetaCollectionEntityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteMetaCollectionEntityRequest&, const DeleteMetaCollectionEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMetaCollectionEntityAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectMemberResult> DeleteProjectMemberOutcome;
			typedef std::future<DeleteProjectMemberOutcome> DeleteProjectMemberOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteProjectMemberRequest&, const DeleteProjectMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteQualityEntityResult> DeleteQualityEntityOutcome;
			typedef std::future<DeleteQualityEntityOutcome> DeleteQualityEntityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteQualityEntityRequest&, const DeleteQualityEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityEntityAsyncHandler;
			typedef Outcome<Error, Model::DeleteQualityFollowerResult> DeleteQualityFollowerOutcome;
			typedef std::future<DeleteQualityFollowerOutcome> DeleteQualityFollowerOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteQualityFollowerRequest&, const DeleteQualityFollowerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityFollowerAsyncHandler;
			typedef Outcome<Error, Model::DeleteQualityRelativeNodeResult> DeleteQualityRelativeNodeOutcome;
			typedef std::future<DeleteQualityRelativeNodeOutcome> DeleteQualityRelativeNodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteQualityRelativeNodeRequest&, const DeleteQualityRelativeNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityRelativeNodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteQualityRuleResult> DeleteQualityRuleOutcome;
			typedef std::future<DeleteQualityRuleOutcome> DeleteQualityRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteQualityRuleRequest&, const DeleteQualityRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteRecognizeRuleResult> DeleteRecognizeRuleOutcome;
			typedef std::future<DeleteRecognizeRuleOutcome> DeleteRecognizeRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteRecognizeRuleRequest&, const DeleteRecognizeRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecognizeRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteRemindResult> DeleteRemindOutcome;
			typedef std::future<DeleteRemindOutcome> DeleteRemindOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteRemindRequest&, const DeleteRemindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRemindAsyncHandler;
			typedef Outcome<Error, Model::DeleteTableResult> DeleteTableOutcome;
			typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteTableRequest&, const DeleteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableAsyncHandler;
			typedef Outcome<Error, Model::DeleteTableLevelResult> DeleteTableLevelOutcome;
			typedef std::future<DeleteTableLevelOutcome> DeleteTableLevelOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteTableLevelRequest&, const DeleteTableLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableLevelAsyncHandler;
			typedef Outcome<Error, Model::DeleteTableThemeResult> DeleteTableThemeOutcome;
			typedef std::future<DeleteTableThemeOutcome> DeleteTableThemeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteTableThemeRequest&, const DeleteTableThemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableThemeAsyncHandler;
			typedef Outcome<Error, Model::DeployDISyncTaskResult> DeployDISyncTaskOutcome;
			typedef std::future<DeployDISyncTaskOutcome> DeployDISyncTaskOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeployDISyncTaskRequest&, const DeployDISyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployDISyncTaskAsyncHandler;
			typedef Outcome<Error, Model::DeployFileResult> DeployFileOutcome;
			typedef std::future<DeployFileOutcome> DeployFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeployFileRequest&, const DeployFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployFileAsyncHandler;
			typedef Outcome<Error, Model::DesensitizeDataResult> DesensitizeDataOutcome;
			typedef std::future<DesensitizeDataOutcome> DesensitizeDataOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DesensitizeDataRequest&, const DesensitizeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DesensitizeDataAsyncHandler;
			typedef Outcome<Error, Model::DsgDesensPlanAddOrUpdateResult> DsgDesensPlanAddOrUpdateOutcome;
			typedef std::future<DsgDesensPlanAddOrUpdateOutcome> DsgDesensPlanAddOrUpdateOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgDesensPlanAddOrUpdateRequest&, const DsgDesensPlanAddOrUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgDesensPlanAddOrUpdateAsyncHandler;
			typedef Outcome<Error, Model::DsgDesensPlanDeleteResult> DsgDesensPlanDeleteOutcome;
			typedef std::future<DsgDesensPlanDeleteOutcome> DsgDesensPlanDeleteOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgDesensPlanDeleteRequest&, const DsgDesensPlanDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgDesensPlanDeleteAsyncHandler;
			typedef Outcome<Error, Model::DsgDesensPlanQueryListResult> DsgDesensPlanQueryListOutcome;
			typedef std::future<DsgDesensPlanQueryListOutcome> DsgDesensPlanQueryListOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgDesensPlanQueryListRequest&, const DsgDesensPlanQueryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgDesensPlanQueryListAsyncHandler;
			typedef Outcome<Error, Model::DsgDesensPlanUpdateStatusResult> DsgDesensPlanUpdateStatusOutcome;
			typedef std::future<DsgDesensPlanUpdateStatusOutcome> DsgDesensPlanUpdateStatusOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgDesensPlanUpdateStatusRequest&, const DsgDesensPlanUpdateStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgDesensPlanUpdateStatusAsyncHandler;
			typedef Outcome<Error, Model::DsgPlatformQueryProjectsAndSchemaFromMetaResult> DsgPlatformQueryProjectsAndSchemaFromMetaOutcome;
			typedef std::future<DsgPlatformQueryProjectsAndSchemaFromMetaOutcome> DsgPlatformQueryProjectsAndSchemaFromMetaOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgPlatformQueryProjectsAndSchemaFromMetaRequest&, const DsgPlatformQueryProjectsAndSchemaFromMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgPlatformQueryProjectsAndSchemaFromMetaAsyncHandler;
			typedef Outcome<Error, Model::DsgQueryDefaultTemplatesResult> DsgQueryDefaultTemplatesOutcome;
			typedef std::future<DsgQueryDefaultTemplatesOutcome> DsgQueryDefaultTemplatesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgQueryDefaultTemplatesRequest&, const DsgQueryDefaultTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgQueryDefaultTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DsgQuerySensResultResult> DsgQuerySensResultOutcome;
			typedef std::future<DsgQuerySensResultOutcome> DsgQuerySensResultOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgQuerySensResultRequest&, const DsgQuerySensResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgQuerySensResultAsyncHandler;
			typedef Outcome<Error, Model::DsgRunSensIdentifyResult> DsgRunSensIdentifyOutcome;
			typedef std::future<DsgRunSensIdentifyOutcome> DsgRunSensIdentifyOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgRunSensIdentifyRequest&, const DsgRunSensIdentifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgRunSensIdentifyAsyncHandler;
			typedef Outcome<Error, Model::DsgSceneAddOrUpdateSceneResult> DsgSceneAddOrUpdateSceneOutcome;
			typedef std::future<DsgSceneAddOrUpdateSceneOutcome> DsgSceneAddOrUpdateSceneOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgSceneAddOrUpdateSceneRequest&, const DsgSceneAddOrUpdateSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgSceneAddOrUpdateSceneAsyncHandler;
			typedef Outcome<Error, Model::DsgSceneQuerySceneListByNameResult> DsgSceneQuerySceneListByNameOutcome;
			typedef std::future<DsgSceneQuerySceneListByNameOutcome> DsgSceneQuerySceneListByNameOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgSceneQuerySceneListByNameRequest&, const DsgSceneQuerySceneListByNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgSceneQuerySceneListByNameAsyncHandler;
			typedef Outcome<Error, Model::DsgScenedDeleteSceneResult> DsgScenedDeleteSceneOutcome;
			typedef std::future<DsgScenedDeleteSceneOutcome> DsgScenedDeleteSceneOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgScenedDeleteSceneRequest&, const DsgScenedDeleteSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgScenedDeleteSceneAsyncHandler;
			typedef Outcome<Error, Model::DsgStopSensIdentifyResult> DsgStopSensIdentifyOutcome;
			typedef std::future<DsgStopSensIdentifyOutcome> DsgStopSensIdentifyOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgStopSensIdentifyRequest&, const DsgStopSensIdentifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgStopSensIdentifyAsyncHandler;
			typedef Outcome<Error, Model::DsgUserGroupAddOrUpdateResult> DsgUserGroupAddOrUpdateOutcome;
			typedef std::future<DsgUserGroupAddOrUpdateOutcome> DsgUserGroupAddOrUpdateOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgUserGroupAddOrUpdateRequest&, const DsgUserGroupAddOrUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgUserGroupAddOrUpdateAsyncHandler;
			typedef Outcome<Error, Model::DsgUserGroupDeleteResult> DsgUserGroupDeleteOutcome;
			typedef std::future<DsgUserGroupDeleteOutcome> DsgUserGroupDeleteOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgUserGroupDeleteRequest&, const DsgUserGroupDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgUserGroupDeleteAsyncHandler;
			typedef Outcome<Error, Model::DsgUserGroupGetOdpsRoleGroupsResult> DsgUserGroupGetOdpsRoleGroupsOutcome;
			typedef std::future<DsgUserGroupGetOdpsRoleGroupsOutcome> DsgUserGroupGetOdpsRoleGroupsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgUserGroupGetOdpsRoleGroupsRequest&, const DsgUserGroupGetOdpsRoleGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgUserGroupGetOdpsRoleGroupsAsyncHandler;
			typedef Outcome<Error, Model::DsgUserGroupQueryListResult> DsgUserGroupQueryListOutcome;
			typedef std::future<DsgUserGroupQueryListOutcome> DsgUserGroupQueryListOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgUserGroupQueryListRequest&, const DsgUserGroupQueryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgUserGroupQueryListAsyncHandler;
			typedef Outcome<Error, Model::DsgUserGroupQueryUserListResult> DsgUserGroupQueryUserListOutcome;
			typedef std::future<DsgUserGroupQueryUserListOutcome> DsgUserGroupQueryUserListOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgUserGroupQueryUserListRequest&, const DsgUserGroupQueryUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgUserGroupQueryUserListAsyncHandler;
			typedef Outcome<Error, Model::DsgWhiteListAddOrUpdateResult> DsgWhiteListAddOrUpdateOutcome;
			typedef std::future<DsgWhiteListAddOrUpdateOutcome> DsgWhiteListAddOrUpdateOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgWhiteListAddOrUpdateRequest&, const DsgWhiteListAddOrUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgWhiteListAddOrUpdateAsyncHandler;
			typedef Outcome<Error, Model::DsgWhiteListDeleteListResult> DsgWhiteListDeleteListOutcome;
			typedef std::future<DsgWhiteListDeleteListOutcome> DsgWhiteListDeleteListOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgWhiteListDeleteListRequest&, const DsgWhiteListDeleteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgWhiteListDeleteListAsyncHandler;
			typedef Outcome<Error, Model::DsgWhiteListQueryListResult> DsgWhiteListQueryListOutcome;
			typedef std::future<DsgWhiteListQueryListOutcome> DsgWhiteListQueryListOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DsgWhiteListQueryListRequest&, const DsgWhiteListQueryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DsgWhiteListQueryListAsyncHandler;
			typedef Outcome<Error, Model::EditRecognizeRuleResult> EditRecognizeRuleOutcome;
			typedef std::future<EditRecognizeRuleOutcome> EditRecognizeRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::EditRecognizeRuleRequest&, const EditRecognizeRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditRecognizeRuleAsyncHandler;
			typedef Outcome<Error, Model::EstablishRelationTableToBusinessResult> EstablishRelationTableToBusinessOutcome;
			typedef std::future<EstablishRelationTableToBusinessOutcome> EstablishRelationTableToBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::EstablishRelationTableToBusinessRequest&, const EstablishRelationTableToBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EstablishRelationTableToBusinessAsyncHandler;
			typedef Outcome<Error, Model::ExportDataSourcesResult> ExportDataSourcesOutcome;
			typedef std::future<ExportDataSourcesOutcome> ExportDataSourcesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ExportDataSourcesRequest&, const ExportDataSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportDataSourcesAsyncHandler;
			typedef Outcome<Error, Model::GenerateDISyncTaskConfigForCreatingResult> GenerateDISyncTaskConfigForCreatingOutcome;
			typedef std::future<GenerateDISyncTaskConfigForCreatingOutcome> GenerateDISyncTaskConfigForCreatingOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GenerateDISyncTaskConfigForCreatingRequest&, const GenerateDISyncTaskConfigForCreatingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDISyncTaskConfigForCreatingAsyncHandler;
			typedef Outcome<Error, Model::GenerateDISyncTaskConfigForUpdatingResult> GenerateDISyncTaskConfigForUpdatingOutcome;
			typedef std::future<GenerateDISyncTaskConfigForUpdatingOutcome> GenerateDISyncTaskConfigForUpdatingOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GenerateDISyncTaskConfigForUpdatingRequest&, const GenerateDISyncTaskConfigForUpdatingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDISyncTaskConfigForUpdatingAsyncHandler;
			typedef Outcome<Error, Model::GetAlertMessageResult> GetAlertMessageOutcome;
			typedef std::future<GetAlertMessageOutcome> GetAlertMessageOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetAlertMessageRequest&, const GetAlertMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAlertMessageAsyncHandler;
			typedef Outcome<Error, Model::GetBaselineResult> GetBaselineOutcome;
			typedef std::future<GetBaselineOutcome> GetBaselineOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetBaselineRequest&, const GetBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBaselineAsyncHandler;
			typedef Outcome<Error, Model::GetBaselineConfigResult> GetBaselineConfigOutcome;
			typedef std::future<GetBaselineConfigOutcome> GetBaselineConfigOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetBaselineConfigRequest&, const GetBaselineConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBaselineConfigAsyncHandler;
			typedef Outcome<Error, Model::GetBaselineKeyPathResult> GetBaselineKeyPathOutcome;
			typedef std::future<GetBaselineKeyPathOutcome> GetBaselineKeyPathOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetBaselineKeyPathRequest&, const GetBaselineKeyPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBaselineKeyPathAsyncHandler;
			typedef Outcome<Error, Model::GetBaselineStatusResult> GetBaselineStatusOutcome;
			typedef std::future<GetBaselineStatusOutcome> GetBaselineStatusOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetBaselineStatusRequest&, const GetBaselineStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBaselineStatusAsyncHandler;
			typedef Outcome<Error, Model::GetBusinessResult> GetBusinessOutcome;
			typedef std::future<GetBusinessOutcome> GetBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetBusinessRequest&, const GetBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBusinessAsyncHandler;
			typedef Outcome<Error, Model::GetDDLJobStatusResult> GetDDLJobStatusOutcome;
			typedef std::future<GetDDLJobStatusOutcome> GetDDLJobStatusOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDDLJobStatusRequest&, const GetDDLJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDDLJobStatusAsyncHandler;
			typedef Outcome<Error, Model::GetDIAlarmRuleResult> GetDIAlarmRuleOutcome;
			typedef std::future<GetDIAlarmRuleOutcome> GetDIAlarmRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDIAlarmRuleRequest&, const GetDIAlarmRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDIAlarmRuleAsyncHandler;
			typedef Outcome<Error, Model::GetDIJobResult> GetDIJobOutcome;
			typedef std::future<GetDIJobOutcome> GetDIJobOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDIJobRequest&, const GetDIJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDIJobAsyncHandler;
			typedef Outcome<Error, Model::GetDISyncInstanceInfoResult> GetDISyncInstanceInfoOutcome;
			typedef std::future<GetDISyncInstanceInfoOutcome> GetDISyncInstanceInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDISyncInstanceInfoRequest&, const GetDISyncInstanceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDISyncInstanceInfoAsyncHandler;
			typedef Outcome<Error, Model::GetDISyncTaskResult> GetDISyncTaskOutcome;
			typedef std::future<GetDISyncTaskOutcome> GetDISyncTaskOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDISyncTaskRequest&, const GetDISyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDISyncTaskAsyncHandler;
			typedef Outcome<Error, Model::GetDagResult> GetDagOutcome;
			typedef std::future<GetDagOutcome> GetDagOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDagRequest&, const GetDagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDagAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceApiResult> GetDataServiceApiOutcome;
			typedef std::future<GetDataServiceApiOutcome> GetDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceApiRequest&, const GetDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceApiTestResult> GetDataServiceApiTestOutcome;
			typedef std::future<GetDataServiceApiTestOutcome> GetDataServiceApiTestOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceApiTestRequest&, const GetDataServiceApiTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceApiTestAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceApplicationResult> GetDataServiceApplicationOutcome;
			typedef std::future<GetDataServiceApplicationOutcome> GetDataServiceApplicationOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceApplicationRequest&, const GetDataServiceApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceFolderResult> GetDataServiceFolderOutcome;
			typedef std::future<GetDataServiceFolderOutcome> GetDataServiceFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceFolderRequest&, const GetDataServiceFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceFolderAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceGroupResult> GetDataServiceGroupOutcome;
			typedef std::future<GetDataServiceGroupOutcome> GetDataServiceGroupOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceGroupRequest&, const GetDataServiceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceGroupAsyncHandler;
			typedef Outcome<Error, Model::GetDataServicePublishedApiResult> GetDataServicePublishedApiOutcome;
			typedef std::future<GetDataServicePublishedApiOutcome> GetDataServicePublishedApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServicePublishedApiRequest&, const GetDataServicePublishedApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServicePublishedApiAsyncHandler;
			typedef Outcome<Error, Model::GetDataSourceMetaResult> GetDataSourceMetaOutcome;
			typedef std::future<GetDataSourceMetaOutcome> GetDataSourceMetaOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataSourceMetaRequest&, const GetDataSourceMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataSourceMetaAsyncHandler;
			typedef Outcome<Error, Model::GetDeploymentResult> GetDeploymentOutcome;
			typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDeploymentRequest&, const GetDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeploymentAsyncHandler;
			typedef Outcome<Error, Model::GetExtensionResult> GetExtensionOutcome;
			typedef std::future<GetExtensionOutcome> GetExtensionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetExtensionRequest&, const GetExtensionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetExtensionAsyncHandler;
			typedef Outcome<Error, Model::GetFileResult> GetFileOutcome;
			typedef std::future<GetFileOutcome> GetFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetFileRequest&, const GetFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileAsyncHandler;
			typedef Outcome<Error, Model::GetFileTypeStatisticResult> GetFileTypeStatisticOutcome;
			typedef std::future<GetFileTypeStatisticOutcome> GetFileTypeStatisticOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetFileTypeStatisticRequest&, const GetFileTypeStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileTypeStatisticAsyncHandler;
			typedef Outcome<Error, Model::GetFileVersionResult> GetFileVersionOutcome;
			typedef std::future<GetFileVersionOutcome> GetFileVersionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetFileVersionRequest&, const GetFileVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileVersionAsyncHandler;
			typedef Outcome<Error, Model::GetFolderResult> GetFolderOutcome;
			typedef std::future<GetFolderOutcome> GetFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetFolderRequest&, const GetFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFolderAsyncHandler;
			typedef Outcome<Error, Model::GetIDEEventDetailResult> GetIDEEventDetailOutcome;
			typedef std::future<GetIDEEventDetailOutcome> GetIDEEventDetailOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetIDEEventDetailRequest&, const GetIDEEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIDEEventDetailAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResult> GetInstanceOutcome;
			typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceRequest&, const GetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceConsumeTimeRankResult> GetInstanceConsumeTimeRankOutcome;
			typedef std::future<GetInstanceConsumeTimeRankOutcome> GetInstanceConsumeTimeRankOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceConsumeTimeRankRequest&, const GetInstanceConsumeTimeRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceConsumeTimeRankAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceCountTrendResult> GetInstanceCountTrendOutcome;
			typedef std::future<GetInstanceCountTrendOutcome> GetInstanceCountTrendOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceCountTrendRequest&, const GetInstanceCountTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceCountTrendAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceErrorRankResult> GetInstanceErrorRankOutcome;
			typedef std::future<GetInstanceErrorRankOutcome> GetInstanceErrorRankOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceErrorRankRequest&, const GetInstanceErrorRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceErrorRankAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceLogResult> GetInstanceLogOutcome;
			typedef std::future<GetInstanceLogOutcome> GetInstanceLogOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceLogRequest&, const GetInstanceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceLogAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceStatusCountResult> GetInstanceStatusCountOutcome;
			typedef std::future<GetInstanceStatusCountOutcome> GetInstanceStatusCountOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceStatusCountRequest&, const GetInstanceStatusCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceStatusCountAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceStatusStatisticResult> GetInstanceStatusStatisticOutcome;
			typedef std::future<GetInstanceStatusStatisticOutcome> GetInstanceStatusStatisticOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceStatusStatisticRequest&, const GetInstanceStatusStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceStatusStatisticAsyncHandler;
			typedef Outcome<Error, Model::GetManualDagInstancesResult> GetManualDagInstancesOutcome;
			typedef std::future<GetManualDagInstancesOutcome> GetManualDagInstancesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetManualDagInstancesRequest&, const GetManualDagInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetManualDagInstancesAsyncHandler;
			typedef Outcome<Error, Model::GetMetaCategoryResult> GetMetaCategoryOutcome;
			typedef std::future<GetMetaCategoryOutcome> GetMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaCategoryRequest&, const GetMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::GetMetaCollectionDetailResult> GetMetaCollectionDetailOutcome;
			typedef std::future<GetMetaCollectionDetailOutcome> GetMetaCollectionDetailOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaCollectionDetailRequest&, const GetMetaCollectionDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaCollectionDetailAsyncHandler;
			typedef Outcome<Error, Model::GetMetaColumnLineageResult> GetMetaColumnLineageOutcome;
			typedef std::future<GetMetaColumnLineageOutcome> GetMetaColumnLineageOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaColumnLineageRequest&, const GetMetaColumnLineageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaColumnLineageAsyncHandler;
			typedef Outcome<Error, Model::GetMetaDBInfoResult> GetMetaDBInfoOutcome;
			typedef std::future<GetMetaDBInfoOutcome> GetMetaDBInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaDBInfoRequest&, const GetMetaDBInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaDBInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMetaDBTableListResult> GetMetaDBTableListOutcome;
			typedef std::future<GetMetaDBTableListOutcome> GetMetaDBTableListOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaDBTableListRequest&, const GetMetaDBTableListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaDBTableListAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableBasicInfoResult> GetMetaTableBasicInfoOutcome;
			typedef std::future<GetMetaTableBasicInfoOutcome> GetMetaTableBasicInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableBasicInfoRequest&, const GetMetaTableBasicInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableBasicInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableChangeLogResult> GetMetaTableChangeLogOutcome;
			typedef std::future<GetMetaTableChangeLogOutcome> GetMetaTableChangeLogOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableChangeLogRequest&, const GetMetaTableChangeLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableChangeLogAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableColumnResult> GetMetaTableColumnOutcome;
			typedef std::future<GetMetaTableColumnOutcome> GetMetaTableColumnOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableColumnRequest&, const GetMetaTableColumnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableColumnAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableFullInfoResult> GetMetaTableFullInfoOutcome;
			typedef std::future<GetMetaTableFullInfoOutcome> GetMetaTableFullInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableFullInfoRequest&, const GetMetaTableFullInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableFullInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableIntroWikiResult> GetMetaTableIntroWikiOutcome;
			typedef std::future<GetMetaTableIntroWikiOutcome> GetMetaTableIntroWikiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableIntroWikiRequest&, const GetMetaTableIntroWikiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableIntroWikiAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableLineageResult> GetMetaTableLineageOutcome;
			typedef std::future<GetMetaTableLineageOutcome> GetMetaTableLineageOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableLineageRequest&, const GetMetaTableLineageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableLineageAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableListByCategoryResult> GetMetaTableListByCategoryOutcome;
			typedef std::future<GetMetaTableListByCategoryOutcome> GetMetaTableListByCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableListByCategoryRequest&, const GetMetaTableListByCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableListByCategoryAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableOutputResult> GetMetaTableOutputOutcome;
			typedef std::future<GetMetaTableOutputOutcome> GetMetaTableOutputOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableOutputRequest&, const GetMetaTableOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableOutputAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTablePartitionResult> GetMetaTablePartitionOutcome;
			typedef std::future<GetMetaTablePartitionOutcome> GetMetaTablePartitionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTablePartitionRequest&, const GetMetaTablePartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTablePartitionAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableProducingTasksResult> GetMetaTableProducingTasksOutcome;
			typedef std::future<GetMetaTableProducingTasksOutcome> GetMetaTableProducingTasksOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableProducingTasksRequest&, const GetMetaTableProducingTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableProducingTasksAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableThemeLevelResult> GetMetaTableThemeLevelOutcome;
			typedef std::future<GetMetaTableThemeLevelOutcome> GetMetaTableThemeLevelOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableThemeLevelRequest&, const GetMetaTableThemeLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableThemeLevelAsyncHandler;
			typedef Outcome<Error, Model::GetMigrationProcessResult> GetMigrationProcessOutcome;
			typedef std::future<GetMigrationProcessOutcome> GetMigrationProcessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMigrationProcessRequest&, const GetMigrationProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMigrationProcessAsyncHandler;
			typedef Outcome<Error, Model::GetMigrationSummaryResult> GetMigrationSummaryOutcome;
			typedef std::future<GetMigrationSummaryOutcome> GetMigrationSummaryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMigrationSummaryRequest&, const GetMigrationSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMigrationSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetNodeResult> GetNodeOutcome;
			typedef std::future<GetNodeOutcome> GetNodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetNodeRequest&, const GetNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeAsyncHandler;
			typedef Outcome<Error, Model::GetNodeChildrenResult> GetNodeChildrenOutcome;
			typedef std::future<GetNodeChildrenOutcome> GetNodeChildrenOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetNodeChildrenRequest&, const GetNodeChildrenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeChildrenAsyncHandler;
			typedef Outcome<Error, Model::GetNodeCodeResult> GetNodeCodeOutcome;
			typedef std::future<GetNodeCodeOutcome> GetNodeCodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetNodeCodeRequest&, const GetNodeCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeCodeAsyncHandler;
			typedef Outcome<Error, Model::GetNodeOnBaselineResult> GetNodeOnBaselineOutcome;
			typedef std::future<GetNodeOnBaselineOutcome> GetNodeOnBaselineOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetNodeOnBaselineRequest&, const GetNodeOnBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeOnBaselineAsyncHandler;
			typedef Outcome<Error, Model::GetNodeParentsResult> GetNodeParentsOutcome;
			typedef std::future<GetNodeParentsOutcome> GetNodeParentsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetNodeParentsRequest&, const GetNodeParentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeParentsAsyncHandler;
			typedef Outcome<Error, Model::GetNodeTypeListInfoResult> GetNodeTypeListInfoOutcome;
			typedef std::future<GetNodeTypeListInfoOutcome> GetNodeTypeListInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetNodeTypeListInfoRequest&, const GetNodeTypeListInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeTypeListInfoAsyncHandler;
			typedef Outcome<Error, Model::GetOpRiskDataResult> GetOpRiskDataOutcome;
			typedef std::future<GetOpRiskDataOutcome> GetOpRiskDataOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetOpRiskDataRequest&, const GetOpRiskDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpRiskDataAsyncHandler;
			typedef Outcome<Error, Model::GetOpSensitiveDataResult> GetOpSensitiveDataOutcome;
			typedef std::future<GetOpSensitiveDataOutcome> GetOpSensitiveDataOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetOpSensitiveDataRequest&, const GetOpSensitiveDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpSensitiveDataAsyncHandler;
			typedef Outcome<Error, Model::GetOptionValueForProjectResult> GetOptionValueForProjectOutcome;
			typedef std::future<GetOptionValueForProjectOutcome> GetOptionValueForProjectOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetOptionValueForProjectRequest&, const GetOptionValueForProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOptionValueForProjectAsyncHandler;
			typedef Outcome<Error, Model::GetPermissionApplyOrderDetailResult> GetPermissionApplyOrderDetailOutcome;
			typedef std::future<GetPermissionApplyOrderDetailOutcome> GetPermissionApplyOrderDetailOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetPermissionApplyOrderDetailRequest&, const GetPermissionApplyOrderDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPermissionApplyOrderDetailAsyncHandler;
			typedef Outcome<Error, Model::GetProjectResult> GetProjectOutcome;
			typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetProjectRequest&, const GetProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectAsyncHandler;
			typedef Outcome<Error, Model::GetProjectDetailResult> GetProjectDetailOutcome;
			typedef std::future<GetProjectDetailOutcome> GetProjectDetailOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetProjectDetailRequest&, const GetProjectDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectDetailAsyncHandler;
			typedef Outcome<Error, Model::GetQualityEntityResult> GetQualityEntityOutcome;
			typedef std::future<GetQualityEntityOutcome> GetQualityEntityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetQualityEntityRequest&, const GetQualityEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQualityEntityAsyncHandler;
			typedef Outcome<Error, Model::GetQualityFollowerResult> GetQualityFollowerOutcome;
			typedef std::future<GetQualityFollowerOutcome> GetQualityFollowerOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetQualityFollowerRequest&, const GetQualityFollowerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQualityFollowerAsyncHandler;
			typedef Outcome<Error, Model::GetQualityRuleResult> GetQualityRuleOutcome;
			typedef std::future<GetQualityRuleOutcome> GetQualityRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetQualityRuleRequest&, const GetQualityRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQualityRuleAsyncHandler;
			typedef Outcome<Error, Model::GetRemindResult> GetRemindOutcome;
			typedef std::future<GetRemindOutcome> GetRemindOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetRemindRequest&, const GetRemindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRemindAsyncHandler;
			typedef Outcome<Error, Model::GetSensitiveDataResult> GetSensitiveDataOutcome;
			typedef std::future<GetSensitiveDataOutcome> GetSensitiveDataOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetSensitiveDataRequest&, const GetSensitiveDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSensitiveDataAsyncHandler;
			typedef Outcome<Error, Model::GetSuccessInstanceTrendResult> GetSuccessInstanceTrendOutcome;
			typedef std::future<GetSuccessInstanceTrendOutcome> GetSuccessInstanceTrendOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetSuccessInstanceTrendRequest&, const GetSuccessInstanceTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSuccessInstanceTrendAsyncHandler;
			typedef Outcome<Error, Model::GetTopicResult> GetTopicOutcome;
			typedef std::future<GetTopicOutcome> GetTopicOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetTopicRequest&, const GetTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicAsyncHandler;
			typedef Outcome<Error, Model::GetTopicInfluenceResult> GetTopicInfluenceOutcome;
			typedef std::future<GetTopicInfluenceOutcome> GetTopicInfluenceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetTopicInfluenceRequest&, const GetTopicInfluenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicInfluenceAsyncHandler;
			typedef Outcome<Error, Model::ImportDataSourcesResult> ImportDataSourcesOutcome;
			typedef std::future<ImportDataSourcesOutcome> ImportDataSourcesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ImportDataSourcesRequest&, const ImportDataSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportDataSourcesAsyncHandler;
			typedef Outcome<Error, Model::ListAlertMessagesResult> ListAlertMessagesOutcome;
			typedef std::future<ListAlertMessagesOutcome> ListAlertMessagesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListAlertMessagesRequest&, const ListAlertMessagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlertMessagesAsyncHandler;
			typedef Outcome<Error, Model::ListBaselineConfigsResult> ListBaselineConfigsOutcome;
			typedef std::future<ListBaselineConfigsOutcome> ListBaselineConfigsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListBaselineConfigsRequest&, const ListBaselineConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaselineConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListBaselineStatusesResult> ListBaselineStatusesOutcome;
			typedef std::future<ListBaselineStatusesOutcome> ListBaselineStatusesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListBaselineStatusesRequest&, const ListBaselineStatusesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaselineStatusesAsyncHandler;
			typedef Outcome<Error, Model::ListBaselinesResult> ListBaselinesOutcome;
			typedef std::future<ListBaselinesOutcome> ListBaselinesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListBaselinesRequest&, const ListBaselinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaselinesAsyncHandler;
			typedef Outcome<Error, Model::ListBusinessResult> ListBusinessOutcome;
			typedef std::future<ListBusinessOutcome> ListBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListBusinessRequest&, const ListBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBusinessAsyncHandler;
			typedef Outcome<Error, Model::ListCalcEnginesResult> ListCalcEnginesOutcome;
			typedef std::future<ListCalcEnginesOutcome> ListCalcEnginesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListCalcEnginesRequest&, const ListCalcEnginesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCalcEnginesAsyncHandler;
			typedef Outcome<Error, Model::ListCheckProcessesResult> ListCheckProcessesOutcome;
			typedef std::future<ListCheckProcessesOutcome> ListCheckProcessesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListCheckProcessesRequest&, const ListCheckProcessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCheckProcessesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterConfigsResult> ListClusterConfigsOutcome;
			typedef std::future<ListClusterConfigsOutcome> ListClusterConfigsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListClusterConfigsRequest&, const ListClusterConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::ListConnectionsResult> ListConnectionsOutcome;
			typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListConnectionsRequest&, const ListConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConnectionsAsyncHandler;
			typedef Outcome<Error, Model::ListDIAlarmRulesResult> ListDIAlarmRulesOutcome;
			typedef std::future<ListDIAlarmRulesOutcome> ListDIAlarmRulesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDIAlarmRulesRequest&, const ListDIAlarmRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDIAlarmRulesAsyncHandler;
			typedef Outcome<Error, Model::ListDIJobsResult> ListDIJobsOutcome;
			typedef std::future<ListDIJobsOutcome> ListDIJobsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDIJobsRequest&, const ListDIJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDIJobsAsyncHandler;
			typedef Outcome<Error, Model::ListDIProjectConfigResult> ListDIProjectConfigOutcome;
			typedef std::future<ListDIProjectConfigOutcome> ListDIProjectConfigOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDIProjectConfigRequest&, const ListDIProjectConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDIProjectConfigAsyncHandler;
			typedef Outcome<Error, Model::ListDagsResult> ListDagsOutcome;
			typedef std::future<ListDagsOutcome> ListDagsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDagsRequest&, const ListDagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDagsAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceApiAuthoritiesResult> ListDataServiceApiAuthoritiesOutcome;
			typedef std::future<ListDataServiceApiAuthoritiesOutcome> ListDataServiceApiAuthoritiesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceApiAuthoritiesRequest&, const ListDataServiceApiAuthoritiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceApiAuthoritiesAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceApiTestResult> ListDataServiceApiTestOutcome;
			typedef std::future<ListDataServiceApiTestOutcome> ListDataServiceApiTestOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceApiTestRequest&, const ListDataServiceApiTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceApiTestAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceApisResult> ListDataServiceApisOutcome;
			typedef std::future<ListDataServiceApisOutcome> ListDataServiceApisOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceApisRequest&, const ListDataServiceApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceApisAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceApplicationsResult> ListDataServiceApplicationsOutcome;
			typedef std::future<ListDataServiceApplicationsOutcome> ListDataServiceApplicationsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceApplicationsRequest&, const ListDataServiceApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceAuthorizedApisResult> ListDataServiceAuthorizedApisOutcome;
			typedef std::future<ListDataServiceAuthorizedApisOutcome> ListDataServiceAuthorizedApisOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceAuthorizedApisRequest&, const ListDataServiceAuthorizedApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceAuthorizedApisAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceFoldersResult> ListDataServiceFoldersOutcome;
			typedef std::future<ListDataServiceFoldersOutcome> ListDataServiceFoldersOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceFoldersRequest&, const ListDataServiceFoldersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceFoldersAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceGroupsResult> ListDataServiceGroupsOutcome;
			typedef std::future<ListDataServiceGroupsOutcome> ListDataServiceGroupsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceGroupsRequest&, const ListDataServiceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListDataServicePublishedApisResult> ListDataServicePublishedApisOutcome;
			typedef std::future<ListDataServicePublishedApisOutcome> ListDataServicePublishedApisOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServicePublishedApisRequest&, const ListDataServicePublishedApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServicePublishedApisAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourcesResult> ListDataSourcesOutcome;
			typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataSourcesRequest&, const ListDataSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourcesAsyncHandler;
			typedef Outcome<Error, Model::ListDeploymentsResult> ListDeploymentsOutcome;
			typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDeploymentsRequest&, const ListDeploymentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeploymentsAsyncHandler;
			typedef Outcome<Error, Model::ListEnabledExtensionsForProjectResult> ListEnabledExtensionsForProjectOutcome;
			typedef std::future<ListEnabledExtensionsForProjectOutcome> ListEnabledExtensionsForProjectOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListEnabledExtensionsForProjectRequest&, const ListEnabledExtensionsForProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnabledExtensionsForProjectAsyncHandler;
			typedef Outcome<Error, Model::ListEntitiesByTagsResult> ListEntitiesByTagsOutcome;
			typedef std::future<ListEntitiesByTagsOutcome> ListEntitiesByTagsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListEntitiesByTagsRequest&, const ListEntitiesByTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEntitiesByTagsAsyncHandler;
			typedef Outcome<Error, Model::ListEntityTagsResult> ListEntityTagsOutcome;
			typedef std::future<ListEntityTagsOutcome> ListEntityTagsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListEntityTagsRequest&, const ListEntityTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEntityTagsAsyncHandler;
			typedef Outcome<Error, Model::ListExtensionsResult> ListExtensionsOutcome;
			typedef std::future<ListExtensionsOutcome> ListExtensionsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListExtensionsRequest&, const ListExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExtensionsAsyncHandler;
			typedef Outcome<Error, Model::ListFileTypeResult> ListFileTypeOutcome;
			typedef std::future<ListFileTypeOutcome> ListFileTypeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListFileTypeRequest&, const ListFileTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFileTypeAsyncHandler;
			typedef Outcome<Error, Model::ListFileVersionsResult> ListFileVersionsOutcome;
			typedef std::future<ListFileVersionsOutcome> ListFileVersionsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListFileVersionsRequest&, const ListFileVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFileVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListFilesResult> ListFilesOutcome;
			typedef std::future<ListFilesOutcome> ListFilesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListFilesRequest&, const ListFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFilesAsyncHandler;
			typedef Outcome<Error, Model::ListFoldersResult> ListFoldersOutcome;
			typedef std::future<ListFoldersOutcome> ListFoldersOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListFoldersRequest&, const ListFoldersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFoldersAsyncHandler;
			typedef Outcome<Error, Model::ListInnerNodesResult> ListInnerNodesOutcome;
			typedef std::future<ListInnerNodesOutcome> ListInnerNodesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListInnerNodesRequest&, const ListInnerNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInnerNodesAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceAmountResult> ListInstanceAmountOutcome;
			typedef std::future<ListInstanceAmountOutcome> ListInstanceAmountOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListInstanceAmountRequest&, const ListInstanceAmountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceAmountAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceHistoryResult> ListInstanceHistoryOutcome;
			typedef std::future<ListInstanceHistoryOutcome> ListInstanceHistoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListInstanceHistoryRequest&, const ListInstanceHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListLineageResult> ListLineageOutcome;
			typedef std::future<ListLineageOutcome> ListLineageOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListLineageRequest&, const ListLineageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLineageAsyncHandler;
			typedef Outcome<Error, Model::ListManualDagInstancesResult> ListManualDagInstancesOutcome;
			typedef std::future<ListManualDagInstancesOutcome> ListManualDagInstancesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListManualDagInstancesRequest&, const ListManualDagInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListManualDagInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListMeasureDataResult> ListMeasureDataOutcome;
			typedef std::future<ListMeasureDataOutcome> ListMeasureDataOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListMeasureDataRequest&, const ListMeasureDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMeasureDataAsyncHandler;
			typedef Outcome<Error, Model::ListMetaCollectionEntitiesResult> ListMetaCollectionEntitiesOutcome;
			typedef std::future<ListMetaCollectionEntitiesOutcome> ListMetaCollectionEntitiesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListMetaCollectionEntitiesRequest&, const ListMetaCollectionEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMetaCollectionEntitiesAsyncHandler;
			typedef Outcome<Error, Model::ListMetaCollectionsResult> ListMetaCollectionsOutcome;
			typedef std::future<ListMetaCollectionsOutcome> ListMetaCollectionsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListMetaCollectionsRequest&, const ListMetaCollectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMetaCollectionsAsyncHandler;
			typedef Outcome<Error, Model::ListMetaDBResult> ListMetaDBOutcome;
			typedef std::future<ListMetaDBOutcome> ListMetaDBOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListMetaDBRequest&, const ListMetaDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMetaDBAsyncHandler;
			typedef Outcome<Error, Model::ListMigrationsResult> ListMigrationsOutcome;
			typedef std::future<ListMigrationsOutcome> ListMigrationsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListMigrationsRequest&, const ListMigrationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMigrationsAsyncHandler;
			typedef Outcome<Error, Model::ListNodeIOResult> ListNodeIOOutcome;
			typedef std::future<ListNodeIOOutcome> ListNodeIOOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListNodeIORequest&, const ListNodeIOOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeIOAsyncHandler;
			typedef Outcome<Error, Model::ListNodeInputOrOutputResult> ListNodeInputOrOutputOutcome;
			typedef std::future<ListNodeInputOrOutputOutcome> ListNodeInputOrOutputOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListNodeInputOrOutputRequest&, const ListNodeInputOrOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeInputOrOutputAsyncHandler;
			typedef Outcome<Error, Model::ListNodesResult> ListNodesOutcome;
			typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListNodesRequest&, const ListNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesAsyncHandler;
			typedef Outcome<Error, Model::ListNodesByBaselineResult> ListNodesByBaselineOutcome;
			typedef std::future<ListNodesByBaselineOutcome> ListNodesByBaselineOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListNodesByBaselineRequest&, const ListNodesByBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesByBaselineAsyncHandler;
			typedef Outcome<Error, Model::ListNodesByOutputResult> ListNodesByOutputOutcome;
			typedef std::future<ListNodesByOutputOutcome> ListNodesByOutputOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListNodesByOutputRequest&, const ListNodesByOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesByOutputAsyncHandler;
			typedef Outcome<Error, Model::ListPermissionApplyOrdersResult> ListPermissionApplyOrdersOutcome;
			typedef std::future<ListPermissionApplyOrdersOutcome> ListPermissionApplyOrdersOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListPermissionApplyOrdersRequest&, const ListPermissionApplyOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPermissionApplyOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListProgramTypeCountResult> ListProgramTypeCountOutcome;
			typedef std::future<ListProgramTypeCountOutcome> ListProgramTypeCountOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListProgramTypeCountRequest&, const ListProgramTypeCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProgramTypeCountAsyncHandler;
			typedef Outcome<Error, Model::ListProjectIdsResult> ListProjectIdsOutcome;
			typedef std::future<ListProjectIdsOutcome> ListProjectIdsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListProjectIdsRequest&, const ListProjectIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectIdsAsyncHandler;
			typedef Outcome<Error, Model::ListProjectMembersResult> ListProjectMembersOutcome;
			typedef std::future<ListProjectMembersOutcome> ListProjectMembersOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListProjectMembersRequest&, const ListProjectMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectMembersAsyncHandler;
			typedef Outcome<Error, Model::ListProjectRolesResult> ListProjectRolesOutcome;
			typedef std::future<ListProjectRolesOutcome> ListProjectRolesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListProjectRolesRequest&, const ListProjectRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectRolesAsyncHandler;
			typedef Outcome<Error, Model::ListProjectsResult> ListProjectsOutcome;
			typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListProjectsRequest&, const ListProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;
			typedef Outcome<Error, Model::ListQualityResultsByEntityResult> ListQualityResultsByEntityOutcome;
			typedef std::future<ListQualityResultsByEntityOutcome> ListQualityResultsByEntityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListQualityResultsByEntityRequest&, const ListQualityResultsByEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQualityResultsByEntityAsyncHandler;
			typedef Outcome<Error, Model::ListQualityResultsByRuleResult> ListQualityResultsByRuleOutcome;
			typedef std::future<ListQualityResultsByRuleOutcome> ListQualityResultsByRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListQualityResultsByRuleRequest&, const ListQualityResultsByRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQualityResultsByRuleAsyncHandler;
			typedef Outcome<Error, Model::ListQualityRulesResult> ListQualityRulesOutcome;
			typedef std::future<ListQualityRulesOutcome> ListQualityRulesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListQualityRulesRequest&, const ListQualityRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQualityRulesAsyncHandler;
			typedef Outcome<Error, Model::ListRefDISyncTasksResult> ListRefDISyncTasksOutcome;
			typedef std::future<ListRefDISyncTasksOutcome> ListRefDISyncTasksOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListRefDISyncTasksRequest&, const ListRefDISyncTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRefDISyncTasksAsyncHandler;
			typedef Outcome<Error, Model::ListRemindsResult> ListRemindsOutcome;
			typedef std::future<ListRemindsOutcome> ListRemindsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListRemindsRequest&, const ListRemindsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRemindsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceGroupsResult> ListResourceGroupsOutcome;
			typedef std::future<ListResourceGroupsOutcome> ListResourceGroupsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListResourceGroupsRequest&, const ListResourceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListShiftPersonnelsResult> ListShiftPersonnelsOutcome;
			typedef std::future<ListShiftPersonnelsOutcome> ListShiftPersonnelsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListShiftPersonnelsRequest&, const ListShiftPersonnelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListShiftPersonnelsAsyncHandler;
			typedef Outcome<Error, Model::ListShiftSchedulesResult> ListShiftSchedulesOutcome;
			typedef std::future<ListShiftSchedulesOutcome> ListShiftSchedulesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListShiftSchedulesRequest&, const ListShiftSchedulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListShiftSchedulesAsyncHandler;
			typedef Outcome<Error, Model::ListSuccessInstanceAmountResult> ListSuccessInstanceAmountOutcome;
			typedef std::future<ListSuccessInstanceAmountOutcome> ListSuccessInstanceAmountOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListSuccessInstanceAmountRequest&, const ListSuccessInstanceAmountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSuccessInstanceAmountAsyncHandler;
			typedef Outcome<Error, Model::ListTableLevelResult> ListTableLevelOutcome;
			typedef std::future<ListTableLevelOutcome> ListTableLevelOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListTableLevelRequest&, const ListTableLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTableLevelAsyncHandler;
			typedef Outcome<Error, Model::ListTableThemeResult> ListTableThemeOutcome;
			typedef std::future<ListTableThemeOutcome> ListTableThemeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListTableThemeRequest&, const ListTableThemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTableThemeAsyncHandler;
			typedef Outcome<Error, Model::ListTablesResult> ListTablesOutcome;
			typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListTablesRequest&, const ListTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTablesAsyncHandler;
			typedef Outcome<Error, Model::ListTopicsResult> ListTopicsOutcome;
			typedef std::future<ListTopicsOutcome> ListTopicsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListTopicsRequest&, const ListTopicsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTopicsAsyncHandler;
			typedef Outcome<Error, Model::OfflineNodeResult> OfflineNodeOutcome;
			typedef std::future<OfflineNodeOutcome> OfflineNodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::OfflineNodeRequest&, const OfflineNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OfflineNodeAsyncHandler;
			typedef Outcome<Error, Model::PublishDataServiceApiResult> PublishDataServiceApiOutcome;
			typedef std::future<PublishDataServiceApiOutcome> PublishDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::PublishDataServiceApiRequest&, const PublishDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::QueryDISyncTaskConfigProcessResultResult> QueryDISyncTaskConfigProcessResultOutcome;
			typedef std::future<QueryDISyncTaskConfigProcessResultOutcome> QueryDISyncTaskConfigProcessResultOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::QueryDISyncTaskConfigProcessResultRequest&, const QueryDISyncTaskConfigProcessResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDISyncTaskConfigProcessResultAsyncHandler;
			typedef Outcome<Error, Model::QueryDefaultTemplateResult> QueryDefaultTemplateOutcome;
			typedef std::future<QueryDefaultTemplateOutcome> QueryDefaultTemplateOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::QueryDefaultTemplateRequest&, const QueryDefaultTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDefaultTemplateAsyncHandler;
			typedef Outcome<Error, Model::QueryPublicModelEngineResult> QueryPublicModelEngineOutcome;
			typedef std::future<QueryPublicModelEngineOutcome> QueryPublicModelEngineOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::QueryPublicModelEngineRequest&, const QueryPublicModelEngineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPublicModelEngineAsyncHandler;
			typedef Outcome<Error, Model::QueryRecognizeDataByRuleTypeResult> QueryRecognizeDataByRuleTypeOutcome;
			typedef std::future<QueryRecognizeDataByRuleTypeOutcome> QueryRecognizeDataByRuleTypeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::QueryRecognizeDataByRuleTypeRequest&, const QueryRecognizeDataByRuleTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecognizeDataByRuleTypeAsyncHandler;
			typedef Outcome<Error, Model::QueryRecognizeRuleDetailResult> QueryRecognizeRuleDetailOutcome;
			typedef std::future<QueryRecognizeRuleDetailOutcome> QueryRecognizeRuleDetailOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::QueryRecognizeRuleDetailRequest&, const QueryRecognizeRuleDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecognizeRuleDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryRecognizeRulesTypeResult> QueryRecognizeRulesTypeOutcome;
			typedef std::future<QueryRecognizeRulesTypeOutcome> QueryRecognizeRulesTypeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::QueryRecognizeRulesTypeRequest&, const QueryRecognizeRulesTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRecognizeRulesTypeAsyncHandler;
			typedef Outcome<Error, Model::QuerySensClassificationResult> QuerySensClassificationOutcome;
			typedef std::future<QuerySensClassificationOutcome> QuerySensClassificationOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::QuerySensClassificationRequest&, const QuerySensClassificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySensClassificationAsyncHandler;
			typedef Outcome<Error, Model::QuerySensLevelResult> QuerySensLevelOutcome;
			typedef std::future<QuerySensLevelOutcome> QuerySensLevelOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::QuerySensLevelRequest&, const QuerySensLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySensLevelAsyncHandler;
			typedef Outcome<Error, Model::QuerySensNodeInfoResult> QuerySensNodeInfoOutcome;
			typedef std::future<QuerySensNodeInfoOutcome> QuerySensNodeInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::QuerySensNodeInfoRequest&, const QuerySensNodeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySensNodeInfoAsyncHandler;
			typedef Outcome<Error, Model::RegisterLineageRelationResult> RegisterLineageRelationOutcome;
			typedef std::future<RegisterLineageRelationOutcome> RegisterLineageRelationOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RegisterLineageRelationRequest&, const RegisterLineageRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterLineageRelationAsyncHandler;
			typedef Outcome<Error, Model::RemoveEntityTagsResult> RemoveEntityTagsOutcome;
			typedef std::future<RemoveEntityTagsOutcome> RemoveEntityTagsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RemoveEntityTagsRequest&, const RemoveEntityTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEntityTagsAsyncHandler;
			typedef Outcome<Error, Model::RemoveProjectMemberFromRoleResult> RemoveProjectMemberFromRoleOutcome;
			typedef std::future<RemoveProjectMemberFromRoleOutcome> RemoveProjectMemberFromRoleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RemoveProjectMemberFromRoleRequest&, const RemoveProjectMemberFromRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveProjectMemberFromRoleAsyncHandler;
			typedef Outcome<Error, Model::RestartInstanceResult> RestartInstanceOutcome;
			typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RestartInstanceRequest&, const RestartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResumeInstanceResult> ResumeInstanceOutcome;
			typedef std::future<ResumeInstanceOutcome> ResumeInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ResumeInstanceRequest&, const ResumeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeInstanceAsyncHandler;
			typedef Outcome<Error, Model::RevokeTablePermissionResult> RevokeTablePermissionOutcome;
			typedef std::future<RevokeTablePermissionOutcome> RevokeTablePermissionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RevokeTablePermissionRequest&, const RevokeTablePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeTablePermissionAsyncHandler;
			typedef Outcome<Error, Model::RunCycleDagNodesResult> RunCycleDagNodesOutcome;
			typedef std::future<RunCycleDagNodesOutcome> RunCycleDagNodesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RunCycleDagNodesRequest&, const RunCycleDagNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunCycleDagNodesAsyncHandler;
			typedef Outcome<Error, Model::RunManualDagNodesResult> RunManualDagNodesOutcome;
			typedef std::future<RunManualDagNodesOutcome> RunManualDagNodesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RunManualDagNodesRequest&, const RunManualDagNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunManualDagNodesAsyncHandler;
			typedef Outcome<Error, Model::RunSmokeTestResult> RunSmokeTestOutcome;
			typedef std::future<RunSmokeTestOutcome> RunSmokeTestOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RunSmokeTestRequest&, const RunSmokeTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunSmokeTestAsyncHandler;
			typedef Outcome<Error, Model::RunTriggerNodeResult> RunTriggerNodeOutcome;
			typedef std::future<RunTriggerNodeOutcome> RunTriggerNodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RunTriggerNodeRequest&, const RunTriggerNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunTriggerNodeAsyncHandler;
			typedef Outcome<Error, Model::SaveDataServiceApiTestResultResult> SaveDataServiceApiTestResultOutcome;
			typedef std::future<SaveDataServiceApiTestResultOutcome> SaveDataServiceApiTestResultOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SaveDataServiceApiTestResultRequest&, const SaveDataServiceApiTestResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveDataServiceApiTestResultAsyncHandler;
			typedef Outcome<Error, Model::ScanSensitiveDataResult> ScanSensitiveDataOutcome;
			typedef std::future<ScanSensitiveDataOutcome> ScanSensitiveDataOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ScanSensitiveDataRequest&, const ScanSensitiveDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScanSensitiveDataAsyncHandler;
			typedef Outcome<Error, Model::SearchMetaTablesResult> SearchMetaTablesOutcome;
			typedef std::future<SearchMetaTablesOutcome> SearchMetaTablesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SearchMetaTablesRequest&, const SearchMetaTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchMetaTablesAsyncHandler;
			typedef Outcome<Error, Model::SearchNodesByOutputResult> SearchNodesByOutputOutcome;
			typedef std::future<SearchNodesByOutputOutcome> SearchNodesByOutputOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SearchNodesByOutputRequest&, const SearchNodesByOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchNodesByOutputAsyncHandler;
			typedef Outcome<Error, Model::SetDataSourceShareResult> SetDataSourceShareOutcome;
			typedef std::future<SetDataSourceShareOutcome> SetDataSourceShareOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SetDataSourceShareRequest&, const SetDataSourceShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDataSourceShareAsyncHandler;
			typedef Outcome<Error, Model::SetEntityTagsResult> SetEntityTagsOutcome;
			typedef std::future<SetEntityTagsOutcome> SetEntityTagsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SetEntityTagsRequest&, const SetEntityTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetEntityTagsAsyncHandler;
			typedef Outcome<Error, Model::SetSuccessInstanceResult> SetSuccessInstanceOutcome;
			typedef std::future<SetSuccessInstanceOutcome> SetSuccessInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SetSuccessInstanceRequest&, const SetSuccessInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSuccessInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartDIJobResult> StartDIJobOutcome;
			typedef std::future<StartDIJobOutcome> StartDIJobOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::StartDIJobRequest&, const StartDIJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDIJobAsyncHandler;
			typedef Outcome<Error, Model::StartDISyncInstanceResult> StartDISyncInstanceOutcome;
			typedef std::future<StartDISyncInstanceOutcome> StartDISyncInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::StartDISyncInstanceRequest&, const StartDISyncInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDISyncInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartMigrationResult> StartMigrationOutcome;
			typedef std::future<StartMigrationOutcome> StartMigrationOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::StartMigrationRequest&, const StartMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrationAsyncHandler;
			typedef Outcome<Error, Model::StopDIJobResult> StopDIJobOutcome;
			typedef std::future<StopDIJobOutcome> StopDIJobOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::StopDIJobRequest&, const StopDIJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDIJobAsyncHandler;
			typedef Outcome<Error, Model::StopDISyncInstanceResult> StopDISyncInstanceOutcome;
			typedef std::future<StopDISyncInstanceOutcome> StopDISyncInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::StopDISyncInstanceRequest&, const StopDISyncInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDISyncInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::SubmitDataServiceApiResult> SubmitDataServiceApiOutcome;
			typedef std::future<SubmitDataServiceApiOutcome> SubmitDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SubmitDataServiceApiRequest&, const SubmitDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::SubmitFileResult> SubmitFileOutcome;
			typedef std::future<SubmitFileOutcome> SubmitFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SubmitFileRequest&, const SubmitFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFileAsyncHandler;
			typedef Outcome<Error, Model::SuspendInstanceResult> SuspendInstanceOutcome;
			typedef std::future<SuspendInstanceOutcome> SuspendInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SuspendInstanceRequest&, const SuspendInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendInstanceAsyncHandler;
			typedef Outcome<Error, Model::TerminateDISyncInstanceResult> TerminateDISyncInstanceOutcome;
			typedef std::future<TerminateDISyncInstanceOutcome> TerminateDISyncInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::TerminateDISyncInstanceRequest&, const TerminateDISyncInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDISyncInstanceAsyncHandler;
			typedef Outcome<Error, Model::TestDataServiceApiResult> TestDataServiceApiOutcome;
			typedef std::future<TestDataServiceApiOutcome> TestDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::TestDataServiceApiRequest&, const TestDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::TestNetworkConnectionResult> TestNetworkConnectionOutcome;
			typedef std::future<TestNetworkConnectionOutcome> TestNetworkConnectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::TestNetworkConnectionRequest&, const TestNetworkConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestNetworkConnectionAsyncHandler;
			typedef Outcome<Error, Model::TopTenElapsedTimeInstanceResult> TopTenElapsedTimeInstanceOutcome;
			typedef std::future<TopTenElapsedTimeInstanceOutcome> TopTenElapsedTimeInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::TopTenElapsedTimeInstanceRequest&, const TopTenElapsedTimeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TopTenElapsedTimeInstanceAsyncHandler;
			typedef Outcome<Error, Model::TopTenErrorTimesInstanceResult> TopTenErrorTimesInstanceOutcome;
			typedef std::future<TopTenErrorTimesInstanceOutcome> TopTenErrorTimesInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::TopTenErrorTimesInstanceRequest&, const TopTenErrorTimesInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TopTenErrorTimesInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateBaselineResult> UpdateBaselineOutcome;
			typedef std::future<UpdateBaselineOutcome> UpdateBaselineOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateBaselineRequest&, const UpdateBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBaselineAsyncHandler;
			typedef Outcome<Error, Model::UpdateBusinessResult> UpdateBusinessOutcome;
			typedef std::future<UpdateBusinessOutcome> UpdateBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateBusinessRequest&, const UpdateBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBusinessAsyncHandler;
			typedef Outcome<Error, Model::UpdateClusterConfigsResult> UpdateClusterConfigsOutcome;
			typedef std::future<UpdateClusterConfigsOutcome> UpdateClusterConfigsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateClusterConfigsRequest&, const UpdateClusterConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterConfigsAsyncHandler;
			typedef Outcome<Error, Model::UpdateConnectionResult> UpdateConnectionOutcome;
			typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateConnectionRequest&, const UpdateConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConnectionAsyncHandler;
			typedef Outcome<Error, Model::UpdateDIAlarmRuleResult> UpdateDIAlarmRuleOutcome;
			typedef std::future<UpdateDIAlarmRuleOutcome> UpdateDIAlarmRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateDIAlarmRuleRequest&, const UpdateDIAlarmRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDIAlarmRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateDIJobResult> UpdateDIJobOutcome;
			typedef std::future<UpdateDIJobOutcome> UpdateDIJobOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateDIJobRequest&, const UpdateDIJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDIJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateDIProjectConfigResult> UpdateDIProjectConfigOutcome;
			typedef std::future<UpdateDIProjectConfigOutcome> UpdateDIProjectConfigOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateDIProjectConfigRequest&, const UpdateDIProjectConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDIProjectConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateDISyncTaskResult> UpdateDISyncTaskOutcome;
			typedef std::future<UpdateDISyncTaskOutcome> UpdateDISyncTaskOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateDISyncTaskRequest&, const UpdateDISyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDISyncTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateDataServiceApiResult> UpdateDataServiceApiOutcome;
			typedef std::future<UpdateDataServiceApiOutcome> UpdateDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateDataServiceApiRequest&, const UpdateDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::UpdateDataSourceResult> UpdateDataSourceOutcome;
			typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateDataSourceRequest&, const UpdateDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataSourceAsyncHandler;
			typedef Outcome<Error, Model::UpdateFileResult> UpdateFileOutcome;
			typedef std::future<UpdateFileOutcome> UpdateFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateFileRequest&, const UpdateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFileAsyncHandler;
			typedef Outcome<Error, Model::UpdateFolderResult> UpdateFolderOutcome;
			typedef std::future<UpdateFolderOutcome> UpdateFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateFolderRequest&, const UpdateFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFolderAsyncHandler;
			typedef Outcome<Error, Model::UpdateIDEEventResultResult> UpdateIDEEventResultOutcome;
			typedef std::future<UpdateIDEEventResultOutcome> UpdateIDEEventResultOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateIDEEventResultRequest&, const UpdateIDEEventResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIDEEventResultAsyncHandler;
			typedef Outcome<Error, Model::UpdateMetaCategoryResult> UpdateMetaCategoryOutcome;
			typedef std::future<UpdateMetaCategoryOutcome> UpdateMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateMetaCategoryRequest&, const UpdateMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::UpdateMetaCollectionResult> UpdateMetaCollectionOutcome;
			typedef std::future<UpdateMetaCollectionOutcome> UpdateMetaCollectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateMetaCollectionRequest&, const UpdateMetaCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMetaCollectionAsyncHandler;
			typedef Outcome<Error, Model::UpdateMetaTableResult> UpdateMetaTableOutcome;
			typedef std::future<UpdateMetaTableOutcome> UpdateMetaTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateMetaTableRequest&, const UpdateMetaTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMetaTableAsyncHandler;
			typedef Outcome<Error, Model::UpdateMetaTableIntroWikiResult> UpdateMetaTableIntroWikiOutcome;
			typedef std::future<UpdateMetaTableIntroWikiOutcome> UpdateMetaTableIntroWikiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateMetaTableIntroWikiRequest&, const UpdateMetaTableIntroWikiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMetaTableIntroWikiAsyncHandler;
			typedef Outcome<Error, Model::UpdateNodeOwnerResult> UpdateNodeOwnerOutcome;
			typedef std::future<UpdateNodeOwnerOutcome> UpdateNodeOwnerOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateNodeOwnerRequest&, const UpdateNodeOwnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNodeOwnerAsyncHandler;
			typedef Outcome<Error, Model::UpdateNodeRunModeResult> UpdateNodeRunModeOutcome;
			typedef std::future<UpdateNodeRunModeOutcome> UpdateNodeRunModeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateNodeRunModeRequest&, const UpdateNodeRunModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNodeRunModeAsyncHandler;
			typedef Outcome<Error, Model::UpdateQualityFollowerResult> UpdateQualityFollowerOutcome;
			typedef std::future<UpdateQualityFollowerOutcome> UpdateQualityFollowerOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateQualityFollowerRequest&, const UpdateQualityFollowerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateQualityFollowerAsyncHandler;
			typedef Outcome<Error, Model::UpdateQualityRuleResult> UpdateQualityRuleOutcome;
			typedef std::future<UpdateQualityRuleOutcome> UpdateQualityRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateQualityRuleRequest&, const UpdateQualityRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateQualityRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateRemindResult> UpdateRemindOutcome;
			typedef std::future<UpdateRemindOutcome> UpdateRemindOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateRemindRequest&, const UpdateRemindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRemindAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableResult> UpdateTableOutcome;
			typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateTableRequest&, const UpdateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableAddColumnResult> UpdateTableAddColumnOutcome;
			typedef std::future<UpdateTableAddColumnOutcome> UpdateTableAddColumnOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateTableAddColumnRequest&, const UpdateTableAddColumnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableAddColumnAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableLevelResult> UpdateTableLevelOutcome;
			typedef std::future<UpdateTableLevelOutcome> UpdateTableLevelOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateTableLevelRequest&, const UpdateTableLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableLevelAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableModelInfoResult> UpdateTableModelInfoOutcome;
			typedef std::future<UpdateTableModelInfoOutcome> UpdateTableModelInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateTableModelInfoRequest&, const UpdateTableModelInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableModelInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableThemeResult> UpdateTableThemeOutcome;
			typedef std::future<UpdateTableThemeOutcome> UpdateTableThemeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateTableThemeRequest&, const UpdateTableThemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableThemeAsyncHandler;
			typedef Outcome<Error, Model::UpdateUdfFileResult> UpdateUdfFileOutcome;
			typedef std::future<UpdateUdfFileOutcome> UpdateUdfFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateUdfFileRequest&, const UpdateUdfFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUdfFileAsyncHandler;
			typedef Outcome<Error, Model::UpdateWorkbenchEventResultResult> UpdateWorkbenchEventResultOutcome;
			typedef std::future<UpdateWorkbenchEventResultOutcome> UpdateWorkbenchEventResultOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateWorkbenchEventResultRequest&, const UpdateWorkbenchEventResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkbenchEventResultAsyncHandler;

			Dataworks_publicClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Dataworks_publicClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Dataworks_publicClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Dataworks_publicClient();
			AbolishDataServiceApiOutcome abolishDataServiceApi(const Model::AbolishDataServiceApiRequest &request)const;
			void abolishDataServiceApiAsync(const Model::AbolishDataServiceApiRequest& request, const AbolishDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbolishDataServiceApiOutcomeCallable abolishDataServiceApiCallable(const Model::AbolishDataServiceApiRequest& request) const;
			AddMetaCollectionEntityOutcome addMetaCollectionEntity(const Model::AddMetaCollectionEntityRequest &request)const;
			void addMetaCollectionEntityAsync(const Model::AddMetaCollectionEntityRequest& request, const AddMetaCollectionEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMetaCollectionEntityOutcomeCallable addMetaCollectionEntityCallable(const Model::AddMetaCollectionEntityRequest& request) const;
			AddProjectMemberToRoleOutcome addProjectMemberToRole(const Model::AddProjectMemberToRoleRequest &request)const;
			void addProjectMemberToRoleAsync(const Model::AddProjectMemberToRoleRequest& request, const AddProjectMemberToRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddProjectMemberToRoleOutcomeCallable addProjectMemberToRoleCallable(const Model::AddProjectMemberToRoleRequest& request) const;
			AddRecognizeRuleOutcome addRecognizeRule(const Model::AddRecognizeRuleRequest &request)const;
			void addRecognizeRuleAsync(const Model::AddRecognizeRuleRequest& request, const AddRecognizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRecognizeRuleOutcomeCallable addRecognizeRuleCallable(const Model::AddRecognizeRuleRequest& request) const;
			AddToMetaCategoryOutcome addToMetaCategory(const Model::AddToMetaCategoryRequest &request)const;
			void addToMetaCategoryAsync(const Model::AddToMetaCategoryRequest& request, const AddToMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddToMetaCategoryOutcomeCallable addToMetaCategoryCallable(const Model::AddToMetaCategoryRequest& request) const;
			ApprovePermissionApplyOrderOutcome approvePermissionApplyOrder(const Model::ApprovePermissionApplyOrderRequest &request)const;
			void approvePermissionApplyOrderAsync(const Model::ApprovePermissionApplyOrderRequest& request, const ApprovePermissionApplyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApprovePermissionApplyOrderOutcomeCallable approvePermissionApplyOrderCallable(const Model::ApprovePermissionApplyOrderRequest& request) const;
			CallbackExtensionOutcome callbackExtension(const Model::CallbackExtensionRequest &request)const;
			void callbackExtensionAsync(const Model::CallbackExtensionRequest& request, const CallbackExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CallbackExtensionOutcomeCallable callbackExtensionCallable(const Model::CallbackExtensionRequest& request) const;
			ChangeResourceManagerResourceGroupOutcome changeResourceManagerResourceGroup(const Model::ChangeResourceManagerResourceGroupRequest &request)const;
			void changeResourceManagerResourceGroupAsync(const Model::ChangeResourceManagerResourceGroupRequest& request, const ChangeResourceManagerResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceManagerResourceGroupOutcomeCallable changeResourceManagerResourceGroupCallable(const Model::ChangeResourceManagerResourceGroupRequest& request) const;
			CheckFileDeploymentOutcome checkFileDeployment(const Model::CheckFileDeploymentRequest &request)const;
			void checkFileDeploymentAsync(const Model::CheckFileDeploymentRequest& request, const CheckFileDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckFileDeploymentOutcomeCallable checkFileDeploymentCallable(const Model::CheckFileDeploymentRequest& request) const;
			CheckMetaPartitionOutcome checkMetaPartition(const Model::CheckMetaPartitionRequest &request)const;
			void checkMetaPartitionAsync(const Model::CheckMetaPartitionRequest& request, const CheckMetaPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckMetaPartitionOutcomeCallable checkMetaPartitionCallable(const Model::CheckMetaPartitionRequest& request) const;
			CheckMetaTableOutcome checkMetaTable(const Model::CheckMetaTableRequest &request)const;
			void checkMetaTableAsync(const Model::CheckMetaTableRequest& request, const CheckMetaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckMetaTableOutcomeCallable checkMetaTableCallable(const Model::CheckMetaTableRequest& request) const;
			CreateBaselineOutcome createBaseline(const Model::CreateBaselineRequest &request)const;
			void createBaselineAsync(const Model::CreateBaselineRequest& request, const CreateBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBaselineOutcomeCallable createBaselineCallable(const Model::CreateBaselineRequest& request) const;
			CreateBusinessOutcome createBusiness(const Model::CreateBusinessRequest &request)const;
			void createBusinessAsync(const Model::CreateBusinessRequest& request, const CreateBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBusinessOutcomeCallable createBusinessCallable(const Model::CreateBusinessRequest& request) const;
			CreateConnectionOutcome createConnection(const Model::CreateConnectionRequest &request)const;
			void createConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConnectionOutcomeCallable createConnectionCallable(const Model::CreateConnectionRequest& request) const;
			CreateDIAlarmRuleOutcome createDIAlarmRule(const Model::CreateDIAlarmRuleRequest &request)const;
			void createDIAlarmRuleAsync(const Model::CreateDIAlarmRuleRequest& request, const CreateDIAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDIAlarmRuleOutcomeCallable createDIAlarmRuleCallable(const Model::CreateDIAlarmRuleRequest& request) const;
			CreateDIJobOutcome createDIJob(const Model::CreateDIJobRequest &request)const;
			void createDIJobAsync(const Model::CreateDIJobRequest& request, const CreateDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDIJobOutcomeCallable createDIJobCallable(const Model::CreateDIJobRequest& request) const;
			CreateDISyncTaskOutcome createDISyncTask(const Model::CreateDISyncTaskRequest &request)const;
			void createDISyncTaskAsync(const Model::CreateDISyncTaskRequest& request, const CreateDISyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDISyncTaskOutcomeCallable createDISyncTaskCallable(const Model::CreateDISyncTaskRequest& request) const;
			CreateDagComplementOutcome createDagComplement(const Model::CreateDagComplementRequest &request)const;
			void createDagComplementAsync(const Model::CreateDagComplementRequest& request, const CreateDagComplementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDagComplementOutcomeCallable createDagComplementCallable(const Model::CreateDagComplementRequest& request) const;
			CreateDagTestOutcome createDagTest(const Model::CreateDagTestRequest &request)const;
			void createDagTestAsync(const Model::CreateDagTestRequest& request, const CreateDagTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDagTestOutcomeCallable createDagTestCallable(const Model::CreateDagTestRequest& request) const;
			CreateDataServiceApiOutcome createDataServiceApi(const Model::CreateDataServiceApiRequest &request)const;
			void createDataServiceApiAsync(const Model::CreateDataServiceApiRequest& request, const CreateDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataServiceApiOutcomeCallable createDataServiceApiCallable(const Model::CreateDataServiceApiRequest& request) const;
			CreateDataServiceApiAuthorityOutcome createDataServiceApiAuthority(const Model::CreateDataServiceApiAuthorityRequest &request)const;
			void createDataServiceApiAuthorityAsync(const Model::CreateDataServiceApiAuthorityRequest& request, const CreateDataServiceApiAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataServiceApiAuthorityOutcomeCallable createDataServiceApiAuthorityCallable(const Model::CreateDataServiceApiAuthorityRequest& request) const;
			CreateDataServiceFolderOutcome createDataServiceFolder(const Model::CreateDataServiceFolderRequest &request)const;
			void createDataServiceFolderAsync(const Model::CreateDataServiceFolderRequest& request, const CreateDataServiceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataServiceFolderOutcomeCallable createDataServiceFolderCallable(const Model::CreateDataServiceFolderRequest& request) const;
			CreateDataServiceGroupOutcome createDataServiceGroup(const Model::CreateDataServiceGroupRequest &request)const;
			void createDataServiceGroupAsync(const Model::CreateDataServiceGroupRequest& request, const CreateDataServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataServiceGroupOutcomeCallable createDataServiceGroupCallable(const Model::CreateDataServiceGroupRequest& request) const;
			CreateDataSourceOutcome createDataSource(const Model::CreateDataSourceRequest &request)const;
			void createDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataSourceOutcomeCallable createDataSourceCallable(const Model::CreateDataSourceRequest& request) const;
			CreateExportMigrationOutcome createExportMigration(const Model::CreateExportMigrationRequest &request)const;
			void createExportMigrationAsync(const Model::CreateExportMigrationRequest& request, const CreateExportMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExportMigrationOutcomeCallable createExportMigrationCallable(const Model::CreateExportMigrationRequest& request) const;
			CreateFileOutcome createFile(const Model::CreateFileRequest &request)const;
			void createFileAsync(const Model::CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileOutcomeCallable createFileCallable(const Model::CreateFileRequest& request) const;
			CreateFolderOutcome createFolder(const Model::CreateFolderRequest &request)const;
			void createFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFolderOutcomeCallable createFolderCallable(const Model::CreateFolderRequest& request) const;
			CreateImportMigrationOutcome createImportMigration(const Model::CreateImportMigrationRequest &request)const;
			void createImportMigrationAsync(const Model::CreateImportMigrationRequest& request, const CreateImportMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateImportMigrationOutcomeCallable createImportMigrationCallable(const Model::CreateImportMigrationRequest& request) const;
			CreateManualDagOutcome createManualDag(const Model::CreateManualDagRequest &request)const;
			void createManualDagAsync(const Model::CreateManualDagRequest& request, const CreateManualDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateManualDagOutcomeCallable createManualDagCallable(const Model::CreateManualDagRequest& request) const;
			CreateMetaCategoryOutcome createMetaCategory(const Model::CreateMetaCategoryRequest &request)const;
			void createMetaCategoryAsync(const Model::CreateMetaCategoryRequest& request, const CreateMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMetaCategoryOutcomeCallable createMetaCategoryCallable(const Model::CreateMetaCategoryRequest& request) const;
			CreateMetaCollectionOutcome createMetaCollection(const Model::CreateMetaCollectionRequest &request)const;
			void createMetaCollectionAsync(const Model::CreateMetaCollectionRequest& request, const CreateMetaCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMetaCollectionOutcomeCallable createMetaCollectionCallable(const Model::CreateMetaCollectionRequest& request) const;
			CreatePermissionApplyOrderOutcome createPermissionApplyOrder(const Model::CreatePermissionApplyOrderRequest &request)const;
			void createPermissionApplyOrderAsync(const Model::CreatePermissionApplyOrderRequest& request, const CreatePermissionApplyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePermissionApplyOrderOutcomeCallable createPermissionApplyOrderCallable(const Model::CreatePermissionApplyOrderRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			CreateProjectMemberOutcome createProjectMember(const Model::CreateProjectMemberRequest &request)const;
			void createProjectMemberAsync(const Model::CreateProjectMemberRequest& request, const CreateProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectMemberOutcomeCallable createProjectMemberCallable(const Model::CreateProjectMemberRequest& request) const;
			CreateQualityEntityOutcome createQualityEntity(const Model::CreateQualityEntityRequest &request)const;
			void createQualityEntityAsync(const Model::CreateQualityEntityRequest& request, const CreateQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQualityEntityOutcomeCallable createQualityEntityCallable(const Model::CreateQualityEntityRequest& request) const;
			CreateQualityFollowerOutcome createQualityFollower(const Model::CreateQualityFollowerRequest &request)const;
			void createQualityFollowerAsync(const Model::CreateQualityFollowerRequest& request, const CreateQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQualityFollowerOutcomeCallable createQualityFollowerCallable(const Model::CreateQualityFollowerRequest& request) const;
			CreateQualityRelativeNodeOutcome createQualityRelativeNode(const Model::CreateQualityRelativeNodeRequest &request)const;
			void createQualityRelativeNodeAsync(const Model::CreateQualityRelativeNodeRequest& request, const CreateQualityRelativeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQualityRelativeNodeOutcomeCallable createQualityRelativeNodeCallable(const Model::CreateQualityRelativeNodeRequest& request) const;
			CreateQualityRuleOutcome createQualityRule(const Model::CreateQualityRuleRequest &request)const;
			void createQualityRuleAsync(const Model::CreateQualityRuleRequest& request, const CreateQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQualityRuleOutcomeCallable createQualityRuleCallable(const Model::CreateQualityRuleRequest& request) const;
			CreateRemindOutcome createRemind(const Model::CreateRemindRequest &request)const;
			void createRemindAsync(const Model::CreateRemindRequest& request, const CreateRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRemindOutcomeCallable createRemindCallable(const Model::CreateRemindRequest& request) const;
			CreateResourceFileOutcome createResourceFile(const Model::CreateResourceFileRequest &request)const;
			void createResourceFileAsync(const Model::CreateResourceFileRequest& request, const CreateResourceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceFileOutcomeCallable createResourceFileCallable(const Model::CreateResourceFileRequest& request) const;
			CreateTableOutcome createTable(const Model::CreateTableRequest &request)const;
			void createTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTableOutcomeCallable createTableCallable(const Model::CreateTableRequest& request) const;
			CreateTableLevelOutcome createTableLevel(const Model::CreateTableLevelRequest &request)const;
			void createTableLevelAsync(const Model::CreateTableLevelRequest& request, const CreateTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTableLevelOutcomeCallable createTableLevelCallable(const Model::CreateTableLevelRequest& request) const;
			CreateTableThemeOutcome createTableTheme(const Model::CreateTableThemeRequest &request)const;
			void createTableThemeAsync(const Model::CreateTableThemeRequest& request, const CreateTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTableThemeOutcomeCallable createTableThemeCallable(const Model::CreateTableThemeRequest& request) const;
			CreateUdfFileOutcome createUdfFile(const Model::CreateUdfFileRequest &request)const;
			void createUdfFileAsync(const Model::CreateUdfFileRequest& request, const CreateUdfFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUdfFileOutcomeCallable createUdfFileCallable(const Model::CreateUdfFileRequest& request) const;
			DeleteBaselineOutcome deleteBaseline(const Model::DeleteBaselineRequest &request)const;
			void deleteBaselineAsync(const Model::DeleteBaselineRequest& request, const DeleteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBaselineOutcomeCallable deleteBaselineCallable(const Model::DeleteBaselineRequest& request) const;
			DeleteBusinessOutcome deleteBusiness(const Model::DeleteBusinessRequest &request)const;
			void deleteBusinessAsync(const Model::DeleteBusinessRequest& request, const DeleteBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBusinessOutcomeCallable deleteBusinessCallable(const Model::DeleteBusinessRequest& request) const;
			DeleteConnectionOutcome deleteConnection(const Model::DeleteConnectionRequest &request)const;
			void deleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConnectionOutcomeCallable deleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;
			DeleteDIAlarmRuleOutcome deleteDIAlarmRule(const Model::DeleteDIAlarmRuleRequest &request)const;
			void deleteDIAlarmRuleAsync(const Model::DeleteDIAlarmRuleRequest& request, const DeleteDIAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDIAlarmRuleOutcomeCallable deleteDIAlarmRuleCallable(const Model::DeleteDIAlarmRuleRequest& request) const;
			DeleteDIJobOutcome deleteDIJob(const Model::DeleteDIJobRequest &request)const;
			void deleteDIJobAsync(const Model::DeleteDIJobRequest& request, const DeleteDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDIJobOutcomeCallable deleteDIJobCallable(const Model::DeleteDIJobRequest& request) const;
			DeleteDISyncTaskOutcome deleteDISyncTask(const Model::DeleteDISyncTaskRequest &request)const;
			void deleteDISyncTaskAsync(const Model::DeleteDISyncTaskRequest& request, const DeleteDISyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDISyncTaskOutcomeCallable deleteDISyncTaskCallable(const Model::DeleteDISyncTaskRequest& request) const;
			DeleteDataServiceApiOutcome deleteDataServiceApi(const Model::DeleteDataServiceApiRequest &request)const;
			void deleteDataServiceApiAsync(const Model::DeleteDataServiceApiRequest& request, const DeleteDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataServiceApiOutcomeCallable deleteDataServiceApiCallable(const Model::DeleteDataServiceApiRequest& request) const;
			DeleteDataServiceApiAuthorityOutcome deleteDataServiceApiAuthority(const Model::DeleteDataServiceApiAuthorityRequest &request)const;
			void deleteDataServiceApiAuthorityAsync(const Model::DeleteDataServiceApiAuthorityRequest& request, const DeleteDataServiceApiAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataServiceApiAuthorityOutcomeCallable deleteDataServiceApiAuthorityCallable(const Model::DeleteDataServiceApiAuthorityRequest& request) const;
			DeleteDataSourceOutcome deleteDataSource(const Model::DeleteDataSourceRequest &request)const;
			void deleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataSourceOutcomeCallable deleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;
			DeleteFileOutcome deleteFile(const Model::DeleteFileRequest &request)const;
			void deleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFileOutcomeCallable deleteFileCallable(const Model::DeleteFileRequest& request) const;
			DeleteFolderOutcome deleteFolder(const Model::DeleteFolderRequest &request)const;
			void deleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFolderOutcomeCallable deleteFolderCallable(const Model::DeleteFolderRequest& request) const;
			DeleteFromMetaCategoryOutcome deleteFromMetaCategory(const Model::DeleteFromMetaCategoryRequest &request)const;
			void deleteFromMetaCategoryAsync(const Model::DeleteFromMetaCategoryRequest& request, const DeleteFromMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFromMetaCategoryOutcomeCallable deleteFromMetaCategoryCallable(const Model::DeleteFromMetaCategoryRequest& request) const;
			DeleteLineageRelationOutcome deleteLineageRelation(const Model::DeleteLineageRelationRequest &request)const;
			void deleteLineageRelationAsync(const Model::DeleteLineageRelationRequest& request, const DeleteLineageRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLineageRelationOutcomeCallable deleteLineageRelationCallable(const Model::DeleteLineageRelationRequest& request) const;
			DeleteMetaCategoryOutcome deleteMetaCategory(const Model::DeleteMetaCategoryRequest &request)const;
			void deleteMetaCategoryAsync(const Model::DeleteMetaCategoryRequest& request, const DeleteMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMetaCategoryOutcomeCallable deleteMetaCategoryCallable(const Model::DeleteMetaCategoryRequest& request) const;
			DeleteMetaCollectionOutcome deleteMetaCollection(const Model::DeleteMetaCollectionRequest &request)const;
			void deleteMetaCollectionAsync(const Model::DeleteMetaCollectionRequest& request, const DeleteMetaCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMetaCollectionOutcomeCallable deleteMetaCollectionCallable(const Model::DeleteMetaCollectionRequest& request) const;
			DeleteMetaCollectionEntityOutcome deleteMetaCollectionEntity(const Model::DeleteMetaCollectionEntityRequest &request)const;
			void deleteMetaCollectionEntityAsync(const Model::DeleteMetaCollectionEntityRequest& request, const DeleteMetaCollectionEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMetaCollectionEntityOutcomeCallable deleteMetaCollectionEntityCallable(const Model::DeleteMetaCollectionEntityRequest& request) const;
			DeleteProjectMemberOutcome deleteProjectMember(const Model::DeleteProjectMemberRequest &request)const;
			void deleteProjectMemberAsync(const Model::DeleteProjectMemberRequest& request, const DeleteProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectMemberOutcomeCallable deleteProjectMemberCallable(const Model::DeleteProjectMemberRequest& request) const;
			DeleteQualityEntityOutcome deleteQualityEntity(const Model::DeleteQualityEntityRequest &request)const;
			void deleteQualityEntityAsync(const Model::DeleteQualityEntityRequest& request, const DeleteQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQualityEntityOutcomeCallable deleteQualityEntityCallable(const Model::DeleteQualityEntityRequest& request) const;
			DeleteQualityFollowerOutcome deleteQualityFollower(const Model::DeleteQualityFollowerRequest &request)const;
			void deleteQualityFollowerAsync(const Model::DeleteQualityFollowerRequest& request, const DeleteQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQualityFollowerOutcomeCallable deleteQualityFollowerCallable(const Model::DeleteQualityFollowerRequest& request) const;
			DeleteQualityRelativeNodeOutcome deleteQualityRelativeNode(const Model::DeleteQualityRelativeNodeRequest &request)const;
			void deleteQualityRelativeNodeAsync(const Model::DeleteQualityRelativeNodeRequest& request, const DeleteQualityRelativeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQualityRelativeNodeOutcomeCallable deleteQualityRelativeNodeCallable(const Model::DeleteQualityRelativeNodeRequest& request) const;
			DeleteQualityRuleOutcome deleteQualityRule(const Model::DeleteQualityRuleRequest &request)const;
			void deleteQualityRuleAsync(const Model::DeleteQualityRuleRequest& request, const DeleteQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQualityRuleOutcomeCallable deleteQualityRuleCallable(const Model::DeleteQualityRuleRequest& request) const;
			DeleteRecognizeRuleOutcome deleteRecognizeRule(const Model::DeleteRecognizeRuleRequest &request)const;
			void deleteRecognizeRuleAsync(const Model::DeleteRecognizeRuleRequest& request, const DeleteRecognizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRecognizeRuleOutcomeCallable deleteRecognizeRuleCallable(const Model::DeleteRecognizeRuleRequest& request) const;
			DeleteRemindOutcome deleteRemind(const Model::DeleteRemindRequest &request)const;
			void deleteRemindAsync(const Model::DeleteRemindRequest& request, const DeleteRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRemindOutcomeCallable deleteRemindCallable(const Model::DeleteRemindRequest& request) const;
			DeleteTableOutcome deleteTable(const Model::DeleteTableRequest &request)const;
			void deleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTableOutcomeCallable deleteTableCallable(const Model::DeleteTableRequest& request) const;
			DeleteTableLevelOutcome deleteTableLevel(const Model::DeleteTableLevelRequest &request)const;
			void deleteTableLevelAsync(const Model::DeleteTableLevelRequest& request, const DeleteTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTableLevelOutcomeCallable deleteTableLevelCallable(const Model::DeleteTableLevelRequest& request) const;
			DeleteTableThemeOutcome deleteTableTheme(const Model::DeleteTableThemeRequest &request)const;
			void deleteTableThemeAsync(const Model::DeleteTableThemeRequest& request, const DeleteTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTableThemeOutcomeCallable deleteTableThemeCallable(const Model::DeleteTableThemeRequest& request) const;
			DeployDISyncTaskOutcome deployDISyncTask(const Model::DeployDISyncTaskRequest &request)const;
			void deployDISyncTaskAsync(const Model::DeployDISyncTaskRequest& request, const DeployDISyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployDISyncTaskOutcomeCallable deployDISyncTaskCallable(const Model::DeployDISyncTaskRequest& request) const;
			DeployFileOutcome deployFile(const Model::DeployFileRequest &request)const;
			void deployFileAsync(const Model::DeployFileRequest& request, const DeployFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployFileOutcomeCallable deployFileCallable(const Model::DeployFileRequest& request) const;
			DesensitizeDataOutcome desensitizeData(const Model::DesensitizeDataRequest &request)const;
			void desensitizeDataAsync(const Model::DesensitizeDataRequest& request, const DesensitizeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DesensitizeDataOutcomeCallable desensitizeDataCallable(const Model::DesensitizeDataRequest& request) const;
			DsgDesensPlanAddOrUpdateOutcome dsgDesensPlanAddOrUpdate(const Model::DsgDesensPlanAddOrUpdateRequest &request)const;
			void dsgDesensPlanAddOrUpdateAsync(const Model::DsgDesensPlanAddOrUpdateRequest& request, const DsgDesensPlanAddOrUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgDesensPlanAddOrUpdateOutcomeCallable dsgDesensPlanAddOrUpdateCallable(const Model::DsgDesensPlanAddOrUpdateRequest& request) const;
			DsgDesensPlanDeleteOutcome dsgDesensPlanDelete(const Model::DsgDesensPlanDeleteRequest &request)const;
			void dsgDesensPlanDeleteAsync(const Model::DsgDesensPlanDeleteRequest& request, const DsgDesensPlanDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgDesensPlanDeleteOutcomeCallable dsgDesensPlanDeleteCallable(const Model::DsgDesensPlanDeleteRequest& request) const;
			DsgDesensPlanQueryListOutcome dsgDesensPlanQueryList(const Model::DsgDesensPlanQueryListRequest &request)const;
			void dsgDesensPlanQueryListAsync(const Model::DsgDesensPlanQueryListRequest& request, const DsgDesensPlanQueryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgDesensPlanQueryListOutcomeCallable dsgDesensPlanQueryListCallable(const Model::DsgDesensPlanQueryListRequest& request) const;
			DsgDesensPlanUpdateStatusOutcome dsgDesensPlanUpdateStatus(const Model::DsgDesensPlanUpdateStatusRequest &request)const;
			void dsgDesensPlanUpdateStatusAsync(const Model::DsgDesensPlanUpdateStatusRequest& request, const DsgDesensPlanUpdateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgDesensPlanUpdateStatusOutcomeCallable dsgDesensPlanUpdateStatusCallable(const Model::DsgDesensPlanUpdateStatusRequest& request) const;
			DsgPlatformQueryProjectsAndSchemaFromMetaOutcome dsgPlatformQueryProjectsAndSchemaFromMeta(const Model::DsgPlatformQueryProjectsAndSchemaFromMetaRequest &request)const;
			void dsgPlatformQueryProjectsAndSchemaFromMetaAsync(const Model::DsgPlatformQueryProjectsAndSchemaFromMetaRequest& request, const DsgPlatformQueryProjectsAndSchemaFromMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgPlatformQueryProjectsAndSchemaFromMetaOutcomeCallable dsgPlatformQueryProjectsAndSchemaFromMetaCallable(const Model::DsgPlatformQueryProjectsAndSchemaFromMetaRequest& request) const;
			DsgQueryDefaultTemplatesOutcome dsgQueryDefaultTemplates(const Model::DsgQueryDefaultTemplatesRequest &request)const;
			void dsgQueryDefaultTemplatesAsync(const Model::DsgQueryDefaultTemplatesRequest& request, const DsgQueryDefaultTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgQueryDefaultTemplatesOutcomeCallable dsgQueryDefaultTemplatesCallable(const Model::DsgQueryDefaultTemplatesRequest& request) const;
			DsgQuerySensResultOutcome dsgQuerySensResult(const Model::DsgQuerySensResultRequest &request)const;
			void dsgQuerySensResultAsync(const Model::DsgQuerySensResultRequest& request, const DsgQuerySensResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgQuerySensResultOutcomeCallable dsgQuerySensResultCallable(const Model::DsgQuerySensResultRequest& request) const;
			DsgRunSensIdentifyOutcome dsgRunSensIdentify(const Model::DsgRunSensIdentifyRequest &request)const;
			void dsgRunSensIdentifyAsync(const Model::DsgRunSensIdentifyRequest& request, const DsgRunSensIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgRunSensIdentifyOutcomeCallable dsgRunSensIdentifyCallable(const Model::DsgRunSensIdentifyRequest& request) const;
			DsgSceneAddOrUpdateSceneOutcome dsgSceneAddOrUpdateScene(const Model::DsgSceneAddOrUpdateSceneRequest &request)const;
			void dsgSceneAddOrUpdateSceneAsync(const Model::DsgSceneAddOrUpdateSceneRequest& request, const DsgSceneAddOrUpdateSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgSceneAddOrUpdateSceneOutcomeCallable dsgSceneAddOrUpdateSceneCallable(const Model::DsgSceneAddOrUpdateSceneRequest& request) const;
			DsgSceneQuerySceneListByNameOutcome dsgSceneQuerySceneListByName(const Model::DsgSceneQuerySceneListByNameRequest &request)const;
			void dsgSceneQuerySceneListByNameAsync(const Model::DsgSceneQuerySceneListByNameRequest& request, const DsgSceneQuerySceneListByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgSceneQuerySceneListByNameOutcomeCallable dsgSceneQuerySceneListByNameCallable(const Model::DsgSceneQuerySceneListByNameRequest& request) const;
			DsgScenedDeleteSceneOutcome dsgScenedDeleteScene(const Model::DsgScenedDeleteSceneRequest &request)const;
			void dsgScenedDeleteSceneAsync(const Model::DsgScenedDeleteSceneRequest& request, const DsgScenedDeleteSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgScenedDeleteSceneOutcomeCallable dsgScenedDeleteSceneCallable(const Model::DsgScenedDeleteSceneRequest& request) const;
			DsgStopSensIdentifyOutcome dsgStopSensIdentify(const Model::DsgStopSensIdentifyRequest &request)const;
			void dsgStopSensIdentifyAsync(const Model::DsgStopSensIdentifyRequest& request, const DsgStopSensIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgStopSensIdentifyOutcomeCallable dsgStopSensIdentifyCallable(const Model::DsgStopSensIdentifyRequest& request) const;
			DsgUserGroupAddOrUpdateOutcome dsgUserGroupAddOrUpdate(const Model::DsgUserGroupAddOrUpdateRequest &request)const;
			void dsgUserGroupAddOrUpdateAsync(const Model::DsgUserGroupAddOrUpdateRequest& request, const DsgUserGroupAddOrUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgUserGroupAddOrUpdateOutcomeCallable dsgUserGroupAddOrUpdateCallable(const Model::DsgUserGroupAddOrUpdateRequest& request) const;
			DsgUserGroupDeleteOutcome dsgUserGroupDelete(const Model::DsgUserGroupDeleteRequest &request)const;
			void dsgUserGroupDeleteAsync(const Model::DsgUserGroupDeleteRequest& request, const DsgUserGroupDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgUserGroupDeleteOutcomeCallable dsgUserGroupDeleteCallable(const Model::DsgUserGroupDeleteRequest& request) const;
			DsgUserGroupGetOdpsRoleGroupsOutcome dsgUserGroupGetOdpsRoleGroups(const Model::DsgUserGroupGetOdpsRoleGroupsRequest &request)const;
			void dsgUserGroupGetOdpsRoleGroupsAsync(const Model::DsgUserGroupGetOdpsRoleGroupsRequest& request, const DsgUserGroupGetOdpsRoleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgUserGroupGetOdpsRoleGroupsOutcomeCallable dsgUserGroupGetOdpsRoleGroupsCallable(const Model::DsgUserGroupGetOdpsRoleGroupsRequest& request) const;
			DsgUserGroupQueryListOutcome dsgUserGroupQueryList(const Model::DsgUserGroupQueryListRequest &request)const;
			void dsgUserGroupQueryListAsync(const Model::DsgUserGroupQueryListRequest& request, const DsgUserGroupQueryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgUserGroupQueryListOutcomeCallable dsgUserGroupQueryListCallable(const Model::DsgUserGroupQueryListRequest& request) const;
			DsgUserGroupQueryUserListOutcome dsgUserGroupQueryUserList(const Model::DsgUserGroupQueryUserListRequest &request)const;
			void dsgUserGroupQueryUserListAsync(const Model::DsgUserGroupQueryUserListRequest& request, const DsgUserGroupQueryUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgUserGroupQueryUserListOutcomeCallable dsgUserGroupQueryUserListCallable(const Model::DsgUserGroupQueryUserListRequest& request) const;
			DsgWhiteListAddOrUpdateOutcome dsgWhiteListAddOrUpdate(const Model::DsgWhiteListAddOrUpdateRequest &request)const;
			void dsgWhiteListAddOrUpdateAsync(const Model::DsgWhiteListAddOrUpdateRequest& request, const DsgWhiteListAddOrUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgWhiteListAddOrUpdateOutcomeCallable dsgWhiteListAddOrUpdateCallable(const Model::DsgWhiteListAddOrUpdateRequest& request) const;
			DsgWhiteListDeleteListOutcome dsgWhiteListDeleteList(const Model::DsgWhiteListDeleteListRequest &request)const;
			void dsgWhiteListDeleteListAsync(const Model::DsgWhiteListDeleteListRequest& request, const DsgWhiteListDeleteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgWhiteListDeleteListOutcomeCallable dsgWhiteListDeleteListCallable(const Model::DsgWhiteListDeleteListRequest& request) const;
			DsgWhiteListQueryListOutcome dsgWhiteListQueryList(const Model::DsgWhiteListQueryListRequest &request)const;
			void dsgWhiteListQueryListAsync(const Model::DsgWhiteListQueryListRequest& request, const DsgWhiteListQueryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DsgWhiteListQueryListOutcomeCallable dsgWhiteListQueryListCallable(const Model::DsgWhiteListQueryListRequest& request) const;
			EditRecognizeRuleOutcome editRecognizeRule(const Model::EditRecognizeRuleRequest &request)const;
			void editRecognizeRuleAsync(const Model::EditRecognizeRuleRequest& request, const EditRecognizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditRecognizeRuleOutcomeCallable editRecognizeRuleCallable(const Model::EditRecognizeRuleRequest& request) const;
			EstablishRelationTableToBusinessOutcome establishRelationTableToBusiness(const Model::EstablishRelationTableToBusinessRequest &request)const;
			void establishRelationTableToBusinessAsync(const Model::EstablishRelationTableToBusinessRequest& request, const EstablishRelationTableToBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EstablishRelationTableToBusinessOutcomeCallable establishRelationTableToBusinessCallable(const Model::EstablishRelationTableToBusinessRequest& request) const;
			ExportDataSourcesOutcome exportDataSources(const Model::ExportDataSourcesRequest &request)const;
			void exportDataSourcesAsync(const Model::ExportDataSourcesRequest& request, const ExportDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportDataSourcesOutcomeCallable exportDataSourcesCallable(const Model::ExportDataSourcesRequest& request) const;
			GenerateDISyncTaskConfigForCreatingOutcome generateDISyncTaskConfigForCreating(const Model::GenerateDISyncTaskConfigForCreatingRequest &request)const;
			void generateDISyncTaskConfigForCreatingAsync(const Model::GenerateDISyncTaskConfigForCreatingRequest& request, const GenerateDISyncTaskConfigForCreatingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateDISyncTaskConfigForCreatingOutcomeCallable generateDISyncTaskConfigForCreatingCallable(const Model::GenerateDISyncTaskConfigForCreatingRequest& request) const;
			GenerateDISyncTaskConfigForUpdatingOutcome generateDISyncTaskConfigForUpdating(const Model::GenerateDISyncTaskConfigForUpdatingRequest &request)const;
			void generateDISyncTaskConfigForUpdatingAsync(const Model::GenerateDISyncTaskConfigForUpdatingRequest& request, const GenerateDISyncTaskConfigForUpdatingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateDISyncTaskConfigForUpdatingOutcomeCallable generateDISyncTaskConfigForUpdatingCallable(const Model::GenerateDISyncTaskConfigForUpdatingRequest& request) const;
			GetAlertMessageOutcome getAlertMessage(const Model::GetAlertMessageRequest &request)const;
			void getAlertMessageAsync(const Model::GetAlertMessageRequest& request, const GetAlertMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAlertMessageOutcomeCallable getAlertMessageCallable(const Model::GetAlertMessageRequest& request) const;
			GetBaselineOutcome getBaseline(const Model::GetBaselineRequest &request)const;
			void getBaselineAsync(const Model::GetBaselineRequest& request, const GetBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBaselineOutcomeCallable getBaselineCallable(const Model::GetBaselineRequest& request) const;
			GetBaselineConfigOutcome getBaselineConfig(const Model::GetBaselineConfigRequest &request)const;
			void getBaselineConfigAsync(const Model::GetBaselineConfigRequest& request, const GetBaselineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBaselineConfigOutcomeCallable getBaselineConfigCallable(const Model::GetBaselineConfigRequest& request) const;
			GetBaselineKeyPathOutcome getBaselineKeyPath(const Model::GetBaselineKeyPathRequest &request)const;
			void getBaselineKeyPathAsync(const Model::GetBaselineKeyPathRequest& request, const GetBaselineKeyPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBaselineKeyPathOutcomeCallable getBaselineKeyPathCallable(const Model::GetBaselineKeyPathRequest& request) const;
			GetBaselineStatusOutcome getBaselineStatus(const Model::GetBaselineStatusRequest &request)const;
			void getBaselineStatusAsync(const Model::GetBaselineStatusRequest& request, const GetBaselineStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBaselineStatusOutcomeCallable getBaselineStatusCallable(const Model::GetBaselineStatusRequest& request) const;
			GetBusinessOutcome getBusiness(const Model::GetBusinessRequest &request)const;
			void getBusinessAsync(const Model::GetBusinessRequest& request, const GetBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBusinessOutcomeCallable getBusinessCallable(const Model::GetBusinessRequest& request) const;
			GetDDLJobStatusOutcome getDDLJobStatus(const Model::GetDDLJobStatusRequest &request)const;
			void getDDLJobStatusAsync(const Model::GetDDLJobStatusRequest& request, const GetDDLJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDDLJobStatusOutcomeCallable getDDLJobStatusCallable(const Model::GetDDLJobStatusRequest& request) const;
			GetDIAlarmRuleOutcome getDIAlarmRule(const Model::GetDIAlarmRuleRequest &request)const;
			void getDIAlarmRuleAsync(const Model::GetDIAlarmRuleRequest& request, const GetDIAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDIAlarmRuleOutcomeCallable getDIAlarmRuleCallable(const Model::GetDIAlarmRuleRequest& request) const;
			GetDIJobOutcome getDIJob(const Model::GetDIJobRequest &request)const;
			void getDIJobAsync(const Model::GetDIJobRequest& request, const GetDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDIJobOutcomeCallable getDIJobCallable(const Model::GetDIJobRequest& request) const;
			GetDISyncInstanceInfoOutcome getDISyncInstanceInfo(const Model::GetDISyncInstanceInfoRequest &request)const;
			void getDISyncInstanceInfoAsync(const Model::GetDISyncInstanceInfoRequest& request, const GetDISyncInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDISyncInstanceInfoOutcomeCallable getDISyncInstanceInfoCallable(const Model::GetDISyncInstanceInfoRequest& request) const;
			GetDISyncTaskOutcome getDISyncTask(const Model::GetDISyncTaskRequest &request)const;
			void getDISyncTaskAsync(const Model::GetDISyncTaskRequest& request, const GetDISyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDISyncTaskOutcomeCallable getDISyncTaskCallable(const Model::GetDISyncTaskRequest& request) const;
			GetDagOutcome getDag(const Model::GetDagRequest &request)const;
			void getDagAsync(const Model::GetDagRequest& request, const GetDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDagOutcomeCallable getDagCallable(const Model::GetDagRequest& request) const;
			GetDataServiceApiOutcome getDataServiceApi(const Model::GetDataServiceApiRequest &request)const;
			void getDataServiceApiAsync(const Model::GetDataServiceApiRequest& request, const GetDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceApiOutcomeCallable getDataServiceApiCallable(const Model::GetDataServiceApiRequest& request) const;
			GetDataServiceApiTestOutcome getDataServiceApiTest(const Model::GetDataServiceApiTestRequest &request)const;
			void getDataServiceApiTestAsync(const Model::GetDataServiceApiTestRequest& request, const GetDataServiceApiTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceApiTestOutcomeCallable getDataServiceApiTestCallable(const Model::GetDataServiceApiTestRequest& request) const;
			GetDataServiceApplicationOutcome getDataServiceApplication(const Model::GetDataServiceApplicationRequest &request)const;
			void getDataServiceApplicationAsync(const Model::GetDataServiceApplicationRequest& request, const GetDataServiceApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceApplicationOutcomeCallable getDataServiceApplicationCallable(const Model::GetDataServiceApplicationRequest& request) const;
			GetDataServiceFolderOutcome getDataServiceFolder(const Model::GetDataServiceFolderRequest &request)const;
			void getDataServiceFolderAsync(const Model::GetDataServiceFolderRequest& request, const GetDataServiceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceFolderOutcomeCallable getDataServiceFolderCallable(const Model::GetDataServiceFolderRequest& request) const;
			GetDataServiceGroupOutcome getDataServiceGroup(const Model::GetDataServiceGroupRequest &request)const;
			void getDataServiceGroupAsync(const Model::GetDataServiceGroupRequest& request, const GetDataServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceGroupOutcomeCallable getDataServiceGroupCallable(const Model::GetDataServiceGroupRequest& request) const;
			GetDataServicePublishedApiOutcome getDataServicePublishedApi(const Model::GetDataServicePublishedApiRequest &request)const;
			void getDataServicePublishedApiAsync(const Model::GetDataServicePublishedApiRequest& request, const GetDataServicePublishedApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServicePublishedApiOutcomeCallable getDataServicePublishedApiCallable(const Model::GetDataServicePublishedApiRequest& request) const;
			GetDataSourceMetaOutcome getDataSourceMeta(const Model::GetDataSourceMetaRequest &request)const;
			void getDataSourceMetaAsync(const Model::GetDataSourceMetaRequest& request, const GetDataSourceMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataSourceMetaOutcomeCallable getDataSourceMetaCallable(const Model::GetDataSourceMetaRequest& request) const;
			GetDeploymentOutcome getDeployment(const Model::GetDeploymentRequest &request)const;
			void getDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeploymentOutcomeCallable getDeploymentCallable(const Model::GetDeploymentRequest& request) const;
			GetExtensionOutcome getExtension(const Model::GetExtensionRequest &request)const;
			void getExtensionAsync(const Model::GetExtensionRequest& request, const GetExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetExtensionOutcomeCallable getExtensionCallable(const Model::GetExtensionRequest& request) const;
			GetFileOutcome getFile(const Model::GetFileRequest &request)const;
			void getFileAsync(const Model::GetFileRequest& request, const GetFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileOutcomeCallable getFileCallable(const Model::GetFileRequest& request) const;
			GetFileTypeStatisticOutcome getFileTypeStatistic(const Model::GetFileTypeStatisticRequest &request)const;
			void getFileTypeStatisticAsync(const Model::GetFileTypeStatisticRequest& request, const GetFileTypeStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileTypeStatisticOutcomeCallable getFileTypeStatisticCallable(const Model::GetFileTypeStatisticRequest& request) const;
			GetFileVersionOutcome getFileVersion(const Model::GetFileVersionRequest &request)const;
			void getFileVersionAsync(const Model::GetFileVersionRequest& request, const GetFileVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileVersionOutcomeCallable getFileVersionCallable(const Model::GetFileVersionRequest& request) const;
			GetFolderOutcome getFolder(const Model::GetFolderRequest &request)const;
			void getFolderAsync(const Model::GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFolderOutcomeCallable getFolderCallable(const Model::GetFolderRequest& request) const;
			GetIDEEventDetailOutcome getIDEEventDetail(const Model::GetIDEEventDetailRequest &request)const;
			void getIDEEventDetailAsync(const Model::GetIDEEventDetailRequest& request, const GetIDEEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIDEEventDetailOutcomeCallable getIDEEventDetailCallable(const Model::GetIDEEventDetailRequest& request) const;
			GetInstanceOutcome getInstance(const Model::GetInstanceRequest &request)const;
			void getInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceOutcomeCallable getInstanceCallable(const Model::GetInstanceRequest& request) const;
			GetInstanceConsumeTimeRankOutcome getInstanceConsumeTimeRank(const Model::GetInstanceConsumeTimeRankRequest &request)const;
			void getInstanceConsumeTimeRankAsync(const Model::GetInstanceConsumeTimeRankRequest& request, const GetInstanceConsumeTimeRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceConsumeTimeRankOutcomeCallable getInstanceConsumeTimeRankCallable(const Model::GetInstanceConsumeTimeRankRequest& request) const;
			GetInstanceCountTrendOutcome getInstanceCountTrend(const Model::GetInstanceCountTrendRequest &request)const;
			void getInstanceCountTrendAsync(const Model::GetInstanceCountTrendRequest& request, const GetInstanceCountTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceCountTrendOutcomeCallable getInstanceCountTrendCallable(const Model::GetInstanceCountTrendRequest& request) const;
			GetInstanceErrorRankOutcome getInstanceErrorRank(const Model::GetInstanceErrorRankRequest &request)const;
			void getInstanceErrorRankAsync(const Model::GetInstanceErrorRankRequest& request, const GetInstanceErrorRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceErrorRankOutcomeCallable getInstanceErrorRankCallable(const Model::GetInstanceErrorRankRequest& request) const;
			GetInstanceLogOutcome getInstanceLog(const Model::GetInstanceLogRequest &request)const;
			void getInstanceLogAsync(const Model::GetInstanceLogRequest& request, const GetInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceLogOutcomeCallable getInstanceLogCallable(const Model::GetInstanceLogRequest& request) const;
			GetInstanceStatusCountOutcome getInstanceStatusCount(const Model::GetInstanceStatusCountRequest &request)const;
			void getInstanceStatusCountAsync(const Model::GetInstanceStatusCountRequest& request, const GetInstanceStatusCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceStatusCountOutcomeCallable getInstanceStatusCountCallable(const Model::GetInstanceStatusCountRequest& request) const;
			GetInstanceStatusStatisticOutcome getInstanceStatusStatistic(const Model::GetInstanceStatusStatisticRequest &request)const;
			void getInstanceStatusStatisticAsync(const Model::GetInstanceStatusStatisticRequest& request, const GetInstanceStatusStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceStatusStatisticOutcomeCallable getInstanceStatusStatisticCallable(const Model::GetInstanceStatusStatisticRequest& request) const;
			GetManualDagInstancesOutcome getManualDagInstances(const Model::GetManualDagInstancesRequest &request)const;
			void getManualDagInstancesAsync(const Model::GetManualDagInstancesRequest& request, const GetManualDagInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetManualDagInstancesOutcomeCallable getManualDagInstancesCallable(const Model::GetManualDagInstancesRequest& request) const;
			GetMetaCategoryOutcome getMetaCategory(const Model::GetMetaCategoryRequest &request)const;
			void getMetaCategoryAsync(const Model::GetMetaCategoryRequest& request, const GetMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaCategoryOutcomeCallable getMetaCategoryCallable(const Model::GetMetaCategoryRequest& request) const;
			GetMetaCollectionDetailOutcome getMetaCollectionDetail(const Model::GetMetaCollectionDetailRequest &request)const;
			void getMetaCollectionDetailAsync(const Model::GetMetaCollectionDetailRequest& request, const GetMetaCollectionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaCollectionDetailOutcomeCallable getMetaCollectionDetailCallable(const Model::GetMetaCollectionDetailRequest& request) const;
			GetMetaColumnLineageOutcome getMetaColumnLineage(const Model::GetMetaColumnLineageRequest &request)const;
			void getMetaColumnLineageAsync(const Model::GetMetaColumnLineageRequest& request, const GetMetaColumnLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaColumnLineageOutcomeCallable getMetaColumnLineageCallable(const Model::GetMetaColumnLineageRequest& request) const;
			GetMetaDBInfoOutcome getMetaDBInfo(const Model::GetMetaDBInfoRequest &request)const;
			void getMetaDBInfoAsync(const Model::GetMetaDBInfoRequest& request, const GetMetaDBInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaDBInfoOutcomeCallable getMetaDBInfoCallable(const Model::GetMetaDBInfoRequest& request) const;
			GetMetaDBTableListOutcome getMetaDBTableList(const Model::GetMetaDBTableListRequest &request)const;
			void getMetaDBTableListAsync(const Model::GetMetaDBTableListRequest& request, const GetMetaDBTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaDBTableListOutcomeCallable getMetaDBTableListCallable(const Model::GetMetaDBTableListRequest& request) const;
			GetMetaTableBasicInfoOutcome getMetaTableBasicInfo(const Model::GetMetaTableBasicInfoRequest &request)const;
			void getMetaTableBasicInfoAsync(const Model::GetMetaTableBasicInfoRequest& request, const GetMetaTableBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableBasicInfoOutcomeCallable getMetaTableBasicInfoCallable(const Model::GetMetaTableBasicInfoRequest& request) const;
			GetMetaTableChangeLogOutcome getMetaTableChangeLog(const Model::GetMetaTableChangeLogRequest &request)const;
			void getMetaTableChangeLogAsync(const Model::GetMetaTableChangeLogRequest& request, const GetMetaTableChangeLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableChangeLogOutcomeCallable getMetaTableChangeLogCallable(const Model::GetMetaTableChangeLogRequest& request) const;
			GetMetaTableColumnOutcome getMetaTableColumn(const Model::GetMetaTableColumnRequest &request)const;
			void getMetaTableColumnAsync(const Model::GetMetaTableColumnRequest& request, const GetMetaTableColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableColumnOutcomeCallable getMetaTableColumnCallable(const Model::GetMetaTableColumnRequest& request) const;
			GetMetaTableFullInfoOutcome getMetaTableFullInfo(const Model::GetMetaTableFullInfoRequest &request)const;
			void getMetaTableFullInfoAsync(const Model::GetMetaTableFullInfoRequest& request, const GetMetaTableFullInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableFullInfoOutcomeCallable getMetaTableFullInfoCallable(const Model::GetMetaTableFullInfoRequest& request) const;
			GetMetaTableIntroWikiOutcome getMetaTableIntroWiki(const Model::GetMetaTableIntroWikiRequest &request)const;
			void getMetaTableIntroWikiAsync(const Model::GetMetaTableIntroWikiRequest& request, const GetMetaTableIntroWikiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableIntroWikiOutcomeCallable getMetaTableIntroWikiCallable(const Model::GetMetaTableIntroWikiRequest& request) const;
			GetMetaTableLineageOutcome getMetaTableLineage(const Model::GetMetaTableLineageRequest &request)const;
			void getMetaTableLineageAsync(const Model::GetMetaTableLineageRequest& request, const GetMetaTableLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableLineageOutcomeCallable getMetaTableLineageCallable(const Model::GetMetaTableLineageRequest& request) const;
			GetMetaTableListByCategoryOutcome getMetaTableListByCategory(const Model::GetMetaTableListByCategoryRequest &request)const;
			void getMetaTableListByCategoryAsync(const Model::GetMetaTableListByCategoryRequest& request, const GetMetaTableListByCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableListByCategoryOutcomeCallable getMetaTableListByCategoryCallable(const Model::GetMetaTableListByCategoryRequest& request) const;
			GetMetaTableOutputOutcome getMetaTableOutput(const Model::GetMetaTableOutputRequest &request)const;
			void getMetaTableOutputAsync(const Model::GetMetaTableOutputRequest& request, const GetMetaTableOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableOutputOutcomeCallable getMetaTableOutputCallable(const Model::GetMetaTableOutputRequest& request) const;
			GetMetaTablePartitionOutcome getMetaTablePartition(const Model::GetMetaTablePartitionRequest &request)const;
			void getMetaTablePartitionAsync(const Model::GetMetaTablePartitionRequest& request, const GetMetaTablePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTablePartitionOutcomeCallable getMetaTablePartitionCallable(const Model::GetMetaTablePartitionRequest& request) const;
			GetMetaTableProducingTasksOutcome getMetaTableProducingTasks(const Model::GetMetaTableProducingTasksRequest &request)const;
			void getMetaTableProducingTasksAsync(const Model::GetMetaTableProducingTasksRequest& request, const GetMetaTableProducingTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableProducingTasksOutcomeCallable getMetaTableProducingTasksCallable(const Model::GetMetaTableProducingTasksRequest& request) const;
			GetMetaTableThemeLevelOutcome getMetaTableThemeLevel(const Model::GetMetaTableThemeLevelRequest &request)const;
			void getMetaTableThemeLevelAsync(const Model::GetMetaTableThemeLevelRequest& request, const GetMetaTableThemeLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableThemeLevelOutcomeCallable getMetaTableThemeLevelCallable(const Model::GetMetaTableThemeLevelRequest& request) const;
			GetMigrationProcessOutcome getMigrationProcess(const Model::GetMigrationProcessRequest &request)const;
			void getMigrationProcessAsync(const Model::GetMigrationProcessRequest& request, const GetMigrationProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMigrationProcessOutcomeCallable getMigrationProcessCallable(const Model::GetMigrationProcessRequest& request) const;
			GetMigrationSummaryOutcome getMigrationSummary(const Model::GetMigrationSummaryRequest &request)const;
			void getMigrationSummaryAsync(const Model::GetMigrationSummaryRequest& request, const GetMigrationSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMigrationSummaryOutcomeCallable getMigrationSummaryCallable(const Model::GetMigrationSummaryRequest& request) const;
			GetNodeOutcome getNode(const Model::GetNodeRequest &request)const;
			void getNodeAsync(const Model::GetNodeRequest& request, const GetNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeOutcomeCallable getNodeCallable(const Model::GetNodeRequest& request) const;
			GetNodeChildrenOutcome getNodeChildren(const Model::GetNodeChildrenRequest &request)const;
			void getNodeChildrenAsync(const Model::GetNodeChildrenRequest& request, const GetNodeChildrenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeChildrenOutcomeCallable getNodeChildrenCallable(const Model::GetNodeChildrenRequest& request) const;
			GetNodeCodeOutcome getNodeCode(const Model::GetNodeCodeRequest &request)const;
			void getNodeCodeAsync(const Model::GetNodeCodeRequest& request, const GetNodeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeCodeOutcomeCallable getNodeCodeCallable(const Model::GetNodeCodeRequest& request) const;
			GetNodeOnBaselineOutcome getNodeOnBaseline(const Model::GetNodeOnBaselineRequest &request)const;
			void getNodeOnBaselineAsync(const Model::GetNodeOnBaselineRequest& request, const GetNodeOnBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeOnBaselineOutcomeCallable getNodeOnBaselineCallable(const Model::GetNodeOnBaselineRequest& request) const;
			GetNodeParentsOutcome getNodeParents(const Model::GetNodeParentsRequest &request)const;
			void getNodeParentsAsync(const Model::GetNodeParentsRequest& request, const GetNodeParentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeParentsOutcomeCallable getNodeParentsCallable(const Model::GetNodeParentsRequest& request) const;
			GetNodeTypeListInfoOutcome getNodeTypeListInfo(const Model::GetNodeTypeListInfoRequest &request)const;
			void getNodeTypeListInfoAsync(const Model::GetNodeTypeListInfoRequest& request, const GetNodeTypeListInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeTypeListInfoOutcomeCallable getNodeTypeListInfoCallable(const Model::GetNodeTypeListInfoRequest& request) const;
			GetOpRiskDataOutcome getOpRiskData(const Model::GetOpRiskDataRequest &request)const;
			void getOpRiskDataAsync(const Model::GetOpRiskDataRequest& request, const GetOpRiskDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpRiskDataOutcomeCallable getOpRiskDataCallable(const Model::GetOpRiskDataRequest& request) const;
			GetOpSensitiveDataOutcome getOpSensitiveData(const Model::GetOpSensitiveDataRequest &request)const;
			void getOpSensitiveDataAsync(const Model::GetOpSensitiveDataRequest& request, const GetOpSensitiveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpSensitiveDataOutcomeCallable getOpSensitiveDataCallable(const Model::GetOpSensitiveDataRequest& request) const;
			GetOptionValueForProjectOutcome getOptionValueForProject(const Model::GetOptionValueForProjectRequest &request)const;
			void getOptionValueForProjectAsync(const Model::GetOptionValueForProjectRequest& request, const GetOptionValueForProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOptionValueForProjectOutcomeCallable getOptionValueForProjectCallable(const Model::GetOptionValueForProjectRequest& request) const;
			GetPermissionApplyOrderDetailOutcome getPermissionApplyOrderDetail(const Model::GetPermissionApplyOrderDetailRequest &request)const;
			void getPermissionApplyOrderDetailAsync(const Model::GetPermissionApplyOrderDetailRequest& request, const GetPermissionApplyOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPermissionApplyOrderDetailOutcomeCallable getPermissionApplyOrderDetailCallable(const Model::GetPermissionApplyOrderDetailRequest& request) const;
			GetProjectOutcome getProject(const Model::GetProjectRequest &request)const;
			void getProjectAsync(const Model::GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectOutcomeCallable getProjectCallable(const Model::GetProjectRequest& request) const;
			GetProjectDetailOutcome getProjectDetail(const Model::GetProjectDetailRequest &request)const;
			void getProjectDetailAsync(const Model::GetProjectDetailRequest& request, const GetProjectDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectDetailOutcomeCallable getProjectDetailCallable(const Model::GetProjectDetailRequest& request) const;
			GetQualityEntityOutcome getQualityEntity(const Model::GetQualityEntityRequest &request)const;
			void getQualityEntityAsync(const Model::GetQualityEntityRequest& request, const GetQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQualityEntityOutcomeCallable getQualityEntityCallable(const Model::GetQualityEntityRequest& request) const;
			GetQualityFollowerOutcome getQualityFollower(const Model::GetQualityFollowerRequest &request)const;
			void getQualityFollowerAsync(const Model::GetQualityFollowerRequest& request, const GetQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQualityFollowerOutcomeCallable getQualityFollowerCallable(const Model::GetQualityFollowerRequest& request) const;
			GetQualityRuleOutcome getQualityRule(const Model::GetQualityRuleRequest &request)const;
			void getQualityRuleAsync(const Model::GetQualityRuleRequest& request, const GetQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQualityRuleOutcomeCallable getQualityRuleCallable(const Model::GetQualityRuleRequest& request) const;
			GetRemindOutcome getRemind(const Model::GetRemindRequest &request)const;
			void getRemindAsync(const Model::GetRemindRequest& request, const GetRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRemindOutcomeCallable getRemindCallable(const Model::GetRemindRequest& request) const;
			GetSensitiveDataOutcome getSensitiveData(const Model::GetSensitiveDataRequest &request)const;
			void getSensitiveDataAsync(const Model::GetSensitiveDataRequest& request, const GetSensitiveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSensitiveDataOutcomeCallable getSensitiveDataCallable(const Model::GetSensitiveDataRequest& request) const;
			GetSuccessInstanceTrendOutcome getSuccessInstanceTrend(const Model::GetSuccessInstanceTrendRequest &request)const;
			void getSuccessInstanceTrendAsync(const Model::GetSuccessInstanceTrendRequest& request, const GetSuccessInstanceTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSuccessInstanceTrendOutcomeCallable getSuccessInstanceTrendCallable(const Model::GetSuccessInstanceTrendRequest& request) const;
			GetTopicOutcome getTopic(const Model::GetTopicRequest &request)const;
			void getTopicAsync(const Model::GetTopicRequest& request, const GetTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTopicOutcomeCallable getTopicCallable(const Model::GetTopicRequest& request) const;
			GetTopicInfluenceOutcome getTopicInfluence(const Model::GetTopicInfluenceRequest &request)const;
			void getTopicInfluenceAsync(const Model::GetTopicInfluenceRequest& request, const GetTopicInfluenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTopicInfluenceOutcomeCallable getTopicInfluenceCallable(const Model::GetTopicInfluenceRequest& request) const;
			ImportDataSourcesOutcome importDataSources(const Model::ImportDataSourcesRequest &request)const;
			void importDataSourcesAsync(const Model::ImportDataSourcesRequest& request, const ImportDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportDataSourcesOutcomeCallable importDataSourcesCallable(const Model::ImportDataSourcesRequest& request) const;
			ListAlertMessagesOutcome listAlertMessages(const Model::ListAlertMessagesRequest &request)const;
			void listAlertMessagesAsync(const Model::ListAlertMessagesRequest& request, const ListAlertMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlertMessagesOutcomeCallable listAlertMessagesCallable(const Model::ListAlertMessagesRequest& request) const;
			ListBaselineConfigsOutcome listBaselineConfigs(const Model::ListBaselineConfigsRequest &request)const;
			void listBaselineConfigsAsync(const Model::ListBaselineConfigsRequest& request, const ListBaselineConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaselineConfigsOutcomeCallable listBaselineConfigsCallable(const Model::ListBaselineConfigsRequest& request) const;
			ListBaselineStatusesOutcome listBaselineStatuses(const Model::ListBaselineStatusesRequest &request)const;
			void listBaselineStatusesAsync(const Model::ListBaselineStatusesRequest& request, const ListBaselineStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaselineStatusesOutcomeCallable listBaselineStatusesCallable(const Model::ListBaselineStatusesRequest& request) const;
			ListBaselinesOutcome listBaselines(const Model::ListBaselinesRequest &request)const;
			void listBaselinesAsync(const Model::ListBaselinesRequest& request, const ListBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaselinesOutcomeCallable listBaselinesCallable(const Model::ListBaselinesRequest& request) const;
			ListBusinessOutcome listBusiness(const Model::ListBusinessRequest &request)const;
			void listBusinessAsync(const Model::ListBusinessRequest& request, const ListBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBusinessOutcomeCallable listBusinessCallable(const Model::ListBusinessRequest& request) const;
			ListCalcEnginesOutcome listCalcEngines(const Model::ListCalcEnginesRequest &request)const;
			void listCalcEnginesAsync(const Model::ListCalcEnginesRequest& request, const ListCalcEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCalcEnginesOutcomeCallable listCalcEnginesCallable(const Model::ListCalcEnginesRequest& request) const;
			ListCheckProcessesOutcome listCheckProcesses(const Model::ListCheckProcessesRequest &request)const;
			void listCheckProcessesAsync(const Model::ListCheckProcessesRequest& request, const ListCheckProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCheckProcessesOutcomeCallable listCheckProcessesCallable(const Model::ListCheckProcessesRequest& request) const;
			ListClusterConfigsOutcome listClusterConfigs(const Model::ListClusterConfigsRequest &request)const;
			void listClusterConfigsAsync(const Model::ListClusterConfigsRequest& request, const ListClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterConfigsOutcomeCallable listClusterConfigsCallable(const Model::ListClusterConfigsRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			ListConnectionsOutcome listConnections(const Model::ListConnectionsRequest &request)const;
			void listConnectionsAsync(const Model::ListConnectionsRequest& request, const ListConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConnectionsOutcomeCallable listConnectionsCallable(const Model::ListConnectionsRequest& request) const;
			ListDIAlarmRulesOutcome listDIAlarmRules(const Model::ListDIAlarmRulesRequest &request)const;
			void listDIAlarmRulesAsync(const Model::ListDIAlarmRulesRequest& request, const ListDIAlarmRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDIAlarmRulesOutcomeCallable listDIAlarmRulesCallable(const Model::ListDIAlarmRulesRequest& request) const;
			ListDIJobsOutcome listDIJobs(const Model::ListDIJobsRequest &request)const;
			void listDIJobsAsync(const Model::ListDIJobsRequest& request, const ListDIJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDIJobsOutcomeCallable listDIJobsCallable(const Model::ListDIJobsRequest& request) const;
			ListDIProjectConfigOutcome listDIProjectConfig(const Model::ListDIProjectConfigRequest &request)const;
			void listDIProjectConfigAsync(const Model::ListDIProjectConfigRequest& request, const ListDIProjectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDIProjectConfigOutcomeCallable listDIProjectConfigCallable(const Model::ListDIProjectConfigRequest& request) const;
			ListDagsOutcome listDags(const Model::ListDagsRequest &request)const;
			void listDagsAsync(const Model::ListDagsRequest& request, const ListDagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDagsOutcomeCallable listDagsCallable(const Model::ListDagsRequest& request) const;
			ListDataServiceApiAuthoritiesOutcome listDataServiceApiAuthorities(const Model::ListDataServiceApiAuthoritiesRequest &request)const;
			void listDataServiceApiAuthoritiesAsync(const Model::ListDataServiceApiAuthoritiesRequest& request, const ListDataServiceApiAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceApiAuthoritiesOutcomeCallable listDataServiceApiAuthoritiesCallable(const Model::ListDataServiceApiAuthoritiesRequest& request) const;
			ListDataServiceApiTestOutcome listDataServiceApiTest(const Model::ListDataServiceApiTestRequest &request)const;
			void listDataServiceApiTestAsync(const Model::ListDataServiceApiTestRequest& request, const ListDataServiceApiTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceApiTestOutcomeCallable listDataServiceApiTestCallable(const Model::ListDataServiceApiTestRequest& request) const;
			ListDataServiceApisOutcome listDataServiceApis(const Model::ListDataServiceApisRequest &request)const;
			void listDataServiceApisAsync(const Model::ListDataServiceApisRequest& request, const ListDataServiceApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceApisOutcomeCallable listDataServiceApisCallable(const Model::ListDataServiceApisRequest& request) const;
			ListDataServiceApplicationsOutcome listDataServiceApplications(const Model::ListDataServiceApplicationsRequest &request)const;
			void listDataServiceApplicationsAsync(const Model::ListDataServiceApplicationsRequest& request, const ListDataServiceApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceApplicationsOutcomeCallable listDataServiceApplicationsCallable(const Model::ListDataServiceApplicationsRequest& request) const;
			ListDataServiceAuthorizedApisOutcome listDataServiceAuthorizedApis(const Model::ListDataServiceAuthorizedApisRequest &request)const;
			void listDataServiceAuthorizedApisAsync(const Model::ListDataServiceAuthorizedApisRequest& request, const ListDataServiceAuthorizedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceAuthorizedApisOutcomeCallable listDataServiceAuthorizedApisCallable(const Model::ListDataServiceAuthorizedApisRequest& request) const;
			ListDataServiceFoldersOutcome listDataServiceFolders(const Model::ListDataServiceFoldersRequest &request)const;
			void listDataServiceFoldersAsync(const Model::ListDataServiceFoldersRequest& request, const ListDataServiceFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceFoldersOutcomeCallable listDataServiceFoldersCallable(const Model::ListDataServiceFoldersRequest& request) const;
			ListDataServiceGroupsOutcome listDataServiceGroups(const Model::ListDataServiceGroupsRequest &request)const;
			void listDataServiceGroupsAsync(const Model::ListDataServiceGroupsRequest& request, const ListDataServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceGroupsOutcomeCallable listDataServiceGroupsCallable(const Model::ListDataServiceGroupsRequest& request) const;
			ListDataServicePublishedApisOutcome listDataServicePublishedApis(const Model::ListDataServicePublishedApisRequest &request)const;
			void listDataServicePublishedApisAsync(const Model::ListDataServicePublishedApisRequest& request, const ListDataServicePublishedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServicePublishedApisOutcomeCallable listDataServicePublishedApisCallable(const Model::ListDataServicePublishedApisRequest& request) const;
			ListDataSourcesOutcome listDataSources(const Model::ListDataSourcesRequest &request)const;
			void listDataSourcesAsync(const Model::ListDataSourcesRequest& request, const ListDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourcesOutcomeCallable listDataSourcesCallable(const Model::ListDataSourcesRequest& request) const;
			ListDeploymentsOutcome listDeployments(const Model::ListDeploymentsRequest &request)const;
			void listDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeploymentsOutcomeCallable listDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;
			ListEnabledExtensionsForProjectOutcome listEnabledExtensionsForProject(const Model::ListEnabledExtensionsForProjectRequest &request)const;
			void listEnabledExtensionsForProjectAsync(const Model::ListEnabledExtensionsForProjectRequest& request, const ListEnabledExtensionsForProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnabledExtensionsForProjectOutcomeCallable listEnabledExtensionsForProjectCallable(const Model::ListEnabledExtensionsForProjectRequest& request) const;
			ListEntitiesByTagsOutcome listEntitiesByTags(const Model::ListEntitiesByTagsRequest &request)const;
			void listEntitiesByTagsAsync(const Model::ListEntitiesByTagsRequest& request, const ListEntitiesByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEntitiesByTagsOutcomeCallable listEntitiesByTagsCallable(const Model::ListEntitiesByTagsRequest& request) const;
			ListEntityTagsOutcome listEntityTags(const Model::ListEntityTagsRequest &request)const;
			void listEntityTagsAsync(const Model::ListEntityTagsRequest& request, const ListEntityTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEntityTagsOutcomeCallable listEntityTagsCallable(const Model::ListEntityTagsRequest& request) const;
			ListExtensionsOutcome listExtensions(const Model::ListExtensionsRequest &request)const;
			void listExtensionsAsync(const Model::ListExtensionsRequest& request, const ListExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExtensionsOutcomeCallable listExtensionsCallable(const Model::ListExtensionsRequest& request) const;
			ListFileTypeOutcome listFileType(const Model::ListFileTypeRequest &request)const;
			void listFileTypeAsync(const Model::ListFileTypeRequest& request, const ListFileTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFileTypeOutcomeCallable listFileTypeCallable(const Model::ListFileTypeRequest& request) const;
			ListFileVersionsOutcome listFileVersions(const Model::ListFileVersionsRequest &request)const;
			void listFileVersionsAsync(const Model::ListFileVersionsRequest& request, const ListFileVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFileVersionsOutcomeCallable listFileVersionsCallable(const Model::ListFileVersionsRequest& request) const;
			ListFilesOutcome listFiles(const Model::ListFilesRequest &request)const;
			void listFilesAsync(const Model::ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFilesOutcomeCallable listFilesCallable(const Model::ListFilesRequest& request) const;
			ListFoldersOutcome listFolders(const Model::ListFoldersRequest &request)const;
			void listFoldersAsync(const Model::ListFoldersRequest& request, const ListFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFoldersOutcomeCallable listFoldersCallable(const Model::ListFoldersRequest& request) const;
			ListInnerNodesOutcome listInnerNodes(const Model::ListInnerNodesRequest &request)const;
			void listInnerNodesAsync(const Model::ListInnerNodesRequest& request, const ListInnerNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInnerNodesOutcomeCallable listInnerNodesCallable(const Model::ListInnerNodesRequest& request) const;
			ListInstanceAmountOutcome listInstanceAmount(const Model::ListInstanceAmountRequest &request)const;
			void listInstanceAmountAsync(const Model::ListInstanceAmountRequest& request, const ListInstanceAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceAmountOutcomeCallable listInstanceAmountCallable(const Model::ListInstanceAmountRequest& request) const;
			ListInstanceHistoryOutcome listInstanceHistory(const Model::ListInstanceHistoryRequest &request)const;
			void listInstanceHistoryAsync(const Model::ListInstanceHistoryRequest& request, const ListInstanceHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceHistoryOutcomeCallable listInstanceHistoryCallable(const Model::ListInstanceHistoryRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListLineageOutcome listLineage(const Model::ListLineageRequest &request)const;
			void listLineageAsync(const Model::ListLineageRequest& request, const ListLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLineageOutcomeCallable listLineageCallable(const Model::ListLineageRequest& request) const;
			ListManualDagInstancesOutcome listManualDagInstances(const Model::ListManualDagInstancesRequest &request)const;
			void listManualDagInstancesAsync(const Model::ListManualDagInstancesRequest& request, const ListManualDagInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListManualDagInstancesOutcomeCallable listManualDagInstancesCallable(const Model::ListManualDagInstancesRequest& request) const;
			ListMeasureDataOutcome listMeasureData(const Model::ListMeasureDataRequest &request)const;
			void listMeasureDataAsync(const Model::ListMeasureDataRequest& request, const ListMeasureDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMeasureDataOutcomeCallable listMeasureDataCallable(const Model::ListMeasureDataRequest& request) const;
			ListMetaCollectionEntitiesOutcome listMetaCollectionEntities(const Model::ListMetaCollectionEntitiesRequest &request)const;
			void listMetaCollectionEntitiesAsync(const Model::ListMetaCollectionEntitiesRequest& request, const ListMetaCollectionEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMetaCollectionEntitiesOutcomeCallable listMetaCollectionEntitiesCallable(const Model::ListMetaCollectionEntitiesRequest& request) const;
			ListMetaCollectionsOutcome listMetaCollections(const Model::ListMetaCollectionsRequest &request)const;
			void listMetaCollectionsAsync(const Model::ListMetaCollectionsRequest& request, const ListMetaCollectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMetaCollectionsOutcomeCallable listMetaCollectionsCallable(const Model::ListMetaCollectionsRequest& request) const;
			ListMetaDBOutcome listMetaDB(const Model::ListMetaDBRequest &request)const;
			void listMetaDBAsync(const Model::ListMetaDBRequest& request, const ListMetaDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMetaDBOutcomeCallable listMetaDBCallable(const Model::ListMetaDBRequest& request) const;
			ListMigrationsOutcome listMigrations(const Model::ListMigrationsRequest &request)const;
			void listMigrationsAsync(const Model::ListMigrationsRequest& request, const ListMigrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMigrationsOutcomeCallable listMigrationsCallable(const Model::ListMigrationsRequest& request) const;
			ListNodeIOOutcome listNodeIO(const Model::ListNodeIORequest &request)const;
			void listNodeIOAsync(const Model::ListNodeIORequest& request, const ListNodeIOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeIOOutcomeCallable listNodeIOCallable(const Model::ListNodeIORequest& request) const;
			ListNodeInputOrOutputOutcome listNodeInputOrOutput(const Model::ListNodeInputOrOutputRequest &request)const;
			void listNodeInputOrOutputAsync(const Model::ListNodeInputOrOutputRequest& request, const ListNodeInputOrOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeInputOrOutputOutcomeCallable listNodeInputOrOutputCallable(const Model::ListNodeInputOrOutputRequest& request) const;
			ListNodesOutcome listNodes(const Model::ListNodesRequest &request)const;
			void listNodesAsync(const Model::ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesOutcomeCallable listNodesCallable(const Model::ListNodesRequest& request) const;
			ListNodesByBaselineOutcome listNodesByBaseline(const Model::ListNodesByBaselineRequest &request)const;
			void listNodesByBaselineAsync(const Model::ListNodesByBaselineRequest& request, const ListNodesByBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesByBaselineOutcomeCallable listNodesByBaselineCallable(const Model::ListNodesByBaselineRequest& request) const;
			ListNodesByOutputOutcome listNodesByOutput(const Model::ListNodesByOutputRequest &request)const;
			void listNodesByOutputAsync(const Model::ListNodesByOutputRequest& request, const ListNodesByOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesByOutputOutcomeCallable listNodesByOutputCallable(const Model::ListNodesByOutputRequest& request) const;
			ListPermissionApplyOrdersOutcome listPermissionApplyOrders(const Model::ListPermissionApplyOrdersRequest &request)const;
			void listPermissionApplyOrdersAsync(const Model::ListPermissionApplyOrdersRequest& request, const ListPermissionApplyOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPermissionApplyOrdersOutcomeCallable listPermissionApplyOrdersCallable(const Model::ListPermissionApplyOrdersRequest& request) const;
			ListProgramTypeCountOutcome listProgramTypeCount(const Model::ListProgramTypeCountRequest &request)const;
			void listProgramTypeCountAsync(const Model::ListProgramTypeCountRequest& request, const ListProgramTypeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProgramTypeCountOutcomeCallable listProgramTypeCountCallable(const Model::ListProgramTypeCountRequest& request) const;
			ListProjectIdsOutcome listProjectIds(const Model::ListProjectIdsRequest &request)const;
			void listProjectIdsAsync(const Model::ListProjectIdsRequest& request, const ListProjectIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectIdsOutcomeCallable listProjectIdsCallable(const Model::ListProjectIdsRequest& request) const;
			ListProjectMembersOutcome listProjectMembers(const Model::ListProjectMembersRequest &request)const;
			void listProjectMembersAsync(const Model::ListProjectMembersRequest& request, const ListProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectMembersOutcomeCallable listProjectMembersCallable(const Model::ListProjectMembersRequest& request) const;
			ListProjectRolesOutcome listProjectRoles(const Model::ListProjectRolesRequest &request)const;
			void listProjectRolesAsync(const Model::ListProjectRolesRequest& request, const ListProjectRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectRolesOutcomeCallable listProjectRolesCallable(const Model::ListProjectRolesRequest& request) const;
			ListProjectsOutcome listProjects(const Model::ListProjectsRequest &request)const;
			void listProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectsOutcomeCallable listProjectsCallable(const Model::ListProjectsRequest& request) const;
			ListQualityResultsByEntityOutcome listQualityResultsByEntity(const Model::ListQualityResultsByEntityRequest &request)const;
			void listQualityResultsByEntityAsync(const Model::ListQualityResultsByEntityRequest& request, const ListQualityResultsByEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQualityResultsByEntityOutcomeCallable listQualityResultsByEntityCallable(const Model::ListQualityResultsByEntityRequest& request) const;
			ListQualityResultsByRuleOutcome listQualityResultsByRule(const Model::ListQualityResultsByRuleRequest &request)const;
			void listQualityResultsByRuleAsync(const Model::ListQualityResultsByRuleRequest& request, const ListQualityResultsByRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQualityResultsByRuleOutcomeCallable listQualityResultsByRuleCallable(const Model::ListQualityResultsByRuleRequest& request) const;
			ListQualityRulesOutcome listQualityRules(const Model::ListQualityRulesRequest &request)const;
			void listQualityRulesAsync(const Model::ListQualityRulesRequest& request, const ListQualityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQualityRulesOutcomeCallable listQualityRulesCallable(const Model::ListQualityRulesRequest& request) const;
			ListRefDISyncTasksOutcome listRefDISyncTasks(const Model::ListRefDISyncTasksRequest &request)const;
			void listRefDISyncTasksAsync(const Model::ListRefDISyncTasksRequest& request, const ListRefDISyncTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRefDISyncTasksOutcomeCallable listRefDISyncTasksCallable(const Model::ListRefDISyncTasksRequest& request) const;
			ListRemindsOutcome listReminds(const Model::ListRemindsRequest &request)const;
			void listRemindsAsync(const Model::ListRemindsRequest& request, const ListRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRemindsOutcomeCallable listRemindsCallable(const Model::ListRemindsRequest& request) const;
			ListResourceGroupsOutcome listResourceGroups(const Model::ListResourceGroupsRequest &request)const;
			void listResourceGroupsAsync(const Model::ListResourceGroupsRequest& request, const ListResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceGroupsOutcomeCallable listResourceGroupsCallable(const Model::ListResourceGroupsRequest& request) const;
			ListShiftPersonnelsOutcome listShiftPersonnels(const Model::ListShiftPersonnelsRequest &request)const;
			void listShiftPersonnelsAsync(const Model::ListShiftPersonnelsRequest& request, const ListShiftPersonnelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListShiftPersonnelsOutcomeCallable listShiftPersonnelsCallable(const Model::ListShiftPersonnelsRequest& request) const;
			ListShiftSchedulesOutcome listShiftSchedules(const Model::ListShiftSchedulesRequest &request)const;
			void listShiftSchedulesAsync(const Model::ListShiftSchedulesRequest& request, const ListShiftSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListShiftSchedulesOutcomeCallable listShiftSchedulesCallable(const Model::ListShiftSchedulesRequest& request) const;
			ListSuccessInstanceAmountOutcome listSuccessInstanceAmount(const Model::ListSuccessInstanceAmountRequest &request)const;
			void listSuccessInstanceAmountAsync(const Model::ListSuccessInstanceAmountRequest& request, const ListSuccessInstanceAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSuccessInstanceAmountOutcomeCallable listSuccessInstanceAmountCallable(const Model::ListSuccessInstanceAmountRequest& request) const;
			ListTableLevelOutcome listTableLevel(const Model::ListTableLevelRequest &request)const;
			void listTableLevelAsync(const Model::ListTableLevelRequest& request, const ListTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTableLevelOutcomeCallable listTableLevelCallable(const Model::ListTableLevelRequest& request) const;
			ListTableThemeOutcome listTableTheme(const Model::ListTableThemeRequest &request)const;
			void listTableThemeAsync(const Model::ListTableThemeRequest& request, const ListTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTableThemeOutcomeCallable listTableThemeCallable(const Model::ListTableThemeRequest& request) const;
			ListTablesOutcome listTables(const Model::ListTablesRequest &request)const;
			void listTablesAsync(const Model::ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTablesOutcomeCallable listTablesCallable(const Model::ListTablesRequest& request) const;
			ListTopicsOutcome listTopics(const Model::ListTopicsRequest &request)const;
			void listTopicsAsync(const Model::ListTopicsRequest& request, const ListTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTopicsOutcomeCallable listTopicsCallable(const Model::ListTopicsRequest& request) const;
			OfflineNodeOutcome offlineNode(const Model::OfflineNodeRequest &request)const;
			void offlineNodeAsync(const Model::OfflineNodeRequest& request, const OfflineNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OfflineNodeOutcomeCallable offlineNodeCallable(const Model::OfflineNodeRequest& request) const;
			PublishDataServiceApiOutcome publishDataServiceApi(const Model::PublishDataServiceApiRequest &request)const;
			void publishDataServiceApiAsync(const Model::PublishDataServiceApiRequest& request, const PublishDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishDataServiceApiOutcomeCallable publishDataServiceApiCallable(const Model::PublishDataServiceApiRequest& request) const;
			QueryDISyncTaskConfigProcessResultOutcome queryDISyncTaskConfigProcessResult(const Model::QueryDISyncTaskConfigProcessResultRequest &request)const;
			void queryDISyncTaskConfigProcessResultAsync(const Model::QueryDISyncTaskConfigProcessResultRequest& request, const QueryDISyncTaskConfigProcessResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDISyncTaskConfigProcessResultOutcomeCallable queryDISyncTaskConfigProcessResultCallable(const Model::QueryDISyncTaskConfigProcessResultRequest& request) const;
			QueryDefaultTemplateOutcome queryDefaultTemplate(const Model::QueryDefaultTemplateRequest &request)const;
			void queryDefaultTemplateAsync(const Model::QueryDefaultTemplateRequest& request, const QueryDefaultTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDefaultTemplateOutcomeCallable queryDefaultTemplateCallable(const Model::QueryDefaultTemplateRequest& request) const;
			QueryPublicModelEngineOutcome queryPublicModelEngine(const Model::QueryPublicModelEngineRequest &request)const;
			void queryPublicModelEngineAsync(const Model::QueryPublicModelEngineRequest& request, const QueryPublicModelEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPublicModelEngineOutcomeCallable queryPublicModelEngineCallable(const Model::QueryPublicModelEngineRequest& request) const;
			QueryRecognizeDataByRuleTypeOutcome queryRecognizeDataByRuleType(const Model::QueryRecognizeDataByRuleTypeRequest &request)const;
			void queryRecognizeDataByRuleTypeAsync(const Model::QueryRecognizeDataByRuleTypeRequest& request, const QueryRecognizeDataByRuleTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecognizeDataByRuleTypeOutcomeCallable queryRecognizeDataByRuleTypeCallable(const Model::QueryRecognizeDataByRuleTypeRequest& request) const;
			QueryRecognizeRuleDetailOutcome queryRecognizeRuleDetail(const Model::QueryRecognizeRuleDetailRequest &request)const;
			void queryRecognizeRuleDetailAsync(const Model::QueryRecognizeRuleDetailRequest& request, const QueryRecognizeRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecognizeRuleDetailOutcomeCallable queryRecognizeRuleDetailCallable(const Model::QueryRecognizeRuleDetailRequest& request) const;
			QueryRecognizeRulesTypeOutcome queryRecognizeRulesType(const Model::QueryRecognizeRulesTypeRequest &request)const;
			void queryRecognizeRulesTypeAsync(const Model::QueryRecognizeRulesTypeRequest& request, const QueryRecognizeRulesTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRecognizeRulesTypeOutcomeCallable queryRecognizeRulesTypeCallable(const Model::QueryRecognizeRulesTypeRequest& request) const;
			QuerySensClassificationOutcome querySensClassification(const Model::QuerySensClassificationRequest &request)const;
			void querySensClassificationAsync(const Model::QuerySensClassificationRequest& request, const QuerySensClassificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySensClassificationOutcomeCallable querySensClassificationCallable(const Model::QuerySensClassificationRequest& request) const;
			QuerySensLevelOutcome querySensLevel(const Model::QuerySensLevelRequest &request)const;
			void querySensLevelAsync(const Model::QuerySensLevelRequest& request, const QuerySensLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySensLevelOutcomeCallable querySensLevelCallable(const Model::QuerySensLevelRequest& request) const;
			QuerySensNodeInfoOutcome querySensNodeInfo(const Model::QuerySensNodeInfoRequest &request)const;
			void querySensNodeInfoAsync(const Model::QuerySensNodeInfoRequest& request, const QuerySensNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySensNodeInfoOutcomeCallable querySensNodeInfoCallable(const Model::QuerySensNodeInfoRequest& request) const;
			RegisterLineageRelationOutcome registerLineageRelation(const Model::RegisterLineageRelationRequest &request)const;
			void registerLineageRelationAsync(const Model::RegisterLineageRelationRequest& request, const RegisterLineageRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterLineageRelationOutcomeCallable registerLineageRelationCallable(const Model::RegisterLineageRelationRequest& request) const;
			RemoveEntityTagsOutcome removeEntityTags(const Model::RemoveEntityTagsRequest &request)const;
			void removeEntityTagsAsync(const Model::RemoveEntityTagsRequest& request, const RemoveEntityTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveEntityTagsOutcomeCallable removeEntityTagsCallable(const Model::RemoveEntityTagsRequest& request) const;
			RemoveProjectMemberFromRoleOutcome removeProjectMemberFromRole(const Model::RemoveProjectMemberFromRoleRequest &request)const;
			void removeProjectMemberFromRoleAsync(const Model::RemoveProjectMemberFromRoleRequest& request, const RemoveProjectMemberFromRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveProjectMemberFromRoleOutcomeCallable removeProjectMemberFromRoleCallable(const Model::RemoveProjectMemberFromRoleRequest& request) const;
			RestartInstanceOutcome restartInstance(const Model::RestartInstanceRequest &request)const;
			void restartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartInstanceOutcomeCallable restartInstanceCallable(const Model::RestartInstanceRequest& request) const;
			ResumeInstanceOutcome resumeInstance(const Model::ResumeInstanceRequest &request)const;
			void resumeInstanceAsync(const Model::ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeInstanceOutcomeCallable resumeInstanceCallable(const Model::ResumeInstanceRequest& request) const;
			RevokeTablePermissionOutcome revokeTablePermission(const Model::RevokeTablePermissionRequest &request)const;
			void revokeTablePermissionAsync(const Model::RevokeTablePermissionRequest& request, const RevokeTablePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeTablePermissionOutcomeCallable revokeTablePermissionCallable(const Model::RevokeTablePermissionRequest& request) const;
			RunCycleDagNodesOutcome runCycleDagNodes(const Model::RunCycleDagNodesRequest &request)const;
			void runCycleDagNodesAsync(const Model::RunCycleDagNodesRequest& request, const RunCycleDagNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunCycleDagNodesOutcomeCallable runCycleDagNodesCallable(const Model::RunCycleDagNodesRequest& request) const;
			RunManualDagNodesOutcome runManualDagNodes(const Model::RunManualDagNodesRequest &request)const;
			void runManualDagNodesAsync(const Model::RunManualDagNodesRequest& request, const RunManualDagNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunManualDagNodesOutcomeCallable runManualDagNodesCallable(const Model::RunManualDagNodesRequest& request) const;
			RunSmokeTestOutcome runSmokeTest(const Model::RunSmokeTestRequest &request)const;
			void runSmokeTestAsync(const Model::RunSmokeTestRequest& request, const RunSmokeTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunSmokeTestOutcomeCallable runSmokeTestCallable(const Model::RunSmokeTestRequest& request) const;
			RunTriggerNodeOutcome runTriggerNode(const Model::RunTriggerNodeRequest &request)const;
			void runTriggerNodeAsync(const Model::RunTriggerNodeRequest& request, const RunTriggerNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunTriggerNodeOutcomeCallable runTriggerNodeCallable(const Model::RunTriggerNodeRequest& request) const;
			SaveDataServiceApiTestResultOutcome saveDataServiceApiTestResult(const Model::SaveDataServiceApiTestResultRequest &request)const;
			void saveDataServiceApiTestResultAsync(const Model::SaveDataServiceApiTestResultRequest& request, const SaveDataServiceApiTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveDataServiceApiTestResultOutcomeCallable saveDataServiceApiTestResultCallable(const Model::SaveDataServiceApiTestResultRequest& request) const;
			ScanSensitiveDataOutcome scanSensitiveData(const Model::ScanSensitiveDataRequest &request)const;
			void scanSensitiveDataAsync(const Model::ScanSensitiveDataRequest& request, const ScanSensitiveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScanSensitiveDataOutcomeCallable scanSensitiveDataCallable(const Model::ScanSensitiveDataRequest& request) const;
			SearchMetaTablesOutcome searchMetaTables(const Model::SearchMetaTablesRequest &request)const;
			void searchMetaTablesAsync(const Model::SearchMetaTablesRequest& request, const SearchMetaTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchMetaTablesOutcomeCallable searchMetaTablesCallable(const Model::SearchMetaTablesRequest& request) const;
			SearchNodesByOutputOutcome searchNodesByOutput(const Model::SearchNodesByOutputRequest &request)const;
			void searchNodesByOutputAsync(const Model::SearchNodesByOutputRequest& request, const SearchNodesByOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchNodesByOutputOutcomeCallable searchNodesByOutputCallable(const Model::SearchNodesByOutputRequest& request) const;
			SetDataSourceShareOutcome setDataSourceShare(const Model::SetDataSourceShareRequest &request)const;
			void setDataSourceShareAsync(const Model::SetDataSourceShareRequest& request, const SetDataSourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDataSourceShareOutcomeCallable setDataSourceShareCallable(const Model::SetDataSourceShareRequest& request) const;
			SetEntityTagsOutcome setEntityTags(const Model::SetEntityTagsRequest &request)const;
			void setEntityTagsAsync(const Model::SetEntityTagsRequest& request, const SetEntityTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetEntityTagsOutcomeCallable setEntityTagsCallable(const Model::SetEntityTagsRequest& request) const;
			SetSuccessInstanceOutcome setSuccessInstance(const Model::SetSuccessInstanceRequest &request)const;
			void setSuccessInstanceAsync(const Model::SetSuccessInstanceRequest& request, const SetSuccessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSuccessInstanceOutcomeCallable setSuccessInstanceCallable(const Model::SetSuccessInstanceRequest& request) const;
			StartDIJobOutcome startDIJob(const Model::StartDIJobRequest &request)const;
			void startDIJobAsync(const Model::StartDIJobRequest& request, const StartDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDIJobOutcomeCallable startDIJobCallable(const Model::StartDIJobRequest& request) const;
			StartDISyncInstanceOutcome startDISyncInstance(const Model::StartDISyncInstanceRequest &request)const;
			void startDISyncInstanceAsync(const Model::StartDISyncInstanceRequest& request, const StartDISyncInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDISyncInstanceOutcomeCallable startDISyncInstanceCallable(const Model::StartDISyncInstanceRequest& request) const;
			StartMigrationOutcome startMigration(const Model::StartMigrationRequest &request)const;
			void startMigrationAsync(const Model::StartMigrationRequest& request, const StartMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartMigrationOutcomeCallable startMigrationCallable(const Model::StartMigrationRequest& request) const;
			StopDIJobOutcome stopDIJob(const Model::StopDIJobRequest &request)const;
			void stopDIJobAsync(const Model::StopDIJobRequest& request, const StopDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDIJobOutcomeCallable stopDIJobCallable(const Model::StopDIJobRequest& request) const;
			StopDISyncInstanceOutcome stopDISyncInstance(const Model::StopDISyncInstanceRequest &request)const;
			void stopDISyncInstanceAsync(const Model::StopDISyncInstanceRequest& request, const StopDISyncInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDISyncInstanceOutcomeCallable stopDISyncInstanceCallable(const Model::StopDISyncInstanceRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			SubmitDataServiceApiOutcome submitDataServiceApi(const Model::SubmitDataServiceApiRequest &request)const;
			void submitDataServiceApiAsync(const Model::SubmitDataServiceApiRequest& request, const SubmitDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitDataServiceApiOutcomeCallable submitDataServiceApiCallable(const Model::SubmitDataServiceApiRequest& request) const;
			SubmitFileOutcome submitFile(const Model::SubmitFileRequest &request)const;
			void submitFileAsync(const Model::SubmitFileRequest& request, const SubmitFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFileOutcomeCallable submitFileCallable(const Model::SubmitFileRequest& request) const;
			SuspendInstanceOutcome suspendInstance(const Model::SuspendInstanceRequest &request)const;
			void suspendInstanceAsync(const Model::SuspendInstanceRequest& request, const SuspendInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendInstanceOutcomeCallable suspendInstanceCallable(const Model::SuspendInstanceRequest& request) const;
			TerminateDISyncInstanceOutcome terminateDISyncInstance(const Model::TerminateDISyncInstanceRequest &request)const;
			void terminateDISyncInstanceAsync(const Model::TerminateDISyncInstanceRequest& request, const TerminateDISyncInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TerminateDISyncInstanceOutcomeCallable terminateDISyncInstanceCallable(const Model::TerminateDISyncInstanceRequest& request) const;
			TestDataServiceApiOutcome testDataServiceApi(const Model::TestDataServiceApiRequest &request)const;
			void testDataServiceApiAsync(const Model::TestDataServiceApiRequest& request, const TestDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestDataServiceApiOutcomeCallable testDataServiceApiCallable(const Model::TestDataServiceApiRequest& request) const;
			TestNetworkConnectionOutcome testNetworkConnection(const Model::TestNetworkConnectionRequest &request)const;
			void testNetworkConnectionAsync(const Model::TestNetworkConnectionRequest& request, const TestNetworkConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestNetworkConnectionOutcomeCallable testNetworkConnectionCallable(const Model::TestNetworkConnectionRequest& request) const;
			TopTenElapsedTimeInstanceOutcome topTenElapsedTimeInstance(const Model::TopTenElapsedTimeInstanceRequest &request)const;
			void topTenElapsedTimeInstanceAsync(const Model::TopTenElapsedTimeInstanceRequest& request, const TopTenElapsedTimeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TopTenElapsedTimeInstanceOutcomeCallable topTenElapsedTimeInstanceCallable(const Model::TopTenElapsedTimeInstanceRequest& request) const;
			TopTenErrorTimesInstanceOutcome topTenErrorTimesInstance(const Model::TopTenErrorTimesInstanceRequest &request)const;
			void topTenErrorTimesInstanceAsync(const Model::TopTenErrorTimesInstanceRequest& request, const TopTenErrorTimesInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TopTenErrorTimesInstanceOutcomeCallable topTenErrorTimesInstanceCallable(const Model::TopTenErrorTimesInstanceRequest& request) const;
			UpdateBaselineOutcome updateBaseline(const Model::UpdateBaselineRequest &request)const;
			void updateBaselineAsync(const Model::UpdateBaselineRequest& request, const UpdateBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBaselineOutcomeCallable updateBaselineCallable(const Model::UpdateBaselineRequest& request) const;
			UpdateBusinessOutcome updateBusiness(const Model::UpdateBusinessRequest &request)const;
			void updateBusinessAsync(const Model::UpdateBusinessRequest& request, const UpdateBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBusinessOutcomeCallable updateBusinessCallable(const Model::UpdateBusinessRequest& request) const;
			UpdateClusterConfigsOutcome updateClusterConfigs(const Model::UpdateClusterConfigsRequest &request)const;
			void updateClusterConfigsAsync(const Model::UpdateClusterConfigsRequest& request, const UpdateClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClusterConfigsOutcomeCallable updateClusterConfigsCallable(const Model::UpdateClusterConfigsRequest& request) const;
			UpdateConnectionOutcome updateConnection(const Model::UpdateConnectionRequest &request)const;
			void updateConnectionAsync(const Model::UpdateConnectionRequest& request, const UpdateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConnectionOutcomeCallable updateConnectionCallable(const Model::UpdateConnectionRequest& request) const;
			UpdateDIAlarmRuleOutcome updateDIAlarmRule(const Model::UpdateDIAlarmRuleRequest &request)const;
			void updateDIAlarmRuleAsync(const Model::UpdateDIAlarmRuleRequest& request, const UpdateDIAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDIAlarmRuleOutcomeCallable updateDIAlarmRuleCallable(const Model::UpdateDIAlarmRuleRequest& request) const;
			UpdateDIJobOutcome updateDIJob(const Model::UpdateDIJobRequest &request)const;
			void updateDIJobAsync(const Model::UpdateDIJobRequest& request, const UpdateDIJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDIJobOutcomeCallable updateDIJobCallable(const Model::UpdateDIJobRequest& request) const;
			UpdateDIProjectConfigOutcome updateDIProjectConfig(const Model::UpdateDIProjectConfigRequest &request)const;
			void updateDIProjectConfigAsync(const Model::UpdateDIProjectConfigRequest& request, const UpdateDIProjectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDIProjectConfigOutcomeCallable updateDIProjectConfigCallable(const Model::UpdateDIProjectConfigRequest& request) const;
			UpdateDISyncTaskOutcome updateDISyncTask(const Model::UpdateDISyncTaskRequest &request)const;
			void updateDISyncTaskAsync(const Model::UpdateDISyncTaskRequest& request, const UpdateDISyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDISyncTaskOutcomeCallable updateDISyncTaskCallable(const Model::UpdateDISyncTaskRequest& request) const;
			UpdateDataServiceApiOutcome updateDataServiceApi(const Model::UpdateDataServiceApiRequest &request)const;
			void updateDataServiceApiAsync(const Model::UpdateDataServiceApiRequest& request, const UpdateDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDataServiceApiOutcomeCallable updateDataServiceApiCallable(const Model::UpdateDataServiceApiRequest& request) const;
			UpdateDataSourceOutcome updateDataSource(const Model::UpdateDataSourceRequest &request)const;
			void updateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDataSourceOutcomeCallable updateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;
			UpdateFileOutcome updateFile(const Model::UpdateFileRequest &request)const;
			void updateFileAsync(const Model::UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFileOutcomeCallable updateFileCallable(const Model::UpdateFileRequest& request) const;
			UpdateFolderOutcome updateFolder(const Model::UpdateFolderRequest &request)const;
			void updateFolderAsync(const Model::UpdateFolderRequest& request, const UpdateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFolderOutcomeCallable updateFolderCallable(const Model::UpdateFolderRequest& request) const;
			UpdateIDEEventResultOutcome updateIDEEventResult(const Model::UpdateIDEEventResultRequest &request)const;
			void updateIDEEventResultAsync(const Model::UpdateIDEEventResultRequest& request, const UpdateIDEEventResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIDEEventResultOutcomeCallable updateIDEEventResultCallable(const Model::UpdateIDEEventResultRequest& request) const;
			UpdateMetaCategoryOutcome updateMetaCategory(const Model::UpdateMetaCategoryRequest &request)const;
			void updateMetaCategoryAsync(const Model::UpdateMetaCategoryRequest& request, const UpdateMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMetaCategoryOutcomeCallable updateMetaCategoryCallable(const Model::UpdateMetaCategoryRequest& request) const;
			UpdateMetaCollectionOutcome updateMetaCollection(const Model::UpdateMetaCollectionRequest &request)const;
			void updateMetaCollectionAsync(const Model::UpdateMetaCollectionRequest& request, const UpdateMetaCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMetaCollectionOutcomeCallable updateMetaCollectionCallable(const Model::UpdateMetaCollectionRequest& request) const;
			UpdateMetaTableOutcome updateMetaTable(const Model::UpdateMetaTableRequest &request)const;
			void updateMetaTableAsync(const Model::UpdateMetaTableRequest& request, const UpdateMetaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMetaTableOutcomeCallable updateMetaTableCallable(const Model::UpdateMetaTableRequest& request) const;
			UpdateMetaTableIntroWikiOutcome updateMetaTableIntroWiki(const Model::UpdateMetaTableIntroWikiRequest &request)const;
			void updateMetaTableIntroWikiAsync(const Model::UpdateMetaTableIntroWikiRequest& request, const UpdateMetaTableIntroWikiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMetaTableIntroWikiOutcomeCallable updateMetaTableIntroWikiCallable(const Model::UpdateMetaTableIntroWikiRequest& request) const;
			UpdateNodeOwnerOutcome updateNodeOwner(const Model::UpdateNodeOwnerRequest &request)const;
			void updateNodeOwnerAsync(const Model::UpdateNodeOwnerRequest& request, const UpdateNodeOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNodeOwnerOutcomeCallable updateNodeOwnerCallable(const Model::UpdateNodeOwnerRequest& request) const;
			UpdateNodeRunModeOutcome updateNodeRunMode(const Model::UpdateNodeRunModeRequest &request)const;
			void updateNodeRunModeAsync(const Model::UpdateNodeRunModeRequest& request, const UpdateNodeRunModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNodeRunModeOutcomeCallable updateNodeRunModeCallable(const Model::UpdateNodeRunModeRequest& request) const;
			UpdateQualityFollowerOutcome updateQualityFollower(const Model::UpdateQualityFollowerRequest &request)const;
			void updateQualityFollowerAsync(const Model::UpdateQualityFollowerRequest& request, const UpdateQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateQualityFollowerOutcomeCallable updateQualityFollowerCallable(const Model::UpdateQualityFollowerRequest& request) const;
			UpdateQualityRuleOutcome updateQualityRule(const Model::UpdateQualityRuleRequest &request)const;
			void updateQualityRuleAsync(const Model::UpdateQualityRuleRequest& request, const UpdateQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateQualityRuleOutcomeCallable updateQualityRuleCallable(const Model::UpdateQualityRuleRequest& request) const;
			UpdateRemindOutcome updateRemind(const Model::UpdateRemindRequest &request)const;
			void updateRemindAsync(const Model::UpdateRemindRequest& request, const UpdateRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRemindOutcomeCallable updateRemindCallable(const Model::UpdateRemindRequest& request) const;
			UpdateTableOutcome updateTable(const Model::UpdateTableRequest &request)const;
			void updateTableAsync(const Model::UpdateTableRequest& request, const UpdateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableOutcomeCallable updateTableCallable(const Model::UpdateTableRequest& request) const;
			UpdateTableAddColumnOutcome updateTableAddColumn(const Model::UpdateTableAddColumnRequest &request)const;
			void updateTableAddColumnAsync(const Model::UpdateTableAddColumnRequest& request, const UpdateTableAddColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableAddColumnOutcomeCallable updateTableAddColumnCallable(const Model::UpdateTableAddColumnRequest& request) const;
			UpdateTableLevelOutcome updateTableLevel(const Model::UpdateTableLevelRequest &request)const;
			void updateTableLevelAsync(const Model::UpdateTableLevelRequest& request, const UpdateTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableLevelOutcomeCallable updateTableLevelCallable(const Model::UpdateTableLevelRequest& request) const;
			UpdateTableModelInfoOutcome updateTableModelInfo(const Model::UpdateTableModelInfoRequest &request)const;
			void updateTableModelInfoAsync(const Model::UpdateTableModelInfoRequest& request, const UpdateTableModelInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableModelInfoOutcomeCallable updateTableModelInfoCallable(const Model::UpdateTableModelInfoRequest& request) const;
			UpdateTableThemeOutcome updateTableTheme(const Model::UpdateTableThemeRequest &request)const;
			void updateTableThemeAsync(const Model::UpdateTableThemeRequest& request, const UpdateTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableThemeOutcomeCallable updateTableThemeCallable(const Model::UpdateTableThemeRequest& request) const;
			UpdateUdfFileOutcome updateUdfFile(const Model::UpdateUdfFileRequest &request)const;
			void updateUdfFileAsync(const Model::UpdateUdfFileRequest& request, const UpdateUdfFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUdfFileOutcomeCallable updateUdfFileCallable(const Model::UpdateUdfFileRequest& request) const;
			UpdateWorkbenchEventResultOutcome updateWorkbenchEventResult(const Model::UpdateWorkbenchEventResultRequest &request)const;
			void updateWorkbenchEventResultAsync(const Model::UpdateWorkbenchEventResultRequest& request, const UpdateWorkbenchEventResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWorkbenchEventResultOutcomeCallable updateWorkbenchEventResultCallable(const Model::UpdateWorkbenchEventResultRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_
