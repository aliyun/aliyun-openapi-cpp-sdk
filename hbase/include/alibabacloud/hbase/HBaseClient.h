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

#ifndef ALIBABACLOUD_HBASE_HBASECLIENT_H_
#define ALIBABACLOUD_HBASE_HBASECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "HBaseExport.h"
#include "model/AddUserHdfsInfoRequest.h"
#include "model/AddUserHdfsInfoResult.h"
#include "model/AllocatePublicNetworkAddressRequest.h"
#include "model/AllocatePublicNetworkAddressResult.h"
#include "model/CheckComponentsVersionRequest.h"
#include "model/CheckComponentsVersionResult.h"
#include "model/CloseBackupRequest.h"
#include "model/CloseBackupResult.h"
#include "model/ConvertInstanceRequest.h"
#include "model/ConvertInstanceResult.h"
#include "model/CreateBackupPlanRequest.h"
#include "model/CreateBackupPlanResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateGlobalResourceRequest.h"
#include "model/CreateGlobalResourceResult.h"
#include "model/CreateHBaseSlbServerRequest.h"
#include "model/CreateHBaseSlbServerResult.h"
#include "model/CreateHbaseHaSlbRequest.h"
#include "model/CreateHbaseHaSlbResult.h"
#include "model/CreateMultiZoneClusterRequest.h"
#include "model/CreateMultiZoneClusterResult.h"
#include "model/CreateRestorePlanRequest.h"
#include "model/CreateRestorePlanResult.h"
#include "model/CreateServerlessClusterRequest.h"
#include "model/CreateServerlessClusterResult.h"
#include "model/DeleteGlobalResourceRequest.h"
#include "model/DeleteGlobalResourceResult.h"
#include "model/DeleteHBaseHaDBRequest.h"
#include "model/DeleteHBaseHaDBResult.h"
#include "model/DeleteHBaseSlbServerRequest.h"
#include "model/DeleteHBaseSlbServerResult.h"
#include "model/DeleteHbaseHaSlbRequest.h"
#include "model/DeleteHbaseHaSlbResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteMultiZoneClusterRequest.h"
#include "model/DeleteMultiZoneClusterResult.h"
#include "model/DeleteServerlessClusterRequest.h"
#include "model/DeleteServerlessClusterResult.h"
#include "model/DeleteUserHdfsInfoRequest.h"
#include "model/DeleteUserHdfsInfoResult.h"
#include "model/DescribeAvailableResourceRequest.h"
#include "model/DescribeAvailableResourceResult.h"
#include "model/DescribeBackupPlanConfigRequest.h"
#include "model/DescribeBackupPlanConfigResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupStatusRequest.h"
#include "model/DescribeBackupStatusResult.h"
#include "model/DescribeBackupSummaryRequest.h"
#include "model/DescribeBackupSummaryResult.h"
#include "model/DescribeBackupTablesRequest.h"
#include "model/DescribeBackupTablesResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeClusterConnectionRequest.h"
#include "model/DescribeClusterConnectionResult.h"
#include "model/DescribeColdStorageRequest.h"
#include "model/DescribeColdStorageResult.h"
#include "model/DescribeDBInstanceUsageRequest.h"
#include "model/DescribeDBInstanceUsageResult.h"
#include "model/DescribeDeletedInstancesRequest.h"
#include "model/DescribeDeletedInstancesResult.h"
#include "model/DescribeDiskWarningLineRequest.h"
#include "model/DescribeDiskWarningLineResult.h"
#include "model/DescribeEndpointsRequest.h"
#include "model/DescribeEndpointsResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeInstanceTypeRequest.h"
#include "model/DescribeInstanceTypeResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeIpWhitelistRequest.h"
#include "model/DescribeIpWhitelistResult.h"
#include "model/DescribeMultiZoneAvailableRegionsRequest.h"
#include "model/DescribeMultiZoneAvailableRegionsResult.h"
#include "model/DescribeMultiZoneAvailableResourceRequest.h"
#include "model/DescribeMultiZoneAvailableResourceResult.h"
#include "model/DescribeMultiZoneClusterRequest.h"
#include "model/DescribeMultiZoneClusterResult.h"
#include "model/DescribeRecoverableTimeRangeRequest.h"
#include "model/DescribeRecoverableTimeRangeResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRestoreFullDetailsRequest.h"
#include "model/DescribeRestoreFullDetailsResult.h"
#include "model/DescribeRestoreIncrDetailRequest.h"
#include "model/DescribeRestoreIncrDetailResult.h"
#include "model/DescribeRestoreSchemaDetailsRequest.h"
#include "model/DescribeRestoreSchemaDetailsResult.h"
#include "model/DescribeRestoreSummaryRequest.h"
#include "model/DescribeRestoreSummaryResult.h"
#include "model/DescribeRestoreTablesRequest.h"
#include "model/DescribeRestoreTablesResult.h"
#include "model/DescribeSecurityGroupsRequest.h"
#include "model/DescribeSecurityGroupsResult.h"
#include "model/DescribeServerlessClusterRequest.h"
#include "model/DescribeServerlessClusterResult.h"
#include "model/DescribeSubDomainRequest.h"
#include "model/DescribeSubDomainResult.h"
#include "model/EnableHBaseueBackupRequest.h"
#include "model/EnableHBaseueBackupResult.h"
#include "model/EnableHBaseueModuleRequest.h"
#include "model/EnableHBaseueModuleResult.h"
#include "model/EvaluateMultiZoneResourceRequest.h"
#include "model/EvaluateMultiZoneResourceResult.h"
#include "model/GetMultimodeCmsUrlRequest.h"
#include "model/GetMultimodeCmsUrlResult.h"
#include "model/ListHBaseInstancesRequest.h"
#include "model/ListHBaseInstancesResult.h"
#include "model/ListInstanceServiceConfigHistoriesRequest.h"
#include "model/ListInstanceServiceConfigHistoriesResult.h"
#include "model/ListInstanceServiceConfigurationsRequest.h"
#include "model/ListInstanceServiceConfigurationsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagsRequest.h"
#include "model/ListTagsResult.h"
#include "model/ModifyBackupPlanConfigRequest.h"
#include "model/ModifyBackupPlanConfigResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyClusterDeletionProtectionRequest.h"
#include "model/ModifyClusterDeletionProtectionResult.h"
#include "model/ModifyDiskWarningLineRequest.h"
#include "model/ModifyDiskWarningLineResult.h"
#include "model/ModifyInstanceMaintainTimeRequest.h"
#include "model/ModifyInstanceMaintainTimeResult.h"
#include "model/ModifyInstanceNameRequest.h"
#include "model/ModifyInstanceNameResult.h"
#include "model/ModifyInstanceServiceConfigRequest.h"
#include "model/ModifyInstanceServiceConfigResult.h"
#include "model/ModifyInstanceTypeRequest.h"
#include "model/ModifyInstanceTypeResult.h"
#include "model/ModifyIpWhitelistRequest.h"
#include "model/ModifyIpWhitelistResult.h"
#include "model/ModifyMultiZoneClusterNodeTypeRequest.h"
#include "model/ModifyMultiZoneClusterNodeTypeResult.h"
#include "model/ModifySecurityGroupsRequest.h"
#include "model/ModifySecurityGroupsResult.h"
#include "model/ModifyUIAccountPasswordRequest.h"
#include "model/ModifyUIAccountPasswordResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/OpenBackupRequest.h"
#include "model/OpenBackupResult.h"
#include "model/PurgeInstanceRequest.h"
#include "model/PurgeInstanceResult.h"
#include "model/QueryHBaseHaDBRequest.h"
#include "model/QueryHBaseHaDBResult.h"
#include "model/QueryXpackRelateDBRequest.h"
#include "model/QueryXpackRelateDBResult.h"
#include "model/RelateDbForHBaseHaRequest.h"
#include "model/RelateDbForHBaseHaResult.h"
#include "model/ReleasePublicNetworkAddressRequest.h"
#include "model/ReleasePublicNetworkAddressResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/ResizeColdStorageSizeRequest.h"
#include "model/ResizeColdStorageSizeResult.h"
#include "model/ResizeDiskSizeRequest.h"
#include "model/ResizeDiskSizeResult.h"
#include "model/ResizeMultiZoneClusterDiskSizeRequest.h"
#include "model/ResizeMultiZoneClusterDiskSizeResult.h"
#include "model/ResizeMultiZoneClusterNodeCountRequest.h"
#include "model/ResizeMultiZoneClusterNodeCountResult.h"
#include "model/ResizeNodeCountRequest.h"
#include "model/ResizeNodeCountResult.h"
#include "model/RestartInstanceRequest.h"
#include "model/RestartInstanceResult.h"
#include "model/SwitchHbaseHaSlbRequest.h"
#include "model/SwitchHbaseHaSlbResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnTagResourcesRequest.h"
#include "model/UnTagResourcesResult.h"
#include "model/UpgradeMinorVersionRequest.h"
#include "model/UpgradeMinorVersionResult.h"
#include "model/UpgradeMultiZoneClusterRequest.h"
#include "model/UpgradeMultiZoneClusterResult.h"
#include "model/XpackRelateDBRequest.h"
#include "model/XpackRelateDBResult.h"


