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

#ifndef ALIBABACLOUD_CLICKHOUSE_CLICKHOUSECLIENT_H_
#define ALIBABACLOUD_CLICKHOUSE_CLICKHOUSECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ClickhouseExport.h"
#include "model/AllocateClusterPublicConnectionRequest.h"
#include "model/AllocateClusterPublicConnectionResult.h"
#include "model/CheckClickhouseToRDSRequest.h"
#include "model/CheckClickhouseToRDSResult.h"
#include "model/CheckModifyConfigNeedRestartRequest.h"
#include "model/CheckModifyConfigNeedRestartResult.h"
#include "model/CheckMonitorAlertRequest.h"
#include "model/CheckMonitorAlertResult.h"
#include "model/CheckScaleOutBalancedRequest.h"
#include "model/CheckScaleOutBalancedResult.h"
#include "model/CheckServiceLinkedRoleRequest.h"
#include "model/CheckServiceLinkedRoleResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateAccountAndAuthorityRequest.h"
#include "model/CreateAccountAndAuthorityResult.h"
#include "model/CreateBackupPolicyRequest.h"
#include "model/CreateBackupPolicyResult.h"
#include "model/CreateDBInstanceRequest.h"
#include "model/CreateDBInstanceResult.h"
#include "model/CreateMonitorDataReportRequest.h"
#include "model/CreateMonitorDataReportResult.h"
#include "model/CreateOSSStorageRequest.h"
#include "model/CreateOSSStorageResult.h"
#include "model/CreatePortsForClickHouseRequest.h"
#include "model/CreatePortsForClickHouseResult.h"
#include "model/CreateRDSToClickhouseDbRequest.h"
#include "model/CreateRDSToClickhouseDbResult.h"
#include "model/CreateSQLAccountRequest.h"
#include "model/CreateSQLAccountResult.h"
#include "model/CreateServiceLinkedRoleRequest.h"
#include "model/CreateServiceLinkedRoleResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteDBClusterRequest.h"
#include "model/DeleteDBClusterResult.h"
#include "model/DeleteSyndbRequest.h"
#include "model/DeleteSyndbResult.h"
#include "model/DescribeAccountAuthorityRequest.h"
#include "model/DescribeAccountAuthorityResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeAllDataSourceRequest.h"
#include "model/DescribeAllDataSourceResult.h"
#include "model/DescribeAllDataSourcesRequest.h"
#include "model/DescribeAllDataSourcesResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeColumnsRequest.h"
#include "model/DescribeColumnsResult.h"
#include "model/DescribeConfigHistoryRequest.h"
#include "model/DescribeConfigHistoryResult.h"
#include "model/DescribeConfigVersionDifferenceRequest.h"
#include "model/DescribeConfigVersionDifferenceResult.h"
#include "model/DescribeDBClusterAccessWhiteListRequest.h"
#include "model/DescribeDBClusterAccessWhiteListResult.h"
#include "model/DescribeDBClusterAttributeRequest.h"
#include "model/DescribeDBClusterAttributeResult.h"
#include "model/DescribeDBClusterConfigRequest.h"
#include "model/DescribeDBClusterConfigResult.h"
#include "model/DescribeDBClusterConfigInXMLRequest.h"
#include "model/DescribeDBClusterConfigInXMLResult.h"
#include "model/DescribeDBClusterNetInfoItemsRequest.h"
#include "model/DescribeDBClusterNetInfoItemsResult.h"
#include "model/DescribeDBClusterPerformanceRequest.h"
#include "model/DescribeDBClusterPerformanceResult.h"
#include "model/DescribeDBClustersRequest.h"
#include "model/DescribeDBClustersResult.h"
#include "model/DescribeDBConfigRequest.h"
#include "model/DescribeDBConfigResult.h"
#include "model/DescribeOSSStorageRequest.h"
#include "model/DescribeOSSStorageResult.h"
#include "model/DescribeProcessListRequest.h"
#include "model/DescribeProcessListResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSchemasRequest.h"
#include "model/DescribeSchemasResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/DescribeSynDbTablesRequest.h"
#include "model/DescribeSynDbTablesResult.h"
#include "model/DescribeSynDbsRequest.h"
#include "model/DescribeSynDbsResult.h"
#include "model/DescribeTablesRequest.h"
#include "model/DescribeTablesResult.h"
#include "model/DescribeTransferHistoryRequest.h"
#include "model/DescribeTransferHistoryResult.h"
#include "model/KillProcessRequest.h"
#include "model/KillProcessResult.h"
#include "model/ModifyAccountAuthorityRequest.h"
#include "model/ModifyAccountAuthorityResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyDBClusterRequest.h"
#include "model/ModifyDBClusterResult.h"
#include "model/ModifyDBClusterAccessWhiteListRequest.h"
#include "model/ModifyDBClusterAccessWhiteListResult.h"
#include "model/ModifyDBClusterConfigRequest.h"
#include "model/ModifyDBClusterConfigResult.h"
#include "model/ModifyDBClusterConfigInXMLRequest.h"
#include "model/ModifyDBClusterConfigInXMLResult.h"
#include "model/ModifyDBClusterDescriptionRequest.h"
#include "model/ModifyDBClusterDescriptionResult.h"
#include "model/ModifyDBClusterMaintainTimeRequest.h"
#include "model/ModifyDBClusterMaintainTimeResult.h"
#include "model/ModifyDBConfigRequest.h"
#include "model/ModifyDBConfigResult.h"
#include "model/ModifyMinorVersionGreadeTypeRequest.h"
#include "model/ModifyMinorVersionGreadeTypeResult.h"
#include "model/ModifyRDSToClickhouseDbRequest.h"
#include "model/ModifyRDSToClickhouseDbResult.h"
#include "model/ReleaseClusterPublicConnectionRequest.h"
#include "model/ReleaseClusterPublicConnectionResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/RestartInstanceRequest.h"
#include "model/RestartInstanceResult.h"
#include "model/TransferVersionRequest.h"
#include "model/TransferVersionResult.h"
#include "model/UpgradeMinorVersionRequest.h"
#include "model/UpgradeMinorVersionResult.h"


