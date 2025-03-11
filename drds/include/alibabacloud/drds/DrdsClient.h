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

#ifndef ALIBABACLOUD_DRDS_DRDSCLIENT_H_
#define ALIBABACLOUD_DRDS_DRDSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DrdsExport.h"
#include "model/ChangeAccountPasswordRequest.h"
#include "model/ChangeAccountPasswordResult.h"
#include "model/ChangeInstanceAzoneRequest.h"
#include "model/ChangeInstanceAzoneResult.h"
#include "model/CheckDrdsDbNameRequest.h"
#include "model/CheckDrdsDbNameResult.h"
#include "model/CheckExpandStatusRequest.h"
#include "model/CheckExpandStatusResult.h"
#include "model/CheckSqlAuditEnableStatusRequest.h"
#include "model/CheckSqlAuditEnableStatusResult.h"
#include "model/CreateDrdsDBRequest.h"
#include "model/CreateDrdsDBResult.h"
#include "model/CreateDrdsInstanceRequest.h"
#include "model/CreateDrdsInstanceResult.h"
#include "model/CreateInstanceAccountRequest.h"
#include "model/CreateInstanceAccountResult.h"
#include "model/CreateInstanceInternetAddressRequest.h"
#include "model/CreateInstanceInternetAddressResult.h"
#include "model/CreateOrderForRdsRequest.h"
#include "model/CreateOrderForRdsResult.h"
#include "model/CreateShardTaskRequest.h"
#include "model/CreateShardTaskResult.h"
#include "model/DescribeBackMenuRequest.h"
#include "model/DescribeBackMenuResult.h"
#include "model/DescribeBackupDbsRequest.h"
#include "model/DescribeBackupDbsResult.h"
#include "model/DescribeBackupLocalRequest.h"
#include "model/DescribeBackupLocalResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupSetsRequest.h"
#include "model/DescribeBackupSetsResult.h"
#include "model/DescribeBackupTimesRequest.h"
#include "model/DescribeBackupTimesResult.h"
#include "model/DescribeBroadcastTablesRequest.h"
#include "model/DescribeBroadcastTablesResult.h"
#include "model/DescribeDbInstanceDbsRequest.h"
#include "model/DescribeDbInstanceDbsResult.h"
#include "model/DescribeDbInstancesRequest.h"
#include "model/DescribeDbInstancesResult.h"
#include "model/DescribeDrdsDBRequest.h"
#include "model/DescribeDrdsDBResult.h"
#include "model/DescribeDrdsDBClusterRequest.h"
#include "model/DescribeDrdsDBClusterResult.h"
#include "model/DescribeDrdsDBIpWhiteListRequest.h"
#include "model/DescribeDrdsDBIpWhiteListResult.h"
#include "model/DescribeDrdsDBsRequest.h"
#include "model/DescribeDrdsDBsResult.h"
#include "model/DescribeDrdsDbInstanceRequest.h"
#include "model/DescribeDrdsDbInstanceResult.h"
#include "model/DescribeDrdsDbInstancesRequest.h"
#include "model/DescribeDrdsDbInstancesResult.h"
#include "model/DescribeDrdsDbRdsNameListRequest.h"
#include "model/DescribeDrdsDbRdsNameListResult.h"
#include "model/DescribeDrdsInstanceRequest.h"
#include "model/DescribeDrdsInstanceResult.h"
#include "model/DescribeDrdsInstanceDbMonitorRequest.h"
#include "model/DescribeDrdsInstanceDbMonitorResult.h"
#include "model/DescribeDrdsInstanceLevelTasksRequest.h"
#include "model/DescribeDrdsInstanceLevelTasksResult.h"
#include "model/DescribeDrdsInstanceMonitorRequest.h"
#include "model/DescribeDrdsInstanceMonitorResult.h"
#include "model/DescribeDrdsInstanceVersionRequest.h"
#include "model/DescribeDrdsInstanceVersionResult.h"
#include "model/DescribeDrdsInstancesRequest.h"
#include "model/DescribeDrdsInstancesResult.h"
#include "model/DescribeDrdsParamsRequest.h"
#include "model/DescribeDrdsParamsResult.h"
#include "model/DescribeDrdsRdsInstancesRequest.h"
#include "model/DescribeDrdsRdsInstancesResult.h"
#include "model/DescribeDrdsShardingDbsRequest.h"
#include "model/DescribeDrdsShardingDbsResult.h"
#include "model/DescribeDrdsSlowSqlsRequest.h"
#include "model/DescribeDrdsSlowSqlsResult.h"
#include "model/DescribeDrdsSqlAuditStatusRequest.h"
#include "model/DescribeDrdsSqlAuditStatusResult.h"
#include "model/DescribeDrdsTasksRequest.h"
#include "model/DescribeDrdsTasksResult.h"
#include "model/DescribeExpandLogicTableInfoListRequest.h"
#include "model/DescribeExpandLogicTableInfoListResult.h"
#include "model/DescribeHotDbListRequest.h"
#include "model/DescribeHotDbListResult.h"
#include "model/DescribeInstDbLogInfoRequest.h"
#include "model/DescribeInstDbLogInfoResult.h"
#include "model/DescribeInstDbSlsInfoRequest.h"
#include "model/DescribeInstDbSlsInfoResult.h"
#include "model/DescribeInstanceAccountsRequest.h"
#include "model/DescribeInstanceAccountsResult.h"
#include "model/DescribeInstanceSwitchAzoneRequest.h"
#include "model/DescribeInstanceSwitchAzoneResult.h"
#include "model/DescribeInstanceSwitchNetworkRequest.h"
#include "model/DescribeInstanceSwitchNetworkResult.h"
#include "model/DescribePreCheckResultRequest.h"
#include "model/DescribePreCheckResultResult.h"
#include "model/DescribeRDSPerformanceRequest.h"
#include "model/DescribeRDSPerformanceResult.h"
#include "model/DescribeRdsCommodityRequest.h"
#include "model/DescribeRdsCommodityResult.h"
#include "model/DescribeRdsPerformanceSummaryRequest.h"
#include "model/DescribeRdsPerformanceSummaryResult.h"
#include "model/DescribeRdsSuperAccountInstancesRequest.h"
#include "model/DescribeRdsSuperAccountInstancesResult.h"
#include "model/DescribeRecycleBinStatusRequest.h"
#include "model/DescribeRecycleBinStatusResult.h"
#include "model/DescribeRecycleBinTablesRequest.h"
#include "model/DescribeRecycleBinTablesResult.h"
#include "model/DescribeRestoreOrderRequest.h"
#include "model/DescribeRestoreOrderResult.h"
#include "model/DescribeShardTaskInfoRequest.h"
#include "model/DescribeShardTaskInfoResult.h"
#include "model/DescribeSqlFlashbakTaskRequest.h"
#include "model/DescribeSqlFlashbakTaskResult.h"
#include "model/DescribeTableRequest.h"
#include "model/DescribeTableResult.h"
#include "model/DescribeTableListByTypeRequest.h"
#include "model/DescribeTableListByTypeResult.h"
#include "model/DescribeTablesRequest.h"
#include "model/DescribeTablesResult.h"
#include "model/DisableSqlAuditRequest.h"
#include "model/DisableSqlAuditResult.h"
#include "model/EnableInstanceIpv6AddressRequest.h"
#include "model/EnableInstanceIpv6AddressResult.h"
#include "model/EnableSqlAuditRequest.h"
#include "model/EnableSqlAuditResult.h"
#include "model/EnableSqlFlashbackMatchSwitchRequest.h"
#include "model/EnableSqlFlashbackMatchSwitchResult.h"
#include "model/FlashbackRecycleBinTableRequest.h"
#include "model/FlashbackRecycleBinTableResult.h"
#include "model/GetDrdsDbRdsRelationInfoRequest.h"
#include "model/GetDrdsDbRdsRelationInfoResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ManagePrivateRdsRequest.h"
#include "model/ManagePrivateRdsResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAccountPrivilegeRequest.h"
#include "model/ModifyAccountPrivilegeResult.h"
#include "model/ModifyDrdsInstanceDescriptionRequest.h"
#include "model/ModifyDrdsInstanceDescriptionResult.h"
#include "model/ModifyDrdsIpWhiteListRequest.h"
#include "model/ModifyDrdsIpWhiteListResult.h"
#include "model/ModifyPolarDbReadWeightRequest.h"
#include "model/ModifyPolarDbReadWeightResult.h"
#include "model/ModifyRdsReadWeightRequest.h"
#include "model/ModifyRdsReadWeightResult.h"
#include "model/PutStartBackupRequest.h"
#include "model/PutStartBackupResult.h"
#include "model/RefreshDrdsAtomUrlRequest.h"
#include "model/RefreshDrdsAtomUrlResult.h"
#include "model/ReleaseInstanceInternetAddressRequest.h"
#include "model/ReleaseInstanceInternetAddressResult.h"
#include "model/RemoveBackupsSetRequest.h"
#include "model/RemoveBackupsSetResult.h"
#include "model/RemoveDrdsDbRequest.h"
#include "model/RemoveDrdsDbResult.h"
#include "model/RemoveDrdsDbFailedRecordRequest.h"
#include "model/RemoveDrdsDbFailedRecordResult.h"
#include "model/RemoveDrdsInstanceRequest.h"
#include "model/RemoveDrdsInstanceResult.h"
#include "model/RemoveInstanceAccountRequest.h"
#include "model/RemoveInstanceAccountResult.h"
#include "model/RemoveRecycleBinTableRequest.h"
#include "model/RemoveRecycleBinTableResult.h"
#include "model/RestartDrdsInstanceRequest.h"
#include "model/RestartDrdsInstanceResult.h"
#include "model/RollbackInstanceVersionRequest.h"
#include "model/RollbackInstanceVersionResult.h"
#include "model/SetBackupLocalRequest.h"
#include "model/SetBackupLocalResult.h"
#include "model/SetBackupPolicyRequest.h"
#include "model/SetBackupPolicyResult.h"
#include "model/SetupBroadcastTablesRequest.h"
#include "model/SetupBroadcastTablesResult.h"
#include "model/SetupDrdsParamsRequest.h"
#include "model/SetupDrdsParamsResult.h"
#include "model/SetupRecycleBinStatusRequest.h"
#include "model/SetupRecycleBinStatusResult.h"
#include "model/SetupTableRequest.h"
#include "model/SetupTableResult.h"
#include "model/StartRestoreRequest.h"
#include "model/StartRestoreResult.h"
#include "model/SubmitCleanTaskRequest.h"
#include "model/SubmitCleanTaskResult.h"
#include "model/SubmitHotExpandPreCheckTaskRequest.h"
#include "model/SubmitHotExpandPreCheckTaskResult.h"
#include "model/SubmitHotExpandTaskRequest.h"
#include "model/SubmitHotExpandTaskResult.h"
#include "model/SubmitSmoothExpandPreCheckRequest.h"
#include "model/SubmitSmoothExpandPreCheckResult.h"
#include "model/SubmitSmoothExpandPreCheckTaskRequest.h"
#include "model/SubmitSmoothExpandPreCheckTaskResult.h"
#include "model/SubmitSqlFlashbackTaskRequest.h"
#include "model/SubmitSqlFlashbackTaskResult.h"
#include "model/SwitchGlobalBroadcastTypeRequest.h"
#include "model/SwitchGlobalBroadcastTypeResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateInstanceNetworkRequest.h"
#include "model/UpdateInstanceNetworkResult.h"
#include "model/UpdatePrivateRdsClassRequest.h"
#include "model/UpdatePrivateRdsClassResult.h"
#include "model/UpdateResourceGroupAttributeRequest.h"
#include "model/UpdateResourceGroupAttributeResult.h"
#include "model/UpgradeHiStoreInstanceRequest.h"
#include "model/UpgradeHiStoreInstanceResult.h"
#include "model/UpgradeInstanceVersionRequest.h"
#include "model/UpgradeInstanceVersionResult.h"
#include "model/ValidateShardTaskRequest.h"
#include "model/ValidateShardTaskResult.h"


