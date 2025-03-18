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

#ifndef ALIBABACLOUD_ENS_ENSCLIENT_H_
#define ALIBABACLOUD_ENS_ENSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EnsExport.h"
#include "model/AccosicateNetworkAclRequest.h"
#include "model/AccosicateNetworkAclResult.h"
#include "model/AddBackendServersRequest.h"
#include "model/AddBackendServersResult.h"
#include "model/AddDeviceInternetPortRequest.h"
#include "model/AddDeviceInternetPortResult.h"
#include "model/AddNetworkInterfaceToInstanceRequest.h"
#include "model/AddNetworkInterfaceToInstanceResult.h"
#include "model/AddSnatIpForSnatEntryRequest.h"
#include "model/AddSnatIpForSnatEntryResult.h"
#include "model/AssignPrivateIpAddressesRequest.h"
#include "model/AssignPrivateIpAddressesResult.h"
#include "model/AssociateEnsEipAddressRequest.h"
#include "model/AssociateEnsEipAddressResult.h"
#include "model/AssociateHaVipRequest.h"
#include "model/AssociateHaVipResult.h"
#include "model/AttachDiskRequest.h"
#include "model/AttachDiskResult.h"
#include "model/AttachEnsInstancesRequest.h"
#include "model/AttachEnsInstancesResult.h"
#include "model/AttachInstanceSDGRequest.h"
#include "model/AttachInstanceSDGResult.h"
#include "model/AttachNetworkInterfaceRequest.h"
#include "model/AttachNetworkInterfaceResult.h"
#include "model/AuthorizeSecurityGroupRequest.h"
#include "model/AuthorizeSecurityGroupResult.h"
#include "model/AuthorizeSecurityGroupEgressRequest.h"
#include "model/AuthorizeSecurityGroupEgressResult.h"
#include "model/CleanDistDataRequest.h"
#include "model/CleanDistDataResult.h"
#include "model/CopySDGRequest.h"
#include "model/CopySDGResult.h"
#include "model/CopySnapshotRequest.h"
#include "model/CopySnapshotResult.h"
#include "model/CreateARMServerInstancesRequest.h"
#include "model/CreateARMServerInstancesResult.h"
#include "model/CreateApplicationRequest.h"
#include "model/CreateApplicationResult.h"
#include "model/CreateClassicNetworkRequest.h"
#include "model/CreateClassicNetworkResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateDiskRequest.h"
#include "model/CreateDiskResult.h"
#include "model/CreateEipInstanceRequest.h"
#include "model/CreateEipInstanceResult.h"
#include "model/CreateEnsRouteEntryRequest.h"
#include "model/CreateEnsRouteEntryResult.h"
#include "model/CreateEnsSaleControlRequest.h"
#include "model/CreateEnsSaleControlResult.h"
#include "model/CreateEnsServiceRequest.h"
#include "model/CreateEnsServiceResult.h"
#include "model/CreateEpnInstanceRequest.h"
#include "model/CreateEpnInstanceResult.h"
#include "model/CreateFileSystemRequest.h"
#include "model/CreateFileSystemResult.h"
#include "model/CreateForwardEntryRequest.h"
#include "model/CreateForwardEntryResult.h"
#include "model/CreateHaVipRequest.h"
#include "model/CreateHaVipResult.h"
#include "model/CreateImageRequest.h"
#include "model/CreateImageResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateInstanceActiveOpsTaskRequest.h"
#include "model/CreateInstanceActiveOpsTaskResult.h"
#include "model/CreateKeyPairRequest.h"
#include "model/CreateKeyPairResult.h"
#include "model/CreateLoadBalancerRequest.h"
#include "model/CreateLoadBalancerResult.h"
#include "model/CreateLoadBalancerHTTPListenerRequest.h"
#include "model/CreateLoadBalancerHTTPListenerResult.h"
#include "model/CreateLoadBalancerHTTPSListenerRequest.h"
#include "model/CreateLoadBalancerHTTPSListenerResult.h"
#include "model/CreateLoadBalancerTCPListenerRequest.h"
#include "model/CreateLoadBalancerTCPListenerResult.h"
#include "model/CreateLoadBalancerUDPListenerRequest.h"
#include "model/CreateLoadBalancerUDPListenerResult.h"
#include "model/CreateMountTargetRequest.h"
#include "model/CreateMountTargetResult.h"
#include "model/CreateNatGatewayRequest.h"
#include "model/CreateNatGatewayResult.h"
#include "model/CreateNetworkRequest.h"
#include "model/CreateNetworkResult.h"
#include "model/CreateNetworkAclRequest.h"
#include "model/CreateNetworkAclResult.h"
#include "model/CreateNetworkAclEntryRequest.h"
#include "model/CreateNetworkAclEntryResult.h"
#include "model/CreateNetworkInterfaceRequest.h"
#include "model/CreateNetworkInterfaceResult.h"
#include "model/CreateSDGRequest.h"
#include "model/CreateSDGResult.h"
#include "model/CreateSecurityGroupRequest.h"
#include "model/CreateSecurityGroupResult.h"
#include "model/CreateSnapshotRequest.h"
#include "model/CreateSnapshotResult.h"
#include "model/CreateSnatEntryRequest.h"
#include "model/CreateSnatEntryResult.h"
#include "model/CreateStorageGatewayRequest.h"
#include "model/CreateStorageGatewayResult.h"
#include "model/CreateStorageVolumeRequest.h"
#include "model/CreateStorageVolumeResult.h"
#include "model/CreateVSwitchRequest.h"
#include "model/CreateVSwitchResult.h"
#include "model/DeleteApplicationRequest.h"
#include "model/DeleteApplicationResult.h"
#include "model/DeleteBucketRequest.h"
#include "model/DeleteBucketResult.h"
#include "model/DeleteBucketLifecycleRequest.h"
#include "model/DeleteBucketLifecycleResult.h"
#include "model/DeleteDeviceInternetPortRequest.h"
#include "model/DeleteDeviceInternetPortResult.h"
#include "model/DeleteDiskRequest.h"
#include "model/DeleteDiskResult.h"
#include "model/DeleteEipRequest.h"
#include "model/DeleteEipResult.h"
#include "model/DeleteEnsRouteEntryRequest.h"
#include "model/DeleteEnsRouteEntryResult.h"
#include "model/DeleteEnsSaleConditionControlRequest.h"
#include "model/DeleteEnsSaleConditionControlResult.h"
#include "model/DeleteEnsSaleControlRequest.h"
#include "model/DeleteEnsSaleControlResult.h"
#include "model/DeleteEpnInstanceRequest.h"
#include "model/DeleteEpnInstanceResult.h"
#include "model/DeleteFileSystemRequest.h"
#include "model/DeleteFileSystemResult.h"
#include "model/DeleteForwardEntryRequest.h"
#include "model/DeleteForwardEntryResult.h"
#include "model/DeleteHaVipsRequest.h"
#include "model/DeleteHaVipsResult.h"
#include "model/DeleteImageRequest.h"
#include "model/DeleteImageResult.h"
#include "model/DeleteKeyPairsRequest.h"
#include "model/DeleteKeyPairsResult.h"
#include "model/DeleteLoadBalancerListenerRequest.h"
#include "model/DeleteLoadBalancerListenerResult.h"
#include "model/DeleteMountTargetRequest.h"
#include "model/DeleteMountTargetResult.h"
#include "model/DeleteNatGatewayRequest.h"
#include "model/DeleteNatGatewayResult.h"
#include "model/DeleteNetworkRequest.h"
#include "model/DeleteNetworkResult.h"
#include "model/DeleteNetworkAclRequest.h"
#include "model/DeleteNetworkAclResult.h"
#include "model/DeleteNetworkAclEntryRequest.h"
#include "model/DeleteNetworkAclEntryResult.h"
#include "model/DeleteNetworkInterfacesRequest.h"
#include "model/DeleteNetworkInterfacesResult.h"
#include "model/DeleteObjectRequest.h"
#include "model/DeleteObjectResult.h"
#include "model/DeleteSDGRequest.h"
#include "model/DeleteSDGResult.h"
#include "model/DeleteSecurityGroupRequest.h"
#include "model/DeleteSecurityGroupResult.h"
#include "model/DeleteSnapshotRequest.h"
#include "model/DeleteSnapshotResult.h"
#include "model/DeleteSnatEntryRequest.h"
#include "model/DeleteSnatEntryResult.h"
#include "model/DeleteSnatIpForSnatEntryRequest.h"
#include "model/DeleteSnatIpForSnatEntryResult.h"
#include "model/DeleteStorageGatewayRequest.h"
#include "model/DeleteStorageGatewayResult.h"
#include "model/DeleteStorageVolumeRequest.h"
#include "model/DeleteStorageVolumeResult.h"
#include "model/DeleteVSwitchRequest.h"
#include "model/DeleteVSwitchResult.h"
#include "model/DeployInstanceSDGRequest.h"
#include "model/DeployInstanceSDGResult.h"
#include "model/DeploySDGRequest.h"
#include "model/DeploySDGResult.h"
#include "model/DescribeAICImagesRequest.h"
#include "model/DescribeAICImagesResult.h"
#include "model/DescribeARMServerInstancesRequest.h"
#include "model/DescribeARMServerInstancesResult.h"
#include "model/DescribeApplicationRequest.h"
#include "model/DescribeApplicationResult.h"
#include "model/DescribeAvailableResourceRequest.h"
#include "model/DescribeAvailableResourceResult.h"
#include "model/DescribeAvailableResourceInfoRequest.h"
#include "model/DescribeAvailableResourceInfoResult.h"
#include "model/DescribeBandWithdChargeTypeRequest.h"
#include "model/DescribeBandWithdChargeTypeResult.h"
#include "model/DescribeBandwitdhByInternetChargeTypeRequest.h"
#include "model/DescribeBandwitdhByInternetChargeTypeResult.h"
#include "model/DescribeCloudDiskAvailableResourceInfoRequest.h"
#include "model/DescribeCloudDiskAvailableResourceInfoResult.h"
#include "model/DescribeCloudDiskTypesRequest.h"
#include "model/DescribeCloudDiskTypesResult.h"
#include "model/DescribeClusterRequest.h"
#include "model/DescribeClusterResult.h"
#include "model/DescribeClusterKubeConfigRequest.h"
#include "model/DescribeClusterKubeConfigResult.h"
#include "model/DescribeCreatePrePaidInstanceResultRequest.h"
#include "model/DescribeCreatePrePaidInstanceResultResult.h"
#include "model/DescribeDataDistResultRequest.h"
#include "model/DescribeDataDistResultResult.h"
#include "model/DescribeDataDownloadURLRequest.h"
#include "model/DescribeDataDownloadURLResult.h"
#include "model/DescribeDataPushResultRequest.h"
#include "model/DescribeDataPushResultResult.h"
#include "model/DescribeDeviceServiceRequest.h"
#include "model/DescribeDeviceServiceResult.h"
#include "model/DescribeDiskIopsListRequest.h"
#include "model/DescribeDiskIopsListResult.h"
#include "model/DescribeDisksRequest.h"
#include "model/DescribeDisksResult.h"
#include "model/DescribeElbAvailableResourceInfoRequest.h"
#include "model/DescribeElbAvailableResourceInfoResult.h"
#include "model/DescribeEnsCommodityCodeRequest.h"
#include "model/DescribeEnsCommodityCodeResult.h"
#include "model/DescribeEnsCommodityModuleCodeRequest.h"
#include "model/DescribeEnsCommodityModuleCodeResult.h"
#include "model/DescribeEnsEipAddressesRequest.h"
#include "model/DescribeEnsEipAddressesResult.h"
#include "model/DescribeEnsNetDistrictRequest.h"
#include "model/DescribeEnsNetDistrictResult.h"
#include "model/DescribeEnsNetLevelRequest.h"
#include "model/DescribeEnsNetLevelResult.h"
#include "model/DescribeEnsNetSaleDistrictRequest.h"
#include "model/DescribeEnsNetSaleDistrictResult.h"
#include "model/DescribeEnsRegionIdIpv6InfoRequest.h"
#include "model/DescribeEnsRegionIdIpv6InfoResult.h"
#include "model/DescribeEnsRegionIdResourceRequest.h"
#include "model/DescribeEnsRegionIdResourceResult.h"
#include "model/DescribeEnsRegionsRequest.h"
#include "model/DescribeEnsRegionsResult.h"
#include "model/DescribeEnsResourceUsageRequest.h"
#include "model/DescribeEnsResourceUsageResult.h"
#include "model/DescribeEnsRouteEntryListRequest.h"
#include "model/DescribeEnsRouteEntryListResult.h"
#include "model/DescribeEnsRouteTablesRequest.h"
#include "model/DescribeEnsRouteTablesResult.h"
#include "model/DescribeEnsSaleControlRequest.h"
#include "model/DescribeEnsSaleControlResult.h"
#include "model/DescribeEnsSaleControlAvailableResourceRequest.h"
#include "model/DescribeEnsSaleControlAvailableResourceResult.h"
#include "model/DescribeEnsSaleControlStockRequest.h"
#include "model/DescribeEnsSaleControlStockResult.h"
#include "model/DescribeEpnBandWidthDataRequest.h"
#include "model/DescribeEpnBandWidthDataResult.h"
#include "model/DescribeEpnBandwitdhByInternetChargeTypeRequest.h"
#include "model/DescribeEpnBandwitdhByInternetChargeTypeResult.h"
#include "model/DescribeEpnInstanceAttributeRequest.h"
#include "model/DescribeEpnInstanceAttributeResult.h"
#include "model/DescribeEpnInstancesRequest.h"
#include "model/DescribeEpnInstancesResult.h"
#include "model/DescribeEpnMeasurementDataRequest.h"
#include "model/DescribeEpnMeasurementDataResult.h"
#include "model/DescribeExportImageInfoRequest.h"
#include "model/DescribeExportImageInfoResult.h"
#include "model/DescribeExportImageStatusRequest.h"
#include "model/DescribeExportImageStatusResult.h"
#include "model/DescribeFileSystemsRequest.h"
#include "model/DescribeFileSystemsResult.h"
#include "model/DescribeForwardTableEntriesRequest.h"
#include "model/DescribeForwardTableEntriesResult.h"
#include "model/DescribeHaVipsRequest.h"
#include "model/DescribeHaVipsResult.h"
#include "model/DescribeImageInfosRequest.h"
#include "model/DescribeImageInfosResult.h"
#include "model/DescribeImageSharePermissionRequest.h"
#include "model/DescribeImageSharePermissionResult.h"
#include "model/DescribeImagesRequest.h"
#include "model/DescribeImagesResult.h"
#include "model/DescribeInstanceAutoRenewAttributeRequest.h"
#include "model/DescribeInstanceAutoRenewAttributeResult.h"
#include "model/DescribeInstanceBandwidthDetailRequest.h"
#include "model/DescribeInstanceBandwidthDetailResult.h"
#include "model/DescribeInstanceMonitorDataRequest.h"
#include "model/DescribeInstanceMonitorDataResult.h"
#include "model/DescribeInstanceSDGStatusRequest.h"
#include "model/DescribeInstanceSDGStatusResult.h"
#include "model/DescribeInstanceSpecRequest.h"
#include "model/DescribeInstanceSpecResult.h"
#include "model/DescribeInstanceTypesRequest.h"
#include "model/DescribeInstanceTypesResult.h"
#include "model/DescribeInstanceVncUrlRequest.h"
#include "model/DescribeInstanceVncUrlResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeKeyPairsRequest.h"
#include "model/DescribeKeyPairsResult.h"
#include "model/DescribeLoadBalancerAttributeRequest.h"
#include "model/DescribeLoadBalancerAttributeResult.h"
#include "model/DescribeLoadBalancerHTTPListenerAttributeRequest.h"
#include "model/DescribeLoadBalancerHTTPListenerAttributeResult.h"
#include "model/DescribeLoadBalancerHTTPSListenerAttributeRequest.h"
#include "model/DescribeLoadBalancerHTTPSListenerAttributeResult.h"
#include "model/DescribeLoadBalancerListenMonitorRequest.h"
#include "model/DescribeLoadBalancerListenMonitorResult.h"
#include "model/DescribeLoadBalancerListenersRequest.h"
#include "model/DescribeLoadBalancerListenersResult.h"
#include "model/DescribeLoadBalancerSpecRequest.h"
#include "model/DescribeLoadBalancerSpecResult.h"
#include "model/DescribeLoadBalancerTCPListenerAttributeRequest.h"
#include "model/DescribeLoadBalancerTCPListenerAttributeResult.h"
#include "model/DescribeLoadBalancerUDPListenerAttributeRequest.h"
#include "model/DescribeLoadBalancerUDPListenerAttributeResult.h"
#include "model/DescribeLoadBalancersRequest.h"
#include "model/DescribeLoadBalancersResult.h"
#include "model/DescribeMeasurementDataRequest.h"
#include "model/DescribeMeasurementDataResult.h"
#include "model/DescribeMountTargetsRequest.h"
#include "model/DescribeMountTargetsResult.h"
#include "model/DescribeNCInformationRequest.h"
#include "model/DescribeNCInformationResult.h"
#include "model/DescribeNatGatewaysRequest.h"
#include "model/DescribeNatGatewaysResult.h"
#include "model/DescribeNetworkAclsRequest.h"
#include "model/DescribeNetworkAclsResult.h"
#include "model/DescribeNetworkAttributeRequest.h"
#include "model/DescribeNetworkAttributeResult.h"
#include "model/DescribeNetworkInterfacesRequest.h"
#include "model/DescribeNetworkInterfacesResult.h"
#include "model/DescribeNetworksRequest.h"
#include "model/DescribeNetworksResult.h"
#include "model/DescribePrePaidInstanceStockRequest.h"
#include "model/DescribePrePaidInstanceStockResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"
#include "model/DescribeRegionIspsRequest.h"
#include "model/DescribeRegionIspsResult.h"
#include "model/DescribeRegionResourceRequest.h"
#include "model/DescribeRegionResourceResult.h"
#include "model/DescribeReservedResourceRequest.h"
#include "model/DescribeReservedResourceResult.h"
#include "model/DescribeResourceTimelineRequest.h"
#include "model/DescribeResourceTimelineResult.h"
#include "model/DescribeSDGRequest.h"
#include "model/DescribeSDGResult.h"
#include "model/DescribeSDGDeploymentStatusRequest.h"
#include "model/DescribeSDGDeploymentStatusResult.h"
#include "model/DescribeSDGsRequest.h"
#include "model/DescribeSDGsResult.h"
#include "model/DescribeSecondaryPublicIpAddressesRequest.h"
#include "model/DescribeSecondaryPublicIpAddressesResult.h"
#include "model/DescribeSecurityGroupAttributeRequest.h"
#include "model/DescribeSecurityGroupAttributeResult.h"
#include "model/DescribeSecurityGroupsRequest.h"
#include "model/DescribeSecurityGroupsResult.h"
#include "model/DescribeSelfImagesRequest.h"
#include "model/DescribeSelfImagesResult.h"
#include "model/DescribeServcieScheduleRequest.h"
#include "model/DescribeServcieScheduleResult.h"
#include "model/DescribeServerLoadBalancerListenMonitorRequest.h"
#include "model/DescribeServerLoadBalancerListenMonitorResult.h"
#include "model/DescribeServerLoadBalancerMonitorRequest.h"
#include "model/DescribeServerLoadBalancerMonitorResult.h"
#include "model/DescribeSnapshotsRequest.h"
#include "model/DescribeSnapshotsResult.h"
#include "model/DescribeSnatAttributeRequest.h"
#include "model/DescribeSnatAttributeResult.h"
#include "model/DescribeSnatTableEntriesRequest.h"
#include "model/DescribeSnatTableEntriesResult.h"
#include "model/DescribeStorageGatewayRequest.h"
#include "model/DescribeStorageGatewayResult.h"
#include "model/DescribeStorageVolumeRequest.h"
#include "model/DescribeStorageVolumeResult.h"
#include "model/DescribeUserBandWidthDataRequest.h"
#include "model/DescribeUserBandWidthDataResult.h"
#include "model/DescribeVSwitchAttributesRequest.h"
#include "model/DescribeVSwitchAttributesResult.h"
#include "model/DescribeVSwitchesRequest.h"
#include "model/DescribeVSwitchesResult.h"
#include "model/DetachDiskRequest.h"
#include "model/DetachDiskResult.h"
#include "model/DetachInstanceSDGRequest.h"
#include "model/DetachInstanceSDGResult.h"
#include "model/DetachNetworkInterfaceRequest.h"
#include "model/DetachNetworkInterfaceResult.h"
#include "model/DistApplicationDataRequest.h"
#include "model/DistApplicationDataResult.h"
#include "model/ExportBillDetailDataRequest.h"
#include "model/ExportBillDetailDataResult.h"
#include "model/ExportImageRequest.h"
#include "model/ExportImageResult.h"
#include "model/ExportMeasurementDataRequest.h"
#include "model/ExportMeasurementDataResult.h"
#include "model/GetBucketAclRequest.h"
#include "model/GetBucketAclResult.h"
#include "model/GetBucketInfoRequest.h"
#include "model/GetBucketInfoResult.h"
#include "model/GetBucketLifecycleRequest.h"
#include "model/GetBucketLifecycleResult.h"
#include "model/GetDeviceInternetPortRequest.h"
#include "model/GetDeviceInternetPortResult.h"
#include "model/GetOssStorageAndAccByBucketsRequest.h"
#include "model/GetOssStorageAndAccByBucketsResult.h"
#include "model/GetOssUsageDataRequest.h"
#include "model/GetOssUsageDataResult.h"
#include "model/ImportKeyPairRequest.h"
#include "model/ImportKeyPairResult.h"
#include "model/JoinPublicIpsToEpnInstanceRequest.h"
#include "model/JoinPublicIpsToEpnInstanceResult.h"
#include "model/JoinSecurityGroupRequest.h"
#include "model/JoinSecurityGroupResult.h"
#include "model/JoinVSwitchesToEpnInstanceRequest.h"
#include "model/JoinVSwitchesToEpnInstanceResult.h"
#include "model/LeaveSecurityGroupRequest.h"
#include "model/LeaveSecurityGroupResult.h"
#include "model/ListApplicationsRequest.h"
#include "model/ListApplicationsResult.h"
#include "model/ListBucketsRequest.h"
#include "model/ListBucketsResult.h"
#include "model/ListObjectsRequest.h"
#include "model/ListObjectsResult.h"
#include "model/ListProductAbilitiesRequest.h"
#include "model/ListProductAbilitiesResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyEnsEipAddressAttributeRequest.h"
#include "model/ModifyEnsEipAddressAttributeResult.h"
#include "model/ModifyEnsRouteEntryRequest.h"
#include "model/ModifyEnsRouteEntryResult.h"
#include "model/ModifyEpnInstanceRequest.h"
#include "model/ModifyEpnInstanceResult.h"
#include "model/ModifyFileSystemRequest.h"
#include "model/ModifyFileSystemResult.h"
#include "model/ModifyForwardEntryRequest.h"
#include "model/ModifyForwardEntryResult.h"
#include "model/ModifyHaVipAttributeRequest.h"
#include "model/ModifyHaVipAttributeResult.h"
#include "model/ModifyImageAttributeRequest.h"
#include "model/ModifyImageAttributeResult.h"
#include "model/ModifyImageSharePermissionRequest.h"
#include "model/ModifyImageSharePermissionResult.h"
#include "model/ModifyInstanceAttributeRequest.h"
#include "model/ModifyInstanceAttributeResult.h"
#include "model/ModifyInstanceAutoRenewAttributeRequest.h"
#include "model/ModifyInstanceAutoRenewAttributeResult.h"
#include "model/ModifyInstanceBootConfigurationRequest.h"
#include "model/ModifyInstanceBootConfigurationResult.h"
#include "model/ModifyInstanceChargeTypeRequest.h"
#include "model/ModifyInstanceChargeTypeResult.h"
#include "model/ModifyLoadBalancerAttributeRequest.h"
#include "model/ModifyLoadBalancerAttributeResult.h"
#include "model/ModifyNetworkAttributeRequest.h"
#include "model/ModifyNetworkAttributeResult.h"
#include "model/ModifyNetworkInterfaceAttributeRequest.h"
#include "model/ModifyNetworkInterfaceAttributeResult.h"
#include "model/ModifyPrepayInstanceSpecRequest.h"
#include "model/ModifyPrepayInstanceSpecResult.h"
#include "model/ModifySecurityGroupAttributeRequest.h"
#include "model/ModifySecurityGroupAttributeResult.h"
#include "model/ModifySnapshotAttributeRequest.h"
#include "model/ModifySnapshotAttributeResult.h"
#include "model/ModifySnatEntryRequest.h"
#include "model/ModifySnatEntryResult.h"
#include "model/ModifyVSwitchAttributeRequest.h"
#include "model/ModifyVSwitchAttributeResult.h"
#include "model/MountInstanceSDGRequest.h"
#include "model/MountInstanceSDGResult.h"
#include "model/PreloadRegionSDGRequest.h"
#include "model/PreloadRegionSDGResult.h"
#include "model/PrepareUploadRequest.h"
#include "model/PrepareUploadResult.h"
#include "model/PushApplicationDataRequest.h"
#include "model/PushApplicationDataResult.h"
#include "model/PutBucketRequest.h"
#include "model/PutBucketResult.h"
#include "model/PutBucketAclRequest.h"
#include "model/PutBucketAclResult.h"
#include "model/PutBucketLifecycleRequest.h"
#include "model/PutBucketLifecycleResult.h"
#include "model/ReInitDiskRequest.h"
#include "model/ReInitDiskResult.h"
#include "model/RebootAICInstanceRequest.h"
#include "model/RebootAICInstanceResult.h"
#include "model/RebootARMServerInstanceRequest.h"
#include "model/RebootARMServerInstanceResult.h"
#include "model/RebootInstanceRequest.h"
#include "model/RebootInstanceResult.h"
#include "model/RebootInstancesRequest.h"
#include "model/RebootInstancesResult.h"
#include "model/RecoverAICInstanceRequest.h"
#include "model/RecoverAICInstanceResult.h"
#include "model/ReinitInstanceRequest.h"
#include "model/ReinitInstanceResult.h"
#include "model/ReinitInstancesRequest.h"
#include "model/ReinitInstancesResult.h"
#include "model/ReleaseAICInstanceRequest.h"
#include "model/ReleaseAICInstanceResult.h"
#include "model/ReleaseARMServerInstanceRequest.h"
#include "model/ReleaseARMServerInstanceResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/ReleasePostPaidInstanceRequest.h"
#include "model/ReleasePostPaidInstanceResult.h"
#include "model/ReleasePrePaidInstanceRequest.h"
#include "model/ReleasePrePaidInstanceResult.h"
#include "model/RemoveBackendServersRequest.h"
#include "model/RemoveBackendServersResult.h"
#include "model/RemoveInstanceSDGRequest.h"
#include "model/RemoveInstanceSDGResult.h"
#include "model/RemovePublicIpsFromEpnInstanceRequest.h"
#include "model/RemovePublicIpsFromEpnInstanceResult.h"
#include "model/RemoveSDGRequest.h"
#include "model/RemoveSDGResult.h"
#include "model/RemoveVSwitchesFromEpnInstanceRequest.h"
#include "model/RemoveVSwitchesFromEpnInstanceResult.h"
#include "model/RenewARMServerInstanceRequest.h"
#include "model/RenewARMServerInstanceResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/RescaleApplicationRequest.h"
#include "model/RescaleApplicationResult.h"
#include "model/RescaleDeviceServiceRequest.h"
#include "model/RescaleDeviceServiceResult.h"
#include "model/ResetAICInstanceRequest.h"
#include "model/ResetAICInstanceResult.h"
#include "model/ResetDeviceInstanceRequest.h"
#include "model/ResetDeviceInstanceResult.h"
#include "model/ResetDiskRequest.h"
#include "model/ResetDiskResult.h"
#include "model/ResizeDiskRequest.h"
#include "model/ResizeDiskResult.h"
#include "model/RestartDeviceInstanceRequest.h"
#include "model/RestartDeviceInstanceResult.h"
#include "model/RevokeSecurityGroupRequest.h"
#include "model/RevokeSecurityGroupResult.h"
#include "model/RevokeSecurityGroupEgressRequest.h"
#include "model/RevokeSecurityGroupEgressResult.h"
#include "model/RollbackApplicationRequest.h"
#include "model/RollbackApplicationResult.h"
#include "model/RunInstancesRequest.h"
#include "model/RunInstancesResult.h"
#include "model/RunServiceScheduleRequest.h"
#include "model/RunServiceScheduleResult.h"
#include "model/SaveSDGRequest.h"
#include "model/SaveSDGResult.h"
#include "model/SetBackendServersRequest.h"
#include "model/SetBackendServersResult.h"
#include "model/SetLoadBalancerHTTPListenerAttributeRequest.h"
#include "model/SetLoadBalancerHTTPListenerAttributeResult.h"
#include "model/SetLoadBalancerHTTPSListenerAttributeRequest.h"
#include "model/SetLoadBalancerHTTPSListenerAttributeResult.h"
#include "model/SetLoadBalancerStatusRequest.h"
#include "model/SetLoadBalancerStatusResult.h"
#include "model/SetLoadBalancerTCPListenerAttributeRequest.h"
#include "model/SetLoadBalancerTCPListenerAttributeResult.h"
#include "model/SetLoadBalancerUDPListenerAttributeRequest.h"
#include "model/SetLoadBalancerUDPListenerAttributeResult.h"
#include "model/StartEpnInstanceRequest.h"
#include "model/StartEpnInstanceResult.h"
#include "model/StartInstanceRequest.h"
#include "model/StartInstanceResult.h"
#include "model/StartInstancesRequest.h"
#include "model/StartInstancesResult.h"
#include "model/StartLoadBalancerListenerRequest.h"
#include "model/StartLoadBalancerListenerResult.h"
#include "model/StartSnatIpForSnatEntryRequest.h"
#include "model/StartSnatIpForSnatEntryResult.h"
#include "model/StopEpnInstanceRequest.h"
#include "model/StopEpnInstanceResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/StopInstancesRequest.h"
#include "model/StopInstancesResult.h"
#include "model/StopLoadBalancerListenerRequest.h"
#include "model/StopLoadBalancerListenerResult.h"
#include "model/StopSnatIpForSnatEntryRequest.h"
#include "model/StopSnatIpForSnatEntryResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnAssociateEnsEipAddressRequest.h"
#include "model/UnAssociateEnsEipAddressResult.h"
#include "model/UnassignPrivateIpAddressesRequest.h"
#include "model/UnassignPrivateIpAddressesResult.h"
#include "model/UnassociateHaVipRequest.h"
#include "model/UnassociateHaVipResult.h"
#include "model/UnassociateNetworkAclRequest.h"
#include "model/UnassociateNetworkAclResult.h"
#include "model/UnloadRegionSDGRequest.h"
#include "model/UnloadRegionSDGResult.h"
#include "model/UnmountInstanceSDGRequest.h"
#include "model/UnmountInstanceSDGResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateEnsSaleControlRequest.h"
#include "model/UpdateEnsSaleControlResult.h"
#include "model/UpgradeAICInstanceImageRequest.h"
#include "model/UpgradeAICInstanceImageResult.h"
#include "model/UpgradeApplicationRequest.h"
#include "model/UpgradeApplicationResult.h"