namespace AlibabaCloud
{
	namespace HBase
	{
		class ALIBABACLOUD_HBASE_EXPORT HBaseClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddUserHdfsInfoResult> AddUserHdfsInfoOutcome;
			typedef std::future<AddUserHdfsInfoOutcome> AddUserHdfsInfoOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::AddUserHdfsInfoRequest&, const AddUserHdfsInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserHdfsInfoAsyncHandler;
			typedef Outcome<Error, Model::AllocatePublicNetworkAddressResult> AllocatePublicNetworkAddressOutcome;
			typedef std::future<AllocatePublicNetworkAddressOutcome> AllocatePublicNetworkAddressOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::AllocatePublicNetworkAddressRequest&, const AllocatePublicNetworkAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocatePublicNetworkAddressAsyncHandler;
			typedef Outcome<Error, Model::CheckComponentsVersionResult> CheckComponentsVersionOutcome;
			typedef std::future<CheckComponentsVersionOutcome> CheckComponentsVersionOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CheckComponentsVersionRequest&, const CheckComponentsVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckComponentsVersionAsyncHandler;
			typedef Outcome<Error, Model::CloseBackupResult> CloseBackupOutcome;
			typedef std::future<CloseBackupOutcome> CloseBackupOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CloseBackupRequest&, const CloseBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseBackupAsyncHandler;
			typedef Outcome<Error, Model::ConvertInstanceResult> ConvertInstanceOutcome;
			typedef std::future<ConvertInstanceOutcome> ConvertInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ConvertInstanceRequest&, const ConvertInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupPlanResult> CreateBackupPlanOutcome;
			typedef std::future<CreateBackupPlanOutcome> CreateBackupPlanOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateBackupPlanRequest&, const CreateBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateGlobalResourceResult> CreateGlobalResourceOutcome;
			typedef std::future<CreateGlobalResourceOutcome> CreateGlobalResourceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateGlobalResourceRequest&, const CreateGlobalResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalResourceAsyncHandler;
			typedef Outcome<Error, Model::CreateHBaseSlbServerResult> CreateHBaseSlbServerOutcome;
			typedef std::future<CreateHBaseSlbServerOutcome> CreateHBaseSlbServerOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateHBaseSlbServerRequest&, const CreateHBaseSlbServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHBaseSlbServerAsyncHandler;
			typedef Outcome<Error, Model::CreateHbaseHaSlbResult> CreateHbaseHaSlbOutcome;
			typedef std::future<CreateHbaseHaSlbOutcome> CreateHbaseHaSlbOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateHbaseHaSlbRequest&, const CreateHbaseHaSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHbaseHaSlbAsyncHandler;
			typedef Outcome<Error, Model::CreateMultiZoneClusterResult> CreateMultiZoneClusterOutcome;
			typedef std::future<CreateMultiZoneClusterOutcome> CreateMultiZoneClusterOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateMultiZoneClusterRequest&, const CreateMultiZoneClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMultiZoneClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateRestorePlanResult> CreateRestorePlanOutcome;
			typedef std::future<CreateRestorePlanOutcome> CreateRestorePlanOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateRestorePlanRequest&, const CreateRestorePlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRestorePlanAsyncHandler;
			typedef Outcome<Error, Model::CreateServerlessClusterResult> CreateServerlessClusterOutcome;
			typedef std::future<CreateServerlessClusterOutcome> CreateServerlessClusterOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateServerlessClusterRequest&, const CreateServerlessClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerlessClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteGlobalResourceResult> DeleteGlobalResourceOutcome;
			typedef std::future<DeleteGlobalResourceOutcome> DeleteGlobalResourceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteGlobalResourceRequest&, const DeleteGlobalResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteHBaseHaDBResult> DeleteHBaseHaDBOutcome;
			typedef std::future<DeleteHBaseHaDBOutcome> DeleteHBaseHaDBOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteHBaseHaDBRequest&, const DeleteHBaseHaDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHBaseHaDBAsyncHandler;
			typedef Outcome<Error, Model::DeleteHBaseSlbServerResult> DeleteHBaseSlbServerOutcome;
			typedef std::future<DeleteHBaseSlbServerOutcome> DeleteHBaseSlbServerOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteHBaseSlbServerRequest&, const DeleteHBaseSlbServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHBaseSlbServerAsyncHandler;
			typedef Outcome<Error, Model::DeleteHbaseHaSlbResult> DeleteHbaseHaSlbOutcome;
			typedef std::future<DeleteHbaseHaSlbOutcome> DeleteHbaseHaSlbOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteHbaseHaSlbRequest&, const DeleteHbaseHaSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHbaseHaSlbAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteMultiZoneClusterResult> DeleteMultiZoneClusterOutcome;
			typedef std::future<DeleteMultiZoneClusterOutcome> DeleteMultiZoneClusterOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteMultiZoneClusterRequest&, const DeleteMultiZoneClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMultiZoneClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteServerlessClusterResult> DeleteServerlessClusterOutcome;
			typedef std::future<DeleteServerlessClusterOutcome> DeleteServerlessClusterOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteServerlessClusterRequest&, const DeleteServerlessClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerlessClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserHdfsInfoResult> DeleteUserHdfsInfoOutcome;
			typedef std::future<DeleteUserHdfsInfoOutcome> DeleteUserHdfsInfoOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteUserHdfsInfoRequest&, const DeleteUserHdfsInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserHdfsInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableResourceResult> DescribeAvailableResourceOutcome;
			typedef std::future<DescribeAvailableResourceOutcome> DescribeAvailableResourceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeAvailableResourceRequest&, const DescribeAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPlanConfigResult> DescribeBackupPlanConfigOutcome;
			typedef std::future<DescribeBackupPlanConfigOutcome> DescribeBackupPlanConfigOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeBackupPlanConfigRequest&, const DescribeBackupPlanConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlanConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupStatusResult> DescribeBackupStatusOutcome;
			typedef std::future<DescribeBackupStatusOutcome> DescribeBackupStatusOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeBackupStatusRequest&, const DescribeBackupStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupSummaryResult> DescribeBackupSummaryOutcome;
			typedef std::future<DescribeBackupSummaryOutcome> DescribeBackupSummaryOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeBackupSummaryRequest&, const DescribeBackupSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupTablesResult> DescribeBackupTablesOutcome;
			typedef std::future<DescribeBackupTablesOutcome> DescribeBackupTablesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeBackupTablesRequest&, const DescribeBackupTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterConnectionResult> DescribeClusterConnectionOutcome;
			typedef std::future<DescribeClusterConnectionOutcome> DescribeClusterConnectionOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeClusterConnectionRequest&, const DescribeClusterConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterConnectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeColdStorageResult> DescribeColdStorageOutcome;
			typedef std::future<DescribeColdStorageOutcome> DescribeColdStorageOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeColdStorageRequest&, const DescribeColdStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColdStorageAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceUsageResult> DescribeDBInstanceUsageOutcome;
			typedef std::future<DescribeDBInstanceUsageOutcome> DescribeDBInstanceUsageOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeDBInstanceUsageRequest&, const DescribeDBInstanceUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeletedInstancesResult> DescribeDeletedInstancesOutcome;
			typedef std::future<DescribeDeletedInstancesOutcome> DescribeDeletedInstancesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeDeletedInstancesRequest&, const DescribeDeletedInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeletedInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiskWarningLineResult> DescribeDiskWarningLineOutcome;
			typedef std::future<DescribeDiskWarningLineOutcome> DescribeDiskWarningLineOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeDiskWarningLineRequest&, const DescribeDiskWarningLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskWarningLineAsyncHandler;
			typedef Outcome<Error, Model::DescribeEndpointsResult> DescribeEndpointsOutcome;
			typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeEndpointsRequest&, const DescribeEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTypeResult> DescribeInstanceTypeOutcome;
			typedef std::future<DescribeInstanceTypeOutcome> DescribeInstanceTypeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeInstanceTypeRequest&, const DescribeInstanceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpWhitelistResult> DescribeIpWhitelistOutcome;
			typedef std::future<DescribeIpWhitelistOutcome> DescribeIpWhitelistOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeIpWhitelistRequest&, const DescribeIpWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeMultiZoneAvailableRegionsResult> DescribeMultiZoneAvailableRegionsOutcome;
			typedef std::future<DescribeMultiZoneAvailableRegionsOutcome> DescribeMultiZoneAvailableRegionsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeMultiZoneAvailableRegionsRequest&, const DescribeMultiZoneAvailableRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMultiZoneAvailableRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMultiZoneAvailableResourceResult> DescribeMultiZoneAvailableResourceOutcome;
			typedef std::future<DescribeMultiZoneAvailableResourceOutcome> DescribeMultiZoneAvailableResourceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeMultiZoneAvailableResourceRequest&, const DescribeMultiZoneAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMultiZoneAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeMultiZoneClusterResult> DescribeMultiZoneClusterOutcome;
			typedef std::future<DescribeMultiZoneClusterOutcome> DescribeMultiZoneClusterOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeMultiZoneClusterRequest&, const DescribeMultiZoneClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMultiZoneClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecoverableTimeRangeResult> DescribeRecoverableTimeRangeOutcome;
			typedef std::future<DescribeRecoverableTimeRangeOutcome> DescribeRecoverableTimeRangeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeRecoverableTimeRangeRequest&, const DescribeRecoverableTimeRangeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecoverableTimeRangeAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreFullDetailsResult> DescribeRestoreFullDetailsOutcome;
			typedef std::future<DescribeRestoreFullDetailsOutcome> DescribeRestoreFullDetailsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeRestoreFullDetailsRequest&, const DescribeRestoreFullDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreFullDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreIncrDetailResult> DescribeRestoreIncrDetailOutcome;
			typedef std::future<DescribeRestoreIncrDetailOutcome> DescribeRestoreIncrDetailOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeRestoreIncrDetailRequest&, const DescribeRestoreIncrDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreIncrDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreSchemaDetailsResult> DescribeRestoreSchemaDetailsOutcome;
			typedef std::future<DescribeRestoreSchemaDetailsOutcome> DescribeRestoreSchemaDetailsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeRestoreSchemaDetailsRequest&, const DescribeRestoreSchemaDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreSchemaDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreSummaryResult> DescribeRestoreSummaryOutcome;
			typedef std::future<DescribeRestoreSummaryOutcome> DescribeRestoreSummaryOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeRestoreSummaryRequest&, const DescribeRestoreSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreTablesResult> DescribeRestoreTablesOutcome;
			typedef std::future<DescribeRestoreTablesOutcome> DescribeRestoreTablesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeRestoreTablesRequest&, const DescribeRestoreTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupsResult> DescribeSecurityGroupsOutcome;
			typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeSecurityGroupsRequest&, const DescribeSecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeServerlessClusterResult> DescribeServerlessClusterOutcome;
			typedef std::future<DescribeServerlessClusterOutcome> DescribeServerlessClusterOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeServerlessClusterRequest&, const DescribeServerlessClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerlessClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubDomainResult> DescribeSubDomainOutcome;
			typedef std::future<DescribeSubDomainOutcome> DescribeSubDomainOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeSubDomainRequest&, const DescribeSubDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubDomainAsyncHandler;
			typedef Outcome<Error, Model::EnableHBaseueBackupResult> EnableHBaseueBackupOutcome;
			typedef std::future<EnableHBaseueBackupOutcome> EnableHBaseueBackupOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::EnableHBaseueBackupRequest&, const EnableHBaseueBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableHBaseueBackupAsyncHandler;
			typedef Outcome<Error, Model::EnableHBaseueModuleResult> EnableHBaseueModuleOutcome;
			typedef std::future<EnableHBaseueModuleOutcome> EnableHBaseueModuleOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::EnableHBaseueModuleRequest&, const EnableHBaseueModuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableHBaseueModuleAsyncHandler;
			typedef Outcome<Error, Model::EvaluateMultiZoneResourceResult> EvaluateMultiZoneResourceOutcome;
			typedef std::future<EvaluateMultiZoneResourceOutcome> EvaluateMultiZoneResourceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::EvaluateMultiZoneResourceRequest&, const EvaluateMultiZoneResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EvaluateMultiZoneResourceAsyncHandler;
			typedef Outcome<Error, Model::GetMultimodeCmsUrlResult> GetMultimodeCmsUrlOutcome;
			typedef std::future<GetMultimodeCmsUrlOutcome> GetMultimodeCmsUrlOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::GetMultimodeCmsUrlRequest&, const GetMultimodeCmsUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMultimodeCmsUrlAsyncHandler;
			typedef Outcome<Error, Model::ListHBaseInstancesResult> ListHBaseInstancesOutcome;
			typedef std::future<ListHBaseInstancesOutcome> ListHBaseInstancesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ListHBaseInstancesRequest&, const ListHBaseInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHBaseInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceServiceConfigHistoriesResult> ListInstanceServiceConfigHistoriesOutcome;
			typedef std::future<ListInstanceServiceConfigHistoriesOutcome> ListInstanceServiceConfigHistoriesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ListInstanceServiceConfigHistoriesRequest&, const ListInstanceServiceConfigHistoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceServiceConfigHistoriesAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceServiceConfigurationsResult> ListInstanceServiceConfigurationsOutcome;
			typedef std::future<ListInstanceServiceConfigurationsOutcome> ListInstanceServiceConfigurationsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ListInstanceServiceConfigurationsRequest&, const ListInstanceServiceConfigurationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceServiceConfigurationsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagsResult> ListTagsOutcome;
			typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ListTagsRequest&, const ListTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPlanConfigResult> ModifyBackupPlanConfigOutcome;
			typedef std::future<ModifyBackupPlanConfigOutcome> ModifyBackupPlanConfigOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyBackupPlanConfigRequest&, const ModifyBackupPlanConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPlanConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterDeletionProtectionResult> ModifyClusterDeletionProtectionOutcome;
			typedef std::future<ModifyClusterDeletionProtectionOutcome> ModifyClusterDeletionProtectionOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyClusterDeletionProtectionRequest&, const ModifyClusterDeletionProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterDeletionProtectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDiskWarningLineResult> ModifyDiskWarningLineOutcome;
			typedef std::future<ModifyDiskWarningLineOutcome> ModifyDiskWarningLineOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyDiskWarningLineRequest&, const ModifyDiskWarningLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskWarningLineAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceMaintainTimeResult> ModifyInstanceMaintainTimeOutcome;
			typedef std::future<ModifyInstanceMaintainTimeOutcome> ModifyInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyInstanceMaintainTimeRequest&, const ModifyInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceNameResult> ModifyInstanceNameOutcome;
			typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyInstanceNameRequest&, const ModifyInstanceNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceServiceConfigResult> ModifyInstanceServiceConfigOutcome;
			typedef std::future<ModifyInstanceServiceConfigOutcome> ModifyInstanceServiceConfigOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyInstanceServiceConfigRequest&, const ModifyInstanceServiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceServiceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceTypeResult> ModifyInstanceTypeOutcome;
			typedef std::future<ModifyInstanceTypeOutcome> ModifyInstanceTypeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyInstanceTypeRequest&, const ModifyInstanceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpWhitelistResult> ModifyIpWhitelistOutcome;
			typedef std::future<ModifyIpWhitelistOutcome> ModifyIpWhitelistOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyIpWhitelistRequest&, const ModifyIpWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyMultiZoneClusterNodeTypeResult> ModifyMultiZoneClusterNodeTypeOutcome;
			typedef std::future<ModifyMultiZoneClusterNodeTypeOutcome> ModifyMultiZoneClusterNodeTypeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyMultiZoneClusterNodeTypeRequest&, const ModifyMultiZoneClusterNodeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMultiZoneClusterNodeTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupsResult> ModifySecurityGroupsOutcome;
			typedef std::future<ModifySecurityGroupsOutcome> ModifySecurityGroupsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifySecurityGroupsRequest&, const ModifySecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::ModifyUIAccountPasswordResult> ModifyUIAccountPasswordOutcome;
			typedef std::future<ModifyUIAccountPasswordOutcome> ModifyUIAccountPasswordOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyUIAccountPasswordRequest&, const ModifyUIAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUIAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::OpenBackupResult> OpenBackupOutcome;
			typedef std::future<OpenBackupOutcome> OpenBackupOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::OpenBackupRequest&, const OpenBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenBackupAsyncHandler;
			typedef Outcome<Error, Model::PurgeInstanceResult> PurgeInstanceOutcome;
			typedef std::future<PurgeInstanceOutcome> PurgeInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::PurgeInstanceRequest&, const PurgeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PurgeInstanceAsyncHandler;
			typedef Outcome<Error, Model::QueryHBaseHaDBResult> QueryHBaseHaDBOutcome;
			typedef std::future<QueryHBaseHaDBOutcome> QueryHBaseHaDBOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::QueryHBaseHaDBRequest&, const QueryHBaseHaDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryHBaseHaDBAsyncHandler;
			typedef Outcome<Error, Model::QueryXpackRelateDBResult> QueryXpackRelateDBOutcome;
			typedef std::future<QueryXpackRelateDBOutcome> QueryXpackRelateDBOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::QueryXpackRelateDBRequest&, const QueryXpackRelateDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryXpackRelateDBAsyncHandler;
			typedef Outcome<Error, Model::RelateDbForHBaseHaResult> RelateDbForHBaseHaOutcome;
			typedef std::future<RelateDbForHBaseHaOutcome> RelateDbForHBaseHaOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::RelateDbForHBaseHaRequest&, const RelateDbForHBaseHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RelateDbForHBaseHaAsyncHandler;
			typedef Outcome<Error, Model::ReleasePublicNetworkAddressResult> ReleasePublicNetworkAddressOutcome;
			typedef std::future<ReleasePublicNetworkAddressOutcome> ReleasePublicNetworkAddressOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ReleasePublicNetworkAddressRequest&, const ReleasePublicNetworkAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePublicNetworkAddressAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResizeColdStorageSizeResult> ResizeColdStorageSizeOutcome;
			typedef std::future<ResizeColdStorageSizeOutcome> ResizeColdStorageSizeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ResizeColdStorageSizeRequest&, const ResizeColdStorageSizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeColdStorageSizeAsyncHandler;
			typedef Outcome<Error, Model::ResizeDiskSizeResult> ResizeDiskSizeOutcome;
			typedef std::future<ResizeDiskSizeOutcome> ResizeDiskSizeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ResizeDiskSizeRequest&, const ResizeDiskSizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskSizeAsyncHandler;
			typedef Outcome<Error, Model::ResizeMultiZoneClusterDiskSizeResult> ResizeMultiZoneClusterDiskSizeOutcome;
			typedef std::future<ResizeMultiZoneClusterDiskSizeOutcome> ResizeMultiZoneClusterDiskSizeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ResizeMultiZoneClusterDiskSizeRequest&, const ResizeMultiZoneClusterDiskSizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeMultiZoneClusterDiskSizeAsyncHandler;
			typedef Outcome<Error, Model::ResizeMultiZoneClusterNodeCountResult> ResizeMultiZoneClusterNodeCountOutcome;
			typedef std::future<ResizeMultiZoneClusterNodeCountOutcome> ResizeMultiZoneClusterNodeCountOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ResizeMultiZoneClusterNodeCountRequest&, const ResizeMultiZoneClusterNodeCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeMultiZoneClusterNodeCountAsyncHandler;
			typedef Outcome<Error, Model::ResizeNodeCountResult> ResizeNodeCountOutcome;
			typedef std::future<ResizeNodeCountOutcome> ResizeNodeCountOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ResizeNodeCountRequest&, const ResizeNodeCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeNodeCountAsyncHandler;
			typedef Outcome<Error, Model::RestartInstanceResult> RestartInstanceOutcome;
			typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::RestartInstanceRequest&, const RestartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
			typedef Outcome<Error, Model::SwitchHbaseHaSlbResult> SwitchHbaseHaSlbOutcome;
			typedef std::future<SwitchHbaseHaSlbOutcome> SwitchHbaseHaSlbOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::SwitchHbaseHaSlbRequest&, const SwitchHbaseHaSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchHbaseHaSlbAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnTagResourcesResult> UnTagResourcesOutcome;
			typedef std::future<UnTagResourcesOutcome> UnTagResourcesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::UnTagResourcesRequest&, const UnTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpgradeMinorVersionResult> UpgradeMinorVersionOutcome;
			typedef std::future<UpgradeMinorVersionOutcome> UpgradeMinorVersionOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::UpgradeMinorVersionRequest&, const UpgradeMinorVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeMinorVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeMultiZoneClusterResult> UpgradeMultiZoneClusterOutcome;
			typedef std::future<UpgradeMultiZoneClusterOutcome> UpgradeMultiZoneClusterOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::UpgradeMultiZoneClusterRequest&, const UpgradeMultiZoneClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeMultiZoneClusterAsyncHandler;
			typedef Outcome<Error, Model::XpackRelateDBResult> XpackRelateDBOutcome;
			typedef std::future<XpackRelateDBOutcome> XpackRelateDBOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::XpackRelateDBRequest&, const XpackRelateDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> XpackRelateDBAsyncHandler;

