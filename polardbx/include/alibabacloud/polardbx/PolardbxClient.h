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

#ifndef ALIBABACLOUD_POLARDBX_POLARDBXCLIENT_H_
#define ALIBABACLOUD_POLARDBX_POLARDBXCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "PolardbxExport.h"
#include "model/AlignStoragePrimaryAzoneRequest.h"
#include "model/AlignStoragePrimaryAzoneResult.h"
#include "model/AllocateColdDataVolumeRequest.h"
#include "model/AllocateColdDataVolumeResult.h"
#include "model/AllocateInstancePublicConnectionRequest.h"
#include "model/AllocateInstancePublicConnectionResult.h"
#include "model/CancelActiveOperationTasksRequest.h"
#include "model/CancelActiveOperationTasksResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CheckCloudResourceAuthorizedRequest.h"
#include "model/CheckCloudResourceAuthorizedResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateBackupRequest.h"
#include "model/CreateBackupResult.h"
#include "model/CreateDBRequest.h"
#include "model/CreateDBResult.h"
#include "model/CreateDBInstanceRequest.h"
#include "model/CreateDBInstanceResult.h"
#include "model/CreateSuperAccountRequest.h"
#include "model/CreateSuperAccountResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteDBRequest.h"
#include "model/DeleteDBResult.h"
#include "model/DeleteDBInstanceRequest.h"
#include "model/DeleteDBInstanceResult.h"
#include "model/DescribeAccountListRequest.h"
#include "model/DescribeAccountListResult.h"
#include "model/DescribeActiveOperationMaintainConfRequest.h"
#include "model/DescribeActiveOperationMaintainConfResult.h"
#include "model/DescribeActiveOperationTaskCountRequest.h"
#include "model/DescribeActiveOperationTaskCountResult.h"
#include "model/DescribeActiveOperationTasksRequest.h"
#include "model/DescribeActiveOperationTasksResult.h"
#include "model/DescribeArchiveTableListRequest.h"
#include "model/DescribeArchiveTableListResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupSetRequest.h"
#include "model/DescribeBackupSetResult.h"
#include "model/DescribeBackupSetListRequest.h"
#include "model/DescribeBackupSetListResult.h"
#include "model/DescribeBinaryLogListRequest.h"
#include "model/DescribeBinaryLogListResult.h"
#include "model/DescribeCharacterSetRequest.h"
#include "model/DescribeCharacterSetResult.h"
#include "model/DescribeColdDataBasicInfoRequest.h"
#include "model/DescribeColdDataBasicInfoResult.h"
#include "model/DescribeDBInstanceAttributeRequest.h"
#include "model/DescribeDBInstanceAttributeResult.h"
#include "model/DescribeDBInstanceConfigRequest.h"
#include "model/DescribeDBInstanceConfigResult.h"
#include "model/DescribeDBInstanceHARequest.h"
#include "model/DescribeDBInstanceHAResult.h"
#include "model/DescribeDBInstanceSSLRequest.h"
#include "model/DescribeDBInstanceSSLResult.h"
#include "model/DescribeDBInstanceTDERequest.h"
#include "model/DescribeDBInstanceTDEResult.h"
#include "model/DescribeDBInstanceTopologyRequest.h"
#include "model/DescribeDBInstanceTopologyResult.h"
#include "model/DescribeDBInstanceViaEndpointRequest.h"
#include "model/DescribeDBInstanceViaEndpointResult.h"
#include "model/DescribeDBInstancesRequest.h"
#include "model/DescribeDBInstancesResult.h"
#include "model/DescribeDBNodePerformanceRequest.h"
#include "model/DescribeDBNodePerformanceResult.h"
#include "model/DescribeDbListRequest.h"
#include "model/DescribeDbListResult.h"
#include "model/DescribeDistributeTableListRequest.h"
#include "model/DescribeDistributeTableListResult.h"
#include "model/DescribeEventsRequest.h"
#include "model/DescribeEventsResult.h"
#include "model/DescribeParameterTemplatesRequest.h"
#include "model/DescribeParameterTemplatesResult.h"
#include "model/DescribeParametersRequest.h"
#include "model/DescribeParametersResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeScaleOutMigrateTaskListRequest.h"
#include "model/DescribeScaleOutMigrateTaskListResult.h"
#include "model/DescribeSecurityIpsRequest.h"
#include "model/DescribeSecurityIpsResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DescribeTasksRequest.h"
#include "model/DescribeTasksResult.h"
#include "model/DescribeUserEncryptionKeyListRequest.h"
#include "model/DescribeUserEncryptionKeyListResult.h"
#include "model/DisableRightsSeparationRequest.h"
#include "model/DisableRightsSeparationResult.h"
#include "model/EnableRightsSeparationRequest.h"
#include "model/EnableRightsSeparationResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAccountPrivilegeRequest.h"
#include "model/ModifyAccountPrivilegeResult.h"
#include "model/ModifyActiveOperationMaintainConfRequest.h"
#include "model/ModifyActiveOperationMaintainConfResult.h"
#include "model/ModifyActiveOperationTasksRequest.h"
#include "model/ModifyActiveOperationTasksResult.h"
#include "model/ModifyDBInstanceClassRequest.h"
#include "model/ModifyDBInstanceClassResult.h"
#include "model/ModifyDBInstanceConfigRequest.h"
#include "model/ModifyDBInstanceConfigResult.h"
#include "model/ModifyDBInstanceConnectionStringRequest.h"
#include "model/ModifyDBInstanceConnectionStringResult.h"
#include "model/ModifyDBInstanceDescriptionRequest.h"
#include "model/ModifyDBInstanceDescriptionResult.h"
#include "model/ModifyDatabaseDescriptionRequest.h"
#include "model/ModifyDatabaseDescriptionResult.h"
#include "model/ModifyParameterRequest.h"
#include "model/ModifyParameterResult.h"
#include "model/ModifySecurityIpsRequest.h"
#include "model/ModifySecurityIpsResult.h"
#include "model/ReleaseColdDataVolumeRequest.h"
#include "model/ReleaseColdDataVolumeResult.h"
#include "model/ReleaseInstancePublicConnectionRequest.h"
#include "model/ReleaseInstancePublicConnectionResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/RestartDBInstanceRequest.h"
#include "model/RestartDBInstanceResult.h"
#include "model/SwitchDBInstanceHARequest.h"
#include "model/SwitchDBInstanceHAResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateBackupPolicyRequest.h"
#include "model/UpdateBackupPolicyResult.h"
#include "model/UpdateDBInstanceSSLRequest.h"
#include "model/UpdateDBInstanceSSLResult.h"
#include "model/UpdateDBInstanceTDERequest.h"
#include "model/UpdateDBInstanceTDEResult.h"
#include "model/UpdatePolarDBXInstanceNodeRequest.h"
#include "model/UpdatePolarDBXInstanceNodeResult.h"
#include "model/UpgradeDBInstanceKernelVersionRequest.h"
#include "model/UpgradeDBInstanceKernelVersionResult.h"


