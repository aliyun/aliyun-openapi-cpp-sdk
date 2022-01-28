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
#include "model/AddBackendServersRequest.h"
#include "model/AddBackendServersResult.h"
#include "model/AddDeviceInternetPortRequest.h"
#include "model/AddDeviceInternetPortResult.h"
#include "model/AddNetworkInterfaceToInstanceRequest.h"
#include "model/AddNetworkInterfaceToInstanceResult.h"
#include "model/AllocateEipAddressRequest.h"
#include "model/AllocateEipAddressResult.h"
#include "model/AssociateEipAddressRequest.h"
#include "model/AssociateEipAddressResult.h"
#include "model/AssociateEnsEipAddressRequest.h"
#include "model/AssociateEnsEipAddressResult.h"
#include "model/AttachDiskRequest.h"
#include "model/AttachDiskResult.h"
#include "model/AttachEnsInstancesRequest.h"
#include "model/AttachEnsInstancesResult.h"
#include "model/AuthorizeSecurityGroupRequest.h"
#include "model/AuthorizeSecurityGroupResult.h"
#include "model/AuthorizeSecurityGroupEgressRequest.h"
#include "model/AuthorizeSecurityGroupEgressResult.h"
#include "model/CheckQuotaRequest.h"
#include "model/CheckQuotaResult.h"
#include "model/ConfigureSecurityGroupPermissionsRequest.h"
#include "model/ConfigureSecurityGroupPermissionsResult.h"
#include "model/CreateApplicationRequest.h"
#include "model/CreateApplicationResult.h"
#include "model/CreateDiskRequest.h"
#include "model/CreateDiskResult.h"
#include "model/CreateDiskBuyOrderRequest.h"
#include "model/CreateDiskBuyOrderResult.h"
#include "model/CreateEPInstanceRequest.h"
#include "model/CreateEPInstanceResult.h"
#include "model/CreateEipInstanceRequest.h"
#include "model/CreateEipInstanceResult.h"
#include "model/CreateElbBuyOrderRequest.h"
#include "model/CreateElbBuyOrderResult.h"
#include "model/CreateEnsServiceRequest.h"
#include "model/CreateEnsServiceResult.h"
#include "model/CreateEpnInstanceRequest.h"
#include "model/CreateEpnInstanceResult.h"
#include "model/CreateImageRequest.h"
#include "model/CreateImageResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
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
#include "model/CreateNetworkRequest.h"
#include "model/CreateNetworkResult.h"
#include "model/CreateSecurityGroupRequest.h"
#include "model/CreateSecurityGroupResult.h"
#include "model/CreateVSwitchRequest.h"
#include "model/CreateVSwitchResult.h"
#include "model/CreateVmAndSaveStockRequest.h"
#include "model/CreateVmAndSaveStockResult.h"
#include "model/DeleteApplicationRequest.h"
#include "model/DeleteApplicationResult.h"
#include "model/DeleteDeviceInternetPortRequest.h"
#include "model/DeleteDeviceInternetPortResult.h"
#include "model/DeleteEpnInstanceRequest.h"
#include "model/DeleteEpnInstanceResult.h"
#include "model/DeleteKeyPairsRequest.h"
#include "model/DeleteKeyPairsResult.h"
#include "model/DeleteLoadBalancerListenerRequest.h"
#include "model/DeleteLoadBalancerListenerResult.h"
#include "model/DeleteNetworkRequest.h"
#include "model/DeleteNetworkResult.h"
#include "model/DeleteSecurityGroupRequest.h"
#include "model/DeleteSecurityGroupResult.h"
#include "model/DeleteVSwitchRequest.h"
#include "model/DeleteVSwitchResult.h"
#include "model/DeleteVmRequest.h"
#include "model/DeleteVmResult.h"
#include "model/DescribeApplicationRequest.h"
#include "model/DescribeApplicationResult.h"
#include "model/DescribeApplicationResourceSummaryRequest.h"
#include "model/DescribeApplicationResourceSummaryResult.h"
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
#include "model/DescribeDisksRequest.h"
#include "model/DescribeDisksResult.h"
#include "model/DescribeEipAddressesRequest.h"
#include "model/DescribeEipAddressesResult.h"
#include "model/DescribeElbAvailableResourceInfoRequest.h"
#include "model/DescribeElbAvailableResourceInfoResult.h"
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
#include "model/DescribeImageInfosRequest.h"
#include "model/DescribeImageInfosResult.h"
#include "model/DescribeImageSharePermissionRequest.h"
#include "model/DescribeImageSharePermissionResult.h"
#include "model/DescribeImagesRequest.h"
#include "model/DescribeImagesResult.h"
#include "model/DescribeInstanceAutoRenewAttributeRequest.h"
#include "model/DescribeInstanceAutoRenewAttributeResult.h"
#include "model/DescribeInstanceMonitorDataRequest.h"
#include "model/DescribeInstanceMonitorDataResult.h"
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
#include "model/DescribeReservedResourceRequest.h"
#include "model/DescribeReservedResourceResult.h"
#include "model/DescribeSecurityGroupAttributeRequest.h"
#include "model/DescribeSecurityGroupAttributeResult.h"
#include "model/DescribeSecurityGroupsRequest.h"
#include "model/DescribeSecurityGroupsResult.h"
#include "model/DescribeServcieScheduleRequest.h"
#include "model/DescribeServcieScheduleResult.h"
#include "model/DescribeUserBandWidthDataRequest.h"
#include "model/DescribeUserBandWidthDataResult.h"
#include "model/DescribeVSwitchesRequest.h"
#include "model/DescribeVSwitchesResult.h"
#include "model/DetachDiskRequest.h"
#include "model/DetachDiskResult.h"
#include "model/DistApplicationDataRequest.h"
#include "model/DistApplicationDataResult.h"
#include "model/ExportBillDetailDataRequest.h"
#include "model/ExportBillDetailDataResult.h"
#include "model/ExportImageRequest.h"
#include "model/ExportImageResult.h"
#include "model/ExportMeasurementDataRequest.h"
#include "model/ExportMeasurementDataResult.h"
#include "model/GetDeviceInternetPortRequest.h"
#include "model/GetDeviceInternetPortResult.h"
#include "model/GetVmListRequest.h"
#include "model/GetVmListResult.h"
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
#include "model/MigrateVmRequest.h"
#include "model/MigrateVmResult.h"
#include "model/ModifyEnsEipAddressAttributeRequest.h"
#include "model/ModifyEnsEipAddressAttributeResult.h"
#include "model/ModifyEpnInstanceRequest.h"
#include "model/ModifyEpnInstanceResult.h"
#include "model/ModifyImageAttributeRequest.h"
#include "model/ModifyImageAttributeResult.h"
#include "model/ModifyImageSharePermissionRequest.h"
#include "model/ModifyImageSharePermissionResult.h"
#include "model/ModifyInstanceAttributeRequest.h"
#include "model/ModifyInstanceAttributeResult.h"
#include "model/ModifyInstanceAutoRenewAttributeRequest.h"
#include "model/ModifyInstanceAutoRenewAttributeResult.h"
#include "model/ModifyLoadBalancerAttributeRequest.h"
#include "model/ModifyLoadBalancerAttributeResult.h"
#include "model/ModifyNetworkAttributeRequest.h"
#include "model/ModifyNetworkAttributeResult.h"
#include "model/ModifySecurityGroupAttributeRequest.h"
#include "model/ModifySecurityGroupAttributeResult.h"
#include "model/ModifyVSwitchAttributeRequest.h"
#include "model/ModifyVSwitchAttributeResult.h"
#include "model/PreCreateEnsServiceRequest.h"
#include "model/PreCreateEnsServiceResult.h"
#include "model/PushApplicationDataRequest.h"
#include "model/PushApplicationDataResult.h"
#include "model/ReInitDiskRequest.h"
#include "model/ReInitDiskResult.h"
#include "model/RebootInstanceRequest.h"
#include "model/RebootInstanceResult.h"
#include "model/ReleaseEipAddressRequest.h"
#include "model/ReleaseEipAddressResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/ReleasePostPaidInstanceRequest.h"
#include "model/ReleasePostPaidInstanceResult.h"
#include "model/ReleasePrePaidInstanceRequest.h"
#include "model/ReleasePrePaidInstanceResult.h"
#include "model/RemoveBackendServersRequest.h"
#include "model/RemoveBackendServersResult.h"
#include "model/RemovePublicIpsFromEpnInstanceRequest.h"
#include "model/RemovePublicIpsFromEpnInstanceResult.h"
#include "model/RemoveVSwitchesFromEpnInstanceRequest.h"
#include "model/RemoveVSwitchesFromEpnInstanceResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/RescaleApplicationRequest.h"
#include "model/RescaleApplicationResult.h"
#include "model/RescaleDeviceServiceRequest.h"
#include "model/RescaleDeviceServiceResult.h"
#include "model/ResetDeviceInstanceRequest.h"
#include "model/ResetDeviceInstanceResult.h"
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
#include "model/SchedulePodRequest.h"
#include "model/SchedulePodResult.h"
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
#include "model/StartLoadBalancerListenerRequest.h"
#include "model/StartLoadBalancerListenerResult.h"
#include "model/StopEpnInstanceRequest.h"
#include "model/StopEpnInstanceResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/StopLoadBalancerListenerRequest.h"
#include "model/StopLoadBalancerListenerResult.h"
#include "model/UnAssociateEnsEipAddressRequest.h"
#include "model/UnAssociateEnsEipAddressResult.h"
#include "model/UnassociateEipAddressRequest.h"
#include "model/UnassociateEipAddressResult.h"
#include "model/UpgradeApplicationRequest.h"
#include "model/UpgradeApplicationResult.h"


