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
#include "model/ActivateRouterInterfaceRequest.h"
#include "model/ActivateRouterInterfaceResult.h"
#include "model/ActiveFlowLogRequest.h"
#include "model/ActiveFlowLogResult.h"
#include "model/AddBgpNetworkRequest.h"
#include "model/AddBgpNetworkResult.h"
#include "model/AddCommonBandwidthPackageIpRequest.h"
#include "model/AddCommonBandwidthPackageIpResult.h"
#include "model/AddCommonBandwidthPackageIpsRequest.h"
#include "model/AddCommonBandwidthPackageIpsResult.h"
#include "model/AddGlobalAccelerationInstanceIpRequest.h"
#include "model/AddGlobalAccelerationInstanceIpResult.h"
#include "model/AddIPv6TranslatorAclListEntryRequest.h"
#include "model/AddIPv6TranslatorAclListEntryResult.h"
#include "model/AddPublicIpAddressPoolCidrBlockRequest.h"
#include "model/AddPublicIpAddressPoolCidrBlockResult.h"
#include "model/AddSourcesToTrafficMirrorSessionRequest.h"
#include "model/AddSourcesToTrafficMirrorSessionResult.h"
#include "model/AllocateEipAddressRequest.h"
#include "model/AllocateEipAddressResult.h"
#include "model/AllocateEipAddressProRequest.h"
#include "model/AllocateEipAddressProResult.h"
#include "model/AllocateEipSegmentAddressRequest.h"
#include "model/AllocateEipSegmentAddressResult.h"
#include "model/AllocateIpv6AddressRequest.h"
#include "model/AllocateIpv6AddressResult.h"
#include "model/AllocateIpv6InternetBandwidthRequest.h"
#include "model/AllocateIpv6InternetBandwidthResult.h"
#include "model/AllocateVpcIpv6CidrRequest.h"
#include "model/AllocateVpcIpv6CidrResult.h"
#include "model/ApplyPhysicalConnectionLOARequest.h"
#include "model/ApplyPhysicalConnectionLOAResult.h"
#include "model/AssociateEipAddressRequest.h"
#include "model/AssociateEipAddressResult.h"
#include "model/AssociateEipAddressBatchRequest.h"
#include "model/AssociateEipAddressBatchResult.h"
#include "model/AssociateHaVipRequest.h"
#include "model/AssociateHaVipResult.h"
#include "model/AssociateNetworkAclRequest.h"
#include "model/AssociateNetworkAclResult.h"
#include "model/AssociatePhysicalConnectionToVirtualBorderRouterRequest.h"
#include "model/AssociatePhysicalConnectionToVirtualBorderRouterResult.h"
#include "model/AssociateRouteTableRequest.h"
#include "model/AssociateRouteTableResult.h"
#include "model/AssociateRouteTableWithGatewayRequest.h"
#include "model/AssociateRouteTableWithGatewayResult.h"
#include "model/AssociateRouteTablesWithVpcGatewayEndpointRequest.h"
#include "model/AssociateRouteTablesWithVpcGatewayEndpointResult.h"
#include "model/AssociateVpcCidrBlockRequest.h"
#include "model/AssociateVpcCidrBlockResult.h"
#include "model/AssociateVpnGatewayWithCertificateRequest.h"
#include "model/AssociateVpnGatewayWithCertificateResult.h"
#include "model/AttachDhcpOptionsSetToVpcRequest.h"
#include "model/AttachDhcpOptionsSetToVpcResult.h"
#include "model/AttachVbrToVpconnRequest.h"
#include "model/AttachVbrToVpconnResult.h"
#include "model/CancelCommonBandwidthPackageIpBandwidthRequest.h"
#include "model/CancelCommonBandwidthPackageIpBandwidthResult.h"
#include "model/CancelPhysicalConnectionRequest.h"
#include "model/CancelPhysicalConnectionResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CheckCanAllocateVpcPrivateIpAddressRequest.h"
#include "model/CheckCanAllocateVpcPrivateIpAddressResult.h"
#include "model/CheckVpnBgpEnabledRequest.h"
#include "model/CheckVpnBgpEnabledResult.h"
#include "model/CompletePhysicalConnectionLOARequest.h"
#include "model/CompletePhysicalConnectionLOAResult.h"
#include "model/ConfirmPhysicalConnectionRequest.h"
#include "model/ConfirmPhysicalConnectionResult.h"
#include "model/ConnectRouterInterfaceRequest.h"
#include "model/ConnectRouterInterfaceResult.h"
#include "model/ConvertBandwidthPackageRequest.h"
#include "model/ConvertBandwidthPackageResult.h"
#include "model/CopyNetworkAclEntriesRequest.h"
#include "model/CopyNetworkAclEntriesResult.h"
#include "model/CreateBgpGroupRequest.h"
#include "model/CreateBgpGroupResult.h"
#include "model/CreateBgpPeerRequest.h"
#include "model/CreateBgpPeerResult.h"
#include "model/CreateCommonBandwidthPackageRequest.h"
#include "model/CreateCommonBandwidthPackageResult.h"
#include "model/CreateCustomerGatewayRequest.h"
#include "model/CreateCustomerGatewayResult.h"
#include "model/CreateDefaultVSwitchRequest.h"
#include "model/CreateDefaultVSwitchResult.h"
#include "model/CreateDefaultVpcRequest.h"
#include "model/CreateDefaultVpcResult.h"
#include "model/CreateDhcpOptionsSetRequest.h"
#include "model/CreateDhcpOptionsSetResult.h"
#include "model/CreateExpressCloudConnectionRequest.h"
#include "model/CreateExpressCloudConnectionResult.h"
#include "model/CreateExpressConnectTrafficQosRequest.h"
#include "model/CreateExpressConnectTrafficQosResult.h"
#include "model/CreateExpressConnectTrafficQosQueueRequest.h"
#include "model/CreateExpressConnectTrafficQosQueueResult.h"
#include "model/CreateExpressConnectTrafficQosRuleRequest.h"
#include "model/CreateExpressConnectTrafficQosRuleResult.h"
#include "model/CreateFailoverTestJobRequest.h"
#include "model/CreateFailoverTestJobResult.h"
#include "model/CreateFlowLogRequest.h"
#include "model/CreateFlowLogResult.h"
#include "model/CreateForwardEntryRequest.h"
#include "model/CreateForwardEntryResult.h"
#include "model/CreateFullNatEntryRequest.h"
#include "model/CreateFullNatEntryResult.h"
#include "model/CreateGlobalAccelerationInstanceRequest.h"
#include "model/CreateGlobalAccelerationInstanceResult.h"
#include "model/CreateHaVipRequest.h"
#include "model/CreateHaVipResult.h"
#include "model/CreateHighReliablePhysicalConnectionRequest.h"
#include "model/CreateHighReliablePhysicalConnectionResult.h"
#include "model/CreateIPv6TranslatorRequest.h"
#include "model/CreateIPv6TranslatorResult.h"
#include "model/CreateIPv6TranslatorAclListRequest.h"
#include "model/CreateIPv6TranslatorAclListResult.h"
#include "model/CreateIPv6TranslatorEntryRequest.h"
#include "model/CreateIPv6TranslatorEntryResult.h"
#include "model/CreateIpsecServerRequest.h"
#include "model/CreateIpsecServerResult.h"
#include "model/CreateIpv4GatewayRequest.h"
#include "model/CreateIpv4GatewayResult.h"
#include "model/CreateIpv6EgressOnlyRuleRequest.h"
#include "model/CreateIpv6EgressOnlyRuleResult.h"
#include "model/CreateIpv6GatewayRequest.h"
#include "model/CreateIpv6GatewayResult.h"
#include "model/CreateNatGatewayRequest.h"
#include "model/CreateNatGatewayResult.h"
#include "model/CreateNatIpRequest.h"
#include "model/CreateNatIpResult.h"
#include "model/CreateNatIpCidrRequest.h"
#include "model/CreateNatIpCidrResult.h"
#include "model/CreateNetworkAclRequest.h"
#include "model/CreateNetworkAclResult.h"
#include "model/CreatePhysicalConnectionRequest.h"
#include "model/CreatePhysicalConnectionResult.h"
#include "model/CreatePhysicalConnectionOccupancyOrderRequest.h"
#include "model/CreatePhysicalConnectionOccupancyOrderResult.h"
#include "model/CreatePhysicalConnectionSetupOrderRequest.h"
#include "model/CreatePhysicalConnectionSetupOrderResult.h"
#include "model/CreatePublicIpAddressPoolRequest.h"
#include "model/CreatePublicIpAddressPoolResult.h"
#include "model/CreateRouteEntriesRequest.h"
#include "model/CreateRouteEntriesResult.h"
#include "model/CreateRouteEntryRequest.h"
#include "model/CreateRouteEntryResult.h"
#include "model/CreateRouteTableRequest.h"
#include "model/CreateRouteTableResult.h"
#include "model/CreateRouterInterfaceRequest.h"
#include "model/CreateRouterInterfaceResult.h"
#include "model/CreateSnatEntryRequest.h"
#include "model/CreateSnatEntryResult.h"
#include "model/CreateSslVpnClientCertRequest.h"
#include "model/CreateSslVpnClientCertResult.h"
#include "model/CreateSslVpnServerRequest.h"
#include "model/CreateSslVpnServerResult.h"
#include "model/CreateTrafficMirrorFilterRequest.h"
#include "model/CreateTrafficMirrorFilterResult.h"
#include "model/CreateTrafficMirrorFilterRulesRequest.h"
#include "model/CreateTrafficMirrorFilterRulesResult.h"
#include "model/CreateTrafficMirrorSessionRequest.h"
#include "model/CreateTrafficMirrorSessionResult.h"
#include "model/CreateVSwitchRequest.h"
#include "model/CreateVSwitchResult.h"
#include "model/CreateVSwitchCidrReservationRequest.h"
#include "model/CreateVSwitchCidrReservationResult.h"
#include "model/CreateVbrHaRequest.h"
#include "model/CreateVbrHaResult.h"
#include "model/CreateVcoRouteEntryRequest.h"
#include "model/CreateVcoRouteEntryResult.h"
#include "model/CreateVirtualBorderRouterRequest.h"
#include "model/CreateVirtualBorderRouterResult.h"
#include "model/CreateVirtualPhysicalConnectionRequest.h"
#include "model/CreateVirtualPhysicalConnectionResult.h"
#include "model/CreateVpcRequest.h"
#include "model/CreateVpcResult.h"
#include "model/CreateVpcGatewayEndpointRequest.h"
#include "model/CreateVpcGatewayEndpointResult.h"
#include "model/CreateVpcPrefixListRequest.h"
#include "model/CreateVpcPrefixListResult.h"
#include "model/CreateVpconnFromVbrRequest.h"
#include "model/CreateVpconnFromVbrResult.h"
#include "model/CreateVpnAttachmentRequest.h"
#include "model/CreateVpnAttachmentResult.h"
#include "model/CreateVpnConnectionRequest.h"
#include "model/CreateVpnConnectionResult.h"
#include "model/CreateVpnGatewayRequest.h"
#include "model/CreateVpnGatewayResult.h"
#include "model/CreateVpnPbrRouteEntryRequest.h"
#include "model/CreateVpnPbrRouteEntryResult.h"
#include "model/CreateVpnRouteEntryRequest.h"
#include "model/CreateVpnRouteEntryResult.h"
#include "model/DeactivateRouterInterfaceRequest.h"
#include "model/DeactivateRouterInterfaceResult.h"
#include "model/DeactiveFlowLogRequest.h"
#include "model/DeactiveFlowLogResult.h"
#include "model/DeleteBgpGroupRequest.h"
#include "model/DeleteBgpGroupResult.h"
#include "model/DeleteBgpNetworkRequest.h"
#include "model/DeleteBgpNetworkResult.h"
#include "model/DeleteBgpPeerRequest.h"
#include "model/DeleteBgpPeerResult.h"
#include "model/DeleteCommonBandwidthPackageRequest.h"
#include "model/DeleteCommonBandwidthPackageResult.h"
#include "model/DeleteCustomerGatewayRequest.h"
#include "model/DeleteCustomerGatewayResult.h"
#include "model/DeleteDhcpOptionsSetRequest.h"
#include "model/DeleteDhcpOptionsSetResult.h"
#include "model/DeleteExpressConnectTrafficQosRequest.h"
#include "model/DeleteExpressConnectTrafficQosResult.h"
#include "model/DeleteExpressConnectTrafficQosQueueRequest.h"
#include "model/DeleteExpressConnectTrafficQosQueueResult.h"
#include "model/DeleteExpressConnectTrafficQosRuleRequest.h"
#include "model/DeleteExpressConnectTrafficQosRuleResult.h"
#include "model/DeleteFailoverTestJobRequest.h"
#include "model/DeleteFailoverTestJobResult.h"
#include "model/DeleteFlowLogRequest.h"
#include "model/DeleteFlowLogResult.h"
#include "model/DeleteForwardEntryRequest.h"
#include "model/DeleteForwardEntryResult.h"
#include "model/DeleteFullNatEntryRequest.h"
#include "model/DeleteFullNatEntryResult.h"
#include "model/DeleteGlobalAccelerationInstanceRequest.h"
#include "model/DeleteGlobalAccelerationInstanceResult.h"
#include "model/DeleteHaVipRequest.h"
#include "model/DeleteHaVipResult.h"
#include "model/DeleteIPv6TranslatorRequest.h"
#include "model/DeleteIPv6TranslatorResult.h"
#include "model/DeleteIPv6TranslatorAclListRequest.h"
#include "model/DeleteIPv6TranslatorAclListResult.h"
#include "model/DeleteIPv6TranslatorEntryRequest.h"
#include "model/DeleteIPv6TranslatorEntryResult.h"
#include "model/DeleteIpsecServerRequest.h"
#include "model/DeleteIpsecServerResult.h"
#include "model/DeleteIpv4GatewayRequest.h"
#include "model/DeleteIpv4GatewayResult.h"
#include "model/DeleteIpv6EgressOnlyRuleRequest.h"
#include "model/DeleteIpv6EgressOnlyRuleResult.h"
#include "model/DeleteIpv6GatewayRequest.h"
#include "model/DeleteIpv6GatewayResult.h"
#include "model/DeleteIpv6InternetBandwidthRequest.h"
#include "model/DeleteIpv6InternetBandwidthResult.h"
#include "model/DeleteNatGatewayRequest.h"
#include "model/DeleteNatGatewayResult.h"
#include "model/DeleteNatIpRequest.h"
#include "model/DeleteNatIpResult.h"
#include "model/DeleteNatIpCidrRequest.h"
#include "model/DeleteNatIpCidrResult.h"
#include "model/DeleteNetworkAclRequest.h"
#include "model/DeleteNetworkAclResult.h"
#include "model/DeletePhysicalConnectionRequest.h"
#include "model/DeletePhysicalConnectionResult.h"
#include "model/DeletePublicIpAddressPoolRequest.h"
#include "model/DeletePublicIpAddressPoolResult.h"
#include "model/DeletePublicIpAddressPoolCidrBlockRequest.h"
#include "model/DeletePublicIpAddressPoolCidrBlockResult.h"
#include "model/DeleteRouteEntriesRequest.h"
#include "model/DeleteRouteEntriesResult.h"
#include "model/DeleteRouteEntryRequest.h"
#include "model/DeleteRouteEntryResult.h"
#include "model/DeleteRouteTableRequest.h"
#include "model/DeleteRouteTableResult.h"
#include "model/DeleteRouterInterfaceRequest.h"
#include "model/DeleteRouterInterfaceResult.h"
#include "model/DeleteSnatEntryRequest.h"
#include "model/DeleteSnatEntryResult.h"
#include "model/DeleteSslVpnClientCertRequest.h"
#include "model/DeleteSslVpnClientCertResult.h"
#include "model/DeleteSslVpnServerRequest.h"
#include "model/DeleteSslVpnServerResult.h"
#include "model/DeleteTrafficMirrorFilterRequest.h"
#include "model/DeleteTrafficMirrorFilterResult.h"
#include "model/DeleteTrafficMirrorFilterRulesRequest.h"
#include "model/DeleteTrafficMirrorFilterRulesResult.h"
#include "model/DeleteTrafficMirrorSessionRequest.h"
#include "model/DeleteTrafficMirrorSessionResult.h"
#include "model/DeleteVSwitchRequest.h"
#include "model/DeleteVSwitchResult.h"
#include "model/DeleteVSwitchCidrReservationRequest.h"
#include "model/DeleteVSwitchCidrReservationResult.h"
#include "model/DeleteVbrHaRequest.h"
#include "model/DeleteVbrHaResult.h"
#include "model/DeleteVcoRouteEntryRequest.h"
#include "model/DeleteVcoRouteEntryResult.h"
#include "model/DeleteVirtualBorderRouterRequest.h"
#include "model/DeleteVirtualBorderRouterResult.h"
#include "model/DeleteVpcRequest.h"
#include "model/DeleteVpcResult.h"
#include "model/DeleteVpcGatewayEndpointRequest.h"
#include "model/DeleteVpcGatewayEndpointResult.h"
#include "model/DeleteVpcPrefixListRequest.h"
#include "model/DeleteVpcPrefixListResult.h"
#include "model/DeleteVpnAttachmentRequest.h"
#include "model/DeleteVpnAttachmentResult.h"
#include "model/DeleteVpnConnectionRequest.h"
#include "model/DeleteVpnConnectionResult.h"
#include "model/DeleteVpnGatewayRequest.h"
#include "model/DeleteVpnGatewayResult.h"
#include "model/DeleteVpnPbrRouteEntryRequest.h"
#include "model/DeleteVpnPbrRouteEntryResult.h"
#include "model/DeleteVpnRouteEntryRequest.h"
#include "model/DeleteVpnRouteEntryResult.h"
#include "model/DeletionProtectionRequest.h"
#include "model/DeletionProtectionResult.h"
#include "model/Describe95TrafficRequest.h"
#include "model/Describe95TrafficResult.h"
#include "model/DescribeAccessPointsRequest.h"
#include "model/DescribeAccessPointsResult.h"
#include "model/DescribeBgpGroupsRequest.h"
#include "model/DescribeBgpGroupsResult.h"
#include "model/DescribeBgpNetworksRequest.h"
#include "model/DescribeBgpNetworksResult.h"
#include "model/DescribeBgpPeersRequest.h"
#include "model/DescribeBgpPeersResult.h"
#include "model/DescribeCommonBandwidthPackagesRequest.h"
#include "model/DescribeCommonBandwidthPackagesResult.h"
#include "model/DescribeCustomerGatewayRequest.h"
#include "model/DescribeCustomerGatewayResult.h"
#include "model/DescribeCustomerGatewaysRequest.h"
#include "model/DescribeCustomerGatewaysResult.h"
#include "model/DescribeEcGrantRelationRequest.h"
#include "model/DescribeEcGrantRelationResult.h"
#include "model/DescribeEipAddressesRequest.h"
#include "model/DescribeEipAddressesResult.h"
#include "model/DescribeEipGatewayInfoRequest.h"
#include "model/DescribeEipGatewayInfoResult.h"
#include "model/DescribeEipMonitorDataRequest.h"
#include "model/DescribeEipMonitorDataResult.h"
#include "model/DescribeEipSegmentRequest.h"
#include "model/DescribeEipSegmentResult.h"
#include "model/DescribeExpressConnectTrafficQosRequest.h"
#include "model/DescribeExpressConnectTrafficQosResult.h"
#include "model/DescribeExpressConnectTrafficQosQueueRequest.h"
#include "model/DescribeExpressConnectTrafficQosQueueResult.h"
#include "model/DescribeExpressConnectTrafficQosRuleRequest.h"
#include "model/DescribeExpressConnectTrafficQosRuleResult.h"
#include "model/DescribeFailoverTestJobRequest.h"
#include "model/DescribeFailoverTestJobResult.h"
#include "model/DescribeFailoverTestJobsRequest.h"
#include "model/DescribeFailoverTestJobsResult.h"
#include "model/DescribeFlowLogsRequest.h"
#include "model/DescribeFlowLogsResult.h"
#include "model/DescribeForwardTableEntriesRequest.h"
#include "model/DescribeForwardTableEntriesResult.h"
#include "model/DescribeGlobalAccelerationInstancesRequest.h"
#include "model/DescribeGlobalAccelerationInstancesResult.h"
#include "model/DescribeGrantRulesToCenRequest.h"
#include "model/DescribeGrantRulesToCenResult.h"
#include "model/DescribeHaVipsRequest.h"
#include "model/DescribeHaVipsResult.h"
#include "model/DescribeHighDefinitionMonitorLogAttributeRequest.h"
#include "model/DescribeHighDefinitionMonitorLogAttributeResult.h"
#include "model/DescribeIPv6TranslatorAclListAttributesRequest.h"
#include "model/DescribeIPv6TranslatorAclListAttributesResult.h"
#include "model/DescribeIPv6TranslatorAclListsRequest.h"
#include "model/DescribeIPv6TranslatorAclListsResult.h"
#include "model/DescribeIPv6TranslatorEntriesRequest.h"
#include "model/DescribeIPv6TranslatorEntriesResult.h"
#include "model/DescribeIPv6TranslatorsRequest.h"
#include "model/DescribeIPv6TranslatorsResult.h"
#include "model/DescribeIpv6AddressesRequest.h"
#include "model/DescribeIpv6AddressesResult.h"
#include "model/DescribeIpv6EgressOnlyRulesRequest.h"
#include "model/DescribeIpv6EgressOnlyRulesResult.h"
#include "model/DescribeIpv6GatewayAttributeRequest.h"
#include "model/DescribeIpv6GatewayAttributeResult.h"
#include "model/DescribeIpv6GatewaysRequest.h"
#include "model/DescribeIpv6GatewaysResult.h"
#include "model/DescribeNatGatewayAssociateNetworkInterfacesRequest.h"
#include "model/DescribeNatGatewayAssociateNetworkInterfacesResult.h"
#include "model/DescribeNatGatewaysRequest.h"
#include "model/DescribeNatGatewaysResult.h"
#include "model/DescribeNetworkAclAttributesRequest.h"
#include "model/DescribeNetworkAclAttributesResult.h"
#include "model/DescribeNetworkAclsRequest.h"
#include "model/DescribeNetworkAclsResult.h"
#include "model/DescribePhysicalConnectionLOARequest.h"
#include "model/DescribePhysicalConnectionLOAResult.h"
#include "model/DescribePhysicalConnectionsRequest.h"
#include "model/DescribePhysicalConnectionsResult.h"
#include "model/DescribePublicIpAddressRequest.h"
#include "model/DescribePublicIpAddressResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRouteEntryListRequest.h"
#include "model/DescribeRouteEntryListResult.h"
#include "model/DescribeRouteTableListRequest.h"
#include "model/DescribeRouteTableListResult.h"
#include "model/DescribeRouteTablesRequest.h"
#include "model/DescribeRouteTablesResult.h"
#include "model/DescribeRouterInterfaceAttributeRequest.h"
#include "model/DescribeRouterInterfaceAttributeResult.h"
#include "model/DescribeRouterInterfacesRequest.h"
#include "model/DescribeRouterInterfacesResult.h"
#include "model/DescribeServerRelatedGlobalAccelerationInstancesRequest.h"
#include "model/DescribeServerRelatedGlobalAccelerationInstancesResult.h"
#include "model/DescribeSnatTableEntriesRequest.h"
#include "model/DescribeSnatTableEntriesResult.h"
#include "model/DescribeSslVpnClientCertRequest.h"
#include "model/DescribeSslVpnClientCertResult.h"
#include "model/DescribeSslVpnClientCertsRequest.h"
#include "model/DescribeSslVpnClientCertsResult.h"
#include "model/DescribeSslVpnClientsRequest.h"
#include "model/DescribeSslVpnClientsResult.h"
#include "model/DescribeSslVpnServersRequest.h"
#include "model/DescribeSslVpnServersResult.h"
#include "model/DescribeTagKeysRequest.h"
#include "model/DescribeTagKeysResult.h"
#include "model/DescribeTagKeysForExpressConnectRequest.h"
#include "model/DescribeTagKeysForExpressConnectResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DescribeVRoutersRequest.h"
#include "model/DescribeVRoutersResult.h"
#include "model/DescribeVSwitchAttributesRequest.h"
#include "model/DescribeVSwitchAttributesResult.h"
#include "model/DescribeVSwitchesRequest.h"
#include "model/DescribeVSwitchesResult.h"
#include "model/DescribeVbrHaRequest.h"
#include "model/DescribeVbrHaResult.h"
#include "model/DescribeVcoRouteEntriesRequest.h"
#include "model/DescribeVcoRouteEntriesResult.h"
#include "model/DescribeVirtualBorderRoutersRequest.h"
#include "model/DescribeVirtualBorderRoutersResult.h"
#include "model/DescribeVirtualBorderRoutersForPhysicalConnectionRequest.h"
#include "model/DescribeVirtualBorderRoutersForPhysicalConnectionResult.h"
#include "model/DescribeVpcAttributeRequest.h"
#include "model/DescribeVpcAttributeResult.h"
#include "model/DescribeVpcsRequest.h"
#include "model/DescribeVpcsResult.h"
#include "model/DescribeVpnAttachmentsRequest.h"
#include "model/DescribeVpnAttachmentsResult.h"
#include "model/DescribeVpnConnectionRequest.h"
#include "model/DescribeVpnConnectionResult.h"
#include "model/DescribeVpnConnectionLogsRequest.h"
#include "model/DescribeVpnConnectionLogsResult.h"
#include "model/DescribeVpnConnectionsRequest.h"
#include "model/DescribeVpnConnectionsResult.h"
#include "model/DescribeVpnCrossAccountAuthorizationsRequest.h"
#include "model/DescribeVpnCrossAccountAuthorizationsResult.h"
#include "model/DescribeVpnGatewayRequest.h"
#include "model/DescribeVpnGatewayResult.h"
#include "model/DescribeVpnGatewayAvailableZonesRequest.h"
#include "model/DescribeVpnGatewayAvailableZonesResult.h"
#include "model/DescribeVpnGatewaysRequest.h"
#include "model/DescribeVpnGatewaysResult.h"
#include "model/DescribeVpnPbrRouteEntriesRequest.h"
#include "model/DescribeVpnPbrRouteEntriesResult.h"
#include "model/DescribeVpnRouteEntriesRequest.h"
#include "model/DescribeVpnRouteEntriesResult.h"
#include "model/DescribeVpnSslServerLogsRequest.h"
#include "model/DescribeVpnSslServerLogsResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/DetachDhcpOptionsSetFromVpcRequest.h"
#include "model/DetachDhcpOptionsSetFromVpcResult.h"
#include "model/DiagnoseVpnConnectionsRequest.h"
#include "model/DiagnoseVpnConnectionsResult.h"
#include "model/DiagnoseVpnGatewayRequest.h"
#include "model/DiagnoseVpnGatewayResult.h"
#include "model/DisableNatGatewayEcsMetricRequest.h"
#include "model/DisableNatGatewayEcsMetricResult.h"
#include "model/DisableVpcClassicLinkRequest.h"
#include "model/DisableVpcClassicLinkResult.h"
#include "model/DissociateRouteTableFromGatewayRequest.h"
#include "model/DissociateRouteTableFromGatewayResult.h"
#include "model/DissociateRouteTablesFromVpcGatewayEndpointRequest.h"
#include "model/DissociateRouteTablesFromVpcGatewayEndpointResult.h"
#include "model/DissociateVpnGatewayWithCertificateRequest.h"
#include "model/DissociateVpnGatewayWithCertificateResult.h"
#include "model/DownloadVpnConnectionConfigRequest.h"
#include "model/DownloadVpnConnectionConfigResult.h"
#include "model/EnableNatGatewayEcsMetricRequest.h"
#include "model/EnableNatGatewayEcsMetricResult.h"
#include "model/EnablePhysicalConnectionRequest.h"
#include "model/EnablePhysicalConnectionResult.h"
#include "model/EnableVpcClassicLinkRequest.h"
#include "model/EnableVpcClassicLinkResult.h"
#include "model/EnableVpcIpv4GatewayRequest.h"
#include "model/EnableVpcIpv4GatewayResult.h"
#include "model/GetDhcpOptionsSetRequest.h"
#include "model/GetDhcpOptionsSetResult.h"
#include "model/GetFlowLogServiceStatusRequest.h"
#include "model/GetFlowLogServiceStatusResult.h"
#include "model/GetIpv4GatewayAttributeRequest.h"
#include "model/GetIpv4GatewayAttributeResult.h"
#include "model/GetNatGatewayAttributeRequest.h"
#include "model/GetNatGatewayAttributeResult.h"
#include "model/GetPhysicalConnectionServiceStatusRequest.h"
#include "model/GetPhysicalConnectionServiceStatusResult.h"
#include "model/GetPublicIpAddressPoolServiceStatusRequest.h"
#include "model/GetPublicIpAddressPoolServiceStatusResult.h"
#include "model/GetTrafficMirrorServiceStatusRequest.h"
#include "model/GetTrafficMirrorServiceStatusResult.h"
#include "model/GetVSwitchCidrReservationUsageRequest.h"
#include "model/GetVSwitchCidrReservationUsageResult.h"
#include "model/GetVpcGatewayEndpointAttributeRequest.h"
#include "model/GetVpcGatewayEndpointAttributeResult.h"
#include "model/GetVpcPrefixListAssociationsRequest.h"
#include "model/GetVpcPrefixListAssociationsResult.h"
#include "model/GetVpcPrefixListEntriesRequest.h"
#include "model/GetVpcPrefixListEntriesResult.h"
#include "model/GetVpcRouteEntrySummaryRequest.h"
#include "model/GetVpcRouteEntrySummaryResult.h"
#include "model/GetVpnGatewayDiagnoseResultRequest.h"
#include "model/GetVpnGatewayDiagnoseResultResult.h"
#include "model/GrantInstanceToCenRequest.h"
#include "model/GrantInstanceToCenResult.h"
#include "model/GrantInstanceToVbrRequest.h"
#include "model/GrantInstanceToVbrResult.h"
#include "model/ListBusinessAccessPointsRequest.h"
#include "model/ListBusinessAccessPointsResult.h"
#include "model/ListDhcpOptionsSetsRequest.h"
#include "model/ListDhcpOptionsSetsResult.h"
#include "model/ListEnhanhcedNatGatewayAvailableZonesRequest.h"
#include "model/ListEnhanhcedNatGatewayAvailableZonesResult.h"
#include "model/ListFullNatEntriesRequest.h"
#include "model/ListFullNatEntriesResult.h"
#include "model/ListGatewayRouteTableEntriesRequest.h"
#include "model/ListGatewayRouteTableEntriesResult.h"
#include "model/ListGeographicSubRegionsRequest.h"
#include "model/ListGeographicSubRegionsResult.h"
#include "model/ListIpsecServerLogsRequest.h"
#include "model/ListIpsecServerLogsResult.h"
#include "model/ListIpsecServersRequest.h"
#include "model/ListIpsecServersResult.h"
#include "model/ListIpv4GatewaysRequest.h"
#include "model/ListIpv4GatewaysResult.h"
#include "model/ListNatIpCidrsRequest.h"
#include "model/ListNatIpCidrsResult.h"
#include "model/ListNatIpsRequest.h"
#include "model/ListNatIpsResult.h"
#include "model/ListPrefixListsRequest.h"
#include "model/ListPrefixListsResult.h"
#include "model/ListPublicIpAddressPoolCidrBlocksRequest.h"
#include "model/ListPublicIpAddressPoolCidrBlocksResult.h"
#include "model/ListPublicIpAddressPoolsRequest.h"
#include "model/ListPublicIpAddressPoolsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagResourcesForExpressConnectRequest.h"
#include "model/ListTagResourcesForExpressConnectResult.h"
#include "model/ListTrafficMirrorFiltersRequest.h"
#include "model/ListTrafficMirrorFiltersResult.h"
#include "model/ListTrafficMirrorSessionsRequest.h"
#include "model/ListTrafficMirrorSessionsResult.h"
#include "model/ListVSwitchCidrReservationsRequest.h"
#include "model/ListVSwitchCidrReservationsResult.h"
#include "model/ListVirtualPhysicalConnectionsRequest.h"
#include "model/ListVirtualPhysicalConnectionsResult.h"
#include "model/ListVpcEndpointServicesByEndUserRequest.h"
#include "model/ListVpcEndpointServicesByEndUserResult.h"
#include "model/ListVpcGatewayEndpointsRequest.h"
#include "model/ListVpcGatewayEndpointsResult.h"
#include "model/ListVpcPublishedRouteEntriesRequest.h"
#include "model/ListVpcPublishedRouteEntriesResult.h"
#include "model/ListVpnCertificateAssociationsRequest.h"
#include "model/ListVpnCertificateAssociationsResult.h"
#include "model/ModifyBgpGroupAttributeRequest.h"
#include "model/ModifyBgpGroupAttributeResult.h"
#include "model/ModifyBgpPeerAttributeRequest.h"
#include "model/ModifyBgpPeerAttributeResult.h"
#include "model/ModifyCommonBandwidthPackageAttributeRequest.h"
#include "model/ModifyCommonBandwidthPackageAttributeResult.h"
#include "model/ModifyCommonBandwidthPackageIpBandwidthRequest.h"
#include "model/ModifyCommonBandwidthPackageIpBandwidthResult.h"
#include "model/ModifyCommonBandwidthPackageSpecRequest.h"
#include "model/ModifyCommonBandwidthPackageSpecResult.h"
#include "model/ModifyCustomerGatewayAttributeRequest.h"
#include "model/ModifyCustomerGatewayAttributeResult.h"
#include "model/ModifyEipAddressAttributeRequest.h"
#include "model/ModifyEipAddressAttributeResult.h"
#include "model/ModifyEipForwardModeRequest.h"
#include "model/ModifyEipForwardModeResult.h"
#include "model/ModifyExpressCloudConnectionAttributeRequest.h"
#include "model/ModifyExpressCloudConnectionAttributeResult.h"
#include "model/ModifyExpressCloudConnectionBandwidthRequest.h"
#include "model/ModifyExpressCloudConnectionBandwidthResult.h"
#include "model/ModifyExpressConnectTrafficQosRequest.h"
#include "model/ModifyExpressConnectTrafficQosResult.h"
#include "model/ModifyExpressConnectTrafficQosQueueRequest.h"
#include "model/ModifyExpressConnectTrafficQosQueueResult.h"
#include "model/ModifyExpressConnectTrafficQosRuleRequest.h"
#include "model/ModifyExpressConnectTrafficQosRuleResult.h"
#include "model/ModifyFlowLogAttributeRequest.h"
#include "model/ModifyFlowLogAttributeResult.h"
#include "model/ModifyForwardEntryRequest.h"
#include "model/ModifyForwardEntryResult.h"
#include "model/ModifyFullNatEntryAttributeRequest.h"
#include "model/ModifyFullNatEntryAttributeResult.h"
#include "model/ModifyGlobalAccelerationInstanceAttributesRequest.h"
#include "model/ModifyGlobalAccelerationInstanceAttributesResult.h"
#include "model/ModifyGlobalAccelerationInstanceSpecRequest.h"
#include "model/ModifyGlobalAccelerationInstanceSpecResult.h"
#include "model/ModifyHaVipAttributeRequest.h"
#include "model/ModifyHaVipAttributeResult.h"
#include "model/ModifyIPv6TranslatorAclAttributeRequest.h"
#include "model/ModifyIPv6TranslatorAclAttributeResult.h"
#include "model/ModifyIPv6TranslatorAclListEntryRequest.h"
#include "model/ModifyIPv6TranslatorAclListEntryResult.h"
#include "model/ModifyIPv6TranslatorAttributeRequest.h"
#include "model/ModifyIPv6TranslatorAttributeResult.h"
#include "model/ModifyIPv6TranslatorBandwidthRequest.h"
#include "model/ModifyIPv6TranslatorBandwidthResult.h"
#include "model/ModifyIPv6TranslatorEntryRequest.h"
#include "model/ModifyIPv6TranslatorEntryResult.h"
#include "model/ModifyIpv6AddressAttributeRequest.h"
#include "model/ModifyIpv6AddressAttributeResult.h"
#include "model/ModifyIpv6GatewayAttributeRequest.h"
#include "model/ModifyIpv6GatewayAttributeResult.h"
#include "model/ModifyIpv6InternetBandwidthRequest.h"
#include "model/ModifyIpv6InternetBandwidthResult.h"
#include "model/ModifyNatGatewayAttributeRequest.h"
#include "model/ModifyNatGatewayAttributeResult.h"
#include "model/ModifyNatGatewaySpecRequest.h"
#include "model/ModifyNatGatewaySpecResult.h"
#include "model/ModifyNatIpAttributeRequest.h"
#include "model/ModifyNatIpAttributeResult.h"
#include "model/ModifyNatIpCidrAttributeRequest.h"
#include "model/ModifyNatIpCidrAttributeResult.h"
#include "model/ModifyNetworkAclAttributesRequest.h"
#include "model/ModifyNetworkAclAttributesResult.h"
#include "model/ModifyPhysicalConnectionAttributeRequest.h"
#include "model/ModifyPhysicalConnectionAttributeResult.h"
#include "model/ModifyRouteEntryRequest.h"
#include "model/ModifyRouteEntryResult.h"
#include "model/ModifyRouteTableAttributesRequest.h"
#include "model/ModifyRouteTableAttributesResult.h"
#include "model/ModifyRouterInterfaceAttributeRequest.h"
#include "model/ModifyRouterInterfaceAttributeResult.h"
#include "model/ModifyRouterInterfaceSpecRequest.h"
#include "model/ModifyRouterInterfaceSpecResult.h"
#include "model/ModifySnatEntryRequest.h"
#include "model/ModifySnatEntryResult.h"
#include "model/ModifySslVpnClientCertRequest.h"
#include "model/ModifySslVpnClientCertResult.h"
#include "model/ModifySslVpnServerRequest.h"
#include "model/ModifySslVpnServerResult.h"
#include "model/ModifyTunnelAttributeRequest.h"
#include "model/ModifyTunnelAttributeResult.h"
#include "model/ModifyVRouterAttributeRequest.h"
#include "model/ModifyVRouterAttributeResult.h"
#include "model/ModifyVSwitchAttributeRequest.h"
#include "model/ModifyVSwitchAttributeResult.h"
#include "model/ModifyVSwitchCidrReservationAttributeRequest.h"
#include "model/ModifyVSwitchCidrReservationAttributeResult.h"
#include "model/ModifyVcoRouteEntryWeightRequest.h"
#include "model/ModifyVcoRouteEntryWeightResult.h"
#include "model/ModifyVirtualBorderRouterAttributeRequest.h"
#include "model/ModifyVirtualBorderRouterAttributeResult.h"
#include "model/ModifyVpcAttributeRequest.h"
#include "model/ModifyVpcAttributeResult.h"
#include "model/ModifyVpcPrefixListRequest.h"
#include "model/ModifyVpcPrefixListResult.h"
#include "model/ModifyVpnAttachmentAttributeRequest.h"
#include "model/ModifyVpnAttachmentAttributeResult.h"
#include "model/ModifyVpnConnectionAttributeRequest.h"
#include "model/ModifyVpnConnectionAttributeResult.h"
#include "model/ModifyVpnGatewayAttributeRequest.h"
#include "model/ModifyVpnGatewayAttributeResult.h"
#include "model/ModifyVpnPbrRouteEntryAttributeRequest.h"
#include "model/ModifyVpnPbrRouteEntryAttributeResult.h"
#include "model/ModifyVpnPbrRouteEntryPriorityRequest.h"
#include "model/ModifyVpnPbrRouteEntryPriorityResult.h"
#include "model/ModifyVpnPbrRouteEntryWeightRequest.h"
#include "model/ModifyVpnPbrRouteEntryWeightResult.h"
#include "model/ModifyVpnRouteEntryWeightRequest.h"
#include "model/ModifyVpnRouteEntryWeightResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/MoveVpnResourceGroupRequest.h"
#include "model/MoveVpnResourceGroupResult.h"
#include "model/OpenFlowLogServiceRequest.h"
#include "model/OpenFlowLogServiceResult.h"
#include "model/OpenPhysicalConnectionServiceRequest.h"
#include "model/OpenPhysicalConnectionServiceResult.h"
#include "model/OpenPublicIpAddressPoolServiceRequest.h"
#include "model/OpenPublicIpAddressPoolServiceResult.h"
#include "model/OpenTrafficMirrorServiceRequest.h"
#include "model/OpenTrafficMirrorServiceResult.h"
#include "model/PublishVpcRouteEntriesRequest.h"
#include "model/PublishVpcRouteEntriesResult.h"
#include "model/PublishVpnRouteEntryRequest.h"
#include "model/PublishVpnRouteEntryResult.h"
#include "model/RecoverPhysicalConnectionRequest.h"
#include "model/RecoverPhysicalConnectionResult.h"
#include "model/RecoverVirtualBorderRouterRequest.h"
#include "model/RecoverVirtualBorderRouterResult.h"
#include "model/ReleaseEipAddressRequest.h"
#include "model/ReleaseEipAddressResult.h"
#include "model/ReleaseEipSegmentAddressRequest.h"
#include "model/ReleaseEipSegmentAddressResult.h"
#include "model/ReleaseIpv6AddressRequest.h"
#include "model/ReleaseIpv6AddressResult.h"
#include "model/RemoveCommonBandwidthPackageIpRequest.h"
#include "model/RemoveCommonBandwidthPackageIpResult.h"
#include "model/RemoveGlobalAccelerationInstanceIpRequest.h"
#include "model/RemoveGlobalAccelerationInstanceIpResult.h"
#include "model/RemoveIPv6TranslatorAclListEntryRequest.h"
#include "model/RemoveIPv6TranslatorAclListEntryResult.h"
#include "model/RemoveSourcesFromTrafficMirrorSessionRequest.h"
#include "model/RemoveSourcesFromTrafficMirrorSessionResult.h"
#include "model/ReplaceVpcDhcpOptionsSetRequest.h"
#include "model/ReplaceVpcDhcpOptionsSetResult.h"
#include "model/RetryVpcPrefixListAssociationRequest.h"
#include "model/RetryVpcPrefixListAssociationResult.h"
#include "model/RevokeInstanceFromCenRequest.h"
#include "model/RevokeInstanceFromCenResult.h"
#include "model/RevokeInstanceFromVbrRequest.h"
#include "model/RevokeInstanceFromVbrResult.h"
#include "model/SecondApplyPhysicalConnectionLOARequest.h"
#include "model/SecondApplyPhysicalConnectionLOAResult.h"
#include "model/SetHighDefinitionMonitorLogStatusRequest.h"
#include "model/SetHighDefinitionMonitorLogStatusResult.h"
#include "model/StartFailoverTestJobRequest.h"
#include "model/StartFailoverTestJobResult.h"
#include "model/StopFailoverTestJobRequest.h"
#include "model/StopFailoverTestJobResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TagResourcesForExpressConnectRequest.h"
#include "model/TagResourcesForExpressConnectResult.h"
#include "model/TerminatePhysicalConnectionRequest.h"
#include "model/TerminatePhysicalConnectionResult.h"
#include "model/TerminateVirtualBorderRouterRequest.h"
#include "model/TerminateVirtualBorderRouterResult.h"
#include "model/TransformEipSegmentToPublicIpAddressPoolRequest.h"
#include "model/TransformEipSegmentToPublicIpAddressPoolResult.h"
#include "model/UnTagResourcesRequest.h"
#include "model/UnTagResourcesResult.h"
#include "model/UnassociateEipAddressRequest.h"
#include "model/UnassociateEipAddressResult.h"
#include "model/UnassociateGlobalAccelerationInstanceRequest.h"
#include "model/UnassociateGlobalAccelerationInstanceResult.h"
#include "model/UnassociateHaVipRequest.h"
#include "model/UnassociateHaVipResult.h"
#include "model/UnassociateNetworkAclRequest.h"
#include "model/UnassociateNetworkAclResult.h"
#include "model/UnassociatePhysicalConnectionFromVirtualBorderRouterRequest.h"
#include "model/UnassociatePhysicalConnectionFromVirtualBorderRouterResult.h"
#include "model/UnassociateRouteTableRequest.h"
#include "model/UnassociateRouteTableResult.h"
#include "model/UnassociateVpcCidrBlockRequest.h"
#include "model/UnassociateVpcCidrBlockResult.h"
#include "model/UntagResourcesForExpressConnectRequest.h"
#include "model/UntagResourcesForExpressConnectResult.h"
#include "model/UpdateDhcpOptionsSetAttributeRequest.h"
#include "model/UpdateDhcpOptionsSetAttributeResult.h"
#include "model/UpdateFailoverTestJobRequest.h"
#include "model/UpdateFailoverTestJobResult.h"
#include "model/UpdateGatewayRouteTableEntryAttributeRequest.h"
#include "model/UpdateGatewayRouteTableEntryAttributeResult.h"
#include "model/UpdateIpsecServerRequest.h"
#include "model/UpdateIpsecServerResult.h"
#include "model/UpdateIpv4GatewayAttributeRequest.h"
#include "model/UpdateIpv4GatewayAttributeResult.h"
#include "model/UpdateNatGatewayNatTypeRequest.h"
#include "model/UpdateNatGatewayNatTypeResult.h"
#include "model/UpdateNetworkAclEntriesRequest.h"
#include "model/UpdateNetworkAclEntriesResult.h"
#include "model/UpdatePublicIpAddressPoolAttributeRequest.h"
#include "model/UpdatePublicIpAddressPoolAttributeResult.h"
#include "model/UpdateTrafficMirrorFilterAttributeRequest.h"
#include "model/UpdateTrafficMirrorFilterAttributeResult.h"
#include "model/UpdateTrafficMirrorFilterRuleAttributeRequest.h"
#include "model/UpdateTrafficMirrorFilterRuleAttributeResult.h"
#include "model/UpdateTrafficMirrorSessionAttributeRequest.h"
#include "model/UpdateTrafficMirrorSessionAttributeResult.h"
#include "model/UpdateVirtualBorderBandwidthRequest.h"
#include "model/UpdateVirtualBorderBandwidthResult.h"
#include "model/UpdateVirtualPhysicalConnectionRequest.h"
#include "model/UpdateVirtualPhysicalConnectionResult.h"
#include "model/UpdateVpcGatewayEndpointAttributeRequest.h"
#include "model/UpdateVpcGatewayEndpointAttributeResult.h"
#include "model/VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest.h"
#include "model/VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResult.h"
#include "model/WithdrawVpcPublishedRouteEntriesRequest.h"
#include "model/WithdrawVpcPublishedRouteEntriesResult.h"


namespace AlibabaCloud
{
	namespace Vpc
	{
		class ALIBABACLOUD_VPC_EXPORT VpcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateRouterInterfaceResult> ActivateRouterInterfaceOutcome;
			typedef std::future<ActivateRouterInterfaceOutcome> ActivateRouterInterfaceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ActivateRouterInterfaceRequest&, const ActivateRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::ActiveFlowLogResult> ActiveFlowLogOutcome;
			typedef std::future<ActiveFlowLogOutcome> ActiveFlowLogOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ActiveFlowLogRequest&, const ActiveFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActiveFlowLogAsyncHandler;
			typedef Outcome<Error, Model::AddBgpNetworkResult> AddBgpNetworkOutcome;
			typedef std::future<AddBgpNetworkOutcome> AddBgpNetworkOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AddBgpNetworkRequest&, const AddBgpNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBgpNetworkAsyncHandler;
			typedef Outcome<Error, Model::AddCommonBandwidthPackageIpResult> AddCommonBandwidthPackageIpOutcome;
			typedef std::future<AddCommonBandwidthPackageIpOutcome> AddCommonBandwidthPackageIpOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AddCommonBandwidthPackageIpRequest&, const AddCommonBandwidthPackageIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCommonBandwidthPackageIpAsyncHandler;
			typedef Outcome<Error, Model::AddCommonBandwidthPackageIpsResult> AddCommonBandwidthPackageIpsOutcome;
			typedef std::future<AddCommonBandwidthPackageIpsOutcome> AddCommonBandwidthPackageIpsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AddCommonBandwidthPackageIpsRequest&, const AddCommonBandwidthPackageIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCommonBandwidthPackageIpsAsyncHandler;
			typedef Outcome<Error, Model::AddGlobalAccelerationInstanceIpResult> AddGlobalAccelerationInstanceIpOutcome;
			typedef std::future<AddGlobalAccelerationInstanceIpOutcome> AddGlobalAccelerationInstanceIpOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AddGlobalAccelerationInstanceIpRequest&, const AddGlobalAccelerationInstanceIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGlobalAccelerationInstanceIpAsyncHandler;
			typedef Outcome<Error, Model::AddIPv6TranslatorAclListEntryResult> AddIPv6TranslatorAclListEntryOutcome;
			typedef std::future<AddIPv6TranslatorAclListEntryOutcome> AddIPv6TranslatorAclListEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AddIPv6TranslatorAclListEntryRequest&, const AddIPv6TranslatorAclListEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddIPv6TranslatorAclListEntryAsyncHandler;
			typedef Outcome<Error, Model::AddPublicIpAddressPoolCidrBlockResult> AddPublicIpAddressPoolCidrBlockOutcome;
			typedef std::future<AddPublicIpAddressPoolCidrBlockOutcome> AddPublicIpAddressPoolCidrBlockOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AddPublicIpAddressPoolCidrBlockRequest&, const AddPublicIpAddressPoolCidrBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPublicIpAddressPoolCidrBlockAsyncHandler;
			typedef Outcome<Error, Model::AddSourcesToTrafficMirrorSessionResult> AddSourcesToTrafficMirrorSessionOutcome;
			typedef std::future<AddSourcesToTrafficMirrorSessionOutcome> AddSourcesToTrafficMirrorSessionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AddSourcesToTrafficMirrorSessionRequest&, const AddSourcesToTrafficMirrorSessionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSourcesToTrafficMirrorSessionAsyncHandler;
			typedef Outcome<Error, Model::AllocateEipAddressResult> AllocateEipAddressOutcome;
			typedef std::future<AllocateEipAddressOutcome> AllocateEipAddressOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AllocateEipAddressRequest&, const AllocateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::AllocateEipAddressProResult> AllocateEipAddressProOutcome;
			typedef std::future<AllocateEipAddressProOutcome> AllocateEipAddressProOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AllocateEipAddressProRequest&, const AllocateEipAddressProOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateEipAddressProAsyncHandler;
			typedef Outcome<Error, Model::AllocateEipSegmentAddressResult> AllocateEipSegmentAddressOutcome;
			typedef std::future<AllocateEipSegmentAddressOutcome> AllocateEipSegmentAddressOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AllocateEipSegmentAddressRequest&, const AllocateEipSegmentAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateEipSegmentAddressAsyncHandler;
			typedef Outcome<Error, Model::AllocateIpv6AddressResult> AllocateIpv6AddressOutcome;
			typedef std::future<AllocateIpv6AddressOutcome> AllocateIpv6AddressOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AllocateIpv6AddressRequest&, const AllocateIpv6AddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateIpv6AddressAsyncHandler;
			typedef Outcome<Error, Model::AllocateIpv6InternetBandwidthResult> AllocateIpv6InternetBandwidthOutcome;
			typedef std::future<AllocateIpv6InternetBandwidthOutcome> AllocateIpv6InternetBandwidthOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AllocateIpv6InternetBandwidthRequest&, const AllocateIpv6InternetBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateIpv6InternetBandwidthAsyncHandler;
			typedef Outcome<Error, Model::AllocateVpcIpv6CidrResult> AllocateVpcIpv6CidrOutcome;
			typedef std::future<AllocateVpcIpv6CidrOutcome> AllocateVpcIpv6CidrOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AllocateVpcIpv6CidrRequest&, const AllocateVpcIpv6CidrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateVpcIpv6CidrAsyncHandler;
			typedef Outcome<Error, Model::ApplyPhysicalConnectionLOAResult> ApplyPhysicalConnectionLOAOutcome;
			typedef std::future<ApplyPhysicalConnectionLOAOutcome> ApplyPhysicalConnectionLOAOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ApplyPhysicalConnectionLOARequest&, const ApplyPhysicalConnectionLOAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyPhysicalConnectionLOAAsyncHandler;
			typedef Outcome<Error, Model::AssociateEipAddressResult> AssociateEipAddressOutcome;
			typedef std::future<AssociateEipAddressOutcome> AssociateEipAddressOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AssociateEipAddressRequest&, const AssociateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::AssociateEipAddressBatchResult> AssociateEipAddressBatchOutcome;
			typedef std::future<AssociateEipAddressBatchOutcome> AssociateEipAddressBatchOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AssociateEipAddressBatchRequest&, const AssociateEipAddressBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateEipAddressBatchAsyncHandler;
			typedef Outcome<Error, Model::AssociateHaVipResult> AssociateHaVipOutcome;
			typedef std::future<AssociateHaVipOutcome> AssociateHaVipOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AssociateHaVipRequest&, const AssociateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateHaVipAsyncHandler;
			typedef Outcome<Error, Model::AssociateNetworkAclResult> AssociateNetworkAclOutcome;
			typedef std::future<AssociateNetworkAclOutcome> AssociateNetworkAclOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AssociateNetworkAclRequest&, const AssociateNetworkAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNetworkAclAsyncHandler;
			typedef Outcome<Error, Model::AssociatePhysicalConnectionToVirtualBorderRouterResult> AssociatePhysicalConnectionToVirtualBorderRouterOutcome;
			typedef std::future<AssociatePhysicalConnectionToVirtualBorderRouterOutcome> AssociatePhysicalConnectionToVirtualBorderRouterOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AssociatePhysicalConnectionToVirtualBorderRouterRequest&, const AssociatePhysicalConnectionToVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociatePhysicalConnectionToVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::AssociateRouteTableResult> AssociateRouteTableOutcome;
			typedef std::future<AssociateRouteTableOutcome> AssociateRouteTableOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AssociateRouteTableRequest&, const AssociateRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateRouteTableAsyncHandler;
			typedef Outcome<Error, Model::AssociateRouteTableWithGatewayResult> AssociateRouteTableWithGatewayOutcome;
			typedef std::future<AssociateRouteTableWithGatewayOutcome> AssociateRouteTableWithGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AssociateRouteTableWithGatewayRequest&, const AssociateRouteTableWithGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateRouteTableWithGatewayAsyncHandler;
			typedef Outcome<Error, Model::AssociateRouteTablesWithVpcGatewayEndpointResult> AssociateRouteTablesWithVpcGatewayEndpointOutcome;
			typedef std::future<AssociateRouteTablesWithVpcGatewayEndpointOutcome> AssociateRouteTablesWithVpcGatewayEndpointOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AssociateRouteTablesWithVpcGatewayEndpointRequest&, const AssociateRouteTablesWithVpcGatewayEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateRouteTablesWithVpcGatewayEndpointAsyncHandler;
			typedef Outcome<Error, Model::AssociateVpcCidrBlockResult> AssociateVpcCidrBlockOutcome;
			typedef std::future<AssociateVpcCidrBlockOutcome> AssociateVpcCidrBlockOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AssociateVpcCidrBlockRequest&, const AssociateVpcCidrBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateVpcCidrBlockAsyncHandler;
			typedef Outcome<Error, Model::AssociateVpnGatewayWithCertificateResult> AssociateVpnGatewayWithCertificateOutcome;
			typedef std::future<AssociateVpnGatewayWithCertificateOutcome> AssociateVpnGatewayWithCertificateOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AssociateVpnGatewayWithCertificateRequest&, const AssociateVpnGatewayWithCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateVpnGatewayWithCertificateAsyncHandler;
			typedef Outcome<Error, Model::AttachDhcpOptionsSetToVpcResult> AttachDhcpOptionsSetToVpcOutcome;
			typedef std::future<AttachDhcpOptionsSetToVpcOutcome> AttachDhcpOptionsSetToVpcOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AttachDhcpOptionsSetToVpcRequest&, const AttachDhcpOptionsSetToVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDhcpOptionsSetToVpcAsyncHandler;
			typedef Outcome<Error, Model::AttachVbrToVpconnResult> AttachVbrToVpconnOutcome;
			typedef std::future<AttachVbrToVpconnOutcome> AttachVbrToVpconnOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::AttachVbrToVpconnRequest&, const AttachVbrToVpconnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachVbrToVpconnAsyncHandler;
			typedef Outcome<Error, Model::CancelCommonBandwidthPackageIpBandwidthResult> CancelCommonBandwidthPackageIpBandwidthOutcome;
			typedef std::future<CancelCommonBandwidthPackageIpBandwidthOutcome> CancelCommonBandwidthPackageIpBandwidthOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CancelCommonBandwidthPackageIpBandwidthRequest&, const CancelCommonBandwidthPackageIpBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCommonBandwidthPackageIpBandwidthAsyncHandler;
			typedef Outcome<Error, Model::CancelPhysicalConnectionResult> CancelPhysicalConnectionOutcome;
			typedef std::future<CancelPhysicalConnectionOutcome> CancelPhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CancelPhysicalConnectionRequest&, const CancelPhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelPhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CheckCanAllocateVpcPrivateIpAddressResult> CheckCanAllocateVpcPrivateIpAddressOutcome;
			typedef std::future<CheckCanAllocateVpcPrivateIpAddressOutcome> CheckCanAllocateVpcPrivateIpAddressOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CheckCanAllocateVpcPrivateIpAddressRequest&, const CheckCanAllocateVpcPrivateIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCanAllocateVpcPrivateIpAddressAsyncHandler;
			typedef Outcome<Error, Model::CheckVpnBgpEnabledResult> CheckVpnBgpEnabledOutcome;
			typedef std::future<CheckVpnBgpEnabledOutcome> CheckVpnBgpEnabledOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CheckVpnBgpEnabledRequest&, const CheckVpnBgpEnabledOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckVpnBgpEnabledAsyncHandler;
			typedef Outcome<Error, Model::CompletePhysicalConnectionLOAResult> CompletePhysicalConnectionLOAOutcome;
			typedef std::future<CompletePhysicalConnectionLOAOutcome> CompletePhysicalConnectionLOAOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CompletePhysicalConnectionLOARequest&, const CompletePhysicalConnectionLOAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompletePhysicalConnectionLOAAsyncHandler;
			typedef Outcome<Error, Model::ConfirmPhysicalConnectionResult> ConfirmPhysicalConnectionOutcome;
			typedef std::future<ConfirmPhysicalConnectionOutcome> ConfirmPhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ConfirmPhysicalConnectionRequest&, const ConfirmPhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmPhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::ConnectRouterInterfaceResult> ConnectRouterInterfaceOutcome;
			typedef std::future<ConnectRouterInterfaceOutcome> ConnectRouterInterfaceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ConnectRouterInterfaceRequest&, const ConnectRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConnectRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::ConvertBandwidthPackageResult> ConvertBandwidthPackageOutcome;
			typedef std::future<ConvertBandwidthPackageOutcome> ConvertBandwidthPackageOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ConvertBandwidthPackageRequest&, const ConvertBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::CopyNetworkAclEntriesResult> CopyNetworkAclEntriesOutcome;
			typedef std::future<CopyNetworkAclEntriesOutcome> CopyNetworkAclEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CopyNetworkAclEntriesRequest&, const CopyNetworkAclEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyNetworkAclEntriesAsyncHandler;
			typedef Outcome<Error, Model::CreateBgpGroupResult> CreateBgpGroupOutcome;
			typedef std::future<CreateBgpGroupOutcome> CreateBgpGroupOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateBgpGroupRequest&, const CreateBgpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBgpGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateBgpPeerResult> CreateBgpPeerOutcome;
			typedef std::future<CreateBgpPeerOutcome> CreateBgpPeerOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateBgpPeerRequest&, const CreateBgpPeerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBgpPeerAsyncHandler;
			typedef Outcome<Error, Model::CreateCommonBandwidthPackageResult> CreateCommonBandwidthPackageOutcome;
			typedef std::future<CreateCommonBandwidthPackageOutcome> CreateCommonBandwidthPackageOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateCommonBandwidthPackageRequest&, const CreateCommonBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommonBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomerGatewayResult> CreateCustomerGatewayOutcome;
			typedef std::future<CreateCustomerGatewayOutcome> CreateCustomerGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateCustomerGatewayRequest&, const CreateCustomerGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomerGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateDefaultVSwitchResult> CreateDefaultVSwitchOutcome;
			typedef std::future<CreateDefaultVSwitchOutcome> CreateDefaultVSwitchOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateDefaultVSwitchRequest&, const CreateDefaultVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultVSwitchAsyncHandler;
			typedef Outcome<Error, Model::CreateDefaultVpcResult> CreateDefaultVpcOutcome;
			typedef std::future<CreateDefaultVpcOutcome> CreateDefaultVpcOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateDefaultVpcRequest&, const CreateDefaultVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultVpcAsyncHandler;
			typedef Outcome<Error, Model::CreateDhcpOptionsSetResult> CreateDhcpOptionsSetOutcome;
			typedef std::future<CreateDhcpOptionsSetOutcome> CreateDhcpOptionsSetOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateDhcpOptionsSetRequest&, const CreateDhcpOptionsSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDhcpOptionsSetAsyncHandler;
			typedef Outcome<Error, Model::CreateExpressCloudConnectionResult> CreateExpressCloudConnectionOutcome;
			typedef std::future<CreateExpressCloudConnectionOutcome> CreateExpressCloudConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateExpressCloudConnectionRequest&, const CreateExpressCloudConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExpressCloudConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateExpressConnectTrafficQosResult> CreateExpressConnectTrafficQosOutcome;
			typedef std::future<CreateExpressConnectTrafficQosOutcome> CreateExpressConnectTrafficQosOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateExpressConnectTrafficQosRequest&, const CreateExpressConnectTrafficQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExpressConnectTrafficQosAsyncHandler;
			typedef Outcome<Error, Model::CreateExpressConnectTrafficQosQueueResult> CreateExpressConnectTrafficQosQueueOutcome;
			typedef std::future<CreateExpressConnectTrafficQosQueueOutcome> CreateExpressConnectTrafficQosQueueOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateExpressConnectTrafficQosQueueRequest&, const CreateExpressConnectTrafficQosQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExpressConnectTrafficQosQueueAsyncHandler;
			typedef Outcome<Error, Model::CreateExpressConnectTrafficQosRuleResult> CreateExpressConnectTrafficQosRuleOutcome;
			typedef std::future<CreateExpressConnectTrafficQosRuleOutcome> CreateExpressConnectTrafficQosRuleOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateExpressConnectTrafficQosRuleRequest&, const CreateExpressConnectTrafficQosRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExpressConnectTrafficQosRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateFailoverTestJobResult> CreateFailoverTestJobOutcome;
			typedef std::future<CreateFailoverTestJobOutcome> CreateFailoverTestJobOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateFailoverTestJobRequest&, const CreateFailoverTestJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFailoverTestJobAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowLogResult> CreateFlowLogOutcome;
			typedef std::future<CreateFlowLogOutcome> CreateFlowLogOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateFlowLogRequest&, const CreateFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowLogAsyncHandler;
			typedef Outcome<Error, Model::CreateForwardEntryResult> CreateForwardEntryOutcome;
			typedef std::future<CreateForwardEntryOutcome> CreateForwardEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateForwardEntryRequest&, const CreateForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateFullNatEntryResult> CreateFullNatEntryOutcome;
			typedef std::future<CreateFullNatEntryOutcome> CreateFullNatEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateFullNatEntryRequest&, const CreateFullNatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFullNatEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateGlobalAccelerationInstanceResult> CreateGlobalAccelerationInstanceOutcome;
			typedef std::future<CreateGlobalAccelerationInstanceOutcome> CreateGlobalAccelerationInstanceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateGlobalAccelerationInstanceRequest&, const CreateGlobalAccelerationInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalAccelerationInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateHaVipResult> CreateHaVipOutcome;
			typedef std::future<CreateHaVipOutcome> CreateHaVipOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateHaVipRequest&, const CreateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHaVipAsyncHandler;
			typedef Outcome<Error, Model::CreateHighReliablePhysicalConnectionResult> CreateHighReliablePhysicalConnectionOutcome;
			typedef std::future<CreateHighReliablePhysicalConnectionOutcome> CreateHighReliablePhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateHighReliablePhysicalConnectionRequest&, const CreateHighReliablePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHighReliablePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateIPv6TranslatorResult> CreateIPv6TranslatorOutcome;
			typedef std::future<CreateIPv6TranslatorOutcome> CreateIPv6TranslatorOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateIPv6TranslatorRequest&, const CreateIPv6TranslatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIPv6TranslatorAsyncHandler;
			typedef Outcome<Error, Model::CreateIPv6TranslatorAclListResult> CreateIPv6TranslatorAclListOutcome;
			typedef std::future<CreateIPv6TranslatorAclListOutcome> CreateIPv6TranslatorAclListOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateIPv6TranslatorAclListRequest&, const CreateIPv6TranslatorAclListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIPv6TranslatorAclListAsyncHandler;
			typedef Outcome<Error, Model::CreateIPv6TranslatorEntryResult> CreateIPv6TranslatorEntryOutcome;
			typedef std::future<CreateIPv6TranslatorEntryOutcome> CreateIPv6TranslatorEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateIPv6TranslatorEntryRequest&, const CreateIPv6TranslatorEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIPv6TranslatorEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateIpsecServerResult> CreateIpsecServerOutcome;
			typedef std::future<CreateIpsecServerOutcome> CreateIpsecServerOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateIpsecServerRequest&, const CreateIpsecServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpsecServerAsyncHandler;
			typedef Outcome<Error, Model::CreateIpv4GatewayResult> CreateIpv4GatewayOutcome;
			typedef std::future<CreateIpv4GatewayOutcome> CreateIpv4GatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateIpv4GatewayRequest&, const CreateIpv4GatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpv4GatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateIpv6EgressOnlyRuleResult> CreateIpv6EgressOnlyRuleOutcome;
			typedef std::future<CreateIpv6EgressOnlyRuleOutcome> CreateIpv6EgressOnlyRuleOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateIpv6EgressOnlyRuleRequest&, const CreateIpv6EgressOnlyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpv6EgressOnlyRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateIpv6GatewayResult> CreateIpv6GatewayOutcome;
			typedef std::future<CreateIpv6GatewayOutcome> CreateIpv6GatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateIpv6GatewayRequest&, const CreateIpv6GatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpv6GatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateNatGatewayResult> CreateNatGatewayOutcome;
			typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateNatGatewayRequest&, const CreateNatGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateNatIpResult> CreateNatIpOutcome;
			typedef std::future<CreateNatIpOutcome> CreateNatIpOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateNatIpRequest&, const CreateNatIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatIpAsyncHandler;
			typedef Outcome<Error, Model::CreateNatIpCidrResult> CreateNatIpCidrOutcome;
			typedef std::future<CreateNatIpCidrOutcome> CreateNatIpCidrOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateNatIpCidrRequest&, const CreateNatIpCidrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatIpCidrAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkAclResult> CreateNetworkAclOutcome;
			typedef std::future<CreateNetworkAclOutcome> CreateNetworkAclOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateNetworkAclRequest&, const CreateNetworkAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAclAsyncHandler;
			typedef Outcome<Error, Model::CreatePhysicalConnectionResult> CreatePhysicalConnectionOutcome;
			typedef std::future<CreatePhysicalConnectionOutcome> CreatePhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreatePhysicalConnectionRequest&, const CreatePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreatePhysicalConnectionOccupancyOrderResult> CreatePhysicalConnectionOccupancyOrderOutcome;
			typedef std::future<CreatePhysicalConnectionOccupancyOrderOutcome> CreatePhysicalConnectionOccupancyOrderOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreatePhysicalConnectionOccupancyOrderRequest&, const CreatePhysicalConnectionOccupancyOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePhysicalConnectionOccupancyOrderAsyncHandler;
			typedef Outcome<Error, Model::CreatePhysicalConnectionSetupOrderResult> CreatePhysicalConnectionSetupOrderOutcome;
			typedef std::future<CreatePhysicalConnectionSetupOrderOutcome> CreatePhysicalConnectionSetupOrderOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreatePhysicalConnectionSetupOrderRequest&, const CreatePhysicalConnectionSetupOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePhysicalConnectionSetupOrderAsyncHandler;
			typedef Outcome<Error, Model::CreatePublicIpAddressPoolResult> CreatePublicIpAddressPoolOutcome;
			typedef std::future<CreatePublicIpAddressPoolOutcome> CreatePublicIpAddressPoolOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreatePublicIpAddressPoolRequest&, const CreatePublicIpAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublicIpAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::CreateRouteEntriesResult> CreateRouteEntriesOutcome;
			typedef std::future<CreateRouteEntriesOutcome> CreateRouteEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateRouteEntriesRequest&, const CreateRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::CreateRouteEntryResult> CreateRouteEntryOutcome;
			typedef std::future<CreateRouteEntryOutcome> CreateRouteEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateRouteEntryRequest&, const CreateRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateRouteTableResult> CreateRouteTableOutcome;
			typedef std::future<CreateRouteTableOutcome> CreateRouteTableOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateRouteTableRequest&, const CreateRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteTableAsyncHandler;
			typedef Outcome<Error, Model::CreateRouterInterfaceResult> CreateRouterInterfaceOutcome;
			typedef std::future<CreateRouterInterfaceOutcome> CreateRouterInterfaceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateRouterInterfaceRequest&, const CreateRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::CreateSnatEntryResult> CreateSnatEntryOutcome;
			typedef std::future<CreateSnatEntryOutcome> CreateSnatEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateSnatEntryRequest&, const CreateSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateSslVpnClientCertResult> CreateSslVpnClientCertOutcome;
			typedef std::future<CreateSslVpnClientCertOutcome> CreateSslVpnClientCertOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateSslVpnClientCertRequest&, const CreateSslVpnClientCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSslVpnClientCertAsyncHandler;
			typedef Outcome<Error, Model::CreateSslVpnServerResult> CreateSslVpnServerOutcome;
			typedef std::future<CreateSslVpnServerOutcome> CreateSslVpnServerOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateSslVpnServerRequest&, const CreateSslVpnServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSslVpnServerAsyncHandler;
			typedef Outcome<Error, Model::CreateTrafficMirrorFilterResult> CreateTrafficMirrorFilterOutcome;
			typedef std::future<CreateTrafficMirrorFilterOutcome> CreateTrafficMirrorFilterOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateTrafficMirrorFilterRequest&, const CreateTrafficMirrorFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrafficMirrorFilterAsyncHandler;
			typedef Outcome<Error, Model::CreateTrafficMirrorFilterRulesResult> CreateTrafficMirrorFilterRulesOutcome;
			typedef std::future<CreateTrafficMirrorFilterRulesOutcome> CreateTrafficMirrorFilterRulesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateTrafficMirrorFilterRulesRequest&, const CreateTrafficMirrorFilterRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrafficMirrorFilterRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateTrafficMirrorSessionResult> CreateTrafficMirrorSessionOutcome;
			typedef std::future<CreateTrafficMirrorSessionOutcome> CreateTrafficMirrorSessionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateTrafficMirrorSessionRequest&, const CreateTrafficMirrorSessionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrafficMirrorSessionAsyncHandler;
			typedef Outcome<Error, Model::CreateVSwitchResult> CreateVSwitchOutcome;
			typedef std::future<CreateVSwitchOutcome> CreateVSwitchOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVSwitchRequest&, const CreateVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVSwitchAsyncHandler;
			typedef Outcome<Error, Model::CreateVSwitchCidrReservationResult> CreateVSwitchCidrReservationOutcome;
			typedef std::future<CreateVSwitchCidrReservationOutcome> CreateVSwitchCidrReservationOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVSwitchCidrReservationRequest&, const CreateVSwitchCidrReservationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVSwitchCidrReservationAsyncHandler;
			typedef Outcome<Error, Model::CreateVbrHaResult> CreateVbrHaOutcome;
			typedef std::future<CreateVbrHaOutcome> CreateVbrHaOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVbrHaRequest&, const CreateVbrHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVbrHaAsyncHandler;
			typedef Outcome<Error, Model::CreateVcoRouteEntryResult> CreateVcoRouteEntryOutcome;
			typedef std::future<CreateVcoRouteEntryOutcome> CreateVcoRouteEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVcoRouteEntryRequest&, const CreateVcoRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVcoRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateVirtualBorderRouterResult> CreateVirtualBorderRouterOutcome;
			typedef std::future<CreateVirtualBorderRouterOutcome> CreateVirtualBorderRouterOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVirtualBorderRouterRequest&, const CreateVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::CreateVirtualPhysicalConnectionResult> CreateVirtualPhysicalConnectionOutcome;
			typedef std::future<CreateVirtualPhysicalConnectionOutcome> CreateVirtualPhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVirtualPhysicalConnectionRequest&, const CreateVirtualPhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirtualPhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateVpcResult> CreateVpcOutcome;
			typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVpcRequest&, const CreateVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
			typedef Outcome<Error, Model::CreateVpcGatewayEndpointResult> CreateVpcGatewayEndpointOutcome;
			typedef std::future<CreateVpcGatewayEndpointOutcome> CreateVpcGatewayEndpointOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVpcGatewayEndpointRequest&, const CreateVpcGatewayEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcGatewayEndpointAsyncHandler;
			typedef Outcome<Error, Model::CreateVpcPrefixListResult> CreateVpcPrefixListOutcome;
			typedef std::future<CreateVpcPrefixListOutcome> CreateVpcPrefixListOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVpcPrefixListRequest&, const CreateVpcPrefixListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcPrefixListAsyncHandler;
			typedef Outcome<Error, Model::CreateVpconnFromVbrResult> CreateVpconnFromVbrOutcome;
			typedef std::future<CreateVpconnFromVbrOutcome> CreateVpconnFromVbrOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVpconnFromVbrRequest&, const CreateVpconnFromVbrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpconnFromVbrAsyncHandler;
			typedef Outcome<Error, Model::CreateVpnAttachmentResult> CreateVpnAttachmentOutcome;
			typedef std::future<CreateVpnAttachmentOutcome> CreateVpnAttachmentOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVpnAttachmentRequest&, const CreateVpnAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnAttachmentAsyncHandler;
			typedef Outcome<Error, Model::CreateVpnConnectionResult> CreateVpnConnectionOutcome;
			typedef std::future<CreateVpnConnectionOutcome> CreateVpnConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVpnConnectionRequest&, const CreateVpnConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateVpnGatewayResult> CreateVpnGatewayOutcome;
			typedef std::future<CreateVpnGatewayOutcome> CreateVpnGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVpnGatewayRequest&, const CreateVpnGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateVpnPbrRouteEntryResult> CreateVpnPbrRouteEntryOutcome;
			typedef std::future<CreateVpnPbrRouteEntryOutcome> CreateVpnPbrRouteEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVpnPbrRouteEntryRequest&, const CreateVpnPbrRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnPbrRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateVpnRouteEntryResult> CreateVpnRouteEntryOutcome;
			typedef std::future<CreateVpnRouteEntryOutcome> CreateVpnRouteEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::CreateVpnRouteEntryRequest&, const CreateVpnRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::DeactivateRouterInterfaceResult> DeactivateRouterInterfaceOutcome;
			typedef std::future<DeactivateRouterInterfaceOutcome> DeactivateRouterInterfaceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeactivateRouterInterfaceRequest&, const DeactivateRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DeactiveFlowLogResult> DeactiveFlowLogOutcome;
			typedef std::future<DeactiveFlowLogOutcome> DeactiveFlowLogOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeactiveFlowLogRequest&, const DeactiveFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactiveFlowLogAsyncHandler;
			typedef Outcome<Error, Model::DeleteBgpGroupResult> DeleteBgpGroupOutcome;
			typedef std::future<DeleteBgpGroupOutcome> DeleteBgpGroupOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteBgpGroupRequest&, const DeleteBgpGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBgpGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteBgpNetworkResult> DeleteBgpNetworkOutcome;
			typedef std::future<DeleteBgpNetworkOutcome> DeleteBgpNetworkOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteBgpNetworkRequest&, const DeleteBgpNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBgpNetworkAsyncHandler;
			typedef Outcome<Error, Model::DeleteBgpPeerResult> DeleteBgpPeerOutcome;
			typedef std::future<DeleteBgpPeerOutcome> DeleteBgpPeerOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteBgpPeerRequest&, const DeleteBgpPeerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBgpPeerAsyncHandler;
			typedef Outcome<Error, Model::DeleteCommonBandwidthPackageResult> DeleteCommonBandwidthPackageOutcome;
			typedef std::future<DeleteCommonBandwidthPackageOutcome> DeleteCommonBandwidthPackageOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteCommonBandwidthPackageRequest&, const DeleteCommonBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCommonBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomerGatewayResult> DeleteCustomerGatewayOutcome;
			typedef std::future<DeleteCustomerGatewayOutcome> DeleteCustomerGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteCustomerGatewayRequest&, const DeleteCustomerGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomerGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteDhcpOptionsSetResult> DeleteDhcpOptionsSetOutcome;
			typedef std::future<DeleteDhcpOptionsSetOutcome> DeleteDhcpOptionsSetOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteDhcpOptionsSetRequest&, const DeleteDhcpOptionsSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDhcpOptionsSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteExpressConnectTrafficQosResult> DeleteExpressConnectTrafficQosOutcome;
			typedef std::future<DeleteExpressConnectTrafficQosOutcome> DeleteExpressConnectTrafficQosOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteExpressConnectTrafficQosRequest&, const DeleteExpressConnectTrafficQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExpressConnectTrafficQosAsyncHandler;
			typedef Outcome<Error, Model::DeleteExpressConnectTrafficQosQueueResult> DeleteExpressConnectTrafficQosQueueOutcome;
			typedef std::future<DeleteExpressConnectTrafficQosQueueOutcome> DeleteExpressConnectTrafficQosQueueOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteExpressConnectTrafficQosQueueRequest&, const DeleteExpressConnectTrafficQosQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExpressConnectTrafficQosQueueAsyncHandler;
			typedef Outcome<Error, Model::DeleteExpressConnectTrafficQosRuleResult> DeleteExpressConnectTrafficQosRuleOutcome;
			typedef std::future<DeleteExpressConnectTrafficQosRuleOutcome> DeleteExpressConnectTrafficQosRuleOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteExpressConnectTrafficQosRuleRequest&, const DeleteExpressConnectTrafficQosRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExpressConnectTrafficQosRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteFailoverTestJobResult> DeleteFailoverTestJobOutcome;
			typedef std::future<DeleteFailoverTestJobOutcome> DeleteFailoverTestJobOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteFailoverTestJobRequest&, const DeleteFailoverTestJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFailoverTestJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowLogResult> DeleteFlowLogOutcome;
			typedef std::future<DeleteFlowLogOutcome> DeleteFlowLogOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteFlowLogRequest&, const DeleteFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowLogAsyncHandler;
			typedef Outcome<Error, Model::DeleteForwardEntryResult> DeleteForwardEntryOutcome;
			typedef std::future<DeleteForwardEntryOutcome> DeleteForwardEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteForwardEntryRequest&, const DeleteForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteFullNatEntryResult> DeleteFullNatEntryOutcome;
			typedef std::future<DeleteFullNatEntryOutcome> DeleteFullNatEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteFullNatEntryRequest&, const DeleteFullNatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFullNatEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteGlobalAccelerationInstanceResult> DeleteGlobalAccelerationInstanceOutcome;
			typedef std::future<DeleteGlobalAccelerationInstanceOutcome> DeleteGlobalAccelerationInstanceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteGlobalAccelerationInstanceRequest&, const DeleteGlobalAccelerationInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalAccelerationInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteHaVipResult> DeleteHaVipOutcome;
			typedef std::future<DeleteHaVipOutcome> DeleteHaVipOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteHaVipRequest&, const DeleteHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHaVipAsyncHandler;
			typedef Outcome<Error, Model::DeleteIPv6TranslatorResult> DeleteIPv6TranslatorOutcome;
			typedef std::future<DeleteIPv6TranslatorOutcome> DeleteIPv6TranslatorOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteIPv6TranslatorRequest&, const DeleteIPv6TranslatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIPv6TranslatorAsyncHandler;
			typedef Outcome<Error, Model::DeleteIPv6TranslatorAclListResult> DeleteIPv6TranslatorAclListOutcome;
			typedef std::future<DeleteIPv6TranslatorAclListOutcome> DeleteIPv6TranslatorAclListOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteIPv6TranslatorAclListRequest&, const DeleteIPv6TranslatorAclListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIPv6TranslatorAclListAsyncHandler;
			typedef Outcome<Error, Model::DeleteIPv6TranslatorEntryResult> DeleteIPv6TranslatorEntryOutcome;
			typedef std::future<DeleteIPv6TranslatorEntryOutcome> DeleteIPv6TranslatorEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteIPv6TranslatorEntryRequest&, const DeleteIPv6TranslatorEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIPv6TranslatorEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpsecServerResult> DeleteIpsecServerOutcome;
			typedef std::future<DeleteIpsecServerOutcome> DeleteIpsecServerOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteIpsecServerRequest&, const DeleteIpsecServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpsecServerAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpv4GatewayResult> DeleteIpv4GatewayOutcome;
			typedef std::future<DeleteIpv4GatewayOutcome> DeleteIpv4GatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteIpv4GatewayRequest&, const DeleteIpv4GatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpv4GatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpv6EgressOnlyRuleResult> DeleteIpv6EgressOnlyRuleOutcome;
			typedef std::future<DeleteIpv6EgressOnlyRuleOutcome> DeleteIpv6EgressOnlyRuleOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteIpv6EgressOnlyRuleRequest&, const DeleteIpv6EgressOnlyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpv6EgressOnlyRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpv6GatewayResult> DeleteIpv6GatewayOutcome;
			typedef std::future<DeleteIpv6GatewayOutcome> DeleteIpv6GatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteIpv6GatewayRequest&, const DeleteIpv6GatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpv6GatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpv6InternetBandwidthResult> DeleteIpv6InternetBandwidthOutcome;
			typedef std::future<DeleteIpv6InternetBandwidthOutcome> DeleteIpv6InternetBandwidthOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteIpv6InternetBandwidthRequest&, const DeleteIpv6InternetBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpv6InternetBandwidthAsyncHandler;
			typedef Outcome<Error, Model::DeleteNatGatewayResult> DeleteNatGatewayOutcome;
			typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewayRequest&, const DeleteNatGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteNatIpResult> DeleteNatIpOutcome;
			typedef std::future<DeleteNatIpOutcome> DeleteNatIpOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteNatIpRequest&, const DeleteNatIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatIpAsyncHandler;
			typedef Outcome<Error, Model::DeleteNatIpCidrResult> DeleteNatIpCidrOutcome;
			typedef std::future<DeleteNatIpCidrOutcome> DeleteNatIpCidrOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteNatIpCidrRequest&, const DeleteNatIpCidrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatIpCidrAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkAclResult> DeleteNetworkAclOutcome;
			typedef std::future<DeleteNetworkAclOutcome> DeleteNetworkAclOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteNetworkAclRequest&, const DeleteNetworkAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAclAsyncHandler;
			typedef Outcome<Error, Model::DeletePhysicalConnectionResult> DeletePhysicalConnectionOutcome;
			typedef std::future<DeletePhysicalConnectionOutcome> DeletePhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeletePhysicalConnectionRequest&, const DeletePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::DeletePublicIpAddressPoolResult> DeletePublicIpAddressPoolOutcome;
			typedef std::future<DeletePublicIpAddressPoolOutcome> DeletePublicIpAddressPoolOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeletePublicIpAddressPoolRequest&, const DeletePublicIpAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePublicIpAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::DeletePublicIpAddressPoolCidrBlockResult> DeletePublicIpAddressPoolCidrBlockOutcome;
			typedef std::future<DeletePublicIpAddressPoolCidrBlockOutcome> DeletePublicIpAddressPoolCidrBlockOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeletePublicIpAddressPoolCidrBlockRequest&, const DeletePublicIpAddressPoolCidrBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePublicIpAddressPoolCidrBlockAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouteEntriesResult> DeleteRouteEntriesOutcome;
			typedef std::future<DeleteRouteEntriesOutcome> DeleteRouteEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteRouteEntriesRequest&, const DeleteRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouteEntryResult> DeleteRouteEntryOutcome;
			typedef std::future<DeleteRouteEntryOutcome> DeleteRouteEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteRouteEntryRequest&, const DeleteRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouteTableResult> DeleteRouteTableOutcome;
			typedef std::future<DeleteRouteTableOutcome> DeleteRouteTableOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteRouteTableRequest&, const DeleteRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteTableAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouterInterfaceResult> DeleteRouterInterfaceOutcome;
			typedef std::future<DeleteRouterInterfaceOutcome> DeleteRouterInterfaceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteRouterInterfaceRequest&, const DeleteRouterInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouterInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnatEntryResult> DeleteSnatEntryOutcome;
			typedef std::future<DeleteSnatEntryOutcome> DeleteSnatEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteSnatEntryRequest&, const DeleteSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteSslVpnClientCertResult> DeleteSslVpnClientCertOutcome;
			typedef std::future<DeleteSslVpnClientCertOutcome> DeleteSslVpnClientCertOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteSslVpnClientCertRequest&, const DeleteSslVpnClientCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSslVpnClientCertAsyncHandler;
			typedef Outcome<Error, Model::DeleteSslVpnServerResult> DeleteSslVpnServerOutcome;
			typedef std::future<DeleteSslVpnServerOutcome> DeleteSslVpnServerOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteSslVpnServerRequest&, const DeleteSslVpnServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSslVpnServerAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrafficMirrorFilterResult> DeleteTrafficMirrorFilterOutcome;
			typedef std::future<DeleteTrafficMirrorFilterOutcome> DeleteTrafficMirrorFilterOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteTrafficMirrorFilterRequest&, const DeleteTrafficMirrorFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrafficMirrorFilterAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrafficMirrorFilterRulesResult> DeleteTrafficMirrorFilterRulesOutcome;
			typedef std::future<DeleteTrafficMirrorFilterRulesOutcome> DeleteTrafficMirrorFilterRulesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteTrafficMirrorFilterRulesRequest&, const DeleteTrafficMirrorFilterRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrafficMirrorFilterRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrafficMirrorSessionResult> DeleteTrafficMirrorSessionOutcome;
			typedef std::future<DeleteTrafficMirrorSessionOutcome> DeleteTrafficMirrorSessionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteTrafficMirrorSessionRequest&, const DeleteTrafficMirrorSessionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrafficMirrorSessionAsyncHandler;
			typedef Outcome<Error, Model::DeleteVSwitchResult> DeleteVSwitchOutcome;
			typedef std::future<DeleteVSwitchOutcome> DeleteVSwitchOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVSwitchRequest&, const DeleteVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVSwitchAsyncHandler;
			typedef Outcome<Error, Model::DeleteVSwitchCidrReservationResult> DeleteVSwitchCidrReservationOutcome;
			typedef std::future<DeleteVSwitchCidrReservationOutcome> DeleteVSwitchCidrReservationOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVSwitchCidrReservationRequest&, const DeleteVSwitchCidrReservationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVSwitchCidrReservationAsyncHandler;
			typedef Outcome<Error, Model::DeleteVbrHaResult> DeleteVbrHaOutcome;
			typedef std::future<DeleteVbrHaOutcome> DeleteVbrHaOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVbrHaRequest&, const DeleteVbrHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVbrHaAsyncHandler;
			typedef Outcome<Error, Model::DeleteVcoRouteEntryResult> DeleteVcoRouteEntryOutcome;
			typedef std::future<DeleteVcoRouteEntryOutcome> DeleteVcoRouteEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVcoRouteEntryRequest&, const DeleteVcoRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVcoRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteVirtualBorderRouterResult> DeleteVirtualBorderRouterOutcome;
			typedef std::future<DeleteVirtualBorderRouterOutcome> DeleteVirtualBorderRouterOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVirtualBorderRouterRequest&, const DeleteVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcResult> DeleteVpcOutcome;
			typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVpcRequest&, const DeleteVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcGatewayEndpointResult> DeleteVpcGatewayEndpointOutcome;
			typedef std::future<DeleteVpcGatewayEndpointOutcome> DeleteVpcGatewayEndpointOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVpcGatewayEndpointRequest&, const DeleteVpcGatewayEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcGatewayEndpointAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcPrefixListResult> DeleteVpcPrefixListOutcome;
			typedef std::future<DeleteVpcPrefixListOutcome> DeleteVpcPrefixListOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVpcPrefixListRequest&, const DeleteVpcPrefixListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcPrefixListAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpnAttachmentResult> DeleteVpnAttachmentOutcome;
			typedef std::future<DeleteVpnAttachmentOutcome> DeleteVpnAttachmentOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVpnAttachmentRequest&, const DeleteVpnAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnAttachmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpnConnectionResult> DeleteVpnConnectionOutcome;
			typedef std::future<DeleteVpnConnectionOutcome> DeleteVpnConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVpnConnectionRequest&, const DeleteVpnConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnConnectionAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpnGatewayResult> DeleteVpnGatewayOutcome;
			typedef std::future<DeleteVpnGatewayOutcome> DeleteVpnGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewayRequest&, const DeleteVpnGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpnPbrRouteEntryResult> DeleteVpnPbrRouteEntryOutcome;
			typedef std::future<DeleteVpnPbrRouteEntryOutcome> DeleteVpnPbrRouteEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVpnPbrRouteEntryRequest&, const DeleteVpnPbrRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnPbrRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpnRouteEntryResult> DeleteVpnRouteEntryOutcome;
			typedef std::future<DeleteVpnRouteEntryOutcome> DeleteVpnRouteEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeleteVpnRouteEntryRequest&, const DeleteVpnRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::DeletionProtectionResult> DeletionProtectionOutcome;
			typedef std::future<DeletionProtectionOutcome> DeletionProtectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DeletionProtectionRequest&, const DeletionProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletionProtectionAsyncHandler;
			typedef Outcome<Error, Model::Describe95TrafficResult> Describe95TrafficOutcome;
			typedef std::future<Describe95TrafficOutcome> Describe95TrafficOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::Describe95TrafficRequest&, const Describe95TrafficOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> Describe95TrafficAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessPointsResult> DescribeAccessPointsOutcome;
			typedef std::future<DescribeAccessPointsOutcome> DescribeAccessPointsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeAccessPointsRequest&, const DescribeAccessPointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessPointsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBgpGroupsResult> DescribeBgpGroupsOutcome;
			typedef std::future<DescribeBgpGroupsOutcome> DescribeBgpGroupsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeBgpGroupsRequest&, const DescribeBgpGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBgpGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBgpNetworksResult> DescribeBgpNetworksOutcome;
			typedef std::future<DescribeBgpNetworksOutcome> DescribeBgpNetworksOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeBgpNetworksRequest&, const DescribeBgpNetworksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBgpNetworksAsyncHandler;
			typedef Outcome<Error, Model::DescribeBgpPeersResult> DescribeBgpPeersOutcome;
			typedef std::future<DescribeBgpPeersOutcome> DescribeBgpPeersOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeBgpPeersRequest&, const DescribeBgpPeersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBgpPeersAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommonBandwidthPackagesResult> DescribeCommonBandwidthPackagesOutcome;
			typedef std::future<DescribeCommonBandwidthPackagesOutcome> DescribeCommonBandwidthPackagesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeCommonBandwidthPackagesRequest&, const DescribeCommonBandwidthPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommonBandwidthPackagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomerGatewayResult> DescribeCustomerGatewayOutcome;
			typedef std::future<DescribeCustomerGatewayOutcome> DescribeCustomerGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewayRequest&, const DescribeCustomerGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomerGatewaysResult> DescribeCustomerGatewaysOutcome;
			typedef std::future<DescribeCustomerGatewaysOutcome> DescribeCustomerGatewaysOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewaysRequest&, const DescribeCustomerGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeEcGrantRelationResult> DescribeEcGrantRelationOutcome;
			typedef std::future<DescribeEcGrantRelationOutcome> DescribeEcGrantRelationOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeEcGrantRelationRequest&, const DescribeEcGrantRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcGrantRelationAsyncHandler;
			typedef Outcome<Error, Model::DescribeEipAddressesResult> DescribeEipAddressesOutcome;
			typedef std::future<DescribeEipAddressesOutcome> DescribeEipAddressesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeEipAddressesRequest&, const DescribeEipAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipAddressesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEipGatewayInfoResult> DescribeEipGatewayInfoOutcome;
			typedef std::future<DescribeEipGatewayInfoOutcome> DescribeEipGatewayInfoOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeEipGatewayInfoRequest&, const DescribeEipGatewayInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipGatewayInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeEipMonitorDataResult> DescribeEipMonitorDataOutcome;
			typedef std::future<DescribeEipMonitorDataOutcome> DescribeEipMonitorDataOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeEipMonitorDataRequest&, const DescribeEipMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeEipSegmentResult> DescribeEipSegmentOutcome;
			typedef std::future<DescribeEipSegmentOutcome> DescribeEipSegmentOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeEipSegmentRequest&, const DescribeEipSegmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEipSegmentAsyncHandler;
			typedef Outcome<Error, Model::DescribeExpressConnectTrafficQosResult> DescribeExpressConnectTrafficQosOutcome;
			typedef std::future<DescribeExpressConnectTrafficQosOutcome> DescribeExpressConnectTrafficQosOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeExpressConnectTrafficQosRequest&, const DescribeExpressConnectTrafficQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpressConnectTrafficQosAsyncHandler;
			typedef Outcome<Error, Model::DescribeExpressConnectTrafficQosQueueResult> DescribeExpressConnectTrafficQosQueueOutcome;
			typedef std::future<DescribeExpressConnectTrafficQosQueueOutcome> DescribeExpressConnectTrafficQosQueueOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeExpressConnectTrafficQosQueueRequest&, const DescribeExpressConnectTrafficQosQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpressConnectTrafficQosQueueAsyncHandler;
			typedef Outcome<Error, Model::DescribeExpressConnectTrafficQosRuleResult> DescribeExpressConnectTrafficQosRuleOutcome;
			typedef std::future<DescribeExpressConnectTrafficQosRuleOutcome> DescribeExpressConnectTrafficQosRuleOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeExpressConnectTrafficQosRuleRequest&, const DescribeExpressConnectTrafficQosRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpressConnectTrafficQosRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeFailoverTestJobResult> DescribeFailoverTestJobOutcome;
			typedef std::future<DescribeFailoverTestJobOutcome> DescribeFailoverTestJobOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeFailoverTestJobRequest&, const DescribeFailoverTestJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFailoverTestJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeFailoverTestJobsResult> DescribeFailoverTestJobsOutcome;
			typedef std::future<DescribeFailoverTestJobsOutcome> DescribeFailoverTestJobsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeFailoverTestJobsRequest&, const DescribeFailoverTestJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFailoverTestJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowLogsResult> DescribeFlowLogsOutcome;
			typedef std::future<DescribeFlowLogsOutcome> DescribeFlowLogsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeFlowLogsRequest&, const DescribeFlowLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeForwardTableEntriesResult> DescribeForwardTableEntriesOutcome;
			typedef std::future<DescribeForwardTableEntriesOutcome> DescribeForwardTableEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeForwardTableEntriesRequest&, const DescribeForwardTableEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForwardTableEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalAccelerationInstancesResult> DescribeGlobalAccelerationInstancesOutcome;
			typedef std::future<DescribeGlobalAccelerationInstancesOutcome> DescribeGlobalAccelerationInstancesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeGlobalAccelerationInstancesRequest&, const DescribeGlobalAccelerationInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalAccelerationInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGrantRulesToCenResult> DescribeGrantRulesToCenOutcome;
			typedef std::future<DescribeGrantRulesToCenOutcome> DescribeGrantRulesToCenOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeGrantRulesToCenRequest&, const DescribeGrantRulesToCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrantRulesToCenAsyncHandler;
			typedef Outcome<Error, Model::DescribeHaVipsResult> DescribeHaVipsOutcome;
			typedef std::future<DescribeHaVipsOutcome> DescribeHaVipsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeHaVipsRequest&, const DescribeHaVipsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHaVipsAsyncHandler;
			typedef Outcome<Error, Model::DescribeHighDefinitionMonitorLogAttributeResult> DescribeHighDefinitionMonitorLogAttributeOutcome;
			typedef std::future<DescribeHighDefinitionMonitorLogAttributeOutcome> DescribeHighDefinitionMonitorLogAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeHighDefinitionMonitorLogAttributeRequest&, const DescribeHighDefinitionMonitorLogAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHighDefinitionMonitorLogAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeIPv6TranslatorAclListAttributesResult> DescribeIPv6TranslatorAclListAttributesOutcome;
			typedef std::future<DescribeIPv6TranslatorAclListAttributesOutcome> DescribeIPv6TranslatorAclListAttributesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeIPv6TranslatorAclListAttributesRequest&, const DescribeIPv6TranslatorAclListAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPv6TranslatorAclListAttributesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIPv6TranslatorAclListsResult> DescribeIPv6TranslatorAclListsOutcome;
			typedef std::future<DescribeIPv6TranslatorAclListsOutcome> DescribeIPv6TranslatorAclListsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeIPv6TranslatorAclListsRequest&, const DescribeIPv6TranslatorAclListsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPv6TranslatorAclListsAsyncHandler;
			typedef Outcome<Error, Model::DescribeIPv6TranslatorEntriesResult> DescribeIPv6TranslatorEntriesOutcome;
			typedef std::future<DescribeIPv6TranslatorEntriesOutcome> DescribeIPv6TranslatorEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeIPv6TranslatorEntriesRequest&, const DescribeIPv6TranslatorEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPv6TranslatorEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIPv6TranslatorsResult> DescribeIPv6TranslatorsOutcome;
			typedef std::future<DescribeIPv6TranslatorsOutcome> DescribeIPv6TranslatorsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeIPv6TranslatorsRequest&, const DescribeIPv6TranslatorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPv6TranslatorsAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpv6AddressesResult> DescribeIpv6AddressesOutcome;
			typedef std::future<DescribeIpv6AddressesOutcome> DescribeIpv6AddressesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeIpv6AddressesRequest&, const DescribeIpv6AddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpv6AddressesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpv6EgressOnlyRulesResult> DescribeIpv6EgressOnlyRulesOutcome;
			typedef std::future<DescribeIpv6EgressOnlyRulesOutcome> DescribeIpv6EgressOnlyRulesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeIpv6EgressOnlyRulesRequest&, const DescribeIpv6EgressOnlyRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpv6EgressOnlyRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpv6GatewayAttributeResult> DescribeIpv6GatewayAttributeOutcome;
			typedef std::future<DescribeIpv6GatewayAttributeOutcome> DescribeIpv6GatewayAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeIpv6GatewayAttributeRequest&, const DescribeIpv6GatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpv6GatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpv6GatewaysResult> DescribeIpv6GatewaysOutcome;
			typedef std::future<DescribeIpv6GatewaysOutcome> DescribeIpv6GatewaysOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeIpv6GatewaysRequest&, const DescribeIpv6GatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpv6GatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeNatGatewayAssociateNetworkInterfacesResult> DescribeNatGatewayAssociateNetworkInterfacesOutcome;
			typedef std::future<DescribeNatGatewayAssociateNetworkInterfacesOutcome> DescribeNatGatewayAssociateNetworkInterfacesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewayAssociateNetworkInterfacesRequest&, const DescribeNatGatewayAssociateNetworkInterfacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewayAssociateNetworkInterfacesAsyncHandler;
			typedef Outcome<Error, Model::DescribeNatGatewaysResult> DescribeNatGatewaysOutcome;
			typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewaysRequest&, const DescribeNatGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkAclAttributesResult> DescribeNetworkAclAttributesOutcome;
			typedef std::future<DescribeNetworkAclAttributesOutcome> DescribeNetworkAclAttributesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeNetworkAclAttributesRequest&, const DescribeNetworkAclAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAclAttributesAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkAclsResult> DescribeNetworkAclsOutcome;
			typedef std::future<DescribeNetworkAclsOutcome> DescribeNetworkAclsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeNetworkAclsRequest&, const DescribeNetworkAclsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAclsAsyncHandler;
			typedef Outcome<Error, Model::DescribePhysicalConnectionLOAResult> DescribePhysicalConnectionLOAOutcome;
			typedef std::future<DescribePhysicalConnectionLOAOutcome> DescribePhysicalConnectionLOAOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribePhysicalConnectionLOARequest&, const DescribePhysicalConnectionLOAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhysicalConnectionLOAAsyncHandler;
			typedef Outcome<Error, Model::DescribePhysicalConnectionsResult> DescribePhysicalConnectionsOutcome;
			typedef std::future<DescribePhysicalConnectionsOutcome> DescribePhysicalConnectionsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribePhysicalConnectionsRequest&, const DescribePhysicalConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhysicalConnectionsAsyncHandler;
			typedef Outcome<Error, Model::DescribePublicIpAddressResult> DescribePublicIpAddressOutcome;
			typedef std::future<DescribePublicIpAddressOutcome> DescribePublicIpAddressOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribePublicIpAddressRequest&, const DescribePublicIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicIpAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteEntryListResult> DescribeRouteEntryListOutcome;
			typedef std::future<DescribeRouteEntryListOutcome> DescribeRouteEntryListOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeRouteEntryListRequest&, const DescribeRouteEntryListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteEntryListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteTableListResult> DescribeRouteTableListOutcome;
			typedef std::future<DescribeRouteTableListOutcome> DescribeRouteTableListOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeRouteTableListRequest&, const DescribeRouteTableListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTableListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteTablesResult> DescribeRouteTablesOutcome;
			typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeRouteTablesRequest&, const DescribeRouteTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouterInterfaceAttributeResult> DescribeRouterInterfaceAttributeOutcome;
			typedef std::future<DescribeRouterInterfaceAttributeOutcome> DescribeRouterInterfaceAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeRouterInterfaceAttributeRequest&, const DescribeRouterInterfaceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouterInterfaceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouterInterfacesResult> DescribeRouterInterfacesOutcome;
			typedef std::future<DescribeRouterInterfacesOutcome> DescribeRouterInterfacesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeRouterInterfacesRequest&, const DescribeRouterInterfacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouterInterfacesAsyncHandler;
			typedef Outcome<Error, Model::DescribeServerRelatedGlobalAccelerationInstancesResult> DescribeServerRelatedGlobalAccelerationInstancesOutcome;
			typedef std::future<DescribeServerRelatedGlobalAccelerationInstancesOutcome> DescribeServerRelatedGlobalAccelerationInstancesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeServerRelatedGlobalAccelerationInstancesRequest&, const DescribeServerRelatedGlobalAccelerationInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerRelatedGlobalAccelerationInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnatTableEntriesResult> DescribeSnatTableEntriesOutcome;
			typedef std::future<DescribeSnatTableEntriesOutcome> DescribeSnatTableEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeSnatTableEntriesRequest&, const DescribeSnatTableEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnatTableEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSslVpnClientCertResult> DescribeSslVpnClientCertOutcome;
			typedef std::future<DescribeSslVpnClientCertOutcome> DescribeSslVpnClientCertOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeSslVpnClientCertRequest&, const DescribeSslVpnClientCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSslVpnClientCertAsyncHandler;
			typedef Outcome<Error, Model::DescribeSslVpnClientCertsResult> DescribeSslVpnClientCertsOutcome;
			typedef std::future<DescribeSslVpnClientCertsOutcome> DescribeSslVpnClientCertsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeSslVpnClientCertsRequest&, const DescribeSslVpnClientCertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSslVpnClientCertsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSslVpnClientsResult> DescribeSslVpnClientsOutcome;
			typedef std::future<DescribeSslVpnClientsOutcome> DescribeSslVpnClientsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeSslVpnClientsRequest&, const DescribeSslVpnClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSslVpnClientsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSslVpnServersResult> DescribeSslVpnServersOutcome;
			typedef std::future<DescribeSslVpnServersOutcome> DescribeSslVpnServersOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeSslVpnServersRequest&, const DescribeSslVpnServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSslVpnServersAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagKeysResult> DescribeTagKeysOutcome;
			typedef std::future<DescribeTagKeysOutcome> DescribeTagKeysOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeTagKeysRequest&, const DescribeTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagKeysAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagKeysForExpressConnectResult> DescribeTagKeysForExpressConnectOutcome;
			typedef std::future<DescribeTagKeysForExpressConnectOutcome> DescribeTagKeysForExpressConnectOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeTagKeysForExpressConnectRequest&, const DescribeTagKeysForExpressConnectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagKeysForExpressConnectAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVRoutersResult> DescribeVRoutersOutcome;
			typedef std::future<DescribeVRoutersOutcome> DescribeVRoutersOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVRoutersRequest&, const DescribeVRoutersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVRoutersAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchAttributesResult> DescribeVSwitchAttributesOutcome;
			typedef std::future<DescribeVSwitchAttributesOutcome> DescribeVSwitchAttributesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVSwitchAttributesRequest&, const DescribeVSwitchAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchAttributesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchesResult> DescribeVSwitchesOutcome;
			typedef std::future<DescribeVSwitchesOutcome> DescribeVSwitchesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVSwitchesRequest&, const DescribeVSwitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVbrHaResult> DescribeVbrHaOutcome;
			typedef std::future<DescribeVbrHaOutcome> DescribeVbrHaOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVbrHaRequest&, const DescribeVbrHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVbrHaAsyncHandler;
			typedef Outcome<Error, Model::DescribeVcoRouteEntriesResult> DescribeVcoRouteEntriesOutcome;
			typedef std::future<DescribeVcoRouteEntriesOutcome> DescribeVcoRouteEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVcoRouteEntriesRequest&, const DescribeVcoRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVcoRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVirtualBorderRoutersResult> DescribeVirtualBorderRoutersOutcome;
			typedef std::future<DescribeVirtualBorderRoutersOutcome> DescribeVirtualBorderRoutersOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVirtualBorderRoutersRequest&, const DescribeVirtualBorderRoutersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirtualBorderRoutersAsyncHandler;
			typedef Outcome<Error, Model::DescribeVirtualBorderRoutersForPhysicalConnectionResult> DescribeVirtualBorderRoutersForPhysicalConnectionOutcome;
			typedef std::future<DescribeVirtualBorderRoutersForPhysicalConnectionOutcome> DescribeVirtualBorderRoutersForPhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest&, const DescribeVirtualBorderRoutersForPhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirtualBorderRoutersForPhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcAttributeResult> DescribeVpcAttributeOutcome;
			typedef std::future<DescribeVpcAttributeOutcome> DescribeVpcAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpcAttributeRequest&, const DescribeVpcAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcsResult> DescribeVpcsOutcome;
			typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpcsRequest&, const DescribeVpcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnAttachmentsResult> DescribeVpnAttachmentsOutcome;
			typedef std::future<DescribeVpnAttachmentsOutcome> DescribeVpnAttachmentsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnAttachmentsRequest&, const DescribeVpnAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnAttachmentsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnConnectionResult> DescribeVpnConnectionOutcome;
			typedef std::future<DescribeVpnConnectionOutcome> DescribeVpnConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnConnectionRequest&, const DescribeVpnConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnConnectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnConnectionLogsResult> DescribeVpnConnectionLogsOutcome;
			typedef std::future<DescribeVpnConnectionLogsOutcome> DescribeVpnConnectionLogsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnConnectionLogsRequest&, const DescribeVpnConnectionLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnConnectionLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnConnectionsResult> DescribeVpnConnectionsOutcome;
			typedef std::future<DescribeVpnConnectionsOutcome> DescribeVpnConnectionsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnConnectionsRequest&, const DescribeVpnConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnConnectionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnCrossAccountAuthorizationsResult> DescribeVpnCrossAccountAuthorizationsOutcome;
			typedef std::future<DescribeVpnCrossAccountAuthorizationsOutcome> DescribeVpnCrossAccountAuthorizationsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnCrossAccountAuthorizationsRequest&, const DescribeVpnCrossAccountAuthorizationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnCrossAccountAuthorizationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnGatewayResult> DescribeVpnGatewayOutcome;
			typedef std::future<DescribeVpnGatewayOutcome> DescribeVpnGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewayRequest&, const DescribeVpnGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnGatewayAvailableZonesResult> DescribeVpnGatewayAvailableZonesOutcome;
			typedef std::future<DescribeVpnGatewayAvailableZonesOutcome> DescribeVpnGatewayAvailableZonesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewayAvailableZonesRequest&, const DescribeVpnGatewayAvailableZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewayAvailableZonesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnGatewaysResult> DescribeVpnGatewaysOutcome;
			typedef std::future<DescribeVpnGatewaysOutcome> DescribeVpnGatewaysOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewaysRequest&, const DescribeVpnGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnPbrRouteEntriesResult> DescribeVpnPbrRouteEntriesOutcome;
			typedef std::future<DescribeVpnPbrRouteEntriesOutcome> DescribeVpnPbrRouteEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnPbrRouteEntriesRequest&, const DescribeVpnPbrRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnPbrRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnRouteEntriesResult> DescribeVpnRouteEntriesOutcome;
			typedef std::future<DescribeVpnRouteEntriesOutcome> DescribeVpnRouteEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnRouteEntriesRequest&, const DescribeVpnRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpnSslServerLogsResult> DescribeVpnSslServerLogsOutcome;
			typedef std::future<DescribeVpnSslServerLogsOutcome> DescribeVpnSslServerLogsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeVpnSslServerLogsRequest&, const DescribeVpnSslServerLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnSslServerLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DetachDhcpOptionsSetFromVpcResult> DetachDhcpOptionsSetFromVpcOutcome;
			typedef std::future<DetachDhcpOptionsSetFromVpcOutcome> DetachDhcpOptionsSetFromVpcOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DetachDhcpOptionsSetFromVpcRequest&, const DetachDhcpOptionsSetFromVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachDhcpOptionsSetFromVpcAsyncHandler;
			typedef Outcome<Error, Model::DiagnoseVpnConnectionsResult> DiagnoseVpnConnectionsOutcome;
			typedef std::future<DiagnoseVpnConnectionsOutcome> DiagnoseVpnConnectionsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DiagnoseVpnConnectionsRequest&, const DiagnoseVpnConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DiagnoseVpnConnectionsAsyncHandler;
			typedef Outcome<Error, Model::DiagnoseVpnGatewayResult> DiagnoseVpnGatewayOutcome;
			typedef std::future<DiagnoseVpnGatewayOutcome> DiagnoseVpnGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DiagnoseVpnGatewayRequest&, const DiagnoseVpnGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DiagnoseVpnGatewayAsyncHandler;
			typedef Outcome<Error, Model::DisableNatGatewayEcsMetricResult> DisableNatGatewayEcsMetricOutcome;
			typedef std::future<DisableNatGatewayEcsMetricOutcome> DisableNatGatewayEcsMetricOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DisableNatGatewayEcsMetricRequest&, const DisableNatGatewayEcsMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableNatGatewayEcsMetricAsyncHandler;
			typedef Outcome<Error, Model::DisableVpcClassicLinkResult> DisableVpcClassicLinkOutcome;
			typedef std::future<DisableVpcClassicLinkOutcome> DisableVpcClassicLinkOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DisableVpcClassicLinkRequest&, const DisableVpcClassicLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableVpcClassicLinkAsyncHandler;
			typedef Outcome<Error, Model::DissociateRouteTableFromGatewayResult> DissociateRouteTableFromGatewayOutcome;
			typedef std::future<DissociateRouteTableFromGatewayOutcome> DissociateRouteTableFromGatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DissociateRouteTableFromGatewayRequest&, const DissociateRouteTableFromGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateRouteTableFromGatewayAsyncHandler;
			typedef Outcome<Error, Model::DissociateRouteTablesFromVpcGatewayEndpointResult> DissociateRouteTablesFromVpcGatewayEndpointOutcome;
			typedef std::future<DissociateRouteTablesFromVpcGatewayEndpointOutcome> DissociateRouteTablesFromVpcGatewayEndpointOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DissociateRouteTablesFromVpcGatewayEndpointRequest&, const DissociateRouteTablesFromVpcGatewayEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateRouteTablesFromVpcGatewayEndpointAsyncHandler;
			typedef Outcome<Error, Model::DissociateVpnGatewayWithCertificateResult> DissociateVpnGatewayWithCertificateOutcome;
			typedef std::future<DissociateVpnGatewayWithCertificateOutcome> DissociateVpnGatewayWithCertificateOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DissociateVpnGatewayWithCertificateRequest&, const DissociateVpnGatewayWithCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateVpnGatewayWithCertificateAsyncHandler;
			typedef Outcome<Error, Model::DownloadVpnConnectionConfigResult> DownloadVpnConnectionConfigOutcome;
			typedef std::future<DownloadVpnConnectionConfigOutcome> DownloadVpnConnectionConfigOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::DownloadVpnConnectionConfigRequest&, const DownloadVpnConnectionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadVpnConnectionConfigAsyncHandler;
			typedef Outcome<Error, Model::EnableNatGatewayEcsMetricResult> EnableNatGatewayEcsMetricOutcome;
			typedef std::future<EnableNatGatewayEcsMetricOutcome> EnableNatGatewayEcsMetricOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::EnableNatGatewayEcsMetricRequest&, const EnableNatGatewayEcsMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableNatGatewayEcsMetricAsyncHandler;
			typedef Outcome<Error, Model::EnablePhysicalConnectionResult> EnablePhysicalConnectionOutcome;
			typedef std::future<EnablePhysicalConnectionOutcome> EnablePhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::EnablePhysicalConnectionRequest&, const EnablePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnablePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::EnableVpcClassicLinkResult> EnableVpcClassicLinkOutcome;
			typedef std::future<EnableVpcClassicLinkOutcome> EnableVpcClassicLinkOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::EnableVpcClassicLinkRequest&, const EnableVpcClassicLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcClassicLinkAsyncHandler;
			typedef Outcome<Error, Model::EnableVpcIpv4GatewayResult> EnableVpcIpv4GatewayOutcome;
			typedef std::future<EnableVpcIpv4GatewayOutcome> EnableVpcIpv4GatewayOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::EnableVpcIpv4GatewayRequest&, const EnableVpcIpv4GatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcIpv4GatewayAsyncHandler;
			typedef Outcome<Error, Model::GetDhcpOptionsSetResult> GetDhcpOptionsSetOutcome;
			typedef std::future<GetDhcpOptionsSetOutcome> GetDhcpOptionsSetOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetDhcpOptionsSetRequest&, const GetDhcpOptionsSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDhcpOptionsSetAsyncHandler;
			typedef Outcome<Error, Model::GetFlowLogServiceStatusResult> GetFlowLogServiceStatusOutcome;
			typedef std::future<GetFlowLogServiceStatusOutcome> GetFlowLogServiceStatusOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetFlowLogServiceStatusRequest&, const GetFlowLogServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowLogServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetIpv4GatewayAttributeResult> GetIpv4GatewayAttributeOutcome;
			typedef std::future<GetIpv4GatewayAttributeOutcome> GetIpv4GatewayAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetIpv4GatewayAttributeRequest&, const GetIpv4GatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIpv4GatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetNatGatewayAttributeResult> GetNatGatewayAttributeOutcome;
			typedef std::future<GetNatGatewayAttributeOutcome> GetNatGatewayAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetNatGatewayAttributeRequest&, const GetNatGatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNatGatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetPhysicalConnectionServiceStatusResult> GetPhysicalConnectionServiceStatusOutcome;
			typedef std::future<GetPhysicalConnectionServiceStatusOutcome> GetPhysicalConnectionServiceStatusOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetPhysicalConnectionServiceStatusRequest&, const GetPhysicalConnectionServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPhysicalConnectionServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetPublicIpAddressPoolServiceStatusResult> GetPublicIpAddressPoolServiceStatusOutcome;
			typedef std::future<GetPublicIpAddressPoolServiceStatusOutcome> GetPublicIpAddressPoolServiceStatusOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetPublicIpAddressPoolServiceStatusRequest&, const GetPublicIpAddressPoolServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPublicIpAddressPoolServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetTrafficMirrorServiceStatusResult> GetTrafficMirrorServiceStatusOutcome;
			typedef std::future<GetTrafficMirrorServiceStatusOutcome> GetTrafficMirrorServiceStatusOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetTrafficMirrorServiceStatusRequest&, const GetTrafficMirrorServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTrafficMirrorServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetVSwitchCidrReservationUsageResult> GetVSwitchCidrReservationUsageOutcome;
			typedef std::future<GetVSwitchCidrReservationUsageOutcome> GetVSwitchCidrReservationUsageOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetVSwitchCidrReservationUsageRequest&, const GetVSwitchCidrReservationUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVSwitchCidrReservationUsageAsyncHandler;
			typedef Outcome<Error, Model::GetVpcGatewayEndpointAttributeResult> GetVpcGatewayEndpointAttributeOutcome;
			typedef std::future<GetVpcGatewayEndpointAttributeOutcome> GetVpcGatewayEndpointAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetVpcGatewayEndpointAttributeRequest&, const GetVpcGatewayEndpointAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpcGatewayEndpointAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetVpcPrefixListAssociationsResult> GetVpcPrefixListAssociationsOutcome;
			typedef std::future<GetVpcPrefixListAssociationsOutcome> GetVpcPrefixListAssociationsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetVpcPrefixListAssociationsRequest&, const GetVpcPrefixListAssociationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpcPrefixListAssociationsAsyncHandler;
			typedef Outcome<Error, Model::GetVpcPrefixListEntriesResult> GetVpcPrefixListEntriesOutcome;
			typedef std::future<GetVpcPrefixListEntriesOutcome> GetVpcPrefixListEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetVpcPrefixListEntriesRequest&, const GetVpcPrefixListEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpcPrefixListEntriesAsyncHandler;
			typedef Outcome<Error, Model::GetVpcRouteEntrySummaryResult> GetVpcRouteEntrySummaryOutcome;
			typedef std::future<GetVpcRouteEntrySummaryOutcome> GetVpcRouteEntrySummaryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetVpcRouteEntrySummaryRequest&, const GetVpcRouteEntrySummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpcRouteEntrySummaryAsyncHandler;
			typedef Outcome<Error, Model::GetVpnGatewayDiagnoseResultResult> GetVpnGatewayDiagnoseResultOutcome;
			typedef std::future<GetVpnGatewayDiagnoseResultOutcome> GetVpnGatewayDiagnoseResultOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GetVpnGatewayDiagnoseResultRequest&, const GetVpnGatewayDiagnoseResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpnGatewayDiagnoseResultAsyncHandler;
			typedef Outcome<Error, Model::GrantInstanceToCenResult> GrantInstanceToCenOutcome;
			typedef std::future<GrantInstanceToCenOutcome> GrantInstanceToCenOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GrantInstanceToCenRequest&, const GrantInstanceToCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantInstanceToCenAsyncHandler;
			typedef Outcome<Error, Model::GrantInstanceToVbrResult> GrantInstanceToVbrOutcome;
			typedef std::future<GrantInstanceToVbrOutcome> GrantInstanceToVbrOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::GrantInstanceToVbrRequest&, const GrantInstanceToVbrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantInstanceToVbrAsyncHandler;
			typedef Outcome<Error, Model::ListBusinessAccessPointsResult> ListBusinessAccessPointsOutcome;
			typedef std::future<ListBusinessAccessPointsOutcome> ListBusinessAccessPointsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListBusinessAccessPointsRequest&, const ListBusinessAccessPointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBusinessAccessPointsAsyncHandler;
			typedef Outcome<Error, Model::ListDhcpOptionsSetsResult> ListDhcpOptionsSetsOutcome;
			typedef std::future<ListDhcpOptionsSetsOutcome> ListDhcpOptionsSetsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListDhcpOptionsSetsRequest&, const ListDhcpOptionsSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDhcpOptionsSetsAsyncHandler;
			typedef Outcome<Error, Model::ListEnhanhcedNatGatewayAvailableZonesResult> ListEnhanhcedNatGatewayAvailableZonesOutcome;
			typedef std::future<ListEnhanhcedNatGatewayAvailableZonesOutcome> ListEnhanhcedNatGatewayAvailableZonesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListEnhanhcedNatGatewayAvailableZonesRequest&, const ListEnhanhcedNatGatewayAvailableZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnhanhcedNatGatewayAvailableZonesAsyncHandler;
			typedef Outcome<Error, Model::ListFullNatEntriesResult> ListFullNatEntriesOutcome;
			typedef std::future<ListFullNatEntriesOutcome> ListFullNatEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListFullNatEntriesRequest&, const ListFullNatEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFullNatEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayRouteTableEntriesResult> ListGatewayRouteTableEntriesOutcome;
			typedef std::future<ListGatewayRouteTableEntriesOutcome> ListGatewayRouteTableEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListGatewayRouteTableEntriesRequest&, const ListGatewayRouteTableEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayRouteTableEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListGeographicSubRegionsResult> ListGeographicSubRegionsOutcome;
			typedef std::future<ListGeographicSubRegionsOutcome> ListGeographicSubRegionsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListGeographicSubRegionsRequest&, const ListGeographicSubRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGeographicSubRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListIpsecServerLogsResult> ListIpsecServerLogsOutcome;
			typedef std::future<ListIpsecServerLogsOutcome> ListIpsecServerLogsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListIpsecServerLogsRequest&, const ListIpsecServerLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIpsecServerLogsAsyncHandler;
			typedef Outcome<Error, Model::ListIpsecServersResult> ListIpsecServersOutcome;
			typedef std::future<ListIpsecServersOutcome> ListIpsecServersOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListIpsecServersRequest&, const ListIpsecServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIpsecServersAsyncHandler;
			typedef Outcome<Error, Model::ListIpv4GatewaysResult> ListIpv4GatewaysOutcome;
			typedef std::future<ListIpv4GatewaysOutcome> ListIpv4GatewaysOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListIpv4GatewaysRequest&, const ListIpv4GatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIpv4GatewaysAsyncHandler;
			typedef Outcome<Error, Model::ListNatIpCidrsResult> ListNatIpCidrsOutcome;
			typedef std::future<ListNatIpCidrsOutcome> ListNatIpCidrsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListNatIpCidrsRequest&, const ListNatIpCidrsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNatIpCidrsAsyncHandler;
			typedef Outcome<Error, Model::ListNatIpsResult> ListNatIpsOutcome;
			typedef std::future<ListNatIpsOutcome> ListNatIpsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListNatIpsRequest&, const ListNatIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNatIpsAsyncHandler;
			typedef Outcome<Error, Model::ListPrefixListsResult> ListPrefixListsOutcome;
			typedef std::future<ListPrefixListsOutcome> ListPrefixListsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListPrefixListsRequest&, const ListPrefixListsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrefixListsAsyncHandler;
			typedef Outcome<Error, Model::ListPublicIpAddressPoolCidrBlocksResult> ListPublicIpAddressPoolCidrBlocksOutcome;
			typedef std::future<ListPublicIpAddressPoolCidrBlocksOutcome> ListPublicIpAddressPoolCidrBlocksOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListPublicIpAddressPoolCidrBlocksRequest&, const ListPublicIpAddressPoolCidrBlocksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPublicIpAddressPoolCidrBlocksAsyncHandler;
			typedef Outcome<Error, Model::ListPublicIpAddressPoolsResult> ListPublicIpAddressPoolsOutcome;
			typedef std::future<ListPublicIpAddressPoolsOutcome> ListPublicIpAddressPoolsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListPublicIpAddressPoolsRequest&, const ListPublicIpAddressPoolsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPublicIpAddressPoolsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesForExpressConnectResult> ListTagResourcesForExpressConnectOutcome;
			typedef std::future<ListTagResourcesForExpressConnectOutcome> ListTagResourcesForExpressConnectOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListTagResourcesForExpressConnectRequest&, const ListTagResourcesForExpressConnectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesForExpressConnectAsyncHandler;
			typedef Outcome<Error, Model::ListTrafficMirrorFiltersResult> ListTrafficMirrorFiltersOutcome;
			typedef std::future<ListTrafficMirrorFiltersOutcome> ListTrafficMirrorFiltersOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListTrafficMirrorFiltersRequest&, const ListTrafficMirrorFiltersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTrafficMirrorFiltersAsyncHandler;
			typedef Outcome<Error, Model::ListTrafficMirrorSessionsResult> ListTrafficMirrorSessionsOutcome;
			typedef std::future<ListTrafficMirrorSessionsOutcome> ListTrafficMirrorSessionsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListTrafficMirrorSessionsRequest&, const ListTrafficMirrorSessionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTrafficMirrorSessionsAsyncHandler;
			typedef Outcome<Error, Model::ListVSwitchCidrReservationsResult> ListVSwitchCidrReservationsOutcome;
			typedef std::future<ListVSwitchCidrReservationsOutcome> ListVSwitchCidrReservationsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListVSwitchCidrReservationsRequest&, const ListVSwitchCidrReservationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVSwitchCidrReservationsAsyncHandler;
			typedef Outcome<Error, Model::ListVirtualPhysicalConnectionsResult> ListVirtualPhysicalConnectionsOutcome;
			typedef std::future<ListVirtualPhysicalConnectionsOutcome> ListVirtualPhysicalConnectionsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListVirtualPhysicalConnectionsRequest&, const ListVirtualPhysicalConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVirtualPhysicalConnectionsAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointServicesByEndUserResult> ListVpcEndpointServicesByEndUserOutcome;
			typedef std::future<ListVpcEndpointServicesByEndUserOutcome> ListVpcEndpointServicesByEndUserOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListVpcEndpointServicesByEndUserRequest&, const ListVpcEndpointServicesByEndUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointServicesByEndUserAsyncHandler;
			typedef Outcome<Error, Model::ListVpcGatewayEndpointsResult> ListVpcGatewayEndpointsOutcome;
			typedef std::future<ListVpcGatewayEndpointsOutcome> ListVpcGatewayEndpointsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListVpcGatewayEndpointsRequest&, const ListVpcGatewayEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcGatewayEndpointsAsyncHandler;
			typedef Outcome<Error, Model::ListVpcPublishedRouteEntriesResult> ListVpcPublishedRouteEntriesOutcome;
			typedef std::future<ListVpcPublishedRouteEntriesOutcome> ListVpcPublishedRouteEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListVpcPublishedRouteEntriesRequest&, const ListVpcPublishedRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcPublishedRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListVpnCertificateAssociationsResult> ListVpnCertificateAssociationsOutcome;
			typedef std::future<ListVpnCertificateAssociationsOutcome> ListVpnCertificateAssociationsOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ListVpnCertificateAssociationsRequest&, const ListVpnCertificateAssociationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpnCertificateAssociationsAsyncHandler;
			typedef Outcome<Error, Model::ModifyBgpGroupAttributeResult> ModifyBgpGroupAttributeOutcome;
			typedef std::future<ModifyBgpGroupAttributeOutcome> ModifyBgpGroupAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyBgpGroupAttributeRequest&, const ModifyBgpGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBgpGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyBgpPeerAttributeResult> ModifyBgpPeerAttributeOutcome;
			typedef std::future<ModifyBgpPeerAttributeOutcome> ModifyBgpPeerAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyBgpPeerAttributeRequest&, const ModifyBgpPeerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBgpPeerAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyCommonBandwidthPackageAttributeResult> ModifyCommonBandwidthPackageAttributeOutcome;
			typedef std::future<ModifyCommonBandwidthPackageAttributeOutcome> ModifyCommonBandwidthPackageAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyCommonBandwidthPackageAttributeRequest&, const ModifyCommonBandwidthPackageAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCommonBandwidthPackageAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyCommonBandwidthPackageIpBandwidthResult> ModifyCommonBandwidthPackageIpBandwidthOutcome;
			typedef std::future<ModifyCommonBandwidthPackageIpBandwidthOutcome> ModifyCommonBandwidthPackageIpBandwidthOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyCommonBandwidthPackageIpBandwidthRequest&, const ModifyCommonBandwidthPackageIpBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCommonBandwidthPackageIpBandwidthAsyncHandler;
			typedef Outcome<Error, Model::ModifyCommonBandwidthPackageSpecResult> ModifyCommonBandwidthPackageSpecOutcome;
			typedef std::future<ModifyCommonBandwidthPackageSpecOutcome> ModifyCommonBandwidthPackageSpecOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyCommonBandwidthPackageSpecRequest&, const ModifyCommonBandwidthPackageSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCommonBandwidthPackageSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyCustomerGatewayAttributeResult> ModifyCustomerGatewayAttributeOutcome;
			typedef std::future<ModifyCustomerGatewayAttributeOutcome> ModifyCustomerGatewayAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyCustomerGatewayAttributeRequest&, const ModifyCustomerGatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomerGatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyEipAddressAttributeResult> ModifyEipAddressAttributeOutcome;
			typedef std::future<ModifyEipAddressAttributeOutcome> ModifyEipAddressAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyEipAddressAttributeRequest&, const ModifyEipAddressAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEipAddressAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyEipForwardModeResult> ModifyEipForwardModeOutcome;
			typedef std::future<ModifyEipForwardModeOutcome> ModifyEipForwardModeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyEipForwardModeRequest&, const ModifyEipForwardModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEipForwardModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyExpressCloudConnectionAttributeResult> ModifyExpressCloudConnectionAttributeOutcome;
			typedef std::future<ModifyExpressCloudConnectionAttributeOutcome> ModifyExpressCloudConnectionAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyExpressCloudConnectionAttributeRequest&, const ModifyExpressCloudConnectionAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExpressCloudConnectionAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyExpressCloudConnectionBandwidthResult> ModifyExpressCloudConnectionBandwidthOutcome;
			typedef std::future<ModifyExpressCloudConnectionBandwidthOutcome> ModifyExpressCloudConnectionBandwidthOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyExpressCloudConnectionBandwidthRequest&, const ModifyExpressCloudConnectionBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExpressCloudConnectionBandwidthAsyncHandler;
			typedef Outcome<Error, Model::ModifyExpressConnectTrafficQosResult> ModifyExpressConnectTrafficQosOutcome;
			typedef std::future<ModifyExpressConnectTrafficQosOutcome> ModifyExpressConnectTrafficQosOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyExpressConnectTrafficQosRequest&, const ModifyExpressConnectTrafficQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExpressConnectTrafficQosAsyncHandler;
			typedef Outcome<Error, Model::ModifyExpressConnectTrafficQosQueueResult> ModifyExpressConnectTrafficQosQueueOutcome;
			typedef std::future<ModifyExpressConnectTrafficQosQueueOutcome> ModifyExpressConnectTrafficQosQueueOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyExpressConnectTrafficQosQueueRequest&, const ModifyExpressConnectTrafficQosQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExpressConnectTrafficQosQueueAsyncHandler;
			typedef Outcome<Error, Model::ModifyExpressConnectTrafficQosRuleResult> ModifyExpressConnectTrafficQosRuleOutcome;
			typedef std::future<ModifyExpressConnectTrafficQosRuleOutcome> ModifyExpressConnectTrafficQosRuleOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyExpressConnectTrafficQosRuleRequest&, const ModifyExpressConnectTrafficQosRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExpressConnectTrafficQosRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowLogAttributeResult> ModifyFlowLogAttributeOutcome;
			typedef std::future<ModifyFlowLogAttributeOutcome> ModifyFlowLogAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyFlowLogAttributeRequest&, const ModifyFlowLogAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowLogAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyForwardEntryResult> ModifyForwardEntryOutcome;
			typedef std::future<ModifyForwardEntryOutcome> ModifyForwardEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyForwardEntryRequest&, const ModifyForwardEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyForwardEntryAsyncHandler;
			typedef Outcome<Error, Model::ModifyFullNatEntryAttributeResult> ModifyFullNatEntryAttributeOutcome;
			typedef std::future<ModifyFullNatEntryAttributeOutcome> ModifyFullNatEntryAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyFullNatEntryAttributeRequest&, const ModifyFullNatEntryAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFullNatEntryAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalAccelerationInstanceAttributesResult> ModifyGlobalAccelerationInstanceAttributesOutcome;
			typedef std::future<ModifyGlobalAccelerationInstanceAttributesOutcome> ModifyGlobalAccelerationInstanceAttributesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyGlobalAccelerationInstanceAttributesRequest&, const ModifyGlobalAccelerationInstanceAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalAccelerationInstanceAttributesAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalAccelerationInstanceSpecResult> ModifyGlobalAccelerationInstanceSpecOutcome;
			typedef std::future<ModifyGlobalAccelerationInstanceSpecOutcome> ModifyGlobalAccelerationInstanceSpecOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyGlobalAccelerationInstanceSpecRequest&, const ModifyGlobalAccelerationInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalAccelerationInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyHaVipAttributeResult> ModifyHaVipAttributeOutcome;
			typedef std::future<ModifyHaVipAttributeOutcome> ModifyHaVipAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyHaVipAttributeRequest&, const ModifyHaVipAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHaVipAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyIPv6TranslatorAclAttributeResult> ModifyIPv6TranslatorAclAttributeOutcome;
			typedef std::future<ModifyIPv6TranslatorAclAttributeOutcome> ModifyIPv6TranslatorAclAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyIPv6TranslatorAclAttributeRequest&, const ModifyIPv6TranslatorAclAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIPv6TranslatorAclAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyIPv6TranslatorAclListEntryResult> ModifyIPv6TranslatorAclListEntryOutcome;
			typedef std::future<ModifyIPv6TranslatorAclListEntryOutcome> ModifyIPv6TranslatorAclListEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyIPv6TranslatorAclListEntryRequest&, const ModifyIPv6TranslatorAclListEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIPv6TranslatorAclListEntryAsyncHandler;
			typedef Outcome<Error, Model::ModifyIPv6TranslatorAttributeResult> ModifyIPv6TranslatorAttributeOutcome;
			typedef std::future<ModifyIPv6TranslatorAttributeOutcome> ModifyIPv6TranslatorAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyIPv6TranslatorAttributeRequest&, const ModifyIPv6TranslatorAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIPv6TranslatorAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyIPv6TranslatorBandwidthResult> ModifyIPv6TranslatorBandwidthOutcome;
			typedef std::future<ModifyIPv6TranslatorBandwidthOutcome> ModifyIPv6TranslatorBandwidthOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyIPv6TranslatorBandwidthRequest&, const ModifyIPv6TranslatorBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIPv6TranslatorBandwidthAsyncHandler;
			typedef Outcome<Error, Model::ModifyIPv6TranslatorEntryResult> ModifyIPv6TranslatorEntryOutcome;
			typedef std::future<ModifyIPv6TranslatorEntryOutcome> ModifyIPv6TranslatorEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyIPv6TranslatorEntryRequest&, const ModifyIPv6TranslatorEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIPv6TranslatorEntryAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpv6AddressAttributeResult> ModifyIpv6AddressAttributeOutcome;
			typedef std::future<ModifyIpv6AddressAttributeOutcome> ModifyIpv6AddressAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyIpv6AddressAttributeRequest&, const ModifyIpv6AddressAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpv6AddressAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpv6GatewayAttributeResult> ModifyIpv6GatewayAttributeOutcome;
			typedef std::future<ModifyIpv6GatewayAttributeOutcome> ModifyIpv6GatewayAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyIpv6GatewayAttributeRequest&, const ModifyIpv6GatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpv6GatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpv6InternetBandwidthResult> ModifyIpv6InternetBandwidthOutcome;
			typedef std::future<ModifyIpv6InternetBandwidthOutcome> ModifyIpv6InternetBandwidthOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyIpv6InternetBandwidthRequest&, const ModifyIpv6InternetBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpv6InternetBandwidthAsyncHandler;
			typedef Outcome<Error, Model::ModifyNatGatewayAttributeResult> ModifyNatGatewayAttributeOutcome;
			typedef std::future<ModifyNatGatewayAttributeOutcome> ModifyNatGatewayAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewayAttributeRequest&, const ModifyNatGatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyNatGatewaySpecResult> ModifyNatGatewaySpecOutcome;
			typedef std::future<ModifyNatGatewaySpecOutcome> ModifyNatGatewaySpecOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewaySpecRequest&, const ModifyNatGatewaySpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewaySpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyNatIpAttributeResult> ModifyNatIpAttributeOutcome;
			typedef std::future<ModifyNatIpAttributeOutcome> ModifyNatIpAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyNatIpAttributeRequest&, const ModifyNatIpAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatIpAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyNatIpCidrAttributeResult> ModifyNatIpCidrAttributeOutcome;
			typedef std::future<ModifyNatIpCidrAttributeOutcome> ModifyNatIpCidrAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyNatIpCidrAttributeRequest&, const ModifyNatIpCidrAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatIpCidrAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyNetworkAclAttributesResult> ModifyNetworkAclAttributesOutcome;
			typedef std::future<ModifyNetworkAclAttributesOutcome> ModifyNetworkAclAttributesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclAttributesRequest&, const ModifyNetworkAclAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclAttributesAsyncHandler;
			typedef Outcome<Error, Model::ModifyPhysicalConnectionAttributeResult> ModifyPhysicalConnectionAttributeOutcome;
			typedef std::future<ModifyPhysicalConnectionAttributeOutcome> ModifyPhysicalConnectionAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyPhysicalConnectionAttributeRequest&, const ModifyPhysicalConnectionAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPhysicalConnectionAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyRouteEntryResult> ModifyRouteEntryOutcome;
			typedef std::future<ModifyRouteEntryOutcome> ModifyRouteEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyRouteEntryRequest&, const ModifyRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::ModifyRouteTableAttributesResult> ModifyRouteTableAttributesOutcome;
			typedef std::future<ModifyRouteTableAttributesOutcome> ModifyRouteTableAttributesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyRouteTableAttributesRequest&, const ModifyRouteTableAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteTableAttributesAsyncHandler;
			typedef Outcome<Error, Model::ModifyRouterInterfaceAttributeResult> ModifyRouterInterfaceAttributeOutcome;
			typedef std::future<ModifyRouterInterfaceAttributeOutcome> ModifyRouterInterfaceAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyRouterInterfaceAttributeRequest&, const ModifyRouterInterfaceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouterInterfaceAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyRouterInterfaceSpecResult> ModifyRouterInterfaceSpecOutcome;
			typedef std::future<ModifyRouterInterfaceSpecOutcome> ModifyRouterInterfaceSpecOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyRouterInterfaceSpecRequest&, const ModifyRouterInterfaceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouterInterfaceSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifySnatEntryResult> ModifySnatEntryOutcome;
			typedef std::future<ModifySnatEntryOutcome> ModifySnatEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifySnatEntryRequest&, const ModifySnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnatEntryAsyncHandler;
			typedef Outcome<Error, Model::ModifySslVpnClientCertResult> ModifySslVpnClientCertOutcome;
			typedef std::future<ModifySslVpnClientCertOutcome> ModifySslVpnClientCertOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifySslVpnClientCertRequest&, const ModifySslVpnClientCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySslVpnClientCertAsyncHandler;
			typedef Outcome<Error, Model::ModifySslVpnServerResult> ModifySslVpnServerOutcome;
			typedef std::future<ModifySslVpnServerOutcome> ModifySslVpnServerOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifySslVpnServerRequest&, const ModifySslVpnServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySslVpnServerAsyncHandler;
			typedef Outcome<Error, Model::ModifyTunnelAttributeResult> ModifyTunnelAttributeOutcome;
			typedef std::future<ModifyTunnelAttributeOutcome> ModifyTunnelAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyTunnelAttributeRequest&, const ModifyTunnelAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTunnelAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVRouterAttributeResult> ModifyVRouterAttributeOutcome;
			typedef std::future<ModifyVRouterAttributeOutcome> ModifyVRouterAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVRouterAttributeRequest&, const ModifyVRouterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVRouterAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVSwitchAttributeResult> ModifyVSwitchAttributeOutcome;
			typedef std::future<ModifyVSwitchAttributeOutcome> ModifyVSwitchAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVSwitchAttributeRequest&, const ModifyVSwitchAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVSwitchAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVSwitchCidrReservationAttributeResult> ModifyVSwitchCidrReservationAttributeOutcome;
			typedef std::future<ModifyVSwitchCidrReservationAttributeOutcome> ModifyVSwitchCidrReservationAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVSwitchCidrReservationAttributeRequest&, const ModifyVSwitchCidrReservationAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVSwitchCidrReservationAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVcoRouteEntryWeightResult> ModifyVcoRouteEntryWeightOutcome;
			typedef std::future<ModifyVcoRouteEntryWeightOutcome> ModifyVcoRouteEntryWeightOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVcoRouteEntryWeightRequest&, const ModifyVcoRouteEntryWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVcoRouteEntryWeightAsyncHandler;
			typedef Outcome<Error, Model::ModifyVirtualBorderRouterAttributeResult> ModifyVirtualBorderRouterAttributeOutcome;
			typedef std::future<ModifyVirtualBorderRouterAttributeOutcome> ModifyVirtualBorderRouterAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVirtualBorderRouterAttributeRequest&, const ModifyVirtualBorderRouterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirtualBorderRouterAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpcAttributeResult> ModifyVpcAttributeOutcome;
			typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVpcAttributeRequest&, const ModifyVpcAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpcPrefixListResult> ModifyVpcPrefixListOutcome;
			typedef std::future<ModifyVpcPrefixListOutcome> ModifyVpcPrefixListOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVpcPrefixListRequest&, const ModifyVpcPrefixListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcPrefixListAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpnAttachmentAttributeResult> ModifyVpnAttachmentAttributeOutcome;
			typedef std::future<ModifyVpnAttachmentAttributeOutcome> ModifyVpnAttachmentAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVpnAttachmentAttributeRequest&, const ModifyVpnAttachmentAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnAttachmentAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpnConnectionAttributeResult> ModifyVpnConnectionAttributeOutcome;
			typedef std::future<ModifyVpnConnectionAttributeOutcome> ModifyVpnConnectionAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVpnConnectionAttributeRequest&, const ModifyVpnConnectionAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnConnectionAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpnGatewayAttributeResult> ModifyVpnGatewayAttributeOutcome;
			typedef std::future<ModifyVpnGatewayAttributeOutcome> ModifyVpnGatewayAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayAttributeRequest&, const ModifyVpnGatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpnPbrRouteEntryAttributeResult> ModifyVpnPbrRouteEntryAttributeOutcome;
			typedef std::future<ModifyVpnPbrRouteEntryAttributeOutcome> ModifyVpnPbrRouteEntryAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVpnPbrRouteEntryAttributeRequest&, const ModifyVpnPbrRouteEntryAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnPbrRouteEntryAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpnPbrRouteEntryPriorityResult> ModifyVpnPbrRouteEntryPriorityOutcome;
			typedef std::future<ModifyVpnPbrRouteEntryPriorityOutcome> ModifyVpnPbrRouteEntryPriorityOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVpnPbrRouteEntryPriorityRequest&, const ModifyVpnPbrRouteEntryPriorityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnPbrRouteEntryPriorityAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpnPbrRouteEntryWeightResult> ModifyVpnPbrRouteEntryWeightOutcome;
			typedef std::future<ModifyVpnPbrRouteEntryWeightOutcome> ModifyVpnPbrRouteEntryWeightOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVpnPbrRouteEntryWeightRequest&, const ModifyVpnPbrRouteEntryWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnPbrRouteEntryWeightAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpnRouteEntryWeightResult> ModifyVpnRouteEntryWeightOutcome;
			typedef std::future<ModifyVpnRouteEntryWeightOutcome> ModifyVpnRouteEntryWeightOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ModifyVpnRouteEntryWeightRequest&, const ModifyVpnRouteEntryWeightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnRouteEntryWeightAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::MoveVpnResourceGroupResult> MoveVpnResourceGroupOutcome;
			typedef std::future<MoveVpnResourceGroupOutcome> MoveVpnResourceGroupOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::MoveVpnResourceGroupRequest&, const MoveVpnResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveVpnResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::OpenFlowLogServiceResult> OpenFlowLogServiceOutcome;
			typedef std::future<OpenFlowLogServiceOutcome> OpenFlowLogServiceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::OpenFlowLogServiceRequest&, const OpenFlowLogServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenFlowLogServiceAsyncHandler;
			typedef Outcome<Error, Model::OpenPhysicalConnectionServiceResult> OpenPhysicalConnectionServiceOutcome;
			typedef std::future<OpenPhysicalConnectionServiceOutcome> OpenPhysicalConnectionServiceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::OpenPhysicalConnectionServiceRequest&, const OpenPhysicalConnectionServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenPhysicalConnectionServiceAsyncHandler;
			typedef Outcome<Error, Model::OpenPublicIpAddressPoolServiceResult> OpenPublicIpAddressPoolServiceOutcome;
			typedef std::future<OpenPublicIpAddressPoolServiceOutcome> OpenPublicIpAddressPoolServiceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::OpenPublicIpAddressPoolServiceRequest&, const OpenPublicIpAddressPoolServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenPublicIpAddressPoolServiceAsyncHandler;
			typedef Outcome<Error, Model::OpenTrafficMirrorServiceResult> OpenTrafficMirrorServiceOutcome;
			typedef std::future<OpenTrafficMirrorServiceOutcome> OpenTrafficMirrorServiceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::OpenTrafficMirrorServiceRequest&, const OpenTrafficMirrorServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenTrafficMirrorServiceAsyncHandler;
			typedef Outcome<Error, Model::PublishVpcRouteEntriesResult> PublishVpcRouteEntriesOutcome;
			typedef std::future<PublishVpcRouteEntriesOutcome> PublishVpcRouteEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::PublishVpcRouteEntriesRequest&, const PublishVpcRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishVpcRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::PublishVpnRouteEntryResult> PublishVpnRouteEntryOutcome;
			typedef std::future<PublishVpnRouteEntryOutcome> PublishVpnRouteEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::PublishVpnRouteEntryRequest&, const PublishVpnRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishVpnRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::RecoverPhysicalConnectionResult> RecoverPhysicalConnectionOutcome;
			typedef std::future<RecoverPhysicalConnectionOutcome> RecoverPhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::RecoverPhysicalConnectionRequest&, const RecoverPhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecoverPhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::RecoverVirtualBorderRouterResult> RecoverVirtualBorderRouterOutcome;
			typedef std::future<RecoverVirtualBorderRouterOutcome> RecoverVirtualBorderRouterOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::RecoverVirtualBorderRouterRequest&, const RecoverVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecoverVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::ReleaseEipAddressResult> ReleaseEipAddressOutcome;
			typedef std::future<ReleaseEipAddressOutcome> ReleaseEipAddressOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ReleaseEipAddressRequest&, const ReleaseEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseEipAddressAsyncHandler;
			typedef Outcome<Error, Model::ReleaseEipSegmentAddressResult> ReleaseEipSegmentAddressOutcome;
			typedef std::future<ReleaseEipSegmentAddressOutcome> ReleaseEipSegmentAddressOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ReleaseEipSegmentAddressRequest&, const ReleaseEipSegmentAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseEipSegmentAddressAsyncHandler;
			typedef Outcome<Error, Model::ReleaseIpv6AddressResult> ReleaseIpv6AddressOutcome;
			typedef std::future<ReleaseIpv6AddressOutcome> ReleaseIpv6AddressOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ReleaseIpv6AddressRequest&, const ReleaseIpv6AddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseIpv6AddressAsyncHandler;
			typedef Outcome<Error, Model::RemoveCommonBandwidthPackageIpResult> RemoveCommonBandwidthPackageIpOutcome;
			typedef std::future<RemoveCommonBandwidthPackageIpOutcome> RemoveCommonBandwidthPackageIpOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::RemoveCommonBandwidthPackageIpRequest&, const RemoveCommonBandwidthPackageIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveCommonBandwidthPackageIpAsyncHandler;
			typedef Outcome<Error, Model::RemoveGlobalAccelerationInstanceIpResult> RemoveGlobalAccelerationInstanceIpOutcome;
			typedef std::future<RemoveGlobalAccelerationInstanceIpOutcome> RemoveGlobalAccelerationInstanceIpOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::RemoveGlobalAccelerationInstanceIpRequest&, const RemoveGlobalAccelerationInstanceIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveGlobalAccelerationInstanceIpAsyncHandler;
			typedef Outcome<Error, Model::RemoveIPv6TranslatorAclListEntryResult> RemoveIPv6TranslatorAclListEntryOutcome;
			typedef std::future<RemoveIPv6TranslatorAclListEntryOutcome> RemoveIPv6TranslatorAclListEntryOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::RemoveIPv6TranslatorAclListEntryRequest&, const RemoveIPv6TranslatorAclListEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveIPv6TranslatorAclListEntryAsyncHandler;
			typedef Outcome<Error, Model::RemoveSourcesFromTrafficMirrorSessionResult> RemoveSourcesFromTrafficMirrorSessionOutcome;
			typedef std::future<RemoveSourcesFromTrafficMirrorSessionOutcome> RemoveSourcesFromTrafficMirrorSessionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::RemoveSourcesFromTrafficMirrorSessionRequest&, const RemoveSourcesFromTrafficMirrorSessionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveSourcesFromTrafficMirrorSessionAsyncHandler;
			typedef Outcome<Error, Model::ReplaceVpcDhcpOptionsSetResult> ReplaceVpcDhcpOptionsSetOutcome;
			typedef std::future<ReplaceVpcDhcpOptionsSetOutcome> ReplaceVpcDhcpOptionsSetOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::ReplaceVpcDhcpOptionsSetRequest&, const ReplaceVpcDhcpOptionsSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceVpcDhcpOptionsSetAsyncHandler;
			typedef Outcome<Error, Model::RetryVpcPrefixListAssociationResult> RetryVpcPrefixListAssociationOutcome;
			typedef std::future<RetryVpcPrefixListAssociationOutcome> RetryVpcPrefixListAssociationOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::RetryVpcPrefixListAssociationRequest&, const RetryVpcPrefixListAssociationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryVpcPrefixListAssociationAsyncHandler;
			typedef Outcome<Error, Model::RevokeInstanceFromCenResult> RevokeInstanceFromCenOutcome;
			typedef std::future<RevokeInstanceFromCenOutcome> RevokeInstanceFromCenOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::RevokeInstanceFromCenRequest&, const RevokeInstanceFromCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeInstanceFromCenAsyncHandler;
			typedef Outcome<Error, Model::RevokeInstanceFromVbrResult> RevokeInstanceFromVbrOutcome;
			typedef std::future<RevokeInstanceFromVbrOutcome> RevokeInstanceFromVbrOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::RevokeInstanceFromVbrRequest&, const RevokeInstanceFromVbrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeInstanceFromVbrAsyncHandler;
			typedef Outcome<Error, Model::SecondApplyPhysicalConnectionLOAResult> SecondApplyPhysicalConnectionLOAOutcome;
			typedef std::future<SecondApplyPhysicalConnectionLOAOutcome> SecondApplyPhysicalConnectionLOAOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::SecondApplyPhysicalConnectionLOARequest&, const SecondApplyPhysicalConnectionLOAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SecondApplyPhysicalConnectionLOAAsyncHandler;
			typedef Outcome<Error, Model::SetHighDefinitionMonitorLogStatusResult> SetHighDefinitionMonitorLogStatusOutcome;
			typedef std::future<SetHighDefinitionMonitorLogStatusOutcome> SetHighDefinitionMonitorLogStatusOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::SetHighDefinitionMonitorLogStatusRequest&, const SetHighDefinitionMonitorLogStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetHighDefinitionMonitorLogStatusAsyncHandler;
			typedef Outcome<Error, Model::StartFailoverTestJobResult> StartFailoverTestJobOutcome;
			typedef std::future<StartFailoverTestJobOutcome> StartFailoverTestJobOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::StartFailoverTestJobRequest&, const StartFailoverTestJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartFailoverTestJobAsyncHandler;
			typedef Outcome<Error, Model::StopFailoverTestJobResult> StopFailoverTestJobOutcome;
			typedef std::future<StopFailoverTestJobOutcome> StopFailoverTestJobOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::StopFailoverTestJobRequest&, const StopFailoverTestJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopFailoverTestJobAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesForExpressConnectResult> TagResourcesForExpressConnectOutcome;
			typedef std::future<TagResourcesForExpressConnectOutcome> TagResourcesForExpressConnectOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::TagResourcesForExpressConnectRequest&, const TagResourcesForExpressConnectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesForExpressConnectAsyncHandler;
			typedef Outcome<Error, Model::TerminatePhysicalConnectionResult> TerminatePhysicalConnectionOutcome;
			typedef std::future<TerminatePhysicalConnectionOutcome> TerminatePhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::TerminatePhysicalConnectionRequest&, const TerminatePhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminatePhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::TerminateVirtualBorderRouterResult> TerminateVirtualBorderRouterOutcome;
			typedef std::future<TerminateVirtualBorderRouterOutcome> TerminateVirtualBorderRouterOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::TerminateVirtualBorderRouterRequest&, const TerminateVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminateVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::TransformEipSegmentToPublicIpAddressPoolResult> TransformEipSegmentToPublicIpAddressPoolOutcome;
			typedef std::future<TransformEipSegmentToPublicIpAddressPoolOutcome> TransformEipSegmentToPublicIpAddressPoolOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::TransformEipSegmentToPublicIpAddressPoolRequest&, const TransformEipSegmentToPublicIpAddressPoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformEipSegmentToPublicIpAddressPoolAsyncHandler;
			typedef Outcome<Error, Model::UnTagResourcesResult> UnTagResourcesOutcome;
			typedef std::future<UnTagResourcesOutcome> UnTagResourcesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UnTagResourcesRequest&, const UnTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnassociateEipAddressResult> UnassociateEipAddressOutcome;
			typedef std::future<UnassociateEipAddressOutcome> UnassociateEipAddressOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UnassociateEipAddressRequest&, const UnassociateEipAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateEipAddressAsyncHandler;
			typedef Outcome<Error, Model::UnassociateGlobalAccelerationInstanceResult> UnassociateGlobalAccelerationInstanceOutcome;
			typedef std::future<UnassociateGlobalAccelerationInstanceOutcome> UnassociateGlobalAccelerationInstanceOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UnassociateGlobalAccelerationInstanceRequest&, const UnassociateGlobalAccelerationInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateGlobalAccelerationInstanceAsyncHandler;
			typedef Outcome<Error, Model::UnassociateHaVipResult> UnassociateHaVipOutcome;
			typedef std::future<UnassociateHaVipOutcome> UnassociateHaVipOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UnassociateHaVipRequest&, const UnassociateHaVipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateHaVipAsyncHandler;
			typedef Outcome<Error, Model::UnassociateNetworkAclResult> UnassociateNetworkAclOutcome;
			typedef std::future<UnassociateNetworkAclOutcome> UnassociateNetworkAclOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UnassociateNetworkAclRequest&, const UnassociateNetworkAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateNetworkAclAsyncHandler;
			typedef Outcome<Error, Model::UnassociatePhysicalConnectionFromVirtualBorderRouterResult> UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome;
			typedef std::future<UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome> UnassociatePhysicalConnectionFromVirtualBorderRouterOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest&, const UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociatePhysicalConnectionFromVirtualBorderRouterAsyncHandler;
			typedef Outcome<Error, Model::UnassociateRouteTableResult> UnassociateRouteTableOutcome;
			typedef std::future<UnassociateRouteTableOutcome> UnassociateRouteTableOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UnassociateRouteTableRequest&, const UnassociateRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateRouteTableAsyncHandler;
			typedef Outcome<Error, Model::UnassociateVpcCidrBlockResult> UnassociateVpcCidrBlockOutcome;
			typedef std::future<UnassociateVpcCidrBlockOutcome> UnassociateVpcCidrBlockOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UnassociateVpcCidrBlockRequest&, const UnassociateVpcCidrBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateVpcCidrBlockAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesForExpressConnectResult> UntagResourcesForExpressConnectOutcome;
			typedef std::future<UntagResourcesForExpressConnectOutcome> UntagResourcesForExpressConnectOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UntagResourcesForExpressConnectRequest&, const UntagResourcesForExpressConnectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesForExpressConnectAsyncHandler;
			typedef Outcome<Error, Model::UpdateDhcpOptionsSetAttributeResult> UpdateDhcpOptionsSetAttributeOutcome;
			typedef std::future<UpdateDhcpOptionsSetAttributeOutcome> UpdateDhcpOptionsSetAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateDhcpOptionsSetAttributeRequest&, const UpdateDhcpOptionsSetAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDhcpOptionsSetAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateFailoverTestJobResult> UpdateFailoverTestJobOutcome;
			typedef std::future<UpdateFailoverTestJobOutcome> UpdateFailoverTestJobOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateFailoverTestJobRequest&, const UpdateFailoverTestJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFailoverTestJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayRouteTableEntryAttributeResult> UpdateGatewayRouteTableEntryAttributeOutcome;
			typedef std::future<UpdateGatewayRouteTableEntryAttributeOutcome> UpdateGatewayRouteTableEntryAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateGatewayRouteTableEntryAttributeRequest&, const UpdateGatewayRouteTableEntryAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayRouteTableEntryAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateIpsecServerResult> UpdateIpsecServerOutcome;
			typedef std::future<UpdateIpsecServerOutcome> UpdateIpsecServerOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateIpsecServerRequest&, const UpdateIpsecServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIpsecServerAsyncHandler;
			typedef Outcome<Error, Model::UpdateIpv4GatewayAttributeResult> UpdateIpv4GatewayAttributeOutcome;
			typedef std::future<UpdateIpv4GatewayAttributeOutcome> UpdateIpv4GatewayAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateIpv4GatewayAttributeRequest&, const UpdateIpv4GatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIpv4GatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateNatGatewayNatTypeResult> UpdateNatGatewayNatTypeOutcome;
			typedef std::future<UpdateNatGatewayNatTypeOutcome> UpdateNatGatewayNatTypeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateNatGatewayNatTypeRequest&, const UpdateNatGatewayNatTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNatGatewayNatTypeAsyncHandler;
			typedef Outcome<Error, Model::UpdateNetworkAclEntriesResult> UpdateNetworkAclEntriesOutcome;
			typedef std::future<UpdateNetworkAclEntriesOutcome> UpdateNetworkAclEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateNetworkAclEntriesRequest&, const UpdateNetworkAclEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNetworkAclEntriesAsyncHandler;
			typedef Outcome<Error, Model::UpdatePublicIpAddressPoolAttributeResult> UpdatePublicIpAddressPoolAttributeOutcome;
			typedef std::future<UpdatePublicIpAddressPoolAttributeOutcome> UpdatePublicIpAddressPoolAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdatePublicIpAddressPoolAttributeRequest&, const UpdatePublicIpAddressPoolAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePublicIpAddressPoolAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateTrafficMirrorFilterAttributeResult> UpdateTrafficMirrorFilterAttributeOutcome;
			typedef std::future<UpdateTrafficMirrorFilterAttributeOutcome> UpdateTrafficMirrorFilterAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateTrafficMirrorFilterAttributeRequest&, const UpdateTrafficMirrorFilterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTrafficMirrorFilterAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateTrafficMirrorFilterRuleAttributeResult> UpdateTrafficMirrorFilterRuleAttributeOutcome;
			typedef std::future<UpdateTrafficMirrorFilterRuleAttributeOutcome> UpdateTrafficMirrorFilterRuleAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateTrafficMirrorFilterRuleAttributeRequest&, const UpdateTrafficMirrorFilterRuleAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTrafficMirrorFilterRuleAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateTrafficMirrorSessionAttributeResult> UpdateTrafficMirrorSessionAttributeOutcome;
			typedef std::future<UpdateTrafficMirrorSessionAttributeOutcome> UpdateTrafficMirrorSessionAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateTrafficMirrorSessionAttributeRequest&, const UpdateTrafficMirrorSessionAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTrafficMirrorSessionAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateVirtualBorderBandwidthResult> UpdateVirtualBorderBandwidthOutcome;
			typedef std::future<UpdateVirtualBorderBandwidthOutcome> UpdateVirtualBorderBandwidthOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateVirtualBorderBandwidthRequest&, const UpdateVirtualBorderBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVirtualBorderBandwidthAsyncHandler;
			typedef Outcome<Error, Model::UpdateVirtualPhysicalConnectionResult> UpdateVirtualPhysicalConnectionOutcome;
			typedef std::future<UpdateVirtualPhysicalConnectionOutcome> UpdateVirtualPhysicalConnectionOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateVirtualPhysicalConnectionRequest&, const UpdateVirtualPhysicalConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVirtualPhysicalConnectionAsyncHandler;
			typedef Outcome<Error, Model::UpdateVpcGatewayEndpointAttributeResult> UpdateVpcGatewayEndpointAttributeOutcome;
			typedef std::future<UpdateVpcGatewayEndpointAttributeOutcome> UpdateVpcGatewayEndpointAttributeOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::UpdateVpcGatewayEndpointAttributeRequest&, const UpdateVpcGatewayEndpointAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVpcGatewayEndpointAttributeAsyncHandler;
			typedef Outcome<Error, Model::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaResult> VpcDescribeVpcNatGatewayNetworkInterfaceQuotaOutcome;
			typedef std::future<VpcDescribeVpcNatGatewayNetworkInterfaceQuotaOutcome> VpcDescribeVpcNatGatewayNetworkInterfaceQuotaOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest&, const VpcDescribeVpcNatGatewayNetworkInterfaceQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VpcDescribeVpcNatGatewayNetworkInterfaceQuotaAsyncHandler;
			typedef Outcome<Error, Model::WithdrawVpcPublishedRouteEntriesResult> WithdrawVpcPublishedRouteEntriesOutcome;
			typedef std::future<WithdrawVpcPublishedRouteEntriesOutcome> WithdrawVpcPublishedRouteEntriesOutcomeCallable;
			typedef std::function<void(const VpcClient*, const Model::WithdrawVpcPublishedRouteEntriesRequest&, const WithdrawVpcPublishedRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawVpcPublishedRouteEntriesAsyncHandler;

			VpcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			VpcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			VpcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~VpcClient();
			ActivateRouterInterfaceOutcome activateRouterInterface(const Model::ActivateRouterInterfaceRequest &request)const;
			void activateRouterInterfaceAsync(const Model::ActivateRouterInterfaceRequest& request, const ActivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateRouterInterfaceOutcomeCallable activateRouterInterfaceCallable(const Model::ActivateRouterInterfaceRequest& request) const;
			ActiveFlowLogOutcome activeFlowLog(const Model::ActiveFlowLogRequest &request)const;
			void activeFlowLogAsync(const Model::ActiveFlowLogRequest& request, const ActiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActiveFlowLogOutcomeCallable activeFlowLogCallable(const Model::ActiveFlowLogRequest& request) const;
			AddBgpNetworkOutcome addBgpNetwork(const Model::AddBgpNetworkRequest &request)const;
			void addBgpNetworkAsync(const Model::AddBgpNetworkRequest& request, const AddBgpNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBgpNetworkOutcomeCallable addBgpNetworkCallable(const Model::AddBgpNetworkRequest& request) const;
			AddCommonBandwidthPackageIpOutcome addCommonBandwidthPackageIp(const Model::AddCommonBandwidthPackageIpRequest &request)const;
			void addCommonBandwidthPackageIpAsync(const Model::AddCommonBandwidthPackageIpRequest& request, const AddCommonBandwidthPackageIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCommonBandwidthPackageIpOutcomeCallable addCommonBandwidthPackageIpCallable(const Model::AddCommonBandwidthPackageIpRequest& request) const;
			AddCommonBandwidthPackageIpsOutcome addCommonBandwidthPackageIps(const Model::AddCommonBandwidthPackageIpsRequest &request)const;
			void addCommonBandwidthPackageIpsAsync(const Model::AddCommonBandwidthPackageIpsRequest& request, const AddCommonBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCommonBandwidthPackageIpsOutcomeCallable addCommonBandwidthPackageIpsCallable(const Model::AddCommonBandwidthPackageIpsRequest& request) const;
			AddGlobalAccelerationInstanceIpOutcome addGlobalAccelerationInstanceIp(const Model::AddGlobalAccelerationInstanceIpRequest &request)const;
			void addGlobalAccelerationInstanceIpAsync(const Model::AddGlobalAccelerationInstanceIpRequest& request, const AddGlobalAccelerationInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGlobalAccelerationInstanceIpOutcomeCallable addGlobalAccelerationInstanceIpCallable(const Model::AddGlobalAccelerationInstanceIpRequest& request) const;
			AddIPv6TranslatorAclListEntryOutcome addIPv6TranslatorAclListEntry(const Model::AddIPv6TranslatorAclListEntryRequest &request)const;
			void addIPv6TranslatorAclListEntryAsync(const Model::AddIPv6TranslatorAclListEntryRequest& request, const AddIPv6TranslatorAclListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddIPv6TranslatorAclListEntryOutcomeCallable addIPv6TranslatorAclListEntryCallable(const Model::AddIPv6TranslatorAclListEntryRequest& request) const;
			AddPublicIpAddressPoolCidrBlockOutcome addPublicIpAddressPoolCidrBlock(const Model::AddPublicIpAddressPoolCidrBlockRequest &request)const;
			void addPublicIpAddressPoolCidrBlockAsync(const Model::AddPublicIpAddressPoolCidrBlockRequest& request, const AddPublicIpAddressPoolCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPublicIpAddressPoolCidrBlockOutcomeCallable addPublicIpAddressPoolCidrBlockCallable(const Model::AddPublicIpAddressPoolCidrBlockRequest& request) const;
			AddSourcesToTrafficMirrorSessionOutcome addSourcesToTrafficMirrorSession(const Model::AddSourcesToTrafficMirrorSessionRequest &request)const;
			void addSourcesToTrafficMirrorSessionAsync(const Model::AddSourcesToTrafficMirrorSessionRequest& request, const AddSourcesToTrafficMirrorSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSourcesToTrafficMirrorSessionOutcomeCallable addSourcesToTrafficMirrorSessionCallable(const Model::AddSourcesToTrafficMirrorSessionRequest& request) const;
			AllocateEipAddressOutcome allocateEipAddress(const Model::AllocateEipAddressRequest &request)const;
			void allocateEipAddressAsync(const Model::AllocateEipAddressRequest& request, const AllocateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateEipAddressOutcomeCallable allocateEipAddressCallable(const Model::AllocateEipAddressRequest& request) const;
			AllocateEipAddressProOutcome allocateEipAddressPro(const Model::AllocateEipAddressProRequest &request)const;
			void allocateEipAddressProAsync(const Model::AllocateEipAddressProRequest& request, const AllocateEipAddressProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateEipAddressProOutcomeCallable allocateEipAddressProCallable(const Model::AllocateEipAddressProRequest& request) const;
			AllocateEipSegmentAddressOutcome allocateEipSegmentAddress(const Model::AllocateEipSegmentAddressRequest &request)const;
			void allocateEipSegmentAddressAsync(const Model::AllocateEipSegmentAddressRequest& request, const AllocateEipSegmentAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateEipSegmentAddressOutcomeCallable allocateEipSegmentAddressCallable(const Model::AllocateEipSegmentAddressRequest& request) const;
			AllocateIpv6AddressOutcome allocateIpv6Address(const Model::AllocateIpv6AddressRequest &request)const;
			void allocateIpv6AddressAsync(const Model::AllocateIpv6AddressRequest& request, const AllocateIpv6AddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateIpv6AddressOutcomeCallable allocateIpv6AddressCallable(const Model::AllocateIpv6AddressRequest& request) const;
			AllocateIpv6InternetBandwidthOutcome allocateIpv6InternetBandwidth(const Model::AllocateIpv6InternetBandwidthRequest &request)const;
			void allocateIpv6InternetBandwidthAsync(const Model::AllocateIpv6InternetBandwidthRequest& request, const AllocateIpv6InternetBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateIpv6InternetBandwidthOutcomeCallable allocateIpv6InternetBandwidthCallable(const Model::AllocateIpv6InternetBandwidthRequest& request) const;
			AllocateVpcIpv6CidrOutcome allocateVpcIpv6Cidr(const Model::AllocateVpcIpv6CidrRequest &request)const;
			void allocateVpcIpv6CidrAsync(const Model::AllocateVpcIpv6CidrRequest& request, const AllocateVpcIpv6CidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateVpcIpv6CidrOutcomeCallable allocateVpcIpv6CidrCallable(const Model::AllocateVpcIpv6CidrRequest& request) const;
			ApplyPhysicalConnectionLOAOutcome applyPhysicalConnectionLOA(const Model::ApplyPhysicalConnectionLOARequest &request)const;
			void applyPhysicalConnectionLOAAsync(const Model::ApplyPhysicalConnectionLOARequest& request, const ApplyPhysicalConnectionLOAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyPhysicalConnectionLOAOutcomeCallable applyPhysicalConnectionLOACallable(const Model::ApplyPhysicalConnectionLOARequest& request) const;
			AssociateEipAddressOutcome associateEipAddress(const Model::AssociateEipAddressRequest &request)const;
			void associateEipAddressAsync(const Model::AssociateEipAddressRequest& request, const AssociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateEipAddressOutcomeCallable associateEipAddressCallable(const Model::AssociateEipAddressRequest& request) const;
			AssociateEipAddressBatchOutcome associateEipAddressBatch(const Model::AssociateEipAddressBatchRequest &request)const;
			void associateEipAddressBatchAsync(const Model::AssociateEipAddressBatchRequest& request, const AssociateEipAddressBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateEipAddressBatchOutcomeCallable associateEipAddressBatchCallable(const Model::AssociateEipAddressBatchRequest& request) const;
			AssociateHaVipOutcome associateHaVip(const Model::AssociateHaVipRequest &request)const;
			void associateHaVipAsync(const Model::AssociateHaVipRequest& request, const AssociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateHaVipOutcomeCallable associateHaVipCallable(const Model::AssociateHaVipRequest& request) const;
			AssociateNetworkAclOutcome associateNetworkAcl(const Model::AssociateNetworkAclRequest &request)const;
			void associateNetworkAclAsync(const Model::AssociateNetworkAclRequest& request, const AssociateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateNetworkAclOutcomeCallable associateNetworkAclCallable(const Model::AssociateNetworkAclRequest& request) const;
			AssociatePhysicalConnectionToVirtualBorderRouterOutcome associatePhysicalConnectionToVirtualBorderRouter(const Model::AssociatePhysicalConnectionToVirtualBorderRouterRequest &request)const;
			void associatePhysicalConnectionToVirtualBorderRouterAsync(const Model::AssociatePhysicalConnectionToVirtualBorderRouterRequest& request, const AssociatePhysicalConnectionToVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociatePhysicalConnectionToVirtualBorderRouterOutcomeCallable associatePhysicalConnectionToVirtualBorderRouterCallable(const Model::AssociatePhysicalConnectionToVirtualBorderRouterRequest& request) const;
			AssociateRouteTableOutcome associateRouteTable(const Model::AssociateRouteTableRequest &request)const;
			void associateRouteTableAsync(const Model::AssociateRouteTableRequest& request, const AssociateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateRouteTableOutcomeCallable associateRouteTableCallable(const Model::AssociateRouteTableRequest& request) const;
			AssociateRouteTableWithGatewayOutcome associateRouteTableWithGateway(const Model::AssociateRouteTableWithGatewayRequest &request)const;
			void associateRouteTableWithGatewayAsync(const Model::AssociateRouteTableWithGatewayRequest& request, const AssociateRouteTableWithGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateRouteTableWithGatewayOutcomeCallable associateRouteTableWithGatewayCallable(const Model::AssociateRouteTableWithGatewayRequest& request) const;
			AssociateRouteTablesWithVpcGatewayEndpointOutcome associateRouteTablesWithVpcGatewayEndpoint(const Model::AssociateRouteTablesWithVpcGatewayEndpointRequest &request)const;
			void associateRouteTablesWithVpcGatewayEndpointAsync(const Model::AssociateRouteTablesWithVpcGatewayEndpointRequest& request, const AssociateRouteTablesWithVpcGatewayEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateRouteTablesWithVpcGatewayEndpointOutcomeCallable associateRouteTablesWithVpcGatewayEndpointCallable(const Model::AssociateRouteTablesWithVpcGatewayEndpointRequest& request) const;
			AssociateVpcCidrBlockOutcome associateVpcCidrBlock(const Model::AssociateVpcCidrBlockRequest &request)const;
			void associateVpcCidrBlockAsync(const Model::AssociateVpcCidrBlockRequest& request, const AssociateVpcCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateVpcCidrBlockOutcomeCallable associateVpcCidrBlockCallable(const Model::AssociateVpcCidrBlockRequest& request) const;
			AssociateVpnGatewayWithCertificateOutcome associateVpnGatewayWithCertificate(const Model::AssociateVpnGatewayWithCertificateRequest &request)const;
			void associateVpnGatewayWithCertificateAsync(const Model::AssociateVpnGatewayWithCertificateRequest& request, const AssociateVpnGatewayWithCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateVpnGatewayWithCertificateOutcomeCallable associateVpnGatewayWithCertificateCallable(const Model::AssociateVpnGatewayWithCertificateRequest& request) const;
			AttachDhcpOptionsSetToVpcOutcome attachDhcpOptionsSetToVpc(const Model::AttachDhcpOptionsSetToVpcRequest &request)const;
			void attachDhcpOptionsSetToVpcAsync(const Model::AttachDhcpOptionsSetToVpcRequest& request, const AttachDhcpOptionsSetToVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDhcpOptionsSetToVpcOutcomeCallable attachDhcpOptionsSetToVpcCallable(const Model::AttachDhcpOptionsSetToVpcRequest& request) const;
			AttachVbrToVpconnOutcome attachVbrToVpconn(const Model::AttachVbrToVpconnRequest &request)const;
			void attachVbrToVpconnAsync(const Model::AttachVbrToVpconnRequest& request, const AttachVbrToVpconnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachVbrToVpconnOutcomeCallable attachVbrToVpconnCallable(const Model::AttachVbrToVpconnRequest& request) const;
			CancelCommonBandwidthPackageIpBandwidthOutcome cancelCommonBandwidthPackageIpBandwidth(const Model::CancelCommonBandwidthPackageIpBandwidthRequest &request)const;
			void cancelCommonBandwidthPackageIpBandwidthAsync(const Model::CancelCommonBandwidthPackageIpBandwidthRequest& request, const CancelCommonBandwidthPackageIpBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCommonBandwidthPackageIpBandwidthOutcomeCallable cancelCommonBandwidthPackageIpBandwidthCallable(const Model::CancelCommonBandwidthPackageIpBandwidthRequest& request) const;
			CancelPhysicalConnectionOutcome cancelPhysicalConnection(const Model::CancelPhysicalConnectionRequest &request)const;
			void cancelPhysicalConnectionAsync(const Model::CancelPhysicalConnectionRequest& request, const CancelPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelPhysicalConnectionOutcomeCallable cancelPhysicalConnectionCallable(const Model::CancelPhysicalConnectionRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CheckCanAllocateVpcPrivateIpAddressOutcome checkCanAllocateVpcPrivateIpAddress(const Model::CheckCanAllocateVpcPrivateIpAddressRequest &request)const;
			void checkCanAllocateVpcPrivateIpAddressAsync(const Model::CheckCanAllocateVpcPrivateIpAddressRequest& request, const CheckCanAllocateVpcPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCanAllocateVpcPrivateIpAddressOutcomeCallable checkCanAllocateVpcPrivateIpAddressCallable(const Model::CheckCanAllocateVpcPrivateIpAddressRequest& request) const;
			CheckVpnBgpEnabledOutcome checkVpnBgpEnabled(const Model::CheckVpnBgpEnabledRequest &request)const;
			void checkVpnBgpEnabledAsync(const Model::CheckVpnBgpEnabledRequest& request, const CheckVpnBgpEnabledAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckVpnBgpEnabledOutcomeCallable checkVpnBgpEnabledCallable(const Model::CheckVpnBgpEnabledRequest& request) const;
			CompletePhysicalConnectionLOAOutcome completePhysicalConnectionLOA(const Model::CompletePhysicalConnectionLOARequest &request)const;
			void completePhysicalConnectionLOAAsync(const Model::CompletePhysicalConnectionLOARequest& request, const CompletePhysicalConnectionLOAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompletePhysicalConnectionLOAOutcomeCallable completePhysicalConnectionLOACallable(const Model::CompletePhysicalConnectionLOARequest& request) const;
			ConfirmPhysicalConnectionOutcome confirmPhysicalConnection(const Model::ConfirmPhysicalConnectionRequest &request)const;
			void confirmPhysicalConnectionAsync(const Model::ConfirmPhysicalConnectionRequest& request, const ConfirmPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmPhysicalConnectionOutcomeCallable confirmPhysicalConnectionCallable(const Model::ConfirmPhysicalConnectionRequest& request) const;
			ConnectRouterInterfaceOutcome connectRouterInterface(const Model::ConnectRouterInterfaceRequest &request)const;
			void connectRouterInterfaceAsync(const Model::ConnectRouterInterfaceRequest& request, const ConnectRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConnectRouterInterfaceOutcomeCallable connectRouterInterfaceCallable(const Model::ConnectRouterInterfaceRequest& request) const;
			ConvertBandwidthPackageOutcome convertBandwidthPackage(const Model::ConvertBandwidthPackageRequest &request)const;
			void convertBandwidthPackageAsync(const Model::ConvertBandwidthPackageRequest& request, const ConvertBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertBandwidthPackageOutcomeCallable convertBandwidthPackageCallable(const Model::ConvertBandwidthPackageRequest& request) const;
			CopyNetworkAclEntriesOutcome copyNetworkAclEntries(const Model::CopyNetworkAclEntriesRequest &request)const;
			void copyNetworkAclEntriesAsync(const Model::CopyNetworkAclEntriesRequest& request, const CopyNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyNetworkAclEntriesOutcomeCallable copyNetworkAclEntriesCallable(const Model::CopyNetworkAclEntriesRequest& request) const;
			CreateBgpGroupOutcome createBgpGroup(const Model::CreateBgpGroupRequest &request)const;
			void createBgpGroupAsync(const Model::CreateBgpGroupRequest& request, const CreateBgpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBgpGroupOutcomeCallable createBgpGroupCallable(const Model::CreateBgpGroupRequest& request) const;
			CreateBgpPeerOutcome createBgpPeer(const Model::CreateBgpPeerRequest &request)const;
			void createBgpPeerAsync(const Model::CreateBgpPeerRequest& request, const CreateBgpPeerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBgpPeerOutcomeCallable createBgpPeerCallable(const Model::CreateBgpPeerRequest& request) const;
			CreateCommonBandwidthPackageOutcome createCommonBandwidthPackage(const Model::CreateCommonBandwidthPackageRequest &request)const;
			void createCommonBandwidthPackageAsync(const Model::CreateCommonBandwidthPackageRequest& request, const CreateCommonBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCommonBandwidthPackageOutcomeCallable createCommonBandwidthPackageCallable(const Model::CreateCommonBandwidthPackageRequest& request) const;
			CreateCustomerGatewayOutcome createCustomerGateway(const Model::CreateCustomerGatewayRequest &request)const;
			void createCustomerGatewayAsync(const Model::CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomerGatewayOutcomeCallable createCustomerGatewayCallable(const Model::CreateCustomerGatewayRequest& request) const;
			CreateDefaultVSwitchOutcome createDefaultVSwitch(const Model::CreateDefaultVSwitchRequest &request)const;
			void createDefaultVSwitchAsync(const Model::CreateDefaultVSwitchRequest& request, const CreateDefaultVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDefaultVSwitchOutcomeCallable createDefaultVSwitchCallable(const Model::CreateDefaultVSwitchRequest& request) const;
			CreateDefaultVpcOutcome createDefaultVpc(const Model::CreateDefaultVpcRequest &request)const;
			void createDefaultVpcAsync(const Model::CreateDefaultVpcRequest& request, const CreateDefaultVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDefaultVpcOutcomeCallable createDefaultVpcCallable(const Model::CreateDefaultVpcRequest& request) const;
			CreateDhcpOptionsSetOutcome createDhcpOptionsSet(const Model::CreateDhcpOptionsSetRequest &request)const;
			void createDhcpOptionsSetAsync(const Model::CreateDhcpOptionsSetRequest& request, const CreateDhcpOptionsSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDhcpOptionsSetOutcomeCallable createDhcpOptionsSetCallable(const Model::CreateDhcpOptionsSetRequest& request) const;
			CreateExpressCloudConnectionOutcome createExpressCloudConnection(const Model::CreateExpressCloudConnectionRequest &request)const;
			void createExpressCloudConnectionAsync(const Model::CreateExpressCloudConnectionRequest& request, const CreateExpressCloudConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExpressCloudConnectionOutcomeCallable createExpressCloudConnectionCallable(const Model::CreateExpressCloudConnectionRequest& request) const;
			CreateExpressConnectTrafficQosOutcome createExpressConnectTrafficQos(const Model::CreateExpressConnectTrafficQosRequest &request)const;
			void createExpressConnectTrafficQosAsync(const Model::CreateExpressConnectTrafficQosRequest& request, const CreateExpressConnectTrafficQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExpressConnectTrafficQosOutcomeCallable createExpressConnectTrafficQosCallable(const Model::CreateExpressConnectTrafficQosRequest& request) const;
			CreateExpressConnectTrafficQosQueueOutcome createExpressConnectTrafficQosQueue(const Model::CreateExpressConnectTrafficQosQueueRequest &request)const;
			void createExpressConnectTrafficQosQueueAsync(const Model::CreateExpressConnectTrafficQosQueueRequest& request, const CreateExpressConnectTrafficQosQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExpressConnectTrafficQosQueueOutcomeCallable createExpressConnectTrafficQosQueueCallable(const Model::CreateExpressConnectTrafficQosQueueRequest& request) const;
			CreateExpressConnectTrafficQosRuleOutcome createExpressConnectTrafficQosRule(const Model::CreateExpressConnectTrafficQosRuleRequest &request)const;
			void createExpressConnectTrafficQosRuleAsync(const Model::CreateExpressConnectTrafficQosRuleRequest& request, const CreateExpressConnectTrafficQosRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExpressConnectTrafficQosRuleOutcomeCallable createExpressConnectTrafficQosRuleCallable(const Model::CreateExpressConnectTrafficQosRuleRequest& request) const;
			CreateFailoverTestJobOutcome createFailoverTestJob(const Model::CreateFailoverTestJobRequest &request)const;
			void createFailoverTestJobAsync(const Model::CreateFailoverTestJobRequest& request, const CreateFailoverTestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFailoverTestJobOutcomeCallable createFailoverTestJobCallable(const Model::CreateFailoverTestJobRequest& request) const;
			CreateFlowLogOutcome createFlowLog(const Model::CreateFlowLogRequest &request)const;
			void createFlowLogAsync(const Model::CreateFlowLogRequest& request, const CreateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowLogOutcomeCallable createFlowLogCallable(const Model::CreateFlowLogRequest& request) const;
			CreateForwardEntryOutcome createForwardEntry(const Model::CreateForwardEntryRequest &request)const;
			void createForwardEntryAsync(const Model::CreateForwardEntryRequest& request, const CreateForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateForwardEntryOutcomeCallable createForwardEntryCallable(const Model::CreateForwardEntryRequest& request) const;
			CreateFullNatEntryOutcome createFullNatEntry(const Model::CreateFullNatEntryRequest &request)const;
			void createFullNatEntryAsync(const Model::CreateFullNatEntryRequest& request, const CreateFullNatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFullNatEntryOutcomeCallable createFullNatEntryCallable(const Model::CreateFullNatEntryRequest& request) const;
			CreateGlobalAccelerationInstanceOutcome createGlobalAccelerationInstance(const Model::CreateGlobalAccelerationInstanceRequest &request)const;
			void createGlobalAccelerationInstanceAsync(const Model::CreateGlobalAccelerationInstanceRequest& request, const CreateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGlobalAccelerationInstanceOutcomeCallable createGlobalAccelerationInstanceCallable(const Model::CreateGlobalAccelerationInstanceRequest& request) const;
			CreateHaVipOutcome createHaVip(const Model::CreateHaVipRequest &request)const;
			void createHaVipAsync(const Model::CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHaVipOutcomeCallable createHaVipCallable(const Model::CreateHaVipRequest& request) const;
			CreateHighReliablePhysicalConnectionOutcome createHighReliablePhysicalConnection(const Model::CreateHighReliablePhysicalConnectionRequest &request)const;
			void createHighReliablePhysicalConnectionAsync(const Model::CreateHighReliablePhysicalConnectionRequest& request, const CreateHighReliablePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHighReliablePhysicalConnectionOutcomeCallable createHighReliablePhysicalConnectionCallable(const Model::CreateHighReliablePhysicalConnectionRequest& request) const;
			CreateIPv6TranslatorOutcome createIPv6Translator(const Model::CreateIPv6TranslatorRequest &request)const;
			void createIPv6TranslatorAsync(const Model::CreateIPv6TranslatorRequest& request, const CreateIPv6TranslatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIPv6TranslatorOutcomeCallable createIPv6TranslatorCallable(const Model::CreateIPv6TranslatorRequest& request) const;
			CreateIPv6TranslatorAclListOutcome createIPv6TranslatorAclList(const Model::CreateIPv6TranslatorAclListRequest &request)const;
			void createIPv6TranslatorAclListAsync(const Model::CreateIPv6TranslatorAclListRequest& request, const CreateIPv6TranslatorAclListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIPv6TranslatorAclListOutcomeCallable createIPv6TranslatorAclListCallable(const Model::CreateIPv6TranslatorAclListRequest& request) const;
			CreateIPv6TranslatorEntryOutcome createIPv6TranslatorEntry(const Model::CreateIPv6TranslatorEntryRequest &request)const;
			void createIPv6TranslatorEntryAsync(const Model::CreateIPv6TranslatorEntryRequest& request, const CreateIPv6TranslatorEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIPv6TranslatorEntryOutcomeCallable createIPv6TranslatorEntryCallable(const Model::CreateIPv6TranslatorEntryRequest& request) const;
			CreateIpsecServerOutcome createIpsecServer(const Model::CreateIpsecServerRequest &request)const;
			void createIpsecServerAsync(const Model::CreateIpsecServerRequest& request, const CreateIpsecServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIpsecServerOutcomeCallable createIpsecServerCallable(const Model::CreateIpsecServerRequest& request) const;
			CreateIpv4GatewayOutcome createIpv4Gateway(const Model::CreateIpv4GatewayRequest &request)const;
			void createIpv4GatewayAsync(const Model::CreateIpv4GatewayRequest& request, const CreateIpv4GatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIpv4GatewayOutcomeCallable createIpv4GatewayCallable(const Model::CreateIpv4GatewayRequest& request) const;
			CreateIpv6EgressOnlyRuleOutcome createIpv6EgressOnlyRule(const Model::CreateIpv6EgressOnlyRuleRequest &request)const;
			void createIpv6EgressOnlyRuleAsync(const Model::CreateIpv6EgressOnlyRuleRequest& request, const CreateIpv6EgressOnlyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIpv6EgressOnlyRuleOutcomeCallable createIpv6EgressOnlyRuleCallable(const Model::CreateIpv6EgressOnlyRuleRequest& request) const;
			CreateIpv6GatewayOutcome createIpv6Gateway(const Model::CreateIpv6GatewayRequest &request)const;
			void createIpv6GatewayAsync(const Model::CreateIpv6GatewayRequest& request, const CreateIpv6GatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIpv6GatewayOutcomeCallable createIpv6GatewayCallable(const Model::CreateIpv6GatewayRequest& request) const;
			CreateNatGatewayOutcome createNatGateway(const Model::CreateNatGatewayRequest &request)const;
			void createNatGatewayAsync(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNatGatewayOutcomeCallable createNatGatewayCallable(const Model::CreateNatGatewayRequest& request) const;
			CreateNatIpOutcome createNatIp(const Model::CreateNatIpRequest &request)const;
			void createNatIpAsync(const Model::CreateNatIpRequest& request, const CreateNatIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNatIpOutcomeCallable createNatIpCallable(const Model::CreateNatIpRequest& request) const;
			CreateNatIpCidrOutcome createNatIpCidr(const Model::CreateNatIpCidrRequest &request)const;
			void createNatIpCidrAsync(const Model::CreateNatIpCidrRequest& request, const CreateNatIpCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNatIpCidrOutcomeCallable createNatIpCidrCallable(const Model::CreateNatIpCidrRequest& request) const;
			CreateNetworkAclOutcome createNetworkAcl(const Model::CreateNetworkAclRequest &request)const;
			void createNetworkAclAsync(const Model::CreateNetworkAclRequest& request, const CreateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkAclOutcomeCallable createNetworkAclCallable(const Model::CreateNetworkAclRequest& request) const;
			CreatePhysicalConnectionOutcome createPhysicalConnection(const Model::CreatePhysicalConnectionRequest &request)const;
			void createPhysicalConnectionAsync(const Model::CreatePhysicalConnectionRequest& request, const CreatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePhysicalConnectionOutcomeCallable createPhysicalConnectionCallable(const Model::CreatePhysicalConnectionRequest& request) const;
			CreatePhysicalConnectionOccupancyOrderOutcome createPhysicalConnectionOccupancyOrder(const Model::CreatePhysicalConnectionOccupancyOrderRequest &request)const;
			void createPhysicalConnectionOccupancyOrderAsync(const Model::CreatePhysicalConnectionOccupancyOrderRequest& request, const CreatePhysicalConnectionOccupancyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePhysicalConnectionOccupancyOrderOutcomeCallable createPhysicalConnectionOccupancyOrderCallable(const Model::CreatePhysicalConnectionOccupancyOrderRequest& request) const;
			CreatePhysicalConnectionSetupOrderOutcome createPhysicalConnectionSetupOrder(const Model::CreatePhysicalConnectionSetupOrderRequest &request)const;
			void createPhysicalConnectionSetupOrderAsync(const Model::CreatePhysicalConnectionSetupOrderRequest& request, const CreatePhysicalConnectionSetupOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePhysicalConnectionSetupOrderOutcomeCallable createPhysicalConnectionSetupOrderCallable(const Model::CreatePhysicalConnectionSetupOrderRequest& request) const;
			CreatePublicIpAddressPoolOutcome createPublicIpAddressPool(const Model::CreatePublicIpAddressPoolRequest &request)const;
			void createPublicIpAddressPoolAsync(const Model::CreatePublicIpAddressPoolRequest& request, const CreatePublicIpAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePublicIpAddressPoolOutcomeCallable createPublicIpAddressPoolCallable(const Model::CreatePublicIpAddressPoolRequest& request) const;
			CreateRouteEntriesOutcome createRouteEntries(const Model::CreateRouteEntriesRequest &request)const;
			void createRouteEntriesAsync(const Model::CreateRouteEntriesRequest& request, const CreateRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRouteEntriesOutcomeCallable createRouteEntriesCallable(const Model::CreateRouteEntriesRequest& request) const;
			CreateRouteEntryOutcome createRouteEntry(const Model::CreateRouteEntryRequest &request)const;
			void createRouteEntryAsync(const Model::CreateRouteEntryRequest& request, const CreateRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRouteEntryOutcomeCallable createRouteEntryCallable(const Model::CreateRouteEntryRequest& request) const;
			CreateRouteTableOutcome createRouteTable(const Model::CreateRouteTableRequest &request)const;
			void createRouteTableAsync(const Model::CreateRouteTableRequest& request, const CreateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRouteTableOutcomeCallable createRouteTableCallable(const Model::CreateRouteTableRequest& request) const;
			CreateRouterInterfaceOutcome createRouterInterface(const Model::CreateRouterInterfaceRequest &request)const;
			void createRouterInterfaceAsync(const Model::CreateRouterInterfaceRequest& request, const CreateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRouterInterfaceOutcomeCallable createRouterInterfaceCallable(const Model::CreateRouterInterfaceRequest& request) const;
			CreateSnatEntryOutcome createSnatEntry(const Model::CreateSnatEntryRequest &request)const;
			void createSnatEntryAsync(const Model::CreateSnatEntryRequest& request, const CreateSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnatEntryOutcomeCallable createSnatEntryCallable(const Model::CreateSnatEntryRequest& request) const;
			CreateSslVpnClientCertOutcome createSslVpnClientCert(const Model::CreateSslVpnClientCertRequest &request)const;
			void createSslVpnClientCertAsync(const Model::CreateSslVpnClientCertRequest& request, const CreateSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSslVpnClientCertOutcomeCallable createSslVpnClientCertCallable(const Model::CreateSslVpnClientCertRequest& request) const;
			CreateSslVpnServerOutcome createSslVpnServer(const Model::CreateSslVpnServerRequest &request)const;
			void createSslVpnServerAsync(const Model::CreateSslVpnServerRequest& request, const CreateSslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSslVpnServerOutcomeCallable createSslVpnServerCallable(const Model::CreateSslVpnServerRequest& request) const;
			CreateTrafficMirrorFilterOutcome createTrafficMirrorFilter(const Model::CreateTrafficMirrorFilterRequest &request)const;
			void createTrafficMirrorFilterAsync(const Model::CreateTrafficMirrorFilterRequest& request, const CreateTrafficMirrorFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrafficMirrorFilterOutcomeCallable createTrafficMirrorFilterCallable(const Model::CreateTrafficMirrorFilterRequest& request) const;
			CreateTrafficMirrorFilterRulesOutcome createTrafficMirrorFilterRules(const Model::CreateTrafficMirrorFilterRulesRequest &request)const;
			void createTrafficMirrorFilterRulesAsync(const Model::CreateTrafficMirrorFilterRulesRequest& request, const CreateTrafficMirrorFilterRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrafficMirrorFilterRulesOutcomeCallable createTrafficMirrorFilterRulesCallable(const Model::CreateTrafficMirrorFilterRulesRequest& request) const;
			CreateTrafficMirrorSessionOutcome createTrafficMirrorSession(const Model::CreateTrafficMirrorSessionRequest &request)const;
			void createTrafficMirrorSessionAsync(const Model::CreateTrafficMirrorSessionRequest& request, const CreateTrafficMirrorSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrafficMirrorSessionOutcomeCallable createTrafficMirrorSessionCallable(const Model::CreateTrafficMirrorSessionRequest& request) const;
			CreateVSwitchOutcome createVSwitch(const Model::CreateVSwitchRequest &request)const;
			void createVSwitchAsync(const Model::CreateVSwitchRequest& request, const CreateVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVSwitchOutcomeCallable createVSwitchCallable(const Model::CreateVSwitchRequest& request) const;
			CreateVSwitchCidrReservationOutcome createVSwitchCidrReservation(const Model::CreateVSwitchCidrReservationRequest &request)const;
			void createVSwitchCidrReservationAsync(const Model::CreateVSwitchCidrReservationRequest& request, const CreateVSwitchCidrReservationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVSwitchCidrReservationOutcomeCallable createVSwitchCidrReservationCallable(const Model::CreateVSwitchCidrReservationRequest& request) const;
			CreateVbrHaOutcome createVbrHa(const Model::CreateVbrHaRequest &request)const;
			void createVbrHaAsync(const Model::CreateVbrHaRequest& request, const CreateVbrHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVbrHaOutcomeCallable createVbrHaCallable(const Model::CreateVbrHaRequest& request) const;
			CreateVcoRouteEntryOutcome createVcoRouteEntry(const Model::CreateVcoRouteEntryRequest &request)const;
			void createVcoRouteEntryAsync(const Model::CreateVcoRouteEntryRequest& request, const CreateVcoRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVcoRouteEntryOutcomeCallable createVcoRouteEntryCallable(const Model::CreateVcoRouteEntryRequest& request) const;
			CreateVirtualBorderRouterOutcome createVirtualBorderRouter(const Model::CreateVirtualBorderRouterRequest &request)const;
			void createVirtualBorderRouterAsync(const Model::CreateVirtualBorderRouterRequest& request, const CreateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVirtualBorderRouterOutcomeCallable createVirtualBorderRouterCallable(const Model::CreateVirtualBorderRouterRequest& request) const;
			CreateVirtualPhysicalConnectionOutcome createVirtualPhysicalConnection(const Model::CreateVirtualPhysicalConnectionRequest &request)const;
			void createVirtualPhysicalConnectionAsync(const Model::CreateVirtualPhysicalConnectionRequest& request, const CreateVirtualPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVirtualPhysicalConnectionOutcomeCallable createVirtualPhysicalConnectionCallable(const Model::CreateVirtualPhysicalConnectionRequest& request) const;
			CreateVpcOutcome createVpc(const Model::CreateVpcRequest &request)const;
			void createVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpcOutcomeCallable createVpcCallable(const Model::CreateVpcRequest& request) const;
			CreateVpcGatewayEndpointOutcome createVpcGatewayEndpoint(const Model::CreateVpcGatewayEndpointRequest &request)const;
			void createVpcGatewayEndpointAsync(const Model::CreateVpcGatewayEndpointRequest& request, const CreateVpcGatewayEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpcGatewayEndpointOutcomeCallable createVpcGatewayEndpointCallable(const Model::CreateVpcGatewayEndpointRequest& request) const;
			CreateVpcPrefixListOutcome createVpcPrefixList(const Model::CreateVpcPrefixListRequest &request)const;
			void createVpcPrefixListAsync(const Model::CreateVpcPrefixListRequest& request, const CreateVpcPrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpcPrefixListOutcomeCallable createVpcPrefixListCallable(const Model::CreateVpcPrefixListRequest& request) const;
			CreateVpconnFromVbrOutcome createVpconnFromVbr(const Model::CreateVpconnFromVbrRequest &request)const;
			void createVpconnFromVbrAsync(const Model::CreateVpconnFromVbrRequest& request, const CreateVpconnFromVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpconnFromVbrOutcomeCallable createVpconnFromVbrCallable(const Model::CreateVpconnFromVbrRequest& request) const;
			CreateVpnAttachmentOutcome createVpnAttachment(const Model::CreateVpnAttachmentRequest &request)const;
			void createVpnAttachmentAsync(const Model::CreateVpnAttachmentRequest& request, const CreateVpnAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpnAttachmentOutcomeCallable createVpnAttachmentCallable(const Model::CreateVpnAttachmentRequest& request) const;
			CreateVpnConnectionOutcome createVpnConnection(const Model::CreateVpnConnectionRequest &request)const;
			void createVpnConnectionAsync(const Model::CreateVpnConnectionRequest& request, const CreateVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpnConnectionOutcomeCallable createVpnConnectionCallable(const Model::CreateVpnConnectionRequest& request) const;
			CreateVpnGatewayOutcome createVpnGateway(const Model::CreateVpnGatewayRequest &request)const;
			void createVpnGatewayAsync(const Model::CreateVpnGatewayRequest& request, const CreateVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpnGatewayOutcomeCallable createVpnGatewayCallable(const Model::CreateVpnGatewayRequest& request) const;
			CreateVpnPbrRouteEntryOutcome createVpnPbrRouteEntry(const Model::CreateVpnPbrRouteEntryRequest &request)const;
			void createVpnPbrRouteEntryAsync(const Model::CreateVpnPbrRouteEntryRequest& request, const CreateVpnPbrRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpnPbrRouteEntryOutcomeCallable createVpnPbrRouteEntryCallable(const Model::CreateVpnPbrRouteEntryRequest& request) const;
			CreateVpnRouteEntryOutcome createVpnRouteEntry(const Model::CreateVpnRouteEntryRequest &request)const;
			void createVpnRouteEntryAsync(const Model::CreateVpnRouteEntryRequest& request, const CreateVpnRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpnRouteEntryOutcomeCallable createVpnRouteEntryCallable(const Model::CreateVpnRouteEntryRequest& request) const;
			DeactivateRouterInterfaceOutcome deactivateRouterInterface(const Model::DeactivateRouterInterfaceRequest &request)const;
			void deactivateRouterInterfaceAsync(const Model::DeactivateRouterInterfaceRequest& request, const DeactivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactivateRouterInterfaceOutcomeCallable deactivateRouterInterfaceCallable(const Model::DeactivateRouterInterfaceRequest& request) const;
			DeactiveFlowLogOutcome deactiveFlowLog(const Model::DeactiveFlowLogRequest &request)const;
			void deactiveFlowLogAsync(const Model::DeactiveFlowLogRequest& request, const DeactiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactiveFlowLogOutcomeCallable deactiveFlowLogCallable(const Model::DeactiveFlowLogRequest& request) const;
			DeleteBgpGroupOutcome deleteBgpGroup(const Model::DeleteBgpGroupRequest &request)const;
			void deleteBgpGroupAsync(const Model::DeleteBgpGroupRequest& request, const DeleteBgpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBgpGroupOutcomeCallable deleteBgpGroupCallable(const Model::DeleteBgpGroupRequest& request) const;
			DeleteBgpNetworkOutcome deleteBgpNetwork(const Model::DeleteBgpNetworkRequest &request)const;
			void deleteBgpNetworkAsync(const Model::DeleteBgpNetworkRequest& request, const DeleteBgpNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBgpNetworkOutcomeCallable deleteBgpNetworkCallable(const Model::DeleteBgpNetworkRequest& request) const;
			DeleteBgpPeerOutcome deleteBgpPeer(const Model::DeleteBgpPeerRequest &request)const;
			void deleteBgpPeerAsync(const Model::DeleteBgpPeerRequest& request, const DeleteBgpPeerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBgpPeerOutcomeCallable deleteBgpPeerCallable(const Model::DeleteBgpPeerRequest& request) const;
			DeleteCommonBandwidthPackageOutcome deleteCommonBandwidthPackage(const Model::DeleteCommonBandwidthPackageRequest &request)const;
			void deleteCommonBandwidthPackageAsync(const Model::DeleteCommonBandwidthPackageRequest& request, const DeleteCommonBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCommonBandwidthPackageOutcomeCallable deleteCommonBandwidthPackageCallable(const Model::DeleteCommonBandwidthPackageRequest& request) const;
			DeleteCustomerGatewayOutcome deleteCustomerGateway(const Model::DeleteCustomerGatewayRequest &request)const;
			void deleteCustomerGatewayAsync(const Model::DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomerGatewayOutcomeCallable deleteCustomerGatewayCallable(const Model::DeleteCustomerGatewayRequest& request) const;
			DeleteDhcpOptionsSetOutcome deleteDhcpOptionsSet(const Model::DeleteDhcpOptionsSetRequest &request)const;
			void deleteDhcpOptionsSetAsync(const Model::DeleteDhcpOptionsSetRequest& request, const DeleteDhcpOptionsSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDhcpOptionsSetOutcomeCallable deleteDhcpOptionsSetCallable(const Model::DeleteDhcpOptionsSetRequest& request) const;
			DeleteExpressConnectTrafficQosOutcome deleteExpressConnectTrafficQos(const Model::DeleteExpressConnectTrafficQosRequest &request)const;
			void deleteExpressConnectTrafficQosAsync(const Model::DeleteExpressConnectTrafficQosRequest& request, const DeleteExpressConnectTrafficQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExpressConnectTrafficQosOutcomeCallable deleteExpressConnectTrafficQosCallable(const Model::DeleteExpressConnectTrafficQosRequest& request) const;
			DeleteExpressConnectTrafficQosQueueOutcome deleteExpressConnectTrafficQosQueue(const Model::DeleteExpressConnectTrafficQosQueueRequest &request)const;
			void deleteExpressConnectTrafficQosQueueAsync(const Model::DeleteExpressConnectTrafficQosQueueRequest& request, const DeleteExpressConnectTrafficQosQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExpressConnectTrafficQosQueueOutcomeCallable deleteExpressConnectTrafficQosQueueCallable(const Model::DeleteExpressConnectTrafficQosQueueRequest& request) const;
			DeleteExpressConnectTrafficQosRuleOutcome deleteExpressConnectTrafficQosRule(const Model::DeleteExpressConnectTrafficQosRuleRequest &request)const;
			void deleteExpressConnectTrafficQosRuleAsync(const Model::DeleteExpressConnectTrafficQosRuleRequest& request, const DeleteExpressConnectTrafficQosRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExpressConnectTrafficQosRuleOutcomeCallable deleteExpressConnectTrafficQosRuleCallable(const Model::DeleteExpressConnectTrafficQosRuleRequest& request) const;
			DeleteFailoverTestJobOutcome deleteFailoverTestJob(const Model::DeleteFailoverTestJobRequest &request)const;
			void deleteFailoverTestJobAsync(const Model::DeleteFailoverTestJobRequest& request, const DeleteFailoverTestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFailoverTestJobOutcomeCallable deleteFailoverTestJobCallable(const Model::DeleteFailoverTestJobRequest& request) const;
			DeleteFlowLogOutcome deleteFlowLog(const Model::DeleteFlowLogRequest &request)const;
			void deleteFlowLogAsync(const Model::DeleteFlowLogRequest& request, const DeleteFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowLogOutcomeCallable deleteFlowLogCallable(const Model::DeleteFlowLogRequest& request) const;
			DeleteForwardEntryOutcome deleteForwardEntry(const Model::DeleteForwardEntryRequest &request)const;
			void deleteForwardEntryAsync(const Model::DeleteForwardEntryRequest& request, const DeleteForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteForwardEntryOutcomeCallable deleteForwardEntryCallable(const Model::DeleteForwardEntryRequest& request) const;
			DeleteFullNatEntryOutcome deleteFullNatEntry(const Model::DeleteFullNatEntryRequest &request)const;
			void deleteFullNatEntryAsync(const Model::DeleteFullNatEntryRequest& request, const DeleteFullNatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFullNatEntryOutcomeCallable deleteFullNatEntryCallable(const Model::DeleteFullNatEntryRequest& request) const;
			DeleteGlobalAccelerationInstanceOutcome deleteGlobalAccelerationInstance(const Model::DeleteGlobalAccelerationInstanceRequest &request)const;
			void deleteGlobalAccelerationInstanceAsync(const Model::DeleteGlobalAccelerationInstanceRequest& request, const DeleteGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGlobalAccelerationInstanceOutcomeCallable deleteGlobalAccelerationInstanceCallable(const Model::DeleteGlobalAccelerationInstanceRequest& request) const;
			DeleteHaVipOutcome deleteHaVip(const Model::DeleteHaVipRequest &request)const;
			void deleteHaVipAsync(const Model::DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHaVipOutcomeCallable deleteHaVipCallable(const Model::DeleteHaVipRequest& request) const;
			DeleteIPv6TranslatorOutcome deleteIPv6Translator(const Model::DeleteIPv6TranslatorRequest &request)const;
			void deleteIPv6TranslatorAsync(const Model::DeleteIPv6TranslatorRequest& request, const DeleteIPv6TranslatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIPv6TranslatorOutcomeCallable deleteIPv6TranslatorCallable(const Model::DeleteIPv6TranslatorRequest& request) const;
			DeleteIPv6TranslatorAclListOutcome deleteIPv6TranslatorAclList(const Model::DeleteIPv6TranslatorAclListRequest &request)const;
			void deleteIPv6TranslatorAclListAsync(const Model::DeleteIPv6TranslatorAclListRequest& request, const DeleteIPv6TranslatorAclListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIPv6TranslatorAclListOutcomeCallable deleteIPv6TranslatorAclListCallable(const Model::DeleteIPv6TranslatorAclListRequest& request) const;
			DeleteIPv6TranslatorEntryOutcome deleteIPv6TranslatorEntry(const Model::DeleteIPv6TranslatorEntryRequest &request)const;
			void deleteIPv6TranslatorEntryAsync(const Model::DeleteIPv6TranslatorEntryRequest& request, const DeleteIPv6TranslatorEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIPv6TranslatorEntryOutcomeCallable deleteIPv6TranslatorEntryCallable(const Model::DeleteIPv6TranslatorEntryRequest& request) const;
			DeleteIpsecServerOutcome deleteIpsecServer(const Model::DeleteIpsecServerRequest &request)const;
			void deleteIpsecServerAsync(const Model::DeleteIpsecServerRequest& request, const DeleteIpsecServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpsecServerOutcomeCallable deleteIpsecServerCallable(const Model::DeleteIpsecServerRequest& request) const;
			DeleteIpv4GatewayOutcome deleteIpv4Gateway(const Model::DeleteIpv4GatewayRequest &request)const;
			void deleteIpv4GatewayAsync(const Model::DeleteIpv4GatewayRequest& request, const DeleteIpv4GatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpv4GatewayOutcomeCallable deleteIpv4GatewayCallable(const Model::DeleteIpv4GatewayRequest& request) const;
			DeleteIpv6EgressOnlyRuleOutcome deleteIpv6EgressOnlyRule(const Model::DeleteIpv6EgressOnlyRuleRequest &request)const;
			void deleteIpv6EgressOnlyRuleAsync(const Model::DeleteIpv6EgressOnlyRuleRequest& request, const DeleteIpv6EgressOnlyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpv6EgressOnlyRuleOutcomeCallable deleteIpv6EgressOnlyRuleCallable(const Model::DeleteIpv6EgressOnlyRuleRequest& request) const;
			DeleteIpv6GatewayOutcome deleteIpv6Gateway(const Model::DeleteIpv6GatewayRequest &request)const;
			void deleteIpv6GatewayAsync(const Model::DeleteIpv6GatewayRequest& request, const DeleteIpv6GatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpv6GatewayOutcomeCallable deleteIpv6GatewayCallable(const Model::DeleteIpv6GatewayRequest& request) const;
			DeleteIpv6InternetBandwidthOutcome deleteIpv6InternetBandwidth(const Model::DeleteIpv6InternetBandwidthRequest &request)const;
			void deleteIpv6InternetBandwidthAsync(const Model::DeleteIpv6InternetBandwidthRequest& request, const DeleteIpv6InternetBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpv6InternetBandwidthOutcomeCallable deleteIpv6InternetBandwidthCallable(const Model::DeleteIpv6InternetBandwidthRequest& request) const;
			DeleteNatGatewayOutcome deleteNatGateway(const Model::DeleteNatGatewayRequest &request)const;
			void deleteNatGatewayAsync(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNatGatewayOutcomeCallable deleteNatGatewayCallable(const Model::DeleteNatGatewayRequest& request) const;
			DeleteNatIpOutcome deleteNatIp(const Model::DeleteNatIpRequest &request)const;
			void deleteNatIpAsync(const Model::DeleteNatIpRequest& request, const DeleteNatIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNatIpOutcomeCallable deleteNatIpCallable(const Model::DeleteNatIpRequest& request) const;
			DeleteNatIpCidrOutcome deleteNatIpCidr(const Model::DeleteNatIpCidrRequest &request)const;
			void deleteNatIpCidrAsync(const Model::DeleteNatIpCidrRequest& request, const DeleteNatIpCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNatIpCidrOutcomeCallable deleteNatIpCidrCallable(const Model::DeleteNatIpCidrRequest& request) const;
			DeleteNetworkAclOutcome deleteNetworkAcl(const Model::DeleteNetworkAclRequest &request)const;
			void deleteNetworkAclAsync(const Model::DeleteNetworkAclRequest& request, const DeleteNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkAclOutcomeCallable deleteNetworkAclCallable(const Model::DeleteNetworkAclRequest& request) const;
			DeletePhysicalConnectionOutcome deletePhysicalConnection(const Model::DeletePhysicalConnectionRequest &request)const;
			void deletePhysicalConnectionAsync(const Model::DeletePhysicalConnectionRequest& request, const DeletePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePhysicalConnectionOutcomeCallable deletePhysicalConnectionCallable(const Model::DeletePhysicalConnectionRequest& request) const;
			DeletePublicIpAddressPoolOutcome deletePublicIpAddressPool(const Model::DeletePublicIpAddressPoolRequest &request)const;
			void deletePublicIpAddressPoolAsync(const Model::DeletePublicIpAddressPoolRequest& request, const DeletePublicIpAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePublicIpAddressPoolOutcomeCallable deletePublicIpAddressPoolCallable(const Model::DeletePublicIpAddressPoolRequest& request) const;
			DeletePublicIpAddressPoolCidrBlockOutcome deletePublicIpAddressPoolCidrBlock(const Model::DeletePublicIpAddressPoolCidrBlockRequest &request)const;
			void deletePublicIpAddressPoolCidrBlockAsync(const Model::DeletePublicIpAddressPoolCidrBlockRequest& request, const DeletePublicIpAddressPoolCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePublicIpAddressPoolCidrBlockOutcomeCallable deletePublicIpAddressPoolCidrBlockCallable(const Model::DeletePublicIpAddressPoolCidrBlockRequest& request) const;
			DeleteRouteEntriesOutcome deleteRouteEntries(const Model::DeleteRouteEntriesRequest &request)const;
			void deleteRouteEntriesAsync(const Model::DeleteRouteEntriesRequest& request, const DeleteRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouteEntriesOutcomeCallable deleteRouteEntriesCallable(const Model::DeleteRouteEntriesRequest& request) const;
			DeleteRouteEntryOutcome deleteRouteEntry(const Model::DeleteRouteEntryRequest &request)const;
			void deleteRouteEntryAsync(const Model::DeleteRouteEntryRequest& request, const DeleteRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouteEntryOutcomeCallable deleteRouteEntryCallable(const Model::DeleteRouteEntryRequest& request) const;
			DeleteRouteTableOutcome deleteRouteTable(const Model::DeleteRouteTableRequest &request)const;
			void deleteRouteTableAsync(const Model::DeleteRouteTableRequest& request, const DeleteRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouteTableOutcomeCallable deleteRouteTableCallable(const Model::DeleteRouteTableRequest& request) const;
			DeleteRouterInterfaceOutcome deleteRouterInterface(const Model::DeleteRouterInterfaceRequest &request)const;
			void deleteRouterInterfaceAsync(const Model::DeleteRouterInterfaceRequest& request, const DeleteRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouterInterfaceOutcomeCallable deleteRouterInterfaceCallable(const Model::DeleteRouterInterfaceRequest& request) const;
			DeleteSnatEntryOutcome deleteSnatEntry(const Model::DeleteSnatEntryRequest &request)const;
			void deleteSnatEntryAsync(const Model::DeleteSnatEntryRequest& request, const DeleteSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnatEntryOutcomeCallable deleteSnatEntryCallable(const Model::DeleteSnatEntryRequest& request) const;
			DeleteSslVpnClientCertOutcome deleteSslVpnClientCert(const Model::DeleteSslVpnClientCertRequest &request)const;
			void deleteSslVpnClientCertAsync(const Model::DeleteSslVpnClientCertRequest& request, const DeleteSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSslVpnClientCertOutcomeCallable deleteSslVpnClientCertCallable(const Model::DeleteSslVpnClientCertRequest& request) const;
			DeleteSslVpnServerOutcome deleteSslVpnServer(const Model::DeleteSslVpnServerRequest &request)const;
			void deleteSslVpnServerAsync(const Model::DeleteSslVpnServerRequest& request, const DeleteSslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSslVpnServerOutcomeCallable deleteSslVpnServerCallable(const Model::DeleteSslVpnServerRequest& request) const;
			DeleteTrafficMirrorFilterOutcome deleteTrafficMirrorFilter(const Model::DeleteTrafficMirrorFilterRequest &request)const;
			void deleteTrafficMirrorFilterAsync(const Model::DeleteTrafficMirrorFilterRequest& request, const DeleteTrafficMirrorFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrafficMirrorFilterOutcomeCallable deleteTrafficMirrorFilterCallable(const Model::DeleteTrafficMirrorFilterRequest& request) const;
			DeleteTrafficMirrorFilterRulesOutcome deleteTrafficMirrorFilterRules(const Model::DeleteTrafficMirrorFilterRulesRequest &request)const;
			void deleteTrafficMirrorFilterRulesAsync(const Model::DeleteTrafficMirrorFilterRulesRequest& request, const DeleteTrafficMirrorFilterRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrafficMirrorFilterRulesOutcomeCallable deleteTrafficMirrorFilterRulesCallable(const Model::DeleteTrafficMirrorFilterRulesRequest& request) const;
			DeleteTrafficMirrorSessionOutcome deleteTrafficMirrorSession(const Model::DeleteTrafficMirrorSessionRequest &request)const;
			void deleteTrafficMirrorSessionAsync(const Model::DeleteTrafficMirrorSessionRequest& request, const DeleteTrafficMirrorSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrafficMirrorSessionOutcomeCallable deleteTrafficMirrorSessionCallable(const Model::DeleteTrafficMirrorSessionRequest& request) const;
			DeleteVSwitchOutcome deleteVSwitch(const Model::DeleteVSwitchRequest &request)const;
			void deleteVSwitchAsync(const Model::DeleteVSwitchRequest& request, const DeleteVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVSwitchOutcomeCallable deleteVSwitchCallable(const Model::DeleteVSwitchRequest& request) const;
			DeleteVSwitchCidrReservationOutcome deleteVSwitchCidrReservation(const Model::DeleteVSwitchCidrReservationRequest &request)const;
			void deleteVSwitchCidrReservationAsync(const Model::DeleteVSwitchCidrReservationRequest& request, const DeleteVSwitchCidrReservationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVSwitchCidrReservationOutcomeCallable deleteVSwitchCidrReservationCallable(const Model::DeleteVSwitchCidrReservationRequest& request) const;
			DeleteVbrHaOutcome deleteVbrHa(const Model::DeleteVbrHaRequest &request)const;
			void deleteVbrHaAsync(const Model::DeleteVbrHaRequest& request, const DeleteVbrHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVbrHaOutcomeCallable deleteVbrHaCallable(const Model::DeleteVbrHaRequest& request) const;
			DeleteVcoRouteEntryOutcome deleteVcoRouteEntry(const Model::DeleteVcoRouteEntryRequest &request)const;
			void deleteVcoRouteEntryAsync(const Model::DeleteVcoRouteEntryRequest& request, const DeleteVcoRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVcoRouteEntryOutcomeCallable deleteVcoRouteEntryCallable(const Model::DeleteVcoRouteEntryRequest& request) const;
			DeleteVirtualBorderRouterOutcome deleteVirtualBorderRouter(const Model::DeleteVirtualBorderRouterRequest &request)const;
			void deleteVirtualBorderRouterAsync(const Model::DeleteVirtualBorderRouterRequest& request, const DeleteVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVirtualBorderRouterOutcomeCallable deleteVirtualBorderRouterCallable(const Model::DeleteVirtualBorderRouterRequest& request) const;
			DeleteVpcOutcome deleteVpc(const Model::DeleteVpcRequest &request)const;
			void deleteVpcAsync(const Model::DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpcOutcomeCallable deleteVpcCallable(const Model::DeleteVpcRequest& request) const;
			DeleteVpcGatewayEndpointOutcome deleteVpcGatewayEndpoint(const Model::DeleteVpcGatewayEndpointRequest &request)const;
			void deleteVpcGatewayEndpointAsync(const Model::DeleteVpcGatewayEndpointRequest& request, const DeleteVpcGatewayEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpcGatewayEndpointOutcomeCallable deleteVpcGatewayEndpointCallable(const Model::DeleteVpcGatewayEndpointRequest& request) const;
			DeleteVpcPrefixListOutcome deleteVpcPrefixList(const Model::DeleteVpcPrefixListRequest &request)const;
			void deleteVpcPrefixListAsync(const Model::DeleteVpcPrefixListRequest& request, const DeleteVpcPrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpcPrefixListOutcomeCallable deleteVpcPrefixListCallable(const Model::DeleteVpcPrefixListRequest& request) const;
			DeleteVpnAttachmentOutcome deleteVpnAttachment(const Model::DeleteVpnAttachmentRequest &request)const;
			void deleteVpnAttachmentAsync(const Model::DeleteVpnAttachmentRequest& request, const DeleteVpnAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpnAttachmentOutcomeCallable deleteVpnAttachmentCallable(const Model::DeleteVpnAttachmentRequest& request) const;
			DeleteVpnConnectionOutcome deleteVpnConnection(const Model::DeleteVpnConnectionRequest &request)const;
			void deleteVpnConnectionAsync(const Model::DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpnConnectionOutcomeCallable deleteVpnConnectionCallable(const Model::DeleteVpnConnectionRequest& request) const;
			DeleteVpnGatewayOutcome deleteVpnGateway(const Model::DeleteVpnGatewayRequest &request)const;
			void deleteVpnGatewayAsync(const Model::DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpnGatewayOutcomeCallable deleteVpnGatewayCallable(const Model::DeleteVpnGatewayRequest& request) const;
			DeleteVpnPbrRouteEntryOutcome deleteVpnPbrRouteEntry(const Model::DeleteVpnPbrRouteEntryRequest &request)const;
			void deleteVpnPbrRouteEntryAsync(const Model::DeleteVpnPbrRouteEntryRequest& request, const DeleteVpnPbrRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpnPbrRouteEntryOutcomeCallable deleteVpnPbrRouteEntryCallable(const Model::DeleteVpnPbrRouteEntryRequest& request) const;
			DeleteVpnRouteEntryOutcome deleteVpnRouteEntry(const Model::DeleteVpnRouteEntryRequest &request)const;
			void deleteVpnRouteEntryAsync(const Model::DeleteVpnRouteEntryRequest& request, const DeleteVpnRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpnRouteEntryOutcomeCallable deleteVpnRouteEntryCallable(const Model::DeleteVpnRouteEntryRequest& request) const;
			DeletionProtectionOutcome deletionProtection(const Model::DeletionProtectionRequest &request)const;
			void deletionProtectionAsync(const Model::DeletionProtectionRequest& request, const DeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletionProtectionOutcomeCallable deletionProtectionCallable(const Model::DeletionProtectionRequest& request) const;
			Describe95TrafficOutcome describe95Traffic(const Model::Describe95TrafficRequest &request)const;
			void describe95TrafficAsync(const Model::Describe95TrafficRequest& request, const Describe95TrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			Describe95TrafficOutcomeCallable describe95TrafficCallable(const Model::Describe95TrafficRequest& request) const;
			DescribeAccessPointsOutcome describeAccessPoints(const Model::DescribeAccessPointsRequest &request)const;
			void describeAccessPointsAsync(const Model::DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessPointsOutcomeCallable describeAccessPointsCallable(const Model::DescribeAccessPointsRequest& request) const;
			DescribeBgpGroupsOutcome describeBgpGroups(const Model::DescribeBgpGroupsRequest &request)const;
			void describeBgpGroupsAsync(const Model::DescribeBgpGroupsRequest& request, const DescribeBgpGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBgpGroupsOutcomeCallable describeBgpGroupsCallable(const Model::DescribeBgpGroupsRequest& request) const;
			DescribeBgpNetworksOutcome describeBgpNetworks(const Model::DescribeBgpNetworksRequest &request)const;
			void describeBgpNetworksAsync(const Model::DescribeBgpNetworksRequest& request, const DescribeBgpNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBgpNetworksOutcomeCallable describeBgpNetworksCallable(const Model::DescribeBgpNetworksRequest& request) const;
			DescribeBgpPeersOutcome describeBgpPeers(const Model::DescribeBgpPeersRequest &request)const;
			void describeBgpPeersAsync(const Model::DescribeBgpPeersRequest& request, const DescribeBgpPeersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBgpPeersOutcomeCallable describeBgpPeersCallable(const Model::DescribeBgpPeersRequest& request) const;
			DescribeCommonBandwidthPackagesOutcome describeCommonBandwidthPackages(const Model::DescribeCommonBandwidthPackagesRequest &request)const;
			void describeCommonBandwidthPackagesAsync(const Model::DescribeCommonBandwidthPackagesRequest& request, const DescribeCommonBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommonBandwidthPackagesOutcomeCallable describeCommonBandwidthPackagesCallable(const Model::DescribeCommonBandwidthPackagesRequest& request) const;
			DescribeCustomerGatewayOutcome describeCustomerGateway(const Model::DescribeCustomerGatewayRequest &request)const;
			void describeCustomerGatewayAsync(const Model::DescribeCustomerGatewayRequest& request, const DescribeCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomerGatewayOutcomeCallable describeCustomerGatewayCallable(const Model::DescribeCustomerGatewayRequest& request) const;
			DescribeCustomerGatewaysOutcome describeCustomerGateways(const Model::DescribeCustomerGatewaysRequest &request)const;
			void describeCustomerGatewaysAsync(const Model::DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomerGatewaysOutcomeCallable describeCustomerGatewaysCallable(const Model::DescribeCustomerGatewaysRequest& request) const;
			DescribeEcGrantRelationOutcome describeEcGrantRelation(const Model::DescribeEcGrantRelationRequest &request)const;
			void describeEcGrantRelationAsync(const Model::DescribeEcGrantRelationRequest& request, const DescribeEcGrantRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEcGrantRelationOutcomeCallable describeEcGrantRelationCallable(const Model::DescribeEcGrantRelationRequest& request) const;
			DescribeEipAddressesOutcome describeEipAddresses(const Model::DescribeEipAddressesRequest &request)const;
			void describeEipAddressesAsync(const Model::DescribeEipAddressesRequest& request, const DescribeEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEipAddressesOutcomeCallable describeEipAddressesCallable(const Model::DescribeEipAddressesRequest& request) const;
			DescribeEipGatewayInfoOutcome describeEipGatewayInfo(const Model::DescribeEipGatewayInfoRequest &request)const;
			void describeEipGatewayInfoAsync(const Model::DescribeEipGatewayInfoRequest& request, const DescribeEipGatewayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEipGatewayInfoOutcomeCallable describeEipGatewayInfoCallable(const Model::DescribeEipGatewayInfoRequest& request) const;
			DescribeEipMonitorDataOutcome describeEipMonitorData(const Model::DescribeEipMonitorDataRequest &request)const;
			void describeEipMonitorDataAsync(const Model::DescribeEipMonitorDataRequest& request, const DescribeEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEipMonitorDataOutcomeCallable describeEipMonitorDataCallable(const Model::DescribeEipMonitorDataRequest& request) const;
			DescribeEipSegmentOutcome describeEipSegment(const Model::DescribeEipSegmentRequest &request)const;
			void describeEipSegmentAsync(const Model::DescribeEipSegmentRequest& request, const DescribeEipSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEipSegmentOutcomeCallable describeEipSegmentCallable(const Model::DescribeEipSegmentRequest& request) const;
			DescribeExpressConnectTrafficQosOutcome describeExpressConnectTrafficQos(const Model::DescribeExpressConnectTrafficQosRequest &request)const;
			void describeExpressConnectTrafficQosAsync(const Model::DescribeExpressConnectTrafficQosRequest& request, const DescribeExpressConnectTrafficQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExpressConnectTrafficQosOutcomeCallable describeExpressConnectTrafficQosCallable(const Model::DescribeExpressConnectTrafficQosRequest& request) const;
			DescribeExpressConnectTrafficQosQueueOutcome describeExpressConnectTrafficQosQueue(const Model::DescribeExpressConnectTrafficQosQueueRequest &request)const;
			void describeExpressConnectTrafficQosQueueAsync(const Model::DescribeExpressConnectTrafficQosQueueRequest& request, const DescribeExpressConnectTrafficQosQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExpressConnectTrafficQosQueueOutcomeCallable describeExpressConnectTrafficQosQueueCallable(const Model::DescribeExpressConnectTrafficQosQueueRequest& request) const;
			DescribeExpressConnectTrafficQosRuleOutcome describeExpressConnectTrafficQosRule(const Model::DescribeExpressConnectTrafficQosRuleRequest &request)const;
			void describeExpressConnectTrafficQosRuleAsync(const Model::DescribeExpressConnectTrafficQosRuleRequest& request, const DescribeExpressConnectTrafficQosRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExpressConnectTrafficQosRuleOutcomeCallable describeExpressConnectTrafficQosRuleCallable(const Model::DescribeExpressConnectTrafficQosRuleRequest& request) const;
			DescribeFailoverTestJobOutcome describeFailoverTestJob(const Model::DescribeFailoverTestJobRequest &request)const;
			void describeFailoverTestJobAsync(const Model::DescribeFailoverTestJobRequest& request, const DescribeFailoverTestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFailoverTestJobOutcomeCallable describeFailoverTestJobCallable(const Model::DescribeFailoverTestJobRequest& request) const;
			DescribeFailoverTestJobsOutcome describeFailoverTestJobs(const Model::DescribeFailoverTestJobsRequest &request)const;
			void describeFailoverTestJobsAsync(const Model::DescribeFailoverTestJobsRequest& request, const DescribeFailoverTestJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFailoverTestJobsOutcomeCallable describeFailoverTestJobsCallable(const Model::DescribeFailoverTestJobsRequest& request) const;
			DescribeFlowLogsOutcome describeFlowLogs(const Model::DescribeFlowLogsRequest &request)const;
			void describeFlowLogsAsync(const Model::DescribeFlowLogsRequest& request, const DescribeFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowLogsOutcomeCallable describeFlowLogsCallable(const Model::DescribeFlowLogsRequest& request) const;
			DescribeForwardTableEntriesOutcome describeForwardTableEntries(const Model::DescribeForwardTableEntriesRequest &request)const;
			void describeForwardTableEntriesAsync(const Model::DescribeForwardTableEntriesRequest& request, const DescribeForwardTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeForwardTableEntriesOutcomeCallable describeForwardTableEntriesCallable(const Model::DescribeForwardTableEntriesRequest& request) const;
			DescribeGlobalAccelerationInstancesOutcome describeGlobalAccelerationInstances(const Model::DescribeGlobalAccelerationInstancesRequest &request)const;
			void describeGlobalAccelerationInstancesAsync(const Model::DescribeGlobalAccelerationInstancesRequest& request, const DescribeGlobalAccelerationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalAccelerationInstancesOutcomeCallable describeGlobalAccelerationInstancesCallable(const Model::DescribeGlobalAccelerationInstancesRequest& request) const;
			DescribeGrantRulesToCenOutcome describeGrantRulesToCen(const Model::DescribeGrantRulesToCenRequest &request)const;
			void describeGrantRulesToCenAsync(const Model::DescribeGrantRulesToCenRequest& request, const DescribeGrantRulesToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGrantRulesToCenOutcomeCallable describeGrantRulesToCenCallable(const Model::DescribeGrantRulesToCenRequest& request) const;
			DescribeHaVipsOutcome describeHaVips(const Model::DescribeHaVipsRequest &request)const;
			void describeHaVipsAsync(const Model::DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHaVipsOutcomeCallable describeHaVipsCallable(const Model::DescribeHaVipsRequest& request) const;
			DescribeHighDefinitionMonitorLogAttributeOutcome describeHighDefinitionMonitorLogAttribute(const Model::DescribeHighDefinitionMonitorLogAttributeRequest &request)const;
			void describeHighDefinitionMonitorLogAttributeAsync(const Model::DescribeHighDefinitionMonitorLogAttributeRequest& request, const DescribeHighDefinitionMonitorLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHighDefinitionMonitorLogAttributeOutcomeCallable describeHighDefinitionMonitorLogAttributeCallable(const Model::DescribeHighDefinitionMonitorLogAttributeRequest& request) const;
			DescribeIPv6TranslatorAclListAttributesOutcome describeIPv6TranslatorAclListAttributes(const Model::DescribeIPv6TranslatorAclListAttributesRequest &request)const;
			void describeIPv6TranslatorAclListAttributesAsync(const Model::DescribeIPv6TranslatorAclListAttributesRequest& request, const DescribeIPv6TranslatorAclListAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIPv6TranslatorAclListAttributesOutcomeCallable describeIPv6TranslatorAclListAttributesCallable(const Model::DescribeIPv6TranslatorAclListAttributesRequest& request) const;
			DescribeIPv6TranslatorAclListsOutcome describeIPv6TranslatorAclLists(const Model::DescribeIPv6TranslatorAclListsRequest &request)const;
			void describeIPv6TranslatorAclListsAsync(const Model::DescribeIPv6TranslatorAclListsRequest& request, const DescribeIPv6TranslatorAclListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIPv6TranslatorAclListsOutcomeCallable describeIPv6TranslatorAclListsCallable(const Model::DescribeIPv6TranslatorAclListsRequest& request) const;
			DescribeIPv6TranslatorEntriesOutcome describeIPv6TranslatorEntries(const Model::DescribeIPv6TranslatorEntriesRequest &request)const;
			void describeIPv6TranslatorEntriesAsync(const Model::DescribeIPv6TranslatorEntriesRequest& request, const DescribeIPv6TranslatorEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIPv6TranslatorEntriesOutcomeCallable describeIPv6TranslatorEntriesCallable(const Model::DescribeIPv6TranslatorEntriesRequest& request) const;
			DescribeIPv6TranslatorsOutcome describeIPv6Translators(const Model::DescribeIPv6TranslatorsRequest &request)const;
			void describeIPv6TranslatorsAsync(const Model::DescribeIPv6TranslatorsRequest& request, const DescribeIPv6TranslatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIPv6TranslatorsOutcomeCallable describeIPv6TranslatorsCallable(const Model::DescribeIPv6TranslatorsRequest& request) const;
			DescribeIpv6AddressesOutcome describeIpv6Addresses(const Model::DescribeIpv6AddressesRequest &request)const;
			void describeIpv6AddressesAsync(const Model::DescribeIpv6AddressesRequest& request, const DescribeIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpv6AddressesOutcomeCallable describeIpv6AddressesCallable(const Model::DescribeIpv6AddressesRequest& request) const;
			DescribeIpv6EgressOnlyRulesOutcome describeIpv6EgressOnlyRules(const Model::DescribeIpv6EgressOnlyRulesRequest &request)const;
			void describeIpv6EgressOnlyRulesAsync(const Model::DescribeIpv6EgressOnlyRulesRequest& request, const DescribeIpv6EgressOnlyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpv6EgressOnlyRulesOutcomeCallable describeIpv6EgressOnlyRulesCallable(const Model::DescribeIpv6EgressOnlyRulesRequest& request) const;
			DescribeIpv6GatewayAttributeOutcome describeIpv6GatewayAttribute(const Model::DescribeIpv6GatewayAttributeRequest &request)const;
			void describeIpv6GatewayAttributeAsync(const Model::DescribeIpv6GatewayAttributeRequest& request, const DescribeIpv6GatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpv6GatewayAttributeOutcomeCallable describeIpv6GatewayAttributeCallable(const Model::DescribeIpv6GatewayAttributeRequest& request) const;
			DescribeIpv6GatewaysOutcome describeIpv6Gateways(const Model::DescribeIpv6GatewaysRequest &request)const;
			void describeIpv6GatewaysAsync(const Model::DescribeIpv6GatewaysRequest& request, const DescribeIpv6GatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpv6GatewaysOutcomeCallable describeIpv6GatewaysCallable(const Model::DescribeIpv6GatewaysRequest& request) const;
			DescribeNatGatewayAssociateNetworkInterfacesOutcome describeNatGatewayAssociateNetworkInterfaces(const Model::DescribeNatGatewayAssociateNetworkInterfacesRequest &request)const;
			void describeNatGatewayAssociateNetworkInterfacesAsync(const Model::DescribeNatGatewayAssociateNetworkInterfacesRequest& request, const DescribeNatGatewayAssociateNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNatGatewayAssociateNetworkInterfacesOutcomeCallable describeNatGatewayAssociateNetworkInterfacesCallable(const Model::DescribeNatGatewayAssociateNetworkInterfacesRequest& request) const;
			DescribeNatGatewaysOutcome describeNatGateways(const Model::DescribeNatGatewaysRequest &request)const;
			void describeNatGatewaysAsync(const Model::DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNatGatewaysOutcomeCallable describeNatGatewaysCallable(const Model::DescribeNatGatewaysRequest& request) const;
			DescribeNetworkAclAttributesOutcome describeNetworkAclAttributes(const Model::DescribeNetworkAclAttributesRequest &request)const;
			void describeNetworkAclAttributesAsync(const Model::DescribeNetworkAclAttributesRequest& request, const DescribeNetworkAclAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkAclAttributesOutcomeCallable describeNetworkAclAttributesCallable(const Model::DescribeNetworkAclAttributesRequest& request) const;
			DescribeNetworkAclsOutcome describeNetworkAcls(const Model::DescribeNetworkAclsRequest &request)const;
			void describeNetworkAclsAsync(const Model::DescribeNetworkAclsRequest& request, const DescribeNetworkAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkAclsOutcomeCallable describeNetworkAclsCallable(const Model::DescribeNetworkAclsRequest& request) const;
			DescribePhysicalConnectionLOAOutcome describePhysicalConnectionLOA(const Model::DescribePhysicalConnectionLOARequest &request)const;
			void describePhysicalConnectionLOAAsync(const Model::DescribePhysicalConnectionLOARequest& request, const DescribePhysicalConnectionLOAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePhysicalConnectionLOAOutcomeCallable describePhysicalConnectionLOACallable(const Model::DescribePhysicalConnectionLOARequest& request) const;
			DescribePhysicalConnectionsOutcome describePhysicalConnections(const Model::DescribePhysicalConnectionsRequest &request)const;
			void describePhysicalConnectionsAsync(const Model::DescribePhysicalConnectionsRequest& request, const DescribePhysicalConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePhysicalConnectionsOutcomeCallable describePhysicalConnectionsCallable(const Model::DescribePhysicalConnectionsRequest& request) const;
			DescribePublicIpAddressOutcome describePublicIpAddress(const Model::DescribePublicIpAddressRequest &request)const;
			void describePublicIpAddressAsync(const Model::DescribePublicIpAddressRequest& request, const DescribePublicIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePublicIpAddressOutcomeCallable describePublicIpAddressCallable(const Model::DescribePublicIpAddressRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRouteEntryListOutcome describeRouteEntryList(const Model::DescribeRouteEntryListRequest &request)const;
			void describeRouteEntryListAsync(const Model::DescribeRouteEntryListRequest& request, const DescribeRouteEntryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouteEntryListOutcomeCallable describeRouteEntryListCallable(const Model::DescribeRouteEntryListRequest& request) const;
			DescribeRouteTableListOutcome describeRouteTableList(const Model::DescribeRouteTableListRequest &request)const;
			void describeRouteTableListAsync(const Model::DescribeRouteTableListRequest& request, const DescribeRouteTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouteTableListOutcomeCallable describeRouteTableListCallable(const Model::DescribeRouteTableListRequest& request) const;
			DescribeRouteTablesOutcome describeRouteTables(const Model::DescribeRouteTablesRequest &request)const;
			void describeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouteTablesOutcomeCallable describeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request) const;
			DescribeRouterInterfaceAttributeOutcome describeRouterInterfaceAttribute(const Model::DescribeRouterInterfaceAttributeRequest &request)const;
			void describeRouterInterfaceAttributeAsync(const Model::DescribeRouterInterfaceAttributeRequest& request, const DescribeRouterInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouterInterfaceAttributeOutcomeCallable describeRouterInterfaceAttributeCallable(const Model::DescribeRouterInterfaceAttributeRequest& request) const;
			DescribeRouterInterfacesOutcome describeRouterInterfaces(const Model::DescribeRouterInterfacesRequest &request)const;
			void describeRouterInterfacesAsync(const Model::DescribeRouterInterfacesRequest& request, const DescribeRouterInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouterInterfacesOutcomeCallable describeRouterInterfacesCallable(const Model::DescribeRouterInterfacesRequest& request) const;
			DescribeServerRelatedGlobalAccelerationInstancesOutcome describeServerRelatedGlobalAccelerationInstances(const Model::DescribeServerRelatedGlobalAccelerationInstancesRequest &request)const;
			void describeServerRelatedGlobalAccelerationInstancesAsync(const Model::DescribeServerRelatedGlobalAccelerationInstancesRequest& request, const DescribeServerRelatedGlobalAccelerationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServerRelatedGlobalAccelerationInstancesOutcomeCallable describeServerRelatedGlobalAccelerationInstancesCallable(const Model::DescribeServerRelatedGlobalAccelerationInstancesRequest& request) const;
			DescribeSnatTableEntriesOutcome describeSnatTableEntries(const Model::DescribeSnatTableEntriesRequest &request)const;
			void describeSnatTableEntriesAsync(const Model::DescribeSnatTableEntriesRequest& request, const DescribeSnatTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnatTableEntriesOutcomeCallable describeSnatTableEntriesCallable(const Model::DescribeSnatTableEntriesRequest& request) const;
			DescribeSslVpnClientCertOutcome describeSslVpnClientCert(const Model::DescribeSslVpnClientCertRequest &request)const;
			void describeSslVpnClientCertAsync(const Model::DescribeSslVpnClientCertRequest& request, const DescribeSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSslVpnClientCertOutcomeCallable describeSslVpnClientCertCallable(const Model::DescribeSslVpnClientCertRequest& request) const;
			DescribeSslVpnClientCertsOutcome describeSslVpnClientCerts(const Model::DescribeSslVpnClientCertsRequest &request)const;
			void describeSslVpnClientCertsAsync(const Model::DescribeSslVpnClientCertsRequest& request, const DescribeSslVpnClientCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSslVpnClientCertsOutcomeCallable describeSslVpnClientCertsCallable(const Model::DescribeSslVpnClientCertsRequest& request) const;
			DescribeSslVpnClientsOutcome describeSslVpnClients(const Model::DescribeSslVpnClientsRequest &request)const;
			void describeSslVpnClientsAsync(const Model::DescribeSslVpnClientsRequest& request, const DescribeSslVpnClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSslVpnClientsOutcomeCallable describeSslVpnClientsCallable(const Model::DescribeSslVpnClientsRequest& request) const;
			DescribeSslVpnServersOutcome describeSslVpnServers(const Model::DescribeSslVpnServersRequest &request)const;
			void describeSslVpnServersAsync(const Model::DescribeSslVpnServersRequest& request, const DescribeSslVpnServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSslVpnServersOutcomeCallable describeSslVpnServersCallable(const Model::DescribeSslVpnServersRequest& request) const;
			DescribeTagKeysOutcome describeTagKeys(const Model::DescribeTagKeysRequest &request)const;
			void describeTagKeysAsync(const Model::DescribeTagKeysRequest& request, const DescribeTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagKeysOutcomeCallable describeTagKeysCallable(const Model::DescribeTagKeysRequest& request) const;
			DescribeTagKeysForExpressConnectOutcome describeTagKeysForExpressConnect(const Model::DescribeTagKeysForExpressConnectRequest &request)const;
			void describeTagKeysForExpressConnectAsync(const Model::DescribeTagKeysForExpressConnectRequest& request, const DescribeTagKeysForExpressConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagKeysForExpressConnectOutcomeCallable describeTagKeysForExpressConnectCallable(const Model::DescribeTagKeysForExpressConnectRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DescribeVRoutersOutcome describeVRouters(const Model::DescribeVRoutersRequest &request)const;
			void describeVRoutersAsync(const Model::DescribeVRoutersRequest& request, const DescribeVRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVRoutersOutcomeCallable describeVRoutersCallable(const Model::DescribeVRoutersRequest& request) const;
			DescribeVSwitchAttributesOutcome describeVSwitchAttributes(const Model::DescribeVSwitchAttributesRequest &request)const;
			void describeVSwitchAttributesAsync(const Model::DescribeVSwitchAttributesRequest& request, const DescribeVSwitchAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchAttributesOutcomeCallable describeVSwitchAttributesCallable(const Model::DescribeVSwitchAttributesRequest& request) const;
			DescribeVSwitchesOutcome describeVSwitches(const Model::DescribeVSwitchesRequest &request)const;
			void describeVSwitchesAsync(const Model::DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchesOutcomeCallable describeVSwitchesCallable(const Model::DescribeVSwitchesRequest& request) const;
			DescribeVbrHaOutcome describeVbrHa(const Model::DescribeVbrHaRequest &request)const;
			void describeVbrHaAsync(const Model::DescribeVbrHaRequest& request, const DescribeVbrHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVbrHaOutcomeCallable describeVbrHaCallable(const Model::DescribeVbrHaRequest& request) const;
			DescribeVcoRouteEntriesOutcome describeVcoRouteEntries(const Model::DescribeVcoRouteEntriesRequest &request)const;
			void describeVcoRouteEntriesAsync(const Model::DescribeVcoRouteEntriesRequest& request, const DescribeVcoRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVcoRouteEntriesOutcomeCallable describeVcoRouteEntriesCallable(const Model::DescribeVcoRouteEntriesRequest& request) const;
			DescribeVirtualBorderRoutersOutcome describeVirtualBorderRouters(const Model::DescribeVirtualBorderRoutersRequest &request)const;
			void describeVirtualBorderRoutersAsync(const Model::DescribeVirtualBorderRoutersRequest& request, const DescribeVirtualBorderRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVirtualBorderRoutersOutcomeCallable describeVirtualBorderRoutersCallable(const Model::DescribeVirtualBorderRoutersRequest& request) const;
			DescribeVirtualBorderRoutersForPhysicalConnectionOutcome describeVirtualBorderRoutersForPhysicalConnection(const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request)const;
			void describeVirtualBorderRoutersForPhysicalConnectionAsync(const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest& request, const DescribeVirtualBorderRoutersForPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVirtualBorderRoutersForPhysicalConnectionOutcomeCallable describeVirtualBorderRoutersForPhysicalConnectionCallable(const Model::DescribeVirtualBorderRoutersForPhysicalConnectionRequest& request) const;
			DescribeVpcAttributeOutcome describeVpcAttribute(const Model::DescribeVpcAttributeRequest &request)const;
			void describeVpcAttributeAsync(const Model::DescribeVpcAttributeRequest& request, const DescribeVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpcAttributeOutcomeCallable describeVpcAttributeCallable(const Model::DescribeVpcAttributeRequest& request) const;
			DescribeVpcsOutcome describeVpcs(const Model::DescribeVpcsRequest &request)const;
			void describeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpcsOutcomeCallable describeVpcsCallable(const Model::DescribeVpcsRequest& request) const;
			DescribeVpnAttachmentsOutcome describeVpnAttachments(const Model::DescribeVpnAttachmentsRequest &request)const;
			void describeVpnAttachmentsAsync(const Model::DescribeVpnAttachmentsRequest& request, const DescribeVpnAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnAttachmentsOutcomeCallable describeVpnAttachmentsCallable(const Model::DescribeVpnAttachmentsRequest& request) const;
			DescribeVpnConnectionOutcome describeVpnConnection(const Model::DescribeVpnConnectionRequest &request)const;
			void describeVpnConnectionAsync(const Model::DescribeVpnConnectionRequest& request, const DescribeVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnConnectionOutcomeCallable describeVpnConnectionCallable(const Model::DescribeVpnConnectionRequest& request) const;
			DescribeVpnConnectionLogsOutcome describeVpnConnectionLogs(const Model::DescribeVpnConnectionLogsRequest &request)const;
			void describeVpnConnectionLogsAsync(const Model::DescribeVpnConnectionLogsRequest& request, const DescribeVpnConnectionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnConnectionLogsOutcomeCallable describeVpnConnectionLogsCallable(const Model::DescribeVpnConnectionLogsRequest& request) const;
			DescribeVpnConnectionsOutcome describeVpnConnections(const Model::DescribeVpnConnectionsRequest &request)const;
			void describeVpnConnectionsAsync(const Model::DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnConnectionsOutcomeCallable describeVpnConnectionsCallable(const Model::DescribeVpnConnectionsRequest& request) const;
			DescribeVpnCrossAccountAuthorizationsOutcome describeVpnCrossAccountAuthorizations(const Model::DescribeVpnCrossAccountAuthorizationsRequest &request)const;
			void describeVpnCrossAccountAuthorizationsAsync(const Model::DescribeVpnCrossAccountAuthorizationsRequest& request, const DescribeVpnCrossAccountAuthorizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnCrossAccountAuthorizationsOutcomeCallable describeVpnCrossAccountAuthorizationsCallable(const Model::DescribeVpnCrossAccountAuthorizationsRequest& request) const;
			DescribeVpnGatewayOutcome describeVpnGateway(const Model::DescribeVpnGatewayRequest &request)const;
			void describeVpnGatewayAsync(const Model::DescribeVpnGatewayRequest& request, const DescribeVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnGatewayOutcomeCallable describeVpnGatewayCallable(const Model::DescribeVpnGatewayRequest& request) const;
			DescribeVpnGatewayAvailableZonesOutcome describeVpnGatewayAvailableZones(const Model::DescribeVpnGatewayAvailableZonesRequest &request)const;
			void describeVpnGatewayAvailableZonesAsync(const Model::DescribeVpnGatewayAvailableZonesRequest& request, const DescribeVpnGatewayAvailableZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnGatewayAvailableZonesOutcomeCallable describeVpnGatewayAvailableZonesCallable(const Model::DescribeVpnGatewayAvailableZonesRequest& request) const;
			DescribeVpnGatewaysOutcome describeVpnGateways(const Model::DescribeVpnGatewaysRequest &request)const;
			void describeVpnGatewaysAsync(const Model::DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnGatewaysOutcomeCallable describeVpnGatewaysCallable(const Model::DescribeVpnGatewaysRequest& request) const;
			DescribeVpnPbrRouteEntriesOutcome describeVpnPbrRouteEntries(const Model::DescribeVpnPbrRouteEntriesRequest &request)const;
			void describeVpnPbrRouteEntriesAsync(const Model::DescribeVpnPbrRouteEntriesRequest& request, const DescribeVpnPbrRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnPbrRouteEntriesOutcomeCallable describeVpnPbrRouteEntriesCallable(const Model::DescribeVpnPbrRouteEntriesRequest& request) const;
			DescribeVpnRouteEntriesOutcome describeVpnRouteEntries(const Model::DescribeVpnRouteEntriesRequest &request)const;
			void describeVpnRouteEntriesAsync(const Model::DescribeVpnRouteEntriesRequest& request, const DescribeVpnRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnRouteEntriesOutcomeCallable describeVpnRouteEntriesCallable(const Model::DescribeVpnRouteEntriesRequest& request) const;
			DescribeVpnSslServerLogsOutcome describeVpnSslServerLogs(const Model::DescribeVpnSslServerLogsRequest &request)const;
			void describeVpnSslServerLogsAsync(const Model::DescribeVpnSslServerLogsRequest& request, const DescribeVpnSslServerLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpnSslServerLogsOutcomeCallable describeVpnSslServerLogsCallable(const Model::DescribeVpnSslServerLogsRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			DetachDhcpOptionsSetFromVpcOutcome detachDhcpOptionsSetFromVpc(const Model::DetachDhcpOptionsSetFromVpcRequest &request)const;
			void detachDhcpOptionsSetFromVpcAsync(const Model::DetachDhcpOptionsSetFromVpcRequest& request, const DetachDhcpOptionsSetFromVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachDhcpOptionsSetFromVpcOutcomeCallable detachDhcpOptionsSetFromVpcCallable(const Model::DetachDhcpOptionsSetFromVpcRequest& request) const;
			DiagnoseVpnConnectionsOutcome diagnoseVpnConnections(const Model::DiagnoseVpnConnectionsRequest &request)const;
			void diagnoseVpnConnectionsAsync(const Model::DiagnoseVpnConnectionsRequest& request, const DiagnoseVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DiagnoseVpnConnectionsOutcomeCallable diagnoseVpnConnectionsCallable(const Model::DiagnoseVpnConnectionsRequest& request) const;
			DiagnoseVpnGatewayOutcome diagnoseVpnGateway(const Model::DiagnoseVpnGatewayRequest &request)const;
			void diagnoseVpnGatewayAsync(const Model::DiagnoseVpnGatewayRequest& request, const DiagnoseVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DiagnoseVpnGatewayOutcomeCallable diagnoseVpnGatewayCallable(const Model::DiagnoseVpnGatewayRequest& request) const;
			DisableNatGatewayEcsMetricOutcome disableNatGatewayEcsMetric(const Model::DisableNatGatewayEcsMetricRequest &request)const;
			void disableNatGatewayEcsMetricAsync(const Model::DisableNatGatewayEcsMetricRequest& request, const DisableNatGatewayEcsMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableNatGatewayEcsMetricOutcomeCallable disableNatGatewayEcsMetricCallable(const Model::DisableNatGatewayEcsMetricRequest& request) const;
			DisableVpcClassicLinkOutcome disableVpcClassicLink(const Model::DisableVpcClassicLinkRequest &request)const;
			void disableVpcClassicLinkAsync(const Model::DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableVpcClassicLinkOutcomeCallable disableVpcClassicLinkCallable(const Model::DisableVpcClassicLinkRequest& request) const;
			DissociateRouteTableFromGatewayOutcome dissociateRouteTableFromGateway(const Model::DissociateRouteTableFromGatewayRequest &request)const;
			void dissociateRouteTableFromGatewayAsync(const Model::DissociateRouteTableFromGatewayRequest& request, const DissociateRouteTableFromGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateRouteTableFromGatewayOutcomeCallable dissociateRouteTableFromGatewayCallable(const Model::DissociateRouteTableFromGatewayRequest& request) const;
			DissociateRouteTablesFromVpcGatewayEndpointOutcome dissociateRouteTablesFromVpcGatewayEndpoint(const Model::DissociateRouteTablesFromVpcGatewayEndpointRequest &request)const;
			void dissociateRouteTablesFromVpcGatewayEndpointAsync(const Model::DissociateRouteTablesFromVpcGatewayEndpointRequest& request, const DissociateRouteTablesFromVpcGatewayEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateRouteTablesFromVpcGatewayEndpointOutcomeCallable dissociateRouteTablesFromVpcGatewayEndpointCallable(const Model::DissociateRouteTablesFromVpcGatewayEndpointRequest& request) const;
			DissociateVpnGatewayWithCertificateOutcome dissociateVpnGatewayWithCertificate(const Model::DissociateVpnGatewayWithCertificateRequest &request)const;
			void dissociateVpnGatewayWithCertificateAsync(const Model::DissociateVpnGatewayWithCertificateRequest& request, const DissociateVpnGatewayWithCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateVpnGatewayWithCertificateOutcomeCallable dissociateVpnGatewayWithCertificateCallable(const Model::DissociateVpnGatewayWithCertificateRequest& request) const;
			DownloadVpnConnectionConfigOutcome downloadVpnConnectionConfig(const Model::DownloadVpnConnectionConfigRequest &request)const;
			void downloadVpnConnectionConfigAsync(const Model::DownloadVpnConnectionConfigRequest& request, const DownloadVpnConnectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadVpnConnectionConfigOutcomeCallable downloadVpnConnectionConfigCallable(const Model::DownloadVpnConnectionConfigRequest& request) const;
			EnableNatGatewayEcsMetricOutcome enableNatGatewayEcsMetric(const Model::EnableNatGatewayEcsMetricRequest &request)const;
			void enableNatGatewayEcsMetricAsync(const Model::EnableNatGatewayEcsMetricRequest& request, const EnableNatGatewayEcsMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableNatGatewayEcsMetricOutcomeCallable enableNatGatewayEcsMetricCallable(const Model::EnableNatGatewayEcsMetricRequest& request) const;
			EnablePhysicalConnectionOutcome enablePhysicalConnection(const Model::EnablePhysicalConnectionRequest &request)const;
			void enablePhysicalConnectionAsync(const Model::EnablePhysicalConnectionRequest& request, const EnablePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnablePhysicalConnectionOutcomeCallable enablePhysicalConnectionCallable(const Model::EnablePhysicalConnectionRequest& request) const;
			EnableVpcClassicLinkOutcome enableVpcClassicLink(const Model::EnableVpcClassicLinkRequest &request)const;
			void enableVpcClassicLinkAsync(const Model::EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableVpcClassicLinkOutcomeCallable enableVpcClassicLinkCallable(const Model::EnableVpcClassicLinkRequest& request) const;
			EnableVpcIpv4GatewayOutcome enableVpcIpv4Gateway(const Model::EnableVpcIpv4GatewayRequest &request)const;
			void enableVpcIpv4GatewayAsync(const Model::EnableVpcIpv4GatewayRequest& request, const EnableVpcIpv4GatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableVpcIpv4GatewayOutcomeCallable enableVpcIpv4GatewayCallable(const Model::EnableVpcIpv4GatewayRequest& request) const;
			GetDhcpOptionsSetOutcome getDhcpOptionsSet(const Model::GetDhcpOptionsSetRequest &request)const;
			void getDhcpOptionsSetAsync(const Model::GetDhcpOptionsSetRequest& request, const GetDhcpOptionsSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDhcpOptionsSetOutcomeCallable getDhcpOptionsSetCallable(const Model::GetDhcpOptionsSetRequest& request) const;
			GetFlowLogServiceStatusOutcome getFlowLogServiceStatus(const Model::GetFlowLogServiceStatusRequest &request)const;
			void getFlowLogServiceStatusAsync(const Model::GetFlowLogServiceStatusRequest& request, const GetFlowLogServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFlowLogServiceStatusOutcomeCallable getFlowLogServiceStatusCallable(const Model::GetFlowLogServiceStatusRequest& request) const;
			GetIpv4GatewayAttributeOutcome getIpv4GatewayAttribute(const Model::GetIpv4GatewayAttributeRequest &request)const;
			void getIpv4GatewayAttributeAsync(const Model::GetIpv4GatewayAttributeRequest& request, const GetIpv4GatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIpv4GatewayAttributeOutcomeCallable getIpv4GatewayAttributeCallable(const Model::GetIpv4GatewayAttributeRequest& request) const;
			GetNatGatewayAttributeOutcome getNatGatewayAttribute(const Model::GetNatGatewayAttributeRequest &request)const;
			void getNatGatewayAttributeAsync(const Model::GetNatGatewayAttributeRequest& request, const GetNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNatGatewayAttributeOutcomeCallable getNatGatewayAttributeCallable(const Model::GetNatGatewayAttributeRequest& request) const;
			GetPhysicalConnectionServiceStatusOutcome getPhysicalConnectionServiceStatus(const Model::GetPhysicalConnectionServiceStatusRequest &request)const;
			void getPhysicalConnectionServiceStatusAsync(const Model::GetPhysicalConnectionServiceStatusRequest& request, const GetPhysicalConnectionServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPhysicalConnectionServiceStatusOutcomeCallable getPhysicalConnectionServiceStatusCallable(const Model::GetPhysicalConnectionServiceStatusRequest& request) const;
			GetPublicIpAddressPoolServiceStatusOutcome getPublicIpAddressPoolServiceStatus(const Model::GetPublicIpAddressPoolServiceStatusRequest &request)const;
			void getPublicIpAddressPoolServiceStatusAsync(const Model::GetPublicIpAddressPoolServiceStatusRequest& request, const GetPublicIpAddressPoolServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPublicIpAddressPoolServiceStatusOutcomeCallable getPublicIpAddressPoolServiceStatusCallable(const Model::GetPublicIpAddressPoolServiceStatusRequest& request) const;
			GetTrafficMirrorServiceStatusOutcome getTrafficMirrorServiceStatus(const Model::GetTrafficMirrorServiceStatusRequest &request)const;
			void getTrafficMirrorServiceStatusAsync(const Model::GetTrafficMirrorServiceStatusRequest& request, const GetTrafficMirrorServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTrafficMirrorServiceStatusOutcomeCallable getTrafficMirrorServiceStatusCallable(const Model::GetTrafficMirrorServiceStatusRequest& request) const;
			GetVSwitchCidrReservationUsageOutcome getVSwitchCidrReservationUsage(const Model::GetVSwitchCidrReservationUsageRequest &request)const;
			void getVSwitchCidrReservationUsageAsync(const Model::GetVSwitchCidrReservationUsageRequest& request, const GetVSwitchCidrReservationUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVSwitchCidrReservationUsageOutcomeCallable getVSwitchCidrReservationUsageCallable(const Model::GetVSwitchCidrReservationUsageRequest& request) const;
			GetVpcGatewayEndpointAttributeOutcome getVpcGatewayEndpointAttribute(const Model::GetVpcGatewayEndpointAttributeRequest &request)const;
			void getVpcGatewayEndpointAttributeAsync(const Model::GetVpcGatewayEndpointAttributeRequest& request, const GetVpcGatewayEndpointAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpcGatewayEndpointAttributeOutcomeCallable getVpcGatewayEndpointAttributeCallable(const Model::GetVpcGatewayEndpointAttributeRequest& request) const;
			GetVpcPrefixListAssociationsOutcome getVpcPrefixListAssociations(const Model::GetVpcPrefixListAssociationsRequest &request)const;
			void getVpcPrefixListAssociationsAsync(const Model::GetVpcPrefixListAssociationsRequest& request, const GetVpcPrefixListAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpcPrefixListAssociationsOutcomeCallable getVpcPrefixListAssociationsCallable(const Model::GetVpcPrefixListAssociationsRequest& request) const;
			GetVpcPrefixListEntriesOutcome getVpcPrefixListEntries(const Model::GetVpcPrefixListEntriesRequest &request)const;
			void getVpcPrefixListEntriesAsync(const Model::GetVpcPrefixListEntriesRequest& request, const GetVpcPrefixListEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpcPrefixListEntriesOutcomeCallable getVpcPrefixListEntriesCallable(const Model::GetVpcPrefixListEntriesRequest& request) const;
			GetVpcRouteEntrySummaryOutcome getVpcRouteEntrySummary(const Model::GetVpcRouteEntrySummaryRequest &request)const;
			void getVpcRouteEntrySummaryAsync(const Model::GetVpcRouteEntrySummaryRequest& request, const GetVpcRouteEntrySummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpcRouteEntrySummaryOutcomeCallable getVpcRouteEntrySummaryCallable(const Model::GetVpcRouteEntrySummaryRequest& request) const;
			GetVpnGatewayDiagnoseResultOutcome getVpnGatewayDiagnoseResult(const Model::GetVpnGatewayDiagnoseResultRequest &request)const;
			void getVpnGatewayDiagnoseResultAsync(const Model::GetVpnGatewayDiagnoseResultRequest& request, const GetVpnGatewayDiagnoseResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpnGatewayDiagnoseResultOutcomeCallable getVpnGatewayDiagnoseResultCallable(const Model::GetVpnGatewayDiagnoseResultRequest& request) const;
			GrantInstanceToCenOutcome grantInstanceToCen(const Model::GrantInstanceToCenRequest &request)const;
			void grantInstanceToCenAsync(const Model::GrantInstanceToCenRequest& request, const GrantInstanceToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantInstanceToCenOutcomeCallable grantInstanceToCenCallable(const Model::GrantInstanceToCenRequest& request) const;
			GrantInstanceToVbrOutcome grantInstanceToVbr(const Model::GrantInstanceToVbrRequest &request)const;
			void grantInstanceToVbrAsync(const Model::GrantInstanceToVbrRequest& request, const GrantInstanceToVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantInstanceToVbrOutcomeCallable grantInstanceToVbrCallable(const Model::GrantInstanceToVbrRequest& request) const;
			ListBusinessAccessPointsOutcome listBusinessAccessPoints(const Model::ListBusinessAccessPointsRequest &request)const;
			void listBusinessAccessPointsAsync(const Model::ListBusinessAccessPointsRequest& request, const ListBusinessAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBusinessAccessPointsOutcomeCallable listBusinessAccessPointsCallable(const Model::ListBusinessAccessPointsRequest& request) const;
			ListDhcpOptionsSetsOutcome listDhcpOptionsSets(const Model::ListDhcpOptionsSetsRequest &request)const;
			void listDhcpOptionsSetsAsync(const Model::ListDhcpOptionsSetsRequest& request, const ListDhcpOptionsSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDhcpOptionsSetsOutcomeCallable listDhcpOptionsSetsCallable(const Model::ListDhcpOptionsSetsRequest& request) const;
			ListEnhanhcedNatGatewayAvailableZonesOutcome listEnhanhcedNatGatewayAvailableZones(const Model::ListEnhanhcedNatGatewayAvailableZonesRequest &request)const;
			void listEnhanhcedNatGatewayAvailableZonesAsync(const Model::ListEnhanhcedNatGatewayAvailableZonesRequest& request, const ListEnhanhcedNatGatewayAvailableZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnhanhcedNatGatewayAvailableZonesOutcomeCallable listEnhanhcedNatGatewayAvailableZonesCallable(const Model::ListEnhanhcedNatGatewayAvailableZonesRequest& request) const;
			ListFullNatEntriesOutcome listFullNatEntries(const Model::ListFullNatEntriesRequest &request)const;
			void listFullNatEntriesAsync(const Model::ListFullNatEntriesRequest& request, const ListFullNatEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFullNatEntriesOutcomeCallable listFullNatEntriesCallable(const Model::ListFullNatEntriesRequest& request) const;
			ListGatewayRouteTableEntriesOutcome listGatewayRouteTableEntries(const Model::ListGatewayRouteTableEntriesRequest &request)const;
			void listGatewayRouteTableEntriesAsync(const Model::ListGatewayRouteTableEntriesRequest& request, const ListGatewayRouteTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayRouteTableEntriesOutcomeCallable listGatewayRouteTableEntriesCallable(const Model::ListGatewayRouteTableEntriesRequest& request) const;
			ListGeographicSubRegionsOutcome listGeographicSubRegions(const Model::ListGeographicSubRegionsRequest &request)const;
			void listGeographicSubRegionsAsync(const Model::ListGeographicSubRegionsRequest& request, const ListGeographicSubRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGeographicSubRegionsOutcomeCallable listGeographicSubRegionsCallable(const Model::ListGeographicSubRegionsRequest& request) const;
			ListIpsecServerLogsOutcome listIpsecServerLogs(const Model::ListIpsecServerLogsRequest &request)const;
			void listIpsecServerLogsAsync(const Model::ListIpsecServerLogsRequest& request, const ListIpsecServerLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIpsecServerLogsOutcomeCallable listIpsecServerLogsCallable(const Model::ListIpsecServerLogsRequest& request) const;
			ListIpsecServersOutcome listIpsecServers(const Model::ListIpsecServersRequest &request)const;
			void listIpsecServersAsync(const Model::ListIpsecServersRequest& request, const ListIpsecServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIpsecServersOutcomeCallable listIpsecServersCallable(const Model::ListIpsecServersRequest& request) const;
			ListIpv4GatewaysOutcome listIpv4Gateways(const Model::ListIpv4GatewaysRequest &request)const;
			void listIpv4GatewaysAsync(const Model::ListIpv4GatewaysRequest& request, const ListIpv4GatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIpv4GatewaysOutcomeCallable listIpv4GatewaysCallable(const Model::ListIpv4GatewaysRequest& request) const;
			ListNatIpCidrsOutcome listNatIpCidrs(const Model::ListNatIpCidrsRequest &request)const;
			void listNatIpCidrsAsync(const Model::ListNatIpCidrsRequest& request, const ListNatIpCidrsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNatIpCidrsOutcomeCallable listNatIpCidrsCallable(const Model::ListNatIpCidrsRequest& request) const;
			ListNatIpsOutcome listNatIps(const Model::ListNatIpsRequest &request)const;
			void listNatIpsAsync(const Model::ListNatIpsRequest& request, const ListNatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNatIpsOutcomeCallable listNatIpsCallable(const Model::ListNatIpsRequest& request) const;
			ListPrefixListsOutcome listPrefixLists(const Model::ListPrefixListsRequest &request)const;
			void listPrefixListsAsync(const Model::ListPrefixListsRequest& request, const ListPrefixListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrefixListsOutcomeCallable listPrefixListsCallable(const Model::ListPrefixListsRequest& request) const;
			ListPublicIpAddressPoolCidrBlocksOutcome listPublicIpAddressPoolCidrBlocks(const Model::ListPublicIpAddressPoolCidrBlocksRequest &request)const;
			void listPublicIpAddressPoolCidrBlocksAsync(const Model::ListPublicIpAddressPoolCidrBlocksRequest& request, const ListPublicIpAddressPoolCidrBlocksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPublicIpAddressPoolCidrBlocksOutcomeCallable listPublicIpAddressPoolCidrBlocksCallable(const Model::ListPublicIpAddressPoolCidrBlocksRequest& request) const;
			ListPublicIpAddressPoolsOutcome listPublicIpAddressPools(const Model::ListPublicIpAddressPoolsRequest &request)const;
			void listPublicIpAddressPoolsAsync(const Model::ListPublicIpAddressPoolsRequest& request, const ListPublicIpAddressPoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPublicIpAddressPoolsOutcomeCallable listPublicIpAddressPoolsCallable(const Model::ListPublicIpAddressPoolsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagResourcesForExpressConnectOutcome listTagResourcesForExpressConnect(const Model::ListTagResourcesForExpressConnectRequest &request)const;
			void listTagResourcesForExpressConnectAsync(const Model::ListTagResourcesForExpressConnectRequest& request, const ListTagResourcesForExpressConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesForExpressConnectOutcomeCallable listTagResourcesForExpressConnectCallable(const Model::ListTagResourcesForExpressConnectRequest& request) const;
			ListTrafficMirrorFiltersOutcome listTrafficMirrorFilters(const Model::ListTrafficMirrorFiltersRequest &request)const;
			void listTrafficMirrorFiltersAsync(const Model::ListTrafficMirrorFiltersRequest& request, const ListTrafficMirrorFiltersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTrafficMirrorFiltersOutcomeCallable listTrafficMirrorFiltersCallable(const Model::ListTrafficMirrorFiltersRequest& request) const;
			ListTrafficMirrorSessionsOutcome listTrafficMirrorSessions(const Model::ListTrafficMirrorSessionsRequest &request)const;
			void listTrafficMirrorSessionsAsync(const Model::ListTrafficMirrorSessionsRequest& request, const ListTrafficMirrorSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTrafficMirrorSessionsOutcomeCallable listTrafficMirrorSessionsCallable(const Model::ListTrafficMirrorSessionsRequest& request) const;
			ListVSwitchCidrReservationsOutcome listVSwitchCidrReservations(const Model::ListVSwitchCidrReservationsRequest &request)const;
			void listVSwitchCidrReservationsAsync(const Model::ListVSwitchCidrReservationsRequest& request, const ListVSwitchCidrReservationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVSwitchCidrReservationsOutcomeCallable listVSwitchCidrReservationsCallable(const Model::ListVSwitchCidrReservationsRequest& request) const;
			ListVirtualPhysicalConnectionsOutcome listVirtualPhysicalConnections(const Model::ListVirtualPhysicalConnectionsRequest &request)const;
			void listVirtualPhysicalConnectionsAsync(const Model::ListVirtualPhysicalConnectionsRequest& request, const ListVirtualPhysicalConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVirtualPhysicalConnectionsOutcomeCallable listVirtualPhysicalConnectionsCallable(const Model::ListVirtualPhysicalConnectionsRequest& request) const;
			ListVpcEndpointServicesByEndUserOutcome listVpcEndpointServicesByEndUser(const Model::ListVpcEndpointServicesByEndUserRequest &request)const;
			void listVpcEndpointServicesByEndUserAsync(const Model::ListVpcEndpointServicesByEndUserRequest& request, const ListVpcEndpointServicesByEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointServicesByEndUserOutcomeCallable listVpcEndpointServicesByEndUserCallable(const Model::ListVpcEndpointServicesByEndUserRequest& request) const;
			ListVpcGatewayEndpointsOutcome listVpcGatewayEndpoints(const Model::ListVpcGatewayEndpointsRequest &request)const;
			void listVpcGatewayEndpointsAsync(const Model::ListVpcGatewayEndpointsRequest& request, const ListVpcGatewayEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcGatewayEndpointsOutcomeCallable listVpcGatewayEndpointsCallable(const Model::ListVpcGatewayEndpointsRequest& request) const;
			ListVpcPublishedRouteEntriesOutcome listVpcPublishedRouteEntries(const Model::ListVpcPublishedRouteEntriesRequest &request)const;
			void listVpcPublishedRouteEntriesAsync(const Model::ListVpcPublishedRouteEntriesRequest& request, const ListVpcPublishedRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcPublishedRouteEntriesOutcomeCallable listVpcPublishedRouteEntriesCallable(const Model::ListVpcPublishedRouteEntriesRequest& request) const;
			ListVpnCertificateAssociationsOutcome listVpnCertificateAssociations(const Model::ListVpnCertificateAssociationsRequest &request)const;
			void listVpnCertificateAssociationsAsync(const Model::ListVpnCertificateAssociationsRequest& request, const ListVpnCertificateAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpnCertificateAssociationsOutcomeCallable listVpnCertificateAssociationsCallable(const Model::ListVpnCertificateAssociationsRequest& request) const;
			ModifyBgpGroupAttributeOutcome modifyBgpGroupAttribute(const Model::ModifyBgpGroupAttributeRequest &request)const;
			void modifyBgpGroupAttributeAsync(const Model::ModifyBgpGroupAttributeRequest& request, const ModifyBgpGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBgpGroupAttributeOutcomeCallable modifyBgpGroupAttributeCallable(const Model::ModifyBgpGroupAttributeRequest& request) const;
			ModifyBgpPeerAttributeOutcome modifyBgpPeerAttribute(const Model::ModifyBgpPeerAttributeRequest &request)const;
			void modifyBgpPeerAttributeAsync(const Model::ModifyBgpPeerAttributeRequest& request, const ModifyBgpPeerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBgpPeerAttributeOutcomeCallable modifyBgpPeerAttributeCallable(const Model::ModifyBgpPeerAttributeRequest& request) const;
			ModifyCommonBandwidthPackageAttributeOutcome modifyCommonBandwidthPackageAttribute(const Model::ModifyCommonBandwidthPackageAttributeRequest &request)const;
			void modifyCommonBandwidthPackageAttributeAsync(const Model::ModifyCommonBandwidthPackageAttributeRequest& request, const ModifyCommonBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCommonBandwidthPackageAttributeOutcomeCallable modifyCommonBandwidthPackageAttributeCallable(const Model::ModifyCommonBandwidthPackageAttributeRequest& request) const;
			ModifyCommonBandwidthPackageIpBandwidthOutcome modifyCommonBandwidthPackageIpBandwidth(const Model::ModifyCommonBandwidthPackageIpBandwidthRequest &request)const;
			void modifyCommonBandwidthPackageIpBandwidthAsync(const Model::ModifyCommonBandwidthPackageIpBandwidthRequest& request, const ModifyCommonBandwidthPackageIpBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCommonBandwidthPackageIpBandwidthOutcomeCallable modifyCommonBandwidthPackageIpBandwidthCallable(const Model::ModifyCommonBandwidthPackageIpBandwidthRequest& request) const;
			ModifyCommonBandwidthPackageSpecOutcome modifyCommonBandwidthPackageSpec(const Model::ModifyCommonBandwidthPackageSpecRequest &request)const;
			void modifyCommonBandwidthPackageSpecAsync(const Model::ModifyCommonBandwidthPackageSpecRequest& request, const ModifyCommonBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCommonBandwidthPackageSpecOutcomeCallable modifyCommonBandwidthPackageSpecCallable(const Model::ModifyCommonBandwidthPackageSpecRequest& request) const;
			ModifyCustomerGatewayAttributeOutcome modifyCustomerGatewayAttribute(const Model::ModifyCustomerGatewayAttributeRequest &request)const;
			void modifyCustomerGatewayAttributeAsync(const Model::ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCustomerGatewayAttributeOutcomeCallable modifyCustomerGatewayAttributeCallable(const Model::ModifyCustomerGatewayAttributeRequest& request) const;
			ModifyEipAddressAttributeOutcome modifyEipAddressAttribute(const Model::ModifyEipAddressAttributeRequest &request)const;
			void modifyEipAddressAttributeAsync(const Model::ModifyEipAddressAttributeRequest& request, const ModifyEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEipAddressAttributeOutcomeCallable modifyEipAddressAttributeCallable(const Model::ModifyEipAddressAttributeRequest& request) const;
			ModifyEipForwardModeOutcome modifyEipForwardMode(const Model::ModifyEipForwardModeRequest &request)const;
			void modifyEipForwardModeAsync(const Model::ModifyEipForwardModeRequest& request, const ModifyEipForwardModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEipForwardModeOutcomeCallable modifyEipForwardModeCallable(const Model::ModifyEipForwardModeRequest& request) const;
			ModifyExpressCloudConnectionAttributeOutcome modifyExpressCloudConnectionAttribute(const Model::ModifyExpressCloudConnectionAttributeRequest &request)const;
			void modifyExpressCloudConnectionAttributeAsync(const Model::ModifyExpressCloudConnectionAttributeRequest& request, const ModifyExpressCloudConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExpressCloudConnectionAttributeOutcomeCallable modifyExpressCloudConnectionAttributeCallable(const Model::ModifyExpressCloudConnectionAttributeRequest& request) const;
			ModifyExpressCloudConnectionBandwidthOutcome modifyExpressCloudConnectionBandwidth(const Model::ModifyExpressCloudConnectionBandwidthRequest &request)const;
			void modifyExpressCloudConnectionBandwidthAsync(const Model::ModifyExpressCloudConnectionBandwidthRequest& request, const ModifyExpressCloudConnectionBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExpressCloudConnectionBandwidthOutcomeCallable modifyExpressCloudConnectionBandwidthCallable(const Model::ModifyExpressCloudConnectionBandwidthRequest& request) const;
			ModifyExpressConnectTrafficQosOutcome modifyExpressConnectTrafficQos(const Model::ModifyExpressConnectTrafficQosRequest &request)const;
			void modifyExpressConnectTrafficQosAsync(const Model::ModifyExpressConnectTrafficQosRequest& request, const ModifyExpressConnectTrafficQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExpressConnectTrafficQosOutcomeCallable modifyExpressConnectTrafficQosCallable(const Model::ModifyExpressConnectTrafficQosRequest& request) const;
			ModifyExpressConnectTrafficQosQueueOutcome modifyExpressConnectTrafficQosQueue(const Model::ModifyExpressConnectTrafficQosQueueRequest &request)const;
			void modifyExpressConnectTrafficQosQueueAsync(const Model::ModifyExpressConnectTrafficQosQueueRequest& request, const ModifyExpressConnectTrafficQosQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExpressConnectTrafficQosQueueOutcomeCallable modifyExpressConnectTrafficQosQueueCallable(const Model::ModifyExpressConnectTrafficQosQueueRequest& request) const;
			ModifyExpressConnectTrafficQosRuleOutcome modifyExpressConnectTrafficQosRule(const Model::ModifyExpressConnectTrafficQosRuleRequest &request)const;
			void modifyExpressConnectTrafficQosRuleAsync(const Model::ModifyExpressConnectTrafficQosRuleRequest& request, const ModifyExpressConnectTrafficQosRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExpressConnectTrafficQosRuleOutcomeCallable modifyExpressConnectTrafficQosRuleCallable(const Model::ModifyExpressConnectTrafficQosRuleRequest& request) const;
			ModifyFlowLogAttributeOutcome modifyFlowLogAttribute(const Model::ModifyFlowLogAttributeRequest &request)const;
			void modifyFlowLogAttributeAsync(const Model::ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowLogAttributeOutcomeCallable modifyFlowLogAttributeCallable(const Model::ModifyFlowLogAttributeRequest& request) const;
			ModifyForwardEntryOutcome modifyForwardEntry(const Model::ModifyForwardEntryRequest &request)const;
			void modifyForwardEntryAsync(const Model::ModifyForwardEntryRequest& request, const ModifyForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyForwardEntryOutcomeCallable modifyForwardEntryCallable(const Model::ModifyForwardEntryRequest& request) const;
			ModifyFullNatEntryAttributeOutcome modifyFullNatEntryAttribute(const Model::ModifyFullNatEntryAttributeRequest &request)const;
			void modifyFullNatEntryAttributeAsync(const Model::ModifyFullNatEntryAttributeRequest& request, const ModifyFullNatEntryAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFullNatEntryAttributeOutcomeCallable modifyFullNatEntryAttributeCallable(const Model::ModifyFullNatEntryAttributeRequest& request) const;
			ModifyGlobalAccelerationInstanceAttributesOutcome modifyGlobalAccelerationInstanceAttributes(const Model::ModifyGlobalAccelerationInstanceAttributesRequest &request)const;
			void modifyGlobalAccelerationInstanceAttributesAsync(const Model::ModifyGlobalAccelerationInstanceAttributesRequest& request, const ModifyGlobalAccelerationInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGlobalAccelerationInstanceAttributesOutcomeCallable modifyGlobalAccelerationInstanceAttributesCallable(const Model::ModifyGlobalAccelerationInstanceAttributesRequest& request) const;
			ModifyGlobalAccelerationInstanceSpecOutcome modifyGlobalAccelerationInstanceSpec(const Model::ModifyGlobalAccelerationInstanceSpecRequest &request)const;
			void modifyGlobalAccelerationInstanceSpecAsync(const Model::ModifyGlobalAccelerationInstanceSpecRequest& request, const ModifyGlobalAccelerationInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGlobalAccelerationInstanceSpecOutcomeCallable modifyGlobalAccelerationInstanceSpecCallable(const Model::ModifyGlobalAccelerationInstanceSpecRequest& request) const;
			ModifyHaVipAttributeOutcome modifyHaVipAttribute(const Model::ModifyHaVipAttributeRequest &request)const;
			void modifyHaVipAttributeAsync(const Model::ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHaVipAttributeOutcomeCallable modifyHaVipAttributeCallable(const Model::ModifyHaVipAttributeRequest& request) const;
			ModifyIPv6TranslatorAclAttributeOutcome modifyIPv6TranslatorAclAttribute(const Model::ModifyIPv6TranslatorAclAttributeRequest &request)const;
			void modifyIPv6TranslatorAclAttributeAsync(const Model::ModifyIPv6TranslatorAclAttributeRequest& request, const ModifyIPv6TranslatorAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIPv6TranslatorAclAttributeOutcomeCallable modifyIPv6TranslatorAclAttributeCallable(const Model::ModifyIPv6TranslatorAclAttributeRequest& request) const;
			ModifyIPv6TranslatorAclListEntryOutcome modifyIPv6TranslatorAclListEntry(const Model::ModifyIPv6TranslatorAclListEntryRequest &request)const;
			void modifyIPv6TranslatorAclListEntryAsync(const Model::ModifyIPv6TranslatorAclListEntryRequest& request, const ModifyIPv6TranslatorAclListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIPv6TranslatorAclListEntryOutcomeCallable modifyIPv6TranslatorAclListEntryCallable(const Model::ModifyIPv6TranslatorAclListEntryRequest& request) const;
			ModifyIPv6TranslatorAttributeOutcome modifyIPv6TranslatorAttribute(const Model::ModifyIPv6TranslatorAttributeRequest &request)const;
			void modifyIPv6TranslatorAttributeAsync(const Model::ModifyIPv6TranslatorAttributeRequest& request, const ModifyIPv6TranslatorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIPv6TranslatorAttributeOutcomeCallable modifyIPv6TranslatorAttributeCallable(const Model::ModifyIPv6TranslatorAttributeRequest& request) const;
			ModifyIPv6TranslatorBandwidthOutcome modifyIPv6TranslatorBandwidth(const Model::ModifyIPv6TranslatorBandwidthRequest &request)const;
			void modifyIPv6TranslatorBandwidthAsync(const Model::ModifyIPv6TranslatorBandwidthRequest& request, const ModifyIPv6TranslatorBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIPv6TranslatorBandwidthOutcomeCallable modifyIPv6TranslatorBandwidthCallable(const Model::ModifyIPv6TranslatorBandwidthRequest& request) const;
			ModifyIPv6TranslatorEntryOutcome modifyIPv6TranslatorEntry(const Model::ModifyIPv6TranslatorEntryRequest &request)const;
			void modifyIPv6TranslatorEntryAsync(const Model::ModifyIPv6TranslatorEntryRequest& request, const ModifyIPv6TranslatorEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIPv6TranslatorEntryOutcomeCallable modifyIPv6TranslatorEntryCallable(const Model::ModifyIPv6TranslatorEntryRequest& request) const;
			ModifyIpv6AddressAttributeOutcome modifyIpv6AddressAttribute(const Model::ModifyIpv6AddressAttributeRequest &request)const;
			void modifyIpv6AddressAttributeAsync(const Model::ModifyIpv6AddressAttributeRequest& request, const ModifyIpv6AddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpv6AddressAttributeOutcomeCallable modifyIpv6AddressAttributeCallable(const Model::ModifyIpv6AddressAttributeRequest& request) const;
			ModifyIpv6GatewayAttributeOutcome modifyIpv6GatewayAttribute(const Model::ModifyIpv6GatewayAttributeRequest &request)const;
			void modifyIpv6GatewayAttributeAsync(const Model::ModifyIpv6GatewayAttributeRequest& request, const ModifyIpv6GatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpv6GatewayAttributeOutcomeCallable modifyIpv6GatewayAttributeCallable(const Model::ModifyIpv6GatewayAttributeRequest& request) const;
			ModifyIpv6InternetBandwidthOutcome modifyIpv6InternetBandwidth(const Model::ModifyIpv6InternetBandwidthRequest &request)const;
			void modifyIpv6InternetBandwidthAsync(const Model::ModifyIpv6InternetBandwidthRequest& request, const ModifyIpv6InternetBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpv6InternetBandwidthOutcomeCallable modifyIpv6InternetBandwidthCallable(const Model::ModifyIpv6InternetBandwidthRequest& request) const;
			ModifyNatGatewayAttributeOutcome modifyNatGatewayAttribute(const Model::ModifyNatGatewayAttributeRequest &request)const;
			void modifyNatGatewayAttributeAsync(const Model::ModifyNatGatewayAttributeRequest& request, const ModifyNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNatGatewayAttributeOutcomeCallable modifyNatGatewayAttributeCallable(const Model::ModifyNatGatewayAttributeRequest& request) const;
			ModifyNatGatewaySpecOutcome modifyNatGatewaySpec(const Model::ModifyNatGatewaySpecRequest &request)const;
			void modifyNatGatewaySpecAsync(const Model::ModifyNatGatewaySpecRequest& request, const ModifyNatGatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNatGatewaySpecOutcomeCallable modifyNatGatewaySpecCallable(const Model::ModifyNatGatewaySpecRequest& request) const;
			ModifyNatIpAttributeOutcome modifyNatIpAttribute(const Model::ModifyNatIpAttributeRequest &request)const;
			void modifyNatIpAttributeAsync(const Model::ModifyNatIpAttributeRequest& request, const ModifyNatIpAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNatIpAttributeOutcomeCallable modifyNatIpAttributeCallable(const Model::ModifyNatIpAttributeRequest& request) const;
			ModifyNatIpCidrAttributeOutcome modifyNatIpCidrAttribute(const Model::ModifyNatIpCidrAttributeRequest &request)const;
			void modifyNatIpCidrAttributeAsync(const Model::ModifyNatIpCidrAttributeRequest& request, const ModifyNatIpCidrAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNatIpCidrAttributeOutcomeCallable modifyNatIpCidrAttributeCallable(const Model::ModifyNatIpCidrAttributeRequest& request) const;
			ModifyNetworkAclAttributesOutcome modifyNetworkAclAttributes(const Model::ModifyNetworkAclAttributesRequest &request)const;
			void modifyNetworkAclAttributesAsync(const Model::ModifyNetworkAclAttributesRequest& request, const ModifyNetworkAclAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNetworkAclAttributesOutcomeCallable modifyNetworkAclAttributesCallable(const Model::ModifyNetworkAclAttributesRequest& request) const;
			ModifyPhysicalConnectionAttributeOutcome modifyPhysicalConnectionAttribute(const Model::ModifyPhysicalConnectionAttributeRequest &request)const;
			void modifyPhysicalConnectionAttributeAsync(const Model::ModifyPhysicalConnectionAttributeRequest& request, const ModifyPhysicalConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPhysicalConnectionAttributeOutcomeCallable modifyPhysicalConnectionAttributeCallable(const Model::ModifyPhysicalConnectionAttributeRequest& request) const;
			ModifyRouteEntryOutcome modifyRouteEntry(const Model::ModifyRouteEntryRequest &request)const;
			void modifyRouteEntryAsync(const Model::ModifyRouteEntryRequest& request, const ModifyRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRouteEntryOutcomeCallable modifyRouteEntryCallable(const Model::ModifyRouteEntryRequest& request) const;
			ModifyRouteTableAttributesOutcome modifyRouteTableAttributes(const Model::ModifyRouteTableAttributesRequest &request)const;
			void modifyRouteTableAttributesAsync(const Model::ModifyRouteTableAttributesRequest& request, const ModifyRouteTableAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRouteTableAttributesOutcomeCallable modifyRouteTableAttributesCallable(const Model::ModifyRouteTableAttributesRequest& request) const;
			ModifyRouterInterfaceAttributeOutcome modifyRouterInterfaceAttribute(const Model::ModifyRouterInterfaceAttributeRequest &request)const;
			void modifyRouterInterfaceAttributeAsync(const Model::ModifyRouterInterfaceAttributeRequest& request, const ModifyRouterInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRouterInterfaceAttributeOutcomeCallable modifyRouterInterfaceAttributeCallable(const Model::ModifyRouterInterfaceAttributeRequest& request) const;
			ModifyRouterInterfaceSpecOutcome modifyRouterInterfaceSpec(const Model::ModifyRouterInterfaceSpecRequest &request)const;
			void modifyRouterInterfaceSpecAsync(const Model::ModifyRouterInterfaceSpecRequest& request, const ModifyRouterInterfaceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRouterInterfaceSpecOutcomeCallable modifyRouterInterfaceSpecCallable(const Model::ModifyRouterInterfaceSpecRequest& request) const;
			ModifySnatEntryOutcome modifySnatEntry(const Model::ModifySnatEntryRequest &request)const;
			void modifySnatEntryAsync(const Model::ModifySnatEntryRequest& request, const ModifySnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySnatEntryOutcomeCallable modifySnatEntryCallable(const Model::ModifySnatEntryRequest& request) const;
			ModifySslVpnClientCertOutcome modifySslVpnClientCert(const Model::ModifySslVpnClientCertRequest &request)const;
			void modifySslVpnClientCertAsync(const Model::ModifySslVpnClientCertRequest& request, const ModifySslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySslVpnClientCertOutcomeCallable modifySslVpnClientCertCallable(const Model::ModifySslVpnClientCertRequest& request) const;
			ModifySslVpnServerOutcome modifySslVpnServer(const Model::ModifySslVpnServerRequest &request)const;
			void modifySslVpnServerAsync(const Model::ModifySslVpnServerRequest& request, const ModifySslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySslVpnServerOutcomeCallable modifySslVpnServerCallable(const Model::ModifySslVpnServerRequest& request) const;
			ModifyTunnelAttributeOutcome modifyTunnelAttribute(const Model::ModifyTunnelAttributeRequest &request)const;
			void modifyTunnelAttributeAsync(const Model::ModifyTunnelAttributeRequest& request, const ModifyTunnelAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTunnelAttributeOutcomeCallable modifyTunnelAttributeCallable(const Model::ModifyTunnelAttributeRequest& request) const;
			ModifyVRouterAttributeOutcome modifyVRouterAttribute(const Model::ModifyVRouterAttributeRequest &request)const;
			void modifyVRouterAttributeAsync(const Model::ModifyVRouterAttributeRequest& request, const ModifyVRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVRouterAttributeOutcomeCallable modifyVRouterAttributeCallable(const Model::ModifyVRouterAttributeRequest& request) const;
			ModifyVSwitchAttributeOutcome modifyVSwitchAttribute(const Model::ModifyVSwitchAttributeRequest &request)const;
			void modifyVSwitchAttributeAsync(const Model::ModifyVSwitchAttributeRequest& request, const ModifyVSwitchAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVSwitchAttributeOutcomeCallable modifyVSwitchAttributeCallable(const Model::ModifyVSwitchAttributeRequest& request) const;
			ModifyVSwitchCidrReservationAttributeOutcome modifyVSwitchCidrReservationAttribute(const Model::ModifyVSwitchCidrReservationAttributeRequest &request)const;
			void modifyVSwitchCidrReservationAttributeAsync(const Model::ModifyVSwitchCidrReservationAttributeRequest& request, const ModifyVSwitchCidrReservationAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVSwitchCidrReservationAttributeOutcomeCallable modifyVSwitchCidrReservationAttributeCallable(const Model::ModifyVSwitchCidrReservationAttributeRequest& request) const;
			ModifyVcoRouteEntryWeightOutcome modifyVcoRouteEntryWeight(const Model::ModifyVcoRouteEntryWeightRequest &request)const;
			void modifyVcoRouteEntryWeightAsync(const Model::ModifyVcoRouteEntryWeightRequest& request, const ModifyVcoRouteEntryWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVcoRouteEntryWeightOutcomeCallable modifyVcoRouteEntryWeightCallable(const Model::ModifyVcoRouteEntryWeightRequest& request) const;
			ModifyVirtualBorderRouterAttributeOutcome modifyVirtualBorderRouterAttribute(const Model::ModifyVirtualBorderRouterAttributeRequest &request)const;
			void modifyVirtualBorderRouterAttributeAsync(const Model::ModifyVirtualBorderRouterAttributeRequest& request, const ModifyVirtualBorderRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVirtualBorderRouterAttributeOutcomeCallable modifyVirtualBorderRouterAttributeCallable(const Model::ModifyVirtualBorderRouterAttributeRequest& request) const;
			ModifyVpcAttributeOutcome modifyVpcAttribute(const Model::ModifyVpcAttributeRequest &request)const;
			void modifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpcAttributeOutcomeCallable modifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request) const;
			ModifyVpcPrefixListOutcome modifyVpcPrefixList(const Model::ModifyVpcPrefixListRequest &request)const;
			void modifyVpcPrefixListAsync(const Model::ModifyVpcPrefixListRequest& request, const ModifyVpcPrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpcPrefixListOutcomeCallable modifyVpcPrefixListCallable(const Model::ModifyVpcPrefixListRequest& request) const;
			ModifyVpnAttachmentAttributeOutcome modifyVpnAttachmentAttribute(const Model::ModifyVpnAttachmentAttributeRequest &request)const;
			void modifyVpnAttachmentAttributeAsync(const Model::ModifyVpnAttachmentAttributeRequest& request, const ModifyVpnAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpnAttachmentAttributeOutcomeCallable modifyVpnAttachmentAttributeCallable(const Model::ModifyVpnAttachmentAttributeRequest& request) const;
			ModifyVpnConnectionAttributeOutcome modifyVpnConnectionAttribute(const Model::ModifyVpnConnectionAttributeRequest &request)const;
			void modifyVpnConnectionAttributeAsync(const Model::ModifyVpnConnectionAttributeRequest& request, const ModifyVpnConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpnConnectionAttributeOutcomeCallable modifyVpnConnectionAttributeCallable(const Model::ModifyVpnConnectionAttributeRequest& request) const;
			ModifyVpnGatewayAttributeOutcome modifyVpnGatewayAttribute(const Model::ModifyVpnGatewayAttributeRequest &request)const;
			void modifyVpnGatewayAttributeAsync(const Model::ModifyVpnGatewayAttributeRequest& request, const ModifyVpnGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpnGatewayAttributeOutcomeCallable modifyVpnGatewayAttributeCallable(const Model::ModifyVpnGatewayAttributeRequest& request) const;
			ModifyVpnPbrRouteEntryAttributeOutcome modifyVpnPbrRouteEntryAttribute(const Model::ModifyVpnPbrRouteEntryAttributeRequest &request)const;
			void modifyVpnPbrRouteEntryAttributeAsync(const Model::ModifyVpnPbrRouteEntryAttributeRequest& request, const ModifyVpnPbrRouteEntryAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpnPbrRouteEntryAttributeOutcomeCallable modifyVpnPbrRouteEntryAttributeCallable(const Model::ModifyVpnPbrRouteEntryAttributeRequest& request) const;
			ModifyVpnPbrRouteEntryPriorityOutcome modifyVpnPbrRouteEntryPriority(const Model::ModifyVpnPbrRouteEntryPriorityRequest &request)const;
			void modifyVpnPbrRouteEntryPriorityAsync(const Model::ModifyVpnPbrRouteEntryPriorityRequest& request, const ModifyVpnPbrRouteEntryPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpnPbrRouteEntryPriorityOutcomeCallable modifyVpnPbrRouteEntryPriorityCallable(const Model::ModifyVpnPbrRouteEntryPriorityRequest& request) const;
			ModifyVpnPbrRouteEntryWeightOutcome modifyVpnPbrRouteEntryWeight(const Model::ModifyVpnPbrRouteEntryWeightRequest &request)const;
			void modifyVpnPbrRouteEntryWeightAsync(const Model::ModifyVpnPbrRouteEntryWeightRequest& request, const ModifyVpnPbrRouteEntryWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpnPbrRouteEntryWeightOutcomeCallable modifyVpnPbrRouteEntryWeightCallable(const Model::ModifyVpnPbrRouteEntryWeightRequest& request) const;
			ModifyVpnRouteEntryWeightOutcome modifyVpnRouteEntryWeight(const Model::ModifyVpnRouteEntryWeightRequest &request)const;
			void modifyVpnRouteEntryWeightAsync(const Model::ModifyVpnRouteEntryWeightRequest& request, const ModifyVpnRouteEntryWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpnRouteEntryWeightOutcomeCallable modifyVpnRouteEntryWeightCallable(const Model::ModifyVpnRouteEntryWeightRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			MoveVpnResourceGroupOutcome moveVpnResourceGroup(const Model::MoveVpnResourceGroupRequest &request)const;
			void moveVpnResourceGroupAsync(const Model::MoveVpnResourceGroupRequest& request, const MoveVpnResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveVpnResourceGroupOutcomeCallable moveVpnResourceGroupCallable(const Model::MoveVpnResourceGroupRequest& request) const;
			OpenFlowLogServiceOutcome openFlowLogService(const Model::OpenFlowLogServiceRequest &request)const;
			void openFlowLogServiceAsync(const Model::OpenFlowLogServiceRequest& request, const OpenFlowLogServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenFlowLogServiceOutcomeCallable openFlowLogServiceCallable(const Model::OpenFlowLogServiceRequest& request) const;
			OpenPhysicalConnectionServiceOutcome openPhysicalConnectionService(const Model::OpenPhysicalConnectionServiceRequest &request)const;
			void openPhysicalConnectionServiceAsync(const Model::OpenPhysicalConnectionServiceRequest& request, const OpenPhysicalConnectionServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenPhysicalConnectionServiceOutcomeCallable openPhysicalConnectionServiceCallable(const Model::OpenPhysicalConnectionServiceRequest& request) const;
			OpenPublicIpAddressPoolServiceOutcome openPublicIpAddressPoolService(const Model::OpenPublicIpAddressPoolServiceRequest &request)const;
			void openPublicIpAddressPoolServiceAsync(const Model::OpenPublicIpAddressPoolServiceRequest& request, const OpenPublicIpAddressPoolServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenPublicIpAddressPoolServiceOutcomeCallable openPublicIpAddressPoolServiceCallable(const Model::OpenPublicIpAddressPoolServiceRequest& request) const;
			OpenTrafficMirrorServiceOutcome openTrafficMirrorService(const Model::OpenTrafficMirrorServiceRequest &request)const;
			void openTrafficMirrorServiceAsync(const Model::OpenTrafficMirrorServiceRequest& request, const OpenTrafficMirrorServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenTrafficMirrorServiceOutcomeCallable openTrafficMirrorServiceCallable(const Model::OpenTrafficMirrorServiceRequest& request) const;
			PublishVpcRouteEntriesOutcome publishVpcRouteEntries(const Model::PublishVpcRouteEntriesRequest &request)const;
			void publishVpcRouteEntriesAsync(const Model::PublishVpcRouteEntriesRequest& request, const PublishVpcRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishVpcRouteEntriesOutcomeCallable publishVpcRouteEntriesCallable(const Model::PublishVpcRouteEntriesRequest& request) const;
			PublishVpnRouteEntryOutcome publishVpnRouteEntry(const Model::PublishVpnRouteEntryRequest &request)const;
			void publishVpnRouteEntryAsync(const Model::PublishVpnRouteEntryRequest& request, const PublishVpnRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishVpnRouteEntryOutcomeCallable publishVpnRouteEntryCallable(const Model::PublishVpnRouteEntryRequest& request) const;
			RecoverPhysicalConnectionOutcome recoverPhysicalConnection(const Model::RecoverPhysicalConnectionRequest &request)const;
			void recoverPhysicalConnectionAsync(const Model::RecoverPhysicalConnectionRequest& request, const RecoverPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecoverPhysicalConnectionOutcomeCallable recoverPhysicalConnectionCallable(const Model::RecoverPhysicalConnectionRequest& request) const;
			RecoverVirtualBorderRouterOutcome recoverVirtualBorderRouter(const Model::RecoverVirtualBorderRouterRequest &request)const;
			void recoverVirtualBorderRouterAsync(const Model::RecoverVirtualBorderRouterRequest& request, const RecoverVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecoverVirtualBorderRouterOutcomeCallable recoverVirtualBorderRouterCallable(const Model::RecoverVirtualBorderRouterRequest& request) const;
			ReleaseEipAddressOutcome releaseEipAddress(const Model::ReleaseEipAddressRequest &request)const;
			void releaseEipAddressAsync(const Model::ReleaseEipAddressRequest& request, const ReleaseEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseEipAddressOutcomeCallable releaseEipAddressCallable(const Model::ReleaseEipAddressRequest& request) const;
			ReleaseEipSegmentAddressOutcome releaseEipSegmentAddress(const Model::ReleaseEipSegmentAddressRequest &request)const;
			void releaseEipSegmentAddressAsync(const Model::ReleaseEipSegmentAddressRequest& request, const ReleaseEipSegmentAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseEipSegmentAddressOutcomeCallable releaseEipSegmentAddressCallable(const Model::ReleaseEipSegmentAddressRequest& request) const;
			ReleaseIpv6AddressOutcome releaseIpv6Address(const Model::ReleaseIpv6AddressRequest &request)const;
			void releaseIpv6AddressAsync(const Model::ReleaseIpv6AddressRequest& request, const ReleaseIpv6AddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseIpv6AddressOutcomeCallable releaseIpv6AddressCallable(const Model::ReleaseIpv6AddressRequest& request) const;
			RemoveCommonBandwidthPackageIpOutcome removeCommonBandwidthPackageIp(const Model::RemoveCommonBandwidthPackageIpRequest &request)const;
			void removeCommonBandwidthPackageIpAsync(const Model::RemoveCommonBandwidthPackageIpRequest& request, const RemoveCommonBandwidthPackageIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveCommonBandwidthPackageIpOutcomeCallable removeCommonBandwidthPackageIpCallable(const Model::RemoveCommonBandwidthPackageIpRequest& request) const;
			RemoveGlobalAccelerationInstanceIpOutcome removeGlobalAccelerationInstanceIp(const Model::RemoveGlobalAccelerationInstanceIpRequest &request)const;
			void removeGlobalAccelerationInstanceIpAsync(const Model::RemoveGlobalAccelerationInstanceIpRequest& request, const RemoveGlobalAccelerationInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveGlobalAccelerationInstanceIpOutcomeCallable removeGlobalAccelerationInstanceIpCallable(const Model::RemoveGlobalAccelerationInstanceIpRequest& request) const;
			RemoveIPv6TranslatorAclListEntryOutcome removeIPv6TranslatorAclListEntry(const Model::RemoveIPv6TranslatorAclListEntryRequest &request)const;
			void removeIPv6TranslatorAclListEntryAsync(const Model::RemoveIPv6TranslatorAclListEntryRequest& request, const RemoveIPv6TranslatorAclListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveIPv6TranslatorAclListEntryOutcomeCallable removeIPv6TranslatorAclListEntryCallable(const Model::RemoveIPv6TranslatorAclListEntryRequest& request) const;
			RemoveSourcesFromTrafficMirrorSessionOutcome removeSourcesFromTrafficMirrorSession(const Model::RemoveSourcesFromTrafficMirrorSessionRequest &request)const;
			void removeSourcesFromTrafficMirrorSessionAsync(const Model::RemoveSourcesFromTrafficMirrorSessionRequest& request, const RemoveSourcesFromTrafficMirrorSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveSourcesFromTrafficMirrorSessionOutcomeCallable removeSourcesFromTrafficMirrorSessionCallable(const Model::RemoveSourcesFromTrafficMirrorSessionRequest& request) const;
			ReplaceVpcDhcpOptionsSetOutcome replaceVpcDhcpOptionsSet(const Model::ReplaceVpcDhcpOptionsSetRequest &request)const;
			void replaceVpcDhcpOptionsSetAsync(const Model::ReplaceVpcDhcpOptionsSetRequest& request, const ReplaceVpcDhcpOptionsSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceVpcDhcpOptionsSetOutcomeCallable replaceVpcDhcpOptionsSetCallable(const Model::ReplaceVpcDhcpOptionsSetRequest& request) const;
			RetryVpcPrefixListAssociationOutcome retryVpcPrefixListAssociation(const Model::RetryVpcPrefixListAssociationRequest &request)const;
			void retryVpcPrefixListAssociationAsync(const Model::RetryVpcPrefixListAssociationRequest& request, const RetryVpcPrefixListAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryVpcPrefixListAssociationOutcomeCallable retryVpcPrefixListAssociationCallable(const Model::RetryVpcPrefixListAssociationRequest& request) const;
			RevokeInstanceFromCenOutcome revokeInstanceFromCen(const Model::RevokeInstanceFromCenRequest &request)const;
			void revokeInstanceFromCenAsync(const Model::RevokeInstanceFromCenRequest& request, const RevokeInstanceFromCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeInstanceFromCenOutcomeCallable revokeInstanceFromCenCallable(const Model::RevokeInstanceFromCenRequest& request) const;
			RevokeInstanceFromVbrOutcome revokeInstanceFromVbr(const Model::RevokeInstanceFromVbrRequest &request)const;
			void revokeInstanceFromVbrAsync(const Model::RevokeInstanceFromVbrRequest& request, const RevokeInstanceFromVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeInstanceFromVbrOutcomeCallable revokeInstanceFromVbrCallable(const Model::RevokeInstanceFromVbrRequest& request) const;
			SecondApplyPhysicalConnectionLOAOutcome secondApplyPhysicalConnectionLOA(const Model::SecondApplyPhysicalConnectionLOARequest &request)const;
			void secondApplyPhysicalConnectionLOAAsync(const Model::SecondApplyPhysicalConnectionLOARequest& request, const SecondApplyPhysicalConnectionLOAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SecondApplyPhysicalConnectionLOAOutcomeCallable secondApplyPhysicalConnectionLOACallable(const Model::SecondApplyPhysicalConnectionLOARequest& request) const;
			SetHighDefinitionMonitorLogStatusOutcome setHighDefinitionMonitorLogStatus(const Model::SetHighDefinitionMonitorLogStatusRequest &request)const;
			void setHighDefinitionMonitorLogStatusAsync(const Model::SetHighDefinitionMonitorLogStatusRequest& request, const SetHighDefinitionMonitorLogStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetHighDefinitionMonitorLogStatusOutcomeCallable setHighDefinitionMonitorLogStatusCallable(const Model::SetHighDefinitionMonitorLogStatusRequest& request) const;
			StartFailoverTestJobOutcome startFailoverTestJob(const Model::StartFailoverTestJobRequest &request)const;
			void startFailoverTestJobAsync(const Model::StartFailoverTestJobRequest& request, const StartFailoverTestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartFailoverTestJobOutcomeCallable startFailoverTestJobCallable(const Model::StartFailoverTestJobRequest& request) const;
			StopFailoverTestJobOutcome stopFailoverTestJob(const Model::StopFailoverTestJobRequest &request)const;
			void stopFailoverTestJobAsync(const Model::StopFailoverTestJobRequest& request, const StopFailoverTestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopFailoverTestJobOutcomeCallable stopFailoverTestJobCallable(const Model::StopFailoverTestJobRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TagResourcesForExpressConnectOutcome tagResourcesForExpressConnect(const Model::TagResourcesForExpressConnectRequest &request)const;
			void tagResourcesForExpressConnectAsync(const Model::TagResourcesForExpressConnectRequest& request, const TagResourcesForExpressConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesForExpressConnectOutcomeCallable tagResourcesForExpressConnectCallable(const Model::TagResourcesForExpressConnectRequest& request) const;
			TerminatePhysicalConnectionOutcome terminatePhysicalConnection(const Model::TerminatePhysicalConnectionRequest &request)const;
			void terminatePhysicalConnectionAsync(const Model::TerminatePhysicalConnectionRequest& request, const TerminatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TerminatePhysicalConnectionOutcomeCallable terminatePhysicalConnectionCallable(const Model::TerminatePhysicalConnectionRequest& request) const;
			TerminateVirtualBorderRouterOutcome terminateVirtualBorderRouter(const Model::TerminateVirtualBorderRouterRequest &request)const;
			void terminateVirtualBorderRouterAsync(const Model::TerminateVirtualBorderRouterRequest& request, const TerminateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TerminateVirtualBorderRouterOutcomeCallable terminateVirtualBorderRouterCallable(const Model::TerminateVirtualBorderRouterRequest& request) const;
			TransformEipSegmentToPublicIpAddressPoolOutcome transformEipSegmentToPublicIpAddressPool(const Model::TransformEipSegmentToPublicIpAddressPoolRequest &request)const;
			void transformEipSegmentToPublicIpAddressPoolAsync(const Model::TransformEipSegmentToPublicIpAddressPoolRequest& request, const TransformEipSegmentToPublicIpAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransformEipSegmentToPublicIpAddressPoolOutcomeCallable transformEipSegmentToPublicIpAddressPoolCallable(const Model::TransformEipSegmentToPublicIpAddressPoolRequest& request) const;
			UnTagResourcesOutcome unTagResources(const Model::UnTagResourcesRequest &request)const;
			void unTagResourcesAsync(const Model::UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnTagResourcesOutcomeCallable unTagResourcesCallable(const Model::UnTagResourcesRequest& request) const;
			UnassociateEipAddressOutcome unassociateEipAddress(const Model::UnassociateEipAddressRequest &request)const;
			void unassociateEipAddressAsync(const Model::UnassociateEipAddressRequest& request, const UnassociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateEipAddressOutcomeCallable unassociateEipAddressCallable(const Model::UnassociateEipAddressRequest& request) const;
			UnassociateGlobalAccelerationInstanceOutcome unassociateGlobalAccelerationInstance(const Model::UnassociateGlobalAccelerationInstanceRequest &request)const;
			void unassociateGlobalAccelerationInstanceAsync(const Model::UnassociateGlobalAccelerationInstanceRequest& request, const UnassociateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateGlobalAccelerationInstanceOutcomeCallable unassociateGlobalAccelerationInstanceCallable(const Model::UnassociateGlobalAccelerationInstanceRequest& request) const;
			UnassociateHaVipOutcome unassociateHaVip(const Model::UnassociateHaVipRequest &request)const;
			void unassociateHaVipAsync(const Model::UnassociateHaVipRequest& request, const UnassociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateHaVipOutcomeCallable unassociateHaVipCallable(const Model::UnassociateHaVipRequest& request) const;
			UnassociateNetworkAclOutcome unassociateNetworkAcl(const Model::UnassociateNetworkAclRequest &request)const;
			void unassociateNetworkAclAsync(const Model::UnassociateNetworkAclRequest& request, const UnassociateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateNetworkAclOutcomeCallable unassociateNetworkAclCallable(const Model::UnassociateNetworkAclRequest& request) const;
			UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome unassociatePhysicalConnectionFromVirtualBorderRouter(const Model::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest &request)const;
			void unassociatePhysicalConnectionFromVirtualBorderRouterAsync(const Model::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest& request, const UnassociatePhysicalConnectionFromVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociatePhysicalConnectionFromVirtualBorderRouterOutcomeCallable unassociatePhysicalConnectionFromVirtualBorderRouterCallable(const Model::UnassociatePhysicalConnectionFromVirtualBorderRouterRequest& request) const;
			UnassociateRouteTableOutcome unassociateRouteTable(const Model::UnassociateRouteTableRequest &request)const;
			void unassociateRouteTableAsync(const Model::UnassociateRouteTableRequest& request, const UnassociateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateRouteTableOutcomeCallable unassociateRouteTableCallable(const Model::UnassociateRouteTableRequest& request) const;
			UnassociateVpcCidrBlockOutcome unassociateVpcCidrBlock(const Model::UnassociateVpcCidrBlockRequest &request)const;
			void unassociateVpcCidrBlockAsync(const Model::UnassociateVpcCidrBlockRequest& request, const UnassociateVpcCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateVpcCidrBlockOutcomeCallable unassociateVpcCidrBlockCallable(const Model::UnassociateVpcCidrBlockRequest& request) const;
			UntagResourcesForExpressConnectOutcome untagResourcesForExpressConnect(const Model::UntagResourcesForExpressConnectRequest &request)const;
			void untagResourcesForExpressConnectAsync(const Model::UntagResourcesForExpressConnectRequest& request, const UntagResourcesForExpressConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesForExpressConnectOutcomeCallable untagResourcesForExpressConnectCallable(const Model::UntagResourcesForExpressConnectRequest& request) const;
			UpdateDhcpOptionsSetAttributeOutcome updateDhcpOptionsSetAttribute(const Model::UpdateDhcpOptionsSetAttributeRequest &request)const;
			void updateDhcpOptionsSetAttributeAsync(const Model::UpdateDhcpOptionsSetAttributeRequest& request, const UpdateDhcpOptionsSetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDhcpOptionsSetAttributeOutcomeCallable updateDhcpOptionsSetAttributeCallable(const Model::UpdateDhcpOptionsSetAttributeRequest& request) const;
			UpdateFailoverTestJobOutcome updateFailoverTestJob(const Model::UpdateFailoverTestJobRequest &request)const;
			void updateFailoverTestJobAsync(const Model::UpdateFailoverTestJobRequest& request, const UpdateFailoverTestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFailoverTestJobOutcomeCallable updateFailoverTestJobCallable(const Model::UpdateFailoverTestJobRequest& request) const;
			UpdateGatewayRouteTableEntryAttributeOutcome updateGatewayRouteTableEntryAttribute(const Model::UpdateGatewayRouteTableEntryAttributeRequest &request)const;
			void updateGatewayRouteTableEntryAttributeAsync(const Model::UpdateGatewayRouteTableEntryAttributeRequest& request, const UpdateGatewayRouteTableEntryAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayRouteTableEntryAttributeOutcomeCallable updateGatewayRouteTableEntryAttributeCallable(const Model::UpdateGatewayRouteTableEntryAttributeRequest& request) const;
			UpdateIpsecServerOutcome updateIpsecServer(const Model::UpdateIpsecServerRequest &request)const;
			void updateIpsecServerAsync(const Model::UpdateIpsecServerRequest& request, const UpdateIpsecServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIpsecServerOutcomeCallable updateIpsecServerCallable(const Model::UpdateIpsecServerRequest& request) const;
			UpdateIpv4GatewayAttributeOutcome updateIpv4GatewayAttribute(const Model::UpdateIpv4GatewayAttributeRequest &request)const;
			void updateIpv4GatewayAttributeAsync(const Model::UpdateIpv4GatewayAttributeRequest& request, const UpdateIpv4GatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIpv4GatewayAttributeOutcomeCallable updateIpv4GatewayAttributeCallable(const Model::UpdateIpv4GatewayAttributeRequest& request) const;
			UpdateNatGatewayNatTypeOutcome updateNatGatewayNatType(const Model::UpdateNatGatewayNatTypeRequest &request)const;
			void updateNatGatewayNatTypeAsync(const Model::UpdateNatGatewayNatTypeRequest& request, const UpdateNatGatewayNatTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNatGatewayNatTypeOutcomeCallable updateNatGatewayNatTypeCallable(const Model::UpdateNatGatewayNatTypeRequest& request) const;
			UpdateNetworkAclEntriesOutcome updateNetworkAclEntries(const Model::UpdateNetworkAclEntriesRequest &request)const;
			void updateNetworkAclEntriesAsync(const Model::UpdateNetworkAclEntriesRequest& request, const UpdateNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNetworkAclEntriesOutcomeCallable updateNetworkAclEntriesCallable(const Model::UpdateNetworkAclEntriesRequest& request) const;
			UpdatePublicIpAddressPoolAttributeOutcome updatePublicIpAddressPoolAttribute(const Model::UpdatePublicIpAddressPoolAttributeRequest &request)const;
			void updatePublicIpAddressPoolAttributeAsync(const Model::UpdatePublicIpAddressPoolAttributeRequest& request, const UpdatePublicIpAddressPoolAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePublicIpAddressPoolAttributeOutcomeCallable updatePublicIpAddressPoolAttributeCallable(const Model::UpdatePublicIpAddressPoolAttributeRequest& request) const;
			UpdateTrafficMirrorFilterAttributeOutcome updateTrafficMirrorFilterAttribute(const Model::UpdateTrafficMirrorFilterAttributeRequest &request)const;
			void updateTrafficMirrorFilterAttributeAsync(const Model::UpdateTrafficMirrorFilterAttributeRequest& request, const UpdateTrafficMirrorFilterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTrafficMirrorFilterAttributeOutcomeCallable updateTrafficMirrorFilterAttributeCallable(const Model::UpdateTrafficMirrorFilterAttributeRequest& request) const;
			UpdateTrafficMirrorFilterRuleAttributeOutcome updateTrafficMirrorFilterRuleAttribute(const Model::UpdateTrafficMirrorFilterRuleAttributeRequest &request)const;
			void updateTrafficMirrorFilterRuleAttributeAsync(const Model::UpdateTrafficMirrorFilterRuleAttributeRequest& request, const UpdateTrafficMirrorFilterRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTrafficMirrorFilterRuleAttributeOutcomeCallable updateTrafficMirrorFilterRuleAttributeCallable(const Model::UpdateTrafficMirrorFilterRuleAttributeRequest& request) const;
			UpdateTrafficMirrorSessionAttributeOutcome updateTrafficMirrorSessionAttribute(const Model::UpdateTrafficMirrorSessionAttributeRequest &request)const;
			void updateTrafficMirrorSessionAttributeAsync(const Model::UpdateTrafficMirrorSessionAttributeRequest& request, const UpdateTrafficMirrorSessionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTrafficMirrorSessionAttributeOutcomeCallable updateTrafficMirrorSessionAttributeCallable(const Model::UpdateTrafficMirrorSessionAttributeRequest& request) const;
			UpdateVirtualBorderBandwidthOutcome updateVirtualBorderBandwidth(const Model::UpdateVirtualBorderBandwidthRequest &request)const;
			void updateVirtualBorderBandwidthAsync(const Model::UpdateVirtualBorderBandwidthRequest& request, const UpdateVirtualBorderBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVirtualBorderBandwidthOutcomeCallable updateVirtualBorderBandwidthCallable(const Model::UpdateVirtualBorderBandwidthRequest& request) const;
			UpdateVirtualPhysicalConnectionOutcome updateVirtualPhysicalConnection(const Model::UpdateVirtualPhysicalConnectionRequest &request)const;
			void updateVirtualPhysicalConnectionAsync(const Model::UpdateVirtualPhysicalConnectionRequest& request, const UpdateVirtualPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVirtualPhysicalConnectionOutcomeCallable updateVirtualPhysicalConnectionCallable(const Model::UpdateVirtualPhysicalConnectionRequest& request) const;
			UpdateVpcGatewayEndpointAttributeOutcome updateVpcGatewayEndpointAttribute(const Model::UpdateVpcGatewayEndpointAttributeRequest &request)const;
			void updateVpcGatewayEndpointAttributeAsync(const Model::UpdateVpcGatewayEndpointAttributeRequest& request, const UpdateVpcGatewayEndpointAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVpcGatewayEndpointAttributeOutcomeCallable updateVpcGatewayEndpointAttributeCallable(const Model::UpdateVpcGatewayEndpointAttributeRequest& request) const;
			VpcDescribeVpcNatGatewayNetworkInterfaceQuotaOutcome vpcDescribeVpcNatGatewayNetworkInterfaceQuota(const Model::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest &request)const;
			void vpcDescribeVpcNatGatewayNetworkInterfaceQuotaAsync(const Model::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest& request, const VpcDescribeVpcNatGatewayNetworkInterfaceQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VpcDescribeVpcNatGatewayNetworkInterfaceQuotaOutcomeCallable vpcDescribeVpcNatGatewayNetworkInterfaceQuotaCallable(const Model::VpcDescribeVpcNatGatewayNetworkInterfaceQuotaRequest& request) const;
			WithdrawVpcPublishedRouteEntriesOutcome withdrawVpcPublishedRouteEntries(const Model::WithdrawVpcPublishedRouteEntriesRequest &request)const;
			void withdrawVpcPublishedRouteEntriesAsync(const Model::WithdrawVpcPublishedRouteEntriesRequest& request, const WithdrawVpcPublishedRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WithdrawVpcPublishedRouteEntriesOutcomeCallable withdrawVpcPublishedRouteEntriesCallable(const Model::WithdrawVpcPublishedRouteEntriesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VPC_VPCCLIENT_H_
