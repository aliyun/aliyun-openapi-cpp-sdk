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

#ifndef ALIBABACLOUD_ECS_ECSCLIENT_H_
#define ALIBABACLOUD_ECS_ECSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EcsExport.h"
#include "model/ModifySnapshotAttributeRequest.h"
#include "model/ModifySnapshotAttributeResult.h"
#include "model/JoinSecurityGroupRequest.h"
#include "model/JoinSecurityGroupResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/DescribeDedicatedHostTypesRequest.h"
#include "model/DescribeDedicatedHostTypesResult.h"
#include "model/DescribeStorageSetsRequest.h"
#include "model/DescribeStorageSetsResult.h"
#include "model/DescribeSnapshotsRequest.h"
#include "model/DescribeSnapshotsResult.h"
#include "model/ModifyStorageSetAttributeRequest.h"
#include "model/ModifyStorageSetAttributeResult.h"
#include "model/ModifyInstanceVncPasswdRequest.h"
#include "model/ModifyInstanceVncPasswdResult.h"
#include "model/ModifyBandwidthPackageSpecRequest.h"
#include "model/ModifyBandwidthPackageSpecResult.h"
#include "model/CreateNatGatewayRequest.h"
#include "model/CreateNatGatewayResult.h"
#include "model/AttachDiskRequest.h"
#include "model/AttachDiskResult.h"
#include "model/DescribeEniMonitorDataRequest.h"
#include "model/DescribeEniMonitorDataResult.h"
#include "model/ExportSnapshotRequest.h"
#include "model/ExportSnapshotResult.h"
#include "model/CreateHaVipRequest.h"
#include "model/CreateHaVipResult.h"
#include "model/ReInitDiskRequest.h"
#include "model/ReInitDiskResult.h"
#include "model/ModifyAutoSnapshotPolicyRequest.h"
#include "model/ModifyAutoSnapshotPolicyResult.h"
#include "model/PurchaseReservedInstancesOfferingRequest.h"
#include "model/PurchaseReservedInstancesOfferingResult.h"
#include "model/AssociateEipAddressRequest.h"
#include "model/AssociateEipAddressResult.h"
#include "model/DeleteInstancesRequest.h"
#include "model/DeleteInstancesResult.h"
#include "model/RevokeSecurityGroupEgressRequest.h"
#include "model/RevokeSecurityGroupEgressResult.h"
#include "model/DescribeEipAddressesRequest.h"
#include "model/DescribeEipAddressesResult.h"
#include "model/ActivateRouterInterfaceRequest.h"
#include "model/ActivateRouterInterfaceResult.h"
#include "model/DescribeSpotPriceHistoryRequest.h"
#include "model/DescribeSpotPriceHistoryResult.h"
#include "model/TerminateVirtualBorderRouterRequest.h"
#include "model/TerminateVirtualBorderRouterResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/DescribeInstanceHistoryEventsRequest.h"
#include "model/DescribeInstanceHistoryEventsResult.h"
#include "model/DescribeInstanceTopologyRequest.h"
#include "model/DescribeInstanceTopologyResult.h"
#include "model/ModifyDiskSpecRequest.h"
#include "model/ModifyDiskSpecResult.h"
#include "model/DeletePhysicalConnectionRequest.h"
#include "model/DeletePhysicalConnectionResult.h"
#include "model/RevokeSecurityGroupRequest.h"
#include "model/RevokeSecurityGroupResult.h"
#include "model/DescribeTaskAttributeRequest.h"
#include "model/DescribeTaskAttributeResult.h"
#include "model/CreateAutoSnapshotPolicyRequest.h"
#include "model/CreateAutoSnapshotPolicyResult.h"
#include "model/ModifyReservedInstanceAttributeRequest.h"
#include "model/ModifyReservedInstanceAttributeResult.h"
#include "model/ReActivateInstancesRequest.h"
#include "model/ReActivateInstancesResult.h"
#include "model/DescribeForwardTableEntriesRequest.h"
#include "model/DescribeForwardTableEntriesResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeSecurityGroupReferencesRequest.h"
#include "model/DescribeSecurityGroupReferencesResult.h"
#include "model/AllocateDedicatedHostsRequest.h"
#include "model/AllocateDedicatedHostsResult.h"
#include "model/DeleteRouterInterfaceRequest.h"
#include "model/DeleteRouterInterfaceResult.h"
#include "model/DetachInstanceRamRoleRequest.h"
#include "model/DetachInstanceRamRoleResult.h"
#include "model/AllocatePublicIpAddressRequest.h"
#include "model/AllocatePublicIpAddressResult.h"
#include "model/ModifyDedicatedHostAutoRenewAttributeRequest.h"
#include "model/ModifyDedicatedHostAutoRenewAttributeResult.h"
#include "model/ModifyReservedInstancesRequest.h"
#include "model/ModifyReservedInstancesResult.h"
#include "model/DescribeEipMonitorDataRequest.h"
#include "model/DescribeEipMonitorDataResult.h"
#include "model/CancelAutoSnapshotPolicyRequest.h"
#include "model/CancelAutoSnapshotPolicyResult.h"
#include "model/DescribeDisksFullStatusRequest.h"
#include "model/DescribeDisksFullStatusResult.h"
#include "model/DeleteNetworkInterfaceRequest.h"
#include "model/DeleteNetworkInterfaceResult.h"
#include "model/ModifyInstanceSpecRequest.h"
#include "model/ModifyInstanceSpecResult.h"
#include "model/AssignPrivateIpAddressesRequest.h"
#include "model/AssignPrivateIpAddressesResult.h"
#include "model/DeleteSnapshotRequest.h"
#include "model/DeleteSnapshotResult.h"
#include "model/DeleteKeyPairsRequest.h"
#include "model/DeleteKeyPairsResult.h"
#include "model/AuthorizeSecurityGroupRequest.h"
#include "model/AuthorizeSecurityGroupResult.h"
#include "model/DescribeSnapshotMonitorDataRequest.h"
#include "model/DescribeSnapshotMonitorDataResult.h"
#include "model/DeleteSecurityGroupRequest.h"
#include "model/DeleteSecurityGroupResult.h"
#include "model/ConnectRouterInterfaceRequest.h"
#include "model/ConnectRouterInterfaceResult.h"
#include "model/GetInstanceConsoleOutputRequest.h"
#include "model/GetInstanceConsoleOutputResult.h"
#include "model/CreateSimulatedSystemEventsRequest.h"
#include "model/CreateSimulatedSystemEventsResult.h"
#include "model/RedeployInstanceRequest.h"
#include "model/RedeployInstanceResult.h"
#include "model/CancelTaskRequest.h"
#include "model/CancelTaskResult.h"
#include "model/ModifyCommandRequest.h"
#include "model/ModifyCommandResult.h"
#include "model/ModifyPhysicalConnectionAttributeRequest.h"
#include "model/ModifyPhysicalConnectionAttributeResult.h"
#include "model/ModifyVSwitchAttributeRequest.h"
#include "model/ModifyVSwitchAttributeResult.h"
#include "model/ModifyInstanceAttributeRequest.h"
#include "model/ModifyInstanceAttributeResult.h"
#include "model/DeleteHaVipRequest.h"
#include "model/DeleteHaVipResult.h"
#include "model/DescribeSecurityGroupsRequest.h"
#include "model/DescribeSecurityGroupsResult.h"
#include "model/ResizeDiskRequest.h"
#include "model/ResizeDiskResult.h"
#include "model/ModifyDedicatedHostAttributeRequest.h"
#include "model/ModifyDedicatedHostAttributeResult.h"
#include "model/ModifyFleetRequest.h"
#include "model/ModifyFleetResult.h"
#include "model/CreateRouteEntryRequest.h"
#include "model/CreateRouteEntryResult.h"
#include "model/AttachKeyPairRequest.h"
#include "model/AttachKeyPairResult.h"
#include "model/DescribeInvocationsRequest.h"
#include "model/DescribeInvocationsResult.h"
#include "model/CreateRouterInterfaceRequest.h"
#include "model/CreateRouterInterfaceResult.h"
#include "model/DeleteAutoProvisioningGroupRequest.h"
#include "model/DeleteAutoProvisioningGroupResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/RunInstancesRequest.h"
#include "model/RunInstancesResult.h"
#include "model/ModifyLaunchTemplateDefaultVersionRequest.h"
#include "model/ModifyLaunchTemplateDefaultVersionResult.h"
#include "model/CreateLaunchTemplateVersionRequest.h"
#include "model/CreateLaunchTemplateVersionResult.h"
#include "model/DescribeAutoProvisioningGroupHistoryRequest.h"
#include "model/DescribeAutoProvisioningGroupHistoryResult.h"
#include "model/StopInvocationRequest.h"
#include "model/StopInvocationResult.h"
#include "model/ModifyInstanceNetworkSpecRequest.h"
#include "model/ModifyInstanceNetworkSpecResult.h"
#include "model/ModifyInstanceDeploymentRequest.h"
#include "model/ModifyInstanceDeploymentResult.h"
#include "model/ModifyDiskAttributeRequest.h"
#include "model/ModifyDiskAttributeResult.h"
#include "model/CreateVSwitchRequest.h"
#include "model/CreateVSwitchResult.h"
#include "model/DescribeFleetsRequest.h"
#include "model/DescribeFleetsResult.h"
#include "model/DescribeBandwidthLimitationRequest.h"
#include "model/DescribeBandwidthLimitationResult.h"
#include "model/ModifyEipAddressAttributeRequest.h"
#include "model/ModifyEipAddressAttributeResult.h"
#include "model/ModifySecurityGroupAttributeRequest.h"
#include "model/ModifySecurityGroupAttributeResult.h"
#include "model/RenewDedicatedHostsRequest.h"
#include "model/RenewDedicatedHostsResult.h"
#include "model/RemoveTagsRequest.h"
#include "model/RemoveTagsResult.h"
#include "model/CancelSimulatedSystemEventsRequest.h"
#include "model/CancelSimulatedSystemEventsResult.h"
#include "model/ModifyInstanceAutoReleaseTimeRequest.h"
#include "model/ModifyInstanceAutoReleaseTimeResult.h"
#include "model/DeleteNatGatewayRequest.h"
#include "model/DeleteNatGatewayResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/DeactivateRouterInterfaceRequest.h"
#include "model/DeactivateRouterInterfaceResult.h"
#include "model/DescribeAvailableResourceRequest.h"
#include "model/DescribeAvailableResourceResult.h"
#include "model/DescribeAccessPointsRequest.h"
#include "model/DescribeAccessPointsResult.h"
#include "model/CreateCommandRequest.h"
#include "model/CreateCommandResult.h"
#include "model/DescribeInstancesFullStatusRequest.h"
#include "model/DescribeInstancesFullStatusResult.h"
#include "model/DescribeDedicatedHostsRequest.h"
#include "model/DescribeDedicatedHostsResult.h"
#include "model/DescribeFleetInstancesRequest.h"
#include "model/DescribeFleetInstancesResult.h"
#include "model/ReleaseEipAddressRequest.h"
#include "model/ReleaseEipAddressResult.h"
#include "model/DetachClassicLinkVpcRequest.h"
#include "model/DetachClassicLinkVpcResult.h"
#include "model/DescribeVSwitchesRequest.h"
#include "model/DescribeVSwitchesResult.h"
#include "model/ModifyRouterInterfaceSpecRequest.h"
#include "model/ModifyRouterInterfaceSpecResult.h"
#include "model/DescribeVpcsRequest.h"
#include "model/DescribeVpcsResult.h"
#include "model/ExportImageRequest.h"
#include "model/ExportImageResult.h"
#include "model/DescribeDiskMonitorDataRequest.h"
#include "model/DescribeDiskMonitorDataResult.h"
#include "model/ModifyDeploymentSetAttributeRequest.h"
#include "model/ModifyDeploymentSetAttributeResult.h"
#include "model/ModifyRouterInterfaceAttributeRequest.h"
#include "model/ModifyRouterInterfaceAttributeResult.h"
#include "model/DescribeVirtualBorderRoutersForPhysicalConnectionRequest.h"
#include "model/DescribeVirtualBorderRoutersForPhysicalConnectionResult.h"
#include "model/StartInstanceRequest.h"
#include "model/StartInstanceResult.h"
#include "model/CreateDiskRequest.h"
#include "model/CreateDiskResult.h"
#include "model/DescribeAutoProvisioningGroupInstancesRequest.h"
#include "model/DescribeAutoProvisioningGroupInstancesResult.h"
#include "model/DescribeInstanceTypesRequest.h"
#include "model/DescribeInstanceTypesResult.h"
#include "model/DescribeSnapshotPackageRequest.h"
#include "model/DescribeSnapshotPackageResult.h"
#include "model/RebootInstanceRequest.h"
#include "model/RebootInstanceResult.h"
#include "model/InvokeCommandRequest.h"
#include "model/InvokeCommandResult.h"
#include "model/ModifyUserBusinessBehaviorRequest.h"
#include "model/ModifyUserBusinessBehaviorResult.h"
#include "model/DeleteForwardEntryRequest.h"
#include "model/DeleteForwardEntryResult.h"
#include "model/DescribeHpcClustersRequest.h"
#include "model/DescribeHpcClustersResult.h"
#include "model/AcceptInquiredSystemEventRequest.h"
#include "model/AcceptInquiredSystemEventResult.h"
#include "model/ModifyInstanceChargeTypeRequest.h"
#include "model/ModifyInstanceChargeTypeResult.h"
#include "model/ModifyInstanceAutoRenewAttributeRequest.h"
#include "model/ModifyInstanceAutoRenewAttributeResult.h"
#include "model/DescribeVirtualBorderRoutersRequest.h"
#include "model/DescribeVirtualBorderRoutersResult.h"
#include "model/ModifyDedicatedHostAutoReleaseTimeRequest.h"
#include "model/ModifyDedicatedHostAutoReleaseTimeResult.h"
#include "model/ModifyHpcClusterAttributeRequest.h"
#include "model/ModifyHpcClusterAttributeResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"
#include "model/DescribeLimitationRequest.h"
#include "model/DescribeLimitationResult.h"
#include "model/DeleteDeploymentSetRequest.h"
#include "model/DeleteDeploymentSetResult.h"
#include "model/ModifyInstanceVpcAttributeRequest.h"
#include "model/ModifyInstanceVpcAttributeResult.h"
#include "model/ReleaseDedicatedHostRequest.h"
#include "model/ReleaseDedicatedHostResult.h"
#include "model/AddTagsRequest.h"
#include "model/AddTagsResult.h"
#include "model/CreateHpcClusterRequest.h"
#include "model/CreateHpcClusterResult.h"
#include "model/DescribeUserBusinessBehaviorRequest.h"
#include "model/DescribeUserBusinessBehaviorResult.h"
#include "model/DescribeCommandsRequest.h"
#include "model/DescribeCommandsResult.h"
#include "model/DeleteImageRequest.h"
#include "model/DeleteImageResult.h"
#include "model/CreateFleetRequest.h"
#include "model/CreateFleetResult.h"
#include "model/DescribeNetworkInterfacePermissionsRequest.h"
#include "model/DescribeNetworkInterfacePermissionsResult.h"
#include "model/DescribeDisksRequest.h"
#include "model/DescribeDisksResult.h"
#include "model/DeleteVpcRequest.h"
#include "model/DeleteVpcResult.h"
#include "model/DescribeImageSupportInstanceTypesRequest.h"
#include "model/DescribeImageSupportInstanceTypesResult.h"
#include "model/DeleteCommandRequest.h"
#include "model/DeleteCommandResult.h"
#include "model/ReplaceSystemDiskRequest.h"
#include "model/ReplaceSystemDiskResult.h"
#include "model/DeleteVSwitchRequest.h"
#include "model/DeleteVSwitchResult.h"
#include "model/ModifyImageShareGroupPermissionRequest.h"
#include "model/ModifyImageShareGroupPermissionResult.h"
#include "model/DescribeInstanceVncUrlRequest.h"
#include "model/DescribeInstanceVncUrlResult.h"
#include "model/DescribeDemandsRequest.h"
#include "model/DescribeDemandsResult.h"
#include "model/RecoverVirtualBorderRouterRequest.h"
#include "model/RecoverVirtualBorderRouterResult.h"
#include "model/DescribeResourceByTagsRequest.h"
#include "model/DescribeResourceByTagsResult.h"
#include "model/DescribeClustersRequest.h"
#include "model/DescribeClustersResult.h"
#include "model/DeleteBandwidthPackageRequest.h"
#include "model/DeleteBandwidthPackageResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DescribeImagesRequest.h"
#include "model/DescribeImagesResult.h"
#include "model/AuthorizeSecurityGroupEgressRequest.h"
#include "model/AuthorizeSecurityGroupEgressResult.h"
#include "model/ImportImageRequest.h"
#include "model/ImportImageResult.h"
#include "model/ModifyForwardEntryRequest.h"
#include "model/ModifyForwardEntryResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/CopyImageRequest.h"
#include "model/CopyImageResult.h"
#include "model/CreateVpcRequest.h"
#include "model/CreateVpcResult.h"
#include "model/DescribeInstanceMonitorDataRequest.h"
#include "model/DescribeInstanceMonitorDataResult.h"
#include "model/UnassociateEipAddressRequest.h"
#include "model/UnassociateEipAddressResult.h"
#include "model/CreateStorageSetRequest.h"
#include "model/CreateStorageSetResult.h"
#include "model/CreateSnapshotRequest.h"
#include "model/CreateSnapshotResult.h"
#include "model/DetachKeyPairRequest.h"
#include "model/DetachKeyPairResult.h"
#include "model/ModifyVirtualBorderRouterAttributeRequest.h"
#include "model/ModifyVirtualBorderRouterAttributeResult.h"
#include "model/DescribeTasksRequest.h"
#include "model/DescribeTasksResult.h"
#include "model/DescribeRenewalPriceRequest.h"
#include "model/DescribeRenewalPriceResult.h"
#include "model/LeaveSecurityGroupRequest.h"
#include "model/LeaveSecurityGroupResult.h"
#include "model/UnassignPrivateIpAddressesRequest.h"
#include "model/UnassignPrivateIpAddressesResult.h"
#include "model/DescribeInstanceVncPasswdRequest.h"
#include "model/DescribeInstanceVncPasswdResult.h"
#include "model/DescribeInstanceAutoRenewAttributeRequest.h"
#include "model/DescribeInstanceAutoRenewAttributeResult.h"
#include "model/ModifySecurityGroupRuleRequest.h"
#include "model/ModifySecurityGroupRuleResult.h"
#include "model/DescribeResourcesModificationRequest.h"
#include "model/DescribeResourcesModificationResult.h"
#include "model/ImportKeyPairRequest.h"
#include "model/ImportKeyPairResult.h"
#include "model/DeleteLaunchTemplateRequest.h"
#include "model/DeleteLaunchTemplateResult.h"
#include "model/DescribeNewProjectEipMonitorDataRequest.h"
#include "model/DescribeNewProjectEipMonitorDataResult.h"
#include "model/DescribeInstanceRamRoleRequest.h"
#include "model/DescribeInstanceRamRoleResult.h"
#include "model/CreateImageRequest.h"
#include "model/CreateImageResult.h"
#include "model/DescribeHaVipsRequest.h"
#include "model/DescribeHaVipsResult.h"
#include "model/DescribeInstanceAttributeRequest.h"
#include "model/DescribeInstanceAttributeResult.h"
#include "model/DetachDiskRequest.h"
#include "model/DetachDiskResult.h"
#include "model/ModifyImageAttributeRequest.h"
#include "model/ModifyImageAttributeResult.h"
#include "model/AddBandwidthPackageIpsRequest.h"
#include "model/AddBandwidthPackageIpsResult.h"
#include "model/DescribeInstanceStatusRequest.h"
#include "model/DescribeInstanceStatusResult.h"
#include "model/DescribeNatGatewaysRequest.h"
#include "model/DescribeNatGatewaysResult.h"
#include "model/DeleteHpcClusterRequest.h"
#include "model/DeleteHpcClusterResult.h"
#include "model/ResetDiskRequest.h"
#include "model/ResetDiskResult.h"
#include "model/ModifyDiskChargeTypeRequest.h"
#include "model/ModifyDiskChargeTypeResult.h"
#include "model/DescribeAutoProvisioningGroupsRequest.h"
#include "model/DescribeAutoProvisioningGroupsResult.h"
#include "model/ModifyAutoProvisioningGroupRequest.h"
#include "model/ModifyAutoProvisioningGroupResult.h"
#include "model/DeleteFleetRequest.h"
#include "model/DeleteFleetResult.h"
#include "model/DescribeBandwidthPackagesRequest.h"
#include "model/DescribeBandwidthPackagesResult.h"
#include "model/DescribeFleetHistoryRequest.h"
#include "model/DescribeFleetHistoryResult.h"
#include "model/ApplyAutoSnapshotPolicyRequest.h"
#include "model/ApplyAutoSnapshotPolicyResult.h"
#include "model/CreateSecurityGroupRequest.h"
#include "model/CreateSecurityGroupResult.h"
#include "model/DescribeSnapshotLinksRequest.h"
#include "model/DescribeSnapshotLinksResult.h"
#include "model/DescribeInvocationResultsRequest.h"
#include "model/DescribeInvocationResultsResult.h"
#include "model/DescribeRecommendInstanceTypeRequest.h"
#include "model/DescribeRecommendInstanceTypeResult.h"
#include "model/DescribeDedicatedHostAutoRenewRequest.h"
#include "model/DescribeDedicatedHostAutoRenewResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/CreateLaunchTemplateRequest.h"
#include "model/CreateLaunchTemplateResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyVpcAttributeRequest.h"
#include "model/ModifyVpcAttributeResult.h"
#include "model/RemoveBandwidthPackageIpsRequest.h"
#include "model/RemoveBandwidthPackageIpsResult.h"
#include "model/CreateNetworkInterfacePermissionRequest.h"
#include "model/CreateNetworkInterfacePermissionResult.h"
#include "model/DescribeSnapshotsUsageRequest.h"
#include "model/DescribeSnapshotsUsageResult.h"
#include "model/DeleteAutoSnapshotPolicyRequest.h"
#include "model/DeleteAutoSnapshotPolicyResult.h"
#include "model/ModifySecurityGroupEgressRuleRequest.h"
#include "model/ModifySecurityGroupEgressRuleResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/EnablePhysicalConnectionRequest.h"
#include "model/EnablePhysicalConnectionResult.h"
#include "model/DescribeInstanceTypeFamiliesRequest.h"
#include "model/DescribeInstanceTypeFamiliesResult.h"
#include "model/DescribeRouterInterfacesRequest.h"
#include "model/DescribeRouterInterfacesResult.h"
#include "model/CreateForwardEntryRequest.h"
#include "model/CreateForwardEntryResult.h"
#include "model/DescribeReservedInstancesRequest.h"
#include "model/DescribeReservedInstancesResult.h"
#include "model/DescribeLaunchTemplatesRequest.h"
#include "model/DescribeLaunchTemplatesResult.h"
#include "model/EipNotifyPaidRequest.h"
#include "model/EipNotifyPaidResult.h"
#include "model/ReleasePublicIpAddressRequest.h"
#include "model/ReleasePublicIpAddressResult.h"
#include "model/ReportInstancesStatusRequest.h"
#include "model/ReportInstancesStatusResult.h"
#include "model/CreateVirtualBorderRouterRequest.h"
#include "model/CreateVirtualBorderRouterResult.h"
#include "model/DescribeAccountAttributesRequest.h"
#include "model/DescribeAccountAttributesResult.h"
#include "model/EipFillParamsRequest.h"
#include "model/EipFillParamsResult.h"
#include "model/ModifyPrepayInstanceSpecRequest.h"
#include "model/ModifyPrepayInstanceSpecResult.h"
#include "model/EipFillProductRequest.h"
#include "model/EipFillProductResult.h"
#include "model/CreateAutoProvisioningGroupRequest.h"
#include "model/CreateAutoProvisioningGroupResult.h"
#include "model/DescribeRouteTablesRequest.h"
#include "model/DescribeRouteTablesResult.h"
#include "model/DescribeUserDataRequest.h"
#include "model/DescribeUserDataResult.h"
#include "model/JoinResourceGroupRequest.h"
#include "model/JoinResourceGroupResult.h"
#include "model/ModifyAutoSnapshotPolicyExRequest.h"
#include "model/ModifyAutoSnapshotPolicyExResult.h"
#include "model/DeleteStorageSetRequest.h"
#include "model/DeleteStorageSetResult.h"
#include "model/CreatePhysicalConnectionRequest.h"
#include "model/CreatePhysicalConnectionResult.h"
#include "model/DescribeKeyPairsRequest.h"
#include "model/DescribeKeyPairsResult.h"
#include "model/ModifySecurityGroupPolicyRequest.h"
#include "model/ModifySecurityGroupPolicyResult.h"
#include "model/AssociateHaVipRequest.h"
#include "model/AssociateHaVipResult.h"
#include "model/DescribeStorageSetDetailsRequest.h"
#include "model/DescribeStorageSetDetailsResult.h"
#include "model/ConvertNatPublicIpToEipRequest.h"
#include "model/ConvertNatPublicIpToEipResult.h"
#include "model/AssignIpv6AddressesRequest.h"
#include "model/AssignIpv6AddressesResult.h"
#include "model/DeleteVirtualBorderRouterRequest.h"
#include "model/DeleteVirtualBorderRouterResult.h"
#include "model/DeleteRouteEntryRequest.h"
#include "model/DeleteRouteEntryResult.h"
#include "model/DescribeCloudAssistantStatusRequest.h"
#include "model/DescribeCloudAssistantStatusResult.h"
#include "model/UnassignIpv6AddressesRequest.h"
#include "model/UnassignIpv6AddressesResult.h"
#include "model/DescribeInstancePhysicalAttributeRequest.h"
#include "model/DescribeInstancePhysicalAttributeResult.h"
#include "model/TerminatePhysicalConnectionRequest.h"
#include "model/TerminatePhysicalConnectionResult.h"
#include "model/AttachNetworkInterfaceRequest.h"
#include "model/AttachNetworkInterfaceResult.h"
#include "model/ModifyImageSharePermissionRequest.h"
#include "model/ModifyImageSharePermissionResult.h"
#include "model/DescribeSecurityGroupAttributeRequest.h"
#include "model/DescribeSecurityGroupAttributeResult.h"
#include "model/DescribeAutoSnapshotPolicyExRequest.h"
#include "model/DescribeAutoSnapshotPolicyExResult.h"
#include "model/CancelCopyImageRequest.h"
#include "model/CancelCopyImageResult.h"
#include "model/DescribeImageSharePermissionRequest.h"
#include "model/DescribeImageSharePermissionResult.h"
#include "model/CreateDeploymentSetRequest.h"
#include "model/CreateDeploymentSetResult.h"
#include "model/DeleteLaunchTemplateVersionRequest.h"
#include "model/DeleteLaunchTemplateVersionResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeClassicLinkInstancesRequest.h"
#include "model/DescribeClassicLinkInstancesResult.h"
#include "model/DescribePhysicalConnectionsRequest.h"
#include "model/DescribePhysicalConnectionsResult.h"
#include "model/ImportSnapshotRequest.h"
#include "model/ImportSnapshotResult.h"
#include "model/CreateNetworkInterfaceRequest.h"
#include "model/CreateNetworkInterfaceResult.h"
#include "model/DeleteNetworkInterfacePermissionRequest.h"
#include "model/DeleteNetworkInterfacePermissionResult.h"
#include "model/CancelPhysicalConnectionRequest.h"
#include "model/CancelPhysicalConnectionResult.h"
#include "model/DescribeVRoutersRequest.h"
#include "model/DescribeVRoutersResult.h"
#include "model/DescribeNetworkInterfacesRequest.h"
#include "model/DescribeNetworkInterfacesResult.h"
#include "model/DescribeLaunchTemplateVersionsRequest.h"
#include "model/DescribeLaunchTemplateVersionsResult.h"
#include "model/DetachNetworkInterfaceRequest.h"
#include "model/DetachNetworkInterfaceResult.h"
#include "model/ModifyNetworkInterfaceAttributeRequest.h"
#include "model/ModifyNetworkInterfaceAttributeResult.h"
#include "model/AllocateEipAddressRequest.h"
#include "model/AllocateEipAddressResult.h"
#include "model/DeleteDiskRequest.h"
#include "model/DeleteDiskResult.h"
#include "model/UnassociateHaVipRequest.h"
#include "model/UnassociateHaVipResult.h"
#include "model/ModifyHaVipAttributeRequest.h"
#include "model/ModifyHaVipAttributeResult.h"
#include "model/CreateKeyPairRequest.h"
#include "model/CreateKeyPairResult.h"
#include "model/DescribeDeploymentSetsRequest.h"
#include "model/DescribeDeploymentSetsResult.h"
#include "model/AttachClassicLinkVpcRequest.h"
#include "model/AttachClassicLinkVpcResult.h"
#include "model/GetInstanceScreenshotRequest.h"
#include "model/GetInstanceScreenshotResult.h"
#include "model/AttachInstanceRamRoleRequest.h"
#include "model/AttachInstanceRamRoleResult.h"
#include "model/InstallCloudAssistantRequest.h"
#include "model/InstallCloudAssistantResult.h"
#include "model/ModifyVRouterAttributeRequest.h"
#include "model/ModifyVRouterAttributeResult.h"


