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
#include "model/AssociateCenBandwidthPackageRequest.h"
#include "model/AssociateCenBandwidthPackageResult.h"
#include "model/AssociateTransitRouterAttachmentWithRouteTableRequest.h"
#include "model/AssociateTransitRouterAttachmentWithRouteTableResult.h"
#include "model/AttachCenChildInstanceRequest.h"
#include "model/AttachCenChildInstanceResult.h"
#include "model/CreateCenRequest.h"
#include "model/CreateCenResult.h"
#include "model/CreateCenBandwidthPackageRequest.h"
#include "model/CreateCenBandwidthPackageResult.h"
#include "model/CreateCenChildInstanceRouteEntryToCenRequest.h"
#include "model/CreateCenChildInstanceRouteEntryToCenResult.h"
#include "model/CreateCenRouteMapRequest.h"
#include "model/CreateCenRouteMapResult.h"
#include "model/CreateFlowlogRequest.h"
#include "model/CreateFlowlogResult.h"
#include "model/CreateTransitRouterRequest.h"
#include "model/CreateTransitRouterResult.h"
#include "model/CreateTransitRouterPeerAttachmentRequest.h"
#include "model/CreateTransitRouterPeerAttachmentResult.h"
#include "model/CreateTransitRouterRouteEntryRequest.h"
#include "model/CreateTransitRouterRouteEntryResult.h"
#include "model/CreateTransitRouterRouteTableRequest.h"
#include "model/CreateTransitRouterRouteTableResult.h"
#include "model/CreateTransitRouterVbrAttachmentRequest.h"
#include "model/CreateTransitRouterVbrAttachmentResult.h"
#include "model/CreateTransitRouterVpcAttachmentRequest.h"
#include "model/CreateTransitRouterVpcAttachmentResult.h"
#include "model/DeactiveFlowLogRequest.h"
#include "model/DeactiveFlowLogResult.h"
#include "model/DeleteCenRequest.h"
#include "model/DeleteCenResult.h"
#include "model/DeleteCenBandwidthPackageRequest.h"
#include "model/DeleteCenBandwidthPackageResult.h"
#include "model/DeleteCenChildInstanceRouteEntryToCenRequest.h"
#include "model/DeleteCenChildInstanceRouteEntryToCenResult.h"
#include "model/DeleteCenRouteMapRequest.h"
#include "model/DeleteCenRouteMapResult.h"
#include "model/DeleteFlowlogRequest.h"
#include "model/DeleteFlowlogResult.h"
#include "model/DeleteRouteServiceInCenRequest.h"
#include "model/DeleteRouteServiceInCenResult.h"
#include "model/DeleteTransitRouterPeerAttachmentRequest.h"
#include "model/DeleteTransitRouterPeerAttachmentResult.h"
#include "model/DeleteTransitRouterRouteEntryRequest.h"
#include "model/DeleteTransitRouterRouteEntryResult.h"
#include "model/DeleteTransitRouterRouteTableRequest.h"
#include "model/DeleteTransitRouterRouteTableResult.h"
#include "model/DeleteTransitRouterVbrAttachmentRequest.h"
#include "model/DeleteTransitRouterVbrAttachmentResult.h"
#include "model/DeleteTransitRouterVpcAttachmentRequest.h"
#include "model/DeleteTransitRouterVpcAttachmentResult.h"
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
#include "model/DescribePublishedRouteEntriesRequest.h"
#include "model/DescribePublishedRouteEntriesResult.h"
#include "model/DescribeRouteConflictRequest.h"
#include "model/DescribeRouteConflictResult.h"
#include "model/DescribeRouteServicesInCenRequest.h"
#include "model/DescribeRouteServicesInCenResult.h"
#include "model/DetachCenChildInstanceRequest.h"
#include "model/DetachCenChildInstanceResult.h"
#include "model/DisableCenVbrHealthCheckRequest.h"
#include "model/DisableCenVbrHealthCheckResult.h"
#include "model/DisableTransitRouterRouteTablePropagationRequest.h"
#include "model/DisableTransitRouterRouteTablePropagationResult.h"
#include "model/DissociateTransitRouterAttachmentFromRouteTableRequest.h"
#include "model/DissociateTransitRouterAttachmentFromRouteTableResult.h"
#include "model/EnableCenVbrHealthCheckRequest.h"
#include "model/EnableCenVbrHealthCheckResult.h"
#include "model/EnableTransitRouterRouteTablePropagationRequest.h"
#include "model/EnableTransitRouterRouteTablePropagationResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTransitRouterAvailableResourceRequest.h"
#include "model/ListTransitRouterAvailableResourceResult.h"
#include "model/ListTransitRouterPeerAttachmentsRequest.h"
#include "model/ListTransitRouterPeerAttachmentsResult.h"
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
#include "model/PublishRouteEntriesRequest.h"
#include "model/PublishRouteEntriesResult.h"
#include "model/ResolveAndRouteServiceInCenRequest.h"
#include "model/ResolveAndRouteServiceInCenResult.h"
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
#include "model/UpdateTransitRouterRequest.h"
#include "model/UpdateTransitRouterResult.h"
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
			typedef Outcome<Error, Model::AssociateCenBandwidthPackageResult> AssociateCenBandwidthPackageOutcome;
			typedef std::future<AssociateCenBandwidthPackageOutcome> AssociateCenBandwidthPackageOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::AssociateCenBandwidthPackageRequest&, const AssociateCenBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateCenBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::AssociateTransitRouterAttachmentWithRouteTableResult> AssociateTransitRouterAttachmentWithRouteTableOutcome;
			typedef std::future<AssociateTransitRouterAttachmentWithRouteTableOutcome> AssociateTransitRouterAttachmentWithRouteTableOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::AssociateTransitRouterAttachmentWithRouteTableRequest&, const AssociateTransitRouterAttachmentWithRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateTransitRouterAttachmentWithRouteTableAsyncHandler;
			typedef Outcome<Error, Model::AttachCenChildInstanceResult> AttachCenChildInstanceOutcome;
			typedef std::future<AttachCenChildInstanceOutcome> AttachCenChildInstanceOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::AttachCenChildInstanceRequest&, const AttachCenChildInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachCenChildInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateCenResult> CreateCenOutcome;
			typedef std::future<CreateCenOutcome> CreateCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenRequest&, const CreateCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenAsyncHandler;
			typedef Outcome<Error, Model::CreateCenBandwidthPackageResult> CreateCenBandwidthPackageOutcome;
			typedef std::future<CreateCenBandwidthPackageOutcome> CreateCenBandwidthPackageOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenBandwidthPackageRequest&, const CreateCenBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::CreateCenChildInstanceRouteEntryToCenResult> CreateCenChildInstanceRouteEntryToCenOutcome;
			typedef std::future<CreateCenChildInstanceRouteEntryToCenOutcome> CreateCenChildInstanceRouteEntryToCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenChildInstanceRouteEntryToCenRequest&, const CreateCenChildInstanceRouteEntryToCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenChildInstanceRouteEntryToCenAsyncHandler;
			typedef Outcome<Error, Model::CreateCenRouteMapResult> CreateCenRouteMapOutcome;
			typedef std::future<CreateCenRouteMapOutcome> CreateCenRouteMapOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateCenRouteMapRequest&, const CreateCenRouteMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCenRouteMapAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowlogResult> CreateFlowlogOutcome;
			typedef std::future<CreateFlowlogOutcome> CreateFlowlogOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateFlowlogRequest&, const CreateFlowlogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowlogAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterResult> CreateTransitRouterOutcome;
			typedef std::future<CreateTransitRouterOutcome> CreateTransitRouterOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterRequest&, const CreateTransitRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterAsyncHandler;
			typedef Outcome<Error, Model::CreateTransitRouterPeerAttachmentResult> CreateTransitRouterPeerAttachmentOutcome;
			typedef std::future<CreateTransitRouterPeerAttachmentOutcome> CreateTransitRouterPeerAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::CreateTransitRouterPeerAttachmentRequest&, const CreateTransitRouterPeerAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransitRouterPeerAttachmentAsyncHandler;
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
			typedef Outcome<Error, Model::DeactiveFlowLogResult> DeactiveFlowLogOutcome;
			typedef std::future<DeactiveFlowLogOutcome> DeactiveFlowLogOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeactiveFlowLogRequest&, const DeactiveFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactiveFlowLogAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenResult> DeleteCenOutcome;
			typedef std::future<DeleteCenOutcome> DeleteCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenRequest&, const DeleteCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenBandwidthPackageResult> DeleteCenBandwidthPackageOutcome;
			typedef std::future<DeleteCenBandwidthPackageOutcome> DeleteCenBandwidthPackageOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenBandwidthPackageRequest&, const DeleteCenBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenChildInstanceRouteEntryToCenResult> DeleteCenChildInstanceRouteEntryToCenOutcome;
			typedef std::future<DeleteCenChildInstanceRouteEntryToCenOutcome> DeleteCenChildInstanceRouteEntryToCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenChildInstanceRouteEntryToCenRequest&, const DeleteCenChildInstanceRouteEntryToCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenChildInstanceRouteEntryToCenAsyncHandler;
			typedef Outcome<Error, Model::DeleteCenRouteMapResult> DeleteCenRouteMapOutcome;
			typedef std::future<DeleteCenRouteMapOutcome> DeleteCenRouteMapOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteCenRouteMapRequest&, const DeleteCenRouteMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCenRouteMapAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowlogResult> DeleteFlowlogOutcome;
			typedef std::future<DeleteFlowlogOutcome> DeleteFlowlogOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteFlowlogRequest&, const DeleteFlowlogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowlogAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouteServiceInCenResult> DeleteRouteServiceInCenOutcome;
			typedef std::future<DeleteRouteServiceInCenOutcome> DeleteRouteServiceInCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteRouteServiceInCenRequest&, const DeleteRouteServiceInCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteServiceInCenAsyncHandler;
			typedef Outcome<Error, Model::DeleteTransitRouterPeerAttachmentResult> DeleteTransitRouterPeerAttachmentOutcome;
			typedef std::future<DeleteTransitRouterPeerAttachmentOutcome> DeleteTransitRouterPeerAttachmentOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DeleteTransitRouterPeerAttachmentRequest&, const DeleteTransitRouterPeerAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTransitRouterPeerAttachmentAsyncHandler;
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
			typedef Outcome<Error, Model::DescribePublishedRouteEntriesResult> DescribePublishedRouteEntriesOutcome;
			typedef std::future<DescribePublishedRouteEntriesOutcome> DescribePublishedRouteEntriesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribePublishedRouteEntriesRequest&, const DescribePublishedRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublishedRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteConflictResult> DescribeRouteConflictOutcome;
			typedef std::future<DescribeRouteConflictOutcome> DescribeRouteConflictOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeRouteConflictRequest&, const DescribeRouteConflictOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteConflictAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteServicesInCenResult> DescribeRouteServicesInCenOutcome;
			typedef std::future<DescribeRouteServicesInCenOutcome> DescribeRouteServicesInCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DescribeRouteServicesInCenRequest&, const DescribeRouteServicesInCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteServicesInCenAsyncHandler;
			typedef Outcome<Error, Model::DetachCenChildInstanceResult> DetachCenChildInstanceOutcome;
			typedef std::future<DetachCenChildInstanceOutcome> DetachCenChildInstanceOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DetachCenChildInstanceRequest&, const DetachCenChildInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachCenChildInstanceAsyncHandler;
			typedef Outcome<Error, Model::DisableCenVbrHealthCheckResult> DisableCenVbrHealthCheckOutcome;
			typedef std::future<DisableCenVbrHealthCheckOutcome> DisableCenVbrHealthCheckOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DisableCenVbrHealthCheckRequest&, const DisableCenVbrHealthCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableCenVbrHealthCheckAsyncHandler;
			typedef Outcome<Error, Model::DisableTransitRouterRouteTablePropagationResult> DisableTransitRouterRouteTablePropagationOutcome;
			typedef std::future<DisableTransitRouterRouteTablePropagationOutcome> DisableTransitRouterRouteTablePropagationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DisableTransitRouterRouteTablePropagationRequest&, const DisableTransitRouterRouteTablePropagationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableTransitRouterRouteTablePropagationAsyncHandler;
			typedef Outcome<Error, Model::DissociateTransitRouterAttachmentFromRouteTableResult> DissociateTransitRouterAttachmentFromRouteTableOutcome;
			typedef std::future<DissociateTransitRouterAttachmentFromRouteTableOutcome> DissociateTransitRouterAttachmentFromRouteTableOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::DissociateTransitRouterAttachmentFromRouteTableRequest&, const DissociateTransitRouterAttachmentFromRouteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateTransitRouterAttachmentFromRouteTableAsyncHandler;
			typedef Outcome<Error, Model::EnableCenVbrHealthCheckResult> EnableCenVbrHealthCheckOutcome;
			typedef std::future<EnableCenVbrHealthCheckOutcome> EnableCenVbrHealthCheckOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::EnableCenVbrHealthCheckRequest&, const EnableCenVbrHealthCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableCenVbrHealthCheckAsyncHandler;
			typedef Outcome<Error, Model::EnableTransitRouterRouteTablePropagationResult> EnableTransitRouterRouteTablePropagationOutcome;
			typedef std::future<EnableTransitRouterRouteTablePropagationOutcome> EnableTransitRouterRouteTablePropagationOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::EnableTransitRouterRouteTablePropagationRequest&, const EnableTransitRouterRouteTablePropagationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableTransitRouterRouteTablePropagationAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterAvailableResourceResult> ListTransitRouterAvailableResourceOutcome;
			typedef std::future<ListTransitRouterAvailableResourceOutcome> ListTransitRouterAvailableResourceOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterAvailableResourceRequest&, const ListTransitRouterAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::ListTransitRouterPeerAttachmentsResult> ListTransitRouterPeerAttachmentsOutcome;
			typedef std::future<ListTransitRouterPeerAttachmentsOutcome> ListTransitRouterPeerAttachmentsOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ListTransitRouterPeerAttachmentsRequest&, const ListTransitRouterPeerAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTransitRouterPeerAttachmentsAsyncHandler;
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
			typedef Outcome<Error, Model::PublishRouteEntriesResult> PublishRouteEntriesOutcome;
			typedef std::future<PublishRouteEntriesOutcome> PublishRouteEntriesOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::PublishRouteEntriesRequest&, const PublishRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::ResolveAndRouteServiceInCenResult> ResolveAndRouteServiceInCenOutcome;
			typedef std::future<ResolveAndRouteServiceInCenOutcome> ResolveAndRouteServiceInCenOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::ResolveAndRouteServiceInCenRequest&, const ResolveAndRouteServiceInCenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResolveAndRouteServiceInCenAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateTransitRouterResult> UpdateTransitRouterOutcome;
			typedef std::future<UpdateTransitRouterOutcome> UpdateTransitRouterOutcomeCallable;
			typedef std::function<void(const CbnClient*, const Model::UpdateTransitRouterRequest&, const UpdateTransitRouterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTransitRouterAsyncHandler;
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
			AssociateCenBandwidthPackageOutcome associateCenBandwidthPackage(const Model::AssociateCenBandwidthPackageRequest &request)const;
			void associateCenBandwidthPackageAsync(const Model::AssociateCenBandwidthPackageRequest& request, const AssociateCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateCenBandwidthPackageOutcomeCallable associateCenBandwidthPackageCallable(const Model::AssociateCenBandwidthPackageRequest& request) const;
			AssociateTransitRouterAttachmentWithRouteTableOutcome associateTransitRouterAttachmentWithRouteTable(const Model::AssociateTransitRouterAttachmentWithRouteTableRequest &request)const;
			void associateTransitRouterAttachmentWithRouteTableAsync(const Model::AssociateTransitRouterAttachmentWithRouteTableRequest& request, const AssociateTransitRouterAttachmentWithRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateTransitRouterAttachmentWithRouteTableOutcomeCallable associateTransitRouterAttachmentWithRouteTableCallable(const Model::AssociateTransitRouterAttachmentWithRouteTableRequest& request) const;
			AttachCenChildInstanceOutcome attachCenChildInstance(const Model::AttachCenChildInstanceRequest &request)const;
			void attachCenChildInstanceAsync(const Model::AttachCenChildInstanceRequest& request, const AttachCenChildInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachCenChildInstanceOutcomeCallable attachCenChildInstanceCallable(const Model::AttachCenChildInstanceRequest& request) const;
			CreateCenOutcome createCen(const Model::CreateCenRequest &request)const;
			void createCenAsync(const Model::CreateCenRequest& request, const CreateCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenOutcomeCallable createCenCallable(const Model::CreateCenRequest& request) const;
			CreateCenBandwidthPackageOutcome createCenBandwidthPackage(const Model::CreateCenBandwidthPackageRequest &request)const;
			void createCenBandwidthPackageAsync(const Model::CreateCenBandwidthPackageRequest& request, const CreateCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenBandwidthPackageOutcomeCallable createCenBandwidthPackageCallable(const Model::CreateCenBandwidthPackageRequest& request) const;
			CreateCenChildInstanceRouteEntryToCenOutcome createCenChildInstanceRouteEntryToCen(const Model::CreateCenChildInstanceRouteEntryToCenRequest &request)const;
			void createCenChildInstanceRouteEntryToCenAsync(const Model::CreateCenChildInstanceRouteEntryToCenRequest& request, const CreateCenChildInstanceRouteEntryToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenChildInstanceRouteEntryToCenOutcomeCallable createCenChildInstanceRouteEntryToCenCallable(const Model::CreateCenChildInstanceRouteEntryToCenRequest& request) const;
			CreateCenRouteMapOutcome createCenRouteMap(const Model::CreateCenRouteMapRequest &request)const;
			void createCenRouteMapAsync(const Model::CreateCenRouteMapRequest& request, const CreateCenRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCenRouteMapOutcomeCallable createCenRouteMapCallable(const Model::CreateCenRouteMapRequest& request) const;
			CreateFlowlogOutcome createFlowlog(const Model::CreateFlowlogRequest &request)const;
			void createFlowlogAsync(const Model::CreateFlowlogRequest& request, const CreateFlowlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowlogOutcomeCallable createFlowlogCallable(const Model::CreateFlowlogRequest& request) const;
			CreateTransitRouterOutcome createTransitRouter(const Model::CreateTransitRouterRequest &request)const;
			void createTransitRouterAsync(const Model::CreateTransitRouterRequest& request, const CreateTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterOutcomeCallable createTransitRouterCallable(const Model::CreateTransitRouterRequest& request) const;
			CreateTransitRouterPeerAttachmentOutcome createTransitRouterPeerAttachment(const Model::CreateTransitRouterPeerAttachmentRequest &request)const;
			void createTransitRouterPeerAttachmentAsync(const Model::CreateTransitRouterPeerAttachmentRequest& request, const CreateTransitRouterPeerAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTransitRouterPeerAttachmentOutcomeCallable createTransitRouterPeerAttachmentCallable(const Model::CreateTransitRouterPeerAttachmentRequest& request) const;
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
			DeactiveFlowLogOutcome deactiveFlowLog(const Model::DeactiveFlowLogRequest &request)const;
			void deactiveFlowLogAsync(const Model::DeactiveFlowLogRequest& request, const DeactiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactiveFlowLogOutcomeCallable deactiveFlowLogCallable(const Model::DeactiveFlowLogRequest& request) const;
			DeleteCenOutcome deleteCen(const Model::DeleteCenRequest &request)const;
			void deleteCenAsync(const Model::DeleteCenRequest& request, const DeleteCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenOutcomeCallable deleteCenCallable(const Model::DeleteCenRequest& request) const;
			DeleteCenBandwidthPackageOutcome deleteCenBandwidthPackage(const Model::DeleteCenBandwidthPackageRequest &request)const;
			void deleteCenBandwidthPackageAsync(const Model::DeleteCenBandwidthPackageRequest& request, const DeleteCenBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenBandwidthPackageOutcomeCallable deleteCenBandwidthPackageCallable(const Model::DeleteCenBandwidthPackageRequest& request) const;
			DeleteCenChildInstanceRouteEntryToCenOutcome deleteCenChildInstanceRouteEntryToCen(const Model::DeleteCenChildInstanceRouteEntryToCenRequest &request)const;
			void deleteCenChildInstanceRouteEntryToCenAsync(const Model::DeleteCenChildInstanceRouteEntryToCenRequest& request, const DeleteCenChildInstanceRouteEntryToCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenChildInstanceRouteEntryToCenOutcomeCallable deleteCenChildInstanceRouteEntryToCenCallable(const Model::DeleteCenChildInstanceRouteEntryToCenRequest& request) const;
			DeleteCenRouteMapOutcome deleteCenRouteMap(const Model::DeleteCenRouteMapRequest &request)const;
			void deleteCenRouteMapAsync(const Model::DeleteCenRouteMapRequest& request, const DeleteCenRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCenRouteMapOutcomeCallable deleteCenRouteMapCallable(const Model::DeleteCenRouteMapRequest& request) const;
			DeleteFlowlogOutcome deleteFlowlog(const Model::DeleteFlowlogRequest &request)const;
			void deleteFlowlogAsync(const Model::DeleteFlowlogRequest& request, const DeleteFlowlogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowlogOutcomeCallable deleteFlowlogCallable(const Model::DeleteFlowlogRequest& request) const;
			DeleteRouteServiceInCenOutcome deleteRouteServiceInCen(const Model::DeleteRouteServiceInCenRequest &request)const;
			void deleteRouteServiceInCenAsync(const Model::DeleteRouteServiceInCenRequest& request, const DeleteRouteServiceInCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouteServiceInCenOutcomeCallable deleteRouteServiceInCenCallable(const Model::DeleteRouteServiceInCenRequest& request) const;
			DeleteTransitRouterPeerAttachmentOutcome deleteTransitRouterPeerAttachment(const Model::DeleteTransitRouterPeerAttachmentRequest &request)const;
			void deleteTransitRouterPeerAttachmentAsync(const Model::DeleteTransitRouterPeerAttachmentRequest& request, const DeleteTransitRouterPeerAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTransitRouterPeerAttachmentOutcomeCallable deleteTransitRouterPeerAttachmentCallable(const Model::DeleteTransitRouterPeerAttachmentRequest& request) const;
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
			DescribePublishedRouteEntriesOutcome describePublishedRouteEntries(const Model::DescribePublishedRouteEntriesRequest &request)const;
			void describePublishedRouteEntriesAsync(const Model::DescribePublishedRouteEntriesRequest& request, const DescribePublishedRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePublishedRouteEntriesOutcomeCallable describePublishedRouteEntriesCallable(const Model::DescribePublishedRouteEntriesRequest& request) const;
			DescribeRouteConflictOutcome describeRouteConflict(const Model::DescribeRouteConflictRequest &request)const;
			void describeRouteConflictAsync(const Model::DescribeRouteConflictRequest& request, const DescribeRouteConflictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouteConflictOutcomeCallable describeRouteConflictCallable(const Model::DescribeRouteConflictRequest& request) const;
			DescribeRouteServicesInCenOutcome describeRouteServicesInCen(const Model::DescribeRouteServicesInCenRequest &request)const;
			void describeRouteServicesInCenAsync(const Model::DescribeRouteServicesInCenRequest& request, const DescribeRouteServicesInCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouteServicesInCenOutcomeCallable describeRouteServicesInCenCallable(const Model::DescribeRouteServicesInCenRequest& request) const;
			DetachCenChildInstanceOutcome detachCenChildInstance(const Model::DetachCenChildInstanceRequest &request)const;
			void detachCenChildInstanceAsync(const Model::DetachCenChildInstanceRequest& request, const DetachCenChildInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachCenChildInstanceOutcomeCallable detachCenChildInstanceCallable(const Model::DetachCenChildInstanceRequest& request) const;
			DisableCenVbrHealthCheckOutcome disableCenVbrHealthCheck(const Model::DisableCenVbrHealthCheckRequest &request)const;
			void disableCenVbrHealthCheckAsync(const Model::DisableCenVbrHealthCheckRequest& request, const DisableCenVbrHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableCenVbrHealthCheckOutcomeCallable disableCenVbrHealthCheckCallable(const Model::DisableCenVbrHealthCheckRequest& request) const;
			DisableTransitRouterRouteTablePropagationOutcome disableTransitRouterRouteTablePropagation(const Model::DisableTransitRouterRouteTablePropagationRequest &request)const;
			void disableTransitRouterRouteTablePropagationAsync(const Model::DisableTransitRouterRouteTablePropagationRequest& request, const DisableTransitRouterRouteTablePropagationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableTransitRouterRouteTablePropagationOutcomeCallable disableTransitRouterRouteTablePropagationCallable(const Model::DisableTransitRouterRouteTablePropagationRequest& request) const;
			DissociateTransitRouterAttachmentFromRouteTableOutcome dissociateTransitRouterAttachmentFromRouteTable(const Model::DissociateTransitRouterAttachmentFromRouteTableRequest &request)const;
			void dissociateTransitRouterAttachmentFromRouteTableAsync(const Model::DissociateTransitRouterAttachmentFromRouteTableRequest& request, const DissociateTransitRouterAttachmentFromRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateTransitRouterAttachmentFromRouteTableOutcomeCallable dissociateTransitRouterAttachmentFromRouteTableCallable(const Model::DissociateTransitRouterAttachmentFromRouteTableRequest& request) const;
			EnableCenVbrHealthCheckOutcome enableCenVbrHealthCheck(const Model::EnableCenVbrHealthCheckRequest &request)const;
			void enableCenVbrHealthCheckAsync(const Model::EnableCenVbrHealthCheckRequest& request, const EnableCenVbrHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableCenVbrHealthCheckOutcomeCallable enableCenVbrHealthCheckCallable(const Model::EnableCenVbrHealthCheckRequest& request) const;
			EnableTransitRouterRouteTablePropagationOutcome enableTransitRouterRouteTablePropagation(const Model::EnableTransitRouterRouteTablePropagationRequest &request)const;
			void enableTransitRouterRouteTablePropagationAsync(const Model::EnableTransitRouterRouteTablePropagationRequest& request, const EnableTransitRouterRouteTablePropagationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableTransitRouterRouteTablePropagationOutcomeCallable enableTransitRouterRouteTablePropagationCallable(const Model::EnableTransitRouterRouteTablePropagationRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTransitRouterAvailableResourceOutcome listTransitRouterAvailableResource(const Model::ListTransitRouterAvailableResourceRequest &request)const;
			void listTransitRouterAvailableResourceAsync(const Model::ListTransitRouterAvailableResourceRequest& request, const ListTransitRouterAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterAvailableResourceOutcomeCallable listTransitRouterAvailableResourceCallable(const Model::ListTransitRouterAvailableResourceRequest& request) const;
			ListTransitRouterPeerAttachmentsOutcome listTransitRouterPeerAttachments(const Model::ListTransitRouterPeerAttachmentsRequest &request)const;
			void listTransitRouterPeerAttachmentsAsync(const Model::ListTransitRouterPeerAttachmentsRequest& request, const ListTransitRouterPeerAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTransitRouterPeerAttachmentsOutcomeCallable listTransitRouterPeerAttachmentsCallable(const Model::ListTransitRouterPeerAttachmentsRequest& request) const;
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
			PublishRouteEntriesOutcome publishRouteEntries(const Model::PublishRouteEntriesRequest &request)const;
			void publishRouteEntriesAsync(const Model::PublishRouteEntriesRequest& request, const PublishRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishRouteEntriesOutcomeCallable publishRouteEntriesCallable(const Model::PublishRouteEntriesRequest& request) const;
			ResolveAndRouteServiceInCenOutcome resolveAndRouteServiceInCen(const Model::ResolveAndRouteServiceInCenRequest &request)const;
			void resolveAndRouteServiceInCenAsync(const Model::ResolveAndRouteServiceInCenRequest& request, const ResolveAndRouteServiceInCenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResolveAndRouteServiceInCenOutcomeCallable resolveAndRouteServiceInCenCallable(const Model::ResolveAndRouteServiceInCenRequest& request) const;
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
			UpdateTransitRouterOutcome updateTransitRouter(const Model::UpdateTransitRouterRequest &request)const;
			void updateTransitRouterAsync(const Model::UpdateTransitRouterRequest& request, const UpdateTransitRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTransitRouterOutcomeCallable updateTransitRouterCallable(const Model::UpdateTransitRouterRequest& request) const;
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
			WithdrawPublishedRouteEntriesOutcome withdrawPublishedRouteEntries(const Model::WithdrawPublishedRouteEntriesRequest &request)const;
			void withdrawPublishedRouteEntriesAsync(const Model::WithdrawPublishedRouteEntriesRequest& request, const WithdrawPublishedRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WithdrawPublishedRouteEntriesOutcomeCallable withdrawPublishedRouteEntriesCallable(const Model::WithdrawPublishedRouteEntriesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CBN_CBNCLIENT_H_