namespace AlibabaCloud
{
	namespace Drds
	{
		class ALIBABACLOUD_DRDS_EXPORT DrdsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ChangeAccountPasswordResult> ChangeAccountPasswordOutcome;
			typedef std::future<ChangeAccountPasswordOutcome> ChangeAccountPasswordOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ChangeAccountPasswordRequest&, const ChangeAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::ChangeInstanceAzoneResult> ChangeInstanceAzoneOutcome;
			typedef std::future<ChangeInstanceAzoneOutcome> ChangeInstanceAzoneOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ChangeInstanceAzoneRequest&, const ChangeInstanceAzoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeInstanceAzoneAsyncHandler;
			typedef Outcome<Error, Model::CheckDrdsDbNameResult> CheckDrdsDbNameOutcome;
			typedef std::future<CheckDrdsDbNameOutcome> CheckDrdsDbNameOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CheckDrdsDbNameRequest&, const CheckDrdsDbNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDrdsDbNameAsyncHandler;
			typedef Outcome<Error, Model::CheckExpandStatusResult> CheckExpandStatusOutcome;
			typedef std::future<CheckExpandStatusOutcome> CheckExpandStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CheckExpandStatusRequest&, const CheckExpandStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckExpandStatusAsyncHandler;
			typedef Outcome<Error, Model::CheckSqlAuditEnableStatusResult> CheckSqlAuditEnableStatusOutcome;
			typedef std::future<CheckSqlAuditEnableStatusOutcome> CheckSqlAuditEnableStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CheckSqlAuditEnableStatusRequest&, const CheckSqlAuditEnableStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckSqlAuditEnableStatusAsyncHandler;
			typedef Outcome<Error, Model::CreateDrdsDBResult> CreateDrdsDBOutcome;
			typedef std::future<CreateDrdsDBOutcome> CreateDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateDrdsDBRequest&, const CreateDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::CreateDrdsInstanceResult> CreateDrdsInstanceOutcome;
			typedef std::future<CreateDrdsInstanceOutcome> CreateDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateDrdsInstanceRequest&, const CreateDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDrdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceAccountResult> CreateInstanceAccountOutcome;
			typedef std::future<CreateInstanceAccountOutcome> CreateInstanceAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateInstanceAccountRequest&, const CreateInstanceAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceInternetAddressResult> CreateInstanceInternetAddressOutcome;
			typedef std::future<CreateInstanceInternetAddressOutcome> CreateInstanceInternetAddressOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateInstanceInternetAddressRequest&, const CreateInstanceInternetAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceInternetAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderForRdsResult> CreateOrderForRdsOutcome;
			typedef std::future<CreateOrderForRdsOutcome> CreateOrderForRdsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateOrderForRdsRequest&, const CreateOrderForRdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderForRdsAsyncHandler;
			typedef Outcome<Error, Model::CreateShardTaskResult> CreateShardTaskOutcome;
			typedef std::future<CreateShardTaskOutcome> CreateShardTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::CreateShardTaskRequest&, const CreateShardTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateShardTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackMenuResult> DescribeBackMenuOutcome;
			typedef std::future<DescribeBackMenuOutcome> DescribeBackMenuOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackMenuRequest&, const DescribeBackMenuOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackMenuAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupDbsResult> DescribeBackupDbsOutcome;
			typedef std::future<DescribeBackupDbsOutcome> DescribeBackupDbsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackupDbsRequest&, const DescribeBackupDbsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDbsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupLocalResult> DescribeBackupLocalOutcome;
			typedef std::future<DescribeBackupLocalOutcome> DescribeBackupLocalOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackupLocalRequest&, const DescribeBackupLocalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupLocalAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupSetsResult> DescribeBackupSetsOutcome;
			typedef std::future<DescribeBackupSetsOutcome> DescribeBackupSetsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackupSetsRequest&, const DescribeBackupSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupTimesResult> DescribeBackupTimesOutcome;
			typedef std::future<DescribeBackupTimesOutcome> DescribeBackupTimesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBackupTimesRequest&, const DescribeBackupTimesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTimesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBroadcastTablesResult> DescribeBroadcastTablesOutcome;
			typedef std::future<DescribeBroadcastTablesOutcome> DescribeBroadcastTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeBroadcastTablesRequest&, const DescribeBroadcastTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBroadcastTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDbInstanceDbsResult> DescribeDbInstanceDbsOutcome;
			typedef std::future<DescribeDbInstanceDbsOutcome> DescribeDbInstanceDbsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDbInstanceDbsRequest&, const DescribeDbInstanceDbsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbInstanceDbsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDbInstancesResult> DescribeDbInstancesOutcome;
			typedef std::future<DescribeDbInstancesOutcome> DescribeDbInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDbInstancesRequest&, const DescribeDbInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDBResult> DescribeDrdsDBOutcome;
			typedef std::future<DescribeDrdsDBOutcome> DescribeDrdsDBOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBRequest&, const DescribeDrdsDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDBClusterResult> DescribeDrdsDBClusterOutcome;
			typedef std::future<DescribeDrdsDBClusterOutcome> DescribeDrdsDBClusterOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBClusterRequest&, const DescribeDrdsDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDBIpWhiteListResult> DescribeDrdsDBIpWhiteListOutcome;
			typedef std::future<DescribeDrdsDBIpWhiteListOutcome> DescribeDrdsDBIpWhiteListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBIpWhiteListRequest&, const DescribeDrdsDBIpWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBIpWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDBsResult> DescribeDrdsDBsOutcome;
			typedef std::future<DescribeDrdsDBsOutcome> DescribeDrdsDBsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDBsRequest&, const DescribeDrdsDBsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDBsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDbInstanceResult> DescribeDrdsDbInstanceOutcome;
			typedef std::future<DescribeDrdsDbInstanceOutcome> DescribeDrdsDbInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDbInstanceRequest&, const DescribeDrdsDbInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDbInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDbInstancesResult> DescribeDrdsDbInstancesOutcome;
			typedef std::future<DescribeDrdsDbInstancesOutcome> DescribeDrdsDbInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDbInstancesRequest&, const DescribeDrdsDbInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDbInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsDbRdsNameListResult> DescribeDrdsDbRdsNameListOutcome;
			typedef std::future<DescribeDrdsDbRdsNameListOutcome> DescribeDrdsDbRdsNameListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsDbRdsNameListRequest&, const DescribeDrdsDbRdsNameListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsDbRdsNameListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceResult> DescribeDrdsInstanceOutcome;
			typedef std::future<DescribeDrdsInstanceOutcome> DescribeDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceRequest&, const DescribeDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceDbMonitorResult> DescribeDrdsInstanceDbMonitorOutcome;
			typedef std::future<DescribeDrdsInstanceDbMonitorOutcome> DescribeDrdsInstanceDbMonitorOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceDbMonitorRequest&, const DescribeDrdsInstanceDbMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceDbMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceLevelTasksResult> DescribeDrdsInstanceLevelTasksOutcome;
			typedef std::future<DescribeDrdsInstanceLevelTasksOutcome> DescribeDrdsInstanceLevelTasksOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceLevelTasksRequest&, const DescribeDrdsInstanceLevelTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceLevelTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceMonitorResult> DescribeDrdsInstanceMonitorOutcome;
			typedef std::future<DescribeDrdsInstanceMonitorOutcome> DescribeDrdsInstanceMonitorOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceMonitorRequest&, const DescribeDrdsInstanceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstanceVersionResult> DescribeDrdsInstanceVersionOutcome;
			typedef std::future<DescribeDrdsInstanceVersionOutcome> DescribeDrdsInstanceVersionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstanceVersionRequest&, const DescribeDrdsInstanceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstanceVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsInstancesResult> DescribeDrdsInstancesOutcome;
			typedef std::future<DescribeDrdsInstancesOutcome> DescribeDrdsInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsInstancesRequest&, const DescribeDrdsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsParamsResult> DescribeDrdsParamsOutcome;
			typedef std::future<DescribeDrdsParamsOutcome> DescribeDrdsParamsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsParamsRequest&, const DescribeDrdsParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsParamsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsRdsInstancesResult> DescribeDrdsRdsInstancesOutcome;
			typedef std::future<DescribeDrdsRdsInstancesOutcome> DescribeDrdsRdsInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsRdsInstancesRequest&, const DescribeDrdsRdsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsRdsInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsShardingDbsResult> DescribeDrdsShardingDbsOutcome;
			typedef std::future<DescribeDrdsShardingDbsOutcome> DescribeDrdsShardingDbsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsShardingDbsRequest&, const DescribeDrdsShardingDbsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsShardingDbsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsSlowSqlsResult> DescribeDrdsSlowSqlsOutcome;
			typedef std::future<DescribeDrdsSlowSqlsOutcome> DescribeDrdsSlowSqlsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsSlowSqlsRequest&, const DescribeDrdsSlowSqlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsSlowSqlsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsSqlAuditStatusResult> DescribeDrdsSqlAuditStatusOutcome;
			typedef std::future<DescribeDrdsSqlAuditStatusOutcome> DescribeDrdsSqlAuditStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsSqlAuditStatusRequest&, const DescribeDrdsSqlAuditStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsSqlAuditStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDrdsTasksResult> DescribeDrdsTasksOutcome;
			typedef std::future<DescribeDrdsTasksOutcome> DescribeDrdsTasksOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeDrdsTasksRequest&, const DescribeDrdsTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDrdsTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeExpandLogicTableInfoListResult> DescribeExpandLogicTableInfoListOutcome;
			typedef std::future<DescribeExpandLogicTableInfoListOutcome> DescribeExpandLogicTableInfoListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeExpandLogicTableInfoListRequest&, const DescribeExpandLogicTableInfoListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpandLogicTableInfoListAsyncHandler;
			typedef Outcome<Error, Model::DescribeHotDbListResult> DescribeHotDbListOutcome;
			typedef std::future<DescribeHotDbListOutcome> DescribeHotDbListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeHotDbListRequest&, const DescribeHotDbListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHotDbListAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstDbLogInfoResult> DescribeInstDbLogInfoOutcome;
			typedef std::future<DescribeInstDbLogInfoOutcome> DescribeInstDbLogInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstDbLogInfoRequest&, const DescribeInstDbLogInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstDbLogInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstDbSlsInfoResult> DescribeInstDbSlsInfoOutcome;
			typedef std::future<DescribeInstDbSlsInfoOutcome> DescribeInstDbSlsInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstDbSlsInfoRequest&, const DescribeInstDbSlsInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstDbSlsInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAccountsResult> DescribeInstanceAccountsOutcome;
			typedef std::future<DescribeInstanceAccountsOutcome> DescribeInstanceAccountsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstanceAccountsRequest&, const DescribeInstanceAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSwitchAzoneResult> DescribeInstanceSwitchAzoneOutcome;
			typedef std::future<DescribeInstanceSwitchAzoneOutcome> DescribeInstanceSwitchAzoneOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstanceSwitchAzoneRequest&, const DescribeInstanceSwitchAzoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSwitchAzoneAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSwitchNetworkResult> DescribeInstanceSwitchNetworkOutcome;
			typedef std::future<DescribeInstanceSwitchNetworkOutcome> DescribeInstanceSwitchNetworkOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeInstanceSwitchNetworkRequest&, const DescribeInstanceSwitchNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSwitchNetworkAsyncHandler;
			typedef Outcome<Error, Model::DescribePreCheckResultResult> DescribePreCheckResultOutcome;
			typedef std::future<DescribePreCheckResultOutcome> DescribePreCheckResultOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribePreCheckResultRequest&, const DescribePreCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreCheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeRDSPerformanceResult> DescribeRDSPerformanceOutcome;
			typedef std::future<DescribeRDSPerformanceOutcome> DescribeRDSPerformanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRDSPerformanceRequest&, const DescribeRDSPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRDSPerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsCommodityResult> DescribeRdsCommodityOutcome;
			typedef std::future<DescribeRdsCommodityOutcome> DescribeRdsCommodityOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsCommodityRequest&, const DescribeRdsCommodityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsCommodityAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsPerformanceSummaryResult> DescribeRdsPerformanceSummaryOutcome;
			typedef std::future<DescribeRdsPerformanceSummaryOutcome> DescribeRdsPerformanceSummaryOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsPerformanceSummaryRequest&, const DescribeRdsPerformanceSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsPerformanceSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsSuperAccountInstancesResult> DescribeRdsSuperAccountInstancesOutcome;
			typedef std::future<DescribeRdsSuperAccountInstancesOutcome> DescribeRdsSuperAccountInstancesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRdsSuperAccountInstancesRequest&, const DescribeRdsSuperAccountInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsSuperAccountInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecycleBinStatusResult> DescribeRecycleBinStatusOutcome;
			typedef std::future<DescribeRecycleBinStatusOutcome> DescribeRecycleBinStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRecycleBinStatusRequest&, const DescribeRecycleBinStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecycleBinStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecycleBinTablesResult> DescribeRecycleBinTablesOutcome;
			typedef std::future<DescribeRecycleBinTablesOutcome> DescribeRecycleBinTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRecycleBinTablesRequest&, const DescribeRecycleBinTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecycleBinTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreOrderResult> DescribeRestoreOrderOutcome;
			typedef std::future<DescribeRestoreOrderOutcome> DescribeRestoreOrderOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeRestoreOrderRequest&, const DescribeRestoreOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreOrderAsyncHandler;
			typedef Outcome<Error, Model::DescribeShardTaskInfoResult> DescribeShardTaskInfoOutcome;
			typedef std::future<DescribeShardTaskInfoOutcome> DescribeShardTaskInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeShardTaskInfoRequest&, const DescribeShardTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShardTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSqlFlashbakTaskResult> DescribeSqlFlashbakTaskOutcome;
			typedef std::future<DescribeSqlFlashbakTaskOutcome> DescribeSqlFlashbakTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeSqlFlashbakTaskRequest&, const DescribeSqlFlashbakTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSqlFlashbakTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeTableResult> DescribeTableOutcome;
			typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeTableRequest&, const DescribeTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableAsyncHandler;
			typedef Outcome<Error, Model::DescribeTableListByTypeResult> DescribeTableListByTypeOutcome;
			typedef std::future<DescribeTableListByTypeOutcome> DescribeTableListByTypeOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeTableListByTypeRequest&, const DescribeTableListByTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableListByTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeTablesResult> DescribeTablesOutcome;
			typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DescribeTablesRequest&, const DescribeTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
			typedef Outcome<Error, Model::DisableSqlAuditResult> DisableSqlAuditOutcome;
			typedef std::future<DisableSqlAuditOutcome> DisableSqlAuditOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::DisableSqlAuditRequest&, const DisableSqlAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSqlAuditAsyncHandler;
			typedef Outcome<Error, Model::EnableInstanceIpv6AddressResult> EnableInstanceIpv6AddressOutcome;
			typedef std::future<EnableInstanceIpv6AddressOutcome> EnableInstanceIpv6AddressOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::EnableInstanceIpv6AddressRequest&, const EnableInstanceIpv6AddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableInstanceIpv6AddressAsyncHandler;
			typedef Outcome<Error, Model::EnableSqlAuditResult> EnableSqlAuditOutcome;
			typedef std::future<EnableSqlAuditOutcome> EnableSqlAuditOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::EnableSqlAuditRequest&, const EnableSqlAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSqlAuditAsyncHandler;
			typedef Outcome<Error, Model::EnableSqlFlashbackMatchSwitchResult> EnableSqlFlashbackMatchSwitchOutcome;
			typedef std::future<EnableSqlFlashbackMatchSwitchOutcome> EnableSqlFlashbackMatchSwitchOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::EnableSqlFlashbackMatchSwitchRequest&, const EnableSqlFlashbackMatchSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSqlFlashbackMatchSwitchAsyncHandler;
			typedef Outcome<Error, Model::FlashbackRecycleBinTableResult> FlashbackRecycleBinTableOutcome;
			typedef std::future<FlashbackRecycleBinTableOutcome> FlashbackRecycleBinTableOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::FlashbackRecycleBinTableRequest&, const FlashbackRecycleBinTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FlashbackRecycleBinTableAsyncHandler;
			typedef Outcome<Error, Model::GetDrdsDbRdsRelationInfoResult> GetDrdsDbRdsRelationInfoOutcome;
			typedef std::future<GetDrdsDbRdsRelationInfoOutcome> GetDrdsDbRdsRelationInfoOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::GetDrdsDbRdsRelationInfoRequest&, const GetDrdsDbRdsRelationInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDrdsDbRdsRelationInfoAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ManagePrivateRdsResult> ManagePrivateRdsOutcome;
			typedef std::future<ManagePrivateRdsOutcome> ManagePrivateRdsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ManagePrivateRdsRequest&, const ManagePrivateRdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManagePrivateRdsAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountPrivilegeResult> ModifyAccountPrivilegeOutcome;
			typedef std::future<ModifyAccountPrivilegeOutcome> ModifyAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyAccountPrivilegeRequest&, const ModifyAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDrdsInstanceDescriptionResult> ModifyDrdsInstanceDescriptionOutcome;
			typedef std::future<ModifyDrdsInstanceDescriptionOutcome> ModifyDrdsInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyDrdsInstanceDescriptionRequest&, const ModifyDrdsInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDrdsInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDrdsIpWhiteListResult> ModifyDrdsIpWhiteListOutcome;
			typedef std::future<ModifyDrdsIpWhiteListOutcome> ModifyDrdsIpWhiteListOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyDrdsIpWhiteListRequest&, const ModifyDrdsIpWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDrdsIpWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ModifyPolarDbReadWeightResult> ModifyPolarDbReadWeightOutcome;
			typedef std::future<ModifyPolarDbReadWeightOutcome> ModifyPolarDbReadWeightOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyPolarDbReadWeightRequest&, const ModifyPolarDbReadWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolarDbReadWeightAsyncHandler;
			typedef Outcome<Error, Model::ModifyRdsReadWeightResult> ModifyRdsReadWeightOutcome;
			typedef std::future<ModifyRdsReadWeightOutcome> ModifyRdsReadWeightOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ModifyRdsReadWeightRequest&, const ModifyRdsReadWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRdsReadWeightAsyncHandler;
			typedef Outcome<Error, Model::PutStartBackupResult> PutStartBackupOutcome;
			typedef std::future<PutStartBackupOutcome> PutStartBackupOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::PutStartBackupRequest&, const PutStartBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutStartBackupAsyncHandler;
			typedef Outcome<Error, Model::RefreshDrdsAtomUrlResult> RefreshDrdsAtomUrlOutcome;
			typedef std::future<RefreshDrdsAtomUrlOutcome> RefreshDrdsAtomUrlOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RefreshDrdsAtomUrlRequest&, const RefreshDrdsAtomUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDrdsAtomUrlAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceInternetAddressResult> ReleaseInstanceInternetAddressOutcome;
			typedef std::future<ReleaseInstanceInternetAddressOutcome> ReleaseInstanceInternetAddressOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ReleaseInstanceInternetAddressRequest&, const ReleaseInstanceInternetAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceInternetAddressAsyncHandler;
			typedef Outcome<Error, Model::RemoveBackupsSetResult> RemoveBackupsSetOutcome;
			typedef std::future<RemoveBackupsSetOutcome> RemoveBackupsSetOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveBackupsSetRequest&, const RemoveBackupsSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBackupsSetAsyncHandler;
			typedef Outcome<Error, Model::RemoveDrdsDbResult> RemoveDrdsDbOutcome;
			typedef std::future<RemoveDrdsDbOutcome> RemoveDrdsDbOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveDrdsDbRequest&, const RemoveDrdsDbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDrdsDbAsyncHandler;
			typedef Outcome<Error, Model::RemoveDrdsDbFailedRecordResult> RemoveDrdsDbFailedRecordOutcome;
			typedef std::future<RemoveDrdsDbFailedRecordOutcome> RemoveDrdsDbFailedRecordOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveDrdsDbFailedRecordRequest&, const RemoveDrdsDbFailedRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDrdsDbFailedRecordAsyncHandler;
			typedef Outcome<Error, Model::RemoveDrdsInstanceResult> RemoveDrdsInstanceOutcome;
			typedef std::future<RemoveDrdsInstanceOutcome> RemoveDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveDrdsInstanceRequest&, const RemoveDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDrdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::RemoveInstanceAccountResult> RemoveInstanceAccountOutcome;
			typedef std::future<RemoveInstanceAccountOutcome> RemoveInstanceAccountOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveInstanceAccountRequest&, const RemoveInstanceAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstanceAccountAsyncHandler;
			typedef Outcome<Error, Model::RemoveRecycleBinTableResult> RemoveRecycleBinTableOutcome;
			typedef std::future<RemoveRecycleBinTableOutcome> RemoveRecycleBinTableOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RemoveRecycleBinTableRequest&, const RemoveRecycleBinTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveRecycleBinTableAsyncHandler;
			typedef Outcome<Error, Model::RestartDrdsInstanceResult> RestartDrdsInstanceOutcome;
			typedef std::future<RestartDrdsInstanceOutcome> RestartDrdsInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RestartDrdsInstanceRequest&, const RestartDrdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDrdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::RollbackInstanceVersionResult> RollbackInstanceVersionOutcome;
			typedef std::future<RollbackInstanceVersionOutcome> RollbackInstanceVersionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::RollbackInstanceVersionRequest&, const RollbackInstanceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackInstanceVersionAsyncHandler;
			typedef Outcome<Error, Model::SetBackupLocalResult> SetBackupLocalOutcome;
			typedef std::future<SetBackupLocalOutcome> SetBackupLocalOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetBackupLocalRequest&, const SetBackupLocalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetBackupLocalAsyncHandler;
			typedef Outcome<Error, Model::SetBackupPolicyResult> SetBackupPolicyOutcome;
			typedef std::future<SetBackupPolicyOutcome> SetBackupPolicyOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetBackupPolicyRequest&, const SetBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::SetupBroadcastTablesResult> SetupBroadcastTablesOutcome;
			typedef std::future<SetupBroadcastTablesOutcome> SetupBroadcastTablesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetupBroadcastTablesRequest&, const SetupBroadcastTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetupBroadcastTablesAsyncHandler;
			typedef Outcome<Error, Model::SetupDrdsParamsResult> SetupDrdsParamsOutcome;
			typedef std::future<SetupDrdsParamsOutcome> SetupDrdsParamsOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetupDrdsParamsRequest&, const SetupDrdsParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetupDrdsParamsAsyncHandler;
			typedef Outcome<Error, Model::SetupRecycleBinStatusResult> SetupRecycleBinStatusOutcome;
			typedef std::future<SetupRecycleBinStatusOutcome> SetupRecycleBinStatusOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetupRecycleBinStatusRequest&, const SetupRecycleBinStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetupRecycleBinStatusAsyncHandler;
			typedef Outcome<Error, Model::SetupTableResult> SetupTableOutcome;
			typedef std::future<SetupTableOutcome> SetupTableOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SetupTableRequest&, const SetupTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetupTableAsyncHandler;
			typedef Outcome<Error, Model::StartRestoreResult> StartRestoreOutcome;
			typedef std::future<StartRestoreOutcome> StartRestoreOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::StartRestoreRequest&, const StartRestoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRestoreAsyncHandler;
			typedef Outcome<Error, Model::SubmitCleanTaskResult> SubmitCleanTaskOutcome;
			typedef std::future<SubmitCleanTaskOutcome> SubmitCleanTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitCleanTaskRequest&, const SubmitCleanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCleanTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitHotExpandPreCheckTaskResult> SubmitHotExpandPreCheckTaskOutcome;
			typedef std::future<SubmitHotExpandPreCheckTaskOutcome> SubmitHotExpandPreCheckTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitHotExpandPreCheckTaskRequest&, const SubmitHotExpandPreCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHotExpandPreCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitHotExpandTaskResult> SubmitHotExpandTaskOutcome;
			typedef std::future<SubmitHotExpandTaskOutcome> SubmitHotExpandTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitHotExpandTaskRequest&, const SubmitHotExpandTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHotExpandTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitSmoothExpandPreCheckResult> SubmitSmoothExpandPreCheckOutcome;
			typedef std::future<SubmitSmoothExpandPreCheckOutcome> SubmitSmoothExpandPreCheckOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitSmoothExpandPreCheckRequest&, const SubmitSmoothExpandPreCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSmoothExpandPreCheckAsyncHandler;
			typedef Outcome<Error, Model::SubmitSmoothExpandPreCheckTaskResult> SubmitSmoothExpandPreCheckTaskOutcome;
			typedef std::future<SubmitSmoothExpandPreCheckTaskOutcome> SubmitSmoothExpandPreCheckTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitSmoothExpandPreCheckTaskRequest&, const SubmitSmoothExpandPreCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSmoothExpandPreCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitSqlFlashbackTaskResult> SubmitSqlFlashbackTaskOutcome;
			typedef std::future<SubmitSqlFlashbackTaskOutcome> SubmitSqlFlashbackTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SubmitSqlFlashbackTaskRequest&, const SubmitSqlFlashbackTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSqlFlashbackTaskAsyncHandler;
			typedef Outcome<Error, Model::SwitchGlobalBroadcastTypeResult> SwitchGlobalBroadcastTypeOutcome;
			typedef std::future<SwitchGlobalBroadcastTypeOutcome> SwitchGlobalBroadcastTypeOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::SwitchGlobalBroadcastTypeRequest&, const SwitchGlobalBroadcastTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchGlobalBroadcastTypeAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceNetworkResult> UpdateInstanceNetworkOutcome;
			typedef std::future<UpdateInstanceNetworkOutcome> UpdateInstanceNetworkOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UpdateInstanceNetworkRequest&, const UpdateInstanceNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceNetworkAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrivateRdsClassResult> UpdatePrivateRdsClassOutcome;
			typedef std::future<UpdatePrivateRdsClassOutcome> UpdatePrivateRdsClassOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UpdatePrivateRdsClassRequest&, const UpdatePrivateRdsClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrivateRdsClassAsyncHandler;
			typedef Outcome<Error, Model::UpdateResourceGroupAttributeResult> UpdateResourceGroupAttributeOutcome;
			typedef std::future<UpdateResourceGroupAttributeOutcome> UpdateResourceGroupAttributeOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UpdateResourceGroupAttributeRequest&, const UpdateResourceGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpgradeHiStoreInstanceResult> UpgradeHiStoreInstanceOutcome;
			typedef std::future<UpgradeHiStoreInstanceOutcome> UpgradeHiStoreInstanceOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UpgradeHiStoreInstanceRequest&, const UpgradeHiStoreInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeHiStoreInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpgradeInstanceVersionResult> UpgradeInstanceVersionOutcome;
			typedef std::future<UpgradeInstanceVersionOutcome> UpgradeInstanceVersionOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::UpgradeInstanceVersionRequest&, const UpgradeInstanceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceVersionAsyncHandler;
			typedef Outcome<Error, Model::ValidateShardTaskResult> ValidateShardTaskOutcome;
			typedef std::future<ValidateShardTaskOutcome> ValidateShardTaskOutcomeCallable;
			typedef std::function<void(const DrdsClient*, const Model::ValidateShardTaskRequest&, const ValidateShardTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateShardTaskAsyncHandler;

			DrdsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DrdsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DrdsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DrdsClient();
			ChangeAccountPasswordOutcome changeAccountPassword(const Model::ChangeAccountPasswordRequest &request)const;
			void changeAccountPasswordAsync(const Model::ChangeAccountPasswordRequest& request, const ChangeAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeAccountPasswordOutcomeCallable changeAccountPasswordCallable(const Model::ChangeAccountPasswordRequest& request) const;
			ChangeInstanceAzoneOutcome changeInstanceAzone(const Model::ChangeInstanceAzoneRequest &request)const;
			void changeInstanceAzoneAsync(const Model::ChangeInstanceAzoneRequest& request, const ChangeInstanceAzoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeInstanceAzoneOutcomeCallable changeInstanceAzoneCallable(const Model::ChangeInstanceAzoneRequest& request) const;
			CheckDrdsDbNameOutcome checkDrdsDbName(const Model::CheckDrdsDbNameRequest &request)const;
			void checkDrdsDbNameAsync(const Model::CheckDrdsDbNameRequest& request, const CheckDrdsDbNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDrdsDbNameOutcomeCallable checkDrdsDbNameCallable(const Model::CheckDrdsDbNameRequest& request) const;
			CheckExpandStatusOutcome checkExpandStatus(const Model::CheckExpandStatusRequest &request)const;
			void checkExpandStatusAsync(const Model::CheckExpandStatusRequest& request, const CheckExpandStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckExpandStatusOutcomeCallable checkExpandStatusCallable(const Model::CheckExpandStatusRequest& request) const;
			CheckSqlAuditEnableStatusOutcome checkSqlAuditEnableStatus(const Model::CheckSqlAuditEnableStatusRequest &request)const;
			void checkSqlAuditEnableStatusAsync(const Model::CheckSqlAuditEnableStatusRequest& request, const CheckSqlAuditEnableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckSqlAuditEnableStatusOutcomeCallable checkSqlAuditEnableStatusCallable(const Model::CheckSqlAuditEnableStatusRequest& request) const;
			CreateDrdsDBOutcome createDrdsDB(const Model::CreateDrdsDBRequest &request)const;
			void createDrdsDBAsync(const Model::CreateDrdsDBRequest& request, const CreateDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDrdsDBOutcomeCallable createDrdsDBCallable(const Model::CreateDrdsDBRequest& request) const;
			CreateDrdsInstanceOutcome createDrdsInstance(const Model::CreateDrdsInstanceRequest &request)const;
			void createDrdsInstanceAsync(const Model::CreateDrdsInstanceRequest& request, const CreateDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDrdsInstanceOutcomeCallable createDrdsInstanceCallable(const Model::CreateDrdsInstanceRequest& request) const;
			CreateInstanceAccountOutcome createInstanceAccount(const Model::CreateInstanceAccountRequest &request)const;
			void createInstanceAccountAsync(const Model::CreateInstanceAccountRequest& request, const CreateInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceAccountOutcomeCallable createInstanceAccountCallable(const Model::CreateInstanceAccountRequest& request) const;
			CreateInstanceInternetAddressOutcome createInstanceInternetAddress(const Model::CreateInstanceInternetAddressRequest &request)const;
			void createInstanceInternetAddressAsync(const Model::CreateInstanceInternetAddressRequest& request, const CreateInstanceInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceInternetAddressOutcomeCallable createInstanceInternetAddressCallable(const Model::CreateInstanceInternetAddressRequest& request) const;
			CreateOrderForRdsOutcome createOrderForRds(const Model::CreateOrderForRdsRequest &request)const;
			void createOrderForRdsAsync(const Model::CreateOrderForRdsRequest& request, const CreateOrderForRdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderForRdsOutcomeCallable createOrderForRdsCallable(const Model::CreateOrderForRdsRequest& request) const;
			CreateShardTaskOutcome createShardTask(const Model::CreateShardTaskRequest &request)const;
			void createShardTaskAsync(const Model::CreateShardTaskRequest& request, const CreateShardTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateShardTaskOutcomeCallable createShardTaskCallable(const Model::CreateShardTaskRequest& request) const;
			DescribeBackMenuOutcome describeBackMenu(const Model::DescribeBackMenuRequest &request)const;
			void describeBackMenuAsync(const Model::DescribeBackMenuRequest& request, const DescribeBackMenuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackMenuOutcomeCallable describeBackMenuCallable(const Model::DescribeBackMenuRequest& request) const;
			DescribeBackupDbsOutcome describeBackupDbs(const Model::DescribeBackupDbsRequest &request)const;
			void describeBackupDbsAsync(const Model::DescribeBackupDbsRequest& request, const DescribeBackupDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupDbsOutcomeCallable describeBackupDbsCallable(const Model::DescribeBackupDbsRequest& request) const;
			DescribeBackupLocalOutcome describeBackupLocal(const Model::DescribeBackupLocalRequest &request)const;
			void describeBackupLocalAsync(const Model::DescribeBackupLocalRequest& request, const DescribeBackupLocalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupLocalOutcomeCallable describeBackupLocalCallable(const Model::DescribeBackupLocalRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupSetsOutcome describeBackupSets(const Model::DescribeBackupSetsRequest &request)const;
			void describeBackupSetsAsync(const Model::DescribeBackupSetsRequest& request, const DescribeBackupSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupSetsOutcomeCallable describeBackupSetsCallable(const Model::DescribeBackupSetsRequest& request) const;
			DescribeBackupTimesOutcome describeBackupTimes(const Model::DescribeBackupTimesRequest &request)const;
			void describeBackupTimesAsync(const Model::DescribeBackupTimesRequest& request, const DescribeBackupTimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupTimesOutcomeCallable describeBackupTimesCallable(const Model::DescribeBackupTimesRequest& request) const;
			DescribeBroadcastTablesOutcome describeBroadcastTables(const Model::DescribeBroadcastTablesRequest &request)const;
			void describeBroadcastTablesAsync(const Model::DescribeBroadcastTablesRequest& request, const DescribeBroadcastTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBroadcastTablesOutcomeCallable describeBroadcastTablesCallable(const Model::DescribeBroadcastTablesRequest& request) const;
			DescribeDbInstanceDbsOutcome describeDbInstanceDbs(const Model::DescribeDbInstanceDbsRequest &request)const;
			void describeDbInstanceDbsAsync(const Model::DescribeDbInstanceDbsRequest& request, const DescribeDbInstanceDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDbInstanceDbsOutcomeCallable describeDbInstanceDbsCallable(const Model::DescribeDbInstanceDbsRequest& request) const;
			DescribeDbInstancesOutcome describeDbInstances(const Model::DescribeDbInstancesRequest &request)const;
			void describeDbInstancesAsync(const Model::DescribeDbInstancesRequest& request, const DescribeDbInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDbInstancesOutcomeCallable describeDbInstancesCallable(const Model::DescribeDbInstancesRequest& request) const;
			DescribeDrdsDBOutcome describeDrdsDB(const Model::DescribeDrdsDBRequest &request)const;
			void describeDrdsDBAsync(const Model::DescribeDrdsDBRequest& request, const DescribeDrdsDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBOutcomeCallable describeDrdsDBCallable(const Model::DescribeDrdsDBRequest& request) const;
			DescribeDrdsDBClusterOutcome describeDrdsDBCluster(const Model::DescribeDrdsDBClusterRequest &request)const;
			void describeDrdsDBClusterAsync(const Model::DescribeDrdsDBClusterRequest& request, const DescribeDrdsDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBClusterOutcomeCallable describeDrdsDBClusterCallable(const Model::DescribeDrdsDBClusterRequest& request) const;
			DescribeDrdsDBIpWhiteListOutcome describeDrdsDBIpWhiteList(const Model::DescribeDrdsDBIpWhiteListRequest &request)const;
			void describeDrdsDBIpWhiteListAsync(const Model::DescribeDrdsDBIpWhiteListRequest& request, const DescribeDrdsDBIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBIpWhiteListOutcomeCallable describeDrdsDBIpWhiteListCallable(const Model::DescribeDrdsDBIpWhiteListRequest& request) const;
			DescribeDrdsDBsOutcome describeDrdsDBs(const Model::DescribeDrdsDBsRequest &request)const;
			void describeDrdsDBsAsync(const Model::DescribeDrdsDBsRequest& request, const DescribeDrdsDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDBsOutcomeCallable describeDrdsDBsCallable(const Model::DescribeDrdsDBsRequest& request) const;
			DescribeDrdsDbInstanceOutcome describeDrdsDbInstance(const Model::DescribeDrdsDbInstanceRequest &request)const;
			void describeDrdsDbInstanceAsync(const Model::DescribeDrdsDbInstanceRequest& request, const DescribeDrdsDbInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDbInstanceOutcomeCallable describeDrdsDbInstanceCallable(const Model::DescribeDrdsDbInstanceRequest& request) const;
			DescribeDrdsDbInstancesOutcome describeDrdsDbInstances(const Model::DescribeDrdsDbInstancesRequest &request)const;
			void describeDrdsDbInstancesAsync(const Model::DescribeDrdsDbInstancesRequest& request, const DescribeDrdsDbInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDbInstancesOutcomeCallable describeDrdsDbInstancesCallable(const Model::DescribeDrdsDbInstancesRequest& request) const;
			DescribeDrdsDbRdsNameListOutcome describeDrdsDbRdsNameList(const Model::DescribeDrdsDbRdsNameListRequest &request)const;
			void describeDrdsDbRdsNameListAsync(const Model::DescribeDrdsDbRdsNameListRequest& request, const DescribeDrdsDbRdsNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsDbRdsNameListOutcomeCallable describeDrdsDbRdsNameListCallable(const Model::DescribeDrdsDbRdsNameListRequest& request) const;
			DescribeDrdsInstanceOutcome describeDrdsInstance(const Model::DescribeDrdsInstanceRequest &request)const;
			void describeDrdsInstanceAsync(const Model::DescribeDrdsInstanceRequest& request, const DescribeDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceOutcomeCallable describeDrdsInstanceCallable(const Model::DescribeDrdsInstanceRequest& request) const;
			DescribeDrdsInstanceDbMonitorOutcome describeDrdsInstanceDbMonitor(const Model::DescribeDrdsInstanceDbMonitorRequest &request)const;
			void describeDrdsInstanceDbMonitorAsync(const Model::DescribeDrdsInstanceDbMonitorRequest& request, const DescribeDrdsInstanceDbMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceDbMonitorOutcomeCallable describeDrdsInstanceDbMonitorCallable(const Model::DescribeDrdsInstanceDbMonitorRequest& request) const;
			DescribeDrdsInstanceLevelTasksOutcome describeDrdsInstanceLevelTasks(const Model::DescribeDrdsInstanceLevelTasksRequest &request)const;
			void describeDrdsInstanceLevelTasksAsync(const Model::DescribeDrdsInstanceLevelTasksRequest& request, const DescribeDrdsInstanceLevelTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceLevelTasksOutcomeCallable describeDrdsInstanceLevelTasksCallable(const Model::DescribeDrdsInstanceLevelTasksRequest& request) const;
			DescribeDrdsInstanceMonitorOutcome describeDrdsInstanceMonitor(const Model::DescribeDrdsInstanceMonitorRequest &request)const;
			void describeDrdsInstanceMonitorAsync(const Model::DescribeDrdsInstanceMonitorRequest& request, const DescribeDrdsInstanceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceMonitorOutcomeCallable describeDrdsInstanceMonitorCallable(const Model::DescribeDrdsInstanceMonitorRequest& request) const;
			DescribeDrdsInstanceVersionOutcome describeDrdsInstanceVersion(const Model::DescribeDrdsInstanceVersionRequest &request)const;
			void describeDrdsInstanceVersionAsync(const Model::DescribeDrdsInstanceVersionRequest& request, const DescribeDrdsInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstanceVersionOutcomeCallable describeDrdsInstanceVersionCallable(const Model::DescribeDrdsInstanceVersionRequest& request) const;
			DescribeDrdsInstancesOutcome describeDrdsInstances(const Model::DescribeDrdsInstancesRequest &request)const;
			void describeDrdsInstancesAsync(const Model::DescribeDrdsInstancesRequest& request, const DescribeDrdsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsInstancesOutcomeCallable describeDrdsInstancesCallable(const Model::DescribeDrdsInstancesRequest& request) const;
			DescribeDrdsParamsOutcome describeDrdsParams(const Model::DescribeDrdsParamsRequest &request)const;
			void describeDrdsParamsAsync(const Model::DescribeDrdsParamsRequest& request, const DescribeDrdsParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsParamsOutcomeCallable describeDrdsParamsCallable(const Model::DescribeDrdsParamsRequest& request) const;
			DescribeDrdsRdsInstancesOutcome describeDrdsRdsInstances(const Model::DescribeDrdsRdsInstancesRequest &request)const;
			void describeDrdsRdsInstancesAsync(const Model::DescribeDrdsRdsInstancesRequest& request, const DescribeDrdsRdsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsRdsInstancesOutcomeCallable describeDrdsRdsInstancesCallable(const Model::DescribeDrdsRdsInstancesRequest& request) const;
			DescribeDrdsShardingDbsOutcome describeDrdsShardingDbs(const Model::DescribeDrdsShardingDbsRequest &request)const;
			void describeDrdsShardingDbsAsync(const Model::DescribeDrdsShardingDbsRequest& request, const DescribeDrdsShardingDbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsShardingDbsOutcomeCallable describeDrdsShardingDbsCallable(const Model::DescribeDrdsShardingDbsRequest& request) const;
			DescribeDrdsSlowSqlsOutcome describeDrdsSlowSqls(const Model::DescribeDrdsSlowSqlsRequest &request)const;
			void describeDrdsSlowSqlsAsync(const Model::DescribeDrdsSlowSqlsRequest& request, const DescribeDrdsSlowSqlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsSlowSqlsOutcomeCallable describeDrdsSlowSqlsCallable(const Model::DescribeDrdsSlowSqlsRequest& request) const;
			DescribeDrdsSqlAuditStatusOutcome describeDrdsSqlAuditStatus(const Model::DescribeDrdsSqlAuditStatusRequest &request)const;
			void describeDrdsSqlAuditStatusAsync(const Model::DescribeDrdsSqlAuditStatusRequest& request, const DescribeDrdsSqlAuditStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsSqlAuditStatusOutcomeCallable describeDrdsSqlAuditStatusCallable(const Model::DescribeDrdsSqlAuditStatusRequest& request) const;
			DescribeDrdsTasksOutcome describeDrdsTasks(const Model::DescribeDrdsTasksRequest &request)const;
			void describeDrdsTasksAsync(const Model::DescribeDrdsTasksRequest& request, const DescribeDrdsTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDrdsTasksOutcomeCallable describeDrdsTasksCallable(const Model::DescribeDrdsTasksRequest& request) const;
			DescribeExpandLogicTableInfoListOutcome describeExpandLogicTableInfoList(const Model::DescribeExpandLogicTableInfoListRequest &request)const;
			void describeExpandLogicTableInfoListAsync(const Model::DescribeExpandLogicTableInfoListRequest& request, const DescribeExpandLogicTableInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExpandLogicTableInfoListOutcomeCallable describeExpandLogicTableInfoListCallable(const Model::DescribeExpandLogicTableInfoListRequest& request) const;
			DescribeHotDbListOutcome describeHotDbList(const Model::DescribeHotDbListRequest &request)const;
			void describeHotDbListAsync(const Model::DescribeHotDbListRequest& request, const DescribeHotDbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHotDbListOutcomeCallable describeHotDbListCallable(const Model::DescribeHotDbListRequest& request) const;
			DescribeInstDbLogInfoOutcome describeInstDbLogInfo(const Model::DescribeInstDbLogInfoRequest &request)const;
			void describeInstDbLogInfoAsync(const Model::DescribeInstDbLogInfoRequest& request, const DescribeInstDbLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstDbLogInfoOutcomeCallable describeInstDbLogInfoCallable(const Model::DescribeInstDbLogInfoRequest& request) const;
			DescribeInstDbSlsInfoOutcome describeInstDbSlsInfo(const Model::DescribeInstDbSlsInfoRequest &request)const;
			void describeInstDbSlsInfoAsync(const Model::DescribeInstDbSlsInfoRequest& request, const DescribeInstDbSlsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstDbSlsInfoOutcomeCallable describeInstDbSlsInfoCallable(const Model::DescribeInstDbSlsInfoRequest& request) const;
			DescribeInstanceAccountsOutcome describeInstanceAccounts(const Model::DescribeInstanceAccountsRequest &request)const;
			void describeInstanceAccountsAsync(const Model::DescribeInstanceAccountsRequest& request, const DescribeInstanceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAccountsOutcomeCallable describeInstanceAccountsCallable(const Model::DescribeInstanceAccountsRequest& request) const;
			DescribeInstanceSwitchAzoneOutcome describeInstanceSwitchAzone(const Model::DescribeInstanceSwitchAzoneRequest &request)const;
			void describeInstanceSwitchAzoneAsync(const Model::DescribeInstanceSwitchAzoneRequest& request, const DescribeInstanceSwitchAzoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSwitchAzoneOutcomeCallable describeInstanceSwitchAzoneCallable(const Model::DescribeInstanceSwitchAzoneRequest& request) const;
			DescribeInstanceSwitchNetworkOutcome describeInstanceSwitchNetwork(const Model::DescribeInstanceSwitchNetworkRequest &request)const;
			void describeInstanceSwitchNetworkAsync(const Model::DescribeInstanceSwitchNetworkRequest& request, const DescribeInstanceSwitchNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSwitchNetworkOutcomeCallable describeInstanceSwitchNetworkCallable(const Model::DescribeInstanceSwitchNetworkRequest& request) const;
			DescribePreCheckResultOutcome describePreCheckResult(const Model::DescribePreCheckResultRequest &request)const;
			void describePreCheckResultAsync(const Model::DescribePreCheckResultRequest& request, const DescribePreCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePreCheckResultOutcomeCallable describePreCheckResultCallable(const Model::DescribePreCheckResultRequest& request) const;
			DescribeRDSPerformanceOutcome describeRDSPerformance(const Model::DescribeRDSPerformanceRequest &request)const;
			void describeRDSPerformanceAsync(const Model::DescribeRDSPerformanceRequest& request, const DescribeRDSPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRDSPerformanceOutcomeCallable describeRDSPerformanceCallable(const Model::DescribeRDSPerformanceRequest& request) const;
			DescribeRdsCommodityOutcome describeRdsCommodity(const Model::DescribeRdsCommodityRequest &request)const;
			void describeRdsCommodityAsync(const Model::DescribeRdsCommodityRequest& request, const DescribeRdsCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsCommodityOutcomeCallable describeRdsCommodityCallable(const Model::DescribeRdsCommodityRequest& request) const;
			DescribeRdsPerformanceSummaryOutcome describeRdsPerformanceSummary(const Model::DescribeRdsPerformanceSummaryRequest &request)const;
			void describeRdsPerformanceSummaryAsync(const Model::DescribeRdsPerformanceSummaryRequest& request, const DescribeRdsPerformanceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsPerformanceSummaryOutcomeCallable describeRdsPerformanceSummaryCallable(const Model::DescribeRdsPerformanceSummaryRequest& request) const;
			DescribeRdsSuperAccountInstancesOutcome describeRdsSuperAccountInstances(const Model::DescribeRdsSuperAccountInstancesRequest &request)const;
			void describeRdsSuperAccountInstancesAsync(const Model::DescribeRdsSuperAccountInstancesRequest& request, const DescribeRdsSuperAccountInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsSuperAccountInstancesOutcomeCallable describeRdsSuperAccountInstancesCallable(const Model::DescribeRdsSuperAccountInstancesRequest& request) const;
			DescribeRecycleBinStatusOutcome describeRecycleBinStatus(const Model::DescribeRecycleBinStatusRequest &request)const;
			void describeRecycleBinStatusAsync(const Model::DescribeRecycleBinStatusRequest& request, const DescribeRecycleBinStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecycleBinStatusOutcomeCallable describeRecycleBinStatusCallable(const Model::DescribeRecycleBinStatusRequest& request) const;
			DescribeRecycleBinTablesOutcome describeRecycleBinTables(const Model::DescribeRecycleBinTablesRequest &request)const;
			void describeRecycleBinTablesAsync(const Model::DescribeRecycleBinTablesRequest& request, const DescribeRecycleBinTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecycleBinTablesOutcomeCallable describeRecycleBinTablesCallable(const Model::DescribeRecycleBinTablesRequest& request) const;
			DescribeRestoreOrderOutcome describeRestoreOrder(const Model::DescribeRestoreOrderRequest &request)const;
			void describeRestoreOrderAsync(const Model::DescribeRestoreOrderRequest& request, const DescribeRestoreOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreOrderOutcomeCallable describeRestoreOrderCallable(const Model::DescribeRestoreOrderRequest& request) const;
			DescribeShardTaskInfoOutcome describeShardTaskInfo(const Model::DescribeShardTaskInfoRequest &request)const;
			void describeShardTaskInfoAsync(const Model::DescribeShardTaskInfoRequest& request, const DescribeShardTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeShardTaskInfoOutcomeCallable describeShardTaskInfoCallable(const Model::DescribeShardTaskInfoRequest& request) const;
			DescribeSqlFlashbakTaskOutcome describeSqlFlashbakTask(const Model::DescribeSqlFlashbakTaskRequest &request)const;
			void describeSqlFlashbakTaskAsync(const Model::DescribeSqlFlashbakTaskRequest& request, const DescribeSqlFlashbakTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSqlFlashbakTaskOutcomeCallable describeSqlFlashbakTaskCallable(const Model::DescribeSqlFlashbakTaskRequest& request) const;
			DescribeTableOutcome describeTable(const Model::DescribeTableRequest &request)const;
			void describeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTableOutcomeCallable describeTableCallable(const Model::DescribeTableRequest& request) const;
			DescribeTableListByTypeOutcome describeTableListByType(const Model::DescribeTableListByTypeRequest &request)const;
			void describeTableListByTypeAsync(const Model::DescribeTableListByTypeRequest& request, const DescribeTableListByTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTableListByTypeOutcomeCallable describeTableListByTypeCallable(const Model::DescribeTableListByTypeRequest& request) const;
			DescribeTablesOutcome describeTables(const Model::DescribeTablesRequest &request)const;
			void describeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTablesOutcomeCallable describeTablesCallable(const Model::DescribeTablesRequest& request) const;
			DisableSqlAuditOutcome disableSqlAudit(const Model::DisableSqlAuditRequest &request)const;
			void disableSqlAuditAsync(const Model::DisableSqlAuditRequest& request, const DisableSqlAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSqlAuditOutcomeCallable disableSqlAuditCallable(const Model::DisableSqlAuditRequest& request) const;
			EnableInstanceIpv6AddressOutcome enableInstanceIpv6Address(const Model::EnableInstanceIpv6AddressRequest &request)const;
			void enableInstanceIpv6AddressAsync(const Model::EnableInstanceIpv6AddressRequest& request, const EnableInstanceIpv6AddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableInstanceIpv6AddressOutcomeCallable enableInstanceIpv6AddressCallable(const Model::EnableInstanceIpv6AddressRequest& request) const;
			EnableSqlAuditOutcome enableSqlAudit(const Model::EnableSqlAuditRequest &request)const;
			void enableSqlAuditAsync(const Model::EnableSqlAuditRequest& request, const EnableSqlAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSqlAuditOutcomeCallable enableSqlAuditCallable(const Model::EnableSqlAuditRequest& request) const;
			EnableSqlFlashbackMatchSwitchOutcome enableSqlFlashbackMatchSwitch(const Model::EnableSqlFlashbackMatchSwitchRequest &request)const;
			void enableSqlFlashbackMatchSwitchAsync(const Model::EnableSqlFlashbackMatchSwitchRequest& request, const EnableSqlFlashbackMatchSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSqlFlashbackMatchSwitchOutcomeCallable enableSqlFlashbackMatchSwitchCallable(const Model::EnableSqlFlashbackMatchSwitchRequest& request) const;
			FlashbackRecycleBinTableOutcome flashbackRecycleBinTable(const Model::FlashbackRecycleBinTableRequest &request)const;
			void flashbackRecycleBinTableAsync(const Model::FlashbackRecycleBinTableRequest& request, const FlashbackRecycleBinTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FlashbackRecycleBinTableOutcomeCallable flashbackRecycleBinTableCallable(const Model::FlashbackRecycleBinTableRequest& request) const;
			GetDrdsDbRdsRelationInfoOutcome getDrdsDbRdsRelationInfo(const Model::GetDrdsDbRdsRelationInfoRequest &request)const;
			void getDrdsDbRdsRelationInfoAsync(const Model::GetDrdsDbRdsRelationInfoRequest& request, const GetDrdsDbRdsRelationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDrdsDbRdsRelationInfoOutcomeCallable getDrdsDbRdsRelationInfoCallable(const Model::GetDrdsDbRdsRelationInfoRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ManagePrivateRdsOutcome managePrivateRds(const Model::ManagePrivateRdsRequest &request)const;
			void managePrivateRdsAsync(const Model::ManagePrivateRdsRequest& request, const ManagePrivateRdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManagePrivateRdsOutcomeCallable managePrivateRdsCallable(const Model::ManagePrivateRdsRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAccountPrivilegeOutcome modifyAccountPrivilege(const Model::ModifyAccountPrivilegeRequest &request)const;
			void modifyAccountPrivilegeAsync(const Model::ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountPrivilegeOutcomeCallable modifyAccountPrivilegeCallable(const Model::ModifyAccountPrivilegeRequest& request) const;
			ModifyDrdsInstanceDescriptionOutcome modifyDrdsInstanceDescription(const Model::ModifyDrdsInstanceDescriptionRequest &request)const;
			void modifyDrdsInstanceDescriptionAsync(const Model::ModifyDrdsInstanceDescriptionRequest& request, const ModifyDrdsInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDrdsInstanceDescriptionOutcomeCallable modifyDrdsInstanceDescriptionCallable(const Model::ModifyDrdsInstanceDescriptionRequest& request) const;
			ModifyDrdsIpWhiteListOutcome modifyDrdsIpWhiteList(const Model::ModifyDrdsIpWhiteListRequest &request)const;
			void modifyDrdsIpWhiteListAsync(const Model::ModifyDrdsIpWhiteListRequest& request, const ModifyDrdsIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDrdsIpWhiteListOutcomeCallable modifyDrdsIpWhiteListCallable(const Model::ModifyDrdsIpWhiteListRequest& request) const;
			ModifyPolarDbReadWeightOutcome modifyPolarDbReadWeight(const Model::ModifyPolarDbReadWeightRequest &request)const;
			void modifyPolarDbReadWeightAsync(const Model::ModifyPolarDbReadWeightRequest& request, const ModifyPolarDbReadWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPolarDbReadWeightOutcomeCallable modifyPolarDbReadWeightCallable(const Model::ModifyPolarDbReadWeightRequest& request) const;
			ModifyRdsReadWeightOutcome modifyRdsReadWeight(const Model::ModifyRdsReadWeightRequest &request)const;
			void modifyRdsReadWeightAsync(const Model::ModifyRdsReadWeightRequest& request, const ModifyRdsReadWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRdsReadWeightOutcomeCallable modifyRdsReadWeightCallable(const Model::ModifyRdsReadWeightRequest& request) const;
			PutStartBackupOutcome putStartBackup(const Model::PutStartBackupRequest &request)const;
			void putStartBackupAsync(const Model::PutStartBackupRequest& request, const PutStartBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutStartBackupOutcomeCallable putStartBackupCallable(const Model::PutStartBackupRequest& request) const;
			RefreshDrdsAtomUrlOutcome refreshDrdsAtomUrl(const Model::RefreshDrdsAtomUrlRequest &request)const;
			void refreshDrdsAtomUrlAsync(const Model::RefreshDrdsAtomUrlRequest& request, const RefreshDrdsAtomUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshDrdsAtomUrlOutcomeCallable refreshDrdsAtomUrlCallable(const Model::RefreshDrdsAtomUrlRequest& request) const;
			ReleaseInstanceInternetAddressOutcome releaseInstanceInternetAddress(const Model::ReleaseInstanceInternetAddressRequest &request)const;
			void releaseInstanceInternetAddressAsync(const Model::ReleaseInstanceInternetAddressRequest& request, const ReleaseInstanceInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceInternetAddressOutcomeCallable releaseInstanceInternetAddressCallable(const Model::ReleaseInstanceInternetAddressRequest& request) const;
			RemoveBackupsSetOutcome removeBackupsSet(const Model::RemoveBackupsSetRequest &request)const;
			void removeBackupsSetAsync(const Model::RemoveBackupsSetRequest& request, const RemoveBackupsSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveBackupsSetOutcomeCallable removeBackupsSetCallable(const Model::RemoveBackupsSetRequest& request) const;
			RemoveDrdsDbOutcome removeDrdsDb(const Model::RemoveDrdsDbRequest &request)const;
			void removeDrdsDbAsync(const Model::RemoveDrdsDbRequest& request, const RemoveDrdsDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDrdsDbOutcomeCallable removeDrdsDbCallable(const Model::RemoveDrdsDbRequest& request) const;
			RemoveDrdsDbFailedRecordOutcome removeDrdsDbFailedRecord(const Model::RemoveDrdsDbFailedRecordRequest &request)const;
			void removeDrdsDbFailedRecordAsync(const Model::RemoveDrdsDbFailedRecordRequest& request, const RemoveDrdsDbFailedRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDrdsDbFailedRecordOutcomeCallable removeDrdsDbFailedRecordCallable(const Model::RemoveDrdsDbFailedRecordRequest& request) const;
			RemoveDrdsInstanceOutcome removeDrdsInstance(const Model::RemoveDrdsInstanceRequest &request)const;
			void removeDrdsInstanceAsync(const Model::RemoveDrdsInstanceRequest& request, const RemoveDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDrdsInstanceOutcomeCallable removeDrdsInstanceCallable(const Model::RemoveDrdsInstanceRequest& request) const;
			RemoveInstanceAccountOutcome removeInstanceAccount(const Model::RemoveInstanceAccountRequest &request)const;
			void removeInstanceAccountAsync(const Model::RemoveInstanceAccountRequest& request, const RemoveInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveInstanceAccountOutcomeCallable removeInstanceAccountCallable(const Model::RemoveInstanceAccountRequest& request) const;
			RemoveRecycleBinTableOutcome removeRecycleBinTable(const Model::RemoveRecycleBinTableRequest &request)const;
			void removeRecycleBinTableAsync(const Model::RemoveRecycleBinTableRequest& request, const RemoveRecycleBinTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveRecycleBinTableOutcomeCallable removeRecycleBinTableCallable(const Model::RemoveRecycleBinTableRequest& request) const;
			RestartDrdsInstanceOutcome restartDrdsInstance(const Model::RestartDrdsInstanceRequest &request)const;
			void restartDrdsInstanceAsync(const Model::RestartDrdsInstanceRequest& request, const RestartDrdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDrdsInstanceOutcomeCallable restartDrdsInstanceCallable(const Model::RestartDrdsInstanceRequest& request) const;
			RollbackInstanceVersionOutcome rollbackInstanceVersion(const Model::RollbackInstanceVersionRequest &request)const;
			void rollbackInstanceVersionAsync(const Model::RollbackInstanceVersionRequest& request, const RollbackInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackInstanceVersionOutcomeCallable rollbackInstanceVersionCallable(const Model::RollbackInstanceVersionRequest& request) const;
			SetBackupLocalOutcome setBackupLocal(const Model::SetBackupLocalRequest &request)const;
			void setBackupLocalAsync(const Model::SetBackupLocalRequest& request, const SetBackupLocalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetBackupLocalOutcomeCallable setBackupLocalCallable(const Model::SetBackupLocalRequest& request) const;
			SetBackupPolicyOutcome setBackupPolicy(const Model::SetBackupPolicyRequest &request)const;
			void setBackupPolicyAsync(const Model::SetBackupPolicyRequest& request, const SetBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetBackupPolicyOutcomeCallable setBackupPolicyCallable(const Model::SetBackupPolicyRequest& request) const;
			SetupBroadcastTablesOutcome setupBroadcastTables(const Model::SetupBroadcastTablesRequest &request)const;
			void setupBroadcastTablesAsync(const Model::SetupBroadcastTablesRequest& request, const SetupBroadcastTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetupBroadcastTablesOutcomeCallable setupBroadcastTablesCallable(const Model::SetupBroadcastTablesRequest& request) const;
			SetupDrdsParamsOutcome setupDrdsParams(const Model::SetupDrdsParamsRequest &request)const;
			void setupDrdsParamsAsync(const Model::SetupDrdsParamsRequest& request, const SetupDrdsParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetupDrdsParamsOutcomeCallable setupDrdsParamsCallable(const Model::SetupDrdsParamsRequest& request) const;
			SetupRecycleBinStatusOutcome setupRecycleBinStatus(const Model::SetupRecycleBinStatusRequest &request)const;
			void setupRecycleBinStatusAsync(const Model::SetupRecycleBinStatusRequest& request, const SetupRecycleBinStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetupRecycleBinStatusOutcomeCallable setupRecycleBinStatusCallable(const Model::SetupRecycleBinStatusRequest& request) const;
			SetupTableOutcome setupTable(const Model::SetupTableRequest &request)const;
			void setupTableAsync(const Model::SetupTableRequest& request, const SetupTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetupTableOutcomeCallable setupTableCallable(const Model::SetupTableRequest& request) const;
			StartRestoreOutcome startRestore(const Model::StartRestoreRequest &request)const;
			void startRestoreAsync(const Model::StartRestoreRequest& request, const StartRestoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRestoreOutcomeCallable startRestoreCallable(const Model::StartRestoreRequest& request) const;
			SubmitCleanTaskOutcome submitCleanTask(const Model::SubmitCleanTaskRequest &request)const;
			void submitCleanTaskAsync(const Model::SubmitCleanTaskRequest& request, const SubmitCleanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCleanTaskOutcomeCallable submitCleanTaskCallable(const Model::SubmitCleanTaskRequest& request) const;
			SubmitHotExpandPreCheckTaskOutcome submitHotExpandPreCheckTask(const Model::SubmitHotExpandPreCheckTaskRequest &request)const;
			void submitHotExpandPreCheckTaskAsync(const Model::SubmitHotExpandPreCheckTaskRequest& request, const SubmitHotExpandPreCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitHotExpandPreCheckTaskOutcomeCallable submitHotExpandPreCheckTaskCallable(const Model::SubmitHotExpandPreCheckTaskRequest& request) const;
			SubmitHotExpandTaskOutcome submitHotExpandTask(const Model::SubmitHotExpandTaskRequest &request)const;
			void submitHotExpandTaskAsync(const Model::SubmitHotExpandTaskRequest& request, const SubmitHotExpandTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitHotExpandTaskOutcomeCallable submitHotExpandTaskCallable(const Model::SubmitHotExpandTaskRequest& request) const;
			SubmitSmoothExpandPreCheckOutcome submitSmoothExpandPreCheck(const Model::SubmitSmoothExpandPreCheckRequest &request)const;
			void submitSmoothExpandPreCheckAsync(const Model::SubmitSmoothExpandPreCheckRequest& request, const SubmitSmoothExpandPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSmoothExpandPreCheckOutcomeCallable submitSmoothExpandPreCheckCallable(const Model::SubmitSmoothExpandPreCheckRequest& request) const;
			SubmitSmoothExpandPreCheckTaskOutcome submitSmoothExpandPreCheckTask(const Model::SubmitSmoothExpandPreCheckTaskRequest &request)const;
			void submitSmoothExpandPreCheckTaskAsync(const Model::SubmitSmoothExpandPreCheckTaskRequest& request, const SubmitSmoothExpandPreCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSmoothExpandPreCheckTaskOutcomeCallable submitSmoothExpandPreCheckTaskCallable(const Model::SubmitSmoothExpandPreCheckTaskRequest& request) const;
			SubmitSqlFlashbackTaskOutcome submitSqlFlashbackTask(const Model::SubmitSqlFlashbackTaskRequest &request)const;
			void submitSqlFlashbackTaskAsync(const Model::SubmitSqlFlashbackTaskRequest& request, const SubmitSqlFlashbackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSqlFlashbackTaskOutcomeCallable submitSqlFlashbackTaskCallable(const Model::SubmitSqlFlashbackTaskRequest& request) const;
			SwitchGlobalBroadcastTypeOutcome switchGlobalBroadcastType(const Model::SwitchGlobalBroadcastTypeRequest &request)const;
			void switchGlobalBroadcastTypeAsync(const Model::SwitchGlobalBroadcastTypeRequest& request, const SwitchGlobalBroadcastTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchGlobalBroadcastTypeOutcomeCallable switchGlobalBroadcastTypeCallable(const Model::SwitchGlobalBroadcastTypeRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateInstanceNetworkOutcome updateInstanceNetwork(const Model::UpdateInstanceNetworkRequest &request)const;
			void updateInstanceNetworkAsync(const Model::UpdateInstanceNetworkRequest& request, const UpdateInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceNetworkOutcomeCallable updateInstanceNetworkCallable(const Model::UpdateInstanceNetworkRequest& request) const;
			UpdatePrivateRdsClassOutcome updatePrivateRdsClass(const Model::UpdatePrivateRdsClassRequest &request)const;
			void updatePrivateRdsClassAsync(const Model::UpdatePrivateRdsClassRequest& request, const UpdatePrivateRdsClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrivateRdsClassOutcomeCallable updatePrivateRdsClassCallable(const Model::UpdatePrivateRdsClassRequest& request) const;
			UpdateResourceGroupAttributeOutcome updateResourceGroupAttribute(const Model::UpdateResourceGroupAttributeRequest &request)const;
			void updateResourceGroupAttributeAsync(const Model::UpdateResourceGroupAttributeRequest& request, const UpdateResourceGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateResourceGroupAttributeOutcomeCallable updateResourceGroupAttributeCallable(const Model::UpdateResourceGroupAttributeRequest& request) const;
			UpgradeHiStoreInstanceOutcome upgradeHiStoreInstance(const Model::UpgradeHiStoreInstanceRequest &request)const;
			void upgradeHiStoreInstanceAsync(const Model::UpgradeHiStoreInstanceRequest& request, const UpgradeHiStoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeHiStoreInstanceOutcomeCallable upgradeHiStoreInstanceCallable(const Model::UpgradeHiStoreInstanceRequest& request) const;
			UpgradeInstanceVersionOutcome upgradeInstanceVersion(const Model::UpgradeInstanceVersionRequest &request)const;
			void upgradeInstanceVersionAsync(const Model::UpgradeInstanceVersionRequest& request, const UpgradeInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeInstanceVersionOutcomeCallable upgradeInstanceVersionCallable(const Model::UpgradeInstanceVersionRequest& request) const;
			ValidateShardTaskOutcome validateShardTask(const Model::ValidateShardTaskRequest &request)const;
			void validateShardTaskAsync(const Model::ValidateShardTaskRequest& request, const ValidateShardTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateShardTaskOutcomeCallable validateShardTaskCallable(const Model::ValidateShardTaskRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DRDS_DRDSCLIENT_H_
