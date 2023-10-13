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

#ifndef ALIBABACLOUD_ADB_ADBCLIENT_H_
#define ALIBABACLOUD_ADB_ADBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AdbExport.h"
#include "model/AllocateClusterPublicConnectionRequest.h"
#include "model/AllocateClusterPublicConnectionResult.h"
#include "model/ApplyAdviceByIdRequest.h"
#include "model/ApplyAdviceByIdResult.h"
#include "model/AttachUserENIRequest.h"
#include "model/AttachUserENIResult.h"
#include "model/BatchApplyAdviceByIdListRequest.h"
#include "model/BatchApplyAdviceByIdListResult.h"
#include "model/BindDBResourceGroupWithUserRequest.h"
#include "model/BindDBResourceGroupWithUserResult.h"
#include "model/BindDBResourcePoolWithUserRequest.h"
#include "model/BindDBResourcePoolWithUserResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateDBClusterRequest.h"
#include "model/CreateDBClusterResult.h"
#include "model/CreateDBResourceGroupRequest.h"
#include "model/CreateDBResourceGroupResult.h"
#include "model/CreateDBResourcePoolRequest.h"
#include "model/CreateDBResourcePoolResult.h"
#include "model/CreateElasticPlanRequest.h"
#include "model/CreateElasticPlanResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteDBClusterRequest.h"
#include "model/DeleteDBClusterResult.h"
#include "model/DeleteDBResourceGroupRequest.h"
#include "model/DeleteDBResourceGroupResult.h"
#include "model/DeleteDBResourcePoolRequest.h"
#include "model/DeleteDBResourcePoolResult.h"
#include "model/DeleteElasticPlanRequest.h"
#include "model/DeleteElasticPlanResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeAdviceServiceEnabledRequest.h"
#include "model/DescribeAdviceServiceEnabledResult.h"
#include "model/DescribeAllAccountsRequest.h"
#include "model/DescribeAllAccountsResult.h"
#include "model/DescribeAllDataSourceRequest.h"
#include "model/DescribeAllDataSourceResult.h"
#include "model/DescribeAppliedAdvicesRequest.h"
#include "model/DescribeAppliedAdvicesResult.h"
#include "model/DescribeAuditLogConfigRequest.h"
#include "model/DescribeAuditLogConfigResult.h"
#include "model/DescribeAuditLogRecordsRequest.h"
#include "model/DescribeAuditLogRecordsResult.h"
#include "model/DescribeAutoRenewAttributeRequest.h"
#include "model/DescribeAutoRenewAttributeResult.h"
#include "model/DescribeAvailableAdvicesRequest.h"
#include "model/DescribeAvailableAdvicesResult.h"
#include "model/DescribeAvailableResourceRequest.h"
#include "model/DescribeAvailableResourceResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeColumnsRequest.h"
#include "model/DescribeColumnsResult.h"
#include "model/DescribeComputeResourceRequest.h"
#include "model/DescribeComputeResourceResult.h"
#include "model/DescribeConnectionCountRecordsRequest.h"
#include "model/DescribeConnectionCountRecordsResult.h"
#include "model/DescribeDBClusterAccessWhiteListRequest.h"
#include "model/DescribeDBClusterAccessWhiteListResult.h"
#include "model/DescribeDBClusterAttributeRequest.h"
#include "model/DescribeDBClusterAttributeResult.h"
#include "model/DescribeDBClusterHealthStatusRequest.h"
#include "model/DescribeDBClusterHealthStatusResult.h"
#include "model/DescribeDBClusterNetInfoRequest.h"
#include "model/DescribeDBClusterNetInfoResult.h"
#include "model/DescribeDBClusterPerformanceRequest.h"
#include "model/DescribeDBClusterPerformanceResult.h"
#include "model/DescribeDBClusterResourcePoolPerformanceRequest.h"
#include "model/DescribeDBClusterResourcePoolPerformanceResult.h"
#include "model/DescribeDBClusterStatusRequest.h"
#include "model/DescribeDBClusterStatusResult.h"
#include "model/DescribeDBClustersRequest.h"
#include "model/DescribeDBClustersResult.h"
#include "model/DescribeDBResourceGroupRequest.h"
#include "model/DescribeDBResourceGroupResult.h"
#include "model/DescribeDBResourcePoolRequest.h"
#include "model/DescribeDBResourcePoolResult.h"
#include "model/DescribeDiagnosisDimensionsRequest.h"
#include "model/DescribeDiagnosisDimensionsResult.h"
#include "model/DescribeDiagnosisMonitorPerformanceRequest.h"
#include "model/DescribeDiagnosisMonitorPerformanceResult.h"
#include "model/DescribeDiagnosisRecordsRequest.h"
#include "model/DescribeDiagnosisRecordsResult.h"
#include "model/DescribeDiagnosisSQLInfoRequest.h"
#include "model/DescribeDiagnosisSQLInfoResult.h"
#include "model/DescribeDiagnosisTasksRequest.h"
#include "model/DescribeDiagnosisTasksResult.h"
#include "model/DescribeDownloadRecordsRequest.h"
#include "model/DescribeDownloadRecordsResult.h"
#include "model/DescribeEIURangeRequest.h"
#include "model/DescribeEIURangeResult.h"
#include "model/DescribeElasticDailyPlanRequest.h"
#include "model/DescribeElasticDailyPlanResult.h"
#include "model/DescribeElasticPlanRequest.h"
#include "model/DescribeElasticPlanResult.h"
#include "model/DescribeInclinedTablesRequest.h"
#include "model/DescribeInclinedTablesResult.h"
#include "model/DescribeLoadTasksRecordsRequest.h"
#include "model/DescribeLoadTasksRecordsResult.h"
#include "model/DescribeMaintenanceActionRequest.h"
#include "model/DescribeMaintenanceActionResult.h"
#include "model/DescribeOperatorPermissionRequest.h"
#include "model/DescribeOperatorPermissionResult.h"
#include "model/DescribePatternPerformanceRequest.h"
#include "model/DescribePatternPerformanceResult.h"
#include "model/DescribeProcessListRequest.h"
#include "model/DescribeProcessListResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSQLPatternsRequest.h"
#include "model/DescribeSQLPatternsResult.h"
#include "model/DescribeSQLPlanRequest.h"
#include "model/DescribeSQLPlanResult.h"
#include "model/DescribeSQLPlanTaskRequest.h"
#include "model/DescribeSQLPlanTaskResult.h"
#include "model/DescribeSchemasRequest.h"
#include "model/DescribeSchemasResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/DescribeSlowLogTrendRequest.h"
#include "model/DescribeSlowLogTrendResult.h"
#include "model/DescribeSqlPatternRequest.h"
#include "model/DescribeSqlPatternResult.h"
#include "model/DescribeTableAccessCountRequest.h"
#include "model/DescribeTableAccessCountResult.h"
#include "model/DescribeTableDetailRequest.h"
#include "model/DescribeTableDetailResult.h"
#include "model/DescribeTablePartitionDiagnoseRequest.h"
#include "model/DescribeTablePartitionDiagnoseResult.h"
#include "model/DescribeTableStatisticsRequest.h"
#include "model/DescribeTableStatisticsResult.h"
#include "model/DescribeTablesRequest.h"
#include "model/DescribeTablesResult.h"
#include "model/DescribeTaskInfoRequest.h"
#include "model/DescribeTaskInfoResult.h"
#include "model/DescribeVSwitchesRequest.h"
#include "model/DescribeVSwitchesResult.h"
#include "model/DetachUserENIRequest.h"
#include "model/DetachUserENIResult.h"
#include "model/DisableAdviceServiceRequest.h"
#include "model/DisableAdviceServiceResult.h"
#include "model/DownloadDiagnosisRecordsRequest.h"
#include "model/DownloadDiagnosisRecordsResult.h"
#include "model/EnableAdviceServiceRequest.h"
#include "model/EnableAdviceServiceResult.h"
#include "model/GrantOperatorPermissionRequest.h"
#include "model/GrantOperatorPermissionResult.h"
#include "model/KillProcessRequest.h"
#include "model/KillProcessResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/MigrateDBClusterRequest.h"
#include "model/MigrateDBClusterResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAuditLogConfigRequest.h"
#include "model/ModifyAuditLogConfigResult.h"
#include "model/ModifyAutoRenewAttributeRequest.h"
#include "model/ModifyAutoRenewAttributeResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyClusterConnectionStringRequest.h"
#include "model/ModifyClusterConnectionStringResult.h"
#include "model/ModifyDBClusterRequest.h"
#include "model/ModifyDBClusterResult.h"
#include "model/ModifyDBClusterAccessWhiteListRequest.h"
#include "model/ModifyDBClusterAccessWhiteListResult.h"
#include "model/ModifyDBClusterDescriptionRequest.h"
#include "model/ModifyDBClusterDescriptionResult.h"
#include "model/ModifyDBClusterMaintainTimeRequest.h"
#include "model/ModifyDBClusterMaintainTimeResult.h"
#include "model/ModifyDBClusterPayTypeRequest.h"
#include "model/ModifyDBClusterPayTypeResult.h"
#include "model/ModifyDBClusterResourceGroupRequest.h"
#include "model/ModifyDBClusterResourceGroupResult.h"
#include "model/ModifyDBResourceGroupRequest.h"
#include "model/ModifyDBResourceGroupResult.h"
#include "model/ModifyDBResourcePoolRequest.h"
#include "model/ModifyDBResourcePoolResult.h"
#include "model/ModifyElasticPlanRequest.h"
#include "model/ModifyElasticPlanResult.h"
#include "model/ModifyLogBackupPolicyRequest.h"
#include "model/ModifyLogBackupPolicyResult.h"
#include "model/ModifyMaintenanceActionRequest.h"
#include "model/ModifyMaintenanceActionResult.h"
#include "model/ReleaseClusterPublicConnectionRequest.h"
#include "model/ReleaseClusterPublicConnectionResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/RevokeOperatorPermissionRequest.h"
#include "model/RevokeOperatorPermissionResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnbindDBResourceGroupWithUserRequest.h"
#include "model/UnbindDBResourceGroupWithUserResult.h"
#include "model/UnbindDBResourcePoolWithUserRequest.h"
#include "model/UnbindDBResourcePoolWithUserResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Adb
	{
		class ALIBABACLOUD_ADB_EXPORT AdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocateClusterPublicConnectionResult> AllocateClusterPublicConnectionOutcome;
			typedef std::future<AllocateClusterPublicConnectionOutcome> AllocateClusterPublicConnectionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::AllocateClusterPublicConnectionRequest&, const AllocateClusterPublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateClusterPublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ApplyAdviceByIdResult> ApplyAdviceByIdOutcome;
			typedef std::future<ApplyAdviceByIdOutcome> ApplyAdviceByIdOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ApplyAdviceByIdRequest&, const ApplyAdviceByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyAdviceByIdAsyncHandler;
			typedef Outcome<Error, Model::AttachUserENIResult> AttachUserENIOutcome;
			typedef std::future<AttachUserENIOutcome> AttachUserENIOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::AttachUserENIRequest&, const AttachUserENIOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachUserENIAsyncHandler;
			typedef Outcome<Error, Model::BatchApplyAdviceByIdListResult> BatchApplyAdviceByIdListOutcome;
			typedef std::future<BatchApplyAdviceByIdListOutcome> BatchApplyAdviceByIdListOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::BatchApplyAdviceByIdListRequest&, const BatchApplyAdviceByIdListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchApplyAdviceByIdListAsyncHandler;
			typedef Outcome<Error, Model::BindDBResourceGroupWithUserResult> BindDBResourceGroupWithUserOutcome;
			typedef std::future<BindDBResourceGroupWithUserOutcome> BindDBResourceGroupWithUserOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::BindDBResourceGroupWithUserRequest&, const BindDBResourceGroupWithUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindDBResourceGroupWithUserAsyncHandler;
			typedef Outcome<Error, Model::BindDBResourcePoolWithUserResult> BindDBResourcePoolWithUserOutcome;
			typedef std::future<BindDBResourcePoolWithUserOutcome> BindDBResourcePoolWithUserOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::BindDBResourcePoolWithUserRequest&, const BindDBResourcePoolWithUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindDBResourcePoolWithUserAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateDBClusterResult> CreateDBClusterOutcome;
			typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateDBClusterRequest&, const CreateDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateDBResourceGroupResult> CreateDBResourceGroupOutcome;
			typedef std::future<CreateDBResourceGroupOutcome> CreateDBResourceGroupOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateDBResourceGroupRequest&, const CreateDBResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateDBResourcePoolResult> CreateDBResourcePoolOutcome;
			typedef std::future<CreateDBResourcePoolOutcome> CreateDBResourcePoolOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateDBResourcePoolRequest&, const CreateDBResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::CreateElasticPlanResult> CreateElasticPlanOutcome;
			typedef std::future<CreateElasticPlanOutcome> CreateElasticPlanOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::CreateElasticPlanRequest&, const CreateElasticPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateElasticPlanAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBClusterResult> DeleteDBClusterOutcome;
			typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteDBClusterRequest&, const DeleteDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBResourceGroupResult> DeleteDBResourceGroupOutcome;
			typedef std::future<DeleteDBResourceGroupOutcome> DeleteDBResourceGroupOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteDBResourceGroupRequest&, const DeleteDBResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBResourcePoolResult> DeleteDBResourcePoolOutcome;
			typedef std::future<DeleteDBResourcePoolOutcome> DeleteDBResourcePoolOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteDBResourcePoolRequest&, const DeleteDBResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::DeleteElasticPlanResult> DeleteElasticPlanOutcome;
			typedef std::future<DeleteElasticPlanOutcome> DeleteElasticPlanOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DeleteElasticPlanRequest&, const DeleteElasticPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteElasticPlanAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAdviceServiceEnabledResult> DescribeAdviceServiceEnabledOutcome;
			typedef std::future<DescribeAdviceServiceEnabledOutcome> DescribeAdviceServiceEnabledOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAdviceServiceEnabledRequest&, const DescribeAdviceServiceEnabledOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdviceServiceEnabledAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllAccountsResult> DescribeAllAccountsOutcome;
			typedef std::future<DescribeAllAccountsOutcome> DescribeAllAccountsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAllAccountsRequest&, const DescribeAllAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllDataSourceResult> DescribeAllDataSourceOutcome;
			typedef std::future<DescribeAllDataSourceOutcome> DescribeAllDataSourceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAllDataSourceRequest&, const DescribeAllDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllDataSourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppliedAdvicesResult> DescribeAppliedAdvicesOutcome;
			typedef std::future<DescribeAppliedAdvicesOutcome> DescribeAppliedAdvicesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAppliedAdvicesRequest&, const DescribeAppliedAdvicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppliedAdvicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditLogConfigResult> DescribeAuditLogConfigOutcome;
			typedef std::future<DescribeAuditLogConfigOutcome> DescribeAuditLogConfigOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAuditLogConfigRequest&, const DescribeAuditLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuditLogRecordsResult> DescribeAuditLogRecordsOutcome;
			typedef std::future<DescribeAuditLogRecordsOutcome> DescribeAuditLogRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAuditLogRecordsRequest&, const DescribeAuditLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoRenewAttributeResult> DescribeAutoRenewAttributeOutcome;
			typedef std::future<DescribeAutoRenewAttributeOutcome> DescribeAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAutoRenewAttributeRequest&, const DescribeAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableAdvicesResult> DescribeAvailableAdvicesOutcome;
			typedef std::future<DescribeAvailableAdvicesOutcome> DescribeAvailableAdvicesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAvailableAdvicesRequest&, const DescribeAvailableAdvicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableAdvicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableResourceResult> DescribeAvailableResourceOutcome;
			typedef std::future<DescribeAvailableResourceOutcome> DescribeAvailableResourceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeAvailableResourceRequest&, const DescribeAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeColumnsResult> DescribeColumnsOutcome;
			typedef std::future<DescribeColumnsOutcome> DescribeColumnsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeColumnsRequest&, const DescribeColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnsAsyncHandler;
			typedef Outcome<Error, Model::DescribeComputeResourceResult> DescribeComputeResourceOutcome;
			typedef std::future<DescribeComputeResourceOutcome> DescribeComputeResourceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeComputeResourceRequest&, const DescribeComputeResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComputeResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeConnectionCountRecordsResult> DescribeConnectionCountRecordsOutcome;
			typedef std::future<DescribeConnectionCountRecordsOutcome> DescribeConnectionCountRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeConnectionCountRecordsRequest&, const DescribeConnectionCountRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectionCountRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAccessWhiteListResult> DescribeDBClusterAccessWhiteListOutcome;
			typedef std::future<DescribeDBClusterAccessWhiteListOutcome> DescribeDBClusterAccessWhiteListOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterAccessWhiteListRequest&, const DescribeDBClusterAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAttributeResult> DescribeDBClusterAttributeOutcome;
			typedef std::future<DescribeDBClusterAttributeOutcome> DescribeDBClusterAttributeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterAttributeRequest&, const DescribeDBClusterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterHealthStatusResult> DescribeDBClusterHealthStatusOutcome;
			typedef std::future<DescribeDBClusterHealthStatusOutcome> DescribeDBClusterHealthStatusOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterHealthStatusRequest&, const DescribeDBClusterHealthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterHealthStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterNetInfoResult> DescribeDBClusterNetInfoOutcome;
			typedef std::future<DescribeDBClusterNetInfoOutcome> DescribeDBClusterNetInfoOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterNetInfoRequest&, const DescribeDBClusterNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterPerformanceResult> DescribeDBClusterPerformanceOutcome;
			typedef std::future<DescribeDBClusterPerformanceOutcome> DescribeDBClusterPerformanceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterPerformanceRequest&, const DescribeDBClusterPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterResourcePoolPerformanceResult> DescribeDBClusterResourcePoolPerformanceOutcome;
			typedef std::future<DescribeDBClusterResourcePoolPerformanceOutcome> DescribeDBClusterResourcePoolPerformanceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterResourcePoolPerformanceRequest&, const DescribeDBClusterResourcePoolPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterResourcePoolPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterStatusResult> DescribeDBClusterStatusOutcome;
			typedef std::future<DescribeDBClusterStatusOutcome> DescribeDBClusterStatusOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClusterStatusRequest&, const DescribeDBClusterStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClustersResult> DescribeDBClustersOutcome;
			typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBClustersRequest&, const DescribeDBClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBResourceGroupResult> DescribeDBResourceGroupOutcome;
			typedef std::future<DescribeDBResourceGroupOutcome> DescribeDBResourceGroupOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBResourceGroupRequest&, const DescribeDBResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBResourcePoolResult> DescribeDBResourcePoolOutcome;
			typedef std::future<DescribeDBResourcePoolOutcome> DescribeDBResourcePoolOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDBResourcePoolRequest&, const DescribeDBResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisDimensionsResult> DescribeDiagnosisDimensionsOutcome;
			typedef std::future<DescribeDiagnosisDimensionsOutcome> DescribeDiagnosisDimensionsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDiagnosisDimensionsRequest&, const DescribeDiagnosisDimensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisDimensionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisMonitorPerformanceResult> DescribeDiagnosisMonitorPerformanceOutcome;
			typedef std::future<DescribeDiagnosisMonitorPerformanceOutcome> DescribeDiagnosisMonitorPerformanceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDiagnosisMonitorPerformanceRequest&, const DescribeDiagnosisMonitorPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisMonitorPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisRecordsResult> DescribeDiagnosisRecordsOutcome;
			typedef std::future<DescribeDiagnosisRecordsOutcome> DescribeDiagnosisRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDiagnosisRecordsRequest&, const DescribeDiagnosisRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisSQLInfoResult> DescribeDiagnosisSQLInfoOutcome;
			typedef std::future<DescribeDiagnosisSQLInfoOutcome> DescribeDiagnosisSQLInfoOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDiagnosisSQLInfoRequest&, const DescribeDiagnosisSQLInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisSQLInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisTasksResult> DescribeDiagnosisTasksOutcome;
			typedef std::future<DescribeDiagnosisTasksOutcome> DescribeDiagnosisTasksOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDiagnosisTasksRequest&, const DescribeDiagnosisTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDownloadRecordsResult> DescribeDownloadRecordsOutcome;
			typedef std::future<DescribeDownloadRecordsOutcome> DescribeDownloadRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeDownloadRecordsRequest&, const DescribeDownloadRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeEIURangeResult> DescribeEIURangeOutcome;
			typedef std::future<DescribeEIURangeOutcome> DescribeEIURangeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeEIURangeRequest&, const DescribeEIURangeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEIURangeAsyncHandler;
			typedef Outcome<Error, Model::DescribeElasticDailyPlanResult> DescribeElasticDailyPlanOutcome;
			typedef std::future<DescribeElasticDailyPlanOutcome> DescribeElasticDailyPlanOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeElasticDailyPlanRequest&, const DescribeElasticDailyPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElasticDailyPlanAsyncHandler;
			typedef Outcome<Error, Model::DescribeElasticPlanResult> DescribeElasticPlanOutcome;
			typedef std::future<DescribeElasticPlanOutcome> DescribeElasticPlanOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeElasticPlanRequest&, const DescribeElasticPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElasticPlanAsyncHandler;
			typedef Outcome<Error, Model::DescribeInclinedTablesResult> DescribeInclinedTablesOutcome;
			typedef std::future<DescribeInclinedTablesOutcome> DescribeInclinedTablesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeInclinedTablesRequest&, const DescribeInclinedTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInclinedTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadTasksRecordsResult> DescribeLoadTasksRecordsOutcome;
			typedef std::future<DescribeLoadTasksRecordsOutcome> DescribeLoadTasksRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeLoadTasksRecordsRequest&, const DescribeLoadTasksRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadTasksRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMaintenanceActionResult> DescribeMaintenanceActionOutcome;
			typedef std::future<DescribeMaintenanceActionOutcome> DescribeMaintenanceActionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeMaintenanceActionRequest&, const DescribeMaintenanceActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaintenanceActionAsyncHandler;
			typedef Outcome<Error, Model::DescribeOperatorPermissionResult> DescribeOperatorPermissionOutcome;
			typedef std::future<DescribeOperatorPermissionOutcome> DescribeOperatorPermissionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeOperatorPermissionRequest&, const DescribeOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::DescribePatternPerformanceResult> DescribePatternPerformanceOutcome;
			typedef std::future<DescribePatternPerformanceOutcome> DescribePatternPerformanceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribePatternPerformanceRequest&, const DescribePatternPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePatternPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeProcessListResult> DescribeProcessListOutcome;
			typedef std::future<DescribeProcessListOutcome> DescribeProcessListOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeProcessListRequest&, const DescribeProcessListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLPatternsResult> DescribeSQLPatternsOutcome;
			typedef std::future<DescribeSQLPatternsOutcome> DescribeSQLPatternsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSQLPatternsRequest&, const DescribeSQLPatternsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLPatternsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLPlanResult> DescribeSQLPlanOutcome;
			typedef std::future<DescribeSQLPlanOutcome> DescribeSQLPlanOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSQLPlanRequest&, const DescribeSQLPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLPlanAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLPlanTaskResult> DescribeSQLPlanTaskOutcome;
			typedef std::future<DescribeSQLPlanTaskOutcome> DescribeSQLPlanTaskOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSQLPlanTaskRequest&, const DescribeSQLPlanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLPlanTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeSchemasResult> DescribeSchemasOutcome;
			typedef std::future<DescribeSchemasOutcome> DescribeSchemasOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSchemasRequest&, const DescribeSchemasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchemasAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogTrendResult> DescribeSlowLogTrendOutcome;
			typedef std::future<DescribeSlowLogTrendOutcome> DescribeSlowLogTrendOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSlowLogTrendRequest&, const DescribeSlowLogTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogTrendAsyncHandler;
			typedef Outcome<Error, Model::DescribeSqlPatternResult> DescribeSqlPatternOutcome;
			typedef std::future<DescribeSqlPatternOutcome> DescribeSqlPatternOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeSqlPatternRequest&, const DescribeSqlPatternOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSqlPatternAsyncHandler;
			typedef Outcome<Error, Model::DescribeTableAccessCountResult> DescribeTableAccessCountOutcome;
			typedef std::future<DescribeTableAccessCountOutcome> DescribeTableAccessCountOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeTableAccessCountRequest&, const DescribeTableAccessCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableAccessCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeTableDetailResult> DescribeTableDetailOutcome;
			typedef std::future<DescribeTableDetailOutcome> DescribeTableDetailOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeTableDetailRequest&, const DescribeTableDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeTablePartitionDiagnoseResult> DescribeTablePartitionDiagnoseOutcome;
			typedef std::future<DescribeTablePartitionDiagnoseOutcome> DescribeTablePartitionDiagnoseOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeTablePartitionDiagnoseRequest&, const DescribeTablePartitionDiagnoseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablePartitionDiagnoseAsyncHandler;
			typedef Outcome<Error, Model::DescribeTableStatisticsResult> DescribeTableStatisticsOutcome;
			typedef std::future<DescribeTableStatisticsOutcome> DescribeTableStatisticsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeTableStatisticsRequest&, const DescribeTableStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTablesResult> DescribeTablesOutcome;
			typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeTablesRequest&, const DescribeTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTaskInfoResult> DescribeTaskInfoOutcome;
			typedef std::future<DescribeTaskInfoOutcome> DescribeTaskInfoOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeTaskInfoRequest&, const DescribeTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchesResult> DescribeVSwitchesOutcome;
			typedef std::future<DescribeVSwitchesOutcome> DescribeVSwitchesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DescribeVSwitchesRequest&, const DescribeVSwitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchesAsyncHandler;
			typedef Outcome<Error, Model::DetachUserENIResult> DetachUserENIOutcome;
			typedef std::future<DetachUserENIOutcome> DetachUserENIOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DetachUserENIRequest&, const DetachUserENIOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachUserENIAsyncHandler;
			typedef Outcome<Error, Model::DisableAdviceServiceResult> DisableAdviceServiceOutcome;
			typedef std::future<DisableAdviceServiceOutcome> DisableAdviceServiceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DisableAdviceServiceRequest&, const DisableAdviceServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableAdviceServiceAsyncHandler;
			typedef Outcome<Error, Model::DownloadDiagnosisRecordsResult> DownloadDiagnosisRecordsOutcome;
			typedef std::future<DownloadDiagnosisRecordsOutcome> DownloadDiagnosisRecordsOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::DownloadDiagnosisRecordsRequest&, const DownloadDiagnosisRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadDiagnosisRecordsAsyncHandler;
			typedef Outcome<Error, Model::EnableAdviceServiceResult> EnableAdviceServiceOutcome;
			typedef std::future<EnableAdviceServiceOutcome> EnableAdviceServiceOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::EnableAdviceServiceRequest&, const EnableAdviceServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAdviceServiceAsyncHandler;
			typedef Outcome<Error, Model::GrantOperatorPermissionResult> GrantOperatorPermissionOutcome;
			typedef std::future<GrantOperatorPermissionOutcome> GrantOperatorPermissionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::GrantOperatorPermissionRequest&, const GrantOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::KillProcessResult> KillProcessOutcome;
			typedef std::future<KillProcessOutcome> KillProcessOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::KillProcessRequest&, const KillProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillProcessAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::MigrateDBClusterResult> MigrateDBClusterOutcome;
			typedef std::future<MigrateDBClusterOutcome> MigrateDBClusterOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::MigrateDBClusterRequest&, const MigrateDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateDBClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAuditLogConfigResult> ModifyAuditLogConfigOutcome;
			typedef std::future<ModifyAuditLogConfigOutcome> ModifyAuditLogConfigOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyAuditLogConfigRequest&, const ModifyAuditLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditLogConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoRenewAttributeResult> ModifyAutoRenewAttributeOutcome;
			typedef std::future<ModifyAutoRenewAttributeOutcome> ModifyAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyAutoRenewAttributeRequest&, const ModifyAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterConnectionStringResult> ModifyClusterConnectionStringOutcome;
			typedef std::future<ModifyClusterConnectionStringOutcome> ModifyClusterConnectionStringOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyClusterConnectionStringRequest&, const ModifyClusterConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterResult> ModifyDBClusterOutcome;
			typedef std::future<ModifyDBClusterOutcome> ModifyDBClusterOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterRequest&, const ModifyDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterAccessWhiteListResult> ModifyDBClusterAccessWhiteListOutcome;
			typedef std::future<ModifyDBClusterAccessWhiteListOutcome> ModifyDBClusterAccessWhiteListOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterAccessWhiteListRequest&, const ModifyDBClusterAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterDescriptionResult> ModifyDBClusterDescriptionOutcome;
			typedef std::future<ModifyDBClusterDescriptionOutcome> ModifyDBClusterDescriptionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterDescriptionRequest&, const ModifyDBClusterDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterMaintainTimeResult> ModifyDBClusterMaintainTimeOutcome;
			typedef std::future<ModifyDBClusterMaintainTimeOutcome> ModifyDBClusterMaintainTimeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterMaintainTimeRequest&, const ModifyDBClusterMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterPayTypeResult> ModifyDBClusterPayTypeOutcome;
			typedef std::future<ModifyDBClusterPayTypeOutcome> ModifyDBClusterPayTypeOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterPayTypeRequest&, const ModifyDBClusterPayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterPayTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterResourceGroupResult> ModifyDBClusterResourceGroupOutcome;
			typedef std::future<ModifyDBClusterResourceGroupOutcome> ModifyDBClusterResourceGroupOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBClusterResourceGroupRequest&, const ModifyDBClusterResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBResourceGroupResult> ModifyDBResourceGroupOutcome;
			typedef std::future<ModifyDBResourceGroupOutcome> ModifyDBResourceGroupOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBResourceGroupRequest&, const ModifyDBResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBResourcePoolResult> ModifyDBResourcePoolOutcome;
			typedef std::future<ModifyDBResourcePoolOutcome> ModifyDBResourcePoolOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyDBResourcePoolRequest&, const ModifyDBResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::ModifyElasticPlanResult> ModifyElasticPlanOutcome;
			typedef std::future<ModifyElasticPlanOutcome> ModifyElasticPlanOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyElasticPlanRequest&, const ModifyElasticPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyElasticPlanAsyncHandler;
			typedef Outcome<Error, Model::ModifyLogBackupPolicyResult> ModifyLogBackupPolicyOutcome;
			typedef std::future<ModifyLogBackupPolicyOutcome> ModifyLogBackupPolicyOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyLogBackupPolicyRequest&, const ModifyLogBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyMaintenanceActionResult> ModifyMaintenanceActionOutcome;
			typedef std::future<ModifyMaintenanceActionOutcome> ModifyMaintenanceActionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ModifyMaintenanceActionRequest&, const ModifyMaintenanceActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaintenanceActionAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterPublicConnectionResult> ReleaseClusterPublicConnectionOutcome;
			typedef std::future<ReleaseClusterPublicConnectionOutcome> ReleaseClusterPublicConnectionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ReleaseClusterPublicConnectionRequest&, const ReleaseClusterPublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterPublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RevokeOperatorPermissionResult> RevokeOperatorPermissionOutcome;
			typedef std::future<RevokeOperatorPermissionOutcome> RevokeOperatorPermissionOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::RevokeOperatorPermissionRequest&, const RevokeOperatorPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeOperatorPermissionAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnbindDBResourceGroupWithUserResult> UnbindDBResourceGroupWithUserOutcome;
			typedef std::future<UnbindDBResourceGroupWithUserOutcome> UnbindDBResourceGroupWithUserOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::UnbindDBResourceGroupWithUserRequest&, const UnbindDBResourceGroupWithUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDBResourceGroupWithUserAsyncHandler;
			typedef Outcome<Error, Model::UnbindDBResourcePoolWithUserResult> UnbindDBResourcePoolWithUserOutcome;
			typedef std::future<UnbindDBResourcePoolWithUserOutcome> UnbindDBResourcePoolWithUserOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::UnbindDBResourcePoolWithUserRequest&, const UnbindDBResourcePoolWithUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDBResourcePoolWithUserAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const AdbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			AdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AdbClient();
			AllocateClusterPublicConnectionOutcome allocateClusterPublicConnection(const Model::AllocateClusterPublicConnectionRequest &request)const;
			void allocateClusterPublicConnectionAsync(const Model::AllocateClusterPublicConnectionRequest& request, const AllocateClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateClusterPublicConnectionOutcomeCallable allocateClusterPublicConnectionCallable(const Model::AllocateClusterPublicConnectionRequest& request) const;
			ApplyAdviceByIdOutcome applyAdviceById(const Model::ApplyAdviceByIdRequest &request)const;
			void applyAdviceByIdAsync(const Model::ApplyAdviceByIdRequest& request, const ApplyAdviceByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyAdviceByIdOutcomeCallable applyAdviceByIdCallable(const Model::ApplyAdviceByIdRequest& request) const;
			AttachUserENIOutcome attachUserENI(const Model::AttachUserENIRequest &request)const;
			void attachUserENIAsync(const Model::AttachUserENIRequest& request, const AttachUserENIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachUserENIOutcomeCallable attachUserENICallable(const Model::AttachUserENIRequest& request) const;
			BatchApplyAdviceByIdListOutcome batchApplyAdviceByIdList(const Model::BatchApplyAdviceByIdListRequest &request)const;
			void batchApplyAdviceByIdListAsync(const Model::BatchApplyAdviceByIdListRequest& request, const BatchApplyAdviceByIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchApplyAdviceByIdListOutcomeCallable batchApplyAdviceByIdListCallable(const Model::BatchApplyAdviceByIdListRequest& request) const;
			BindDBResourceGroupWithUserOutcome bindDBResourceGroupWithUser(const Model::BindDBResourceGroupWithUserRequest &request)const;
			void bindDBResourceGroupWithUserAsync(const Model::BindDBResourceGroupWithUserRequest& request, const BindDBResourceGroupWithUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindDBResourceGroupWithUserOutcomeCallable bindDBResourceGroupWithUserCallable(const Model::BindDBResourceGroupWithUserRequest& request) const;
			BindDBResourcePoolWithUserOutcome bindDBResourcePoolWithUser(const Model::BindDBResourcePoolWithUserRequest &request)const;
			void bindDBResourcePoolWithUserAsync(const Model::BindDBResourcePoolWithUserRequest& request, const BindDBResourcePoolWithUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindDBResourcePoolWithUserOutcomeCallable bindDBResourcePoolWithUserCallable(const Model::BindDBResourcePoolWithUserRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateDBClusterOutcome createDBCluster(const Model::CreateDBClusterRequest &request)const;
			void createDBClusterAsync(const Model::CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBClusterOutcomeCallable createDBClusterCallable(const Model::CreateDBClusterRequest& request) const;
			CreateDBResourceGroupOutcome createDBResourceGroup(const Model::CreateDBResourceGroupRequest &request)const;
			void createDBResourceGroupAsync(const Model::CreateDBResourceGroupRequest& request, const CreateDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBResourceGroupOutcomeCallable createDBResourceGroupCallable(const Model::CreateDBResourceGroupRequest& request) const;
			CreateDBResourcePoolOutcome createDBResourcePool(const Model::CreateDBResourcePoolRequest &request)const;
			void createDBResourcePoolAsync(const Model::CreateDBResourcePoolRequest& request, const CreateDBResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBResourcePoolOutcomeCallable createDBResourcePoolCallable(const Model::CreateDBResourcePoolRequest& request) const;
			CreateElasticPlanOutcome createElasticPlan(const Model::CreateElasticPlanRequest &request)const;
			void createElasticPlanAsync(const Model::CreateElasticPlanRequest& request, const CreateElasticPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateElasticPlanOutcomeCallable createElasticPlanCallable(const Model::CreateElasticPlanRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteDBClusterOutcome deleteDBCluster(const Model::DeleteDBClusterRequest &request)const;
			void deleteDBClusterAsync(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBClusterOutcomeCallable deleteDBClusterCallable(const Model::DeleteDBClusterRequest& request) const;
			DeleteDBResourceGroupOutcome deleteDBResourceGroup(const Model::DeleteDBResourceGroupRequest &request)const;
			void deleteDBResourceGroupAsync(const Model::DeleteDBResourceGroupRequest& request, const DeleteDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBResourceGroupOutcomeCallable deleteDBResourceGroupCallable(const Model::DeleteDBResourceGroupRequest& request) const;
			DeleteDBResourcePoolOutcome deleteDBResourcePool(const Model::DeleteDBResourcePoolRequest &request)const;
			void deleteDBResourcePoolAsync(const Model::DeleteDBResourcePoolRequest& request, const DeleteDBResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBResourcePoolOutcomeCallable deleteDBResourcePoolCallable(const Model::DeleteDBResourcePoolRequest& request) const;
			DeleteElasticPlanOutcome deleteElasticPlan(const Model::DeleteElasticPlanRequest &request)const;
			void deleteElasticPlanAsync(const Model::DeleteElasticPlanRequest& request, const DeleteElasticPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteElasticPlanOutcomeCallable deleteElasticPlanCallable(const Model::DeleteElasticPlanRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeAdviceServiceEnabledOutcome describeAdviceServiceEnabled(const Model::DescribeAdviceServiceEnabledRequest &request)const;
			void describeAdviceServiceEnabledAsync(const Model::DescribeAdviceServiceEnabledRequest& request, const DescribeAdviceServiceEnabledAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAdviceServiceEnabledOutcomeCallable describeAdviceServiceEnabledCallable(const Model::DescribeAdviceServiceEnabledRequest& request) const;
			DescribeAllAccountsOutcome describeAllAccounts(const Model::DescribeAllAccountsRequest &request)const;
			void describeAllAccountsAsync(const Model::DescribeAllAccountsRequest& request, const DescribeAllAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllAccountsOutcomeCallable describeAllAccountsCallable(const Model::DescribeAllAccountsRequest& request) const;
			DescribeAllDataSourceOutcome describeAllDataSource(const Model::DescribeAllDataSourceRequest &request)const;
			void describeAllDataSourceAsync(const Model::DescribeAllDataSourceRequest& request, const DescribeAllDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllDataSourceOutcomeCallable describeAllDataSourceCallable(const Model::DescribeAllDataSourceRequest& request) const;
			DescribeAppliedAdvicesOutcome describeAppliedAdvices(const Model::DescribeAppliedAdvicesRequest &request)const;
			void describeAppliedAdvicesAsync(const Model::DescribeAppliedAdvicesRequest& request, const DescribeAppliedAdvicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppliedAdvicesOutcomeCallable describeAppliedAdvicesCallable(const Model::DescribeAppliedAdvicesRequest& request) const;
			DescribeAuditLogConfigOutcome describeAuditLogConfig(const Model::DescribeAuditLogConfigRequest &request)const;
			void describeAuditLogConfigAsync(const Model::DescribeAuditLogConfigRequest& request, const DescribeAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditLogConfigOutcomeCallable describeAuditLogConfigCallable(const Model::DescribeAuditLogConfigRequest& request) const;
			DescribeAuditLogRecordsOutcome describeAuditLogRecords(const Model::DescribeAuditLogRecordsRequest &request)const;
			void describeAuditLogRecordsAsync(const Model::DescribeAuditLogRecordsRequest& request, const DescribeAuditLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuditLogRecordsOutcomeCallable describeAuditLogRecordsCallable(const Model::DescribeAuditLogRecordsRequest& request) const;
			DescribeAutoRenewAttributeOutcome describeAutoRenewAttribute(const Model::DescribeAutoRenewAttributeRequest &request)const;
			void describeAutoRenewAttributeAsync(const Model::DescribeAutoRenewAttributeRequest& request, const DescribeAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoRenewAttributeOutcomeCallable describeAutoRenewAttributeCallable(const Model::DescribeAutoRenewAttributeRequest& request) const;
			DescribeAvailableAdvicesOutcome describeAvailableAdvices(const Model::DescribeAvailableAdvicesRequest &request)const;
			void describeAvailableAdvicesAsync(const Model::DescribeAvailableAdvicesRequest& request, const DescribeAvailableAdvicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableAdvicesOutcomeCallable describeAvailableAdvicesCallable(const Model::DescribeAvailableAdvicesRequest& request) const;
			DescribeAvailableResourceOutcome describeAvailableResource(const Model::DescribeAvailableResourceRequest &request)const;
			void describeAvailableResourceAsync(const Model::DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableResourceOutcomeCallable describeAvailableResourceCallable(const Model::DescribeAvailableResourceRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeColumnsOutcome describeColumns(const Model::DescribeColumnsRequest &request)const;
			void describeColumnsAsync(const Model::DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeColumnsOutcomeCallable describeColumnsCallable(const Model::DescribeColumnsRequest& request) const;
			DescribeComputeResourceOutcome describeComputeResource(const Model::DescribeComputeResourceRequest &request)const;
			void describeComputeResourceAsync(const Model::DescribeComputeResourceRequest& request, const DescribeComputeResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeComputeResourceOutcomeCallable describeComputeResourceCallable(const Model::DescribeComputeResourceRequest& request) const;
			DescribeConnectionCountRecordsOutcome describeConnectionCountRecords(const Model::DescribeConnectionCountRecordsRequest &request)const;
			void describeConnectionCountRecordsAsync(const Model::DescribeConnectionCountRecordsRequest& request, const DescribeConnectionCountRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConnectionCountRecordsOutcomeCallable describeConnectionCountRecordsCallable(const Model::DescribeConnectionCountRecordsRequest& request) const;
			DescribeDBClusterAccessWhiteListOutcome describeDBClusterAccessWhiteList(const Model::DescribeDBClusterAccessWhiteListRequest &request)const;
			void describeDBClusterAccessWhiteListAsync(const Model::DescribeDBClusterAccessWhiteListRequest& request, const DescribeDBClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAccessWhiteListOutcomeCallable describeDBClusterAccessWhiteListCallable(const Model::DescribeDBClusterAccessWhiteListRequest& request) const;
			DescribeDBClusterAttributeOutcome describeDBClusterAttribute(const Model::DescribeDBClusterAttributeRequest &request)const;
			void describeDBClusterAttributeAsync(const Model::DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAttributeOutcomeCallable describeDBClusterAttributeCallable(const Model::DescribeDBClusterAttributeRequest& request) const;
			DescribeDBClusterHealthStatusOutcome describeDBClusterHealthStatus(const Model::DescribeDBClusterHealthStatusRequest &request)const;
			void describeDBClusterHealthStatusAsync(const Model::DescribeDBClusterHealthStatusRequest& request, const DescribeDBClusterHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterHealthStatusOutcomeCallable describeDBClusterHealthStatusCallable(const Model::DescribeDBClusterHealthStatusRequest& request) const;
			DescribeDBClusterNetInfoOutcome describeDBClusterNetInfo(const Model::DescribeDBClusterNetInfoRequest &request)const;
			void describeDBClusterNetInfoAsync(const Model::DescribeDBClusterNetInfoRequest& request, const DescribeDBClusterNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterNetInfoOutcomeCallable describeDBClusterNetInfoCallable(const Model::DescribeDBClusterNetInfoRequest& request) const;
			DescribeDBClusterPerformanceOutcome describeDBClusterPerformance(const Model::DescribeDBClusterPerformanceRequest &request)const;
			void describeDBClusterPerformanceAsync(const Model::DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterPerformanceOutcomeCallable describeDBClusterPerformanceCallable(const Model::DescribeDBClusterPerformanceRequest& request) const;
			DescribeDBClusterResourcePoolPerformanceOutcome describeDBClusterResourcePoolPerformance(const Model::DescribeDBClusterResourcePoolPerformanceRequest &request)const;
			void describeDBClusterResourcePoolPerformanceAsync(const Model::DescribeDBClusterResourcePoolPerformanceRequest& request, const DescribeDBClusterResourcePoolPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterResourcePoolPerformanceOutcomeCallable describeDBClusterResourcePoolPerformanceCallable(const Model::DescribeDBClusterResourcePoolPerformanceRequest& request) const;
			DescribeDBClusterStatusOutcome describeDBClusterStatus(const Model::DescribeDBClusterStatusRequest &request)const;
			void describeDBClusterStatusAsync(const Model::DescribeDBClusterStatusRequest& request, const DescribeDBClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterStatusOutcomeCallable describeDBClusterStatusCallable(const Model::DescribeDBClusterStatusRequest& request) const;
			DescribeDBClustersOutcome describeDBClusters(const Model::DescribeDBClustersRequest &request)const;
			void describeDBClustersAsync(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClustersOutcomeCallable describeDBClustersCallable(const Model::DescribeDBClustersRequest& request) const;
			DescribeDBResourceGroupOutcome describeDBResourceGroup(const Model::DescribeDBResourceGroupRequest &request)const;
			void describeDBResourceGroupAsync(const Model::DescribeDBResourceGroupRequest& request, const DescribeDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBResourceGroupOutcomeCallable describeDBResourceGroupCallable(const Model::DescribeDBResourceGroupRequest& request) const;
			DescribeDBResourcePoolOutcome describeDBResourcePool(const Model::DescribeDBResourcePoolRequest &request)const;
			void describeDBResourcePoolAsync(const Model::DescribeDBResourcePoolRequest& request, const DescribeDBResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBResourcePoolOutcomeCallable describeDBResourcePoolCallable(const Model::DescribeDBResourcePoolRequest& request) const;
			DescribeDiagnosisDimensionsOutcome describeDiagnosisDimensions(const Model::DescribeDiagnosisDimensionsRequest &request)const;
			void describeDiagnosisDimensionsAsync(const Model::DescribeDiagnosisDimensionsRequest& request, const DescribeDiagnosisDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnosisDimensionsOutcomeCallable describeDiagnosisDimensionsCallable(const Model::DescribeDiagnosisDimensionsRequest& request) const;
			DescribeDiagnosisMonitorPerformanceOutcome describeDiagnosisMonitorPerformance(const Model::DescribeDiagnosisMonitorPerformanceRequest &request)const;
			void describeDiagnosisMonitorPerformanceAsync(const Model::DescribeDiagnosisMonitorPerformanceRequest& request, const DescribeDiagnosisMonitorPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnosisMonitorPerformanceOutcomeCallable describeDiagnosisMonitorPerformanceCallable(const Model::DescribeDiagnosisMonitorPerformanceRequest& request) const;
			DescribeDiagnosisRecordsOutcome describeDiagnosisRecords(const Model::DescribeDiagnosisRecordsRequest &request)const;
			void describeDiagnosisRecordsAsync(const Model::DescribeDiagnosisRecordsRequest& request, const DescribeDiagnosisRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnosisRecordsOutcomeCallable describeDiagnosisRecordsCallable(const Model::DescribeDiagnosisRecordsRequest& request) const;
			DescribeDiagnosisSQLInfoOutcome describeDiagnosisSQLInfo(const Model::DescribeDiagnosisSQLInfoRequest &request)const;
			void describeDiagnosisSQLInfoAsync(const Model::DescribeDiagnosisSQLInfoRequest& request, const DescribeDiagnosisSQLInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnosisSQLInfoOutcomeCallable describeDiagnosisSQLInfoCallable(const Model::DescribeDiagnosisSQLInfoRequest& request) const;
			DescribeDiagnosisTasksOutcome describeDiagnosisTasks(const Model::DescribeDiagnosisTasksRequest &request)const;
			void describeDiagnosisTasksAsync(const Model::DescribeDiagnosisTasksRequest& request, const DescribeDiagnosisTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiagnosisTasksOutcomeCallable describeDiagnosisTasksCallable(const Model::DescribeDiagnosisTasksRequest& request) const;
			DescribeDownloadRecordsOutcome describeDownloadRecords(const Model::DescribeDownloadRecordsRequest &request)const;
			void describeDownloadRecordsAsync(const Model::DescribeDownloadRecordsRequest& request, const DescribeDownloadRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDownloadRecordsOutcomeCallable describeDownloadRecordsCallable(const Model::DescribeDownloadRecordsRequest& request) const;
			DescribeEIURangeOutcome describeEIURange(const Model::DescribeEIURangeRequest &request)const;
			void describeEIURangeAsync(const Model::DescribeEIURangeRequest& request, const DescribeEIURangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEIURangeOutcomeCallable describeEIURangeCallable(const Model::DescribeEIURangeRequest& request) const;
			DescribeElasticDailyPlanOutcome describeElasticDailyPlan(const Model::DescribeElasticDailyPlanRequest &request)const;
			void describeElasticDailyPlanAsync(const Model::DescribeElasticDailyPlanRequest& request, const DescribeElasticDailyPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElasticDailyPlanOutcomeCallable describeElasticDailyPlanCallable(const Model::DescribeElasticDailyPlanRequest& request) const;
			DescribeElasticPlanOutcome describeElasticPlan(const Model::DescribeElasticPlanRequest &request)const;
			void describeElasticPlanAsync(const Model::DescribeElasticPlanRequest& request, const DescribeElasticPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElasticPlanOutcomeCallable describeElasticPlanCallable(const Model::DescribeElasticPlanRequest& request) const;
			DescribeInclinedTablesOutcome describeInclinedTables(const Model::DescribeInclinedTablesRequest &request)const;
			void describeInclinedTablesAsync(const Model::DescribeInclinedTablesRequest& request, const DescribeInclinedTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInclinedTablesOutcomeCallable describeInclinedTablesCallable(const Model::DescribeInclinedTablesRequest& request) const;
			DescribeLoadTasksRecordsOutcome describeLoadTasksRecords(const Model::DescribeLoadTasksRecordsRequest &request)const;
			void describeLoadTasksRecordsAsync(const Model::DescribeLoadTasksRecordsRequest& request, const DescribeLoadTasksRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadTasksRecordsOutcomeCallable describeLoadTasksRecordsCallable(const Model::DescribeLoadTasksRecordsRequest& request) const;
			DescribeMaintenanceActionOutcome describeMaintenanceAction(const Model::DescribeMaintenanceActionRequest &request)const;
			void describeMaintenanceActionAsync(const Model::DescribeMaintenanceActionRequest& request, const DescribeMaintenanceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMaintenanceActionOutcomeCallable describeMaintenanceActionCallable(const Model::DescribeMaintenanceActionRequest& request) const;
			DescribeOperatorPermissionOutcome describeOperatorPermission(const Model::DescribeOperatorPermissionRequest &request)const;
			void describeOperatorPermissionAsync(const Model::DescribeOperatorPermissionRequest& request, const DescribeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOperatorPermissionOutcomeCallable describeOperatorPermissionCallable(const Model::DescribeOperatorPermissionRequest& request) const;
			DescribePatternPerformanceOutcome describePatternPerformance(const Model::DescribePatternPerformanceRequest &request)const;
			void describePatternPerformanceAsync(const Model::DescribePatternPerformanceRequest& request, const DescribePatternPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePatternPerformanceOutcomeCallable describePatternPerformanceCallable(const Model::DescribePatternPerformanceRequest& request) const;
			DescribeProcessListOutcome describeProcessList(const Model::DescribeProcessListRequest &request)const;
			void describeProcessListAsync(const Model::DescribeProcessListRequest& request, const DescribeProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProcessListOutcomeCallable describeProcessListCallable(const Model::DescribeProcessListRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSQLPatternsOutcome describeSQLPatterns(const Model::DescribeSQLPatternsRequest &request)const;
			void describeSQLPatternsAsync(const Model::DescribeSQLPatternsRequest& request, const DescribeSQLPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLPatternsOutcomeCallable describeSQLPatternsCallable(const Model::DescribeSQLPatternsRequest& request) const;
			DescribeSQLPlanOutcome describeSQLPlan(const Model::DescribeSQLPlanRequest &request)const;
			void describeSQLPlanAsync(const Model::DescribeSQLPlanRequest& request, const DescribeSQLPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLPlanOutcomeCallable describeSQLPlanCallable(const Model::DescribeSQLPlanRequest& request) const;
			DescribeSQLPlanTaskOutcome describeSQLPlanTask(const Model::DescribeSQLPlanTaskRequest &request)const;
			void describeSQLPlanTaskAsync(const Model::DescribeSQLPlanTaskRequest& request, const DescribeSQLPlanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLPlanTaskOutcomeCallable describeSQLPlanTaskCallable(const Model::DescribeSQLPlanTaskRequest& request) const;
			DescribeSchemasOutcome describeSchemas(const Model::DescribeSchemasRequest &request)const;
			void describeSchemasAsync(const Model::DescribeSchemasRequest& request, const DescribeSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSchemasOutcomeCallable describeSchemasCallable(const Model::DescribeSchemasRequest& request) const;
			DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
			void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
			DescribeSlowLogTrendOutcome describeSlowLogTrend(const Model::DescribeSlowLogTrendRequest &request)const;
			void describeSlowLogTrendAsync(const Model::DescribeSlowLogTrendRequest& request, const DescribeSlowLogTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogTrendOutcomeCallable describeSlowLogTrendCallable(const Model::DescribeSlowLogTrendRequest& request) const;
			DescribeSqlPatternOutcome describeSqlPattern(const Model::DescribeSqlPatternRequest &request)const;
			void describeSqlPatternAsync(const Model::DescribeSqlPatternRequest& request, const DescribeSqlPatternAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSqlPatternOutcomeCallable describeSqlPatternCallable(const Model::DescribeSqlPatternRequest& request) const;
			DescribeTableAccessCountOutcome describeTableAccessCount(const Model::DescribeTableAccessCountRequest &request)const;
			void describeTableAccessCountAsync(const Model::DescribeTableAccessCountRequest& request, const DescribeTableAccessCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTableAccessCountOutcomeCallable describeTableAccessCountCallable(const Model::DescribeTableAccessCountRequest& request) const;
			DescribeTableDetailOutcome describeTableDetail(const Model::DescribeTableDetailRequest &request)const;
			void describeTableDetailAsync(const Model::DescribeTableDetailRequest& request, const DescribeTableDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTableDetailOutcomeCallable describeTableDetailCallable(const Model::DescribeTableDetailRequest& request) const;
			DescribeTablePartitionDiagnoseOutcome describeTablePartitionDiagnose(const Model::DescribeTablePartitionDiagnoseRequest &request)const;
			void describeTablePartitionDiagnoseAsync(const Model::DescribeTablePartitionDiagnoseRequest& request, const DescribeTablePartitionDiagnoseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTablePartitionDiagnoseOutcomeCallable describeTablePartitionDiagnoseCallable(const Model::DescribeTablePartitionDiagnoseRequest& request) const;
			DescribeTableStatisticsOutcome describeTableStatistics(const Model::DescribeTableStatisticsRequest &request)const;
			void describeTableStatisticsAsync(const Model::DescribeTableStatisticsRequest& request, const DescribeTableStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTableStatisticsOutcomeCallable describeTableStatisticsCallable(const Model::DescribeTableStatisticsRequest& request) const;
			DescribeTablesOutcome describeTables(const Model::DescribeTablesRequest &request)const;
			void describeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTablesOutcomeCallable describeTablesCallable(const Model::DescribeTablesRequest& request) const;
			DescribeTaskInfoOutcome describeTaskInfo(const Model::DescribeTaskInfoRequest &request)const;
			void describeTaskInfoAsync(const Model::DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTaskInfoOutcomeCallable describeTaskInfoCallable(const Model::DescribeTaskInfoRequest& request) const;
			DescribeVSwitchesOutcome describeVSwitches(const Model::DescribeVSwitchesRequest &request)const;
			void describeVSwitchesAsync(const Model::DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchesOutcomeCallable describeVSwitchesCallable(const Model::DescribeVSwitchesRequest& request) const;
			DetachUserENIOutcome detachUserENI(const Model::DetachUserENIRequest &request)const;
			void detachUserENIAsync(const Model::DetachUserENIRequest& request, const DetachUserENIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachUserENIOutcomeCallable detachUserENICallable(const Model::DetachUserENIRequest& request) const;
			DisableAdviceServiceOutcome disableAdviceService(const Model::DisableAdviceServiceRequest &request)const;
			void disableAdviceServiceAsync(const Model::DisableAdviceServiceRequest& request, const DisableAdviceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableAdviceServiceOutcomeCallable disableAdviceServiceCallable(const Model::DisableAdviceServiceRequest& request) const;
			DownloadDiagnosisRecordsOutcome downloadDiagnosisRecords(const Model::DownloadDiagnosisRecordsRequest &request)const;
			void downloadDiagnosisRecordsAsync(const Model::DownloadDiagnosisRecordsRequest& request, const DownloadDiagnosisRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadDiagnosisRecordsOutcomeCallable downloadDiagnosisRecordsCallable(const Model::DownloadDiagnosisRecordsRequest& request) const;
			EnableAdviceServiceOutcome enableAdviceService(const Model::EnableAdviceServiceRequest &request)const;
			void enableAdviceServiceAsync(const Model::EnableAdviceServiceRequest& request, const EnableAdviceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAdviceServiceOutcomeCallable enableAdviceServiceCallable(const Model::EnableAdviceServiceRequest& request) const;
			GrantOperatorPermissionOutcome grantOperatorPermission(const Model::GrantOperatorPermissionRequest &request)const;
			void grantOperatorPermissionAsync(const Model::GrantOperatorPermissionRequest& request, const GrantOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantOperatorPermissionOutcomeCallable grantOperatorPermissionCallable(const Model::GrantOperatorPermissionRequest& request) const;
			KillProcessOutcome killProcess(const Model::KillProcessRequest &request)const;
			void killProcessAsync(const Model::KillProcessRequest& request, const KillProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillProcessOutcomeCallable killProcessCallable(const Model::KillProcessRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			MigrateDBClusterOutcome migrateDBCluster(const Model::MigrateDBClusterRequest &request)const;
			void migrateDBClusterAsync(const Model::MigrateDBClusterRequest& request, const MigrateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateDBClusterOutcomeCallable migrateDBClusterCallable(const Model::MigrateDBClusterRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAuditLogConfigOutcome modifyAuditLogConfig(const Model::ModifyAuditLogConfigRequest &request)const;
			void modifyAuditLogConfigAsync(const Model::ModifyAuditLogConfigRequest& request, const ModifyAuditLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAuditLogConfigOutcomeCallable modifyAuditLogConfigCallable(const Model::ModifyAuditLogConfigRequest& request) const;
			ModifyAutoRenewAttributeOutcome modifyAutoRenewAttribute(const Model::ModifyAutoRenewAttributeRequest &request)const;
			void modifyAutoRenewAttributeAsync(const Model::ModifyAutoRenewAttributeRequest& request, const ModifyAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoRenewAttributeOutcomeCallable modifyAutoRenewAttributeCallable(const Model::ModifyAutoRenewAttributeRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyClusterConnectionStringOutcome modifyClusterConnectionString(const Model::ModifyClusterConnectionStringRequest &request)const;
			void modifyClusterConnectionStringAsync(const Model::ModifyClusterConnectionStringRequest& request, const ModifyClusterConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterConnectionStringOutcomeCallable modifyClusterConnectionStringCallable(const Model::ModifyClusterConnectionStringRequest& request) const;
			ModifyDBClusterOutcome modifyDBCluster(const Model::ModifyDBClusterRequest &request)const;
			void modifyDBClusterAsync(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterOutcomeCallable modifyDBClusterCallable(const Model::ModifyDBClusterRequest& request) const;
			ModifyDBClusterAccessWhiteListOutcome modifyDBClusterAccessWhiteList(const Model::ModifyDBClusterAccessWhiteListRequest &request)const;
			void modifyDBClusterAccessWhiteListAsync(const Model::ModifyDBClusterAccessWhiteListRequest& request, const ModifyDBClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterAccessWhiteListOutcomeCallable modifyDBClusterAccessWhiteListCallable(const Model::ModifyDBClusterAccessWhiteListRequest& request) const;
			ModifyDBClusterDescriptionOutcome modifyDBClusterDescription(const Model::ModifyDBClusterDescriptionRequest &request)const;
			void modifyDBClusterDescriptionAsync(const Model::ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterDescriptionOutcomeCallable modifyDBClusterDescriptionCallable(const Model::ModifyDBClusterDescriptionRequest& request) const;
			ModifyDBClusterMaintainTimeOutcome modifyDBClusterMaintainTime(const Model::ModifyDBClusterMaintainTimeRequest &request)const;
			void modifyDBClusterMaintainTimeAsync(const Model::ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterMaintainTimeOutcomeCallable modifyDBClusterMaintainTimeCallable(const Model::ModifyDBClusterMaintainTimeRequest& request) const;
			ModifyDBClusterPayTypeOutcome modifyDBClusterPayType(const Model::ModifyDBClusterPayTypeRequest &request)const;
			void modifyDBClusterPayTypeAsync(const Model::ModifyDBClusterPayTypeRequest& request, const ModifyDBClusterPayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterPayTypeOutcomeCallable modifyDBClusterPayTypeCallable(const Model::ModifyDBClusterPayTypeRequest& request) const;
			ModifyDBClusterResourceGroupOutcome modifyDBClusterResourceGroup(const Model::ModifyDBClusterResourceGroupRequest &request)const;
			void modifyDBClusterResourceGroupAsync(const Model::ModifyDBClusterResourceGroupRequest& request, const ModifyDBClusterResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterResourceGroupOutcomeCallable modifyDBClusterResourceGroupCallable(const Model::ModifyDBClusterResourceGroupRequest& request) const;
			ModifyDBResourceGroupOutcome modifyDBResourceGroup(const Model::ModifyDBResourceGroupRequest &request)const;
			void modifyDBResourceGroupAsync(const Model::ModifyDBResourceGroupRequest& request, const ModifyDBResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBResourceGroupOutcomeCallable modifyDBResourceGroupCallable(const Model::ModifyDBResourceGroupRequest& request) const;
			ModifyDBResourcePoolOutcome modifyDBResourcePool(const Model::ModifyDBResourcePoolRequest &request)const;
			void modifyDBResourcePoolAsync(const Model::ModifyDBResourcePoolRequest& request, const ModifyDBResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBResourcePoolOutcomeCallable modifyDBResourcePoolCallable(const Model::ModifyDBResourcePoolRequest& request) const;
			ModifyElasticPlanOutcome modifyElasticPlan(const Model::ModifyElasticPlanRequest &request)const;
			void modifyElasticPlanAsync(const Model::ModifyElasticPlanRequest& request, const ModifyElasticPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyElasticPlanOutcomeCallable modifyElasticPlanCallable(const Model::ModifyElasticPlanRequest& request) const;
			ModifyLogBackupPolicyOutcome modifyLogBackupPolicy(const Model::ModifyLogBackupPolicyRequest &request)const;
			void modifyLogBackupPolicyAsync(const Model::ModifyLogBackupPolicyRequest& request, const ModifyLogBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLogBackupPolicyOutcomeCallable modifyLogBackupPolicyCallable(const Model::ModifyLogBackupPolicyRequest& request) const;
			ModifyMaintenanceActionOutcome modifyMaintenanceAction(const Model::ModifyMaintenanceActionRequest &request)const;
			void modifyMaintenanceActionAsync(const Model::ModifyMaintenanceActionRequest& request, const ModifyMaintenanceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMaintenanceActionOutcomeCallable modifyMaintenanceActionCallable(const Model::ModifyMaintenanceActionRequest& request) const;
			ReleaseClusterPublicConnectionOutcome releaseClusterPublicConnection(const Model::ReleaseClusterPublicConnectionRequest &request)const;
			void releaseClusterPublicConnectionAsync(const Model::ReleaseClusterPublicConnectionRequest& request, const ReleaseClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterPublicConnectionOutcomeCallable releaseClusterPublicConnectionCallable(const Model::ReleaseClusterPublicConnectionRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			RevokeOperatorPermissionOutcome revokeOperatorPermission(const Model::RevokeOperatorPermissionRequest &request)const;
			void revokeOperatorPermissionAsync(const Model::RevokeOperatorPermissionRequest& request, const RevokeOperatorPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeOperatorPermissionOutcomeCallable revokeOperatorPermissionCallable(const Model::RevokeOperatorPermissionRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnbindDBResourceGroupWithUserOutcome unbindDBResourceGroupWithUser(const Model::UnbindDBResourceGroupWithUserRequest &request)const;
			void unbindDBResourceGroupWithUserAsync(const Model::UnbindDBResourceGroupWithUserRequest& request, const UnbindDBResourceGroupWithUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindDBResourceGroupWithUserOutcomeCallable unbindDBResourceGroupWithUserCallable(const Model::UnbindDBResourceGroupWithUserRequest& request) const;
			UnbindDBResourcePoolWithUserOutcome unbindDBResourcePoolWithUser(const Model::UnbindDBResourcePoolWithUserRequest &request)const;
			void unbindDBResourcePoolWithUserAsync(const Model::UnbindDBResourcePoolWithUserRequest& request, const UnbindDBResourcePoolWithUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindDBResourcePoolWithUserOutcomeCallable unbindDBResourcePoolWithUserCallable(const Model::UnbindDBResourcePoolWithUserRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ADB_ADBCLIENT_H_
