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

#ifndef ALIBABACLOUD_ECD_ECDCLIENT_H_
#define ALIBABACLOUD_ECD_ECDCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EcdExport.h"
#include "model/ActivateOfficeSiteRequest.h"
#include "model/ActivateOfficeSiteResult.h"
#include "model/AddDevicesRequest.h"
#include "model/AddDevicesResult.h"
#include "model/AddFilePermissionRequest.h"
#include "model/AddFilePermissionResult.h"
#include "model/AddUserToDesktopGroupRequest.h"
#include "model/AddUserToDesktopGroupResult.h"
#include "model/ApplyAutoSnapshotPolicyRequest.h"
#include "model/ApplyAutoSnapshotPolicyResult.h"
#include "model/ApplyCoordinatePrivilegeRequest.h"
#include "model/ApplyCoordinatePrivilegeResult.h"
#include "model/ApplyCoordinationForMonitoringRequest.h"
#include "model/ApplyCoordinationForMonitoringResult.h"
#include "model/ApproveFotaUpdateRequest.h"
#include "model/ApproveFotaUpdateResult.h"
#include "model/AssociateNetworkPackageRequest.h"
#include "model/AssociateNetworkPackageResult.h"
#include "model/AttachCenRequest.h"
#include "model/AttachCenResult.h"
#include "model/AttachEndUserRequest.h"
#include "model/AttachEndUserResult.h"
#include "model/CancelAutoSnapshotPolicyRequest.h"
#include "model/CancelAutoSnapshotPolicyResult.h"
#include "model/CancelCdsFileShareLinkRequest.h"
#include "model/CancelCdsFileShareLinkResult.h"
#include "model/CancelCoordinationForMonitoringRequest.h"
#include "model/CancelCoordinationForMonitoringResult.h"
#include "model/CancelCopyImageRequest.h"
#include "model/CancelCopyImageResult.h"
#include "model/ClonePolicyGroupRequest.h"
#include "model/ClonePolicyGroupResult.h"
#include "model/CompleteCdsFileRequest.h"
#include "model/CompleteCdsFileResult.h"
#include "model/ConfigADConnectorTrustRequest.h"
#include "model/ConfigADConnectorTrustResult.h"
#include "model/ConfigADConnectorUserRequest.h"
#include "model/ConfigADConnectorUserResult.h"
#include "model/CopyCdsFileRequest.h"
#include "model/CopyCdsFileResult.h"
#include "model/CopyImageRequest.h"
#include "model/CopyImageResult.h"
#include "model/CreateADConnectorDirectoryRequest.h"
#include "model/CreateADConnectorDirectoryResult.h"
#include "model/CreateADConnectorOfficeSiteRequest.h"
#include "model/CreateADConnectorOfficeSiteResult.h"
#include "model/CreateAndBindNasFileSystemRequest.h"
#include "model/CreateAndBindNasFileSystemResult.h"
#include "model/CreateAutoSnapshotPolicyRequest.h"
#include "model/CreateAutoSnapshotPolicyResult.h"
#include "model/CreateBundleRequest.h"
#include "model/CreateBundleResult.h"
#include "model/CreateCdsFileRequest.h"
#include "model/CreateCdsFileResult.h"
#include "model/CreateCdsFileShareLinkRequest.h"
#include "model/CreateCdsFileShareLinkResult.h"
#include "model/CreateDesktopGroupRequest.h"
#include "model/CreateDesktopGroupResult.h"
#include "model/CreateDesktopsRequest.h"
#include "model/CreateDesktopsResult.h"
#include "model/CreateDiskEncryptionServiceRequest.h"
#include "model/CreateDiskEncryptionServiceResult.h"
#include "model/CreateImageRequest.h"
#include "model/CreateImageResult.h"
#include "model/CreateNASFileSystemRequest.h"
#include "model/CreateNASFileSystemResult.h"
#include "model/CreateNetworkPackageRequest.h"
#include "model/CreateNetworkPackageResult.h"
#include "model/CreatePolicyGroupRequest.h"
#include "model/CreatePolicyGroupResult.h"
#include "model/CreateRAMDirectoryRequest.h"
#include "model/CreateRAMDirectoryResult.h"
#include "model/CreateSimpleOfficeSiteRequest.h"
#include "model/CreateSimpleOfficeSiteResult.h"
#include "model/CreateSnapshotRequest.h"
#include "model/CreateSnapshotResult.h"
#include "model/DeleteAutoSnapshotPolicyRequest.h"
#include "model/DeleteAutoSnapshotPolicyResult.h"
#include "model/DeleteBundlesRequest.h"
#include "model/DeleteBundlesResult.h"
#include "model/DeleteCdsFileRequest.h"
#include "model/DeleteCdsFileResult.h"
#include "model/DeleteCloudDriveGroupsRequest.h"
#include "model/DeleteCloudDriveGroupsResult.h"
#include "model/DeleteCloudDriveUsersRequest.h"
#include "model/DeleteCloudDriveUsersResult.h"
#include "model/DeleteDesktopGroupRequest.h"
#include "model/DeleteDesktopGroupResult.h"
#include "model/DeleteDesktopsRequest.h"
#include "model/DeleteDesktopsResult.h"
#include "model/DeleteDevicesRequest.h"
#include "model/DeleteDevicesResult.h"
#include "model/DeleteDirectoriesRequest.h"
#include "model/DeleteDirectoriesResult.h"
#include "model/DeleteImagesRequest.h"
#include "model/DeleteImagesResult.h"
#include "model/DeleteNASFileSystemsRequest.h"
#include "model/DeleteNASFileSystemsResult.h"
#include "model/DeleteNetworkPackagesRequest.h"
#include "model/DeleteNetworkPackagesResult.h"
#include "model/DeleteOfficeSitesRequest.h"
#include "model/DeleteOfficeSitesResult.h"
#include "model/DeletePolicyGroupsRequest.h"
#include "model/DeletePolicyGroupsResult.h"
#include "model/DeleteSnapshotRequest.h"
#include "model/DeleteSnapshotResult.h"
#include "model/DeleteVirtualMFADeviceRequest.h"
#include "model/DeleteVirtualMFADeviceResult.h"
#include "model/DescribeAlarmEventStackInfoRequest.h"
#include "model/DescribeAlarmEventStackInfoResult.h"
#include "model/DescribeAutoSnapshotPolicyRequest.h"
#include "model/DescribeAutoSnapshotPolicyResult.h"
#include "model/DescribeBundlesRequest.h"
#include "model/DescribeBundlesResult.h"
#include "model/DescribeCdsFileShareLinksRequest.h"
#include "model/DescribeCdsFileShareLinksResult.h"
#include "model/DescribeCensRequest.h"
#include "model/DescribeCensResult.h"
#include "model/DescribeClientEventsRequest.h"
#include "model/DescribeClientEventsResult.h"
#include "model/DescribeCloudDriveGroupsRequest.h"
#include "model/DescribeCloudDriveGroupsResult.h"
#include "model/DescribeCloudDrivePermissionsRequest.h"
#include "model/DescribeCloudDrivePermissionsResult.h"
#include "model/DescribeCustomizedListHeadersRequest.h"
#include "model/DescribeCustomizedListHeadersResult.h"
#include "model/DescribeDesktopGroupsRequest.h"
#include "model/DescribeDesktopGroupsResult.h"
#include "model/DescribeDesktopIdsByVulNamesRequest.h"
#include "model/DescribeDesktopIdsByVulNamesResult.h"
#include "model/DescribeDesktopTypesRequest.h"
#include "model/DescribeDesktopTypesResult.h"
#include "model/DescribeDesktopsRequest.h"
#include "model/DescribeDesktopsResult.h"
#include "model/DescribeDesktopsInGroupRequest.h"
#include "model/DescribeDesktopsInGroupResult.h"
#include "model/DescribeDevicesRequest.h"
#include "model/DescribeDevicesResult.h"
#include "model/DescribeDirectoriesRequest.h"
#include "model/DescribeDirectoriesResult.h"
#include "model/DescribeFlowMetricRequest.h"
#include "model/DescribeFlowMetricResult.h"
#include "model/DescribeFlowStatisticRequest.h"
#include "model/DescribeFlowStatisticResult.h"
#include "model/DescribeFotaPendingDesktopsRequest.h"
#include "model/DescribeFotaPendingDesktopsResult.h"
#include "model/DescribeFotaTasksRequest.h"
#include "model/DescribeFotaTasksResult.h"
#include "model/DescribeFrontVulPatchListRequest.h"
#include "model/DescribeFrontVulPatchListResult.h"
#include "model/DescribeGroupedVulRequest.h"
#include "model/DescribeGroupedVulResult.h"
#include "model/DescribeImageModifiedRecordsRequest.h"
#include "model/DescribeImageModifiedRecordsResult.h"
#include "model/DescribeImagePermissionRequest.h"
#include "model/DescribeImagePermissionResult.h"
#include "model/DescribeImagesRequest.h"
#include "model/DescribeImagesResult.h"
#include "model/DescribeInvocationsRequest.h"
#include "model/DescribeInvocationsResult.h"
#include "model/DescribeKmsKeysRequest.h"
#include "model/DescribeKmsKeysResult.h"
#include "model/DescribeNASFileSystemsRequest.h"
#include "model/DescribeNASFileSystemsResult.h"
#include "model/DescribeNetworkPackagesRequest.h"
#include "model/DescribeNetworkPackagesResult.h"
#include "model/DescribeOfficeSitesRequest.h"
#include "model/DescribeOfficeSitesResult.h"
#include "model/DescribePolicyGroupsRequest.h"
#include "model/DescribePolicyGroupsResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeScanTaskProgressRequest.h"
#include "model/DescribeScanTaskProgressResult.h"
#include "model/DescribeSecurityEventOperationStatusRequest.h"
#include "model/DescribeSecurityEventOperationStatusResult.h"
#include "model/DescribeSecurityEventOperationsRequest.h"
#include "model/DescribeSecurityEventOperationsResult.h"
#include "model/DescribeSnapshotsRequest.h"
#include "model/DescribeSnapshotsResult.h"
#include "model/DescribeSuspEventOverviewRequest.h"
#include "model/DescribeSuspEventOverviewResult.h"
#include "model/DescribeSuspEventQuaraFilesRequest.h"
#include "model/DescribeSuspEventQuaraFilesResult.h"
#include "model/DescribeSuspEventsRequest.h"
#include "model/DescribeSuspEventsResult.h"
#include "model/DescribeUserConnectionRecordsRequest.h"
#include "model/DescribeUserConnectionRecordsResult.h"
#include "model/DescribeUserProfilePathRulesRequest.h"
#include "model/DescribeUserProfilePathRulesResult.h"
#include "model/DescribeUsersInGroupRequest.h"
#include "model/DescribeUsersInGroupResult.h"
#include "model/DescribeUsersPasswordRequest.h"
#include "model/DescribeUsersPasswordResult.h"
#include "model/DescribeVirtualMFADevicesRequest.h"
#include "model/DescribeVirtualMFADevicesResult.h"
#include "model/DescribeVulDetailsRequest.h"
#include "model/DescribeVulDetailsResult.h"
#include "model/DescribeVulListRequest.h"
#include "model/DescribeVulListResult.h"
#include "model/DescribeVulOverviewRequest.h"
#include "model/DescribeVulOverviewResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/DetachCenRequest.h"
#include "model/DetachCenResult.h"
#include "model/DetachEndUserRequest.h"
#include "model/DetachEndUserResult.h"
#include "model/DisableDesktopsInGroupRequest.h"
#include "model/DisableDesktopsInGroupResult.h"
#include "model/DissociateNetworkPackageRequest.h"
#include "model/DissociateNetworkPackageResult.h"
#include "model/ExportClientEventsRequest.h"
#include "model/ExportClientEventsResult.h"
#include "model/ExportDesktopGroupInfoRequest.h"
#include "model/ExportDesktopGroupInfoResult.h"
#include "model/ExportDesktopListInfoRequest.h"
#include "model/ExportDesktopListInfoResult.h"
#include "model/GetConnectionTicketRequest.h"
#include "model/GetConnectionTicketResult.h"
#include "model/GetDesktopGroupDetailRequest.h"
#include "model/GetDesktopGroupDetailResult.h"
#include "model/GetOfficeSiteSsoStatusRequest.h"
#include "model/GetOfficeSiteSsoStatusResult.h"
#include "model/GetSpMetadataRequest.h"
#include "model/GetSpMetadataResult.h"
#include "model/HandleSecurityEventsRequest.h"
#include "model/HandleSecurityEventsResult.h"
#include "model/HibernateDesktopsRequest.h"
#include "model/HibernateDesktopsResult.h"
#include "model/ListCdsFilesRequest.h"
#include "model/ListCdsFilesResult.h"
#include "model/ListDirectoryUsersRequest.h"
#include "model/ListDirectoryUsersResult.h"
#include "model/ListFilePermissionRequest.h"
#include "model/ListFilePermissionResult.h"
#include "model/ListOfficeSiteOverviewRequest.h"
#include "model/ListOfficeSiteOverviewResult.h"
#include "model/ListOfficeSiteUsersRequest.h"
#include "model/ListOfficeSiteUsersResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListUserAdOrganizationUnitsRequest.h"
#include "model/ListUserAdOrganizationUnitsResult.h"
#include "model/LockVirtualMFADeviceRequest.h"
#include "model/LockVirtualMFADeviceResult.h"
#include "model/MigrateDesktopsRequest.h"
#include "model/MigrateDesktopsResult.h"
#include "model/ModifyADConnectorDirectoryRequest.h"
#include "model/ModifyADConnectorDirectoryResult.h"
#include "model/ModifyADConnectorOfficeSiteRequest.h"
#include "model/ModifyADConnectorOfficeSiteResult.h"
#include "model/ModifyAutoSnapshotPolicyRequest.h"
#include "model/ModifyAutoSnapshotPolicyResult.h"
#include "model/ModifyBundleRequest.h"
#include "model/ModifyBundleResult.h"
#include "model/ModifyCdsFileRequest.h"
#include "model/ModifyCdsFileResult.h"
#include "model/ModifyCdsFileShareLinkRequest.h"
#include "model/ModifyCdsFileShareLinkResult.h"
#include "model/ModifyCloudDriveGroupsRequest.h"
#include "model/ModifyCloudDriveGroupsResult.h"
#include "model/ModifyCloudDrivePermissionRequest.h"
#include "model/ModifyCloudDrivePermissionResult.h"
#include "model/ModifyCustomizedListHeadersRequest.h"
#include "model/ModifyCustomizedListHeadersResult.h"
#include "model/ModifyDesktopChargeTypeRequest.h"
#include "model/ModifyDesktopChargeTypeResult.h"
#include "model/ModifyDesktopGroupRequest.h"
#include "model/ModifyDesktopGroupResult.h"
#include "model/ModifyDesktopHostNameRequest.h"
#include "model/ModifyDesktopHostNameResult.h"
#include "model/ModifyDesktopNameRequest.h"
#include "model/ModifyDesktopNameResult.h"
#include "model/ModifyDesktopSpecRequest.h"
#include "model/ModifyDesktopSpecResult.h"
#include "model/ModifyDesktopsPolicyGroupRequest.h"
#include "model/ModifyDesktopsPolicyGroupResult.h"
#include "model/ModifyDiskSpecRequest.h"
#include "model/ModifyDiskSpecResult.h"
#include "model/ModifyEntitlementRequest.h"
#include "model/ModifyEntitlementResult.h"
#include "model/ModifyImageAttributeRequest.h"
#include "model/ModifyImageAttributeResult.h"
#include "model/ModifyImagePermissionRequest.h"
#include "model/ModifyImagePermissionResult.h"
#include "model/ModifyNASDefaultMountTargetRequest.h"
#include "model/ModifyNASDefaultMountTargetResult.h"
#include "model/ModifyNetworkPackageBandwidthRequest.h"
#include "model/ModifyNetworkPackageBandwidthResult.h"
#include "model/ModifyNetworkPackageEnabledRequest.h"
#include "model/ModifyNetworkPackageEnabledResult.h"
#include "model/ModifyOfficeSiteAttributeRequest.h"
#include "model/ModifyOfficeSiteAttributeResult.h"
#include "model/ModifyOfficeSiteCrossDesktopAccessRequest.h"
#include "model/ModifyOfficeSiteCrossDesktopAccessResult.h"
#include "model/ModifyOfficeSiteMfaEnabledRequest.h"
#include "model/ModifyOfficeSiteMfaEnabledResult.h"
#include "model/ModifyOperateVulRequest.h"
#include "model/ModifyOperateVulResult.h"
#include "model/ModifyPolicyGroupRequest.h"
#include "model/ModifyPolicyGroupResult.h"
#include "model/ModifyUserEntitlementRequest.h"
#include "model/ModifyUserEntitlementResult.h"
#include "model/ModifyUserToDesktopGroupRequest.h"
#include "model/ModifyUserToDesktopGroupResult.h"
#include "model/MoveCdsFileRequest.h"
#include "model/MoveCdsFileResult.h"
#include "model/OperateVulsRequest.h"
#include "model/OperateVulsResult.h"
#include "model/RebootDesktopsRequest.h"
#include "model/RebootDesktopsResult.h"
#include "model/RebuildDesktopsRequest.h"
#include "model/RebuildDesktopsResult.h"
#include "model/RemoveFilePermissionRequest.h"
#include "model/RemoveFilePermissionResult.h"
#include "model/RemoveUserFromDesktopGroupRequest.h"
#include "model/RemoveUserFromDesktopGroupResult.h"
#include "model/RenewDesktopsRequest.h"
#include "model/RenewDesktopsResult.h"
#include "model/RenewNetworkPackagesRequest.h"
#include "model/RenewNetworkPackagesResult.h"
#include "model/ResetDesktopsRequest.h"
#include "model/ResetDesktopsResult.h"
#include "model/ResetNASDefaultMountTargetRequest.h"
#include "model/ResetNASDefaultMountTargetResult.h"
#include "model/ResetSnapshotRequest.h"
#include "model/ResetSnapshotResult.h"
#include "model/RevokeCoordinatePrivilegeRequest.h"
#include "model/RevokeCoordinatePrivilegeResult.h"
#include "model/RollbackSuspEventQuaraFileRequest.h"
#include "model/RollbackSuspEventQuaraFileResult.h"
#include "model/RunCommandRequest.h"
#include "model/RunCommandResult.h"
#include "model/SendVerifyCodeRequest.h"
#include "model/SendVerifyCodeResult.h"
#include "model/SetDesktopGroupScaleTimerRequest.h"
#include "model/SetDesktopGroupScaleTimerResult.h"
#include "model/SetDesktopGroupTimerRequest.h"
#include "model/SetDesktopGroupTimerResult.h"
#include "model/SetDesktopGroupTimerStatusRequest.h"
#include "model/SetDesktopGroupTimerStatusResult.h"
#include "model/SetDirectorySsoStatusRequest.h"
#include "model/SetDirectorySsoStatusResult.h"
#include "model/SetIdpMetadataRequest.h"
#include "model/SetIdpMetadataResult.h"
#include "model/SetOfficeSiteSsoStatusRequest.h"
#include "model/SetOfficeSiteSsoStatusResult.h"
#include "model/SetUserProfilePathRulesRequest.h"
#include "model/SetUserProfilePathRulesResult.h"
#include "model/StartDesktopsRequest.h"
#include "model/StartDesktopsResult.h"
#include "model/StartVirusScanTaskRequest.h"
#include "model/StartVirusScanTaskResult.h"
#include "model/StopDesktopsRequest.h"
#include "model/StopDesktopsResult.h"
#include "model/StopInvocationRequest.h"
#include "model/StopInvocationResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnlockVirtualMFADeviceRequest.h"
#include "model/UnlockVirtualMFADeviceResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateFotaTaskRequest.h"
#include "model/UpdateFotaTaskResult.h"
#include "model/UploadImageRequest.h"
#include "model/UploadImageResult.h"
#include "model/VerifyCenRequest.h"
#include "model/VerifyCenResult.h"
#include "model/WakeupDesktopsRequest.h"
#include "model/WakeupDesktopsResult.h"


