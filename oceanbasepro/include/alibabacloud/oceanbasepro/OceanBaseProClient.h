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

#ifndef ALIBABACLOUD_OCEANBASEPRO_OCEANBASEPROCLIENT_H_
#define ALIBABACLOUD_OCEANBASEPRO_OCEANBASEPROCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OceanBaseProExport.h"
#include "model/BatchKillProcessListRequest.h"
#include "model/BatchKillProcessListResult.h"
#include "model/BatchKillSessionListRequest.h"
#include "model/BatchKillSessionListResult.h"
#include "model/CancelProjectModifyRecordRequest.h"
#include "model/CancelProjectModifyRecordResult.h"
#include "model/CreateBackupSetDownloadLinkRequest.h"
#include "model/CreateBackupSetDownloadLinkResult.h"
#include "model/CreateDatabaseRequest.h"
#include "model/CreateDatabaseResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateLabelRequest.h"
#include "model/CreateLabelResult.h"
#include "model/CreateMySqlDataSourceRequest.h"
#include "model/CreateMySqlDataSourceResult.h"
#include "model/CreateOasOutlineTaskRequest.h"
#include "model/CreateOasOutlineTaskResult.h"
#include "model/CreateOceanBaseDataSourceRequest.h"
#include "model/CreateOceanBaseDataSourceResult.h"
#include "model/CreateOmsMysqlDataSourceRequest.h"
#include "model/CreateOmsMysqlDataSourceResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/CreateProjectModifyRecordsRequest.h"
#include "model/CreateProjectModifyRecordsResult.h"
#include "model/CreateRdsPostgreSQLDataSourceRequest.h"
#include "model/CreateRdsPostgreSQLDataSourceResult.h"
#include "model/CreateSecurityIpGroupRequest.h"
#include "model/CreateSecurityIpGroupResult.h"
#include "model/CreateTagRequest.h"
#include "model/CreateTagResult.h"
#include "model/CreateTagValueRequest.h"
#include "model/CreateTagValueResult.h"
#include "model/CreateTenantRequest.h"
#include "model/CreateTenantResult.h"
#include "model/CreateTenantReadOnlyConnectionRequest.h"
#include "model/CreateTenantReadOnlyConnectionResult.h"
#include "model/CreateTenantSecurityIpGroupRequest.h"
#include "model/CreateTenantSecurityIpGroupResult.h"
#include "model/CreateTenantUserRequest.h"
#include "model/CreateTenantUserResult.h"
#include "model/DeleteDataSourceRequest.h"
#include "model/DeleteDataSourceResult.h"
#include "model/DeleteDatabasesRequest.h"
#include "model/DeleteDatabasesResult.h"
#include "model/DeleteInstancesRequest.h"
#include "model/DeleteInstancesResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/DeleteSecurityIpGroupRequest.h"
#include "model/DeleteSecurityIpGroupResult.h"
#include "model/DeleteTagRequest.h"
#include "model/DeleteTagResult.h"
#include "model/DeleteTagValueRequest.h"
#include "model/DeleteTagValueResult.h"
#include "model/DeleteTenantSecurityIpGroupRequest.h"
#include "model/DeleteTenantSecurityIpGroupResult.h"
#include "model/DeleteTenantUsersRequest.h"
#include "model/DeleteTenantUsersResult.h"
#include "model/DeleteTenantsRequest.h"
#include "model/DeleteTenantsResult.h"
#include "model/DescribeAnomalySQLListRequest.h"
#include "model/DescribeAnomalySQLListResult.h"
#include "model/DescribeAvailableCpuResourceRequest.h"
#include "model/DescribeAvailableCpuResourceResult.h"
#include "model/DescribeAvailableMemResourceRequest.h"
#include "model/DescribeAvailableMemResourceResult.h"
#include "model/DescribeAvailableSpecRequest.h"
#include "model/DescribeAvailableSpecResult.h"
#include "model/DescribeAvailableZoneRequest.h"
#include "model/DescribeAvailableZoneResult.h"
#include "model/DescribeBackupEncryptedStringRequest.h"
#include "model/DescribeBackupEncryptedStringResult.h"
#include "model/DescribeBackupSetDownloadLinkRequest.h"
#include "model/DescribeBackupSetDownloadLinkResult.h"
#include "model/DescribeCharsetRequest.h"
#include "model/DescribeCharsetResult.h"
#include "model/DescribeDataBackupSetRequest.h"
#include "model/DescribeDataBackupSetResult.h"
#include "model/DescribeDatabasesRequest.h"
#include "model/DescribeDatabasesResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeInstanceAvailableZonesRequest.h"
#include "model/DescribeInstanceAvailableZonesResult.h"
#include "model/DescribeInstanceCreatableZoneRequest.h"
#include "model/DescribeInstanceCreatableZoneResult.h"
#include "model/DescribeInstanceSSLRequest.h"
#include "model/DescribeInstanceSSLResult.h"
#include "model/DescribeInstanceSecurityConfigsRequest.h"
#include "model/DescribeInstanceSecurityConfigsResult.h"
#include "model/DescribeInstanceSummaryRequest.h"
#include "model/DescribeInstanceSummaryResult.h"
#include "model/DescribeInstanceTagsRequest.h"
#include "model/DescribeInstanceTagsResult.h"
#include "model/DescribeInstanceTenantModesRequest.h"
#include "model/DescribeInstanceTenantModesResult.h"
#include "model/DescribeInstanceTopologyRequest.h"
#include "model/DescribeInstanceTopologyResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeMetricsDataRequest.h"
#include "model/DescribeMetricsDataResult.h"
#include "model/DescribeNodeMetricsRequest.h"
#include "model/DescribeNodeMetricsResult.h"
#include "model/DescribeOasAnomalySQLListRequest.h"
#include "model/DescribeOasAnomalySQLListResult.h"
#include "model/DescribeOasSQLDetailsRequest.h"
#include "model/DescribeOasSQLDetailsResult.h"
#include "model/DescribeOasSQLHistoryListRequest.h"
#include "model/DescribeOasSQLHistoryListResult.h"
#include "model/DescribeOasSQLPlansRequest.h"
#include "model/DescribeOasSQLPlansResult.h"
#include "model/DescribeOasSlowSQLListRequest.h"
#include "model/DescribeOasSlowSQLListResult.h"
#include "model/DescribeOasTopSQLListRequest.h"
#include "model/DescribeOasTopSQLListResult.h"
#include "model/DescribeOutlineBindingRequest.h"
#include "model/DescribeOutlineBindingResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/DescribeParametersHistoryRequest.h"
#include "model/DescribeParametersHistoryResult.h"
#include "model/DescribeProcessStatsCompositionRequest.h"
#include "model/DescribeProcessStatsCompositionResult.h"
#include "model/DescribeProjectRequest.h"
#include "model/DescribeProjectResult.h"
#include "model/DescribeProjectComponentsRequest.h"
#include "model/DescribeProjectComponentsResult.h"
#include "model/DescribeProjectProgressRequest.h"
#include "model/DescribeProjectProgressResult.h"
#include "model/DescribeProjectStepMetricRequest.h"
#include "model/DescribeProjectStepMetricResult.h"
#include "model/DescribeProjectStepsRequest.h"
#include "model/DescribeProjectStepsResult.h"
#include "model/DescribeProxyServiceRequest.h"
#include "model/DescribeProxyServiceResult.h"
#include "model/DescribeRecommendIndexRequest.h"
#include "model/DescribeRecommendIndexResult.h"
#include "model/DescribeRestorableTenantsRequest.h"
#include "model/DescribeRestorableTenantsResult.h"
#include "model/DescribeSQLDetailsRequest.h"
#include "model/DescribeSQLDetailsResult.h"
#include "model/DescribeSQLHistoryListRequest.h"
#include "model/DescribeSQLHistoryListResult.h"
#include "model/DescribeSQLPlansRequest.h"
#include "model/DescribeSQLPlansResult.h"
#include "model/DescribeSQLSamplesRequest.h"
#include "model/DescribeSQLSamplesResult.h"
#include "model/DescribeSQLTuningAdvicesRequest.h"
#include "model/DescribeSQLTuningAdvicesResult.h"
#include "model/DescribeSampleSqlRawTextsRequest.h"
#include "model/DescribeSampleSqlRawTextsResult.h"
#include "model/DescribeSecurityIpGroupsRequest.h"
#include "model/DescribeSecurityIpGroupsResult.h"
#include "model/DescribeSessionListRequest.h"
#include "model/DescribeSessionListResult.h"
#include "model/DescribeSlowSQLHistoryListRequest.h"
#include "model/DescribeSlowSQLHistoryListResult.h"
#include "model/DescribeSlowSQLListRequest.h"
#include "model/DescribeSlowSQLListResult.h"
#include "model/DescribeSqlAuditStatRequest.h"
#include "model/DescribeSqlAuditStatResult.h"
#include "model/DescribeStandbyCreateModeRequest.h"
#include "model/DescribeStandbyCreateModeResult.h"
#include "model/DescribeTagValuesRequest.h"
#include "model/DescribeTagValuesResult.h"
#include "model/DescribeTenantRequest.h"
#include "model/DescribeTenantResult.h"
#include "model/DescribeTenantEncryptionRequest.h"
#include "model/DescribeTenantEncryptionResult.h"
#include "model/DescribeTenantMetricsRequest.h"
#include "model/DescribeTenantMetricsResult.h"
#include "model/DescribeTenantReadableScnRequest.h"
#include "model/DescribeTenantReadableScnResult.h"
#include "model/DescribeTenantSecurityConfigsRequest.h"
#include "model/DescribeTenantSecurityConfigsResult.h"
#include "model/DescribeTenantSecurityIpGroupsRequest.h"
#include "model/DescribeTenantSecurityIpGroupsResult.h"
#include "model/DescribeTenantTagsRequest.h"
#include "model/DescribeTenantTagsResult.h"
#include "model/DescribeTenantUserRolesRequest.h"
#include "model/DescribeTenantUserRolesResult.h"
#include "model/DescribeTenantUsersRequest.h"
#include "model/DescribeTenantUsersResult.h"
#include "model/DescribeTenantZonesReadRequest.h"
#include "model/DescribeTenantZonesReadResult.h"
#include "model/DescribeTenantsRequest.h"
#include "model/DescribeTenantsResult.h"
#include "model/DescribeTimeZonesRequest.h"
#include "model/DescribeTimeZonesResult.h"
#include "model/DescribeTopSQLListRequest.h"
#include "model/DescribeTopSQLListResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/GetUploadOssUrlRequest.h"
#include "model/GetUploadOssUrlResult.h"
#include "model/KillProcessListRequest.h"
#include "model/KillProcessListResult.h"
#include "model/ListAllLabelsRequest.h"
#include "model/ListAllLabelsResult.h"
#include "model/ListDataSourceRequest.h"
#include "model/ListDataSourceResult.h"
#include "model/ListProjectFullVerifyResultRequest.h"
#include "model/ListProjectFullVerifyResultResult.h"
#include "model/ListProjectModifyRecordsRequest.h"
#include "model/ListProjectModifyRecordsResult.h"
#include "model/ListProjectsRequest.h"
#include "model/ListProjectsResult.h"
#include "model/ListWorkerInstancesRequest.h"
#include "model/ListWorkerInstancesResult.h"
#include "model/ModifyDatabaseDescriptionRequest.h"
#include "model/ModifyDatabaseDescriptionResult.h"
#include "model/ModifyDatabaseUserRolesRequest.h"
#include "model/ModifyDatabaseUserRolesResult.h"
#include "model/ModifyInstanceNameRequest.h"
#include "model/ModifyInstanceNameResult.h"
#include "model/ModifyInstanceNodeNumRequest.h"
#include "model/ModifyInstanceNodeNumResult.h"
#include "model/ModifyInstanceSSLRequest.h"
#include "model/ModifyInstanceSSLResult.h"
#include "model/ModifyInstanceSpecRequest.h"
#include "model/ModifyInstanceSpecResult.h"
#include "model/ModifyInstanceTagsRequest.h"
#include "model/ModifyInstanceTagsResult.h"
#include "model/ModifyInstanceTemporaryCapacityRequest.h"
#include "model/ModifyInstanceTemporaryCapacityResult.h"
#include "model/ModifyParametersRequest.h"
#include "model/ModifyParametersResult.h"
#include "model/ModifySecurityIpsRequest.h"
#include "model/ModifySecurityIpsResult.h"
#include "model/ModifyTagNameRequest.h"
#include "model/ModifyTagNameResult.h"
#include "model/ModifyTagValueNameRequest.h"
#include "model/ModifyTagValueNameResult.h"
#include "model/ModifyTenantEncryptionRequest.h"
#include "model/ModifyTenantEncryptionResult.h"
#include "model/ModifyTenantPrimaryZoneRequest.h"
#include "model/ModifyTenantPrimaryZoneResult.h"
#include "model/ModifyTenantResourceRequest.h"
#include "model/ModifyTenantResourceResult.h"
#include "model/ModifyTenantSecurityIpGroupRequest.h"
#include "model/ModifyTenantSecurityIpGroupResult.h"
#include "model/ModifyTenantTagsRequest.h"
#include "model/ModifyTenantTagsResult.h"
#include "model/ModifyTenantUserDescriptionRequest.h"
#include "model/ModifyTenantUserDescriptionResult.h"
#include "model/ModifyTenantUserPasswordRequest.h"
#include "model/ModifyTenantUserPasswordResult.h"
#include "model/ModifyTenantUserRolesRequest.h"
#include "model/ModifyTenantUserRolesResult.h"
#include "model/ModifyTenantUserStatusRequest.h"
#include "model/ModifyTenantUserStatusResult.h"
#include "model/ReleaseProjectRequest.h"
#include "model/ReleaseProjectResult.h"
#include "model/ReleaseWorkerInstanceRequest.h"
#include "model/ReleaseWorkerInstanceResult.h"
#include "model/RemoveStandbyInstanceRequest.h"
#include "model/RemoveStandbyInstanceResult.h"
#include "model/ResumeProjectRequest.h"
#include "model/ResumeProjectResult.h"
#include "model/RetryProjectModifyRecordsRequest.h"
#include "model/RetryProjectModifyRecordsResult.h"
#include "model/StartProjectRequest.h"
#include "model/StartProjectResult.h"
#include "model/StartProjectsByLabelRequest.h"
#include "model/StartProjectsByLabelResult.h"
#include "model/StopProjectRequest.h"
#include "model/StopProjectResult.h"
#include "model/StopProjectModifyRecordsRequest.h"
#include "model/StopProjectModifyRecordsResult.h"
#include "model/StopProjectsByLabelRequest.h"
#include "model/StopProjectsByLabelResult.h"
#include "model/SwitchoverInstanceRequest.h"
#include "model/SwitchoverInstanceResult.h"
#include "model/UpdateProjectConfigRequest.h"
#include "model/UpdateProjectConfigResult.h"


namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		class ALIBABACLOUD_OCEANBASEPRO_EXPORT OceanBaseProClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchKillProcessListResult> BatchKillProcessListOutcome;
			typedef std::future<BatchKillProcessListOutcome> BatchKillProcessListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::BatchKillProcessListRequest&, const BatchKillProcessListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchKillProcessListAsyncHandler;
			typedef Outcome<Error, Model::BatchKillSessionListResult> BatchKillSessionListOutcome;
			typedef std::future<BatchKillSessionListOutcome> BatchKillSessionListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::BatchKillSessionListRequest&, const BatchKillSessionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchKillSessionListAsyncHandler;
			typedef Outcome<Error, Model::CancelProjectModifyRecordResult> CancelProjectModifyRecordOutcome;
			typedef std::future<CancelProjectModifyRecordOutcome> CancelProjectModifyRecordOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CancelProjectModifyRecordRequest&, const CancelProjectModifyRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelProjectModifyRecordAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupSetDownloadLinkResult> CreateBackupSetDownloadLinkOutcome;
			typedef std::future<CreateBackupSetDownloadLinkOutcome> CreateBackupSetDownloadLinkOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateBackupSetDownloadLinkRequest&, const CreateBackupSetDownloadLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupSetDownloadLinkAsyncHandler;
			typedef Outcome<Error, Model::CreateDatabaseResult> CreateDatabaseOutcome;
			typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateDatabaseRequest&, const CreateDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateLabelResult> CreateLabelOutcome;
			typedef std::future<CreateLabelOutcome> CreateLabelOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateLabelRequest&, const CreateLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLabelAsyncHandler;
			typedef Outcome<Error, Model::CreateMySqlDataSourceResult> CreateMySqlDataSourceOutcome;
			typedef std::future<CreateMySqlDataSourceOutcome> CreateMySqlDataSourceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateMySqlDataSourceRequest&, const CreateMySqlDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMySqlDataSourceAsyncHandler;
			typedef Outcome<Error, Model::CreateOasOutlineTaskResult> CreateOasOutlineTaskOutcome;
			typedef std::future<CreateOasOutlineTaskOutcome> CreateOasOutlineTaskOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateOasOutlineTaskRequest&, const CreateOasOutlineTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOasOutlineTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateOceanBaseDataSourceResult> CreateOceanBaseDataSourceOutcome;
			typedef std::future<CreateOceanBaseDataSourceOutcome> CreateOceanBaseDataSourceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateOceanBaseDataSourceRequest&, const CreateOceanBaseDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOceanBaseDataSourceAsyncHandler;
			typedef Outcome<Error, Model::CreateOmsMysqlDataSourceResult> CreateOmsMysqlDataSourceOutcome;
			typedef std::future<CreateOmsMysqlDataSourceOutcome> CreateOmsMysqlDataSourceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateOmsMysqlDataSourceRequest&, const CreateOmsMysqlDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOmsMysqlDataSourceAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectModifyRecordsResult> CreateProjectModifyRecordsOutcome;
			typedef std::future<CreateProjectModifyRecordsOutcome> CreateProjectModifyRecordsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateProjectModifyRecordsRequest&, const CreateProjectModifyRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectModifyRecordsAsyncHandler;
			typedef Outcome<Error, Model::CreateRdsPostgreSQLDataSourceResult> CreateRdsPostgreSQLDataSourceOutcome;
			typedef std::future<CreateRdsPostgreSQLDataSourceOutcome> CreateRdsPostgreSQLDataSourceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateRdsPostgreSQLDataSourceRequest&, const CreateRdsPostgreSQLDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRdsPostgreSQLDataSourceAsyncHandler;
			typedef Outcome<Error, Model::CreateSecurityIpGroupResult> CreateSecurityIpGroupOutcome;
			typedef std::future<CreateSecurityIpGroupOutcome> CreateSecurityIpGroupOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateSecurityIpGroupRequest&, const CreateSecurityIpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityIpGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateTagResult> CreateTagOutcome;
			typedef std::future<CreateTagOutcome> CreateTagOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateTagRequest&, const CreateTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagAsyncHandler;
			typedef Outcome<Error, Model::CreateTagValueResult> CreateTagValueOutcome;
			typedef std::future<CreateTagValueOutcome> CreateTagValueOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateTagValueRequest&, const CreateTagValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagValueAsyncHandler;
			typedef Outcome<Error, Model::CreateTenantResult> CreateTenantOutcome;
			typedef std::future<CreateTenantOutcome> CreateTenantOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateTenantRequest&, const CreateTenantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTenantAsyncHandler;
			typedef Outcome<Error, Model::CreateTenantReadOnlyConnectionResult> CreateTenantReadOnlyConnectionOutcome;
			typedef std::future<CreateTenantReadOnlyConnectionOutcome> CreateTenantReadOnlyConnectionOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateTenantReadOnlyConnectionRequest&, const CreateTenantReadOnlyConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTenantReadOnlyConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateTenantSecurityIpGroupResult> CreateTenantSecurityIpGroupOutcome;
			typedef std::future<CreateTenantSecurityIpGroupOutcome> CreateTenantSecurityIpGroupOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateTenantSecurityIpGroupRequest&, const CreateTenantSecurityIpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTenantSecurityIpGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateTenantUserResult> CreateTenantUserOutcome;
			typedef std::future<CreateTenantUserOutcome> CreateTenantUserOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::CreateTenantUserRequest&, const CreateTenantUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTenantUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataSourceResult> DeleteDataSourceOutcome;
			typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DeleteDataSourceRequest&, const DeleteDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabasesResult> DeleteDatabasesOutcome;
			typedef std::future<DeleteDatabasesOutcome> DeleteDatabasesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DeleteDatabasesRequest&, const DeleteDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabasesAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstancesResult> DeleteInstancesOutcome;
			typedef std::future<DeleteInstancesOutcome> DeleteInstancesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DeleteInstancesRequest&, const DeleteInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstancesAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecurityIpGroupResult> DeleteSecurityIpGroupOutcome;
			typedef std::future<DeleteSecurityIpGroupOutcome> DeleteSecurityIpGroupOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DeleteSecurityIpGroupRequest&, const DeleteSecurityIpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityIpGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagResult> DeleteTagOutcome;
			typedef std::future<DeleteTagOutcome> DeleteTagOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DeleteTagRequest&, const DeleteTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagValueResult> DeleteTagValueOutcome;
			typedef std::future<DeleteTagValueOutcome> DeleteTagValueOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DeleteTagValueRequest&, const DeleteTagValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagValueAsyncHandler;
			typedef Outcome<Error, Model::DeleteTenantSecurityIpGroupResult> DeleteTenantSecurityIpGroupOutcome;
			typedef std::future<DeleteTenantSecurityIpGroupOutcome> DeleteTenantSecurityIpGroupOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DeleteTenantSecurityIpGroupRequest&, const DeleteTenantSecurityIpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTenantSecurityIpGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteTenantUsersResult> DeleteTenantUsersOutcome;
			typedef std::future<DeleteTenantUsersOutcome> DeleteTenantUsersOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DeleteTenantUsersRequest&, const DeleteTenantUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTenantUsersAsyncHandler;
			typedef Outcome<Error, Model::DeleteTenantsResult> DeleteTenantsOutcome;
			typedef std::future<DeleteTenantsOutcome> DeleteTenantsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DeleteTenantsRequest&, const DeleteTenantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTenantsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnomalySQLListResult> DescribeAnomalySQLListOutcome;
			typedef std::future<DescribeAnomalySQLListOutcome> DescribeAnomalySQLListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeAnomalySQLListRequest&, const DescribeAnomalySQLListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnomalySQLListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableCpuResourceResult> DescribeAvailableCpuResourceOutcome;
			typedef std::future<DescribeAvailableCpuResourceOutcome> DescribeAvailableCpuResourceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeAvailableCpuResourceRequest&, const DescribeAvailableCpuResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableCpuResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableMemResourceResult> DescribeAvailableMemResourceOutcome;
			typedef std::future<DescribeAvailableMemResourceOutcome> DescribeAvailableMemResourceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeAvailableMemResourceRequest&, const DescribeAvailableMemResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableMemResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableSpecResult> DescribeAvailableSpecOutcome;
			typedef std::future<DescribeAvailableSpecOutcome> DescribeAvailableSpecOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeAvailableSpecRequest&, const DescribeAvailableSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableSpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableZoneResult> DescribeAvailableZoneOutcome;
			typedef std::future<DescribeAvailableZoneOutcome> DescribeAvailableZoneOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeAvailableZoneRequest&, const DescribeAvailableZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableZoneAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupEncryptedStringResult> DescribeBackupEncryptedStringOutcome;
			typedef std::future<DescribeBackupEncryptedStringOutcome> DescribeBackupEncryptedStringOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeBackupEncryptedStringRequest&, const DescribeBackupEncryptedStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupEncryptedStringAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupSetDownloadLinkResult> DescribeBackupSetDownloadLinkOutcome;
			typedef std::future<DescribeBackupSetDownloadLinkOutcome> DescribeBackupSetDownloadLinkOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeBackupSetDownloadLinkRequest&, const DescribeBackupSetDownloadLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSetDownloadLinkAsyncHandler;
			typedef Outcome<Error, Model::DescribeCharsetResult> DescribeCharsetOutcome;
			typedef std::future<DescribeCharsetOutcome> DescribeCharsetOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeCharsetRequest&, const DescribeCharsetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCharsetAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataBackupSetResult> DescribeDataBackupSetOutcome;
			typedef std::future<DescribeDataBackupSetOutcome> DescribeDataBackupSetOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeDataBackupSetRequest&, const DescribeDataBackupSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataBackupSetAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabasesResult> DescribeDatabasesOutcome;
			typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeDatabasesRequest&, const DescribeDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAvailableZonesResult> DescribeInstanceAvailableZonesOutcome;
			typedef std::future<DescribeInstanceAvailableZonesOutcome> DescribeInstanceAvailableZonesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeInstanceAvailableZonesRequest&, const DescribeInstanceAvailableZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAvailableZonesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceCreatableZoneResult> DescribeInstanceCreatableZoneOutcome;
			typedef std::future<DescribeInstanceCreatableZoneOutcome> DescribeInstanceCreatableZoneOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeInstanceCreatableZoneRequest&, const DescribeInstanceCreatableZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceCreatableZoneAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSSLResult> DescribeInstanceSSLOutcome;
			typedef std::future<DescribeInstanceSSLOutcome> DescribeInstanceSSLOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeInstanceSSLRequest&, const DescribeInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSecurityConfigsResult> DescribeInstanceSecurityConfigsOutcome;
			typedef std::future<DescribeInstanceSecurityConfigsOutcome> DescribeInstanceSecurityConfigsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeInstanceSecurityConfigsRequest&, const DescribeInstanceSecurityConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSecurityConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSummaryResult> DescribeInstanceSummaryOutcome;
			typedef std::future<DescribeInstanceSummaryOutcome> DescribeInstanceSummaryOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeInstanceSummaryRequest&, const DescribeInstanceSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTagsResult> DescribeInstanceTagsOutcome;
			typedef std::future<DescribeInstanceTagsOutcome> DescribeInstanceTagsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeInstanceTagsRequest&, const DescribeInstanceTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTenantModesResult> DescribeInstanceTenantModesOutcome;
			typedef std::future<DescribeInstanceTenantModesOutcome> DescribeInstanceTenantModesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeInstanceTenantModesRequest&, const DescribeInstanceTenantModesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTenantModesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTopologyResult> DescribeInstanceTopologyOutcome;
			typedef std::future<DescribeInstanceTopologyOutcome> DescribeInstanceTopologyOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeInstanceTopologyRequest&, const DescribeInstanceTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTopologyAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricsDataResult> DescribeMetricsDataOutcome;
			typedef std::future<DescribeMetricsDataOutcome> DescribeMetricsDataOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeMetricsDataRequest&, const DescribeMetricsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeNodeMetricsResult> DescribeNodeMetricsOutcome;
			typedef std::future<DescribeNodeMetricsOutcome> DescribeNodeMetricsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeNodeMetricsRequest&, const DescribeNodeMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeMetricsAsyncHandler;
			typedef Outcome<Error, Model::DescribeOasAnomalySQLListResult> DescribeOasAnomalySQLListOutcome;
			typedef std::future<DescribeOasAnomalySQLListOutcome> DescribeOasAnomalySQLListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeOasAnomalySQLListRequest&, const DescribeOasAnomalySQLListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOasAnomalySQLListAsyncHandler;
			typedef Outcome<Error, Model::DescribeOasSQLDetailsResult> DescribeOasSQLDetailsOutcome;
			typedef std::future<DescribeOasSQLDetailsOutcome> DescribeOasSQLDetailsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeOasSQLDetailsRequest&, const DescribeOasSQLDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOasSQLDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeOasSQLHistoryListResult> DescribeOasSQLHistoryListOutcome;
			typedef std::future<DescribeOasSQLHistoryListOutcome> DescribeOasSQLHistoryListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeOasSQLHistoryListRequest&, const DescribeOasSQLHistoryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOasSQLHistoryListAsyncHandler;
			typedef Outcome<Error, Model::DescribeOasSQLPlansResult> DescribeOasSQLPlansOutcome;
			typedef std::future<DescribeOasSQLPlansOutcome> DescribeOasSQLPlansOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeOasSQLPlansRequest&, const DescribeOasSQLPlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOasSQLPlansAsyncHandler;
			typedef Outcome<Error, Model::DescribeOasSlowSQLListResult> DescribeOasSlowSQLListOutcome;
			typedef std::future<DescribeOasSlowSQLListOutcome> DescribeOasSlowSQLListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeOasSlowSQLListRequest&, const DescribeOasSlowSQLListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOasSlowSQLListAsyncHandler;
			typedef Outcome<Error, Model::DescribeOasTopSQLListResult> DescribeOasTopSQLListOutcome;
			typedef std::future<DescribeOasTopSQLListOutcome> DescribeOasTopSQLListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeOasTopSQLListRequest&, const DescribeOasTopSQLListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOasTopSQLListAsyncHandler;
			typedef Outcome<Error, Model::DescribeOutlineBindingResult> DescribeOutlineBindingOutcome;
			typedef std::future<DescribeOutlineBindingOutcome> DescribeOutlineBindingOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeOutlineBindingRequest&, const DescribeOutlineBindingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOutlineBindingAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersResult> DescribeParametersOutcome;
			typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeParametersRequest&, const DescribeParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersHistoryResult> DescribeParametersHistoryOutcome;
			typedef std::future<DescribeParametersHistoryOutcome> DescribeParametersHistoryOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeParametersHistoryRequest&, const DescribeParametersHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeProcessStatsCompositionResult> DescribeProcessStatsCompositionOutcome;
			typedef std::future<DescribeProcessStatsCompositionOutcome> DescribeProcessStatsCompositionOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeProcessStatsCompositionRequest&, const DescribeProcessStatsCompositionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessStatsCompositionAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectResult> DescribeProjectOutcome;
			typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeProjectRequest&, const DescribeProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectComponentsResult> DescribeProjectComponentsOutcome;
			typedef std::future<DescribeProjectComponentsOutcome> DescribeProjectComponentsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeProjectComponentsRequest&, const DescribeProjectComponentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectComponentsAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectProgressResult> DescribeProjectProgressOutcome;
			typedef std::future<DescribeProjectProgressOutcome> DescribeProjectProgressOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeProjectProgressRequest&, const DescribeProjectProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectProgressAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectStepMetricResult> DescribeProjectStepMetricOutcome;
			typedef std::future<DescribeProjectStepMetricOutcome> DescribeProjectStepMetricOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeProjectStepMetricRequest&, const DescribeProjectStepMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectStepMetricAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectStepsResult> DescribeProjectStepsOutcome;
			typedef std::future<DescribeProjectStepsOutcome> DescribeProjectStepsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeProjectStepsRequest&, const DescribeProjectStepsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectStepsAsyncHandler;
			typedef Outcome<Error, Model::DescribeProxyServiceResult> DescribeProxyServiceOutcome;
			typedef std::future<DescribeProxyServiceOutcome> DescribeProxyServiceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeProxyServiceRequest&, const DescribeProxyServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecommendIndexResult> DescribeRecommendIndexOutcome;
			typedef std::future<DescribeRecommendIndexOutcome> DescribeRecommendIndexOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeRecommendIndexRequest&, const DescribeRecommendIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecommendIndexAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestorableTenantsResult> DescribeRestorableTenantsOutcome;
			typedef std::future<DescribeRestorableTenantsOutcome> DescribeRestorableTenantsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeRestorableTenantsRequest&, const DescribeRestorableTenantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestorableTenantsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLDetailsResult> DescribeSQLDetailsOutcome;
			typedef std::future<DescribeSQLDetailsOutcome> DescribeSQLDetailsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSQLDetailsRequest&, const DescribeSQLDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLHistoryListResult> DescribeSQLHistoryListOutcome;
			typedef std::future<DescribeSQLHistoryListOutcome> DescribeSQLHistoryListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSQLHistoryListRequest&, const DescribeSQLHistoryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLHistoryListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLPlansResult> DescribeSQLPlansOutcome;
			typedef std::future<DescribeSQLPlansOutcome> DescribeSQLPlansOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSQLPlansRequest&, const DescribeSQLPlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLPlansAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLSamplesResult> DescribeSQLSamplesOutcome;
			typedef std::future<DescribeSQLSamplesOutcome> DescribeSQLSamplesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSQLSamplesRequest&, const DescribeSQLSamplesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLSamplesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLTuningAdvicesResult> DescribeSQLTuningAdvicesOutcome;
			typedef std::future<DescribeSQLTuningAdvicesOutcome> DescribeSQLTuningAdvicesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSQLTuningAdvicesRequest&, const DescribeSQLTuningAdvicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLTuningAdvicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSampleSqlRawTextsResult> DescribeSampleSqlRawTextsOutcome;
			typedef std::future<DescribeSampleSqlRawTextsOutcome> DescribeSampleSqlRawTextsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSampleSqlRawTextsRequest&, const DescribeSampleSqlRawTextsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleSqlRawTextsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityIpGroupsResult> DescribeSecurityIpGroupsOutcome;
			typedef std::future<DescribeSecurityIpGroupsOutcome> DescribeSecurityIpGroupsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSecurityIpGroupsRequest&, const DescribeSecurityIpGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIpGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSessionListResult> DescribeSessionListOutcome;
			typedef std::future<DescribeSessionListOutcome> DescribeSessionListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSessionListRequest&, const DescribeSessionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSessionListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowSQLHistoryListResult> DescribeSlowSQLHistoryListOutcome;
			typedef std::future<DescribeSlowSQLHistoryListOutcome> DescribeSlowSQLHistoryListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSlowSQLHistoryListRequest&, const DescribeSlowSQLHistoryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowSQLHistoryListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowSQLListResult> DescribeSlowSQLListOutcome;
			typedef std::future<DescribeSlowSQLListOutcome> DescribeSlowSQLListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSlowSQLListRequest&, const DescribeSlowSQLListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowSQLListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSqlAuditStatResult> DescribeSqlAuditStatOutcome;
			typedef std::future<DescribeSqlAuditStatOutcome> DescribeSqlAuditStatOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeSqlAuditStatRequest&, const DescribeSqlAuditStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSqlAuditStatAsyncHandler;
			typedef Outcome<Error, Model::DescribeStandbyCreateModeResult> DescribeStandbyCreateModeOutcome;
			typedef std::future<DescribeStandbyCreateModeOutcome> DescribeStandbyCreateModeOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeStandbyCreateModeRequest&, const DescribeStandbyCreateModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStandbyCreateModeAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagValuesResult> DescribeTagValuesOutcome;
			typedef std::future<DescribeTagValuesOutcome> DescribeTagValuesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTagValuesRequest&, const DescribeTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagValuesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantResult> DescribeTenantOutcome;
			typedef std::future<DescribeTenantOutcome> DescribeTenantOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantRequest&, const DescribeTenantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantEncryptionResult> DescribeTenantEncryptionOutcome;
			typedef std::future<DescribeTenantEncryptionOutcome> DescribeTenantEncryptionOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantEncryptionRequest&, const DescribeTenantEncryptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantEncryptionAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantMetricsResult> DescribeTenantMetricsOutcome;
			typedef std::future<DescribeTenantMetricsOutcome> DescribeTenantMetricsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantMetricsRequest&, const DescribeTenantMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantMetricsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantReadableScnResult> DescribeTenantReadableScnOutcome;
			typedef std::future<DescribeTenantReadableScnOutcome> DescribeTenantReadableScnOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantReadableScnRequest&, const DescribeTenantReadableScnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantReadableScnAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantSecurityConfigsResult> DescribeTenantSecurityConfigsOutcome;
			typedef std::future<DescribeTenantSecurityConfigsOutcome> DescribeTenantSecurityConfigsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantSecurityConfigsRequest&, const DescribeTenantSecurityConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantSecurityConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantSecurityIpGroupsResult> DescribeTenantSecurityIpGroupsOutcome;
			typedef std::future<DescribeTenantSecurityIpGroupsOutcome> DescribeTenantSecurityIpGroupsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantSecurityIpGroupsRequest&, const DescribeTenantSecurityIpGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantSecurityIpGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantTagsResult> DescribeTenantTagsOutcome;
			typedef std::future<DescribeTenantTagsOutcome> DescribeTenantTagsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantTagsRequest&, const DescribeTenantTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantUserRolesResult> DescribeTenantUserRolesOutcome;
			typedef std::future<DescribeTenantUserRolesOutcome> DescribeTenantUserRolesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantUserRolesRequest&, const DescribeTenantUserRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantUserRolesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantUsersResult> DescribeTenantUsersOutcome;
			typedef std::future<DescribeTenantUsersOutcome> DescribeTenantUsersOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantUsersRequest&, const DescribeTenantUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantZonesReadResult> DescribeTenantZonesReadOutcome;
			typedef std::future<DescribeTenantZonesReadOutcome> DescribeTenantZonesReadOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantZonesReadRequest&, const DescribeTenantZonesReadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantZonesReadAsyncHandler;
			typedef Outcome<Error, Model::DescribeTenantsResult> DescribeTenantsOutcome;
			typedef std::future<DescribeTenantsOutcome> DescribeTenantsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTenantsRequest&, const DescribeTenantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTimeZonesResult> DescribeTimeZonesOutcome;
			typedef std::future<DescribeTimeZonesOutcome> DescribeTimeZonesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTimeZonesRequest&, const DescribeTimeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimeZonesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTopSQLListResult> DescribeTopSQLListOutcome;
			typedef std::future<DescribeTopSQLListOutcome> DescribeTopSQLListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeTopSQLListRequest&, const DescribeTopSQLListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSQLListAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::GetUploadOssUrlResult> GetUploadOssUrlOutcome;
			typedef std::future<GetUploadOssUrlOutcome> GetUploadOssUrlOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::GetUploadOssUrlRequest&, const GetUploadOssUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUploadOssUrlAsyncHandler;
			typedef Outcome<Error, Model::KillProcessListResult> KillProcessListOutcome;
			typedef std::future<KillProcessListOutcome> KillProcessListOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::KillProcessListRequest&, const KillProcessListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillProcessListAsyncHandler;
			typedef Outcome<Error, Model::ListAllLabelsResult> ListAllLabelsOutcome;
			typedef std::future<ListAllLabelsOutcome> ListAllLabelsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ListAllLabelsRequest&, const ListAllLabelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllLabelsAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceResult> ListDataSourceOutcome;
			typedef std::future<ListDataSourceOutcome> ListDataSourceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ListDataSourceRequest&, const ListDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ListProjectFullVerifyResultResult> ListProjectFullVerifyResultOutcome;
			typedef std::future<ListProjectFullVerifyResultOutcome> ListProjectFullVerifyResultOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ListProjectFullVerifyResultRequest&, const ListProjectFullVerifyResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectFullVerifyResultAsyncHandler;
			typedef Outcome<Error, Model::ListProjectModifyRecordsResult> ListProjectModifyRecordsOutcome;
			typedef std::future<ListProjectModifyRecordsOutcome> ListProjectModifyRecordsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ListProjectModifyRecordsRequest&, const ListProjectModifyRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectModifyRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListProjectsResult> ListProjectsOutcome;
			typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ListProjectsRequest&, const ListProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;
			typedef Outcome<Error, Model::ListWorkerInstancesResult> ListWorkerInstancesOutcome;
			typedef std::future<ListWorkerInstancesOutcome> ListWorkerInstancesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ListWorkerInstancesRequest&, const ListWorkerInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkerInstancesAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatabaseDescriptionResult> ModifyDatabaseDescriptionOutcome;
			typedef std::future<ModifyDatabaseDescriptionOutcome> ModifyDatabaseDescriptionOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyDatabaseDescriptionRequest&, const ModifyDatabaseDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatabaseUserRolesResult> ModifyDatabaseUserRolesOutcome;
			typedef std::future<ModifyDatabaseUserRolesOutcome> ModifyDatabaseUserRolesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyDatabaseUserRolesRequest&, const ModifyDatabaseUserRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseUserRolesAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceNameResult> ModifyInstanceNameOutcome;
			typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyInstanceNameRequest&, const ModifyInstanceNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceNodeNumResult> ModifyInstanceNodeNumOutcome;
			typedef std::future<ModifyInstanceNodeNumOutcome> ModifyInstanceNodeNumOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyInstanceNodeNumRequest&, const ModifyInstanceNodeNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNodeNumAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceSSLResult> ModifyInstanceSSLOutcome;
			typedef std::future<ModifyInstanceSSLOutcome> ModifyInstanceSSLOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyInstanceSSLRequest&, const ModifyInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceSpecResult> ModifyInstanceSpecOutcome;
			typedef std::future<ModifyInstanceSpecOutcome> ModifyInstanceSpecOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyInstanceSpecRequest&, const ModifyInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceTagsResult> ModifyInstanceTagsOutcome;
			typedef std::future<ModifyInstanceTagsOutcome> ModifyInstanceTagsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyInstanceTagsRequest&, const ModifyInstanceTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceTagsAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceTemporaryCapacityResult> ModifyInstanceTemporaryCapacityOutcome;
			typedef std::future<ModifyInstanceTemporaryCapacityOutcome> ModifyInstanceTemporaryCapacityOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyInstanceTemporaryCapacityRequest&, const ModifyInstanceTemporaryCapacityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceTemporaryCapacityAsyncHandler;
			typedef Outcome<Error, Model::ModifyParametersResult> ModifyParametersOutcome;
			typedef std::future<ModifyParametersOutcome> ModifyParametersOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyParametersRequest&, const ModifyParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParametersAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIpsResult> ModifySecurityIpsOutcome;
			typedef std::future<ModifySecurityIpsOutcome> ModifySecurityIpsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifySecurityIpsRequest&, const ModifySecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::ModifyTagNameResult> ModifyTagNameOutcome;
			typedef std::future<ModifyTagNameOutcome> ModifyTagNameOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTagNameRequest&, const ModifyTagNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTagNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyTagValueNameResult> ModifyTagValueNameOutcome;
			typedef std::future<ModifyTagValueNameOutcome> ModifyTagValueNameOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTagValueNameRequest&, const ModifyTagValueNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTagValueNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyTenantEncryptionResult> ModifyTenantEncryptionOutcome;
			typedef std::future<ModifyTenantEncryptionOutcome> ModifyTenantEncryptionOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTenantEncryptionRequest&, const ModifyTenantEncryptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTenantEncryptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyTenantPrimaryZoneResult> ModifyTenantPrimaryZoneOutcome;
			typedef std::future<ModifyTenantPrimaryZoneOutcome> ModifyTenantPrimaryZoneOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTenantPrimaryZoneRequest&, const ModifyTenantPrimaryZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTenantPrimaryZoneAsyncHandler;
			typedef Outcome<Error, Model::ModifyTenantResourceResult> ModifyTenantResourceOutcome;
			typedef std::future<ModifyTenantResourceOutcome> ModifyTenantResourceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTenantResourceRequest&, const ModifyTenantResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTenantResourceAsyncHandler;
			typedef Outcome<Error, Model::ModifyTenantSecurityIpGroupResult> ModifyTenantSecurityIpGroupOutcome;
			typedef std::future<ModifyTenantSecurityIpGroupOutcome> ModifyTenantSecurityIpGroupOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTenantSecurityIpGroupRequest&, const ModifyTenantSecurityIpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTenantSecurityIpGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyTenantTagsResult> ModifyTenantTagsOutcome;
			typedef std::future<ModifyTenantTagsOutcome> ModifyTenantTagsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTenantTagsRequest&, const ModifyTenantTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTenantTagsAsyncHandler;
			typedef Outcome<Error, Model::ModifyTenantUserDescriptionResult> ModifyTenantUserDescriptionOutcome;
			typedef std::future<ModifyTenantUserDescriptionOutcome> ModifyTenantUserDescriptionOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTenantUserDescriptionRequest&, const ModifyTenantUserDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTenantUserDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyTenantUserPasswordResult> ModifyTenantUserPasswordOutcome;
			typedef std::future<ModifyTenantUserPasswordOutcome> ModifyTenantUserPasswordOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTenantUserPasswordRequest&, const ModifyTenantUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTenantUserPasswordAsyncHandler;
			typedef Outcome<Error, Model::ModifyTenantUserRolesResult> ModifyTenantUserRolesOutcome;
			typedef std::future<ModifyTenantUserRolesOutcome> ModifyTenantUserRolesOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTenantUserRolesRequest&, const ModifyTenantUserRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTenantUserRolesAsyncHandler;
			typedef Outcome<Error, Model::ModifyTenantUserStatusResult> ModifyTenantUserStatusOutcome;
			typedef std::future<ModifyTenantUserStatusOutcome> ModifyTenantUserStatusOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ModifyTenantUserStatusRequest&, const ModifyTenantUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTenantUserStatusAsyncHandler;
			typedef Outcome<Error, Model::ReleaseProjectResult> ReleaseProjectOutcome;
			typedef std::future<ReleaseProjectOutcome> ReleaseProjectOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ReleaseProjectRequest&, const ReleaseProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseProjectAsyncHandler;
			typedef Outcome<Error, Model::ReleaseWorkerInstanceResult> ReleaseWorkerInstanceOutcome;
			typedef std::future<ReleaseWorkerInstanceOutcome> ReleaseWorkerInstanceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ReleaseWorkerInstanceRequest&, const ReleaseWorkerInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseWorkerInstanceAsyncHandler;
			typedef Outcome<Error, Model::RemoveStandbyInstanceResult> RemoveStandbyInstanceOutcome;
			typedef std::future<RemoveStandbyInstanceOutcome> RemoveStandbyInstanceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::RemoveStandbyInstanceRequest&, const RemoveStandbyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveStandbyInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResumeProjectResult> ResumeProjectOutcome;
			typedef std::future<ResumeProjectOutcome> ResumeProjectOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::ResumeProjectRequest&, const ResumeProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeProjectAsyncHandler;
			typedef Outcome<Error, Model::RetryProjectModifyRecordsResult> RetryProjectModifyRecordsOutcome;
			typedef std::future<RetryProjectModifyRecordsOutcome> RetryProjectModifyRecordsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::RetryProjectModifyRecordsRequest&, const RetryProjectModifyRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryProjectModifyRecordsAsyncHandler;
			typedef Outcome<Error, Model::StartProjectResult> StartProjectOutcome;
			typedef std::future<StartProjectOutcome> StartProjectOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::StartProjectRequest&, const StartProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartProjectAsyncHandler;
			typedef Outcome<Error, Model::StartProjectsByLabelResult> StartProjectsByLabelOutcome;
			typedef std::future<StartProjectsByLabelOutcome> StartProjectsByLabelOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::StartProjectsByLabelRequest&, const StartProjectsByLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartProjectsByLabelAsyncHandler;
			typedef Outcome<Error, Model::StopProjectResult> StopProjectOutcome;
			typedef std::future<StopProjectOutcome> StopProjectOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::StopProjectRequest&, const StopProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopProjectAsyncHandler;
			typedef Outcome<Error, Model::StopProjectModifyRecordsResult> StopProjectModifyRecordsOutcome;
			typedef std::future<StopProjectModifyRecordsOutcome> StopProjectModifyRecordsOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::StopProjectModifyRecordsRequest&, const StopProjectModifyRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopProjectModifyRecordsAsyncHandler;
			typedef Outcome<Error, Model::StopProjectsByLabelResult> StopProjectsByLabelOutcome;
			typedef std::future<StopProjectsByLabelOutcome> StopProjectsByLabelOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::StopProjectsByLabelRequest&, const StopProjectsByLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopProjectsByLabelAsyncHandler;
			typedef Outcome<Error, Model::SwitchoverInstanceResult> SwitchoverInstanceOutcome;
			typedef std::future<SwitchoverInstanceOutcome> SwitchoverInstanceOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::SwitchoverInstanceRequest&, const SwitchoverInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchoverInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectConfigResult> UpdateProjectConfigOutcome;
			typedef std::future<UpdateProjectConfigOutcome> UpdateProjectConfigOutcomeCallable;
			typedef std::function<void(const OceanBaseProClient*, const Model::UpdateProjectConfigRequest&, const UpdateProjectConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectConfigAsyncHandler;

			OceanBaseProClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OceanBaseProClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OceanBaseProClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OceanBaseProClient();
			BatchKillProcessListOutcome batchKillProcessList(const Model::BatchKillProcessListRequest &request)const;
			void batchKillProcessListAsync(const Model::BatchKillProcessListRequest& request, const BatchKillProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchKillProcessListOutcomeCallable batchKillProcessListCallable(const Model::BatchKillProcessListRequest& request) const;
			BatchKillSessionListOutcome batchKillSessionList(const Model::BatchKillSessionListRequest &request)const;
			void batchKillSessionListAsync(const Model::BatchKillSessionListRequest& request, const BatchKillSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchKillSessionListOutcomeCallable batchKillSessionListCallable(const Model::BatchKillSessionListRequest& request) const;
			CancelProjectModifyRecordOutcome cancelProjectModifyRecord(const Model::CancelProjectModifyRecordRequest &request)const;
			void cancelProjectModifyRecordAsync(const Model::CancelProjectModifyRecordRequest& request, const CancelProjectModifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelProjectModifyRecordOutcomeCallable cancelProjectModifyRecordCallable(const Model::CancelProjectModifyRecordRequest& request) const;
			CreateBackupSetDownloadLinkOutcome createBackupSetDownloadLink(const Model::CreateBackupSetDownloadLinkRequest &request)const;
			void createBackupSetDownloadLinkAsync(const Model::CreateBackupSetDownloadLinkRequest& request, const CreateBackupSetDownloadLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupSetDownloadLinkOutcomeCallable createBackupSetDownloadLinkCallable(const Model::CreateBackupSetDownloadLinkRequest& request) const;
			CreateDatabaseOutcome createDatabase(const Model::CreateDatabaseRequest &request)const;
			void createDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatabaseOutcomeCallable createDatabaseCallable(const Model::CreateDatabaseRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateLabelOutcome createLabel(const Model::CreateLabelRequest &request)const;
			void createLabelAsync(const Model::CreateLabelRequest& request, const CreateLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLabelOutcomeCallable createLabelCallable(const Model::CreateLabelRequest& request) const;
			CreateMySqlDataSourceOutcome createMySqlDataSource(const Model::CreateMySqlDataSourceRequest &request)const;
			void createMySqlDataSourceAsync(const Model::CreateMySqlDataSourceRequest& request, const CreateMySqlDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMySqlDataSourceOutcomeCallable createMySqlDataSourceCallable(const Model::CreateMySqlDataSourceRequest& request) const;
			CreateOasOutlineTaskOutcome createOasOutlineTask(const Model::CreateOasOutlineTaskRequest &request)const;
			void createOasOutlineTaskAsync(const Model::CreateOasOutlineTaskRequest& request, const CreateOasOutlineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOasOutlineTaskOutcomeCallable createOasOutlineTaskCallable(const Model::CreateOasOutlineTaskRequest& request) const;
			CreateOceanBaseDataSourceOutcome createOceanBaseDataSource(const Model::CreateOceanBaseDataSourceRequest &request)const;
			void createOceanBaseDataSourceAsync(const Model::CreateOceanBaseDataSourceRequest& request, const CreateOceanBaseDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOceanBaseDataSourceOutcomeCallable createOceanBaseDataSourceCallable(const Model::CreateOceanBaseDataSourceRequest& request) const;
			CreateOmsMysqlDataSourceOutcome createOmsMysqlDataSource(const Model::CreateOmsMysqlDataSourceRequest &request)const;
			void createOmsMysqlDataSourceAsync(const Model::CreateOmsMysqlDataSourceRequest& request, const CreateOmsMysqlDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOmsMysqlDataSourceOutcomeCallable createOmsMysqlDataSourceCallable(const Model::CreateOmsMysqlDataSourceRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			CreateProjectModifyRecordsOutcome createProjectModifyRecords(const Model::CreateProjectModifyRecordsRequest &request)const;
			void createProjectModifyRecordsAsync(const Model::CreateProjectModifyRecordsRequest& request, const CreateProjectModifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectModifyRecordsOutcomeCallable createProjectModifyRecordsCallable(const Model::CreateProjectModifyRecordsRequest& request) const;
			CreateRdsPostgreSQLDataSourceOutcome createRdsPostgreSQLDataSource(const Model::CreateRdsPostgreSQLDataSourceRequest &request)const;
			void createRdsPostgreSQLDataSourceAsync(const Model::CreateRdsPostgreSQLDataSourceRequest& request, const CreateRdsPostgreSQLDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRdsPostgreSQLDataSourceOutcomeCallable createRdsPostgreSQLDataSourceCallable(const Model::CreateRdsPostgreSQLDataSourceRequest& request) const;
			CreateSecurityIpGroupOutcome createSecurityIpGroup(const Model::CreateSecurityIpGroupRequest &request)const;
			void createSecurityIpGroupAsync(const Model::CreateSecurityIpGroupRequest& request, const CreateSecurityIpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecurityIpGroupOutcomeCallable createSecurityIpGroupCallable(const Model::CreateSecurityIpGroupRequest& request) const;
			CreateTagOutcome createTag(const Model::CreateTagRequest &request)const;
			void createTagAsync(const Model::CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagOutcomeCallable createTagCallable(const Model::CreateTagRequest& request) const;
			CreateTagValueOutcome createTagValue(const Model::CreateTagValueRequest &request)const;
			void createTagValueAsync(const Model::CreateTagValueRequest& request, const CreateTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagValueOutcomeCallable createTagValueCallable(const Model::CreateTagValueRequest& request) const;
			CreateTenantOutcome createTenant(const Model::CreateTenantRequest &request)const;
			void createTenantAsync(const Model::CreateTenantRequest& request, const CreateTenantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTenantOutcomeCallable createTenantCallable(const Model::CreateTenantRequest& request) const;
			CreateTenantReadOnlyConnectionOutcome createTenantReadOnlyConnection(const Model::CreateTenantReadOnlyConnectionRequest &request)const;
			void createTenantReadOnlyConnectionAsync(const Model::CreateTenantReadOnlyConnectionRequest& request, const CreateTenantReadOnlyConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTenantReadOnlyConnectionOutcomeCallable createTenantReadOnlyConnectionCallable(const Model::CreateTenantReadOnlyConnectionRequest& request) const;
			CreateTenantSecurityIpGroupOutcome createTenantSecurityIpGroup(const Model::CreateTenantSecurityIpGroupRequest &request)const;
			void createTenantSecurityIpGroupAsync(const Model::CreateTenantSecurityIpGroupRequest& request, const CreateTenantSecurityIpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTenantSecurityIpGroupOutcomeCallable createTenantSecurityIpGroupCallable(const Model::CreateTenantSecurityIpGroupRequest& request) const;
			CreateTenantUserOutcome createTenantUser(const Model::CreateTenantUserRequest &request)const;
			void createTenantUserAsync(const Model::CreateTenantUserRequest& request, const CreateTenantUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTenantUserOutcomeCallable createTenantUserCallable(const Model::CreateTenantUserRequest& request) const;
			DeleteDataSourceOutcome deleteDataSource(const Model::DeleteDataSourceRequest &request)const;
			void deleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataSourceOutcomeCallable deleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;
			DeleteDatabasesOutcome deleteDatabases(const Model::DeleteDatabasesRequest &request)const;
			void deleteDatabasesAsync(const Model::DeleteDatabasesRequest& request, const DeleteDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabasesOutcomeCallable deleteDatabasesCallable(const Model::DeleteDatabasesRequest& request) const;
			DeleteInstancesOutcome deleteInstances(const Model::DeleteInstancesRequest &request)const;
			void deleteInstancesAsync(const Model::DeleteInstancesRequest& request, const DeleteInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstancesOutcomeCallable deleteInstancesCallable(const Model::DeleteInstancesRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			DeleteSecurityIpGroupOutcome deleteSecurityIpGroup(const Model::DeleteSecurityIpGroupRequest &request)const;
			void deleteSecurityIpGroupAsync(const Model::DeleteSecurityIpGroupRequest& request, const DeleteSecurityIpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecurityIpGroupOutcomeCallable deleteSecurityIpGroupCallable(const Model::DeleteSecurityIpGroupRequest& request) const;
			DeleteTagOutcome deleteTag(const Model::DeleteTagRequest &request)const;
			void deleteTagAsync(const Model::DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagOutcomeCallable deleteTagCallable(const Model::DeleteTagRequest& request) const;
			DeleteTagValueOutcome deleteTagValue(const Model::DeleteTagValueRequest &request)const;
			void deleteTagValueAsync(const Model::DeleteTagValueRequest& request, const DeleteTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagValueOutcomeCallable deleteTagValueCallable(const Model::DeleteTagValueRequest& request) const;
			DeleteTenantSecurityIpGroupOutcome deleteTenantSecurityIpGroup(const Model::DeleteTenantSecurityIpGroupRequest &request)const;
			void deleteTenantSecurityIpGroupAsync(const Model::DeleteTenantSecurityIpGroupRequest& request, const DeleteTenantSecurityIpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTenantSecurityIpGroupOutcomeCallable deleteTenantSecurityIpGroupCallable(const Model::DeleteTenantSecurityIpGroupRequest& request) const;
			DeleteTenantUsersOutcome deleteTenantUsers(const Model::DeleteTenantUsersRequest &request)const;
			void deleteTenantUsersAsync(const Model::DeleteTenantUsersRequest& request, const DeleteTenantUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTenantUsersOutcomeCallable deleteTenantUsersCallable(const Model::DeleteTenantUsersRequest& request) const;
			DeleteTenantsOutcome deleteTenants(const Model::DeleteTenantsRequest &request)const;
			void deleteTenantsAsync(const Model::DeleteTenantsRequest& request, const DeleteTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTenantsOutcomeCallable deleteTenantsCallable(const Model::DeleteTenantsRequest& request) const;
			DescribeAnomalySQLListOutcome describeAnomalySQLList(const Model::DescribeAnomalySQLListRequest &request)const;
			void describeAnomalySQLListAsync(const Model::DescribeAnomalySQLListRequest& request, const DescribeAnomalySQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnomalySQLListOutcomeCallable describeAnomalySQLListCallable(const Model::DescribeAnomalySQLListRequest& request) const;
			DescribeAvailableCpuResourceOutcome describeAvailableCpuResource(const Model::DescribeAvailableCpuResourceRequest &request)const;
			void describeAvailableCpuResourceAsync(const Model::DescribeAvailableCpuResourceRequest& request, const DescribeAvailableCpuResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableCpuResourceOutcomeCallable describeAvailableCpuResourceCallable(const Model::DescribeAvailableCpuResourceRequest& request) const;
			DescribeAvailableMemResourceOutcome describeAvailableMemResource(const Model::DescribeAvailableMemResourceRequest &request)const;
			void describeAvailableMemResourceAsync(const Model::DescribeAvailableMemResourceRequest& request, const DescribeAvailableMemResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableMemResourceOutcomeCallable describeAvailableMemResourceCallable(const Model::DescribeAvailableMemResourceRequest& request) const;
			DescribeAvailableSpecOutcome describeAvailableSpec(const Model::DescribeAvailableSpecRequest &request)const;
			void describeAvailableSpecAsync(const Model::DescribeAvailableSpecRequest& request, const DescribeAvailableSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableSpecOutcomeCallable describeAvailableSpecCallable(const Model::DescribeAvailableSpecRequest& request) const;
			DescribeAvailableZoneOutcome describeAvailableZone(const Model::DescribeAvailableZoneRequest &request)const;
			void describeAvailableZoneAsync(const Model::DescribeAvailableZoneRequest& request, const DescribeAvailableZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableZoneOutcomeCallable describeAvailableZoneCallable(const Model::DescribeAvailableZoneRequest& request) const;
			DescribeBackupEncryptedStringOutcome describeBackupEncryptedString(const Model::DescribeBackupEncryptedStringRequest &request)const;
			void describeBackupEncryptedStringAsync(const Model::DescribeBackupEncryptedStringRequest& request, const DescribeBackupEncryptedStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupEncryptedStringOutcomeCallable describeBackupEncryptedStringCallable(const Model::DescribeBackupEncryptedStringRequest& request) const;
			DescribeBackupSetDownloadLinkOutcome describeBackupSetDownloadLink(const Model::DescribeBackupSetDownloadLinkRequest &request)const;
			void describeBackupSetDownloadLinkAsync(const Model::DescribeBackupSetDownloadLinkRequest& request, const DescribeBackupSetDownloadLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupSetDownloadLinkOutcomeCallable describeBackupSetDownloadLinkCallable(const Model::DescribeBackupSetDownloadLinkRequest& request) const;
			DescribeCharsetOutcome describeCharset(const Model::DescribeCharsetRequest &request)const;
			void describeCharsetAsync(const Model::DescribeCharsetRequest& request, const DescribeCharsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCharsetOutcomeCallable describeCharsetCallable(const Model::DescribeCharsetRequest& request) const;
			DescribeDataBackupSetOutcome describeDataBackupSet(const Model::DescribeDataBackupSetRequest &request)const;
			void describeDataBackupSetAsync(const Model::DescribeDataBackupSetRequest& request, const DescribeDataBackupSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataBackupSetOutcomeCallable describeDataBackupSetCallable(const Model::DescribeDataBackupSetRequest& request) const;
			DescribeDatabasesOutcome describeDatabases(const Model::DescribeDatabasesRequest &request)const;
			void describeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabasesOutcomeCallable describeDatabasesCallable(const Model::DescribeDatabasesRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeInstanceAvailableZonesOutcome describeInstanceAvailableZones(const Model::DescribeInstanceAvailableZonesRequest &request)const;
			void describeInstanceAvailableZonesAsync(const Model::DescribeInstanceAvailableZonesRequest& request, const DescribeInstanceAvailableZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAvailableZonesOutcomeCallable describeInstanceAvailableZonesCallable(const Model::DescribeInstanceAvailableZonesRequest& request) const;
			DescribeInstanceCreatableZoneOutcome describeInstanceCreatableZone(const Model::DescribeInstanceCreatableZoneRequest &request)const;
			void describeInstanceCreatableZoneAsync(const Model::DescribeInstanceCreatableZoneRequest& request, const DescribeInstanceCreatableZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceCreatableZoneOutcomeCallable describeInstanceCreatableZoneCallable(const Model::DescribeInstanceCreatableZoneRequest& request) const;
			DescribeInstanceSSLOutcome describeInstanceSSL(const Model::DescribeInstanceSSLRequest &request)const;
			void describeInstanceSSLAsync(const Model::DescribeInstanceSSLRequest& request, const DescribeInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSSLOutcomeCallable describeInstanceSSLCallable(const Model::DescribeInstanceSSLRequest& request) const;
			DescribeInstanceSecurityConfigsOutcome describeInstanceSecurityConfigs(const Model::DescribeInstanceSecurityConfigsRequest &request)const;
			void describeInstanceSecurityConfigsAsync(const Model::DescribeInstanceSecurityConfigsRequest& request, const DescribeInstanceSecurityConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSecurityConfigsOutcomeCallable describeInstanceSecurityConfigsCallable(const Model::DescribeInstanceSecurityConfigsRequest& request) const;
			DescribeInstanceSummaryOutcome describeInstanceSummary(const Model::DescribeInstanceSummaryRequest &request)const;
			void describeInstanceSummaryAsync(const Model::DescribeInstanceSummaryRequest& request, const DescribeInstanceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSummaryOutcomeCallable describeInstanceSummaryCallable(const Model::DescribeInstanceSummaryRequest& request) const;
			DescribeInstanceTagsOutcome describeInstanceTags(const Model::DescribeInstanceTagsRequest &request)const;
			void describeInstanceTagsAsync(const Model::DescribeInstanceTagsRequest& request, const DescribeInstanceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTagsOutcomeCallable describeInstanceTagsCallable(const Model::DescribeInstanceTagsRequest& request) const;
			DescribeInstanceTenantModesOutcome describeInstanceTenantModes(const Model::DescribeInstanceTenantModesRequest &request)const;
			void describeInstanceTenantModesAsync(const Model::DescribeInstanceTenantModesRequest& request, const DescribeInstanceTenantModesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTenantModesOutcomeCallable describeInstanceTenantModesCallable(const Model::DescribeInstanceTenantModesRequest& request) const;
			DescribeInstanceTopologyOutcome describeInstanceTopology(const Model::DescribeInstanceTopologyRequest &request)const;
			void describeInstanceTopologyAsync(const Model::DescribeInstanceTopologyRequest& request, const DescribeInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTopologyOutcomeCallable describeInstanceTopologyCallable(const Model::DescribeInstanceTopologyRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeMetricsDataOutcome describeMetricsData(const Model::DescribeMetricsDataRequest &request)const;
			void describeMetricsDataAsync(const Model::DescribeMetricsDataRequest& request, const DescribeMetricsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricsDataOutcomeCallable describeMetricsDataCallable(const Model::DescribeMetricsDataRequest& request) const;
			DescribeNodeMetricsOutcome describeNodeMetrics(const Model::DescribeNodeMetricsRequest &request)const;
			void describeNodeMetricsAsync(const Model::DescribeNodeMetricsRequest& request, const DescribeNodeMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNodeMetricsOutcomeCallable describeNodeMetricsCallable(const Model::DescribeNodeMetricsRequest& request) const;
			DescribeOasAnomalySQLListOutcome describeOasAnomalySQLList(const Model::DescribeOasAnomalySQLListRequest &request)const;
			void describeOasAnomalySQLListAsync(const Model::DescribeOasAnomalySQLListRequest& request, const DescribeOasAnomalySQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOasAnomalySQLListOutcomeCallable describeOasAnomalySQLListCallable(const Model::DescribeOasAnomalySQLListRequest& request) const;
			DescribeOasSQLDetailsOutcome describeOasSQLDetails(const Model::DescribeOasSQLDetailsRequest &request)const;
			void describeOasSQLDetailsAsync(const Model::DescribeOasSQLDetailsRequest& request, const DescribeOasSQLDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOasSQLDetailsOutcomeCallable describeOasSQLDetailsCallable(const Model::DescribeOasSQLDetailsRequest& request) const;
			DescribeOasSQLHistoryListOutcome describeOasSQLHistoryList(const Model::DescribeOasSQLHistoryListRequest &request)const;
			void describeOasSQLHistoryListAsync(const Model::DescribeOasSQLHistoryListRequest& request, const DescribeOasSQLHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOasSQLHistoryListOutcomeCallable describeOasSQLHistoryListCallable(const Model::DescribeOasSQLHistoryListRequest& request) const;
			DescribeOasSQLPlansOutcome describeOasSQLPlans(const Model::DescribeOasSQLPlansRequest &request)const;
			void describeOasSQLPlansAsync(const Model::DescribeOasSQLPlansRequest& request, const DescribeOasSQLPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOasSQLPlansOutcomeCallable describeOasSQLPlansCallable(const Model::DescribeOasSQLPlansRequest& request) const;
			DescribeOasSlowSQLListOutcome describeOasSlowSQLList(const Model::DescribeOasSlowSQLListRequest &request)const;
			void describeOasSlowSQLListAsync(const Model::DescribeOasSlowSQLListRequest& request, const DescribeOasSlowSQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOasSlowSQLListOutcomeCallable describeOasSlowSQLListCallable(const Model::DescribeOasSlowSQLListRequest& request) const;
			DescribeOasTopSQLListOutcome describeOasTopSQLList(const Model::DescribeOasTopSQLListRequest &request)const;
			void describeOasTopSQLListAsync(const Model::DescribeOasTopSQLListRequest& request, const DescribeOasTopSQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOasTopSQLListOutcomeCallable describeOasTopSQLListCallable(const Model::DescribeOasTopSQLListRequest& request) const;
			DescribeOutlineBindingOutcome describeOutlineBinding(const Model::DescribeOutlineBindingRequest &request)const;
			void describeOutlineBindingAsync(const Model::DescribeOutlineBindingRequest& request, const DescribeOutlineBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOutlineBindingOutcomeCallable describeOutlineBindingCallable(const Model::DescribeOutlineBindingRequest& request) const;
			DescribeParametersOutcome describeParameters(const Model::DescribeParametersRequest &request)const;
			void describeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParametersOutcomeCallable describeParametersCallable(const Model::DescribeParametersRequest& request) const;
			DescribeParametersHistoryOutcome describeParametersHistory(const Model::DescribeParametersHistoryRequest &request)const;
			void describeParametersHistoryAsync(const Model::DescribeParametersHistoryRequest& request, const DescribeParametersHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParametersHistoryOutcomeCallable describeParametersHistoryCallable(const Model::DescribeParametersHistoryRequest& request) const;
			DescribeProcessStatsCompositionOutcome describeProcessStatsComposition(const Model::DescribeProcessStatsCompositionRequest &request)const;
			void describeProcessStatsCompositionAsync(const Model::DescribeProcessStatsCompositionRequest& request, const DescribeProcessStatsCompositionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProcessStatsCompositionOutcomeCallable describeProcessStatsCompositionCallable(const Model::DescribeProcessStatsCompositionRequest& request) const;
			DescribeProjectOutcome describeProject(const Model::DescribeProjectRequest &request)const;
			void describeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectOutcomeCallable describeProjectCallable(const Model::DescribeProjectRequest& request) const;
			DescribeProjectComponentsOutcome describeProjectComponents(const Model::DescribeProjectComponentsRequest &request)const;
			void describeProjectComponentsAsync(const Model::DescribeProjectComponentsRequest& request, const DescribeProjectComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectComponentsOutcomeCallable describeProjectComponentsCallable(const Model::DescribeProjectComponentsRequest& request) const;
			DescribeProjectProgressOutcome describeProjectProgress(const Model::DescribeProjectProgressRequest &request)const;
			void describeProjectProgressAsync(const Model::DescribeProjectProgressRequest& request, const DescribeProjectProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectProgressOutcomeCallable describeProjectProgressCallable(const Model::DescribeProjectProgressRequest& request) const;
			DescribeProjectStepMetricOutcome describeProjectStepMetric(const Model::DescribeProjectStepMetricRequest &request)const;
			void describeProjectStepMetricAsync(const Model::DescribeProjectStepMetricRequest& request, const DescribeProjectStepMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectStepMetricOutcomeCallable describeProjectStepMetricCallable(const Model::DescribeProjectStepMetricRequest& request) const;
			DescribeProjectStepsOutcome describeProjectSteps(const Model::DescribeProjectStepsRequest &request)const;
			void describeProjectStepsAsync(const Model::DescribeProjectStepsRequest& request, const DescribeProjectStepsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectStepsOutcomeCallable describeProjectStepsCallable(const Model::DescribeProjectStepsRequest& request) const;
			DescribeProxyServiceOutcome describeProxyService(const Model::DescribeProxyServiceRequest &request)const;
			void describeProxyServiceAsync(const Model::DescribeProxyServiceRequest& request, const DescribeProxyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProxyServiceOutcomeCallable describeProxyServiceCallable(const Model::DescribeProxyServiceRequest& request) const;
			DescribeRecommendIndexOutcome describeRecommendIndex(const Model::DescribeRecommendIndexRequest &request)const;
			void describeRecommendIndexAsync(const Model::DescribeRecommendIndexRequest& request, const DescribeRecommendIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecommendIndexOutcomeCallable describeRecommendIndexCallable(const Model::DescribeRecommendIndexRequest& request) const;
			DescribeRestorableTenantsOutcome describeRestorableTenants(const Model::DescribeRestorableTenantsRequest &request)const;
			void describeRestorableTenantsAsync(const Model::DescribeRestorableTenantsRequest& request, const DescribeRestorableTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestorableTenantsOutcomeCallable describeRestorableTenantsCallable(const Model::DescribeRestorableTenantsRequest& request) const;
			DescribeSQLDetailsOutcome describeSQLDetails(const Model::DescribeSQLDetailsRequest &request)const;
			void describeSQLDetailsAsync(const Model::DescribeSQLDetailsRequest& request, const DescribeSQLDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLDetailsOutcomeCallable describeSQLDetailsCallable(const Model::DescribeSQLDetailsRequest& request) const;
			DescribeSQLHistoryListOutcome describeSQLHistoryList(const Model::DescribeSQLHistoryListRequest &request)const;
			void describeSQLHistoryListAsync(const Model::DescribeSQLHistoryListRequest& request, const DescribeSQLHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLHistoryListOutcomeCallable describeSQLHistoryListCallable(const Model::DescribeSQLHistoryListRequest& request) const;
			DescribeSQLPlansOutcome describeSQLPlans(const Model::DescribeSQLPlansRequest &request)const;
			void describeSQLPlansAsync(const Model::DescribeSQLPlansRequest& request, const DescribeSQLPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLPlansOutcomeCallable describeSQLPlansCallable(const Model::DescribeSQLPlansRequest& request) const;
			DescribeSQLSamplesOutcome describeSQLSamples(const Model::DescribeSQLSamplesRequest &request)const;
			void describeSQLSamplesAsync(const Model::DescribeSQLSamplesRequest& request, const DescribeSQLSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLSamplesOutcomeCallable describeSQLSamplesCallable(const Model::DescribeSQLSamplesRequest& request) const;
			DescribeSQLTuningAdvicesOutcome describeSQLTuningAdvices(const Model::DescribeSQLTuningAdvicesRequest &request)const;
			void describeSQLTuningAdvicesAsync(const Model::DescribeSQLTuningAdvicesRequest& request, const DescribeSQLTuningAdvicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLTuningAdvicesOutcomeCallable describeSQLTuningAdvicesCallable(const Model::DescribeSQLTuningAdvicesRequest& request) const;
			DescribeSampleSqlRawTextsOutcome describeSampleSqlRawTexts(const Model::DescribeSampleSqlRawTextsRequest &request)const;
			void describeSampleSqlRawTextsAsync(const Model::DescribeSampleSqlRawTextsRequest& request, const DescribeSampleSqlRawTextsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSampleSqlRawTextsOutcomeCallable describeSampleSqlRawTextsCallable(const Model::DescribeSampleSqlRawTextsRequest& request) const;
			DescribeSecurityIpGroupsOutcome describeSecurityIpGroups(const Model::DescribeSecurityIpGroupsRequest &request)const;
			void describeSecurityIpGroupsAsync(const Model::DescribeSecurityIpGroupsRequest& request, const DescribeSecurityIpGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityIpGroupsOutcomeCallable describeSecurityIpGroupsCallable(const Model::DescribeSecurityIpGroupsRequest& request) const;
			DescribeSessionListOutcome describeSessionList(const Model::DescribeSessionListRequest &request)const;
			void describeSessionListAsync(const Model::DescribeSessionListRequest& request, const DescribeSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSessionListOutcomeCallable describeSessionListCallable(const Model::DescribeSessionListRequest& request) const;
			DescribeSlowSQLHistoryListOutcome describeSlowSQLHistoryList(const Model::DescribeSlowSQLHistoryListRequest &request)const;
			void describeSlowSQLHistoryListAsync(const Model::DescribeSlowSQLHistoryListRequest& request, const DescribeSlowSQLHistoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowSQLHistoryListOutcomeCallable describeSlowSQLHistoryListCallable(const Model::DescribeSlowSQLHistoryListRequest& request) const;
			DescribeSlowSQLListOutcome describeSlowSQLList(const Model::DescribeSlowSQLListRequest &request)const;
			void describeSlowSQLListAsync(const Model::DescribeSlowSQLListRequest& request, const DescribeSlowSQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowSQLListOutcomeCallable describeSlowSQLListCallable(const Model::DescribeSlowSQLListRequest& request) const;
			DescribeSqlAuditStatOutcome describeSqlAuditStat(const Model::DescribeSqlAuditStatRequest &request)const;
			void describeSqlAuditStatAsync(const Model::DescribeSqlAuditStatRequest& request, const DescribeSqlAuditStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSqlAuditStatOutcomeCallable describeSqlAuditStatCallable(const Model::DescribeSqlAuditStatRequest& request) const;
			DescribeStandbyCreateModeOutcome describeStandbyCreateMode(const Model::DescribeStandbyCreateModeRequest &request)const;
			void describeStandbyCreateModeAsync(const Model::DescribeStandbyCreateModeRequest& request, const DescribeStandbyCreateModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStandbyCreateModeOutcomeCallable describeStandbyCreateModeCallable(const Model::DescribeStandbyCreateModeRequest& request) const;
			DescribeTagValuesOutcome describeTagValues(const Model::DescribeTagValuesRequest &request)const;
			void describeTagValuesAsync(const Model::DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagValuesOutcomeCallable describeTagValuesCallable(const Model::DescribeTagValuesRequest& request) const;
			DescribeTenantOutcome describeTenant(const Model::DescribeTenantRequest &request)const;
			void describeTenantAsync(const Model::DescribeTenantRequest& request, const DescribeTenantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantOutcomeCallable describeTenantCallable(const Model::DescribeTenantRequest& request) const;
			DescribeTenantEncryptionOutcome describeTenantEncryption(const Model::DescribeTenantEncryptionRequest &request)const;
			void describeTenantEncryptionAsync(const Model::DescribeTenantEncryptionRequest& request, const DescribeTenantEncryptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantEncryptionOutcomeCallable describeTenantEncryptionCallable(const Model::DescribeTenantEncryptionRequest& request) const;
			DescribeTenantMetricsOutcome describeTenantMetrics(const Model::DescribeTenantMetricsRequest &request)const;
			void describeTenantMetricsAsync(const Model::DescribeTenantMetricsRequest& request, const DescribeTenantMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantMetricsOutcomeCallable describeTenantMetricsCallable(const Model::DescribeTenantMetricsRequest& request) const;
			DescribeTenantReadableScnOutcome describeTenantReadableScn(const Model::DescribeTenantReadableScnRequest &request)const;
			void describeTenantReadableScnAsync(const Model::DescribeTenantReadableScnRequest& request, const DescribeTenantReadableScnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantReadableScnOutcomeCallable describeTenantReadableScnCallable(const Model::DescribeTenantReadableScnRequest& request) const;
			DescribeTenantSecurityConfigsOutcome describeTenantSecurityConfigs(const Model::DescribeTenantSecurityConfigsRequest &request)const;
			void describeTenantSecurityConfigsAsync(const Model::DescribeTenantSecurityConfigsRequest& request, const DescribeTenantSecurityConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantSecurityConfigsOutcomeCallable describeTenantSecurityConfigsCallable(const Model::DescribeTenantSecurityConfigsRequest& request) const;
			DescribeTenantSecurityIpGroupsOutcome describeTenantSecurityIpGroups(const Model::DescribeTenantSecurityIpGroupsRequest &request)const;
			void describeTenantSecurityIpGroupsAsync(const Model::DescribeTenantSecurityIpGroupsRequest& request, const DescribeTenantSecurityIpGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantSecurityIpGroupsOutcomeCallable describeTenantSecurityIpGroupsCallable(const Model::DescribeTenantSecurityIpGroupsRequest& request) const;
			DescribeTenantTagsOutcome describeTenantTags(const Model::DescribeTenantTagsRequest &request)const;
			void describeTenantTagsAsync(const Model::DescribeTenantTagsRequest& request, const DescribeTenantTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantTagsOutcomeCallable describeTenantTagsCallable(const Model::DescribeTenantTagsRequest& request) const;
			DescribeTenantUserRolesOutcome describeTenantUserRoles(const Model::DescribeTenantUserRolesRequest &request)const;
			void describeTenantUserRolesAsync(const Model::DescribeTenantUserRolesRequest& request, const DescribeTenantUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantUserRolesOutcomeCallable describeTenantUserRolesCallable(const Model::DescribeTenantUserRolesRequest& request) const;
			DescribeTenantUsersOutcome describeTenantUsers(const Model::DescribeTenantUsersRequest &request)const;
			void describeTenantUsersAsync(const Model::DescribeTenantUsersRequest& request, const DescribeTenantUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantUsersOutcomeCallable describeTenantUsersCallable(const Model::DescribeTenantUsersRequest& request) const;
			DescribeTenantZonesReadOutcome describeTenantZonesRead(const Model::DescribeTenantZonesReadRequest &request)const;
			void describeTenantZonesReadAsync(const Model::DescribeTenantZonesReadRequest& request, const DescribeTenantZonesReadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantZonesReadOutcomeCallable describeTenantZonesReadCallable(const Model::DescribeTenantZonesReadRequest& request) const;
			DescribeTenantsOutcome describeTenants(const Model::DescribeTenantsRequest &request)const;
			void describeTenantsAsync(const Model::DescribeTenantsRequest& request, const DescribeTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantsOutcomeCallable describeTenantsCallable(const Model::DescribeTenantsRequest& request) const;
			DescribeTimeZonesOutcome describeTimeZones(const Model::DescribeTimeZonesRequest &request)const;
			void describeTimeZonesAsync(const Model::DescribeTimeZonesRequest& request, const DescribeTimeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTimeZonesOutcomeCallable describeTimeZonesCallable(const Model::DescribeTimeZonesRequest& request) const;
			DescribeTopSQLListOutcome describeTopSQLList(const Model::DescribeTopSQLListRequest &request)const;
			void describeTopSQLListAsync(const Model::DescribeTopSQLListRequest& request, const DescribeTopSQLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTopSQLListOutcomeCallable describeTopSQLListCallable(const Model::DescribeTopSQLListRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			GetUploadOssUrlOutcome getUploadOssUrl(const Model::GetUploadOssUrlRequest &request)const;
			void getUploadOssUrlAsync(const Model::GetUploadOssUrlRequest& request, const GetUploadOssUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUploadOssUrlOutcomeCallable getUploadOssUrlCallable(const Model::GetUploadOssUrlRequest& request) const;
			KillProcessListOutcome killProcessList(const Model::KillProcessListRequest &request)const;
			void killProcessListAsync(const Model::KillProcessListRequest& request, const KillProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillProcessListOutcomeCallable killProcessListCallable(const Model::KillProcessListRequest& request) const;
			ListAllLabelsOutcome listAllLabels(const Model::ListAllLabelsRequest &request)const;
			void listAllLabelsAsync(const Model::ListAllLabelsRequest& request, const ListAllLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllLabelsOutcomeCallable listAllLabelsCallable(const Model::ListAllLabelsRequest& request) const;
			ListDataSourceOutcome listDataSource(const Model::ListDataSourceRequest &request)const;
			void listDataSourceAsync(const Model::ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceOutcomeCallable listDataSourceCallable(const Model::ListDataSourceRequest& request) const;
			ListProjectFullVerifyResultOutcome listProjectFullVerifyResult(const Model::ListProjectFullVerifyResultRequest &request)const;
			void listProjectFullVerifyResultAsync(const Model::ListProjectFullVerifyResultRequest& request, const ListProjectFullVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectFullVerifyResultOutcomeCallable listProjectFullVerifyResultCallable(const Model::ListProjectFullVerifyResultRequest& request) const;
			ListProjectModifyRecordsOutcome listProjectModifyRecords(const Model::ListProjectModifyRecordsRequest &request)const;
			void listProjectModifyRecordsAsync(const Model::ListProjectModifyRecordsRequest& request, const ListProjectModifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectModifyRecordsOutcomeCallable listProjectModifyRecordsCallable(const Model::ListProjectModifyRecordsRequest& request) const;
			ListProjectsOutcome listProjects(const Model::ListProjectsRequest &request)const;
			void listProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectsOutcomeCallable listProjectsCallable(const Model::ListProjectsRequest& request) const;
			ListWorkerInstancesOutcome listWorkerInstances(const Model::ListWorkerInstancesRequest &request)const;
			void listWorkerInstancesAsync(const Model::ListWorkerInstancesRequest& request, const ListWorkerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkerInstancesOutcomeCallable listWorkerInstancesCallable(const Model::ListWorkerInstancesRequest& request) const;
			ModifyDatabaseDescriptionOutcome modifyDatabaseDescription(const Model::ModifyDatabaseDescriptionRequest &request)const;
			void modifyDatabaseDescriptionAsync(const Model::ModifyDatabaseDescriptionRequest& request, const ModifyDatabaseDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatabaseDescriptionOutcomeCallable modifyDatabaseDescriptionCallable(const Model::ModifyDatabaseDescriptionRequest& request) const;
			ModifyDatabaseUserRolesOutcome modifyDatabaseUserRoles(const Model::ModifyDatabaseUserRolesRequest &request)const;
			void modifyDatabaseUserRolesAsync(const Model::ModifyDatabaseUserRolesRequest& request, const ModifyDatabaseUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatabaseUserRolesOutcomeCallable modifyDatabaseUserRolesCallable(const Model::ModifyDatabaseUserRolesRequest& request) const;
			ModifyInstanceNameOutcome modifyInstanceName(const Model::ModifyInstanceNameRequest &request)const;
			void modifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceNameOutcomeCallable modifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request) const;
			ModifyInstanceNodeNumOutcome modifyInstanceNodeNum(const Model::ModifyInstanceNodeNumRequest &request)const;
			void modifyInstanceNodeNumAsync(const Model::ModifyInstanceNodeNumRequest& request, const ModifyInstanceNodeNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceNodeNumOutcomeCallable modifyInstanceNodeNumCallable(const Model::ModifyInstanceNodeNumRequest& request) const;
			ModifyInstanceSSLOutcome modifyInstanceSSL(const Model::ModifyInstanceSSLRequest &request)const;
			void modifyInstanceSSLAsync(const Model::ModifyInstanceSSLRequest& request, const ModifyInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceSSLOutcomeCallable modifyInstanceSSLCallable(const Model::ModifyInstanceSSLRequest& request) const;
			ModifyInstanceSpecOutcome modifyInstanceSpec(const Model::ModifyInstanceSpecRequest &request)const;
			void modifyInstanceSpecAsync(const Model::ModifyInstanceSpecRequest& request, const ModifyInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceSpecOutcomeCallable modifyInstanceSpecCallable(const Model::ModifyInstanceSpecRequest& request) const;
			ModifyInstanceTagsOutcome modifyInstanceTags(const Model::ModifyInstanceTagsRequest &request)const;
			void modifyInstanceTagsAsync(const Model::ModifyInstanceTagsRequest& request, const ModifyInstanceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceTagsOutcomeCallable modifyInstanceTagsCallable(const Model::ModifyInstanceTagsRequest& request) const;
			ModifyInstanceTemporaryCapacityOutcome modifyInstanceTemporaryCapacity(const Model::ModifyInstanceTemporaryCapacityRequest &request)const;
			void modifyInstanceTemporaryCapacityAsync(const Model::ModifyInstanceTemporaryCapacityRequest& request, const ModifyInstanceTemporaryCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceTemporaryCapacityOutcomeCallable modifyInstanceTemporaryCapacityCallable(const Model::ModifyInstanceTemporaryCapacityRequest& request) const;
			ModifyParametersOutcome modifyParameters(const Model::ModifyParametersRequest &request)const;
			void modifyParametersAsync(const Model::ModifyParametersRequest& request, const ModifyParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParametersOutcomeCallable modifyParametersCallable(const Model::ModifyParametersRequest& request) const;
			ModifySecurityIpsOutcome modifySecurityIps(const Model::ModifySecurityIpsRequest &request)const;
			void modifySecurityIpsAsync(const Model::ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityIpsOutcomeCallable modifySecurityIpsCallable(const Model::ModifySecurityIpsRequest& request) const;
			ModifyTagNameOutcome modifyTagName(const Model::ModifyTagNameRequest &request)const;
			void modifyTagNameAsync(const Model::ModifyTagNameRequest& request, const ModifyTagNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTagNameOutcomeCallable modifyTagNameCallable(const Model::ModifyTagNameRequest& request) const;
			ModifyTagValueNameOutcome modifyTagValueName(const Model::ModifyTagValueNameRequest &request)const;
			void modifyTagValueNameAsync(const Model::ModifyTagValueNameRequest& request, const ModifyTagValueNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTagValueNameOutcomeCallable modifyTagValueNameCallable(const Model::ModifyTagValueNameRequest& request) const;
			ModifyTenantEncryptionOutcome modifyTenantEncryption(const Model::ModifyTenantEncryptionRequest &request)const;
			void modifyTenantEncryptionAsync(const Model::ModifyTenantEncryptionRequest& request, const ModifyTenantEncryptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTenantEncryptionOutcomeCallable modifyTenantEncryptionCallable(const Model::ModifyTenantEncryptionRequest& request) const;
			ModifyTenantPrimaryZoneOutcome modifyTenantPrimaryZone(const Model::ModifyTenantPrimaryZoneRequest &request)const;
			void modifyTenantPrimaryZoneAsync(const Model::ModifyTenantPrimaryZoneRequest& request, const ModifyTenantPrimaryZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTenantPrimaryZoneOutcomeCallable modifyTenantPrimaryZoneCallable(const Model::ModifyTenantPrimaryZoneRequest& request) const;
			ModifyTenantResourceOutcome modifyTenantResource(const Model::ModifyTenantResourceRequest &request)const;
			void modifyTenantResourceAsync(const Model::ModifyTenantResourceRequest& request, const ModifyTenantResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTenantResourceOutcomeCallable modifyTenantResourceCallable(const Model::ModifyTenantResourceRequest& request) const;
			ModifyTenantSecurityIpGroupOutcome modifyTenantSecurityIpGroup(const Model::ModifyTenantSecurityIpGroupRequest &request)const;
			void modifyTenantSecurityIpGroupAsync(const Model::ModifyTenantSecurityIpGroupRequest& request, const ModifyTenantSecurityIpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTenantSecurityIpGroupOutcomeCallable modifyTenantSecurityIpGroupCallable(const Model::ModifyTenantSecurityIpGroupRequest& request) const;
			ModifyTenantTagsOutcome modifyTenantTags(const Model::ModifyTenantTagsRequest &request)const;
			void modifyTenantTagsAsync(const Model::ModifyTenantTagsRequest& request, const ModifyTenantTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTenantTagsOutcomeCallable modifyTenantTagsCallable(const Model::ModifyTenantTagsRequest& request) const;
			ModifyTenantUserDescriptionOutcome modifyTenantUserDescription(const Model::ModifyTenantUserDescriptionRequest &request)const;
			void modifyTenantUserDescriptionAsync(const Model::ModifyTenantUserDescriptionRequest& request, const ModifyTenantUserDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTenantUserDescriptionOutcomeCallable modifyTenantUserDescriptionCallable(const Model::ModifyTenantUserDescriptionRequest& request) const;
			ModifyTenantUserPasswordOutcome modifyTenantUserPassword(const Model::ModifyTenantUserPasswordRequest &request)const;
			void modifyTenantUserPasswordAsync(const Model::ModifyTenantUserPasswordRequest& request, const ModifyTenantUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTenantUserPasswordOutcomeCallable modifyTenantUserPasswordCallable(const Model::ModifyTenantUserPasswordRequest& request) const;
			ModifyTenantUserRolesOutcome modifyTenantUserRoles(const Model::ModifyTenantUserRolesRequest &request)const;
			void modifyTenantUserRolesAsync(const Model::ModifyTenantUserRolesRequest& request, const ModifyTenantUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTenantUserRolesOutcomeCallable modifyTenantUserRolesCallable(const Model::ModifyTenantUserRolesRequest& request) const;
			ModifyTenantUserStatusOutcome modifyTenantUserStatus(const Model::ModifyTenantUserStatusRequest &request)const;
			void modifyTenantUserStatusAsync(const Model::ModifyTenantUserStatusRequest& request, const ModifyTenantUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTenantUserStatusOutcomeCallable modifyTenantUserStatusCallable(const Model::ModifyTenantUserStatusRequest& request) const;
			ReleaseProjectOutcome releaseProject(const Model::ReleaseProjectRequest &request)const;
			void releaseProjectAsync(const Model::ReleaseProjectRequest& request, const ReleaseProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseProjectOutcomeCallable releaseProjectCallable(const Model::ReleaseProjectRequest& request) const;
			ReleaseWorkerInstanceOutcome releaseWorkerInstance(const Model::ReleaseWorkerInstanceRequest &request)const;
			void releaseWorkerInstanceAsync(const Model::ReleaseWorkerInstanceRequest& request, const ReleaseWorkerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseWorkerInstanceOutcomeCallable releaseWorkerInstanceCallable(const Model::ReleaseWorkerInstanceRequest& request) const;
			RemoveStandbyInstanceOutcome removeStandbyInstance(const Model::RemoveStandbyInstanceRequest &request)const;
			void removeStandbyInstanceAsync(const Model::RemoveStandbyInstanceRequest& request, const RemoveStandbyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveStandbyInstanceOutcomeCallable removeStandbyInstanceCallable(const Model::RemoveStandbyInstanceRequest& request) const;
			ResumeProjectOutcome resumeProject(const Model::ResumeProjectRequest &request)const;
			void resumeProjectAsync(const Model::ResumeProjectRequest& request, const ResumeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeProjectOutcomeCallable resumeProjectCallable(const Model::ResumeProjectRequest& request) const;
			RetryProjectModifyRecordsOutcome retryProjectModifyRecords(const Model::RetryProjectModifyRecordsRequest &request)const;
			void retryProjectModifyRecordsAsync(const Model::RetryProjectModifyRecordsRequest& request, const RetryProjectModifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryProjectModifyRecordsOutcomeCallable retryProjectModifyRecordsCallable(const Model::RetryProjectModifyRecordsRequest& request) const;
			StartProjectOutcome startProject(const Model::StartProjectRequest &request)const;
			void startProjectAsync(const Model::StartProjectRequest& request, const StartProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartProjectOutcomeCallable startProjectCallable(const Model::StartProjectRequest& request) const;
			StartProjectsByLabelOutcome startProjectsByLabel(const Model::StartProjectsByLabelRequest &request)const;
			void startProjectsByLabelAsync(const Model::StartProjectsByLabelRequest& request, const StartProjectsByLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartProjectsByLabelOutcomeCallable startProjectsByLabelCallable(const Model::StartProjectsByLabelRequest& request) const;
			StopProjectOutcome stopProject(const Model::StopProjectRequest &request)const;
			void stopProjectAsync(const Model::StopProjectRequest& request, const StopProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopProjectOutcomeCallable stopProjectCallable(const Model::StopProjectRequest& request) const;
			StopProjectModifyRecordsOutcome stopProjectModifyRecords(const Model::StopProjectModifyRecordsRequest &request)const;
			void stopProjectModifyRecordsAsync(const Model::StopProjectModifyRecordsRequest& request, const StopProjectModifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopProjectModifyRecordsOutcomeCallable stopProjectModifyRecordsCallable(const Model::StopProjectModifyRecordsRequest& request) const;
			StopProjectsByLabelOutcome stopProjectsByLabel(const Model::StopProjectsByLabelRequest &request)const;
			void stopProjectsByLabelAsync(const Model::StopProjectsByLabelRequest& request, const StopProjectsByLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopProjectsByLabelOutcomeCallable stopProjectsByLabelCallable(const Model::StopProjectsByLabelRequest& request) const;
			SwitchoverInstanceOutcome switchoverInstance(const Model::SwitchoverInstanceRequest &request)const;
			void switchoverInstanceAsync(const Model::SwitchoverInstanceRequest& request, const SwitchoverInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchoverInstanceOutcomeCallable switchoverInstanceCallable(const Model::SwitchoverInstanceRequest& request) const;
			UpdateProjectConfigOutcome updateProjectConfig(const Model::UpdateProjectConfigRequest &request)const;
			void updateProjectConfigAsync(const Model::UpdateProjectConfigRequest& request, const UpdateProjectConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectConfigOutcomeCallable updateProjectConfigCallable(const Model::UpdateProjectConfigRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OCEANBASEPRO_OCEANBASEPROCLIENT_H_
