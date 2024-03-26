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

#ifndef ALIBABACLOUD_CBN_CBNCLIENT_H_
#define ALIBABACLOUD_CBN_CBNCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CbnExport.h"
#include "model/ActiveFlowLogRequest.h"
#include "model/ActiveFlowLogResult.h"
#include "model/AddTrafficMatchRuleToTrafficMarkingPolicyRequest.h"
#include "model/AddTrafficMatchRuleToTrafficMarkingPolicyResult.h"
#include "model/AddTraficMatchRuleToTrafficMarkingPolicyRequest.h"
#include "model/AddTraficMatchRuleToTrafficMarkingPolicyResult.h"
#include "model/AssociateCenBandwidthPackageRequest.h"
#include "model/AssociateCenBandwidthPackageResult.h"
#include "model/AssociateTransitRouterAttachmentWithRouteTableRequest.h"
#include "model/AssociateTransitRouterAttachmentWithRouteTableResult.h"
#include "model/AssociateTransitRouterMulticastDomainRequest.h"
#include "model/AssociateTransitRouterMulticastDomainResult.h"
#include "model/AttachCenChildInstanceRequest.h"
#include "model/AttachCenChildInstanceResult.h"
#include "model/CheckTransitRouterServiceRequest.h"
#include "model/CheckTransitRouterServiceResult.h"
#include "model/CreateCenRequest.h"
#include "model/CreateCenResult.h"
#include "model/CreateCenBandwidthPackageRequest.h"
#include "model/CreateCenBandwidthPackageResult.h"
#include "model/CreateCenChildInstanceRouteEntryToAttachmentRequest.h"
#include "model/CreateCenChildInstanceRouteEntryToAttachmentResult.h"
#include "model/CreateCenChildInstanceRouteEntryToCenRequest.h"
#include "model/CreateCenChildInstanceRouteEntryToCenResult.h"
#include "model/CreateCenInterRegionTrafficQosPolicyRequest.h"
#include "model/CreateCenInterRegionTrafficQosPolicyResult.h"
#include "model/CreateCenInterRegionTrafficQosQueueRequest.h"
#include "model/CreateCenInterRegionTrafficQosQueueResult.h"
#include "model/CreateCenRouteMapRequest.h"
#include "model/CreateCenRouteMapResult.h"
#include "model/CreateFlowlogRequest.h"
#include "model/CreateFlowlogResult.h"
#include "model/CreateTrafficMarkingPolicyRequest.h"
#include "model/CreateTrafficMarkingPolicyResult.h"
#include "model/CreateTransitRouteTableAggregationRequest.h"
#include "model/CreateTransitRouteTableAggregationResult.h"
#include "model/CreateTransitRouterRequest.h"
#include "model/CreateTransitRouterResult.h"
#include "model/CreateTransitRouterCidrRequest.h"
#include "model/CreateTransitRouterCidrResult.h"
#include "model/CreateTransitRouterEcrAttachmentRequest.h"
#include "model/CreateTransitRouterEcrAttachmentResult.h"
#include "model/CreateTransitRouterMulticastDomainRequest.h"
#include "model/CreateTransitRouterMulticastDomainResult.h"
#include "model/CreateTransitRouterPeerAttachmentRequest.h"
#include "model/CreateTransitRouterPeerAttachmentResult.h"
#include "model/CreateTransitRouterPrefixListAssociationRequest.h"
#include "model/CreateTransitRouterPrefixListAssociationResult.h"
#include "model/CreateTransitRouterRouteEntryRequest.h"
#include "model/CreateTransitRouterRouteEntryResult.h"
#include "model/CreateTransitRouterRouteTableRequest.h"
#include "model/CreateTransitRouterRouteTableResult.h"
#include "model/CreateTransitRouterVbrAttachmentRequest.h"
#include "model/CreateTransitRouterVbrAttachmentResult.h"
#include "model/CreateTransitRouterVpcAttachmentRequest.h"
#include "model/CreateTransitRouterVpcAttachmentResult.h"
#include "model/CreateTransitRouterVpnAttachmentRequest.h"
#include "model/CreateTransitRouterVpnAttachmentResult.h"
#include "model/DeactiveFlowLogRequest.h"
#include "model/DeactiveFlowLogResult.h"
#include "model/DeleteCenRequest.h"
#include "model/DeleteCenResult.h"
#include "model/DeleteCenBandwidthPackageRequest.h"
#include "model/DeleteCenBandwidthPackageResult.h"
#include "model/DeleteCenChildInstanceRouteEntryToAttachmentRequest.h"
#include "model/DeleteCenChildInstanceRouteEntryToAttachmentResult.h"
#include "model/DeleteCenChildInstanceRouteEntryToCenRequest.h"
#include "model/DeleteCenChildInstanceRouteEntryToCenResult.h"
#include "model/DeleteCenInterRegionTrafficQosPolicyRequest.h"
#include "model/DeleteCenInterRegionTrafficQosPolicyResult.h"
#include "model/DeleteCenInterRegionTrafficQosQueueRequest.h"
#include "model/DeleteCenInterRegionTrafficQosQueueResult.h"
#include "model/DeleteCenRouteMapRequest.h"
#include "model/DeleteCenRouteMapResult.h"
#include "model/DeleteFlowlogRequest.h"
#include "model/DeleteFlowlogResult.h"
#include "model/DeleteRouteServiceInCenRequest.h"
#include "model/DeleteRouteServiceInCenResult.h"
#include "model/DeleteTrafficMarkingPolicyRequest.h"
#include "model/DeleteTrafficMarkingPolicyResult.h"
#include "model/DeleteTransitRouteTableAggregationRequest.h"
#include "model/DeleteTransitRouteTableAggregationResult.h"
#include "model/DeleteTransitRouterRequest.h"
#include "model/DeleteTransitRouterResult.h"
#include "model/DeleteTransitRouterCidrRequest.h"
#include "model/DeleteTransitRouterCidrResult.h"
#include "model/DeleteTransitRouterEcrAttachmentRequest.h"
#include "model/DeleteTransitRouterEcrAttachmentResult.h"
#include "model/DeleteTransitRouterMulticastDomainRequest.h"
#include "model/DeleteTransitRouterMulticastDomainResult.h"
#include "model/DeleteTransitRouterPeerAttachmentRequest.h"
#include "model/DeleteTransitRouterPeerAttachmentResult.h"
#include "model/DeleteTransitRouterPrefixListAssociationRequest.h"
#include "model/DeleteTransitRouterPrefixListAssociationResult.h"
#include "model/DeleteTransitRouterRouteEntryRequest.h"
#include "model/DeleteTransitRouterRouteEntryResult.h"
#include "model/DeleteTransitRouterRouteTableRequest.h"
#include "model/DeleteTransitRouterRouteTableResult.h"
#include "model/DeleteTransitRouterVbrAttachmentRequest.h"
#include "model/DeleteTransitRouterVbrAttachmentResult.h"
#include "model/DeleteTransitRouterVpcAttachmentRequest.h"
#include "model/DeleteTransitRouterVpcAttachmentResult.h"
#include "model/DeleteTransitRouterVpnAttachmentRequest.h"
#include "model/DeleteTransitRouterVpnAttachmentResult.h"
#include "model/DeregisterTransitRouterMulticastGroupMembersRequest.h"
#include "model/DeregisterTransitRouterMulticastGroupMembersResult.h"
#include "model/DeregisterTransitRouterMulticastGroupSourcesRequest.h"
#include "model/DeregisterTransitRouterMulticastGroupSourcesResult.h"
#include "model/DescribeCenAttachedChildInstanceAttributeRequest.h"
#include "model/DescribeCenAttachedChildInstanceAttributeResult.h"
#include "model/DescribeCenAttachedChildInstancesRequest.h"
#include "model/DescribeCenAttachedChildInstancesResult.h"
#include "model/DescribeCenBandwidthPackagesRequest.h"
#include "model/DescribeCenBandwidthPackagesResult.h"
#include "model/DescribeCenChildInstanceRouteEntriesRequest.h"
#include "model/DescribeCenChildInstanceRouteEntriesResult.h"
#include "model/DescribeCenGeographicSpanRemainingBandwidthRequest.h"
#include "model/DescribeCenGeographicSpanRemainingBandwidthResult.h"
#include "model/DescribeCenGeographicSpansRequest.h"
#include "model/DescribeCenGeographicSpansResult.h"
#include "model/DescribeCenInterRegionBandwidthLimitsRequest.h"
#include "model/DescribeCenInterRegionBandwidthLimitsResult.h"
#include "model/DescribeCenPrivateZoneRoutesRequest.h"
#include "model/DescribeCenPrivateZoneRoutesResult.h"
#include "model/DescribeCenRegionDomainRouteEntriesRequest.h"
#include "model/DescribeCenRegionDomainRouteEntriesResult.h"
#include "model/DescribeCenRouteMapsRequest.h"
#include "model/DescribeCenRouteMapsResult.h"
#include "model/DescribeCenVbrHealthCheckRequest.h"
#include "model/DescribeCenVbrHealthCheckResult.h"
#include "model/DescribeCensRequest.h"
#include "model/DescribeCensResult.h"
#include "model/DescribeChildInstanceRegionsRequest.h"
#include "model/DescribeChildInstanceRegionsResult.h"
#include "model/DescribeFlowlogsRequest.h"
#include "model/DescribeFlowlogsResult.h"
#include "model/DescribeGeographicRegionMembershipRequest.h"
#include "model/DescribeGeographicRegionMembershipResult.h"
#include "model/DescribeGrantRulesToCenRequest.h"
#include "model/DescribeGrantRulesToCenResult.h"
#include "model/DescribeGrantRulesToResourceRequest.h"
#include "model/DescribeGrantRulesToResourceResult.h"
#include "model/DescribePublishedRouteEntriesRequest.h"
#include "model/DescribePublishedRouteEntriesResult.h"
#include "model/DescribeRouteConflictRequest.h"
#include "model/DescribeRouteConflictResult.h"
#include "model/DescribeRouteServicesInCenRequest.h"
#include "model/DescribeRouteServicesInCenResult.h"
#include "model/DescribeTransitRouteTableAggregationRequest.h"
#include "model/DescribeTransitRouteTableAggregationResult.h"
#include "model/DescribeTransitRouteTableAggregationDetailRequest.h"
#include "model/DescribeTransitRouteTableAggregationDetailResult.h"
#include "model/DetachCenChildInstanceRequest.h"
#include "model/DetachCenChildInstanceResult.h"
#include "model/DisableCenVbrHealthCheckRequest.h"
#include "model/DisableCenVbrHealthCheckResult.h"
#include "model/DisableTransitRouterRouteTablePropagationRequest.h"
#include "model/DisableTransitRouterRouteTablePropagationResult.h"
#include "model/DisassociateTransitRouterMulticastDomainRequest.h"
#include "model/DisassociateTransitRouterMulticastDomainResult.h"
#include "model/DissociateTransitRouterAttachmentFromRouteTableRequest.h"
#include "model/DissociateTransitRouterAttachmentFromRouteTableResult.h"
#include "model/EnableCenVbrHealthCheckRequest.h"
#include "model/EnableCenVbrHealthCheckResult.h"
#include "model/EnableTransitRouterRouteTablePropagationRequest.h"
#include "model/EnableTransitRouterRouteTablePropagationResult.h"
#include "model/GrantInstanceToTransitRouterRequest.h"
#include "model/GrantInstanceToTransitRouterResult.h"
#include "model/ListCenChildInstanceRouteEntriesToAttachmentRequest.h"
#include "model/ListCenChildInstanceRouteEntriesToAttachmentResult.h"
#include "model/ListCenInterRegionTrafficQosPoliciesRequest.h"
#include "model/ListCenInterRegionTrafficQosPoliciesResult.h"
#include "model/ListCenInterRegionTrafficQosQueuesRequest.h"
#include "model/ListCenInterRegionTrafficQosQueuesResult.h"
#include "model/ListGrantVSwitchEnisRequest.h"
#include "model/ListGrantVSwitchEnisResult.h"
#include "model/ListGrantVSwitchesToCenRequest.h"
#include "model/ListGrantVSwitchesToCenResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTrafficMarkingPoliciesRequest.h"
#include "model/ListTrafficMarkingPoliciesResult.h"
#include "model/ListTransitRouterAvailableResourceRequest.h"
#include "model/ListTransitRouterAvailableResourceResult.h"
#include "model/ListTransitRouterCidrRequest.h"
#include "model/ListTransitRouterCidrResult.h"
#include "model/ListTransitRouterCidrAllocationRequest.h"
#include "model/ListTransitRouterCidrAllocationResult.h"
#include "model/ListTransitRouterEcrAttachmentsRequest.h"
#include "model/ListTransitRouterEcrAttachmentsResult.h"
#include "model/ListTransitRouterMulticastDomainAssociationsRequest.h"
#include "model/ListTransitRouterMulticastDomainAssociationsResult.h"
#include "model/ListTransitRouterMulticastDomainVSwitchesRequest.h"
#include "model/ListTransitRouterMulticastDomainVSwitchesResult.h"
#include "model/ListTransitRouterMulticastDomainsRequest.h"
#include "model/ListTransitRouterMulticastDomainsResult.h"
#include "model/ListTransitRouterMulticastGroupsRequest.h"
#include "model/ListTransitRouterMulticastGroupsResult.h"
#include "model/ListTransitRouterPeerAttachmentsRequest.h"
#include "model/ListTransitRouterPeerAttachmentsResult.h"
#include "model/ListTransitRouterPrefixListAssociationRequest.h"
#include "model/ListTransitRouterPrefixListAssociationResult.h"
#include "model/ListTransitRouterRouteEntriesRequest.h"
#include "model/ListTransitRouterRouteEntriesResult.h"
#include "model/ListTransitRouterRouteTableAssociationsRequest.h"
#include "model/ListTransitRouterRouteTableAssociationsResult.h"
#include "model/ListTransitRouterRouteTablePropagationsRequest.h"
#include "model/ListTransitRouterRouteTablePropagationsResult.h"
#include "model/ListTransitRouterRouteTablesRequest.h"
#include "model/ListTransitRouterRouteTablesResult.h"
#include "model/ListTransitRouterVbrAttachmentsRequest.h"
#include "model/ListTransitRouterVbrAttachmentsResult.h"
#include "model/ListTransitRouterVpcAttachmentsRequest.h"
#include "model/ListTransitRouterVpcAttachmentsResult.h"
#include "model/ListTransitRouterVpnAttachmentsRequest.h"
#include "model/ListTransitRouterVpnAttachmentsResult.h"
#include "model/ListTransitRoutersRequest.h"
#include "model/ListTransitRoutersResult.h"
#include "model/ModifyCenAttributeRequest.h"
#include "model/ModifyCenAttributeResult.h"
#include "model/ModifyCenBandwidthPackageAttributeRequest.h"
#include "model/ModifyCenBandwidthPackageAttributeResult.h"
#include "model/ModifyCenBandwidthPackageSpecRequest.h"
#include "model/ModifyCenBandwidthPackageSpecResult.h"
#include "model/ModifyCenRouteMapRequest.h"
#include "model/ModifyCenRouteMapResult.h"
#include "model/ModifyFlowLogAttributeRequest.h"
#include "model/ModifyFlowLogAttributeResult.h"
#include "model/ModifyTransitRouterCidrRequest.h"
#include "model/ModifyTransitRouterCidrResult.h"
#include "model/ModifyTransitRouterMulticastDomainRequest.h"
#include "model/ModifyTransitRouterMulticastDomainResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/OpenTransitRouterServiceRequest.h"
#include "model/OpenTransitRouterServiceResult.h"
#include "model/PublishRouteEntriesRequest.h"
#include "model/PublishRouteEntriesResult.h"
#include "model/RefreshTransitRouteTableAggregationRequest.h"
#include "model/RefreshTransitRouteTableAggregationResult.h"
#include "model/RegisterTransitRouterMulticastGroupMembersRequest.h"
#include "model/RegisterTransitRouterMulticastGroupMembersResult.h"
#include "model/RegisterTransitRouterMulticastGroupSourcesRequest.h"
#include "model/RegisterTransitRouterMulticastGroupSourcesResult.h"
#include "model/RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest.h"
#include "model/RemoveTrafficMatchRuleFromTrafficMarkingPolicyResult.h"
#include "model/RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest.h"
#include "model/RemoveTraficMatchRuleFromTrafficMarkingPolicyResult.h"
#include "model/ReplaceTransitRouterRouteTableAssociationRequest.h"
#include "model/ReplaceTransitRouterRouteTableAssociationResult.h"
#include "model/ResolveAndRouteServiceInCenRequest.h"
#include "model/ResolveAndRouteServiceInCenResult.h"
#include "model/RevokeInstanceFromTransitRouterRequest.h"
#include "model/RevokeInstanceFromTransitRouterResult.h"
#include "model/RoutePrivateZoneInCenToVpcRequest.h"
#include "model/RoutePrivateZoneInCenToVpcResult.h"
#include "model/SetCenInterRegionBandwidthLimitRequest.h"
#include "model/SetCenInterRegionBandwidthLimitResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TempUpgradeCenBandwidthPackageSpecRequest.h"
#include "model/TempUpgradeCenBandwidthPackageSpecResult.h"
#include "model/UnassociateCenBandwidthPackageRequest.h"
#include "model/UnassociateCenBandwidthPackageResult.h"
#include "model/UnroutePrivateZoneInCenToVpcRequest.h"
#include "model/UnroutePrivateZoneInCenToVpcResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateCenInterRegionTrafficQosPolicyAttributeRequest.h"
#include "model/UpdateCenInterRegionTrafficQosPolicyAttributeResult.h"
#include "model/UpdateCenInterRegionTrafficQosQueueAttributeRequest.h"
#include "model/UpdateCenInterRegionTrafficQosQueueAttributeResult.h"
#include "model/UpdateTrafficMarkingPolicyAttributeRequest.h"
#include "model/UpdateTrafficMarkingPolicyAttributeResult.h"
#include "model/UpdateTransitRouterRequest.h"
#include "model/UpdateTransitRouterResult.h"
#include "model/UpdateTransitRouterEcrAttachmentAttributeRequest.h"
#include "model/UpdateTransitRouterEcrAttachmentAttributeResult.h"
#include "model/UpdateTransitRouterPeerAttachmentAttributeRequest.h"
#include "model/UpdateTransitRouterPeerAttachmentAttributeResult.h"
#include "model/UpdateTransitRouterRouteEntryRequest.h"
#include "model/UpdateTransitRouterRouteEntryResult.h"
#include "model/UpdateTransitRouterRouteTableRequest.h"
#include "model/UpdateTransitRouterRouteTableResult.h"
#include "model/UpdateTransitRouterVbrAttachmentAttributeRequest.h"
#include "model/UpdateTransitRouterVbrAttachmentAttributeResult.h"
#include "model/UpdateTransitRouterVpcAttachmentAttributeRequest.h"
#include "model/UpdateTransitRouterVpcAttachmentAttributeResult.h"
#include "model/UpdateTransitRouterVpcAttachmentZonesRequest.h"
#include "model/UpdateTransitRouterVpcAttachmentZonesResult.h"
#include "model/UpdateTransitRouterVpnAttachmentAttributeRequest.h"
#include "model/UpdateTransitRouterVpnAttachmentAttributeResult.h"
#include "model/WithdrawPublishedRouteEntriesRequest.h"
#include "model/WithdrawPublishedRouteEntriesResult.h"