namespace AlibabaCloud
{
	namespace Ecd
	{
		class ALIBABACLOUD_ECD_EXPORT EcdClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateOfficeSiteResult> ActivateOfficeSiteOutcome;
			typedef std::future<ActivateOfficeSiteOutcome> ActivateOfficeSiteOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ActivateOfficeSiteRequest&, const ActivateOfficeSiteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateOfficeSiteAsyncHandler;
			typedef Outcome<Error, Model::AddDevicesResult> AddDevicesOutcome;
			typedef std::future<AddDevicesOutcome> AddDevicesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::AddDevicesRequest&, const AddDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDevicesAsyncHandler;
			typedef Outcome<Error, Model::AddFilePermissionResult> AddFilePermissionOutcome;
			typedef std::future<AddFilePermissionOutcome> AddFilePermissionOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::AddFilePermissionRequest&, const AddFilePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFilePermissionAsyncHandler;
			typedef Outcome<Error, Model::AddUserToDesktopGroupResult> AddUserToDesktopGroupOutcome;
			typedef std::future<AddUserToDesktopGroupOutcome> AddUserToDesktopGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::AddUserToDesktopGroupRequest&, const AddUserToDesktopGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToDesktopGroupAsyncHandler;
			typedef Outcome<Error, Model::ApplyAutoSnapshotPolicyResult> ApplyAutoSnapshotPolicyOutcome;
			typedef std::future<ApplyAutoSnapshotPolicyOutcome> ApplyAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ApplyAutoSnapshotPolicyRequest&, const ApplyAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::ApplyCoordinatePrivilegeResult> ApplyCoordinatePrivilegeOutcome;
			typedef std::future<ApplyCoordinatePrivilegeOutcome> ApplyCoordinatePrivilegeOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ApplyCoordinatePrivilegeRequest&, const ApplyCoordinatePrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyCoordinatePrivilegeAsyncHandler;
			typedef Outcome<Error, Model::ApplyCoordinationForMonitoringResult> ApplyCoordinationForMonitoringOutcome;
			typedef std::future<ApplyCoordinationForMonitoringOutcome> ApplyCoordinationForMonitoringOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ApplyCoordinationForMonitoringRequest&, const ApplyCoordinationForMonitoringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyCoordinationForMonitoringAsyncHandler;
			typedef Outcome<Error, Model::ApproveFotaUpdateResult> ApproveFotaUpdateOutcome;
			typedef std::future<ApproveFotaUpdateOutcome> ApproveFotaUpdateOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ApproveFotaUpdateRequest&, const ApproveFotaUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApproveFotaUpdateAsyncHandler;
			typedef Outcome<Error, Model::AssociateNetworkPackageResult> AssociateNetworkPackageOutcome;
			typedef std::future<AssociateNetworkPackageOutcome> AssociateNetworkPackageOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::AssociateNetworkPackageRequest&, const AssociateNetworkPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNetworkPackageAsyncHandler;
			typedef Outcome<Error, Model::AttachCenResult> AttachCenOutcome;
			typedef std::future<AttachCenOutcome> AttachCenOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::AttachCenRequest&, const AttachCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachCenAsyncHandler;
			typedef Outcome<Error, Model::AttachEndUserResult> AttachEndUserOutcome;
			typedef std::future<AttachEndUserOutcome> AttachEndUserOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::AttachEndUserRequest&, const AttachEndUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachEndUserAsyncHandler;
			typedef Outcome<Error, Model::CancelAutoSnapshotPolicyResult> CancelAutoSnapshotPolicyOutcome;
			typedef std::future<CancelAutoSnapshotPolicyOutcome> CancelAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CancelAutoSnapshotPolicyRequest&, const CancelAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::CancelCdsFileShareLinkResult> CancelCdsFileShareLinkOutcome;
			typedef std::future<CancelCdsFileShareLinkOutcome> CancelCdsFileShareLinkOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CancelCdsFileShareLinkRequest&, const CancelCdsFileShareLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCdsFileShareLinkAsyncHandler;
			typedef Outcome<Error, Model::CancelCoordinationForMonitoringResult> CancelCoordinationForMonitoringOutcome;
			typedef std::future<CancelCoordinationForMonitoringOutcome> CancelCoordinationForMonitoringOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CancelCoordinationForMonitoringRequest&, const CancelCoordinationForMonitoringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCoordinationForMonitoringAsyncHandler;
			typedef Outcome<Error, Model::CancelCopyImageResult> CancelCopyImageOutcome;
			typedef std::future<CancelCopyImageOutcome> CancelCopyImageOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CancelCopyImageRequest&, const CancelCopyImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCopyImageAsyncHandler;
			typedef Outcome<Error, Model::ClonePolicyGroupResult> ClonePolicyGroupOutcome;
			typedef std::future<ClonePolicyGroupOutcome> ClonePolicyGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ClonePolicyGroupRequest&, const ClonePolicyGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClonePolicyGroupAsyncHandler;
			typedef Outcome<Error, Model::CompleteCdsFileResult> CompleteCdsFileOutcome;
			typedef std::future<CompleteCdsFileOutcome> CompleteCdsFileOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CompleteCdsFileRequest&, const CompleteCdsFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompleteCdsFileAsyncHandler;
			typedef Outcome<Error, Model::ConfigADConnectorTrustResult> ConfigADConnectorTrustOutcome;
			typedef std::future<ConfigADConnectorTrustOutcome> ConfigADConnectorTrustOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ConfigADConnectorTrustRequest&, const ConfigADConnectorTrustOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigADConnectorTrustAsyncHandler;
			typedef Outcome<Error, Model::ConfigADConnectorUserResult> ConfigADConnectorUserOutcome;
			typedef std::future<ConfigADConnectorUserOutcome> ConfigADConnectorUserOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ConfigADConnectorUserRequest&, const ConfigADConnectorUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigADConnectorUserAsyncHandler;
			typedef Outcome<Error, Model::CopyCdsFileResult> CopyCdsFileOutcome;
			typedef std::future<CopyCdsFileOutcome> CopyCdsFileOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CopyCdsFileRequest&, const CopyCdsFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyCdsFileAsyncHandler;
			typedef Outcome<Error, Model::CopyImageResult> CopyImageOutcome;
			typedef std::future<CopyImageOutcome> CopyImageOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CopyImageRequest&, const CopyImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyImageAsyncHandler;
			typedef Outcome<Error, Model::CreateADConnectorDirectoryResult> CreateADConnectorDirectoryOutcome;
			typedef std::future<CreateADConnectorDirectoryOutcome> CreateADConnectorDirectoryOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateADConnectorDirectoryRequest&, const CreateADConnectorDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateADConnectorDirectoryAsyncHandler;
			typedef Outcome<Error, Model::CreateADConnectorOfficeSiteResult> CreateADConnectorOfficeSiteOutcome;
			typedef std::future<CreateADConnectorOfficeSiteOutcome> CreateADConnectorOfficeSiteOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateADConnectorOfficeSiteRequest&, const CreateADConnectorOfficeSiteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateADConnectorOfficeSiteAsyncHandler;
			typedef Outcome<Error, Model::CreateAndBindNasFileSystemResult> CreateAndBindNasFileSystemOutcome;
			typedef std::future<CreateAndBindNasFileSystemOutcome> CreateAndBindNasFileSystemOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateAndBindNasFileSystemRequest&, const CreateAndBindNasFileSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndBindNasFileSystemAsyncHandler;
			typedef Outcome<Error, Model::CreateAutoSnapshotPolicyResult> CreateAutoSnapshotPolicyOutcome;
			typedef std::future<CreateAutoSnapshotPolicyOutcome> CreateAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateAutoSnapshotPolicyRequest&, const CreateAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateBundleResult> CreateBundleOutcome;
			typedef std::future<CreateBundleOutcome> CreateBundleOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateBundleRequest&, const CreateBundleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBundleAsyncHandler;
			typedef Outcome<Error, Model::CreateCdsFileResult> CreateCdsFileOutcome;
			typedef std::future<CreateCdsFileOutcome> CreateCdsFileOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateCdsFileRequest&, const CreateCdsFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdsFileAsyncHandler;
			typedef Outcome<Error, Model::CreateCdsFileShareLinkResult> CreateCdsFileShareLinkOutcome;
			typedef std::future<CreateCdsFileShareLinkOutcome> CreateCdsFileShareLinkOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateCdsFileShareLinkRequest&, const CreateCdsFileShareLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCdsFileShareLinkAsyncHandler;
			typedef Outcome<Error, Model::CreateDesktopGroupResult> CreateDesktopGroupOutcome;
			typedef std::future<CreateDesktopGroupOutcome> CreateDesktopGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateDesktopGroupRequest&, const CreateDesktopGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDesktopGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateDesktopsResult> CreateDesktopsOutcome;
			typedef std::future<CreateDesktopsOutcome> CreateDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateDesktopsRequest&, const CreateDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDesktopsAsyncHandler;
			typedef Outcome<Error, Model::CreateDiskEncryptionServiceResult> CreateDiskEncryptionServiceOutcome;
			typedef std::future<CreateDiskEncryptionServiceOutcome> CreateDiskEncryptionServiceOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateDiskEncryptionServiceRequest&, const CreateDiskEncryptionServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiskEncryptionServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateImageResult> CreateImageOutcome;
			typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateImageRequest&, const CreateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
			typedef Outcome<Error, Model::CreateNASFileSystemResult> CreateNASFileSystemOutcome;
			typedef std::future<CreateNASFileSystemOutcome> CreateNASFileSystemOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateNASFileSystemRequest&, const CreateNASFileSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNASFileSystemAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkPackageResult> CreateNetworkPackageOutcome;
			typedef std::future<CreateNetworkPackageOutcome> CreateNetworkPackageOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateNetworkPackageRequest&, const CreateNetworkPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkPackageAsyncHandler;
			typedef Outcome<Error, Model::CreatePolicyGroupResult> CreatePolicyGroupOutcome;
			typedef std::future<CreatePolicyGroupOutcome> CreatePolicyGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreatePolicyGroupRequest&, const CreatePolicyGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateRAMDirectoryResult> CreateRAMDirectoryOutcome;
			typedef std::future<CreateRAMDirectoryOutcome> CreateRAMDirectoryOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateRAMDirectoryRequest&, const CreateRAMDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRAMDirectoryAsyncHandler;
			typedef Outcome<Error, Model::CreateSimpleOfficeSiteResult> CreateSimpleOfficeSiteOutcome;
			typedef std::future<CreateSimpleOfficeSiteOutcome> CreateSimpleOfficeSiteOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateSimpleOfficeSiteRequest&, const CreateSimpleOfficeSiteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSimpleOfficeSiteAsyncHandler;
			typedef Outcome<Error, Model::CreateSnapshotResult> CreateSnapshotOutcome;
			typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::CreateSnapshotRequest&, const CreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutoSnapshotPolicyResult> DeleteAutoSnapshotPolicyOutcome;
			typedef std::future<DeleteAutoSnapshotPolicyOutcome> DeleteAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteAutoSnapshotPolicyRequest&, const DeleteAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteBundlesResult> DeleteBundlesOutcome;
			typedef std::future<DeleteBundlesOutcome> DeleteBundlesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteBundlesRequest&, const DeleteBundlesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBundlesAsyncHandler;
			typedef Outcome<Error, Model::DeleteCdsFileResult> DeleteCdsFileOutcome;
			typedef std::future<DeleteCdsFileOutcome> DeleteCdsFileOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteCdsFileRequest&, const DeleteCdsFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdsFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteCloudDriveGroupsResult> DeleteCloudDriveGroupsOutcome;
			typedef std::future<DeleteCloudDriveGroupsOutcome> DeleteCloudDriveGroupsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteCloudDriveGroupsRequest&, const DeleteCloudDriveGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudDriveGroupsAsyncHandler;
			typedef Outcome<Error, Model::DeleteCloudDriveUsersResult> DeleteCloudDriveUsersOutcome;
			typedef std::future<DeleteCloudDriveUsersOutcome> DeleteCloudDriveUsersOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteCloudDriveUsersRequest&, const DeleteCloudDriveUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudDriveUsersAsyncHandler;
			typedef Outcome<Error, Model::DeleteDesktopGroupResult> DeleteDesktopGroupOutcome;
			typedef std::future<DeleteDesktopGroupOutcome> DeleteDesktopGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteDesktopGroupRequest&, const DeleteDesktopGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDesktopGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDesktopsResult> DeleteDesktopsOutcome;
			typedef std::future<DeleteDesktopsOutcome> DeleteDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteDesktopsRequest&, const DeleteDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDesktopsAsyncHandler;
			typedef Outcome<Error, Model::DeleteDevicesResult> DeleteDevicesOutcome;
			typedef std::future<DeleteDevicesOutcome> DeleteDevicesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteDevicesRequest&, const DeleteDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevicesAsyncHandler;
			typedef Outcome<Error, Model::DeleteDirectoriesResult> DeleteDirectoriesOutcome;
			typedef std::future<DeleteDirectoriesOutcome> DeleteDirectoriesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteDirectoriesRequest&, const DeleteDirectoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectoriesAsyncHandler;
			typedef Outcome<Error, Model::DeleteImagesResult> DeleteImagesOutcome;
			typedef std::future<DeleteImagesOutcome> DeleteImagesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteImagesRequest&, const DeleteImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImagesAsyncHandler;
			typedef Outcome<Error, Model::DeleteNASFileSystemsResult> DeleteNASFileSystemsOutcome;
			typedef std::future<DeleteNASFileSystemsOutcome> DeleteNASFileSystemsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteNASFileSystemsRequest&, const DeleteNASFileSystemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNASFileSystemsAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkPackagesResult> DeleteNetworkPackagesOutcome;
			typedef std::future<DeleteNetworkPackagesOutcome> DeleteNetworkPackagesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteNetworkPackagesRequest&, const DeleteNetworkPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkPackagesAsyncHandler;
			typedef Outcome<Error, Model::DeleteOfficeSitesResult> DeleteOfficeSitesOutcome;
			typedef std::future<DeleteOfficeSitesOutcome> DeleteOfficeSitesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteOfficeSitesRequest&, const DeleteOfficeSitesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOfficeSitesAsyncHandler;
			typedef Outcome<Error, Model::DeletePolicyGroupsResult> DeletePolicyGroupsOutcome;
			typedef std::future<DeletePolicyGroupsOutcome> DeletePolicyGroupsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeletePolicyGroupsRequest&, const DeletePolicyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyGroupsAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotResult> DeleteSnapshotOutcome;
			typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteSnapshotRequest&, const DeleteSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteVirtualMFADeviceResult> DeleteVirtualMFADeviceOutcome;
			typedef std::future<DeleteVirtualMFADeviceOutcome> DeleteVirtualMFADeviceOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DeleteVirtualMFADeviceRequest&, const DeleteVirtualMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVirtualMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventStackInfoResult> DescribeAlarmEventStackInfoOutcome;
			typedef std::future<DescribeAlarmEventStackInfoOutcome> DescribeAlarmEventStackInfoOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeAlarmEventStackInfoRequest&, const DescribeAlarmEventStackInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventStackInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoSnapshotPolicyResult> DescribeAutoSnapshotPolicyOutcome;
			typedef std::future<DescribeAutoSnapshotPolicyOutcome> DescribeAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeAutoSnapshotPolicyRequest&, const DescribeAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBundlesResult> DescribeBundlesOutcome;
			typedef std::future<DescribeBundlesOutcome> DescribeBundlesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeBundlesRequest&, const DescribeBundlesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBundlesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCdsFileShareLinksResult> DescribeCdsFileShareLinksOutcome;
			typedef std::future<DescribeCdsFileShareLinksOutcome> DescribeCdsFileShareLinksOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeCdsFileShareLinksRequest&, const DescribeCdsFileShareLinksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdsFileShareLinksAsyncHandler;
			typedef Outcome<Error, Model::DescribeCensResult> DescribeCensOutcome;
			typedef std::future<DescribeCensOutcome> DescribeCensOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeCensRequest&, const DescribeCensOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCensAsyncHandler;
			typedef Outcome<Error, Model::DescribeClientEventsResult> DescribeClientEventsOutcome;
			typedef std::future<DescribeClientEventsOutcome> DescribeClientEventsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeClientEventsRequest&, const DescribeClientEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudDriveGroupsResult> DescribeCloudDriveGroupsOutcome;
			typedef std::future<DescribeCloudDriveGroupsOutcome> DescribeCloudDriveGroupsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeCloudDriveGroupsRequest&, const DescribeCloudDriveGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudDriveGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudDrivePermissionsResult> DescribeCloudDrivePermissionsOutcome;
			typedef std::future<DescribeCloudDrivePermissionsOutcome> DescribeCloudDrivePermissionsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeCloudDrivePermissionsRequest&, const DescribeCloudDrivePermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudDrivePermissionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizedListHeadersResult> DescribeCustomizedListHeadersOutcome;
			typedef std::future<DescribeCustomizedListHeadersOutcome> DescribeCustomizedListHeadersOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeCustomizedListHeadersRequest&, const DescribeCustomizedListHeadersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizedListHeadersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDesktopGroupsResult> DescribeDesktopGroupsOutcome;
			typedef std::future<DescribeDesktopGroupsOutcome> DescribeDesktopGroupsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeDesktopGroupsRequest&, const DescribeDesktopGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDesktopGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDesktopIdsByVulNamesResult> DescribeDesktopIdsByVulNamesOutcome;
			typedef std::future<DescribeDesktopIdsByVulNamesOutcome> DescribeDesktopIdsByVulNamesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeDesktopIdsByVulNamesRequest&, const DescribeDesktopIdsByVulNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDesktopIdsByVulNamesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDesktopTypesResult> DescribeDesktopTypesOutcome;
			typedef std::future<DescribeDesktopTypesOutcome> DescribeDesktopTypesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeDesktopTypesRequest&, const DescribeDesktopTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDesktopTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDesktopsResult> DescribeDesktopsOutcome;
			typedef std::future<DescribeDesktopsOutcome> DescribeDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeDesktopsRequest&, const DescribeDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDesktopsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDesktopsInGroupResult> DescribeDesktopsInGroupOutcome;
			typedef std::future<DescribeDesktopsInGroupOutcome> DescribeDesktopsInGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeDesktopsInGroupRequest&, const DescribeDesktopsInGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDesktopsInGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeDevicesResult> DescribeDevicesOutcome;
			typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeDevicesRequest&, const DescribeDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDirectoriesResult> DescribeDirectoriesOutcome;
			typedef std::future<DescribeDirectoriesOutcome> DescribeDirectoriesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeDirectoriesRequest&, const DescribeDirectoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectoriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowMetricResult> DescribeFlowMetricOutcome;
			typedef std::future<DescribeFlowMetricOutcome> DescribeFlowMetricOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeFlowMetricRequest&, const DescribeFlowMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowMetricAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowStatisticResult> DescribeFlowStatisticOutcome;
			typedef std::future<DescribeFlowStatisticOutcome> DescribeFlowStatisticOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeFlowStatisticRequest&, const DescribeFlowStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowStatisticAsyncHandler;
			typedef Outcome<Error, Model::DescribeFotaPendingDesktopsResult> DescribeFotaPendingDesktopsOutcome;
			typedef std::future<DescribeFotaPendingDesktopsOutcome> DescribeFotaPendingDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeFotaPendingDesktopsRequest&, const DescribeFotaPendingDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFotaPendingDesktopsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFotaTasksResult> DescribeFotaTasksOutcome;
			typedef std::future<DescribeFotaTasksOutcome> DescribeFotaTasksOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeFotaTasksRequest&, const DescribeFotaTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFotaTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeFrontVulPatchListResult> DescribeFrontVulPatchListOutcome;
			typedef std::future<DescribeFrontVulPatchListOutcome> DescribeFrontVulPatchListOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeFrontVulPatchListRequest&, const DescribeFrontVulPatchListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFrontVulPatchListAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupedVulResult> DescribeGroupedVulOutcome;
			typedef std::future<DescribeGroupedVulOutcome> DescribeGroupedVulOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeGroupedVulRequest&, const DescribeGroupedVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupedVulAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageModifiedRecordsResult> DescribeImageModifiedRecordsOutcome;
			typedef std::future<DescribeImageModifiedRecordsOutcome> DescribeImageModifiedRecordsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeImageModifiedRecordsRequest&, const DescribeImageModifiedRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageModifiedRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeImagePermissionResult> DescribeImagePermissionOutcome;
			typedef std::future<DescribeImagePermissionOutcome> DescribeImagePermissionOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeImagePermissionRequest&, const DescribeImagePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagePermissionAsyncHandler;
			typedef Outcome<Error, Model::DescribeImagesResult> DescribeImagesOutcome;
			typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeImagesRequest&, const DescribeImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInvocationsResult> DescribeInvocationsOutcome;
			typedef std::future<DescribeInvocationsOutcome> DescribeInvocationsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeInvocationsRequest&, const DescribeInvocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeKmsKeysResult> DescribeKmsKeysOutcome;
			typedef std::future<DescribeKmsKeysOutcome> DescribeKmsKeysOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeKmsKeysRequest&, const DescribeKmsKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKmsKeysAsyncHandler;
			typedef Outcome<Error, Model::DescribeNASFileSystemsResult> DescribeNASFileSystemsOutcome;
			typedef std::future<DescribeNASFileSystemsOutcome> DescribeNASFileSystemsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeNASFileSystemsRequest&, const DescribeNASFileSystemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNASFileSystemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkPackagesResult> DescribeNetworkPackagesOutcome;
			typedef std::future<DescribeNetworkPackagesOutcome> DescribeNetworkPackagesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeNetworkPackagesRequest&, const DescribeNetworkPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkPackagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeOfficeSitesResult> DescribeOfficeSitesOutcome;
			typedef std::future<DescribeOfficeSitesOutcome> DescribeOfficeSitesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeOfficeSitesRequest&, const DescribeOfficeSitesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOfficeSitesAsyncHandler;
			typedef Outcome<Error, Model::DescribePolicyGroupsResult> DescribePolicyGroupsOutcome;
			typedef std::future<DescribePolicyGroupsOutcome> DescribePolicyGroupsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribePolicyGroupsRequest&, const DescribePolicyGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScanTaskProgressResult> DescribeScanTaskProgressOutcome;
			typedef std::future<DescribeScanTaskProgressOutcome> DescribeScanTaskProgressOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeScanTaskProgressRequest&, const DescribeScanTaskProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskProgressAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityEventOperationStatusResult> DescribeSecurityEventOperationStatusOutcome;
			typedef std::future<DescribeSecurityEventOperationStatusOutcome> DescribeSecurityEventOperationStatusOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeSecurityEventOperationStatusRequest&, const DescribeSecurityEventOperationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityEventOperationStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityEventOperationsResult> DescribeSecurityEventOperationsOutcome;
			typedef std::future<DescribeSecurityEventOperationsOutcome> DescribeSecurityEventOperationsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeSecurityEventOperationsRequest&, const DescribeSecurityEventOperationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityEventOperationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnapshotsResult> DescribeSnapshotsOutcome;
			typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeSnapshotsRequest&, const DescribeSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventOverviewResult> DescribeSuspEventOverviewOutcome;
			typedef std::future<DescribeSuspEventOverviewOutcome> DescribeSuspEventOverviewOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeSuspEventOverviewRequest&, const DescribeSuspEventOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventOverviewAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventQuaraFilesResult> DescribeSuspEventQuaraFilesOutcome;
			typedef std::future<DescribeSuspEventQuaraFilesOutcome> DescribeSuspEventQuaraFilesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeSuspEventQuaraFilesRequest&, const DescribeSuspEventQuaraFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventQuaraFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventsResult> DescribeSuspEventsOutcome;
			typedef std::future<DescribeSuspEventsOutcome> DescribeSuspEventsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeSuspEventsRequest&, const DescribeSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserConnectionRecordsResult> DescribeUserConnectionRecordsOutcome;
			typedef std::future<DescribeUserConnectionRecordsOutcome> DescribeUserConnectionRecordsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeUserConnectionRecordsRequest&, const DescribeUserConnectionRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserConnectionRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserProfilePathRulesResult> DescribeUserProfilePathRulesOutcome;
			typedef std::future<DescribeUserProfilePathRulesOutcome> DescribeUserProfilePathRulesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeUserProfilePathRulesRequest&, const DescribeUserProfilePathRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserProfilePathRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUsersInGroupResult> DescribeUsersInGroupOutcome;
			typedef std::future<DescribeUsersInGroupOutcome> DescribeUsersInGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeUsersInGroupRequest&, const DescribeUsersInGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersInGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeUsersPasswordResult> DescribeUsersPasswordOutcome;
			typedef std::future<DescribeUsersPasswordOutcome> DescribeUsersPasswordOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeUsersPasswordRequest&, const DescribeUsersPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersPasswordAsyncHandler;
			typedef Outcome<Error, Model::DescribeVirtualMFADevicesResult> DescribeVirtualMFADevicesOutcome;
			typedef std::future<DescribeVirtualMFADevicesOutcome> DescribeVirtualMFADevicesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeVirtualMFADevicesRequest&, const DescribeVirtualMFADevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirtualMFADevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulDetailsResult> DescribeVulDetailsOutcome;
			typedef std::future<DescribeVulDetailsOutcome> DescribeVulDetailsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeVulDetailsRequest&, const DescribeVulDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulListResult> DescribeVulListOutcome;
			typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeVulListRequest&, const DescribeVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulOverviewResult> DescribeVulOverviewOutcome;
			typedef std::future<DescribeVulOverviewOutcome> DescribeVulOverviewOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeVulOverviewRequest&, const DescribeVulOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulOverviewAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DetachCenResult> DetachCenOutcome;
			typedef std::future<DetachCenOutcome> DetachCenOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DetachCenRequest&, const DetachCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachCenAsyncHandler;
			typedef Outcome<Error, Model::DetachEndUserResult> DetachEndUserOutcome;
			typedef std::future<DetachEndUserOutcome> DetachEndUserOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DetachEndUserRequest&, const DetachEndUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachEndUserAsyncHandler;
			typedef Outcome<Error, Model::DisableDesktopsInGroupResult> DisableDesktopsInGroupOutcome;
			typedef std::future<DisableDesktopsInGroupOutcome> DisableDesktopsInGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DisableDesktopsInGroupRequest&, const DisableDesktopsInGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDesktopsInGroupAsyncHandler;
			typedef Outcome<Error, Model::DissociateNetworkPackageResult> DissociateNetworkPackageOutcome;
			typedef std::future<DissociateNetworkPackageOutcome> DissociateNetworkPackageOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::DissociateNetworkPackageRequest&, const DissociateNetworkPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateNetworkPackageAsyncHandler;
			typedef Outcome<Error, Model::ExportClientEventsResult> ExportClientEventsOutcome;
			typedef std::future<ExportClientEventsOutcome> ExportClientEventsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ExportClientEventsRequest&, const ExportClientEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportClientEventsAsyncHandler;
			typedef Outcome<Error, Model::ExportDesktopGroupInfoResult> ExportDesktopGroupInfoOutcome;
			typedef std::future<ExportDesktopGroupInfoOutcome> ExportDesktopGroupInfoOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ExportDesktopGroupInfoRequest&, const ExportDesktopGroupInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportDesktopGroupInfoAsyncHandler;
			typedef Outcome<Error, Model::ExportDesktopListInfoResult> ExportDesktopListInfoOutcome;
			typedef std::future<ExportDesktopListInfoOutcome> ExportDesktopListInfoOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ExportDesktopListInfoRequest&, const ExportDesktopListInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportDesktopListInfoAsyncHandler;
			typedef Outcome<Error, Model::GetConnectionTicketResult> GetConnectionTicketOutcome;
			typedef std::future<GetConnectionTicketOutcome> GetConnectionTicketOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::GetConnectionTicketRequest&, const GetConnectionTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConnectionTicketAsyncHandler;
			typedef Outcome<Error, Model::GetDesktopGroupDetailResult> GetDesktopGroupDetailOutcome;
			typedef std::future<GetDesktopGroupDetailOutcome> GetDesktopGroupDetailOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::GetDesktopGroupDetailRequest&, const GetDesktopGroupDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDesktopGroupDetailAsyncHandler;
			typedef Outcome<Error, Model::GetOfficeSiteSsoStatusResult> GetOfficeSiteSsoStatusOutcome;
			typedef std::future<GetOfficeSiteSsoStatusOutcome> GetOfficeSiteSsoStatusOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::GetOfficeSiteSsoStatusRequest&, const GetOfficeSiteSsoStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOfficeSiteSsoStatusAsyncHandler;
			typedef Outcome<Error, Model::GetSpMetadataResult> GetSpMetadataOutcome;
			typedef std::future<GetSpMetadataOutcome> GetSpMetadataOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::GetSpMetadataRequest&, const GetSpMetadataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSpMetadataAsyncHandler;
			typedef Outcome<Error, Model::HandleSecurityEventsResult> HandleSecurityEventsOutcome;
			typedef std::future<HandleSecurityEventsOutcome> HandleSecurityEventsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::HandleSecurityEventsRequest&, const HandleSecurityEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HandleSecurityEventsAsyncHandler;
			typedef Outcome<Error, Model::HibernateDesktopsResult> HibernateDesktopsOutcome;
			typedef std::future<HibernateDesktopsOutcome> HibernateDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::HibernateDesktopsRequest&, const HibernateDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HibernateDesktopsAsyncHandler;
			typedef Outcome<Error, Model::ListCdsFilesResult> ListCdsFilesOutcome;
			typedef std::future<ListCdsFilesOutcome> ListCdsFilesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ListCdsFilesRequest&, const ListCdsFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCdsFilesAsyncHandler;
			typedef Outcome<Error, Model::ListDirectoryUsersResult> ListDirectoryUsersOutcome;
			typedef std::future<ListDirectoryUsersOutcome> ListDirectoryUsersOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ListDirectoryUsersRequest&, const ListDirectoryUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDirectoryUsersAsyncHandler;
			typedef Outcome<Error, Model::ListFilePermissionResult> ListFilePermissionOutcome;
			typedef std::future<ListFilePermissionOutcome> ListFilePermissionOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ListFilePermissionRequest&, const ListFilePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFilePermissionAsyncHandler;
			typedef Outcome<Error, Model::ListOfficeSiteOverviewResult> ListOfficeSiteOverviewOutcome;
			typedef std::future<ListOfficeSiteOverviewOutcome> ListOfficeSiteOverviewOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ListOfficeSiteOverviewRequest&, const ListOfficeSiteOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOfficeSiteOverviewAsyncHandler;
			typedef Outcome<Error, Model::ListOfficeSiteUsersResult> ListOfficeSiteUsersOutcome;
			typedef std::future<ListOfficeSiteUsersOutcome> ListOfficeSiteUsersOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ListOfficeSiteUsersRequest&, const ListOfficeSiteUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOfficeSiteUsersAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListUserAdOrganizationUnitsResult> ListUserAdOrganizationUnitsOutcome;
			typedef std::future<ListUserAdOrganizationUnitsOutcome> ListUserAdOrganizationUnitsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ListUserAdOrganizationUnitsRequest&, const ListUserAdOrganizationUnitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserAdOrganizationUnitsAsyncHandler;
			typedef Outcome<Error, Model::LockVirtualMFADeviceResult> LockVirtualMFADeviceOutcome;
			typedef std::future<LockVirtualMFADeviceOutcome> LockVirtualMFADeviceOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::LockVirtualMFADeviceRequest&, const LockVirtualMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LockVirtualMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::MigrateDesktopsResult> MigrateDesktopsOutcome;
			typedef std::future<MigrateDesktopsOutcome> MigrateDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::MigrateDesktopsRequest&, const MigrateDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateDesktopsAsyncHandler;
			typedef Outcome<Error, Model::ModifyADConnectorDirectoryResult> ModifyADConnectorDirectoryOutcome;
			typedef std::future<ModifyADConnectorDirectoryOutcome> ModifyADConnectorDirectoryOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyADConnectorDirectoryRequest&, const ModifyADConnectorDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyADConnectorDirectoryAsyncHandler;
			typedef Outcome<Error, Model::ModifyADConnectorOfficeSiteResult> ModifyADConnectorOfficeSiteOutcome;
			typedef std::future<ModifyADConnectorOfficeSiteOutcome> ModifyADConnectorOfficeSiteOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyADConnectorOfficeSiteRequest&, const ModifyADConnectorOfficeSiteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyADConnectorOfficeSiteAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoSnapshotPolicyResult> ModifyAutoSnapshotPolicyOutcome;
			typedef std::future<ModifyAutoSnapshotPolicyOutcome> ModifyAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyAutoSnapshotPolicyRequest&, const ModifyAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyBundleResult> ModifyBundleOutcome;
			typedef std::future<ModifyBundleOutcome> ModifyBundleOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyBundleRequest&, const ModifyBundleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBundleAsyncHandler;
			typedef Outcome<Error, Model::ModifyCdsFileResult> ModifyCdsFileOutcome;
			typedef std::future<ModifyCdsFileOutcome> ModifyCdsFileOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyCdsFileRequest&, const ModifyCdsFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdsFileAsyncHandler;
			typedef Outcome<Error, Model::ModifyCdsFileShareLinkResult> ModifyCdsFileShareLinkOutcome;
			typedef std::future<ModifyCdsFileShareLinkOutcome> ModifyCdsFileShareLinkOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyCdsFileShareLinkRequest&, const ModifyCdsFileShareLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCdsFileShareLinkAsyncHandler;
			typedef Outcome<Error, Model::ModifyCloudDriveGroupsResult> ModifyCloudDriveGroupsOutcome;
			typedef std::future<ModifyCloudDriveGroupsOutcome> ModifyCloudDriveGroupsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyCloudDriveGroupsRequest&, const ModifyCloudDriveGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudDriveGroupsAsyncHandler;
			typedef Outcome<Error, Model::ModifyCloudDrivePermissionResult> ModifyCloudDrivePermissionOutcome;
			typedef std::future<ModifyCloudDrivePermissionOutcome> ModifyCloudDrivePermissionOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyCloudDrivePermissionRequest&, const ModifyCloudDrivePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudDrivePermissionAsyncHandler;
			typedef Outcome<Error, Model::ModifyCustomizedListHeadersResult> ModifyCustomizedListHeadersOutcome;
			typedef std::future<ModifyCustomizedListHeadersOutcome> ModifyCustomizedListHeadersOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyCustomizedListHeadersRequest&, const ModifyCustomizedListHeadersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomizedListHeadersAsyncHandler;
			typedef Outcome<Error, Model::ModifyDesktopChargeTypeResult> ModifyDesktopChargeTypeOutcome;
			typedef std::future<ModifyDesktopChargeTypeOutcome> ModifyDesktopChargeTypeOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyDesktopChargeTypeRequest&, const ModifyDesktopChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDesktopChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDesktopGroupResult> ModifyDesktopGroupOutcome;
			typedef std::future<ModifyDesktopGroupOutcome> ModifyDesktopGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyDesktopGroupRequest&, const ModifyDesktopGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDesktopGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyDesktopHostNameResult> ModifyDesktopHostNameOutcome;
			typedef std::future<ModifyDesktopHostNameOutcome> ModifyDesktopHostNameOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyDesktopHostNameRequest&, const ModifyDesktopHostNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDesktopHostNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyDesktopNameResult> ModifyDesktopNameOutcome;
			typedef std::future<ModifyDesktopNameOutcome> ModifyDesktopNameOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyDesktopNameRequest&, const ModifyDesktopNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDesktopNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyDesktopSpecResult> ModifyDesktopSpecOutcome;
			typedef std::future<ModifyDesktopSpecOutcome> ModifyDesktopSpecOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyDesktopSpecRequest&, const ModifyDesktopSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDesktopSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyDesktopsPolicyGroupResult> ModifyDesktopsPolicyGroupOutcome;
			typedef std::future<ModifyDesktopsPolicyGroupOutcome> ModifyDesktopsPolicyGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyDesktopsPolicyGroupRequest&, const ModifyDesktopsPolicyGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDesktopsPolicyGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyDiskSpecResult> ModifyDiskSpecOutcome;
			typedef std::future<ModifyDiskSpecOutcome> ModifyDiskSpecOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyDiskSpecRequest&, const ModifyDiskSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyEntitlementResult> ModifyEntitlementOutcome;
			typedef std::future<ModifyEntitlementOutcome> ModifyEntitlementOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyEntitlementRequest&, const ModifyEntitlementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEntitlementAsyncHandler;
			typedef Outcome<Error, Model::ModifyImageAttributeResult> ModifyImageAttributeOutcome;
			typedef std::future<ModifyImageAttributeOutcome> ModifyImageAttributeOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyImageAttributeRequest&, const ModifyImageAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyImagePermissionResult> ModifyImagePermissionOutcome;
			typedef std::future<ModifyImagePermissionOutcome> ModifyImagePermissionOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyImagePermissionRequest&, const ModifyImagePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImagePermissionAsyncHandler;
			typedef Outcome<Error, Model::ModifyNASDefaultMountTargetResult> ModifyNASDefaultMountTargetOutcome;
			typedef std::future<ModifyNASDefaultMountTargetOutcome> ModifyNASDefaultMountTargetOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyNASDefaultMountTargetRequest&, const ModifyNASDefaultMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNASDefaultMountTargetAsyncHandler;
			typedef Outcome<Error, Model::ModifyNetworkPackageBandwidthResult> ModifyNetworkPackageBandwidthOutcome;
			typedef std::future<ModifyNetworkPackageBandwidthOutcome> ModifyNetworkPackageBandwidthOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyNetworkPackageBandwidthRequest&, const ModifyNetworkPackageBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkPackageBandwidthAsyncHandler;
			typedef Outcome<Error, Model::ModifyNetworkPackageEnabledResult> ModifyNetworkPackageEnabledOutcome;
			typedef std::future<ModifyNetworkPackageEnabledOutcome> ModifyNetworkPackageEnabledOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyNetworkPackageEnabledRequest&, const ModifyNetworkPackageEnabledOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkPackageEnabledAsyncHandler;
			typedef Outcome<Error, Model::ModifyOfficeSiteAttributeResult> ModifyOfficeSiteAttributeOutcome;
			typedef std::future<ModifyOfficeSiteAttributeOutcome> ModifyOfficeSiteAttributeOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyOfficeSiteAttributeRequest&, const ModifyOfficeSiteAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOfficeSiteAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyOfficeSiteCrossDesktopAccessResult> ModifyOfficeSiteCrossDesktopAccessOutcome;
			typedef std::future<ModifyOfficeSiteCrossDesktopAccessOutcome> ModifyOfficeSiteCrossDesktopAccessOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyOfficeSiteCrossDesktopAccessRequest&, const ModifyOfficeSiteCrossDesktopAccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOfficeSiteCrossDesktopAccessAsyncHandler;
			typedef Outcome<Error, Model::ModifyOfficeSiteMfaEnabledResult> ModifyOfficeSiteMfaEnabledOutcome;
			typedef std::future<ModifyOfficeSiteMfaEnabledOutcome> ModifyOfficeSiteMfaEnabledOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyOfficeSiteMfaEnabledRequest&, const ModifyOfficeSiteMfaEnabledOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOfficeSiteMfaEnabledAsyncHandler;
			typedef Outcome<Error, Model::ModifyOperateVulResult> ModifyOperateVulOutcome;
			typedef std::future<ModifyOperateVulOutcome> ModifyOperateVulOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyOperateVulRequest&, const ModifyOperateVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOperateVulAsyncHandler;
			typedef Outcome<Error, Model::ModifyPolicyGroupResult> ModifyPolicyGroupOutcome;
			typedef std::future<ModifyPolicyGroupOutcome> ModifyPolicyGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyPolicyGroupRequest&, const ModifyPolicyGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolicyGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserEntitlementResult> ModifyUserEntitlementOutcome;
			typedef std::future<ModifyUserEntitlementOutcome> ModifyUserEntitlementOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyUserEntitlementRequest&, const ModifyUserEntitlementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserEntitlementAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserToDesktopGroupResult> ModifyUserToDesktopGroupOutcome;
			typedef std::future<ModifyUserToDesktopGroupOutcome> ModifyUserToDesktopGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ModifyUserToDesktopGroupRequest&, const ModifyUserToDesktopGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserToDesktopGroupAsyncHandler;
			typedef Outcome<Error, Model::MoveCdsFileResult> MoveCdsFileOutcome;
			typedef std::future<MoveCdsFileOutcome> MoveCdsFileOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::MoveCdsFileRequest&, const MoveCdsFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveCdsFileAsyncHandler;
			typedef Outcome<Error, Model::OperateVulsResult> OperateVulsOutcome;
			typedef std::future<OperateVulsOutcome> OperateVulsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::OperateVulsRequest&, const OperateVulsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateVulsAsyncHandler;
			typedef Outcome<Error, Model::RebootDesktopsResult> RebootDesktopsOutcome;
			typedef std::future<RebootDesktopsOutcome> RebootDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::RebootDesktopsRequest&, const RebootDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootDesktopsAsyncHandler;
			typedef Outcome<Error, Model::RebuildDesktopsResult> RebuildDesktopsOutcome;
			typedef std::future<RebuildDesktopsOutcome> RebuildDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::RebuildDesktopsRequest&, const RebuildDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebuildDesktopsAsyncHandler;
			typedef Outcome<Error, Model::RemoveFilePermissionResult> RemoveFilePermissionOutcome;
			typedef std::future<RemoveFilePermissionOutcome> RemoveFilePermissionOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::RemoveFilePermissionRequest&, const RemoveFilePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveFilePermissionAsyncHandler;
			typedef Outcome<Error, Model::RemoveUserFromDesktopGroupResult> RemoveUserFromDesktopGroupOutcome;
			typedef std::future<RemoveUserFromDesktopGroupOutcome> RemoveUserFromDesktopGroupOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::RemoveUserFromDesktopGroupRequest&, const RemoveUserFromDesktopGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromDesktopGroupAsyncHandler;
			typedef Outcome<Error, Model::RenewDesktopsResult> RenewDesktopsOutcome;
			typedef std::future<RenewDesktopsOutcome> RenewDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::RenewDesktopsRequest&, const RenewDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewDesktopsAsyncHandler;
			typedef Outcome<Error, Model::RenewNetworkPackagesResult> RenewNetworkPackagesOutcome;
			typedef std::future<RenewNetworkPackagesOutcome> RenewNetworkPackagesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::RenewNetworkPackagesRequest&, const RenewNetworkPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewNetworkPackagesAsyncHandler;
			typedef Outcome<Error, Model::ResetDesktopsResult> ResetDesktopsOutcome;
			typedef std::future<ResetDesktopsOutcome> ResetDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ResetDesktopsRequest&, const ResetDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetDesktopsAsyncHandler;
			typedef Outcome<Error, Model::ResetNASDefaultMountTargetResult> ResetNASDefaultMountTargetOutcome;
			typedef std::future<ResetNASDefaultMountTargetOutcome> ResetNASDefaultMountTargetOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ResetNASDefaultMountTargetRequest&, const ResetNASDefaultMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetNASDefaultMountTargetAsyncHandler;
			typedef Outcome<Error, Model::ResetSnapshotResult> ResetSnapshotOutcome;
			typedef std::future<ResetSnapshotOutcome> ResetSnapshotOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::ResetSnapshotRequest&, const ResetSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetSnapshotAsyncHandler;
			typedef Outcome<Error, Model::RevokeCoordinatePrivilegeResult> RevokeCoordinatePrivilegeOutcome;
			typedef std::future<RevokeCoordinatePrivilegeOutcome> RevokeCoordinatePrivilegeOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::RevokeCoordinatePrivilegeRequest&, const RevokeCoordinatePrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeCoordinatePrivilegeAsyncHandler;
			typedef Outcome<Error, Model::RollbackSuspEventQuaraFileResult> RollbackSuspEventQuaraFileOutcome;
			typedef std::future<RollbackSuspEventQuaraFileOutcome> RollbackSuspEventQuaraFileOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::RollbackSuspEventQuaraFileRequest&, const RollbackSuspEventQuaraFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackSuspEventQuaraFileAsyncHandler;
			typedef Outcome<Error, Model::RunCommandResult> RunCommandOutcome;
			typedef std::future<RunCommandOutcome> RunCommandOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::RunCommandRequest&, const RunCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunCommandAsyncHandler;
			typedef Outcome<Error, Model::SendVerifyCodeResult> SendVerifyCodeOutcome;
			typedef std::future<SendVerifyCodeOutcome> SendVerifyCodeOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::SendVerifyCodeRequest&, const SendVerifyCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendVerifyCodeAsyncHandler;
			typedef Outcome<Error, Model::SetDesktopGroupScaleTimerResult> SetDesktopGroupScaleTimerOutcome;
			typedef std::future<SetDesktopGroupScaleTimerOutcome> SetDesktopGroupScaleTimerOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::SetDesktopGroupScaleTimerRequest&, const SetDesktopGroupScaleTimerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDesktopGroupScaleTimerAsyncHandler;
			typedef Outcome<Error, Model::SetDesktopGroupTimerResult> SetDesktopGroupTimerOutcome;
			typedef std::future<SetDesktopGroupTimerOutcome> SetDesktopGroupTimerOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::SetDesktopGroupTimerRequest&, const SetDesktopGroupTimerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDesktopGroupTimerAsyncHandler;
			typedef Outcome<Error, Model::SetDesktopGroupTimerStatusResult> SetDesktopGroupTimerStatusOutcome;
			typedef std::future<SetDesktopGroupTimerStatusOutcome> SetDesktopGroupTimerStatusOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::SetDesktopGroupTimerStatusRequest&, const SetDesktopGroupTimerStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDesktopGroupTimerStatusAsyncHandler;
			typedef Outcome<Error, Model::SetDirectorySsoStatusResult> SetDirectorySsoStatusOutcome;
			typedef std::future<SetDirectorySsoStatusOutcome> SetDirectorySsoStatusOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::SetDirectorySsoStatusRequest&, const SetDirectorySsoStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDirectorySsoStatusAsyncHandler;
			typedef Outcome<Error, Model::SetIdpMetadataResult> SetIdpMetadataOutcome;
			typedef std::future<SetIdpMetadataOutcome> SetIdpMetadataOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::SetIdpMetadataRequest&, const SetIdpMetadataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetIdpMetadataAsyncHandler;
			typedef Outcome<Error, Model::SetOfficeSiteSsoStatusResult> SetOfficeSiteSsoStatusOutcome;
			typedef std::future<SetOfficeSiteSsoStatusOutcome> SetOfficeSiteSsoStatusOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::SetOfficeSiteSsoStatusRequest&, const SetOfficeSiteSsoStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetOfficeSiteSsoStatusAsyncHandler;
			typedef Outcome<Error, Model::SetUserProfilePathRulesResult> SetUserProfilePathRulesOutcome;
			typedef std::future<SetUserProfilePathRulesOutcome> SetUserProfilePathRulesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::SetUserProfilePathRulesRequest&, const SetUserProfilePathRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetUserProfilePathRulesAsyncHandler;
			typedef Outcome<Error, Model::StartDesktopsResult> StartDesktopsOutcome;
			typedef std::future<StartDesktopsOutcome> StartDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::StartDesktopsRequest&, const StartDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDesktopsAsyncHandler;
			typedef Outcome<Error, Model::StartVirusScanTaskResult> StartVirusScanTaskOutcome;
			typedef std::future<StartVirusScanTaskOutcome> StartVirusScanTaskOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::StartVirusScanTaskRequest&, const StartVirusScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartVirusScanTaskAsyncHandler;
			typedef Outcome<Error, Model::StopDesktopsResult> StopDesktopsOutcome;
			typedef std::future<StopDesktopsOutcome> StopDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::StopDesktopsRequest&, const StopDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDesktopsAsyncHandler;
			typedef Outcome<Error, Model::StopInvocationResult> StopInvocationOutcome;
			typedef std::future<StopInvocationOutcome> StopInvocationOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::StopInvocationRequest&, const StopInvocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInvocationAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnlockVirtualMFADeviceResult> UnlockVirtualMFADeviceOutcome;
			typedef std::future<UnlockVirtualMFADeviceOutcome> UnlockVirtualMFADeviceOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::UnlockVirtualMFADeviceRequest&, const UnlockVirtualMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockVirtualMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateFotaTaskResult> UpdateFotaTaskOutcome;
			typedef std::future<UpdateFotaTaskOutcome> UpdateFotaTaskOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::UpdateFotaTaskRequest&, const UpdateFotaTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFotaTaskAsyncHandler;
			typedef Outcome<Error, Model::UploadImageResult> UploadImageOutcome;
			typedef std::future<UploadImageOutcome> UploadImageOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::UploadImageRequest&, const UploadImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadImageAsyncHandler;
			typedef Outcome<Error, Model::VerifyCenResult> VerifyCenOutcome;
			typedef std::future<VerifyCenOutcome> VerifyCenOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::VerifyCenRequest&, const VerifyCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCenAsyncHandler;
			typedef Outcome<Error, Model::WakeupDesktopsResult> WakeupDesktopsOutcome;
			typedef std::future<WakeupDesktopsOutcome> WakeupDesktopsOutcomeCallable;
			typedef std::function<void(const EcdClient*, const Model::WakeupDesktopsRequest&, const WakeupDesktopsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WakeupDesktopsAsyncHandler;

			EcdClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EcdClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EcdClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EcdClient();
			ActivateOfficeSiteOutcome activateOfficeSite(const Model::ActivateOfficeSiteRequest &request)const;
			void activateOfficeSiteAsync(const Model::ActivateOfficeSiteRequest& request, const ActivateOfficeSiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateOfficeSiteOutcomeCallable activateOfficeSiteCallable(const Model::ActivateOfficeSiteRequest& request) const;
			AddDevicesOutcome addDevices(const Model::AddDevicesRequest &request)const;
			void addDevicesAsync(const Model::AddDevicesRequest& request, const AddDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDevicesOutcomeCallable addDevicesCallable(const Model::AddDevicesRequest& request) const;
			AddFilePermissionOutcome addFilePermission(const Model::AddFilePermissionRequest &request)const;
			void addFilePermissionAsync(const Model::AddFilePermissionRequest& request, const AddFilePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFilePermissionOutcomeCallable addFilePermissionCallable(const Model::AddFilePermissionRequest& request) const;
			AddUserToDesktopGroupOutcome addUserToDesktopGroup(const Model::AddUserToDesktopGroupRequest &request)const;
			void addUserToDesktopGroupAsync(const Model::AddUserToDesktopGroupRequest& request, const AddUserToDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserToDesktopGroupOutcomeCallable addUserToDesktopGroupCallable(const Model::AddUserToDesktopGroupRequest& request) const;
			ApplyAutoSnapshotPolicyOutcome applyAutoSnapshotPolicy(const Model::ApplyAutoSnapshotPolicyRequest &request)const;
			void applyAutoSnapshotPolicyAsync(const Model::ApplyAutoSnapshotPolicyRequest& request, const ApplyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyAutoSnapshotPolicyOutcomeCallable applyAutoSnapshotPolicyCallable(const Model::ApplyAutoSnapshotPolicyRequest& request) const;
			ApplyCoordinatePrivilegeOutcome applyCoordinatePrivilege(const Model::ApplyCoordinatePrivilegeRequest &request)const;
			void applyCoordinatePrivilegeAsync(const Model::ApplyCoordinatePrivilegeRequest& request, const ApplyCoordinatePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyCoordinatePrivilegeOutcomeCallable applyCoordinatePrivilegeCallable(const Model::ApplyCoordinatePrivilegeRequest& request) const;
			ApplyCoordinationForMonitoringOutcome applyCoordinationForMonitoring(const Model::ApplyCoordinationForMonitoringRequest &request)const;
			void applyCoordinationForMonitoringAsync(const Model::ApplyCoordinationForMonitoringRequest& request, const ApplyCoordinationForMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyCoordinationForMonitoringOutcomeCallable applyCoordinationForMonitoringCallable(const Model::ApplyCoordinationForMonitoringRequest& request) const;
			ApproveFotaUpdateOutcome approveFotaUpdate(const Model::ApproveFotaUpdateRequest &request)const;
			void approveFotaUpdateAsync(const Model::ApproveFotaUpdateRequest& request, const ApproveFotaUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApproveFotaUpdateOutcomeCallable approveFotaUpdateCallable(const Model::ApproveFotaUpdateRequest& request) const;
			AssociateNetworkPackageOutcome associateNetworkPackage(const Model::AssociateNetworkPackageRequest &request)const;
			void associateNetworkPackageAsync(const Model::AssociateNetworkPackageRequest& request, const AssociateNetworkPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateNetworkPackageOutcomeCallable associateNetworkPackageCallable(const Model::AssociateNetworkPackageRequest& request) const;
			AttachCenOutcome attachCen(const Model::AttachCenRequest &request)const;
			void attachCenAsync(const Model::AttachCenRequest& request, const AttachCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachCenOutcomeCallable attachCenCallable(const Model::AttachCenRequest& request) const;
			AttachEndUserOutcome attachEndUser(const Model::AttachEndUserRequest &request)const;
			void attachEndUserAsync(const Model::AttachEndUserRequest& request, const AttachEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachEndUserOutcomeCallable attachEndUserCallable(const Model::AttachEndUserRequest& request) const;
			CancelAutoSnapshotPolicyOutcome cancelAutoSnapshotPolicy(const Model::CancelAutoSnapshotPolicyRequest &request)const;
			void cancelAutoSnapshotPolicyAsync(const Model::CancelAutoSnapshotPolicyRequest& request, const CancelAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelAutoSnapshotPolicyOutcomeCallable cancelAutoSnapshotPolicyCallable(const Model::CancelAutoSnapshotPolicyRequest& request) const;
			CancelCdsFileShareLinkOutcome cancelCdsFileShareLink(const Model::CancelCdsFileShareLinkRequest &request)const;
			void cancelCdsFileShareLinkAsync(const Model::CancelCdsFileShareLinkRequest& request, const CancelCdsFileShareLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCdsFileShareLinkOutcomeCallable cancelCdsFileShareLinkCallable(const Model::CancelCdsFileShareLinkRequest& request) const;
			CancelCoordinationForMonitoringOutcome cancelCoordinationForMonitoring(const Model::CancelCoordinationForMonitoringRequest &request)const;
			void cancelCoordinationForMonitoringAsync(const Model::CancelCoordinationForMonitoringRequest& request, const CancelCoordinationForMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCoordinationForMonitoringOutcomeCallable cancelCoordinationForMonitoringCallable(const Model::CancelCoordinationForMonitoringRequest& request) const;
			CancelCopyImageOutcome cancelCopyImage(const Model::CancelCopyImageRequest &request)const;
			void cancelCopyImageAsync(const Model::CancelCopyImageRequest& request, const CancelCopyImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCopyImageOutcomeCallable cancelCopyImageCallable(const Model::CancelCopyImageRequest& request) const;
			ClonePolicyGroupOutcome clonePolicyGroup(const Model::ClonePolicyGroupRequest &request)const;
			void clonePolicyGroupAsync(const Model::ClonePolicyGroupRequest& request, const ClonePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClonePolicyGroupOutcomeCallable clonePolicyGroupCallable(const Model::ClonePolicyGroupRequest& request) const;
			CompleteCdsFileOutcome completeCdsFile(const Model::CompleteCdsFileRequest &request)const;
			void completeCdsFileAsync(const Model::CompleteCdsFileRequest& request, const CompleteCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompleteCdsFileOutcomeCallable completeCdsFileCallable(const Model::CompleteCdsFileRequest& request) const;
			ConfigADConnectorTrustOutcome configADConnectorTrust(const Model::ConfigADConnectorTrustRequest &request)const;
			void configADConnectorTrustAsync(const Model::ConfigADConnectorTrustRequest& request, const ConfigADConnectorTrustAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigADConnectorTrustOutcomeCallable configADConnectorTrustCallable(const Model::ConfigADConnectorTrustRequest& request) const;
			ConfigADConnectorUserOutcome configADConnectorUser(const Model::ConfigADConnectorUserRequest &request)const;
			void configADConnectorUserAsync(const Model::ConfigADConnectorUserRequest& request, const ConfigADConnectorUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigADConnectorUserOutcomeCallable configADConnectorUserCallable(const Model::ConfigADConnectorUserRequest& request) const;
			CopyCdsFileOutcome copyCdsFile(const Model::CopyCdsFileRequest &request)const;
			void copyCdsFileAsync(const Model::CopyCdsFileRequest& request, const CopyCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyCdsFileOutcomeCallable copyCdsFileCallable(const Model::CopyCdsFileRequest& request) const;
			CopyImageOutcome copyImage(const Model::CopyImageRequest &request)const;
			void copyImageAsync(const Model::CopyImageRequest& request, const CopyImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyImageOutcomeCallable copyImageCallable(const Model::CopyImageRequest& request) const;
			CreateADConnectorDirectoryOutcome createADConnectorDirectory(const Model::CreateADConnectorDirectoryRequest &request)const;
			void createADConnectorDirectoryAsync(const Model::CreateADConnectorDirectoryRequest& request, const CreateADConnectorDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateADConnectorDirectoryOutcomeCallable createADConnectorDirectoryCallable(const Model::CreateADConnectorDirectoryRequest& request) const;
			CreateADConnectorOfficeSiteOutcome createADConnectorOfficeSite(const Model::CreateADConnectorOfficeSiteRequest &request)const;
			void createADConnectorOfficeSiteAsync(const Model::CreateADConnectorOfficeSiteRequest& request, const CreateADConnectorOfficeSiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateADConnectorOfficeSiteOutcomeCallable createADConnectorOfficeSiteCallable(const Model::CreateADConnectorOfficeSiteRequest& request) const;
			CreateAndBindNasFileSystemOutcome createAndBindNasFileSystem(const Model::CreateAndBindNasFileSystemRequest &request)const;
			void createAndBindNasFileSystemAsync(const Model::CreateAndBindNasFileSystemRequest& request, const CreateAndBindNasFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAndBindNasFileSystemOutcomeCallable createAndBindNasFileSystemCallable(const Model::CreateAndBindNasFileSystemRequest& request) const;
			CreateAutoSnapshotPolicyOutcome createAutoSnapshotPolicy(const Model::CreateAutoSnapshotPolicyRequest &request)const;
			void createAutoSnapshotPolicyAsync(const Model::CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAutoSnapshotPolicyOutcomeCallable createAutoSnapshotPolicyCallable(const Model::CreateAutoSnapshotPolicyRequest& request) const;
			CreateBundleOutcome createBundle(const Model::CreateBundleRequest &request)const;
			void createBundleAsync(const Model::CreateBundleRequest& request, const CreateBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBundleOutcomeCallable createBundleCallable(const Model::CreateBundleRequest& request) const;
			CreateCdsFileOutcome createCdsFile(const Model::CreateCdsFileRequest &request)const;
			void createCdsFileAsync(const Model::CreateCdsFileRequest& request, const CreateCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCdsFileOutcomeCallable createCdsFileCallable(const Model::CreateCdsFileRequest& request) const;
			CreateCdsFileShareLinkOutcome createCdsFileShareLink(const Model::CreateCdsFileShareLinkRequest &request)const;
			void createCdsFileShareLinkAsync(const Model::CreateCdsFileShareLinkRequest& request, const CreateCdsFileShareLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCdsFileShareLinkOutcomeCallable createCdsFileShareLinkCallable(const Model::CreateCdsFileShareLinkRequest& request) const;
			CreateDesktopGroupOutcome createDesktopGroup(const Model::CreateDesktopGroupRequest &request)const;
			void createDesktopGroupAsync(const Model::CreateDesktopGroupRequest& request, const CreateDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDesktopGroupOutcomeCallable createDesktopGroupCallable(const Model::CreateDesktopGroupRequest& request) const;
			CreateDesktopsOutcome createDesktops(const Model::CreateDesktopsRequest &request)const;
			void createDesktopsAsync(const Model::CreateDesktopsRequest& request, const CreateDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDesktopsOutcomeCallable createDesktopsCallable(const Model::CreateDesktopsRequest& request) const;
			CreateDiskEncryptionServiceOutcome createDiskEncryptionService(const Model::CreateDiskEncryptionServiceRequest &request)const;
			void createDiskEncryptionServiceAsync(const Model::CreateDiskEncryptionServiceRequest& request, const CreateDiskEncryptionServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDiskEncryptionServiceOutcomeCallable createDiskEncryptionServiceCallable(const Model::CreateDiskEncryptionServiceRequest& request) const;
			CreateImageOutcome createImage(const Model::CreateImageRequest &request)const;
			void createImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateImageOutcomeCallable createImageCallable(const Model::CreateImageRequest& request) const;
			CreateNASFileSystemOutcome createNASFileSystem(const Model::CreateNASFileSystemRequest &request)const;
			void createNASFileSystemAsync(const Model::CreateNASFileSystemRequest& request, const CreateNASFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNASFileSystemOutcomeCallable createNASFileSystemCallable(const Model::CreateNASFileSystemRequest& request) const;
			CreateNetworkPackageOutcome createNetworkPackage(const Model::CreateNetworkPackageRequest &request)const;
			void createNetworkPackageAsync(const Model::CreateNetworkPackageRequest& request, const CreateNetworkPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkPackageOutcomeCallable createNetworkPackageCallable(const Model::CreateNetworkPackageRequest& request) const;
			CreatePolicyGroupOutcome createPolicyGroup(const Model::CreatePolicyGroupRequest &request)const;
			void createPolicyGroupAsync(const Model::CreatePolicyGroupRequest& request, const CreatePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePolicyGroupOutcomeCallable createPolicyGroupCallable(const Model::CreatePolicyGroupRequest& request) const;
			CreateRAMDirectoryOutcome createRAMDirectory(const Model::CreateRAMDirectoryRequest &request)const;
			void createRAMDirectoryAsync(const Model::CreateRAMDirectoryRequest& request, const CreateRAMDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRAMDirectoryOutcomeCallable createRAMDirectoryCallable(const Model::CreateRAMDirectoryRequest& request) const;
			CreateSimpleOfficeSiteOutcome createSimpleOfficeSite(const Model::CreateSimpleOfficeSiteRequest &request)const;
			void createSimpleOfficeSiteAsync(const Model::CreateSimpleOfficeSiteRequest& request, const CreateSimpleOfficeSiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSimpleOfficeSiteOutcomeCallable createSimpleOfficeSiteCallable(const Model::CreateSimpleOfficeSiteRequest& request) const;
			CreateSnapshotOutcome createSnapshot(const Model::CreateSnapshotRequest &request)const;
			void createSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnapshotOutcomeCallable createSnapshotCallable(const Model::CreateSnapshotRequest& request) const;
			DeleteAutoSnapshotPolicyOutcome deleteAutoSnapshotPolicy(const Model::DeleteAutoSnapshotPolicyRequest &request)const;
			void deleteAutoSnapshotPolicyAsync(const Model::DeleteAutoSnapshotPolicyRequest& request, const DeleteAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutoSnapshotPolicyOutcomeCallable deleteAutoSnapshotPolicyCallable(const Model::DeleteAutoSnapshotPolicyRequest& request) const;
			DeleteBundlesOutcome deleteBundles(const Model::DeleteBundlesRequest &request)const;
			void deleteBundlesAsync(const Model::DeleteBundlesRequest& request, const DeleteBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBundlesOutcomeCallable deleteBundlesCallable(const Model::DeleteBundlesRequest& request) const;
			DeleteCdsFileOutcome deleteCdsFile(const Model::DeleteCdsFileRequest &request)const;
			void deleteCdsFileAsync(const Model::DeleteCdsFileRequest& request, const DeleteCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCdsFileOutcomeCallable deleteCdsFileCallable(const Model::DeleteCdsFileRequest& request) const;
			DeleteCloudDriveGroupsOutcome deleteCloudDriveGroups(const Model::DeleteCloudDriveGroupsRequest &request)const;
			void deleteCloudDriveGroupsAsync(const Model::DeleteCloudDriveGroupsRequest& request, const DeleteCloudDriveGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCloudDriveGroupsOutcomeCallable deleteCloudDriveGroupsCallable(const Model::DeleteCloudDriveGroupsRequest& request) const;
			DeleteCloudDriveUsersOutcome deleteCloudDriveUsers(const Model::DeleteCloudDriveUsersRequest &request)const;
			void deleteCloudDriveUsersAsync(const Model::DeleteCloudDriveUsersRequest& request, const DeleteCloudDriveUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCloudDriveUsersOutcomeCallable deleteCloudDriveUsersCallable(const Model::DeleteCloudDriveUsersRequest& request) const;
			DeleteDesktopGroupOutcome deleteDesktopGroup(const Model::DeleteDesktopGroupRequest &request)const;
			void deleteDesktopGroupAsync(const Model::DeleteDesktopGroupRequest& request, const DeleteDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDesktopGroupOutcomeCallable deleteDesktopGroupCallable(const Model::DeleteDesktopGroupRequest& request) const;
			DeleteDesktopsOutcome deleteDesktops(const Model::DeleteDesktopsRequest &request)const;
			void deleteDesktopsAsync(const Model::DeleteDesktopsRequest& request, const DeleteDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDesktopsOutcomeCallable deleteDesktopsCallable(const Model::DeleteDesktopsRequest& request) const;
			DeleteDevicesOutcome deleteDevices(const Model::DeleteDevicesRequest &request)const;
			void deleteDevicesAsync(const Model::DeleteDevicesRequest& request, const DeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDevicesOutcomeCallable deleteDevicesCallable(const Model::DeleteDevicesRequest& request) const;
			DeleteDirectoriesOutcome deleteDirectories(const Model::DeleteDirectoriesRequest &request)const;
			void deleteDirectoriesAsync(const Model::DeleteDirectoriesRequest& request, const DeleteDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDirectoriesOutcomeCallable deleteDirectoriesCallable(const Model::DeleteDirectoriesRequest& request) const;
			DeleteImagesOutcome deleteImages(const Model::DeleteImagesRequest &request)const;
			void deleteImagesAsync(const Model::DeleteImagesRequest& request, const DeleteImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImagesOutcomeCallable deleteImagesCallable(const Model::DeleteImagesRequest& request) const;
			DeleteNASFileSystemsOutcome deleteNASFileSystems(const Model::DeleteNASFileSystemsRequest &request)const;
			void deleteNASFileSystemsAsync(const Model::DeleteNASFileSystemsRequest& request, const DeleteNASFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNASFileSystemsOutcomeCallable deleteNASFileSystemsCallable(const Model::DeleteNASFileSystemsRequest& request) const;
			DeleteNetworkPackagesOutcome deleteNetworkPackages(const Model::DeleteNetworkPackagesRequest &request)const;
			void deleteNetworkPackagesAsync(const Model::DeleteNetworkPackagesRequest& request, const DeleteNetworkPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkPackagesOutcomeCallable deleteNetworkPackagesCallable(const Model::DeleteNetworkPackagesRequest& request) const;
			DeleteOfficeSitesOutcome deleteOfficeSites(const Model::DeleteOfficeSitesRequest &request)const;
			void deleteOfficeSitesAsync(const Model::DeleteOfficeSitesRequest& request, const DeleteOfficeSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOfficeSitesOutcomeCallable deleteOfficeSitesCallable(const Model::DeleteOfficeSitesRequest& request) const;
			DeletePolicyGroupsOutcome deletePolicyGroups(const Model::DeletePolicyGroupsRequest &request)const;
			void deletePolicyGroupsAsync(const Model::DeletePolicyGroupsRequest& request, const DeletePolicyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePolicyGroupsOutcomeCallable deletePolicyGroupsCallable(const Model::DeletePolicyGroupsRequest& request) const;
			DeleteSnapshotOutcome deleteSnapshot(const Model::DeleteSnapshotRequest &request)const;
			void deleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotOutcomeCallable deleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;
			DeleteVirtualMFADeviceOutcome deleteVirtualMFADevice(const Model::DeleteVirtualMFADeviceRequest &request)const;
			void deleteVirtualMFADeviceAsync(const Model::DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVirtualMFADeviceOutcomeCallable deleteVirtualMFADeviceCallable(const Model::DeleteVirtualMFADeviceRequest& request) const;
			DescribeAlarmEventStackInfoOutcome describeAlarmEventStackInfo(const Model::DescribeAlarmEventStackInfoRequest &request)const;
			void describeAlarmEventStackInfoAsync(const Model::DescribeAlarmEventStackInfoRequest& request, const DescribeAlarmEventStackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventStackInfoOutcomeCallable describeAlarmEventStackInfoCallable(const Model::DescribeAlarmEventStackInfoRequest& request) const;
			DescribeAutoSnapshotPolicyOutcome describeAutoSnapshotPolicy(const Model::DescribeAutoSnapshotPolicyRequest &request)const;
			void describeAutoSnapshotPolicyAsync(const Model::DescribeAutoSnapshotPolicyRequest& request, const DescribeAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoSnapshotPolicyOutcomeCallable describeAutoSnapshotPolicyCallable(const Model::DescribeAutoSnapshotPolicyRequest& request) const;
			DescribeBundlesOutcome describeBundles(const Model::DescribeBundlesRequest &request)const;
			void describeBundlesAsync(const Model::DescribeBundlesRequest& request, const DescribeBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBundlesOutcomeCallable describeBundlesCallable(const Model::DescribeBundlesRequest& request) const;
			DescribeCdsFileShareLinksOutcome describeCdsFileShareLinks(const Model::DescribeCdsFileShareLinksRequest &request)const;
			void describeCdsFileShareLinksAsync(const Model::DescribeCdsFileShareLinksRequest& request, const DescribeCdsFileShareLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCdsFileShareLinksOutcomeCallable describeCdsFileShareLinksCallable(const Model::DescribeCdsFileShareLinksRequest& request) const;
			DescribeCensOutcome describeCens(const Model::DescribeCensRequest &request)const;
			void describeCensAsync(const Model::DescribeCensRequest& request, const DescribeCensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCensOutcomeCallable describeCensCallable(const Model::DescribeCensRequest& request) const;
			DescribeClientEventsOutcome describeClientEvents(const Model::DescribeClientEventsRequest &request)const;
			void describeClientEventsAsync(const Model::DescribeClientEventsRequest& request, const DescribeClientEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClientEventsOutcomeCallable describeClientEventsCallable(const Model::DescribeClientEventsRequest& request) const;
			DescribeCloudDriveGroupsOutcome describeCloudDriveGroups(const Model::DescribeCloudDriveGroupsRequest &request)const;
			void describeCloudDriveGroupsAsync(const Model::DescribeCloudDriveGroupsRequest& request, const DescribeCloudDriveGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudDriveGroupsOutcomeCallable describeCloudDriveGroupsCallable(const Model::DescribeCloudDriveGroupsRequest& request) const;
			DescribeCloudDrivePermissionsOutcome describeCloudDrivePermissions(const Model::DescribeCloudDrivePermissionsRequest &request)const;
			void describeCloudDrivePermissionsAsync(const Model::DescribeCloudDrivePermissionsRequest& request, const DescribeCloudDrivePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudDrivePermissionsOutcomeCallable describeCloudDrivePermissionsCallable(const Model::DescribeCloudDrivePermissionsRequest& request) const;
			DescribeCustomizedListHeadersOutcome describeCustomizedListHeaders(const Model::DescribeCustomizedListHeadersRequest &request)const;
			void describeCustomizedListHeadersAsync(const Model::DescribeCustomizedListHeadersRequest& request, const DescribeCustomizedListHeadersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizedListHeadersOutcomeCallable describeCustomizedListHeadersCallable(const Model::DescribeCustomizedListHeadersRequest& request) const;
			DescribeDesktopGroupsOutcome describeDesktopGroups(const Model::DescribeDesktopGroupsRequest &request)const;
			void describeDesktopGroupsAsync(const Model::DescribeDesktopGroupsRequest& request, const DescribeDesktopGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDesktopGroupsOutcomeCallable describeDesktopGroupsCallable(const Model::DescribeDesktopGroupsRequest& request) const;
			DescribeDesktopIdsByVulNamesOutcome describeDesktopIdsByVulNames(const Model::DescribeDesktopIdsByVulNamesRequest &request)const;
			void describeDesktopIdsByVulNamesAsync(const Model::DescribeDesktopIdsByVulNamesRequest& request, const DescribeDesktopIdsByVulNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDesktopIdsByVulNamesOutcomeCallable describeDesktopIdsByVulNamesCallable(const Model::DescribeDesktopIdsByVulNamesRequest& request) const;
			DescribeDesktopTypesOutcome describeDesktopTypes(const Model::DescribeDesktopTypesRequest &request)const;
			void describeDesktopTypesAsync(const Model::DescribeDesktopTypesRequest& request, const DescribeDesktopTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDesktopTypesOutcomeCallable describeDesktopTypesCallable(const Model::DescribeDesktopTypesRequest& request) const;
			DescribeDesktopsOutcome describeDesktops(const Model::DescribeDesktopsRequest &request)const;
			void describeDesktopsAsync(const Model::DescribeDesktopsRequest& request, const DescribeDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDesktopsOutcomeCallable describeDesktopsCallable(const Model::DescribeDesktopsRequest& request) const;
			DescribeDesktopsInGroupOutcome describeDesktopsInGroup(const Model::DescribeDesktopsInGroupRequest &request)const;
			void describeDesktopsInGroupAsync(const Model::DescribeDesktopsInGroupRequest& request, const DescribeDesktopsInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDesktopsInGroupOutcomeCallable describeDesktopsInGroupCallable(const Model::DescribeDesktopsInGroupRequest& request) const;
			DescribeDevicesOutcome describeDevices(const Model::DescribeDevicesRequest &request)const;
			void describeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDevicesOutcomeCallable describeDevicesCallable(const Model::DescribeDevicesRequest& request) const;
			DescribeDirectoriesOutcome describeDirectories(const Model::DescribeDirectoriesRequest &request)const;
			void describeDirectoriesAsync(const Model::DescribeDirectoriesRequest& request, const DescribeDirectoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDirectoriesOutcomeCallable describeDirectoriesCallable(const Model::DescribeDirectoriesRequest& request) const;
			DescribeFlowMetricOutcome describeFlowMetric(const Model::DescribeFlowMetricRequest &request)const;
			void describeFlowMetricAsync(const Model::DescribeFlowMetricRequest& request, const DescribeFlowMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowMetricOutcomeCallable describeFlowMetricCallable(const Model::DescribeFlowMetricRequest& request) const;
			DescribeFlowStatisticOutcome describeFlowStatistic(const Model::DescribeFlowStatisticRequest &request)const;
			void describeFlowStatisticAsync(const Model::DescribeFlowStatisticRequest& request, const DescribeFlowStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowStatisticOutcomeCallable describeFlowStatisticCallable(const Model::DescribeFlowStatisticRequest& request) const;
			DescribeFotaPendingDesktopsOutcome describeFotaPendingDesktops(const Model::DescribeFotaPendingDesktopsRequest &request)const;
			void describeFotaPendingDesktopsAsync(const Model::DescribeFotaPendingDesktopsRequest& request, const DescribeFotaPendingDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFotaPendingDesktopsOutcomeCallable describeFotaPendingDesktopsCallable(const Model::DescribeFotaPendingDesktopsRequest& request) const;
			DescribeFotaTasksOutcome describeFotaTasks(const Model::DescribeFotaTasksRequest &request)const;
			void describeFotaTasksAsync(const Model::DescribeFotaTasksRequest& request, const DescribeFotaTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFotaTasksOutcomeCallable describeFotaTasksCallable(const Model::DescribeFotaTasksRequest& request) const;
			DescribeFrontVulPatchListOutcome describeFrontVulPatchList(const Model::DescribeFrontVulPatchListRequest &request)const;
			void describeFrontVulPatchListAsync(const Model::DescribeFrontVulPatchListRequest& request, const DescribeFrontVulPatchListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFrontVulPatchListOutcomeCallable describeFrontVulPatchListCallable(const Model::DescribeFrontVulPatchListRequest& request) const;
			DescribeGroupedVulOutcome describeGroupedVul(const Model::DescribeGroupedVulRequest &request)const;
			void describeGroupedVulAsync(const Model::DescribeGroupedVulRequest& request, const DescribeGroupedVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupedVulOutcomeCallable describeGroupedVulCallable(const Model::DescribeGroupedVulRequest& request) const;
			DescribeImageModifiedRecordsOutcome describeImageModifiedRecords(const Model::DescribeImageModifiedRecordsRequest &request)const;
			void describeImageModifiedRecordsAsync(const Model::DescribeImageModifiedRecordsRequest& request, const DescribeImageModifiedRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageModifiedRecordsOutcomeCallable describeImageModifiedRecordsCallable(const Model::DescribeImageModifiedRecordsRequest& request) const;
			DescribeImagePermissionOutcome describeImagePermission(const Model::DescribeImagePermissionRequest &request)const;
			void describeImagePermissionAsync(const Model::DescribeImagePermissionRequest& request, const DescribeImagePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImagePermissionOutcomeCallable describeImagePermissionCallable(const Model::DescribeImagePermissionRequest& request) const;
			DescribeImagesOutcome describeImages(const Model::DescribeImagesRequest &request)const;
			void describeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImagesOutcomeCallable describeImagesCallable(const Model::DescribeImagesRequest& request) const;
			DescribeInvocationsOutcome describeInvocations(const Model::DescribeInvocationsRequest &request)const;
			void describeInvocationsAsync(const Model::DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInvocationsOutcomeCallable describeInvocationsCallable(const Model::DescribeInvocationsRequest& request) const;
			DescribeKmsKeysOutcome describeKmsKeys(const Model::DescribeKmsKeysRequest &request)const;
			void describeKmsKeysAsync(const Model::DescribeKmsKeysRequest& request, const DescribeKmsKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKmsKeysOutcomeCallable describeKmsKeysCallable(const Model::DescribeKmsKeysRequest& request) const;
			DescribeNASFileSystemsOutcome describeNASFileSystems(const Model::DescribeNASFileSystemsRequest &request)const;
			void describeNASFileSystemsAsync(const Model::DescribeNASFileSystemsRequest& request, const DescribeNASFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNASFileSystemsOutcomeCallable describeNASFileSystemsCallable(const Model::DescribeNASFileSystemsRequest& request) const;
			DescribeNetworkPackagesOutcome describeNetworkPackages(const Model::DescribeNetworkPackagesRequest &request)const;
			void describeNetworkPackagesAsync(const Model::DescribeNetworkPackagesRequest& request, const DescribeNetworkPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkPackagesOutcomeCallable describeNetworkPackagesCallable(const Model::DescribeNetworkPackagesRequest& request) const;
			DescribeOfficeSitesOutcome describeOfficeSites(const Model::DescribeOfficeSitesRequest &request)const;
			void describeOfficeSitesAsync(const Model::DescribeOfficeSitesRequest& request, const DescribeOfficeSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOfficeSitesOutcomeCallable describeOfficeSitesCallable(const Model::DescribeOfficeSitesRequest& request) const;
			DescribePolicyGroupsOutcome describePolicyGroups(const Model::DescribePolicyGroupsRequest &request)const;
			void describePolicyGroupsAsync(const Model::DescribePolicyGroupsRequest& request, const DescribePolicyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePolicyGroupsOutcomeCallable describePolicyGroupsCallable(const Model::DescribePolicyGroupsRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeScanTaskProgressOutcome describeScanTaskProgress(const Model::DescribeScanTaskProgressRequest &request)const;
			void describeScanTaskProgressAsync(const Model::DescribeScanTaskProgressRequest& request, const DescribeScanTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScanTaskProgressOutcomeCallable describeScanTaskProgressCallable(const Model::DescribeScanTaskProgressRequest& request) const;
			DescribeSecurityEventOperationStatusOutcome describeSecurityEventOperationStatus(const Model::DescribeSecurityEventOperationStatusRequest &request)const;
			void describeSecurityEventOperationStatusAsync(const Model::DescribeSecurityEventOperationStatusRequest& request, const DescribeSecurityEventOperationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityEventOperationStatusOutcomeCallable describeSecurityEventOperationStatusCallable(const Model::DescribeSecurityEventOperationStatusRequest& request) const;
			DescribeSecurityEventOperationsOutcome describeSecurityEventOperations(const Model::DescribeSecurityEventOperationsRequest &request)const;
			void describeSecurityEventOperationsAsync(const Model::DescribeSecurityEventOperationsRequest& request, const DescribeSecurityEventOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityEventOperationsOutcomeCallable describeSecurityEventOperationsCallable(const Model::DescribeSecurityEventOperationsRequest& request) const;
			DescribeSnapshotsOutcome describeSnapshots(const Model::DescribeSnapshotsRequest &request)const;
			void describeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotsOutcomeCallable describeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;
			DescribeSuspEventOverviewOutcome describeSuspEventOverview(const Model::DescribeSuspEventOverviewRequest &request)const;
			void describeSuspEventOverviewAsync(const Model::DescribeSuspEventOverviewRequest& request, const DescribeSuspEventOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventOverviewOutcomeCallable describeSuspEventOverviewCallable(const Model::DescribeSuspEventOverviewRequest& request) const;
			DescribeSuspEventQuaraFilesOutcome describeSuspEventQuaraFiles(const Model::DescribeSuspEventQuaraFilesRequest &request)const;
			void describeSuspEventQuaraFilesAsync(const Model::DescribeSuspEventQuaraFilesRequest& request, const DescribeSuspEventQuaraFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventQuaraFilesOutcomeCallable describeSuspEventQuaraFilesCallable(const Model::DescribeSuspEventQuaraFilesRequest& request) const;
			DescribeSuspEventsOutcome describeSuspEvents(const Model::DescribeSuspEventsRequest &request)const;
			void describeSuspEventsAsync(const Model::DescribeSuspEventsRequest& request, const DescribeSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventsOutcomeCallable describeSuspEventsCallable(const Model::DescribeSuspEventsRequest& request) const;
			DescribeUserConnectionRecordsOutcome describeUserConnectionRecords(const Model::DescribeUserConnectionRecordsRequest &request)const;
			void describeUserConnectionRecordsAsync(const Model::DescribeUserConnectionRecordsRequest& request, const DescribeUserConnectionRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserConnectionRecordsOutcomeCallable describeUserConnectionRecordsCallable(const Model::DescribeUserConnectionRecordsRequest& request) const;
			DescribeUserProfilePathRulesOutcome describeUserProfilePathRules(const Model::DescribeUserProfilePathRulesRequest &request)const;
			void describeUserProfilePathRulesAsync(const Model::DescribeUserProfilePathRulesRequest& request, const DescribeUserProfilePathRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserProfilePathRulesOutcomeCallable describeUserProfilePathRulesCallable(const Model::DescribeUserProfilePathRulesRequest& request) const;
			DescribeUsersInGroupOutcome describeUsersInGroup(const Model::DescribeUsersInGroupRequest &request)const;
			void describeUsersInGroupAsync(const Model::DescribeUsersInGroupRequest& request, const DescribeUsersInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUsersInGroupOutcomeCallable describeUsersInGroupCallable(const Model::DescribeUsersInGroupRequest& request) const;
			DescribeUsersPasswordOutcome describeUsersPassword(const Model::DescribeUsersPasswordRequest &request)const;
			void describeUsersPasswordAsync(const Model::DescribeUsersPasswordRequest& request, const DescribeUsersPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUsersPasswordOutcomeCallable describeUsersPasswordCallable(const Model::DescribeUsersPasswordRequest& request) const;
			DescribeVirtualMFADevicesOutcome describeVirtualMFADevices(const Model::DescribeVirtualMFADevicesRequest &request)const;
			void describeVirtualMFADevicesAsync(const Model::DescribeVirtualMFADevicesRequest& request, const DescribeVirtualMFADevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVirtualMFADevicesOutcomeCallable describeVirtualMFADevicesCallable(const Model::DescribeVirtualMFADevicesRequest& request) const;
			DescribeVulDetailsOutcome describeVulDetails(const Model::DescribeVulDetailsRequest &request)const;
			void describeVulDetailsAsync(const Model::DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulDetailsOutcomeCallable describeVulDetailsCallable(const Model::DescribeVulDetailsRequest& request) const;
			DescribeVulListOutcome describeVulList(const Model::DescribeVulListRequest &request)const;
			void describeVulListAsync(const Model::DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulListOutcomeCallable describeVulListCallable(const Model::DescribeVulListRequest& request) const;
			DescribeVulOverviewOutcome describeVulOverview(const Model::DescribeVulOverviewRequest &request)const;
			void describeVulOverviewAsync(const Model::DescribeVulOverviewRequest& request, const DescribeVulOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulOverviewOutcomeCallable describeVulOverviewCallable(const Model::DescribeVulOverviewRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			DetachCenOutcome detachCen(const Model::DetachCenRequest &request)const;
			void detachCenAsync(const Model::DetachCenRequest& request, const DetachCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachCenOutcomeCallable detachCenCallable(const Model::DetachCenRequest& request) const;
			DetachEndUserOutcome detachEndUser(const Model::DetachEndUserRequest &request)const;
			void detachEndUserAsync(const Model::DetachEndUserRequest& request, const DetachEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachEndUserOutcomeCallable detachEndUserCallable(const Model::DetachEndUserRequest& request) const;
			DisableDesktopsInGroupOutcome disableDesktopsInGroup(const Model::DisableDesktopsInGroupRequest &request)const;
			void disableDesktopsInGroupAsync(const Model::DisableDesktopsInGroupRequest& request, const DisableDesktopsInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDesktopsInGroupOutcomeCallable disableDesktopsInGroupCallable(const Model::DisableDesktopsInGroupRequest& request) const;
			DissociateNetworkPackageOutcome dissociateNetworkPackage(const Model::DissociateNetworkPackageRequest &request)const;
			void dissociateNetworkPackageAsync(const Model::DissociateNetworkPackageRequest& request, const DissociateNetworkPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateNetworkPackageOutcomeCallable dissociateNetworkPackageCallable(const Model::DissociateNetworkPackageRequest& request) const;
			ExportClientEventsOutcome exportClientEvents(const Model::ExportClientEventsRequest &request)const;
			void exportClientEventsAsync(const Model::ExportClientEventsRequest& request, const ExportClientEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportClientEventsOutcomeCallable exportClientEventsCallable(const Model::ExportClientEventsRequest& request) const;
			ExportDesktopGroupInfoOutcome exportDesktopGroupInfo(const Model::ExportDesktopGroupInfoRequest &request)const;
			void exportDesktopGroupInfoAsync(const Model::ExportDesktopGroupInfoRequest& request, const ExportDesktopGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportDesktopGroupInfoOutcomeCallable exportDesktopGroupInfoCallable(const Model::ExportDesktopGroupInfoRequest& request) const;
			ExportDesktopListInfoOutcome exportDesktopListInfo(const Model::ExportDesktopListInfoRequest &request)const;
			void exportDesktopListInfoAsync(const Model::ExportDesktopListInfoRequest& request, const ExportDesktopListInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportDesktopListInfoOutcomeCallable exportDesktopListInfoCallable(const Model::ExportDesktopListInfoRequest& request) const;
			GetConnectionTicketOutcome getConnectionTicket(const Model::GetConnectionTicketRequest &request)const;
			void getConnectionTicketAsync(const Model::GetConnectionTicketRequest& request, const GetConnectionTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConnectionTicketOutcomeCallable getConnectionTicketCallable(const Model::GetConnectionTicketRequest& request) const;
			GetDesktopGroupDetailOutcome getDesktopGroupDetail(const Model::GetDesktopGroupDetailRequest &request)const;
			void getDesktopGroupDetailAsync(const Model::GetDesktopGroupDetailRequest& request, const GetDesktopGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDesktopGroupDetailOutcomeCallable getDesktopGroupDetailCallable(const Model::GetDesktopGroupDetailRequest& request) const;
			GetOfficeSiteSsoStatusOutcome getOfficeSiteSsoStatus(const Model::GetOfficeSiteSsoStatusRequest &request)const;
			void getOfficeSiteSsoStatusAsync(const Model::GetOfficeSiteSsoStatusRequest& request, const GetOfficeSiteSsoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOfficeSiteSsoStatusOutcomeCallable getOfficeSiteSsoStatusCallable(const Model::GetOfficeSiteSsoStatusRequest& request) const;
			GetSpMetadataOutcome getSpMetadata(const Model::GetSpMetadataRequest &request)const;
			void getSpMetadataAsync(const Model::GetSpMetadataRequest& request, const GetSpMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSpMetadataOutcomeCallable getSpMetadataCallable(const Model::GetSpMetadataRequest& request) const;
			HandleSecurityEventsOutcome handleSecurityEvents(const Model::HandleSecurityEventsRequest &request)const;
			void handleSecurityEventsAsync(const Model::HandleSecurityEventsRequest& request, const HandleSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HandleSecurityEventsOutcomeCallable handleSecurityEventsCallable(const Model::HandleSecurityEventsRequest& request) const;
			HibernateDesktopsOutcome hibernateDesktops(const Model::HibernateDesktopsRequest &request)const;
			void hibernateDesktopsAsync(const Model::HibernateDesktopsRequest& request, const HibernateDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HibernateDesktopsOutcomeCallable hibernateDesktopsCallable(const Model::HibernateDesktopsRequest& request) const;
			ListCdsFilesOutcome listCdsFiles(const Model::ListCdsFilesRequest &request)const;
			void listCdsFilesAsync(const Model::ListCdsFilesRequest& request, const ListCdsFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCdsFilesOutcomeCallable listCdsFilesCallable(const Model::ListCdsFilesRequest& request) const;
			ListDirectoryUsersOutcome listDirectoryUsers(const Model::ListDirectoryUsersRequest &request)const;
			void listDirectoryUsersAsync(const Model::ListDirectoryUsersRequest& request, const ListDirectoryUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDirectoryUsersOutcomeCallable listDirectoryUsersCallable(const Model::ListDirectoryUsersRequest& request) const;
			ListFilePermissionOutcome listFilePermission(const Model::ListFilePermissionRequest &request)const;
			void listFilePermissionAsync(const Model::ListFilePermissionRequest& request, const ListFilePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFilePermissionOutcomeCallable listFilePermissionCallable(const Model::ListFilePermissionRequest& request) const;
			ListOfficeSiteOverviewOutcome listOfficeSiteOverview(const Model::ListOfficeSiteOverviewRequest &request)const;
			void listOfficeSiteOverviewAsync(const Model::ListOfficeSiteOverviewRequest& request, const ListOfficeSiteOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOfficeSiteOverviewOutcomeCallable listOfficeSiteOverviewCallable(const Model::ListOfficeSiteOverviewRequest& request) const;
			ListOfficeSiteUsersOutcome listOfficeSiteUsers(const Model::ListOfficeSiteUsersRequest &request)const;
			void listOfficeSiteUsersAsync(const Model::ListOfficeSiteUsersRequest& request, const ListOfficeSiteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOfficeSiteUsersOutcomeCallable listOfficeSiteUsersCallable(const Model::ListOfficeSiteUsersRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListUserAdOrganizationUnitsOutcome listUserAdOrganizationUnits(const Model::ListUserAdOrganizationUnitsRequest &request)const;
			void listUserAdOrganizationUnitsAsync(const Model::ListUserAdOrganizationUnitsRequest& request, const ListUserAdOrganizationUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserAdOrganizationUnitsOutcomeCallable listUserAdOrganizationUnitsCallable(const Model::ListUserAdOrganizationUnitsRequest& request) const;
			LockVirtualMFADeviceOutcome lockVirtualMFADevice(const Model::LockVirtualMFADeviceRequest &request)const;
			void lockVirtualMFADeviceAsync(const Model::LockVirtualMFADeviceRequest& request, const LockVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LockVirtualMFADeviceOutcomeCallable lockVirtualMFADeviceCallable(const Model::LockVirtualMFADeviceRequest& request) const;
			MigrateDesktopsOutcome migrateDesktops(const Model::MigrateDesktopsRequest &request)const;
			void migrateDesktopsAsync(const Model::MigrateDesktopsRequest& request, const MigrateDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateDesktopsOutcomeCallable migrateDesktopsCallable(const Model::MigrateDesktopsRequest& request) const;
			ModifyADConnectorDirectoryOutcome modifyADConnectorDirectory(const Model::ModifyADConnectorDirectoryRequest &request)const;
			void modifyADConnectorDirectoryAsync(const Model::ModifyADConnectorDirectoryRequest& request, const ModifyADConnectorDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyADConnectorDirectoryOutcomeCallable modifyADConnectorDirectoryCallable(const Model::ModifyADConnectorDirectoryRequest& request) const;
			ModifyADConnectorOfficeSiteOutcome modifyADConnectorOfficeSite(const Model::ModifyADConnectorOfficeSiteRequest &request)const;
			void modifyADConnectorOfficeSiteAsync(const Model::ModifyADConnectorOfficeSiteRequest& request, const ModifyADConnectorOfficeSiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyADConnectorOfficeSiteOutcomeCallable modifyADConnectorOfficeSiteCallable(const Model::ModifyADConnectorOfficeSiteRequest& request) const;
			ModifyAutoSnapshotPolicyOutcome modifyAutoSnapshotPolicy(const Model::ModifyAutoSnapshotPolicyRequest &request)const;
			void modifyAutoSnapshotPolicyAsync(const Model::ModifyAutoSnapshotPolicyRequest& request, const ModifyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoSnapshotPolicyOutcomeCallable modifyAutoSnapshotPolicyCallable(const Model::ModifyAutoSnapshotPolicyRequest& request) const;
			ModifyBundleOutcome modifyBundle(const Model::ModifyBundleRequest &request)const;
			void modifyBundleAsync(const Model::ModifyBundleRequest& request, const ModifyBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBundleOutcomeCallable modifyBundleCallable(const Model::ModifyBundleRequest& request) const;
			ModifyCdsFileOutcome modifyCdsFile(const Model::ModifyCdsFileRequest &request)const;
			void modifyCdsFileAsync(const Model::ModifyCdsFileRequest& request, const ModifyCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCdsFileOutcomeCallable modifyCdsFileCallable(const Model::ModifyCdsFileRequest& request) const;
			ModifyCdsFileShareLinkOutcome modifyCdsFileShareLink(const Model::ModifyCdsFileShareLinkRequest &request)const;
			void modifyCdsFileShareLinkAsync(const Model::ModifyCdsFileShareLinkRequest& request, const ModifyCdsFileShareLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCdsFileShareLinkOutcomeCallable modifyCdsFileShareLinkCallable(const Model::ModifyCdsFileShareLinkRequest& request) const;
			ModifyCloudDriveGroupsOutcome modifyCloudDriveGroups(const Model::ModifyCloudDriveGroupsRequest &request)const;
			void modifyCloudDriveGroupsAsync(const Model::ModifyCloudDriveGroupsRequest& request, const ModifyCloudDriveGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCloudDriveGroupsOutcomeCallable modifyCloudDriveGroupsCallable(const Model::ModifyCloudDriveGroupsRequest& request) const;
			ModifyCloudDrivePermissionOutcome modifyCloudDrivePermission(const Model::ModifyCloudDrivePermissionRequest &request)const;
			void modifyCloudDrivePermissionAsync(const Model::ModifyCloudDrivePermissionRequest& request, const ModifyCloudDrivePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCloudDrivePermissionOutcomeCallable modifyCloudDrivePermissionCallable(const Model::ModifyCloudDrivePermissionRequest& request) const;
			ModifyCustomizedListHeadersOutcome modifyCustomizedListHeaders(const Model::ModifyCustomizedListHeadersRequest &request)const;
			void modifyCustomizedListHeadersAsync(const Model::ModifyCustomizedListHeadersRequest& request, const ModifyCustomizedListHeadersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCustomizedListHeadersOutcomeCallable modifyCustomizedListHeadersCallable(const Model::ModifyCustomizedListHeadersRequest& request) const;
			ModifyDesktopChargeTypeOutcome modifyDesktopChargeType(const Model::ModifyDesktopChargeTypeRequest &request)const;
			void modifyDesktopChargeTypeAsync(const Model::ModifyDesktopChargeTypeRequest& request, const ModifyDesktopChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDesktopChargeTypeOutcomeCallable modifyDesktopChargeTypeCallable(const Model::ModifyDesktopChargeTypeRequest& request) const;
			ModifyDesktopGroupOutcome modifyDesktopGroup(const Model::ModifyDesktopGroupRequest &request)const;
			void modifyDesktopGroupAsync(const Model::ModifyDesktopGroupRequest& request, const ModifyDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDesktopGroupOutcomeCallable modifyDesktopGroupCallable(const Model::ModifyDesktopGroupRequest& request) const;
			ModifyDesktopHostNameOutcome modifyDesktopHostName(const Model::ModifyDesktopHostNameRequest &request)const;
			void modifyDesktopHostNameAsync(const Model::ModifyDesktopHostNameRequest& request, const ModifyDesktopHostNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDesktopHostNameOutcomeCallable modifyDesktopHostNameCallable(const Model::ModifyDesktopHostNameRequest& request) const;
			ModifyDesktopNameOutcome modifyDesktopName(const Model::ModifyDesktopNameRequest &request)const;
			void modifyDesktopNameAsync(const Model::ModifyDesktopNameRequest& request, const ModifyDesktopNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDesktopNameOutcomeCallable modifyDesktopNameCallable(const Model::ModifyDesktopNameRequest& request) const;
			ModifyDesktopSpecOutcome modifyDesktopSpec(const Model::ModifyDesktopSpecRequest &request)const;
			void modifyDesktopSpecAsync(const Model::ModifyDesktopSpecRequest& request, const ModifyDesktopSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDesktopSpecOutcomeCallable modifyDesktopSpecCallable(const Model::ModifyDesktopSpecRequest& request) const;
			ModifyDesktopsPolicyGroupOutcome modifyDesktopsPolicyGroup(const Model::ModifyDesktopsPolicyGroupRequest &request)const;
			void modifyDesktopsPolicyGroupAsync(const Model::ModifyDesktopsPolicyGroupRequest& request, const ModifyDesktopsPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDesktopsPolicyGroupOutcomeCallable modifyDesktopsPolicyGroupCallable(const Model::ModifyDesktopsPolicyGroupRequest& request) const;
			ModifyDiskSpecOutcome modifyDiskSpec(const Model::ModifyDiskSpecRequest &request)const;
			void modifyDiskSpecAsync(const Model::ModifyDiskSpecRequest& request, const ModifyDiskSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDiskSpecOutcomeCallable modifyDiskSpecCallable(const Model::ModifyDiskSpecRequest& request) const;
			ModifyEntitlementOutcome modifyEntitlement(const Model::ModifyEntitlementRequest &request)const;
			void modifyEntitlementAsync(const Model::ModifyEntitlementRequest& request, const ModifyEntitlementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEntitlementOutcomeCallable modifyEntitlementCallable(const Model::ModifyEntitlementRequest& request) const;
			ModifyImageAttributeOutcome modifyImageAttribute(const Model::ModifyImageAttributeRequest &request)const;
			void modifyImageAttributeAsync(const Model::ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImageAttributeOutcomeCallable modifyImageAttributeCallable(const Model::ModifyImageAttributeRequest& request) const;
			ModifyImagePermissionOutcome modifyImagePermission(const Model::ModifyImagePermissionRequest &request)const;
			void modifyImagePermissionAsync(const Model::ModifyImagePermissionRequest& request, const ModifyImagePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImagePermissionOutcomeCallable modifyImagePermissionCallable(const Model::ModifyImagePermissionRequest& request) const;
			ModifyNASDefaultMountTargetOutcome modifyNASDefaultMountTarget(const Model::ModifyNASDefaultMountTargetRequest &request)const;
			void modifyNASDefaultMountTargetAsync(const Model::ModifyNASDefaultMountTargetRequest& request, const ModifyNASDefaultMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNASDefaultMountTargetOutcomeCallable modifyNASDefaultMountTargetCallable(const Model::ModifyNASDefaultMountTargetRequest& request) const;
			ModifyNetworkPackageBandwidthOutcome modifyNetworkPackageBandwidth(const Model::ModifyNetworkPackageBandwidthRequest &request)const;
			void modifyNetworkPackageBandwidthAsync(const Model::ModifyNetworkPackageBandwidthRequest& request, const ModifyNetworkPackageBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNetworkPackageBandwidthOutcomeCallable modifyNetworkPackageBandwidthCallable(const Model::ModifyNetworkPackageBandwidthRequest& request) const;
			ModifyNetworkPackageEnabledOutcome modifyNetworkPackageEnabled(const Model::ModifyNetworkPackageEnabledRequest &request)const;
			void modifyNetworkPackageEnabledAsync(const Model::ModifyNetworkPackageEnabledRequest& request, const ModifyNetworkPackageEnabledAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNetworkPackageEnabledOutcomeCallable modifyNetworkPackageEnabledCallable(const Model::ModifyNetworkPackageEnabledRequest& request) const;
			ModifyOfficeSiteAttributeOutcome modifyOfficeSiteAttribute(const Model::ModifyOfficeSiteAttributeRequest &request)const;
			void modifyOfficeSiteAttributeAsync(const Model::ModifyOfficeSiteAttributeRequest& request, const ModifyOfficeSiteAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOfficeSiteAttributeOutcomeCallable modifyOfficeSiteAttributeCallable(const Model::ModifyOfficeSiteAttributeRequest& request) const;
			ModifyOfficeSiteCrossDesktopAccessOutcome modifyOfficeSiteCrossDesktopAccess(const Model::ModifyOfficeSiteCrossDesktopAccessRequest &request)const;
			void modifyOfficeSiteCrossDesktopAccessAsync(const Model::ModifyOfficeSiteCrossDesktopAccessRequest& request, const ModifyOfficeSiteCrossDesktopAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOfficeSiteCrossDesktopAccessOutcomeCallable modifyOfficeSiteCrossDesktopAccessCallable(const Model::ModifyOfficeSiteCrossDesktopAccessRequest& request) const;
			ModifyOfficeSiteMfaEnabledOutcome modifyOfficeSiteMfaEnabled(const Model::ModifyOfficeSiteMfaEnabledRequest &request)const;
			void modifyOfficeSiteMfaEnabledAsync(const Model::ModifyOfficeSiteMfaEnabledRequest& request, const ModifyOfficeSiteMfaEnabledAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOfficeSiteMfaEnabledOutcomeCallable modifyOfficeSiteMfaEnabledCallable(const Model::ModifyOfficeSiteMfaEnabledRequest& request) const;
			ModifyOperateVulOutcome modifyOperateVul(const Model::ModifyOperateVulRequest &request)const;
			void modifyOperateVulAsync(const Model::ModifyOperateVulRequest& request, const ModifyOperateVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOperateVulOutcomeCallable modifyOperateVulCallable(const Model::ModifyOperateVulRequest& request) const;
			ModifyPolicyGroupOutcome modifyPolicyGroup(const Model::ModifyPolicyGroupRequest &request)const;
			void modifyPolicyGroupAsync(const Model::ModifyPolicyGroupRequest& request, const ModifyPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPolicyGroupOutcomeCallable modifyPolicyGroupCallable(const Model::ModifyPolicyGroupRequest& request) const;
			ModifyUserEntitlementOutcome modifyUserEntitlement(const Model::ModifyUserEntitlementRequest &request)const;
			void modifyUserEntitlementAsync(const Model::ModifyUserEntitlementRequest& request, const ModifyUserEntitlementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserEntitlementOutcomeCallable modifyUserEntitlementCallable(const Model::ModifyUserEntitlementRequest& request) const;
			ModifyUserToDesktopGroupOutcome modifyUserToDesktopGroup(const Model::ModifyUserToDesktopGroupRequest &request)const;
			void modifyUserToDesktopGroupAsync(const Model::ModifyUserToDesktopGroupRequest& request, const ModifyUserToDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserToDesktopGroupOutcomeCallable modifyUserToDesktopGroupCallable(const Model::ModifyUserToDesktopGroupRequest& request) const;
			MoveCdsFileOutcome moveCdsFile(const Model::MoveCdsFileRequest &request)const;
			void moveCdsFileAsync(const Model::MoveCdsFileRequest& request, const MoveCdsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveCdsFileOutcomeCallable moveCdsFileCallable(const Model::MoveCdsFileRequest& request) const;
			OperateVulsOutcome operateVuls(const Model::OperateVulsRequest &request)const;
			void operateVulsAsync(const Model::OperateVulsRequest& request, const OperateVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateVulsOutcomeCallable operateVulsCallable(const Model::OperateVulsRequest& request) const;
			RebootDesktopsOutcome rebootDesktops(const Model::RebootDesktopsRequest &request)const;
			void rebootDesktopsAsync(const Model::RebootDesktopsRequest& request, const RebootDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootDesktopsOutcomeCallable rebootDesktopsCallable(const Model::RebootDesktopsRequest& request) const;
			RebuildDesktopsOutcome rebuildDesktops(const Model::RebuildDesktopsRequest &request)const;
			void rebuildDesktopsAsync(const Model::RebuildDesktopsRequest& request, const RebuildDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebuildDesktopsOutcomeCallable rebuildDesktopsCallable(const Model::RebuildDesktopsRequest& request) const;
			RemoveFilePermissionOutcome removeFilePermission(const Model::RemoveFilePermissionRequest &request)const;
			void removeFilePermissionAsync(const Model::RemoveFilePermissionRequest& request, const RemoveFilePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveFilePermissionOutcomeCallable removeFilePermissionCallable(const Model::RemoveFilePermissionRequest& request) const;
			RemoveUserFromDesktopGroupOutcome removeUserFromDesktopGroup(const Model::RemoveUserFromDesktopGroupRequest &request)const;
			void removeUserFromDesktopGroupAsync(const Model::RemoveUserFromDesktopGroupRequest& request, const RemoveUserFromDesktopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUserFromDesktopGroupOutcomeCallable removeUserFromDesktopGroupCallable(const Model::RemoveUserFromDesktopGroupRequest& request) const;
			RenewDesktopsOutcome renewDesktops(const Model::RenewDesktopsRequest &request)const;
			void renewDesktopsAsync(const Model::RenewDesktopsRequest& request, const RenewDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewDesktopsOutcomeCallable renewDesktopsCallable(const Model::RenewDesktopsRequest& request) const;
			RenewNetworkPackagesOutcome renewNetworkPackages(const Model::RenewNetworkPackagesRequest &request)const;
			void renewNetworkPackagesAsync(const Model::RenewNetworkPackagesRequest& request, const RenewNetworkPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewNetworkPackagesOutcomeCallable renewNetworkPackagesCallable(const Model::RenewNetworkPackagesRequest& request) const;
			ResetDesktopsOutcome resetDesktops(const Model::ResetDesktopsRequest &request)const;
			void resetDesktopsAsync(const Model::ResetDesktopsRequest& request, const ResetDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetDesktopsOutcomeCallable resetDesktopsCallable(const Model::ResetDesktopsRequest& request) const;
			ResetNASDefaultMountTargetOutcome resetNASDefaultMountTarget(const Model::ResetNASDefaultMountTargetRequest &request)const;
			void resetNASDefaultMountTargetAsync(const Model::ResetNASDefaultMountTargetRequest& request, const ResetNASDefaultMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetNASDefaultMountTargetOutcomeCallable resetNASDefaultMountTargetCallable(const Model::ResetNASDefaultMountTargetRequest& request) const;
			ResetSnapshotOutcome resetSnapshot(const Model::ResetSnapshotRequest &request)const;
			void resetSnapshotAsync(const Model::ResetSnapshotRequest& request, const ResetSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetSnapshotOutcomeCallable resetSnapshotCallable(const Model::ResetSnapshotRequest& request) const;
			RevokeCoordinatePrivilegeOutcome revokeCoordinatePrivilege(const Model::RevokeCoordinatePrivilegeRequest &request)const;
			void revokeCoordinatePrivilegeAsync(const Model::RevokeCoordinatePrivilegeRequest& request, const RevokeCoordinatePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeCoordinatePrivilegeOutcomeCallable revokeCoordinatePrivilegeCallable(const Model::RevokeCoordinatePrivilegeRequest& request) const;
			RollbackSuspEventQuaraFileOutcome rollbackSuspEventQuaraFile(const Model::RollbackSuspEventQuaraFileRequest &request)const;
			void rollbackSuspEventQuaraFileAsync(const Model::RollbackSuspEventQuaraFileRequest& request, const RollbackSuspEventQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackSuspEventQuaraFileOutcomeCallable rollbackSuspEventQuaraFileCallable(const Model::RollbackSuspEventQuaraFileRequest& request) const;
			RunCommandOutcome runCommand(const Model::RunCommandRequest &request)const;
			void runCommandAsync(const Model::RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunCommandOutcomeCallable runCommandCallable(const Model::RunCommandRequest& request) const;
			SendVerifyCodeOutcome sendVerifyCode(const Model::SendVerifyCodeRequest &request)const;
			void sendVerifyCodeAsync(const Model::SendVerifyCodeRequest& request, const SendVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendVerifyCodeOutcomeCallable sendVerifyCodeCallable(const Model::SendVerifyCodeRequest& request) const;
			SetDesktopGroupScaleTimerOutcome setDesktopGroupScaleTimer(const Model::SetDesktopGroupScaleTimerRequest &request)const;
			void setDesktopGroupScaleTimerAsync(const Model::SetDesktopGroupScaleTimerRequest& request, const SetDesktopGroupScaleTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDesktopGroupScaleTimerOutcomeCallable setDesktopGroupScaleTimerCallable(const Model::SetDesktopGroupScaleTimerRequest& request) const;
			SetDesktopGroupTimerOutcome setDesktopGroupTimer(const Model::SetDesktopGroupTimerRequest &request)const;
			void setDesktopGroupTimerAsync(const Model::SetDesktopGroupTimerRequest& request, const SetDesktopGroupTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDesktopGroupTimerOutcomeCallable setDesktopGroupTimerCallable(const Model::SetDesktopGroupTimerRequest& request) const;
			SetDesktopGroupTimerStatusOutcome setDesktopGroupTimerStatus(const Model::SetDesktopGroupTimerStatusRequest &request)const;
			void setDesktopGroupTimerStatusAsync(const Model::SetDesktopGroupTimerStatusRequest& request, const SetDesktopGroupTimerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDesktopGroupTimerStatusOutcomeCallable setDesktopGroupTimerStatusCallable(const Model::SetDesktopGroupTimerStatusRequest& request) const;
			SetDirectorySsoStatusOutcome setDirectorySsoStatus(const Model::SetDirectorySsoStatusRequest &request)const;
			void setDirectorySsoStatusAsync(const Model::SetDirectorySsoStatusRequest& request, const SetDirectorySsoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDirectorySsoStatusOutcomeCallable setDirectorySsoStatusCallable(const Model::SetDirectorySsoStatusRequest& request) const;
			SetIdpMetadataOutcome setIdpMetadata(const Model::SetIdpMetadataRequest &request)const;
			void setIdpMetadataAsync(const Model::SetIdpMetadataRequest& request, const SetIdpMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetIdpMetadataOutcomeCallable setIdpMetadataCallable(const Model::SetIdpMetadataRequest& request) const;
			SetOfficeSiteSsoStatusOutcome setOfficeSiteSsoStatus(const Model::SetOfficeSiteSsoStatusRequest &request)const;
			void setOfficeSiteSsoStatusAsync(const Model::SetOfficeSiteSsoStatusRequest& request, const SetOfficeSiteSsoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetOfficeSiteSsoStatusOutcomeCallable setOfficeSiteSsoStatusCallable(const Model::SetOfficeSiteSsoStatusRequest& request) const;
			SetUserProfilePathRulesOutcome setUserProfilePathRules(const Model::SetUserProfilePathRulesRequest &request)const;
			void setUserProfilePathRulesAsync(const Model::SetUserProfilePathRulesRequest& request, const SetUserProfilePathRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetUserProfilePathRulesOutcomeCallable setUserProfilePathRulesCallable(const Model::SetUserProfilePathRulesRequest& request) const;
			StartDesktopsOutcome startDesktops(const Model::StartDesktopsRequest &request)const;
			void startDesktopsAsync(const Model::StartDesktopsRequest& request, const StartDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDesktopsOutcomeCallable startDesktopsCallable(const Model::StartDesktopsRequest& request) const;
			StartVirusScanTaskOutcome startVirusScanTask(const Model::StartVirusScanTaskRequest &request)const;
			void startVirusScanTaskAsync(const Model::StartVirusScanTaskRequest& request, const StartVirusScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartVirusScanTaskOutcomeCallable startVirusScanTaskCallable(const Model::StartVirusScanTaskRequest& request) const;
			StopDesktopsOutcome stopDesktops(const Model::StopDesktopsRequest &request)const;
			void stopDesktopsAsync(const Model::StopDesktopsRequest& request, const StopDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDesktopsOutcomeCallable stopDesktopsCallable(const Model::StopDesktopsRequest& request) const;
			StopInvocationOutcome stopInvocation(const Model::StopInvocationRequest &request)const;
			void stopInvocationAsync(const Model::StopInvocationRequest& request, const StopInvocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInvocationOutcomeCallable stopInvocationCallable(const Model::StopInvocationRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnlockVirtualMFADeviceOutcome unlockVirtualMFADevice(const Model::UnlockVirtualMFADeviceRequest &request)const;
			void unlockVirtualMFADeviceAsync(const Model::UnlockVirtualMFADeviceRequest& request, const UnlockVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockVirtualMFADeviceOutcomeCallable unlockVirtualMFADeviceCallable(const Model::UnlockVirtualMFADeviceRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateFotaTaskOutcome updateFotaTask(const Model::UpdateFotaTaskRequest &request)const;
			void updateFotaTaskAsync(const Model::UpdateFotaTaskRequest& request, const UpdateFotaTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFotaTaskOutcomeCallable updateFotaTaskCallable(const Model::UpdateFotaTaskRequest& request) const;
			UploadImageOutcome uploadImage(const Model::UploadImageRequest &request)const;
			void uploadImageAsync(const Model::UploadImageRequest& request, const UploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadImageOutcomeCallable uploadImageCallable(const Model::UploadImageRequest& request) const;
			VerifyCenOutcome verifyCen(const Model::VerifyCenRequest &request)const;
			void verifyCenAsync(const Model::VerifyCenRequest& request, const VerifyCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyCenOutcomeCallable verifyCenCallable(const Model::VerifyCenRequest& request) const;
			WakeupDesktopsOutcome wakeupDesktops(const Model::WakeupDesktopsRequest &request)const;
			void wakeupDesktopsAsync(const Model::WakeupDesktopsRequest& request, const WakeupDesktopsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WakeupDesktopsOutcomeCallable wakeupDesktopsCallable(const Model::WakeupDesktopsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ECD_ECDCLIENT_H_