			HBaseClient(const Credentials &credentials, const ClientConfiguration &configuration);
			HBaseClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			HBaseClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~HBaseClient();
			AddUserHdfsInfoOutcome addUserHdfsInfo(const Model::AddUserHdfsInfoRequest &request)const;
			void addUserHdfsInfoAsync(const Model::AddUserHdfsInfoRequest& request, const AddUserHdfsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserHdfsInfoOutcomeCallable addUserHdfsInfoCallable(const Model::AddUserHdfsInfoRequest& request) const;
			AllocatePublicNetworkAddressOutcome allocatePublicNetworkAddress(const Model::AllocatePublicNetworkAddressRequest &request)const;
			void allocatePublicNetworkAddressAsync(const Model::AllocatePublicNetworkAddressRequest& request, const AllocatePublicNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocatePublicNetworkAddressOutcomeCallable allocatePublicNetworkAddressCallable(const Model::AllocatePublicNetworkAddressRequest& request) const;
			CheckComponentsVersionOutcome checkComponentsVersion(const Model::CheckComponentsVersionRequest &request)const;
			void checkComponentsVersionAsync(const Model::CheckComponentsVersionRequest& request, const CheckComponentsVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckComponentsVersionOutcomeCallable checkComponentsVersionCallable(const Model::CheckComponentsVersionRequest& request) const;
			CloseBackupOutcome closeBackup(const Model::CloseBackupRequest &request)const;
			void closeBackupAsync(const Model::CloseBackupRequest& request, const CloseBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseBackupOutcomeCallable closeBackupCallable(const Model::CloseBackupRequest& request) const;
			ConvertInstanceOutcome convertInstance(const Model::ConvertInstanceRequest &request)const;
			void convertInstanceAsync(const Model::ConvertInstanceRequest& request, const ConvertInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertInstanceOutcomeCallable convertInstanceCallable(const Model::ConvertInstanceRequest& request) const;
			CreateBackupPlanOutcome createBackupPlan(const Model::CreateBackupPlanRequest &request)const;
			void createBackupPlanAsync(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupPlanOutcomeCallable createBackupPlanCallable(const Model::CreateBackupPlanRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateGlobalResourceOutcome createGlobalResource(const Model::CreateGlobalResourceRequest &request)const;
			void createGlobalResourceAsync(const Model::CreateGlobalResourceRequest& request, const CreateGlobalResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGlobalResourceOutcomeCallable createGlobalResourceCallable(const Model::CreateGlobalResourceRequest& request) const;
			CreateHBaseSlbServerOutcome createHBaseSlbServer(const Model::CreateHBaseSlbServerRequest &request)const;
			void createHBaseSlbServerAsync(const Model::CreateHBaseSlbServerRequest& request, const CreateHBaseSlbServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHBaseSlbServerOutcomeCallable createHBaseSlbServerCallable(const Model::CreateHBaseSlbServerRequest& request) const;
			CreateHbaseHaSlbOutcome createHbaseHaSlb(const Model::CreateHbaseHaSlbRequest &request)const;
			void createHbaseHaSlbAsync(const Model::CreateHbaseHaSlbRequest& request, const CreateHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHbaseHaSlbOutcomeCallable createHbaseHaSlbCallable(const Model::CreateHbaseHaSlbRequest& request) const;
			CreateMultiZoneClusterOutcome createMultiZoneCluster(const Model::CreateMultiZoneClusterRequest &request)const;
			void createMultiZoneClusterAsync(const Model::CreateMultiZoneClusterRequest& request, const CreateMultiZoneClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMultiZoneClusterOutcomeCallable createMultiZoneClusterCallable(const Model::CreateMultiZoneClusterRequest& request) const;
			CreateRestorePlanOutcome createRestorePlan(const Model::CreateRestorePlanRequest &request)const;
			void createRestorePlanAsync(const Model::CreateRestorePlanRequest& request, const CreateRestorePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRestorePlanOutcomeCallable createRestorePlanCallable(const Model::CreateRestorePlanRequest& request) const;
			CreateServerlessClusterOutcome createServerlessCluster(const Model::CreateServerlessClusterRequest &request)const;
			void createServerlessClusterAsync(const Model::CreateServerlessClusterRequest& request, const CreateServerlessClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServerlessClusterOutcomeCallable createServerlessClusterCallable(const Model::CreateServerlessClusterRequest& request) const;
			DeleteGlobalResourceOutcome deleteGlobalResource(const Model::DeleteGlobalResourceRequest &request)const;
			void deleteGlobalResourceAsync(const Model::DeleteGlobalResourceRequest& request, const DeleteGlobalResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGlobalResourceOutcomeCallable deleteGlobalResourceCallable(const Model::DeleteGlobalResourceRequest& request) const;
			DeleteHBaseHaDBOutcome deleteHBaseHaDB(const Model::DeleteHBaseHaDBRequest &request)const;
			void deleteHBaseHaDBAsync(const Model::DeleteHBaseHaDBRequest& request, const DeleteHBaseHaDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHBaseHaDBOutcomeCallable deleteHBaseHaDBCallable(const Model::DeleteHBaseHaDBRequest& request) const;
			DeleteHBaseSlbServerOutcome deleteHBaseSlbServer(const Model::DeleteHBaseSlbServerRequest &request)const;
			void deleteHBaseSlbServerAsync(const Model::DeleteHBaseSlbServerRequest& request, const DeleteHBaseSlbServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHBaseSlbServerOutcomeCallable deleteHBaseSlbServerCallable(const Model::DeleteHBaseSlbServerRequest& request) const;
			DeleteHbaseHaSlbOutcome deleteHbaseHaSlb(const Model::DeleteHbaseHaSlbRequest &request)const;
			void deleteHbaseHaSlbAsync(const Model::DeleteHbaseHaSlbRequest& request, const DeleteHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHbaseHaSlbOutcomeCallable deleteHbaseHaSlbCallable(const Model::DeleteHbaseHaSlbRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteMultiZoneClusterOutcome deleteMultiZoneCluster(const Model::DeleteMultiZoneClusterRequest &request)const;
			void deleteMultiZoneClusterAsync(const Model::DeleteMultiZoneClusterRequest& request, const DeleteMultiZoneClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMultiZoneClusterOutcomeCallable deleteMultiZoneClusterCallable(const Model::DeleteMultiZoneClusterRequest& request) const;
			DeleteServerlessClusterOutcome deleteServerlessCluster(const Model::DeleteServerlessClusterRequest &request)const;
			void deleteServerlessClusterAsync(const Model::DeleteServerlessClusterRequest& request, const DeleteServerlessClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServerlessClusterOutcomeCallable deleteServerlessClusterCallable(const Model::DeleteServerlessClusterRequest& request) const;
			DeleteUserHdfsInfoOutcome deleteUserHdfsInfo(const Model::DeleteUserHdfsInfoRequest &request)const;
			void deleteUserHdfsInfoAsync(const Model::DeleteUserHdfsInfoRequest& request, const DeleteUserHdfsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserHdfsInfoOutcomeCallable deleteUserHdfsInfoCallable(const Model::DeleteUserHdfsInfoRequest& request) const;
			DescribeAvailableResourceOutcome describeAvailableResource(const Model::DescribeAvailableResourceRequest &request)const;
			void describeAvailableResourceAsync(const Model::DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableResourceOutcomeCallable describeAvailableResourceCallable(const Model::DescribeAvailableResourceRequest& request) const;
			DescribeBackupPlanConfigOutcome describeBackupPlanConfig(const Model::DescribeBackupPlanConfigRequest &request)const;
			void describeBackupPlanConfigAsync(const Model::DescribeBackupPlanConfigRequest& request, const DescribeBackupPlanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPlanConfigOutcomeCallable describeBackupPlanConfigCallable(const Model::DescribeBackupPlanConfigRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupStatusOutcome describeBackupStatus(const Model::DescribeBackupStatusRequest &request)const;
			void describeBackupStatusAsync(const Model::DescribeBackupStatusRequest& request, const DescribeBackupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupStatusOutcomeCallable describeBackupStatusCallable(const Model::DescribeBackupStatusRequest& request) const;
			DescribeBackupSummaryOutcome describeBackupSummary(const Model::DescribeBackupSummaryRequest &request)const;
			void describeBackupSummaryAsync(const Model::DescribeBackupSummaryRequest& request, const DescribeBackupSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupSummaryOutcomeCallable describeBackupSummaryCallable(const Model::DescribeBackupSummaryRequest& request) const;
			DescribeBackupTablesOutcome describeBackupTables(const Model::DescribeBackupTablesRequest &request)const;
			void describeBackupTablesAsync(const Model::DescribeBackupTablesRequest& request, const DescribeBackupTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupTablesOutcomeCallable describeBackupTablesCallable(const Model::DescribeBackupTablesRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeClusterConnectionOutcome describeClusterConnection(const Model::DescribeClusterConnectionRequest &request)const;
			void describeClusterConnectionAsync(const Model::DescribeClusterConnectionRequest& request, const DescribeClusterConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterConnectionOutcomeCallable describeClusterConnectionCallable(const Model::DescribeClusterConnectionRequest& request) const;
			DescribeColdStorageOutcome describeColdStorage(const Model::DescribeColdStorageRequest &request)const;
			void describeColdStorageAsync(const Model::DescribeColdStorageRequest& request, const DescribeColdStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeColdStorageOutcomeCallable describeColdStorageCallable(const Model::DescribeColdStorageRequest& request) const;
			DescribeDBInstanceUsageOutcome describeDBInstanceUsage(const Model::DescribeDBInstanceUsageRequest &request)const;
			void describeDBInstanceUsageAsync(const Model::DescribeDBInstanceUsageRequest& request, const DescribeDBInstanceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceUsageOutcomeCallable describeDBInstanceUsageCallable(const Model::DescribeDBInstanceUsageRequest& request) const;
			DescribeDeletedInstancesOutcome describeDeletedInstances(const Model::DescribeDeletedInstancesRequest &request)const;
			void describeDeletedInstancesAsync(const Model::DescribeDeletedInstancesRequest& request, const DescribeDeletedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeletedInstancesOutcomeCallable describeDeletedInstancesCallable(const Model::DescribeDeletedInstancesRequest& request) const;
			DescribeDiskWarningLineOutcome describeDiskWarningLine(const Model::DescribeDiskWarningLineRequest &request)const;
			void describeDiskWarningLineAsync(const Model::DescribeDiskWarningLineRequest& request, const DescribeDiskWarningLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiskWarningLineOutcomeCallable describeDiskWarningLineCallable(const Model::DescribeDiskWarningLineRequest& request) const;
			DescribeEndpointsOutcome describeEndpoints(const Model::DescribeEndpointsRequest &request)const;
			void describeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEndpointsOutcomeCallable describeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeInstanceTypeOutcome describeInstanceType(const Model::DescribeInstanceTypeRequest &request)const;
			void describeInstanceTypeAsync(const Model::DescribeInstanceTypeRequest& request, const DescribeInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTypeOutcomeCallable describeInstanceTypeCallable(const Model::DescribeInstanceTypeRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeIpWhitelistOutcome describeIpWhitelist(const Model::DescribeIpWhitelistRequest &request)const;
			void describeIpWhitelistAsync(const Model::DescribeIpWhitelistRequest& request, const DescribeIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpWhitelistOutcomeCallable describeIpWhitelistCallable(const Model::DescribeIpWhitelistRequest& request) const;
			DescribeMultiZoneAvailableRegionsOutcome describeMultiZoneAvailableRegions(const Model::DescribeMultiZoneAvailableRegionsRequest &request)const;
			void describeMultiZoneAvailableRegionsAsync(const Model::DescribeMultiZoneAvailableRegionsRequest& request, const DescribeMultiZoneAvailableRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMultiZoneAvailableRegionsOutcomeCallable describeMultiZoneAvailableRegionsCallable(const Model::DescribeMultiZoneAvailableRegionsRequest& request) const;
			DescribeMultiZoneAvailableResourceOutcome describeMultiZoneAvailableResource(const Model::DescribeMultiZoneAvailableResourceRequest &request)const;
			void describeMultiZoneAvailableResourceAsync(const Model::DescribeMultiZoneAvailableResourceRequest& request, const DescribeMultiZoneAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMultiZoneAvailableResourceOutcomeCallable describeMultiZoneAvailableResourceCallable(const Model::DescribeMultiZoneAvailableResourceRequest& request) const;
			DescribeMultiZoneClusterOutcome describeMultiZoneCluster(const Model::DescribeMultiZoneClusterRequest &request)const;
			void describeMultiZoneClusterAsync(const Model::DescribeMultiZoneClusterRequest& request, const DescribeMultiZoneClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMultiZoneClusterOutcomeCallable describeMultiZoneClusterCallable(const Model::DescribeMultiZoneClusterRequest& request) const;
			DescribeRecoverableTimeRangeOutcome describeRecoverableTimeRange(const Model::DescribeRecoverableTimeRangeRequest &request)const;
			void describeRecoverableTimeRangeAsync(const Model::DescribeRecoverableTimeRangeRequest& request, const DescribeRecoverableTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecoverableTimeRangeOutcomeCallable describeRecoverableTimeRangeCallable(const Model::DescribeRecoverableTimeRangeRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRestoreFullDetailsOutcome describeRestoreFullDetails(const Model::DescribeRestoreFullDetailsRequest &request)const;
			void describeRestoreFullDetailsAsync(const Model::DescribeRestoreFullDetailsRequest& request, const DescribeRestoreFullDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreFullDetailsOutcomeCallable describeRestoreFullDetailsCallable(const Model::DescribeRestoreFullDetailsRequest& request) const;
			DescribeRestoreIncrDetailOutcome describeRestoreIncrDetail(const Model::DescribeRestoreIncrDetailRequest &request)const;
			void describeRestoreIncrDetailAsync(const Model::DescribeRestoreIncrDetailRequest& request, const DescribeRestoreIncrDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreIncrDetailOutcomeCallable describeRestoreIncrDetailCallable(const Model::DescribeRestoreIncrDetailRequest& request) const;
			DescribeRestoreSchemaDetailsOutcome describeRestoreSchemaDetails(const Model::DescribeRestoreSchemaDetailsRequest &request)const;
			void describeRestoreSchemaDetailsAsync(const Model::DescribeRestoreSchemaDetailsRequest& request, const DescribeRestoreSchemaDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreSchemaDetailsOutcomeCallable describeRestoreSchemaDetailsCallable(const Model::DescribeRestoreSchemaDetailsRequest& request) const;
			DescribeRestoreSummaryOutcome describeRestoreSummary(const Model::DescribeRestoreSummaryRequest &request)const;
			void describeRestoreSummaryAsync(const Model::DescribeRestoreSummaryRequest& request, const DescribeRestoreSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreSummaryOutcomeCallable describeRestoreSummaryCallable(const Model::DescribeRestoreSummaryRequest& request) const;
			DescribeRestoreTablesOutcome describeRestoreTables(const Model::DescribeRestoreTablesRequest &request)const;
			void describeRestoreTablesAsync(const Model::DescribeRestoreTablesRequest& request, const DescribeRestoreTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreTablesOutcomeCallable describeRestoreTablesCallable(const Model::DescribeRestoreTablesRequest& request) const;
			DescribeSecurityGroupsOutcome describeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request)const;
			void describeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupsOutcomeCallable describeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request) const;
			DescribeServerlessClusterOutcome describeServerlessCluster(const Model::DescribeServerlessClusterRequest &request)const;
			void describeServerlessClusterAsync(const Model::DescribeServerlessClusterRequest& request, const DescribeServerlessClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServerlessClusterOutcomeCallable describeServerlessClusterCallable(const Model::DescribeServerlessClusterRequest& request) const;
			DescribeSubDomainOutcome describeSubDomain(const Model::DescribeSubDomainRequest &request)const;
			void describeSubDomainAsync(const Model::DescribeSubDomainRequest& request, const DescribeSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubDomainOutcomeCallable describeSubDomainCallable(const Model::DescribeSubDomainRequest& request) const;
			EnableHBaseueBackupOutcome enableHBaseueBackup(const Model::EnableHBaseueBackupRequest &request)const;
			void enableHBaseueBackupAsync(const Model::EnableHBaseueBackupRequest& request, const EnableHBaseueBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableHBaseueBackupOutcomeCallable enableHBaseueBackupCallable(const Model::EnableHBaseueBackupRequest& request) const;
			EnableHBaseueModuleOutcome enableHBaseueModule(const Model::EnableHBaseueModuleRequest &request)const;
			void enableHBaseueModuleAsync(const Model::EnableHBaseueModuleRequest& request, const EnableHBaseueModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableHBaseueModuleOutcomeCallable enableHBaseueModuleCallable(const Model::EnableHBaseueModuleRequest& request) const;
			EvaluateMultiZoneResourceOutcome evaluateMultiZoneResource(const Model::EvaluateMultiZoneResourceRequest &request)const;
			void evaluateMultiZoneResourceAsync(const Model::EvaluateMultiZoneResourceRequest& request, const EvaluateMultiZoneResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EvaluateMultiZoneResourceOutcomeCallable evaluateMultiZoneResourceCallable(const Model::EvaluateMultiZoneResourceRequest& request) const;
			GetMultimodeCmsUrlOutcome getMultimodeCmsUrl(const Model::GetMultimodeCmsUrlRequest &request)const;
			void getMultimodeCmsUrlAsync(const Model::GetMultimodeCmsUrlRequest& request, const GetMultimodeCmsUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMultimodeCmsUrlOutcomeCallable getMultimodeCmsUrlCallable(const Model::GetMultimodeCmsUrlRequest& request) const;
			ListHBaseInstancesOutcome listHBaseInstances(const Model::ListHBaseInstancesRequest &request)const;
			void listHBaseInstancesAsync(const Model::ListHBaseInstancesRequest& request, const ListHBaseInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHBaseInstancesOutcomeCallable listHBaseInstancesCallable(const Model::ListHBaseInstancesRequest& request) const;
			ListInstanceServiceConfigHistoriesOutcome listInstanceServiceConfigHistories(const Model::ListInstanceServiceConfigHistoriesRequest &request)const;
			void listInstanceServiceConfigHistoriesAsync(const Model::ListInstanceServiceConfigHistoriesRequest& request, const ListInstanceServiceConfigHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceServiceConfigHistoriesOutcomeCallable listInstanceServiceConfigHistoriesCallable(const Model::ListInstanceServiceConfigHistoriesRequest& request) const;
			ListInstanceServiceConfigurationsOutcome listInstanceServiceConfigurations(const Model::ListInstanceServiceConfigurationsRequest &request)const;
			void listInstanceServiceConfigurationsAsync(const Model::ListInstanceServiceConfigurationsRequest& request, const ListInstanceServiceConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceServiceConfigurationsOutcomeCallable listInstanceServiceConfigurationsCallable(const Model::ListInstanceServiceConfigurationsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagsOutcome listTags(const Model::ListTagsRequest &request)const;
			void listTagsAsync(const Model::ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsOutcomeCallable listTagsCallable(const Model::ListTagsRequest& request) const;
			ModifyBackupPlanConfigOutcome modifyBackupPlanConfig(const Model::ModifyBackupPlanConfigRequest &request)const;
			void modifyBackupPlanConfigAsync(const Model::ModifyBackupPlanConfigRequest& request, const ModifyBackupPlanConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPlanConfigOutcomeCallable modifyBackupPlanConfigCallable(const Model::ModifyBackupPlanConfigRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyClusterDeletionProtectionOutcome modifyClusterDeletionProtection(const Model::ModifyClusterDeletionProtectionRequest &request)const;
			void modifyClusterDeletionProtectionAsync(const Model::ModifyClusterDeletionProtectionRequest& request, const ModifyClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterDeletionProtectionOutcomeCallable modifyClusterDeletionProtectionCallable(const Model::ModifyClusterDeletionProtectionRequest& request) const;
			ModifyDiskWarningLineOutcome modifyDiskWarningLine(const Model::ModifyDiskWarningLineRequest &request)const;
			void modifyDiskWarningLineAsync(const Model::ModifyDiskWarningLineRequest& request, const ModifyDiskWarningLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDiskWarningLineOutcomeCallable modifyDiskWarningLineCallable(const Model::ModifyDiskWarningLineRequest& request) const;
			ModifyInstanceMaintainTimeOutcome modifyInstanceMaintainTime(const Model::ModifyInstanceMaintainTimeRequest &request)const;
			void modifyInstanceMaintainTimeAsync(const Model::ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceMaintainTimeOutcomeCallable modifyInstanceMaintainTimeCallable(const Model::ModifyInstanceMaintainTimeRequest& request) const;
			ModifyInstanceNameOutcome modifyInstanceName(const Model::ModifyInstanceNameRequest &request)const;
			void modifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceNameOutcomeCallable modifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request) const;
			ModifyInstanceServiceConfigOutcome modifyInstanceServiceConfig(const Model::ModifyInstanceServiceConfigRequest &request)const;
			void modifyInstanceServiceConfigAsync(const Model::ModifyInstanceServiceConfigRequest& request, const ModifyInstanceServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceServiceConfigOutcomeCallable modifyInstanceServiceConfigCallable(const Model::ModifyInstanceServiceConfigRequest& request) const;
			ModifyInstanceTypeOutcome modifyInstanceType(const Model::ModifyInstanceTypeRequest &request)const;
			void modifyInstanceTypeAsync(const Model::ModifyInstanceTypeRequest& request, const ModifyInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceTypeOutcomeCallable modifyInstanceTypeCallable(const Model::ModifyInstanceTypeRequest& request) const;
			ModifyIpWhitelistOutcome modifyIpWhitelist(const Model::ModifyIpWhitelistRequest &request)const;
			void modifyIpWhitelistAsync(const Model::ModifyIpWhitelistRequest& request, const ModifyIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpWhitelistOutcomeCallable modifyIpWhitelistCallable(const Model::ModifyIpWhitelistRequest& request) const;
			ModifyMultiZoneClusterNodeTypeOutcome modifyMultiZoneClusterNodeType(const Model::ModifyMultiZoneClusterNodeTypeRequest &request)const;
			void modifyMultiZoneClusterNodeTypeAsync(const Model::ModifyMultiZoneClusterNodeTypeRequest& request, const ModifyMultiZoneClusterNodeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMultiZoneClusterNodeTypeOutcomeCallable modifyMultiZoneClusterNodeTypeCallable(const Model::ModifyMultiZoneClusterNodeTypeRequest& request) const;
			ModifySecurityGroupsOutcome modifySecurityGroups(const Model::ModifySecurityGroupsRequest &request)const;
			void modifySecurityGroupsAsync(const Model::ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupsOutcomeCallable modifySecurityGroupsCallable(const Model::ModifySecurityGroupsRequest& request) const;
			ModifyUIAccountPasswordOutcome modifyUIAccountPassword(const Model::ModifyUIAccountPasswordRequest &request)const;
			void modifyUIAccountPasswordAsync(const Model::ModifyUIAccountPasswordRequest& request, const ModifyUIAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUIAccountPasswordOutcomeCallable modifyUIAccountPasswordCallable(const Model::ModifyUIAccountPasswordRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			OpenBackupOutcome openBackup(const Model::OpenBackupRequest &request)const;
			void openBackupAsync(const Model::OpenBackupRequest& request, const OpenBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenBackupOutcomeCallable openBackupCallable(const Model::OpenBackupRequest& request) const;
			PurgeInstanceOutcome purgeInstance(const Model::PurgeInstanceRequest &request)const;
			void purgeInstanceAsync(const Model::PurgeInstanceRequest& request, const PurgeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PurgeInstanceOutcomeCallable purgeInstanceCallable(const Model::PurgeInstanceRequest& request) const;
			QueryHBaseHaDBOutcome queryHBaseHaDB(const Model::QueryHBaseHaDBRequest &request)const;
			void queryHBaseHaDBAsync(const Model::QueryHBaseHaDBRequest& request, const QueryHBaseHaDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryHBaseHaDBOutcomeCallable queryHBaseHaDBCallable(const Model::QueryHBaseHaDBRequest& request) const;
			QueryXpackRelateDBOutcome queryXpackRelateDB(const Model::QueryXpackRelateDBRequest &request)const;
			void queryXpackRelateDBAsync(const Model::QueryXpackRelateDBRequest& request, const QueryXpackRelateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryXpackRelateDBOutcomeCallable queryXpackRelateDBCallable(const Model::QueryXpackRelateDBRequest& request) const;
			RelateDbForHBaseHaOutcome relateDbForHBaseHa(const Model::RelateDbForHBaseHaRequest &request)const;
			void relateDbForHBaseHaAsync(const Model::RelateDbForHBaseHaRequest& request, const RelateDbForHBaseHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RelateDbForHBaseHaOutcomeCallable relateDbForHBaseHaCallable(const Model::RelateDbForHBaseHaRequest& request) const;
			ReleasePublicNetworkAddressOutcome releasePublicNetworkAddress(const Model::ReleasePublicNetworkAddressRequest &request)const;
			void releasePublicNetworkAddressAsync(const Model::ReleasePublicNetworkAddressRequest& request, const ReleasePublicNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleasePublicNetworkAddressOutcomeCallable releasePublicNetworkAddressCallable(const Model::ReleasePublicNetworkAddressRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			ResizeColdStorageSizeOutcome resizeColdStorageSize(const Model::ResizeColdStorageSizeRequest &request)const;
			void resizeColdStorageSizeAsync(const Model::ResizeColdStorageSizeRequest& request, const ResizeColdStorageSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeColdStorageSizeOutcomeCallable resizeColdStorageSizeCallable(const Model::ResizeColdStorageSizeRequest& request) const;
			ResizeDiskSizeOutcome resizeDiskSize(const Model::ResizeDiskSizeRequest &request)const;
			void resizeDiskSizeAsync(const Model::ResizeDiskSizeRequest& request, const ResizeDiskSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeDiskSizeOutcomeCallable resizeDiskSizeCallable(const Model::ResizeDiskSizeRequest& request) const;
			ResizeMultiZoneClusterDiskSizeOutcome resizeMultiZoneClusterDiskSize(const Model::ResizeMultiZoneClusterDiskSizeRequest &request)const;
			void resizeMultiZoneClusterDiskSizeAsync(const Model::ResizeMultiZoneClusterDiskSizeRequest& request, const ResizeMultiZoneClusterDiskSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeMultiZoneClusterDiskSizeOutcomeCallable resizeMultiZoneClusterDiskSizeCallable(const Model::ResizeMultiZoneClusterDiskSizeRequest& request) const;
			ResizeMultiZoneClusterNodeCountOutcome resizeMultiZoneClusterNodeCount(const Model::ResizeMultiZoneClusterNodeCountRequest &request)const;
			void resizeMultiZoneClusterNodeCountAsync(const Model::ResizeMultiZoneClusterNodeCountRequest& request, const ResizeMultiZoneClusterNodeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeMultiZoneClusterNodeCountOutcomeCallable resizeMultiZoneClusterNodeCountCallable(const Model::ResizeMultiZoneClusterNodeCountRequest& request) const;
			ResizeNodeCountOutcome resizeNodeCount(const Model::ResizeNodeCountRequest &request)const;
			void resizeNodeCountAsync(const Model::ResizeNodeCountRequest& request, const ResizeNodeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeNodeCountOutcomeCallable resizeNodeCountCallable(const Model::ResizeNodeCountRequest& request) const;
			RestartInstanceOutcome restartInstance(const Model::RestartInstanceRequest &request)const;
			void restartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartInstanceOutcomeCallable restartInstanceCallable(const Model::RestartInstanceRequest& request) const;
			SwitchHbaseHaSlbOutcome switchHbaseHaSlb(const Model::SwitchHbaseHaSlbRequest &request)const;
			void switchHbaseHaSlbAsync(const Model::SwitchHbaseHaSlbRequest& request, const SwitchHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchHbaseHaSlbOutcomeCallable switchHbaseHaSlbCallable(const Model::SwitchHbaseHaSlbRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnTagResourcesOutcome unTagResources(const Model::UnTagResourcesRequest &request)const;
			void unTagResourcesAsync(const Model::UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnTagResourcesOutcomeCallable unTagResourcesCallable(const Model::UnTagResourcesRequest& request) const;
			UpgradeMinorVersionOutcome upgradeMinorVersion(const Model::UpgradeMinorVersionRequest &request)const;
			void upgradeMinorVersionAsync(const Model::UpgradeMinorVersionRequest& request, const UpgradeMinorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeMinorVersionOutcomeCallable upgradeMinorVersionCallable(const Model::UpgradeMinorVersionRequest& request) const;
			UpgradeMultiZoneClusterOutcome upgradeMultiZoneCluster(const Model::UpgradeMultiZoneClusterRequest &request)const;
			void upgradeMultiZoneClusterAsync(const Model::UpgradeMultiZoneClusterRequest& request, const UpgradeMultiZoneClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeMultiZoneClusterOutcomeCallable upgradeMultiZoneClusterCallable(const Model::UpgradeMultiZoneClusterRequest& request) const;
			XpackRelateDBOutcome xpackRelateDB(const Model::XpackRelateDBRequest &request)const;
			void xpackRelateDBAsync(const Model::XpackRelateDBRequest& request, const XpackRelateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			XpackRelateDBOutcomeCallable xpackRelateDBCallable(const Model::XpackRelateDBRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HBASE_HBASECLIENT_H_