namespace AlibabaCloud
{
	namespace Clickhouse
	{
		class ALIBABACLOUD_CLICKHOUSE_EXPORT ClickhouseClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocateClusterPublicConnectionResult> AllocateClusterPublicConnectionOutcome;
			typedef std::future<AllocateClusterPublicConnectionOutcome> AllocateClusterPublicConnectionOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::AllocateClusterPublicConnectionRequest&, const AllocateClusterPublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateClusterPublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::CheckClickhouseToRDSResult> CheckClickhouseToRDSOutcome;
			typedef std::future<CheckClickhouseToRDSOutcome> CheckClickhouseToRDSOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CheckClickhouseToRDSRequest&, const CheckClickhouseToRDSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckClickhouseToRDSAsyncHandler;
			typedef Outcome<Error, Model::CheckModifyConfigNeedRestartResult> CheckModifyConfigNeedRestartOutcome;
			typedef std::future<CheckModifyConfigNeedRestartOutcome> CheckModifyConfigNeedRestartOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CheckModifyConfigNeedRestartRequest&, const CheckModifyConfigNeedRestartOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckModifyConfigNeedRestartAsyncHandler;
			typedef Outcome<Error, Model::CheckMonitorAlertResult> CheckMonitorAlertOutcome;
			typedef std::future<CheckMonitorAlertOutcome> CheckMonitorAlertOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CheckMonitorAlertRequest&, const CheckMonitorAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckMonitorAlertAsyncHandler;
			typedef Outcome<Error, Model::CheckScaleOutBalancedResult> CheckScaleOutBalancedOutcome;
			typedef std::future<CheckScaleOutBalancedOutcome> CheckScaleOutBalancedOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CheckScaleOutBalancedRequest&, const CheckScaleOutBalancedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckScaleOutBalancedAsyncHandler;
			typedef Outcome<Error, Model::CheckServiceLinkedRoleResult> CheckServiceLinkedRoleOutcome;
			typedef std::future<CheckServiceLinkedRoleOutcome> CheckServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CheckServiceLinkedRoleRequest&, const CheckServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountAndAuthorityResult> CreateAccountAndAuthorityOutcome;
			typedef std::future<CreateAccountAndAuthorityOutcome> CreateAccountAndAuthorityOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CreateAccountAndAuthorityRequest&, const CreateAccountAndAuthorityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAndAuthorityAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupPolicyResult> CreateBackupPolicyOutcome;
			typedef std::future<CreateBackupPolicyOutcome> CreateBackupPolicyOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CreateBackupPolicyRequest&, const CreateBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceResult> CreateDBInstanceOutcome;
			typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CreateDBInstanceRequest&, const CreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateMonitorDataReportResult> CreateMonitorDataReportOutcome;
			typedef std::future<CreateMonitorDataReportOutcome> CreateMonitorDataReportOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CreateMonitorDataReportRequest&, const CreateMonitorDataReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitorDataReportAsyncHandler;
			typedef Outcome<Error, Model::CreateOSSStorageResult> CreateOSSStorageOutcome;
			typedef std::future<CreateOSSStorageOutcome> CreateOSSStorageOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CreateOSSStorageRequest&, const CreateOSSStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOSSStorageAsyncHandler;
			typedef Outcome<Error, Model::CreatePortsForClickHouseResult> CreatePortsForClickHouseOutcome;
			typedef std::future<CreatePortsForClickHouseOutcome> CreatePortsForClickHouseOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CreatePortsForClickHouseRequest&, const CreatePortsForClickHouseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePortsForClickHouseAsyncHandler;
			typedef Outcome<Error, Model::CreateRDSToClickhouseDbResult> CreateRDSToClickhouseDbOutcome;
			typedef std::future<CreateRDSToClickhouseDbOutcome> CreateRDSToClickhouseDbOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CreateRDSToClickhouseDbRequest&, const CreateRDSToClickhouseDbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRDSToClickhouseDbAsyncHandler;
			typedef Outcome<Error, Model::CreateSQLAccountResult> CreateSQLAccountOutcome;
			typedef std::future<CreateSQLAccountOutcome> CreateSQLAccountOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CreateSQLAccountRequest&, const CreateSQLAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSQLAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleResult> CreateServiceLinkedRoleOutcome;
			typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::CreateServiceLinkedRoleRequest&, const CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBClusterResult> DeleteDBClusterOutcome;
			typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DeleteDBClusterRequest&, const DeleteDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteSyndbResult> DeleteSyndbOutcome;
			typedef std::future<DeleteSyndbOutcome> DeleteSyndbOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DeleteSyndbRequest&, const DeleteSyndbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSyndbAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountAuthorityResult> DescribeAccountAuthorityOutcome;
			typedef std::future<DescribeAccountAuthorityOutcome> DescribeAccountAuthorityOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeAccountAuthorityRequest&, const DescribeAccountAuthorityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountAuthorityAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllDataSourceResult> DescribeAllDataSourceOutcome;
			typedef std::future<DescribeAllDataSourceOutcome> DescribeAllDataSourceOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeAllDataSourceRequest&, const DescribeAllDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllDataSourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllDataSourcesResult> DescribeAllDataSourcesOutcome;
			typedef std::future<DescribeAllDataSourcesOutcome> DescribeAllDataSourcesOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeAllDataSourcesRequest&, const DescribeAllDataSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllDataSourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeColumnsResult> DescribeColumnsOutcome;
			typedef std::future<DescribeColumnsOutcome> DescribeColumnsOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeColumnsRequest&, const DescribeColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnsAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigHistoryResult> DescribeConfigHistoryOutcome;
			typedef std::future<DescribeConfigHistoryOutcome> DescribeConfigHistoryOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeConfigHistoryRequest&, const DescribeConfigHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigVersionDifferenceResult> DescribeConfigVersionDifferenceOutcome;
			typedef std::future<DescribeConfigVersionDifferenceOutcome> DescribeConfigVersionDifferenceOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeConfigVersionDifferenceRequest&, const DescribeConfigVersionDifferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigVersionDifferenceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAccessWhiteListResult> DescribeDBClusterAccessWhiteListOutcome;
			typedef std::future<DescribeDBClusterAccessWhiteListOutcome> DescribeDBClusterAccessWhiteListOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeDBClusterAccessWhiteListRequest&, const DescribeDBClusterAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAttributeResult> DescribeDBClusterAttributeOutcome;
			typedef std::future<DescribeDBClusterAttributeOutcome> DescribeDBClusterAttributeOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeDBClusterAttributeRequest&, const DescribeDBClusterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterConfigResult> DescribeDBClusterConfigOutcome;
			typedef std::future<DescribeDBClusterConfigOutcome> DescribeDBClusterConfigOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeDBClusterConfigRequest&, const DescribeDBClusterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterConfigInXMLResult> DescribeDBClusterConfigInXMLOutcome;
			typedef std::future<DescribeDBClusterConfigInXMLOutcome> DescribeDBClusterConfigInXMLOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeDBClusterConfigInXMLRequest&, const DescribeDBClusterConfigInXMLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterConfigInXMLAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterNetInfoItemsResult> DescribeDBClusterNetInfoItemsOutcome;
			typedef std::future<DescribeDBClusterNetInfoItemsOutcome> DescribeDBClusterNetInfoItemsOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeDBClusterNetInfoItemsRequest&, const DescribeDBClusterNetInfoItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterNetInfoItemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterPerformanceResult> DescribeDBClusterPerformanceOutcome;
			typedef std::future<DescribeDBClusterPerformanceOutcome> DescribeDBClusterPerformanceOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeDBClusterPerformanceRequest&, const DescribeDBClusterPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClustersResult> DescribeDBClustersOutcome;
			typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeDBClustersRequest&, const DescribeDBClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBConfigResult> DescribeDBConfigOutcome;
			typedef std::future<DescribeDBConfigOutcome> DescribeDBConfigOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeDBConfigRequest&, const DescribeDBConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeOSSStorageResult> DescribeOSSStorageOutcome;
			typedef std::future<DescribeOSSStorageOutcome> DescribeOSSStorageOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeOSSStorageRequest&, const DescribeOSSStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOSSStorageAsyncHandler;
			typedef Outcome<Error, Model::DescribeProcessListResult> DescribeProcessListOutcome;
			typedef std::future<DescribeProcessListOutcome> DescribeProcessListOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeProcessListRequest&, const DescribeProcessListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSchemasResult> DescribeSchemasOutcome;
			typedef std::future<DescribeSchemasOutcome> DescribeSchemasOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeSchemasRequest&, const DescribeSchemasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchemasAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynDbTablesResult> DescribeSynDbTablesOutcome;
			typedef std::future<DescribeSynDbTablesOutcome> DescribeSynDbTablesOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeSynDbTablesRequest&, const DescribeSynDbTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynDbTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynDbsResult> DescribeSynDbsOutcome;
			typedef std::future<DescribeSynDbsOutcome> DescribeSynDbsOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeSynDbsRequest&, const DescribeSynDbsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynDbsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTablesResult> DescribeTablesOutcome;
			typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeTablesRequest&, const DescribeTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTransferHistoryResult> DescribeTransferHistoryOutcome;
			typedef std::future<DescribeTransferHistoryOutcome> DescribeTransferHistoryOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::DescribeTransferHistoryRequest&, const DescribeTransferHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTransferHistoryAsyncHandler;
			typedef Outcome<Error, Model::KillProcessResult> KillProcessOutcome;
			typedef std::future<KillProcessOutcome> KillProcessOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::KillProcessRequest&, const KillProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillProcessAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountAuthorityResult> ModifyAccountAuthorityOutcome;
			typedef std::future<ModifyAccountAuthorityOutcome> ModifyAccountAuthorityOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyAccountAuthorityRequest&, const ModifyAccountAuthorityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountAuthorityAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterResult> ModifyDBClusterOutcome;
			typedef std::future<ModifyDBClusterOutcome> ModifyDBClusterOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyDBClusterRequest&, const ModifyDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterAccessWhiteListResult> ModifyDBClusterAccessWhiteListOutcome;
			typedef std::future<ModifyDBClusterAccessWhiteListOutcome> ModifyDBClusterAccessWhiteListOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyDBClusterAccessWhiteListRequest&, const ModifyDBClusterAccessWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAccessWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterConfigResult> ModifyDBClusterConfigOutcome;
			typedef std::future<ModifyDBClusterConfigOutcome> ModifyDBClusterConfigOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyDBClusterConfigRequest&, const ModifyDBClusterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterConfigInXMLResult> ModifyDBClusterConfigInXMLOutcome;
			typedef std::future<ModifyDBClusterConfigInXMLOutcome> ModifyDBClusterConfigInXMLOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyDBClusterConfigInXMLRequest&, const ModifyDBClusterConfigInXMLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterConfigInXMLAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterDescriptionResult> ModifyDBClusterDescriptionOutcome;
			typedef std::future<ModifyDBClusterDescriptionOutcome> ModifyDBClusterDescriptionOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyDBClusterDescriptionRequest&, const ModifyDBClusterDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterMaintainTimeResult> ModifyDBClusterMaintainTimeOutcome;
			typedef std::future<ModifyDBClusterMaintainTimeOutcome> ModifyDBClusterMaintainTimeOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyDBClusterMaintainTimeRequest&, const ModifyDBClusterMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBConfigResult> ModifyDBConfigOutcome;
			typedef std::future<ModifyDBConfigOutcome> ModifyDBConfigOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyDBConfigRequest&, const ModifyDBConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyMinorVersionGreadeTypeResult> ModifyMinorVersionGreadeTypeOutcome;
			typedef std::future<ModifyMinorVersionGreadeTypeOutcome> ModifyMinorVersionGreadeTypeOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyMinorVersionGreadeTypeRequest&, const ModifyMinorVersionGreadeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMinorVersionGreadeTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyRDSToClickhouseDbResult> ModifyRDSToClickhouseDbOutcome;
			typedef std::future<ModifyRDSToClickhouseDbOutcome> ModifyRDSToClickhouseDbOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ModifyRDSToClickhouseDbRequest&, const ModifyRDSToClickhouseDbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRDSToClickhouseDbAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterPublicConnectionResult> ReleaseClusterPublicConnectionOutcome;
			typedef std::future<ReleaseClusterPublicConnectionOutcome> ReleaseClusterPublicConnectionOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ReleaseClusterPublicConnectionRequest&, const ReleaseClusterPublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterPublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestartInstanceResult> RestartInstanceOutcome;
			typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::RestartInstanceRequest&, const RestartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
			typedef Outcome<Error, Model::TransferVersionResult> TransferVersionOutcome;
			typedef std::future<TransferVersionOutcome> TransferVersionOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::TransferVersionRequest&, const TransferVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeMinorVersionResult> UpgradeMinorVersionOutcome;
			typedef std::future<UpgradeMinorVersionOutcome> UpgradeMinorVersionOutcomeCallable;
			typedef std::function<void(const ClickhouseClient*, const Model::UpgradeMinorVersionRequest&, const UpgradeMinorVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeMinorVersionAsyncHandler;

			ClickhouseClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ClickhouseClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ClickhouseClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ClickhouseClient();
			AllocateClusterPublicConnectionOutcome allocateClusterPublicConnection(const Model::AllocateClusterPublicConnectionRequest &request)const;
			void allocateClusterPublicConnectionAsync(const Model::AllocateClusterPublicConnectionRequest& request, const AllocateClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateClusterPublicConnectionOutcomeCallable allocateClusterPublicConnectionCallable(const Model::AllocateClusterPublicConnectionRequest& request) const;
			CheckClickhouseToRDSOutcome checkClickhouseToRDS(const Model::CheckClickhouseToRDSRequest &request)const;
			void checkClickhouseToRDSAsync(const Model::CheckClickhouseToRDSRequest& request, const CheckClickhouseToRDSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckClickhouseToRDSOutcomeCallable checkClickhouseToRDSCallable(const Model::CheckClickhouseToRDSRequest& request) const;
			CheckModifyConfigNeedRestartOutcome checkModifyConfigNeedRestart(const Model::CheckModifyConfigNeedRestartRequest &request)const;
			void checkModifyConfigNeedRestartAsync(const Model::CheckModifyConfigNeedRestartRequest& request, const CheckModifyConfigNeedRestartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckModifyConfigNeedRestartOutcomeCallable checkModifyConfigNeedRestartCallable(const Model::CheckModifyConfigNeedRestartRequest& request) const;
			CheckMonitorAlertOutcome checkMonitorAlert(const Model::CheckMonitorAlertRequest &request)const;
			void checkMonitorAlertAsync(const Model::CheckMonitorAlertRequest& request, const CheckMonitorAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckMonitorAlertOutcomeCallable checkMonitorAlertCallable(const Model::CheckMonitorAlertRequest& request) const;
			CheckScaleOutBalancedOutcome checkScaleOutBalanced(const Model::CheckScaleOutBalancedRequest &request)const;
			void checkScaleOutBalancedAsync(const Model::CheckScaleOutBalancedRequest& request, const CheckScaleOutBalancedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckScaleOutBalancedOutcomeCallable checkScaleOutBalancedCallable(const Model::CheckScaleOutBalancedRequest& request) const;
			CheckServiceLinkedRoleOutcome checkServiceLinkedRole(const Model::CheckServiceLinkedRoleRequest &request)const;
			void checkServiceLinkedRoleAsync(const Model::CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceLinkedRoleOutcomeCallable checkServiceLinkedRoleCallable(const Model::CheckServiceLinkedRoleRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateAccountAndAuthorityOutcome createAccountAndAuthority(const Model::CreateAccountAndAuthorityRequest &request)const;
			void createAccountAndAuthorityAsync(const Model::CreateAccountAndAuthorityRequest& request, const CreateAccountAndAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountAndAuthorityOutcomeCallable createAccountAndAuthorityCallable(const Model::CreateAccountAndAuthorityRequest& request) const;
			CreateBackupPolicyOutcome createBackupPolicy(const Model::CreateBackupPolicyRequest &request)const;
			void createBackupPolicyAsync(const Model::CreateBackupPolicyRequest& request, const CreateBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupPolicyOutcomeCallable createBackupPolicyCallable(const Model::CreateBackupPolicyRequest& request) const;
			CreateDBInstanceOutcome createDBInstance(const Model::CreateDBInstanceRequest &request)const;
			void createDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceOutcomeCallable createDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;
			CreateMonitorDataReportOutcome createMonitorDataReport(const Model::CreateMonitorDataReportRequest &request)const;
			void createMonitorDataReportAsync(const Model::CreateMonitorDataReportRequest& request, const CreateMonitorDataReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMonitorDataReportOutcomeCallable createMonitorDataReportCallable(const Model::CreateMonitorDataReportRequest& request) const;
			CreateOSSStorageOutcome createOSSStorage(const Model::CreateOSSStorageRequest &request)const;
			void createOSSStorageAsync(const Model::CreateOSSStorageRequest& request, const CreateOSSStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOSSStorageOutcomeCallable createOSSStorageCallable(const Model::CreateOSSStorageRequest& request) const;
			CreatePortsForClickHouseOutcome createPortsForClickHouse(const Model::CreatePortsForClickHouseRequest &request)const;
			void createPortsForClickHouseAsync(const Model::CreatePortsForClickHouseRequest& request, const CreatePortsForClickHouseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePortsForClickHouseOutcomeCallable createPortsForClickHouseCallable(const Model::CreatePortsForClickHouseRequest& request) const;
			CreateRDSToClickhouseDbOutcome createRDSToClickhouseDb(const Model::CreateRDSToClickhouseDbRequest &request)const;
			void createRDSToClickhouseDbAsync(const Model::CreateRDSToClickhouseDbRequest& request, const CreateRDSToClickhouseDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRDSToClickhouseDbOutcomeCallable createRDSToClickhouseDbCallable(const Model::CreateRDSToClickhouseDbRequest& request) const;
			CreateSQLAccountOutcome createSQLAccount(const Model::CreateSQLAccountRequest &request)const;
			void createSQLAccountAsync(const Model::CreateSQLAccountRequest& request, const CreateSQLAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSQLAccountOutcomeCallable createSQLAccountCallable(const Model::CreateSQLAccountRequest& request) const;
			CreateServiceLinkedRoleOutcome createServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request)const;
			void createServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleOutcomeCallable createServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteDBClusterOutcome deleteDBCluster(const Model::DeleteDBClusterRequest &request)const;
			void deleteDBClusterAsync(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBClusterOutcomeCallable deleteDBClusterCallable(const Model::DeleteDBClusterRequest& request) const;
			DeleteSyndbOutcome deleteSyndb(const Model::DeleteSyndbRequest &request)const;
			void deleteSyndbAsync(const Model::DeleteSyndbRequest& request, const DeleteSyndbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSyndbOutcomeCallable deleteSyndbCallable(const Model::DeleteSyndbRequest& request) const;
			DescribeAccountAuthorityOutcome describeAccountAuthority(const Model::DescribeAccountAuthorityRequest &request)const;
			void describeAccountAuthorityAsync(const Model::DescribeAccountAuthorityRequest& request, const DescribeAccountAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountAuthorityOutcomeCallable describeAccountAuthorityCallable(const Model::DescribeAccountAuthorityRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeAllDataSourceOutcome describeAllDataSource(const Model::DescribeAllDataSourceRequest &request)const;
			void describeAllDataSourceAsync(const Model::DescribeAllDataSourceRequest& request, const DescribeAllDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllDataSourceOutcomeCallable describeAllDataSourceCallable(const Model::DescribeAllDataSourceRequest& request) const;
			DescribeAllDataSourcesOutcome describeAllDataSources(const Model::DescribeAllDataSourcesRequest &request)const;
			void describeAllDataSourcesAsync(const Model::DescribeAllDataSourcesRequest& request, const DescribeAllDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllDataSourcesOutcomeCallable describeAllDataSourcesCallable(const Model::DescribeAllDataSourcesRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeColumnsOutcome describeColumns(const Model::DescribeColumnsRequest &request)const;
			void describeColumnsAsync(const Model::DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeColumnsOutcomeCallable describeColumnsCallable(const Model::DescribeColumnsRequest& request) const;
			DescribeConfigHistoryOutcome describeConfigHistory(const Model::DescribeConfigHistoryRequest &request)const;
			void describeConfigHistoryAsync(const Model::DescribeConfigHistoryRequest& request, const DescribeConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigHistoryOutcomeCallable describeConfigHistoryCallable(const Model::DescribeConfigHistoryRequest& request) const;
			DescribeConfigVersionDifferenceOutcome describeConfigVersionDifference(const Model::DescribeConfigVersionDifferenceRequest &request)const;
			void describeConfigVersionDifferenceAsync(const Model::DescribeConfigVersionDifferenceRequest& request, const DescribeConfigVersionDifferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigVersionDifferenceOutcomeCallable describeConfigVersionDifferenceCallable(const Model::DescribeConfigVersionDifferenceRequest& request) const;
			DescribeDBClusterAccessWhiteListOutcome describeDBClusterAccessWhiteList(const Model::DescribeDBClusterAccessWhiteListRequest &request)const;
			void describeDBClusterAccessWhiteListAsync(const Model::DescribeDBClusterAccessWhiteListRequest& request, const DescribeDBClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAccessWhiteListOutcomeCallable describeDBClusterAccessWhiteListCallable(const Model::DescribeDBClusterAccessWhiteListRequest& request) const;
			DescribeDBClusterAttributeOutcome describeDBClusterAttribute(const Model::DescribeDBClusterAttributeRequest &request)const;
			void describeDBClusterAttributeAsync(const Model::DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAttributeOutcomeCallable describeDBClusterAttributeCallable(const Model::DescribeDBClusterAttributeRequest& request) const;
			DescribeDBClusterConfigOutcome describeDBClusterConfig(const Model::DescribeDBClusterConfigRequest &request)const;
			void describeDBClusterConfigAsync(const Model::DescribeDBClusterConfigRequest& request, const DescribeDBClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterConfigOutcomeCallable describeDBClusterConfigCallable(const Model::DescribeDBClusterConfigRequest& request) const;
			DescribeDBClusterConfigInXMLOutcome describeDBClusterConfigInXML(const Model::DescribeDBClusterConfigInXMLRequest &request)const;
			void describeDBClusterConfigInXMLAsync(const Model::DescribeDBClusterConfigInXMLRequest& request, const DescribeDBClusterConfigInXMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterConfigInXMLOutcomeCallable describeDBClusterConfigInXMLCallable(const Model::DescribeDBClusterConfigInXMLRequest& request) const;
			DescribeDBClusterNetInfoItemsOutcome describeDBClusterNetInfoItems(const Model::DescribeDBClusterNetInfoItemsRequest &request)const;
			void describeDBClusterNetInfoItemsAsync(const Model::DescribeDBClusterNetInfoItemsRequest& request, const DescribeDBClusterNetInfoItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterNetInfoItemsOutcomeCallable describeDBClusterNetInfoItemsCallable(const Model::DescribeDBClusterNetInfoItemsRequest& request) const;
			DescribeDBClusterPerformanceOutcome describeDBClusterPerformance(const Model::DescribeDBClusterPerformanceRequest &request)const;
			void describeDBClusterPerformanceAsync(const Model::DescribeDBClusterPerformanceRequest& request, const DescribeDBClusterPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterPerformanceOutcomeCallable describeDBClusterPerformanceCallable(const Model::DescribeDBClusterPerformanceRequest& request) const;
			DescribeDBClustersOutcome describeDBClusters(const Model::DescribeDBClustersRequest &request)const;
			void describeDBClustersAsync(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClustersOutcomeCallable describeDBClustersCallable(const Model::DescribeDBClustersRequest& request) const;
			DescribeDBConfigOutcome describeDBConfig(const Model::DescribeDBConfigRequest &request)const;
			void describeDBConfigAsync(const Model::DescribeDBConfigRequest& request, const DescribeDBConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBConfigOutcomeCallable describeDBConfigCallable(const Model::DescribeDBConfigRequest& request) const;
			DescribeOSSStorageOutcome describeOSSStorage(const Model::DescribeOSSStorageRequest &request)const;
			void describeOSSStorageAsync(const Model::DescribeOSSStorageRequest& request, const DescribeOSSStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOSSStorageOutcomeCallable describeOSSStorageCallable(const Model::DescribeOSSStorageRequest& request) const;
			DescribeProcessListOutcome describeProcessList(const Model::DescribeProcessListRequest &request)const;
			void describeProcessListAsync(const Model::DescribeProcessListRequest& request, const DescribeProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProcessListOutcomeCallable describeProcessListCallable(const Model::DescribeProcessListRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSchemasOutcome describeSchemas(const Model::DescribeSchemasRequest &request)const;
			void describeSchemasAsync(const Model::DescribeSchemasRequest& request, const DescribeSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSchemasOutcomeCallable describeSchemasCallable(const Model::DescribeSchemasRequest& request) const;
			DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
			void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
			DescribeSynDbTablesOutcome describeSynDbTables(const Model::DescribeSynDbTablesRequest &request)const;
			void describeSynDbTablesAsync(const Model::DescribeSynDbTablesRequest& request, const DescribeSynDbTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynDbTablesOutcomeCallable describeSynDbTablesCallable(const Model::DescribeSynDbTablesRequest& request) const;
			DescribeSynDbsOutcome describeSynDbs(const Model::DescribeSynDbsRequest &request)const;
			void describeSynDbsAsync(const Model::DescribeSynDbsRequest& request, const DescribeSynDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynDbsOutcomeCallable describeSynDbsCallable(const Model::DescribeSynDbsRequest& request) const;
			DescribeTablesOutcome describeTables(const Model::DescribeTablesRequest &request)const;
			void describeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTablesOutcomeCallable describeTablesCallable(const Model::DescribeTablesRequest& request) const;
			DescribeTransferHistoryOutcome describeTransferHistory(const Model::DescribeTransferHistoryRequest &request)const;
			void describeTransferHistoryAsync(const Model::DescribeTransferHistoryRequest& request, const DescribeTransferHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTransferHistoryOutcomeCallable describeTransferHistoryCallable(const Model::DescribeTransferHistoryRequest& request) const;
			KillProcessOutcome killProcess(const Model::KillProcessRequest &request)const;
			void killProcessAsync(const Model::KillProcessRequest& request, const KillProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillProcessOutcomeCallable killProcessCallable(const Model::KillProcessRequest& request) const;
			ModifyAccountAuthorityOutcome modifyAccountAuthority(const Model::ModifyAccountAuthorityRequest &request)const;
			void modifyAccountAuthorityAsync(const Model::ModifyAccountAuthorityRequest& request, const ModifyAccountAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountAuthorityOutcomeCallable modifyAccountAuthorityCallable(const Model::ModifyAccountAuthorityRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyDBClusterOutcome modifyDBCluster(const Model::ModifyDBClusterRequest &request)const;
			void modifyDBClusterAsync(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterOutcomeCallable modifyDBClusterCallable(const Model::ModifyDBClusterRequest& request) const;
			ModifyDBClusterAccessWhiteListOutcome modifyDBClusterAccessWhiteList(const Model::ModifyDBClusterAccessWhiteListRequest &request)const;
			void modifyDBClusterAccessWhiteListAsync(const Model::ModifyDBClusterAccessWhiteListRequest& request, const ModifyDBClusterAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterAccessWhiteListOutcomeCallable modifyDBClusterAccessWhiteListCallable(const Model::ModifyDBClusterAccessWhiteListRequest& request) const;
			ModifyDBClusterConfigOutcome modifyDBClusterConfig(const Model::ModifyDBClusterConfigRequest &request)const;
			void modifyDBClusterConfigAsync(const Model::ModifyDBClusterConfigRequest& request, const ModifyDBClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterConfigOutcomeCallable modifyDBClusterConfigCallable(const Model::ModifyDBClusterConfigRequest& request) const;
			ModifyDBClusterConfigInXMLOutcome modifyDBClusterConfigInXML(const Model::ModifyDBClusterConfigInXMLRequest &request)const;
			void modifyDBClusterConfigInXMLAsync(const Model::ModifyDBClusterConfigInXMLRequest& request, const ModifyDBClusterConfigInXMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterConfigInXMLOutcomeCallable modifyDBClusterConfigInXMLCallable(const Model::ModifyDBClusterConfigInXMLRequest& request) const;
			ModifyDBClusterDescriptionOutcome modifyDBClusterDescription(const Model::ModifyDBClusterDescriptionRequest &request)const;
			void modifyDBClusterDescriptionAsync(const Model::ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterDescriptionOutcomeCallable modifyDBClusterDescriptionCallable(const Model::ModifyDBClusterDescriptionRequest& request) const;
			ModifyDBClusterMaintainTimeOutcome modifyDBClusterMaintainTime(const Model::ModifyDBClusterMaintainTimeRequest &request)const;
			void modifyDBClusterMaintainTimeAsync(const Model::ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterMaintainTimeOutcomeCallable modifyDBClusterMaintainTimeCallable(const Model::ModifyDBClusterMaintainTimeRequest& request) const;
			ModifyDBConfigOutcome modifyDBConfig(const Model::ModifyDBConfigRequest &request)const;
			void modifyDBConfigAsync(const Model::ModifyDBConfigRequest& request, const ModifyDBConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBConfigOutcomeCallable modifyDBConfigCallable(const Model::ModifyDBConfigRequest& request) const;
			ModifyMinorVersionGreadeTypeOutcome modifyMinorVersionGreadeType(const Model::ModifyMinorVersionGreadeTypeRequest &request)const;
			void modifyMinorVersionGreadeTypeAsync(const Model::ModifyMinorVersionGreadeTypeRequest& request, const ModifyMinorVersionGreadeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMinorVersionGreadeTypeOutcomeCallable modifyMinorVersionGreadeTypeCallable(const Model::ModifyMinorVersionGreadeTypeRequest& request) const;
			ModifyRDSToClickhouseDbOutcome modifyRDSToClickhouseDb(const Model::ModifyRDSToClickhouseDbRequest &request)const;
			void modifyRDSToClickhouseDbAsync(const Model::ModifyRDSToClickhouseDbRequest& request, const ModifyRDSToClickhouseDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRDSToClickhouseDbOutcomeCallable modifyRDSToClickhouseDbCallable(const Model::ModifyRDSToClickhouseDbRequest& request) const;
			ReleaseClusterPublicConnectionOutcome releaseClusterPublicConnection(const Model::ReleaseClusterPublicConnectionRequest &request)const;
			void releaseClusterPublicConnectionAsync(const Model::ReleaseClusterPublicConnectionRequest& request, const ReleaseClusterPublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterPublicConnectionOutcomeCallable releaseClusterPublicConnectionCallable(const Model::ReleaseClusterPublicConnectionRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			RestartInstanceOutcome restartInstance(const Model::RestartInstanceRequest &request)const;
			void restartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartInstanceOutcomeCallable restartInstanceCallable(const Model::RestartInstanceRequest& request) const;
			TransferVersionOutcome transferVersion(const Model::TransferVersionRequest &request)const;
			void transferVersionAsync(const Model::TransferVersionRequest& request, const TransferVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferVersionOutcomeCallable transferVersionCallable(const Model::TransferVersionRequest& request) const;
			UpgradeMinorVersionOutcome upgradeMinorVersion(const Model::UpgradeMinorVersionRequest &request)const;
			void upgradeMinorVersionAsync(const Model::UpgradeMinorVersionRequest& request, const UpgradeMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeMinorVersionOutcomeCallable upgradeMinorVersionCallable(const Model::UpgradeMinorVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLICKHOUSE_CLICKHOUSECLIENT_H_
