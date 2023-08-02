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

#ifndef ALIBABACLOUD_GPDB_GPDBCLIENT_H_
#define ALIBABACLOUD_GPDB_GPDBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "GpdbExport.h"
#include "model/AllocateInstancePublicConnectionRequest.h"
#include "model/AllocateInstancePublicConnectionResult.h"
#include "model/CheckServiceLinkedRoleRequest.h"
#include "model/CheckServiceLinkedRoleResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateCollectionRequest.h"
#include "model/CreateCollectionResult.h"
#include "model/CreateDBInstanceRequest.h"
#include "model/CreateDBInstanceResult.h"
#include "model/CreateDBInstancePlanRequest.h"
#include "model/CreateDBInstancePlanResult.h"
#include "model/CreateNamespaceRequest.h"
#include "model/CreateNamespaceResult.h"
#include "model/CreateSampleDataRequest.h"
#include "model/CreateSampleDataResult.h"
#include "model/CreateServiceLinkedRoleRequest.h"
#include "model/CreateServiceLinkedRoleResult.h"
#include "model/CreateVectorIndexRequest.h"
#include "model/CreateVectorIndexResult.h"
#include "model/DeleteCollectionRequest.h"
#include "model/DeleteCollectionResult.h"
#include "model/DeleteCollectionDataRequest.h"
#include "model/DeleteCollectionDataResult.h"
#include "model/DeleteDBInstanceRequest.h"
#include "model/DeleteDBInstanceResult.h"
#include "model/DeleteDBInstancePlanRequest.h"
#include "model/DeleteDBInstancePlanResult.h"
#include "model/DeleteNamespaceRequest.h"
#include "model/DeleteNamespaceResult.h"
#include "model/DeleteVectorIndexRequest.h"
#include "model/DeleteVectorIndexResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeAvailableResourcesRequest.h"
#include "model/DescribeAvailableResourcesResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeCollectionRequest.h"
#include "model/DescribeCollectionResult.h"
#include "model/DescribeDBClusterNodeRequest.h"
#include "model/DescribeDBClusterNodeResult.h"
#include "model/DescribeDBClusterPerformanceRequest.h"
#include "model/DescribeDBClusterPerformanceResult.h"
#include "model/DescribeDBInstanceAttributeRequest.h"
#include "model/DescribeDBInstanceAttributeResult.h"
#include "model/DescribeDBInstanceDataBloatRequest.h"
#include "model/DescribeDBInstanceDataBloatResult.h"
#include "model/DescribeDBInstanceDataSkewRequest.h"
#include "model/DescribeDBInstanceDataSkewResult.h"
#include "model/DescribeDBInstanceDiagnosisSummaryRequest.h"
#include "model/DescribeDBInstanceDiagnosisSummaryResult.h"
#include "model/DescribeDBInstanceErrorLogRequest.h"
#include "model/DescribeDBInstanceErrorLogResult.h"
#include "model/DescribeDBInstanceIPArrayListRequest.h"
#include "model/DescribeDBInstanceIPArrayListResult.h"
#include "model/DescribeDBInstanceIndexUsageRequest.h"
#include "model/DescribeDBInstanceIndexUsageResult.h"
#include "model/DescribeDBInstanceNetInfoRequest.h"
#include "model/DescribeDBInstanceNetInfoResult.h"
#include "model/DescribeDBInstancePerformanceRequest.h"
#include "model/DescribeDBInstancePerformanceResult.h"
#include "model/DescribeDBInstancePlansRequest.h"
#include "model/DescribeDBInstancePlansResult.h"
#include "model/DescribeDBInstanceSSLRequest.h"
#include "model/DescribeDBInstanceSSLResult.h"
#include "model/DescribeDBInstancesRequest.h"
#include "model/DescribeDBInstancesResult.h"
#include "model/DescribeDataBackupsRequest.h"
#include "model/DescribeDataBackupsResult.h"
#include "model/DescribeDataReDistributeInfoRequest.h"
#include "model/DescribeDataReDistributeInfoResult.h"
#include "model/DescribeDataShareInstancesRequest.h"
#include "model/DescribeDataShareInstancesResult.h"
#include "model/DescribeDataSharePerformanceRequest.h"
#include "model/DescribeDataSharePerformanceResult.h"
#include "model/DescribeDiagnosisDimensionsRequest.h"
#include "model/DescribeDiagnosisDimensionsResult.h"
#include "model/DescribeDiagnosisMonitorPerformanceRequest.h"
#include "model/DescribeDiagnosisMonitorPerformanceResult.h"
#include "model/DescribeDiagnosisRecordsRequest.h"
#include "model/DescribeDiagnosisRecordsResult.h"
#include "model/DescribeDiagnosisSQLInfoRequest.h"
#include "model/DescribeDiagnosisSQLInfoResult.h"
#include "model/DescribeDownloadRecordsRequest.h"
#include "model/DescribeDownloadRecordsResult.h"
#include "model/DescribeDownloadSQLLogsRequest.h"
#include "model/DescribeDownloadSQLLogsResult.h"
#include "model/DescribeHealthStatusRequest.h"
#include "model/DescribeHealthStatusResult.h"
#include "model/DescribeLogBackupsRequest.h"
#include "model/DescribeLogBackupsResult.h"
#include "model/DescribeModifyParameterLogRequest.h"
#include "model/DescribeModifyParameterLogResult.h"
#include "model/DescribeNamespaceRequest.h"
#include "model/DescribeNamespaceResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/DescribeRdsVSwitchsRequest.h"
#include "model/DescribeRdsVSwitchsResult.h"
#include "model/DescribeRdsVpcsRequest.h"
#include "model/DescribeRdsVpcsResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSQLLogCountRequest.h"
#include "model/DescribeSQLLogCountResult.h"
#include "model/DescribeSQLLogsV2Request.h"
#include "model/DescribeSQLLogsV2Result.h"
#include "model/DescribeSampleDataRequest.h"
#include "model/DescribeSampleDataResult.h"
#include "model/DescribeSupportFeaturesRequest.h"
#include "model/DescribeSupportFeaturesResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DescribeUserEncryptionKeyListRequest.h"
#include "model/DescribeUserEncryptionKeyListResult.h"
#include "model/DescribeWaitingSQLInfoRequest.h"
#include "model/DescribeWaitingSQLInfoResult.h"
#include "model/DescribeWaitingSQLRecordsRequest.h"
#include "model/DescribeWaitingSQLRecordsResult.h"
#include "model/DownloadDiagnosisRecordsRequest.h"
#include "model/DownloadDiagnosisRecordsResult.h"
#include "model/DownloadSQLLogsRecordsRequest.h"
#include "model/DownloadSQLLogsRecordsResult.h"
#include "model/GrantCollectionRequest.h"
#include "model/GrantCollectionResult.h"
#include "model/InitVectorDatabaseRequest.h"
#include "model/InitVectorDatabaseResult.h"
#include "model/ListCollectionsRequest.h"
#include "model/ListCollectionsResult.h"
#include "model/ListNamespacesRequest.h"
#include "model/ListNamespacesResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyDBInstanceConfigRequest.h"
#include "model/ModifyDBInstanceConfigResult.h"
#include "model/ModifyDBInstanceConnectionStringRequest.h"
#include "model/ModifyDBInstanceConnectionStringResult.h"
#include "model/ModifyDBInstanceDescriptionRequest.h"
#include "model/ModifyDBInstanceDescriptionResult.h"
#include "model/ModifyDBInstanceMaintainTimeRequest.h"
#include "model/ModifyDBInstanceMaintainTimeResult.h"
#include "model/ModifyDBInstanceResourceGroupRequest.h"
#include "model/ModifyDBInstanceResourceGroupResult.h"
#include "model/ModifyDBInstanceSSLRequest.h"
#include "model/ModifyDBInstanceSSLResult.h"
#include "model/ModifyParametersRequest.h"
#include "model/ModifyParametersResult.h"
#include "model/ModifySQLCollectorPolicyRequest.h"
#include "model/ModifySQLCollectorPolicyResult.h"
#include "model/ModifySecurityIpsRequest.h"
#include "model/ModifySecurityIpsResult.h"
#include "model/ModifyVectorConfigurationRequest.h"
#include "model/ModifyVectorConfigurationResult.h"
#include "model/PauseInstanceRequest.h"
#include "model/PauseInstanceResult.h"
#include "model/QueryCollectionDataRequest.h"
#include "model/QueryCollectionDataResult.h"
#include "model/RebalanceDBInstanceRequest.h"
#include "model/RebalanceDBInstanceResult.h"
#include "model/ReleaseInstancePublicConnectionRequest.h"
#include "model/ReleaseInstancePublicConnectionResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/RestartDBInstanceRequest.h"
#include "model/RestartDBInstanceResult.h"
#include "model/ResumeInstanceRequest.h"
#include "model/ResumeInstanceResult.h"
#include "model/SetDBInstancePlanStatusRequest.h"
#include "model/SetDBInstancePlanStatusResult.h"
#include "model/SetDataShareInstanceRequest.h"
#include "model/SetDataShareInstanceResult.h"
#include "model/SwitchDBInstanceNetTypeRequest.h"
#include "model/SwitchDBInstanceNetTypeResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnloadSampleDataRequest.h"
#include "model/UnloadSampleDataResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateDBInstancePlanRequest.h"
#include "model/UpdateDBInstancePlanResult.h"
#include "model/UpgradeDBInstanceRequest.h"
#include "model/UpgradeDBInstanceResult.h"
#include "model/UpgradeDBVersionRequest.h"
#include "model/UpgradeDBVersionResult.h"
#include "model/UpsertCollectionDataRequest.h"
#include "model/UpsertCollectionDataResult.h"