namespace AlibabaCloud
{
	namespace Ens
	{
		class ALIBABACLOUD_ENS_EXPORT EnsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddBackendServersResult> AddBackendServersOutcome;
			typedef std::future<AddBackendServersOutcome> AddBackendServersOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AddBackendServersRequest&, const AddBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBackendServersAsyncHandler;
			typedef Outcome<Error, Model::AddDeviceInternetPortResult> AddDeviceInternetPortOutcome;
			typedef std::future<AddDeviceInternetPortOutcome> AddDeviceInternetPortOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AddDeviceInternetPortRequest&, const AddDeviceInternetPortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceInternetPortAsyncHandler;
			typedef Outcome<Error, Model::AddNetworkInterfaceToInstanceResult> AddNetworkInterfaceToInstanceOutcome;
			typedef std::future<AddNetworkInterfaceToInstanceOutcome> AddNetworkInterfaceToInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AddNetworkInterfaceToInstanceRequest&, const AddNetworkInterfaceToInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddNetworkInterfaceToInstanceAsyncHandler;
			typedef Outcome<Error, Model::AllocateEipAddressResult> AllocateEipAddressOutcome;
			typedef std::future<AllocateEipAddressOutcome> AllocateEipAddressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AllocateEipAddressRequest&, const AllocateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::AssociateEipAddressResult> AssociateEipAddressOutcome;
			typedef std::future<AssociateEipAddressOutcome> AssociateEipAddressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AssociateEipAddressRequest&, const AssociateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::AssociateEnsEipAddressResult> AssociateEnsEipAddressOutcome;
			typedef std::future<AssociateEnsEipAddressOutcome> AssociateEnsEipAddressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AssociateEnsEipAddressRequest&, const AssociateEnsEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateEnsEipAddressAsyncHandler;
			typedef Outcome<Error, Model::AttachDiskResult> AttachDiskOutcome;
			typedef std::future<AttachDiskOutcome> AttachDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AttachDiskRequest&, const AttachDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDiskAsyncHandler;
			typedef Outcome<Error, Model::AttachEnsInstancesResult> AttachEnsInstancesOutcome;
			typedef std::future<AttachEnsInstancesOutcome> AttachEnsInstancesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AttachEnsInstancesRequest&, const AttachEnsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachEnsInstancesAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeSecurityGroupResult> AuthorizeSecurityGroupOutcome;
			typedef std::future<AuthorizeSecurityGroupOutcome> AuthorizeSecurityGroupOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AuthorizeSecurityGroupRequest&, const AuthorizeSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeSecurityGroupEgressResult> AuthorizeSecurityGroupEgressOutcome;
			typedef std::future<AuthorizeSecurityGroupEgressOutcome> AuthorizeSecurityGroupEgressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::AuthorizeSecurityGroupEgressRequest&, const AuthorizeSecurityGroupEgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeSecurityGroupEgressAsyncHandler;
			typedef Outcome<Error, Model::CheckQuotaResult> CheckQuotaOutcome;
			typedef std::future<CheckQuotaOutcome> CheckQuotaOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CheckQuotaRequest&, const CheckQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckQuotaAsyncHandler;
			typedef Outcome<Error, Model::ConfigureSecurityGroupPermissionsResult> ConfigureSecurityGroupPermissionsOutcome;
			typedef std::future<ConfigureSecurityGroupPermissionsOutcome> ConfigureSecurityGroupPermissionsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ConfigureSecurityGroupPermissionsRequest&, const ConfigureSecurityGroupPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSecurityGroupPermissionsAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationResult> CreateApplicationOutcome;
			typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateApplicationRequest&, const CreateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreateDiskResult> CreateDiskOutcome;
			typedef std::future<CreateDiskOutcome> CreateDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateDiskRequest&, const CreateDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiskAsyncHandler;
			typedef Outcome<Error, Model::CreateDiskBuyOrderResult> CreateDiskBuyOrderOutcome;
			typedef std::future<CreateDiskBuyOrderOutcome> CreateDiskBuyOrderOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateDiskBuyOrderRequest&, const CreateDiskBuyOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiskBuyOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateEPInstanceResult> CreateEPInstanceOutcome;
			typedef std::future<CreateEPInstanceOutcome> CreateEPInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateEPInstanceRequest&, const CreateEPInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEPInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateEipInstanceResult> CreateEipInstanceOutcome;
			typedef std::future<CreateEipInstanceOutcome> CreateEipInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateEipInstanceRequest&, const CreateEipInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEipInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateElbBuyOrderResult> CreateElbBuyOrderOutcome;
			typedef std::future<CreateElbBuyOrderOutcome> CreateElbBuyOrderOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateElbBuyOrderRequest&, const CreateElbBuyOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateElbBuyOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateEnsServiceResult> CreateEnsServiceOutcome;
			typedef std::future<CreateEnsServiceOutcome> CreateEnsServiceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateEnsServiceRequest&, const CreateEnsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnsServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateEpnInstanceResult> CreateEpnInstanceOutcome;
			typedef std::future<CreateEpnInstanceOutcome> CreateEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateEpnInstanceRequest&, const CreateEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateImageResult> CreateImageOutcome;
			typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateImageRequest&, const CreateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
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
			typedef Outcome<Error, Model::CreateNetworkResult> CreateNetworkOutcome;
			typedef std::future<CreateNetworkOutcome> CreateNetworkOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateNetworkRequest&, const CreateNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAsyncHandler;
			typedef Outcome<Error, Model::CreateSecurityGroupResult> CreateSecurityGroupOutcome;
			typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateSecurityGroupRequest&, const CreateSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateVSwitchResult> CreateVSwitchOutcome;
			typedef std::future<CreateVSwitchOutcome> CreateVSwitchOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateVSwitchRequest&, const CreateVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVSwitchAsyncHandler;
			typedef Outcome<Error, Model::CreateVmAndSaveStockResult> CreateVmAndSaveStockOutcome;
			typedef std::future<CreateVmAndSaveStockOutcome> CreateVmAndSaveStockOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::CreateVmAndSaveStockRequest&, const CreateVmAndSaveStockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVmAndSaveStockAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationResult> DeleteApplicationOutcome;
			typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteApplicationRequest&, const DeleteApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceInternetPortResult> DeleteDeviceInternetPortOutcome;
			typedef std::future<DeleteDeviceInternetPortOutcome> DeleteDeviceInternetPortOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteDeviceInternetPortRequest&, const DeleteDeviceInternetPortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceInternetPortAsyncHandler;
			typedef Outcome<Error, Model::DeleteEpnInstanceResult> DeleteEpnInstanceOutcome;
			typedef std::future<DeleteEpnInstanceOutcome> DeleteEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteEpnInstanceRequest&, const DeleteEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteKeyPairsResult> DeleteKeyPairsOutcome;
			typedef std::future<DeleteKeyPairsOutcome> DeleteKeyPairsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteKeyPairsRequest&, const DeleteKeyPairsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyPairsAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoadBalancerListenerResult> DeleteLoadBalancerListenerOutcome;
			typedef std::future<DeleteLoadBalancerListenerOutcome> DeleteLoadBalancerListenerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteLoadBalancerListenerRequest&, const DeleteLoadBalancerListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerListenerAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkResult> DeleteNetworkOutcome;
			typedef std::future<DeleteNetworkOutcome> DeleteNetworkOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteNetworkRequest&, const DeleteNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecurityGroupResult> DeleteSecurityGroupOutcome;
			typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteSecurityGroupRequest&, const DeleteSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteVSwitchResult> DeleteVSwitchOutcome;
			typedef std::future<DeleteVSwitchOutcome> DeleteVSwitchOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteVSwitchRequest&, const DeleteVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVSwitchAsyncHandler;
			typedef Outcome<Error, Model::DeleteVmResult> DeleteVmOutcome;
			typedef std::future<DeleteVmOutcome> DeleteVmOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DeleteVmRequest&, const DeleteVmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVmAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationResult> DescribeApplicationOutcome;
			typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeApplicationRequest&, const DescribeApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationResourceSummaryResult> DescribeApplicationResourceSummaryOutcome;
			typedef std::future<DescribeApplicationResourceSummaryOutcome> DescribeApplicationResourceSummaryOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeApplicationResourceSummaryRequest&, const DescribeApplicationResourceSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationResourceSummaryAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeDisksResult> DescribeDisksOutcome;
			typedef std::future<DescribeDisksOutcome> DescribeDisksOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeDisksRequest&, const DescribeDisksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksAsyncHandler;
			typedef Outcome<Error, Model::DescribeEipAddressesResult> DescribeEipAddressesOutcome;
			typedef std::future<DescribeEipAddressesOutcome> DescribeEipAddressesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeEipAddressesRequest&, const DescribeEipAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipAddressesAsyncHandler;
			typedef Outcome<Error, Model::DescribeElbAvailableResourceInfoResult> DescribeElbAvailableResourceInfoOutcome;
			typedef std::future<DescribeElbAvailableResourceInfoOutcome> DescribeElbAvailableResourceInfoOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeElbAvailableResourceInfoRequest&, const DescribeElbAvailableResourceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElbAvailableResourceInfoAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeInstanceMonitorDataResult> DescribeInstanceMonitorDataOutcome;
			typedef std::future<DescribeInstanceMonitorDataOutcome> DescribeInstanceMonitorDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeInstanceMonitorDataRequest&, const DescribeInstanceMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceMonitorDataAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeReservedResourceResult> DescribeReservedResourceOutcome;
			typedef std::future<DescribeReservedResourceOutcome> DescribeReservedResourceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeReservedResourceRequest&, const DescribeReservedResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupAttributeResult> DescribeSecurityGroupAttributeOutcome;
			typedef std::future<DescribeSecurityGroupAttributeOutcome> DescribeSecurityGroupAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSecurityGroupAttributeRequest&, const DescribeSecurityGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupsResult> DescribeSecurityGroupsOutcome;
			typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeSecurityGroupsRequest&, const DescribeSecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeServcieScheduleResult> DescribeServcieScheduleOutcome;
			typedef std::future<DescribeServcieScheduleOutcome> DescribeServcieScheduleOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeServcieScheduleRequest&, const DescribeServcieScheduleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServcieScheduleAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserBandWidthDataResult> DescribeUserBandWidthDataOutcome;
			typedef std::future<DescribeUserBandWidthDataOutcome> DescribeUserBandWidthDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeUserBandWidthDataRequest&, const DescribeUserBandWidthDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBandWidthDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchesResult> DescribeVSwitchesOutcome;
			typedef std::future<DescribeVSwitchesOutcome> DescribeVSwitchesOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DescribeVSwitchesRequest&, const DescribeVSwitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchesAsyncHandler;
			typedef Outcome<Error, Model::DetachDiskResult> DetachDiskOutcome;
			typedef std::future<DetachDiskOutcome> DetachDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::DetachDiskRequest&, const DetachDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachDiskAsyncHandler;
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
			typedef Outcome<Error, Model::GetDeviceInternetPortResult> GetDeviceInternetPortOutcome;
			typedef std::future<GetDeviceInternetPortOutcome> GetDeviceInternetPortOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::GetDeviceInternetPortRequest&, const GetDeviceInternetPortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceInternetPortAsyncHandler;
			typedef Outcome<Error, Model::GetVmListResult> GetVmListOutcome;
			typedef std::future<GetVmListOutcome> GetVmListOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::GetVmListRequest&, const GetVmListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVmListAsyncHandler;
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
			typedef Outcome<Error, Model::MigrateVmResult> MigrateVmOutcome;
			typedef std::future<MigrateVmOutcome> MigrateVmOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::MigrateVmRequest&, const MigrateVmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateVmAsyncHandler;
			typedef Outcome<Error, Model::ModifyEnsEipAddressAttributeResult> ModifyEnsEipAddressAttributeOutcome;
			typedef std::future<ModifyEnsEipAddressAttributeOutcome> ModifyEnsEipAddressAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyEnsEipAddressAttributeRequest&, const ModifyEnsEipAddressAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnsEipAddressAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyEpnInstanceResult> ModifyEpnInstanceOutcome;
			typedef std::future<ModifyEpnInstanceOutcome> ModifyEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyEpnInstanceRequest&, const ModifyEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEpnInstanceAsyncHandler;
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
			typedef Outcome<Error, Model::ModifyLoadBalancerAttributeResult> ModifyLoadBalancerAttributeOutcome;
			typedef std::future<ModifyLoadBalancerAttributeOutcome> ModifyLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyLoadBalancerAttributeRequest&, const ModifyLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyNetworkAttributeResult> ModifyNetworkAttributeOutcome;
			typedef std::future<ModifyNetworkAttributeOutcome> ModifyNetworkAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyNetworkAttributeRequest&, const ModifyNetworkAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupAttributeResult> ModifySecurityGroupAttributeOutcome;
			typedef std::future<ModifySecurityGroupAttributeOutcome> ModifySecurityGroupAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifySecurityGroupAttributeRequest&, const ModifySecurityGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVSwitchAttributeResult> ModifyVSwitchAttributeOutcome;
			typedef std::future<ModifyVSwitchAttributeOutcome> ModifyVSwitchAttributeOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ModifyVSwitchAttributeRequest&, const ModifyVSwitchAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVSwitchAttributeAsyncHandler;
			typedef Outcome<Error, Model::PreCreateEnsServiceResult> PreCreateEnsServiceOutcome;
			typedef std::future<PreCreateEnsServiceOutcome> PreCreateEnsServiceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::PreCreateEnsServiceRequest&, const PreCreateEnsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreCreateEnsServiceAsyncHandler;
			typedef Outcome<Error, Model::PushApplicationDataResult> PushApplicationDataOutcome;
			typedef std::future<PushApplicationDataOutcome> PushApplicationDataOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::PushApplicationDataRequest&, const PushApplicationDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushApplicationDataAsyncHandler;
			typedef Outcome<Error, Model::ReInitDiskResult> ReInitDiskOutcome;
			typedef std::future<ReInitDiskOutcome> ReInitDiskOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ReInitDiskRequest&, const ReInitDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReInitDiskAsyncHandler;
			typedef Outcome<Error, Model::RebootInstanceResult> RebootInstanceOutcome;
			typedef std::future<RebootInstanceOutcome> RebootInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RebootInstanceRequest&, const RebootInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseEipAddressResult> ReleaseEipAddressOutcome;
			typedef std::future<ReleaseEipAddressOutcome> ReleaseEipAddressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ReleaseEipAddressRequest&, const ReleaseEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseEipAddressAsyncHandler;
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
			typedef Outcome<Error, Model::RemovePublicIpsFromEpnInstanceResult> RemovePublicIpsFromEpnInstanceOutcome;
			typedef std::future<RemovePublicIpsFromEpnInstanceOutcome> RemovePublicIpsFromEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RemovePublicIpsFromEpnInstanceRequest&, const RemovePublicIpsFromEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePublicIpsFromEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::RemoveVSwitchesFromEpnInstanceResult> RemoveVSwitchesFromEpnInstanceOutcome;
			typedef std::future<RemoveVSwitchesFromEpnInstanceOutcome> RemoveVSwitchesFromEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RemoveVSwitchesFromEpnInstanceRequest&, const RemoveVSwitchesFromEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveVSwitchesFromEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::RescaleApplicationResult> RescaleApplicationOutcome;
			typedef std::future<RescaleApplicationOutcome> RescaleApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RescaleApplicationRequest&, const RescaleApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RescaleApplicationAsyncHandler;
			typedef Outcome<Error, Model::RescaleDeviceServiceResult> RescaleDeviceServiceOutcome;
			typedef std::future<RescaleDeviceServiceOutcome> RescaleDeviceServiceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::RescaleDeviceServiceRequest&, const RescaleDeviceServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RescaleDeviceServiceAsyncHandler;
			typedef Outcome<Error, Model::ResetDeviceInstanceResult> ResetDeviceInstanceOutcome;
			typedef std::future<ResetDeviceInstanceOutcome> ResetDeviceInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::ResetDeviceInstanceRequest&, const ResetDeviceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetDeviceInstanceAsyncHandler;
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
			typedef Outcome<Error, Model::SchedulePodResult> SchedulePodOutcome;
			typedef std::future<SchedulePodOutcome> SchedulePodOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::SchedulePodRequest&, const SchedulePodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SchedulePodAsyncHandler;
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
			typedef Outcome<Error, Model::StartLoadBalancerListenerResult> StartLoadBalancerListenerOutcome;
			typedef std::future<StartLoadBalancerListenerOutcome> StartLoadBalancerListenerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StartLoadBalancerListenerRequest&, const StartLoadBalancerListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLoadBalancerListenerAsyncHandler;
			typedef Outcome<Error, Model::StopEpnInstanceResult> StopEpnInstanceOutcome;
			typedef std::future<StopEpnInstanceOutcome> StopEpnInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StopEpnInstanceRequest&, const StopEpnInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopEpnInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopLoadBalancerListenerResult> StopLoadBalancerListenerOutcome;
			typedef std::future<StopLoadBalancerListenerOutcome> StopLoadBalancerListenerOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::StopLoadBalancerListenerRequest&, const StopLoadBalancerListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLoadBalancerListenerAsyncHandler;
			typedef Outcome<Error, Model::UnAssociateEnsEipAddressResult> UnAssociateEnsEipAddressOutcome;
			typedef std::future<UnAssociateEnsEipAddressOutcome> UnAssociateEnsEipAddressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UnAssociateEnsEipAddressRequest&, const UnAssociateEnsEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnAssociateEnsEipAddressAsyncHandler;
			typedef Outcome<Error, Model::UnassociateEipAddressResult> UnassociateEipAddressOutcome;
			typedef std::future<UnassociateEipAddressOutcome> UnassociateEipAddressOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UnassociateEipAddressRequest&, const UnassociateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::UpgradeApplicationResult> UpgradeApplicationOutcome;
			typedef std::future<UpgradeApplicationOutcome> UpgradeApplicationOutcomeCallable;
			typedef std::function<void(const EnsClient*, const Model::UpgradeApplicationRequest&, const UpgradeApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeApplicationAsyncHandler;

			EnsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EnsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EnsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EnsClient();
			AddBackendServersOutcome addBackendServers(const Model::AddBackendServersRequest &request)const;
			void addBackendServersAsync(const Model::AddBackendServersRequest& request, const AddBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBackendServersOutcomeCallable addBackendServersCallable(const Model::AddBackendServersRequest& request) const;
			AddDeviceInternetPortOutcome addDeviceInternetPort(const Model::AddDeviceInternetPortRequest &request)const;
			void addDeviceInternetPortAsync(const Model::AddDeviceInternetPortRequest& request, const AddDeviceInternetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDeviceInternetPortOutcomeCallable addDeviceInternetPortCallable(const Model::AddDeviceInternetPortRequest& request) const;
			AddNetworkInterfaceToInstanceOutcome addNetworkInterfaceToInstance(const Model::AddNetworkInterfaceToInstanceRequest &request)const;
			void addNetworkInterfaceToInstanceAsync(const Model::AddNetworkInterfaceToInstanceRequest& request, const AddNetworkInterfaceToInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddNetworkInterfaceToInstanceOutcomeCallable addNetworkInterfaceToInstanceCallable(const Model::AddNetworkInterfaceToInstanceRequest& request) const;
			AllocateEipAddressOutcome allocateEipAddress(const Model::AllocateEipAddressRequest &request)const;
			void allocateEipAddressAsync(const Model::AllocateEipAddressRequest& request, const AllocateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateEipAddressOutcomeCallable allocateEipAddressCallable(const Model::AllocateEipAddressRequest& request) const;
			AssociateEipAddressOutcome associateEipAddress(const Model::AssociateEipAddressRequest &request)const;
			void associateEipAddressAsync(const Model::AssociateEipAddressRequest& request, const AssociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateEipAddressOutcomeCallable associateEipAddressCallable(const Model::AssociateEipAddressRequest& request) const;
			AssociateEnsEipAddressOutcome associateEnsEipAddress(const Model::AssociateEnsEipAddressRequest &request)const;
			void associateEnsEipAddressAsync(const Model::AssociateEnsEipAddressRequest& request, const AssociateEnsEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateEnsEipAddressOutcomeCallable associateEnsEipAddressCallable(const Model::AssociateEnsEipAddressRequest& request) const;
			AttachDiskOutcome attachDisk(const Model::AttachDiskRequest &request)const;
			void attachDiskAsync(const Model::AttachDiskRequest& request, const AttachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDiskOutcomeCallable attachDiskCallable(const Model::AttachDiskRequest& request) const;
			AttachEnsInstancesOutcome attachEnsInstances(const Model::AttachEnsInstancesRequest &request)const;
			void attachEnsInstancesAsync(const Model::AttachEnsInstancesRequest& request, const AttachEnsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachEnsInstancesOutcomeCallable attachEnsInstancesCallable(const Model::AttachEnsInstancesRequest& request) const;
			AuthorizeSecurityGroupOutcome authorizeSecurityGroup(const Model::AuthorizeSecurityGroupRequest &request)const;
			void authorizeSecurityGroupAsync(const Model::AuthorizeSecurityGroupRequest& request, const AuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeSecurityGroupOutcomeCallable authorizeSecurityGroupCallable(const Model::AuthorizeSecurityGroupRequest& request) const;
			AuthorizeSecurityGroupEgressOutcome authorizeSecurityGroupEgress(const Model::AuthorizeSecurityGroupEgressRequest &request)const;
			void authorizeSecurityGroupEgressAsync(const Model::AuthorizeSecurityGroupEgressRequest& request, const AuthorizeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeSecurityGroupEgressOutcomeCallable authorizeSecurityGroupEgressCallable(const Model::AuthorizeSecurityGroupEgressRequest& request) const;
			CheckQuotaOutcome checkQuota(const Model::CheckQuotaRequest &request)const;
			void checkQuotaAsync(const Model::CheckQuotaRequest& request, const CheckQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckQuotaOutcomeCallable checkQuotaCallable(const Model::CheckQuotaRequest& request) const;
			ConfigureSecurityGroupPermissionsOutcome configureSecurityGroupPermissions(const Model::ConfigureSecurityGroupPermissionsRequest &request)const;
			void configureSecurityGroupPermissionsAsync(const Model::ConfigureSecurityGroupPermissionsRequest& request, const ConfigureSecurityGroupPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSecurityGroupPermissionsOutcomeCallable configureSecurityGroupPermissionsCallable(const Model::ConfigureSecurityGroupPermissionsRequest& request) const;
			CreateApplicationOutcome createApplication(const Model::CreateApplicationRequest &request)const;
			void createApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationOutcomeCallable createApplicationCallable(const Model::CreateApplicationRequest& request) const;
			CreateDiskOutcome createDisk(const Model::CreateDiskRequest &request)const;
			void createDiskAsync(const Model::CreateDiskRequest& request, const CreateDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDiskOutcomeCallable createDiskCallable(const Model::CreateDiskRequest& request) const;
			CreateDiskBuyOrderOutcome createDiskBuyOrder(const Model::CreateDiskBuyOrderRequest &request)const;
			void createDiskBuyOrderAsync(const Model::CreateDiskBuyOrderRequest& request, const CreateDiskBuyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDiskBuyOrderOutcomeCallable createDiskBuyOrderCallable(const Model::CreateDiskBuyOrderRequest& request) const;
			CreateEPInstanceOutcome createEPInstance(const Model::CreateEPInstanceRequest &request)const;
			void createEPInstanceAsync(const Model::CreateEPInstanceRequest& request, const CreateEPInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEPInstanceOutcomeCallable createEPInstanceCallable(const Model::CreateEPInstanceRequest& request) const;
			CreateEipInstanceOutcome createEipInstance(const Model::CreateEipInstanceRequest &request)const;
			void createEipInstanceAsync(const Model::CreateEipInstanceRequest& request, const CreateEipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEipInstanceOutcomeCallable createEipInstanceCallable(const Model::CreateEipInstanceRequest& request) const;
			CreateElbBuyOrderOutcome createElbBuyOrder(const Model::CreateElbBuyOrderRequest &request)const;
			void createElbBuyOrderAsync(const Model::CreateElbBuyOrderRequest& request, const CreateElbBuyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateElbBuyOrderOutcomeCallable createElbBuyOrderCallable(const Model::CreateElbBuyOrderRequest& request) const;
			CreateEnsServiceOutcome createEnsService(const Model::CreateEnsServiceRequest &request)const;
			void createEnsServiceAsync(const Model::CreateEnsServiceRequest& request, const CreateEnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnsServiceOutcomeCallable createEnsServiceCallable(const Model::CreateEnsServiceRequest& request) const;
			CreateEpnInstanceOutcome createEpnInstance(const Model::CreateEpnInstanceRequest &request)const;
			void createEpnInstanceAsync(const Model::CreateEpnInstanceRequest& request, const CreateEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEpnInstanceOutcomeCallable createEpnInstanceCallable(const Model::CreateEpnInstanceRequest& request) const;
			CreateImageOutcome createImage(const Model::CreateImageRequest &request)const;
			void createImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateImageOutcomeCallable createImageCallable(const Model::CreateImageRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
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
			CreateNetworkOutcome createNetwork(const Model::CreateNetworkRequest &request)const;
			void createNetworkAsync(const Model::CreateNetworkRequest& request, const CreateNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkOutcomeCallable createNetworkCallable(const Model::CreateNetworkRequest& request) const;
			CreateSecurityGroupOutcome createSecurityGroup(const Model::CreateSecurityGroupRequest &request)const;
			void createSecurityGroupAsync(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecurityGroupOutcomeCallable createSecurityGroupCallable(const Model::CreateSecurityGroupRequest& request) const;
			CreateVSwitchOutcome createVSwitch(const Model::CreateVSwitchRequest &request)const;
			void createVSwitchAsync(const Model::CreateVSwitchRequest& request, const CreateVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVSwitchOutcomeCallable createVSwitchCallable(const Model::CreateVSwitchRequest& request) const;
			CreateVmAndSaveStockOutcome createVmAndSaveStock(const Model::CreateVmAndSaveStockRequest &request)const;
			void createVmAndSaveStockAsync(const Model::CreateVmAndSaveStockRequest& request, const CreateVmAndSaveStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVmAndSaveStockOutcomeCallable createVmAndSaveStockCallable(const Model::CreateVmAndSaveStockRequest& request) const;
			DeleteApplicationOutcome deleteApplication(const Model::DeleteApplicationRequest &request)const;
			void deleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationOutcomeCallable deleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;
			DeleteDeviceInternetPortOutcome deleteDeviceInternetPort(const Model::DeleteDeviceInternetPortRequest &request)const;
			void deleteDeviceInternetPortAsync(const Model::DeleteDeviceInternetPortRequest& request, const DeleteDeviceInternetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceInternetPortOutcomeCallable deleteDeviceInternetPortCallable(const Model::DeleteDeviceInternetPortRequest& request) const;
			DeleteEpnInstanceOutcome deleteEpnInstance(const Model::DeleteEpnInstanceRequest &request)const;
			void deleteEpnInstanceAsync(const Model::DeleteEpnInstanceRequest& request, const DeleteEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEpnInstanceOutcomeCallable deleteEpnInstanceCallable(const Model::DeleteEpnInstanceRequest& request) const;
			DeleteKeyPairsOutcome deleteKeyPairs(const Model::DeleteKeyPairsRequest &request)const;
			void deleteKeyPairsAsync(const Model::DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteKeyPairsOutcomeCallable deleteKeyPairsCallable(const Model::DeleteKeyPairsRequest& request) const;
			DeleteLoadBalancerListenerOutcome deleteLoadBalancerListener(const Model::DeleteLoadBalancerListenerRequest &request)const;
			void deleteLoadBalancerListenerAsync(const Model::DeleteLoadBalancerListenerRequest& request, const DeleteLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoadBalancerListenerOutcomeCallable deleteLoadBalancerListenerCallable(const Model::DeleteLoadBalancerListenerRequest& request) const;
			DeleteNetworkOutcome deleteNetwork(const Model::DeleteNetworkRequest &request)const;
			void deleteNetworkAsync(const Model::DeleteNetworkRequest& request, const DeleteNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkOutcomeCallable deleteNetworkCallable(const Model::DeleteNetworkRequest& request) const;
			DeleteSecurityGroupOutcome deleteSecurityGroup(const Model::DeleteSecurityGroupRequest &request)const;
			void deleteSecurityGroupAsync(const Model::DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecurityGroupOutcomeCallable deleteSecurityGroupCallable(const Model::DeleteSecurityGroupRequest& request) const;
			DeleteVSwitchOutcome deleteVSwitch(const Model::DeleteVSwitchRequest &request)const;
			void deleteVSwitchAsync(const Model::DeleteVSwitchRequest& request, const DeleteVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVSwitchOutcomeCallable deleteVSwitchCallable(const Model::DeleteVSwitchRequest& request) const;
			DeleteVmOutcome deleteVm(const Model::DeleteVmRequest &request)const;
			void deleteVmAsync(const Model::DeleteVmRequest& request, const DeleteVmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVmOutcomeCallable deleteVmCallable(const Model::DeleteVmRequest& request) const;
			DescribeApplicationOutcome describeApplication(const Model::DescribeApplicationRequest &request)const;
			void describeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationOutcomeCallable describeApplicationCallable(const Model::DescribeApplicationRequest& request) const;
			DescribeApplicationResourceSummaryOutcome describeApplicationResourceSummary(const Model::DescribeApplicationResourceSummaryRequest &request)const;
			void describeApplicationResourceSummaryAsync(const Model::DescribeApplicationResourceSummaryRequest& request, const DescribeApplicationResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationResourceSummaryOutcomeCallable describeApplicationResourceSummaryCallable(const Model::DescribeApplicationResourceSummaryRequest& request) const;
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
			DescribeDisksOutcome describeDisks(const Model::DescribeDisksRequest &request)const;
			void describeDisksAsync(const Model::DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDisksOutcomeCallable describeDisksCallable(const Model::DescribeDisksRequest& request) const;
			DescribeEipAddressesOutcome describeEipAddresses(const Model::DescribeEipAddressesRequest &request)const;
			void describeEipAddressesAsync(const Model::DescribeEipAddressesRequest& request, const DescribeEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEipAddressesOutcomeCallable describeEipAddressesCallable(const Model::DescribeEipAddressesRequest& request) const;
			DescribeElbAvailableResourceInfoOutcome describeElbAvailableResourceInfo(const Model::DescribeElbAvailableResourceInfoRequest &request)const;
			void describeElbAvailableResourceInfoAsync(const Model::DescribeElbAvailableResourceInfoRequest& request, const DescribeElbAvailableResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElbAvailableResourceInfoOutcomeCallable describeElbAvailableResourceInfoCallable(const Model::DescribeElbAvailableResourceInfoRequest& request) const;
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
			DescribeInstanceMonitorDataOutcome describeInstanceMonitorData(const Model::DescribeInstanceMonitorDataRequest &request)const;
			void describeInstanceMonitorDataAsync(const Model::DescribeInstanceMonitorDataRequest& request, const DescribeInstanceMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceMonitorDataOutcomeCallable describeInstanceMonitorDataCallable(const Model::DescribeInstanceMonitorDataRequest& request) const;
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
			DescribeReservedResourceOutcome describeReservedResource(const Model::DescribeReservedResourceRequest &request)const;
			void describeReservedResourceAsync(const Model::DescribeReservedResourceRequest& request, const DescribeReservedResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReservedResourceOutcomeCallable describeReservedResourceCallable(const Model::DescribeReservedResourceRequest& request) const;
			DescribeSecurityGroupAttributeOutcome describeSecurityGroupAttribute(const Model::DescribeSecurityGroupAttributeRequest &request)const;
			void describeSecurityGroupAttributeAsync(const Model::DescribeSecurityGroupAttributeRequest& request, const DescribeSecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupAttributeOutcomeCallable describeSecurityGroupAttributeCallable(const Model::DescribeSecurityGroupAttributeRequest& request) const;
			DescribeSecurityGroupsOutcome describeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request)const;
			void describeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupsOutcomeCallable describeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request) const;
			DescribeServcieScheduleOutcome describeServcieSchedule(const Model::DescribeServcieScheduleRequest &request)const;
			void describeServcieScheduleAsync(const Model::DescribeServcieScheduleRequest& request, const DescribeServcieScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServcieScheduleOutcomeCallable describeServcieScheduleCallable(const Model::DescribeServcieScheduleRequest& request) const;
			DescribeUserBandWidthDataOutcome describeUserBandWidthData(const Model::DescribeUserBandWidthDataRequest &request)const;
			void describeUserBandWidthDataAsync(const Model::DescribeUserBandWidthDataRequest& request, const DescribeUserBandWidthDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserBandWidthDataOutcomeCallable describeUserBandWidthDataCallable(const Model::DescribeUserBandWidthDataRequest& request) const;
			DescribeVSwitchesOutcome describeVSwitches(const Model::DescribeVSwitchesRequest &request)const;
			void describeVSwitchesAsync(const Model::DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchesOutcomeCallable describeVSwitchesCallable(const Model::DescribeVSwitchesRequest& request) const;
			DetachDiskOutcome detachDisk(const Model::DetachDiskRequest &request)const;
			void detachDiskAsync(const Model::DetachDiskRequest& request, const DetachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachDiskOutcomeCallable detachDiskCallable(const Model::DetachDiskRequest& request) const;
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
			GetDeviceInternetPortOutcome getDeviceInternetPort(const Model::GetDeviceInternetPortRequest &request)const;
			void getDeviceInternetPortAsync(const Model::GetDeviceInternetPortRequest& request, const GetDeviceInternetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceInternetPortOutcomeCallable getDeviceInternetPortCallable(const Model::GetDeviceInternetPortRequest& request) const;
			GetVmListOutcome getVmList(const Model::GetVmListRequest &request)const;
			void getVmListAsync(const Model::GetVmListRequest& request, const GetVmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVmListOutcomeCallable getVmListCallable(const Model::GetVmListRequest& request) const;
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
			MigrateVmOutcome migrateVm(const Model::MigrateVmRequest &request)const;
			void migrateVmAsync(const Model::MigrateVmRequest& request, const MigrateVmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateVmOutcomeCallable migrateVmCallable(const Model::MigrateVmRequest& request) const;
			ModifyEnsEipAddressAttributeOutcome modifyEnsEipAddressAttribute(const Model::ModifyEnsEipAddressAttributeRequest &request)const;
			void modifyEnsEipAddressAttributeAsync(const Model::ModifyEnsEipAddressAttributeRequest& request, const ModifyEnsEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEnsEipAddressAttributeOutcomeCallable modifyEnsEipAddressAttributeCallable(const Model::ModifyEnsEipAddressAttributeRequest& request) const;
			ModifyEpnInstanceOutcome modifyEpnInstance(const Model::ModifyEpnInstanceRequest &request)const;
			void modifyEpnInstanceAsync(const Model::ModifyEpnInstanceRequest& request, const ModifyEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEpnInstanceOutcomeCallable modifyEpnInstanceCallable(const Model::ModifyEpnInstanceRequest& request) const;
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
			ModifyLoadBalancerAttributeOutcome modifyLoadBalancerAttribute(const Model::ModifyLoadBalancerAttributeRequest &request)const;
			void modifyLoadBalancerAttributeAsync(const Model::ModifyLoadBalancerAttributeRequest& request, const ModifyLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoadBalancerAttributeOutcomeCallable modifyLoadBalancerAttributeCallable(const Model::ModifyLoadBalancerAttributeRequest& request) const;
			ModifyNetworkAttributeOutcome modifyNetworkAttribute(const Model::ModifyNetworkAttributeRequest &request)const;
			void modifyNetworkAttributeAsync(const Model::ModifyNetworkAttributeRequest& request, const ModifyNetworkAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNetworkAttributeOutcomeCallable modifyNetworkAttributeCallable(const Model::ModifyNetworkAttributeRequest& request) const;
			ModifySecurityGroupAttributeOutcome modifySecurityGroupAttribute(const Model::ModifySecurityGroupAttributeRequest &request)const;
			void modifySecurityGroupAttributeAsync(const Model::ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupAttributeOutcomeCallable modifySecurityGroupAttributeCallable(const Model::ModifySecurityGroupAttributeRequest& request) const;
			ModifyVSwitchAttributeOutcome modifyVSwitchAttribute(const Model::ModifyVSwitchAttributeRequest &request)const;
			void modifyVSwitchAttributeAsync(const Model::ModifyVSwitchAttributeRequest& request, const ModifyVSwitchAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVSwitchAttributeOutcomeCallable modifyVSwitchAttributeCallable(const Model::ModifyVSwitchAttributeRequest& request) const;
			PreCreateEnsServiceOutcome preCreateEnsService(const Model::PreCreateEnsServiceRequest &request)const;
			void preCreateEnsServiceAsync(const Model::PreCreateEnsServiceRequest& request, const PreCreateEnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreCreateEnsServiceOutcomeCallable preCreateEnsServiceCallable(const Model::PreCreateEnsServiceRequest& request) const;
			PushApplicationDataOutcome pushApplicationData(const Model::PushApplicationDataRequest &request)const;
			void pushApplicationDataAsync(const Model::PushApplicationDataRequest& request, const PushApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushApplicationDataOutcomeCallable pushApplicationDataCallable(const Model::PushApplicationDataRequest& request) const;
			ReInitDiskOutcome reInitDisk(const Model::ReInitDiskRequest &request)const;
			void reInitDiskAsync(const Model::ReInitDiskRequest& request, const ReInitDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReInitDiskOutcomeCallable reInitDiskCallable(const Model::ReInitDiskRequest& request) const;
			RebootInstanceOutcome rebootInstance(const Model::RebootInstanceRequest &request)const;
			void rebootInstanceAsync(const Model::RebootInstanceRequest& request, const RebootInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootInstanceOutcomeCallable rebootInstanceCallable(const Model::RebootInstanceRequest& request) const;
			ReleaseEipAddressOutcome releaseEipAddress(const Model::ReleaseEipAddressRequest &request)const;
			void releaseEipAddressAsync(const Model::ReleaseEipAddressRequest& request, const ReleaseEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseEipAddressOutcomeCallable releaseEipAddressCallable(const Model::ReleaseEipAddressRequest& request) const;
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
			RemovePublicIpsFromEpnInstanceOutcome removePublicIpsFromEpnInstance(const Model::RemovePublicIpsFromEpnInstanceRequest &request)const;
			void removePublicIpsFromEpnInstanceAsync(const Model::RemovePublicIpsFromEpnInstanceRequest& request, const RemovePublicIpsFromEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePublicIpsFromEpnInstanceOutcomeCallable removePublicIpsFromEpnInstanceCallable(const Model::RemovePublicIpsFromEpnInstanceRequest& request) const;
			RemoveVSwitchesFromEpnInstanceOutcome removeVSwitchesFromEpnInstance(const Model::RemoveVSwitchesFromEpnInstanceRequest &request)const;
			void removeVSwitchesFromEpnInstanceAsync(const Model::RemoveVSwitchesFromEpnInstanceRequest& request, const RemoveVSwitchesFromEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveVSwitchesFromEpnInstanceOutcomeCallable removeVSwitchesFromEpnInstanceCallable(const Model::RemoveVSwitchesFromEpnInstanceRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			RescaleApplicationOutcome rescaleApplication(const Model::RescaleApplicationRequest &request)const;
			void rescaleApplicationAsync(const Model::RescaleApplicationRequest& request, const RescaleApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RescaleApplicationOutcomeCallable rescaleApplicationCallable(const Model::RescaleApplicationRequest& request) const;
			RescaleDeviceServiceOutcome rescaleDeviceService(const Model::RescaleDeviceServiceRequest &request)const;
			void rescaleDeviceServiceAsync(const Model::RescaleDeviceServiceRequest& request, const RescaleDeviceServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RescaleDeviceServiceOutcomeCallable rescaleDeviceServiceCallable(const Model::RescaleDeviceServiceRequest& request) const;
			ResetDeviceInstanceOutcome resetDeviceInstance(const Model::ResetDeviceInstanceRequest &request)const;
			void resetDeviceInstanceAsync(const Model::ResetDeviceInstanceRequest& request, const ResetDeviceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetDeviceInstanceOutcomeCallable resetDeviceInstanceCallable(const Model::ResetDeviceInstanceRequest& request) const;
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
			SchedulePodOutcome schedulePod(const Model::SchedulePodRequest &request)const;
			void schedulePodAsync(const Model::SchedulePodRequest& request, const SchedulePodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SchedulePodOutcomeCallable schedulePodCallable(const Model::SchedulePodRequest& request) const;
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
			StartLoadBalancerListenerOutcome startLoadBalancerListener(const Model::StartLoadBalancerListenerRequest &request)const;
			void startLoadBalancerListenerAsync(const Model::StartLoadBalancerListenerRequest& request, const StartLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLoadBalancerListenerOutcomeCallable startLoadBalancerListenerCallable(const Model::StartLoadBalancerListenerRequest& request) const;
			StopEpnInstanceOutcome stopEpnInstance(const Model::StopEpnInstanceRequest &request)const;
			void stopEpnInstanceAsync(const Model::StopEpnInstanceRequest& request, const StopEpnInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopEpnInstanceOutcomeCallable stopEpnInstanceCallable(const Model::StopEpnInstanceRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			StopLoadBalancerListenerOutcome stopLoadBalancerListener(const Model::StopLoadBalancerListenerRequest &request)const;
			void stopLoadBalancerListenerAsync(const Model::StopLoadBalancerListenerRequest& request, const StopLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLoadBalancerListenerOutcomeCallable stopLoadBalancerListenerCallable(const Model::StopLoadBalancerListenerRequest& request) const;
			UnAssociateEnsEipAddressOutcome unAssociateEnsEipAddress(const Model::UnAssociateEnsEipAddressRequest &request)const;
			void unAssociateEnsEipAddressAsync(const Model::UnAssociateEnsEipAddressRequest& request, const UnAssociateEnsEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnAssociateEnsEipAddressOutcomeCallable unAssociateEnsEipAddressCallable(const Model::UnAssociateEnsEipAddressRequest& request) const;
			UnassociateEipAddressOutcome unassociateEipAddress(const Model::UnassociateEipAddressRequest &request)const;
			void unassociateEipAddressAsync(const Model::UnassociateEipAddressRequest& request, const UnassociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateEipAddressOutcomeCallable unassociateEipAddressCallable(const Model::UnassociateEipAddressRequest& request) const;
			UpgradeApplicationOutcome upgradeApplication(const Model::UpgradeApplicationRequest &request)const;
			void upgradeApplicationAsync(const Model::UpgradeApplicationRequest& request, const UpgradeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeApplicationOutcomeCallable upgradeApplicationCallable(const Model::UpgradeApplicationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ENS_ENSCLIENT_H_