namespace AlibabaCloud
{
	namespace Ens
	{
		class ALIBABACLOUD_ENS_EXPORT EnsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AccosicateNetworkAclResult> AccosicateNetworkAclOutcome;
			typedef std::future<AccosicateNetworkAclOutcome> AccosicateNetworkAclOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AccosicateNetworkAclRequest&, const AccosicateNetworkAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AccosicateNetworkAclAsyncHandler;
			typedef Outcome<Error, Model::AddBackendServersResult> AddBackendServersOutcome;
			typedef std::future<AddBackendServersOutcome> AddBackendServersOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AddBackendServersRequest&, const AddBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBackendServersAsyncHandler;
			typedef Outcome<Error, Model::AddDeviceInternetPortResult> AddDeviceInternetPortOutcome;
			typedef std::future<AddDeviceInternetPortOutcome> AddDeviceInternetPortOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AddDeviceInternetPortRequest&, const AddDeviceInternetPortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceInternetPortAsyncHandler;
			typedef Outcome<Error, Model::AddNetworkInterfaceToInstanceResult> AddNetworkInterfaceToInstanceOutcome;
			typedef std::future<AddNetworkInterfaceToInstanceOutcome> AddNetworkInterfaceToInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AddNetworkInterfaceToInstanceRequest&, const AddNetworkInterfaceToInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddNetworkInterfaceToInstanceAsyncHandler;
			typedef Outcome<Error, Model::AddSnatIpForSnatEntryResult> AddSnatIpForSnatEntryOutcome;
			typedef std::future<AddSnatIpForSnatEntryOutcome> AddSnatIpForSnatEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AddSnatIpForSnatEntryRequest&, const AddSnatIpForSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSnatIpForSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::AssignPrivateIpAddressesResult> AssignPrivateIpAddressesOutcome;
			typedef std::future<AssignPrivateIpAddressesOutcome> AssignPrivateIpAddressesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AssignPrivateIpAddressesRequest&, const AssignPrivateIpAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignPrivateIpAddressesAsyncHandler;
			typedef Outcome<Error, Model::AssociateEnsEipAddressResult> AssociateEnsEipAddressOutcome;
			typedef std::future<AssociateEnsEipAddressOutcome> AssociateEnsEipAddressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AssociateEnsEipAddressRequest&, const AssociateEnsEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateEnsEipAddressAsyncHandler;
			typedef Outcome<Error, Model::AssociateHaVipResult> AssociateHaVipOutcome;
			typedef std::future<AssociateHaVipOutcome> AssociateHaVipOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AssociateHaVipRequest&, const AssociateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateHaVipAsyncHandler;
			typedef Outcome<Error, Model::AttachDiskResult> AttachDiskOutcome;
			typedef std::future<AttachDiskOutcome> AttachDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AttachDiskRequest&, const AttachDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDiskAsyncHandler;
			typedef Outcome<Error, Model::AttachEnsInstancesResult> AttachEnsInstancesOutcome;
			typedef std::future<AttachEnsInstancesOutcome> AttachEnsInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AttachEnsInstancesRequest&, const AttachEnsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachEnsInstancesAsyncHandler;
			typedef Outcome<Error, Model::AttachInstanceSDGResult> AttachInstanceSDGOutcome;
			typedef std::future<AttachInstanceSDGOutcome> AttachInstanceSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AttachInstanceSDGRequest&, const AttachInstanceSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstanceSDGAsyncHandler;
			typedef Outcome<Error, Model::AttachNetworkInterfaceResult> AttachNetworkInterfaceOutcome;
			typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AttachNetworkInterfaceRequest&, const AttachNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeSecurityGroupResult> AuthorizeSecurityGroupOutcome;
			typedef std::future<AuthorizeSecurityGroupOutcome> AuthorizeSecurityGroupOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AuthorizeSecurityGroupRequest&, const AuthorizeSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeSecurityGroupEgressResult> AuthorizeSecurityGroupEgressOutcome;
			typedef std::future<AuthorizeSecurityGroupEgressOutcome> AuthorizeSecurityGroupEgressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AuthorizeSecurityGroupEgressRequest&, const AuthorizeSecurityGroupEgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeSecurityGroupEgressAsyncHandler;
			typedef Outcome<Error, Model::CleanDistDataResult> CleanDistDataOutcome;
			typedef std::future<CleanDistDataOutcome> CleanDistDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CleanDistDataRequest&, const CleanDistDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CleanDistDataAsyncHandler;
			typedef Outcome<Error, Model::CopySDGResult> CopySDGOutcome;
			typedef std::future<CopySDGOutcome> CopySDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CopySDGRequest&, const CopySDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopySDGAsyncHandler;
			typedef Outcome<Error, Model::CopySnapshotResult> CopySnapshotOutcome;
			typedef std::future<CopySnapshotOutcome> CopySnapshotOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CopySnapshotRequest&, const CopySnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopySnapshotAsyncHandler;
			typedef Outcome<Error, Model::CreateARMServerInstancesResult> CreateARMServerInstancesOutcome;
			typedef std::future<CreateARMServerInstancesOutcome> CreateARMServerInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateARMServerInstancesRequest&, const CreateARMServerInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateARMServerInstancesAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationResult> CreateApplicationOutcome;
			typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateApplicationRequest&, const CreateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreateClassicNetworkResult> CreateClassicNetworkOutcome;
			typedef std::future<CreateClassicNetworkOutcome> CreateClassicNetworkOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateClassicNetworkRequest&, const CreateClassicNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClassicNetworkAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateDiskResult> CreateDiskOutcome;
			typedef std::future<CreateDiskOutcome> CreateDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateDiskRequest&, const CreateDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiskAsyncHandler;
			typedef Outcome<Error, Model::CreateEipInstanceResult> CreateEipInstanceOutcome;
			typedef std::future<CreateEipInstanceOutcome> CreateEipInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateEipInstanceRequest&, const CreateEipInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEipInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateEnsRouteEntryResult> CreateEnsRouteEntryOutcome;
			typedef std::future<CreateEnsRouteEntryOutcome> CreateEnsRouteEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateEnsRouteEntryRequest&, const CreateEnsRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnsRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateEnsSaleControlResult> CreateEnsSaleControlOutcome;
			typedef std::future<CreateEnsSaleControlOutcome> CreateEnsSaleControlOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateEnsSaleControlRequest&, const CreateEnsSaleControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnsSaleControlAsyncHandler;
			typedef Outcome<Error, Model::CreateEnsServiceResult> CreateEnsServiceOutcome;
			typedef std::future<CreateEnsServiceOutcome> CreateEnsServiceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateEnsServiceRequest&, const CreateEnsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnsServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateEpnInstanceResult> CreateEpnInstanceOutcome;
			typedef std::future<CreateEpnInstanceOutcome> CreateEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateEpnInstanceRequest&, const CreateEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateFileSystemResult> CreateFileSystemOutcome;
			typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateFileSystemRequest&, const CreateFileSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileSystemAsyncHandler;
			typedef Outcome<Error, Model::CreateForwardEntryResult> CreateForwardEntryOutcome;
			typedef std::future<CreateForwardEntryOutcome> CreateForwardEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateForwardEntryRequest&, const CreateForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateHaVipResult> CreateHaVipOutcome;
			typedef std::future<CreateHaVipOutcome> CreateHaVipOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateHaVipRequest&, const CreateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHaVipAsyncHandler;
			typedef Outcome<Error, Model::CreateImageResult> CreateImageOutcome;
			typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateImageRequest&, const CreateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceActiveOpsTaskResult> CreateInstanceActiveOpsTaskOutcome;
			typedef std::future<CreateInstanceActiveOpsTaskOutcome> CreateInstanceActiveOpsTaskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateInstanceActiveOpsTaskRequest&, const CreateInstanceActiveOpsTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceActiveOpsTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateKeyPairResult> CreateKeyPairOutcome;
			typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateKeyPairRequest&, const CreateKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyPairAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerResult> CreateLoadBalancerOutcome;
			typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateLoadBalancerRequest&, const CreateLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerHTTPListenerResult> CreateLoadBalancerHTTPListenerOutcome;
			typedef std::future<CreateLoadBalancerHTTPListenerOutcome> CreateLoadBalancerHTTPListenerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateLoadBalancerHTTPListenerRequest&, const CreateLoadBalancerHTTPListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerHTTPListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerHTTPSListenerResult> CreateLoadBalancerHTTPSListenerOutcome;
			typedef std::future<CreateLoadBalancerHTTPSListenerOutcome> CreateLoadBalancerHTTPSListenerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateLoadBalancerHTTPSListenerRequest&, const CreateLoadBalancerHTTPSListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerHTTPSListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerTCPListenerResult> CreateLoadBalancerTCPListenerOutcome;
			typedef std::future<CreateLoadBalancerTCPListenerOutcome> CreateLoadBalancerTCPListenerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateLoadBalancerTCPListenerRequest&, const CreateLoadBalancerTCPListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerTCPListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerUDPListenerResult> CreateLoadBalancerUDPListenerOutcome;
			typedef std::future<CreateLoadBalancerUDPListenerOutcome> CreateLoadBalancerUDPListenerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateLoadBalancerUDPListenerRequest&, const CreateLoadBalancerUDPListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerUDPListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateMountTargetResult> CreateMountTargetOutcome;
			typedef std::future<CreateMountTargetOutcome> CreateMountTargetOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateMountTargetRequest&, const CreateMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMountTargetAsyncHandler;
			typedef Outcome<Error, Model::CreateNatGatewayResult> CreateNatGatewayOutcome;
			typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateNatGatewayRequest&, const CreateNatGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkResult> CreateNetworkOutcome;
			typedef std::future<CreateNetworkOutcome> CreateNetworkOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateNetworkRequest&, const CreateNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkAclResult> CreateNetworkAclOutcome;
			typedef std::future<CreateNetworkAclOutcome> CreateNetworkAclOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateNetworkAclRequest&, const CreateNetworkAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAclAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkAclEntryResult> CreateNetworkAclEntryOutcome;
			typedef std::future<CreateNetworkAclEntryOutcome> CreateNetworkAclEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateNetworkAclEntryRequest&, const CreateNetworkAclEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAclEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkInterfaceResult> CreateNetworkInterfaceOutcome;
			typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateNetworkInterfaceRequest&, const CreateNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::CreateSDGResult> CreateSDGOutcome;
			typedef std::future<CreateSDGOutcome> CreateSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateSDGRequest&, const CreateSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSDGAsyncHandler;
			typedef Outcome<Error, Model::CreateSecurityGroupResult> CreateSecurityGroupOutcome;
			typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateSecurityGroupRequest&, const CreateSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateSnapshotResult> CreateSnapshotOutcome;
			typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateSnapshotRequest&, const CreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::CreateSnatEntryResult> CreateSnatEntryOutcome;
			typedef std::future<CreateSnatEntryOutcome> CreateSnatEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateSnatEntryRequest&, const CreateSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateStorageGatewayResult> CreateStorageGatewayOutcome;
			typedef std::future<CreateStorageGatewayOutcome> CreateStorageGatewayOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateStorageGatewayRequest&, const CreateStorageGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateStorageVolumeResult> CreateStorageVolumeOutcome;
			typedef std::future<CreateStorageVolumeOutcome> CreateStorageVolumeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateStorageVolumeRequest&, const CreateStorageVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageVolumeAsyncHandler;
			typedef Outcome<Error, Model::CreateVSwitchResult> CreateVSwitchOutcome;
			typedef std::future<CreateVSwitchOutcome> CreateVSwitchOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateVSwitchRequest&, const CreateVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVSwitchAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationResult> DeleteApplicationOutcome;
			typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteApplicationRequest&, const DeleteApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteBucketResult> DeleteBucketOutcome;
			typedef std::future<DeleteBucketOutcome> DeleteBucketOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteBucketRequest&, const DeleteBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBucketAsyncHandler;
			typedef Outcome<Error, Model::DeleteBucketLifecycleResult> DeleteBucketLifecycleOutcome;
			typedef std::future<DeleteBucketLifecycleOutcome> DeleteBucketLifecycleOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteBucketLifecycleRequest&, const DeleteBucketLifecycleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBucketLifecycleAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceInternetPortResult> DeleteDeviceInternetPortOutcome;
			typedef std::future<DeleteDeviceInternetPortOutcome> DeleteDeviceInternetPortOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteDeviceInternetPortRequest&, const DeleteDeviceInternetPortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceInternetPortAsyncHandler;
			typedef Outcome<Error, Model::DeleteDiskResult> DeleteDiskOutcome;
			typedef std::future<DeleteDiskOutcome> DeleteDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteDiskRequest&, const DeleteDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDiskAsyncHandler;
			typedef Outcome<Error, Model::DeleteEipResult> DeleteEipOutcome;
			typedef std::future<DeleteEipOutcome> DeleteEipOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteEipRequest&, const DeleteEipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEipAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnsRouteEntryResult> DeleteEnsRouteEntryOutcome;
			typedef std::future<DeleteEnsRouteEntryOutcome> DeleteEnsRouteEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteEnsRouteEntryRequest&, const DeleteEnsRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnsRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnsSaleConditionControlResult> DeleteEnsSaleConditionControlOutcome;
			typedef std::future<DeleteEnsSaleConditionControlOutcome> DeleteEnsSaleConditionControlOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteEnsSaleConditionControlRequest&, const DeleteEnsSaleConditionControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnsSaleConditionControlAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnsSaleControlResult> DeleteEnsSaleControlOutcome;
			typedef std::future<DeleteEnsSaleControlOutcome> DeleteEnsSaleControlOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteEnsSaleControlRequest&, const DeleteEnsSaleControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnsSaleControlAsyncHandler;
			typedef Outcome<Error, Model::DeleteEpnInstanceResult> DeleteEpnInstanceOutcome;
			typedef std::future<DeleteEpnInstanceOutcome> DeleteEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteEpnInstanceRequest&, const DeleteEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteFileSystemResult> DeleteFileSystemOutcome;
			typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteFileSystemRequest&, const DeleteFileSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileSystemAsyncHandler;
			typedef Outcome<Error, Model::DeleteForwardEntryResult> DeleteForwardEntryOutcome;
			typedef std::future<DeleteForwardEntryOutcome> DeleteForwardEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteForwardEntryRequest&, const DeleteForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteHaVipsResult> DeleteHaVipsOutcome;
			typedef std::future<DeleteHaVipsOutcome> DeleteHaVipsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteHaVipsRequest&, const DeleteHaVipsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHaVipsAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageResult> DeleteImageOutcome;
			typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteImageRequest&, const DeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteKeyPairsResult> DeleteKeyPairsOutcome;
			typedef std::future<DeleteKeyPairsOutcome> DeleteKeyPairsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteKeyPairsRequest&, const DeleteKeyPairsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyPairsAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoadBalancerListenerResult> DeleteLoadBalancerListenerOutcome;
			typedef std::future<DeleteLoadBalancerListenerOutcome> DeleteLoadBalancerListenerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteLoadBalancerListenerRequest&, const DeleteLoadBalancerListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerListenerAsyncHandler;
			typedef Outcome<Error, Model::DeleteMountTargetResult> DeleteMountTargetOutcome;
			typedef std::future<DeleteMountTargetOutcome> DeleteMountTargetOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteMountTargetRequest&, const DeleteMountTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMountTargetAsyncHandler;
			typedef Outcome<Error, Model::DeleteNatGatewayResult> DeleteNatGatewayOutcome;
			typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteNatGatewayRequest&, const DeleteNatGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkResult> DeleteNetworkOutcome;
			typedef std::future<DeleteNetworkOutcome> DeleteNetworkOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteNetworkRequest&, const DeleteNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkAclResult> DeleteNetworkAclOutcome;
			typedef std::future<DeleteNetworkAclOutcome> DeleteNetworkAclOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteNetworkAclRequest&, const DeleteNetworkAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAclAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkAclEntryResult> DeleteNetworkAclEntryOutcome;
			typedef std::future<DeleteNetworkAclEntryOutcome> DeleteNetworkAclEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteNetworkAclEntryRequest&, const DeleteNetworkAclEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAclEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkInterfacesResult> DeleteNetworkInterfacesOutcome;
			typedef std::future<DeleteNetworkInterfacesOutcome> DeleteNetworkInterfacesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteNetworkInterfacesRequest&, const DeleteNetworkInterfacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkInterfacesAsyncHandler;
			typedef Outcome<Error, Model::DeleteObjectResult> DeleteObjectOutcome;
			typedef std::future<DeleteObjectOutcome> DeleteObjectOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteObjectRequest&, const DeleteObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteObjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteSDGResult> DeleteSDGOutcome;
			typedef std::future<DeleteSDGOutcome> DeleteSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteSDGRequest&, const DeleteSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSDGAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecurityGroupResult> DeleteSecurityGroupOutcome;
			typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteSecurityGroupRequest&, const DeleteSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotResult> DeleteSnapshotOutcome;
			typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteSnapshotRequest&, const DeleteSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnatEntryResult> DeleteSnatEntryOutcome;
			typedef std::future<DeleteSnatEntryOutcome> DeleteSnatEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteSnatEntryRequest&, const DeleteSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnatIpForSnatEntryResult> DeleteSnatIpForSnatEntryOutcome;
			typedef std::future<DeleteSnatIpForSnatEntryOutcome> DeleteSnatIpForSnatEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteSnatIpForSnatEntryRequest&, const DeleteSnatIpForSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnatIpForSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteStorageGatewayResult> DeleteStorageGatewayOutcome;
			typedef std::future<DeleteStorageGatewayOutcome> DeleteStorageGatewayOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteStorageGatewayRequest&, const DeleteStorageGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStorageGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteStorageVolumeResult> DeleteStorageVolumeOutcome;
			typedef std::future<DeleteStorageVolumeOutcome> DeleteStorageVolumeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteStorageVolumeRequest&, const DeleteStorageVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStorageVolumeAsyncHandler;
			typedef Outcome<Error, Model::DeleteVSwitchResult> DeleteVSwitchOutcome;
			typedef std::future<DeleteVSwitchOutcome> DeleteVSwitchOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteVSwitchRequest&, const DeleteVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVSwitchAsyncHandler;
			typedef Outcome<Error, Model::DeployInstanceSDGResult> DeployInstanceSDGOutcome;
			typedef std::future<DeployInstanceSDGOutcome> DeployInstanceSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeployInstanceSDGRequest&, const DeployInstanceSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployInstanceSDGAsyncHandler;
			typedef Outcome<Error, Model::DeploySDGResult> DeploySDGOutcome;
			typedef std::future<DeploySDGOutcome> DeploySDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeploySDGRequest&, const DeploySDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeploySDGAsyncHandler;
			typedef Outcome<Error, Model::DescribeAICImagesResult> DescribeAICImagesOutcome;
			typedef std::future<DescribeAICImagesOutcome> DescribeAICImagesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeAICImagesRequest&, const DescribeAICImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAICImagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeARMServerInstancesResult> DescribeARMServerInstancesOutcome;
			typedef std::future<DescribeARMServerInstancesOutcome> DescribeARMServerInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeARMServerInstancesRequest&, const DescribeARMServerInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeARMServerInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationResult> DescribeApplicationOutcome;
			typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeApplicationRequest&, const DescribeApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableResourceResult> DescribeAvailableResourceOutcome;
			typedef std::future<DescribeAvailableResourceOutcome> DescribeAvailableResourceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeAvailableResourceRequest&, const DescribeAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableResourceInfoResult> DescribeAvailableResourceInfoOutcome;
			typedef std::future<DescribeAvailableResourceInfoOutcome> DescribeAvailableResourceInfoOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeAvailableResourceInfoRequest&, const DescribeAvailableResourceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableResourceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeBandWithdChargeTypeResult> DescribeBandWithdChargeTypeOutcome;
			typedef std::future<DescribeBandWithdChargeTypeOutcome> DescribeBandWithdChargeTypeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeBandWithdChargeTypeRequest&, const DescribeBandWithdChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandWithdChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeBandwitdhByInternetChargeTypeResult> DescribeBandwitdhByInternetChargeTypeOutcome;
			typedef std::future<DescribeBandwitdhByInternetChargeTypeOutcome> DescribeBandwitdhByInternetChargeTypeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeBandwitdhByInternetChargeTypeRequest&, const DescribeBandwitdhByInternetChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwitdhByInternetChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudDiskAvailableResourceInfoResult> DescribeCloudDiskAvailableResourceInfoOutcome;
			typedef std::future<DescribeCloudDiskAvailableResourceInfoOutcome> DescribeCloudDiskAvailableResourceInfoOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeCloudDiskAvailableResourceInfoRequest&, const DescribeCloudDiskAvailableResourceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudDiskAvailableResourceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudDiskTypesResult> DescribeCloudDiskTypesOutcome;
			typedef std::future<DescribeCloudDiskTypesOutcome> DescribeCloudDiskTypesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeCloudDiskTypesRequest&, const DescribeCloudDiskTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudDiskTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResult> DescribeClusterOutcome;
			typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeClusterRequest&, const DescribeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterKubeConfigResult> DescribeClusterKubeConfigOutcome;
			typedef std::future<DescribeClusterKubeConfigOutcome> DescribeClusterKubeConfigOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeClusterKubeConfigRequest&, const DescribeClusterKubeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterKubeConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCreatePrePaidInstanceResultResult> DescribeCreatePrePaidInstanceResultOutcome;
			typedef std::future<DescribeCreatePrePaidInstanceResultOutcome> DescribeCreatePrePaidInstanceResultOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeCreatePrePaidInstanceResultRequest&, const DescribeCreatePrePaidInstanceResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCreatePrePaidInstanceResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataDistResultResult> DescribeDataDistResultOutcome;
			typedef std::future<DescribeDataDistResultOutcome> DescribeDataDistResultOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeDataDistResultRequest&, const DescribeDataDistResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataDistResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataDownloadURLResult> DescribeDataDownloadURLOutcome;
			typedef std::future<DescribeDataDownloadURLOutcome> DescribeDataDownloadURLOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeDataDownloadURLRequest&, const DescribeDataDownloadURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataDownloadURLAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataPushResultResult> DescribeDataPushResultOutcome;
			typedef std::future<DescribeDataPushResultOutcome> DescribeDataPushResultOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeDataPushResultRequest&, const DescribeDataPushResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataPushResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceServiceResult> DescribeDeviceServiceOutcome;
			typedef std::future<DescribeDeviceServiceOutcome> DescribeDeviceServiceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeDeviceServiceRequest&, const DescribeDeviceServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiskIopsListResult> DescribeDiskIopsListOutcome;
			typedef std::future<DescribeDiskIopsListOutcome> DescribeDiskIopsListOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeDiskIopsListRequest&, const DescribeDiskIopsListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskIopsListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDisksResult> DescribeDisksOutcome;
			typedef std::future<DescribeDisksOutcome> DescribeDisksOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeDisksRequest&, const DescribeDisksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksAsyncHandler;
			typedef Outcome<Error, Model::DescribeElbAvailableResourceInfoResult> DescribeElbAvailableResourceInfoOutcome;
			typedef std::future<DescribeElbAvailableResourceInfoOutcome> DescribeElbAvailableResourceInfoOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeElbAvailableResourceInfoRequest&, const DescribeElbAvailableResourceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElbAvailableResourceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsCommodityCodeResult> DescribeEnsCommodityCodeOutcome;
			typedef std::future<DescribeEnsCommodityCodeOutcome> DescribeEnsCommodityCodeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsCommodityCodeRequest&, const DescribeEnsCommodityCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsCommodityCodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsCommodityModuleCodeResult> DescribeEnsCommodityModuleCodeOutcome;
			typedef std::future<DescribeEnsCommodityModuleCodeOutcome> DescribeEnsCommodityModuleCodeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsCommodityModuleCodeRequest&, const DescribeEnsCommodityModuleCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsCommodityModuleCodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsEipAddressesResult> DescribeEnsEipAddressesOutcome;
			typedef std::future<DescribeEnsEipAddressesOutcome> DescribeEnsEipAddressesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsEipAddressesRequest&, const DescribeEnsEipAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsEipAddressesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsNetDistrictResult> DescribeEnsNetDistrictOutcome;
			typedef std::future<DescribeEnsNetDistrictOutcome> DescribeEnsNetDistrictOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsNetDistrictRequest&, const DescribeEnsNetDistrictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsNetDistrictAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsNetLevelResult> DescribeEnsNetLevelOutcome;
			typedef std::future<DescribeEnsNetLevelOutcome> DescribeEnsNetLevelOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsNetLevelRequest&, const DescribeEnsNetLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsNetLevelAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsNetSaleDistrictResult> DescribeEnsNetSaleDistrictOutcome;
			typedef std::future<DescribeEnsNetSaleDistrictOutcome> DescribeEnsNetSaleDistrictOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsNetSaleDistrictRequest&, const DescribeEnsNetSaleDistrictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsNetSaleDistrictAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsRegionIdIpv6InfoResult> DescribeEnsRegionIdIpv6InfoOutcome;
			typedef std::future<DescribeEnsRegionIdIpv6InfoOutcome> DescribeEnsRegionIdIpv6InfoOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsRegionIdIpv6InfoRequest&, const DescribeEnsRegionIdIpv6InfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsRegionIdIpv6InfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsRegionIdResourceResult> DescribeEnsRegionIdResourceOutcome;
			typedef std::future<DescribeEnsRegionIdResourceOutcome> DescribeEnsRegionIdResourceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsRegionIdResourceRequest&, const DescribeEnsRegionIdResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsRegionIdResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsRegionsResult> DescribeEnsRegionsOutcome;
			typedef std::future<DescribeEnsRegionsOutcome> DescribeEnsRegionsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsRegionsRequest&, const DescribeEnsRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsResourceUsageResult> DescribeEnsResourceUsageOutcome;
			typedef std::future<DescribeEnsResourceUsageOutcome> DescribeEnsResourceUsageOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsResourceUsageRequest&, const DescribeEnsResourceUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsResourceUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsRouteEntryListResult> DescribeEnsRouteEntryListOutcome;
			typedef std::future<DescribeEnsRouteEntryListOutcome> DescribeEnsRouteEntryListOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsRouteEntryListRequest&, const DescribeEnsRouteEntryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsRouteEntryListAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsRouteTablesResult> DescribeEnsRouteTablesOutcome;
			typedef std::future<DescribeEnsRouteTablesOutcome> DescribeEnsRouteTablesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsRouteTablesRequest&, const DescribeEnsRouteTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsRouteTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsSaleControlResult> DescribeEnsSaleControlOutcome;
			typedef std::future<DescribeEnsSaleControlOutcome> DescribeEnsSaleControlOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsSaleControlRequest&, const DescribeEnsSaleControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsSaleControlAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsSaleControlAvailableResourceResult> DescribeEnsSaleControlAvailableResourceOutcome;
			typedef std::future<DescribeEnsSaleControlAvailableResourceOutcome> DescribeEnsSaleControlAvailableResourceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsSaleControlAvailableResourceRequest&, const DescribeEnsSaleControlAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsSaleControlAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnsSaleControlStockResult> DescribeEnsSaleControlStockOutcome;
			typedef std::future<DescribeEnsSaleControlStockOutcome> DescribeEnsSaleControlStockOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEnsSaleControlStockRequest&, const DescribeEnsSaleControlStockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnsSaleControlStockAsyncHandler;
			typedef Outcome<Error, Model::DescribeEpnBandWidthDataResult> DescribeEpnBandWidthDataOutcome;
			typedef std::future<DescribeEpnBandWidthDataOutcome> DescribeEpnBandWidthDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEpnBandWidthDataRequest&, const DescribeEpnBandWidthDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEpnBandWidthDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeEpnBandwitdhByInternetChargeTypeResult> DescribeEpnBandwitdhByInternetChargeTypeOutcome;
			typedef std::future<DescribeEpnBandwitdhByInternetChargeTypeOutcome> DescribeEpnBandwitdhByInternetChargeTypeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEpnBandwitdhByInternetChargeTypeRequest&, const DescribeEpnBandwitdhByInternetChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEpnBandwitdhByInternetChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeEpnInstanceAttributeResult> DescribeEpnInstanceAttributeOutcome;
			typedef std::future<DescribeEpnInstanceAttributeOutcome> DescribeEpnInstanceAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEpnInstanceAttributeRequest&, const DescribeEpnInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEpnInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeEpnInstancesResult> DescribeEpnInstancesOutcome;
			typedef std::future<DescribeEpnInstancesOutcome> DescribeEpnInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEpnInstancesRequest&, const DescribeEpnInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEpnInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEpnMeasurementDataResult> DescribeEpnMeasurementDataOutcome;
			typedef std::future<DescribeEpnMeasurementDataOutcome> DescribeEpnMeasurementDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEpnMeasurementDataRequest&, const DescribeEpnMeasurementDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEpnMeasurementDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeExportImageInfoResult> DescribeExportImageInfoOutcome;
			typedef std::future<DescribeExportImageInfoOutcome> DescribeExportImageInfoOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeExportImageInfoRequest&, const DescribeExportImageInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportImageInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeExportImageStatusResult> DescribeExportImageStatusOutcome;
			typedef std::future<DescribeExportImageStatusOutcome> DescribeExportImageStatusOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeExportImageStatusRequest&, const DescribeExportImageStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportImageStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeFileSystemsResult> DescribeFileSystemsOutcome;
			typedef std::future<DescribeFileSystemsOutcome> DescribeFileSystemsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeFileSystemsRequest&, const DescribeFileSystemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileSystemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeForwardTableEntriesResult> DescribeForwardTableEntriesOutcome;
			typedef std::future<DescribeForwardTableEntriesOutcome> DescribeForwardTableEntriesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeForwardTableEntriesRequest&, const DescribeForwardTableEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForwardTableEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeHaVipsResult> DescribeHaVipsOutcome;
			typedef std::future<DescribeHaVipsOutcome> DescribeHaVipsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeHaVipsRequest&, const DescribeHaVipsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHaVipsAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageInfosResult> DescribeImageInfosOutcome;
			typedef std::future<DescribeImageInfosOutcome> DescribeImageInfosOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeImageInfosRequest&, const DescribeImageInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageInfosAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageSharePermissionResult> DescribeImageSharePermissionOutcome;
			typedef std::future<DescribeImageSharePermissionOutcome> DescribeImageSharePermissionOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeImageSharePermissionRequest&, const DescribeImageSharePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSharePermissionAsyncHandler;
			typedef Outcome<Error, Model::DescribeImagesResult> DescribeImagesOutcome;
			typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeImagesRequest&, const DescribeImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceAutoRenewAttributeResult> DescribeInstanceAutoRenewAttributeOutcome;
			typedef std::future<DescribeInstanceAutoRenewAttributeOutcome> DescribeInstanceAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeInstanceAutoRenewAttributeRequest&, const DescribeInstanceAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceBandwidthDetailResult> DescribeInstanceBandwidthDetailOutcome;
			typedef std::future<DescribeInstanceBandwidthDetailOutcome> DescribeInstanceBandwidthDetailOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeInstanceBandwidthDetailRequest&, const DescribeInstanceBandwidthDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceBandwidthDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceMonitorDataResult> DescribeInstanceMonitorDataOutcome;
			typedef std::future<DescribeInstanceMonitorDataOutcome> DescribeInstanceMonitorDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeInstanceMonitorDataRequest&, const DescribeInstanceMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSDGStatusResult> DescribeInstanceSDGStatusOutcome;
			typedef std::future<DescribeInstanceSDGStatusOutcome> DescribeInstanceSDGStatusOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeInstanceSDGStatusRequest&, const DescribeInstanceSDGStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSDGStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSpecResult> DescribeInstanceSpecOutcome;
			typedef std::future<DescribeInstanceSpecOutcome> DescribeInstanceSpecOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeInstanceSpecRequest&, const DescribeInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTypesResult> DescribeInstanceTypesOutcome;
			typedef std::future<DescribeInstanceTypesOutcome> DescribeInstanceTypesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeInstanceTypesRequest&, const DescribeInstanceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceVncUrlResult> DescribeInstanceVncUrlOutcome;
			typedef std::future<DescribeInstanceVncUrlOutcome> DescribeInstanceVncUrlOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeInstanceVncUrlRequest&, const DescribeInstanceVncUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceVncUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeKeyPairsResult> DescribeKeyPairsOutcome;
			typedef std::future<DescribeKeyPairsOutcome> DescribeKeyPairsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeKeyPairsRequest&, const DescribeKeyPairsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyPairsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerAttributeResult> DescribeLoadBalancerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerAttributeOutcome> DescribeLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeLoadBalancerAttributeRequest&, const DescribeLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerHTTPListenerAttributeResult> DescribeLoadBalancerHTTPListenerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerHTTPListenerAttributeOutcome> DescribeLoadBalancerHTTPListenerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeLoadBalancerHTTPListenerAttributeRequest&, const DescribeLoadBalancerHTTPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerHTTPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerHTTPSListenerAttributeResult> DescribeLoadBalancerHTTPSListenerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerHTTPSListenerAttributeOutcome> DescribeLoadBalancerHTTPSListenerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeLoadBalancerHTTPSListenerAttributeRequest&, const DescribeLoadBalancerHTTPSListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerHTTPSListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerListenMonitorResult> DescribeLoadBalancerListenMonitorOutcome;
			typedef std::future<DescribeLoadBalancerListenMonitorOutcome> DescribeLoadBalancerListenMonitorOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeLoadBalancerListenMonitorRequest&, const DescribeLoadBalancerListenMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerListenMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerListenersResult> DescribeLoadBalancerListenersOutcome;
			typedef std::future<DescribeLoadBalancerListenersOutcome> DescribeLoadBalancerListenersOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeLoadBalancerListenersRequest&, const DescribeLoadBalancerListenersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerListenersAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerSpecResult> DescribeLoadBalancerSpecOutcome;
			typedef std::future<DescribeLoadBalancerSpecOutcome> DescribeLoadBalancerSpecOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeLoadBalancerSpecRequest&, const DescribeLoadBalancerSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerSpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerTCPListenerAttributeResult> DescribeLoadBalancerTCPListenerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerTCPListenerAttributeOutcome> DescribeLoadBalancerTCPListenerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeLoadBalancerTCPListenerAttributeRequest&, const DescribeLoadBalancerTCPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerTCPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerUDPListenerAttributeResult> DescribeLoadBalancerUDPListenerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerUDPListenerAttributeOutcome> DescribeLoadBalancerUDPListenerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeLoadBalancerUDPListenerAttributeRequest&, const DescribeLoadBalancerUDPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerUDPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancersResult> DescribeLoadBalancersOutcome;
			typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeLoadBalancersRequest&, const DescribeLoadBalancersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
			typedef Outcome<Error, Model::DescribeMeasurementDataResult> DescribeMeasurementDataOutcome;
			typedef std::future<DescribeMeasurementDataOutcome> DescribeMeasurementDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeMeasurementDataRequest&, const DescribeMeasurementDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMeasurementDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeMountTargetsResult> DescribeMountTargetsOutcome;
			typedef std::future<DescribeMountTargetsOutcome> DescribeMountTargetsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeMountTargetsRequest&, const DescribeMountTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMountTargetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNCInformationResult> DescribeNCInformationOutcome;
			typedef std::future<DescribeNCInformationOutcome> DescribeNCInformationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeNCInformationRequest&, const DescribeNCInformationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNCInformationAsyncHandler;
			typedef Outcome<Error, Model::DescribeNatGatewaysResult> DescribeNatGatewaysOutcome;
			typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeNatGatewaysRequest&, const DescribeNatGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkAclsResult> DescribeNetworkAclsOutcome;
			typedef std::future<DescribeNetworkAclsOutcome> DescribeNetworkAclsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeNetworkAclsRequest&, const DescribeNetworkAclsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAclsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkAttributeResult> DescribeNetworkAttributeOutcome;
			typedef std::future<DescribeNetworkAttributeOutcome> DescribeNetworkAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeNetworkAttributeRequest&, const DescribeNetworkAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkInterfacesResult> DescribeNetworkInterfacesOutcome;
			typedef std::future<DescribeNetworkInterfacesOutcome> DescribeNetworkInterfacesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeNetworkInterfacesRequest&, const DescribeNetworkInterfacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfacesAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworksResult> DescribeNetworksOutcome;
			typedef std::future<DescribeNetworksOutcome> DescribeNetworksOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeNetworksRequest&, const DescribeNetworksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworksAsyncHandler;
			typedef Outcome<Error, Model::DescribePrePaidInstanceStockResult> DescribePrePaidInstanceStockOutcome;
			typedef std::future<DescribePrePaidInstanceStockOutcome> DescribePrePaidInstanceStockOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribePrePaidInstanceStockRequest&, const DescribePrePaidInstanceStockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrePaidInstanceStockAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionIspsResult> DescribeRegionIspsOutcome;
			typedef std::future<DescribeRegionIspsOutcome> DescribeRegionIspsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeRegionIspsRequest&, const DescribeRegionIspsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionIspsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionResourceResult> DescribeRegionResourceOutcome;
			typedef std::future<DescribeRegionResourceOutcome> DescribeRegionResourceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeRegionResourceRequest&, const DescribeRegionResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeReservedResourceResult> DescribeReservedResourceOutcome;
			typedef std::future<DescribeReservedResourceOutcome> DescribeReservedResourceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeReservedResourceRequest&, const DescribeReservedResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceTimelineResult> DescribeResourceTimelineOutcome;
			typedef std::future<DescribeResourceTimelineOutcome> DescribeResourceTimelineOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeResourceTimelineRequest&, const DescribeResourceTimelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTimelineAsyncHandler;
			typedef Outcome<Error, Model::DescribeSDGResult> DescribeSDGOutcome;
			typedef std::future<DescribeSDGOutcome> DescribeSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSDGRequest&, const DescribeSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSDGAsyncHandler;
			typedef Outcome<Error, Model::DescribeSDGDeploymentStatusResult> DescribeSDGDeploymentStatusOutcome;
			typedef std::future<DescribeSDGDeploymentStatusOutcome> DescribeSDGDeploymentStatusOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSDGDeploymentStatusRequest&, const DescribeSDGDeploymentStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSDGDeploymentStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSDGsResult> DescribeSDGsOutcome;
			typedef std::future<DescribeSDGsOutcome> DescribeSDGsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSDGsRequest&, const DescribeSDGsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSDGsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecondaryPublicIpAddressesResult> DescribeSecondaryPublicIpAddressesOutcome;
			typedef std::future<DescribeSecondaryPublicIpAddressesOutcome> DescribeSecondaryPublicIpAddressesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSecondaryPublicIpAddressesRequest&, const DescribeSecondaryPublicIpAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecondaryPublicIpAddressesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupAttributeResult> DescribeSecurityGroupAttributeOutcome;
			typedef std::future<DescribeSecurityGroupAttributeOutcome> DescribeSecurityGroupAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSecurityGroupAttributeRequest&, const DescribeSecurityGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupsResult> DescribeSecurityGroupsOutcome;
			typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSecurityGroupsRequest&, const DescribeSecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSelfImagesResult> DescribeSelfImagesOutcome;
			typedef std::future<DescribeSelfImagesOutcome> DescribeSelfImagesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSelfImagesRequest&, const DescribeSelfImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSelfImagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeServcieScheduleResult> DescribeServcieScheduleOutcome;
			typedef std::future<DescribeServcieScheduleOutcome> DescribeServcieScheduleOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeServcieScheduleRequest&, const DescribeServcieScheduleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServcieScheduleAsyncHandler;
			typedef Outcome<Error, Model::DescribeServerLoadBalancerListenMonitorResult> DescribeServerLoadBalancerListenMonitorOutcome;
			typedef std::future<DescribeServerLoadBalancerListenMonitorOutcome> DescribeServerLoadBalancerListenMonitorOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeServerLoadBalancerListenMonitorRequest&, const DescribeServerLoadBalancerListenMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerLoadBalancerListenMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeServerLoadBalancerMonitorResult> DescribeServerLoadBalancerMonitorOutcome;
			typedef std::future<DescribeServerLoadBalancerMonitorOutcome> DescribeServerLoadBalancerMonitorOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeServerLoadBalancerMonitorRequest&, const DescribeServerLoadBalancerMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerLoadBalancerMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnapshotsResult> DescribeSnapshotsOutcome;
			typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSnapshotsRequest&, const DescribeSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnatAttributeResult> DescribeSnatAttributeOutcome;
			typedef std::future<DescribeSnatAttributeOutcome> DescribeSnatAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSnatAttributeRequest&, const DescribeSnatAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnatAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnatTableEntriesResult> DescribeSnatTableEntriesOutcome;
			typedef std::future<DescribeSnatTableEntriesOutcome> DescribeSnatTableEntriesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSnatTableEntriesRequest&, const DescribeSnatTableEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnatTableEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeStorageGatewayResult> DescribeStorageGatewayOutcome;
			typedef std::future<DescribeStorageGatewayOutcome> DescribeStorageGatewayOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeStorageGatewayRequest&, const DescribeStorageGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeStorageVolumeResult> DescribeStorageVolumeOutcome;
			typedef std::future<DescribeStorageVolumeOutcome> DescribeStorageVolumeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeStorageVolumeRequest&, const DescribeStorageVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageVolumeAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserBandWidthDataResult> DescribeUserBandWidthDataOutcome;
			typedef std::future<DescribeUserBandWidthDataOutcome> DescribeUserBandWidthDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeUserBandWidthDataRequest&, const DescribeUserBandWidthDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBandWidthDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchAttributesResult> DescribeVSwitchAttributesOutcome;
			typedef std::future<DescribeVSwitchAttributesOutcome> DescribeVSwitchAttributesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeVSwitchAttributesRequest&, const DescribeVSwitchAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchAttributesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchesResult> DescribeVSwitchesOutcome;
			typedef std::future<DescribeVSwitchesOutcome> DescribeVSwitchesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeVSwitchesRequest&, const DescribeVSwitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchesAsyncHandler;
			typedef Outcome<Error, Model::DetachDiskResult> DetachDiskOutcome;
			typedef std::future<DetachDiskOutcome> DetachDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DetachDiskRequest&, const DetachDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachDiskAsyncHandler;
			typedef Outcome<Error, Model::DetachInstanceSDGResult> DetachInstanceSDGOutcome;
			typedef std::future<DetachInstanceSDGOutcome> DetachInstanceSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DetachInstanceSDGRequest&, const DetachInstanceSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachInstanceSDGAsyncHandler;
			typedef Outcome<Error, Model::DetachNetworkInterfaceResult> DetachNetworkInterfaceOutcome;
			typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DetachNetworkInterfaceRequest&, const DetachNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DistApplicationDataResult> DistApplicationDataOutcome;
			typedef std::future<DistApplicationDataOutcome> DistApplicationDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DistApplicationDataRequest&, const DistApplicationDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DistApplicationDataAsyncHandler;
			typedef Outcome<Error, Model::ExportBillDetailDataResult> ExportBillDetailDataOutcome;
			typedef std::future<ExportBillDetailDataOutcome> ExportBillDetailDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ExportBillDetailDataRequest&, const ExportBillDetailDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportBillDetailDataAsyncHandler;
			typedef Outcome<Error, Model::ExportImageResult> ExportImageOutcome;
			typedef std::future<ExportImageOutcome> ExportImageOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ExportImageRequest&, const ExportImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportImageAsyncHandler;
			typedef Outcome<Error, Model::ExportMeasurementDataResult> ExportMeasurementDataOutcome;
			typedef std::future<ExportMeasurementDataOutcome> ExportMeasurementDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ExportMeasurementDataRequest&, const ExportMeasurementDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportMeasurementDataAsyncHandler;
			typedef Outcome<Error, Model::GetBucketAclResult> GetBucketAclOutcome;
			typedef std::future<GetBucketAclOutcome> GetBucketAclOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::GetBucketAclRequest&, const GetBucketAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBucketAclAsyncHandler;
			typedef Outcome<Error, Model::GetBucketInfoResult> GetBucketInfoOutcome;
			typedef std::future<GetBucketInfoOutcome> GetBucketInfoOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::GetBucketInfoRequest&, const GetBucketInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBucketInfoAsyncHandler;
			typedef Outcome<Error, Model::GetBucketLifecycleResult> GetBucketLifecycleOutcome;
			typedef std::future<GetBucketLifecycleOutcome> GetBucketLifecycleOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::GetBucketLifecycleRequest&, const GetBucketLifecycleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBucketLifecycleAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceInternetPortResult> GetDeviceInternetPortOutcome;
			typedef std::future<GetDeviceInternetPortOutcome> GetDeviceInternetPortOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::GetDeviceInternetPortRequest&, const GetDeviceInternetPortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceInternetPortAsyncHandler;
			typedef Outcome<Error, Model::GetOssStorageAndAccByBucketsResult> GetOssStorageAndAccByBucketsOutcome;
			typedef std::future<GetOssStorageAndAccByBucketsOutcome> GetOssStorageAndAccByBucketsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::GetOssStorageAndAccByBucketsRequest&, const GetOssStorageAndAccByBucketsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOssStorageAndAccByBucketsAsyncHandler;
			typedef Outcome<Error, Model::GetOssUsageDataResult> GetOssUsageDataOutcome;
			typedef std::future<GetOssUsageDataOutcome> GetOssUsageDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::GetOssUsageDataRequest&, const GetOssUsageDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOssUsageDataAsyncHandler;
			typedef Outcome<Error, Model::ImportKeyPairResult> ImportKeyPairOutcome;
			typedef std::future<ImportKeyPairOutcome> ImportKeyPairOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ImportKeyPairRequest&, const ImportKeyPairOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyPairAsyncHandler;
			typedef Outcome<Error, Model::JoinPublicIpsToEpnInstanceResult> JoinPublicIpsToEpnInstanceOutcome;
			typedef std::future<JoinPublicIpsToEpnInstanceOutcome> JoinPublicIpsToEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::JoinPublicIpsToEpnInstanceRequest&, const JoinPublicIpsToEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinPublicIpsToEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::JoinSecurityGroupResult> JoinSecurityGroupOutcome;
			typedef std::future<JoinSecurityGroupOutcome> JoinSecurityGroupOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::JoinSecurityGroupRequest&, const JoinSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::JoinVSwitchesToEpnInstanceResult> JoinVSwitchesToEpnInstanceOutcome;
			typedef std::future<JoinVSwitchesToEpnInstanceOutcome> JoinVSwitchesToEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::JoinVSwitchesToEpnInstanceRequest&, const JoinVSwitchesToEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinVSwitchesToEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::LeaveSecurityGroupResult> LeaveSecurityGroupOutcome;
			typedef std::future<LeaveSecurityGroupOutcome> LeaveSecurityGroupOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::LeaveSecurityGroupRequest&, const LeaveSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LeaveSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsResult> ListApplicationsOutcome;
			typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ListApplicationsRequest&, const ListApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListBucketsResult> ListBucketsOutcome;
			typedef std::future<ListBucketsOutcome> ListBucketsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ListBucketsRequest&, const ListBucketsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBucketsAsyncHandler;
			typedef Outcome<Error, Model::ListObjectsResult> ListObjectsOutcome;
			typedef std::future<ListObjectsOutcome> ListObjectsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ListObjectsRequest&, const ListObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListObjectsAsyncHandler;
			typedef Outcome<Error, Model::ListProductAbilitiesResult> ListProductAbilitiesOutcome;
			typedef std::future<ListProductAbilitiesOutcome> ListProductAbilitiesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ListProductAbilitiesRequest&, const ListProductAbilitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductAbilitiesAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyEnsEipAddressAttributeResult> ModifyEnsEipAddressAttributeOutcome;
			typedef std::future<ModifyEnsEipAddressAttributeOutcome> ModifyEnsEipAddressAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyEnsEipAddressAttributeRequest&, const ModifyEnsEipAddressAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnsEipAddressAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyEnsRouteEntryResult> ModifyEnsRouteEntryOutcome;
			typedef std::future<ModifyEnsRouteEntryOutcome> ModifyEnsRouteEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyEnsRouteEntryRequest&, const ModifyEnsRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnsRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::ModifyEpnInstanceResult> ModifyEpnInstanceOutcome;
			typedef std::future<ModifyEpnInstanceOutcome> ModifyEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyEpnInstanceRequest&, const ModifyEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyFileSystemResult> ModifyFileSystemOutcome;
			typedef std::future<ModifyFileSystemOutcome> ModifyFileSystemOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyFileSystemRequest&, const ModifyFileSystemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileSystemAsyncHandler;
			typedef Outcome<Error, Model::ModifyForwardEntryResult> ModifyForwardEntryOutcome;
			typedef std::future<ModifyForwardEntryOutcome> ModifyForwardEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyForwardEntryRequest&, const ModifyForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::ModifyHaVipAttributeResult> ModifyHaVipAttributeOutcome;
			typedef std::future<ModifyHaVipAttributeOutcome> ModifyHaVipAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyHaVipAttributeRequest&, const ModifyHaVipAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHaVipAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyImageAttributeResult> ModifyImageAttributeOutcome;
			typedef std::future<ModifyImageAttributeOutcome> ModifyImageAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyImageAttributeRequest&, const ModifyImageAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyImageSharePermissionResult> ModifyImageSharePermissionOutcome;
			typedef std::future<ModifyImageSharePermissionOutcome> ModifyImageSharePermissionOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyImageSharePermissionRequest&, const ModifyImageSharePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSharePermissionAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAttributeResult> ModifyInstanceAttributeOutcome;
			typedef std::future<ModifyInstanceAttributeOutcome> ModifyInstanceAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyInstanceAttributeRequest&, const ModifyInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAutoRenewAttributeResult> ModifyInstanceAutoRenewAttributeOutcome;
			typedef std::future<ModifyInstanceAutoRenewAttributeOutcome> ModifyInstanceAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyInstanceAutoRenewAttributeRequest&, const ModifyInstanceAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceBootConfigurationResult> ModifyInstanceBootConfigurationOutcome;
			typedef std::future<ModifyInstanceBootConfigurationOutcome> ModifyInstanceBootConfigurationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyInstanceBootConfigurationRequest&, const ModifyInstanceBootConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceBootConfigurationAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceChargeTypeResult> ModifyInstanceChargeTypeOutcome;
			typedef std::future<ModifyInstanceChargeTypeOutcome> ModifyInstanceChargeTypeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyInstanceChargeTypeRequest&, const ModifyInstanceChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoadBalancerAttributeResult> ModifyLoadBalancerAttributeOutcome;
			typedef std::future<ModifyLoadBalancerAttributeOutcome> ModifyLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyLoadBalancerAttributeRequest&, const ModifyLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyNetworkAttributeResult> ModifyNetworkAttributeOutcome;
			typedef std::future<ModifyNetworkAttributeOutcome> ModifyNetworkAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyNetworkAttributeRequest&, const ModifyNetworkAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyNetworkInterfaceAttributeResult> ModifyNetworkInterfaceAttributeOutcome;
			typedef std::future<ModifyNetworkInterfaceAttributeOutcome> ModifyNetworkInterfaceAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyNetworkInterfaceAttributeRequest&, const ModifyNetworkInterfaceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkInterfaceAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyPrepayInstanceSpecResult> ModifyPrepayInstanceSpecOutcome;
			typedef std::future<ModifyPrepayInstanceSpecOutcome> ModifyPrepayInstanceSpecOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyPrepayInstanceSpecRequest&, const ModifyPrepayInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrepayInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupAttributeResult> ModifySecurityGroupAttributeOutcome;
			typedef std::future<ModifySecurityGroupAttributeOutcome> ModifySecurityGroupAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifySecurityGroupAttributeRequest&, const ModifySecurityGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifySnapshotAttributeResult> ModifySnapshotAttributeOutcome;
			typedef std::future<ModifySnapshotAttributeOutcome> ModifySnapshotAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifySnapshotAttributeRequest&, const ModifySnapshotAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifySnatEntryResult> ModifySnatEntryOutcome;
			typedef std::future<ModifySnatEntryOutcome> ModifySnatEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifySnatEntryRequest&, const ModifySnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnatEntryAsyncHandler;
			typedef Outcome<Error, Model::ModifyVSwitchAttributeResult> ModifyVSwitchAttributeOutcome;
			typedef std::future<ModifyVSwitchAttributeOutcome> ModifyVSwitchAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyVSwitchAttributeRequest&, const ModifyVSwitchAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVSwitchAttributeAsyncHandler;
			typedef Outcome<Error, Model::MountInstanceSDGResult> MountInstanceSDGOutcome;
			typedef std::future<MountInstanceSDGOutcome> MountInstanceSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::MountInstanceSDGRequest&, const MountInstanceSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MountInstanceSDGAsyncHandler;
			typedef Outcome<Error, Model::PreloadRegionSDGResult> PreloadRegionSDGOutcome;
			typedef std::future<PreloadRegionSDGOutcome> PreloadRegionSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::PreloadRegionSDGRequest&, const PreloadRegionSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreloadRegionSDGAsyncHandler;
			typedef Outcome<Error, Model::PrepareUploadResult> PrepareUploadOutcome;
			typedef std::future<PrepareUploadOutcome> PrepareUploadOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::PrepareUploadRequest&, const PrepareUploadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PrepareUploadAsyncHandler;
			typedef Outcome<Error, Model::PushApplicationDataResult> PushApplicationDataOutcome;
			typedef std::future<PushApplicationDataOutcome> PushApplicationDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::PushApplicationDataRequest&, const PushApplicationDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushApplicationDataAsyncHandler;
			typedef Outcome<Error, Model::PutBucketResult> PutBucketOutcome;
			typedef std::future<PutBucketOutcome> PutBucketOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::PutBucketRequest&, const PutBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutBucketAsyncHandler;
			typedef Outcome<Error, Model::PutBucketAclResult> PutBucketAclOutcome;
			typedef std::future<PutBucketAclOutcome> PutBucketAclOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::PutBucketAclRequest&, const PutBucketAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutBucketAclAsyncHandler;
			typedef Outcome<Error, Model::PutBucketLifecycleResult> PutBucketLifecycleOutcome;
			typedef std::future<PutBucketLifecycleOutcome> PutBucketLifecycleOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::PutBucketLifecycleRequest&, const PutBucketLifecycleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutBucketLifecycleAsyncHandler;
			typedef Outcome<Error, Model::ReInitDiskResult> ReInitDiskOutcome;
			typedef std::future<ReInitDiskOutcome> ReInitDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ReInitDiskRequest&, const ReInitDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReInitDiskAsyncHandler;
			typedef Outcome<Error, Model::RebootAICInstanceResult> RebootAICInstanceOutcome;
			typedef std::future<RebootAICInstanceOutcome> RebootAICInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RebootAICInstanceRequest&, const RebootAICInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootAICInstanceAsyncHandler;
			typedef Outcome<Error, Model::RebootARMServerInstanceResult> RebootARMServerInstanceOutcome;
			typedef std::future<RebootARMServerInstanceOutcome> RebootARMServerInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RebootARMServerInstanceRequest&, const RebootARMServerInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootARMServerInstanceAsyncHandler;
			typedef Outcome<Error, Model::RebootInstanceResult> RebootInstanceOutcome;
			typedef std::future<RebootInstanceOutcome> RebootInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RebootInstanceRequest&, const RebootInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstanceAsyncHandler;
			typedef Outcome<Error, Model::RebootInstancesResult> RebootInstancesOutcome;
			typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RebootInstancesRequest&, const RebootInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
			typedef Outcome<Error, Model::RecoverAICInstanceResult> RecoverAICInstanceOutcome;
			typedef std::future<RecoverAICInstanceOutcome> RecoverAICInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RecoverAICInstanceRequest&, const RecoverAICInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecoverAICInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReinitInstanceResult> ReinitInstanceOutcome;
			typedef std::future<ReinitInstanceOutcome> ReinitInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ReinitInstanceRequest&, const ReinitInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReinitInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReinitInstancesResult> ReinitInstancesOutcome;
			typedef std::future<ReinitInstancesOutcome> ReinitInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ReinitInstancesRequest&, const ReinitInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReinitInstancesAsyncHandler;
			typedef Outcome<Error, Model::ReleaseAICInstanceResult> ReleaseAICInstanceOutcome;
			typedef std::future<ReleaseAICInstanceOutcome> ReleaseAICInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ReleaseAICInstanceRequest&, const ReleaseAICInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseAICInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseARMServerInstanceResult> ReleaseARMServerInstanceOutcome;
			typedef std::future<ReleaseARMServerInstanceOutcome> ReleaseARMServerInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ReleaseARMServerInstanceRequest&, const ReleaseARMServerInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseARMServerInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleasePostPaidInstanceResult> ReleasePostPaidInstanceOutcome;
			typedef std::future<ReleasePostPaidInstanceOutcome> ReleasePostPaidInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ReleasePostPaidInstanceRequest&, const ReleasePostPaidInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePostPaidInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleasePrePaidInstanceResult> ReleasePrePaidInstanceOutcome;
			typedef std::future<ReleasePrePaidInstanceOutcome> ReleasePrePaidInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ReleasePrePaidInstanceRequest&, const ReleasePrePaidInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePrePaidInstanceAsyncHandler;
			typedef Outcome<Error, Model::RemoveBackendServersResult> RemoveBackendServersOutcome;
			typedef std::future<RemoveBackendServersOutcome> RemoveBackendServersOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RemoveBackendServersRequest&, const RemoveBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBackendServersAsyncHandler;
			typedef Outcome<Error, Model::RemoveInstanceSDGResult> RemoveInstanceSDGOutcome;
			typedef std::future<RemoveInstanceSDGOutcome> RemoveInstanceSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RemoveInstanceSDGRequest&, const RemoveInstanceSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstanceSDGAsyncHandler;
			typedef Outcome<Error, Model::RemovePublicIpsFromEpnInstanceResult> RemovePublicIpsFromEpnInstanceOutcome;
			typedef std::future<RemovePublicIpsFromEpnInstanceOutcome> RemovePublicIpsFromEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RemovePublicIpsFromEpnInstanceRequest&, const RemovePublicIpsFromEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePublicIpsFromEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::RemoveSDGResult> RemoveSDGOutcome;
			typedef std::future<RemoveSDGOutcome> RemoveSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RemoveSDGRequest&, const RemoveSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveSDGAsyncHandler;
			typedef Outcome<Error, Model::RemoveVSwitchesFromEpnInstanceResult> RemoveVSwitchesFromEpnInstanceOutcome;
			typedef std::future<RemoveVSwitchesFromEpnInstanceOutcome> RemoveVSwitchesFromEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RemoveVSwitchesFromEpnInstanceRequest&, const RemoveVSwitchesFromEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveVSwitchesFromEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewARMServerInstanceResult> RenewARMServerInstanceOutcome;
			typedef std::future<RenewARMServerInstanceOutcome> RenewARMServerInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RenewARMServerInstanceRequest&, const RenewARMServerInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewARMServerInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::RescaleApplicationResult> RescaleApplicationOutcome;
			typedef std::future<RescaleApplicationOutcome> RescaleApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RescaleApplicationRequest&, const RescaleApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RescaleApplicationAsyncHandler;
			typedef Outcome<Error, Model::RescaleDeviceServiceResult> RescaleDeviceServiceOutcome;
			typedef std::future<RescaleDeviceServiceOutcome> RescaleDeviceServiceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RescaleDeviceServiceRequest&, const RescaleDeviceServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RescaleDeviceServiceAsyncHandler;
			typedef Outcome<Error, Model::ResetAICInstanceResult> ResetAICInstanceOutcome;
			typedef std::future<ResetAICInstanceOutcome> ResetAICInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ResetAICInstanceRequest&, const ResetAICInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAICInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResetDeviceInstanceResult> ResetDeviceInstanceOutcome;
			typedef std::future<ResetDeviceInstanceOutcome> ResetDeviceInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ResetDeviceInstanceRequest&, const ResetDeviceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetDeviceInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResetDiskResult> ResetDiskOutcome;
			typedef std::future<ResetDiskOutcome> ResetDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ResetDiskRequest&, const ResetDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetDiskAsyncHandler;
			typedef Outcome<Error, Model::ResizeDiskResult> ResizeDiskOutcome;
			typedef std::future<ResizeDiskOutcome> ResizeDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ResizeDiskRequest&, const ResizeDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskAsyncHandler;
			typedef Outcome<Error, Model::RestartDeviceInstanceResult> RestartDeviceInstanceOutcome;
			typedef std::future<RestartDeviceInstanceOutcome> RestartDeviceInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RestartDeviceInstanceRequest&, const RestartDeviceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDeviceInstanceAsyncHandler;
			typedef Outcome<Error, Model::RevokeSecurityGroupResult> RevokeSecurityGroupOutcome;
			typedef std::future<RevokeSecurityGroupOutcome> RevokeSecurityGroupOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RevokeSecurityGroupRequest&, const RevokeSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::RevokeSecurityGroupEgressResult> RevokeSecurityGroupEgressOutcome;
			typedef std::future<RevokeSecurityGroupEgressOutcome> RevokeSecurityGroupEgressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RevokeSecurityGroupEgressRequest&, const RevokeSecurityGroupEgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeSecurityGroupEgressAsyncHandler;
			typedef Outcome<Error, Model::RollbackApplicationResult> RollbackApplicationOutcome;
			typedef std::future<RollbackApplicationOutcome> RollbackApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RollbackApplicationRequest&, const RollbackApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackApplicationAsyncHandler;
			typedef Outcome<Error, Model::RunInstancesResult> RunInstancesOutcome;
			typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RunInstancesRequest&, const RunInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunInstancesAsyncHandler;
			typedef Outcome<Error, Model::RunServiceScheduleResult> RunServiceScheduleOutcome;
			typedef std::future<RunServiceScheduleOutcome> RunServiceScheduleOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RunServiceScheduleRequest&, const RunServiceScheduleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunServiceScheduleAsyncHandler;
			typedef Outcome<Error, Model::SaveSDGResult> SaveSDGOutcome;
			typedef std::future<SaveSDGOutcome> SaveSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::SaveSDGRequest&, const SaveSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSDGAsyncHandler;
			typedef Outcome<Error, Model::SetBackendServersResult> SetBackendServersOutcome;
			typedef std::future<SetBackendServersOutcome> SetBackendServersOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::SetBackendServersRequest&, const SetBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetBackendServersAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerHTTPListenerAttributeResult> SetLoadBalancerHTTPListenerAttributeOutcome;
			typedef std::future<SetLoadBalancerHTTPListenerAttributeOutcome> SetLoadBalancerHTTPListenerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::SetLoadBalancerHTTPListenerAttributeRequest&, const SetLoadBalancerHTTPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerHTTPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerHTTPSListenerAttributeResult> SetLoadBalancerHTTPSListenerAttributeOutcome;
			typedef std::future<SetLoadBalancerHTTPSListenerAttributeOutcome> SetLoadBalancerHTTPSListenerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::SetLoadBalancerHTTPSListenerAttributeRequest&, const SetLoadBalancerHTTPSListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerHTTPSListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerStatusResult> SetLoadBalancerStatusOutcome;
			typedef std::future<SetLoadBalancerStatusOutcome> SetLoadBalancerStatusOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::SetLoadBalancerStatusRequest&, const SetLoadBalancerStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerStatusAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerTCPListenerAttributeResult> SetLoadBalancerTCPListenerAttributeOutcome;
			typedef std::future<SetLoadBalancerTCPListenerAttributeOutcome> SetLoadBalancerTCPListenerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::SetLoadBalancerTCPListenerAttributeRequest&, const SetLoadBalancerTCPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerTCPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerUDPListenerAttributeResult> SetLoadBalancerUDPListenerAttributeOutcome;
			typedef std::future<SetLoadBalancerUDPListenerAttributeOutcome> SetLoadBalancerUDPListenerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::SetLoadBalancerUDPListenerAttributeRequest&, const SetLoadBalancerUDPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerUDPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::StartEpnInstanceResult> StartEpnInstanceOutcome;
			typedef std::future<StartEpnInstanceOutcome> StartEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StartEpnInstanceRequest&, const StartEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartInstanceResult> StartInstanceOutcome;
			typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StartInstanceRequest&, const StartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartInstancesResult> StartInstancesOutcome;
			typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StartInstancesRequest&, const StartInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartInstancesAsyncHandler;
			typedef Outcome<Error, Model::StartLoadBalancerListenerResult> StartLoadBalancerListenerOutcome;
			typedef std::future<StartLoadBalancerListenerOutcome> StartLoadBalancerListenerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StartLoadBalancerListenerRequest&, const StartLoadBalancerListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLoadBalancerListenerAsyncHandler;
			typedef Outcome<Error, Model::StartSnatIpForSnatEntryResult> StartSnatIpForSnatEntryOutcome;
			typedef std::future<StartSnatIpForSnatEntryOutcome> StartSnatIpForSnatEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StartSnatIpForSnatEntryRequest&, const StartSnatIpForSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartSnatIpForSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::StopEpnInstanceResult> StopEpnInstanceOutcome;
			typedef std::future<StopEpnInstanceOutcome> StopEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StopEpnInstanceRequest&, const StopEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopInstancesResult> StopInstancesOutcome;
			typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StopInstancesRequest&, const StopInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstancesAsyncHandler;
			typedef Outcome<Error, Model::StopLoadBalancerListenerResult> StopLoadBalancerListenerOutcome;
			typedef std::future<StopLoadBalancerListenerOutcome> StopLoadBalancerListenerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StopLoadBalancerListenerRequest&, const StopLoadBalancerListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLoadBalancerListenerAsyncHandler;
			typedef Outcome<Error, Model::StopSnatIpForSnatEntryResult> StopSnatIpForSnatEntryOutcome;
			typedef std::future<StopSnatIpForSnatEntryOutcome> StopSnatIpForSnatEntryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StopSnatIpForSnatEntryRequest&, const StopSnatIpForSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopSnatIpForSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnAssociateEnsEipAddressResult> UnAssociateEnsEipAddressOutcome;
			typedef std::future<UnAssociateEnsEipAddressOutcome> UnAssociateEnsEipAddressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UnAssociateEnsEipAddressRequest&, const UnAssociateEnsEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnAssociateEnsEipAddressAsyncHandler;
			typedef Outcome<Error, Model::UnassignPrivateIpAddressesResult> UnassignPrivateIpAddressesOutcome;
			typedef std::future<UnassignPrivateIpAddressesOutcome> UnassignPrivateIpAddressesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UnassignPrivateIpAddressesRequest&, const UnassignPrivateIpAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassignPrivateIpAddressesAsyncHandler;
			typedef Outcome<Error, Model::UnassociateHaVipResult> UnassociateHaVipOutcome;
			typedef std::future<UnassociateHaVipOutcome> UnassociateHaVipOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UnassociateHaVipRequest&, const UnassociateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateHaVipAsyncHandler;
			typedef Outcome<Error, Model::UnassociateNetworkAclResult> UnassociateNetworkAclOutcome;
			typedef std::future<UnassociateNetworkAclOutcome> UnassociateNetworkAclOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UnassociateNetworkAclRequest&, const UnassociateNetworkAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateNetworkAclAsyncHandler;
			typedef Outcome<Error, Model::UnloadRegionSDGResult> UnloadRegionSDGOutcome;
			typedef std::future<UnloadRegionSDGOutcome> UnloadRegionSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UnloadRegionSDGRequest&, const UnloadRegionSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnloadRegionSDGAsyncHandler;
			typedef Outcome<Error, Model::UnmountInstanceSDGResult> UnmountInstanceSDGOutcome;
			typedef std::future<UnmountInstanceSDGOutcome> UnmountInstanceSDGOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UnmountInstanceSDGRequest&, const UnmountInstanceSDGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnmountInstanceSDGAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateEnsSaleControlResult> UpdateEnsSaleControlOutcome;
			typedef std::future<UpdateEnsSaleControlOutcome> UpdateEnsSaleControlOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UpdateEnsSaleControlRequest&, const UpdateEnsSaleControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnsSaleControlAsyncHandler;
			typedef Outcome<Error, Model::UpgradeAICInstanceImageResult> UpgradeAICInstanceImageOutcome;
			typedef std::future<UpgradeAICInstanceImageOutcome> UpgradeAICInstanceImageOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UpgradeAICInstanceImageRequest&, const UpgradeAICInstanceImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeAICInstanceImageAsyncHandler;
			typedef Outcome<Error, Model::UpgradeApplicationResult> UpgradeApplicationOutcome;
			typedef std::future<UpgradeApplicationOutcome> UpgradeApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UpgradeApplicationRequest&, const UpgradeApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeApplicationAsyncHandler;

			EnsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EnsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EnsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EnsClient();
			AccosicateNetworkAclOutcome accosicateNetworkAcl(const Model::AccosicateNetworkAclRequest &request)const;
			void accosicateNetworkAclAsync(const Model::AccosicateNetworkAclRequest& request, const AccosicateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AccosicateNetworkAclOutcomeCallable accosicateNetworkAclCallable(const Model::AccosicateNetworkAclRequest& request) const;
			AddBackendServersOutcome addBackendServers(const Model::AddBackendServersRequest &request)const;
			void addBackendServersAsync(const Model::AddBackendServersRequest& request, const AddBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBackendServersOutcomeCallable addBackendServersCallable(const Model::AddBackendServersRequest& request) const;
			AddDeviceInternetPortOutcome addDeviceInternetPort(const Model::AddDeviceInternetPortRequest &request)const;
			void addDeviceInternetPortAsync(const Model::AddDeviceInternetPortRequest& request, const AddDeviceInternetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDeviceInternetPortOutcomeCallable addDeviceInternetPortCallable(const Model::AddDeviceInternetPortRequest& request) const;
			AddNetworkInterfaceToInstanceOutcome addNetworkInterfaceToInstance(const Model::AddNetworkInterfaceToInstanceRequest &request)const;
			void addNetworkInterfaceToInstanceAsync(const Model::AddNetworkInterfaceToInstanceRequest& request, const AddNetworkInterfaceToInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddNetworkInterfaceToInstanceOutcomeCallable addNetworkInterfaceToInstanceCallable(const Model::AddNetworkInterfaceToInstanceRequest& request) const;
			AddSnatIpForSnatEntryOutcome addSnatIpForSnatEntry(const Model::AddSnatIpForSnatEntryRequest &request)const;
			void addSnatIpForSnatEntryAsync(const Model::AddSnatIpForSnatEntryRequest& request, const AddSnatIpForSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSnatIpForSnatEntryOutcomeCallable addSnatIpForSnatEntryCallable(const Model::AddSnatIpForSnatEntryRequest& request) const;
			AssignPrivateIpAddressesOutcome assignPrivateIpAddresses(const Model::AssignPrivateIpAddressesRequest &request)const;
			void assignPrivateIpAddressesAsync(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignPrivateIpAddressesOutcomeCallable assignPrivateIpAddressesCallable(const Model::AssignPrivateIpAddressesRequest& request) const;
			AssociateEnsEipAddressOutcome associateEnsEipAddress(const Model::AssociateEnsEipAddressRequest &request)const;
			void associateEnsEipAddressAsync(const Model::AssociateEnsEipAddressRequest& request, const AssociateEnsEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateEnsEipAddressOutcomeCallable associateEnsEipAddressCallable(const Model::AssociateEnsEipAddressRequest& request) const;
			AssociateHaVipOutcome associateHaVip(const Model::AssociateHaVipRequest &request)const;
			void associateHaVipAsync(const Model::AssociateHaVipRequest& request, const AssociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateHaVipOutcomeCallable associateHaVipCallable(const Model::AssociateHaVipRequest& request) const;
			AttachDiskOutcome attachDisk(const Model::AttachDiskRequest &request)const;
			void attachDiskAsync(const Model::AttachDiskRequest& request, const AttachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDiskOutcomeCallable attachDiskCallable(const Model::AttachDiskRequest& request) const;
			AttachEnsInstancesOutcome attachEnsInstances(const Model::AttachEnsInstancesRequest &request)const;
			void attachEnsInstancesAsync(const Model::AttachEnsInstancesRequest& request, const AttachEnsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachEnsInstancesOutcomeCallable attachEnsInstancesCallable(const Model::AttachEnsInstancesRequest& request) const;
			AttachInstanceSDGOutcome attachInstanceSDG(const Model::AttachInstanceSDGRequest &request)const;
			void attachInstanceSDGAsync(const Model::AttachInstanceSDGRequest& request, const AttachInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachInstanceSDGOutcomeCallable attachInstanceSDGCallable(const Model::AttachInstanceSDGRequest& request) const;
			AttachNetworkInterfaceOutcome attachNetworkInterface(const Model::AttachNetworkInterfaceRequest &request)const;
			void attachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachNetworkInterfaceOutcomeCallable attachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request) const;
			AuthorizeSecurityGroupOutcome authorizeSecurityGroup(const Model::AuthorizeSecurityGroupRequest &request)const;
			void authorizeSecurityGroupAsync(const Model::AuthorizeSecurityGroupRequest& request, const AuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeSecurityGroupOutcomeCallable authorizeSecurityGroupCallable(const Model::AuthorizeSecurityGroupRequest& request) const;
			AuthorizeSecurityGroupEgressOutcome authorizeSecurityGroupEgress(const Model::AuthorizeSecurityGroupEgressRequest &request)const;
			void authorizeSecurityGroupEgressAsync(const Model::AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeSecurityGroupEgressOutcomeCallable authorizeSecurityGroupEgressCallable(const Model::AuthorizeSecurityGroupEgressRequest& request) const;
			CleanDistDataOutcome cleanDistData(const Model::CleanDistDataRequest &request)const;
			void cleanDistDataAsync(const Model::CleanDistDataRequest& request, const CleanDistDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CleanDistDataOutcomeCallable cleanDistDataCallable(const Model::CleanDistDataRequest& request) const;
			CopySDGOutcome copySDG(const Model::CopySDGRequest &request)const;
			void copySDGAsync(const Model::CopySDGRequest& request, const CopySDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopySDGOutcomeCallable copySDGCallable(const Model::CopySDGRequest& request) const;
			CopySnapshotOutcome copySnapshot(const Model::CopySnapshotRequest &request)const;
			void copySnapshotAsync(const Model::CopySnapshotRequest& request, const CopySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopySnapshotOutcomeCallable copySnapshotCallable(const Model::CopySnapshotRequest& request) const;
			CreateARMServerInstancesOutcome createARMServerInstances(const Model::CreateARMServerInstancesRequest &request)const;
			void createARMServerInstancesAsync(const Model::CreateARMServerInstancesRequest& request, const CreateARMServerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateARMServerInstancesOutcomeCallable createARMServerInstancesCallable(const Model::CreateARMServerInstancesRequest& request) const;
			CreateApplicationOutcome createApplication(const Model::CreateApplicationRequest &request)const;
			void createApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationOutcomeCallable createApplicationCallable(const Model::CreateApplicationRequest& request) const;
			CreateClassicNetworkOutcome createClassicNetwork(const Model::CreateClassicNetworkRequest &request)const;
			void createClassicNetworkAsync(const Model::CreateClassicNetworkRequest& request, const CreateClassicNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClassicNetworkOutcomeCallable createClassicNetworkCallable(const Model::CreateClassicNetworkRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateDiskOutcome createDisk(const Model::CreateDiskRequest &request)const;
			void createDiskAsync(const Model::CreateDiskRequest& request, const CreateDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDiskOutcomeCallable createDiskCallable(const Model::CreateDiskRequest& request) const;
			CreateEipInstanceOutcome createEipInstance(const Model::CreateEipInstanceRequest &request)const;
			void createEipInstanceAsync(const Model::CreateEipInstanceRequest& request, const CreateEipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEipInstanceOutcomeCallable createEipInstanceCallable(const Model::CreateEipInstanceRequest& request) const;
			CreateEnsRouteEntryOutcome createEnsRouteEntry(const Model::CreateEnsRouteEntryRequest &request)const;
			void createEnsRouteEntryAsync(const Model::CreateEnsRouteEntryRequest& request, const CreateEnsRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnsRouteEntryOutcomeCallable createEnsRouteEntryCallable(const Model::CreateEnsRouteEntryRequest& request) const;
			CreateEnsSaleControlOutcome createEnsSaleControl(const Model::CreateEnsSaleControlRequest &request)const;
			void createEnsSaleControlAsync(const Model::CreateEnsSaleControlRequest& request, const CreateEnsSaleControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnsSaleControlOutcomeCallable createEnsSaleControlCallable(const Model::CreateEnsSaleControlRequest& request) const;
			CreateEnsServiceOutcome createEnsService(const Model::CreateEnsServiceRequest &request)const;
			void createEnsServiceAsync(const Model::CreateEnsServiceRequest& request, const CreateEnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnsServiceOutcomeCallable createEnsServiceCallable(const Model::CreateEnsServiceRequest& request) const;
			CreateEpnInstanceOutcome createEpnInstance(const Model::CreateEpnInstanceRequest &request)const;
			void createEpnInstanceAsync(const Model::CreateEpnInstanceRequest& request, const CreateEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEpnInstanceOutcomeCallable createEpnInstanceCallable(const Model::CreateEpnInstanceRequest& request) const;
			CreateFileSystemOutcome createFileSystem(const Model::CreateFileSystemRequest &request)const;
			void createFileSystemAsync(const Model::CreateFileSystemRequest& request, const CreateFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileSystemOutcomeCallable createFileSystemCallable(const Model::CreateFileSystemRequest& request) const;
			CreateForwardEntryOutcome createForwardEntry(const Model::CreateForwardEntryRequest &request)const;
			void createForwardEntryAsync(const Model::CreateForwardEntryRequest& request, const CreateForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateForwardEntryOutcomeCallable createForwardEntryCallable(const Model::CreateForwardEntryRequest& request) const;
			CreateHaVipOutcome createHaVip(const Model::CreateHaVipRequest &request)const;
			void createHaVipAsync(const Model::CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHaVipOutcomeCallable createHaVipCallable(const Model::CreateHaVipRequest& request) const;
			CreateImageOutcome createImage(const Model::CreateImageRequest &request)const;
			void createImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateImageOutcomeCallable createImageCallable(const Model::CreateImageRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateInstanceActiveOpsTaskOutcome createInstanceActiveOpsTask(const Model::CreateInstanceActiveOpsTaskRequest &request)const;
			void createInstanceActiveOpsTaskAsync(const Model::CreateInstanceActiveOpsTaskRequest& request, const CreateInstanceActiveOpsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceActiveOpsTaskOutcomeCallable createInstanceActiveOpsTaskCallable(const Model::CreateInstanceActiveOpsTaskRequest& request) const;
			CreateKeyPairOutcome createKeyPair(const Model::CreateKeyPairRequest &request)const;
			void createKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateKeyPairOutcomeCallable createKeyPairCallable(const Model::CreateKeyPairRequest& request) const;
			CreateLoadBalancerOutcome createLoadBalancer(const Model::CreateLoadBalancerRequest &request)const;
			void createLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerOutcomeCallable createLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;
			CreateLoadBalancerHTTPListenerOutcome createLoadBalancerHTTPListener(const Model::CreateLoadBalancerHTTPListenerRequest &request)const;
			void createLoadBalancerHTTPListenerAsync(const Model::CreateLoadBalancerHTTPListenerRequest& request, const CreateLoadBalancerHTTPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerHTTPListenerOutcomeCallable createLoadBalancerHTTPListenerCallable(const Model::CreateLoadBalancerHTTPListenerRequest& request) const;
			CreateLoadBalancerHTTPSListenerOutcome createLoadBalancerHTTPSListener(const Model::CreateLoadBalancerHTTPSListenerRequest &request)const;
			void createLoadBalancerHTTPSListenerAsync(const Model::CreateLoadBalancerHTTPSListenerRequest& request, const CreateLoadBalancerHTTPSListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerHTTPSListenerOutcomeCallable createLoadBalancerHTTPSListenerCallable(const Model::CreateLoadBalancerHTTPSListenerRequest& request) const;
			CreateLoadBalancerTCPListenerOutcome createLoadBalancerTCPListener(const Model::CreateLoadBalancerTCPListenerRequest &request)const;
			void createLoadBalancerTCPListenerAsync(const Model::CreateLoadBalancerTCPListenerRequest& request, const CreateLoadBalancerTCPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerTCPListenerOutcomeCallable createLoadBalancerTCPListenerCallable(const Model::CreateLoadBalancerTCPListenerRequest& request) const;
			CreateLoadBalancerUDPListenerOutcome createLoadBalancerUDPListener(const Model::CreateLoadBalancerUDPListenerRequest &request)const;
			void createLoadBalancerUDPListenerAsync(const Model::CreateLoadBalancerUDPListenerRequest& request, const CreateLoadBalancerUDPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerUDPListenerOutcomeCallable createLoadBalancerUDPListenerCallable(const Model::CreateLoadBalancerUDPListenerRequest& request) const;
			CreateMountTargetOutcome createMountTarget(const Model::CreateMountTargetRequest &request)const;
			void createMountTargetAsync(const Model::CreateMountTargetRequest& request, const CreateMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMountTargetOutcomeCallable createMountTargetCallable(const Model::CreateMountTargetRequest& request) const;
			CreateNatGatewayOutcome createNatGateway(const Model::CreateNatGatewayRequest &request)const;
			void createNatGatewayAsync(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNatGatewayOutcomeCallable createNatGatewayCallable(const Model::CreateNatGatewayRequest& request) const;
			CreateNetworkOutcome createNetwork(const Model::CreateNetworkRequest &request)const;
			void createNetworkAsync(const Model::CreateNetworkRequest& request, const CreateNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkOutcomeCallable createNetworkCallable(const Model::CreateNetworkRequest& request) const;
			CreateNetworkAclOutcome createNetworkAcl(const Model::CreateNetworkAclRequest &request)const;
			void createNetworkAclAsync(const Model::CreateNetworkAclRequest& request, const CreateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkAclOutcomeCallable createNetworkAclCallable(const Model::CreateNetworkAclRequest& request) const;
			CreateNetworkAclEntryOutcome createNetworkAclEntry(const Model::CreateNetworkAclEntryRequest &request)const;
			void createNetworkAclEntryAsync(const Model::CreateNetworkAclEntryRequest& request, const CreateNetworkAclEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkAclEntryOutcomeCallable createNetworkAclEntryCallable(const Model::CreateNetworkAclEntryRequest& request) const;
			CreateNetworkInterfaceOutcome createNetworkInterface(const Model::CreateNetworkInterfaceRequest &request)const;
			void createNetworkInterfaceAsync(const Model::CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkInterfaceOutcomeCallable createNetworkInterfaceCallable(const Model::CreateNetworkInterfaceRequest& request) const;
			CreateSDGOutcome createSDG(const Model::CreateSDGRequest &request)const;
			void createSDGAsync(const Model::CreateSDGRequest& request, const CreateSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSDGOutcomeCallable createSDGCallable(const Model::CreateSDGRequest& request) const;
			CreateSecurityGroupOutcome createSecurityGroup(const Model::CreateSecurityGroupRequest &request)const;
			void createSecurityGroupAsync(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecurityGroupOutcomeCallable createSecurityGroupCallable(const Model::CreateSecurityGroupRequest& request) const;
			CreateSnapshotOutcome createSnapshot(const Model::CreateSnapshotRequest &request)const;
			void createSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnapshotOutcomeCallable createSnapshotCallable(const Model::CreateSnapshotRequest& request) const;
			CreateSnatEntryOutcome createSnatEntry(const Model::CreateSnatEntryRequest &request)const;
			void createSnatEntryAsync(const Model::CreateSnatEntryRequest& request, const CreateSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnatEntryOutcomeCallable createSnatEntryCallable(const Model::CreateSnatEntryRequest& request) const;
			CreateStorageGatewayOutcome createStorageGateway(const Model::CreateStorageGatewayRequest &request)const;
			void createStorageGatewayAsync(const Model::CreateStorageGatewayRequest& request, const CreateStorageGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStorageGatewayOutcomeCallable createStorageGatewayCallable(const Model::CreateStorageGatewayRequest& request) const;
			CreateStorageVolumeOutcome createStorageVolume(const Model::CreateStorageVolumeRequest &request)const;
			void createStorageVolumeAsync(const Model::CreateStorageVolumeRequest& request, const CreateStorageVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStorageVolumeOutcomeCallable createStorageVolumeCallable(const Model::CreateStorageVolumeRequest& request) const;
			CreateVSwitchOutcome createVSwitch(const Model::CreateVSwitchRequest &request)const;
			void createVSwitchAsync(const Model::CreateVSwitchRequest& request, const CreateVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVSwitchOutcomeCallable createVSwitchCallable(const Model::CreateVSwitchRequest& request) const;
			DeleteApplicationOutcome deleteApplication(const Model::DeleteApplicationRequest &request)const;
			void deleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationOutcomeCallable deleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;
			DeleteBucketOutcome deleteBucket(const Model::DeleteBucketRequest &request)const;
			void deleteBucketAsync(const Model::DeleteBucketRequest& request, const DeleteBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBucketOutcomeCallable deleteBucketCallable(const Model::DeleteBucketRequest& request) const;
			DeleteBucketLifecycleOutcome deleteBucketLifecycle(const Model::DeleteBucketLifecycleRequest &request)const;
			void deleteBucketLifecycleAsync(const Model::DeleteBucketLifecycleRequest& request, const DeleteBucketLifecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBucketLifecycleOutcomeCallable deleteBucketLifecycleCallable(const Model::DeleteBucketLifecycleRequest& request) const;
			DeleteDeviceInternetPortOutcome deleteDeviceInternetPort(const Model::DeleteDeviceInternetPortRequest &request)const;
			void deleteDeviceInternetPortAsync(const Model::DeleteDeviceInternetPortRequest& request, const DeleteDeviceInternetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceInternetPortOutcomeCallable deleteDeviceInternetPortCallable(const Model::DeleteDeviceInternetPortRequest& request) const;
			DeleteDiskOutcome deleteDisk(const Model::DeleteDiskRequest &request)const;
			void deleteDiskAsync(const Model::DeleteDiskRequest& request, const DeleteDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDiskOutcomeCallable deleteDiskCallable(const Model::DeleteDiskRequest& request) const;
			DeleteEipOutcome deleteEip(const Model::DeleteEipRequest &request)const;
			void deleteEipAsync(const Model::DeleteEipRequest& request, const DeleteEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEipOutcomeCallable deleteEipCallable(const Model::DeleteEipRequest& request) const;
			DeleteEnsRouteEntryOutcome deleteEnsRouteEntry(const Model::DeleteEnsRouteEntryRequest &request)const;
			void deleteEnsRouteEntryAsync(const Model::DeleteEnsRouteEntryRequest& request, const DeleteEnsRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnsRouteEntryOutcomeCallable deleteEnsRouteEntryCallable(const Model::DeleteEnsRouteEntryRequest& request) const;
			DeleteEnsSaleConditionControlOutcome deleteEnsSaleConditionControl(const Model::DeleteEnsSaleConditionControlRequest &request)const;
			void deleteEnsSaleConditionControlAsync(const Model::DeleteEnsSaleConditionControlRequest& request, const DeleteEnsSaleConditionControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnsSaleConditionControlOutcomeCallable deleteEnsSaleConditionControlCallable(const Model::DeleteEnsSaleConditionControlRequest& request) const;
			DeleteEnsSaleControlOutcome deleteEnsSaleControl(const Model::DeleteEnsSaleControlRequest &request)const;
			void deleteEnsSaleControlAsync(const Model::DeleteEnsSaleControlRequest& request, const DeleteEnsSaleControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnsSaleControlOutcomeCallable deleteEnsSaleControlCallable(const Model::DeleteEnsSaleControlRequest& request) const;
			DeleteEpnInstanceOutcome deleteEpnInstance(const Model::DeleteEpnInstanceRequest &request)const;
			void deleteEpnInstanceAsync(const Model::DeleteEpnInstanceRequest& request, const DeleteEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEpnInstanceOutcomeCallable deleteEpnInstanceCallable(const Model::DeleteEpnInstanceRequest& request) const;
			DeleteFileSystemOutcome deleteFileSystem(const Model::DeleteFileSystemRequest &request)const;
			void deleteFileSystemAsync(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFileSystemOutcomeCallable deleteFileSystemCallable(const Model::DeleteFileSystemRequest& request) const;
			DeleteForwardEntryOutcome deleteForwardEntry(const Model::DeleteForwardEntryRequest &request)const;
			void deleteForwardEntryAsync(const Model::DeleteForwardEntryRequest& request, const DeleteForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteForwardEntryOutcomeCallable deleteForwardEntryCallable(const Model::DeleteForwardEntryRequest& request) const;
			DeleteHaVipsOutcome deleteHaVips(const Model::DeleteHaVipsRequest &request)const;
			void deleteHaVipsAsync(const Model::DeleteHaVipsRequest& request, const DeleteHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHaVipsOutcomeCallable deleteHaVipsCallable(const Model::DeleteHaVipsRequest& request) const;
			DeleteImageOutcome deleteImage(const Model::DeleteImageRequest &request)const;
			void deleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageOutcomeCallable deleteImageCallable(const Model::DeleteImageRequest& request) const;
			DeleteKeyPairsOutcome deleteKeyPairs(const Model::DeleteKeyPairsRequest &request)const;
			void deleteKeyPairsAsync(const Model::DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteKeyPairsOutcomeCallable deleteKeyPairsCallable(const Model::DeleteKeyPairsRequest& request) const;
			DeleteLoadBalancerListenerOutcome deleteLoadBalancerListener(const Model::DeleteLoadBalancerListenerRequest &request)const;
			void deleteLoadBalancerListenerAsync(const Model::DeleteLoadBalancerListenerRequest& request, const DeleteLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoadBalancerListenerOutcomeCallable deleteLoadBalancerListenerCallable(const Model::DeleteLoadBalancerListenerRequest& request) const;
			DeleteMountTargetOutcome deleteMountTarget(const Model::DeleteMountTargetRequest &request)const;
			void deleteMountTargetAsync(const Model::DeleteMountTargetRequest& request, const DeleteMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMountTargetOutcomeCallable deleteMountTargetCallable(const Model::DeleteMountTargetRequest& request) const;
			DeleteNatGatewayOutcome deleteNatGateway(const Model::DeleteNatGatewayRequest &request)const;
			void deleteNatGatewayAsync(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNatGatewayOutcomeCallable deleteNatGatewayCallable(const Model::DeleteNatGatewayRequest& request) const;
			DeleteNetworkOutcome deleteNetwork(const Model::DeleteNetworkRequest &request)const;
			void deleteNetworkAsync(const Model::DeleteNetworkRequest& request, const DeleteNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkOutcomeCallable deleteNetworkCallable(const Model::DeleteNetworkRequest& request) const;
			DeleteNetworkAclOutcome deleteNetworkAcl(const Model::DeleteNetworkAclRequest &request)const;
			void deleteNetworkAclAsync(const Model::DeleteNetworkAclRequest& request, const DeleteNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkAclOutcomeCallable deleteNetworkAclCallable(const Model::DeleteNetworkAclRequest& request) const;
			DeleteNetworkAclEntryOutcome deleteNetworkAclEntry(const Model::DeleteNetworkAclEntryRequest &request)const;
			void deleteNetworkAclEntryAsync(const Model::DeleteNetworkAclEntryRequest& request, const DeleteNetworkAclEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkAclEntryOutcomeCallable deleteNetworkAclEntryCallable(const Model::DeleteNetworkAclEntryRequest& request) const;
			DeleteNetworkInterfacesOutcome deleteNetworkInterfaces(const Model::DeleteNetworkInterfacesRequest &request)const;
			void deleteNetworkInterfacesAsync(const Model::DeleteNetworkInterfacesRequest& request, const DeleteNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkInterfacesOutcomeCallable deleteNetworkInterfacesCallable(const Model::DeleteNetworkInterfacesRequest& request) const;
			DeleteObjectOutcome deleteObject(const Model::DeleteObjectRequest &request)const;
			void deleteObjectAsync(const Model::DeleteObjectRequest& request, const DeleteObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteObjectOutcomeCallable deleteObjectCallable(const Model::DeleteObjectRequest& request) const;
			DeleteSDGOutcome deleteSDG(const Model::DeleteSDGRequest &request)const;
			void deleteSDGAsync(const Model::DeleteSDGRequest& request, const DeleteSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSDGOutcomeCallable deleteSDGCallable(const Model::DeleteSDGRequest& request) const;
			DeleteSecurityGroupOutcome deleteSecurityGroup(const Model::DeleteSecurityGroupRequest &request)const;
			void deleteSecurityGroupAsync(const Model::DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecurityGroupOutcomeCallable deleteSecurityGroupCallable(const Model::DeleteSecurityGroupRequest& request) const;
			DeleteSnapshotOutcome deleteSnapshot(const Model::DeleteSnapshotRequest &request)const;
			void deleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotOutcomeCallable deleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;
			DeleteSnatEntryOutcome deleteSnatEntry(const Model::DeleteSnatEntryRequest &request)const;
			void deleteSnatEntryAsync(const Model::DeleteSnatEntryRequest& request, const DeleteSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnatEntryOutcomeCallable deleteSnatEntryCallable(const Model::DeleteSnatEntryRequest& request) const;
			DeleteSnatIpForSnatEntryOutcome deleteSnatIpForSnatEntry(const Model::DeleteSnatIpForSnatEntryRequest &request)const;
			void deleteSnatIpForSnatEntryAsync(const Model::DeleteSnatIpForSnatEntryRequest& request, const DeleteSnatIpForSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnatIpForSnatEntryOutcomeCallable deleteSnatIpForSnatEntryCallable(const Model::DeleteSnatIpForSnatEntryRequest& request) const;
			DeleteStorageGatewayOutcome deleteStorageGateway(const Model::DeleteStorageGatewayRequest &request)const;
			void deleteStorageGatewayAsync(const Model::DeleteStorageGatewayRequest& request, const DeleteStorageGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStorageGatewayOutcomeCallable deleteStorageGatewayCallable(const Model::DeleteStorageGatewayRequest& request) const;
			DeleteStorageVolumeOutcome deleteStorageVolume(const Model::DeleteStorageVolumeRequest &request)const;
			void deleteStorageVolumeAsync(const Model::DeleteStorageVolumeRequest& request, const DeleteStorageVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStorageVolumeOutcomeCallable deleteStorageVolumeCallable(const Model::DeleteStorageVolumeRequest& request) const;
			DeleteVSwitchOutcome deleteVSwitch(const Model::DeleteVSwitchRequest &request)const;
			void deleteVSwitchAsync(const Model::DeleteVSwitchRequest& request, const DeleteVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVSwitchOutcomeCallable deleteVSwitchCallable(const Model::DeleteVSwitchRequest& request) const;
			DeployInstanceSDGOutcome deployInstanceSDG(const Model::DeployInstanceSDGRequest &request)const;
			void deployInstanceSDGAsync(const Model::DeployInstanceSDGRequest& request, const DeployInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployInstanceSDGOutcomeCallable deployInstanceSDGCallable(const Model::DeployInstanceSDGRequest& request) const;
			DeploySDGOutcome deploySDG(const Model::DeploySDGRequest &request)const;
			void deploySDGAsync(const Model::DeploySDGRequest& request, const DeploySDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeploySDGOutcomeCallable deploySDGCallable(const Model::DeploySDGRequest& request) const;
			DescribeAICImagesOutcome describeAICImages(const Model::DescribeAICImagesRequest &request)const;
			void describeAICImagesAsync(const Model::DescribeAICImagesRequest& request, const DescribeAICImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAICImagesOutcomeCallable describeAICImagesCallable(const Model::DescribeAICImagesRequest& request) const;
			DescribeARMServerInstancesOutcome describeARMServerInstances(const Model::DescribeARMServerInstancesRequest &request)const;
			void describeARMServerInstancesAsync(const Model::DescribeARMServerInstancesRequest& request, const DescribeARMServerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeARMServerInstancesOutcomeCallable describeARMServerInstancesCallable(const Model::DescribeARMServerInstancesRequest& request) const;
			DescribeApplicationOutcome describeApplication(const Model::DescribeApplicationRequest &request)const;
			void describeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationOutcomeCallable describeApplicationCallable(const Model::DescribeApplicationRequest& request) const;
			DescribeAvailableResourceOutcome describeAvailableResource(const Model::DescribeAvailableResourceRequest &request)const;
			void describeAvailableResourceAsync(const Model::DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableResourceOutcomeCallable describeAvailableResourceCallable(const Model::DescribeAvailableResourceRequest& request) const;
			DescribeAvailableResourceInfoOutcome describeAvailableResourceInfo(const Model::DescribeAvailableResourceInfoRequest &request)const;
			void describeAvailableResourceInfoAsync(const Model::DescribeAvailableResourceInfoRequest& request, const DescribeAvailableResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableResourceInfoOutcomeCallable describeAvailableResourceInfoCallable(const Model::DescribeAvailableResourceInfoRequest& request) const;
			DescribeBandWithdChargeTypeOutcome describeBandWithdChargeType(const Model::DescribeBandWithdChargeTypeRequest &request)const;
			void describeBandWithdChargeTypeAsync(const Model::DescribeBandWithdChargeTypeRequest& request, const DescribeBandWithdChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBandWithdChargeTypeOutcomeCallable describeBandWithdChargeTypeCallable(const Model::DescribeBandWithdChargeTypeRequest& request) const;
			DescribeBandwitdhByInternetChargeTypeOutcome describeBandwitdhByInternetChargeType(const Model::DescribeBandwitdhByInternetChargeTypeRequest &request)const;
			void describeBandwitdhByInternetChargeTypeAsync(const Model::DescribeBandwitdhByInternetChargeTypeRequest& request, const DescribeBandwitdhByInternetChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBandwitdhByInternetChargeTypeOutcomeCallable describeBandwitdhByInternetChargeTypeCallable(const Model::DescribeBandwitdhByInternetChargeTypeRequest& request) const;
			DescribeCloudDiskAvailableResourceInfoOutcome describeCloudDiskAvailableResourceInfo(const Model::DescribeCloudDiskAvailableResourceInfoRequest &request)const;
			void describeCloudDiskAvailableResourceInfoAsync(const Model::DescribeCloudDiskAvailableResourceInfoRequest& request, const DescribeCloudDiskAvailableResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudDiskAvailableResourceInfoOutcomeCallable describeCloudDiskAvailableResourceInfoCallable(const Model::DescribeCloudDiskAvailableResourceInfoRequest& request) const;
			DescribeCloudDiskTypesOutcome describeCloudDiskTypes(const Model::DescribeCloudDiskTypesRequest &request)const;
			void describeCloudDiskTypesAsync(const Model::DescribeCloudDiskTypesRequest& request, const DescribeCloudDiskTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudDiskTypesOutcomeCallable describeCloudDiskTypesCallable(const Model::DescribeCloudDiskTypesRequest& request) const;
			DescribeClusterOutcome describeCluster(const Model::DescribeClusterRequest &request)const;
			void describeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOutcomeCallable describeClusterCallable(const Model::DescribeClusterRequest& request) const;
			DescribeClusterKubeConfigOutcome describeClusterKubeConfig(const Model::DescribeClusterKubeConfigRequest &request)const;
			void describeClusterKubeConfigAsync(const Model::DescribeClusterKubeConfigRequest& request, const DescribeClusterKubeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterKubeConfigOutcomeCallable describeClusterKubeConfigCallable(const Model::DescribeClusterKubeConfigRequest& request) const;
			DescribeCreatePrePaidInstanceResultOutcome describeCreatePrePaidInstanceResult(const Model::DescribeCreatePrePaidInstanceResultRequest &request)const;
			void describeCreatePrePaidInstanceResultAsync(const Model::DescribeCreatePrePaidInstanceResultRequest& request, const DescribeCreatePrePaidInstanceResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCreatePrePaidInstanceResultOutcomeCallable describeCreatePrePaidInstanceResultCallable(const Model::DescribeCreatePrePaidInstanceResultRequest& request) const;
			DescribeDataDistResultOutcome describeDataDistResult(const Model::DescribeDataDistResultRequest &request)const;
			void describeDataDistResultAsync(const Model::DescribeDataDistResultRequest& request, const DescribeDataDistResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataDistResultOutcomeCallable describeDataDistResultCallable(const Model::DescribeDataDistResultRequest& request) const;
			DescribeDataDownloadURLOutcome describeDataDownloadURL(const Model::DescribeDataDownloadURLRequest &request)const;
			void describeDataDownloadURLAsync(const Model::DescribeDataDownloadURLRequest& request, const DescribeDataDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataDownloadURLOutcomeCallable describeDataDownloadURLCallable(const Model::DescribeDataDownloadURLRequest& request) const;
			DescribeDataPushResultOutcome describeDataPushResult(const Model::DescribeDataPushResultRequest &request)const;
			void describeDataPushResultAsync(const Model::DescribeDataPushResultRequest& request, const DescribeDataPushResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataPushResultOutcomeCallable describeDataPushResultCallable(const Model::DescribeDataPushResultRequest& request) const;
			DescribeDeviceServiceOutcome describeDeviceService(const Model::DescribeDeviceServiceRequest &request)const;
			void describeDeviceServiceAsync(const Model::DescribeDeviceServiceRequest& request, const DescribeDeviceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceServiceOutcomeCallable describeDeviceServiceCallable(const Model::DescribeDeviceServiceRequest& request) const;
			DescribeDiskIopsListOutcome describeDiskIopsList(const Model::DescribeDiskIopsListRequest &request)const;
			void describeDiskIopsListAsync(const Model::DescribeDiskIopsListRequest& request, const DescribeDiskIopsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiskIopsListOutcomeCallable describeDiskIopsListCallable(const Model::DescribeDiskIopsListRequest& request) const;
			DescribeDisksOutcome describeDisks(const Model::DescribeDisksRequest &request)const;
			void describeDisksAsync(const Model::DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDisksOutcomeCallable describeDisksCallable(const Model::DescribeDisksRequest& request) const;
			DescribeElbAvailableResourceInfoOutcome describeElbAvailableResourceInfo(const Model::DescribeElbAvailableResourceInfoRequest &request)const;
			void describeElbAvailableResourceInfoAsync(const Model::DescribeElbAvailableResourceInfoRequest& request, const DescribeElbAvailableResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElbAvailableResourceInfoOutcomeCallable describeElbAvailableResourceInfoCallable(const Model::DescribeElbAvailableResourceInfoRequest& request) const;
			DescribeEnsCommodityCodeOutcome describeEnsCommodityCode(const Model::DescribeEnsCommodityCodeRequest &request)const;
			void describeEnsCommodityCodeAsync(const Model::DescribeEnsCommodityCodeRequest& request, const DescribeEnsCommodityCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsCommodityCodeOutcomeCallable describeEnsCommodityCodeCallable(const Model::DescribeEnsCommodityCodeRequest& request) const;
			DescribeEnsCommodityModuleCodeOutcome describeEnsCommodityModuleCode(const Model::DescribeEnsCommodityModuleCodeRequest &request)const;
			void describeEnsCommodityModuleCodeAsync(const Model::DescribeEnsCommodityModuleCodeRequest& request, const DescribeEnsCommodityModuleCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsCommodityModuleCodeOutcomeCallable describeEnsCommodityModuleCodeCallable(const Model::DescribeEnsCommodityModuleCodeRequest& request) const;
			DescribeEnsEipAddressesOutcome describeEnsEipAddresses(const Model::DescribeEnsEipAddressesRequest &request)const;
			void describeEnsEipAddressesAsync(const Model::DescribeEnsEipAddressesRequest& request, const DescribeEnsEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsEipAddressesOutcomeCallable describeEnsEipAddressesCallable(const Model::DescribeEnsEipAddressesRequest& request) const;
			DescribeEnsNetDistrictOutcome describeEnsNetDistrict(const Model::DescribeEnsNetDistrictRequest &request)const;
			void describeEnsNetDistrictAsync(const Model::DescribeEnsNetDistrictRequest& request, const DescribeEnsNetDistrictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsNetDistrictOutcomeCallable describeEnsNetDistrictCallable(const Model::DescribeEnsNetDistrictRequest& request) const;
			DescribeEnsNetLevelOutcome describeEnsNetLevel(const Model::DescribeEnsNetLevelRequest &request)const;
			void describeEnsNetLevelAsync(const Model::DescribeEnsNetLevelRequest& request, const DescribeEnsNetLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsNetLevelOutcomeCallable describeEnsNetLevelCallable(const Model::DescribeEnsNetLevelRequest& request) const;
			DescribeEnsNetSaleDistrictOutcome describeEnsNetSaleDistrict(const Model::DescribeEnsNetSaleDistrictRequest &request)const;
			void describeEnsNetSaleDistrictAsync(const Model::DescribeEnsNetSaleDistrictRequest& request, const DescribeEnsNetSaleDistrictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsNetSaleDistrictOutcomeCallable describeEnsNetSaleDistrictCallable(const Model::DescribeEnsNetSaleDistrictRequest& request) const;
			DescribeEnsRegionIdIpv6InfoOutcome describeEnsRegionIdIpv6Info(const Model::DescribeEnsRegionIdIpv6InfoRequest &request)const;
			void describeEnsRegionIdIpv6InfoAsync(const Model::DescribeEnsRegionIdIpv6InfoRequest& request, const DescribeEnsRegionIdIpv6InfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsRegionIdIpv6InfoOutcomeCallable describeEnsRegionIdIpv6InfoCallable(const Model::DescribeEnsRegionIdIpv6InfoRequest& request) const;
			DescribeEnsRegionIdResourceOutcome describeEnsRegionIdResource(const Model::DescribeEnsRegionIdResourceRequest &request)const;
			void describeEnsRegionIdResourceAsync(const Model::DescribeEnsRegionIdResourceRequest& request, const DescribeEnsRegionIdResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsRegionIdResourceOutcomeCallable describeEnsRegionIdResourceCallable(const Model::DescribeEnsRegionIdResourceRequest& request) const;
			DescribeEnsRegionsOutcome describeEnsRegions(const Model::DescribeEnsRegionsRequest &request)const;
			void describeEnsRegionsAsync(const Model::DescribeEnsRegionsRequest& request, const DescribeEnsRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsRegionsOutcomeCallable describeEnsRegionsCallable(const Model::DescribeEnsRegionsRequest& request) const;
			DescribeEnsResourceUsageOutcome describeEnsResourceUsage(const Model::DescribeEnsResourceUsageRequest &request)const;
			void describeEnsResourceUsageAsync(const Model::DescribeEnsResourceUsageRequest& request, const DescribeEnsResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsResourceUsageOutcomeCallable describeEnsResourceUsageCallable(const Model::DescribeEnsResourceUsageRequest& request) const;
			DescribeEnsRouteEntryListOutcome describeEnsRouteEntryList(const Model::DescribeEnsRouteEntryListRequest &request)const;
			void describeEnsRouteEntryListAsync(const Model::DescribeEnsRouteEntryListRequest& request, const DescribeEnsRouteEntryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsRouteEntryListOutcomeCallable describeEnsRouteEntryListCallable(const Model::DescribeEnsRouteEntryListRequest& request) const;
			DescribeEnsRouteTablesOutcome describeEnsRouteTables(const Model::DescribeEnsRouteTablesRequest &request)const;
			void describeEnsRouteTablesAsync(const Model::DescribeEnsRouteTablesRequest& request, const DescribeEnsRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsRouteTablesOutcomeCallable describeEnsRouteTablesCallable(const Model::DescribeEnsRouteTablesRequest& request) const;
			DescribeEnsSaleControlOutcome describeEnsSaleControl(const Model::DescribeEnsSaleControlRequest &request)const;
			void describeEnsSaleControlAsync(const Model::DescribeEnsSaleControlRequest& request, const DescribeEnsSaleControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsSaleControlOutcomeCallable describeEnsSaleControlCallable(const Model::DescribeEnsSaleControlRequest& request) const;
			DescribeEnsSaleControlAvailableResourceOutcome describeEnsSaleControlAvailableResource(const Model::DescribeEnsSaleControlAvailableResourceRequest &request)const;
			void describeEnsSaleControlAvailableResourceAsync(const Model::DescribeEnsSaleControlAvailableResourceRequest& request, const DescribeEnsSaleControlAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsSaleControlAvailableResourceOutcomeCallable describeEnsSaleControlAvailableResourceCallable(const Model::DescribeEnsSaleControlAvailableResourceRequest& request) const;
			DescribeEnsSaleControlStockOutcome describeEnsSaleControlStock(const Model::DescribeEnsSaleControlStockRequest &request)const;
			void describeEnsSaleControlStockAsync(const Model::DescribeEnsSaleControlStockRequest& request, const DescribeEnsSaleControlStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnsSaleControlStockOutcomeCallable describeEnsSaleControlStockCallable(const Model::DescribeEnsSaleControlStockRequest& request) const;
			DescribeEpnBandWidthDataOutcome describeEpnBandWidthData(const Model::DescribeEpnBandWidthDataRequest &request)const;
			void describeEpnBandWidthDataAsync(const Model::DescribeEpnBandWidthDataRequest& request, const DescribeEpnBandWidthDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEpnBandWidthDataOutcomeCallable describeEpnBandWidthDataCallable(const Model::DescribeEpnBandWidthDataRequest& request) const;
			DescribeEpnBandwitdhByInternetChargeTypeOutcome describeEpnBandwitdhByInternetChargeType(const Model::DescribeEpnBandwitdhByInternetChargeTypeRequest &request)const;
			void describeEpnBandwitdhByInternetChargeTypeAsync(const Model::DescribeEpnBandwitdhByInternetChargeTypeRequest& request, const DescribeEpnBandwitdhByInternetChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEpnBandwitdhByInternetChargeTypeOutcomeCallable describeEpnBandwitdhByInternetChargeTypeCallable(const Model::DescribeEpnBandwitdhByInternetChargeTypeRequest& request) const;
			DescribeEpnInstanceAttributeOutcome describeEpnInstanceAttribute(const Model::DescribeEpnInstanceAttributeRequest &request)const;
			void describeEpnInstanceAttributeAsync(const Model::DescribeEpnInstanceAttributeRequest& request, const DescribeEpnInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEpnInstanceAttributeOutcomeCallable describeEpnInstanceAttributeCallable(const Model::DescribeEpnInstanceAttributeRequest& request) const;
			DescribeEpnInstancesOutcome describeEpnInstances(const Model::DescribeEpnInstancesRequest &request)const;
			void describeEpnInstancesAsync(const Model::DescribeEpnInstancesRequest& request, const DescribeEpnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEpnInstancesOutcomeCallable describeEpnInstancesCallable(const Model::DescribeEpnInstancesRequest& request) const;
			DescribeEpnMeasurementDataOutcome describeEpnMeasurementData(const Model::DescribeEpnMeasurementDataRequest &request)const;
			void describeEpnMeasurementDataAsync(const Model::DescribeEpnMeasurementDataRequest& request, const DescribeEpnMeasurementDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEpnMeasurementDataOutcomeCallable describeEpnMeasurementDataCallable(const Model::DescribeEpnMeasurementDataRequest& request) const;
			DescribeExportImageInfoOutcome describeExportImageInfo(const Model::DescribeExportImageInfoRequest &request)const;
			void describeExportImageInfoAsync(const Model::DescribeExportImageInfoRequest& request, const DescribeExportImageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExportImageInfoOutcomeCallable describeExportImageInfoCallable(const Model::DescribeExportImageInfoRequest& request) const;
			DescribeExportImageStatusOutcome describeExportImageStatus(const Model::DescribeExportImageStatusRequest &request)const;
			void describeExportImageStatusAsync(const Model::DescribeExportImageStatusRequest& request, const DescribeExportImageStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExportImageStatusOutcomeCallable describeExportImageStatusCallable(const Model::DescribeExportImageStatusRequest& request) const;
			DescribeFileSystemsOutcome describeFileSystems(const Model::DescribeFileSystemsRequest &request)const;
			void describeFileSystemsAsync(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFileSystemsOutcomeCallable describeFileSystemsCallable(const Model::DescribeFileSystemsRequest& request) const;
			DescribeForwardTableEntriesOutcome describeForwardTableEntries(const Model::DescribeForwardTableEntriesRequest &request)const;
			void describeForwardTableEntriesAsync(const Model::DescribeForwardTableEntriesRequest& request, const DescribeForwardTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeForwardTableEntriesOutcomeCallable describeForwardTableEntriesCallable(const Model::DescribeForwardTableEntriesRequest& request) const;
			DescribeHaVipsOutcome describeHaVips(const Model::DescribeHaVipsRequest &request)const;
			void describeHaVipsAsync(const Model::DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHaVipsOutcomeCallable describeHaVipsCallable(const Model::DescribeHaVipsRequest& request) const;
			DescribeImageInfosOutcome describeImageInfos(const Model::DescribeImageInfosRequest &request)const;
			void describeImageInfosAsync(const Model::DescribeImageInfosRequest& request, const DescribeImageInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageInfosOutcomeCallable describeImageInfosCallable(const Model::DescribeImageInfosRequest& request) const;
			DescribeImageSharePermissionOutcome describeImageSharePermission(const Model::DescribeImageSharePermissionRequest &request)const;
			void describeImageSharePermissionAsync(const Model::DescribeImageSharePermissionRequest& request, const DescribeImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageSharePermissionOutcomeCallable describeImageSharePermissionCallable(const Model::DescribeImageSharePermissionRequest& request) const;
			DescribeImagesOutcome describeImages(const Model::DescribeImagesRequest &request)const;
			void describeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImagesOutcomeCallable describeImagesCallable(const Model::DescribeImagesRequest& request) const;
			DescribeInstanceAutoRenewAttributeOutcome describeInstanceAutoRenewAttribute(const Model::DescribeInstanceAutoRenewAttributeRequest &request)const;
			void describeInstanceAutoRenewAttributeAsync(const Model::DescribeInstanceAutoRenewAttributeRequest& request, const DescribeInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceAutoRenewAttributeOutcomeCallable describeInstanceAutoRenewAttributeCallable(const Model::DescribeInstanceAutoRenewAttributeRequest& request) const;
			DescribeInstanceBandwidthDetailOutcome describeInstanceBandwidthDetail(const Model::DescribeInstanceBandwidthDetailRequest &request)const;
			void describeInstanceBandwidthDetailAsync(const Model::DescribeInstanceBandwidthDetailRequest& request, const DescribeInstanceBandwidthDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceBandwidthDetailOutcomeCallable describeInstanceBandwidthDetailCallable(const Model::DescribeInstanceBandwidthDetailRequest& request) const;
			DescribeInstanceMonitorDataOutcome describeInstanceMonitorData(const Model::DescribeInstanceMonitorDataRequest &request)const;
			void describeInstanceMonitorDataAsync(const Model::DescribeInstanceMonitorDataRequest& request, const DescribeInstanceMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceMonitorDataOutcomeCallable describeInstanceMonitorDataCallable(const Model::DescribeInstanceMonitorDataRequest& request) const;
			DescribeInstanceSDGStatusOutcome describeInstanceSDGStatus(const Model::DescribeInstanceSDGStatusRequest &request)const;
			void describeInstanceSDGStatusAsync(const Model::DescribeInstanceSDGStatusRequest& request, const DescribeInstanceSDGStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSDGStatusOutcomeCallable describeInstanceSDGStatusCallable(const Model::DescribeInstanceSDGStatusRequest& request) const;
			DescribeInstanceSpecOutcome describeInstanceSpec(const Model::DescribeInstanceSpecRequest &request)const;
			void describeInstanceSpecAsync(const Model::DescribeInstanceSpecRequest& request, const DescribeInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSpecOutcomeCallable describeInstanceSpecCallable(const Model::DescribeInstanceSpecRequest& request) const;
			DescribeInstanceTypesOutcome describeInstanceTypes(const Model::DescribeInstanceTypesRequest &request)const;
			void describeInstanceTypesAsync(const Model::DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTypesOutcomeCallable describeInstanceTypesCallable(const Model::DescribeInstanceTypesRequest& request) const;
			DescribeInstanceVncUrlOutcome describeInstanceVncUrl(const Model::DescribeInstanceVncUrlRequest &request)const;
			void describeInstanceVncUrlAsync(const Model::DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceVncUrlOutcomeCallable describeInstanceVncUrlCallable(const Model::DescribeInstanceVncUrlRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeKeyPairsOutcome describeKeyPairs(const Model::DescribeKeyPairsRequest &request)const;
			void describeKeyPairsAsync(const Model::DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKeyPairsOutcomeCallable describeKeyPairsCallable(const Model::DescribeKeyPairsRequest& request) const;
			DescribeLoadBalancerAttributeOutcome describeLoadBalancerAttribute(const Model::DescribeLoadBalancerAttributeRequest &request)const;
			void describeLoadBalancerAttributeAsync(const Model::DescribeLoadBalancerAttributeRequest& request, const DescribeLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerAttributeOutcomeCallable describeLoadBalancerAttributeCallable(const Model::DescribeLoadBalancerAttributeRequest& request) const;
			DescribeLoadBalancerHTTPListenerAttributeOutcome describeLoadBalancerHTTPListenerAttribute(const Model::DescribeLoadBalancerHTTPListenerAttributeRequest &request)const;
			void describeLoadBalancerHTTPListenerAttributeAsync(const Model::DescribeLoadBalancerHTTPListenerAttributeRequest& request, const DescribeLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerHTTPListenerAttributeOutcomeCallable describeLoadBalancerHTTPListenerAttributeCallable(const Model::DescribeLoadBalancerHTTPListenerAttributeRequest& request) const;
			DescribeLoadBalancerHTTPSListenerAttributeOutcome describeLoadBalancerHTTPSListenerAttribute(const Model::DescribeLoadBalancerHTTPSListenerAttributeRequest &request)const;
			void describeLoadBalancerHTTPSListenerAttributeAsync(const Model::DescribeLoadBalancerHTTPSListenerAttributeRequest& request, const DescribeLoadBalancerHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerHTTPSListenerAttributeOutcomeCallable describeLoadBalancerHTTPSListenerAttributeCallable(const Model::DescribeLoadBalancerHTTPSListenerAttributeRequest& request) const;
			DescribeLoadBalancerListenMonitorOutcome describeLoadBalancerListenMonitor(const Model::DescribeLoadBalancerListenMonitorRequest &request)const;
			void describeLoadBalancerListenMonitorAsync(const Model::DescribeLoadBalancerListenMonitorRequest& request, const DescribeLoadBalancerListenMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerListenMonitorOutcomeCallable describeLoadBalancerListenMonitorCallable(const Model::DescribeLoadBalancerListenMonitorRequest& request) const;
			DescribeLoadBalancerListenersOutcome describeLoadBalancerListeners(const Model::DescribeLoadBalancerListenersRequest &request)const;
			void describeLoadBalancerListenersAsync(const Model::DescribeLoadBalancerListenersRequest& request, const DescribeLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerListenersOutcomeCallable describeLoadBalancerListenersCallable(const Model::DescribeLoadBalancerListenersRequest& request) const;
			DescribeLoadBalancerSpecOutcome describeLoadBalancerSpec(const Model::DescribeLoadBalancerSpecRequest &request)const;
			void describeLoadBalancerSpecAsync(const Model::DescribeLoadBalancerSpecRequest& request, const DescribeLoadBalancerSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerSpecOutcomeCallable describeLoadBalancerSpecCallable(const Model::DescribeLoadBalancerSpecRequest& request) const;
			DescribeLoadBalancerTCPListenerAttributeOutcome describeLoadBalancerTCPListenerAttribute(const Model::DescribeLoadBalancerTCPListenerAttributeRequest &request)const;
			void describeLoadBalancerTCPListenerAttributeAsync(const Model::DescribeLoadBalancerTCPListenerAttributeRequest& request, const DescribeLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerTCPListenerAttributeOutcomeCallable describeLoadBalancerTCPListenerAttributeCallable(const Model::DescribeLoadBalancerTCPListenerAttributeRequest& request) const;
			DescribeLoadBalancerUDPListenerAttributeOutcome describeLoadBalancerUDPListenerAttribute(const Model::DescribeLoadBalancerUDPListenerAttributeRequest &request)const;
			void describeLoadBalancerUDPListenerAttributeAsync(const Model::DescribeLoadBalancerUDPListenerAttributeRequest& request, const DescribeLoadBalancerUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerUDPListenerAttributeOutcomeCallable describeLoadBalancerUDPListenerAttributeCallable(const Model::DescribeLoadBalancerUDPListenerAttributeRequest& request) const;
			DescribeLoadBalancersOutcome describeLoadBalancers(const Model::DescribeLoadBalancersRequest &request)const;
			void describeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancersOutcomeCallable describeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;
			DescribeMeasurementDataOutcome describeMeasurementData(const Model::DescribeMeasurementDataRequest &request)const;
			void describeMeasurementDataAsync(const Model::DescribeMeasurementDataRequest& request, const DescribeMeasurementDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMeasurementDataOutcomeCallable describeMeasurementDataCallable(const Model::DescribeMeasurementDataRequest& request) const;
			DescribeMountTargetsOutcome describeMountTargets(const Model::DescribeMountTargetsRequest &request)const;
			void describeMountTargetsAsync(const Model::DescribeMountTargetsRequest& request, const DescribeMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMountTargetsOutcomeCallable describeMountTargetsCallable(const Model::DescribeMountTargetsRequest& request) const;
			DescribeNCInformationOutcome describeNCInformation(const Model::DescribeNCInformationRequest &request)const;
			void describeNCInformationAsync(const Model::DescribeNCInformationRequest& request, const DescribeNCInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNCInformationOutcomeCallable describeNCInformationCallable(const Model::DescribeNCInformationRequest& request) const;
			DescribeNatGatewaysOutcome describeNatGateways(const Model::DescribeNatGatewaysRequest &request)const;
			void describeNatGatewaysAsync(const Model::DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNatGatewaysOutcomeCallable describeNatGatewaysCallable(const Model::DescribeNatGatewaysRequest& request) const;
			DescribeNetworkAclsOutcome describeNetworkAcls(const Model::DescribeNetworkAclsRequest &request)const;
			void describeNetworkAclsAsync(const Model::DescribeNetworkAclsRequest& request, const DescribeNetworkAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkAclsOutcomeCallable describeNetworkAclsCallable(const Model::DescribeNetworkAclsRequest& request) const;
			DescribeNetworkAttributeOutcome describeNetworkAttribute(const Model::DescribeNetworkAttributeRequest &request)const;
			void describeNetworkAttributeAsync(const Model::DescribeNetworkAttributeRequest& request, const DescribeNetworkAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkAttributeOutcomeCallable describeNetworkAttributeCallable(const Model::DescribeNetworkAttributeRequest& request) const;
			DescribeNetworkInterfacesOutcome describeNetworkInterfaces(const Model::DescribeNetworkInterfacesRequest &request)const;
			void describeNetworkInterfacesAsync(const Model::DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkInterfacesOutcomeCallable describeNetworkInterfacesCallable(const Model::DescribeNetworkInterfacesRequest& request) const;
			DescribeNetworksOutcome describeNetworks(const Model::DescribeNetworksRequest &request)const;
			void describeNetworksAsync(const Model::DescribeNetworksRequest& request, const DescribeNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworksOutcomeCallable describeNetworksCallable(const Model::DescribeNetworksRequest& request) const;
			DescribePrePaidInstanceStockOutcome describePrePaidInstanceStock(const Model::DescribePrePaidInstanceStockRequest &request)const;
			void describePrePaidInstanceStockAsync(const Model::DescribePrePaidInstanceStockRequest& request, const DescribePrePaidInstanceStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePrePaidInstanceStockOutcomeCallable describePrePaidInstanceStockCallable(const Model::DescribePrePaidInstanceStockRequest& request) const;
			DescribePriceOutcome describePrice(const Model::DescribePriceRequest &request)const;
			void describePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePriceOutcomeCallable describePriceCallable(const Model::DescribePriceRequest& request) const;
			DescribeRegionIspsOutcome describeRegionIsps(const Model::DescribeRegionIspsRequest &request)const;
			void describeRegionIspsAsync(const Model::DescribeRegionIspsRequest& request, const DescribeRegionIspsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionIspsOutcomeCallable describeRegionIspsCallable(const Model::DescribeRegionIspsRequest& request) const;
			DescribeRegionResourceOutcome describeRegionResource(const Model::DescribeRegionResourceRequest &request)const;
			void describeRegionResourceAsync(const Model::DescribeRegionResourceRequest& request, const DescribeRegionResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionResourceOutcomeCallable describeRegionResourceCallable(const Model::DescribeRegionResourceRequest& request) const;
			DescribeReservedResourceOutcome describeReservedResource(const Model::DescribeReservedResourceRequest &request)const;
			void describeReservedResourceAsync(const Model::DescribeReservedResourceRequest& request, const DescribeReservedResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReservedResourceOutcomeCallable describeReservedResourceCallable(const Model::DescribeReservedResourceRequest& request) const;
			DescribeResourceTimelineOutcome describeResourceTimeline(const Model::DescribeResourceTimelineRequest &request)const;
			void describeResourceTimelineAsync(const Model::DescribeResourceTimelineRequest& request, const DescribeResourceTimelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceTimelineOutcomeCallable describeResourceTimelineCallable(const Model::DescribeResourceTimelineRequest& request) const;
			DescribeSDGOutcome describeSDG(const Model::DescribeSDGRequest &request)const;
			void describeSDGAsync(const Model::DescribeSDGRequest& request, const DescribeSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSDGOutcomeCallable describeSDGCallable(const Model::DescribeSDGRequest& request) const;
			DescribeSDGDeploymentStatusOutcome describeSDGDeploymentStatus(const Model::DescribeSDGDeploymentStatusRequest &request)const;
			void describeSDGDeploymentStatusAsync(const Model::DescribeSDGDeploymentStatusRequest& request, const DescribeSDGDeploymentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSDGDeploymentStatusOutcomeCallable describeSDGDeploymentStatusCallable(const Model::DescribeSDGDeploymentStatusRequest& request) const;
			DescribeSDGsOutcome describeSDGs(const Model::DescribeSDGsRequest &request)const;
			void describeSDGsAsync(const Model::DescribeSDGsRequest& request, const DescribeSDGsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSDGsOutcomeCallable describeSDGsCallable(const Model::DescribeSDGsRequest& request) const;
			DescribeSecondaryPublicIpAddressesOutcome describeSecondaryPublicIpAddresses(const Model::DescribeSecondaryPublicIpAddressesRequest &request)const;
			void describeSecondaryPublicIpAddressesAsync(const Model::DescribeSecondaryPublicIpAddressesRequest& request, const DescribeSecondaryPublicIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecondaryPublicIpAddressesOutcomeCallable describeSecondaryPublicIpAddressesCallable(const Model::DescribeSecondaryPublicIpAddressesRequest& request) const;
			DescribeSecurityGroupAttributeOutcome describeSecurityGroupAttribute(const Model::DescribeSecurityGroupAttributeRequest &request)const;
			void describeSecurityGroupAttributeAsync(const Model::DescribeSecurityGroupAttributeRequest& request, const DescribeSecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupAttributeOutcomeCallable describeSecurityGroupAttributeCallable(const Model::DescribeSecurityGroupAttributeRequest& request) const;
			DescribeSecurityGroupsOutcome describeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request)const;
			void describeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupsOutcomeCallable describeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request) const;
			DescribeSelfImagesOutcome describeSelfImages(const Model::DescribeSelfImagesRequest &request)const;
			void describeSelfImagesAsync(const Model::DescribeSelfImagesRequest& request, const DescribeSelfImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSelfImagesOutcomeCallable describeSelfImagesCallable(const Model::DescribeSelfImagesRequest& request) const;
			DescribeServcieScheduleOutcome describeServcieSchedule(const Model::DescribeServcieScheduleRequest &request)const;
			void describeServcieScheduleAsync(const Model::DescribeServcieScheduleRequest& request, const DescribeServcieScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServcieScheduleOutcomeCallable describeServcieScheduleCallable(const Model::DescribeServcieScheduleRequest& request) const;
			DescribeServerLoadBalancerListenMonitorOutcome describeServerLoadBalancerListenMonitor(const Model::DescribeServerLoadBalancerListenMonitorRequest &request)const;
			void describeServerLoadBalancerListenMonitorAsync(const Model::DescribeServerLoadBalancerListenMonitorRequest& request, const DescribeServerLoadBalancerListenMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServerLoadBalancerListenMonitorOutcomeCallable describeServerLoadBalancerListenMonitorCallable(const Model::DescribeServerLoadBalancerListenMonitorRequest& request) const;
			DescribeServerLoadBalancerMonitorOutcome describeServerLoadBalancerMonitor(const Model::DescribeServerLoadBalancerMonitorRequest &request)const;
			void describeServerLoadBalancerMonitorAsync(const Model::DescribeServerLoadBalancerMonitorRequest& request, const DescribeServerLoadBalancerMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServerLoadBalancerMonitorOutcomeCallable describeServerLoadBalancerMonitorCallable(const Model::DescribeServerLoadBalancerMonitorRequest& request) const;
			DescribeSnapshotsOutcome describeSnapshots(const Model::DescribeSnapshotsRequest &request)const;
			void describeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnapshotsOutcomeCallable describeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;
			DescribeSnatAttributeOutcome describeSnatAttribute(const Model::DescribeSnatAttributeRequest &request)const;
			void describeSnatAttributeAsync(const Model::DescribeSnatAttributeRequest& request, const DescribeSnatAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnatAttributeOutcomeCallable describeSnatAttributeCallable(const Model::DescribeSnatAttributeRequest& request) const;
			DescribeSnatTableEntriesOutcome describeSnatTableEntries(const Model::DescribeSnatTableEntriesRequest &request)const;
			void describeSnatTableEntriesAsync(const Model::DescribeSnatTableEntriesRequest& request, const DescribeSnatTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnatTableEntriesOutcomeCallable describeSnatTableEntriesCallable(const Model::DescribeSnatTableEntriesRequest& request) const;
			DescribeStorageGatewayOutcome describeStorageGateway(const Model::DescribeStorageGatewayRequest &request)const;
			void describeStorageGatewayAsync(const Model::DescribeStorageGatewayRequest& request, const DescribeStorageGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStorageGatewayOutcomeCallable describeStorageGatewayCallable(const Model::DescribeStorageGatewayRequest& request) const;
			DescribeStorageVolumeOutcome describeStorageVolume(const Model::DescribeStorageVolumeRequest &request)const;
			void describeStorageVolumeAsync(const Model::DescribeStorageVolumeRequest& request, const DescribeStorageVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStorageVolumeOutcomeCallable describeStorageVolumeCallable(const Model::DescribeStorageVolumeRequest& request) const;
			DescribeUserBandWidthDataOutcome describeUserBandWidthData(const Model::DescribeUserBandWidthDataRequest &request)const;
			void describeUserBandWidthDataAsync(const Model::DescribeUserBandWidthDataRequest& request, const DescribeUserBandWidthDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserBandWidthDataOutcomeCallable describeUserBandWidthDataCallable(const Model::DescribeUserBandWidthDataRequest& request) const;
			DescribeVSwitchAttributesOutcome describeVSwitchAttributes(const Model::DescribeVSwitchAttributesRequest &request)const;
			void describeVSwitchAttributesAsync(const Model::DescribeVSwitchAttributesRequest& request, const DescribeVSwitchAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchAttributesOutcomeCallable describeVSwitchAttributesCallable(const Model::DescribeVSwitchAttributesRequest& request) const;
			DescribeVSwitchesOutcome describeVSwitches(const Model::DescribeVSwitchesRequest &request)const;
			void describeVSwitchesAsync(const Model::DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchesOutcomeCallable describeVSwitchesCallable(const Model::DescribeVSwitchesRequest& request) const;
			DetachDiskOutcome detachDisk(const Model::DetachDiskRequest &request)const;
			void detachDiskAsync(const Model::DetachDiskRequest& request, const DetachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachDiskOutcomeCallable detachDiskCallable(const Model::DetachDiskRequest& request) const;
			DetachInstanceSDGOutcome detachInstanceSDG(const Model::DetachInstanceSDGRequest &request)const;
			void detachInstanceSDGAsync(const Model::DetachInstanceSDGRequest& request, const DetachInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachInstanceSDGOutcomeCallable detachInstanceSDGCallable(const Model::DetachInstanceSDGRequest& request) const;
			DetachNetworkInterfaceOutcome detachNetworkInterface(const Model::DetachNetworkInterfaceRequest &request)const;
			void detachNetworkInterfaceAsync(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachNetworkInterfaceOutcomeCallable detachNetworkInterfaceCallable(const Model::DetachNetworkInterfaceRequest& request) const;
			DistApplicationDataOutcome distApplicationData(const Model::DistApplicationDataRequest &request)const;
			void distApplicationDataAsync(const Model::DistApplicationDataRequest& request, const DistApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DistApplicationDataOutcomeCallable distApplicationDataCallable(const Model::DistApplicationDataRequest& request) const;
			ExportBillDetailDataOutcome exportBillDetailData(const Model::ExportBillDetailDataRequest &request)const;
			void exportBillDetailDataAsync(const Model::ExportBillDetailDataRequest& request, const ExportBillDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportBillDetailDataOutcomeCallable exportBillDetailDataCallable(const Model::ExportBillDetailDataRequest& request) const;
			ExportImageOutcome exportImage(const Model::ExportImageRequest &request)const;
			void exportImageAsync(const Model::ExportImageRequest& request, const ExportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportImageOutcomeCallable exportImageCallable(const Model::ExportImageRequest& request) const;
			ExportMeasurementDataOutcome exportMeasurementData(const Model::ExportMeasurementDataRequest &request)const;
			void exportMeasurementDataAsync(const Model::ExportMeasurementDataRequest& request, const ExportMeasurementDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportMeasurementDataOutcomeCallable exportMeasurementDataCallable(const Model::ExportMeasurementDataRequest& request) const;
			GetBucketAclOutcome getBucketAcl(const Model::GetBucketAclRequest &request)const;
			void getBucketAclAsync(const Model::GetBucketAclRequest& request, const GetBucketAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBucketAclOutcomeCallable getBucketAclCallable(const Model::GetBucketAclRequest& request) const;
			GetBucketInfoOutcome getBucketInfo(const Model::GetBucketInfoRequest &request)const;
			void getBucketInfoAsync(const Model::GetBucketInfoRequest& request, const GetBucketInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBucketInfoOutcomeCallable getBucketInfoCallable(const Model::GetBucketInfoRequest& request) const;
			GetBucketLifecycleOutcome getBucketLifecycle(const Model::GetBucketLifecycleRequest &request)const;
			void getBucketLifecycleAsync(const Model::GetBucketLifecycleRequest& request, const GetBucketLifecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBucketLifecycleOutcomeCallable getBucketLifecycleCallable(const Model::GetBucketLifecycleRequest& request) const;
			GetDeviceInternetPortOutcome getDeviceInternetPort(const Model::GetDeviceInternetPortRequest &request)const;
			void getDeviceInternetPortAsync(const Model::GetDeviceInternetPortRequest& request, const GetDeviceInternetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceInternetPortOutcomeCallable getDeviceInternetPortCallable(const Model::GetDeviceInternetPortRequest& request) const;
			GetOssStorageAndAccByBucketsOutcome getOssStorageAndAccByBuckets(const Model::GetOssStorageAndAccByBucketsRequest &request)const;
			void getOssStorageAndAccByBucketsAsync(const Model::GetOssStorageAndAccByBucketsRequest& request, const GetOssStorageAndAccByBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOssStorageAndAccByBucketsOutcomeCallable getOssStorageAndAccByBucketsCallable(const Model::GetOssStorageAndAccByBucketsRequest& request) const;
			GetOssUsageDataOutcome getOssUsageData(const Model::GetOssUsageDataRequest &request)const;
			void getOssUsageDataAsync(const Model::GetOssUsageDataRequest& request, const GetOssUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOssUsageDataOutcomeCallable getOssUsageDataCallable(const Model::GetOssUsageDataRequest& request) const;
			ImportKeyPairOutcome importKeyPair(const Model::ImportKeyPairRequest &request)const;
			void importKeyPairAsync(const Model::ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportKeyPairOutcomeCallable importKeyPairCallable(const Model::ImportKeyPairRequest& request) const;
			JoinPublicIpsToEpnInstanceOutcome joinPublicIpsToEpnInstance(const Model::JoinPublicIpsToEpnInstanceRequest &request)const;
			void joinPublicIpsToEpnInstanceAsync(const Model::JoinPublicIpsToEpnInstanceRequest& request, const JoinPublicIpsToEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinPublicIpsToEpnInstanceOutcomeCallable joinPublicIpsToEpnInstanceCallable(const Model::JoinPublicIpsToEpnInstanceRequest& request) const;
			JoinSecurityGroupOutcome joinSecurityGroup(const Model::JoinSecurityGroupRequest &request)const;
			void joinSecurityGroupAsync(const Model::JoinSecurityGroupRequest& request, const JoinSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinSecurityGroupOutcomeCallable joinSecurityGroupCallable(const Model::JoinSecurityGroupRequest& request) const;
			JoinVSwitchesToEpnInstanceOutcome joinVSwitchesToEpnInstance(const Model::JoinVSwitchesToEpnInstanceRequest &request)const;
			void joinVSwitchesToEpnInstanceAsync(const Model::JoinVSwitchesToEpnInstanceRequest& request, const JoinVSwitchesToEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinVSwitchesToEpnInstanceOutcomeCallable joinVSwitchesToEpnInstanceCallable(const Model::JoinVSwitchesToEpnInstanceRequest& request) const;
			LeaveSecurityGroupOutcome leaveSecurityGroup(const Model::LeaveSecurityGroupRequest &request)const;
			void leaveSecurityGroupAsync(const Model::LeaveSecurityGroupRequest& request, const LeaveSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LeaveSecurityGroupOutcomeCallable leaveSecurityGroupCallable(const Model::LeaveSecurityGroupRequest& request) const;
			ListApplicationsOutcome listApplications(const Model::ListApplicationsRequest &request)const;
			void listApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsOutcomeCallable listApplicationsCallable(const Model::ListApplicationsRequest& request) const;
			ListBucketsOutcome listBuckets(const Model::ListBucketsRequest &request)const;
			void listBucketsAsync(const Model::ListBucketsRequest& request, const ListBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBucketsOutcomeCallable listBucketsCallable(const Model::ListBucketsRequest& request) const;
			ListObjectsOutcome listObjects(const Model::ListObjectsRequest &request)const;
			void listObjectsAsync(const Model::ListObjectsRequest& request, const ListObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListObjectsOutcomeCallable listObjectsCallable(const Model::ListObjectsRequest& request) const;
			ListProductAbilitiesOutcome listProductAbilities(const Model::ListProductAbilitiesRequest &request)const;
			void listProductAbilitiesAsync(const Model::ListProductAbilitiesRequest& request, const ListProductAbilitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductAbilitiesOutcomeCallable listProductAbilitiesCallable(const Model::ListProductAbilitiesRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyEnsEipAddressAttributeOutcome modifyEnsEipAddressAttribute(const Model::ModifyEnsEipAddressAttributeRequest &request)const;
			void modifyEnsEipAddressAttributeAsync(const Model::ModifyEnsEipAddressAttributeRequest& request, const ModifyEnsEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEnsEipAddressAttributeOutcomeCallable modifyEnsEipAddressAttributeCallable(const Model::ModifyEnsEipAddressAttributeRequest& request) const;
			ModifyEnsRouteEntryOutcome modifyEnsRouteEntry(const Model::ModifyEnsRouteEntryRequest &request)const;
			void modifyEnsRouteEntryAsync(const Model::ModifyEnsRouteEntryRequest& request, const ModifyEnsRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEnsRouteEntryOutcomeCallable modifyEnsRouteEntryCallable(const Model::ModifyEnsRouteEntryRequest& request) const;
			ModifyEpnInstanceOutcome modifyEpnInstance(const Model::ModifyEpnInstanceRequest &request)const;
			void modifyEpnInstanceAsync(const Model::ModifyEpnInstanceRequest& request, const ModifyEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEpnInstanceOutcomeCallable modifyEpnInstanceCallable(const Model::ModifyEpnInstanceRequest& request) const;
			ModifyFileSystemOutcome modifyFileSystem(const Model::ModifyFileSystemRequest &request)const;
			void modifyFileSystemAsync(const Model::ModifyFileSystemRequest& request, const ModifyFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFileSystemOutcomeCallable modifyFileSystemCallable(const Model::ModifyFileSystemRequest& request) const;
			ModifyForwardEntryOutcome modifyForwardEntry(const Model::ModifyForwardEntryRequest &request)const;
			void modifyForwardEntryAsync(const Model::ModifyForwardEntryRequest& request, const ModifyForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyForwardEntryOutcomeCallable modifyForwardEntryCallable(const Model::ModifyForwardEntryRequest& request) const;
			ModifyHaVipAttributeOutcome modifyHaVipAttribute(const Model::ModifyHaVipAttributeRequest &request)const;
			void modifyHaVipAttributeAsync(const Model::ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHaVipAttributeOutcomeCallable modifyHaVipAttributeCallable(const Model::ModifyHaVipAttributeRequest& request) const;
			ModifyImageAttributeOutcome modifyImageAttribute(const Model::ModifyImageAttributeRequest &request)const;
			void modifyImageAttributeAsync(const Model::ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImageAttributeOutcomeCallable modifyImageAttributeCallable(const Model::ModifyImageAttributeRequest& request) const;
			ModifyImageSharePermissionOutcome modifyImageSharePermission(const Model::ModifyImageSharePermissionRequest &request)const;
			void modifyImageSharePermissionAsync(const Model::ModifyImageSharePermissionRequest& request, const ModifyImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImageSharePermissionOutcomeCallable modifyImageSharePermissionCallable(const Model::ModifyImageSharePermissionRequest& request) const;
			ModifyInstanceAttributeOutcome modifyInstanceAttribute(const Model::ModifyInstanceAttributeRequest &request)const;
			void modifyInstanceAttributeAsync(const Model::ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAttributeOutcomeCallable modifyInstanceAttributeCallable(const Model::ModifyInstanceAttributeRequest& request) const;
			ModifyInstanceAutoRenewAttributeOutcome modifyInstanceAutoRenewAttribute(const Model::ModifyInstanceAutoRenewAttributeRequest &request)const;
			void modifyInstanceAutoRenewAttributeAsync(const Model::ModifyInstanceAutoRenewAttributeRequest& request, const ModifyInstanceAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAutoRenewAttributeOutcomeCallable modifyInstanceAutoRenewAttributeCallable(const Model::ModifyInstanceAutoRenewAttributeRequest& request) const;
			ModifyInstanceBootConfigurationOutcome modifyInstanceBootConfiguration(const Model::ModifyInstanceBootConfigurationRequest &request)const;
			void modifyInstanceBootConfigurationAsync(const Model::ModifyInstanceBootConfigurationRequest& request, const ModifyInstanceBootConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceBootConfigurationOutcomeCallable modifyInstanceBootConfigurationCallable(const Model::ModifyInstanceBootConfigurationRequest& request) const;
			ModifyInstanceChargeTypeOutcome modifyInstanceChargeType(const Model::ModifyInstanceChargeTypeRequest &request)const;
			void modifyInstanceChargeTypeAsync(const Model::ModifyInstanceChargeTypeRequest& request, const ModifyInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceChargeTypeOutcomeCallable modifyInstanceChargeTypeCallable(const Model::ModifyInstanceChargeTypeRequest& request) const;
			ModifyLoadBalancerAttributeOutcome modifyLoadBalancerAttribute(const Model::ModifyLoadBalancerAttributeRequest &request)const;
			void modifyLoadBalancerAttributeAsync(const Model::ModifyLoadBalancerAttributeRequest& request, const ModifyLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoadBalancerAttributeOutcomeCallable modifyLoadBalancerAttributeCallable(const Model::ModifyLoadBalancerAttributeRequest& request) const;
			ModifyNetworkAttributeOutcome modifyNetworkAttribute(const Model::ModifyNetworkAttributeRequest &request)const;
			void modifyNetworkAttributeAsync(const Model::ModifyNetworkAttributeRequest& request, const ModifyNetworkAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNetworkAttributeOutcomeCallable modifyNetworkAttributeCallable(const Model::ModifyNetworkAttributeRequest& request) const;
			ModifyNetworkInterfaceAttributeOutcome modifyNetworkInterfaceAttribute(const Model::ModifyNetworkInterfaceAttributeRequest &request)const;
			void modifyNetworkInterfaceAttributeAsync(const Model::ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNetworkInterfaceAttributeOutcomeCallable modifyNetworkInterfaceAttributeCallable(const Model::ModifyNetworkInterfaceAttributeRequest& request) const;
			ModifyPrepayInstanceSpecOutcome modifyPrepayInstanceSpec(const Model::ModifyPrepayInstanceSpecRequest &request)const;
			void modifyPrepayInstanceSpecAsync(const Model::ModifyPrepayInstanceSpecRequest& request, const ModifyPrepayInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPrepayInstanceSpecOutcomeCallable modifyPrepayInstanceSpecCallable(const Model::ModifyPrepayInstanceSpecRequest& request) const;
			ModifySecurityGroupAttributeOutcome modifySecurityGroupAttribute(const Model::ModifySecurityGroupAttributeRequest &request)const;
			void modifySecurityGroupAttributeAsync(const Model::ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupAttributeOutcomeCallable modifySecurityGroupAttributeCallable(const Model::ModifySecurityGroupAttributeRequest& request) const;
			ModifySnapshotAttributeOutcome modifySnapshotAttribute(const Model::ModifySnapshotAttributeRequest &request)const;
			void modifySnapshotAttributeAsync(const Model::ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySnapshotAttributeOutcomeCallable modifySnapshotAttributeCallable(const Model::ModifySnapshotAttributeRequest& request) const;
			ModifySnatEntryOutcome modifySnatEntry(const Model::ModifySnatEntryRequest &request)const;
			void modifySnatEntryAsync(const Model::ModifySnatEntryRequest& request, const ModifySnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySnatEntryOutcomeCallable modifySnatEntryCallable(const Model::ModifySnatEntryRequest& request) const;
			ModifyVSwitchAttributeOutcome modifyVSwitchAttribute(const Model::ModifyVSwitchAttributeRequest &request)const;
			void modifyVSwitchAttributeAsync(const Model::ModifyVSwitchAttributeRequest& request, const ModifyVSwitchAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVSwitchAttributeOutcomeCallable modifyVSwitchAttributeCallable(const Model::ModifyVSwitchAttributeRequest& request) const;
			MountInstanceSDGOutcome mountInstanceSDG(const Model::MountInstanceSDGRequest &request)const;
			void mountInstanceSDGAsync(const Model::MountInstanceSDGRequest& request, const MountInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MountInstanceSDGOutcomeCallable mountInstanceSDGCallable(const Model::MountInstanceSDGRequest& request) const;
			PreloadRegionSDGOutcome preloadRegionSDG(const Model::PreloadRegionSDGRequest &request)const;
			void preloadRegionSDGAsync(const Model::PreloadRegionSDGRequest& request, const PreloadRegionSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreloadRegionSDGOutcomeCallable preloadRegionSDGCallable(const Model::PreloadRegionSDGRequest& request) const;
			PrepareUploadOutcome prepareUpload(const Model::PrepareUploadRequest &request)const;
			void prepareUploadAsync(const Model::PrepareUploadRequest& request, const PrepareUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PrepareUploadOutcomeCallable prepareUploadCallable(const Model::PrepareUploadRequest& request) const;
			PushApplicationDataOutcome pushApplicationData(const Model::PushApplicationDataRequest &request)const;
			void pushApplicationDataAsync(const Model::PushApplicationDataRequest& request, const PushApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushApplicationDataOutcomeCallable pushApplicationDataCallable(const Model::PushApplicationDataRequest& request) const;
			PutBucketOutcome putBucket(const Model::PutBucketRequest &request)const;
			void putBucketAsync(const Model::PutBucketRequest& request, const PutBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutBucketOutcomeCallable putBucketCallable(const Model::PutBucketRequest& request) const;
			PutBucketAclOutcome putBucketAcl(const Model::PutBucketAclRequest &request)const;
			void putBucketAclAsync(const Model::PutBucketAclRequest& request, const PutBucketAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutBucketAclOutcomeCallable putBucketAclCallable(const Model::PutBucketAclRequest& request) const;
			PutBucketLifecycleOutcome putBucketLifecycle(const Model::PutBucketLifecycleRequest &request)const;
			void putBucketLifecycleAsync(const Model::PutBucketLifecycleRequest& request, const PutBucketLifecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutBucketLifecycleOutcomeCallable putBucketLifecycleCallable(const Model::PutBucketLifecycleRequest& request) const;
			ReInitDiskOutcome reInitDisk(const Model::ReInitDiskRequest &request)const;
			void reInitDiskAsync(const Model::ReInitDiskRequest& request, const ReInitDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReInitDiskOutcomeCallable reInitDiskCallable(const Model::ReInitDiskRequest& request) const;
			RebootAICInstanceOutcome rebootAICInstance(const Model::RebootAICInstanceRequest &request)const;
			void rebootAICInstanceAsync(const Model::RebootAICInstanceRequest& request, const RebootAICInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootAICInstanceOutcomeCallable rebootAICInstanceCallable(const Model::RebootAICInstanceRequest& request) const;
			RebootARMServerInstanceOutcome rebootARMServerInstance(const Model::RebootARMServerInstanceRequest &request)const;
			void rebootARMServerInstanceAsync(const Model::RebootARMServerInstanceRequest& request, const RebootARMServerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootARMServerInstanceOutcomeCallable rebootARMServerInstanceCallable(const Model::RebootARMServerInstanceRequest& request) const;
			RebootInstanceOutcome rebootInstance(const Model::RebootInstanceRequest &request)const;
			void rebootInstanceAsync(const Model::RebootInstanceRequest& request, const RebootInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootInstanceOutcomeCallable rebootInstanceCallable(const Model::RebootInstanceRequest& request) const;
			RebootInstancesOutcome rebootInstances(const Model::RebootInstancesRequest &request)const;
			void rebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootInstancesOutcomeCallable rebootInstancesCallable(const Model::RebootInstancesRequest& request) const;
			RecoverAICInstanceOutcome recoverAICInstance(const Model::RecoverAICInstanceRequest &request)const;
			void recoverAICInstanceAsync(const Model::RecoverAICInstanceRequest& request, const RecoverAICInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecoverAICInstanceOutcomeCallable recoverAICInstanceCallable(const Model::RecoverAICInstanceRequest& request) const;
			ReinitInstanceOutcome reinitInstance(const Model::ReinitInstanceRequest &request)const;
			void reinitInstanceAsync(const Model::ReinitInstanceRequest& request, const ReinitInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReinitInstanceOutcomeCallable reinitInstanceCallable(const Model::ReinitInstanceRequest& request) const;
			ReinitInstancesOutcome reinitInstances(const Model::ReinitInstancesRequest &request)const;
			void reinitInstancesAsync(const Model::ReinitInstancesRequest& request, const ReinitInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReinitInstancesOutcomeCallable reinitInstancesCallable(const Model::ReinitInstancesRequest& request) const;
			ReleaseAICInstanceOutcome releaseAICInstance(const Model::ReleaseAICInstanceRequest &request)const;
			void releaseAICInstanceAsync(const Model::ReleaseAICInstanceRequest& request, const ReleaseAICInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseAICInstanceOutcomeCallable releaseAICInstanceCallable(const Model::ReleaseAICInstanceRequest& request) const;
			ReleaseARMServerInstanceOutcome releaseARMServerInstance(const Model::ReleaseARMServerInstanceRequest &request)const;
			void releaseARMServerInstanceAsync(const Model::ReleaseARMServerInstanceRequest& request, const ReleaseARMServerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseARMServerInstanceOutcomeCallable releaseARMServerInstanceCallable(const Model::ReleaseARMServerInstanceRequest& request) const;
			ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
			void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
			ReleasePostPaidInstanceOutcome releasePostPaidInstance(const Model::ReleasePostPaidInstanceRequest &request)const;
			void releasePostPaidInstanceAsync(const Model::ReleasePostPaidInstanceRequest& request, const ReleasePostPaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleasePostPaidInstanceOutcomeCallable releasePostPaidInstanceCallable(const Model::ReleasePostPaidInstanceRequest& request) const;
			ReleasePrePaidInstanceOutcome releasePrePaidInstance(const Model::ReleasePrePaidInstanceRequest &request)const;
			void releasePrePaidInstanceAsync(const Model::ReleasePrePaidInstanceRequest& request, const ReleasePrePaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleasePrePaidInstanceOutcomeCallable releasePrePaidInstanceCallable(const Model::ReleasePrePaidInstanceRequest& request) const;
			RemoveBackendServersOutcome removeBackendServers(const Model::RemoveBackendServersRequest &request)const;
			void removeBackendServersAsync(const Model::RemoveBackendServersRequest& request, const RemoveBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveBackendServersOutcomeCallable removeBackendServersCallable(const Model::RemoveBackendServersRequest& request) const;
			RemoveInstanceSDGOutcome removeInstanceSDG(const Model::RemoveInstanceSDGRequest &request)const;
			void removeInstanceSDGAsync(const Model::RemoveInstanceSDGRequest& request, const RemoveInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveInstanceSDGOutcomeCallable removeInstanceSDGCallable(const Model::RemoveInstanceSDGRequest& request) const;
			RemovePublicIpsFromEpnInstanceOutcome removePublicIpsFromEpnInstance(const Model::RemovePublicIpsFromEpnInstanceRequest &request)const;
			void removePublicIpsFromEpnInstanceAsync(const Model::RemovePublicIpsFromEpnInstanceRequest& request, const RemovePublicIpsFromEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePublicIpsFromEpnInstanceOutcomeCallable removePublicIpsFromEpnInstanceCallable(const Model::RemovePublicIpsFromEpnInstanceRequest& request) const;
			RemoveSDGOutcome removeSDG(const Model::RemoveSDGRequest &request)const;
			void removeSDGAsync(const Model::RemoveSDGRequest& request, const RemoveSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveSDGOutcomeCallable removeSDGCallable(const Model::RemoveSDGRequest& request) const;
			RemoveVSwitchesFromEpnInstanceOutcome removeVSwitchesFromEpnInstance(const Model::RemoveVSwitchesFromEpnInstanceRequest &request)const;
			void removeVSwitchesFromEpnInstanceAsync(const Model::RemoveVSwitchesFromEpnInstanceRequest& request, const RemoveVSwitchesFromEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveVSwitchesFromEpnInstanceOutcomeCallable removeVSwitchesFromEpnInstanceCallable(const Model::RemoveVSwitchesFromEpnInstanceRequest& request) const;
			RenewARMServerInstanceOutcome renewARMServerInstance(const Model::RenewARMServerInstanceRequest &request)const;
			void renewARMServerInstanceAsync(const Model::RenewARMServerInstanceRequest& request, const RenewARMServerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewARMServerInstanceOutcomeCallable renewARMServerInstanceCallable(const Model::RenewARMServerInstanceRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			RescaleApplicationOutcome rescaleApplication(const Model::RescaleApplicationRequest &request)const;
			void rescaleApplicationAsync(const Model::RescaleApplicationRequest& request, const RescaleApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RescaleApplicationOutcomeCallable rescaleApplicationCallable(const Model::RescaleApplicationRequest& request) const;
			RescaleDeviceServiceOutcome rescaleDeviceService(const Model::RescaleDeviceServiceRequest &request)const;
			void rescaleDeviceServiceAsync(const Model::RescaleDeviceServiceRequest& request, const RescaleDeviceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RescaleDeviceServiceOutcomeCallable rescaleDeviceServiceCallable(const Model::RescaleDeviceServiceRequest& request) const;
			ResetAICInstanceOutcome resetAICInstance(const Model::ResetAICInstanceRequest &request)const;
			void resetAICInstanceAsync(const Model::ResetAICInstanceRequest& request, const ResetAICInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAICInstanceOutcomeCallable resetAICInstanceCallable(const Model::ResetAICInstanceRequest& request) const;
			ResetDeviceInstanceOutcome resetDeviceInstance(const Model::ResetDeviceInstanceRequest &request)const;
			void resetDeviceInstanceAsync(const Model::ResetDeviceInstanceRequest& request, const ResetDeviceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetDeviceInstanceOutcomeCallable resetDeviceInstanceCallable(const Model::ResetDeviceInstanceRequest& request) const;
			ResetDiskOutcome resetDisk(const Model::ResetDiskRequest &request)const;
			void resetDiskAsync(const Model::ResetDiskRequest& request, const ResetDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetDiskOutcomeCallable resetDiskCallable(const Model::ResetDiskRequest& request) const;
			ResizeDiskOutcome resizeDisk(const Model::ResizeDiskRequest &request)const;
			void resizeDiskAsync(const Model::ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeDiskOutcomeCallable resizeDiskCallable(const Model::ResizeDiskRequest& request) const;
			RestartDeviceInstanceOutcome restartDeviceInstance(const Model::RestartDeviceInstanceRequest &request)const;
			void restartDeviceInstanceAsync(const Model::RestartDeviceInstanceRequest& request, const RestartDeviceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDeviceInstanceOutcomeCallable restartDeviceInstanceCallable(const Model::RestartDeviceInstanceRequest& request) const;
			RevokeSecurityGroupOutcome revokeSecurityGroup(const Model::RevokeSecurityGroupRequest &request)const;
			void revokeSecurityGroupAsync(const Model::RevokeSecurityGroupRequest& request, const RevokeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeSecurityGroupOutcomeCallable revokeSecurityGroupCallable(const Model::RevokeSecurityGroupRequest& request) const;
			RevokeSecurityGroupEgressOutcome revokeSecurityGroupEgress(const Model::RevokeSecurityGroupEgressRequest &request)const;
			void revokeSecurityGroupEgressAsync(const Model::RevokeSecurityGroupEgressRequest& request, const RevokeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeSecurityGroupEgressOutcomeCallable revokeSecurityGroupEgressCallable(const Model::RevokeSecurityGroupEgressRequest& request) const;
			RollbackApplicationOutcome rollbackApplication(const Model::RollbackApplicationRequest &request)const;
			void rollbackApplicationAsync(const Model::RollbackApplicationRequest& request, const RollbackApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackApplicationOutcomeCallable rollbackApplicationCallable(const Model::RollbackApplicationRequest& request) const;
			RunInstancesOutcome runInstances(const Model::RunInstancesRequest &request)const;
			void runInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunInstancesOutcomeCallable runInstancesCallable(const Model::RunInstancesRequest& request) const;
			RunServiceScheduleOutcome runServiceSchedule(const Model::RunServiceScheduleRequest &request)const;
			void runServiceScheduleAsync(const Model::RunServiceScheduleRequest& request, const RunServiceScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunServiceScheduleOutcomeCallable runServiceScheduleCallable(const Model::RunServiceScheduleRequest& request) const;
			SaveSDGOutcome saveSDG(const Model::SaveSDGRequest &request)const;
			void saveSDGAsync(const Model::SaveSDGRequest& request, const SaveSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSDGOutcomeCallable saveSDGCallable(const Model::SaveSDGRequest& request) const;
			SetBackendServersOutcome setBackendServers(const Model::SetBackendServersRequest &request)const;
			void setBackendServersAsync(const Model::SetBackendServersRequest& request, const SetBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetBackendServersOutcomeCallable setBackendServersCallable(const Model::SetBackendServersRequest& request) const;
			SetLoadBalancerHTTPListenerAttributeOutcome setLoadBalancerHTTPListenerAttribute(const Model::SetLoadBalancerHTTPListenerAttributeRequest &request)const;
			void setLoadBalancerHTTPListenerAttributeAsync(const Model::SetLoadBalancerHTTPListenerAttributeRequest& request, const SetLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerHTTPListenerAttributeOutcomeCallable setLoadBalancerHTTPListenerAttributeCallable(const Model::SetLoadBalancerHTTPListenerAttributeRequest& request) const;
			SetLoadBalancerHTTPSListenerAttributeOutcome setLoadBalancerHTTPSListenerAttribute(const Model::SetLoadBalancerHTTPSListenerAttributeRequest &request)const;
			void setLoadBalancerHTTPSListenerAttributeAsync(const Model::SetLoadBalancerHTTPSListenerAttributeRequest& request, const SetLoadBalancerHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerHTTPSListenerAttributeOutcomeCallable setLoadBalancerHTTPSListenerAttributeCallable(const Model::SetLoadBalancerHTTPSListenerAttributeRequest& request) const;
			SetLoadBalancerStatusOutcome setLoadBalancerStatus(const Model::SetLoadBalancerStatusRequest &request)const;
			void setLoadBalancerStatusAsync(const Model::SetLoadBalancerStatusRequest& request, const SetLoadBalancerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerStatusOutcomeCallable setLoadBalancerStatusCallable(const Model::SetLoadBalancerStatusRequest& request) const;
			SetLoadBalancerTCPListenerAttributeOutcome setLoadBalancerTCPListenerAttribute(const Model::SetLoadBalancerTCPListenerAttributeRequest &request)const;
			void setLoadBalancerTCPListenerAttributeAsync(const Model::SetLoadBalancerTCPListenerAttributeRequest& request, const SetLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerTCPListenerAttributeOutcomeCallable setLoadBalancerTCPListenerAttributeCallable(const Model::SetLoadBalancerTCPListenerAttributeRequest& request) const;
			SetLoadBalancerUDPListenerAttributeOutcome setLoadBalancerUDPListenerAttribute(const Model::SetLoadBalancerUDPListenerAttributeRequest &request)const;
			void setLoadBalancerUDPListenerAttributeAsync(const Model::SetLoadBalancerUDPListenerAttributeRequest& request, const SetLoadBalancerUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerUDPListenerAttributeOutcomeCallable setLoadBalancerUDPListenerAttributeCallable(const Model::SetLoadBalancerUDPListenerAttributeRequest& request) const;
			StartEpnInstanceOutcome startEpnInstance(const Model::StartEpnInstanceRequest &request)const;
			void startEpnInstanceAsync(const Model::StartEpnInstanceRequest& request, const StartEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartEpnInstanceOutcomeCallable startEpnInstanceCallable(const Model::StartEpnInstanceRequest& request) const;
			StartInstanceOutcome startInstance(const Model::StartInstanceRequest &request)const;
			void startInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartInstanceOutcomeCallable startInstanceCallable(const Model::StartInstanceRequest& request) const;
			StartInstancesOutcome startInstances(const Model::StartInstancesRequest &request)const;
			void startInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartInstancesOutcomeCallable startInstancesCallable(const Model::StartInstancesRequest& request) const;
			StartLoadBalancerListenerOutcome startLoadBalancerListener(const Model::StartLoadBalancerListenerRequest &request)const;
			void startLoadBalancerListenerAsync(const Model::StartLoadBalancerListenerRequest& request, const StartLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLoadBalancerListenerOutcomeCallable startLoadBalancerListenerCallable(const Model::StartLoadBalancerListenerRequest& request) const;
			StartSnatIpForSnatEntryOutcome startSnatIpForSnatEntry(const Model::StartSnatIpForSnatEntryRequest &request)const;
			void startSnatIpForSnatEntryAsync(const Model::StartSnatIpForSnatEntryRequest& request, const StartSnatIpForSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartSnatIpForSnatEntryOutcomeCallable startSnatIpForSnatEntryCallable(const Model::StartSnatIpForSnatEntryRequest& request) const;
			StopEpnInstanceOutcome stopEpnInstance(const Model::StopEpnInstanceRequest &request)const;
			void stopEpnInstanceAsync(const Model::StopEpnInstanceRequest& request, const StopEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopEpnInstanceOutcomeCallable stopEpnInstanceCallable(const Model::StopEpnInstanceRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			StopInstancesOutcome stopInstances(const Model::StopInstancesRequest &request)const;
			void stopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstancesOutcomeCallable stopInstancesCallable(const Model::StopInstancesRequest& request) const;
			StopLoadBalancerListenerOutcome stopLoadBalancerListener(const Model::StopLoadBalancerListenerRequest &request)const;
			void stopLoadBalancerListenerAsync(const Model::StopLoadBalancerListenerRequest& request, const StopLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLoadBalancerListenerOutcomeCallable stopLoadBalancerListenerCallable(const Model::StopLoadBalancerListenerRequest& request) const;
			StopSnatIpForSnatEntryOutcome stopSnatIpForSnatEntry(const Model::StopSnatIpForSnatEntryRequest &request)const;
			void stopSnatIpForSnatEntryAsync(const Model::StopSnatIpForSnatEntryRequest& request, const StopSnatIpForSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopSnatIpForSnatEntryOutcomeCallable stopSnatIpForSnatEntryCallable(const Model::StopSnatIpForSnatEntryRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnAssociateEnsEipAddressOutcome unAssociateEnsEipAddress(const Model::UnAssociateEnsEipAddressRequest &request)const;
			void unAssociateEnsEipAddressAsync(const Model::UnAssociateEnsEipAddressRequest& request, const UnAssociateEnsEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnAssociateEnsEipAddressOutcomeCallable unAssociateEnsEipAddressCallable(const Model::UnAssociateEnsEipAddressRequest& request) const;
			UnassignPrivateIpAddressesOutcome unassignPrivateIpAddresses(const Model::UnassignPrivateIpAddressesRequest &request)const;
			void unassignPrivateIpAddressesAsync(const Model::UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassignPrivateIpAddressesOutcomeCallable unassignPrivateIpAddressesCallable(const Model::UnassignPrivateIpAddressesRequest& request) const;
			UnassociateHaVipOutcome unassociateHaVip(const Model::UnassociateHaVipRequest &request)const;
			void unassociateHaVipAsync(const Model::UnassociateHaVipRequest& request, const UnassociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateHaVipOutcomeCallable unassociateHaVipCallable(const Model::UnassociateHaVipRequest& request) const;
			UnassociateNetworkAclOutcome unassociateNetworkAcl(const Model::UnassociateNetworkAclRequest &request)const;
			void unassociateNetworkAclAsync(const Model::UnassociateNetworkAclRequest& request, const UnassociateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateNetworkAclOutcomeCallable unassociateNetworkAclCallable(const Model::UnassociateNetworkAclRequest& request) const;
			UnloadRegionSDGOutcome unloadRegionSDG(const Model::UnloadRegionSDGRequest &request)const;
			void unloadRegionSDGAsync(const Model::UnloadRegionSDGRequest& request, const UnloadRegionSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnloadRegionSDGOutcomeCallable unloadRegionSDGCallable(const Model::UnloadRegionSDGRequest& request) const;
			UnmountInstanceSDGOutcome unmountInstanceSDG(const Model::UnmountInstanceSDGRequest &request)const;
			void unmountInstanceSDGAsync(const Model::UnmountInstanceSDGRequest& request, const UnmountInstanceSDGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnmountInstanceSDGOutcomeCallable unmountInstanceSDGCallable(const Model::UnmountInstanceSDGRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateEnsSaleControlOutcome updateEnsSaleControl(const Model::UpdateEnsSaleControlRequest &request)const;
			void updateEnsSaleControlAsync(const Model::UpdateEnsSaleControlRequest& request, const UpdateEnsSaleControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEnsSaleControlOutcomeCallable updateEnsSaleControlCallable(const Model::UpdateEnsSaleControlRequest& request) const;
			UpgradeAICInstanceImageOutcome upgradeAICInstanceImage(const Model::UpgradeAICInstanceImageRequest &request)const;
			void upgradeAICInstanceImageAsync(const Model::UpgradeAICInstanceImageRequest& request, const UpgradeAICInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeAICInstanceImageOutcomeCallable upgradeAICInstanceImageCallable(const Model::UpgradeAICInstanceImageRequest& request) const;
			UpgradeApplicationOutcome upgradeApplication(const Model::UpgradeApplicationRequest &request)const;
			void upgradeApplicationAsync(const Model::UpgradeApplicationRequest& request, const UpgradeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeApplicationOutcomeCallable upgradeApplicationCallable(const Model::UpgradeApplicationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ENS_ENSCLIENT_H_