namespace AlibabaCloud
{
	namespace Polardbx
	{
		class ALIBABACLOUD_POLARDBX_EXPORT PolardbxClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AlignStoragePrimaryAzoneResult> AlignStoragePrimaryAzoneOutcome;
			typedef std::future<AlignStoragePrimaryAzoneOutcome> AlignStoragePrimaryAzoneOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::AlignStoragePrimaryAzoneRequest&, const AlignStoragePrimaryAzoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AlignStoragePrimaryAzoneAsyncHandler;
			typedef Outcome<Error, Model::AllocateColdDataVolumeResult> AllocateColdDataVolumeOutcome;
			typedef std::future<AllocateColdDataVolumeOutcome> AllocateColdDataVolumeOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::AllocateColdDataVolumeRequest&, const AllocateColdDataVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateColdDataVolumeAsyncHandler;
			typedef Outcome<Error, Model::AllocateInstancePublicConnectionResult> AllocateInstancePublicConnectionOutcome;
			typedef std::future<AllocateInstancePublicConnectionOutcome> AllocateInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::AllocateInstancePublicConnectionRequest&, const AllocateInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::CancelActiveOperationTasksResult> CancelActiveOperationTasksOutcome;
			typedef std::future<CancelActiveOperationTasksOutcome> CancelActiveOperationTasksOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CancelActiveOperationTasksRequest&, const CancelActiveOperationTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelActiveOperationTasksAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CheckCloudResourceAuthorizedResult> CheckCloudResourceAuthorizedOutcome;
			typedef std::future<CheckCloudResourceAuthorizedOutcome> CheckCloudResourceAuthorizedOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CheckCloudResourceAuthorizedRequest&, const CheckCloudResourceAuthorizedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCloudResourceAuthorizedAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupResult> CreateBackupOutcome;
			typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CreateBackupRequest&, const CreateBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
			typedef Outcome<Error, Model::CreateDBResult> CreateDBOutcome;
			typedef std::future<CreateDBOutcome> CreateDBOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CreateDBRequest&, const CreateDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceResult> CreateDBInstanceOutcome;
			typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CreateDBInstanceRequest&, const CreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateSuperAccountResult> CreateSuperAccountOutcome;
			typedef std::future<CreateSuperAccountOutcome> CreateSuperAccountOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::CreateSuperAccountRequest&, const CreateSuperAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSuperAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBResult> DeleteDBOutcome;
			typedef std::future<DeleteDBOutcome> DeleteDBOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DeleteDBRequest&, const DeleteDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstanceResult> DeleteDBInstanceOutcome;
			typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DeleteDBInstanceRequest&, const DeleteDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountListResult> DescribeAccountListOutcome;
			typedef std::future<DescribeAccountListOutcome> DescribeAccountListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeAccountListRequest&, const DescribeAccountListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountListAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationMaintainConfResult> DescribeActiveOperationMaintainConfOutcome;
			typedef std::future<DescribeActiveOperationMaintainConfOutcome> DescribeActiveOperationMaintainConfOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeActiveOperationMaintainConfRequest&, const DescribeActiveOperationMaintainConfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationMaintainConfAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTaskCountResult> DescribeActiveOperationTaskCountOutcome;
			typedef std::future<DescribeActiveOperationTaskCountOutcome> DescribeActiveOperationTaskCountOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeActiveOperationTaskCountRequest&, const DescribeActiveOperationTaskCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTaskCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeActiveOperationTasksResult> DescribeActiveOperationTasksOutcome;
			typedef std::future<DescribeActiveOperationTasksOutcome> DescribeActiveOperationTasksOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeActiveOperationTasksRequest&, const DescribeActiveOperationTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveOperationTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeArchiveTableListResult> DescribeArchiveTableListOutcome;
			typedef std::future<DescribeArchiveTableListOutcome> DescribeArchiveTableListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeArchiveTableListRequest&, const DescribeArchiveTableListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeArchiveTableListAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupSetResult> DescribeBackupSetOutcome;
			typedef std::future<DescribeBackupSetOutcome> DescribeBackupSetOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeBackupSetRequest&, const DescribeBackupSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSetAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupSetListResult> DescribeBackupSetListOutcome;
			typedef std::future<DescribeBackupSetListOutcome> DescribeBackupSetListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeBackupSetListRequest&, const DescribeBackupSetListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSetListAsyncHandler;
			typedef Outcome<Error, Model::DescribeBinaryLogListResult> DescribeBinaryLogListOutcome;
			typedef std::future<DescribeBinaryLogListOutcome> DescribeBinaryLogListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeBinaryLogListRequest&, const DescribeBinaryLogListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinaryLogListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCharacterSetResult> DescribeCharacterSetOutcome;
			typedef std::future<DescribeCharacterSetOutcome> DescribeCharacterSetOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeCharacterSetRequest&, const DescribeCharacterSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCharacterSetAsyncHandler;
			typedef Outcome<Error, Model::DescribeColdDataBasicInfoResult> DescribeColdDataBasicInfoOutcome;
			typedef std::future<DescribeColdDataBasicInfoOutcome> DescribeColdDataBasicInfoOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeColdDataBasicInfoRequest&, const DescribeColdDataBasicInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColdDataBasicInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceAttributeResult> DescribeDBInstanceAttributeOutcome;
			typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstanceAttributeRequest&, const DescribeDBInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceConfigResult> DescribeDBInstanceConfigOutcome;
			typedef std::future<DescribeDBInstanceConfigOutcome> DescribeDBInstanceConfigOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstanceConfigRequest&, const DescribeDBInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceHAResult> DescribeDBInstanceHAOutcome;
			typedef std::future<DescribeDBInstanceHAOutcome> DescribeDBInstanceHAOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstanceHARequest&, const DescribeDBInstanceHAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceHAAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceSSLResult> DescribeDBInstanceSSLOutcome;
			typedef std::future<DescribeDBInstanceSSLOutcome> DescribeDBInstanceSSLOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstanceSSLRequest&, const DescribeDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceTDEResult> DescribeDBInstanceTDEOutcome;
			typedef std::future<DescribeDBInstanceTDEOutcome> DescribeDBInstanceTDEOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstanceTDERequest&, const DescribeDBInstanceTDEOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceTDEAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceTopologyResult> DescribeDBInstanceTopologyOutcome;
			typedef std::future<DescribeDBInstanceTopologyOutcome> DescribeDBInstanceTopologyOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstanceTopologyRequest&, const DescribeDBInstanceTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceTopologyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceViaEndpointResult> DescribeDBInstanceViaEndpointOutcome;
			typedef std::future<DescribeDBInstanceViaEndpointOutcome> DescribeDBInstanceViaEndpointOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstanceViaEndpointRequest&, const DescribeDBInstanceViaEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceViaEndpointAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesResult> DescribeDBInstancesOutcome;
			typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBInstancesRequest&, const DescribeDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBNodePerformanceResult> DescribeDBNodePerformanceOutcome;
			typedef std::future<DescribeDBNodePerformanceOutcome> DescribeDBNodePerformanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDBNodePerformanceRequest&, const DescribeDBNodePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBNodePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDbListResult> DescribeDbListOutcome;
			typedef std::future<DescribeDbListOutcome> DescribeDbListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDbListRequest&, const DescribeDbListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDistributeTableListResult> DescribeDistributeTableListOutcome;
			typedef std::future<DescribeDistributeTableListOutcome> DescribeDistributeTableListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeDistributeTableListRequest&, const DescribeDistributeTableListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDistributeTableListAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventsResult> DescribeEventsOutcome;
			typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeEventsRequest&, const DescribeEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeParameterTemplatesResult> DescribeParameterTemplatesOutcome;
			typedef std::future<DescribeParameterTemplatesOutcome> DescribeParameterTemplatesOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeParameterTemplatesRequest&, const DescribeParameterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParameterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeParametersResult> DescribeParametersOutcome;
			typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeParametersRequest&, const DescribeParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScaleOutMigrateTaskListResult> DescribeScaleOutMigrateTaskListOutcome;
			typedef std::future<DescribeScaleOutMigrateTaskListOutcome> DescribeScaleOutMigrateTaskListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeScaleOutMigrateTaskListRequest&, const DescribeScaleOutMigrateTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScaleOutMigrateTaskListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityIpsResult> DescribeSecurityIpsOutcome;
			typedef std::future<DescribeSecurityIpsOutcome> DescribeSecurityIpsOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeSecurityIpsRequest&, const DescribeSecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTasksResult> DescribeTasksOutcome;
			typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeTasksRequest&, const DescribeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserEncryptionKeyListResult> DescribeUserEncryptionKeyListOutcome;
			typedef std::future<DescribeUserEncryptionKeyListOutcome> DescribeUserEncryptionKeyListOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DescribeUserEncryptionKeyListRequest&, const DescribeUserEncryptionKeyListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserEncryptionKeyListAsyncHandler;
			typedef Outcome<Error, Model::DisableRightsSeparationResult> DisableRightsSeparationOutcome;
			typedef std::future<DisableRightsSeparationOutcome> DisableRightsSeparationOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::DisableRightsSeparationRequest&, const DisableRightsSeparationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableRightsSeparationAsyncHandler;
			typedef Outcome<Error, Model::EnableRightsSeparationResult> EnableRightsSeparationOutcome;
			typedef std::future<EnableRightsSeparationOutcome> EnableRightsSeparationOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::EnableRightsSeparationRequest&, const EnableRightsSeparationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableRightsSeparationAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountPrivilegeResult> ModifyAccountPrivilegeOutcome;
			typedef std::future<ModifyAccountPrivilegeOutcome> ModifyAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyAccountPrivilegeRequest&, const ModifyAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::ModifyActiveOperationMaintainConfResult> ModifyActiveOperationMaintainConfOutcome;
			typedef std::future<ModifyActiveOperationMaintainConfOutcome> ModifyActiveOperationMaintainConfOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyActiveOperationMaintainConfRequest&, const ModifyActiveOperationMaintainConfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyActiveOperationMaintainConfAsyncHandler;
			typedef Outcome<Error, Model::ModifyActiveOperationTasksResult> ModifyActiveOperationTasksOutcome;
			typedef std::future<ModifyActiveOperationTasksOutcome> ModifyActiveOperationTasksOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyActiveOperationTasksRequest&, const ModifyActiveOperationTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyActiveOperationTasksAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceClassResult> ModifyDBInstanceClassOutcome;
			typedef std::future<ModifyDBInstanceClassOutcome> ModifyDBInstanceClassOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyDBInstanceClassRequest&, const ModifyDBInstanceClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceClassAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConfigResult> ModifyDBInstanceConfigOutcome;
			typedef std::future<ModifyDBInstanceConfigOutcome> ModifyDBInstanceConfigOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyDBInstanceConfigRequest&, const ModifyDBInstanceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionStringResult> ModifyDBInstanceConnectionStringOutcome;
			typedef std::future<ModifyDBInstanceConnectionStringOutcome> ModifyDBInstanceConnectionStringOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyDBInstanceConnectionStringRequest&, const ModifyDBInstanceConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceDescriptionResult> ModifyDBInstanceDescriptionOutcome;
			typedef std::future<ModifyDBInstanceDescriptionOutcome> ModifyDBInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyDBInstanceDescriptionRequest&, const ModifyDBInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatabaseDescriptionResult> ModifyDatabaseDescriptionOutcome;
			typedef std::future<ModifyDatabaseDescriptionOutcome> ModifyDatabaseDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyDatabaseDescriptionRequest&, const ModifyDatabaseDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyParameterResult> ModifyParameterOutcome;
			typedef std::future<ModifyParameterOutcome> ModifyParameterOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifyParameterRequest&, const ModifyParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParameterAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIpsResult> ModifySecurityIpsOutcome;
			typedef std::future<ModifySecurityIpsOutcome> ModifySecurityIpsOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ModifySecurityIpsRequest&, const ModifySecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::ReleaseColdDataVolumeResult> ReleaseColdDataVolumeOutcome;
			typedef std::future<ReleaseColdDataVolumeOutcome> ReleaseColdDataVolumeOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ReleaseColdDataVolumeRequest&, const ReleaseColdDataVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseColdDataVolumeAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstancePublicConnectionResult> ReleaseInstancePublicConnectionOutcome;
			typedef std::future<ReleaseInstancePublicConnectionOutcome> ReleaseInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ReleaseInstancePublicConnectionRequest&, const ReleaseInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestartDBInstanceResult> RestartDBInstanceOutcome;
			typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::RestartDBInstanceRequest&, const RestartDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceHAResult> SwitchDBInstanceHAOutcome;
			typedef std::future<SwitchDBInstanceHAOutcome> SwitchDBInstanceHAOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::SwitchDBInstanceHARequest&, const SwitchDBInstanceHAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceHAAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateBackupPolicyResult> UpdateBackupPolicyOutcome;
			typedef std::future<UpdateBackupPolicyOutcome> UpdateBackupPolicyOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::UpdateBackupPolicyRequest&, const UpdateBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateDBInstanceSSLResult> UpdateDBInstanceSSLOutcome;
			typedef std::future<UpdateDBInstanceSSLOutcome> UpdateDBInstanceSSLOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::UpdateDBInstanceSSLRequest&, const UpdateDBInstanceSSLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDBInstanceSSLAsyncHandler;
			typedef Outcome<Error, Model::UpdateDBInstanceTDEResult> UpdateDBInstanceTDEOutcome;
			typedef std::future<UpdateDBInstanceTDEOutcome> UpdateDBInstanceTDEOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::UpdateDBInstanceTDERequest&, const UpdateDBInstanceTDEOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDBInstanceTDEAsyncHandler;
			typedef Outcome<Error, Model::UpdatePolarDBXInstanceNodeResult> UpdatePolarDBXInstanceNodeOutcome;
			typedef std::future<UpdatePolarDBXInstanceNodeOutcome> UpdatePolarDBXInstanceNodeOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::UpdatePolarDBXInstanceNodeRequest&, const UpdatePolarDBXInstanceNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePolarDBXInstanceNodeAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceKernelVersionResult> UpgradeDBInstanceKernelVersionOutcome;
			typedef std::future<UpgradeDBInstanceKernelVersionOutcome> UpgradeDBInstanceKernelVersionOutcomeCallable;
			typedef std::function<void(const PolardbxClient*, const Model::UpgradeDBInstanceKernelVersionRequest&, const UpgradeDBInstanceKernelVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceKernelVersionAsyncHandler;

			PolardbxClient(const Credentials &credentials, const ClientConfiguration &configuration);
			PolardbxClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			PolardbxClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~PolardbxClient();
			AlignStoragePrimaryAzoneOutcome alignStoragePrimaryAzone(const Model::AlignStoragePrimaryAzoneRequest &request)const;
			void alignStoragePrimaryAzoneAsync(const Model::AlignStoragePrimaryAzoneRequest& request, const AlignStoragePrimaryAzoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AlignStoragePrimaryAzoneOutcomeCallable alignStoragePrimaryAzoneCallable(const Model::AlignStoragePrimaryAzoneRequest& request) const;
			AllocateColdDataVolumeOutcome allocateColdDataVolume(const Model::AllocateColdDataVolumeRequest &request)const;
			void allocateColdDataVolumeAsync(const Model::AllocateColdDataVolumeRequest& request, const AllocateColdDataVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateColdDataVolumeOutcomeCallable allocateColdDataVolumeCallable(const Model::AllocateColdDataVolumeRequest& request) const;
			AllocateInstancePublicConnectionOutcome allocateInstancePublicConnection(const Model::AllocateInstancePublicConnectionRequest &request)const;
			void allocateInstancePublicConnectionAsync(const Model::AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateInstancePublicConnectionOutcomeCallable allocateInstancePublicConnectionCallable(const Model::AllocateInstancePublicConnectionRequest& request) const;
			CancelActiveOperationTasksOutcome cancelActiveOperationTasks(const Model::CancelActiveOperationTasksRequest &request)const;
			void cancelActiveOperationTasksAsync(const Model::CancelActiveOperationTasksRequest& request, const CancelActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelActiveOperationTasksOutcomeCallable cancelActiveOperationTasksCallable(const Model::CancelActiveOperationTasksRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CheckCloudResourceAuthorizedOutcome checkCloudResourceAuthorized(const Model::CheckCloudResourceAuthorizedRequest &request)const;
			void checkCloudResourceAuthorizedAsync(const Model::CheckCloudResourceAuthorizedRequest& request, const CheckCloudResourceAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCloudResourceAuthorizedOutcomeCallable checkCloudResourceAuthorizedCallable(const Model::CheckCloudResourceAuthorizedRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateBackupOutcome createBackup(const Model::CreateBackupRequest &request)const;
			void createBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupOutcomeCallable createBackupCallable(const Model::CreateBackupRequest& request) const;
			CreateDBOutcome createDB(const Model::CreateDBRequest &request)const;
			void createDBAsync(const Model::CreateDBRequest& request, const CreateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBOutcomeCallable createDBCallable(const Model::CreateDBRequest& request) const;
			CreateDBInstanceOutcome createDBInstance(const Model::CreateDBInstanceRequest &request)const;
			void createDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceOutcomeCallable createDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;
			CreateSuperAccountOutcome createSuperAccount(const Model::CreateSuperAccountRequest &request)const;
			void createSuperAccountAsync(const Model::CreateSuperAccountRequest& request, const CreateSuperAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSuperAccountOutcomeCallable createSuperAccountCallable(const Model::CreateSuperAccountRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteDBOutcome deleteDB(const Model::DeleteDBRequest &request)const;
			void deleteDBAsync(const Model::DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBOutcomeCallable deleteDBCallable(const Model::DeleteDBRequest& request) const;
			DeleteDBInstanceOutcome deleteDBInstance(const Model::DeleteDBInstanceRequest &request)const;
			void deleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstanceOutcomeCallable deleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;
			DescribeAccountListOutcome describeAccountList(const Model::DescribeAccountListRequest &request)const;
			void describeAccountListAsync(const Model::DescribeAccountListRequest& request, const DescribeAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountListOutcomeCallable describeAccountListCallable(const Model::DescribeAccountListRequest& request) const;
			DescribeActiveOperationMaintainConfOutcome describeActiveOperationMaintainConf(const Model::DescribeActiveOperationMaintainConfRequest &request)const;
			void describeActiveOperationMaintainConfAsync(const Model::DescribeActiveOperationMaintainConfRequest& request, const DescribeActiveOperationMaintainConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationMaintainConfOutcomeCallable describeActiveOperationMaintainConfCallable(const Model::DescribeActiveOperationMaintainConfRequest& request) const;
			DescribeActiveOperationTaskCountOutcome describeActiveOperationTaskCount(const Model::DescribeActiveOperationTaskCountRequest &request)const;
			void describeActiveOperationTaskCountAsync(const Model::DescribeActiveOperationTaskCountRequest& request, const DescribeActiveOperationTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTaskCountOutcomeCallable describeActiveOperationTaskCountCallable(const Model::DescribeActiveOperationTaskCountRequest& request) const;
			DescribeActiveOperationTasksOutcome describeActiveOperationTasks(const Model::DescribeActiveOperationTasksRequest &request)const;
			void describeActiveOperationTasksAsync(const Model::DescribeActiveOperationTasksRequest& request, const DescribeActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeActiveOperationTasksOutcomeCallable describeActiveOperationTasksCallable(const Model::DescribeActiveOperationTasksRequest& request) const;
			DescribeArchiveTableListOutcome describeArchiveTableList(const Model::DescribeArchiveTableListRequest &request)const;
			void describeArchiveTableListAsync(const Model::DescribeArchiveTableListRequest& request, const DescribeArchiveTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeArchiveTableListOutcomeCallable describeArchiveTableListCallable(const Model::DescribeArchiveTableListRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupSetOutcome describeBackupSet(const Model::DescribeBackupSetRequest &request)const;
			void describeBackupSetAsync(const Model::DescribeBackupSetRequest& request, const DescribeBackupSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupSetOutcomeCallable describeBackupSetCallable(const Model::DescribeBackupSetRequest& request) const;
			DescribeBackupSetListOutcome describeBackupSetList(const Model::DescribeBackupSetListRequest &request)const;
			void describeBackupSetListAsync(const Model::DescribeBackupSetListRequest& request, const DescribeBackupSetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupSetListOutcomeCallable describeBackupSetListCallable(const Model::DescribeBackupSetListRequest& request) const;
			DescribeBinaryLogListOutcome describeBinaryLogList(const Model::DescribeBinaryLogListRequest &request)const;
			void describeBinaryLogListAsync(const Model::DescribeBinaryLogListRequest& request, const DescribeBinaryLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBinaryLogListOutcomeCallable describeBinaryLogListCallable(const Model::DescribeBinaryLogListRequest& request) const;
			DescribeCharacterSetOutcome describeCharacterSet(const Model::DescribeCharacterSetRequest &request)const;
			void describeCharacterSetAsync(const Model::DescribeCharacterSetRequest& request, const DescribeCharacterSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCharacterSetOutcomeCallable describeCharacterSetCallable(const Model::DescribeCharacterSetRequest& request) const;
			DescribeColdDataBasicInfoOutcome describeColdDataBasicInfo(const Model::DescribeColdDataBasicInfoRequest &request)const;
			void describeColdDataBasicInfoAsync(const Model::DescribeColdDataBasicInfoRequest& request, const DescribeColdDataBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeColdDataBasicInfoOutcomeCallable describeColdDataBasicInfoCallable(const Model::DescribeColdDataBasicInfoRequest& request) const;
			DescribeDBInstanceAttributeOutcome describeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request)const;
			void describeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceAttributeOutcomeCallable describeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request) const;
			DescribeDBInstanceConfigOutcome describeDBInstanceConfig(const Model::DescribeDBInstanceConfigRequest &request)const;
			void describeDBInstanceConfigAsync(const Model::DescribeDBInstanceConfigRequest& request, const DescribeDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceConfigOutcomeCallable describeDBInstanceConfigCallable(const Model::DescribeDBInstanceConfigRequest& request) const;
			DescribeDBInstanceHAOutcome describeDBInstanceHA(const Model::DescribeDBInstanceHARequest &request)const;
			void describeDBInstanceHAAsync(const Model::DescribeDBInstanceHARequest& request, const DescribeDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceHAOutcomeCallable describeDBInstanceHACallable(const Model::DescribeDBInstanceHARequest& request) const;
			DescribeDBInstanceSSLOutcome describeDBInstanceSSL(const Model::DescribeDBInstanceSSLRequest &request)const;
			void describeDBInstanceSSLAsync(const Model::DescribeDBInstanceSSLRequest& request, const DescribeDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceSSLOutcomeCallable describeDBInstanceSSLCallable(const Model::DescribeDBInstanceSSLRequest& request) const;
			DescribeDBInstanceTDEOutcome describeDBInstanceTDE(const Model::DescribeDBInstanceTDERequest &request)const;
			void describeDBInstanceTDEAsync(const Model::DescribeDBInstanceTDERequest& request, const DescribeDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceTDEOutcomeCallable describeDBInstanceTDECallable(const Model::DescribeDBInstanceTDERequest& request) const;
			DescribeDBInstanceTopologyOutcome describeDBInstanceTopology(const Model::DescribeDBInstanceTopologyRequest &request)const;
			void describeDBInstanceTopologyAsync(const Model::DescribeDBInstanceTopologyRequest& request, const DescribeDBInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceTopologyOutcomeCallable describeDBInstanceTopologyCallable(const Model::DescribeDBInstanceTopologyRequest& request) const;
			DescribeDBInstanceViaEndpointOutcome describeDBInstanceViaEndpoint(const Model::DescribeDBInstanceViaEndpointRequest &request)const;
			void describeDBInstanceViaEndpointAsync(const Model::DescribeDBInstanceViaEndpointRequest& request, const DescribeDBInstanceViaEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceViaEndpointOutcomeCallable describeDBInstanceViaEndpointCallable(const Model::DescribeDBInstanceViaEndpointRequest& request) const;
			DescribeDBInstancesOutcome describeDBInstances(const Model::DescribeDBInstancesRequest &request)const;
			void describeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesOutcomeCallable describeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;
			DescribeDBNodePerformanceOutcome describeDBNodePerformance(const Model::DescribeDBNodePerformanceRequest &request)const;
			void describeDBNodePerformanceAsync(const Model::DescribeDBNodePerformanceRequest& request, const DescribeDBNodePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBNodePerformanceOutcomeCallable describeDBNodePerformanceCallable(const Model::DescribeDBNodePerformanceRequest& request) const;
			DescribeDbListOutcome describeDbList(const Model::DescribeDbListRequest &request)const;
			void describeDbListAsync(const Model::DescribeDbListRequest& request, const DescribeDbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDbListOutcomeCallable describeDbListCallable(const Model::DescribeDbListRequest& request) const;
			DescribeDistributeTableListOutcome describeDistributeTableList(const Model::DescribeDistributeTableListRequest &request)const;
			void describeDistributeTableListAsync(const Model::DescribeDistributeTableListRequest& request, const DescribeDistributeTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDistributeTableListOutcomeCallable describeDistributeTableListCallable(const Model::DescribeDistributeTableListRequest& request) const;
			DescribeEventsOutcome describeEvents(const Model::DescribeEventsRequest &request)const;
			void describeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventsOutcomeCallable describeEventsCallable(const Model::DescribeEventsRequest& request) const;
			DescribeParameterTemplatesOutcome describeParameterTemplates(const Model::DescribeParameterTemplatesRequest &request)const;
			void describeParameterTemplatesAsync(const Model::DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParameterTemplatesOutcomeCallable describeParameterTemplatesCallable(const Model::DescribeParameterTemplatesRequest& request) const;
			DescribeParametersOutcome describeParameters(const Model::DescribeParametersRequest &request)const;
			void describeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParametersOutcomeCallable describeParametersCallable(const Model::DescribeParametersRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeScaleOutMigrateTaskListOutcome describeScaleOutMigrateTaskList(const Model::DescribeScaleOutMigrateTaskListRequest &request)const;
			void describeScaleOutMigrateTaskListAsync(const Model::DescribeScaleOutMigrateTaskListRequest& request, const DescribeScaleOutMigrateTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScaleOutMigrateTaskListOutcomeCallable describeScaleOutMigrateTaskListCallable(const Model::DescribeScaleOutMigrateTaskListRequest& request) const;
			DescribeSecurityIpsOutcome describeSecurityIps(const Model::DescribeSecurityIpsRequest &request)const;
			void describeSecurityIpsAsync(const Model::DescribeSecurityIpsRequest& request, const DescribeSecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityIpsOutcomeCallable describeSecurityIpsCallable(const Model::DescribeSecurityIpsRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DescribeTasksOutcome describeTasks(const Model::DescribeTasksRequest &request)const;
			void describeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTasksOutcomeCallable describeTasksCallable(const Model::DescribeTasksRequest& request) const;
			DescribeUserEncryptionKeyListOutcome describeUserEncryptionKeyList(const Model::DescribeUserEncryptionKeyListRequest &request)const;
			void describeUserEncryptionKeyListAsync(const Model::DescribeUserEncryptionKeyListRequest& request, const DescribeUserEncryptionKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserEncryptionKeyListOutcomeCallable describeUserEncryptionKeyListCallable(const Model::DescribeUserEncryptionKeyListRequest& request) const;
			DisableRightsSeparationOutcome disableRightsSeparation(const Model::DisableRightsSeparationRequest &request)const;
			void disableRightsSeparationAsync(const Model::DisableRightsSeparationRequest& request, const DisableRightsSeparationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableRightsSeparationOutcomeCallable disableRightsSeparationCallable(const Model::DisableRightsSeparationRequest& request) const;
			EnableRightsSeparationOutcome enableRightsSeparation(const Model::EnableRightsSeparationRequest &request)const;
			void enableRightsSeparationAsync(const Model::EnableRightsSeparationRequest& request, const EnableRightsSeparationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableRightsSeparationOutcomeCallable enableRightsSeparationCallable(const Model::EnableRightsSeparationRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAccountPrivilegeOutcome modifyAccountPrivilege(const Model::ModifyAccountPrivilegeRequest &request)const;
			void modifyAccountPrivilegeAsync(const Model::ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountPrivilegeOutcomeCallable modifyAccountPrivilegeCallable(const Model::ModifyAccountPrivilegeRequest& request) const;
			ModifyActiveOperationMaintainConfOutcome modifyActiveOperationMaintainConf(const Model::ModifyActiveOperationMaintainConfRequest &request)const;
			void modifyActiveOperationMaintainConfAsync(const Model::ModifyActiveOperationMaintainConfRequest& request, const ModifyActiveOperationMaintainConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyActiveOperationMaintainConfOutcomeCallable modifyActiveOperationMaintainConfCallable(const Model::ModifyActiveOperationMaintainConfRequest& request) const;
			ModifyActiveOperationTasksOutcome modifyActiveOperationTasks(const Model::ModifyActiveOperationTasksRequest &request)const;
			void modifyActiveOperationTasksAsync(const Model::ModifyActiveOperationTasksRequest& request, const ModifyActiveOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyActiveOperationTasksOutcomeCallable modifyActiveOperationTasksCallable(const Model::ModifyActiveOperationTasksRequest& request) const;
			ModifyDBInstanceClassOutcome modifyDBInstanceClass(const Model::ModifyDBInstanceClassRequest &request)const;
			void modifyDBInstanceClassAsync(const Model::ModifyDBInstanceClassRequest& request, const ModifyDBInstanceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceClassOutcomeCallable modifyDBInstanceClassCallable(const Model::ModifyDBInstanceClassRequest& request) const;
			ModifyDBInstanceConfigOutcome modifyDBInstanceConfig(const Model::ModifyDBInstanceConfigRequest &request)const;
			void modifyDBInstanceConfigAsync(const Model::ModifyDBInstanceConfigRequest& request, const ModifyDBInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConfigOutcomeCallable modifyDBInstanceConfigCallable(const Model::ModifyDBInstanceConfigRequest& request) const;
			ModifyDBInstanceConnectionStringOutcome modifyDBInstanceConnectionString(const Model::ModifyDBInstanceConnectionStringRequest &request)const;
			void modifyDBInstanceConnectionStringAsync(const Model::ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConnectionStringOutcomeCallable modifyDBInstanceConnectionStringCallable(const Model::ModifyDBInstanceConnectionStringRequest& request) const;
			ModifyDBInstanceDescriptionOutcome modifyDBInstanceDescription(const Model::ModifyDBInstanceDescriptionRequest &request)const;
			void modifyDBInstanceDescriptionAsync(const Model::ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceDescriptionOutcomeCallable modifyDBInstanceDescriptionCallable(const Model::ModifyDBInstanceDescriptionRequest& request) const;
			ModifyDatabaseDescriptionOutcome modifyDatabaseDescription(const Model::ModifyDatabaseDescriptionRequest &request)const;
			void modifyDatabaseDescriptionAsync(const Model::ModifyDatabaseDescriptionRequest& request, const ModifyDatabaseDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatabaseDescriptionOutcomeCallable modifyDatabaseDescriptionCallable(const Model::ModifyDatabaseDescriptionRequest& request) const;
			ModifyParameterOutcome modifyParameter(const Model::ModifyParameterRequest &request)const;
			void modifyParameterAsync(const Model::ModifyParameterRequest& request, const ModifyParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyParameterOutcomeCallable modifyParameterCallable(const Model::ModifyParameterRequest& request) const;
			ModifySecurityIpsOutcome modifySecurityIps(const Model::ModifySecurityIpsRequest &request)const;
			void modifySecurityIpsAsync(const Model::ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityIpsOutcomeCallable modifySecurityIpsCallable(const Model::ModifySecurityIpsRequest& request) const;
			ReleaseColdDataVolumeOutcome releaseColdDataVolume(const Model::ReleaseColdDataVolumeRequest &request)const;
			void releaseColdDataVolumeAsync(const Model::ReleaseColdDataVolumeRequest& request, const ReleaseColdDataVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseColdDataVolumeOutcomeCallable releaseColdDataVolumeCallable(const Model::ReleaseColdDataVolumeRequest& request) const;
			ReleaseInstancePublicConnectionOutcome releaseInstancePublicConnection(const Model::ReleaseInstancePublicConnectionRequest &request)const;
			void releaseInstancePublicConnectionAsync(const Model::ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstancePublicConnectionOutcomeCallable releaseInstancePublicConnectionCallable(const Model::ReleaseInstancePublicConnectionRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			RestartDBInstanceOutcome restartDBInstance(const Model::RestartDBInstanceRequest &request)const;
			void restartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBInstanceOutcomeCallable restartDBInstanceCallable(const Model::RestartDBInstanceRequest& request) const;
			SwitchDBInstanceHAOutcome switchDBInstanceHA(const Model::SwitchDBInstanceHARequest &request)const;
			void switchDBInstanceHAAsync(const Model::SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDBInstanceHAOutcomeCallable switchDBInstanceHACallable(const Model::SwitchDBInstanceHARequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateBackupPolicyOutcome updateBackupPolicy(const Model::UpdateBackupPolicyRequest &request)const;
			void updateBackupPolicyAsync(const Model::UpdateBackupPolicyRequest& request, const UpdateBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBackupPolicyOutcomeCallable updateBackupPolicyCallable(const Model::UpdateBackupPolicyRequest& request) const;
			UpdateDBInstanceSSLOutcome updateDBInstanceSSL(const Model::UpdateDBInstanceSSLRequest &request)const;
			void updateDBInstanceSSLAsync(const Model::UpdateDBInstanceSSLRequest& request, const UpdateDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDBInstanceSSLOutcomeCallable updateDBInstanceSSLCallable(const Model::UpdateDBInstanceSSLRequest& request) const;
			UpdateDBInstanceTDEOutcome updateDBInstanceTDE(const Model::UpdateDBInstanceTDERequest &request)const;
			void updateDBInstanceTDEAsync(const Model::UpdateDBInstanceTDERequest& request, const UpdateDBInstanceTDEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDBInstanceTDEOutcomeCallable updateDBInstanceTDECallable(const Model::UpdateDBInstanceTDERequest& request) const;
			UpdatePolarDBXInstanceNodeOutcome updatePolarDBXInstanceNode(const Model::UpdatePolarDBXInstanceNodeRequest &request)const;
			void updatePolarDBXInstanceNodeAsync(const Model::UpdatePolarDBXInstanceNodeRequest& request, const UpdatePolarDBXInstanceNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePolarDBXInstanceNodeOutcomeCallable updatePolarDBXInstanceNodeCallable(const Model::UpdatePolarDBXInstanceNodeRequest& request) const;
			UpgradeDBInstanceKernelVersionOutcome upgradeDBInstanceKernelVersion(const Model::UpgradeDBInstanceKernelVersionRequest &request)const;
			void upgradeDBInstanceKernelVersionAsync(const Model::UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceKernelVersionOutcomeCallable upgradeDBInstanceKernelVersionCallable(const Model::UpgradeDBInstanceKernelVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_POLARDBX_POLARDBXCLIENT_H_
