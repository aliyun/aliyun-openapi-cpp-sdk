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

#ifndef ALIBABACLOUD_VPC_VPCCLIENT_H_
#define ALIBABACLOUD_VPC_VPCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "VpcExport.h"
#include "model/UnassociateGlobalAccelerationInstanceRequest.h"
#include "model/UnassociateGlobalAccelerationInstanceResult.h"
#include "model/DeleteCustomerGatewayRequest.h"
#include "model/DeleteCustomerGatewayResult.h"
#include "model/DescribeRouteTableListRequest.h"
#include "model/DescribeRouteTableListResult.h"
#include "model/AssociatePhysicalConnectionToVirtualBorderRouterRequest.h"
#include "model/AssociatePhysicalConnectionToVirtualBorderRouterResult.h"
#include "model/DeleteGlobalAccelerationInstanceRequest.h"
#include "model/DeleteGlobalAccelerationInstanceResult.h"
#include "model/DescribeCustomerGatewaysRequest.h"
#include "model/DescribeCustomerGatewaysResult.h"
#include "model/DescribeGlobalAccelerationInstancesRequest.h"
#include "model/DescribeGlobalAccelerationInstancesResult.h"
#include "model/ModifySslVpnClientCertRequest.h"
#include "model/ModifySslVpnClientCertResult.h"
#include "model/DeleteVpcRequest.h"
#include "model/DeleteVpcResult.h"
#include "model/DownloadVpnConnectionConfigRequest.h"
#include "model/DownloadVpnConnectionConfigResult.h"
#include "model/RemoveCommonBandwidthPackageIpRequest.h"
#include "model/RemoveCommonBandwidthPackageIpResult.h"
#include "model/ModifyBandwidthPackageSpecRequest.h"
#include "model/ModifyBandwidthPackageSpecResult.h"
#include "model/CreateNatGatewayRequest.h"
#include "model/CreateNatGatewayResult.h"
#include "model/DeleteVSwitchRequest.h"
#include "model/DeleteVSwitchResult.h"
#include "model/CreateHaVipRequest.h"
#include "model/CreateHaVipResult.h"
#include "model/CreateBandwidthPackageRequest.h"
#include "model/CreateBandwidthPackageResult.h"
#include "model/RecoverVirtualBorderRouterRequest.h"
#include "model/RecoverVirtualBorderRouterResult.h"
#include "model/AssociateEipAddressRequest.h"
#include "model/AssociateEipAddressResult.h"
#include "model/DescribeEipAddressesRequest.h"
#include "model/DescribeEipAddressesResult.h"
#include "model/CreateCustomerGatewayRequest.h"
#include "model/CreateCustomerGatewayResult.h"
#include "model/ActivateRouterInterfaceRequest.h"
#include "model/ActivateRouterInterfaceResult.h"
#include "model/DeleteSslVpnServerRequest.h"
#include "model/DeleteSslVpnServerResult.h"
#include "model/DeleteBandwidthPackageRequest.h"
#include "model/DeleteBandwidthPackageResult.h"
#include "model/DeleteBgpPeerRequest.h"
#include "model/DeleteBgpPeerResult.h"
#include "model/DeleteNqaRequest.h"
#include "model/DeleteNqaResult.h"
#include "model/TerminateVirtualBorderRouterRequest.h"
#include "model/TerminateVirtualBorderRouterResult.h"
#include "model/ModifyRouteTableAttributesRequest.h"
#include "model/ModifyRouteTableAttributesResult.h"
#include "model/DeletePhysicalConnectionRequest.h"
#include "model/DeletePhysicalConnectionResult.h"
#include "model/ModifyForwardEntryRequest.h"
#include "model/ModifyForwardEntryResult.h"
#include "model/CreateVpcRequest.h"
#include "model/CreateVpcResult.h"
#include "model/DescribeForwardTableEntriesRequest.h"
#include "model/DescribeForwardTableEntriesResult.h"
#include "model/UnassociateEipAddressRequest.h"
#include "model/UnassociateEipAddressResult.h"
#include "model/DescribeSslVpnClientCertsRequest.h"
#include "model/DescribeSslVpnClientCertsResult.h"
#include "model/DescribeVpnConnectionRequest.h"
#include "model/DescribeVpnConnectionResult.h"
#include "model/ModifyGlobalAccelerationInstanceSpecRequest.h"
#include "model/ModifyGlobalAccelerationInstanceSpecResult.h"
#include "model/AddGlobalAccelerationInstanceIpRequest.h"
#include "model/AddGlobalAccelerationInstanceIpResult.h"
#include "model/DeleteRouterInterfaceRequest.h"
#include "model/DeleteRouterInterfaceResult.h"
#include "model/CreateSslVpnServerRequest.h"
#include "model/CreateSslVpnServerResult.h"
#include "model/DescribeBandwidthPackagePublicIpMonitorDataRequest.h"
#include "model/DescribeBandwidthPackagePublicIpMonitorDataResult.h"
#include "model/DescribeNqasRequest.h"
#include "model/DescribeNqasResult.h"
#include "model/ModifyVirtualBorderRouterAttributeRequest.h"
#include "model/ModifyVirtualBorderRouterAttributeResult.h"
#include "model/ModifyNatGatewayAttributeRequest.h"
#include "model/ModifyNatGatewayAttributeResult.h"
#include "model/DescribeEipMonitorDataRequest.h"
#include "model/DescribeEipMonitorDataResult.h"
#include "model/DeleteVpnGatewayRequest.h"
#include "model/DeleteVpnGatewayResult.h"
#include "model/DescribeCustomerGatewayRequest.h"
#include "model/DescribeCustomerGatewayResult.h"
#include "model/ModifyVpnGatewayAttributeRequest.h"
#include "model/ModifyVpnGatewayAttributeResult.h"
#include "model/AddBgpNetworkRequest.h"
#include "model/AddBgpNetworkResult.h"
#include "model/ModifySslVpnServerRequest.h"
#include "model/ModifySslVpnServerResult.h"
#include "model/DescribeVpnConnectionsRequest.h"
#include "model/DescribeVpnConnectionsResult.h"
#include "model/DescribeNewProjectEipMonitorDataRequest.h"
#include "model/DescribeNewProjectEipMonitorDataResult.h"
#include "model/ModifyBandwidthPackageAttributeRequest.h"
#include "model/ModifyBandwidthPackageAttributeResult.h"
#include "model/ConnectRouterInterfaceRequest.h"
#include "model/ConnectRouterInterfaceResult.h"
#include "model/DescribeBgpPeersRequest.h"
#include "model/DescribeBgpPeersResult.h"
#include "model/DeleteSnatEntryRequest.h"
#include "model/DeleteSnatEntryResult.h"
#include "model/DescribeHaVipsRequest.h"
#include "model/DescribeHaVipsResult.h"
#include "model/CreateNqaRequest.h"
#include "model/CreateNqaResult.h"
#include "model/DescribeForwardTablesRequest.h"
#include "model/DescribeForwardTablesResult.h"
#include "model/AddBandwidthPackageIpsRequest.h"
#include "model/AddBandwidthPackageIpsResult.h"
#include "model/ModifyPhysicalConnectionAttributeRequest.h"
#include "model/ModifyPhysicalConnectionAttributeResult.h"
#include "model/CreateSnatEntryRequest.h"
#include "model/CreateSnatEntryResult.h"
#include "model/DeleteCommonBandwidthPackageRequest.h"
#include "model/DeleteCommonBandwidthPackageResult.h"
#include "model/ModifyVSwitchAttributeRequest.h"
#include "model/ModifyVSwitchAttributeResult.h"
#include "model/DescribeNatGatewaysRequest.h"
#include "model/DescribeNatGatewaysResult.h"
#include "model/EnableVpcClassicLinkRequest.h"
#include "model/EnableVpcClassicLinkResult.h"
#include "model/DeleteHaVipRequest.h"
#include "model/DeleteHaVipResult.h"
#include "model/DescribeVpcAttributeRequest.h"
#include "model/DescribeVpcAttributeResult.h"
#include "model/CreateVpnConnectionRequest.h"
#include "model/CreateVpnConnectionResult.h"
#include "model/DeleteVpnConnectionRequest.h"
#include "model/DeleteVpnConnectionResult.h"
#include "model/DescribeBandwidthPackagesRequest.h"
#include "model/DescribeBandwidthPackagesResult.h"
#include "model/DeleteBgpNetworkRequest.h"
#include "model/DeleteBgpNetworkResult.h"
#include "model/CreateRouteEntryRequest.h"
#include "model/CreateRouteEntryResult.h"
#include "model/CreateRouterInterfaceRequest.h"
#include "model/CreateRouterInterfaceResult.h"
#include "model/DisableVpcClassicLinkRequest.h"
#include "model/DisableVpcClassicLinkResult.h"
#include "model/ModifyVpnConnectionAttributeRequest.h"
#include "model/ModifyVpnConnectionAttributeResult.h"
#include "model/RemoveGlobalAccelerationInstanceIpRequest.h"
#include "model/RemoveGlobalAccelerationInstanceIpResult.h"
#include "model/ModifyNatGatewaySpecRequest.h"
#include "model/ModifyNatGatewaySpecResult.h"
#include "model/DescribeBgpGroupsRequest.h"
#include "model/DescribeBgpGroupsResult.h"
#include "model/RemoveBandwidthPackageIpsRequest.h"
#include "model/RemoveBandwidthPackageIpsResult.h"
#include "model/ModifyVpcAttributeRequest.h"
#include "model/ModifyVpcAttributeResult.h"
#include "model/DeleteSslVpnClientCertRequest.h"
#include "model/DeleteSslVpnClientCertResult.h"
#include "model/CreateVSwitchRequest.h"
#include "model/CreateVSwitchResult.h"
#include "model/ModifyCustomerGatewayAttributeRequest.h"
#include "model/ModifyCustomerGatewayAttributeResult.h"
#include "model/EnablePhysicalConnectionRequest.h"
#include "model/EnablePhysicalConnectionResult.h"
#include "model/ModifyEipAddressAttributeRequest.h"
#include "model/ModifyEipAddressAttributeResult.h"
#include "model/ModifyCommonBandwidthPackagePayTypeRequest.h"
#include "model/ModifyCommonBandwidthPackagePayTypeResult.h"
#include "model/DescribeVSwitchAttributesRequest.h"
#include "model/DescribeVSwitchAttributesResult.h"
#include "model/CreateCommonBandwidthPackageRequest.h"
#include "model/CreateCommonBandwidthPackageResult.h"
#include "model/CreateForwardEntryRequest.h"
#include "model/CreateForwardEntryResult.h"
#include "model/DescribeRouterInterfacesRequest.h"
#include "model/DescribeRouterInterfacesResult.h"
#include "model/DeleteNatGatewayRequest.h"
#include "model/DeleteNatGatewayResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/DeactivateRouterInterfaceRequest.h"
#include "model/DeactivateRouterInterfaceResult.h"
#include "model/ModifySnatEntryRequest.h"
#include "model/ModifySnatEntryResult.h"
#include "model/DescribeAccessPointsRequest.h"
#include "model/DescribeAccessPointsResult.h"
#include "model/CreateSslVpnClientCertRequest.h"
#include "model/CreateSslVpnClientCertResult.h"
#include "model/CreateVirtualBorderRouterRequest.h"
#include "model/CreateVirtualBorderRouterResult.h"
#include "model/DeleteBgpGroupRequest.h"
#include "model/DeleteBgpGroupResult.h"
#include "model/ReleaseEipAddressRequest.h"
#include "model/ReleaseEipAddressResult.h"
#include "model/CreateBgpPeerRequest.h"
#include "model/CreateBgpPeerResult.h"
#include "model/DescribeRouteTablesRequest.h"
#include "model/DescribeRouteTablesResult.h"
#include "model/DescribeVSwitchesRequest.h"
#include "model/DescribeVSwitchesResult.h"
#include "model/ModifyRouterInterfaceSpecRequest.h"
#include "model/ModifyRouterInterfaceSpecResult.h"
#include "model/DescribeVpcsRequest.h"
#include "model/DescribeVpcsResult.h"
#include "model/CreatePhysicalConnectionRequest.h"
#include "model/CreatePhysicalConnectionResult.h"
#include "model/UnassociatePhysicalConnectionFromVirtualBorderRouterRequest.h"
#include "model/UnassociatePhysicalConnectionFromVirtualBorderRouterResult.h"
#include "model/DescribeServerRelatedGlobalAccelerationInstancesRequest.h"
#include "model/DescribeServerRelatedGlobalAccelerationInstancesResult.h"
#include "model/AssociateHaVipRequest.h"
#include "model/AssociateHaVipResult.h"
#include "model/ModifyRouterInterfaceAttributeRequest.h"
#include "model/ModifyRouterInterfaceAttributeResult.h"
#include "model/DescribeVirtualBorderRoutersForPhysicalConnectionRequest.h"
#include "model/DescribeVirtualBorderRoutersForPhysicalConnectionResult.h"
#include "model/ModifyGlobalAccelerationInstanceAttributesRequest.h"
#include "model/ModifyGlobalAccelerationInstanceAttributesResult.h"
#include "model/ModifyCommonBandwidthPackageSpecRequest.h"
#include "model/ModifyCommonBandwidthPackageSpecResult.h"
#include "model/DeleteRouteEntryRequest.h"
#include "model/DeleteRouteEntryResult.h"
#include "model/DeleteVirtualBorderRouterRequest.h"
#include "model/DeleteVirtualBorderRouterResult.h"
#include "model/CreatePhysicalConnectionNewRequest.h"
#include "model/CreatePhysicalConnectionNewResult.h"
#include "model/TerminatePhysicalConnectionRequest.h"
#include "model/TerminatePhysicalConnectionResult.h"
#include "model/DescribeVpnGatewayRequest.h"
#include "model/DescribeVpnGatewayResult.h"
#include "model/ModifyBgpGroupAttributeRequest.h"
#include "model/ModifyBgpGroupAttributeResult.h"
#include "model/ModifyCommonBandwidthPackageAttributeRequest.h"
#include "model/ModifyCommonBandwidthPackageAttributeResult.h"
#include "model/DeleteForwardEntryRequest.h"
#include "model/DeleteForwardEntryResult.h"
#include "model/AddCommonBandwidthPackageIpRequest.h"
#include "model/AddCommonBandwidthPackageIpResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribePhysicalConnectionsRequest.h"
#include "model/DescribePhysicalConnectionsResult.h"
#include "model/DescribeVpnGatewaysRequest.h"
#include "model/DescribeVpnGatewaysResult.h"
#include "model/DescribeVirtualBorderRoutersRequest.h"
#include "model/DescribeVirtualBorderRoutersResult.h"
#include "model/CreateGlobalAccelerationInstanceRequest.h"
#include "model/CreateGlobalAccelerationInstanceResult.h"
#include "model/CancelPhysicalConnectionRequest.h"
#include "model/CancelPhysicalConnectionResult.h"
#include "model/CreateBgpGroupRequest.h"
#include "model/CreateBgpGroupResult.h"
#include "model/DescribeVRoutersRequest.h"
#include "model/DescribeVRoutersResult.h"
#include "model/DescribeRouterInterfacesForGlobalRequest.h"
#include "model/DescribeRouterInterfacesForGlobalResult.h"
#include "model/ModifyNqaRequest.h"
#include "model/ModifyNqaResult.h"
#include "model/AllocateEipAddressRequest.h"
#include "model/AllocateEipAddressResult.h"
#include "model/DescribeSslVpnClientCertRequest.h"
#include "model/DescribeSslVpnClientCertResult.h"
#include "model/DescribeCommonBandwidthPackagesRequest.h"
#include "model/DescribeCommonBandwidthPackagesResult.h"
#include "model/UnassociateHaVipRequest.h"
#include "model/UnassociateHaVipResult.h"
#include "model/ModifyHaVipAttributeRequest.h"
#include "model/ModifyHaVipAttributeResult.h"
#include "model/AssociateGlobalAccelerationInstanceRequest.h"
#include "model/AssociateGlobalAccelerationInstanceResult.h"
#include "model/DescribeSslVpnServersRequest.h"
#include "model/DescribeSslVpnServersResult.h"
#include "model/ModifyVRouterAttributeRequest.h"
#include "model/ModifyVRouterAttributeResult.h"
#include "model/DescribeSnatTableEntriesRequest.h"
#include "model/DescribeSnatTableEntriesResult.h"