namespace AlibabaCloud
{
	namespace Gpdb
	{
		class ALIBABACLOUD_GPDB_EXPORT GpdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocateInstancePublicConnectionResult> AllocateInstancePublicConnectionOutcome;
			typedef std::future<AllocateInstancePublicConnectionOutcome> AllocateInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::AllocateInstancePublicConnectionRequest&, const AllocateInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::CheckServiceLinkedRoleResult> CheckServiceLinkedRoleOutcome;
			typedef std::future<CheckServiceLinkedRoleOutcome> CheckServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CheckServiceLinkedRoleRequest&, const CheckServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateCollectionResult> CreateCollectionOutcome;
			typedef std::future<CreateCollectionOutcome> CreateCollectionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CreateCollectionRequest&, const CreateCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCollectionAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceResult> CreateDBInstanceOutcome;
			typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CreateDBInstanceRequest&, const CreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstancePlanResult> CreateDBInstancePlanOutcome;
			typedef std::future<CreateDBInstancePlanOutcome> CreateDBInstancePlanOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CreateDBInstancePlanRequest&, const CreateDBInstancePlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstancePlanAsyncHandler;
			typedef Outcome<Error, Model::CreateNamespaceResult> CreateNamespaceOutcome;
			typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CreateNamespaceRequest&, const CreateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::CreateSampleDataResult> CreateSampleDataOutcome;
			typedef std::future<CreateSampleDataOutcome> CreateSampleDataOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CreateSampleDataRequest&, const CreateSampleDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSampleDataAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleResult> CreateServiceLinkedRoleOutcome;
			typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CreateServiceLinkedRoleRequest&, const CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateVectorIndexResult> CreateVectorIndexOutcome;
			typedef std::future<CreateVectorIndexOutcome> CreateVectorIndexOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CreateVectorIndexRequest&, const CreateVectorIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVectorIndexAsyncHandler;
			typedef Outcome<Error, Model::DeleteCollectionResult> DeleteCollectionOutcome;
			typedef std::future<DeleteCollectionOutcome> DeleteCollectionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DeleteCollectionRequest&, const DeleteCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCollectionAsyncHandler;
			typedef Outcome<Error, Model::DeleteCollectionDataResult> DeleteCollectionDataOutcome;
			typedef std::future<DeleteCollectionDataOutcome> DeleteCollectionDataOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DeleteCollectionDataRequest&, const DeleteCollectionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCollectionDataAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstanceResult> DeleteDBInstanceOutcome;
			typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DeleteDBInstanceRequest&, const DeleteDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstancePlanResult> DeleteDBInstancePlanOutcome;
			typedef std::future<DeleteDBInstancePlanOutcome> DeleteDBInstancePlanOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DeleteDBInstancePlanRequest&, const DeleteDBInstancePlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstancePlanAsyncHandler;
			typedef Outcome<Error, Model::DeleteNamespaceResult> DeleteNamespaceOutcome;
			typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DeleteNamespaceRequest&, const DeleteNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteVectorIndexResult> DeleteVectorIndexOutcome;
			typedef std::future<DeleteVectorIndexOutcome> DeleteVectorIndexOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DeleteVectorIndexRequest&, const DeleteVectorIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVectorIndexAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableResourcesResult> DescribeAvailableResourcesOutcome;
			typedef std::future<DescribeAvailableResourcesOutcome> DescribeAvailableResourcesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeAvailableResourcesRequest&, const DescribeAvailableResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeCollectionResult> DescribeCollectionOutcome;
			typedef std::future<DescribeCollectionOutcome> DescribeCollectionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeCollectionRequest&, const DescribeCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCollectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterNodeResult> DescribeDBClusterNodeOutcome;
			typedef std::future<DescribeDBClusterNodeOutcome> DescribeDBClusterNodeOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBClusterNodeRequest&, const DescribeDBClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterNodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterPerformanceResult> DescribeDBClusterPerformanceOutcome;
			typedef std::future<DescribeDBClusterPerformanceOutcome> DescribeDBClusterPerformanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBClusterPerformanceRequest&, const DescribeDBClusterPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceAttributeResult> DescribeDBInstanceAttributeOutcome;
			typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceAttributeRequest&, const DescribeDBInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceDataBloatResult> DescribeDBInstanceDataBloatOutcome;
			typedef std::future<DescribeDBInstanceDataBloatOutcome> DescribeDBInstanceDataBloatOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceDataBloatRequest&, const DescribeDBInstanceDataBloatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceDataBloatAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceDataSkewResult> DescribeDBInstanceDataSkewOutcome;
			typedef std::future<DescribeDBInstanceDataSkewOutcome> DescribeDBInstanceDataSkewOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceDataSkewRequest&, const DescribeDBInstanceDataSkewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceDataSkewAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceDiagnosisSummaryResult> DescribeDBInstanceDiagnosisSummaryOutcome;
			typedef std::future<DescribeDBInstanceDiagnosisSummaryOutcome> DescribeDBInstanceDiagnosisSummaryOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceDiagnosisSummaryRequest&, const DescribeDBInstanceDiagnosisSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceDiagnosisSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceErrorLogResult> DescribeDBInstanceErrorLogOutcome;
			typedef std::future<DescribeDBInstanceErrorLogOutcome> DescribeDBInstanceErrorLogOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceErrorLogRequest&, const DescribeDBInstanceErrorLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceErrorLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceIPArrayListResult> DescribeDBInstanceIPArrayListOutcome;
			typedef std::future<DescribeDBInstanceIPArrayListOutcome> DescribeDBInstanceIPArrayListOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceIPArrayListRequest&, const DescribeDBInstanceIPArrayListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceIPArrayListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceIndexUsageResult> DescribeDBInstanceIndexUsageOutcome;
			typedef std::future<DescribeDBInstanceIndexUsageOutcome> DescribeDBInstanceIndexUsageOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceIndexUsageRequest&, const DescribeDBInstanceIndexUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceIndexUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetInfoResult> DescribeDBInstanceNetInfoOutcome;
			typedef std::future<DescribeDBInstanceNetInfoOutcome> DescribeDBInstanceNetInfoOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceNetInfoRequest&, const DescribeDBInstanceNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancePerformanceResult> DescribeDBInstancePerformanceOutcome;
			typedef std::future<DescribeDBInstancePerformanceOutcome> DescribeDBInstancePerformanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstancePerformanceRequest&, const DescribeDBInstancePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancePlansResult> DescribeDBInstancePlansOutcome;
			typedef std::future<DescribeDBInstancePlansOutcome> DescribeDBInstancePlansOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstancePlansRequest&, const DescribeDBInstancePlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancePlansAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceSSLResult> DescribeDBInstanceSSLOutcome;
			typedef std::future<DescribeDBInstanceSSLOutcome> DescribeDBInstanceSSLOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceSSLRequest&, const DescribeDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesResult> DescribeDBInstancesOutcome;
			typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstancesRequest&, const DescribeDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataBackupsResult> DescribeDataBackupsOutcome;
			typedef std::future<DescribeDataBackupsOutcome> DescribeDataBackupsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDataBackupsRequest&, const DescribeDataBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataReDistributeInfoResult> DescribeDataReDistributeInfoOutcome;
			typedef std::future<DescribeDataReDistributeInfoOutcome> DescribeDataReDistributeInfoOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDataReDistributeInfoRequest&, const DescribeDataReDistributeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataReDistributeInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataShareInstancesResult> DescribeDataShareInstancesOutcome;
			typedef std::future<DescribeDataShareInstancesOutcome> DescribeDataShareInstancesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDataShareInstancesRequest&, const DescribeDataShareInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataShareInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSharePerformanceResult> DescribeDataSharePerformanceOutcome;
			typedef std::future<DescribeDataSharePerformanceOutcome> DescribeDataSharePerformanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDataSharePerformanceRequest&, const DescribeDataSharePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSharePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisDimensionsResult> DescribeDiagnosisDimensionsOutcome;
			typedef std::future<DescribeDiagnosisDimensionsOutcome> DescribeDiagnosisDimensionsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDiagnosisDimensionsRequest&, const DescribeDiagnosisDimensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisDimensionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisMonitorPerformanceResult> DescribeDiagnosisMonitorPerformanceOutcome;
			typedef std::future<DescribeDiagnosisMonitorPerformanceOutcome> DescribeDiagnosisMonitorPerformanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDiagnosisMonitorPerformanceRequest&, const DescribeDiagnosisMonitorPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisMonitorPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisRecordsResult> DescribeDiagnosisRecordsOutcome;
			typedef std::future<DescribeDiagnosisRecordsOutcome> DescribeDiagnosisRecordsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDiagnosisRecordsRequest&, const DescribeDiagnosisRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiagnosisSQLInfoResult> DescribeDiagnosisSQLInfoOutcome;
			typedef std::future<DescribeDiagnosisSQLInfoOutcome> DescribeDiagnosisSQLInfoOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDiagnosisSQLInfoRequest&, const DescribeDiagnosisSQLInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnosisSQLInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDownloadRecordsResult> DescribeDownloadRecordsOutcome;
			typedef std::future<DescribeDownloadRecordsOutcome> DescribeDownloadRecordsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDownloadRecordsRequest&, const DescribeDownloadRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDownloadSQLLogsResult> DescribeDownloadSQLLogsOutcome;
			typedef std::future<DescribeDownloadSQLLogsOutcome> DescribeDownloadSQLLogsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDownloadSQLLogsRequest&, const DescribeDownloadSQLLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadSQLLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeHealthStatusResult> DescribeHealthStatusOutcome;
			typedef std::future<DescribeHealthStatusOutcome> DescribeHealthStatusOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeHealthStatusRequest&, const DescribeHealthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogBackupsResult> DescribeLogBackupsOutcome;
			typedef std::future<DescribeLogBackupsOutcome> DescribeLogBackupsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeLogBackupsRequest&, const DescribeLogBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeModifyParameterLogResult> DescribeModifyParameterLogOutcome;
			typedef std::future<DescribeModifyParameterLogOutcome> DescribeModifyParameterLogOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeModifyParameterLogRequest&, const DescribeModifyParameterLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyParameterLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeNamespaceResult> DescribeNamespaceOutcome;
			typedef std::future<DescribeNamespaceOutcome> DescribeNamespaceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeNamespaceRequest&, const DescribeNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersResult> DescribeParametersOutcome;
			typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeParametersRequest&, const DescribeParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsVSwitchsResult> DescribeRdsVSwitchsOutcome;
			typedef std::future<DescribeRdsVSwitchsOutcome> DescribeRdsVSwitchsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeRdsVSwitchsRequest&, const DescribeRdsVSwitchsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsVSwitchsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsVpcsResult> DescribeRdsVpcsOutcome;
			typedef std::future<DescribeRdsVpcsOutcome> DescribeRdsVpcsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeRdsVpcsRequest&, const DescribeRdsVpcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsVpcsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogCountResult> DescribeSQLLogCountOutcome;
			typedef std::future<DescribeSQLLogCountOutcome> DescribeSQLLogCountOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeSQLLogCountRequest&, const DescribeSQLLogCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogsV2Result> DescribeSQLLogsV2Outcome;
			typedef std::future<DescribeSQLLogsV2Outcome> DescribeSQLLogsV2OutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeSQLLogsV2Request&, const DescribeSQLLogsV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogsV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeSampleDataResult> DescribeSampleDataOutcome;
			typedef std::future<DescribeSampleDataOutcome> DescribeSampleDataOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeSampleDataRequest&, const DescribeSampleDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSampleDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeSupportFeaturesResult> DescribeSupportFeaturesOutcome;
			typedef std::future<DescribeSupportFeaturesOutcome> DescribeSupportFeaturesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeSupportFeaturesRequest&, const DescribeSupportFeaturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportFeaturesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserEncryptionKeyListResult> DescribeUserEncryptionKeyListOutcome;
			typedef std::future<DescribeUserEncryptionKeyListOutcome> DescribeUserEncryptionKeyListOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeUserEncryptionKeyListRequest&, const DescribeUserEncryptionKeyListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserEncryptionKeyListAsyncHandler;
			typedef Outcome<Error, Model::DescribeWaitingSQLInfoResult> DescribeWaitingSQLInfoOutcome;
			typedef std::future<DescribeWaitingSQLInfoOutcome> DescribeWaitingSQLInfoOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeWaitingSQLInfoRequest&, const DescribeWaitingSQLInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWaitingSQLInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeWaitingSQLRecordsResult> DescribeWaitingSQLRecordsOutcome;
			typedef std::future<DescribeWaitingSQLRecordsOutcome> DescribeWaitingSQLRecordsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeWaitingSQLRecordsRequest&, const DescribeWaitingSQLRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWaitingSQLRecordsAsyncHandler;
			typedef Outcome<Error, Model::DownloadDiagnosisRecordsResult> DownloadDiagnosisRecordsOutcome;
			typedef std::future<DownloadDiagnosisRecordsOutcome> DownloadDiagnosisRecordsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DownloadDiagnosisRecordsRequest&, const DownloadDiagnosisRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadDiagnosisRecordsAsyncHandler;
			typedef Outcome<Error, Model::DownloadSQLLogsRecordsResult> DownloadSQLLogsRecordsOutcome;
			typedef std::future<DownloadSQLLogsRecordsOutcome> DownloadSQLLogsRecordsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DownloadSQLLogsRecordsRequest&, const DownloadSQLLogsRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadSQLLogsRecordsAsyncHandler;
			typedef Outcome<Error, Model::GrantCollectionResult> GrantCollectionOutcome;
			typedef std::future<GrantCollectionOutcome> GrantCollectionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::GrantCollectionRequest&, const GrantCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantCollectionAsyncHandler;
			typedef Outcome<Error, Model::InitVectorDatabaseResult> InitVectorDatabaseOutcome;
			typedef std::future<InitVectorDatabaseOutcome> InitVectorDatabaseOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::InitVectorDatabaseRequest&, const InitVectorDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitVectorDatabaseAsyncHandler;
			typedef Outcome<Error, Model::ListCollectionsResult> ListCollectionsOutcome;
			typedef std::future<ListCollectionsOutcome> ListCollectionsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ListCollectionsRequest&, const ListCollectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCollectionsAsyncHandler;
			typedef Outcome<Error, Model::ListNamespacesResult> ListNamespacesOutcome;
			typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ListNamespacesRequest&, const ListNamespacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNamespacesAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConfigResult> ModifyDBInstanceConfigOutcome;
			typedef std::future<ModifyDBInstanceConfigOutcome> ModifyDBInstanceConfigOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceConfigRequest&, const ModifyDBInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionStringResult> ModifyDBInstanceConnectionStringOutcome;
			typedef std::future<ModifyDBInstanceConnectionStringOutcome> ModifyDBInstanceConnectionStringOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceConnectionStringRequest&, const ModifyDBInstanceConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceDescriptionResult> ModifyDBInstanceDescriptionOutcome;
			typedef std::future<ModifyDBInstanceDescriptionOutcome> ModifyDBInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceDescriptionRequest&, const ModifyDBInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMaintainTimeResult> ModifyDBInstanceMaintainTimeOutcome;
			typedef std::future<ModifyDBInstanceMaintainTimeOutcome> ModifyDBInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceMaintainTimeRequest&, const ModifyDBInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceResourceGroupResult> ModifyDBInstanceResourceGroupOutcome;
			typedef std::future<ModifyDBInstanceResourceGroupOutcome> ModifyDBInstanceResourceGroupOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceResourceGroupRequest&, const ModifyDBInstanceResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceSSLResult> ModifyDBInstanceSSLOutcome;
			typedef std::future<ModifyDBInstanceSSLOutcome> ModifyDBInstanceSSLOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceSSLRequest&, const ModifyDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::ModifyParametersResult> ModifyParametersOutcome;
			typedef std::future<ModifyParametersOutcome> ModifyParametersOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyParametersRequest&, const ModifyParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParametersAsyncHandler;
			typedef Outcome<Error, Model::ModifySQLCollectorPolicyResult> ModifySQLCollectorPolicyOutcome;
			typedef std::future<ModifySQLCollectorPolicyOutcome> ModifySQLCollectorPolicyOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifySQLCollectorPolicyRequest&, const ModifySQLCollectorPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySQLCollectorPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIpsResult> ModifySecurityIpsOutcome;
			typedef std::future<ModifySecurityIpsOutcome> ModifySecurityIpsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifySecurityIpsRequest&, const ModifySecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::ModifyVectorConfigurationResult> ModifyVectorConfigurationOutcome;
			typedef std::future<ModifyVectorConfigurationOutcome> ModifyVectorConfigurationOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyVectorConfigurationRequest&, const ModifyVectorConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVectorConfigurationAsyncHandler;
			typedef Outcome<Error, Model::PauseInstanceResult> PauseInstanceOutcome;
			typedef std::future<PauseInstanceOutcome> PauseInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::PauseInstanceRequest&, const PauseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PauseInstanceAsyncHandler;
			typedef Outcome<Error, Model::QueryCollectionDataResult> QueryCollectionDataOutcome;
			typedef std::future<QueryCollectionDataOutcome> QueryCollectionDataOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::QueryCollectionDataRequest&, const QueryCollectionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCollectionDataAsyncHandler;
			typedef Outcome<Error, Model::RebalanceDBInstanceResult> RebalanceDBInstanceOutcome;
			typedef std::future<RebalanceDBInstanceOutcome> RebalanceDBInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::RebalanceDBInstanceRequest&, const RebalanceDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebalanceDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstancePublicConnectionResult> ReleaseInstancePublicConnectionOutcome;
			typedef std::future<ReleaseInstancePublicConnectionOutcome> ReleaseInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ReleaseInstancePublicConnectionRequest&, const ReleaseInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestartDBInstanceResult> RestartDBInstanceOutcome;
			typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::RestartDBInstanceRequest&, const RestartDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResumeInstanceResult> ResumeInstanceOutcome;
			typedef std::future<ResumeInstanceOutcome> ResumeInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ResumeInstanceRequest&, const ResumeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeInstanceAsyncHandler;
			typedef Outcome<Error, Model::SetDBInstancePlanStatusResult> SetDBInstancePlanStatusOutcome;
			typedef std::future<SetDBInstancePlanStatusOutcome> SetDBInstancePlanStatusOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::SetDBInstancePlanStatusRequest&, const SetDBInstancePlanStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDBInstancePlanStatusAsyncHandler;
			typedef Outcome<Error, Model::SetDataShareInstanceResult> SetDataShareInstanceOutcome;
			typedef std::future<SetDataShareInstanceOutcome> SetDataShareInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::SetDataShareInstanceRequest&, const SetDataShareInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDataShareInstanceAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceNetTypeResult> SwitchDBInstanceNetTypeOutcome;
			typedef std::future<SwitchDBInstanceNetTypeOutcome> SwitchDBInstanceNetTypeOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::SwitchDBInstanceNetTypeRequest&, const SwitchDBInstanceNetTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceNetTypeAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnloadSampleDataResult> UnloadSampleDataOutcome;
			typedef std::future<UnloadSampleDataOutcome> UnloadSampleDataOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::UnloadSampleDataRequest&, const UnloadSampleDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnloadSampleDataAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateDBInstancePlanResult> UpdateDBInstancePlanOutcome;
			typedef std::future<UpdateDBInstancePlanOutcome> UpdateDBInstancePlanOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::UpdateDBInstancePlanRequest&, const UpdateDBInstancePlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDBInstancePlanAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceResult> UpgradeDBInstanceOutcome;
			typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::UpgradeDBInstanceRequest&, const UpgradeDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBVersionResult> UpgradeDBVersionOutcome;
			typedef std::future<UpgradeDBVersionOutcome> UpgradeDBVersionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::UpgradeDBVersionRequest&, const UpgradeDBVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBVersionAsyncHandler;
			typedef Outcome<Error, Model::UpsertCollectionDataResult> UpsertCollectionDataOutcome;
			typedef std::future<UpsertCollectionDataOutcome> UpsertCollectionDataOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::UpsertCollectionDataRequest&, const UpsertCollectionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpsertCollectionDataAsyncHandler;

			GpdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GpdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GpdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GpdbClient();
			AllocateInstancePublicConnectionOutcome allocateInstancePublicConnection(const Model::AllocateInstancePublicConnectionRequest &request)const;
			void allocateInstancePublicConnectionAsync(const Model::AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateInstancePublicConnectionOutcomeCallable allocateInstancePublicConnectionCallable(const Model::AllocateInstancePublicConnectionRequest& request) const;
			CheckServiceLinkedRoleOutcome checkServiceLinkedRole(const Model::CheckServiceLinkedRoleRequest &request)const;
			void checkServiceLinkedRoleAsync(const Model::CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceLinkedRoleOutcomeCallable checkServiceLinkedRoleCallable(const Model::CheckServiceLinkedRoleRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateCollectionOutcome createCollection(const Model::CreateCollectionRequest &request)const;
			void createCollectionAsync(const Model::CreateCollectionRequest& request, const CreateCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCollectionOutcomeCallable createCollectionCallable(const Model::CreateCollectionRequest& request) const;
			CreateDBInstanceOutcome createDBInstance(const Model::CreateDBInstanceRequest &request)const;
			void createDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceOutcomeCallable createDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;
			CreateDBInstancePlanOutcome createDBInstancePlan(const Model::CreateDBInstancePlanRequest &request)const;
			void createDBInstancePlanAsync(const Model::CreateDBInstancePlanRequest& request, const CreateDBInstancePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstancePlanOutcomeCallable createDBInstancePlanCallable(const Model::CreateDBInstancePlanRequest& request) const;
			CreateNamespaceOutcome createNamespace(const Model::CreateNamespaceRequest &request)const;
			void createNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNamespaceOutcomeCallable createNamespaceCallable(const Model::CreateNamespaceRequest& request) const;
			CreateSampleDataOutcome createSampleData(const Model::CreateSampleDataRequest &request)const;
			void createSampleDataAsync(const Model::CreateSampleDataRequest& request, const CreateSampleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSampleDataOutcomeCallable createSampleDataCallable(const Model::CreateSampleDataRequest& request) const;
			CreateServiceLinkedRoleOutcome createServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request)const;
			void createServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleOutcomeCallable createServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;
			CreateVectorIndexOutcome createVectorIndex(const Model::CreateVectorIndexRequest &request)const;
			void createVectorIndexAsync(const Model::CreateVectorIndexRequest& request, const CreateVectorIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVectorIndexOutcomeCallable createVectorIndexCallable(const Model::CreateVectorIndexRequest& request) const;
			DeleteCollectionOutcome deleteCollection(const Model::DeleteCollectionRequest &request)const;
			void deleteCollectionAsync(const Model::DeleteCollectionRequest& request, const DeleteCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCollectionOutcomeCallable deleteCollectionCallable(const Model::DeleteCollectionRequest& request) const;
			DeleteCollectionDataOutcome deleteCollectionData(const Model::DeleteCollectionDataRequest &request)const;
			void deleteCollectionDataAsync(const Model::DeleteCollectionDataRequest& request, const DeleteCollectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCollectionDataOutcomeCallable deleteCollectionDataCallable(const Model::DeleteCollectionDataRequest& request) const;
			DeleteDBInstanceOutcome deleteDBInstance(const Model::DeleteDBInstanceRequest &request)const;
			void deleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstanceOutcomeCallable deleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;
			DeleteDBInstancePlanOutcome deleteDBInstancePlan(const Model::DeleteDBInstancePlanRequest &request)const;
			void deleteDBInstancePlanAsync(const Model::DeleteDBInstancePlanRequest& request, const DeleteDBInstancePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstancePlanOutcomeCallable deleteDBInstancePlanCallable(const Model::DeleteDBInstancePlanRequest& request) const;
			DeleteNamespaceOutcome deleteNamespace(const Model::DeleteNamespaceRequest &request)const;
			void deleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNamespaceOutcomeCallable deleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;
			DeleteVectorIndexOutcome deleteVectorIndex(const Model::DeleteVectorIndexRequest &request)const;
			void deleteVectorIndexAsync(const Model::DeleteVectorIndexRequest& request, const DeleteVectorIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVectorIndexOutcomeCallable deleteVectorIndexCallable(const Model::DeleteVectorIndexRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeAvailableResourcesOutcome describeAvailableResources(const Model::DescribeAvailableResourcesRequest &request)const;
			void describeAvailableResourcesAsync(const Model::DescribeAvailableResourcesRequest& request, const DescribeAvailableResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableResourcesOutcomeCallable describeAvailableResourcesCallable(const Model::DescribeAvailableResourcesRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeCollectionOutcome describeCollection(const Model::DescribeCollectionRequest &request)const;
			void describeCollectionAsync(const Model::DescribeCollectionRequest& request, const DescribeCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCollectionOutcomeCallable describeCollectionCallable(const Model::DescribeCollectionRequest& request) const;
			DescribeDBClusterNodeOutcome describeDBClusterNode(const Model::DescribeDBClusterNodeRequest &request)const;
			void describeDBClusterNodeAsync(const Model::DescribeDBClusterNodeRequest& request, const DescribeDBClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterNodeOutcomeCallable describeDBClusterNodeCallable(const Model::DescribeDBClusterNodeRequest& request) const;
			DescribeDBClusterPerformanceOutcome describeDBClusterPerformance(const Model::DescribeDBClusterPerformanceRequest &request)const;
			void describeDBClusterPerformanceAsync(const Model::DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterPerformanceOutcomeCallable describeDBClusterPerformanceCallable(const Model::DescribeDBClusterPerformanceRequest& request) const;
			DescribeDBInstanceAttributeOutcome describeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request)const;
			void describeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceAttributeOutcomeCallable describeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request) const;
			DescribeDBInstanceDataBloatOutcome describeDBInstanceDataBloat(const Model::DescribeDBInstanceDataBloatRequest &request)const;
			void describeDBInstanceDataBloatAsync(const Model::DescribeDBInstanceDataBloatRequest& request, const DescribeDBInstanceDataBloatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceDataBloatOutcomeCallable describeDBInstanceDataBloatCallable(const Model::DescribeDBInstanceDataBloatRequest& request) const;
			DescribeDBInstanceDataSkewOutcome describeDBInstanceDataSkew(const Model::DescribeDBInstanceDataSkewRequest &request)const;
			void describeDBInstanceDataSkewAsync(const Model::DescribeDBInstanceDataSkewRequest& request, const DescribeDBInstanceDataSkewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceDataSkewOutcomeCallable describeDBInstanceDataSkewCallable(const Model::DescribeDBInstanceDataSkewRequest& request) const;
			DescribeDBInstanceDiagnosisSummaryOutcome describeDBInstanceDiagnosisSummary(const Model::DescribeDBInstanceDiagnosisSummaryRequest &request)const;
			void describeDBInstanceDiagnosisSummaryAsync(const Model::DescribeDBInstanceDiagnosisSummaryRequest& request, const DescribeDBInstanceDiagnosisSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceDiagnosisSummaryOutcomeCallable describeDBInstanceDiagnosisSummaryCallable(const Model::DescribeDBInstanceDiagnosisSummaryRequest& request) const;
			DescribeDBInstanceErrorLogOutcome describeDBInstanceErrorLog(const Model::DescribeDBInstanceErrorLogRequest &request)const;
			void describeDBInstanceErrorLogAsync(const Model::DescribeDBInstanceErrorLogRequest& request, const DescribeDBInstanceErrorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceErrorLogOutcomeCallable describeDBInstanceErrorLogCallable(const Model::DescribeDBInstanceErrorLogRequest& request) const;
			DescribeDBInstanceIPArrayListOutcome describeDBInstanceIPArrayList(const Model::DescribeDBInstanceIPArrayListRequest &request)const;
			void describeDBInstanceIPArrayListAsync(const Model::DescribeDBInstanceIPArrayListRequest& request, const DescribeDBInstanceIPArrayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceIPArrayListOutcomeCallable describeDBInstanceIPArrayListCallable(const Model::DescribeDBInstanceIPArrayListRequest& request) const;
			DescribeDBInstanceIndexUsageOutcome describeDBInstanceIndexUsage(const Model::DescribeDBInstanceIndexUsageRequest &request)const;
			void describeDBInstanceIndexUsageAsync(const Model::DescribeDBInstanceIndexUsageRequest& request, const DescribeDBInstanceIndexUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceIndexUsageOutcomeCallable describeDBInstanceIndexUsageCallable(const Model::DescribeDBInstanceIndexUsageRequest& request) const;
			DescribeDBInstanceNetInfoOutcome describeDBInstanceNetInfo(const Model::DescribeDBInstanceNetInfoRequest &request)const;
			void describeDBInstanceNetInfoAsync(const Model::DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceNetInfoOutcomeCallable describeDBInstanceNetInfoCallable(const Model::DescribeDBInstanceNetInfoRequest& request) const;
			DescribeDBInstancePerformanceOutcome describeDBInstancePerformance(const Model::DescribeDBInstancePerformanceRequest &request)const;
			void describeDBInstancePerformanceAsync(const Model::DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancePerformanceOutcomeCallable describeDBInstancePerformanceCallable(const Model::DescribeDBInstancePerformanceRequest& request) const;
			DescribeDBInstancePlansOutcome describeDBInstancePlans(const Model::DescribeDBInstancePlansRequest &request)const;
			void describeDBInstancePlansAsync(const Model::DescribeDBInstancePlansRequest& request, const DescribeDBInstancePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancePlansOutcomeCallable describeDBInstancePlansCallable(const Model::DescribeDBInstancePlansRequest& request) const;
			DescribeDBInstanceSSLOutcome describeDBInstanceSSL(const Model::DescribeDBInstanceSSLRequest &request)const;
			void describeDBInstanceSSLAsync(const Model::DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceSSLOutcomeCallable describeDBInstanceSSLCallable(const Model::DescribeDBInstanceSSLRequest& request) const;
			DescribeDBInstancesOutcome describeDBInstances(const Model::DescribeDBInstancesRequest &request)const;
			void describeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesOutcomeCallable describeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;
			DescribeDataBackupsOutcome describeDataBackups(const Model::DescribeDataBackupsRequest &request)const;
			void describeDataBackupsAsync(const Model::DescribeDataBackupsRequest& request, const DescribeDataBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataBackupsOutcomeCallable describeDataBackupsCallable(const Model::DescribeDataBackupsRequest& request) const;
			DescribeDataReDistributeInfoOutcome describeDataReDistributeInfo(const Model::DescribeDataReDistributeInfoRequest &request)const;
			void describeDataReDistributeInfoAsync(const Model::DescribeDataReDistributeInfoRequest& request, const DescribeDataReDistributeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataReDistributeInfoOutcomeCallable describeDataReDistributeInfoCallable(const Model::DescribeDataReDistributeInfoRequest& request) const;
			DescribeDataShareInstancesOutcome describeDataShareInstances(const Model::DescribeDataShareInstancesRequest &request)const;
			void describeDataShareInstancesAsync(const Model::DescribeDataShareInstancesRequest& request, const DescribeDataShareInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataShareInstancesOutcomeCallable describeDataShareInstancesCallable(const Model::DescribeDataShareInstancesRequest& request) const;
			DescribeDataSharePerformanceOutcome describeDataSharePerformance(const Model::DescribeDataSharePerformanceRequest &request)const;
			void describeDataSharePerformanceAsync(const Model::DescribeDataSharePerformanceRequest& request, const DescribeDataSharePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSharePerformanceOutcomeCallable describeDataSharePerformanceCallable(const Model::DescribeDataSharePerformanceRequest& request) const;
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
			DescribeDownloadRecordsOutcome describeDownloadRecords(const Model::DescribeDownloadRecordsRequest &request)const;
			void describeDownloadRecordsAsync(const Model::DescribeDownloadRecordsRequest& request, const DescribeDownloadRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDownloadRecordsOutcomeCallable describeDownloadRecordsCallable(const Model::DescribeDownloadRecordsRequest& request) const;
			DescribeDownloadSQLLogsOutcome describeDownloadSQLLogs(const Model::DescribeDownloadSQLLogsRequest &request)const;
			void describeDownloadSQLLogsAsync(const Model::DescribeDownloadSQLLogsRequest& request, const DescribeDownloadSQLLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDownloadSQLLogsOutcomeCallable describeDownloadSQLLogsCallable(const Model::DescribeDownloadSQLLogsRequest& request) const;
			DescribeHealthStatusOutcome describeHealthStatus(const Model::DescribeHealthStatusRequest &request)const;
			void describeHealthStatusAsync(const Model::DescribeHealthStatusRequest& request, const DescribeHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHealthStatusOutcomeCallable describeHealthStatusCallable(const Model::DescribeHealthStatusRequest& request) const;
			DescribeLogBackupsOutcome describeLogBackups(const Model::DescribeLogBackupsRequest &request)const;
			void describeLogBackupsAsync(const Model::DescribeLogBackupsRequest& request, const DescribeLogBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogBackupsOutcomeCallable describeLogBackupsCallable(const Model::DescribeLogBackupsRequest& request) const;
			DescribeModifyParameterLogOutcome describeModifyParameterLog(const Model::DescribeModifyParameterLogRequest &request)const;
			void describeModifyParameterLogAsync(const Model::DescribeModifyParameterLogRequest& request, const DescribeModifyParameterLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModifyParameterLogOutcomeCallable describeModifyParameterLogCallable(const Model::DescribeModifyParameterLogRequest& request) const;
			DescribeNamespaceOutcome describeNamespace(const Model::DescribeNamespaceRequest &request)const;
			void describeNamespaceAsync(const Model::DescribeNamespaceRequest& request, const DescribeNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNamespaceOutcomeCallable describeNamespaceCallable(const Model::DescribeNamespaceRequest& request) const;
			DescribeParametersOutcome describeParameters(const Model::DescribeParametersRequest &request)const;
			void describeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParametersOutcomeCallable describeParametersCallable(const Model::DescribeParametersRequest& request) const;
			DescribeRdsVSwitchsOutcome describeRdsVSwitchs(const Model::DescribeRdsVSwitchsRequest &request)const;
			void describeRdsVSwitchsAsync(const Model::DescribeRdsVSwitchsRequest& request, const DescribeRdsVSwitchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsVSwitchsOutcomeCallable describeRdsVSwitchsCallable(const Model::DescribeRdsVSwitchsRequest& request) const;
			DescribeRdsVpcsOutcome describeRdsVpcs(const Model::DescribeRdsVpcsRequest &request)const;
			void describeRdsVpcsAsync(const Model::DescribeRdsVpcsRequest& request, const DescribeRdsVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsVpcsOutcomeCallable describeRdsVpcsCallable(const Model::DescribeRdsVpcsRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSQLLogCountOutcome describeSQLLogCount(const Model::DescribeSQLLogCountRequest &request)const;
			void describeSQLLogCountAsync(const Model::DescribeSQLLogCountRequest& request, const DescribeSQLLogCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLLogCountOutcomeCallable describeSQLLogCountCallable(const Model::DescribeSQLLogCountRequest& request) const;
			DescribeSQLLogsV2Outcome describeSQLLogsV2(const Model::DescribeSQLLogsV2Request &request)const;
			void describeSQLLogsV2Async(const Model::DescribeSQLLogsV2Request& request, const DescribeSQLLogsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLLogsV2OutcomeCallable describeSQLLogsV2Callable(const Model::DescribeSQLLogsV2Request& request) const;
			DescribeSampleDataOutcome describeSampleData(const Model::DescribeSampleDataRequest &request)const;
			void describeSampleDataAsync(const Model::DescribeSampleDataRequest& request, const DescribeSampleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSampleDataOutcomeCallable describeSampleDataCallable(const Model::DescribeSampleDataRequest& request) const;
			DescribeSupportFeaturesOutcome describeSupportFeatures(const Model::DescribeSupportFeaturesRequest &request)const;
			void describeSupportFeaturesAsync(const Model::DescribeSupportFeaturesRequest& request, const DescribeSupportFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSupportFeaturesOutcomeCallable describeSupportFeaturesCallable(const Model::DescribeSupportFeaturesRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DescribeUserEncryptionKeyListOutcome describeUserEncryptionKeyList(const Model::DescribeUserEncryptionKeyListRequest &request)const;
			void describeUserEncryptionKeyListAsync(const Model::DescribeUserEncryptionKeyListRequest& request, const DescribeUserEncryptionKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserEncryptionKeyListOutcomeCallable describeUserEncryptionKeyListCallable(const Model::DescribeUserEncryptionKeyListRequest& request) const;
			DescribeWaitingSQLInfoOutcome describeWaitingSQLInfo(const Model::DescribeWaitingSQLInfoRequest &request)const;
			void describeWaitingSQLInfoAsync(const Model::DescribeWaitingSQLInfoRequest& request, const DescribeWaitingSQLInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWaitingSQLInfoOutcomeCallable describeWaitingSQLInfoCallable(const Model::DescribeWaitingSQLInfoRequest& request) const;
			DescribeWaitingSQLRecordsOutcome describeWaitingSQLRecords(const Model::DescribeWaitingSQLRecordsRequest &request)const;
			void describeWaitingSQLRecordsAsync(const Model::DescribeWaitingSQLRecordsRequest& request, const DescribeWaitingSQLRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWaitingSQLRecordsOutcomeCallable describeWaitingSQLRecordsCallable(const Model::DescribeWaitingSQLRecordsRequest& request) const;
			DownloadDiagnosisRecordsOutcome downloadDiagnosisRecords(const Model::DownloadDiagnosisRecordsRequest &request)const;
			void downloadDiagnosisRecordsAsync(const Model::DownloadDiagnosisRecordsRequest& request, const DownloadDiagnosisRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadDiagnosisRecordsOutcomeCallable downloadDiagnosisRecordsCallable(const Model::DownloadDiagnosisRecordsRequest& request) const;
			DownloadSQLLogsRecordsOutcome downloadSQLLogsRecords(const Model::DownloadSQLLogsRecordsRequest &request)const;
			void downloadSQLLogsRecordsAsync(const Model::DownloadSQLLogsRecordsRequest& request, const DownloadSQLLogsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadSQLLogsRecordsOutcomeCallable downloadSQLLogsRecordsCallable(const Model::DownloadSQLLogsRecordsRequest& request) const;
			GrantCollectionOutcome grantCollection(const Model::GrantCollectionRequest &request)const;
			void grantCollectionAsync(const Model::GrantCollectionRequest& request, const GrantCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantCollectionOutcomeCallable grantCollectionCallable(const Model::GrantCollectionRequest& request) const;
			InitVectorDatabaseOutcome initVectorDatabase(const Model::InitVectorDatabaseRequest &request)const;
			void initVectorDatabaseAsync(const Model::InitVectorDatabaseRequest& request, const InitVectorDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitVectorDatabaseOutcomeCallable initVectorDatabaseCallable(const Model::InitVectorDatabaseRequest& request) const;
			ListCollectionsOutcome listCollections(const Model::ListCollectionsRequest &request)const;
			void listCollectionsAsync(const Model::ListCollectionsRequest& request, const ListCollectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCollectionsOutcomeCallable listCollectionsCallable(const Model::ListCollectionsRequest& request) const;
			ListNamespacesOutcome listNamespaces(const Model::ListNamespacesRequest &request)const;
			void listNamespacesAsync(const Model::ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNamespacesOutcomeCallable listNamespacesCallable(const Model::ListNamespacesRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyDBInstanceConfigOutcome modifyDBInstanceConfig(const Model::ModifyDBInstanceConfigRequest &request)const;
			void modifyDBInstanceConfigAsync(const Model::ModifyDBInstanceConfigRequest& request, const ModifyDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConfigOutcomeCallable modifyDBInstanceConfigCallable(const Model::ModifyDBInstanceConfigRequest& request) const;
			ModifyDBInstanceConnectionStringOutcome modifyDBInstanceConnectionString(const Model::ModifyDBInstanceConnectionStringRequest &request)const;
			void modifyDBInstanceConnectionStringAsync(const Model::ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConnectionStringOutcomeCallable modifyDBInstanceConnectionStringCallable(const Model::ModifyDBInstanceConnectionStringRequest& request) const;
			ModifyDBInstanceDescriptionOutcome modifyDBInstanceDescription(const Model::ModifyDBInstanceDescriptionRequest &request)const;
			void modifyDBInstanceDescriptionAsync(const Model::ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceDescriptionOutcomeCallable modifyDBInstanceDescriptionCallable(const Model::ModifyDBInstanceDescriptionRequest& request) const;
			ModifyDBInstanceMaintainTimeOutcome modifyDBInstanceMaintainTime(const Model::ModifyDBInstanceMaintainTimeRequest &request)const;
			void modifyDBInstanceMaintainTimeAsync(const Model::ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceMaintainTimeOutcomeCallable modifyDBInstanceMaintainTimeCallable(const Model::ModifyDBInstanceMaintainTimeRequest& request) const;
			ModifyDBInstanceResourceGroupOutcome modifyDBInstanceResourceGroup(const Model::ModifyDBInstanceResourceGroupRequest &request)const;
			void modifyDBInstanceResourceGroupAsync(const Model::ModifyDBInstanceResourceGroupRequest& request, const ModifyDBInstanceResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceResourceGroupOutcomeCallable modifyDBInstanceResourceGroupCallable(const Model::ModifyDBInstanceResourceGroupRequest& request) const;
			ModifyDBInstanceSSLOutcome modifyDBInstanceSSL(const Model::ModifyDBInstanceSSLRequest &request)const;
			void modifyDBInstanceSSLAsync(const Model::ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceSSLOutcomeCallable modifyDBInstanceSSLCallable(const Model::ModifyDBInstanceSSLRequest& request) const;
			ModifyParametersOutcome modifyParameters(const Model::ModifyParametersRequest &request)const;
			void modifyParametersAsync(const Model::ModifyParametersRequest& request, const ModifyParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParametersOutcomeCallable modifyParametersCallable(const Model::ModifyParametersRequest& request) const;
			ModifySQLCollectorPolicyOutcome modifySQLCollectorPolicy(const Model::ModifySQLCollectorPolicyRequest &request)const;
			void modifySQLCollectorPolicyAsync(const Model::ModifySQLCollectorPolicyRequest& request, const ModifySQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySQLCollectorPolicyOutcomeCallable modifySQLCollectorPolicyCallable(const Model::ModifySQLCollectorPolicyRequest& request) const;
			ModifySecurityIpsOutcome modifySecurityIps(const Model::ModifySecurityIpsRequest &request)const;
			void modifySecurityIpsAsync(const Model::ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityIpsOutcomeCallable modifySecurityIpsCallable(const Model::ModifySecurityIpsRequest& request) const;
			ModifyVectorConfigurationOutcome modifyVectorConfiguration(const Model::ModifyVectorConfigurationRequest &request)const;
			void modifyVectorConfigurationAsync(const Model::ModifyVectorConfigurationRequest& request, const ModifyVectorConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVectorConfigurationOutcomeCallable modifyVectorConfigurationCallable(const Model::ModifyVectorConfigurationRequest& request) const;
			PauseInstanceOutcome pauseInstance(const Model::PauseInstanceRequest &request)const;
			void pauseInstanceAsync(const Model::PauseInstanceRequest& request, const PauseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PauseInstanceOutcomeCallable pauseInstanceCallable(const Model::PauseInstanceRequest& request) const;
			QueryCollectionDataOutcome queryCollectionData(const Model::QueryCollectionDataRequest &request)const;
			void queryCollectionDataAsync(const Model::QueryCollectionDataRequest& request, const QueryCollectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCollectionDataOutcomeCallable queryCollectionDataCallable(const Model::QueryCollectionDataRequest& request) const;
			RebalanceDBInstanceOutcome rebalanceDBInstance(const Model::RebalanceDBInstanceRequest &request)const;
			void rebalanceDBInstanceAsync(const Model::RebalanceDBInstanceRequest& request, const RebalanceDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebalanceDBInstanceOutcomeCallable rebalanceDBInstanceCallable(const Model::RebalanceDBInstanceRequest& request) const;
			ReleaseInstancePublicConnectionOutcome releaseInstancePublicConnection(const Model::ReleaseInstancePublicConnectionRequest &request)const;
			void releaseInstancePublicConnectionAsync(const Model::ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstancePublicConnectionOutcomeCallable releaseInstancePublicConnectionCallable(const Model::ReleaseInstancePublicConnectionRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			RestartDBInstanceOutcome restartDBInstance(const Model::RestartDBInstanceRequest &request)const;
			void restartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBInstanceOutcomeCallable restartDBInstanceCallable(const Model::RestartDBInstanceRequest& request) const;
			ResumeInstanceOutcome resumeInstance(const Model::ResumeInstanceRequest &request)const;
			void resumeInstanceAsync(const Model::ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeInstanceOutcomeCallable resumeInstanceCallable(const Model::ResumeInstanceRequest& request) const;
			SetDBInstancePlanStatusOutcome setDBInstancePlanStatus(const Model::SetDBInstancePlanStatusRequest &request)const;
			void setDBInstancePlanStatusAsync(const Model::SetDBInstancePlanStatusRequest& request, const SetDBInstancePlanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDBInstancePlanStatusOutcomeCallable setDBInstancePlanStatusCallable(const Model::SetDBInstancePlanStatusRequest& request) const;
			SetDataShareInstanceOutcome setDataShareInstance(const Model::SetDataShareInstanceRequest &request)const;
			void setDataShareInstanceAsync(const Model::SetDataShareInstanceRequest& request, const SetDataShareInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDataShareInstanceOutcomeCallable setDataShareInstanceCallable(const Model::SetDataShareInstanceRequest& request) const;
			SwitchDBInstanceNetTypeOutcome switchDBInstanceNetType(const Model::SwitchDBInstanceNetTypeRequest &request)const;
			void switchDBInstanceNetTypeAsync(const Model::SwitchDBInstanceNetTypeRequest& request, const SwitchDBInstanceNetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDBInstanceNetTypeOutcomeCallable switchDBInstanceNetTypeCallable(const Model::SwitchDBInstanceNetTypeRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnloadSampleDataOutcome unloadSampleData(const Model::UnloadSampleDataRequest &request)const;
			void unloadSampleDataAsync(const Model::UnloadSampleDataRequest& request, const UnloadSampleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnloadSampleDataOutcomeCallable unloadSampleDataCallable(const Model::UnloadSampleDataRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateDBInstancePlanOutcome updateDBInstancePlan(const Model::UpdateDBInstancePlanRequest &request)const;
			void updateDBInstancePlanAsync(const Model::UpdateDBInstancePlanRequest& request, const UpdateDBInstancePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDBInstancePlanOutcomeCallable updateDBInstancePlanCallable(const Model::UpdateDBInstancePlanRequest& request) const;
			UpgradeDBInstanceOutcome upgradeDBInstance(const Model::UpgradeDBInstanceRequest &request)const;
			void upgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceOutcomeCallable upgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request) const;
			UpgradeDBVersionOutcome upgradeDBVersion(const Model::UpgradeDBVersionRequest &request)const;
			void upgradeDBVersionAsync(const Model::UpgradeDBVersionRequest& request, const UpgradeDBVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBVersionOutcomeCallable upgradeDBVersionCallable(const Model::UpgradeDBVersionRequest& request) const;
			UpsertCollectionDataOutcome upsertCollectionData(const Model::UpsertCollectionDataRequest &request)const;
			void upsertCollectionDataAsync(const Model::UpsertCollectionDataRequest& request, const UpsertCollectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpsertCollectionDataOutcomeCallable upsertCollectionDataCallable(const Model::UpsertCollectionDataRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GPDB_GPDBCLIENT_H_