namespace AlibabaCloud
{
	namespace Ecs
	{
		class ALIBABACLOUD_ECS_EXPORT EcsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ModifySnapshotAttributeResult> ModifySnapshotAttributeOutcome;
			typedef std::future<ModifySnapshotAttributeOutcome> ModifySnapshotAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifySnapshotAttributeRequest&, const ModifySnapshotAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotAttributeAsyncHandler;
			typedef Outcome<Error, Model::JoinSecurityGroupResult> JoinSecurityGroupOutcome;
			typedef std::future<JoinSecurityGroupOutcome> JoinSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::JoinSecurityGroupRequest&, const JoinSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDedicatedHostTypesResult> DescribeDedicatedHostTypesOutcome;
			typedef std::future<DescribeDedicatedHostTypesOutcome> DescribeDedicatedHostTypesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeDedicatedHostTypesRequest&, const DescribeDedicatedHostTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedHostTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeStorageSetsResult> DescribeStorageSetsOutcome;
			typedef std::future<DescribeStorageSetsOutcome> DescribeStorageSetsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeStorageSetsRequest&, const DescribeStorageSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageSetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnapshotsResult> DescribeSnapshotsOutcome;
			typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeSnapshotsRequest&, const DescribeSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::ModifyStorageSetAttributeResult> ModifyStorageSetAttributeOutcome;
			typedef std::future<ModifyStorageSetAttributeOutcome> ModifyStorageSetAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyStorageSetAttributeRequest&, const ModifyStorageSetAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStorageSetAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceVncPasswdResult> ModifyInstanceVncPasswdOutcome;
			typedef std::future<ModifyInstanceVncPasswdOutcome> ModifyInstanceVncPasswdOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyInstanceVncPasswdRequest&, const ModifyInstanceVncPasswdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVncPasswdAsyncHandler;
			typedef Outcome<Error, Model::ModifyBandwidthPackageSpecResult> ModifyBandwidthPackageSpecOutcome;
			typedef std::future<ModifyBandwidthPackageSpecOutcome> ModifyBandwidthPackageSpecOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyBandwidthPackageSpecRequest&, const ModifyBandwidthPackageSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBandwidthPackageSpecAsyncHandler;
			typedef Outcome<Error, Model::CreateNatGatewayResult> CreateNatGatewayOutcome;
			typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateNatGatewayRequest&, const CreateNatGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayAsyncHandler;
			typedef Outcome<Error, Model::AttachDiskResult> AttachDiskOutcome;
			typedef std::future<AttachDiskOutcome> AttachDiskOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AttachDiskRequest&, const AttachDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDiskAsyncHandler;
			typedef Outcome<Error, Model::DescribeEniMonitorDataResult> DescribeEniMonitorDataOutcome;
			typedef std::future<DescribeEniMonitorDataOutcome> DescribeEniMonitorDataOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeEniMonitorDataRequest&, const DescribeEniMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEniMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::ExportSnapshotResult> ExportSnapshotOutcome;
			typedef std::future<ExportSnapshotOutcome> ExportSnapshotOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ExportSnapshotRequest&, const ExportSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportSnapshotAsyncHandler;
			typedef Outcome<Error, Model::CreateHaVipResult> CreateHaVipOutcome;
			typedef std::future<CreateHaVipOutcome> CreateHaVipOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateHaVipRequest&, const CreateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHaVipAsyncHandler;
			typedef Outcome<Error, Model::ReInitDiskResult> ReInitDiskOutcome;
			typedef std::future<ReInitDiskOutcome> ReInitDiskOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ReInitDiskRequest&, const ReInitDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReInitDiskAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoSnapshotPolicyResult> ModifyAutoSnapshotPolicyOutcome;
			typedef std::future<ModifyAutoSnapshotPolicyOutcome> ModifyAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyAutoSnapshotPolicyRequest&, const ModifyAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::PurchaseReservedInstancesOfferingResult> PurchaseReservedInstancesOfferingOutcome;
			typedef std::future<PurchaseReservedInstancesOfferingOutcome> PurchaseReservedInstancesOfferingOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::PurchaseReservedInstancesOfferingRequest&, const PurchaseReservedInstancesOfferingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PurchaseReservedInstancesOfferingAsyncHandler;
			typedef Outcome<Error, Model::AssociateEipAddressResult> AssociateEipAddressOutcome;
			typedef std::future<AssociateEipAddressOutcome> AssociateEipAddressOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AssociateEipAddressRequest&, const AssociateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstancesResult> DeleteInstancesOutcome;
			typedef std::future<DeleteInstancesOutcome> DeleteInstancesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteInstancesRequest&, const DeleteInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstancesAsyncHandler;
			typedef Outcome<Error, Model::RevokeSecurityGroupEgressResult> RevokeSecurityGroupEgressOutcome;
			typedef std::future<RevokeSecurityGroupEgressOutcome> RevokeSecurityGroupEgressOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::RevokeSecurityGroupEgressRequest&, const RevokeSecurityGroupEgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeSecurityGroupEgressAsyncHandler;
			typedef Outcome<Error, Model::DescribeEipAddressesResult> DescribeEipAddressesOutcome;
			typedef std::future<DescribeEipAddressesOutcome> DescribeEipAddressesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeEipAddressesRequest&, const DescribeEipAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipAddressesAsyncHandler;
			typedef Outcome<Error, Model::ActivateRouterInterfaceResult> ActivateRouterInterfaceOutcome;
			typedef std::future<ActivateRouterInterfaceOutcome> ActivateRouterInterfaceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ActivateRouterInterfaceRequest&, const ActivateRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DescribeSpotPriceHistoryResult> DescribeSpotPriceHistoryOutcome;
			typedef std::future<DescribeSpotPriceHistoryOutcome> DescribeSpotPriceHistoryOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeSpotPriceHistoryRequest&, const DescribeSpotPriceHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpotPriceHistoryAsyncHandler;
			typedef Outcome<Error, Model::TerminateVirtualBorderRouterResult> TerminateVirtualBorderRouterOutcome;
			typedef std::future<TerminateVirtualBorderRouterOutcome> TerminateVirtualBorderRouterOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::TerminateVirtualBorderRouterRequest&, const TerminateVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminateVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceHistoryEventsResult> DescribeInstanceHistoryEventsOutcome;
			typedef std::future<DescribeInstanceHistoryEventsOutcome> DescribeInstanceHistoryEventsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceHistoryEventsRequest&, const DescribeInstanceHistoryEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceHistoryEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTopologyResult> DescribeInstanceTopologyOutcome;
			typedef std::future<DescribeInstanceTopologyOutcome> DescribeInstanceTopologyOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceTopologyRequest&, const DescribeInstanceTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTopologyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDiskSpecResult> ModifyDiskSpecOutcome;
			typedef std::future<ModifyDiskSpecOutcome> ModifyDiskSpecOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyDiskSpecRequest&, const ModifyDiskSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskSpecAsyncHandler;
			typedef Outcome<Error, Model::DeletePhysicalConnectionResult> DeletePhysicalConnectionOutcome;
			typedef std::future<DeletePhysicalConnectionOutcome> DeletePhysicalConnectionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeletePhysicalConnectionRequest&, const DeletePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::RevokeSecurityGroupResult> RevokeSecurityGroupOutcome;
			typedef std::future<RevokeSecurityGroupOutcome> RevokeSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::RevokeSecurityGroupRequest&, const RevokeSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeTaskAttributeResult> DescribeTaskAttributeOutcome;
			typedef std::future<DescribeTaskAttributeOutcome> DescribeTaskAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeTaskAttributeRequest&, const DescribeTaskAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAttributeAsyncHandler;
			typedef Outcome<Error, Model::CreateAutoSnapshotPolicyResult> CreateAutoSnapshotPolicyOutcome;
			typedef std::future<CreateAutoSnapshotPolicyOutcome> CreateAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateAutoSnapshotPolicyRequest&, const CreateAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyReservedInstanceAttributeResult> ModifyReservedInstanceAttributeOutcome;
			typedef std::future<ModifyReservedInstanceAttributeOutcome> ModifyReservedInstanceAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyReservedInstanceAttributeRequest&, const ModifyReservedInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReservedInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::ReActivateInstancesResult> ReActivateInstancesOutcome;
			typedef std::future<ReActivateInstancesOutcome> ReActivateInstancesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ReActivateInstancesRequest&, const ReActivateInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReActivateInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeForwardTableEntriesResult> DescribeForwardTableEntriesOutcome;
			typedef std::future<DescribeForwardTableEntriesOutcome> DescribeForwardTableEntriesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeForwardTableEntriesRequest&, const DescribeForwardTableEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForwardTableEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupReferencesResult> DescribeSecurityGroupReferencesOutcome;
			typedef std::future<DescribeSecurityGroupReferencesOutcome> DescribeSecurityGroupReferencesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeSecurityGroupReferencesRequest&, const DescribeSecurityGroupReferencesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupReferencesAsyncHandler;
			typedef Outcome<Error, Model::AllocateDedicatedHostsResult> AllocateDedicatedHostsOutcome;
			typedef std::future<AllocateDedicatedHostsOutcome> AllocateDedicatedHostsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AllocateDedicatedHostsRequest&, const AllocateDedicatedHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateDedicatedHostsAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouterInterfaceResult> DeleteRouterInterfaceOutcome;
			typedef std::future<DeleteRouterInterfaceOutcome> DeleteRouterInterfaceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteRouterInterfaceRequest&, const DeleteRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DetachInstanceRamRoleResult> DetachInstanceRamRoleOutcome;
			typedef std::future<DetachInstanceRamRoleOutcome> DetachInstanceRamRoleOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DetachInstanceRamRoleRequest&, const DetachInstanceRamRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachInstanceRamRoleAsyncHandler;
			typedef Outcome<Error, Model::AllocatePublicIpAddressResult> AllocatePublicIpAddressOutcome;
			typedef std::future<AllocatePublicIpAddressOutcome> AllocatePublicIpAddressOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AllocatePublicIpAddressRequest&, const AllocatePublicIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocatePublicIpAddressAsyncHandler;
			typedef Outcome<Error, Model::ModifyDedicatedHostAutoRenewAttributeResult> ModifyDedicatedHostAutoRenewAttributeOutcome;
			typedef std::future<ModifyDedicatedHostAutoRenewAttributeOutcome> ModifyDedicatedHostAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyDedicatedHostAutoRenewAttributeRequest&, const ModifyDedicatedHostAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDedicatedHostAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyReservedInstancesResult> ModifyReservedInstancesOutcome;
			typedef std::future<ModifyReservedInstancesOutcome> ModifyReservedInstancesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyReservedInstancesRequest&, const ModifyReservedInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReservedInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEipMonitorDataResult> DescribeEipMonitorDataOutcome;
			typedef std::future<DescribeEipMonitorDataOutcome> DescribeEipMonitorDataOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeEipMonitorDataRequest&, const DescribeEipMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::CancelAutoSnapshotPolicyResult> CancelAutoSnapshotPolicyOutcome;
			typedef std::future<CancelAutoSnapshotPolicyOutcome> CancelAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CancelAutoSnapshotPolicyRequest&, const CancelAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDisksFullStatusResult> DescribeDisksFullStatusOutcome;
			typedef std::future<DescribeDisksFullStatusOutcome> DescribeDisksFullStatusOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeDisksFullStatusRequest&, const DescribeDisksFullStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksFullStatusAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkInterfaceResult> DeleteNetworkInterfaceOutcome;
			typedef std::future<DeleteNetworkInterfaceOutcome> DeleteNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteNetworkInterfaceRequest&, const DeleteNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceSpecResult> ModifyInstanceSpecOutcome;
			typedef std::future<ModifyInstanceSpecOutcome> ModifyInstanceSpecOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyInstanceSpecRequest&, const ModifyInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::AssignPrivateIpAddressesResult> AssignPrivateIpAddressesOutcome;
			typedef std::future<AssignPrivateIpAddressesOutcome> AssignPrivateIpAddressesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AssignPrivateIpAddressesRequest&, const AssignPrivateIpAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignPrivateIpAddressesAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotResult> DeleteSnapshotOutcome;
			typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteSnapshotRequest&, const DeleteSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteKeyPairsResult> DeleteKeyPairsOutcome;
			typedef std::future<DeleteKeyPairsOutcome> DeleteKeyPairsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteKeyPairsRequest&, const DeleteKeyPairsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyPairsAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeSecurityGroupResult> AuthorizeSecurityGroupOutcome;
			typedef std::future<AuthorizeSecurityGroupOutcome> AuthorizeSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AuthorizeSecurityGroupRequest&, const AuthorizeSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnapshotMonitorDataResult> DescribeSnapshotMonitorDataOutcome;
			typedef std::future<DescribeSnapshotMonitorDataOutcome> DescribeSnapshotMonitorDataOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeSnapshotMonitorDataRequest&, const DescribeSnapshotMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecurityGroupResult> DeleteSecurityGroupOutcome;
			typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteSecurityGroupRequest&, const DeleteSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::ConnectRouterInterfaceResult> ConnectRouterInterfaceOutcome;
			typedef std::future<ConnectRouterInterfaceOutcome> ConnectRouterInterfaceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ConnectRouterInterfaceRequest&, const ConnectRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConnectRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceConsoleOutputResult> GetInstanceConsoleOutputOutcome;
			typedef std::future<GetInstanceConsoleOutputOutcome> GetInstanceConsoleOutputOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::GetInstanceConsoleOutputRequest&, const GetInstanceConsoleOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceConsoleOutputAsyncHandler;
			typedef Outcome<Error, Model::CreateSimulatedSystemEventsResult> CreateSimulatedSystemEventsOutcome;
			typedef std::future<CreateSimulatedSystemEventsOutcome> CreateSimulatedSystemEventsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateSimulatedSystemEventsRequest&, const CreateSimulatedSystemEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSimulatedSystemEventsAsyncHandler;
			typedef Outcome<Error, Model::RedeployInstanceResult> RedeployInstanceOutcome;
			typedef std::future<RedeployInstanceOutcome> RedeployInstanceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::RedeployInstanceRequest&, const RedeployInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RedeployInstanceAsyncHandler;
			typedef Outcome<Error, Model::CancelTaskResult> CancelTaskOutcome;
			typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CancelTaskRequest&, const CancelTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
			typedef Outcome<Error, Model::ModifyCommandResult> ModifyCommandOutcome;
			typedef std::future<ModifyCommandOutcome> ModifyCommandOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyCommandRequest&, const ModifyCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCommandAsyncHandler;
			typedef Outcome<Error, Model::ModifyPhysicalConnectionAttributeResult> ModifyPhysicalConnectionAttributeOutcome;
			typedef std::future<ModifyPhysicalConnectionAttributeOutcome> ModifyPhysicalConnectionAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyPhysicalConnectionAttributeRequest&, const ModifyPhysicalConnectionAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPhysicalConnectionAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVSwitchAttributeResult> ModifyVSwitchAttributeOutcome;
			typedef std::future<ModifyVSwitchAttributeOutcome> ModifyVSwitchAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyVSwitchAttributeRequest&, const ModifyVSwitchAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVSwitchAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAttributeResult> ModifyInstanceAttributeOutcome;
			typedef std::future<ModifyInstanceAttributeOutcome> ModifyInstanceAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyInstanceAttributeRequest&, const ModifyInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DeleteHaVipResult> DeleteHaVipOutcome;
			typedef std::future<DeleteHaVipOutcome> DeleteHaVipOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteHaVipRequest&, const DeleteHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHaVipAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupsResult> DescribeSecurityGroupsOutcome;
			typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeSecurityGroupsRequest&, const DescribeSecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::ResizeDiskResult> ResizeDiskOutcome;
			typedef std::future<ResizeDiskOutcome> ResizeDiskOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ResizeDiskRequest&, const ResizeDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskAsyncHandler;
			typedef Outcome<Error, Model::ModifyDedicatedHostAttributeResult> ModifyDedicatedHostAttributeOutcome;
			typedef std::future<ModifyDedicatedHostAttributeOutcome> ModifyDedicatedHostAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyDedicatedHostAttributeRequest&, const ModifyDedicatedHostAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDedicatedHostAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyFleetResult> ModifyFleetOutcome;
			typedef std::future<ModifyFleetOutcome> ModifyFleetOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyFleetRequest&, const ModifyFleetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFleetAsyncHandler;
			typedef Outcome<Error, Model::CreateRouteEntryResult> CreateRouteEntryOutcome;
			typedef std::future<CreateRouteEntryOutcome> CreateRouteEntryOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateRouteEntryRequest&, const CreateRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::AttachKeyPairResult> AttachKeyPairOutcome;
			typedef std::future<AttachKeyPairOutcome> AttachKeyPairOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AttachKeyPairRequest&, const AttachKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachKeyPairAsyncHandler;
			typedef Outcome<Error, Model::DescribeInvocationsResult> DescribeInvocationsOutcome;
			typedef std::future<DescribeInvocationsOutcome> DescribeInvocationsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInvocationsRequest&, const DescribeInvocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationsAsyncHandler;
			typedef Outcome<Error, Model::CreateRouterInterfaceResult> CreateRouterInterfaceOutcome;
			typedef std::future<CreateRouterInterfaceOutcome> CreateRouterInterfaceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateRouterInterfaceRequest&, const CreateRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutoProvisioningGroupResult> DeleteAutoProvisioningGroupOutcome;
			typedef std::future<DeleteAutoProvisioningGroupOutcome> DeleteAutoProvisioningGroupOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteAutoProvisioningGroupRequest&, const DeleteAutoProvisioningGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoProvisioningGroupAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::RunInstancesResult> RunInstancesOutcome;
			typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::RunInstancesRequest&, const RunInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunInstancesAsyncHandler;
			typedef Outcome<Error, Model::ModifyLaunchTemplateDefaultVersionResult> ModifyLaunchTemplateDefaultVersionOutcome;
			typedef std::future<ModifyLaunchTemplateDefaultVersionOutcome> ModifyLaunchTemplateDefaultVersionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyLaunchTemplateDefaultVersionRequest&, const ModifyLaunchTemplateDefaultVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaunchTemplateDefaultVersionAsyncHandler;
			typedef Outcome<Error, Model::CreateLaunchTemplateVersionResult> CreateLaunchTemplateVersionOutcome;
			typedef std::future<CreateLaunchTemplateVersionOutcome> CreateLaunchTemplateVersionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateLaunchTemplateVersionRequest&, const CreateLaunchTemplateVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaunchTemplateVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoProvisioningGroupHistoryResult> DescribeAutoProvisioningGroupHistoryOutcome;
			typedef std::future<DescribeAutoProvisioningGroupHistoryOutcome> DescribeAutoProvisioningGroupHistoryOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeAutoProvisioningGroupHistoryRequest&, const DescribeAutoProvisioningGroupHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoProvisioningGroupHistoryAsyncHandler;
			typedef Outcome<Error, Model::StopInvocationResult> StopInvocationOutcome;
			typedef std::future<StopInvocationOutcome> StopInvocationOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::StopInvocationRequest&, const StopInvocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInvocationAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceNetworkSpecResult> ModifyInstanceNetworkSpecOutcome;
			typedef std::future<ModifyInstanceNetworkSpecOutcome> ModifyInstanceNetworkSpecOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyInstanceNetworkSpecRequest&, const ModifyInstanceNetworkSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNetworkSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceDeploymentResult> ModifyInstanceDeploymentOutcome;
			typedef std::future<ModifyInstanceDeploymentOutcome> ModifyInstanceDeploymentOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyInstanceDeploymentRequest&, const ModifyInstanceDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceDeploymentAsyncHandler;
			typedef Outcome<Error, Model::ModifyDiskAttributeResult> ModifyDiskAttributeOutcome;
			typedef std::future<ModifyDiskAttributeOutcome> ModifyDiskAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyDiskAttributeRequest&, const ModifyDiskAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskAttributeAsyncHandler;
			typedef Outcome<Error, Model::CreateVSwitchResult> CreateVSwitchOutcome;
			typedef std::future<CreateVSwitchOutcome> CreateVSwitchOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateVSwitchRequest&, const CreateVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVSwitchAsyncHandler;
			typedef Outcome<Error, Model::DescribeFleetsResult> DescribeFleetsOutcome;
			typedef std::future<DescribeFleetsOutcome> DescribeFleetsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeFleetsRequest&, const DescribeFleetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBandwidthLimitationResult> DescribeBandwidthLimitationOutcome;
			typedef std::future<DescribeBandwidthLimitationOutcome> DescribeBandwidthLimitationOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeBandwidthLimitationRequest&, const DescribeBandwidthLimitationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthLimitationAsyncHandler;
			typedef Outcome<Error, Model::ModifyEipAddressAttributeResult> ModifyEipAddressAttributeOutcome;
			typedef std::future<ModifyEipAddressAttributeOutcome> ModifyEipAddressAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyEipAddressAttributeRequest&, const ModifyEipAddressAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEipAddressAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupAttributeResult> ModifySecurityGroupAttributeOutcome;
			typedef std::future<ModifySecurityGroupAttributeOutcome> ModifySecurityGroupAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifySecurityGroupAttributeRequest&, const ModifySecurityGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::RenewDedicatedHostsResult> RenewDedicatedHostsOutcome;
			typedef std::future<RenewDedicatedHostsOutcome> RenewDedicatedHostsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::RenewDedicatedHostsRequest&, const RenewDedicatedHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewDedicatedHostsAsyncHandler;
			typedef Outcome<Error, Model::RemoveTagsResult> RemoveTagsOutcome;
			typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::RemoveTagsRequest&, const RemoveTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTagsAsyncHandler;
			typedef Outcome<Error, Model::CancelSimulatedSystemEventsResult> CancelSimulatedSystemEventsOutcome;
			typedef std::future<CancelSimulatedSystemEventsOutcome> CancelSimulatedSystemEventsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CancelSimulatedSystemEventsRequest&, const CancelSimulatedSystemEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelSimulatedSystemEventsAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAutoReleaseTimeResult> ModifyInstanceAutoReleaseTimeOutcome;
			typedef std::future<ModifyInstanceAutoReleaseTimeOutcome> ModifyInstanceAutoReleaseTimeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyInstanceAutoReleaseTimeRequest&, const ModifyInstanceAutoReleaseTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAutoReleaseTimeAsyncHandler;
			typedef Outcome<Error, Model::DeleteNatGatewayResult> DeleteNatGatewayOutcome;
			typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteNatGatewayRequest&, const DeleteNatGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DeactivateRouterInterfaceResult> DeactivateRouterInterfaceOutcome;
			typedef std::future<DeactivateRouterInterfaceOutcome> DeactivateRouterInterfaceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeactivateRouterInterfaceRequest&, const DeactivateRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableResourceResult> DescribeAvailableResourceOutcome;
			typedef std::future<DescribeAvailableResourceOutcome> DescribeAvailableResourceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeAvailableResourceRequest&, const DescribeAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessPointsResult> DescribeAccessPointsOutcome;
			typedef std::future<DescribeAccessPointsOutcome> DescribeAccessPointsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeAccessPointsRequest&, const DescribeAccessPointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessPointsAsyncHandler;
			typedef Outcome<Error, Model::CreateCommandResult> CreateCommandOutcome;
			typedef std::future<CreateCommandOutcome> CreateCommandOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateCommandRequest&, const CreateCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommandAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesFullStatusResult> DescribeInstancesFullStatusOutcome;
			typedef std::future<DescribeInstancesFullStatusOutcome> DescribeInstancesFullStatusOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstancesFullStatusRequest&, const DescribeInstancesFullStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesFullStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDedicatedHostsResult> DescribeDedicatedHostsOutcome;
			typedef std::future<DescribeDedicatedHostsOutcome> DescribeDedicatedHostsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeDedicatedHostsRequest&, const DescribeDedicatedHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedHostsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFleetInstancesResult> DescribeFleetInstancesOutcome;
			typedef std::future<DescribeFleetInstancesOutcome> DescribeFleetInstancesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeFleetInstancesRequest&, const DescribeFleetInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetInstancesAsyncHandler;
			typedef Outcome<Error, Model::ReleaseEipAddressResult> ReleaseEipAddressOutcome;
			typedef std::future<ReleaseEipAddressOutcome> ReleaseEipAddressOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ReleaseEipAddressRequest&, const ReleaseEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseEipAddressAsyncHandler;
			typedef Outcome<Error, Model::DetachClassicLinkVpcResult> DetachClassicLinkVpcOutcome;
			typedef std::future<DetachClassicLinkVpcOutcome> DetachClassicLinkVpcOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DetachClassicLinkVpcRequest&, const DetachClassicLinkVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachClassicLinkVpcAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchesResult> DescribeVSwitchesOutcome;
			typedef std::future<DescribeVSwitchesOutcome> DescribeVSwitchesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeVSwitchesRequest&, const DescribeVSwitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchesAsyncHandler;
			typedef Outcome<Error, Model::ModifyRouterInterfaceSpecResult> ModifyRouterInterfaceSpecOutcome;
			typedef std::future<ModifyRouterInterfaceSpecOutcome> ModifyRouterInterfaceSpecOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyRouterInterfaceSpecRequest&, const ModifyRouterInterfaceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouterInterfaceSpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcsResult> DescribeVpcsOutcome;
			typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeVpcsRequest&, const DescribeVpcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
			typedef Outcome<Error, Model::ExportImageResult> ExportImageOutcome;
			typedef std::future<ExportImageOutcome> ExportImageOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ExportImageRequest&, const ExportImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportImageAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiskMonitorDataResult> DescribeDiskMonitorDataOutcome;
			typedef std::future<DescribeDiskMonitorDataOutcome> DescribeDiskMonitorDataOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeDiskMonitorDataRequest&, const DescribeDiskMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeploymentSetAttributeResult> ModifyDeploymentSetAttributeOutcome;
			typedef std::future<ModifyDeploymentSetAttributeOutcome> ModifyDeploymentSetAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyDeploymentSetAttributeRequest&, const ModifyDeploymentSetAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeploymentSetAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyRouterInterfaceAttributeResult> ModifyRouterInterfaceAttributeOutcome;
			typedef std::future<ModifyRouterInterfaceAttributeOutcome> ModifyRouterInterfaceAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyRouterInterfaceAttributeRequest&, const ModifyRouterInterfaceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouterInterfaceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeVirtualBorderRoutersForPhysicalConnectionResult> DescribeVirtualBorderRoutersForPhysicalConnectionOutcome;
			typedef std::future<DescribeVirtualBorderRoutersForPhysicalConnectionOutcome> DescribeVirtualBorderRoutersForPhysicalConnectionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest&, const DescribeVirtualBorderRoutersForPhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirtualBorderRoutersForPhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::StartInstanceResult> StartInstanceOutcome;
			typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::StartInstanceRequest&, const StartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateDiskResult> CreateDiskOutcome;
			typedef std::future<CreateDiskOutcome> CreateDiskOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateDiskRequest&, const CreateDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiskAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoProvisioningGroupInstancesResult> DescribeAutoProvisioningGroupInstancesOutcome;
			typedef std::future<DescribeAutoProvisioningGroupInstancesOutcome> DescribeAutoProvisioningGroupInstancesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeAutoProvisioningGroupInstancesRequest&, const DescribeAutoProvisioningGroupInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoProvisioningGroupInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTypesResult> DescribeInstanceTypesOutcome;
			typedef std::future<DescribeInstanceTypesOutcome> DescribeInstanceTypesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceTypesRequest&, const DescribeInstanceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnapshotPackageResult> DescribeSnapshotPackageOutcome;
			typedef std::future<DescribeSnapshotPackageOutcome> DescribeSnapshotPackageOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeSnapshotPackageRequest&, const DescribeSnapshotPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotPackageAsyncHandler;
			typedef Outcome<Error, Model::RebootInstanceResult> RebootInstanceOutcome;
			typedef std::future<RebootInstanceOutcome> RebootInstanceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::RebootInstanceRequest&, const RebootInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstanceAsyncHandler;
			typedef Outcome<Error, Model::InvokeCommandResult> InvokeCommandOutcome;
			typedef std::future<InvokeCommandOutcome> InvokeCommandOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::InvokeCommandRequest&, const InvokeCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeCommandAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserBusinessBehaviorResult> ModifyUserBusinessBehaviorOutcome;
			typedef std::future<ModifyUserBusinessBehaviorOutcome> ModifyUserBusinessBehaviorOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyUserBusinessBehaviorRequest&, const ModifyUserBusinessBehaviorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserBusinessBehaviorAsyncHandler;
			typedef Outcome<Error, Model::DeleteForwardEntryResult> DeleteForwardEntryOutcome;
			typedef std::future<DeleteForwardEntryOutcome> DeleteForwardEntryOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteForwardEntryRequest&, const DeleteForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::DescribeHpcClustersResult> DescribeHpcClustersOutcome;
			typedef std::future<DescribeHpcClustersOutcome> DescribeHpcClustersOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeHpcClustersRequest&, const DescribeHpcClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHpcClustersAsyncHandler;
			typedef Outcome<Error, Model::AcceptInquiredSystemEventResult> AcceptInquiredSystemEventOutcome;
			typedef std::future<AcceptInquiredSystemEventOutcome> AcceptInquiredSystemEventOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AcceptInquiredSystemEventRequest&, const AcceptInquiredSystemEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptInquiredSystemEventAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceChargeTypeResult> ModifyInstanceChargeTypeOutcome;
			typedef std::future<ModifyInstanceChargeTypeOutcome> ModifyInstanceChargeTypeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyInstanceChargeTypeRequest&, const ModifyInstanceChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAutoRenewAttributeResult> ModifyInstanceAutoRenewAttributeOutcome;
			typedef std::future<ModifyInstanceAutoRenewAttributeOutcome> ModifyInstanceAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyInstanceAutoRenewAttributeRequest&, const ModifyInstanceAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeVirtualBorderRoutersResult> DescribeVirtualBorderRoutersOutcome;
			typedef std::future<DescribeVirtualBorderRoutersOutcome> DescribeVirtualBorderRoutersOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeVirtualBorderRoutersRequest&, const DescribeVirtualBorderRoutersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirtualBorderRoutersAsyncHandler;
			typedef Outcome<Error, Model::ModifyDedicatedHostAutoReleaseTimeResult> ModifyDedicatedHostAutoReleaseTimeOutcome;
			typedef std::future<ModifyDedicatedHostAutoReleaseTimeOutcome> ModifyDedicatedHostAutoReleaseTimeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyDedicatedHostAutoReleaseTimeRequest&, const ModifyDedicatedHostAutoReleaseTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDedicatedHostAutoReleaseTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyHpcClusterAttributeResult> ModifyHpcClusterAttributeOutcome;
			typedef std::future<ModifyHpcClusterAttributeOutcome> ModifyHpcClusterAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyHpcClusterAttributeRequest&, const ModifyHpcClusterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHpcClusterAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeLimitationResult> DescribeLimitationOutcome;
			typedef std::future<DescribeLimitationOutcome> DescribeLimitationOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeLimitationRequest&, const DescribeLimitationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLimitationAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeploymentSetResult> DeleteDeploymentSetOutcome;
			typedef std::future<DeleteDeploymentSetOutcome> DeleteDeploymentSetOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteDeploymentSetRequest&, const DeleteDeploymentSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeploymentSetAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceVpcAttributeResult> ModifyInstanceVpcAttributeOutcome;
			typedef std::future<ModifyInstanceVpcAttributeOutcome> ModifyInstanceVpcAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyInstanceVpcAttributeRequest&, const ModifyInstanceVpcAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceVpcAttributeAsyncHandler;
			typedef Outcome<Error, Model::ReleaseDedicatedHostResult> ReleaseDedicatedHostOutcome;
			typedef std::future<ReleaseDedicatedHostOutcome> ReleaseDedicatedHostOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ReleaseDedicatedHostRequest&, const ReleaseDedicatedHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseDedicatedHostAsyncHandler;
			typedef Outcome<Error, Model::AddTagsResult> AddTagsOutcome;
			typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AddTagsRequest&, const AddTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagsAsyncHandler;
			typedef Outcome<Error, Model::CreateHpcClusterResult> CreateHpcClusterOutcome;
			typedef std::future<CreateHpcClusterOutcome> CreateHpcClusterOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateHpcClusterRequest&, const CreateHpcClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHpcClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserBusinessBehaviorResult> DescribeUserBusinessBehaviorOutcome;
			typedef std::future<DescribeUserBusinessBehaviorOutcome> DescribeUserBusinessBehaviorOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeUserBusinessBehaviorRequest&, const DescribeUserBusinessBehaviorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBusinessBehaviorAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommandsResult> DescribeCommandsOutcome;
			typedef std::future<DescribeCommandsOutcome> DescribeCommandsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeCommandsRequest&, const DescribeCommandsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommandsAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageResult> DeleteImageOutcome;
			typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteImageRequest&, const DeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
			typedef Outcome<Error, Model::CreateFleetResult> CreateFleetOutcome;
			typedef std::future<CreateFleetOutcome> CreateFleetOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateFleetRequest&, const CreateFleetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFleetAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkInterfacePermissionsResult> DescribeNetworkInterfacePermissionsOutcome;
			typedef std::future<DescribeNetworkInterfacePermissionsOutcome> DescribeNetworkInterfacePermissionsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeNetworkInterfacePermissionsRequest&, const DescribeNetworkInterfacePermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfacePermissionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDisksResult> DescribeDisksOutcome;
			typedef std::future<DescribeDisksOutcome> DescribeDisksOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeDisksRequest&, const DescribeDisksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcResult> DeleteVpcOutcome;
			typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteVpcRequest&, const DeleteVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageSupportInstanceTypesResult> DescribeImageSupportInstanceTypesOutcome;
			typedef std::future<DescribeImageSupportInstanceTypesOutcome> DescribeImageSupportInstanceTypesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeImageSupportInstanceTypesRequest&, const DescribeImageSupportInstanceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSupportInstanceTypesAsyncHandler;
			typedef Outcome<Error, Model::DeleteCommandResult> DeleteCommandOutcome;
			typedef std::future<DeleteCommandOutcome> DeleteCommandOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteCommandRequest&, const DeleteCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCommandAsyncHandler;
			typedef Outcome<Error, Model::ReplaceSystemDiskResult> ReplaceSystemDiskOutcome;
			typedef std::future<ReplaceSystemDiskOutcome> ReplaceSystemDiskOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ReplaceSystemDiskRequest&, const ReplaceSystemDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceSystemDiskAsyncHandler;
			typedef Outcome<Error, Model::DeleteVSwitchResult> DeleteVSwitchOutcome;
			typedef std::future<DeleteVSwitchOutcome> DeleteVSwitchOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteVSwitchRequest&, const DeleteVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVSwitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyImageShareGroupPermissionResult> ModifyImageShareGroupPermissionOutcome;
			typedef std::future<ModifyImageShareGroupPermissionOutcome> ModifyImageShareGroupPermissionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyImageShareGroupPermissionRequest&, const ModifyImageShareGroupPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageShareGroupPermissionAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceVncUrlResult> DescribeInstanceVncUrlOutcome;
			typedef std::future<DescribeInstanceVncUrlOutcome> DescribeInstanceVncUrlOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceVncUrlRequest&, const DescribeInstanceVncUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceVncUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeDemandsResult> DescribeDemandsOutcome;
			typedef std::future<DescribeDemandsOutcome> DescribeDemandsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeDemandsRequest&, const DescribeDemandsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDemandsAsyncHandler;
			typedef Outcome<Error, Model::RecoverVirtualBorderRouterResult> RecoverVirtualBorderRouterOutcome;
			typedef std::future<RecoverVirtualBorderRouterOutcome> RecoverVirtualBorderRouterOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::RecoverVirtualBorderRouterRequest&, const RecoverVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecoverVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceByTagsResult> DescribeResourceByTagsOutcome;
			typedef std::future<DescribeResourceByTagsOutcome> DescribeResourceByTagsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeResourceByTagsRequest&, const DescribeResourceByTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceByTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClustersResult> DescribeClustersOutcome;
			typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeClustersRequest&, const DescribeClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
			typedef Outcome<Error, Model::DeleteBandwidthPackageResult> DeleteBandwidthPackageOutcome;
			typedef std::future<DeleteBandwidthPackageOutcome> DeleteBandwidthPackageOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteBandwidthPackageRequest&, const DeleteBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeImagesResult> DescribeImagesOutcome;
			typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeImagesRequest&, const DescribeImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeSecurityGroupEgressResult> AuthorizeSecurityGroupEgressOutcome;
			typedef std::future<AuthorizeSecurityGroupEgressOutcome> AuthorizeSecurityGroupEgressOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AuthorizeSecurityGroupEgressRequest&, const AuthorizeSecurityGroupEgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeSecurityGroupEgressAsyncHandler;
			typedef Outcome<Error, Model::ImportImageResult> ImportImageOutcome;
			typedef std::future<ImportImageOutcome> ImportImageOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ImportImageRequest&, const ImportImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportImageAsyncHandler;
			typedef Outcome<Error, Model::ModifyForwardEntryResult> ModifyForwardEntryOutcome;
			typedef std::future<ModifyForwardEntryOutcome> ModifyForwardEntryOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyForwardEntryRequest&, const ModifyForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::CopyImageResult> CopyImageOutcome;
			typedef std::future<CopyImageOutcome> CopyImageOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CopyImageRequest&, const CopyImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyImageAsyncHandler;
			typedef Outcome<Error, Model::CreateVpcResult> CreateVpcOutcome;
			typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateVpcRequest&, const CreateVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceMonitorDataResult> DescribeInstanceMonitorDataOutcome;
			typedef std::future<DescribeInstanceMonitorDataOutcome> DescribeInstanceMonitorDataOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceMonitorDataRequest&, const DescribeInstanceMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::UnassociateEipAddressResult> UnassociateEipAddressOutcome;
			typedef std::future<UnassociateEipAddressOutcome> UnassociateEipAddressOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::UnassociateEipAddressRequest&, const UnassociateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateStorageSetResult> CreateStorageSetOutcome;
			typedef std::future<CreateStorageSetOutcome> CreateStorageSetOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateStorageSetRequest&, const CreateStorageSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageSetAsyncHandler;
			typedef Outcome<Error, Model::CreateSnapshotResult> CreateSnapshotOutcome;
			typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateSnapshotRequest&, const CreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DetachKeyPairResult> DetachKeyPairOutcome;
			typedef std::future<DetachKeyPairOutcome> DetachKeyPairOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DetachKeyPairRequest&, const DetachKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachKeyPairAsyncHandler;
			typedef Outcome<Error, Model::ModifyVirtualBorderRouterAttributeResult> ModifyVirtualBorderRouterAttributeOutcome;
			typedef std::future<ModifyVirtualBorderRouterAttributeOutcome> ModifyVirtualBorderRouterAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyVirtualBorderRouterAttributeRequest&, const ModifyVirtualBorderRouterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirtualBorderRouterAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeTasksResult> DescribeTasksOutcome;
			typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeTasksRequest&, const DescribeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeRenewalPriceResult> DescribeRenewalPriceOutcome;
			typedef std::future<DescribeRenewalPriceOutcome> DescribeRenewalPriceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeRenewalPriceRequest&, const DescribeRenewalPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRenewalPriceAsyncHandler;
			typedef Outcome<Error, Model::LeaveSecurityGroupResult> LeaveSecurityGroupOutcome;
			typedef std::future<LeaveSecurityGroupOutcome> LeaveSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::LeaveSecurityGroupRequest&, const LeaveSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LeaveSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::UnassignPrivateIpAddressesResult> UnassignPrivateIpAddressesOutcome;
			typedef std::future<UnassignPrivateIpAddressesOutcome> UnassignPrivateIpAddressesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::UnassignPrivateIpAddressesRequest&, const UnassignPrivateIpAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassignPrivateIpAddressesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceVncPasswdResult> DescribeInstanceVncPasswdOutcome;
			typedef std::future<DescribeInstanceVncPasswdOutcome> DescribeInstanceVncPasswdOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceVncPasswdRequest&, const DescribeInstanceVncPasswdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceVncPasswdAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAutoRenewAttributeResult> DescribeInstanceAutoRenewAttributeOutcome;
			typedef std::future<DescribeInstanceAutoRenewAttributeOutcome> DescribeInstanceAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceAutoRenewAttributeRequest&, const DescribeInstanceAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupRuleResult> ModifySecurityGroupRuleOutcome;
			typedef std::future<ModifySecurityGroupRuleOutcome> ModifySecurityGroupRuleOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifySecurityGroupRuleRequest&, const ModifySecurityGroupRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourcesModificationResult> DescribeResourcesModificationOutcome;
			typedef std::future<DescribeResourcesModificationOutcome> DescribeResourcesModificationOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeResourcesModificationRequest&, const DescribeResourcesModificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesModificationAsyncHandler;
			typedef Outcome<Error, Model::ImportKeyPairResult> ImportKeyPairOutcome;
			typedef std::future<ImportKeyPairOutcome> ImportKeyPairOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ImportKeyPairRequest&, const ImportKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyPairAsyncHandler;
			typedef Outcome<Error, Model::DeleteLaunchTemplateResult> DeleteLaunchTemplateOutcome;
			typedef std::future<DeleteLaunchTemplateOutcome> DeleteLaunchTemplateOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteLaunchTemplateRequest&, const DeleteLaunchTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaunchTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeNewProjectEipMonitorDataResult> DescribeNewProjectEipMonitorDataOutcome;
			typedef std::future<DescribeNewProjectEipMonitorDataOutcome> DescribeNewProjectEipMonitorDataOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeNewProjectEipMonitorDataRequest&, const DescribeNewProjectEipMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewProjectEipMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceRamRoleResult> DescribeInstanceRamRoleOutcome;
			typedef std::future<DescribeInstanceRamRoleOutcome> DescribeInstanceRamRoleOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceRamRoleRequest&, const DescribeInstanceRamRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceRamRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateImageResult> CreateImageOutcome;
			typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateImageRequest&, const CreateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
			typedef Outcome<Error, Model::DescribeHaVipsResult> DescribeHaVipsOutcome;
			typedef std::future<DescribeHaVipsOutcome> DescribeHaVipsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeHaVipsRequest&, const DescribeHaVipsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHaVipsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAttributeResult> DescribeInstanceAttributeOutcome;
			typedef std::future<DescribeInstanceAttributeOutcome> DescribeInstanceAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceAttributeRequest&, const DescribeInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DetachDiskResult> DetachDiskOutcome;
			typedef std::future<DetachDiskOutcome> DetachDiskOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DetachDiskRequest&, const DetachDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachDiskAsyncHandler;
			typedef Outcome<Error, Model::ModifyImageAttributeResult> ModifyImageAttributeOutcome;
			typedef std::future<ModifyImageAttributeOutcome> ModifyImageAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyImageAttributeRequest&, const ModifyImageAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageAttributeAsyncHandler;
			typedef Outcome<Error, Model::AddBandwidthPackageIpsResult> AddBandwidthPackageIpsOutcome;
			typedef std::future<AddBandwidthPackageIpsOutcome> AddBandwidthPackageIpsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AddBandwidthPackageIpsRequest&, const AddBandwidthPackageIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBandwidthPackageIpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceStatusResult> DescribeInstanceStatusOutcome;
			typedef std::future<DescribeInstanceStatusOutcome> DescribeInstanceStatusOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceStatusRequest&, const DescribeInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeNatGatewaysResult> DescribeNatGatewaysOutcome;
			typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeNatGatewaysRequest&, const DescribeNatGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DeleteHpcClusterResult> DeleteHpcClusterOutcome;
			typedef std::future<DeleteHpcClusterOutcome> DeleteHpcClusterOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteHpcClusterRequest&, const DeleteHpcClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHpcClusterAsyncHandler;
			typedef Outcome<Error, Model::ResetDiskResult> ResetDiskOutcome;
			typedef std::future<ResetDiskOutcome> ResetDiskOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ResetDiskRequest&, const ResetDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetDiskAsyncHandler;
			typedef Outcome<Error, Model::ModifyDiskChargeTypeResult> ModifyDiskChargeTypeOutcome;
			typedef std::future<ModifyDiskChargeTypeOutcome> ModifyDiskChargeTypeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyDiskChargeTypeRequest&, const ModifyDiskChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoProvisioningGroupsResult> DescribeAutoProvisioningGroupsOutcome;
			typedef std::future<DescribeAutoProvisioningGroupsOutcome> DescribeAutoProvisioningGroupsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeAutoProvisioningGroupsRequest&, const DescribeAutoProvisioningGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoProvisioningGroupsAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoProvisioningGroupResult> ModifyAutoProvisioningGroupOutcome;
			typedef std::future<ModifyAutoProvisioningGroupOutcome> ModifyAutoProvisioningGroupOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyAutoProvisioningGroupRequest&, const ModifyAutoProvisioningGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoProvisioningGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteFleetResult> DeleteFleetOutcome;
			typedef std::future<DeleteFleetOutcome> DeleteFleetOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteFleetRequest&, const DeleteFleetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFleetAsyncHandler;
			typedef Outcome<Error, Model::DescribeBandwidthPackagesResult> DescribeBandwidthPackagesOutcome;
			typedef std::future<DescribeBandwidthPackagesOutcome> DescribeBandwidthPackagesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeBandwidthPackagesRequest&, const DescribeBandwidthPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeFleetHistoryResult> DescribeFleetHistoryOutcome;
			typedef std::future<DescribeFleetHistoryOutcome> DescribeFleetHistoryOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeFleetHistoryRequest&, const DescribeFleetHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFleetHistoryAsyncHandler;
			typedef Outcome<Error, Model::ApplyAutoSnapshotPolicyResult> ApplyAutoSnapshotPolicyOutcome;
			typedef std::future<ApplyAutoSnapshotPolicyOutcome> ApplyAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ApplyAutoSnapshotPolicyRequest&, const ApplyAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateSecurityGroupResult> CreateSecurityGroupOutcome;
			typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateSecurityGroupRequest&, const CreateSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnapshotLinksResult> DescribeSnapshotLinksOutcome;
			typedef std::future<DescribeSnapshotLinksOutcome> DescribeSnapshotLinksOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeSnapshotLinksRequest&, const DescribeSnapshotLinksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotLinksAsyncHandler;
			typedef Outcome<Error, Model::DescribeInvocationResultsResult> DescribeInvocationResultsOutcome;
			typedef std::future<DescribeInvocationResultsOutcome> DescribeInvocationResultsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInvocationResultsRequest&, const DescribeInvocationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationResultsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecommendInstanceTypeResult> DescribeRecommendInstanceTypeOutcome;
			typedef std::future<DescribeRecommendInstanceTypeOutcome> DescribeRecommendInstanceTypeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeRecommendInstanceTypeRequest&, const DescribeRecommendInstanceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecommendInstanceTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDedicatedHostAutoRenewResult> DescribeDedicatedHostAutoRenewOutcome;
			typedef std::future<DescribeDedicatedHostAutoRenewOutcome> DescribeDedicatedHostAutoRenewOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeDedicatedHostAutoRenewRequest&, const DescribeDedicatedHostAutoRenewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedHostAutoRenewAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateLaunchTemplateResult> CreateLaunchTemplateOutcome;
			typedef std::future<CreateLaunchTemplateOutcome> CreateLaunchTemplateOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateLaunchTemplateRequest&, const CreateLaunchTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaunchTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpcAttributeResult> ModifyVpcAttributeOutcome;
			typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyVpcAttributeRequest&, const ModifyVpcAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAttributeAsyncHandler;
			typedef Outcome<Error, Model::RemoveBandwidthPackageIpsResult> RemoveBandwidthPackageIpsOutcome;
			typedef std::future<RemoveBandwidthPackageIpsOutcome> RemoveBandwidthPackageIpsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::RemoveBandwidthPackageIpsRequest&, const RemoveBandwidthPackageIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBandwidthPackageIpsAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkInterfacePermissionResult> CreateNetworkInterfacePermissionOutcome;
			typedef std::future<CreateNetworkInterfacePermissionOutcome> CreateNetworkInterfacePermissionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateNetworkInterfacePermissionRequest&, const CreateNetworkInterfacePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkInterfacePermissionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnapshotsUsageResult> DescribeSnapshotsUsageOutcome;
			typedef std::future<DescribeSnapshotsUsageOutcome> DescribeSnapshotsUsageOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeSnapshotsUsageRequest&, const DescribeSnapshotsUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsUsageAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutoSnapshotPolicyResult> DeleteAutoSnapshotPolicyOutcome;
			typedef std::future<DeleteAutoSnapshotPolicyOutcome> DeleteAutoSnapshotPolicyOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteAutoSnapshotPolicyRequest&, const DeleteAutoSnapshotPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoSnapshotPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupEgressRuleResult> ModifySecurityGroupEgressRuleOutcome;
			typedef std::future<ModifySecurityGroupEgressRuleOutcome> ModifySecurityGroupEgressRuleOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifySecurityGroupEgressRuleRequest&, const ModifySecurityGroupEgressRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupEgressRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::EnablePhysicalConnectionResult> EnablePhysicalConnectionOutcome;
			typedef std::future<EnablePhysicalConnectionOutcome> EnablePhysicalConnectionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::EnablePhysicalConnectionRequest&, const EnablePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnablePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTypeFamiliesResult> DescribeInstanceTypeFamiliesOutcome;
			typedef std::future<DescribeInstanceTypeFamiliesOutcome> DescribeInstanceTypeFamiliesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstanceTypeFamiliesRequest&, const DescribeInstanceTypeFamiliesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypeFamiliesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouterInterfacesResult> DescribeRouterInterfacesOutcome;
			typedef std::future<DescribeRouterInterfacesOutcome> DescribeRouterInterfacesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeRouterInterfacesRequest&, const DescribeRouterInterfacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouterInterfacesAsyncHandler;
			typedef Outcome<Error, Model::CreateForwardEntryResult> CreateForwardEntryOutcome;
			typedef std::future<CreateForwardEntryOutcome> CreateForwardEntryOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateForwardEntryRequest&, const CreateForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::DescribeReservedInstancesResult> DescribeReservedInstancesOutcome;
			typedef std::future<DescribeReservedInstancesOutcome> DescribeReservedInstancesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeReservedInstancesRequest&, const DescribeReservedInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLaunchTemplatesResult> DescribeLaunchTemplatesOutcome;
			typedef std::future<DescribeLaunchTemplatesOutcome> DescribeLaunchTemplatesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeLaunchTemplatesRequest&, const DescribeLaunchTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaunchTemplatesAsyncHandler;
			typedef Outcome<Error, Model::EipNotifyPaidResult> EipNotifyPaidOutcome;
			typedef std::future<EipNotifyPaidOutcome> EipNotifyPaidOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::EipNotifyPaidRequest&, const EipNotifyPaidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EipNotifyPaidAsyncHandler;
			typedef Outcome<Error, Model::ReleasePublicIpAddressResult> ReleasePublicIpAddressOutcome;
			typedef std::future<ReleasePublicIpAddressOutcome> ReleasePublicIpAddressOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ReleasePublicIpAddressRequest&, const ReleasePublicIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePublicIpAddressAsyncHandler;
			typedef Outcome<Error, Model::ReportInstancesStatusResult> ReportInstancesStatusOutcome;
			typedef std::future<ReportInstancesStatusOutcome> ReportInstancesStatusOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ReportInstancesStatusRequest&, const ReportInstancesStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportInstancesStatusAsyncHandler;
			typedef Outcome<Error, Model::CreateVirtualBorderRouterResult> CreateVirtualBorderRouterOutcome;
			typedef std::future<CreateVirtualBorderRouterOutcome> CreateVirtualBorderRouterOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateVirtualBorderRouterRequest&, const CreateVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountAttributesResult> DescribeAccountAttributesOutcome;
			typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeAccountAttributesRequest&, const DescribeAccountAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountAttributesAsyncHandler;
			typedef Outcome<Error, Model::EipFillParamsResult> EipFillParamsOutcome;
			typedef std::future<EipFillParamsOutcome> EipFillParamsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::EipFillParamsRequest&, const EipFillParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EipFillParamsAsyncHandler;
			typedef Outcome<Error, Model::ModifyPrepayInstanceSpecResult> ModifyPrepayInstanceSpecOutcome;
			typedef std::future<ModifyPrepayInstanceSpecOutcome> ModifyPrepayInstanceSpecOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyPrepayInstanceSpecRequest&, const ModifyPrepayInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrepayInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::EipFillProductResult> EipFillProductOutcome;
			typedef std::future<EipFillProductOutcome> EipFillProductOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::EipFillProductRequest&, const EipFillProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EipFillProductAsyncHandler;
			typedef Outcome<Error, Model::CreateAutoProvisioningGroupResult> CreateAutoProvisioningGroupOutcome;
			typedef std::future<CreateAutoProvisioningGroupOutcome> CreateAutoProvisioningGroupOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateAutoProvisioningGroupRequest&, const CreateAutoProvisioningGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoProvisioningGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteTablesResult> DescribeRouteTablesOutcome;
			typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeRouteTablesRequest&, const DescribeRouteTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserDataResult> DescribeUserDataOutcome;
			typedef std::future<DescribeUserDataOutcome> DescribeUserDataOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeUserDataRequest&, const DescribeUserDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDataAsyncHandler;
			typedef Outcome<Error, Model::JoinResourceGroupResult> JoinResourceGroupOutcome;
			typedef std::future<JoinResourceGroupOutcome> JoinResourceGroupOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::JoinResourceGroupRequest&, const JoinResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoSnapshotPolicyExResult> ModifyAutoSnapshotPolicyExOutcome;
			typedef std::future<ModifyAutoSnapshotPolicyExOutcome> ModifyAutoSnapshotPolicyExOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyAutoSnapshotPolicyExRequest&, const ModifyAutoSnapshotPolicyExOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoSnapshotPolicyExAsyncHandler;
			typedef Outcome<Error, Model::DeleteStorageSetResult> DeleteStorageSetOutcome;
			typedef std::future<DeleteStorageSetOutcome> DeleteStorageSetOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteStorageSetRequest&, const DeleteStorageSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStorageSetAsyncHandler;
			typedef Outcome<Error, Model::CreatePhysicalConnectionResult> CreatePhysicalConnectionOutcome;
			typedef std::future<CreatePhysicalConnectionOutcome> CreatePhysicalConnectionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreatePhysicalConnectionRequest&, const CreatePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeKeyPairsResult> DescribeKeyPairsOutcome;
			typedef std::future<DescribeKeyPairsOutcome> DescribeKeyPairsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeKeyPairsRequest&, const DescribeKeyPairsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyPairsAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupPolicyResult> ModifySecurityGroupPolicyOutcome;
			typedef std::future<ModifySecurityGroupPolicyOutcome> ModifySecurityGroupPolicyOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifySecurityGroupPolicyRequest&, const ModifySecurityGroupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupPolicyAsyncHandler;
			typedef Outcome<Error, Model::AssociateHaVipResult> AssociateHaVipOutcome;
			typedef std::future<AssociateHaVipOutcome> AssociateHaVipOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AssociateHaVipRequest&, const AssociateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateHaVipAsyncHandler;
			typedef Outcome<Error, Model::DescribeStorageSetDetailsResult> DescribeStorageSetDetailsOutcome;
			typedef std::future<DescribeStorageSetDetailsOutcome> DescribeStorageSetDetailsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeStorageSetDetailsRequest&, const DescribeStorageSetDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageSetDetailsAsyncHandler;
			typedef Outcome<Error, Model::ConvertNatPublicIpToEipResult> ConvertNatPublicIpToEipOutcome;
			typedef std::future<ConvertNatPublicIpToEipOutcome> ConvertNatPublicIpToEipOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ConvertNatPublicIpToEipRequest&, const ConvertNatPublicIpToEipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertNatPublicIpToEipAsyncHandler;
			typedef Outcome<Error, Model::AssignIpv6AddressesResult> AssignIpv6AddressesOutcome;
			typedef std::future<AssignIpv6AddressesOutcome> AssignIpv6AddressesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AssignIpv6AddressesRequest&, const AssignIpv6AddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6AddressesAsyncHandler;
			typedef Outcome<Error, Model::DeleteVirtualBorderRouterResult> DeleteVirtualBorderRouterOutcome;
			typedef std::future<DeleteVirtualBorderRouterOutcome> DeleteVirtualBorderRouterOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteVirtualBorderRouterRequest&, const DeleteVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouteEntryResult> DeleteRouteEntryOutcome;
			typedef std::future<DeleteRouteEntryOutcome> DeleteRouteEntryOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteRouteEntryRequest&, const DeleteRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudAssistantStatusResult> DescribeCloudAssistantStatusOutcome;
			typedef std::future<DescribeCloudAssistantStatusOutcome> DescribeCloudAssistantStatusOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeCloudAssistantStatusRequest&, const DescribeCloudAssistantStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudAssistantStatusAsyncHandler;
			typedef Outcome<Error, Model::UnassignIpv6AddressesResult> UnassignIpv6AddressesOutcome;
			typedef std::future<UnassignIpv6AddressesOutcome> UnassignIpv6AddressesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::UnassignIpv6AddressesRequest&, const UnassignIpv6AddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6AddressesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancePhysicalAttributeResult> DescribeInstancePhysicalAttributeOutcome;
			typedef std::future<DescribeInstancePhysicalAttributeOutcome> DescribeInstancePhysicalAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeInstancePhysicalAttributeRequest&, const DescribeInstancePhysicalAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancePhysicalAttributeAsyncHandler;
			typedef Outcome<Error, Model::TerminatePhysicalConnectionResult> TerminatePhysicalConnectionOutcome;
			typedef std::future<TerminatePhysicalConnectionOutcome> TerminatePhysicalConnectionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::TerminatePhysicalConnectionRequest&, const TerminatePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminatePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::AttachNetworkInterfaceResult> AttachNetworkInterfaceOutcome;
			typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AttachNetworkInterfaceRequest&, const AttachNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::ModifyImageSharePermissionResult> ModifyImageSharePermissionOutcome;
			typedef std::future<ModifyImageSharePermissionOutcome> ModifyImageSharePermissionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyImageSharePermissionRequest&, const ModifyImageSharePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSharePermissionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupAttributeResult> DescribeSecurityGroupAttributeOutcome;
			typedef std::future<DescribeSecurityGroupAttributeOutcome> DescribeSecurityGroupAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeSecurityGroupAttributeRequest&, const DescribeSecurityGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoSnapshotPolicyExResult> DescribeAutoSnapshotPolicyExOutcome;
			typedef std::future<DescribeAutoSnapshotPolicyExOutcome> DescribeAutoSnapshotPolicyExOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeAutoSnapshotPolicyExRequest&, const DescribeAutoSnapshotPolicyExOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoSnapshotPolicyExAsyncHandler;
			typedef Outcome<Error, Model::CancelCopyImageResult> CancelCopyImageOutcome;
			typedef std::future<CancelCopyImageOutcome> CancelCopyImageOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CancelCopyImageRequest&, const CancelCopyImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCopyImageAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageSharePermissionResult> DescribeImageSharePermissionOutcome;
			typedef std::future<DescribeImageSharePermissionOutcome> DescribeImageSharePermissionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeImageSharePermissionRequest&, const DescribeImageSharePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSharePermissionAsyncHandler;
			typedef Outcome<Error, Model::CreateDeploymentSetResult> CreateDeploymentSetOutcome;
			typedef std::future<CreateDeploymentSetOutcome> CreateDeploymentSetOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateDeploymentSetRequest&, const CreateDeploymentSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeploymentSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteLaunchTemplateVersionResult> DeleteLaunchTemplateVersionOutcome;
			typedef std::future<DeleteLaunchTemplateVersionOutcome> DeleteLaunchTemplateVersionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteLaunchTemplateVersionRequest&, const DeleteLaunchTemplateVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaunchTemplateVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClassicLinkInstancesResult> DescribeClassicLinkInstancesOutcome;
			typedef std::future<DescribeClassicLinkInstancesOutcome> DescribeClassicLinkInstancesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeClassicLinkInstancesRequest&, const DescribeClassicLinkInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicLinkInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribePhysicalConnectionsResult> DescribePhysicalConnectionsOutcome;
			typedef std::future<DescribePhysicalConnectionsOutcome> DescribePhysicalConnectionsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribePhysicalConnectionsRequest&, const DescribePhysicalConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhysicalConnectionsAsyncHandler;
			typedef Outcome<Error, Model::ImportSnapshotResult> ImportSnapshotOutcome;
			typedef std::future<ImportSnapshotOutcome> ImportSnapshotOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ImportSnapshotRequest&, const ImportSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportSnapshotAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkInterfaceResult> CreateNetworkInterfaceOutcome;
			typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateNetworkInterfaceRequest&, const CreateNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkInterfacePermissionResult> DeleteNetworkInterfacePermissionOutcome;
			typedef std::future<DeleteNetworkInterfacePermissionOutcome> DeleteNetworkInterfacePermissionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteNetworkInterfacePermissionRequest&, const DeleteNetworkInterfacePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkInterfacePermissionAsyncHandler;
			typedef Outcome<Error, Model::CancelPhysicalConnectionResult> CancelPhysicalConnectionOutcome;
			typedef std::future<CancelPhysicalConnectionOutcome> CancelPhysicalConnectionOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CancelPhysicalConnectionRequest&, const CancelPhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelPhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeVRoutersResult> DescribeVRoutersOutcome;
			typedef std::future<DescribeVRoutersOutcome> DescribeVRoutersOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeVRoutersRequest&, const DescribeVRoutersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVRoutersAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkInterfacesResult> DescribeNetworkInterfacesOutcome;
			typedef std::future<DescribeNetworkInterfacesOutcome> DescribeNetworkInterfacesOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeNetworkInterfacesRequest&, const DescribeNetworkInterfacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfacesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLaunchTemplateVersionsResult> DescribeLaunchTemplateVersionsOutcome;
			typedef std::future<DescribeLaunchTemplateVersionsOutcome> DescribeLaunchTemplateVersionsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeLaunchTemplateVersionsRequest&, const DescribeLaunchTemplateVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaunchTemplateVersionsAsyncHandler;
			typedef Outcome<Error, Model::DetachNetworkInterfaceResult> DetachNetworkInterfaceOutcome;
			typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DetachNetworkInterfaceRequest&, const DetachNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::ModifyNetworkInterfaceAttributeResult> ModifyNetworkInterfaceAttributeOutcome;
			typedef std::future<ModifyNetworkInterfaceAttributeOutcome> ModifyNetworkInterfaceAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyNetworkInterfaceAttributeRequest&, const ModifyNetworkInterfaceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkInterfaceAttributeAsyncHandler;
			typedef Outcome<Error, Model::AllocateEipAddressResult> AllocateEipAddressOutcome;
			typedef std::future<AllocateEipAddressOutcome> AllocateEipAddressOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AllocateEipAddressRequest&, const AllocateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::DeleteDiskResult> DeleteDiskOutcome;
			typedef std::future<DeleteDiskOutcome> DeleteDiskOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DeleteDiskRequest&, const DeleteDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDiskAsyncHandler;
			typedef Outcome<Error, Model::UnassociateHaVipResult> UnassociateHaVipOutcome;
			typedef std::future<UnassociateHaVipOutcome> UnassociateHaVipOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::UnassociateHaVipRequest&, const UnassociateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateHaVipAsyncHandler;
			typedef Outcome<Error, Model::ModifyHaVipAttributeResult> ModifyHaVipAttributeOutcome;
			typedef std::future<ModifyHaVipAttributeOutcome> ModifyHaVipAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyHaVipAttributeRequest&, const ModifyHaVipAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHaVipAttributeAsyncHandler;
			typedef Outcome<Error, Model::CreateKeyPairResult> CreateKeyPairOutcome;
			typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::CreateKeyPairRequest&, const CreateKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyPairAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeploymentSetsResult> DescribeDeploymentSetsOutcome;
			typedef std::future<DescribeDeploymentSetsOutcome> DescribeDeploymentSetsOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::DescribeDeploymentSetsRequest&, const DescribeDeploymentSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeploymentSetsAsyncHandler;
			typedef Outcome<Error, Model::AttachClassicLinkVpcResult> AttachClassicLinkVpcOutcome;
			typedef std::future<AttachClassicLinkVpcOutcome> AttachClassicLinkVpcOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AttachClassicLinkVpcRequest&, const AttachClassicLinkVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachClassicLinkVpcAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceScreenshotResult> GetInstanceScreenshotOutcome;
			typedef std::future<GetInstanceScreenshotOutcome> GetInstanceScreenshotOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::GetInstanceScreenshotRequest&, const GetInstanceScreenshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceScreenshotAsyncHandler;
			typedef Outcome<Error, Model::AttachInstanceRamRoleResult> AttachInstanceRamRoleOutcome;
			typedef std::future<AttachInstanceRamRoleOutcome> AttachInstanceRamRoleOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::AttachInstanceRamRoleRequest&, const AttachInstanceRamRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstanceRamRoleAsyncHandler;
			typedef Outcome<Error, Model::InstallCloudAssistantResult> InstallCloudAssistantOutcome;
			typedef std::future<InstallCloudAssistantOutcome> InstallCloudAssistantOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::InstallCloudAssistantRequest&, const InstallCloudAssistantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallCloudAssistantAsyncHandler;
			typedef Outcome<Error, Model::ModifyVRouterAttributeResult> ModifyVRouterAttributeOutcome;
			typedef std::future<ModifyVRouterAttributeOutcome> ModifyVRouterAttributeOutcomeCallable;
			typedef std::function<void(const EcsClient*, const Model::ModifyVRouterAttributeRequest&, const ModifyVRouterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVRouterAttributeAsyncHandler;

			EcsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EcsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EcsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EcsClient();
			ModifySnapshotAttributeOutcome modifySnapshotAttribute(const Model::ModifySnapshotAttributeRequest &request)const;
			void modifySnapshotAttributeAsync(const Model::ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySnapshotAttributeOutcomeCallable modifySnapshotAttributeCallable(const Model::ModifySnapshotAttributeRequest& request) const;
			JoinSecurityGroupOutcome joinSecurityGroup(const Model::JoinSecurityGroupRequest &request)const;
			void joinSecurityGroupAsync(const Model::JoinSecurityGroupRequest& request, const JoinSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinSecurityGroupOutcomeCallable joinSecurityGroupCallable(const Model::JoinSecurityGroupRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			DescribeDedicatedHostTypesOutcome describeDedicatedHostTypes(const Model::DescribeDedicatedHostTypesRequest &request)const;
			void describeDedicatedHostTypesAsync(const Model::DescribeDedicatedHostTypesRequest& request, const DescribeDedicatedHostTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDedicatedHostTypesOutcomeCallable describeDedicatedHostTypesCallable(const Model::DescribeDedicatedHostTypesRequest& request) const;
			DescribeStorageSetsOutcome describeStorageSets(const Model::DescribeStorageSetsRequest &request)const;
			void describeStorageSetsAsync(const Model::DescribeStorageSetsRequest& request, const DescribeStorageSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStorageSetsOutcomeCallable describeStorageSetsCallable(const Model::DescribeStorageSetsRequest& request) const;
			DescribeSnapshotsOutcome describeSnapshots(const Model::DescribeSnapshotsRequest &request)const;
			void describeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotsOutcomeCallable describeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;
			ModifyStorageSetAttributeOutcome modifyStorageSetAttribute(const Model::ModifyStorageSetAttributeRequest &request)const;
			void modifyStorageSetAttributeAsync(const Model::ModifyStorageSetAttributeRequest& request, const ModifyStorageSetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStorageSetAttributeOutcomeCallable modifyStorageSetAttributeCallable(const Model::ModifyStorageSetAttributeRequest& request) const;
			ModifyInstanceVncPasswdOutcome modifyInstanceVncPasswd(const Model::ModifyInstanceVncPasswdRequest &request)const;
			void modifyInstanceVncPasswdAsync(const Model::ModifyInstanceVncPasswdRequest& request, const ModifyInstanceVncPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceVncPasswdOutcomeCallable modifyInstanceVncPasswdCallable(const Model::ModifyInstanceVncPasswdRequest& request) const;
			ModifyBandwidthPackageSpecOutcome modifyBandwidthPackageSpec(const Model::ModifyBandwidthPackageSpecRequest &request)const;
			void modifyBandwidthPackageSpecAsync(const Model::ModifyBandwidthPackageSpecRequest& request, const ModifyBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBandwidthPackageSpecOutcomeCallable modifyBandwidthPackageSpecCallable(const Model::ModifyBandwidthPackageSpecRequest& request) const;
			CreateNatGatewayOutcome createNatGateway(const Model::CreateNatGatewayRequest &request)const;
			void createNatGatewayAsync(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNatGatewayOutcomeCallable createNatGatewayCallable(const Model::CreateNatGatewayRequest& request) const;
			AttachDiskOutcome attachDisk(const Model::AttachDiskRequest &request)const;
			void attachDiskAsync(const Model::AttachDiskRequest& request, const AttachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDiskOutcomeCallable attachDiskCallable(const Model::AttachDiskRequest& request) const;
			DescribeEniMonitorDataOutcome describeEniMonitorData(const Model::DescribeEniMonitorDataRequest &request)const;
			void describeEniMonitorDataAsync(const Model::DescribeEniMonitorDataRequest& request, const DescribeEniMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEniMonitorDataOutcomeCallable describeEniMonitorDataCallable(const Model::DescribeEniMonitorDataRequest& request) const;
			ExportSnapshotOutcome exportSnapshot(const Model::ExportSnapshotRequest &request)const;
			void exportSnapshotAsync(const Model::ExportSnapshotRequest& request, const ExportSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportSnapshotOutcomeCallable exportSnapshotCallable(const Model::ExportSnapshotRequest& request) const;
			CreateHaVipOutcome createHaVip(const Model::CreateHaVipRequest &request)const;
			void createHaVipAsync(const Model::CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHaVipOutcomeCallable createHaVipCallable(const Model::CreateHaVipRequest& request) const;
			ReInitDiskOutcome reInitDisk(const Model::ReInitDiskRequest &request)const;
			void reInitDiskAsync(const Model::ReInitDiskRequest& request, const ReInitDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReInitDiskOutcomeCallable reInitDiskCallable(const Model::ReInitDiskRequest& request) const;
			ModifyAutoSnapshotPolicyOutcome modifyAutoSnapshotPolicy(const Model::ModifyAutoSnapshotPolicyRequest &request)const;
			void modifyAutoSnapshotPolicyAsync(const Model::ModifyAutoSnapshotPolicyRequest& request, const ModifyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoSnapshotPolicyOutcomeCallable modifyAutoSnapshotPolicyCallable(const Model::ModifyAutoSnapshotPolicyRequest& request) const;
			PurchaseReservedInstancesOfferingOutcome purchaseReservedInstancesOffering(const Model::PurchaseReservedInstancesOfferingRequest &request)const;
			void purchaseReservedInstancesOfferingAsync(const Model::PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PurchaseReservedInstancesOfferingOutcomeCallable purchaseReservedInstancesOfferingCallable(const Model::PurchaseReservedInstancesOfferingRequest& request) const;
			AssociateEipAddressOutcome associateEipAddress(const Model::AssociateEipAddressRequest &request)const;
			void associateEipAddressAsync(const Model::AssociateEipAddressRequest& request, const AssociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateEipAddressOutcomeCallable associateEipAddressCallable(const Model::AssociateEipAddressRequest& request) const;
			DeleteInstancesOutcome deleteInstances(const Model::DeleteInstancesRequest &request)const;
			void deleteInstancesAsync(const Model::DeleteInstancesRequest& request, const DeleteInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstancesOutcomeCallable deleteInstancesCallable(const Model::DeleteInstancesRequest& request) const;
			RevokeSecurityGroupEgressOutcome revokeSecurityGroupEgress(const Model::RevokeSecurityGroupEgressRequest &request)const;
			void revokeSecurityGroupEgressAsync(const Model::RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeSecurityGroupEgressOutcomeCallable revokeSecurityGroupEgressCallable(const Model::RevokeSecurityGroupEgressRequest& request) const;
			DescribeEipAddressesOutcome describeEipAddresses(const Model::DescribeEipAddressesRequest &request)const;
			void describeEipAddressesAsync(const Model::DescribeEipAddressesRequest& request, const DescribeEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEipAddressesOutcomeCallable describeEipAddressesCallable(const Model::DescribeEipAddressesRequest& request) const;
			ActivateRouterInterfaceOutcome activateRouterInterface(const Model::ActivateRouterInterfaceRequest &request)const;
			void activateRouterInterfaceAsync(const Model::ActivateRouterInterfaceRequest& request, const ActivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateRouterInterfaceOutcomeCallable activateRouterInterfaceCallable(const Model::ActivateRouterInterfaceRequest& request) const;
			DescribeSpotPriceHistoryOutcome describeSpotPriceHistory(const Model::DescribeSpotPriceHistoryRequest &request)const;
			void describeSpotPriceHistoryAsync(const Model::DescribeSpotPriceHistoryRequest& request, const DescribeSpotPriceHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSpotPriceHistoryOutcomeCallable describeSpotPriceHistoryCallable(const Model::DescribeSpotPriceHistoryRequest& request) const;
			TerminateVirtualBorderRouterOutcome terminateVirtualBorderRouter(const Model::TerminateVirtualBorderRouterRequest &request)const;
			void terminateVirtualBorderRouterAsync(const Model::TerminateVirtualBorderRouterRequest& request, const TerminateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TerminateVirtualBorderRouterOutcomeCallable terminateVirtualBorderRouterCallable(const Model::TerminateVirtualBorderRouterRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			DescribeInstanceHistoryEventsOutcome describeInstanceHistoryEvents(const Model::DescribeInstanceHistoryEventsRequest &request)const;
			void describeInstanceHistoryEventsAsync(const Model::DescribeInstanceHistoryEventsRequest& request, const DescribeInstanceHistoryEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceHistoryEventsOutcomeCallable describeInstanceHistoryEventsCallable(const Model::DescribeInstanceHistoryEventsRequest& request) const;
			DescribeInstanceTopologyOutcome describeInstanceTopology(const Model::DescribeInstanceTopologyRequest &request)const;
			void describeInstanceTopologyAsync(const Model::DescribeInstanceTopologyRequest& request, const DescribeInstanceTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTopologyOutcomeCallable describeInstanceTopologyCallable(const Model::DescribeInstanceTopologyRequest& request) const;
			ModifyDiskSpecOutcome modifyDiskSpec(const Model::ModifyDiskSpecRequest &request)const;
			void modifyDiskSpecAsync(const Model::ModifyDiskSpecRequest& request, const ModifyDiskSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDiskSpecOutcomeCallable modifyDiskSpecCallable(const Model::ModifyDiskSpecRequest& request) const;
			DeletePhysicalConnectionOutcome deletePhysicalConnection(const Model::DeletePhysicalConnectionRequest &request)const;
			void deletePhysicalConnectionAsync(const Model::DeletePhysicalConnectionRequest& request, const DeletePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePhysicalConnectionOutcomeCallable deletePhysicalConnectionCallable(const Model::DeletePhysicalConnectionRequest& request) const;
			RevokeSecurityGroupOutcome revokeSecurityGroup(const Model::RevokeSecurityGroupRequest &request)const;
			void revokeSecurityGroupAsync(const Model::RevokeSecurityGroupRequest& request, const RevokeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeSecurityGroupOutcomeCallable revokeSecurityGroupCallable(const Model::RevokeSecurityGroupRequest& request) const;
			DescribeTaskAttributeOutcome describeTaskAttribute(const Model::DescribeTaskAttributeRequest &request)const;
			void describeTaskAttributeAsync(const Model::DescribeTaskAttributeRequest& request, const DescribeTaskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTaskAttributeOutcomeCallable describeTaskAttributeCallable(const Model::DescribeTaskAttributeRequest& request) const;
			CreateAutoSnapshotPolicyOutcome createAutoSnapshotPolicy(const Model::CreateAutoSnapshotPolicyRequest &request)const;
			void createAutoSnapshotPolicyAsync(const Model::CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAutoSnapshotPolicyOutcomeCallable createAutoSnapshotPolicyCallable(const Model::CreateAutoSnapshotPolicyRequest& request) const;
			ModifyReservedInstanceAttributeOutcome modifyReservedInstanceAttribute(const Model::ModifyReservedInstanceAttributeRequest &request)const;
			void modifyReservedInstanceAttributeAsync(const Model::ModifyReservedInstanceAttributeRequest& request, const ModifyReservedInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReservedInstanceAttributeOutcomeCallable modifyReservedInstanceAttributeCallable(const Model::ModifyReservedInstanceAttributeRequest& request) const;
			ReActivateInstancesOutcome reActivateInstances(const Model::ReActivateInstancesRequest &request)const;
			void reActivateInstancesAsync(const Model::ReActivateInstancesRequest& request, const ReActivateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReActivateInstancesOutcomeCallable reActivateInstancesCallable(const Model::ReActivateInstancesRequest& request) const;
			DescribeForwardTableEntriesOutcome describeForwardTableEntries(const Model::DescribeForwardTableEntriesRequest &request)const;
			void describeForwardTableEntriesAsync(const Model::DescribeForwardTableEntriesRequest& request, const DescribeForwardTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeForwardTableEntriesOutcomeCallable describeForwardTableEntriesCallable(const Model::DescribeForwardTableEntriesRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeSecurityGroupReferencesOutcome describeSecurityGroupReferences(const Model::DescribeSecurityGroupReferencesRequest &request)const;
			void describeSecurityGroupReferencesAsync(const Model::DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupReferencesOutcomeCallable describeSecurityGroupReferencesCallable(const Model::DescribeSecurityGroupReferencesRequest& request) const;
			AllocateDedicatedHostsOutcome allocateDedicatedHosts(const Model::AllocateDedicatedHostsRequest &request)const;
			void allocateDedicatedHostsAsync(const Model::AllocateDedicatedHostsRequest& request, const AllocateDedicatedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateDedicatedHostsOutcomeCallable allocateDedicatedHostsCallable(const Model::AllocateDedicatedHostsRequest& request) const;
			DeleteRouterInterfaceOutcome deleteRouterInterface(const Model::DeleteRouterInterfaceRequest &request)const;
			void deleteRouterInterfaceAsync(const Model::DeleteRouterInterfaceRequest& request, const DeleteRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouterInterfaceOutcomeCallable deleteRouterInterfaceCallable(const Model::DeleteRouterInterfaceRequest& request) const;
			DetachInstanceRamRoleOutcome detachInstanceRamRole(const Model::DetachInstanceRamRoleRequest &request)const;
			void detachInstanceRamRoleAsync(const Model::DetachInstanceRamRoleRequest& request, const DetachInstanceRamRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachInstanceRamRoleOutcomeCallable detachInstanceRamRoleCallable(const Model::DetachInstanceRamRoleRequest& request) const;
			AllocatePublicIpAddressOutcome allocatePublicIpAddress(const Model::AllocatePublicIpAddressRequest &request)const;
			void allocatePublicIpAddressAsync(const Model::AllocatePublicIpAddressRequest& request, const AllocatePublicIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocatePublicIpAddressOutcomeCallable allocatePublicIpAddressCallable(const Model::AllocatePublicIpAddressRequest& request) const;
			ModifyDedicatedHostAutoRenewAttributeOutcome modifyDedicatedHostAutoRenewAttribute(const Model::ModifyDedicatedHostAutoRenewAttributeRequest &request)const;
			void modifyDedicatedHostAutoRenewAttributeAsync(const Model::ModifyDedicatedHostAutoRenewAttributeRequest& request, const ModifyDedicatedHostAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDedicatedHostAutoRenewAttributeOutcomeCallable modifyDedicatedHostAutoRenewAttributeCallable(const Model::ModifyDedicatedHostAutoRenewAttributeRequest& request) const;
			ModifyReservedInstancesOutcome modifyReservedInstances(const Model::ModifyReservedInstancesRequest &request)const;
			void modifyReservedInstancesAsync(const Model::ModifyReservedInstancesRequest& request, const ModifyReservedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReservedInstancesOutcomeCallable modifyReservedInstancesCallable(const Model::ModifyReservedInstancesRequest& request) const;
			DescribeEipMonitorDataOutcome describeEipMonitorData(const Model::DescribeEipMonitorDataRequest &request)const;
			void describeEipMonitorDataAsync(const Model::DescribeEipMonitorDataRequest& request, const DescribeEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEipMonitorDataOutcomeCallable describeEipMonitorDataCallable(const Model::DescribeEipMonitorDataRequest& request) const;
			CancelAutoSnapshotPolicyOutcome cancelAutoSnapshotPolicy(const Model::CancelAutoSnapshotPolicyRequest &request)const;
			void cancelAutoSnapshotPolicyAsync(const Model::CancelAutoSnapshotPolicyRequest& request, const CancelAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelAutoSnapshotPolicyOutcomeCallable cancelAutoSnapshotPolicyCallable(const Model::CancelAutoSnapshotPolicyRequest& request) const;
			DescribeDisksFullStatusOutcome describeDisksFullStatus(const Model::DescribeDisksFullStatusRequest &request)const;
			void describeDisksFullStatusAsync(const Model::DescribeDisksFullStatusRequest& request, const DescribeDisksFullStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDisksFullStatusOutcomeCallable describeDisksFullStatusCallable(const Model::DescribeDisksFullStatusRequest& request) const;
			DeleteNetworkInterfaceOutcome deleteNetworkInterface(const Model::DeleteNetworkInterfaceRequest &request)const;
			void deleteNetworkInterfaceAsync(const Model::DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkInterfaceOutcomeCallable deleteNetworkInterfaceCallable(const Model::DeleteNetworkInterfaceRequest& request) const;
			ModifyInstanceSpecOutcome modifyInstanceSpec(const Model::ModifyInstanceSpecRequest &request)const;
			void modifyInstanceSpecAsync(const Model::ModifyInstanceSpecRequest& request, const ModifyInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceSpecOutcomeCallable modifyInstanceSpecCallable(const Model::ModifyInstanceSpecRequest& request) const;
			AssignPrivateIpAddressesOutcome assignPrivateIpAddresses(const Model::AssignPrivateIpAddressesRequest &request)const;
			void assignPrivateIpAddressesAsync(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignPrivateIpAddressesOutcomeCallable assignPrivateIpAddressesCallable(const Model::AssignPrivateIpAddressesRequest& request) const;
			DeleteSnapshotOutcome deleteSnapshot(const Model::DeleteSnapshotRequest &request)const;
			void deleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotOutcomeCallable deleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;
			DeleteKeyPairsOutcome deleteKeyPairs(const Model::DeleteKeyPairsRequest &request)const;
			void deleteKeyPairsAsync(const Model::DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteKeyPairsOutcomeCallable deleteKeyPairsCallable(const Model::DeleteKeyPairsRequest& request) const;
			AuthorizeSecurityGroupOutcome authorizeSecurityGroup(const Model::AuthorizeSecurityGroupRequest &request)const;
			void authorizeSecurityGroupAsync(const Model::AuthorizeSecurityGroupRequest& request, const AuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeSecurityGroupOutcomeCallable authorizeSecurityGroupCallable(const Model::AuthorizeSecurityGroupRequest& request) const;
			DescribeSnapshotMonitorDataOutcome describeSnapshotMonitorData(const Model::DescribeSnapshotMonitorDataRequest &request)const;
			void describeSnapshotMonitorDataAsync(const Model::DescribeSnapshotMonitorDataRequest& request, const DescribeSnapshotMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotMonitorDataOutcomeCallable describeSnapshotMonitorDataCallable(const Model::DescribeSnapshotMonitorDataRequest& request) const;
			DeleteSecurityGroupOutcome deleteSecurityGroup(const Model::DeleteSecurityGroupRequest &request)const;
			void deleteSecurityGroupAsync(const Model::DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecurityGroupOutcomeCallable deleteSecurityGroupCallable(const Model::DeleteSecurityGroupRequest& request) const;
			ConnectRouterInterfaceOutcome connectRouterInterface(const Model::ConnectRouterInterfaceRequest &request)const;
			void connectRouterInterfaceAsync(const Model::ConnectRouterInterfaceRequest& request, const ConnectRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConnectRouterInterfaceOutcomeCallable connectRouterInterfaceCallable(const Model::ConnectRouterInterfaceRequest& request) const;
			GetInstanceConsoleOutputOutcome getInstanceConsoleOutput(const Model::GetInstanceConsoleOutputRequest &request)const;
			void getInstanceConsoleOutputAsync(const Model::GetInstanceConsoleOutputRequest& request, const GetInstanceConsoleOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceConsoleOutputOutcomeCallable getInstanceConsoleOutputCallable(const Model::GetInstanceConsoleOutputRequest& request) const;
			CreateSimulatedSystemEventsOutcome createSimulatedSystemEvents(const Model::CreateSimulatedSystemEventsRequest &request)const;
			void createSimulatedSystemEventsAsync(const Model::CreateSimulatedSystemEventsRequest& request, const CreateSimulatedSystemEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSimulatedSystemEventsOutcomeCallable createSimulatedSystemEventsCallable(const Model::CreateSimulatedSystemEventsRequest& request) const;
			RedeployInstanceOutcome redeployInstance(const Model::RedeployInstanceRequest &request)const;
			void redeployInstanceAsync(const Model::RedeployInstanceRequest& request, const RedeployInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RedeployInstanceOutcomeCallable redeployInstanceCallable(const Model::RedeployInstanceRequest& request) const;
			CancelTaskOutcome cancelTask(const Model::CancelTaskRequest &request)const;
			void cancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelTaskOutcomeCallable cancelTaskCallable(const Model::CancelTaskRequest& request) const;
			ModifyCommandOutcome modifyCommand(const Model::ModifyCommandRequest &request)const;
			void modifyCommandAsync(const Model::ModifyCommandRequest& request, const ModifyCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCommandOutcomeCallable modifyCommandCallable(const Model::ModifyCommandRequest& request) const;
			ModifyPhysicalConnectionAttributeOutcome modifyPhysicalConnectionAttribute(const Model::ModifyPhysicalConnectionAttributeRequest &request)const;
			void modifyPhysicalConnectionAttributeAsync(const Model::ModifyPhysicalConnectionAttributeRequest& request, const ModifyPhysicalConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPhysicalConnectionAttributeOutcomeCallable modifyPhysicalConnectionAttributeCallable(const Model::ModifyPhysicalConnectionAttributeRequest& request) const;
			ModifyVSwitchAttributeOutcome modifyVSwitchAttribute(const Model::ModifyVSwitchAttributeRequest &request)const;
			void modifyVSwitchAttributeAsync(const Model::ModifyVSwitchAttributeRequest& request, const ModifyVSwitchAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVSwitchAttributeOutcomeCallable modifyVSwitchAttributeCallable(const Model::ModifyVSwitchAttributeRequest& request) const;
			ModifyInstanceAttributeOutcome modifyInstanceAttribute(const Model::ModifyInstanceAttributeRequest &request)const;
			void modifyInstanceAttributeAsync(const Model::ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAttributeOutcomeCallable modifyInstanceAttributeCallable(const Model::ModifyInstanceAttributeRequest& request) const;
			DeleteHaVipOutcome deleteHaVip(const Model::DeleteHaVipRequest &request)const;
			void deleteHaVipAsync(const Model::DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHaVipOutcomeCallable deleteHaVipCallable(const Model::DeleteHaVipRequest& request) const;
			DescribeSecurityGroupsOutcome describeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request)const;
			void describeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupsOutcomeCallable describeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request) const;
			ResizeDiskOutcome resizeDisk(const Model::ResizeDiskRequest &request)const;
			void resizeDiskAsync(const Model::ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeDiskOutcomeCallable resizeDiskCallable(const Model::ResizeDiskRequest& request) const;
			ModifyDedicatedHostAttributeOutcome modifyDedicatedHostAttribute(const Model::ModifyDedicatedHostAttributeRequest &request)const;
			void modifyDedicatedHostAttributeAsync(const Model::ModifyDedicatedHostAttributeRequest& request, const ModifyDedicatedHostAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDedicatedHostAttributeOutcomeCallable modifyDedicatedHostAttributeCallable(const Model::ModifyDedicatedHostAttributeRequest& request) const;
			ModifyFleetOutcome modifyFleet(const Model::ModifyFleetRequest &request)const;
			void modifyFleetAsync(const Model::ModifyFleetRequest& request, const ModifyFleetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFleetOutcomeCallable modifyFleetCallable(const Model::ModifyFleetRequest& request) const;
			CreateRouteEntryOutcome createRouteEntry(const Model::CreateRouteEntryRequest &request)const;
			void createRouteEntryAsync(const Model::CreateRouteEntryRequest& request, const CreateRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRouteEntryOutcomeCallable createRouteEntryCallable(const Model::CreateRouteEntryRequest& request) const;
			AttachKeyPairOutcome attachKeyPair(const Model::AttachKeyPairRequest &request)const;
			void attachKeyPairAsync(const Model::AttachKeyPairRequest& request, const AttachKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachKeyPairOutcomeCallable attachKeyPairCallable(const Model::AttachKeyPairRequest& request) const;
			DescribeInvocationsOutcome describeInvocations(const Model::DescribeInvocationsRequest &request)const;
			void describeInvocationsAsync(const Model::DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInvocationsOutcomeCallable describeInvocationsCallable(const Model::DescribeInvocationsRequest& request) const;
			CreateRouterInterfaceOutcome createRouterInterface(const Model::CreateRouterInterfaceRequest &request)const;
			void createRouterInterfaceAsync(const Model::CreateRouterInterfaceRequest& request, const CreateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRouterInterfaceOutcomeCallable createRouterInterfaceCallable(const Model::CreateRouterInterfaceRequest& request) const;
			DeleteAutoProvisioningGroupOutcome deleteAutoProvisioningGroup(const Model::DeleteAutoProvisioningGroupRequest &request)const;
			void deleteAutoProvisioningGroupAsync(const Model::DeleteAutoProvisioningGroupRequest& request, const DeleteAutoProvisioningGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutoProvisioningGroupOutcomeCallable deleteAutoProvisioningGroupCallable(const Model::DeleteAutoProvisioningGroupRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			RunInstancesOutcome runInstances(const Model::RunInstancesRequest &request)const;
			void runInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunInstancesOutcomeCallable runInstancesCallable(const Model::RunInstancesRequest& request) const;
			ModifyLaunchTemplateDefaultVersionOutcome modifyLaunchTemplateDefaultVersion(const Model::ModifyLaunchTemplateDefaultVersionRequest &request)const;
			void modifyLaunchTemplateDefaultVersionAsync(const Model::ModifyLaunchTemplateDefaultVersionRequest& request, const ModifyLaunchTemplateDefaultVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLaunchTemplateDefaultVersionOutcomeCallable modifyLaunchTemplateDefaultVersionCallable(const Model::ModifyLaunchTemplateDefaultVersionRequest& request) const;
			CreateLaunchTemplateVersionOutcome createLaunchTemplateVersion(const Model::CreateLaunchTemplateVersionRequest &request)const;
			void createLaunchTemplateVersionAsync(const Model::CreateLaunchTemplateVersionRequest& request, const CreateLaunchTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLaunchTemplateVersionOutcomeCallable createLaunchTemplateVersionCallable(const Model::CreateLaunchTemplateVersionRequest& request) const;
			DescribeAutoProvisioningGroupHistoryOutcome describeAutoProvisioningGroupHistory(const Model::DescribeAutoProvisioningGroupHistoryRequest &request)const;
			void describeAutoProvisioningGroupHistoryAsync(const Model::DescribeAutoProvisioningGroupHistoryRequest& request, const DescribeAutoProvisioningGroupHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoProvisioningGroupHistoryOutcomeCallable describeAutoProvisioningGroupHistoryCallable(const Model::DescribeAutoProvisioningGroupHistoryRequest& request) const;
			StopInvocationOutcome stopInvocation(const Model::StopInvocationRequest &request)const;
			void stopInvocationAsync(const Model::StopInvocationRequest& request, const StopInvocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInvocationOutcomeCallable stopInvocationCallable(const Model::StopInvocationRequest& request) const;
			ModifyInstanceNetworkSpecOutcome modifyInstanceNetworkSpec(const Model::ModifyInstanceNetworkSpecRequest &request)const;
			void modifyInstanceNetworkSpecAsync(const Model::ModifyInstanceNetworkSpecRequest& request, const ModifyInstanceNetworkSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceNetworkSpecOutcomeCallable modifyInstanceNetworkSpecCallable(const Model::ModifyInstanceNetworkSpecRequest& request) const;
			ModifyInstanceDeploymentOutcome modifyInstanceDeployment(const Model::ModifyInstanceDeploymentRequest &request)const;
			void modifyInstanceDeploymentAsync(const Model::ModifyInstanceDeploymentRequest& request, const ModifyInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceDeploymentOutcomeCallable modifyInstanceDeploymentCallable(const Model::ModifyInstanceDeploymentRequest& request) const;
			ModifyDiskAttributeOutcome modifyDiskAttribute(const Model::ModifyDiskAttributeRequest &request)const;
			void modifyDiskAttributeAsync(const Model::ModifyDiskAttributeRequest& request, const ModifyDiskAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDiskAttributeOutcomeCallable modifyDiskAttributeCallable(const Model::ModifyDiskAttributeRequest& request) const;
			CreateVSwitchOutcome createVSwitch(const Model::CreateVSwitchRequest &request)const;
			void createVSwitchAsync(const Model::CreateVSwitchRequest& request, const CreateVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVSwitchOutcomeCallable createVSwitchCallable(const Model::CreateVSwitchRequest& request) const;
			DescribeFleetsOutcome describeFleets(const Model::DescribeFleetsRequest &request)const;
			void describeFleetsAsync(const Model::DescribeFleetsRequest& request, const DescribeFleetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFleetsOutcomeCallable describeFleetsCallable(const Model::DescribeFleetsRequest& request) const;
			DescribeBandwidthLimitationOutcome describeBandwidthLimitation(const Model::DescribeBandwidthLimitationRequest &request)const;
			void describeBandwidthLimitationAsync(const Model::DescribeBandwidthLimitationRequest& request, const DescribeBandwidthLimitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBandwidthLimitationOutcomeCallable describeBandwidthLimitationCallable(const Model::DescribeBandwidthLimitationRequest& request) const;
			ModifyEipAddressAttributeOutcome modifyEipAddressAttribute(const Model::ModifyEipAddressAttributeRequest &request)const;
			void modifyEipAddressAttributeAsync(const Model::ModifyEipAddressAttributeRequest& request, const ModifyEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEipAddressAttributeOutcomeCallable modifyEipAddressAttributeCallable(const Model::ModifyEipAddressAttributeRequest& request) const;
			ModifySecurityGroupAttributeOutcome modifySecurityGroupAttribute(const Model::ModifySecurityGroupAttributeRequest &request)const;
			void modifySecurityGroupAttributeAsync(const Model::ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupAttributeOutcomeCallable modifySecurityGroupAttributeCallable(const Model::ModifySecurityGroupAttributeRequest& request) const;
			RenewDedicatedHostsOutcome renewDedicatedHosts(const Model::RenewDedicatedHostsRequest &request)const;
			void renewDedicatedHostsAsync(const Model::RenewDedicatedHostsRequest& request, const RenewDedicatedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewDedicatedHostsOutcomeCallable renewDedicatedHostsCallable(const Model::RenewDedicatedHostsRequest& request) const;
			RemoveTagsOutcome removeTags(const Model::RemoveTagsRequest &request)const;
			void removeTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTagsOutcomeCallable removeTagsCallable(const Model::RemoveTagsRequest& request) const;
			CancelSimulatedSystemEventsOutcome cancelSimulatedSystemEvents(const Model::CancelSimulatedSystemEventsRequest &request)const;
			void cancelSimulatedSystemEventsAsync(const Model::CancelSimulatedSystemEventsRequest& request, const CancelSimulatedSystemEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelSimulatedSystemEventsOutcomeCallable cancelSimulatedSystemEventsCallable(const Model::CancelSimulatedSystemEventsRequest& request) const;
			ModifyInstanceAutoReleaseTimeOutcome modifyInstanceAutoReleaseTime(const Model::ModifyInstanceAutoReleaseTimeRequest &request)const;
			void modifyInstanceAutoReleaseTimeAsync(const Model::ModifyInstanceAutoReleaseTimeRequest& request, const ModifyInstanceAutoReleaseTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAutoReleaseTimeOutcomeCallable modifyInstanceAutoReleaseTimeCallable(const Model::ModifyInstanceAutoReleaseTimeRequest& request) const;
			DeleteNatGatewayOutcome deleteNatGateway(const Model::DeleteNatGatewayRequest &request)const;
			void deleteNatGatewayAsync(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNatGatewayOutcomeCallable deleteNatGatewayCallable(const Model::DeleteNatGatewayRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			DeactivateRouterInterfaceOutcome deactivateRouterInterface(const Model::DeactivateRouterInterfaceRequest &request)const;
			void deactivateRouterInterfaceAsync(const Model::DeactivateRouterInterfaceRequest& request, const DeactivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactivateRouterInterfaceOutcomeCallable deactivateRouterInterfaceCallable(const Model::DeactivateRouterInterfaceRequest& request) const;
			DescribeAvailableResourceOutcome describeAvailableResource(const Model::DescribeAvailableResourceRequest &request)const;
			void describeAvailableResourceAsync(const Model::DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableResourceOutcomeCallable describeAvailableResourceCallable(const Model::DescribeAvailableResourceRequest& request) const;
			DescribeAccessPointsOutcome describeAccessPoints(const Model::DescribeAccessPointsRequest &request)const;
			void describeAccessPointsAsync(const Model::DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessPointsOutcomeCallable describeAccessPointsCallable(const Model::DescribeAccessPointsRequest& request) const;
			CreateCommandOutcome createCommand(const Model::CreateCommandRequest &request)const;
			void createCommandAsync(const Model::CreateCommandRequest& request, const CreateCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCommandOutcomeCallable createCommandCallable(const Model::CreateCommandRequest& request) const;
			DescribeInstancesFullStatusOutcome describeInstancesFullStatus(const Model::DescribeInstancesFullStatusRequest &request)const;
			void describeInstancesFullStatusAsync(const Model::DescribeInstancesFullStatusRequest& request, const DescribeInstancesFullStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesFullStatusOutcomeCallable describeInstancesFullStatusCallable(const Model::DescribeInstancesFullStatusRequest& request) const;
			DescribeDedicatedHostsOutcome describeDedicatedHosts(const Model::DescribeDedicatedHostsRequest &request)const;
			void describeDedicatedHostsAsync(const Model::DescribeDedicatedHostsRequest& request, const DescribeDedicatedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDedicatedHostsOutcomeCallable describeDedicatedHostsCallable(const Model::DescribeDedicatedHostsRequest& request) const;
			DescribeFleetInstancesOutcome describeFleetInstances(const Model::DescribeFleetInstancesRequest &request)const;
			void describeFleetInstancesAsync(const Model::DescribeFleetInstancesRequest& request, const DescribeFleetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFleetInstancesOutcomeCallable describeFleetInstancesCallable(const Model::DescribeFleetInstancesRequest& request) const;
			ReleaseEipAddressOutcome releaseEipAddress(const Model::ReleaseEipAddressRequest &request)const;
			void releaseEipAddressAsync(const Model::ReleaseEipAddressRequest& request, const ReleaseEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseEipAddressOutcomeCallable releaseEipAddressCallable(const Model::ReleaseEipAddressRequest& request) const;
			DetachClassicLinkVpcOutcome detachClassicLinkVpc(const Model::DetachClassicLinkVpcRequest &request)const;
			void detachClassicLinkVpcAsync(const Model::DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachClassicLinkVpcOutcomeCallable detachClassicLinkVpcCallable(const Model::DetachClassicLinkVpcRequest& request) const;
			DescribeVSwitchesOutcome describeVSwitches(const Model::DescribeVSwitchesRequest &request)const;
			void describeVSwitchesAsync(const Model::DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchesOutcomeCallable describeVSwitchesCallable(const Model::DescribeVSwitchesRequest& request) const;
			ModifyRouterInterfaceSpecOutcome modifyRouterInterfaceSpec(const Model::ModifyRouterInterfaceSpecRequest &request)const;
			void modifyRouterInterfaceSpecAsync(const Model::ModifyRouterInterfaceSpecRequest& request, const ModifyRouterInterfaceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRouterInterfaceSpecOutcomeCallable modifyRouterInterfaceSpecCallable(const Model::ModifyRouterInterfaceSpecRequest& request) const;
			DescribeVpcsOutcome describeVpcs(const Model::DescribeVpcsRequest &request)const;
			void describeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpcsOutcomeCallable describeVpcsCallable(const Model::DescribeVpcsRequest& request) const;
			ExportImageOutcome exportImage(const Model::ExportImageRequest &request)const;
			void exportImageAsync(const Model::ExportImageRequest& request, const ExportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportImageOutcomeCallable exportImageCallable(const Model::ExportImageRequest& request) const;
			DescribeDiskMonitorDataOutcome describeDiskMonitorData(const Model::DescribeDiskMonitorDataRequest &request)const;
			void describeDiskMonitorDataAsync(const Model::DescribeDiskMonitorDataRequest& request, const DescribeDiskMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiskMonitorDataOutcomeCallable describeDiskMonitorDataCallable(const Model::DescribeDiskMonitorDataRequest& request) const;
			ModifyDeploymentSetAttributeOutcome modifyDeploymentSetAttribute(const Model::ModifyDeploymentSetAttributeRequest &request)const;
			void modifyDeploymentSetAttributeAsync(const Model::ModifyDeploymentSetAttributeRequest& request, const ModifyDeploymentSetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeploymentSetAttributeOutcomeCallable modifyDeploymentSetAttributeCallable(const Model::ModifyDeploymentSetAttributeRequest& request) const;
			ModifyRouterInterfaceAttributeOutcome modifyRouterInterfaceAttribute(const Model::ModifyRouterInterfaceAttributeRequest &request)const;
			void modifyRouterInterfaceAttributeAsync(const Model::ModifyRouterInterfaceAttributeRequest& request, const ModifyRouterInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRouterInterfaceAttributeOutcomeCallable modifyRouterInterfaceAttributeCallable(const Model::ModifyRouterInterfaceAttributeRequest& request) const;
			DescribeVirtualBorderRoutersForPhysicalConnectionOutcome describeVirtualBorderRoutersForPhysicalConnection(const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request)const;
			void describeVirtualBorderRoutersForPhysicalConnectionAsync(const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest& request, const DescribeVirtualBorderRoutersForPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVirtualBorderRoutersForPhysicalConnectionOutcomeCallable describeVirtualBorderRoutersForPhysicalConnectionCallable(const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest& request) const;
			StartInstanceOutcome startInstance(const Model::StartInstanceRequest &request)const;
			void startInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartInstanceOutcomeCallable startInstanceCallable(const Model::StartInstanceRequest& request) const;
			CreateDiskOutcome createDisk(const Model::CreateDiskRequest &request)const;
			void createDiskAsync(const Model::CreateDiskRequest& request, const CreateDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDiskOutcomeCallable createDiskCallable(const Model::CreateDiskRequest& request) const;
			DescribeAutoProvisioningGroupInstancesOutcome describeAutoProvisioningGroupInstances(const Model::DescribeAutoProvisioningGroupInstancesRequest &request)const;
			void describeAutoProvisioningGroupInstancesAsync(const Model::DescribeAutoProvisioningGroupInstancesRequest& request, const DescribeAutoProvisioningGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoProvisioningGroupInstancesOutcomeCallable describeAutoProvisioningGroupInstancesCallable(const Model::DescribeAutoProvisioningGroupInstancesRequest& request) const;
			DescribeInstanceTypesOutcome describeInstanceTypes(const Model::DescribeInstanceTypesRequest &request)const;
			void describeInstanceTypesAsync(const Model::DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTypesOutcomeCallable describeInstanceTypesCallable(const Model::DescribeInstanceTypesRequest& request) const;
			DescribeSnapshotPackageOutcome describeSnapshotPackage(const Model::DescribeSnapshotPackageRequest &request)const;
			void describeSnapshotPackageAsync(const Model::DescribeSnapshotPackageRequest& request, const DescribeSnapshotPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotPackageOutcomeCallable describeSnapshotPackageCallable(const Model::DescribeSnapshotPackageRequest& request) const;
			RebootInstanceOutcome rebootInstance(const Model::RebootInstanceRequest &request)const;
			void rebootInstanceAsync(const Model::RebootInstanceRequest& request, const RebootInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootInstanceOutcomeCallable rebootInstanceCallable(const Model::RebootInstanceRequest& request) const;
			InvokeCommandOutcome invokeCommand(const Model::InvokeCommandRequest &request)const;
			void invokeCommandAsync(const Model::InvokeCommandRequest& request, const InvokeCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeCommandOutcomeCallable invokeCommandCallable(const Model::InvokeCommandRequest& request) const;
			ModifyUserBusinessBehaviorOutcome modifyUserBusinessBehavior(const Model::ModifyUserBusinessBehaviorRequest &request)const;
			void modifyUserBusinessBehaviorAsync(const Model::ModifyUserBusinessBehaviorRequest& request, const ModifyUserBusinessBehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserBusinessBehaviorOutcomeCallable modifyUserBusinessBehaviorCallable(const Model::ModifyUserBusinessBehaviorRequest& request) const;
			DeleteForwardEntryOutcome deleteForwardEntry(const Model::DeleteForwardEntryRequest &request)const;
			void deleteForwardEntryAsync(const Model::DeleteForwardEntryRequest& request, const DeleteForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteForwardEntryOutcomeCallable deleteForwardEntryCallable(const Model::DeleteForwardEntryRequest& request) const;
			DescribeHpcClustersOutcome describeHpcClusters(const Model::DescribeHpcClustersRequest &request)const;
			void describeHpcClustersAsync(const Model::DescribeHpcClustersRequest& request, const DescribeHpcClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHpcClustersOutcomeCallable describeHpcClustersCallable(const Model::DescribeHpcClustersRequest& request) const;
			AcceptInquiredSystemEventOutcome acceptInquiredSystemEvent(const Model::AcceptInquiredSystemEventRequest &request)const;
			void acceptInquiredSystemEventAsync(const Model::AcceptInquiredSystemEventRequest& request, const AcceptInquiredSystemEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptInquiredSystemEventOutcomeCallable acceptInquiredSystemEventCallable(const Model::AcceptInquiredSystemEventRequest& request) const;
			ModifyInstanceChargeTypeOutcome modifyInstanceChargeType(const Model::ModifyInstanceChargeTypeRequest &request)const;
			void modifyInstanceChargeTypeAsync(const Model::ModifyInstanceChargeTypeRequest& request, const ModifyInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceChargeTypeOutcomeCallable modifyInstanceChargeTypeCallable(const Model::ModifyInstanceChargeTypeRequest& request) const;
			ModifyInstanceAutoRenewAttributeOutcome modifyInstanceAutoRenewAttribute(const Model::ModifyInstanceAutoRenewAttributeRequest &request)const;
			void modifyInstanceAutoRenewAttributeAsync(const Model::ModifyInstanceAutoRenewAttributeRequest& request, const ModifyInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAutoRenewAttributeOutcomeCallable modifyInstanceAutoRenewAttributeCallable(const Model::ModifyInstanceAutoRenewAttributeRequest& request) const;
			DescribeVirtualBorderRoutersOutcome describeVirtualBorderRouters(const Model::DescribeVirtualBorderRoutersRequest &request)const;
			void describeVirtualBorderRoutersAsync(const Model::DescribeVirtualBorderRoutersRequest& request, const DescribeVirtualBorderRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVirtualBorderRoutersOutcomeCallable describeVirtualBorderRoutersCallable(const Model::DescribeVirtualBorderRoutersRequest& request) const;
			ModifyDedicatedHostAutoReleaseTimeOutcome modifyDedicatedHostAutoReleaseTime(const Model::ModifyDedicatedHostAutoReleaseTimeRequest &request)const;
			void modifyDedicatedHostAutoReleaseTimeAsync(const Model::ModifyDedicatedHostAutoReleaseTimeRequest& request, const ModifyDedicatedHostAutoReleaseTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDedicatedHostAutoReleaseTimeOutcomeCallable modifyDedicatedHostAutoReleaseTimeCallable(const Model::ModifyDedicatedHostAutoReleaseTimeRequest& request) const;
			ModifyHpcClusterAttributeOutcome modifyHpcClusterAttribute(const Model::ModifyHpcClusterAttributeRequest &request)const;
			void modifyHpcClusterAttributeAsync(const Model::ModifyHpcClusterAttributeRequest& request, const ModifyHpcClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHpcClusterAttributeOutcomeCallable modifyHpcClusterAttributeCallable(const Model::ModifyHpcClusterAttributeRequest& request) const;
			DescribePriceOutcome describePrice(const Model::DescribePriceRequest &request)const;
			void describePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePriceOutcomeCallable describePriceCallable(const Model::DescribePriceRequest& request) const;
			DescribeLimitationOutcome describeLimitation(const Model::DescribeLimitationRequest &request)const;
			void describeLimitationAsync(const Model::DescribeLimitationRequest& request, const DescribeLimitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLimitationOutcomeCallable describeLimitationCallable(const Model::DescribeLimitationRequest& request) const;
			DeleteDeploymentSetOutcome deleteDeploymentSet(const Model::DeleteDeploymentSetRequest &request)const;
			void deleteDeploymentSetAsync(const Model::DeleteDeploymentSetRequest& request, const DeleteDeploymentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeploymentSetOutcomeCallable deleteDeploymentSetCallable(const Model::DeleteDeploymentSetRequest& request) const;
			ModifyInstanceVpcAttributeOutcome modifyInstanceVpcAttribute(const Model::ModifyInstanceVpcAttributeRequest &request)const;
			void modifyInstanceVpcAttributeAsync(const Model::ModifyInstanceVpcAttributeRequest& request, const ModifyInstanceVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceVpcAttributeOutcomeCallable modifyInstanceVpcAttributeCallable(const Model::ModifyInstanceVpcAttributeRequest& request) const;
			ReleaseDedicatedHostOutcome releaseDedicatedHost(const Model::ReleaseDedicatedHostRequest &request)const;
			void releaseDedicatedHostAsync(const Model::ReleaseDedicatedHostRequest& request, const ReleaseDedicatedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseDedicatedHostOutcomeCallable releaseDedicatedHostCallable(const Model::ReleaseDedicatedHostRequest& request) const;
			AddTagsOutcome addTags(const Model::AddTagsRequest &request)const;
			void addTagsAsync(const Model::AddTagsRequest& request, const AddTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagsOutcomeCallable addTagsCallable(const Model::AddTagsRequest& request) const;
			CreateHpcClusterOutcome createHpcCluster(const Model::CreateHpcClusterRequest &request)const;
			void createHpcClusterAsync(const Model::CreateHpcClusterRequest& request, const CreateHpcClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHpcClusterOutcomeCallable createHpcClusterCallable(const Model::CreateHpcClusterRequest& request) const;
			DescribeUserBusinessBehaviorOutcome describeUserBusinessBehavior(const Model::DescribeUserBusinessBehaviorRequest &request)const;
			void describeUserBusinessBehaviorAsync(const Model::DescribeUserBusinessBehaviorRequest& request, const DescribeUserBusinessBehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserBusinessBehaviorOutcomeCallable describeUserBusinessBehaviorCallable(const Model::DescribeUserBusinessBehaviorRequest& request) const;
			DescribeCommandsOutcome describeCommands(const Model::DescribeCommandsRequest &request)const;
			void describeCommandsAsync(const Model::DescribeCommandsRequest& request, const DescribeCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommandsOutcomeCallable describeCommandsCallable(const Model::DescribeCommandsRequest& request) const;
			DeleteImageOutcome deleteImage(const Model::DeleteImageRequest &request)const;
			void deleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageOutcomeCallable deleteImageCallable(const Model::DeleteImageRequest& request) const;
			CreateFleetOutcome createFleet(const Model::CreateFleetRequest &request)const;
			void createFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFleetOutcomeCallable createFleetCallable(const Model::CreateFleetRequest& request) const;
			DescribeNetworkInterfacePermissionsOutcome describeNetworkInterfacePermissions(const Model::DescribeNetworkInterfacePermissionsRequest &request)const;
			void describeNetworkInterfacePermissionsAsync(const Model::DescribeNetworkInterfacePermissionsRequest& request, const DescribeNetworkInterfacePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkInterfacePermissionsOutcomeCallable describeNetworkInterfacePermissionsCallable(const Model::DescribeNetworkInterfacePermissionsRequest& request) const;
			DescribeDisksOutcome describeDisks(const Model::DescribeDisksRequest &request)const;
			void describeDisksAsync(const Model::DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDisksOutcomeCallable describeDisksCallable(const Model::DescribeDisksRequest& request) const;
			DeleteVpcOutcome deleteVpc(const Model::DeleteVpcRequest &request)const;
			void deleteVpcAsync(const Model::DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpcOutcomeCallable deleteVpcCallable(const Model::DeleteVpcRequest& request) const;
			DescribeImageSupportInstanceTypesOutcome describeImageSupportInstanceTypes(const Model::DescribeImageSupportInstanceTypesRequest &request)const;
			void describeImageSupportInstanceTypesAsync(const Model::DescribeImageSupportInstanceTypesRequest& request, const DescribeImageSupportInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageSupportInstanceTypesOutcomeCallable describeImageSupportInstanceTypesCallable(const Model::DescribeImageSupportInstanceTypesRequest& request) const;
			DeleteCommandOutcome deleteCommand(const Model::DeleteCommandRequest &request)const;
			void deleteCommandAsync(const Model::DeleteCommandRequest& request, const DeleteCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCommandOutcomeCallable deleteCommandCallable(const Model::DeleteCommandRequest& request) const;
			ReplaceSystemDiskOutcome replaceSystemDisk(const Model::ReplaceSystemDiskRequest &request)const;
			void replaceSystemDiskAsync(const Model::ReplaceSystemDiskRequest& request, const ReplaceSystemDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceSystemDiskOutcomeCallable replaceSystemDiskCallable(const Model::ReplaceSystemDiskRequest& request) const;
			DeleteVSwitchOutcome deleteVSwitch(const Model::DeleteVSwitchRequest &request)const;
			void deleteVSwitchAsync(const Model::DeleteVSwitchRequest& request, const DeleteVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVSwitchOutcomeCallable deleteVSwitchCallable(const Model::DeleteVSwitchRequest& request) const;
			ModifyImageShareGroupPermissionOutcome modifyImageShareGroupPermission(const Model::ModifyImageShareGroupPermissionRequest &request)const;
			void modifyImageShareGroupPermissionAsync(const Model::ModifyImageShareGroupPermissionRequest& request, const ModifyImageShareGroupPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImageShareGroupPermissionOutcomeCallable modifyImageShareGroupPermissionCallable(const Model::ModifyImageShareGroupPermissionRequest& request) const;
			DescribeInstanceVncUrlOutcome describeInstanceVncUrl(const Model::DescribeInstanceVncUrlRequest &request)const;
			void describeInstanceVncUrlAsync(const Model::DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceVncUrlOutcomeCallable describeInstanceVncUrlCallable(const Model::DescribeInstanceVncUrlRequest& request) const;
			DescribeDemandsOutcome describeDemands(const Model::DescribeDemandsRequest &request)const;
			void describeDemandsAsync(const Model::DescribeDemandsRequest& request, const DescribeDemandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDemandsOutcomeCallable describeDemandsCallable(const Model::DescribeDemandsRequest& request) const;
			RecoverVirtualBorderRouterOutcome recoverVirtualBorderRouter(const Model::RecoverVirtualBorderRouterRequest &request)const;
			void recoverVirtualBorderRouterAsync(const Model::RecoverVirtualBorderRouterRequest& request, const RecoverVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecoverVirtualBorderRouterOutcomeCallable recoverVirtualBorderRouterCallable(const Model::RecoverVirtualBorderRouterRequest& request) const;
			DescribeResourceByTagsOutcome describeResourceByTags(const Model::DescribeResourceByTagsRequest &request)const;
			void describeResourceByTagsAsync(const Model::DescribeResourceByTagsRequest& request, const DescribeResourceByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceByTagsOutcomeCallable describeResourceByTagsCallable(const Model::DescribeResourceByTagsRequest& request) const;
			DescribeClustersOutcome describeClusters(const Model::DescribeClustersRequest &request)const;
			void describeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClustersOutcomeCallable describeClustersCallable(const Model::DescribeClustersRequest& request) const;
			DeleteBandwidthPackageOutcome deleteBandwidthPackage(const Model::DeleteBandwidthPackageRequest &request)const;
			void deleteBandwidthPackageAsync(const Model::DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBandwidthPackageOutcomeCallable deleteBandwidthPackageCallable(const Model::DeleteBandwidthPackageRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DescribeImagesOutcome describeImages(const Model::DescribeImagesRequest &request)const;
			void describeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImagesOutcomeCallable describeImagesCallable(const Model::DescribeImagesRequest& request) const;
			AuthorizeSecurityGroupEgressOutcome authorizeSecurityGroupEgress(const Model::AuthorizeSecurityGroupEgressRequest &request)const;
			void authorizeSecurityGroupEgressAsync(const Model::AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeSecurityGroupEgressOutcomeCallable authorizeSecurityGroupEgressCallable(const Model::AuthorizeSecurityGroupEgressRequest& request) const;
			ImportImageOutcome importImage(const Model::ImportImageRequest &request)const;
			void importImageAsync(const Model::ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportImageOutcomeCallable importImageCallable(const Model::ImportImageRequest& request) const;
			ModifyForwardEntryOutcome modifyForwardEntry(const Model::ModifyForwardEntryRequest &request)const;
			void modifyForwardEntryAsync(const Model::ModifyForwardEntryRequest& request, const ModifyForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyForwardEntryOutcomeCallable modifyForwardEntryCallable(const Model::ModifyForwardEntryRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			CopyImageOutcome copyImage(const Model::CopyImageRequest &request)const;
			void copyImageAsync(const Model::CopyImageRequest& request, const CopyImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyImageOutcomeCallable copyImageCallable(const Model::CopyImageRequest& request) const;
			CreateVpcOutcome createVpc(const Model::CreateVpcRequest &request)const;
			void createVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpcOutcomeCallable createVpcCallable(const Model::CreateVpcRequest& request) const;
			DescribeInstanceMonitorDataOutcome describeInstanceMonitorData(const Model::DescribeInstanceMonitorDataRequest &request)const;
			void describeInstanceMonitorDataAsync(const Model::DescribeInstanceMonitorDataRequest& request, const DescribeInstanceMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceMonitorDataOutcomeCallable describeInstanceMonitorDataCallable(const Model::DescribeInstanceMonitorDataRequest& request) const;
			UnassociateEipAddressOutcome unassociateEipAddress(const Model::UnassociateEipAddressRequest &request)const;
			void unassociateEipAddressAsync(const Model::UnassociateEipAddressRequest& request, const UnassociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateEipAddressOutcomeCallable unassociateEipAddressCallable(const Model::UnassociateEipAddressRequest& request) const;
			CreateStorageSetOutcome createStorageSet(const Model::CreateStorageSetRequest &request)const;
			void createStorageSetAsync(const Model::CreateStorageSetRequest& request, const CreateStorageSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStorageSetOutcomeCallable createStorageSetCallable(const Model::CreateStorageSetRequest& request) const;
			CreateSnapshotOutcome createSnapshot(const Model::CreateSnapshotRequest &request)const;
			void createSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnapshotOutcomeCallable createSnapshotCallable(const Model::CreateSnapshotRequest& request) const;
			DetachKeyPairOutcome detachKeyPair(const Model::DetachKeyPairRequest &request)const;
			void detachKeyPairAsync(const Model::DetachKeyPairRequest& request, const DetachKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachKeyPairOutcomeCallable detachKeyPairCallable(const Model::DetachKeyPairRequest& request) const;
			ModifyVirtualBorderRouterAttributeOutcome modifyVirtualBorderRouterAttribute(const Model::ModifyVirtualBorderRouterAttributeRequest &request)const;
			void modifyVirtualBorderRouterAttributeAsync(const Model::ModifyVirtualBorderRouterAttributeRequest& request, const ModifyVirtualBorderRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVirtualBorderRouterAttributeOutcomeCallable modifyVirtualBorderRouterAttributeCallable(const Model::ModifyVirtualBorderRouterAttributeRequest& request) const;
			DescribeTasksOutcome describeTasks(const Model::DescribeTasksRequest &request)const;
			void describeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTasksOutcomeCallable describeTasksCallable(const Model::DescribeTasksRequest& request) const;
			DescribeRenewalPriceOutcome describeRenewalPrice(const Model::DescribeRenewalPriceRequest &request)const;
			void describeRenewalPriceAsync(const Model::DescribeRenewalPriceRequest& request, const DescribeRenewalPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRenewalPriceOutcomeCallable describeRenewalPriceCallable(const Model::DescribeRenewalPriceRequest& request) const;
			LeaveSecurityGroupOutcome leaveSecurityGroup(const Model::LeaveSecurityGroupRequest &request)const;
			void leaveSecurityGroupAsync(const Model::LeaveSecurityGroupRequest& request, const LeaveSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LeaveSecurityGroupOutcomeCallable leaveSecurityGroupCallable(const Model::LeaveSecurityGroupRequest& request) const;
			UnassignPrivateIpAddressesOutcome unassignPrivateIpAddresses(const Model::UnassignPrivateIpAddressesRequest &request)const;
			void unassignPrivateIpAddressesAsync(const Model::UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassignPrivateIpAddressesOutcomeCallable unassignPrivateIpAddressesCallable(const Model::UnassignPrivateIpAddressesRequest& request) const;
			DescribeInstanceVncPasswdOutcome describeInstanceVncPasswd(const Model::DescribeInstanceVncPasswdRequest &request)const;
			void describeInstanceVncPasswdAsync(const Model::DescribeInstanceVncPasswdRequest& request, const DescribeInstanceVncPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceVncPasswdOutcomeCallable describeInstanceVncPasswdCallable(const Model::DescribeInstanceVncPasswdRequest& request) const;
			DescribeInstanceAutoRenewAttributeOutcome describeInstanceAutoRenewAttribute(const Model::DescribeInstanceAutoRenewAttributeRequest &request)const;
			void describeInstanceAutoRenewAttributeAsync(const Model::DescribeInstanceAutoRenewAttributeRequest& request, const DescribeInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAutoRenewAttributeOutcomeCallable describeInstanceAutoRenewAttributeCallable(const Model::DescribeInstanceAutoRenewAttributeRequest& request) const;
			ModifySecurityGroupRuleOutcome modifySecurityGroupRule(const Model::ModifySecurityGroupRuleRequest &request)const;
			void modifySecurityGroupRuleAsync(const Model::ModifySecurityGroupRuleRequest& request, const ModifySecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupRuleOutcomeCallable modifySecurityGroupRuleCallable(const Model::ModifySecurityGroupRuleRequest& request) const;
			DescribeResourcesModificationOutcome describeResourcesModification(const Model::DescribeResourcesModificationRequest &request)const;
			void describeResourcesModificationAsync(const Model::DescribeResourcesModificationRequest& request, const DescribeResourcesModificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourcesModificationOutcomeCallable describeResourcesModificationCallable(const Model::DescribeResourcesModificationRequest& request) const;
			ImportKeyPairOutcome importKeyPair(const Model::ImportKeyPairRequest &request)const;
			void importKeyPairAsync(const Model::ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportKeyPairOutcomeCallable importKeyPairCallable(const Model::ImportKeyPairRequest& request) const;
			DeleteLaunchTemplateOutcome deleteLaunchTemplate(const Model::DeleteLaunchTemplateRequest &request)const;
			void deleteLaunchTemplateAsync(const Model::DeleteLaunchTemplateRequest& request, const DeleteLaunchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLaunchTemplateOutcomeCallable deleteLaunchTemplateCallable(const Model::DeleteLaunchTemplateRequest& request) const;
			DescribeNewProjectEipMonitorDataOutcome describeNewProjectEipMonitorData(const Model::DescribeNewProjectEipMonitorDataRequest &request)const;
			void describeNewProjectEipMonitorDataAsync(const Model::DescribeNewProjectEipMonitorDataRequest& request, const DescribeNewProjectEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNewProjectEipMonitorDataOutcomeCallable describeNewProjectEipMonitorDataCallable(const Model::DescribeNewProjectEipMonitorDataRequest& request) const;
			DescribeInstanceRamRoleOutcome describeInstanceRamRole(const Model::DescribeInstanceRamRoleRequest &request)const;
			void describeInstanceRamRoleAsync(const Model::DescribeInstanceRamRoleRequest& request, const DescribeInstanceRamRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceRamRoleOutcomeCallable describeInstanceRamRoleCallable(const Model::DescribeInstanceRamRoleRequest& request) const;
			CreateImageOutcome createImage(const Model::CreateImageRequest &request)const;
			void createImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateImageOutcomeCallable createImageCallable(const Model::CreateImageRequest& request) const;
			DescribeHaVipsOutcome describeHaVips(const Model::DescribeHaVipsRequest &request)const;
			void describeHaVipsAsync(const Model::DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHaVipsOutcomeCallable describeHaVipsCallable(const Model::DescribeHaVipsRequest& request) const;
			DescribeInstanceAttributeOutcome describeInstanceAttribute(const Model::DescribeInstanceAttributeRequest &request)const;
			void describeInstanceAttributeAsync(const Model::DescribeInstanceAttributeRequest& request, const DescribeInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAttributeOutcomeCallable describeInstanceAttributeCallable(const Model::DescribeInstanceAttributeRequest& request) const;
			DetachDiskOutcome detachDisk(const Model::DetachDiskRequest &request)const;
			void detachDiskAsync(const Model::DetachDiskRequest& request, const DetachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachDiskOutcomeCallable detachDiskCallable(const Model::DetachDiskRequest& request) const;
			ModifyImageAttributeOutcome modifyImageAttribute(const Model::ModifyImageAttributeRequest &request)const;
			void modifyImageAttributeAsync(const Model::ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImageAttributeOutcomeCallable modifyImageAttributeCallable(const Model::ModifyImageAttributeRequest& request) const;
			AddBandwidthPackageIpsOutcome addBandwidthPackageIps(const Model::AddBandwidthPackageIpsRequest &request)const;
			void addBandwidthPackageIpsAsync(const Model::AddBandwidthPackageIpsRequest& request, const AddBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBandwidthPackageIpsOutcomeCallable addBandwidthPackageIpsCallable(const Model::AddBandwidthPackageIpsRequest& request) const;
			DescribeInstanceStatusOutcome describeInstanceStatus(const Model::DescribeInstanceStatusRequest &request)const;
			void describeInstanceStatusAsync(const Model::DescribeInstanceStatusRequest& request, const DescribeInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceStatusOutcomeCallable describeInstanceStatusCallable(const Model::DescribeInstanceStatusRequest& request) const;
			DescribeNatGatewaysOutcome describeNatGateways(const Model::DescribeNatGatewaysRequest &request)const;
			void describeNatGatewaysAsync(const Model::DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNatGatewaysOutcomeCallable describeNatGatewaysCallable(const Model::DescribeNatGatewaysRequest& request) const;
			DeleteHpcClusterOutcome deleteHpcCluster(const Model::DeleteHpcClusterRequest &request)const;
			void deleteHpcClusterAsync(const Model::DeleteHpcClusterRequest& request, const DeleteHpcClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHpcClusterOutcomeCallable deleteHpcClusterCallable(const Model::DeleteHpcClusterRequest& request) const;
			ResetDiskOutcome resetDisk(const Model::ResetDiskRequest &request)const;
			void resetDiskAsync(const Model::ResetDiskRequest& request, const ResetDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetDiskOutcomeCallable resetDiskCallable(const Model::ResetDiskRequest& request) const;
			ModifyDiskChargeTypeOutcome modifyDiskChargeType(const Model::ModifyDiskChargeTypeRequest &request)const;
			void modifyDiskChargeTypeAsync(const Model::ModifyDiskChargeTypeRequest& request, const ModifyDiskChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDiskChargeTypeOutcomeCallable modifyDiskChargeTypeCallable(const Model::ModifyDiskChargeTypeRequest& request) const;
			DescribeAutoProvisioningGroupsOutcome describeAutoProvisioningGroups(const Model::DescribeAutoProvisioningGroupsRequest &request)const;
			void describeAutoProvisioningGroupsAsync(const Model::DescribeAutoProvisioningGroupsRequest& request, const DescribeAutoProvisioningGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoProvisioningGroupsOutcomeCallable describeAutoProvisioningGroupsCallable(const Model::DescribeAutoProvisioningGroupsRequest& request) const;
			ModifyAutoProvisioningGroupOutcome modifyAutoProvisioningGroup(const Model::ModifyAutoProvisioningGroupRequest &request)const;
			void modifyAutoProvisioningGroupAsync(const Model::ModifyAutoProvisioningGroupRequest& request, const ModifyAutoProvisioningGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoProvisioningGroupOutcomeCallable modifyAutoProvisioningGroupCallable(const Model::ModifyAutoProvisioningGroupRequest& request) const;
			DeleteFleetOutcome deleteFleet(const Model::DeleteFleetRequest &request)const;
			void deleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFleetOutcomeCallable deleteFleetCallable(const Model::DeleteFleetRequest& request) const;
			DescribeBandwidthPackagesOutcome describeBandwidthPackages(const Model::DescribeBandwidthPackagesRequest &request)const;
			void describeBandwidthPackagesAsync(const Model::DescribeBandwidthPackagesRequest& request, const DescribeBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBandwidthPackagesOutcomeCallable describeBandwidthPackagesCallable(const Model::DescribeBandwidthPackagesRequest& request) const;
			DescribeFleetHistoryOutcome describeFleetHistory(const Model::DescribeFleetHistoryRequest &request)const;
			void describeFleetHistoryAsync(const Model::DescribeFleetHistoryRequest& request, const DescribeFleetHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFleetHistoryOutcomeCallable describeFleetHistoryCallable(const Model::DescribeFleetHistoryRequest& request) const;
			ApplyAutoSnapshotPolicyOutcome applyAutoSnapshotPolicy(const Model::ApplyAutoSnapshotPolicyRequest &request)const;
			void applyAutoSnapshotPolicyAsync(const Model::ApplyAutoSnapshotPolicyRequest& request, const ApplyAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyAutoSnapshotPolicyOutcomeCallable applyAutoSnapshotPolicyCallable(const Model::ApplyAutoSnapshotPolicyRequest& request) const;
			CreateSecurityGroupOutcome createSecurityGroup(const Model::CreateSecurityGroupRequest &request)const;
			void createSecurityGroupAsync(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecurityGroupOutcomeCallable createSecurityGroupCallable(const Model::CreateSecurityGroupRequest& request) const;
			DescribeSnapshotLinksOutcome describeSnapshotLinks(const Model::DescribeSnapshotLinksRequest &request)const;
			void describeSnapshotLinksAsync(const Model::DescribeSnapshotLinksRequest& request, const DescribeSnapshotLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotLinksOutcomeCallable describeSnapshotLinksCallable(const Model::DescribeSnapshotLinksRequest& request) const;
			DescribeInvocationResultsOutcome describeInvocationResults(const Model::DescribeInvocationResultsRequest &request)const;
			void describeInvocationResultsAsync(const Model::DescribeInvocationResultsRequest& request, const DescribeInvocationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInvocationResultsOutcomeCallable describeInvocationResultsCallable(const Model::DescribeInvocationResultsRequest& request) const;
			DescribeRecommendInstanceTypeOutcome describeRecommendInstanceType(const Model::DescribeRecommendInstanceTypeRequest &request)const;
			void describeRecommendInstanceTypeAsync(const Model::DescribeRecommendInstanceTypeRequest& request, const DescribeRecommendInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecommendInstanceTypeOutcomeCallable describeRecommendInstanceTypeCallable(const Model::DescribeRecommendInstanceTypeRequest& request) const;
			DescribeDedicatedHostAutoRenewOutcome describeDedicatedHostAutoRenew(const Model::DescribeDedicatedHostAutoRenewRequest &request)const;
			void describeDedicatedHostAutoRenewAsync(const Model::DescribeDedicatedHostAutoRenewRequest& request, const DescribeDedicatedHostAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDedicatedHostAutoRenewOutcomeCallable describeDedicatedHostAutoRenewCallable(const Model::DescribeDedicatedHostAutoRenewRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			CreateLaunchTemplateOutcome createLaunchTemplate(const Model::CreateLaunchTemplateRequest &request)const;
			void createLaunchTemplateAsync(const Model::CreateLaunchTemplateRequest& request, const CreateLaunchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLaunchTemplateOutcomeCallable createLaunchTemplateCallable(const Model::CreateLaunchTemplateRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyVpcAttributeOutcome modifyVpcAttribute(const Model::ModifyVpcAttributeRequest &request)const;
			void modifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpcAttributeOutcomeCallable modifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request) const;
			RemoveBandwidthPackageIpsOutcome removeBandwidthPackageIps(const Model::RemoveBandwidthPackageIpsRequest &request)const;
			void removeBandwidthPackageIpsAsync(const Model::RemoveBandwidthPackageIpsRequest& request, const RemoveBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveBandwidthPackageIpsOutcomeCallable removeBandwidthPackageIpsCallable(const Model::RemoveBandwidthPackageIpsRequest& request) const;
			CreateNetworkInterfacePermissionOutcome createNetworkInterfacePermission(const Model::CreateNetworkInterfacePermissionRequest &request)const;
			void createNetworkInterfacePermissionAsync(const Model::CreateNetworkInterfacePermissionRequest& request, const CreateNetworkInterfacePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkInterfacePermissionOutcomeCallable createNetworkInterfacePermissionCallable(const Model::CreateNetworkInterfacePermissionRequest& request) const;
			DescribeSnapshotsUsageOutcome describeSnapshotsUsage(const Model::DescribeSnapshotsUsageRequest &request)const;
			void describeSnapshotsUsageAsync(const Model::DescribeSnapshotsUsageRequest& request, const DescribeSnapshotsUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotsUsageOutcomeCallable describeSnapshotsUsageCallable(const Model::DescribeSnapshotsUsageRequest& request) const;
			DeleteAutoSnapshotPolicyOutcome deleteAutoSnapshotPolicy(const Model::DeleteAutoSnapshotPolicyRequest &request)const;
			void deleteAutoSnapshotPolicyAsync(const Model::DeleteAutoSnapshotPolicyRequest& request, const DeleteAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutoSnapshotPolicyOutcomeCallable deleteAutoSnapshotPolicyCallable(const Model::DeleteAutoSnapshotPolicyRequest& request) const;
			ModifySecurityGroupEgressRuleOutcome modifySecurityGroupEgressRule(const Model::ModifySecurityGroupEgressRuleRequest &request)const;
			void modifySecurityGroupEgressRuleAsync(const Model::ModifySecurityGroupEgressRuleRequest& request, const ModifySecurityGroupEgressRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupEgressRuleOutcomeCallable modifySecurityGroupEgressRuleCallable(const Model::ModifySecurityGroupEgressRuleRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			EnablePhysicalConnectionOutcome enablePhysicalConnection(const Model::EnablePhysicalConnectionRequest &request)const;
			void enablePhysicalConnectionAsync(const Model::EnablePhysicalConnectionRequest& request, const EnablePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnablePhysicalConnectionOutcomeCallable enablePhysicalConnectionCallable(const Model::EnablePhysicalConnectionRequest& request) const;
			DescribeInstanceTypeFamiliesOutcome describeInstanceTypeFamilies(const Model::DescribeInstanceTypeFamiliesRequest &request)const;
			void describeInstanceTypeFamiliesAsync(const Model::DescribeInstanceTypeFamiliesRequest& request, const DescribeInstanceTypeFamiliesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTypeFamiliesOutcomeCallable describeInstanceTypeFamiliesCallable(const Model::DescribeInstanceTypeFamiliesRequest& request) const;
			DescribeRouterInterfacesOutcome describeRouterInterfaces(const Model::DescribeRouterInterfacesRequest &request)const;
			void describeRouterInterfacesAsync(const Model::DescribeRouterInterfacesRequest& request, const DescribeRouterInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouterInterfacesOutcomeCallable describeRouterInterfacesCallable(const Model::DescribeRouterInterfacesRequest& request) const;
			CreateForwardEntryOutcome createForwardEntry(const Model::CreateForwardEntryRequest &request)const;
			void createForwardEntryAsync(const Model::CreateForwardEntryRequest& request, const CreateForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateForwardEntryOutcomeCallable createForwardEntryCallable(const Model::CreateForwardEntryRequest& request) const;
			DescribeReservedInstancesOutcome describeReservedInstances(const Model::DescribeReservedInstancesRequest &request)const;
			void describeReservedInstancesAsync(const Model::DescribeReservedInstancesRequest& request, const DescribeReservedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReservedInstancesOutcomeCallable describeReservedInstancesCallable(const Model::DescribeReservedInstancesRequest& request) const;
			DescribeLaunchTemplatesOutcome describeLaunchTemplates(const Model::DescribeLaunchTemplatesRequest &request)const;
			void describeLaunchTemplatesAsync(const Model::DescribeLaunchTemplatesRequest& request, const DescribeLaunchTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLaunchTemplatesOutcomeCallable describeLaunchTemplatesCallable(const Model::DescribeLaunchTemplatesRequest& request) const;
			EipNotifyPaidOutcome eipNotifyPaid(const Model::EipNotifyPaidRequest &request)const;
			void eipNotifyPaidAsync(const Model::EipNotifyPaidRequest& request, const EipNotifyPaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EipNotifyPaidOutcomeCallable eipNotifyPaidCallable(const Model::EipNotifyPaidRequest& request) const;
			ReleasePublicIpAddressOutcome releasePublicIpAddress(const Model::ReleasePublicIpAddressRequest &request)const;
			void releasePublicIpAddressAsync(const Model::ReleasePublicIpAddressRequest& request, const ReleasePublicIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleasePublicIpAddressOutcomeCallable releasePublicIpAddressCallable(const Model::ReleasePublicIpAddressRequest& request) const;
			ReportInstancesStatusOutcome reportInstancesStatus(const Model::ReportInstancesStatusRequest &request)const;
			void reportInstancesStatusAsync(const Model::ReportInstancesStatusRequest& request, const ReportInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportInstancesStatusOutcomeCallable reportInstancesStatusCallable(const Model::ReportInstancesStatusRequest& request) const;
			CreateVirtualBorderRouterOutcome createVirtualBorderRouter(const Model::CreateVirtualBorderRouterRequest &request)const;
			void createVirtualBorderRouterAsync(const Model::CreateVirtualBorderRouterRequest& request, const CreateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVirtualBorderRouterOutcomeCallable createVirtualBorderRouterCallable(const Model::CreateVirtualBorderRouterRequest& request) const;
			DescribeAccountAttributesOutcome describeAccountAttributes(const Model::DescribeAccountAttributesRequest &request)const;
			void describeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountAttributesOutcomeCallable describeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;
			EipFillParamsOutcome eipFillParams(const Model::EipFillParamsRequest &request)const;
			void eipFillParamsAsync(const Model::EipFillParamsRequest& request, const EipFillParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EipFillParamsOutcomeCallable eipFillParamsCallable(const Model::EipFillParamsRequest& request) const;
			ModifyPrepayInstanceSpecOutcome modifyPrepayInstanceSpec(const Model::ModifyPrepayInstanceSpecRequest &request)const;
			void modifyPrepayInstanceSpecAsync(const Model::ModifyPrepayInstanceSpecRequest& request, const ModifyPrepayInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPrepayInstanceSpecOutcomeCallable modifyPrepayInstanceSpecCallable(const Model::ModifyPrepayInstanceSpecRequest& request) const;
			EipFillProductOutcome eipFillProduct(const Model::EipFillProductRequest &request)const;
			void eipFillProductAsync(const Model::EipFillProductRequest& request, const EipFillProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EipFillProductOutcomeCallable eipFillProductCallable(const Model::EipFillProductRequest& request) const;
			CreateAutoProvisioningGroupOutcome createAutoProvisioningGroup(const Model::CreateAutoProvisioningGroupRequest &request)const;
			void createAutoProvisioningGroupAsync(const Model::CreateAutoProvisioningGroupRequest& request, const CreateAutoProvisioningGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAutoProvisioningGroupOutcomeCallable createAutoProvisioningGroupCallable(const Model::CreateAutoProvisioningGroupRequest& request) const;
			DescribeRouteTablesOutcome describeRouteTables(const Model::DescribeRouteTablesRequest &request)const;
			void describeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouteTablesOutcomeCallable describeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request) const;
			DescribeUserDataOutcome describeUserData(const Model::DescribeUserDataRequest &request)const;
			void describeUserDataAsync(const Model::DescribeUserDataRequest& request, const DescribeUserDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserDataOutcomeCallable describeUserDataCallable(const Model::DescribeUserDataRequest& request) const;
			JoinResourceGroupOutcome joinResourceGroup(const Model::JoinResourceGroupRequest &request)const;
			void joinResourceGroupAsync(const Model::JoinResourceGroupRequest& request, const JoinResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinResourceGroupOutcomeCallable joinResourceGroupCallable(const Model::JoinResourceGroupRequest& request) const;
			ModifyAutoSnapshotPolicyExOutcome modifyAutoSnapshotPolicyEx(const Model::ModifyAutoSnapshotPolicyExRequest &request)const;
			void modifyAutoSnapshotPolicyExAsync(const Model::ModifyAutoSnapshotPolicyExRequest& request, const ModifyAutoSnapshotPolicyExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoSnapshotPolicyExOutcomeCallable modifyAutoSnapshotPolicyExCallable(const Model::ModifyAutoSnapshotPolicyExRequest& request) const;
			DeleteStorageSetOutcome deleteStorageSet(const Model::DeleteStorageSetRequest &request)const;
			void deleteStorageSetAsync(const Model::DeleteStorageSetRequest& request, const DeleteStorageSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStorageSetOutcomeCallable deleteStorageSetCallable(const Model::DeleteStorageSetRequest& request) const;
			CreatePhysicalConnectionOutcome createPhysicalConnection(const Model::CreatePhysicalConnectionRequest &request)const;
			void createPhysicalConnectionAsync(const Model::CreatePhysicalConnectionRequest& request, const CreatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePhysicalConnectionOutcomeCallable createPhysicalConnectionCallable(const Model::CreatePhysicalConnectionRequest& request) const;
			DescribeKeyPairsOutcome describeKeyPairs(const Model::DescribeKeyPairsRequest &request)const;
			void describeKeyPairsAsync(const Model::DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKeyPairsOutcomeCallable describeKeyPairsCallable(const Model::DescribeKeyPairsRequest& request) const;
			ModifySecurityGroupPolicyOutcome modifySecurityGroupPolicy(const Model::ModifySecurityGroupPolicyRequest &request)const;
			void modifySecurityGroupPolicyAsync(const Model::ModifySecurityGroupPolicyRequest& request, const ModifySecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupPolicyOutcomeCallable modifySecurityGroupPolicyCallable(const Model::ModifySecurityGroupPolicyRequest& request) const;
			AssociateHaVipOutcome associateHaVip(const Model::AssociateHaVipRequest &request)const;
			void associateHaVipAsync(const Model::AssociateHaVipRequest& request, const AssociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateHaVipOutcomeCallable associateHaVipCallable(const Model::AssociateHaVipRequest& request) const;
			DescribeStorageSetDetailsOutcome describeStorageSetDetails(const Model::DescribeStorageSetDetailsRequest &request)const;
			void describeStorageSetDetailsAsync(const Model::DescribeStorageSetDetailsRequest& request, const DescribeStorageSetDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStorageSetDetailsOutcomeCallable describeStorageSetDetailsCallable(const Model::DescribeStorageSetDetailsRequest& request) const;
			ConvertNatPublicIpToEipOutcome convertNatPublicIpToEip(const Model::ConvertNatPublicIpToEipRequest &request)const;
			void convertNatPublicIpToEipAsync(const Model::ConvertNatPublicIpToEipRequest& request, const ConvertNatPublicIpToEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertNatPublicIpToEipOutcomeCallable convertNatPublicIpToEipCallable(const Model::ConvertNatPublicIpToEipRequest& request) const;
			AssignIpv6AddressesOutcome assignIpv6Addresses(const Model::AssignIpv6AddressesRequest &request)const;
			void assignIpv6AddressesAsync(const Model::AssignIpv6AddressesRequest& request, const AssignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignIpv6AddressesOutcomeCallable assignIpv6AddressesCallable(const Model::AssignIpv6AddressesRequest& request) const;
			DeleteVirtualBorderRouterOutcome deleteVirtualBorderRouter(const Model::DeleteVirtualBorderRouterRequest &request)const;
			void deleteVirtualBorderRouterAsync(const Model::DeleteVirtualBorderRouterRequest& request, const DeleteVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVirtualBorderRouterOutcomeCallable deleteVirtualBorderRouterCallable(const Model::DeleteVirtualBorderRouterRequest& request) const;
			DeleteRouteEntryOutcome deleteRouteEntry(const Model::DeleteRouteEntryRequest &request)const;
			void deleteRouteEntryAsync(const Model::DeleteRouteEntryRequest& request, const DeleteRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouteEntryOutcomeCallable deleteRouteEntryCallable(const Model::DeleteRouteEntryRequest& request) const;
			DescribeCloudAssistantStatusOutcome describeCloudAssistantStatus(const Model::DescribeCloudAssistantStatusRequest &request)const;
			void describeCloudAssistantStatusAsync(const Model::DescribeCloudAssistantStatusRequest& request, const DescribeCloudAssistantStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudAssistantStatusOutcomeCallable describeCloudAssistantStatusCallable(const Model::DescribeCloudAssistantStatusRequest& request) const;
			UnassignIpv6AddressesOutcome unassignIpv6Addresses(const Model::UnassignIpv6AddressesRequest &request)const;
			void unassignIpv6AddressesAsync(const Model::UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassignIpv6AddressesOutcomeCallable unassignIpv6AddressesCallable(const Model::UnassignIpv6AddressesRequest& request) const;
			DescribeInstancePhysicalAttributeOutcome describeInstancePhysicalAttribute(const Model::DescribeInstancePhysicalAttributeRequest &request)const;
			void describeInstancePhysicalAttributeAsync(const Model::DescribeInstancePhysicalAttributeRequest& request, const DescribeInstancePhysicalAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancePhysicalAttributeOutcomeCallable describeInstancePhysicalAttributeCallable(const Model::DescribeInstancePhysicalAttributeRequest& request) const;
			TerminatePhysicalConnectionOutcome terminatePhysicalConnection(const Model::TerminatePhysicalConnectionRequest &request)const;
			void terminatePhysicalConnectionAsync(const Model::TerminatePhysicalConnectionRequest& request, const TerminatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TerminatePhysicalConnectionOutcomeCallable terminatePhysicalConnectionCallable(const Model::TerminatePhysicalConnectionRequest& request) const;
			AttachNetworkInterfaceOutcome attachNetworkInterface(const Model::AttachNetworkInterfaceRequest &request)const;
			void attachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachNetworkInterfaceOutcomeCallable attachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request) const;
			ModifyImageSharePermissionOutcome modifyImageSharePermission(const Model::ModifyImageSharePermissionRequest &request)const;
			void modifyImageSharePermissionAsync(const Model::ModifyImageSharePermissionRequest& request, const ModifyImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImageSharePermissionOutcomeCallable modifyImageSharePermissionCallable(const Model::ModifyImageSharePermissionRequest& request) const;
			DescribeSecurityGroupAttributeOutcome describeSecurityGroupAttribute(const Model::DescribeSecurityGroupAttributeRequest &request)const;
			void describeSecurityGroupAttributeAsync(const Model::DescribeSecurityGroupAttributeRequest& request, const DescribeSecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupAttributeOutcomeCallable describeSecurityGroupAttributeCallable(const Model::DescribeSecurityGroupAttributeRequest& request) const;
			DescribeAutoSnapshotPolicyExOutcome describeAutoSnapshotPolicyEx(const Model::DescribeAutoSnapshotPolicyExRequest &request)const;
			void describeAutoSnapshotPolicyExAsync(const Model::DescribeAutoSnapshotPolicyExRequest& request, const DescribeAutoSnapshotPolicyExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoSnapshotPolicyExOutcomeCallable describeAutoSnapshotPolicyExCallable(const Model::DescribeAutoSnapshotPolicyExRequest& request) const;
			CancelCopyImageOutcome cancelCopyImage(const Model::CancelCopyImageRequest &request)const;
			void cancelCopyImageAsync(const Model::CancelCopyImageRequest& request, const CancelCopyImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCopyImageOutcomeCallable cancelCopyImageCallable(const Model::CancelCopyImageRequest& request) const;
			DescribeImageSharePermissionOutcome describeImageSharePermission(const Model::DescribeImageSharePermissionRequest &request)const;
			void describeImageSharePermissionAsync(const Model::DescribeImageSharePermissionRequest& request, const DescribeImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageSharePermissionOutcomeCallable describeImageSharePermissionCallable(const Model::DescribeImageSharePermissionRequest& request) const;
			CreateDeploymentSetOutcome createDeploymentSet(const Model::CreateDeploymentSetRequest &request)const;
			void createDeploymentSetAsync(const Model::CreateDeploymentSetRequest& request, const CreateDeploymentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeploymentSetOutcomeCallable createDeploymentSetCallable(const Model::CreateDeploymentSetRequest& request) const;
			DeleteLaunchTemplateVersionOutcome deleteLaunchTemplateVersion(const Model::DeleteLaunchTemplateVersionRequest &request)const;
			void deleteLaunchTemplateVersionAsync(const Model::DeleteLaunchTemplateVersionRequest& request, const DeleteLaunchTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLaunchTemplateVersionOutcomeCallable deleteLaunchTemplateVersionCallable(const Model::DeleteLaunchTemplateVersionRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeClassicLinkInstancesOutcome describeClassicLinkInstances(const Model::DescribeClassicLinkInstancesRequest &request)const;
			void describeClassicLinkInstancesAsync(const Model::DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClassicLinkInstancesOutcomeCallable describeClassicLinkInstancesCallable(const Model::DescribeClassicLinkInstancesRequest& request) const;
			DescribePhysicalConnectionsOutcome describePhysicalConnections(const Model::DescribePhysicalConnectionsRequest &request)const;
			void describePhysicalConnectionsAsync(const Model::DescribePhysicalConnectionsRequest& request, const DescribePhysicalConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePhysicalConnectionsOutcomeCallable describePhysicalConnectionsCallable(const Model::DescribePhysicalConnectionsRequest& request) const;
			ImportSnapshotOutcome importSnapshot(const Model::ImportSnapshotRequest &request)const;
			void importSnapshotAsync(const Model::ImportSnapshotRequest& request, const ImportSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportSnapshotOutcomeCallable importSnapshotCallable(const Model::ImportSnapshotRequest& request) const;
			CreateNetworkInterfaceOutcome createNetworkInterface(const Model::CreateNetworkInterfaceRequest &request)const;
			void createNetworkInterfaceAsync(const Model::CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkInterfaceOutcomeCallable createNetworkInterfaceCallable(const Model::CreateNetworkInterfaceRequest& request) const;
			DeleteNetworkInterfacePermissionOutcome deleteNetworkInterfacePermission(const Model::DeleteNetworkInterfacePermissionRequest &request)const;
			void deleteNetworkInterfacePermissionAsync(const Model::DeleteNetworkInterfacePermissionRequest& request, const DeleteNetworkInterfacePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkInterfacePermissionOutcomeCallable deleteNetworkInterfacePermissionCallable(const Model::DeleteNetworkInterfacePermissionRequest& request) const;
			CancelPhysicalConnectionOutcome cancelPhysicalConnection(const Model::CancelPhysicalConnectionRequest &request)const;
			void cancelPhysicalConnectionAsync(const Model::CancelPhysicalConnectionRequest& request, const CancelPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelPhysicalConnectionOutcomeCallable cancelPhysicalConnectionCallable(const Model::CancelPhysicalConnectionRequest& request) const;
			DescribeVRoutersOutcome describeVRouters(const Model::DescribeVRoutersRequest &request)const;
			void describeVRoutersAsync(const Model::DescribeVRoutersRequest& request, const DescribeVRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVRoutersOutcomeCallable describeVRoutersCallable(const Model::DescribeVRoutersRequest& request) const;
			DescribeNetworkInterfacesOutcome describeNetworkInterfaces(const Model::DescribeNetworkInterfacesRequest &request)const;
			void describeNetworkInterfacesAsync(const Model::DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkInterfacesOutcomeCallable describeNetworkInterfacesCallable(const Model::DescribeNetworkInterfacesRequest& request) const;
			DescribeLaunchTemplateVersionsOutcome describeLaunchTemplateVersions(const Model::DescribeLaunchTemplateVersionsRequest &request)const;
			void describeLaunchTemplateVersionsAsync(const Model::DescribeLaunchTemplateVersionsRequest& request, const DescribeLaunchTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLaunchTemplateVersionsOutcomeCallable describeLaunchTemplateVersionsCallable(const Model::DescribeLaunchTemplateVersionsRequest& request) const;
			DetachNetworkInterfaceOutcome detachNetworkInterface(const Model::DetachNetworkInterfaceRequest &request)const;
			void detachNetworkInterfaceAsync(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachNetworkInterfaceOutcomeCallable detachNetworkInterfaceCallable(const Model::DetachNetworkInterfaceRequest& request) const;
			ModifyNetworkInterfaceAttributeOutcome modifyNetworkInterfaceAttribute(const Model::ModifyNetworkInterfaceAttributeRequest &request)const;
			void modifyNetworkInterfaceAttributeAsync(const Model::ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNetworkInterfaceAttributeOutcomeCallable modifyNetworkInterfaceAttributeCallable(const Model::ModifyNetworkInterfaceAttributeRequest& request) const;
			AllocateEipAddressOutcome allocateEipAddress(const Model::AllocateEipAddressRequest &request)const;
			void allocateEipAddressAsync(const Model::AllocateEipAddressRequest& request, const AllocateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateEipAddressOutcomeCallable allocateEipAddressCallable(const Model::AllocateEipAddressRequest& request) const;
			DeleteDiskOutcome deleteDisk(const Model::DeleteDiskRequest &request)const;
			void deleteDiskAsync(const Model::DeleteDiskRequest& request, const DeleteDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDiskOutcomeCallable deleteDiskCallable(const Model::DeleteDiskRequest& request) const;
			UnassociateHaVipOutcome unassociateHaVip(const Model::UnassociateHaVipRequest &request)const;
			void unassociateHaVipAsync(const Model::UnassociateHaVipRequest& request, const UnassociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateHaVipOutcomeCallable unassociateHaVipCallable(const Model::UnassociateHaVipRequest& request) const;
			ModifyHaVipAttributeOutcome modifyHaVipAttribute(const Model::ModifyHaVipAttributeRequest &request)const;
			void modifyHaVipAttributeAsync(const Model::ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHaVipAttributeOutcomeCallable modifyHaVipAttributeCallable(const Model::ModifyHaVipAttributeRequest& request) const;
			CreateKeyPairOutcome createKeyPair(const Model::CreateKeyPairRequest &request)const;
			void createKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKeyPairOutcomeCallable createKeyPairCallable(const Model::CreateKeyPairRequest& request) const;
			DescribeDeploymentSetsOutcome describeDeploymentSets(const Model::DescribeDeploymentSetsRequest &request)const;
			void describeDeploymentSetsAsync(const Model::DescribeDeploymentSetsRequest& request, const DescribeDeploymentSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeploymentSetsOutcomeCallable describeDeploymentSetsCallable(const Model::DescribeDeploymentSetsRequest& request) const;
			AttachClassicLinkVpcOutcome attachClassicLinkVpc(const Model::AttachClassicLinkVpcRequest &request)const;
			void attachClassicLinkVpcAsync(const Model::AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachClassicLinkVpcOutcomeCallable attachClassicLinkVpcCallable(const Model::AttachClassicLinkVpcRequest& request) const;
			GetInstanceScreenshotOutcome getInstanceScreenshot(const Model::GetInstanceScreenshotRequest &request)const;
			void getInstanceScreenshotAsync(const Model::GetInstanceScreenshotRequest& request, const GetInstanceScreenshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceScreenshotOutcomeCallable getInstanceScreenshotCallable(const Model::GetInstanceScreenshotRequest& request) const;
			AttachInstanceRamRoleOutcome attachInstanceRamRole(const Model::AttachInstanceRamRoleRequest &request)const;
			void attachInstanceRamRoleAsync(const Model::AttachInstanceRamRoleRequest& request, const AttachInstanceRamRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachInstanceRamRoleOutcomeCallable attachInstanceRamRoleCallable(const Model::AttachInstanceRamRoleRequest& request) const;
			InstallCloudAssistantOutcome installCloudAssistant(const Model::InstallCloudAssistantRequest &request)const;
			void installCloudAssistantAsync(const Model::InstallCloudAssistantRequest& request, const InstallCloudAssistantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallCloudAssistantOutcomeCallable installCloudAssistantCallable(const Model::InstallCloudAssistantRequest& request) const;
			ModifyVRouterAttributeOutcome modifyVRouterAttribute(const Model::ModifyVRouterAttributeRequest &request)const;
			void modifyVRouterAttributeAsync(const Model::ModifyVRouterAttributeRequest& request, const ModifyVRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVRouterAttributeOutcomeCallable modifyVRouterAttributeCallable(const Model::ModifyVRouterAttributeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ECS_ECSCLIENT_H_