namespace AlibabaCloud
{
	namespace Vpc
	{
		class ALIBABACLOUD_VPC_EXPORT VpcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::UnassociateGlobalAccelerationInstanceResult> UnassociateGlobalAccelerationInstanceOutcome;			
			typedef std::future<UnassociateGlobalAccelerationInstanceOutcome> UnassociateGlobalAccelerationInstanceOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::UnassociateGlobalAccelerationInstanceRequest&, const UnassociateGlobalAccelerationInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateGlobalAccelerationInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomerGatewayResult> DeleteCustomerGatewayOutcome;			
			typedef std::future<DeleteCustomerGatewayOutcome> DeleteCustomerGatewayOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteCustomerGatewayRequest&, const DeleteCustomerGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomerGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteTableListResult> DescribeRouteTableListOutcome;			
			typedef std::future<DescribeRouteTableListOutcome> DescribeRouteTableListOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeRouteTableListRequest&, const DescribeRouteTableListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTableListAsyncHandler;
			typedef Outcome<Error, Model::AssociatePhysicalConnectionToVirtualBorderRouterResult> AssociatePhysicalConnectionToVirtualBorderRouterOutcome;			
			typedef std::future<AssociatePhysicalConnectionToVirtualBorderRouterOutcome> AssociatePhysicalConnectionToVirtualBorderRouterOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::AssociatePhysicalConnectionToVirtualBorderRouterRequest&, const AssociatePhysicalConnectionToVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociatePhysicalConnectionToVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::DeleteGlobalAccelerationInstanceResult> DeleteGlobalAccelerationInstanceOutcome;			
			typedef std::future<DeleteGlobalAccelerationInstanceOutcome> DeleteGlobalAccelerationInstanceOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteGlobalAccelerationInstanceRequest&, const DeleteGlobalAccelerationInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalAccelerationInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomerGatewaysResult> DescribeCustomerGatewaysOutcome;			
			typedef std::future<DescribeCustomerGatewaysOutcome> DescribeCustomerGatewaysOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewaysRequest&, const DescribeCustomerGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalAccelerationInstancesResult> DescribeGlobalAccelerationInstancesOutcome;			
			typedef std::future<DescribeGlobalAccelerationInstancesOutcome> DescribeGlobalAccelerationInstancesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeGlobalAccelerationInstancesRequest&, const DescribeGlobalAccelerationInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalAccelerationInstancesAsyncHandler;
			typedef Outcome<Error, Model::ModifySslVpnClientCertResult> ModifySslVpnClientCertOutcome;			
			typedef std::future<ModifySslVpnClientCertOutcome> ModifySslVpnClientCertOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifySslVpnClientCertRequest&, const ModifySslVpnClientCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySslVpnClientCertAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcResult> DeleteVpcOutcome;			
			typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteVpcRequest&, const DeleteVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAsyncHandler;
			typedef Outcome<Error, Model::DownloadVpnConnectionConfigResult> DownloadVpnConnectionConfigOutcome;			
			typedef std::future<DownloadVpnConnectionConfigOutcome> DownloadVpnConnectionConfigOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DownloadVpnConnectionConfigRequest&, const DownloadVpnConnectionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadVpnConnectionConfigAsyncHandler;
			typedef Outcome<Error, Model::RemoveCommonBandwidthPackageIpResult> RemoveCommonBandwidthPackageIpOutcome;			
			typedef std::future<RemoveCommonBandwidthPackageIpOutcome> RemoveCommonBandwidthPackageIpOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::RemoveCommonBandwidthPackageIpRequest&, const RemoveCommonBandwidthPackageIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveCommonBandwidthPackageIpAsyncHandler;
			typedef Outcome<Error, Model::ModifyBandwidthPackageSpecResult> ModifyBandwidthPackageSpecOutcome;			
			typedef std::future<ModifyBandwidthPackageSpecOutcome> ModifyBandwidthPackageSpecOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyBandwidthPackageSpecRequest&, const ModifyBandwidthPackageSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBandwidthPackageSpecAsyncHandler;
			typedef Outcome<Error, Model::CreateNatGatewayResult> CreateNatGatewayOutcome;			
			typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateNatGatewayRequest&, const CreateNatGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteVSwitchResult> DeleteVSwitchOutcome;			
			typedef std::future<DeleteVSwitchOutcome> DeleteVSwitchOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteVSwitchRequest&, const DeleteVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVSwitchAsyncHandler;
			typedef Outcome<Error, Model::CreateHaVipResult> CreateHaVipOutcome;			
			typedef std::future<CreateHaVipOutcome> CreateHaVipOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateHaVipRequest&, const CreateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHaVipAsyncHandler;
			typedef Outcome<Error, Model::CreateBandwidthPackageResult> CreateBandwidthPackageOutcome;			
			typedef std::future<CreateBandwidthPackageOutcome> CreateBandwidthPackageOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateBandwidthPackageRequest&, const CreateBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::RecoverVirtualBorderRouterResult> RecoverVirtualBorderRouterOutcome;			
			typedef std::future<RecoverVirtualBorderRouterOutcome> RecoverVirtualBorderRouterOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::RecoverVirtualBorderRouterRequest&, const RecoverVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecoverVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::AssociateEipAddressResult> AssociateEipAddressOutcome;			
			typedef std::future<AssociateEipAddressOutcome> AssociateEipAddressOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::AssociateEipAddressRequest&, const AssociateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeEipAddressesResult> DescribeEipAddressesOutcome;			
			typedef std::future<DescribeEipAddressesOutcome> DescribeEipAddressesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeEipAddressesRequest&, const DescribeEipAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipAddressesAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomerGatewayResult> CreateCustomerGatewayOutcome;			
			typedef std::future<CreateCustomerGatewayOutcome> CreateCustomerGatewayOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateCustomerGatewayRequest&, const CreateCustomerGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomerGatewayAsyncHandler;
			typedef Outcome<Error, Model::ActivateRouterInterfaceResult> ActivateRouterInterfaceOutcome;			
			typedef std::future<ActivateRouterInterfaceOutcome> ActivateRouterInterfaceOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ActivateRouterInterfaceRequest&, const ActivateRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSslVpnServerResult> DeleteSslVpnServerOutcome;			
			typedef std::future<DeleteSslVpnServerOutcome> DeleteSslVpnServerOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteSslVpnServerRequest&, const DeleteSslVpnServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSslVpnServerAsyncHandler;
			typedef Outcome<Error, Model::DeleteBandwidthPackageResult> DeleteBandwidthPackageOutcome;			
			typedef std::future<DeleteBandwidthPackageOutcome> DeleteBandwidthPackageOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteBandwidthPackageRequest&, const DeleteBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::DeleteBgpPeerResult> DeleteBgpPeerOutcome;			
			typedef std::future<DeleteBgpPeerOutcome> DeleteBgpPeerOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteBgpPeerRequest&, const DeleteBgpPeerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBgpPeerAsyncHandler;
			typedef Outcome<Error, Model::DeleteNqaResult> DeleteNqaOutcome;			
			typedef std::future<DeleteNqaOutcome> DeleteNqaOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteNqaRequest&, const DeleteNqaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNqaAsyncHandler;
			typedef Outcome<Error, Model::TerminateVirtualBorderRouterResult> TerminateVirtualBorderRouterOutcome;			
			typedef std::future<TerminateVirtualBorderRouterOutcome> TerminateVirtualBorderRouterOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::TerminateVirtualBorderRouterRequest&, const TerminateVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminateVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::ModifyRouteTableAttributesResult> ModifyRouteTableAttributesOutcome;			
			typedef std::future<ModifyRouteTableAttributesOutcome> ModifyRouteTableAttributesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyRouteTableAttributesRequest&, const ModifyRouteTableAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteTableAttributesAsyncHandler;
			typedef Outcome<Error, Model::DeletePhysicalConnectionResult> DeletePhysicalConnectionOutcome;			
			typedef std::future<DeletePhysicalConnectionOutcome> DeletePhysicalConnectionOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeletePhysicalConnectionRequest&, const DeletePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyForwardEntryResult> ModifyForwardEntryOutcome;			
			typedef std::future<ModifyForwardEntryOutcome> ModifyForwardEntryOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyForwardEntryRequest&, const ModifyForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateVpcResult> CreateVpcOutcome;			
			typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateVpcRequest&, const CreateVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
			typedef Outcome<Error, Model::DescribeForwardTableEntriesResult> DescribeForwardTableEntriesOutcome;			
			typedef std::future<DescribeForwardTableEntriesOutcome> DescribeForwardTableEntriesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeForwardTableEntriesRequest&, const DescribeForwardTableEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForwardTableEntriesAsyncHandler;
			typedef Outcome<Error, Model::UnassociateEipAddressResult> UnassociateEipAddressOutcome;			
			typedef std::future<UnassociateEipAddressOutcome> UnassociateEipAddressOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::UnassociateEipAddressRequest&, const UnassociateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeSslVpnClientCertsResult> DescribeSslVpnClientCertsOutcome;			
			typedef std::future<DescribeSslVpnClientCertsOutcome> DescribeSslVpnClientCertsOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeSslVpnClientCertsRequest&, const DescribeSslVpnClientCertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSslVpnClientCertsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnConnectionResult> DescribeVpnConnectionOutcome;			
			typedef std::future<DescribeVpnConnectionOutcome> DescribeVpnConnectionOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnConnectionRequest&, const DescribeVpnConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnConnectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalAccelerationInstanceSpecResult> ModifyGlobalAccelerationInstanceSpecOutcome;			
			typedef std::future<ModifyGlobalAccelerationInstanceSpecOutcome> ModifyGlobalAccelerationInstanceSpecOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyGlobalAccelerationInstanceSpecRequest&, const ModifyGlobalAccelerationInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalAccelerationInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::AddGlobalAccelerationInstanceIpResult> AddGlobalAccelerationInstanceIpOutcome;			
			typedef std::future<AddGlobalAccelerationInstanceIpOutcome> AddGlobalAccelerationInstanceIpOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::AddGlobalAccelerationInstanceIpRequest&, const AddGlobalAccelerationInstanceIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGlobalAccelerationInstanceIpAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouterInterfaceResult> DeleteRouterInterfaceOutcome;			
			typedef std::future<DeleteRouterInterfaceOutcome> DeleteRouterInterfaceOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteRouterInterfaceRequest&, const DeleteRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::CreateSslVpnServerResult> CreateSslVpnServerOutcome;			
			typedef std::future<CreateSslVpnServerOutcome> CreateSslVpnServerOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateSslVpnServerRequest&, const CreateSslVpnServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSslVpnServerAsyncHandler;
			typedef Outcome<Error, Model::DescribeBandwidthPackagePublicIpMonitorDataResult> DescribeBandwidthPackagePublicIpMonitorDataOutcome;			
			typedef std::future<DescribeBandwidthPackagePublicIpMonitorDataOutcome> DescribeBandwidthPackagePublicIpMonitorDataOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackagePublicIpMonitorDataRequest&, const DescribeBandwidthPackagePublicIpMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackagePublicIpMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeNqasResult> DescribeNqasOutcome;			
			typedef std::future<DescribeNqasOutcome> DescribeNqasOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeNqasRequest&, const DescribeNqasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNqasAsyncHandler;
			typedef Outcome<Error, Model::ModifyVirtualBorderRouterAttributeResult> ModifyVirtualBorderRouterAttributeOutcome;			
			typedef std::future<ModifyVirtualBorderRouterAttributeOutcome> ModifyVirtualBorderRouterAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyVirtualBorderRouterAttributeRequest&, const ModifyVirtualBorderRouterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirtualBorderRouterAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyNatGatewayAttributeResult> ModifyNatGatewayAttributeOutcome;			
			typedef std::future<ModifyNatGatewayAttributeOutcome> ModifyNatGatewayAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewayAttributeRequest&, const ModifyNatGatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeEipMonitorDataResult> DescribeEipMonitorDataOutcome;			
			typedef std::future<DescribeEipMonitorDataOutcome> DescribeEipMonitorDataOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeEipMonitorDataRequest&, const DescribeEipMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpnGatewayResult> DeleteVpnGatewayOutcome;			
			typedef std::future<DeleteVpnGatewayOutcome> DeleteVpnGatewayOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewayRequest&, const DeleteVpnGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomerGatewayResult> DescribeCustomerGatewayOutcome;			
			typedef std::future<DescribeCustomerGatewayOutcome> DescribeCustomerGatewayOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewayRequest&, const DescribeCustomerGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewayAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpnGatewayAttributeResult> ModifyVpnGatewayAttributeOutcome;			
			typedef std::future<ModifyVpnGatewayAttributeOutcome> ModifyVpnGatewayAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayAttributeRequest&, const ModifyVpnGatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::AddBgpNetworkResult> AddBgpNetworkOutcome;			
			typedef std::future<AddBgpNetworkOutcome> AddBgpNetworkOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::AddBgpNetworkRequest&, const AddBgpNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBgpNetworkAsyncHandler;
			typedef Outcome<Error, Model::ModifySslVpnServerResult> ModifySslVpnServerOutcome;			
			typedef std::future<ModifySslVpnServerOutcome> ModifySslVpnServerOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifySslVpnServerRequest&, const ModifySslVpnServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySslVpnServerAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnConnectionsResult> DescribeVpnConnectionsOutcome;			
			typedef std::future<DescribeVpnConnectionsOutcome> DescribeVpnConnectionsOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnConnectionsRequest&, const DescribeVpnConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnConnectionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNewProjectEipMonitorDataResult> DescribeNewProjectEipMonitorDataOutcome;			
			typedef std::future<DescribeNewProjectEipMonitorDataOutcome> DescribeNewProjectEipMonitorDataOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeNewProjectEipMonitorDataRequest&, const DescribeNewProjectEipMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewProjectEipMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::ModifyBandwidthPackageAttributeResult> ModifyBandwidthPackageAttributeOutcome;			
			typedef std::future<ModifyBandwidthPackageAttributeOutcome> ModifyBandwidthPackageAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyBandwidthPackageAttributeRequest&, const ModifyBandwidthPackageAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBandwidthPackageAttributeAsyncHandler;
			typedef Outcome<Error, Model::ConnectRouterInterfaceResult> ConnectRouterInterfaceOutcome;			
			typedef std::future<ConnectRouterInterfaceOutcome> ConnectRouterInterfaceOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ConnectRouterInterfaceRequest&, const ConnectRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConnectRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DescribeBgpPeersResult> DescribeBgpPeersOutcome;			
			typedef std::future<DescribeBgpPeersOutcome> DescribeBgpPeersOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeBgpPeersRequest&, const DescribeBgpPeersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBgpPeersAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnatEntryResult> DeleteSnatEntryOutcome;			
			typedef std::future<DeleteSnatEntryOutcome> DeleteSnatEntryOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteSnatEntryRequest&, const DeleteSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::DescribeHaVipsResult> DescribeHaVipsOutcome;			
			typedef std::future<DescribeHaVipsOutcome> DescribeHaVipsOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeHaVipsRequest&, const DescribeHaVipsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHaVipsAsyncHandler;
			typedef Outcome<Error, Model::CreateNqaResult> CreateNqaOutcome;			
			typedef std::future<CreateNqaOutcome> CreateNqaOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateNqaRequest&, const CreateNqaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNqaAsyncHandler;
			typedef Outcome<Error, Model::DescribeForwardTablesResult> DescribeForwardTablesOutcome;			
			typedef std::future<DescribeForwardTablesOutcome> DescribeForwardTablesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeForwardTablesRequest&, const DescribeForwardTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForwardTablesAsyncHandler;
			typedef Outcome<Error, Model::AddBandwidthPackageIpsResult> AddBandwidthPackageIpsOutcome;			
			typedef std::future<AddBandwidthPackageIpsOutcome> AddBandwidthPackageIpsOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::AddBandwidthPackageIpsRequest&, const AddBandwidthPackageIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBandwidthPackageIpsAsyncHandler;
			typedef Outcome<Error, Model::ModifyPhysicalConnectionAttributeResult> ModifyPhysicalConnectionAttributeOutcome;			
			typedef std::future<ModifyPhysicalConnectionAttributeOutcome> ModifyPhysicalConnectionAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyPhysicalConnectionAttributeRequest&, const ModifyPhysicalConnectionAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPhysicalConnectionAttributeAsyncHandler;
			typedef Outcome<Error, Model::CreateSnatEntryResult> CreateSnatEntryOutcome;			
			typedef std::future<CreateSnatEntryOutcome> CreateSnatEntryOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateSnatEntryRequest&, const CreateSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteCommonBandwidthPackageResult> DeleteCommonBandwidthPackageOutcome;			
			typedef std::future<DeleteCommonBandwidthPackageOutcome> DeleteCommonBandwidthPackageOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteCommonBandwidthPackageRequest&, const DeleteCommonBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCommonBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::ModifyVSwitchAttributeResult> ModifyVSwitchAttributeOutcome;			
			typedef std::future<ModifyVSwitchAttributeOutcome> ModifyVSwitchAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyVSwitchAttributeRequest&, const ModifyVSwitchAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVSwitchAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeNatGatewaysResult> DescribeNatGatewaysOutcome;			
			typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewaysRequest&, const DescribeNatGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaysAsyncHandler;
			typedef Outcome<Error, Model::EnableVpcClassicLinkResult> EnableVpcClassicLinkOutcome;			
			typedef std::future<EnableVpcClassicLinkOutcome> EnableVpcClassicLinkOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::EnableVpcClassicLinkRequest&, const EnableVpcClassicLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcClassicLinkAsyncHandler;
			typedef Outcome<Error, Model::DeleteHaVipResult> DeleteHaVipOutcome;			
			typedef std::future<DeleteHaVipOutcome> DeleteHaVipOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteHaVipRequest&, const DeleteHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHaVipAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcAttributeResult> DescribeVpcAttributeOutcome;			
			typedef std::future<DescribeVpcAttributeOutcome> DescribeVpcAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVpcAttributeRequest&, const DescribeVpcAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAttributeAsyncHandler;
			typedef Outcome<Error, Model::CreateVpnConnectionResult> CreateVpnConnectionOutcome;			
			typedef std::future<CreateVpnConnectionOutcome> CreateVpnConnectionOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateVpnConnectionRequest&, const CreateVpnConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnConnectionAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpnConnectionResult> DeleteVpnConnectionOutcome;			
			typedef std::future<DeleteVpnConnectionOutcome> DeleteVpnConnectionOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteVpnConnectionRequest&, const DeleteVpnConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnConnectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeBandwidthPackagesResult> DescribeBandwidthPackagesOutcome;			
			typedef std::future<DescribeBandwidthPackagesOutcome> DescribeBandwidthPackagesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackagesRequest&, const DescribeBandwidthPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackagesAsyncHandler;
			typedef Outcome<Error, Model::DeleteBgpNetworkResult> DeleteBgpNetworkOutcome;			
			typedef std::future<DeleteBgpNetworkOutcome> DeleteBgpNetworkOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteBgpNetworkRequest&, const DeleteBgpNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBgpNetworkAsyncHandler;
			typedef Outcome<Error, Model::CreateRouteEntryResult> CreateRouteEntryOutcome;			
			typedef std::future<CreateRouteEntryOutcome> CreateRouteEntryOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateRouteEntryRequest&, const CreateRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateRouterInterfaceResult> CreateRouterInterfaceOutcome;			
			typedef std::future<CreateRouterInterfaceOutcome> CreateRouterInterfaceOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateRouterInterfaceRequest&, const CreateRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DisableVpcClassicLinkResult> DisableVpcClassicLinkOutcome;			
			typedef std::future<DisableVpcClassicLinkOutcome> DisableVpcClassicLinkOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DisableVpcClassicLinkRequest&, const DisableVpcClassicLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableVpcClassicLinkAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpnConnectionAttributeResult> ModifyVpnConnectionAttributeOutcome;			
			typedef std::future<ModifyVpnConnectionAttributeOutcome> ModifyVpnConnectionAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyVpnConnectionAttributeRequest&, const ModifyVpnConnectionAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnConnectionAttributeAsyncHandler;
			typedef Outcome<Error, Model::RemoveGlobalAccelerationInstanceIpResult> RemoveGlobalAccelerationInstanceIpOutcome;			
			typedef std::future<RemoveGlobalAccelerationInstanceIpOutcome> RemoveGlobalAccelerationInstanceIpOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::RemoveGlobalAccelerationInstanceIpRequest&, const RemoveGlobalAccelerationInstanceIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveGlobalAccelerationInstanceIpAsyncHandler;
			typedef Outcome<Error, Model::ModifyNatGatewaySpecResult> ModifyNatGatewaySpecOutcome;			
			typedef std::future<ModifyNatGatewaySpecOutcome> ModifyNatGatewaySpecOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewaySpecRequest&, const ModifyNatGatewaySpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewaySpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeBgpGroupsResult> DescribeBgpGroupsOutcome;			
			typedef std::future<DescribeBgpGroupsOutcome> DescribeBgpGroupsOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeBgpGroupsRequest&, const DescribeBgpGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBgpGroupsAsyncHandler;
			typedef Outcome<Error, Model::RemoveBandwidthPackageIpsResult> RemoveBandwidthPackageIpsOutcome;			
			typedef std::future<RemoveBandwidthPackageIpsOutcome> RemoveBandwidthPackageIpsOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::RemoveBandwidthPackageIpsRequest&, const RemoveBandwidthPackageIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBandwidthPackageIpsAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpcAttributeResult> ModifyVpcAttributeOutcome;			
			typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyVpcAttributeRequest&, const ModifyVpcAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAttributeAsyncHandler;
			typedef Outcome<Error, Model::DeleteSslVpnClientCertResult> DeleteSslVpnClientCertOutcome;			
			typedef std::future<DeleteSslVpnClientCertOutcome> DeleteSslVpnClientCertOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteSslVpnClientCertRequest&, const DeleteSslVpnClientCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSslVpnClientCertAsyncHandler;
			typedef Outcome<Error, Model::CreateVSwitchResult> CreateVSwitchOutcome;			
			typedef std::future<CreateVSwitchOutcome> CreateVSwitchOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateVSwitchRequest&, const CreateVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVSwitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyCustomerGatewayAttributeResult> ModifyCustomerGatewayAttributeOutcome;			
			typedef std::future<ModifyCustomerGatewayAttributeOutcome> ModifyCustomerGatewayAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyCustomerGatewayAttributeRequest&, const ModifyCustomerGatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomerGatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::EnablePhysicalConnectionResult> EnablePhysicalConnectionOutcome;			
			typedef std::future<EnablePhysicalConnectionOutcome> EnablePhysicalConnectionOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::EnablePhysicalConnectionRequest&, const EnablePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnablePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyEipAddressAttributeResult> ModifyEipAddressAttributeOutcome;			
			typedef std::future<ModifyEipAddressAttributeOutcome> ModifyEipAddressAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyEipAddressAttributeRequest&, const ModifyEipAddressAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEipAddressAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyCommonBandwidthPackagePayTypeResult> ModifyCommonBandwidthPackagePayTypeOutcome;			
			typedef std::future<ModifyCommonBandwidthPackagePayTypeOutcome> ModifyCommonBandwidthPackagePayTypeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyCommonBandwidthPackagePayTypeRequest&, const ModifyCommonBandwidthPackagePayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCommonBandwidthPackagePayTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchAttributesResult> DescribeVSwitchAttributesOutcome;			
			typedef std::future<DescribeVSwitchAttributesOutcome> DescribeVSwitchAttributesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVSwitchAttributesRequest&, const DescribeVSwitchAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchAttributesAsyncHandler;
			typedef Outcome<Error, Model::CreateCommonBandwidthPackageResult> CreateCommonBandwidthPackageOutcome;			
			typedef std::future<CreateCommonBandwidthPackageOutcome> CreateCommonBandwidthPackageOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateCommonBandwidthPackageRequest&, const CreateCommonBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommonBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::CreateForwardEntryResult> CreateForwardEntryOutcome;			
			typedef std::future<CreateForwardEntryOutcome> CreateForwardEntryOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateForwardEntryRequest&, const CreateForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouterInterfacesResult> DescribeRouterInterfacesOutcome;			
			typedef std::future<DescribeRouterInterfacesOutcome> DescribeRouterInterfacesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeRouterInterfacesRequest&, const DescribeRouterInterfacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouterInterfacesAsyncHandler;
			typedef Outcome<Error, Model::DeleteNatGatewayResult> DeleteNatGatewayOutcome;			
			typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewayRequest&, const DeleteNatGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;			
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DeactivateRouterInterfaceResult> DeactivateRouterInterfaceOutcome;			
			typedef std::future<DeactivateRouterInterfaceOutcome> DeactivateRouterInterfaceOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeactivateRouterInterfaceRequest&, const DeactivateRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::ModifySnatEntryResult> ModifySnatEntryOutcome;			
			typedef std::future<ModifySnatEntryOutcome> ModifySnatEntryOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifySnatEntryRequest&, const ModifySnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnatEntryAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessPointsResult> DescribeAccessPointsOutcome;			
			typedef std::future<DescribeAccessPointsOutcome> DescribeAccessPointsOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeAccessPointsRequest&, const DescribeAccessPointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessPointsAsyncHandler;
			typedef Outcome<Error, Model::CreateSslVpnClientCertResult> CreateSslVpnClientCertOutcome;			
			typedef std::future<CreateSslVpnClientCertOutcome> CreateSslVpnClientCertOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateSslVpnClientCertRequest&, const CreateSslVpnClientCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSslVpnClientCertAsyncHandler;
			typedef Outcome<Error, Model::CreateVirtualBorderRouterResult> CreateVirtualBorderRouterOutcome;			
			typedef std::future<CreateVirtualBorderRouterOutcome> CreateVirtualBorderRouterOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateVirtualBorderRouterRequest&, const CreateVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::DeleteBgpGroupResult> DeleteBgpGroupOutcome;			
			typedef std::future<DeleteBgpGroupOutcome> DeleteBgpGroupOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteBgpGroupRequest&, const DeleteBgpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBgpGroupAsyncHandler;
			typedef Outcome<Error, Model::ReleaseEipAddressResult> ReleaseEipAddressOutcome;			
			typedef std::future<ReleaseEipAddressOutcome> ReleaseEipAddressOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ReleaseEipAddressRequest&, const ReleaseEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseEipAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateBgpPeerResult> CreateBgpPeerOutcome;			
			typedef std::future<CreateBgpPeerOutcome> CreateBgpPeerOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateBgpPeerRequest&, const CreateBgpPeerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBgpPeerAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteTablesResult> DescribeRouteTablesOutcome;			
			typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeRouteTablesRequest&, const DescribeRouteTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchesResult> DescribeVSwitchesOutcome;			
			typedef std::future<DescribeVSwitchesOutcome> DescribeVSwitchesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVSwitchesRequest&, const DescribeVSwitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchesAsyncHandler;
			typedef Outcome<Error, Model::ModifyRouterInterfaceSpecResult> ModifyRouterInterfaceSpecOutcome;			
			typedef std::future<ModifyRouterInterfaceSpecOutcome> ModifyRouterInterfaceSpecOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyRouterInterfaceSpecRequest&, const ModifyRouterInterfaceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouterInterfaceSpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcsResult> DescribeVpcsOutcome;			
			typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVpcsRequest&, const DescribeVpcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
			typedef Outcome<Error, Model::CreatePhysicalConnectionResult> CreatePhysicalConnectionOutcome;			
			typedef std::future<CreatePhysicalConnectionOutcome> CreatePhysicalConnectionOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreatePhysicalConnectionRequest&, const CreatePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::UnassociatePhysicalConnectionFromVirtualBorderRouterResult> UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome;			
			typedef std::future<UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome> UnassociatePhysicalConnectionFromVirtualBorderRouterOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest&, const UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociatePhysicalConnectionFromVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::DescribeServerRelatedGlobalAccelerationInstancesResult> DescribeServerRelatedGlobalAccelerationInstancesOutcome;			
			typedef std::future<DescribeServerRelatedGlobalAccelerationInstancesOutcome> DescribeServerRelatedGlobalAccelerationInstancesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeServerRelatedGlobalAccelerationInstancesRequest&, const DescribeServerRelatedGlobalAccelerationInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerRelatedGlobalAccelerationInstancesAsyncHandler;
			typedef Outcome<Error, Model::AssociateHaVipResult> AssociateHaVipOutcome;			
			typedef std::future<AssociateHaVipOutcome> AssociateHaVipOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::AssociateHaVipRequest&, const AssociateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateHaVipAsyncHandler;
			typedef Outcome<Error, Model::ModifyRouterInterfaceAttributeResult> ModifyRouterInterfaceAttributeOutcome;			
			typedef std::future<ModifyRouterInterfaceAttributeOutcome> ModifyRouterInterfaceAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyRouterInterfaceAttributeRequest&, const ModifyRouterInterfaceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouterInterfaceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeVirtualBorderRoutersForPhysicalConnectionResult> DescribeVirtualBorderRoutersForPhysicalConnectionOutcome;			
			typedef std::future<DescribeVirtualBorderRoutersForPhysicalConnectionOutcome> DescribeVirtualBorderRoutersForPhysicalConnectionOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest&, const DescribeVirtualBorderRoutersForPhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirtualBorderRoutersForPhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalAccelerationInstanceAttributesResult> ModifyGlobalAccelerationInstanceAttributesOutcome;			
			typedef std::future<ModifyGlobalAccelerationInstanceAttributesOutcome> ModifyGlobalAccelerationInstanceAttributesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyGlobalAccelerationInstanceAttributesRequest&, const ModifyGlobalAccelerationInstanceAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalAccelerationInstanceAttributesAsyncHandler;
			typedef Outcome<Error, Model::ModifyCommonBandwidthPackageSpecResult> ModifyCommonBandwidthPackageSpecOutcome;			
			typedef std::future<ModifyCommonBandwidthPackageSpecOutcome> ModifyCommonBandwidthPackageSpecOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyCommonBandwidthPackageSpecRequest&, const ModifyCommonBandwidthPackageSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCommonBandwidthPackageSpecAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouteEntryResult> DeleteRouteEntryOutcome;			
			typedef std::future<DeleteRouteEntryOutcome> DeleteRouteEntryOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteRouteEntryRequest&, const DeleteRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteVirtualBorderRouterResult> DeleteVirtualBorderRouterOutcome;			
			typedef std::future<DeleteVirtualBorderRouterOutcome> DeleteVirtualBorderRouterOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteVirtualBorderRouterRequest&, const DeleteVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::CreatePhysicalConnectionNewResult> CreatePhysicalConnectionNewOutcome;			
			typedef std::future<CreatePhysicalConnectionNewOutcome> CreatePhysicalConnectionNewOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreatePhysicalConnectionNewRequest&, const CreatePhysicalConnectionNewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePhysicalConnectionNewAsyncHandler;
			typedef Outcome<Error, Model::TerminatePhysicalConnectionResult> TerminatePhysicalConnectionOutcome;			
			typedef std::future<TerminatePhysicalConnectionOutcome> TerminatePhysicalConnectionOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::TerminatePhysicalConnectionRequest&, const TerminatePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminatePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnGatewayResult> DescribeVpnGatewayOutcome;			
			typedef std::future<DescribeVpnGatewayOutcome> DescribeVpnGatewayOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewayRequest&, const DescribeVpnGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewayAsyncHandler;
			typedef Outcome<Error, Model::ModifyBgpGroupAttributeResult> ModifyBgpGroupAttributeOutcome;			
			typedef std::future<ModifyBgpGroupAttributeOutcome> ModifyBgpGroupAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyBgpGroupAttributeRequest&, const ModifyBgpGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBgpGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyCommonBandwidthPackageAttributeResult> ModifyCommonBandwidthPackageAttributeOutcome;			
			typedef std::future<ModifyCommonBandwidthPackageAttributeOutcome> ModifyCommonBandwidthPackageAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyCommonBandwidthPackageAttributeRequest&, const ModifyCommonBandwidthPackageAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCommonBandwidthPackageAttributeAsyncHandler;
			typedef Outcome<Error, Model::DeleteForwardEntryResult> DeleteForwardEntryOutcome;			
			typedef std::future<DeleteForwardEntryOutcome> DeleteForwardEntryOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DeleteForwardEntryRequest&, const DeleteForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::AddCommonBandwidthPackageIpResult> AddCommonBandwidthPackageIpOutcome;			
			typedef std::future<AddCommonBandwidthPackageIpOutcome> AddCommonBandwidthPackageIpOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::AddCommonBandwidthPackageIpRequest&, const AddCommonBandwidthPackageIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCommonBandwidthPackageIpAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;			
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribePhysicalConnectionsResult> DescribePhysicalConnectionsOutcome;			
			typedef std::future<DescribePhysicalConnectionsOutcome> DescribePhysicalConnectionsOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribePhysicalConnectionsRequest&, const DescribePhysicalConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhysicalConnectionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnGatewaysResult> DescribeVpnGatewaysOutcome;			
			typedef std::future<DescribeVpnGatewaysOutcome> DescribeVpnGatewaysOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewaysRequest&, const DescribeVpnGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeVirtualBorderRoutersResult> DescribeVirtualBorderRoutersOutcome;			
			typedef std::future<DescribeVirtualBorderRoutersOutcome> DescribeVirtualBorderRoutersOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVirtualBorderRoutersRequest&, const DescribeVirtualBorderRoutersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirtualBorderRoutersAsyncHandler;
			typedef Outcome<Error, Model::CreateGlobalAccelerationInstanceResult> CreateGlobalAccelerationInstanceOutcome;			
			typedef std::future<CreateGlobalAccelerationInstanceOutcome> CreateGlobalAccelerationInstanceOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateGlobalAccelerationInstanceRequest&, const CreateGlobalAccelerationInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalAccelerationInstanceAsyncHandler;
			typedef Outcome<Error, Model::CancelPhysicalConnectionResult> CancelPhysicalConnectionOutcome;			
			typedef std::future<CancelPhysicalConnectionOutcome> CancelPhysicalConnectionOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CancelPhysicalConnectionRequest&, const CancelPhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelPhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateBgpGroupResult> CreateBgpGroupOutcome;			
			typedef std::future<CreateBgpGroupOutcome> CreateBgpGroupOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::CreateBgpGroupRequest&, const CreateBgpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBgpGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeVRoutersResult> DescribeVRoutersOutcome;			
			typedef std::future<DescribeVRoutersOutcome> DescribeVRoutersOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeVRoutersRequest&, const DescribeVRoutersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVRoutersAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouterInterfacesForGlobalResult> DescribeRouterInterfacesForGlobalOutcome;			
			typedef std::future<DescribeRouterInterfacesForGlobalOutcome> DescribeRouterInterfacesForGlobalOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeRouterInterfacesForGlobalRequest&, const DescribeRouterInterfacesForGlobalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouterInterfacesForGlobalAsyncHandler;
			typedef Outcome<Error, Model::ModifyNqaResult> ModifyNqaOutcome;			
			typedef std::future<ModifyNqaOutcome> ModifyNqaOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyNqaRequest&, const ModifyNqaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNqaAsyncHandler;
			typedef Outcome<Error, Model::AllocateEipAddressResult> AllocateEipAddressOutcome;			
			typedef std::future<AllocateEipAddressOutcome> AllocateEipAddressOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::AllocateEipAddressRequest&, const AllocateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeSslVpnClientCertResult> DescribeSslVpnClientCertOutcome;			
			typedef std::future<DescribeSslVpnClientCertOutcome> DescribeSslVpnClientCertOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeSslVpnClientCertRequest&, const DescribeSslVpnClientCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSslVpnClientCertAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommonBandwidthPackagesResult> DescribeCommonBandwidthPackagesOutcome;			
			typedef std::future<DescribeCommonBandwidthPackagesOutcome> DescribeCommonBandwidthPackagesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeCommonBandwidthPackagesRequest&, const DescribeCommonBandwidthPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommonBandwidthPackagesAsyncHandler;
			typedef Outcome<Error, Model::UnassociateHaVipResult> UnassociateHaVipOutcome;			
			typedef std::future<UnassociateHaVipOutcome> UnassociateHaVipOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::UnassociateHaVipRequest&, const UnassociateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateHaVipAsyncHandler;
			typedef Outcome<Error, Model::ModifyHaVipAttributeResult> ModifyHaVipAttributeOutcome;			
			typedef std::future<ModifyHaVipAttributeOutcome> ModifyHaVipAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyHaVipAttributeRequest&, const ModifyHaVipAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHaVipAttributeAsyncHandler;
			typedef Outcome<Error, Model::AssociateGlobalAccelerationInstanceResult> AssociateGlobalAccelerationInstanceOutcome;			
			typedef std::future<AssociateGlobalAccelerationInstanceOutcome> AssociateGlobalAccelerationInstanceOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::AssociateGlobalAccelerationInstanceRequest&, const AssociateGlobalAccelerationInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateGlobalAccelerationInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeSslVpnServersResult> DescribeSslVpnServersOutcome;			
			typedef std::future<DescribeSslVpnServersOutcome> DescribeSslVpnServersOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeSslVpnServersRequest&, const DescribeSslVpnServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSslVpnServersAsyncHandler;
			typedef Outcome<Error, Model::ModifyVRouterAttributeResult> ModifyVRouterAttributeOutcome;			
			typedef std::future<ModifyVRouterAttributeOutcome> ModifyVRouterAttributeOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::ModifyVRouterAttributeRequest&, const ModifyVRouterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVRouterAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnatTableEntriesResult> DescribeSnatTableEntriesOutcome;			
			typedef std::future<DescribeSnatTableEntriesOutcome> DescribeSnatTableEntriesOutcomeCallable;			
			typedef std::function<void(const VpcClient*, const Model::DescribeSnatTableEntriesRequest&, const DescribeSnatTableEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnatTableEntriesAsyncHandler;

			VpcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			VpcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			VpcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~VpcClient();
            UnassociateGlobalAccelerationInstanceOutcome unassociateGlobalAccelerationInstance(const Model::UnassociateGlobalAccelerationInstanceRequest &request)const;
            void unassociateGlobalAccelerationInstanceAsync(const Model::UnassociateGlobalAccelerationInstanceRequest& request, const UnassociateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UnassociateGlobalAccelerationInstanceOutcomeCallable unassociateGlobalAccelerationInstanceCallable(const Model::UnassociateGlobalAccelerationInstanceRequest& request) const;
            DeleteCustomerGatewayOutcome deleteCustomerGateway(const Model::DeleteCustomerGatewayRequest &request)const;
            void deleteCustomerGatewayAsync(const Model::DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteCustomerGatewayOutcomeCallable deleteCustomerGatewayCallable(const Model::DeleteCustomerGatewayRequest& request) const;
            DescribeRouteTableListOutcome describeRouteTableList(const Model::DescribeRouteTableListRequest &request)const;
            void describeRouteTableListAsync(const Model::DescribeRouteTableListRequest& request, const DescribeRouteTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRouteTableListOutcomeCallable describeRouteTableListCallable(const Model::DescribeRouteTableListRequest& request) const;
            AssociatePhysicalConnectionToVirtualBorderRouterOutcome associatePhysicalConnectionToVirtualBorderRouter(const Model::AssociatePhysicalConnectionToVirtualBorderRouterRequest &request)const;
            void associatePhysicalConnectionToVirtualBorderRouterAsync(const Model::AssociatePhysicalConnectionToVirtualBorderRouterRequest& request, const AssociatePhysicalConnectionToVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AssociatePhysicalConnectionToVirtualBorderRouterOutcomeCallable associatePhysicalConnectionToVirtualBorderRouterCallable(const Model::AssociatePhysicalConnectionToVirtualBorderRouterRequest& request) const;
            DeleteGlobalAccelerationInstanceOutcome deleteGlobalAccelerationInstance(const Model::DeleteGlobalAccelerationInstanceRequest &request)const;
            void deleteGlobalAccelerationInstanceAsync(const Model::DeleteGlobalAccelerationInstanceRequest& request, const DeleteGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteGlobalAccelerationInstanceOutcomeCallable deleteGlobalAccelerationInstanceCallable(const Model::DeleteGlobalAccelerationInstanceRequest& request) const;
            DescribeCustomerGatewaysOutcome describeCustomerGateways(const Model::DescribeCustomerGatewaysRequest &request)const;
            void describeCustomerGatewaysAsync(const Model::DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCustomerGatewaysOutcomeCallable describeCustomerGatewaysCallable(const Model::DescribeCustomerGatewaysRequest& request) const;
            DescribeGlobalAccelerationInstancesOutcome describeGlobalAccelerationInstances(const Model::DescribeGlobalAccelerationInstancesRequest &request)const;
            void describeGlobalAccelerationInstancesAsync(const Model::DescribeGlobalAccelerationInstancesRequest& request, const DescribeGlobalAccelerationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeGlobalAccelerationInstancesOutcomeCallable describeGlobalAccelerationInstancesCallable(const Model::DescribeGlobalAccelerationInstancesRequest& request) const;
            ModifySslVpnClientCertOutcome modifySslVpnClientCert(const Model::ModifySslVpnClientCertRequest &request)const;
            void modifySslVpnClientCertAsync(const Model::ModifySslVpnClientCertRequest& request, const ModifySslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifySslVpnClientCertOutcomeCallable modifySslVpnClientCertCallable(const Model::ModifySslVpnClientCertRequest& request) const;
            DeleteVpcOutcome deleteVpc(const Model::DeleteVpcRequest &request)const;
            void deleteVpcAsync(const Model::DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteVpcOutcomeCallable deleteVpcCallable(const Model::DeleteVpcRequest& request) const;
            DownloadVpnConnectionConfigOutcome downloadVpnConnectionConfig(const Model::DownloadVpnConnectionConfigRequest &request)const;
            void downloadVpnConnectionConfigAsync(const Model::DownloadVpnConnectionConfigRequest& request, const DownloadVpnConnectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DownloadVpnConnectionConfigOutcomeCallable downloadVpnConnectionConfigCallable(const Model::DownloadVpnConnectionConfigRequest& request) const;
            RemoveCommonBandwidthPackageIpOutcome removeCommonBandwidthPackageIp(const Model::RemoveCommonBandwidthPackageIpRequest &request)const;
            void removeCommonBandwidthPackageIpAsync(const Model::RemoveCommonBandwidthPackageIpRequest& request, const RemoveCommonBandwidthPackageIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RemoveCommonBandwidthPackageIpOutcomeCallable removeCommonBandwidthPackageIpCallable(const Model::RemoveCommonBandwidthPackageIpRequest& request) const;
            ModifyBandwidthPackageSpecOutcome modifyBandwidthPackageSpec(const Model::ModifyBandwidthPackageSpecRequest &request)const;
            void modifyBandwidthPackageSpecAsync(const Model::ModifyBandwidthPackageSpecRequest& request, const ModifyBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyBandwidthPackageSpecOutcomeCallable modifyBandwidthPackageSpecCallable(const Model::ModifyBandwidthPackageSpecRequest& request) const;
            CreateNatGatewayOutcome createNatGateway(const Model::CreateNatGatewayRequest &request)const;
            void createNatGatewayAsync(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateNatGatewayOutcomeCallable createNatGatewayCallable(const Model::CreateNatGatewayRequest& request) const;
            DeleteVSwitchOutcome deleteVSwitch(const Model::DeleteVSwitchRequest &request)const;
            void deleteVSwitchAsync(const Model::DeleteVSwitchRequest& request, const DeleteVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteVSwitchOutcomeCallable deleteVSwitchCallable(const Model::DeleteVSwitchRequest& request) const;
            CreateHaVipOutcome createHaVip(const Model::CreateHaVipRequest &request)const;
            void createHaVipAsync(const Model::CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateHaVipOutcomeCallable createHaVipCallable(const Model::CreateHaVipRequest& request) const;
            CreateBandwidthPackageOutcome createBandwidthPackage(const Model::CreateBandwidthPackageRequest &request)const;
            void createBandwidthPackageAsync(const Model::CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateBandwidthPackageOutcomeCallable createBandwidthPackageCallable(const Model::CreateBandwidthPackageRequest& request) const;
            RecoverVirtualBorderRouterOutcome recoverVirtualBorderRouter(const Model::RecoverVirtualBorderRouterRequest &request)const;
            void recoverVirtualBorderRouterAsync(const Model::RecoverVirtualBorderRouterRequest& request, const RecoverVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RecoverVirtualBorderRouterOutcomeCallable recoverVirtualBorderRouterCallable(const Model::RecoverVirtualBorderRouterRequest& request) const;
            AssociateEipAddressOutcome associateEipAddress(const Model::AssociateEipAddressRequest &request)const;
            void associateEipAddressAsync(const Model::AssociateEipAddressRequest& request, const AssociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AssociateEipAddressOutcomeCallable associateEipAddressCallable(const Model::AssociateEipAddressRequest& request) const;
            DescribeEipAddressesOutcome describeEipAddresses(const Model::DescribeEipAddressesRequest &request)const;
            void describeEipAddressesAsync(const Model::DescribeEipAddressesRequest& request, const DescribeEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeEipAddressesOutcomeCallable describeEipAddressesCallable(const Model::DescribeEipAddressesRequest& request) const;
            CreateCustomerGatewayOutcome createCustomerGateway(const Model::CreateCustomerGatewayRequest &request)const;
            void createCustomerGatewayAsync(const Model::CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateCustomerGatewayOutcomeCallable createCustomerGatewayCallable(const Model::CreateCustomerGatewayRequest& request) const;
            ActivateRouterInterfaceOutcome activateRouterInterface(const Model::ActivateRouterInterfaceRequest &request)const;
            void activateRouterInterfaceAsync(const Model::ActivateRouterInterfaceRequest& request, const ActivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ActivateRouterInterfaceOutcomeCallable activateRouterInterfaceCallable(const Model::ActivateRouterInterfaceRequest& request) const;
            DeleteSslVpnServerOutcome deleteSslVpnServer(const Model::DeleteSslVpnServerRequest &request)const;
            void deleteSslVpnServerAsync(const Model::DeleteSslVpnServerRequest& request, const DeleteSslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteSslVpnServerOutcomeCallable deleteSslVpnServerCallable(const Model::DeleteSslVpnServerRequest& request) const;
            DeleteBandwidthPackageOutcome deleteBandwidthPackage(const Model::DeleteBandwidthPackageRequest &request)const;
            void deleteBandwidthPackageAsync(const Model::DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteBandwidthPackageOutcomeCallable deleteBandwidthPackageCallable(const Model::DeleteBandwidthPackageRequest& request) const;
            DeleteBgpPeerOutcome deleteBgpPeer(const Model::DeleteBgpPeerRequest &request)const;
            void deleteBgpPeerAsync(const Model::DeleteBgpPeerRequest& request, const DeleteBgpPeerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteBgpPeerOutcomeCallable deleteBgpPeerCallable(const Model::DeleteBgpPeerRequest& request) const;
            DeleteNqaOutcome deleteNqa(const Model::DeleteNqaRequest &request)const;
            void deleteNqaAsync(const Model::DeleteNqaRequest& request, const DeleteNqaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteNqaOutcomeCallable deleteNqaCallable(const Model::DeleteNqaRequest& request) const;
            TerminateVirtualBorderRouterOutcome terminateVirtualBorderRouter(const Model::TerminateVirtualBorderRouterRequest &request)const;
            void terminateVirtualBorderRouterAsync(const Model::TerminateVirtualBorderRouterRequest& request, const TerminateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            TerminateVirtualBorderRouterOutcomeCallable terminateVirtualBorderRouterCallable(const Model::TerminateVirtualBorderRouterRequest& request) const;
            ModifyRouteTableAttributesOutcome modifyRouteTableAttributes(const Model::ModifyRouteTableAttributesRequest &request)const;
            void modifyRouteTableAttributesAsync(const Model::ModifyRouteTableAttributesRequest& request, const ModifyRouteTableAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyRouteTableAttributesOutcomeCallable modifyRouteTableAttributesCallable(const Model::ModifyRouteTableAttributesRequest& request) const;
            DeletePhysicalConnectionOutcome deletePhysicalConnection(const Model::DeletePhysicalConnectionRequest &request)const;
            void deletePhysicalConnectionAsync(const Model::DeletePhysicalConnectionRequest& request, const DeletePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeletePhysicalConnectionOutcomeCallable deletePhysicalConnectionCallable(const Model::DeletePhysicalConnectionRequest& request) const;
            ModifyForwardEntryOutcome modifyForwardEntry(const Model::ModifyForwardEntryRequest &request)const;
            void modifyForwardEntryAsync(const Model::ModifyForwardEntryRequest& request, const ModifyForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyForwardEntryOutcomeCallable modifyForwardEntryCallable(const Model::ModifyForwardEntryRequest& request) const;
            CreateVpcOutcome createVpc(const Model::CreateVpcRequest &request)const;
            void createVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateVpcOutcomeCallable createVpcCallable(const Model::CreateVpcRequest& request) const;
            DescribeForwardTableEntriesOutcome describeForwardTableEntries(const Model::DescribeForwardTableEntriesRequest &request)const;
            void describeForwardTableEntriesAsync(const Model::DescribeForwardTableEntriesRequest& request, const DescribeForwardTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeForwardTableEntriesOutcomeCallable describeForwardTableEntriesCallable(const Model::DescribeForwardTableEntriesRequest& request) const;
            UnassociateEipAddressOutcome unassociateEipAddress(const Model::UnassociateEipAddressRequest &request)const;
            void unassociateEipAddressAsync(const Model::UnassociateEipAddressRequest& request, const UnassociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UnassociateEipAddressOutcomeCallable unassociateEipAddressCallable(const Model::UnassociateEipAddressRequest& request) const;
            DescribeSslVpnClientCertsOutcome describeSslVpnClientCerts(const Model::DescribeSslVpnClientCertsRequest &request)const;
            void describeSslVpnClientCertsAsync(const Model::DescribeSslVpnClientCertsRequest& request, const DescribeSslVpnClientCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSslVpnClientCertsOutcomeCallable describeSslVpnClientCertsCallable(const Model::DescribeSslVpnClientCertsRequest& request) const;
            DescribeVpnConnectionOutcome describeVpnConnection(const Model::DescribeVpnConnectionRequest &request)const;
            void describeVpnConnectionAsync(const Model::DescribeVpnConnectionRequest& request, const DescribeVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVpnConnectionOutcomeCallable describeVpnConnectionCallable(const Model::DescribeVpnConnectionRequest& request) const;
            ModifyGlobalAccelerationInstanceSpecOutcome modifyGlobalAccelerationInstanceSpec(const Model::ModifyGlobalAccelerationInstanceSpecRequest &request)const;
            void modifyGlobalAccelerationInstanceSpecAsync(const Model::ModifyGlobalAccelerationInstanceSpecRequest& request, const ModifyGlobalAccelerationInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyGlobalAccelerationInstanceSpecOutcomeCallable modifyGlobalAccelerationInstanceSpecCallable(const Model::ModifyGlobalAccelerationInstanceSpecRequest& request) const;
            AddGlobalAccelerationInstanceIpOutcome addGlobalAccelerationInstanceIp(const Model::AddGlobalAccelerationInstanceIpRequest &request)const;
            void addGlobalAccelerationInstanceIpAsync(const Model::AddGlobalAccelerationInstanceIpRequest& request, const AddGlobalAccelerationInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddGlobalAccelerationInstanceIpOutcomeCallable addGlobalAccelerationInstanceIpCallable(const Model::AddGlobalAccelerationInstanceIpRequest& request) const;
            DeleteRouterInterfaceOutcome deleteRouterInterface(const Model::DeleteRouterInterfaceRequest &request)const;
            void deleteRouterInterfaceAsync(const Model::DeleteRouterInterfaceRequest& request, const DeleteRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteRouterInterfaceOutcomeCallable deleteRouterInterfaceCallable(const Model::DeleteRouterInterfaceRequest& request) const;
            CreateSslVpnServerOutcome createSslVpnServer(const Model::CreateSslVpnServerRequest &request)const;
            void createSslVpnServerAsync(const Model::CreateSslVpnServerRequest& request, const CreateSslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateSslVpnServerOutcomeCallable createSslVpnServerCallable(const Model::CreateSslVpnServerRequest& request) const;
            DescribeBandwidthPackagePublicIpMonitorDataOutcome describeBandwidthPackagePublicIpMonitorData(const Model::DescribeBandwidthPackagePublicIpMonitorDataRequest &request)const;
            void describeBandwidthPackagePublicIpMonitorDataAsync(const Model::DescribeBandwidthPackagePublicIpMonitorDataRequest& request, const DescribeBandwidthPackagePublicIpMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeBandwidthPackagePublicIpMonitorDataOutcomeCallable describeBandwidthPackagePublicIpMonitorDataCallable(const Model::DescribeBandwidthPackagePublicIpMonitorDataRequest& request) const;
            DescribeNqasOutcome describeNqas(const Model::DescribeNqasRequest &request)const;
            void describeNqasAsync(const Model::DescribeNqasRequest& request, const DescribeNqasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeNqasOutcomeCallable describeNqasCallable(const Model::DescribeNqasRequest& request) const;
            ModifyVirtualBorderRouterAttributeOutcome modifyVirtualBorderRouterAttribute(const Model::ModifyVirtualBorderRouterAttributeRequest &request)const;
            void modifyVirtualBorderRouterAttributeAsync(const Model::ModifyVirtualBorderRouterAttributeRequest& request, const ModifyVirtualBorderRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyVirtualBorderRouterAttributeOutcomeCallable modifyVirtualBorderRouterAttributeCallable(const Model::ModifyVirtualBorderRouterAttributeRequest& request) const;
            ModifyNatGatewayAttributeOutcome modifyNatGatewayAttribute(const Model::ModifyNatGatewayAttributeRequest &request)const;
            void modifyNatGatewayAttributeAsync(const Model::ModifyNatGatewayAttributeRequest& request, const ModifyNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyNatGatewayAttributeOutcomeCallable modifyNatGatewayAttributeCallable(const Model::ModifyNatGatewayAttributeRequest& request) const;
            DescribeEipMonitorDataOutcome describeEipMonitorData(const Model::DescribeEipMonitorDataRequest &request)const;
            void describeEipMonitorDataAsync(const Model::DescribeEipMonitorDataRequest& request, const DescribeEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeEipMonitorDataOutcomeCallable describeEipMonitorDataCallable(const Model::DescribeEipMonitorDataRequest& request) const;
            DeleteVpnGatewayOutcome deleteVpnGateway(const Model::DeleteVpnGatewayRequest &request)const;
            void deleteVpnGatewayAsync(const Model::DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteVpnGatewayOutcomeCallable deleteVpnGatewayCallable(const Model::DeleteVpnGatewayRequest& request) const;
            DescribeCustomerGatewayOutcome describeCustomerGateway(const Model::DescribeCustomerGatewayRequest &request)const;
            void describeCustomerGatewayAsync(const Model::DescribeCustomerGatewayRequest& request, const DescribeCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCustomerGatewayOutcomeCallable describeCustomerGatewayCallable(const Model::DescribeCustomerGatewayRequest& request) const;
            ModifyVpnGatewayAttributeOutcome modifyVpnGatewayAttribute(const Model::ModifyVpnGatewayAttributeRequest &request)const;
            void modifyVpnGatewayAttributeAsync(const Model::ModifyVpnGatewayAttributeRequest& request, const ModifyVpnGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyVpnGatewayAttributeOutcomeCallable modifyVpnGatewayAttributeCallable(const Model::ModifyVpnGatewayAttributeRequest& request) const;
            AddBgpNetworkOutcome addBgpNetwork(const Model::AddBgpNetworkRequest &request)const;
            void addBgpNetworkAsync(const Model::AddBgpNetworkRequest& request, const AddBgpNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddBgpNetworkOutcomeCallable addBgpNetworkCallable(const Model::AddBgpNetworkRequest& request) const;
            ModifySslVpnServerOutcome modifySslVpnServer(const Model::ModifySslVpnServerRequest &request)const;
            void modifySslVpnServerAsync(const Model::ModifySslVpnServerRequest& request, const ModifySslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifySslVpnServerOutcomeCallable modifySslVpnServerCallable(const Model::ModifySslVpnServerRequest& request) const;
            DescribeVpnConnectionsOutcome describeVpnConnections(const Model::DescribeVpnConnectionsRequest &request)const;
            void describeVpnConnectionsAsync(const Model::DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVpnConnectionsOutcomeCallable describeVpnConnectionsCallable(const Model::DescribeVpnConnectionsRequest& request) const;
            DescribeNewProjectEipMonitorDataOutcome describeNewProjectEipMonitorData(const Model::DescribeNewProjectEipMonitorDataRequest &request)const;
            void describeNewProjectEipMonitorDataAsync(const Model::DescribeNewProjectEipMonitorDataRequest& request, const DescribeNewProjectEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeNewProjectEipMonitorDataOutcomeCallable describeNewProjectEipMonitorDataCallable(const Model::DescribeNewProjectEipMonitorDataRequest& request) const;
            ModifyBandwidthPackageAttributeOutcome modifyBandwidthPackageAttribute(const Model::ModifyBandwidthPackageAttributeRequest &request)const;
            void modifyBandwidthPackageAttributeAsync(const Model::ModifyBandwidthPackageAttributeRequest& request, const ModifyBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyBandwidthPackageAttributeOutcomeCallable modifyBandwidthPackageAttributeCallable(const Model::ModifyBandwidthPackageAttributeRequest& request) const;
            ConnectRouterInterfaceOutcome connectRouterInterface(const Model::ConnectRouterInterfaceRequest &request)const;
            void connectRouterInterfaceAsync(const Model::ConnectRouterInterfaceRequest& request, const ConnectRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ConnectRouterInterfaceOutcomeCallable connectRouterInterfaceCallable(const Model::ConnectRouterInterfaceRequest& request) const;
            DescribeBgpPeersOutcome describeBgpPeers(const Model::DescribeBgpPeersRequest &request)const;
            void describeBgpPeersAsync(const Model::DescribeBgpPeersRequest& request, const DescribeBgpPeersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeBgpPeersOutcomeCallable describeBgpPeersCallable(const Model::DescribeBgpPeersRequest& request) const;
            DeleteSnatEntryOutcome deleteSnatEntry(const Model::DeleteSnatEntryRequest &request)const;
            void deleteSnatEntryAsync(const Model::DeleteSnatEntryRequest& request, const DeleteSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteSnatEntryOutcomeCallable deleteSnatEntryCallable(const Model::DeleteSnatEntryRequest& request) const;
            DescribeHaVipsOutcome describeHaVips(const Model::DescribeHaVipsRequest &request)const;
            void describeHaVipsAsync(const Model::DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeHaVipsOutcomeCallable describeHaVipsCallable(const Model::DescribeHaVipsRequest& request) const;
            CreateNqaOutcome createNqa(const Model::CreateNqaRequest &request)const;
            void createNqaAsync(const Model::CreateNqaRequest& request, const CreateNqaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateNqaOutcomeCallable createNqaCallable(const Model::CreateNqaRequest& request) const;
            DescribeForwardTablesOutcome describeForwardTables(const Model::DescribeForwardTablesRequest &request)const;
            void describeForwardTablesAsync(const Model::DescribeForwardTablesRequest& request, const DescribeForwardTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeForwardTablesOutcomeCallable describeForwardTablesCallable(const Model::DescribeForwardTablesRequest& request) const;
            AddBandwidthPackageIpsOutcome addBandwidthPackageIps(const Model::AddBandwidthPackageIpsRequest &request)const;
            void addBandwidthPackageIpsAsync(const Model::AddBandwidthPackageIpsRequest& request, const AddBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddBandwidthPackageIpsOutcomeCallable addBandwidthPackageIpsCallable(const Model::AddBandwidthPackageIpsRequest& request) const;
            ModifyPhysicalConnectionAttributeOutcome modifyPhysicalConnectionAttribute(const Model::ModifyPhysicalConnectionAttributeRequest &request)const;
            void modifyPhysicalConnectionAttributeAsync(const Model::ModifyPhysicalConnectionAttributeRequest& request, const ModifyPhysicalConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyPhysicalConnectionAttributeOutcomeCallable modifyPhysicalConnectionAttributeCallable(const Model::ModifyPhysicalConnectionAttributeRequest& request) const;
            CreateSnatEntryOutcome createSnatEntry(const Model::CreateSnatEntryRequest &request)const;
            void createSnatEntryAsync(const Model::CreateSnatEntryRequest& request, const CreateSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateSnatEntryOutcomeCallable createSnatEntryCallable(const Model::CreateSnatEntryRequest& request) const;
            DeleteCommonBandwidthPackageOutcome deleteCommonBandwidthPackage(const Model::DeleteCommonBandwidthPackageRequest &request)const;
            void deleteCommonBandwidthPackageAsync(const Model::DeleteCommonBandwidthPackageRequest& request, const DeleteCommonBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteCommonBandwidthPackageOutcomeCallable deleteCommonBandwidthPackageCallable(const Model::DeleteCommonBandwidthPackageRequest& request) const;
            ModifyVSwitchAttributeOutcome modifyVSwitchAttribute(const Model::ModifyVSwitchAttributeRequest &request)const;
            void modifyVSwitchAttributeAsync(const Model::ModifyVSwitchAttributeRequest& request, const ModifyVSwitchAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyVSwitchAttributeOutcomeCallable modifyVSwitchAttributeCallable(const Model::ModifyVSwitchAttributeRequest& request) const;
            DescribeNatGatewaysOutcome describeNatGateways(const Model::DescribeNatGatewaysRequest &request)const;
            void describeNatGatewaysAsync(const Model::DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeNatGatewaysOutcomeCallable describeNatGatewaysCallable(const Model::DescribeNatGatewaysRequest& request) const;
            EnableVpcClassicLinkOutcome enableVpcClassicLink(const Model::EnableVpcClassicLinkRequest &request)const;
            void enableVpcClassicLinkAsync(const Model::EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            EnableVpcClassicLinkOutcomeCallable enableVpcClassicLinkCallable(const Model::EnableVpcClassicLinkRequest& request) const;
            DeleteHaVipOutcome deleteHaVip(const Model::DeleteHaVipRequest &request)const;
            void deleteHaVipAsync(const Model::DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteHaVipOutcomeCallable deleteHaVipCallable(const Model::DeleteHaVipRequest& request) const;
            DescribeVpcAttributeOutcome describeVpcAttribute(const Model::DescribeVpcAttributeRequest &request)const;
            void describeVpcAttributeAsync(const Model::DescribeVpcAttributeRequest& request, const DescribeVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVpcAttributeOutcomeCallable describeVpcAttributeCallable(const Model::DescribeVpcAttributeRequest& request) const;
            CreateVpnConnectionOutcome createVpnConnection(const Model::CreateVpnConnectionRequest &request)const;
            void createVpnConnectionAsync(const Model::CreateVpnConnectionRequest& request, const CreateVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateVpnConnectionOutcomeCallable createVpnConnectionCallable(const Model::CreateVpnConnectionRequest& request) const;
            DeleteVpnConnectionOutcome deleteVpnConnection(const Model::DeleteVpnConnectionRequest &request)const;
            void deleteVpnConnectionAsync(const Model::DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteVpnConnectionOutcomeCallable deleteVpnConnectionCallable(const Model::DeleteVpnConnectionRequest& request) const;
            DescribeBandwidthPackagesOutcome describeBandwidthPackages(const Model::DescribeBandwidthPackagesRequest &request)const;
            void describeBandwidthPackagesAsync(const Model::DescribeBandwidthPackagesRequest& request, const DescribeBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeBandwidthPackagesOutcomeCallable describeBandwidthPackagesCallable(const Model::DescribeBandwidthPackagesRequest& request) const;
            DeleteBgpNetworkOutcome deleteBgpNetwork(const Model::DeleteBgpNetworkRequest &request)const;
            void deleteBgpNetworkAsync(const Model::DeleteBgpNetworkRequest& request, const DeleteBgpNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteBgpNetworkOutcomeCallable deleteBgpNetworkCallable(const Model::DeleteBgpNetworkRequest& request) const;
            CreateRouteEntryOutcome createRouteEntry(const Model::CreateRouteEntryRequest &request)const;
            void createRouteEntryAsync(const Model::CreateRouteEntryRequest& request, const CreateRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateRouteEntryOutcomeCallable createRouteEntryCallable(const Model::CreateRouteEntryRequest& request) const;
            CreateRouterInterfaceOutcome createRouterInterface(const Model::CreateRouterInterfaceRequest &request)const;
            void createRouterInterfaceAsync(const Model::CreateRouterInterfaceRequest& request, const CreateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateRouterInterfaceOutcomeCallable createRouterInterfaceCallable(const Model::CreateRouterInterfaceRequest& request) const;
            DisableVpcClassicLinkOutcome disableVpcClassicLink(const Model::DisableVpcClassicLinkRequest &request)const;
            void disableVpcClassicLinkAsync(const Model::DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DisableVpcClassicLinkOutcomeCallable disableVpcClassicLinkCallable(const Model::DisableVpcClassicLinkRequest& request) const;
            ModifyVpnConnectionAttributeOutcome modifyVpnConnectionAttribute(const Model::ModifyVpnConnectionAttributeRequest &request)const;
            void modifyVpnConnectionAttributeAsync(const Model::ModifyVpnConnectionAttributeRequest& request, const ModifyVpnConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyVpnConnectionAttributeOutcomeCallable modifyVpnConnectionAttributeCallable(const Model::ModifyVpnConnectionAttributeRequest& request) const;
            RemoveGlobalAccelerationInstanceIpOutcome removeGlobalAccelerationInstanceIp(const Model::RemoveGlobalAccelerationInstanceIpRequest &request)const;
            void removeGlobalAccelerationInstanceIpAsync(const Model::RemoveGlobalAccelerationInstanceIpRequest& request, const RemoveGlobalAccelerationInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RemoveGlobalAccelerationInstanceIpOutcomeCallable removeGlobalAccelerationInstanceIpCallable(const Model::RemoveGlobalAccelerationInstanceIpRequest& request) const;
            ModifyNatGatewaySpecOutcome modifyNatGatewaySpec(const Model::ModifyNatGatewaySpecRequest &request)const;
            void modifyNatGatewaySpecAsync(const Model::ModifyNatGatewaySpecRequest& request, const ModifyNatGatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyNatGatewaySpecOutcomeCallable modifyNatGatewaySpecCallable(const Model::ModifyNatGatewaySpecRequest& request) const;
            DescribeBgpGroupsOutcome describeBgpGroups(const Model::DescribeBgpGroupsRequest &request)const;
            void describeBgpGroupsAsync(const Model::DescribeBgpGroupsRequest& request, const DescribeBgpGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeBgpGroupsOutcomeCallable describeBgpGroupsCallable(const Model::DescribeBgpGroupsRequest& request) const;
            RemoveBandwidthPackageIpsOutcome removeBandwidthPackageIps(const Model::RemoveBandwidthPackageIpsRequest &request)const;
            void removeBandwidthPackageIpsAsync(const Model::RemoveBandwidthPackageIpsRequest& request, const RemoveBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RemoveBandwidthPackageIpsOutcomeCallable removeBandwidthPackageIpsCallable(const Model::RemoveBandwidthPackageIpsRequest& request) const;
            ModifyVpcAttributeOutcome modifyVpcAttribute(const Model::ModifyVpcAttributeRequest &request)const;
            void modifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyVpcAttributeOutcomeCallable modifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request) const;
            DeleteSslVpnClientCertOutcome deleteSslVpnClientCert(const Model::DeleteSslVpnClientCertRequest &request)const;
            void deleteSslVpnClientCertAsync(const Model::DeleteSslVpnClientCertRequest& request, const DeleteSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteSslVpnClientCertOutcomeCallable deleteSslVpnClientCertCallable(const Model::DeleteSslVpnClientCertRequest& request) const;
            CreateVSwitchOutcome createVSwitch(const Model::CreateVSwitchRequest &request)const;
            void createVSwitchAsync(const Model::CreateVSwitchRequest& request, const CreateVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateVSwitchOutcomeCallable createVSwitchCallable(const Model::CreateVSwitchRequest& request) const;
            ModifyCustomerGatewayAttributeOutcome modifyCustomerGatewayAttribute(const Model::ModifyCustomerGatewayAttributeRequest &request)const;
            void modifyCustomerGatewayAttributeAsync(const Model::ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyCustomerGatewayAttributeOutcomeCallable modifyCustomerGatewayAttributeCallable(const Model::ModifyCustomerGatewayAttributeRequest& request) const;
            EnablePhysicalConnectionOutcome enablePhysicalConnection(const Model::EnablePhysicalConnectionRequest &request)const;
            void enablePhysicalConnectionAsync(const Model::EnablePhysicalConnectionRequest& request, const EnablePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            EnablePhysicalConnectionOutcomeCallable enablePhysicalConnectionCallable(const Model::EnablePhysicalConnectionRequest& request) const;
            ModifyEipAddressAttributeOutcome modifyEipAddressAttribute(const Model::ModifyEipAddressAttributeRequest &request)const;
            void modifyEipAddressAttributeAsync(const Model::ModifyEipAddressAttributeRequest& request, const ModifyEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyEipAddressAttributeOutcomeCallable modifyEipAddressAttributeCallable(const Model::ModifyEipAddressAttributeRequest& request) const;
            ModifyCommonBandwidthPackagePayTypeOutcome modifyCommonBandwidthPackagePayType(const Model::ModifyCommonBandwidthPackagePayTypeRequest &request)const;
            void modifyCommonBandwidthPackagePayTypeAsync(const Model::ModifyCommonBandwidthPackagePayTypeRequest& request, const ModifyCommonBandwidthPackagePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyCommonBandwidthPackagePayTypeOutcomeCallable modifyCommonBandwidthPackagePayTypeCallable(const Model::ModifyCommonBandwidthPackagePayTypeRequest& request) const;
            DescribeVSwitchAttributesOutcome describeVSwitchAttributes(const Model::DescribeVSwitchAttributesRequest &request)const;
            void describeVSwitchAttributesAsync(const Model::DescribeVSwitchAttributesRequest& request, const DescribeVSwitchAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVSwitchAttributesOutcomeCallable describeVSwitchAttributesCallable(const Model::DescribeVSwitchAttributesRequest& request) const;
            CreateCommonBandwidthPackageOutcome createCommonBandwidthPackage(const Model::CreateCommonBandwidthPackageRequest &request)const;
            void createCommonBandwidthPackageAsync(const Model::CreateCommonBandwidthPackageRequest& request, const CreateCommonBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateCommonBandwidthPackageOutcomeCallable createCommonBandwidthPackageCallable(const Model::CreateCommonBandwidthPackageRequest& request) const;
            CreateForwardEntryOutcome createForwardEntry(const Model::CreateForwardEntryRequest &request)const;
            void createForwardEntryAsync(const Model::CreateForwardEntryRequest& request, const CreateForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateForwardEntryOutcomeCallable createForwardEntryCallable(const Model::CreateForwardEntryRequest& request) const;
            DescribeRouterInterfacesOutcome describeRouterInterfaces(const Model::DescribeRouterInterfacesRequest &request)const;
            void describeRouterInterfacesAsync(const Model::DescribeRouterInterfacesRequest& request, const DescribeRouterInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRouterInterfacesOutcomeCallable describeRouterInterfacesCallable(const Model::DescribeRouterInterfacesRequest& request) const;
            DeleteNatGatewayOutcome deleteNatGateway(const Model::DeleteNatGatewayRequest &request)const;
            void deleteNatGatewayAsync(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteNatGatewayOutcomeCallable deleteNatGatewayCallable(const Model::DeleteNatGatewayRequest& request) const;
            DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
            void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
            DeactivateRouterInterfaceOutcome deactivateRouterInterface(const Model::DeactivateRouterInterfaceRequest &request)const;
            void deactivateRouterInterfaceAsync(const Model::DeactivateRouterInterfaceRequest& request, const DeactivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeactivateRouterInterfaceOutcomeCallable deactivateRouterInterfaceCallable(const Model::DeactivateRouterInterfaceRequest& request) const;
            ModifySnatEntryOutcome modifySnatEntry(const Model::ModifySnatEntryRequest &request)const;
            void modifySnatEntryAsync(const Model::ModifySnatEntryRequest& request, const ModifySnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifySnatEntryOutcomeCallable modifySnatEntryCallable(const Model::ModifySnatEntryRequest& request) const;
            DescribeAccessPointsOutcome describeAccessPoints(const Model::DescribeAccessPointsRequest &request)const;
            void describeAccessPointsAsync(const Model::DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeAccessPointsOutcomeCallable describeAccessPointsCallable(const Model::DescribeAccessPointsRequest& request) const;
            CreateSslVpnClientCertOutcome createSslVpnClientCert(const Model::CreateSslVpnClientCertRequest &request)const;
            void createSslVpnClientCertAsync(const Model::CreateSslVpnClientCertRequest& request, const CreateSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateSslVpnClientCertOutcomeCallable createSslVpnClientCertCallable(const Model::CreateSslVpnClientCertRequest& request) const;
            CreateVirtualBorderRouterOutcome createVirtualBorderRouter(const Model::CreateVirtualBorderRouterRequest &request)const;
            void createVirtualBorderRouterAsync(const Model::CreateVirtualBorderRouterRequest& request, const CreateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateVirtualBorderRouterOutcomeCallable createVirtualBorderRouterCallable(const Model::CreateVirtualBorderRouterRequest& request) const;
            DeleteBgpGroupOutcome deleteBgpGroup(const Model::DeleteBgpGroupRequest &request)const;
            void deleteBgpGroupAsync(const Model::DeleteBgpGroupRequest& request, const DeleteBgpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteBgpGroupOutcomeCallable deleteBgpGroupCallable(const Model::DeleteBgpGroupRequest& request) const;
            ReleaseEipAddressOutcome releaseEipAddress(const Model::ReleaseEipAddressRequest &request)const;
            void releaseEipAddressAsync(const Model::ReleaseEipAddressRequest& request, const ReleaseEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ReleaseEipAddressOutcomeCallable releaseEipAddressCallable(const Model::ReleaseEipAddressRequest& request) const;
            CreateBgpPeerOutcome createBgpPeer(const Model::CreateBgpPeerRequest &request)const;
            void createBgpPeerAsync(const Model::CreateBgpPeerRequest& request, const CreateBgpPeerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateBgpPeerOutcomeCallable createBgpPeerCallable(const Model::CreateBgpPeerRequest& request) const;
            DescribeRouteTablesOutcome describeRouteTables(const Model::DescribeRouteTablesRequest &request)const;
            void describeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRouteTablesOutcomeCallable describeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request) const;
            DescribeVSwitchesOutcome describeVSwitches(const Model::DescribeVSwitchesRequest &request)const;
            void describeVSwitchesAsync(const Model::DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVSwitchesOutcomeCallable describeVSwitchesCallable(const Model::DescribeVSwitchesRequest& request) const;
            ModifyRouterInterfaceSpecOutcome modifyRouterInterfaceSpec(const Model::ModifyRouterInterfaceSpecRequest &request)const;
            void modifyRouterInterfaceSpecAsync(const Model::ModifyRouterInterfaceSpecRequest& request, const ModifyRouterInterfaceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyRouterInterfaceSpecOutcomeCallable modifyRouterInterfaceSpecCallable(const Model::ModifyRouterInterfaceSpecRequest& request) const;
            DescribeVpcsOutcome describeVpcs(const Model::DescribeVpcsRequest &request)const;
            void describeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVpcsOutcomeCallable describeVpcsCallable(const Model::DescribeVpcsRequest& request) const;
            CreatePhysicalConnectionOutcome createPhysicalConnection(const Model::CreatePhysicalConnectionRequest &request)const;
            void createPhysicalConnectionAsync(const Model::CreatePhysicalConnectionRequest& request, const CreatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreatePhysicalConnectionOutcomeCallable createPhysicalConnectionCallable(const Model::CreatePhysicalConnectionRequest& request) const;
            UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome unassociatePhysicalConnectionFromVirtualBorderRouter(const Model::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest &request)const;
            void unassociatePhysicalConnectionFromVirtualBorderRouterAsync(const Model::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest& request, const UnassociatePhysicalConnectionFromVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UnassociatePhysicalConnectionFromVirtualBorderRouterOutcomeCallable unassociatePhysicalConnectionFromVirtualBorderRouterCallable(const Model::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest& request) const;
            DescribeServerRelatedGlobalAccelerationInstancesOutcome describeServerRelatedGlobalAccelerationInstances(const Model::DescribeServerRelatedGlobalAccelerationInstancesRequest &request)const;
            void describeServerRelatedGlobalAccelerationInstancesAsync(const Model::DescribeServerRelatedGlobalAccelerationInstancesRequest& request, const DescribeServerRelatedGlobalAccelerationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeServerRelatedGlobalAccelerationInstancesOutcomeCallable describeServerRelatedGlobalAccelerationInstancesCallable(const Model::DescribeServerRelatedGlobalAccelerationInstancesRequest& request) const;
            AssociateHaVipOutcome associateHaVip(const Model::AssociateHaVipRequest &request)const;
            void associateHaVipAsync(const Model::AssociateHaVipRequest& request, const AssociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AssociateHaVipOutcomeCallable associateHaVipCallable(const Model::AssociateHaVipRequest& request) const;
            ModifyRouterInterfaceAttributeOutcome modifyRouterInterfaceAttribute(const Model::ModifyRouterInterfaceAttributeRequest &request)const;
            void modifyRouterInterfaceAttributeAsync(const Model::ModifyRouterInterfaceAttributeRequest& request, const ModifyRouterInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyRouterInterfaceAttributeOutcomeCallable modifyRouterInterfaceAttributeCallable(const Model::ModifyRouterInterfaceAttributeRequest& request) const;
            DescribeVirtualBorderRoutersForPhysicalConnectionOutcome describeVirtualBorderRoutersForPhysicalConnection(const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request)const;
            void describeVirtualBorderRoutersForPhysicalConnectionAsync(const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest& request, const DescribeVirtualBorderRoutersForPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVirtualBorderRoutersForPhysicalConnectionOutcomeCallable describeVirtualBorderRoutersForPhysicalConnectionCallable(const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest& request) const;
            ModifyGlobalAccelerationInstanceAttributesOutcome modifyGlobalAccelerationInstanceAttributes(const Model::ModifyGlobalAccelerationInstanceAttributesRequest &request)const;
            void modifyGlobalAccelerationInstanceAttributesAsync(const Model::ModifyGlobalAccelerationInstanceAttributesRequest& request, const ModifyGlobalAccelerationInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyGlobalAccelerationInstanceAttributesOutcomeCallable modifyGlobalAccelerationInstanceAttributesCallable(const Model::ModifyGlobalAccelerationInstanceAttributesRequest& request) const;
            ModifyCommonBandwidthPackageSpecOutcome modifyCommonBandwidthPackageSpec(const Model::ModifyCommonBandwidthPackageSpecRequest &request)const;
            void modifyCommonBandwidthPackageSpecAsync(const Model::ModifyCommonBandwidthPackageSpecRequest& request, const ModifyCommonBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyCommonBandwidthPackageSpecOutcomeCallable modifyCommonBandwidthPackageSpecCallable(const Model::ModifyCommonBandwidthPackageSpecRequest& request) const;
            DeleteRouteEntryOutcome deleteRouteEntry(const Model::DeleteRouteEntryRequest &request)const;
            void deleteRouteEntryAsync(const Model::DeleteRouteEntryRequest& request, const DeleteRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteRouteEntryOutcomeCallable deleteRouteEntryCallable(const Model::DeleteRouteEntryRequest& request) const;
            DeleteVirtualBorderRouterOutcome deleteVirtualBorderRouter(const Model::DeleteVirtualBorderRouterRequest &request)const;
            void deleteVirtualBorderRouterAsync(const Model::DeleteVirtualBorderRouterRequest& request, const DeleteVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteVirtualBorderRouterOutcomeCallable deleteVirtualBorderRouterCallable(const Model::DeleteVirtualBorderRouterRequest& request) const;
            CreatePhysicalConnectionNewOutcome createPhysicalConnectionNew(const Model::CreatePhysicalConnectionNewRequest &request)const;
            void createPhysicalConnectionNewAsync(const Model::CreatePhysicalConnectionNewRequest& request, const CreatePhysicalConnectionNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreatePhysicalConnectionNewOutcomeCallable createPhysicalConnectionNewCallable(const Model::CreatePhysicalConnectionNewRequest& request) const;
            TerminatePhysicalConnectionOutcome terminatePhysicalConnection(const Model::TerminatePhysicalConnectionRequest &request)const;
            void terminatePhysicalConnectionAsync(const Model::TerminatePhysicalConnectionRequest& request, const TerminatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            TerminatePhysicalConnectionOutcomeCallable terminatePhysicalConnectionCallable(const Model::TerminatePhysicalConnectionRequest& request) const;
            DescribeVpnGatewayOutcome describeVpnGateway(const Model::DescribeVpnGatewayRequest &request)const;
            void describeVpnGatewayAsync(const Model::DescribeVpnGatewayRequest& request, const DescribeVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVpnGatewayOutcomeCallable describeVpnGatewayCallable(const Model::DescribeVpnGatewayRequest& request) const;
            ModifyBgpGroupAttributeOutcome modifyBgpGroupAttribute(const Model::ModifyBgpGroupAttributeRequest &request)const;
            void modifyBgpGroupAttributeAsync(const Model::ModifyBgpGroupAttributeRequest& request, const ModifyBgpGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyBgpGroupAttributeOutcomeCallable modifyBgpGroupAttributeCallable(const Model::ModifyBgpGroupAttributeRequest& request) const;
            ModifyCommonBandwidthPackageAttributeOutcome modifyCommonBandwidthPackageAttribute(const Model::ModifyCommonBandwidthPackageAttributeRequest &request)const;
            void modifyCommonBandwidthPackageAttributeAsync(const Model::ModifyCommonBandwidthPackageAttributeRequest& request, const ModifyCommonBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyCommonBandwidthPackageAttributeOutcomeCallable modifyCommonBandwidthPackageAttributeCallable(const Model::ModifyCommonBandwidthPackageAttributeRequest& request) const;
            DeleteForwardEntryOutcome deleteForwardEntry(const Model::DeleteForwardEntryRequest &request)const;
            void deleteForwardEntryAsync(const Model::DeleteForwardEntryRequest& request, const DeleteForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteForwardEntryOutcomeCallable deleteForwardEntryCallable(const Model::DeleteForwardEntryRequest& request) const;
            AddCommonBandwidthPackageIpOutcome addCommonBandwidthPackageIp(const Model::AddCommonBandwidthPackageIpRequest &request)const;
            void addCommonBandwidthPackageIpAsync(const Model::AddCommonBandwidthPackageIpRequest& request, const AddCommonBandwidthPackageIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddCommonBandwidthPackageIpOutcomeCallable addCommonBandwidthPackageIpCallable(const Model::AddCommonBandwidthPackageIpRequest& request) const;
            DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
            void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
            DescribePhysicalConnectionsOutcome describePhysicalConnections(const Model::DescribePhysicalConnectionsRequest &request)const;
            void describePhysicalConnectionsAsync(const Model::DescribePhysicalConnectionsRequest& request, const DescribePhysicalConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribePhysicalConnectionsOutcomeCallable describePhysicalConnectionsCallable(const Model::DescribePhysicalConnectionsRequest& request) const;
            DescribeVpnGatewaysOutcome describeVpnGateways(const Model::DescribeVpnGatewaysRequest &request)const;
            void describeVpnGatewaysAsync(const Model::DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVpnGatewaysOutcomeCallable describeVpnGatewaysCallable(const Model::DescribeVpnGatewaysRequest& request) const;
            DescribeVirtualBorderRoutersOutcome describeVirtualBorderRouters(const Model::DescribeVirtualBorderRoutersRequest &request)const;
            void describeVirtualBorderRoutersAsync(const Model::DescribeVirtualBorderRoutersRequest& request, const DescribeVirtualBorderRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVirtualBorderRoutersOutcomeCallable describeVirtualBorderRoutersCallable(const Model::DescribeVirtualBorderRoutersRequest& request) const;
            CreateGlobalAccelerationInstanceOutcome createGlobalAccelerationInstance(const Model::CreateGlobalAccelerationInstanceRequest &request)const;
            void createGlobalAccelerationInstanceAsync(const Model::CreateGlobalAccelerationInstanceRequest& request, const CreateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateGlobalAccelerationInstanceOutcomeCallable createGlobalAccelerationInstanceCallable(const Model::CreateGlobalAccelerationInstanceRequest& request) const;
            CancelPhysicalConnectionOutcome cancelPhysicalConnection(const Model::CancelPhysicalConnectionRequest &request)const;
            void cancelPhysicalConnectionAsync(const Model::CancelPhysicalConnectionRequest& request, const CancelPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CancelPhysicalConnectionOutcomeCallable cancelPhysicalConnectionCallable(const Model::CancelPhysicalConnectionRequest& request) const;
            CreateBgpGroupOutcome createBgpGroup(const Model::CreateBgpGroupRequest &request)const;
            void createBgpGroupAsync(const Model::CreateBgpGroupRequest& request, const CreateBgpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateBgpGroupOutcomeCallable createBgpGroupCallable(const Model::CreateBgpGroupRequest& request) const;
            DescribeVRoutersOutcome describeVRouters(const Model::DescribeVRoutersRequest &request)const;
            void describeVRoutersAsync(const Model::DescribeVRoutersRequest& request, const DescribeVRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVRoutersOutcomeCallable describeVRoutersCallable(const Model::DescribeVRoutersRequest& request) const;
            DescribeRouterInterfacesForGlobalOutcome describeRouterInterfacesForGlobal(const Model::DescribeRouterInterfacesForGlobalRequest &request)const;
            void describeRouterInterfacesForGlobalAsync(const Model::DescribeRouterInterfacesForGlobalRequest& request, const DescribeRouterInterfacesForGlobalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRouterInterfacesForGlobalOutcomeCallable describeRouterInterfacesForGlobalCallable(const Model::DescribeRouterInterfacesForGlobalRequest& request) const;
            ModifyNqaOutcome modifyNqa(const Model::ModifyNqaRequest &request)const;
            void modifyNqaAsync(const Model::ModifyNqaRequest& request, const ModifyNqaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyNqaOutcomeCallable modifyNqaCallable(const Model::ModifyNqaRequest& request) const;
            AllocateEipAddressOutcome allocateEipAddress(const Model::AllocateEipAddressRequest &request)const;
            void allocateEipAddressAsync(const Model::AllocateEipAddressRequest& request, const AllocateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AllocateEipAddressOutcomeCallable allocateEipAddressCallable(const Model::AllocateEipAddressRequest& request) const;
            DescribeSslVpnClientCertOutcome describeSslVpnClientCert(const Model::DescribeSslVpnClientCertRequest &request)const;
            void describeSslVpnClientCertAsync(const Model::DescribeSslVpnClientCertRequest& request, const DescribeSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSslVpnClientCertOutcomeCallable describeSslVpnClientCertCallable(const Model::DescribeSslVpnClientCertRequest& request) const;
            DescribeCommonBandwidthPackagesOutcome describeCommonBandwidthPackages(const Model::DescribeCommonBandwidthPackagesRequest &request)const;
            void describeCommonBandwidthPackagesAsync(const Model::DescribeCommonBandwidthPackagesRequest& request, const DescribeCommonBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCommonBandwidthPackagesOutcomeCallable describeCommonBandwidthPackagesCallable(const Model::DescribeCommonBandwidthPackagesRequest& request) const;
            UnassociateHaVipOutcome unassociateHaVip(const Model::UnassociateHaVipRequest &request)const;
            void unassociateHaVipAsync(const Model::UnassociateHaVipRequest& request, const UnassociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UnassociateHaVipOutcomeCallable unassociateHaVipCallable(const Model::UnassociateHaVipRequest& request) const;
            ModifyHaVipAttributeOutcome modifyHaVipAttribute(const Model::ModifyHaVipAttributeRequest &request)const;
            void modifyHaVipAttributeAsync(const Model::ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyHaVipAttributeOutcomeCallable modifyHaVipAttributeCallable(const Model::ModifyHaVipAttributeRequest& request) const;
            AssociateGlobalAccelerationInstanceOutcome associateGlobalAccelerationInstance(const Model::AssociateGlobalAccelerationInstanceRequest &request)const;
            void associateGlobalAccelerationInstanceAsync(const Model::AssociateGlobalAccelerationInstanceRequest& request, const AssociateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AssociateGlobalAccelerationInstanceOutcomeCallable associateGlobalAccelerationInstanceCallable(const Model::AssociateGlobalAccelerationInstanceRequest& request) const;
            DescribeSslVpnServersOutcome describeSslVpnServers(const Model::DescribeSslVpnServersRequest &request)const;
            void describeSslVpnServersAsync(const Model::DescribeSslVpnServersRequest& request, const DescribeSslVpnServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSslVpnServersOutcomeCallable describeSslVpnServersCallable(const Model::DescribeSslVpnServersRequest& request) const;
            ModifyVRouterAttributeOutcome modifyVRouterAttribute(const Model::ModifyVRouterAttributeRequest &request)const;
            void modifyVRouterAttributeAsync(const Model::ModifyVRouterAttributeRequest& request, const ModifyVRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyVRouterAttributeOutcomeCallable modifyVRouterAttributeCallable(const Model::ModifyVRouterAttributeRequest& request) const;
            DescribeSnatTableEntriesOutcome describeSnatTableEntries(const Model::DescribeSnatTableEntriesRequest &request)const;
            void describeSnatTableEntriesAsync(const Model::DescribeSnatTableEntriesRequest& request, const DescribeSnatTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSnatTableEntriesOutcomeCallable describeSnatTableEntriesCallable(const Model::DescribeSnatTableEntriesRequest& request) const;
	
		private:
			virtual EndpointOutcome endpoint()const override;
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VPC_VPCCLIENT_H_