namespace AlibabaCloud
{
	namespace Cbn
	{
		class ALIBABACLOUD_CBN_EXPORT CbnClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActiveFlowLogResult> ActiveFlowLogOutcome;
			typedef std::future<ActiveFlowLogOutcome> ActiveFlowLogOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ActiveFlowLogRequest&, const ActiveFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActiveFlowLogAsyncHandler;
			typedef Outcome<Error, Model::AddTrafficMatchRuleToTrafficMarkingPolicyResult> AddTrafficMatchRuleToTrafficMarkingPolicyOutcome;
			typedef std::future<AddTrafficMatchRuleToTrafficMarkingPolicyOutcome> AddTrafficMatchRuleToTrafficMarkingPolicyOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::AddTrafficMatchRuleToTrafficMarkingPolicyRequest&, const AddTrafficMatchRuleToTrafficMarkingPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTrafficMatchRuleToTrafficMarkingPolicyAsyncHandler;
			typedef Outcome<Error, Model::AddTraficMatchRuleToTrafficMarkingPolicyResult> AddTraficMatchRuleToTrafficMarkingPolicyOutcome;
			typedef std::future<AddTraficMatchRuleToTrafficMarkingPolicyOutcome> AddTraficMatchRuleToTrafficMarkingPolicyOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::AddTraficMatchRuleToTrafficMarkingPolicyRequest&, const AddTraficMatchRuleToTrafficMarkingPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTraficMatchRuleToTrafficMarkingPolicyAsyncHandler;
			typedef Outcome<Error, Model::AssociateCenBandwidthPackageResult> AssociateCenBandwidthPackageOutcome;
			typedef std::future<AssociateCenBandwidthPackageOutcome> AssociateCenBandwidthPackageOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::AssociateCenBandwidthPackageRequest&, const AssociateCenBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateCenBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::AssociateTransitRouterAttachmentWithRouteTableResult> AssociateTransitRouterAttachmentWithRouteTableOutcome;
			typedef std::future<AssociateTransitRouterAttachmentWithRouteTableOutcome> AssociateTransitRouterAttachmentWithRouteTableOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::AssociateTransitRouterAttachmentWithRouteTableRequest&, const AssociateTransitRouterAttachmentWithRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateTransitRouterAttachmentWithRouteTableAsyncHandler;
			typedef Outcome<Error, Model::AssociateTransitRouterMulticastDomainResult> AssociateTransitRouterMulticastDomainOutcome;
			typedef std::future<AssociateTransitRouterMulticastDomainOutcome> AssociateTransitRouterMulticastDomainOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::AssociateTransitRouterMulticastDomainRequest&, const AssociateTransitRouterMulticastDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateTransitRouterMulticastDomainAsyncHandler;
			typedef Outcome<Error, Model::AttachCenChildInstanceResult> AttachCenChildInstanceOutcome;
			typedef std::future<AttachCenChildInstanceOutcome> AttachCenChildInstanceOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::AttachCenChildInstanceRequest&, const AttachCenChildInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachCenChildInstanceAsyncHandler;
			typedef Outcome<Error, Model::CheckTransitRouterServiceResult> CheckTransitRouterServiceOutcome;
			typedef std::future<CheckTransitRouterServiceOutcome> CheckTransitRouterServiceOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CheckTransitRouterServiceRequest&, const CheckTransitRouterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckTransitRouterServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateCenResult> CreateCenOutcome;
			typedef std::future<CreateCenOutcome> CreateCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenRequest&, const CreateCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenAsyncHandler;
			typedef Outcome<Error, Model::CreateCenBandwidthPackageResult> CreateCenBandwidthPackageOutcome;
			typedef std::future<CreateCenBandwidthPackageOutcome> CreateCenBandwidthPackageOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenBandwidthPackageRequest&, const CreateCenBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::CreateCenChildInstanceRouteEntryToAttachmentResult> CreateCenChildInstanceRouteEntryToAttachmentOutcome;
			typedef std::future<CreateCenChildInstanceRouteEntryToAttachmentOutcome> CreateCenChildInstanceRouteEntryToAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenChildInstanceRouteEntryToAttachmentRequest&, const CreateCenChildInstanceRouteEntryToAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenChildInstanceRouteEntryToAttachmentAsyncHandler;
			typedef Outcome<Error, Model::CreateCenChildInstanceRouteEntryToCenResult> CreateCenChildInstanceRouteEntryToCenOutcome;
			typedef std::future<CreateCenChildInstanceRouteEntryToCenOutcome> CreateCenChildInstanceRouteEntryToCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenChildInstanceRouteEntryToCenRequest&, const CreateCenChildInstanceRouteEntryToCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenChildInstanceRouteEntryToCenAsyncHandler;
			typedef Outcome<Error, Model::CreateCenInterRegionTrafficQosPolicyResult> CreateCenInterRegionTrafficQosPolicyOutcome;
			typedef std::future<CreateCenInterRegionTrafficQosPolicyOutcome> CreateCenInterRegionTrafficQosPolicyOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenInterRegionTrafficQosPolicyRequest&, const CreateCenInterRegionTrafficQosPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenInterRegionTrafficQosPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateCenInterRegionTrafficQosQueueResult> CreateCenInterRegionTrafficQosQueueOutcome;
			typedef std::future<CreateCenInterRegionTrafficQosQueueOutcome> CreateCenInterRegionTrafficQosQueueOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenInterRegionTrafficQosQueueRequest&, const CreateCenInterRegionTrafficQosQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenInterRegionTrafficQosQueueAsyncHandler;
			typedef Outcome<Error, Model::CreateCenRouteMapResult> CreateCenRouteMapOutcome;
			typedef std::future<CreateCenRouteMapOutcome> CreateCenRouteMapOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenRouteMapRequest&, const CreateCenRouteMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenRouteMapAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowlogResult> CreateFlowlogOutcome;
			typedef std::future<CreateFlowlogOutcome> CreateFlowlogOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateFlowlogRequest&, const CreateFlowlogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowlogAsyncHandler;
			typedef Outcome<Error, Model::CreateTrafficMarkingPolicyResult> CreateTrafficMarkingPolicyOutcome;
			typedef std::future<CreateTrafficMarkingPolicyOutcome> CreateTrafficMarkingPolicyOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTrafficMarkingPolicyRequest&, const CreateTrafficMarkingPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrafficMarkingPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouteTableAggregationResult> CreateTransitRouteTableAggregationOutcome;
			typedef std::future<CreateTransitRouteTableAggregationOutcome> CreateTransitRouteTableAggregationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouteTableAggregationRequest&, const CreateTransitRouteTableAggregationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouteTableAggregationAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterResult> CreateTransitRouterOutcome;
			typedef std::future<CreateTransitRouterOutcome> CreateTransitRouterOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterRequest&, const CreateTransitRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterCidrResult> CreateTransitRouterCidrOutcome;
			typedef std::future<CreateTransitRouterCidrOutcome> CreateTransitRouterCidrOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterCidrRequest&, const CreateTransitRouterCidrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterCidrAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterEcrAttachmentResult> CreateTransitRouterEcrAttachmentOutcome;
			typedef std::future<CreateTransitRouterEcrAttachmentOutcome> CreateTransitRouterEcrAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterEcrAttachmentRequest&, const CreateTransitRouterEcrAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterEcrAttachmentAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterMulticastDomainResult> CreateTransitRouterMulticastDomainOutcome;
			typedef std::future<CreateTransitRouterMulticastDomainOutcome> CreateTransitRouterMulticastDomainOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterMulticastDomainRequest&, const CreateTransitRouterMulticastDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterMulticastDomainAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterPeerAttachmentResult> CreateTransitRouterPeerAttachmentOutcome;
			typedef std::future<CreateTransitRouterPeerAttachmentOutcome> CreateTransitRouterPeerAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterPeerAttachmentRequest&, const CreateTransitRouterPeerAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterPeerAttachmentAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterPrefixListAssociationResult> CreateTransitRouterPrefixListAssociationOutcome;
			typedef std::future<CreateTransitRouterPrefixListAssociationOutcome> CreateTransitRouterPrefixListAssociationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterPrefixListAssociationRequest&, const CreateTransitRouterPrefixListAssociationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterPrefixListAssociationAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterRouteEntryResult> CreateTransitRouterRouteEntryOutcome;
			typedef std::future<CreateTransitRouterRouteEntryOutcome> CreateTransitRouterRouteEntryOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterRouteEntryRequest&, const CreateTransitRouterRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterRouteTableResult> CreateTransitRouterRouteTableOutcome;
			typedef std::future<CreateTransitRouterRouteTableOutcome> CreateTransitRouterRouteTableOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterRouteTableRequest&, const CreateTransitRouterRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterRouteTableAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterVbrAttachmentResult> CreateTransitRouterVbrAttachmentOutcome;
			typedef std::future<CreateTransitRouterVbrAttachmentOutcome> CreateTransitRouterVbrAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterVbrAttachmentRequest&, const CreateTransitRouterVbrAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterVbrAttachmentAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterVpcAttachmentResult> CreateTransitRouterVpcAttachmentOutcome;
			typedef std::future<CreateTransitRouterVpcAttachmentOutcome> CreateTransitRouterVpcAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterVpcAttachmentRequest&, const CreateTransitRouterVpcAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterVpcAttachmentAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterVpnAttachmentResult> CreateTransitRouterVpnAttachmentOutcome;
			typedef std::future<CreateTransitRouterVpnAttachmentOutcome> CreateTransitRouterVpnAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterVpnAttachmentRequest&, const CreateTransitRouterVpnAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterVpnAttachmentAsyncHandler;
			typedef Outcome<Error, Model::DeactiveFlowLogResult> DeactiveFlowLogOutcome;
			typedef std::future<DeactiveFlowLogOutcome> DeactiveFlowLogOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeactiveFlowLogRequest&, const DeactiveFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactiveFlowLogAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenResult> DeleteCenOutcome;
			typedef std::future<DeleteCenOutcome> DeleteCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenRequest&, const DeleteCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenBandwidthPackageResult> DeleteCenBandwidthPackageOutcome;
			typedef std::future<DeleteCenBandwidthPackageOutcome> DeleteCenBandwidthPackageOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenBandwidthPackageRequest&, const DeleteCenBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenChildInstanceRouteEntryToAttachmentResult> DeleteCenChildInstanceRouteEntryToAttachmentOutcome;
			typedef std::future<DeleteCenChildInstanceRouteEntryToAttachmentOutcome> DeleteCenChildInstanceRouteEntryToAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenChildInstanceRouteEntryToAttachmentRequest&, const DeleteCenChildInstanceRouteEntryToAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenChildInstanceRouteEntryToAttachmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenChildInstanceRouteEntryToCenResult> DeleteCenChildInstanceRouteEntryToCenOutcome;
			typedef std::future<DeleteCenChildInstanceRouteEntryToCenOutcome> DeleteCenChildInstanceRouteEntryToCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenChildInstanceRouteEntryToCenRequest&, const DeleteCenChildInstanceRouteEntryToCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenChildInstanceRouteEntryToCenAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenInterRegionTrafficQosPolicyResult> DeleteCenInterRegionTrafficQosPolicyOutcome;
			typedef std::future<DeleteCenInterRegionTrafficQosPolicyOutcome> DeleteCenInterRegionTrafficQosPolicyOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenInterRegionTrafficQosPolicyRequest&, const DeleteCenInterRegionTrafficQosPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenInterRegionTrafficQosPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenInterRegionTrafficQosQueueResult> DeleteCenInterRegionTrafficQosQueueOutcome;
			typedef std::future<DeleteCenInterRegionTrafficQosQueueOutcome> DeleteCenInterRegionTrafficQosQueueOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenInterRegionTrafficQosQueueRequest&, const DeleteCenInterRegionTrafficQosQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenInterRegionTrafficQosQueueAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenRouteMapResult> DeleteCenRouteMapOutcome;
			typedef std::future<DeleteCenRouteMapOutcome> DeleteCenRouteMapOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenRouteMapRequest&, const DeleteCenRouteMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenRouteMapAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowlogResult> DeleteFlowlogOutcome;
			typedef std::future<DeleteFlowlogOutcome> DeleteFlowlogOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteFlowlogRequest&, const DeleteFlowlogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowlogAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouteServiceInCenResult> DeleteRouteServiceInCenOutcome;
			typedef std::future<DeleteRouteServiceInCenOutcome> DeleteRouteServiceInCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteRouteServiceInCenRequest&, const DeleteRouteServiceInCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteServiceInCenAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrafficMarkingPolicyResult> DeleteTrafficMarkingPolicyOutcome;
			typedef std::future<DeleteTrafficMarkingPolicyOutcome> DeleteTrafficMarkingPolicyOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTrafficMarkingPolicyRequest&, const DeleteTrafficMarkingPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrafficMarkingPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouteTableAggregationResult> DeleteTransitRouteTableAggregationOutcome;
			typedef std::future<DeleteTransitRouteTableAggregationOutcome> DeleteTransitRouteTableAggregationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouteTableAggregationRequest&, const DeleteTransitRouteTableAggregationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouteTableAggregationAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterResult> DeleteTransitRouterOutcome;
			typedef std::future<DeleteTransitRouterOutcome> DeleteTransitRouterOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterRequest&, const DeleteTransitRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterCidrResult> DeleteTransitRouterCidrOutcome;
			typedef std::future<DeleteTransitRouterCidrOutcome> DeleteTransitRouterCidrOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterCidrRequest&, const DeleteTransitRouterCidrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterCidrAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterEcrAttachmentResult> DeleteTransitRouterEcrAttachmentOutcome;
			typedef std::future<DeleteTransitRouterEcrAttachmentOutcome> DeleteTransitRouterEcrAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterEcrAttachmentRequest&, const DeleteTransitRouterEcrAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterEcrAttachmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterMulticastDomainResult> DeleteTransitRouterMulticastDomainOutcome;
			typedef std::future<DeleteTransitRouterMulticastDomainOutcome> DeleteTransitRouterMulticastDomainOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterMulticastDomainRequest&, const DeleteTransitRouterMulticastDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterMulticastDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterPeerAttachmentResult> DeleteTransitRouterPeerAttachmentOutcome;
			typedef std::future<DeleteTransitRouterPeerAttachmentOutcome> DeleteTransitRouterPeerAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterPeerAttachmentRequest&, const DeleteTransitRouterPeerAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterPeerAttachmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterPrefixListAssociationResult> DeleteTransitRouterPrefixListAssociationOutcome;
			typedef std::future<DeleteTransitRouterPrefixListAssociationOutcome> DeleteTransitRouterPrefixListAssociationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterPrefixListAssociationRequest&, const DeleteTransitRouterPrefixListAssociationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterPrefixListAssociationAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterRouteEntryResult> DeleteTransitRouterRouteEntryOutcome;
			typedef std::future<DeleteTransitRouterRouteEntryOutcome> DeleteTransitRouterRouteEntryOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterRouteEntryRequest&, const DeleteTransitRouterRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterRouteTableResult> DeleteTransitRouterRouteTableOutcome;
			typedef std::future<DeleteTransitRouterRouteTableOutcome> DeleteTransitRouterRouteTableOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterRouteTableRequest&, const DeleteTransitRouterRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterRouteTableAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterVbrAttachmentResult> DeleteTransitRouterVbrAttachmentOutcome;
			typedef std::future<DeleteTransitRouterVbrAttachmentOutcome> DeleteTransitRouterVbrAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterVbrAttachmentRequest&, const DeleteTransitRouterVbrAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterVbrAttachmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterVpcAttachmentResult> DeleteTransitRouterVpcAttachmentOutcome;
			typedef std::future<DeleteTransitRouterVpcAttachmentOutcome> DeleteTransitRouterVpcAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterVpcAttachmentRequest&, const DeleteTransitRouterVpcAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterVpcAttachmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterVpnAttachmentResult> DeleteTransitRouterVpnAttachmentOutcome;
			typedef std::future<DeleteTransitRouterVpnAttachmentOutcome> DeleteTransitRouterVpnAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterVpnAttachmentRequest&, const DeleteTransitRouterVpnAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterVpnAttachmentAsyncHandler;
			typedef Outcome<Error, Model::DeregisterTransitRouterMulticastGroupMembersResult> DeregisterTransitRouterMulticastGroupMembersOutcome;
			typedef std::future<DeregisterTransitRouterMulticastGroupMembersOutcome> DeregisterTransitRouterMulticastGroupMembersOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeregisterTransitRouterMulticastGroupMembersRequest&, const DeregisterTransitRouterMulticastGroupMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTransitRouterMulticastGroupMembersAsyncHandler;
			typedef Outcome<Error, Model::DeregisterTransitRouterMulticastGroupSourcesResult> DeregisterTransitRouterMulticastGroupSourcesOutcome;
			typedef std::future<DeregisterTransitRouterMulticastGroupSourcesOutcome> DeregisterTransitRouterMulticastGroupSourcesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeregisterTransitRouterMulticastGroupSourcesRequest&, const DeregisterTransitRouterMulticastGroupSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTransitRouterMulticastGroupSourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenAttachedChildInstanceAttributeResult> DescribeCenAttachedChildInstanceAttributeOutcome;
			typedef std::future<DescribeCenAttachedChildInstanceAttributeOutcome> DescribeCenAttachedChildInstanceAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenAttachedChildInstanceAttributeRequest&, const DescribeCenAttachedChildInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenAttachedChildInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenAttachedChildInstancesResult> DescribeCenAttachedChildInstancesOutcome;
			typedef std::future<DescribeCenAttachedChildInstancesOutcome> DescribeCenAttachedChildInstancesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenAttachedChildInstancesRequest&, const DescribeCenAttachedChildInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenAttachedChildInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenBandwidthPackagesResult> DescribeCenBandwidthPackagesOutcome;
			typedef std::future<DescribeCenBandwidthPackagesOutcome> DescribeCenBandwidthPackagesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenBandwidthPackagesRequest&, const DescribeCenBandwidthPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenBandwidthPackagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenChildInstanceRouteEntriesResult> DescribeCenChildInstanceRouteEntriesOutcome;
			typedef std::future<DescribeCenChildInstanceRouteEntriesOutcome> DescribeCenChildInstanceRouteEntriesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenChildInstanceRouteEntriesRequest&, const DescribeCenChildInstanceRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenChildInstanceRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenGeographicSpanRemainingBandwidthResult> DescribeCenGeographicSpanRemainingBandwidthOutcome;
			typedef std::future<DescribeCenGeographicSpanRemainingBandwidthOutcome> DescribeCenGeographicSpanRemainingBandwidthOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenGeographicSpanRemainingBandwidthRequest&, const DescribeCenGeographicSpanRemainingBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenGeographicSpanRemainingBandwidthAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenGeographicSpansResult> DescribeCenGeographicSpansOutcome;
			typedef std::future<DescribeCenGeographicSpansOutcome> DescribeCenGeographicSpansOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenGeographicSpansRequest&, const DescribeCenGeographicSpansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenGeographicSpansAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenInterRegionBandwidthLimitsResult> DescribeCenInterRegionBandwidthLimitsOutcome;
			typedef std::future<DescribeCenInterRegionBandwidthLimitsOutcome> DescribeCenInterRegionBandwidthLimitsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenInterRegionBandwidthLimitsRequest&, const DescribeCenInterRegionBandwidthLimitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenInterRegionBandwidthLimitsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenPrivateZoneRoutesResult> DescribeCenPrivateZoneRoutesOutcome;
			typedef std::future<DescribeCenPrivateZoneRoutesOutcome> DescribeCenPrivateZoneRoutesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenPrivateZoneRoutesRequest&, const DescribeCenPrivateZoneRoutesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenPrivateZoneRoutesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenRegionDomainRouteEntriesResult> DescribeCenRegionDomainRouteEntriesOutcome;
			typedef std::future<DescribeCenRegionDomainRouteEntriesOutcome> DescribeCenRegionDomainRouteEntriesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenRegionDomainRouteEntriesRequest&, const DescribeCenRegionDomainRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenRegionDomainRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenRouteMapsResult> DescribeCenRouteMapsOutcome;
			typedef std::future<DescribeCenRouteMapsOutcome> DescribeCenRouteMapsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenRouteMapsRequest&, const DescribeCenRouteMapsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenRouteMapsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCenVbrHealthCheckResult> DescribeCenVbrHealthCheckOutcome;
			typedef std::future<DescribeCenVbrHealthCheckOutcome> DescribeCenVbrHealthCheckOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCenVbrHealthCheckRequest&, const DescribeCenVbrHealthCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCenVbrHealthCheckAsyncHandler;
			typedef Outcome<Error, Model::DescribeCensResult> DescribeCensOutcome;
			typedef std::future<DescribeCensOutcome> DescribeCensOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeCensRequest&, const DescribeCensOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCensAsyncHandler;
			typedef Outcome<Error, Model::DescribeChildInstanceRegionsResult> DescribeChildInstanceRegionsOutcome;
			typedef std::future<DescribeChildInstanceRegionsOutcome> DescribeChildInstanceRegionsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeChildInstanceRegionsRequest&, const DescribeChildInstanceRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChildInstanceRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowlogsResult> DescribeFlowlogsOutcome;
			typedef std::future<DescribeFlowlogsOutcome> DescribeFlowlogsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeFlowlogsRequest&, const DescribeFlowlogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowlogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGeographicRegionMembershipResult> DescribeGeographicRegionMembershipOutcome;
			typedef std::future<DescribeGeographicRegionMembershipOutcome> DescribeGeographicRegionMembershipOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeGeographicRegionMembershipRequest&, const DescribeGeographicRegionMembershipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeographicRegionMembershipAsyncHandler;
			typedef Outcome<Error, Model::DescribeGrantRulesToCenResult> DescribeGrantRulesToCenOutcome;
			typedef std::future<DescribeGrantRulesToCenOutcome> DescribeGrantRulesToCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeGrantRulesToCenRequest&, const DescribeGrantRulesToCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrantRulesToCenAsyncHandler;
			typedef Outcome<Error, Model::DescribeGrantRulesToResourceResult> DescribeGrantRulesToResourceOutcome;
			typedef std::future<DescribeGrantRulesToResourceOutcome> DescribeGrantRulesToResourceOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeGrantRulesToResourceRequest&, const DescribeGrantRulesToResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrantRulesToResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribePublishedRouteEntriesResult> DescribePublishedRouteEntriesOutcome;
			typedef std::future<DescribePublishedRouteEntriesOutcome> DescribePublishedRouteEntriesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribePublishedRouteEntriesRequest&, const DescribePublishedRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublishedRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteConflictResult> DescribeRouteConflictOutcome;
			typedef std::future<DescribeRouteConflictOutcome> DescribeRouteConflictOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeRouteConflictRequest&, const DescribeRouteConflictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteConflictAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteServicesInCenResult> DescribeRouteServicesInCenOutcome;
			typedef std::future<DescribeRouteServicesInCenOutcome> DescribeRouteServicesInCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeRouteServicesInCenRequest&, const DescribeRouteServicesInCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteServicesInCenAsyncHandler;
			typedef Outcome<Error, Model::DescribeTransitRouteTableAggregationResult> DescribeTransitRouteTableAggregationOutcome;
			typedef std::future<DescribeTransitRouteTableAggregationOutcome> DescribeTransitRouteTableAggregationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeTransitRouteTableAggregationRequest&, const DescribeTransitRouteTableAggregationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTransitRouteTableAggregationAsyncHandler;
			typedef Outcome<Error, Model::DescribeTransitRouteTableAggregationDetailResult> DescribeTransitRouteTableAggregationDetailOutcome;
			typedef std::future<DescribeTransitRouteTableAggregationDetailOutcome> DescribeTransitRouteTableAggregationDetailOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeTransitRouteTableAggregationDetailRequest&, const DescribeTransitRouteTableAggregationDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTransitRouteTableAggregationDetailAsyncHandler;
			typedef Outcome<Error, Model::DetachCenChildInstanceResult> DetachCenChildInstanceOutcome;
			typedef std::future<DetachCenChildInstanceOutcome> DetachCenChildInstanceOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DetachCenChildInstanceRequest&, const DetachCenChildInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachCenChildInstanceAsyncHandler;
			typedef Outcome<Error, Model::DisableCenVbrHealthCheckResult> DisableCenVbrHealthCheckOutcome;
			typedef std::future<DisableCenVbrHealthCheckOutcome> DisableCenVbrHealthCheckOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DisableCenVbrHealthCheckRequest&, const DisableCenVbrHealthCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableCenVbrHealthCheckAsyncHandler;
			typedef Outcome<Error, Model::DisableTransitRouterRouteTablePropagationResult> DisableTransitRouterRouteTablePropagationOutcome;
			typedef std::future<DisableTransitRouterRouteTablePropagationOutcome> DisableTransitRouterRouteTablePropagationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DisableTransitRouterRouteTablePropagationRequest&, const DisableTransitRouterRouteTablePropagationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableTransitRouterRouteTablePropagationAsyncHandler;
			typedef Outcome<Error, Model::DisassociateTransitRouterMulticastDomainResult> DisassociateTransitRouterMulticastDomainOutcome;
			typedef std::future<DisassociateTransitRouterMulticastDomainOutcome> DisassociateTransitRouterMulticastDomainOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DisassociateTransitRouterMulticastDomainRequest&, const DisassociateTransitRouterMulticastDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateTransitRouterMulticastDomainAsyncHandler;
			typedef Outcome<Error, Model::DissociateTransitRouterAttachmentFromRouteTableResult> DissociateTransitRouterAttachmentFromRouteTableOutcome;
			typedef std::future<DissociateTransitRouterAttachmentFromRouteTableOutcome> DissociateTransitRouterAttachmentFromRouteTableOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DissociateTransitRouterAttachmentFromRouteTableRequest&, const DissociateTransitRouterAttachmentFromRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateTransitRouterAttachmentFromRouteTableAsyncHandler;
			typedef Outcome<Error, Model::EnableCenVbrHealthCheckResult> EnableCenVbrHealthCheckOutcome;
			typedef std::future<EnableCenVbrHealthCheckOutcome> EnableCenVbrHealthCheckOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::EnableCenVbrHealthCheckRequest&, const EnableCenVbrHealthCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableCenVbrHealthCheckAsyncHandler;
			typedef Outcome<Error, Model::EnableTransitRouterRouteTablePropagationResult> EnableTransitRouterRouteTablePropagationOutcome;
			typedef std::future<EnableTransitRouterRouteTablePropagationOutcome> EnableTransitRouterRouteTablePropagationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::EnableTransitRouterRouteTablePropagationRequest&, const EnableTransitRouterRouteTablePropagationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableTransitRouterRouteTablePropagationAsyncHandler;
			typedef Outcome<Error, Model::GrantInstanceToTransitRouterResult> GrantInstanceToTransitRouterOutcome;
			typedef std::future<GrantInstanceToTransitRouterOutcome> GrantInstanceToTransitRouterOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::GrantInstanceToTransitRouterRequest&, const GrantInstanceToTransitRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantInstanceToTransitRouterAsyncHandler;
			typedef Outcome<Error, Model::ListCenChildInstanceRouteEntriesToAttachmentResult> ListCenChildInstanceRouteEntriesToAttachmentOutcome;
			typedef std::future<ListCenChildInstanceRouteEntriesToAttachmentOutcome> ListCenChildInstanceRouteEntriesToAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListCenChildInstanceRouteEntriesToAttachmentRequest&, const ListCenChildInstanceRouteEntriesToAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCenChildInstanceRouteEntriesToAttachmentAsyncHandler;
			typedef Outcome<Error, Model::ListCenInterRegionTrafficQosPoliciesResult> ListCenInterRegionTrafficQosPoliciesOutcome;
			typedef std::future<ListCenInterRegionTrafficQosPoliciesOutcome> ListCenInterRegionTrafficQosPoliciesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListCenInterRegionTrafficQosPoliciesRequest&, const ListCenInterRegionTrafficQosPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCenInterRegionTrafficQosPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListCenInterRegionTrafficQosQueuesResult> ListCenInterRegionTrafficQosQueuesOutcome;
			typedef std::future<ListCenInterRegionTrafficQosQueuesOutcome> ListCenInterRegionTrafficQosQueuesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListCenInterRegionTrafficQosQueuesRequest&, const ListCenInterRegionTrafficQosQueuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCenInterRegionTrafficQosQueuesAsyncHandler;
			typedef Outcome<Error, Model::ListGrantVSwitchEnisResult> ListGrantVSwitchEnisOutcome;
			typedef std::future<ListGrantVSwitchEnisOutcome> ListGrantVSwitchEnisOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListGrantVSwitchEnisRequest&, const ListGrantVSwitchEnisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGrantVSwitchEnisAsyncHandler;
			typedef Outcome<Error, Model::ListGrantVSwitchesToCenResult> ListGrantVSwitchesToCenOutcome;
			typedef std::future<ListGrantVSwitchesToCenOutcome> ListGrantVSwitchesToCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListGrantVSwitchesToCenRequest&, const ListGrantVSwitchesToCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGrantVSwitchesToCenAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTrafficMarkingPoliciesResult> ListTrafficMarkingPoliciesOutcome;
			typedef std::future<ListTrafficMarkingPoliciesOutcome> ListTrafficMarkingPoliciesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTrafficMarkingPoliciesRequest&, const ListTrafficMarkingPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTrafficMarkingPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterAvailableResourceResult> ListTransitRouterAvailableResourceOutcome;
			typedef std::future<ListTransitRouterAvailableResourceOutcome> ListTransitRouterAvailableResourceOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterAvailableResourceRequest&, const ListTransitRouterAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterCidrResult> ListTransitRouterCidrOutcome;
			typedef std::future<ListTransitRouterCidrOutcome> ListTransitRouterCidrOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterCidrRequest&, const ListTransitRouterCidrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterCidrAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterCidrAllocationResult> ListTransitRouterCidrAllocationOutcome;
			typedef std::future<ListTransitRouterCidrAllocationOutcome> ListTransitRouterCidrAllocationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterCidrAllocationRequest&, const ListTransitRouterCidrAllocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterCidrAllocationAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterEcrAttachmentsResult> ListTransitRouterEcrAttachmentsOutcome;
			typedef std::future<ListTransitRouterEcrAttachmentsOutcome> ListTransitRouterEcrAttachmentsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterEcrAttachmentsRequest&, const ListTransitRouterEcrAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterEcrAttachmentsAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterMulticastDomainAssociationsResult> ListTransitRouterMulticastDomainAssociationsOutcome;
			typedef std::future<ListTransitRouterMulticastDomainAssociationsOutcome> ListTransitRouterMulticastDomainAssociationsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterMulticastDomainAssociationsRequest&, const ListTransitRouterMulticastDomainAssociationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterMulticastDomainAssociationsAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterMulticastDomainVSwitchesResult> ListTransitRouterMulticastDomainVSwitchesOutcome;
			typedef std::future<ListTransitRouterMulticastDomainVSwitchesOutcome> ListTransitRouterMulticastDomainVSwitchesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterMulticastDomainVSwitchesRequest&, const ListTransitRouterMulticastDomainVSwitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterMulticastDomainVSwitchesAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterMulticastDomainsResult> ListTransitRouterMulticastDomainsOutcome;
			typedef std::future<ListTransitRouterMulticastDomainsOutcome> ListTransitRouterMulticastDomainsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterMulticastDomainsRequest&, const ListTransitRouterMulticastDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterMulticastDomainsAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterMulticastGroupsResult> ListTransitRouterMulticastGroupsOutcome;
			typedef std::future<ListTransitRouterMulticastGroupsOutcome> ListTransitRouterMulticastGroupsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterMulticastGroupsRequest&, const ListTransitRouterMulticastGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterMulticastGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterPeerAttachmentsResult> ListTransitRouterPeerAttachmentsOutcome;
			typedef std::future<ListTransitRouterPeerAttachmentsOutcome> ListTransitRouterPeerAttachmentsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterPeerAttachmentsRequest&, const ListTransitRouterPeerAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterPeerAttachmentsAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterPrefixListAssociationResult> ListTransitRouterPrefixListAssociationOutcome;
			typedef std::future<ListTransitRouterPrefixListAssociationOutcome> ListTransitRouterPrefixListAssociationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterPrefixListAssociationRequest&, const ListTransitRouterPrefixListAssociationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterPrefixListAssociationAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterRouteEntriesResult> ListTransitRouterRouteEntriesOutcome;
			typedef std::future<ListTransitRouterRouteEntriesOutcome> ListTransitRouterRouteEntriesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterRouteEntriesRequest&, const ListTransitRouterRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterRouteTableAssociationsResult> ListTransitRouterRouteTableAssociationsOutcome;
			typedef std::future<ListTransitRouterRouteTableAssociationsOutcome> ListTransitRouterRouteTableAssociationsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterRouteTableAssociationsRequest&, const ListTransitRouterRouteTableAssociationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterRouteTableAssociationsAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterRouteTablePropagationsResult> ListTransitRouterRouteTablePropagationsOutcome;
			typedef std::future<ListTransitRouterRouteTablePropagationsOutcome> ListTransitRouterRouteTablePropagationsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterRouteTablePropagationsRequest&, const ListTransitRouterRouteTablePropagationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterRouteTablePropagationsAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterRouteTablesResult> ListTransitRouterRouteTablesOutcome;
			typedef std::future<ListTransitRouterRouteTablesOutcome> ListTransitRouterRouteTablesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterRouteTablesRequest&, const ListTransitRouterRouteTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterRouteTablesAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterVbrAttachmentsResult> ListTransitRouterVbrAttachmentsOutcome;
			typedef std::future<ListTransitRouterVbrAttachmentsOutcome> ListTransitRouterVbrAttachmentsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterVbrAttachmentsRequest&, const ListTransitRouterVbrAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterVbrAttachmentsAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterVpcAttachmentsResult> ListTransitRouterVpcAttachmentsOutcome;
			typedef std::future<ListTransitRouterVpcAttachmentsOutcome> ListTransitRouterVpcAttachmentsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterVpcAttachmentsRequest&, const ListTransitRouterVpcAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterVpcAttachmentsAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterVpnAttachmentsResult> ListTransitRouterVpnAttachmentsOutcome;
			typedef std::future<ListTransitRouterVpnAttachmentsOutcome> ListTransitRouterVpnAttachmentsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterVpnAttachmentsRequest&, const ListTransitRouterVpnAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterVpnAttachmentsAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRoutersResult> ListTransitRoutersOutcome;
			typedef std::future<ListTransitRoutersOutcome> ListTransitRoutersOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRoutersRequest&, const ListTransitRoutersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRoutersAsyncHandler;
			typedef Outcome<Error, Model::ModifyCenAttributeResult> ModifyCenAttributeOutcome;
			typedef std::future<ModifyCenAttributeOutcome> ModifyCenAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ModifyCenAttributeRequest&, const ModifyCenAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCenAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyCenBandwidthPackageAttributeResult> ModifyCenBandwidthPackageAttributeOutcome;
			typedef std::future<ModifyCenBandwidthPackageAttributeOutcome> ModifyCenBandwidthPackageAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ModifyCenBandwidthPackageAttributeRequest&, const ModifyCenBandwidthPackageAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCenBandwidthPackageAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyCenBandwidthPackageSpecResult> ModifyCenBandwidthPackageSpecOutcome;
			typedef std::future<ModifyCenBandwidthPackageSpecOutcome> ModifyCenBandwidthPackageSpecOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ModifyCenBandwidthPackageSpecRequest&, const ModifyCenBandwidthPackageSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCenBandwidthPackageSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyCenRouteMapResult> ModifyCenRouteMapOutcome;
			typedef std::future<ModifyCenRouteMapOutcome> ModifyCenRouteMapOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ModifyCenRouteMapRequest&, const ModifyCenRouteMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCenRouteMapAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowLogAttributeResult> ModifyFlowLogAttributeOutcome;
			typedef std::future<ModifyFlowLogAttributeOutcome> ModifyFlowLogAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ModifyFlowLogAttributeRequest&, const ModifyFlowLogAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowLogAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyTransitRouterCidrResult> ModifyTransitRouterCidrOutcome;
			typedef std::future<ModifyTransitRouterCidrOutcome> ModifyTransitRouterCidrOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ModifyTransitRouterCidrRequest&, const ModifyTransitRouterCidrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTransitRouterCidrAsyncHandler;
			typedef Outcome<Error, Model::ModifyTransitRouterMulticastDomainResult> ModifyTransitRouterMulticastDomainOutcome;
			typedef std::future<ModifyTransitRouterMulticastDomainOutcome> ModifyTransitRouterMulticastDomainOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ModifyTransitRouterMulticastDomainRequest&, const ModifyTransitRouterMulticastDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTransitRouterMulticastDomainAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::OpenTransitRouterServiceResult> OpenTransitRouterServiceOutcome;
			typedef std::future<OpenTransitRouterServiceOutcome> OpenTransitRouterServiceOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::OpenTransitRouterServiceRequest&, const OpenTransitRouterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenTransitRouterServiceAsyncHandler;
			typedef Outcome<Error, Model::PublishRouteEntriesResult> PublishRouteEntriesOutcome;
			typedef std::future<PublishRouteEntriesOutcome> PublishRouteEntriesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::PublishRouteEntriesRequest&, const PublishRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::RefreshTransitRouteTableAggregationResult> RefreshTransitRouteTableAggregationOutcome;
			typedef std::future<RefreshTransitRouteTableAggregationOutcome> RefreshTransitRouteTableAggregationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::RefreshTransitRouteTableAggregationRequest&, const RefreshTransitRouteTableAggregationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshTransitRouteTableAggregationAsyncHandler;
			typedef Outcome<Error, Model::RegisterTransitRouterMulticastGroupMembersResult> RegisterTransitRouterMulticastGroupMembersOutcome;
			typedef std::future<RegisterTransitRouterMulticastGroupMembersOutcome> RegisterTransitRouterMulticastGroupMembersOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::RegisterTransitRouterMulticastGroupMembersRequest&, const RegisterTransitRouterMulticastGroupMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTransitRouterMulticastGroupMembersAsyncHandler;
			typedef Outcome<Error, Model::RegisterTransitRouterMulticastGroupSourcesResult> RegisterTransitRouterMulticastGroupSourcesOutcome;
			typedef std::future<RegisterTransitRouterMulticastGroupSourcesOutcome> RegisterTransitRouterMulticastGroupSourcesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::RegisterTransitRouterMulticastGroupSourcesRequest&, const RegisterTransitRouterMulticastGroupSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTransitRouterMulticastGroupSourcesAsyncHandler;
			typedef Outcome<Error, Model::RemoveTrafficMatchRuleFromTrafficMarkingPolicyResult> RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcome;
			typedef std::future<RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcome> RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest&, const RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTrafficMatchRuleFromTrafficMarkingPolicyAsyncHandler;
			typedef Outcome<Error, Model::RemoveTraficMatchRuleFromTrafficMarkingPolicyResult> RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcome;
			typedef std::future<RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcome> RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest&, const RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTraficMatchRuleFromTrafficMarkingPolicyAsyncHandler;
			typedef Outcome<Error, Model::ReplaceTransitRouterRouteTableAssociationResult> ReplaceTransitRouterRouteTableAssociationOutcome;
			typedef std::future<ReplaceTransitRouterRouteTableAssociationOutcome> ReplaceTransitRouterRouteTableAssociationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ReplaceTransitRouterRouteTableAssociationRequest&, const ReplaceTransitRouterRouteTableAssociationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceTransitRouterRouteTableAssociationAsyncHandler;
			typedef Outcome<Error, Model::ResolveAndRouteServiceInCenResult> ResolveAndRouteServiceInCenOutcome;
			typedef std::future<ResolveAndRouteServiceInCenOutcome> ResolveAndRouteServiceInCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ResolveAndRouteServiceInCenRequest&, const ResolveAndRouteServiceInCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResolveAndRouteServiceInCenAsyncHandler;
			typedef Outcome<Error, Model::RevokeInstanceFromTransitRouterResult> RevokeInstanceFromTransitRouterOutcome;
			typedef std::future<RevokeInstanceFromTransitRouterOutcome> RevokeInstanceFromTransitRouterOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::RevokeInstanceFromTransitRouterRequest&, const RevokeInstanceFromTransitRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeInstanceFromTransitRouterAsyncHandler;
			typedef Outcome<Error, Model::RoutePrivateZoneInCenToVpcResult> RoutePrivateZoneInCenToVpcOutcome;
			typedef std::future<RoutePrivateZoneInCenToVpcOutcome> RoutePrivateZoneInCenToVpcOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::RoutePrivateZoneInCenToVpcRequest&, const RoutePrivateZoneInCenToVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RoutePrivateZoneInCenToVpcAsyncHandler;
			typedef Outcome<Error, Model::SetCenInterRegionBandwidthLimitResult> SetCenInterRegionBandwidthLimitOutcome;
			typedef std::future<SetCenInterRegionBandwidthLimitOutcome> SetCenInterRegionBandwidthLimitOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::SetCenInterRegionBandwidthLimitRequest&, const SetCenInterRegionBandwidthLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCenInterRegionBandwidthLimitAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TempUpgradeCenBandwidthPackageSpecResult> TempUpgradeCenBandwidthPackageSpecOutcome;
			typedef std::future<TempUpgradeCenBandwidthPackageSpecOutcome> TempUpgradeCenBandwidthPackageSpecOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::TempUpgradeCenBandwidthPackageSpecRequest&, const TempUpgradeCenBandwidthPackageSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TempUpgradeCenBandwidthPackageSpecAsyncHandler;
			typedef Outcome<Error, Model::UnassociateCenBandwidthPackageResult> UnassociateCenBandwidthPackageOutcome;
			typedef std::future<UnassociateCenBandwidthPackageOutcome> UnassociateCenBandwidthPackageOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UnassociateCenBandwidthPackageRequest&, const UnassociateCenBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateCenBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::UnroutePrivateZoneInCenToVpcResult> UnroutePrivateZoneInCenToVpcOutcome;
			typedef std::future<UnroutePrivateZoneInCenToVpcOutcome> UnroutePrivateZoneInCenToVpcOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UnroutePrivateZoneInCenToVpcRequest&, const UnroutePrivateZoneInCenToVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnroutePrivateZoneInCenToVpcAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateCenInterRegionTrafficQosPolicyAttributeResult> UpdateCenInterRegionTrafficQosPolicyAttributeOutcome;
			typedef std::future<UpdateCenInterRegionTrafficQosPolicyAttributeOutcome> UpdateCenInterRegionTrafficQosPolicyAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateCenInterRegionTrafficQosPolicyAttributeRequest&, const UpdateCenInterRegionTrafficQosPolicyAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCenInterRegionTrafficQosPolicyAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateCenInterRegionTrafficQosQueueAttributeResult> UpdateCenInterRegionTrafficQosQueueAttributeOutcome;
			typedef std::future<UpdateCenInterRegionTrafficQosQueueAttributeOutcome> UpdateCenInterRegionTrafficQosQueueAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateCenInterRegionTrafficQosQueueAttributeRequest&, const UpdateCenInterRegionTrafficQosQueueAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCenInterRegionTrafficQosQueueAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateTrafficMarkingPolicyAttributeResult> UpdateTrafficMarkingPolicyAttributeOutcome;
			typedef std::future<UpdateTrafficMarkingPolicyAttributeOutcome> UpdateTrafficMarkingPolicyAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTrafficMarkingPolicyAttributeRequest&, const UpdateTrafficMarkingPolicyAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTrafficMarkingPolicyAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateTransitRouterResult> UpdateTransitRouterOutcome;
			typedef std::future<UpdateTransitRouterOutcome> UpdateTransitRouterOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTransitRouterRequest&, const UpdateTransitRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransitRouterAsyncHandler;
			typedef Outcome<Error, Model::UpdateTransitRouterEcrAttachmentAttributeResult> UpdateTransitRouterEcrAttachmentAttributeOutcome;
			typedef std::future<UpdateTransitRouterEcrAttachmentAttributeOutcome> UpdateTransitRouterEcrAttachmentAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTransitRouterEcrAttachmentAttributeRequest&, const UpdateTransitRouterEcrAttachmentAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransitRouterEcrAttachmentAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateTransitRouterPeerAttachmentAttributeResult> UpdateTransitRouterPeerAttachmentAttributeOutcome;
			typedef std::future<UpdateTransitRouterPeerAttachmentAttributeOutcome> UpdateTransitRouterPeerAttachmentAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTransitRouterPeerAttachmentAttributeRequest&, const UpdateTransitRouterPeerAttachmentAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransitRouterPeerAttachmentAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateTransitRouterRouteEntryResult> UpdateTransitRouterRouteEntryOutcome;
			typedef std::future<UpdateTransitRouterRouteEntryOutcome> UpdateTransitRouterRouteEntryOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTransitRouterRouteEntryRequest&, const UpdateTransitRouterRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransitRouterRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::UpdateTransitRouterRouteTableResult> UpdateTransitRouterRouteTableOutcome;
			typedef std::future<UpdateTransitRouterRouteTableOutcome> UpdateTransitRouterRouteTableOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTransitRouterRouteTableRequest&, const UpdateTransitRouterRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransitRouterRouteTableAsyncHandler;
			typedef Outcome<Error, Model::UpdateTransitRouterVbrAttachmentAttributeResult> UpdateTransitRouterVbrAttachmentAttributeOutcome;
			typedef std::future<UpdateTransitRouterVbrAttachmentAttributeOutcome> UpdateTransitRouterVbrAttachmentAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTransitRouterVbrAttachmentAttributeRequest&, const UpdateTransitRouterVbrAttachmentAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransitRouterVbrAttachmentAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateTransitRouterVpcAttachmentAttributeResult> UpdateTransitRouterVpcAttachmentAttributeOutcome;
			typedef std::future<UpdateTransitRouterVpcAttachmentAttributeOutcome> UpdateTransitRouterVpcAttachmentAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTransitRouterVpcAttachmentAttributeRequest&, const UpdateTransitRouterVpcAttachmentAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransitRouterVpcAttachmentAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateTransitRouterVpcAttachmentZonesResult> UpdateTransitRouterVpcAttachmentZonesOutcome;
			typedef std::future<UpdateTransitRouterVpcAttachmentZonesOutcome> UpdateTransitRouterVpcAttachmentZonesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTransitRouterVpcAttachmentZonesRequest&, const UpdateTransitRouterVpcAttachmentZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransitRouterVpcAttachmentZonesAsyncHandler;
			typedef Outcome<Error, Model::UpdateTransitRouterVpnAttachmentAttributeResult> UpdateTransitRouterVpnAttachmentAttributeOutcome;
			typedef std::future<UpdateTransitRouterVpnAttachmentAttributeOutcome> UpdateTransitRouterVpnAttachmentAttributeOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTransitRouterVpnAttachmentAttributeRequest&, const UpdateTransitRouterVpnAttachmentAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransitRouterVpnAttachmentAttributeAsyncHandler;
			typedef Outcome<Error, Model::WithdrawPublishedRouteEntriesResult> WithdrawPublishedRouteEntriesOutcome;
			typedef std::future<WithdrawPublishedRouteEntriesOutcome> WithdrawPublishedRouteEntriesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::WithdrawPublishedRouteEntriesRequest&, const WithdrawPublishedRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawPublishedRouteEntriesAsyncHandler;

			CbnClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CbnClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CbnClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CbnClient();
			ActiveFlowLogOutcome activeFlowLog(const Model::ActiveFlowLogRequest &request)const;
			void activeFlowLogAsync(const Model::ActiveFlowLogRequest& request, const ActiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActiveFlowLogOutcomeCallable activeFlowLogCallable(const Model::ActiveFlowLogRequest& request) const;
			AddTrafficMatchRuleToTrafficMarkingPolicyOutcome addTrafficMatchRuleToTrafficMarkingPolicy(const Model::AddTrafficMatchRuleToTrafficMarkingPolicyRequest &request)const;
			void addTrafficMatchRuleToTrafficMarkingPolicyAsync(const Model::AddTrafficMatchRuleToTrafficMarkingPolicyRequest& request, const AddTrafficMatchRuleToTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTrafficMatchRuleToTrafficMarkingPolicyOutcomeCallable addTrafficMatchRuleToTrafficMarkingPolicyCallable(const Model::AddTrafficMatchRuleToTrafficMarkingPolicyRequest& request) const;
			AddTraficMatchRuleToTrafficMarkingPolicyOutcome addTraficMatchRuleToTrafficMarkingPolicy(const Model::AddTraficMatchRuleToTrafficMarkingPolicyRequest &request)const;
			void addTraficMatchRuleToTrafficMarkingPolicyAsync(const Model::AddTraficMatchRuleToTrafficMarkingPolicyRequest& request, const AddTraficMatchRuleToTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTraficMatchRuleToTrafficMarkingPolicyOutcomeCallable addTraficMatchRuleToTrafficMarkingPolicyCallable(const Model::AddTraficMatchRuleToTrafficMarkingPolicyRequest& request) const;
			AssociateCenBandwidthPackageOutcome associateCenBandwidthPackage(const Model::AssociateCenBandwidthPackageRequest &request)const;
			void associateCenBandwidthPackageAsync(const Model::AssociateCenBandwidthPackageRequest& request, const AssociateCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateCenBandwidthPackageOutcomeCallable associateCenBandwidthPackageCallable(const Model::AssociateCenBandwidthPackageRequest& request) const;
			AssociateTransitRouterAttachmentWithRouteTableOutcome associateTransitRouterAttachmentWithRouteTable(const Model::AssociateTransitRouterAttachmentWithRouteTableRequest &request)const;
			void associateTransitRouterAttachmentWithRouteTableAsync(const Model::AssociateTransitRouterAttachmentWithRouteTableRequest& request, const AssociateTransitRouterAttachmentWithRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateTransitRouterAttachmentWithRouteTableOutcomeCallable associateTransitRouterAttachmentWithRouteTableCallable(const Model::AssociateTransitRouterAttachmentWithRouteTableRequest& request) const;
			AssociateTransitRouterMulticastDomainOutcome associateTransitRouterMulticastDomain(const Model::AssociateTransitRouterMulticastDomainRequest &request)const;
			void associateTransitRouterMulticastDomainAsync(const Model::AssociateTransitRouterMulticastDomainRequest& request, const AssociateTransitRouterMulticastDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateTransitRouterMulticastDomainOutcomeCallable associateTransitRouterMulticastDomainCallable(const Model::AssociateTransitRouterMulticastDomainRequest& request) const;
			AttachCenChildInstanceOutcome attachCenChildInstance(const Model::AttachCenChildInstanceRequest &request)const;
			void attachCenChildInstanceAsync(const Model::AttachCenChildInstanceRequest& request, const AttachCenChildInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachCenChildInstanceOutcomeCallable attachCenChildInstanceCallable(const Model::AttachCenChildInstanceRequest& request) const;
			CheckTransitRouterServiceOutcome checkTransitRouterService(const Model::CheckTransitRouterServiceRequest &request)const;
			void checkTransitRouterServiceAsync(const Model::CheckTransitRouterServiceRequest& request, const CheckTransitRouterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckTransitRouterServiceOutcomeCallable checkTransitRouterServiceCallable(const Model::CheckTransitRouterServiceRequest& request) const;
			CreateCenOutcome createCen(const Model::CreateCenRequest &request)const;
			void createCenAsync(const Model::CreateCenRequest& request, const CreateCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenOutcomeCallable createCenCallable(const Model::CreateCenRequest& request) const;
			CreateCenBandwidthPackageOutcome createCenBandwidthPackage(const Model::CreateCenBandwidthPackageRequest &request)const;
			void createCenBandwidthPackageAsync(const Model::CreateCenBandwidthPackageRequest& request, const CreateCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenBandwidthPackageOutcomeCallable createCenBandwidthPackageCallable(const Model::CreateCenBandwidthPackageRequest& request) const;
			CreateCenChildInstanceRouteEntryToAttachmentOutcome createCenChildInstanceRouteEntryToAttachment(const Model::CreateCenChildInstanceRouteEntryToAttachmentRequest &request)const;
			void createCenChildInstanceRouteEntryToAttachmentAsync(const Model::CreateCenChildInstanceRouteEntryToAttachmentRequest& request, const CreateCenChildInstanceRouteEntryToAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenChildInstanceRouteEntryToAttachmentOutcomeCallable createCenChildInstanceRouteEntryToAttachmentCallable(const Model::CreateCenChildInstanceRouteEntryToAttachmentRequest& request) const;
			CreateCenChildInstanceRouteEntryToCenOutcome createCenChildInstanceRouteEntryToCen(const Model::CreateCenChildInstanceRouteEntryToCenRequest &request)const;
			void createCenChildInstanceRouteEntryToCenAsync(const Model::CreateCenChildInstanceRouteEntryToCenRequest& request, const CreateCenChildInstanceRouteEntryToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenChildInstanceRouteEntryToCenOutcomeCallable createCenChildInstanceRouteEntryToCenCallable(const Model::CreateCenChildInstanceRouteEntryToCenRequest& request) const;
			CreateCenInterRegionTrafficQosPolicyOutcome createCenInterRegionTrafficQosPolicy(const Model::CreateCenInterRegionTrafficQosPolicyRequest &request)const;
			void createCenInterRegionTrafficQosPolicyAsync(const Model::CreateCenInterRegionTrafficQosPolicyRequest& request, const CreateCenInterRegionTrafficQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenInterRegionTrafficQosPolicyOutcomeCallable createCenInterRegionTrafficQosPolicyCallable(const Model::CreateCenInterRegionTrafficQosPolicyRequest& request) const;
			CreateCenInterRegionTrafficQosQueueOutcome createCenInterRegionTrafficQosQueue(const Model::CreateCenInterRegionTrafficQosQueueRequest &request)const;
			void createCenInterRegionTrafficQosQueueAsync(const Model::CreateCenInterRegionTrafficQosQueueRequest& request, const CreateCenInterRegionTrafficQosQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenInterRegionTrafficQosQueueOutcomeCallable createCenInterRegionTrafficQosQueueCallable(const Model::CreateCenInterRegionTrafficQosQueueRequest& request) const;
			CreateCenRouteMapOutcome createCenRouteMap(const Model::CreateCenRouteMapRequest &request)const;
			void createCenRouteMapAsync(const Model::CreateCenRouteMapRequest& request, const CreateCenRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenRouteMapOutcomeCallable createCenRouteMapCallable(const Model::CreateCenRouteMapRequest& request) const;
			CreateFlowlogOutcome createFlowlog(const Model::CreateFlowlogRequest &request)const;
			void createFlowlogAsync(const Model::CreateFlowlogRequest& request, const CreateFlowlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowlogOutcomeCallable createFlowlogCallable(const Model::CreateFlowlogRequest& request) const;
			CreateTrafficMarkingPolicyOutcome createTrafficMarkingPolicy(const Model::CreateTrafficMarkingPolicyRequest &request)const;
			void createTrafficMarkingPolicyAsync(const Model::CreateTrafficMarkingPolicyRequest& request, const CreateTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrafficMarkingPolicyOutcomeCallable createTrafficMarkingPolicyCallable(const Model::CreateTrafficMarkingPolicyRequest& request) const;
			CreateTransitRouteTableAggregationOutcome createTransitRouteTableAggregation(const Model::CreateTransitRouteTableAggregationRequest &request)const;
			void createTransitRouteTableAggregationAsync(const Model::CreateTransitRouteTableAggregationRequest& request, const CreateTransitRouteTableAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouteTableAggregationOutcomeCallable createTransitRouteTableAggregationCallable(const Model::CreateTransitRouteTableAggregationRequest& request) const;
			CreateTransitRouterOutcome createTransitRouter(const Model::CreateTransitRouterRequest &request)const;
			void createTransitRouterAsync(const Model::CreateTransitRouterRequest& request, const CreateTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterOutcomeCallable createTransitRouterCallable(const Model::CreateTransitRouterRequest& request) const;
			CreateTransitRouterCidrOutcome createTransitRouterCidr(const Model::CreateTransitRouterCidrRequest &request)const;
			void createTransitRouterCidrAsync(const Model::CreateTransitRouterCidrRequest& request, const CreateTransitRouterCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterCidrOutcomeCallable createTransitRouterCidrCallable(const Model::CreateTransitRouterCidrRequest& request) const;
			CreateTransitRouterEcrAttachmentOutcome createTransitRouterEcrAttachment(const Model::CreateTransitRouterEcrAttachmentRequest &request)const;
			void createTransitRouterEcrAttachmentAsync(const Model::CreateTransitRouterEcrAttachmentRequest& request, const CreateTransitRouterEcrAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterEcrAttachmentOutcomeCallable createTransitRouterEcrAttachmentCallable(const Model::CreateTransitRouterEcrAttachmentRequest& request) const;
			CreateTransitRouterMulticastDomainOutcome createTransitRouterMulticastDomain(const Model::CreateTransitRouterMulticastDomainRequest &request)const;
			void createTransitRouterMulticastDomainAsync(const Model::CreateTransitRouterMulticastDomainRequest& request, const CreateTransitRouterMulticastDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterMulticastDomainOutcomeCallable createTransitRouterMulticastDomainCallable(const Model::CreateTransitRouterMulticastDomainRequest& request) const;
			CreateTransitRouterPeerAttachmentOutcome createTransitRouterPeerAttachment(const Model::CreateTransitRouterPeerAttachmentRequest &request)const;
			void createTransitRouterPeerAttachmentAsync(const Model::CreateTransitRouterPeerAttachmentRequest& request, const CreateTransitRouterPeerAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterPeerAttachmentOutcomeCallable createTransitRouterPeerAttachmentCallable(const Model::CreateTransitRouterPeerAttachmentRequest& request) const;
			CreateTransitRouterPrefixListAssociationOutcome createTransitRouterPrefixListAssociation(const Model::CreateTransitRouterPrefixListAssociationRequest &request)const;
			void createTransitRouterPrefixListAssociationAsync(const Model::CreateTransitRouterPrefixListAssociationRequest& request, const CreateTransitRouterPrefixListAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterPrefixListAssociationOutcomeCallable createTransitRouterPrefixListAssociationCallable(const Model::CreateTransitRouterPrefixListAssociationRequest& request) const;
			CreateTransitRouterRouteEntryOutcome createTransitRouterRouteEntry(const Model::CreateTransitRouterRouteEntryRequest &request)const;
			void createTransitRouterRouteEntryAsync(const Model::CreateTransitRouterRouteEntryRequest& request, const CreateTransitRouterRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterRouteEntryOutcomeCallable createTransitRouterRouteEntryCallable(const Model::CreateTransitRouterRouteEntryRequest& request) const;
			CreateTransitRouterRouteTableOutcome createTransitRouterRouteTable(const Model::CreateTransitRouterRouteTableRequest &request)const;
			void createTransitRouterRouteTableAsync(const Model::CreateTransitRouterRouteTableRequest& request, const CreateTransitRouterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterRouteTableOutcomeCallable createTransitRouterRouteTableCallable(const Model::CreateTransitRouterRouteTableRequest& request) const;
			CreateTransitRouterVbrAttachmentOutcome createTransitRouterVbrAttachment(const Model::CreateTransitRouterVbrAttachmentRequest &request)const;
			void createTransitRouterVbrAttachmentAsync(const Model::CreateTransitRouterVbrAttachmentRequest& request, const CreateTransitRouterVbrAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterVbrAttachmentOutcomeCallable createTransitRouterVbrAttachmentCallable(const Model::CreateTransitRouterVbrAttachmentRequest& request) const;
			CreateTransitRouterVpcAttachmentOutcome createTransitRouterVpcAttachment(const Model::CreateTransitRouterVpcAttachmentRequest &request)const;
			void createTransitRouterVpcAttachmentAsync(const Model::CreateTransitRouterVpcAttachmentRequest& request, const CreateTransitRouterVpcAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterVpcAttachmentOutcomeCallable createTransitRouterVpcAttachmentCallable(const Model::CreateTransitRouterVpcAttachmentRequest& request) const;
			CreateTransitRouterVpnAttachmentOutcome createTransitRouterVpnAttachment(const Model::CreateTransitRouterVpnAttachmentRequest &request)const;
			void createTransitRouterVpnAttachmentAsync(const Model::CreateTransitRouterVpnAttachmentRequest& request, const CreateTransitRouterVpnAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterVpnAttachmentOutcomeCallable createTransitRouterVpnAttachmentCallable(const Model::CreateTransitRouterVpnAttachmentRequest& request) const;
			DeactiveFlowLogOutcome deactiveFlowLog(const Model::DeactiveFlowLogRequest &request)const;
			void deactiveFlowLogAsync(const Model::DeactiveFlowLogRequest& request, const DeactiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactiveFlowLogOutcomeCallable deactiveFlowLogCallable(const Model::DeactiveFlowLogRequest& request) const;
			DeleteCenOutcome deleteCen(const Model::DeleteCenRequest &request)const;
			void deleteCenAsync(const Model::DeleteCenRequest& request, const DeleteCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenOutcomeCallable deleteCenCallable(const Model::DeleteCenRequest& request) const;
			DeleteCenBandwidthPackageOutcome deleteCenBandwidthPackage(const Model::DeleteCenBandwidthPackageRequest &request)const;
			void deleteCenBandwidthPackageAsync(const Model::DeleteCenBandwidthPackageRequest& request, const DeleteCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenBandwidthPackageOutcomeCallable deleteCenBandwidthPackageCallable(const Model::DeleteCenBandwidthPackageRequest& request) const;
			DeleteCenChildInstanceRouteEntryToAttachmentOutcome deleteCenChildInstanceRouteEntryToAttachment(const Model::DeleteCenChildInstanceRouteEntryToAttachmentRequest &request)const;
			void deleteCenChildInstanceRouteEntryToAttachmentAsync(const Model::DeleteCenChildInstanceRouteEntryToAttachmentRequest& request, const DeleteCenChildInstanceRouteEntryToAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenChildInstanceRouteEntryToAttachmentOutcomeCallable deleteCenChildInstanceRouteEntryToAttachmentCallable(const Model::DeleteCenChildInstanceRouteEntryToAttachmentRequest& request) const;
			DeleteCenChildInstanceRouteEntryToCenOutcome deleteCenChildInstanceRouteEntryToCen(const Model::DeleteCenChildInstanceRouteEntryToCenRequest &request)const;
			void deleteCenChildInstanceRouteEntryToCenAsync(const Model::DeleteCenChildInstanceRouteEntryToCenRequest& request, const DeleteCenChildInstanceRouteEntryToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenChildInstanceRouteEntryToCenOutcomeCallable deleteCenChildInstanceRouteEntryToCenCallable(const Model::DeleteCenChildInstanceRouteEntryToCenRequest& request) const;
			DeleteCenInterRegionTrafficQosPolicyOutcome deleteCenInterRegionTrafficQosPolicy(const Model::DeleteCenInterRegionTrafficQosPolicyRequest &request)const;
			void deleteCenInterRegionTrafficQosPolicyAsync(const Model::DeleteCenInterRegionTrafficQosPolicyRequest& request, const DeleteCenInterRegionTrafficQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenInterRegionTrafficQosPolicyOutcomeCallable deleteCenInterRegionTrafficQosPolicyCallable(const Model::DeleteCenInterRegionTrafficQosPolicyRequest& request) const;
			DeleteCenInterRegionTrafficQosQueueOutcome deleteCenInterRegionTrafficQosQueue(const Model::DeleteCenInterRegionTrafficQosQueueRequest &request)const;
			void deleteCenInterRegionTrafficQosQueueAsync(const Model::DeleteCenInterRegionTrafficQosQueueRequest& request, const DeleteCenInterRegionTrafficQosQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenInterRegionTrafficQosQueueOutcomeCallable deleteCenInterRegionTrafficQosQueueCallable(const Model::DeleteCenInterRegionTrafficQosQueueRequest& request) const;
			DeleteCenRouteMapOutcome deleteCenRouteMap(const Model::DeleteCenRouteMapRequest &request)const;
			void deleteCenRouteMapAsync(const Model::DeleteCenRouteMapRequest& request, const DeleteCenRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenRouteMapOutcomeCallable deleteCenRouteMapCallable(const Model::DeleteCenRouteMapRequest& request) const;
			DeleteFlowlogOutcome deleteFlowlog(const Model::DeleteFlowlogRequest &request)const;
			void deleteFlowlogAsync(const Model::DeleteFlowlogRequest& request, const DeleteFlowlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowlogOutcomeCallable deleteFlowlogCallable(const Model::DeleteFlowlogRequest& request) const;
			DeleteRouteServiceInCenOutcome deleteRouteServiceInCen(const Model::DeleteRouteServiceInCenRequest &request)const;
			void deleteRouteServiceInCenAsync(const Model::DeleteRouteServiceInCenRequest& request, const DeleteRouteServiceInCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouteServiceInCenOutcomeCallable deleteRouteServiceInCenCallable(const Model::DeleteRouteServiceInCenRequest& request) const;
			DeleteTrafficMarkingPolicyOutcome deleteTrafficMarkingPolicy(const Model::DeleteTrafficMarkingPolicyRequest &request)const;
			void deleteTrafficMarkingPolicyAsync(const Model::DeleteTrafficMarkingPolicyRequest& request, const DeleteTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrafficMarkingPolicyOutcomeCallable deleteTrafficMarkingPolicyCallable(const Model::DeleteTrafficMarkingPolicyRequest& request) const;
			DeleteTransitRouteTableAggregationOutcome deleteTransitRouteTableAggregation(const Model::DeleteTransitRouteTableAggregationRequest &request)const;
			void deleteTransitRouteTableAggregationAsync(const Model::DeleteTransitRouteTableAggregationRequest& request, const DeleteTransitRouteTableAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouteTableAggregationOutcomeCallable deleteTransitRouteTableAggregationCallable(const Model::DeleteTransitRouteTableAggregationRequest& request) const;
			DeleteTransitRouterOutcome deleteTransitRouter(const Model::DeleteTransitRouterRequest &request)const;
			void deleteTransitRouterAsync(const Model::DeleteTransitRouterRequest& request, const DeleteTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterOutcomeCallable deleteTransitRouterCallable(const Model::DeleteTransitRouterRequest& request) const;
			DeleteTransitRouterCidrOutcome deleteTransitRouterCidr(const Model::DeleteTransitRouterCidrRequest &request)const;
			void deleteTransitRouterCidrAsync(const Model::DeleteTransitRouterCidrRequest& request, const DeleteTransitRouterCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterCidrOutcomeCallable deleteTransitRouterCidrCallable(const Model::DeleteTransitRouterCidrRequest& request) const;
			DeleteTransitRouterEcrAttachmentOutcome deleteTransitRouterEcrAttachment(const Model::DeleteTransitRouterEcrAttachmentRequest &request)const;
			void deleteTransitRouterEcrAttachmentAsync(const Model::DeleteTransitRouterEcrAttachmentRequest& request, const DeleteTransitRouterEcrAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterEcrAttachmentOutcomeCallable deleteTransitRouterEcrAttachmentCallable(const Model::DeleteTransitRouterEcrAttachmentRequest& request) const;
			DeleteTransitRouterMulticastDomainOutcome deleteTransitRouterMulticastDomain(const Model::DeleteTransitRouterMulticastDomainRequest &request)const;
			void deleteTransitRouterMulticastDomainAsync(const Model::DeleteTransitRouterMulticastDomainRequest& request, const DeleteTransitRouterMulticastDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterMulticastDomainOutcomeCallable deleteTransitRouterMulticastDomainCallable(const Model::DeleteTransitRouterMulticastDomainRequest& request) const;
			DeleteTransitRouterPeerAttachmentOutcome deleteTransitRouterPeerAttachment(const Model::DeleteTransitRouterPeerAttachmentRequest &request)const;
			void deleteTransitRouterPeerAttachmentAsync(const Model::DeleteTransitRouterPeerAttachmentRequest& request, const DeleteTransitRouterPeerAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterPeerAttachmentOutcomeCallable deleteTransitRouterPeerAttachmentCallable(const Model::DeleteTransitRouterPeerAttachmentRequest& request) const;
			DeleteTransitRouterPrefixListAssociationOutcome deleteTransitRouterPrefixListAssociation(const Model::DeleteTransitRouterPrefixListAssociationRequest &request)const;
			void deleteTransitRouterPrefixListAssociationAsync(const Model::DeleteTransitRouterPrefixListAssociationRequest& request, const DeleteTransitRouterPrefixListAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterPrefixListAssociationOutcomeCallable deleteTransitRouterPrefixListAssociationCallable(const Model::DeleteTransitRouterPrefixListAssociationRequest& request) const;
			DeleteTransitRouterRouteEntryOutcome deleteTransitRouterRouteEntry(const Model::DeleteTransitRouterRouteEntryRequest &request)const;
			void deleteTransitRouterRouteEntryAsync(const Model::DeleteTransitRouterRouteEntryRequest& request, const DeleteTransitRouterRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterRouteEntryOutcomeCallable deleteTransitRouterRouteEntryCallable(const Model::DeleteTransitRouterRouteEntryRequest& request) const;
			DeleteTransitRouterRouteTableOutcome deleteTransitRouterRouteTable(const Model::DeleteTransitRouterRouteTableRequest &request)const;
			void deleteTransitRouterRouteTableAsync(const Model::DeleteTransitRouterRouteTableRequest& request, const DeleteTransitRouterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterRouteTableOutcomeCallable deleteTransitRouterRouteTableCallable(const Model::DeleteTransitRouterRouteTableRequest& request) const;
			DeleteTransitRouterVbrAttachmentOutcome deleteTransitRouterVbrAttachment(const Model::DeleteTransitRouterVbrAttachmentRequest &request)const;
			void deleteTransitRouterVbrAttachmentAsync(const Model::DeleteTransitRouterVbrAttachmentRequest& request, const DeleteTransitRouterVbrAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterVbrAttachmentOutcomeCallable deleteTransitRouterVbrAttachmentCallable(const Model::DeleteTransitRouterVbrAttachmentRequest& request) const;
			DeleteTransitRouterVpcAttachmentOutcome deleteTransitRouterVpcAttachment(const Model::DeleteTransitRouterVpcAttachmentRequest &request)const;
			void deleteTransitRouterVpcAttachmentAsync(const Model::DeleteTransitRouterVpcAttachmentRequest& request, const DeleteTransitRouterVpcAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterVpcAttachmentOutcomeCallable deleteTransitRouterVpcAttachmentCallable(const Model::DeleteTransitRouterVpcAttachmentRequest& request) const;
			DeleteTransitRouterVpnAttachmentOutcome deleteTransitRouterVpnAttachment(const Model::DeleteTransitRouterVpnAttachmentRequest &request)const;
			void deleteTransitRouterVpnAttachmentAsync(const Model::DeleteTransitRouterVpnAttachmentRequest& request, const DeleteTransitRouterVpnAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterVpnAttachmentOutcomeCallable deleteTransitRouterVpnAttachmentCallable(const Model::DeleteTransitRouterVpnAttachmentRequest& request) const;
			DeregisterTransitRouterMulticastGroupMembersOutcome deregisterTransitRouterMulticastGroupMembers(const Model::DeregisterTransitRouterMulticastGroupMembersRequest &request)const;
			void deregisterTransitRouterMulticastGroupMembersAsync(const Model::DeregisterTransitRouterMulticastGroupMembersRequest& request, const DeregisterTransitRouterMulticastGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeregisterTransitRouterMulticastGroupMembersOutcomeCallable deregisterTransitRouterMulticastGroupMembersCallable(const Model::DeregisterTransitRouterMulticastGroupMembersRequest& request) const;
			DeregisterTransitRouterMulticastGroupSourcesOutcome deregisterTransitRouterMulticastGroupSources(const Model::DeregisterTransitRouterMulticastGroupSourcesRequest &request)const;
			void deregisterTransitRouterMulticastGroupSourcesAsync(const Model::DeregisterTransitRouterMulticastGroupSourcesRequest& request, const DeregisterTransitRouterMulticastGroupSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeregisterTransitRouterMulticastGroupSourcesOutcomeCallable deregisterTransitRouterMulticastGroupSourcesCallable(const Model::DeregisterTransitRouterMulticastGroupSourcesRequest& request) const;
			DescribeCenAttachedChildInstanceAttributeOutcome describeCenAttachedChildInstanceAttribute(const Model::DescribeCenAttachedChildInstanceAttributeRequest &request)const;
			void describeCenAttachedChildInstanceAttributeAsync(const Model::DescribeCenAttachedChildInstanceAttributeRequest& request, const DescribeCenAttachedChildInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenAttachedChildInstanceAttributeOutcomeCallable describeCenAttachedChildInstanceAttributeCallable(const Model::DescribeCenAttachedChildInstanceAttributeRequest& request) const;
			DescribeCenAttachedChildInstancesOutcome describeCenAttachedChildInstances(const Model::DescribeCenAttachedChildInstancesRequest &request)const;
			void describeCenAttachedChildInstancesAsync(const Model::DescribeCenAttachedChildInstancesRequest& request, const DescribeCenAttachedChildInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenAttachedChildInstancesOutcomeCallable describeCenAttachedChildInstancesCallable(const Model::DescribeCenAttachedChildInstancesRequest& request) const;
			DescribeCenBandwidthPackagesOutcome describeCenBandwidthPackages(const Model::DescribeCenBandwidthPackagesRequest &request)const;
			void describeCenBandwidthPackagesAsync(const Model::DescribeCenBandwidthPackagesRequest& request, const DescribeCenBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenBandwidthPackagesOutcomeCallable describeCenBandwidthPackagesCallable(const Model::DescribeCenBandwidthPackagesRequest& request) const;
			DescribeCenChildInstanceRouteEntriesOutcome describeCenChildInstanceRouteEntries(const Model::DescribeCenChildInstanceRouteEntriesRequest &request)const;
			void describeCenChildInstanceRouteEntriesAsync(const Model::DescribeCenChildInstanceRouteEntriesRequest& request, const DescribeCenChildInstanceRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenChildInstanceRouteEntriesOutcomeCallable describeCenChildInstanceRouteEntriesCallable(const Model::DescribeCenChildInstanceRouteEntriesRequest& request) const;
			DescribeCenGeographicSpanRemainingBandwidthOutcome describeCenGeographicSpanRemainingBandwidth(const Model::DescribeCenGeographicSpanRemainingBandwidthRequest &request)const;
			void describeCenGeographicSpanRemainingBandwidthAsync(const Model::DescribeCenGeographicSpanRemainingBandwidthRequest& request, const DescribeCenGeographicSpanRemainingBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenGeographicSpanRemainingBandwidthOutcomeCallable describeCenGeographicSpanRemainingBandwidthCallable(const Model::DescribeCenGeographicSpanRemainingBandwidthRequest& request) const;
			DescribeCenGeographicSpansOutcome describeCenGeographicSpans(const Model::DescribeCenGeographicSpansRequest &request)const;
			void describeCenGeographicSpansAsync(const Model::DescribeCenGeographicSpansRequest& request, const DescribeCenGeographicSpansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenGeographicSpansOutcomeCallable describeCenGeographicSpansCallable(const Model::DescribeCenGeographicSpansRequest& request) const;
			DescribeCenInterRegionBandwidthLimitsOutcome describeCenInterRegionBandwidthLimits(const Model::DescribeCenInterRegionBandwidthLimitsRequest &request)const;
			void describeCenInterRegionBandwidthLimitsAsync(const Model::DescribeCenInterRegionBandwidthLimitsRequest& request, const DescribeCenInterRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenInterRegionBandwidthLimitsOutcomeCallable describeCenInterRegionBandwidthLimitsCallable(const Model::DescribeCenInterRegionBandwidthLimitsRequest& request) const;
			DescribeCenPrivateZoneRoutesOutcome describeCenPrivateZoneRoutes(const Model::DescribeCenPrivateZoneRoutesRequest &request)const;
			void describeCenPrivateZoneRoutesAsync(const Model::DescribeCenPrivateZoneRoutesRequest& request, const DescribeCenPrivateZoneRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenPrivateZoneRoutesOutcomeCallable describeCenPrivateZoneRoutesCallable(const Model::DescribeCenPrivateZoneRoutesRequest& request) const;
			DescribeCenRegionDomainRouteEntriesOutcome describeCenRegionDomainRouteEntries(const Model::DescribeCenRegionDomainRouteEntriesRequest &request)const;
			void describeCenRegionDomainRouteEntriesAsync(const Model::DescribeCenRegionDomainRouteEntriesRequest& request, const DescribeCenRegionDomainRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenRegionDomainRouteEntriesOutcomeCallable describeCenRegionDomainRouteEntriesCallable(const Model::DescribeCenRegionDomainRouteEntriesRequest& request) const;
			DescribeCenRouteMapsOutcome describeCenRouteMaps(const Model::DescribeCenRouteMapsRequest &request)const;
			void describeCenRouteMapsAsync(const Model::DescribeCenRouteMapsRequest& request, const DescribeCenRouteMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenRouteMapsOutcomeCallable describeCenRouteMapsCallable(const Model::DescribeCenRouteMapsRequest& request) const;
			DescribeCenVbrHealthCheckOutcome describeCenVbrHealthCheck(const Model::DescribeCenVbrHealthCheckRequest &request)const;
			void describeCenVbrHealthCheckAsync(const Model::DescribeCenVbrHealthCheckRequest& request, const DescribeCenVbrHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCenVbrHealthCheckOutcomeCallable describeCenVbrHealthCheckCallable(const Model::DescribeCenVbrHealthCheckRequest& request) const;
			DescribeCensOutcome describeCens(const Model::DescribeCensRequest &request)const;
			void describeCensAsync(const Model::DescribeCensRequest& request, const DescribeCensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCensOutcomeCallable describeCensCallable(const Model::DescribeCensRequest& request) const;
			DescribeChildInstanceRegionsOutcome describeChildInstanceRegions(const Model::DescribeChildInstanceRegionsRequest &request)const;
			void describeChildInstanceRegionsAsync(const Model::DescribeChildInstanceRegionsRequest& request, const DescribeChildInstanceRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChildInstanceRegionsOutcomeCallable describeChildInstanceRegionsCallable(const Model::DescribeChildInstanceRegionsRequest& request) const;
			DescribeFlowlogsOutcome describeFlowlogs(const Model::DescribeFlowlogsRequest &request)const;
			void describeFlowlogsAsync(const Model::DescribeFlowlogsRequest& request, const DescribeFlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowlogsOutcomeCallable describeFlowlogsCallable(const Model::DescribeFlowlogsRequest& request) const;
			DescribeGeographicRegionMembershipOutcome describeGeographicRegionMembership(const Model::DescribeGeographicRegionMembershipRequest &request)const;
			void describeGeographicRegionMembershipAsync(const Model::DescribeGeographicRegionMembershipRequest& request, const DescribeGeographicRegionMembershipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGeographicRegionMembershipOutcomeCallable describeGeographicRegionMembershipCallable(const Model::DescribeGeographicRegionMembershipRequest& request) const;
			DescribeGrantRulesToCenOutcome describeGrantRulesToCen(const Model::DescribeGrantRulesToCenRequest &request)const;
			void describeGrantRulesToCenAsync(const Model::DescribeGrantRulesToCenRequest& request, const DescribeGrantRulesToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGrantRulesToCenOutcomeCallable describeGrantRulesToCenCallable(const Model::DescribeGrantRulesToCenRequest& request) const;
			DescribeGrantRulesToResourceOutcome describeGrantRulesToResource(const Model::DescribeGrantRulesToResourceRequest &request)const;
			void describeGrantRulesToResourceAsync(const Model::DescribeGrantRulesToResourceRequest& request, const DescribeGrantRulesToResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGrantRulesToResourceOutcomeCallable describeGrantRulesToResourceCallable(const Model::DescribeGrantRulesToResourceRequest& request) const;
			DescribePublishedRouteEntriesOutcome describePublishedRouteEntries(const Model::DescribePublishedRouteEntriesRequest &request)const;
			void describePublishedRouteEntriesAsync(const Model::DescribePublishedRouteEntriesRequest& request, const DescribePublishedRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePublishedRouteEntriesOutcomeCallable describePublishedRouteEntriesCallable(const Model::DescribePublishedRouteEntriesRequest& request) const;
			DescribeRouteConflictOutcome describeRouteConflict(const Model::DescribeRouteConflictRequest &request)const;
			void describeRouteConflictAsync(const Model::DescribeRouteConflictRequest& request, const DescribeRouteConflictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouteConflictOutcomeCallable describeRouteConflictCallable(const Model::DescribeRouteConflictRequest& request) const;
			DescribeRouteServicesInCenOutcome describeRouteServicesInCen(const Model::DescribeRouteServicesInCenRequest &request)const;
			void describeRouteServicesInCenAsync(const Model::DescribeRouteServicesInCenRequest& request, const DescribeRouteServicesInCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouteServicesInCenOutcomeCallable describeRouteServicesInCenCallable(const Model::DescribeRouteServicesInCenRequest& request) const;
			DescribeTransitRouteTableAggregationOutcome describeTransitRouteTableAggregation(const Model::DescribeTransitRouteTableAggregationRequest &request)const;
			void describeTransitRouteTableAggregationAsync(const Model::DescribeTransitRouteTableAggregationRequest& request, const DescribeTransitRouteTableAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTransitRouteTableAggregationOutcomeCallable describeTransitRouteTableAggregationCallable(const Model::DescribeTransitRouteTableAggregationRequest& request) const;
			DescribeTransitRouteTableAggregationDetailOutcome describeTransitRouteTableAggregationDetail(const Model::DescribeTransitRouteTableAggregationDetailRequest &request)const;
			void describeTransitRouteTableAggregationDetailAsync(const Model::DescribeTransitRouteTableAggregationDetailRequest& request, const DescribeTransitRouteTableAggregationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTransitRouteTableAggregationDetailOutcomeCallable describeTransitRouteTableAggregationDetailCallable(const Model::DescribeTransitRouteTableAggregationDetailRequest& request) const;
			DetachCenChildInstanceOutcome detachCenChildInstance(const Model::DetachCenChildInstanceRequest &request)const;
			void detachCenChildInstanceAsync(const Model::DetachCenChildInstanceRequest& request, const DetachCenChildInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachCenChildInstanceOutcomeCallable detachCenChildInstanceCallable(const Model::DetachCenChildInstanceRequest& request) const;
			DisableCenVbrHealthCheckOutcome disableCenVbrHealthCheck(const Model::DisableCenVbrHealthCheckRequest &request)const;
			void disableCenVbrHealthCheckAsync(const Model::DisableCenVbrHealthCheckRequest& request, const DisableCenVbrHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableCenVbrHealthCheckOutcomeCallable disableCenVbrHealthCheckCallable(const Model::DisableCenVbrHealthCheckRequest& request) const;
			DisableTransitRouterRouteTablePropagationOutcome disableTransitRouterRouteTablePropagation(const Model::DisableTransitRouterRouteTablePropagationRequest &request)const;
			void disableTransitRouterRouteTablePropagationAsync(const Model::DisableTransitRouterRouteTablePropagationRequest& request, const DisableTransitRouterRouteTablePropagationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableTransitRouterRouteTablePropagationOutcomeCallable disableTransitRouterRouteTablePropagationCallable(const Model::DisableTransitRouterRouteTablePropagationRequest& request) const;
			DisassociateTransitRouterMulticastDomainOutcome disassociateTransitRouterMulticastDomain(const Model::DisassociateTransitRouterMulticastDomainRequest &request)const;
			void disassociateTransitRouterMulticastDomainAsync(const Model::DisassociateTransitRouterMulticastDomainRequest& request, const DisassociateTransitRouterMulticastDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateTransitRouterMulticastDomainOutcomeCallable disassociateTransitRouterMulticastDomainCallable(const Model::DisassociateTransitRouterMulticastDomainRequest& request) const;
			DissociateTransitRouterAttachmentFromRouteTableOutcome dissociateTransitRouterAttachmentFromRouteTable(const Model::DissociateTransitRouterAttachmentFromRouteTableRequest &request)const;
			void dissociateTransitRouterAttachmentFromRouteTableAsync(const Model::DissociateTransitRouterAttachmentFromRouteTableRequest& request, const DissociateTransitRouterAttachmentFromRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateTransitRouterAttachmentFromRouteTableOutcomeCallable dissociateTransitRouterAttachmentFromRouteTableCallable(const Model::DissociateTransitRouterAttachmentFromRouteTableRequest& request) const;
			EnableCenVbrHealthCheckOutcome enableCenVbrHealthCheck(const Model::EnableCenVbrHealthCheckRequest &request)const;
			void enableCenVbrHealthCheckAsync(const Model::EnableCenVbrHealthCheckRequest& request, const EnableCenVbrHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableCenVbrHealthCheckOutcomeCallable enableCenVbrHealthCheckCallable(const Model::EnableCenVbrHealthCheckRequest& request) const;
			EnableTransitRouterRouteTablePropagationOutcome enableTransitRouterRouteTablePropagation(const Model::EnableTransitRouterRouteTablePropagationRequest &request)const;
			void enableTransitRouterRouteTablePropagationAsync(const Model::EnableTransitRouterRouteTablePropagationRequest& request, const EnableTransitRouterRouteTablePropagationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableTransitRouterRouteTablePropagationOutcomeCallable enableTransitRouterRouteTablePropagationCallable(const Model::EnableTransitRouterRouteTablePropagationRequest& request) const;
			GrantInstanceToTransitRouterOutcome grantInstanceToTransitRouter(const Model::GrantInstanceToTransitRouterRequest &request)const;
			void grantInstanceToTransitRouterAsync(const Model::GrantInstanceToTransitRouterRequest& request, const GrantInstanceToTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantInstanceToTransitRouterOutcomeCallable grantInstanceToTransitRouterCallable(const Model::GrantInstanceToTransitRouterRequest& request) const;
			ListCenChildInstanceRouteEntriesToAttachmentOutcome listCenChildInstanceRouteEntriesToAttachment(const Model::ListCenChildInstanceRouteEntriesToAttachmentRequest &request)const;
			void listCenChildInstanceRouteEntriesToAttachmentAsync(const Model::ListCenChildInstanceRouteEntriesToAttachmentRequest& request, const ListCenChildInstanceRouteEntriesToAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCenChildInstanceRouteEntriesToAttachmentOutcomeCallable listCenChildInstanceRouteEntriesToAttachmentCallable(const Model::ListCenChildInstanceRouteEntriesToAttachmentRequest& request) const;
			ListCenInterRegionTrafficQosPoliciesOutcome listCenInterRegionTrafficQosPolicies(const Model::ListCenInterRegionTrafficQosPoliciesRequest &request)const;
			void listCenInterRegionTrafficQosPoliciesAsync(const Model::ListCenInterRegionTrafficQosPoliciesRequest& request, const ListCenInterRegionTrafficQosPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCenInterRegionTrafficQosPoliciesOutcomeCallable listCenInterRegionTrafficQosPoliciesCallable(const Model::ListCenInterRegionTrafficQosPoliciesRequest& request) const;
			ListCenInterRegionTrafficQosQueuesOutcome listCenInterRegionTrafficQosQueues(const Model::ListCenInterRegionTrafficQosQueuesRequest &request)const;
			void listCenInterRegionTrafficQosQueuesAsync(const Model::ListCenInterRegionTrafficQosQueuesRequest& request, const ListCenInterRegionTrafficQosQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCenInterRegionTrafficQosQueuesOutcomeCallable listCenInterRegionTrafficQosQueuesCallable(const Model::ListCenInterRegionTrafficQosQueuesRequest& request) const;
			ListGrantVSwitchEnisOutcome listGrantVSwitchEnis(const Model::ListGrantVSwitchEnisRequest &request)const;
			void listGrantVSwitchEnisAsync(const Model::ListGrantVSwitchEnisRequest& request, const ListGrantVSwitchEnisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGrantVSwitchEnisOutcomeCallable listGrantVSwitchEnisCallable(const Model::ListGrantVSwitchEnisRequest& request) const;
			ListGrantVSwitchesToCenOutcome listGrantVSwitchesToCen(const Model::ListGrantVSwitchesToCenRequest &request)const;
			void listGrantVSwitchesToCenAsync(const Model::ListGrantVSwitchesToCenRequest& request, const ListGrantVSwitchesToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGrantVSwitchesToCenOutcomeCallable listGrantVSwitchesToCenCallable(const Model::ListGrantVSwitchesToCenRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTrafficMarkingPoliciesOutcome listTrafficMarkingPolicies(const Model::ListTrafficMarkingPoliciesRequest &request)const;
			void listTrafficMarkingPoliciesAsync(const Model::ListTrafficMarkingPoliciesRequest& request, const ListTrafficMarkingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTrafficMarkingPoliciesOutcomeCallable listTrafficMarkingPoliciesCallable(const Model::ListTrafficMarkingPoliciesRequest& request) const;
			ListTransitRouterAvailableResourceOutcome listTransitRouterAvailableResource(const Model::ListTransitRouterAvailableResourceRequest &request)const;
			void listTransitRouterAvailableResourceAsync(const Model::ListTransitRouterAvailableResourceRequest& request, const ListTransitRouterAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterAvailableResourceOutcomeCallable listTransitRouterAvailableResourceCallable(const Model::ListTransitRouterAvailableResourceRequest& request) const;
			ListTransitRouterCidrOutcome listTransitRouterCidr(const Model::ListTransitRouterCidrRequest &request)const;
			void listTransitRouterCidrAsync(const Model::ListTransitRouterCidrRequest& request, const ListTransitRouterCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterCidrOutcomeCallable listTransitRouterCidrCallable(const Model::ListTransitRouterCidrRequest& request) const;
			ListTransitRouterCidrAllocationOutcome listTransitRouterCidrAllocation(const Model::ListTransitRouterCidrAllocationRequest &request)const;
			void listTransitRouterCidrAllocationAsync(const Model::ListTransitRouterCidrAllocationRequest& request, const ListTransitRouterCidrAllocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterCidrAllocationOutcomeCallable listTransitRouterCidrAllocationCallable(const Model::ListTransitRouterCidrAllocationRequest& request) const;
			ListTransitRouterEcrAttachmentsOutcome listTransitRouterEcrAttachments(const Model::ListTransitRouterEcrAttachmentsRequest &request)const;
			void listTransitRouterEcrAttachmentsAsync(const Model::ListTransitRouterEcrAttachmentsRequest& request, const ListTransitRouterEcrAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterEcrAttachmentsOutcomeCallable listTransitRouterEcrAttachmentsCallable(const Model::ListTransitRouterEcrAttachmentsRequest& request) const;
			ListTransitRouterMulticastDomainAssociationsOutcome listTransitRouterMulticastDomainAssociations(const Model::ListTransitRouterMulticastDomainAssociationsRequest &request)const;
			void listTransitRouterMulticastDomainAssociationsAsync(const Model::ListTransitRouterMulticastDomainAssociationsRequest& request, const ListTransitRouterMulticastDomainAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterMulticastDomainAssociationsOutcomeCallable listTransitRouterMulticastDomainAssociationsCallable(const Model::ListTransitRouterMulticastDomainAssociationsRequest& request) const;
			ListTransitRouterMulticastDomainVSwitchesOutcome listTransitRouterMulticastDomainVSwitches(const Model::ListTransitRouterMulticastDomainVSwitchesRequest &request)const;
			void listTransitRouterMulticastDomainVSwitchesAsync(const Model::ListTransitRouterMulticastDomainVSwitchesRequest& request, const ListTransitRouterMulticastDomainVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterMulticastDomainVSwitchesOutcomeCallable listTransitRouterMulticastDomainVSwitchesCallable(const Model::ListTransitRouterMulticastDomainVSwitchesRequest& request) const;
			ListTransitRouterMulticastDomainsOutcome listTransitRouterMulticastDomains(const Model::ListTransitRouterMulticastDomainsRequest &request)const;
			void listTransitRouterMulticastDomainsAsync(const Model::ListTransitRouterMulticastDomainsRequest& request, const ListTransitRouterMulticastDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterMulticastDomainsOutcomeCallable listTransitRouterMulticastDomainsCallable(const Model::ListTransitRouterMulticastDomainsRequest& request) const;
			ListTransitRouterMulticastGroupsOutcome listTransitRouterMulticastGroups(const Model::ListTransitRouterMulticastGroupsRequest &request)const;
			void listTransitRouterMulticastGroupsAsync(const Model::ListTransitRouterMulticastGroupsRequest& request, const ListTransitRouterMulticastGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterMulticastGroupsOutcomeCallable listTransitRouterMulticastGroupsCallable(const Model::ListTransitRouterMulticastGroupsRequest& request) const;
			ListTransitRouterPeerAttachmentsOutcome listTransitRouterPeerAttachments(const Model::ListTransitRouterPeerAttachmentsRequest &request)const;
			void listTransitRouterPeerAttachmentsAsync(const Model::ListTransitRouterPeerAttachmentsRequest& request, const ListTransitRouterPeerAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterPeerAttachmentsOutcomeCallable listTransitRouterPeerAttachmentsCallable(const Model::ListTransitRouterPeerAttachmentsRequest& request) const;
			ListTransitRouterPrefixListAssociationOutcome listTransitRouterPrefixListAssociation(const Model::ListTransitRouterPrefixListAssociationRequest &request)const;
			void listTransitRouterPrefixListAssociationAsync(const Model::ListTransitRouterPrefixListAssociationRequest& request, const ListTransitRouterPrefixListAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterPrefixListAssociationOutcomeCallable listTransitRouterPrefixListAssociationCallable(const Model::ListTransitRouterPrefixListAssociationRequest& request) const;
			ListTransitRouterRouteEntriesOutcome listTransitRouterRouteEntries(const Model::ListTransitRouterRouteEntriesRequest &request)const;
			void listTransitRouterRouteEntriesAsync(const Model::ListTransitRouterRouteEntriesRequest& request, const ListTransitRouterRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterRouteEntriesOutcomeCallable listTransitRouterRouteEntriesCallable(const Model::ListTransitRouterRouteEntriesRequest& request) const;
			ListTransitRouterRouteTableAssociationsOutcome listTransitRouterRouteTableAssociations(const Model::ListTransitRouterRouteTableAssociationsRequest &request)const;
			void listTransitRouterRouteTableAssociationsAsync(const Model::ListTransitRouterRouteTableAssociationsRequest& request, const ListTransitRouterRouteTableAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterRouteTableAssociationsOutcomeCallable listTransitRouterRouteTableAssociationsCallable(const Model::ListTransitRouterRouteTableAssociationsRequest& request) const;
			ListTransitRouterRouteTablePropagationsOutcome listTransitRouterRouteTablePropagations(const Model::ListTransitRouterRouteTablePropagationsRequest &request)const;
			void listTransitRouterRouteTablePropagationsAsync(const Model::ListTransitRouterRouteTablePropagationsRequest& request, const ListTransitRouterRouteTablePropagationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterRouteTablePropagationsOutcomeCallable listTransitRouterRouteTablePropagationsCallable(const Model::ListTransitRouterRouteTablePropagationsRequest& request) const;
			ListTransitRouterRouteTablesOutcome listTransitRouterRouteTables(const Model::ListTransitRouterRouteTablesRequest &request)const;
			void listTransitRouterRouteTablesAsync(const Model::ListTransitRouterRouteTablesRequest& request, const ListTransitRouterRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterRouteTablesOutcomeCallable listTransitRouterRouteTablesCallable(const Model::ListTransitRouterRouteTablesRequest& request) const;
			ListTransitRouterVbrAttachmentsOutcome listTransitRouterVbrAttachments(const Model::ListTransitRouterVbrAttachmentsRequest &request)const;
			void listTransitRouterVbrAttachmentsAsync(const Model::ListTransitRouterVbrAttachmentsRequest& request, const ListTransitRouterVbrAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterVbrAttachmentsOutcomeCallable listTransitRouterVbrAttachmentsCallable(const Model::ListTransitRouterVbrAttachmentsRequest& request) const;
			ListTransitRouterVpcAttachmentsOutcome listTransitRouterVpcAttachments(const Model::ListTransitRouterVpcAttachmentsRequest &request)const;
			void listTransitRouterVpcAttachmentsAsync(const Model::ListTransitRouterVpcAttachmentsRequest& request, const ListTransitRouterVpcAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterVpcAttachmentsOutcomeCallable listTransitRouterVpcAttachmentsCallable(const Model::ListTransitRouterVpcAttachmentsRequest& request) const;
			ListTransitRouterVpnAttachmentsOutcome listTransitRouterVpnAttachments(const Model::ListTransitRouterVpnAttachmentsRequest &request)const;
			void listTransitRouterVpnAttachmentsAsync(const Model::ListTransitRouterVpnAttachmentsRequest& request, const ListTransitRouterVpnAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterVpnAttachmentsOutcomeCallable listTransitRouterVpnAttachmentsCallable(const Model::ListTransitRouterVpnAttachmentsRequest& request) const;
			ListTransitRoutersOutcome listTransitRouters(const Model::ListTransitRoutersRequest &request)const;
			void listTransitRoutersAsync(const Model::ListTransitRoutersRequest& request, const ListTransitRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRoutersOutcomeCallable listTransitRoutersCallable(const Model::ListTransitRoutersRequest& request) const;
			ModifyCenAttributeOutcome modifyCenAttribute(const Model::ModifyCenAttributeRequest &request)const;
			void modifyCenAttributeAsync(const Model::ModifyCenAttributeRequest& request, const ModifyCenAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCenAttributeOutcomeCallable modifyCenAttributeCallable(const Model::ModifyCenAttributeRequest& request) const;
			ModifyCenBandwidthPackageAttributeOutcome modifyCenBandwidthPackageAttribute(const Model::ModifyCenBandwidthPackageAttributeRequest &request)const;
			void modifyCenBandwidthPackageAttributeAsync(const Model::ModifyCenBandwidthPackageAttributeRequest& request, const ModifyCenBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCenBandwidthPackageAttributeOutcomeCallable modifyCenBandwidthPackageAttributeCallable(const Model::ModifyCenBandwidthPackageAttributeRequest& request) const;
			ModifyCenBandwidthPackageSpecOutcome modifyCenBandwidthPackageSpec(const Model::ModifyCenBandwidthPackageSpecRequest &request)const;
			void modifyCenBandwidthPackageSpecAsync(const Model::ModifyCenBandwidthPackageSpecRequest& request, const ModifyCenBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCenBandwidthPackageSpecOutcomeCallable modifyCenBandwidthPackageSpecCallable(const Model::ModifyCenBandwidthPackageSpecRequest& request) const;
			ModifyCenRouteMapOutcome modifyCenRouteMap(const Model::ModifyCenRouteMapRequest &request)const;
			void modifyCenRouteMapAsync(const Model::ModifyCenRouteMapRequest& request, const ModifyCenRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCenRouteMapOutcomeCallable modifyCenRouteMapCallable(const Model::ModifyCenRouteMapRequest& request) const;
			ModifyFlowLogAttributeOutcome modifyFlowLogAttribute(const Model::ModifyFlowLogAttributeRequest &request)const;
			void modifyFlowLogAttributeAsync(const Model::ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowLogAttributeOutcomeCallable modifyFlowLogAttributeCallable(const Model::ModifyFlowLogAttributeRequest& request) const;
			ModifyTransitRouterCidrOutcome modifyTransitRouterCidr(const Model::ModifyTransitRouterCidrRequest &request)const;
			void modifyTransitRouterCidrAsync(const Model::ModifyTransitRouterCidrRequest& request, const ModifyTransitRouterCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTransitRouterCidrOutcomeCallable modifyTransitRouterCidrCallable(const Model::ModifyTransitRouterCidrRequest& request) const;
			ModifyTransitRouterMulticastDomainOutcome modifyTransitRouterMulticastDomain(const Model::ModifyTransitRouterMulticastDomainRequest &request)const;
			void modifyTransitRouterMulticastDomainAsync(const Model::ModifyTransitRouterMulticastDomainRequest& request, const ModifyTransitRouterMulticastDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTransitRouterMulticastDomainOutcomeCallable modifyTransitRouterMulticastDomainCallable(const Model::ModifyTransitRouterMulticastDomainRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			OpenTransitRouterServiceOutcome openTransitRouterService(const Model::OpenTransitRouterServiceRequest &request)const;
			void openTransitRouterServiceAsync(const Model::OpenTransitRouterServiceRequest& request, const OpenTransitRouterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenTransitRouterServiceOutcomeCallable openTransitRouterServiceCallable(const Model::OpenTransitRouterServiceRequest& request) const;
			PublishRouteEntriesOutcome publishRouteEntries(const Model::PublishRouteEntriesRequest &request)const;
			void publishRouteEntriesAsync(const Model::PublishRouteEntriesRequest& request, const PublishRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishRouteEntriesOutcomeCallable publishRouteEntriesCallable(const Model::PublishRouteEntriesRequest& request) const;
			RefreshTransitRouteTableAggregationOutcome refreshTransitRouteTableAggregation(const Model::RefreshTransitRouteTableAggregationRequest &request)const;
			void refreshTransitRouteTableAggregationAsync(const Model::RefreshTransitRouteTableAggregationRequest& request, const RefreshTransitRouteTableAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshTransitRouteTableAggregationOutcomeCallable refreshTransitRouteTableAggregationCallable(const Model::RefreshTransitRouteTableAggregationRequest& request) const;
			RegisterTransitRouterMulticastGroupMembersOutcome registerTransitRouterMulticastGroupMembers(const Model::RegisterTransitRouterMulticastGroupMembersRequest &request)const;
			void registerTransitRouterMulticastGroupMembersAsync(const Model::RegisterTransitRouterMulticastGroupMembersRequest& request, const RegisterTransitRouterMulticastGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterTransitRouterMulticastGroupMembersOutcomeCallable registerTransitRouterMulticastGroupMembersCallable(const Model::RegisterTransitRouterMulticastGroupMembersRequest& request) const;
			RegisterTransitRouterMulticastGroupSourcesOutcome registerTransitRouterMulticastGroupSources(const Model::RegisterTransitRouterMulticastGroupSourcesRequest &request)const;
			void registerTransitRouterMulticastGroupSourcesAsync(const Model::RegisterTransitRouterMulticastGroupSourcesRequest& request, const RegisterTransitRouterMulticastGroupSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterTransitRouterMulticastGroupSourcesOutcomeCallable registerTransitRouterMulticastGroupSourcesCallable(const Model::RegisterTransitRouterMulticastGroupSourcesRequest& request) const;
			RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcome removeTrafficMatchRuleFromTrafficMarkingPolicy(const Model::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest &request)const;
			void removeTrafficMatchRuleFromTrafficMarkingPolicyAsync(const Model::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest& request, const RemoveTrafficMatchRuleFromTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTrafficMatchRuleFromTrafficMarkingPolicyOutcomeCallable removeTrafficMatchRuleFromTrafficMarkingPolicyCallable(const Model::RemoveTrafficMatchRuleFromTrafficMarkingPolicyRequest& request) const;
			RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcome removeTraficMatchRuleFromTrafficMarkingPolicy(const Model::RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest &request)const;
			void removeTraficMatchRuleFromTrafficMarkingPolicyAsync(const Model::RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& request, const RemoveTraficMatchRuleFromTrafficMarkingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTraficMatchRuleFromTrafficMarkingPolicyOutcomeCallable removeTraficMatchRuleFromTrafficMarkingPolicyCallable(const Model::RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest& request) const;
			ReplaceTransitRouterRouteTableAssociationOutcome replaceTransitRouterRouteTableAssociation(const Model::ReplaceTransitRouterRouteTableAssociationRequest &request)const;
			void replaceTransitRouterRouteTableAssociationAsync(const Model::ReplaceTransitRouterRouteTableAssociationRequest& request, const ReplaceTransitRouterRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceTransitRouterRouteTableAssociationOutcomeCallable replaceTransitRouterRouteTableAssociationCallable(const Model::ReplaceTransitRouterRouteTableAssociationRequest& request) const;
			ResolveAndRouteServiceInCenOutcome resolveAndRouteServiceInCen(const Model::ResolveAndRouteServiceInCenRequest &request)const;
			void resolveAndRouteServiceInCenAsync(const Model::ResolveAndRouteServiceInCenRequest& request, const ResolveAndRouteServiceInCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResolveAndRouteServiceInCenOutcomeCallable resolveAndRouteServiceInCenCallable(const Model::ResolveAndRouteServiceInCenRequest& request) const;
			RevokeInstanceFromTransitRouterOutcome revokeInstanceFromTransitRouter(const Model::RevokeInstanceFromTransitRouterRequest &request)const;
			void revokeInstanceFromTransitRouterAsync(const Model::RevokeInstanceFromTransitRouterRequest& request, const RevokeInstanceFromTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeInstanceFromTransitRouterOutcomeCallable revokeInstanceFromTransitRouterCallable(const Model::RevokeInstanceFromTransitRouterRequest& request) const;
			RoutePrivateZoneInCenToVpcOutcome routePrivateZoneInCenToVpc(const Model::RoutePrivateZoneInCenToVpcRequest &request)const;
			void routePrivateZoneInCenToVpcAsync(const Model::RoutePrivateZoneInCenToVpcRequest& request, const RoutePrivateZoneInCenToVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RoutePrivateZoneInCenToVpcOutcomeCallable routePrivateZoneInCenToVpcCallable(const Model::RoutePrivateZoneInCenToVpcRequest& request) const;
			SetCenInterRegionBandwidthLimitOutcome setCenInterRegionBandwidthLimit(const Model::SetCenInterRegionBandwidthLimitRequest &request)const;
			void setCenInterRegionBandwidthLimitAsync(const Model::SetCenInterRegionBandwidthLimitRequest& request, const SetCenInterRegionBandwidthLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCenInterRegionBandwidthLimitOutcomeCallable setCenInterRegionBandwidthLimitCallable(const Model::SetCenInterRegionBandwidthLimitRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TempUpgradeCenBandwidthPackageSpecOutcome tempUpgradeCenBandwidthPackageSpec(const Model::TempUpgradeCenBandwidthPackageSpecRequest &request)const;
			void tempUpgradeCenBandwidthPackageSpecAsync(const Model::TempUpgradeCenBandwidthPackageSpecRequest& request, const TempUpgradeCenBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TempUpgradeCenBandwidthPackageSpecOutcomeCallable tempUpgradeCenBandwidthPackageSpecCallable(const Model::TempUpgradeCenBandwidthPackageSpecRequest& request) const;
			UnassociateCenBandwidthPackageOutcome unassociateCenBandwidthPackage(const Model::UnassociateCenBandwidthPackageRequest &request)const;
			void unassociateCenBandwidthPackageAsync(const Model::UnassociateCenBandwidthPackageRequest& request, const UnassociateCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassociateCenBandwidthPackageOutcomeCallable unassociateCenBandwidthPackageCallable(const Model::UnassociateCenBandwidthPackageRequest& request) const;
			UnroutePrivateZoneInCenToVpcOutcome unroutePrivateZoneInCenToVpc(const Model::UnroutePrivateZoneInCenToVpcRequest &request)const;
			void unroutePrivateZoneInCenToVpcAsync(const Model::UnroutePrivateZoneInCenToVpcRequest& request, const UnroutePrivateZoneInCenToVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnroutePrivateZoneInCenToVpcOutcomeCallable unroutePrivateZoneInCenToVpcCallable(const Model::UnroutePrivateZoneInCenToVpcRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateCenInterRegionTrafficQosPolicyAttributeOutcome updateCenInterRegionTrafficQosPolicyAttribute(const Model::UpdateCenInterRegionTrafficQosPolicyAttributeRequest &request)const;
			void updateCenInterRegionTrafficQosPolicyAttributeAsync(const Model::UpdateCenInterRegionTrafficQosPolicyAttributeRequest& request, const UpdateCenInterRegionTrafficQosPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCenInterRegionTrafficQosPolicyAttributeOutcomeCallable updateCenInterRegionTrafficQosPolicyAttributeCallable(const Model::UpdateCenInterRegionTrafficQosPolicyAttributeRequest& request) const;
			UpdateCenInterRegionTrafficQosQueueAttributeOutcome updateCenInterRegionTrafficQosQueueAttribute(const Model::UpdateCenInterRegionTrafficQosQueueAttributeRequest &request)const;
			void updateCenInterRegionTrafficQosQueueAttributeAsync(const Model::UpdateCenInterRegionTrafficQosQueueAttributeRequest& request, const UpdateCenInterRegionTrafficQosQueueAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCenInterRegionTrafficQosQueueAttributeOutcomeCallable updateCenInterRegionTrafficQosQueueAttributeCallable(const Model::UpdateCenInterRegionTrafficQosQueueAttributeRequest& request) const;
			UpdateTrafficMarkingPolicyAttributeOutcome updateTrafficMarkingPolicyAttribute(const Model::UpdateTrafficMarkingPolicyAttributeRequest &request)const;
			void updateTrafficMarkingPolicyAttributeAsync(const Model::UpdateTrafficMarkingPolicyAttributeRequest& request, const UpdateTrafficMarkingPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTrafficMarkingPolicyAttributeOutcomeCallable updateTrafficMarkingPolicyAttributeCallable(const Model::UpdateTrafficMarkingPolicyAttributeRequest& request) const;
			UpdateTransitRouterOutcome updateTransitRouter(const Model::UpdateTransitRouterRequest &request)const;
			void updateTransitRouterAsync(const Model::UpdateTransitRouterRequest& request, const UpdateTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTransitRouterOutcomeCallable updateTransitRouterCallable(const Model::UpdateTransitRouterRequest& request) const;
			UpdateTransitRouterEcrAttachmentAttributeOutcome updateTransitRouterEcrAttachmentAttribute(const Model::UpdateTransitRouterEcrAttachmentAttributeRequest &request)const;
			void updateTransitRouterEcrAttachmentAttributeAsync(const Model::UpdateTransitRouterEcrAttachmentAttributeRequest& request, const UpdateTransitRouterEcrAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTransitRouterEcrAttachmentAttributeOutcomeCallable updateTransitRouterEcrAttachmentAttributeCallable(const Model::UpdateTransitRouterEcrAttachmentAttributeRequest& request) const;
			UpdateTransitRouterPeerAttachmentAttributeOutcome updateTransitRouterPeerAttachmentAttribute(const Model::UpdateTransitRouterPeerAttachmentAttributeRequest &request)const;
			void updateTransitRouterPeerAttachmentAttributeAsync(const Model::UpdateTransitRouterPeerAttachmentAttributeRequest& request, const UpdateTransitRouterPeerAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTransitRouterPeerAttachmentAttributeOutcomeCallable updateTransitRouterPeerAttachmentAttributeCallable(const Model::UpdateTransitRouterPeerAttachmentAttributeRequest& request) const;
			UpdateTransitRouterRouteEntryOutcome updateTransitRouterRouteEntry(const Model::UpdateTransitRouterRouteEntryRequest &request)const;
			void updateTransitRouterRouteEntryAsync(const Model::UpdateTransitRouterRouteEntryRequest& request, const UpdateTransitRouterRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTransitRouterRouteEntryOutcomeCallable updateTransitRouterRouteEntryCallable(const Model::UpdateTransitRouterRouteEntryRequest& request) const;
			UpdateTransitRouterRouteTableOutcome updateTransitRouterRouteTable(const Model::UpdateTransitRouterRouteTableRequest &request)const;
			void updateTransitRouterRouteTableAsync(const Model::UpdateTransitRouterRouteTableRequest& request, const UpdateTransitRouterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTransitRouterRouteTableOutcomeCallable updateTransitRouterRouteTableCallable(const Model::UpdateTransitRouterRouteTableRequest& request) const;
			UpdateTransitRouterVbrAttachmentAttributeOutcome updateTransitRouterVbrAttachmentAttribute(const Model::UpdateTransitRouterVbrAttachmentAttributeRequest &request)const;
			void updateTransitRouterVbrAttachmentAttributeAsync(const Model::UpdateTransitRouterVbrAttachmentAttributeRequest& request, const UpdateTransitRouterVbrAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTransitRouterVbrAttachmentAttributeOutcomeCallable updateTransitRouterVbrAttachmentAttributeCallable(const Model::UpdateTransitRouterVbrAttachmentAttributeRequest& request) const;
			UpdateTransitRouterVpcAttachmentAttributeOutcome updateTransitRouterVpcAttachmentAttribute(const Model::UpdateTransitRouterVpcAttachmentAttributeRequest &request)const;
			void updateTransitRouterVpcAttachmentAttributeAsync(const Model::UpdateTransitRouterVpcAttachmentAttributeRequest& request, const UpdateTransitRouterVpcAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTransitRouterVpcAttachmentAttributeOutcomeCallable updateTransitRouterVpcAttachmentAttributeCallable(const Model::UpdateTransitRouterVpcAttachmentAttributeRequest& request) const;
			UpdateTransitRouterVpcAttachmentZonesOutcome updateTransitRouterVpcAttachmentZones(const Model::UpdateTransitRouterVpcAttachmentZonesRequest &request)const;
			void updateTransitRouterVpcAttachmentZonesAsync(const Model::UpdateTransitRouterVpcAttachmentZonesRequest& request, const UpdateTransitRouterVpcAttachmentZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTransitRouterVpcAttachmentZonesOutcomeCallable updateTransitRouterVpcAttachmentZonesCallable(const Model::UpdateTransitRouterVpcAttachmentZonesRequest& request) const;
			UpdateTransitRouterVpnAttachmentAttributeOutcome updateTransitRouterVpnAttachmentAttribute(const Model::UpdateTransitRouterVpnAttachmentAttributeRequest &request)const;
			void updateTransitRouterVpnAttachmentAttributeAsync(const Model::UpdateTransitRouterVpnAttachmentAttributeRequest& request, const UpdateTransitRouterVpnAttachmentAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTransitRouterVpnAttachmentAttributeOutcomeCallable updateTransitRouterVpnAttachmentAttributeCallable(const Model::UpdateTransitRouterVpnAttachmentAttributeRequest& request) const;
			WithdrawPublishedRouteEntriesOutcome withdrawPublishedRouteEntries(const Model::WithdrawPublishedRouteEntriesRequest &request)const;
			void withdrawPublishedRouteEntriesAsync(const Model::WithdrawPublishedRouteEntriesRequest& request, const WithdrawPublishedRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WithdrawPublishedRouteEntriesOutcomeCallable withdrawPublishedRouteEntriesCallable(const Model::WithdrawPublishedRouteEntriesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CBN_CBNCLIENT_H_
