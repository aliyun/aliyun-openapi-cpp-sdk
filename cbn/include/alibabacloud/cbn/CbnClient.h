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

#include "CbnExport.h"
#include "model/ActiveFlowLogRequest.h"
#include "model/ActiveFlowLogResult.h"
#include "model/AssociateCenBandwidthPackageRequest.h"
#include "model/AssociateCenBandwidthPackageResult.h"
#include "model/AttachCenChildInstanceRequest.h"
#include "model/AttachCenChildInstanceResult.h"
#include "model/CreateCenBandwidthPackageRequest.h"
#include "model/CreateCenBandwidthPackageResult.h"
#include "model/CreateCenRequest.h"
#include "model/CreateCenResult.h"
#include "model/CreateCenRouteMapRequest.h"
#include "model/CreateCenRouteMapResult.h"
#include "model/CreateFlowlogRequest.h"
#include "model/CreateFlowlogResult.h"
#include "model/DeactiveFlowLogRequest.h"
#include "model/DeactiveFlowLogResult.h"
#include "model/DeleteCenBandwidthPackageRequest.h"
#include "model/DeleteCenBandwidthPackageResult.h"
#include "model/DeleteCenRequest.h"
#include "model/DeleteCenResult.h"
#include "model/DeleteCenRouteMapRequest.h"
#include "model/DeleteCenRouteMapResult.h"
#include "model/DeleteFlowlogRequest.h"
#include "model/DeleteFlowlogResult.h"
#include "model/DeleteRouteServiceInCenRequest.h"
#include "model/DeleteRouteServiceInCenResult.h"
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
#include "model/EnableCenVbrHealthCheckRequest.h"
#include "model/EnableCenVbrHealthCheckResult.h"
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
#include "model/UnassociateCenBandwidthPackageRequest.h"
#include "model/UnassociateCenBandwidthPackageResult.h"
#include "model/UnroutePrivateZoneInCenToVpcRequest.h"
#include "model/UnroutePrivateZoneInCenToVpcResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/WithdrawPublishedRouteEntriesRequest.h"
#include "model/WithdrawPublishedRouteEntriesResult.h"
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include <future>

namespace AlibabaCloud {
namespace Cbn {
class ALIBABACLOUD_CBN_EXPORT CbnClient : public RpcServiceClient {
public:
  typedef Outcome<Error, Model::ResolveAndRouteServiceInCenResult>
      ResolveAndRouteServiceInCenOutcome;
  typedef std::future<ResolveAndRouteServiceInCenOutcome>
      ResolveAndRouteServiceInCenOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::ResolveAndRouteServiceInCenRequest &,
                             const ResolveAndRouteServiceInCenOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      ResolveAndRouteServiceInCenAsyncHandler;
  typedef Outcome<Error, Model::CreateCenBandwidthPackageResult>
      CreateCenBandwidthPackageOutcome;
  typedef std::future<CreateCenBandwidthPackageOutcome>
      CreateCenBandwidthPackageOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::CreateCenBandwidthPackageRequest &,
                             const CreateCenBandwidthPackageOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      CreateCenBandwidthPackageAsyncHandler;
  typedef Outcome<Error, Model::ModifyFlowLogAttributeResult>
      ModifyFlowLogAttributeOutcome;
  typedef std::future<ModifyFlowLogAttributeOutcome>
      ModifyFlowLogAttributeOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::ModifyFlowLogAttributeRequest &,
                             const ModifyFlowLogAttributeOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      ModifyFlowLogAttributeAsyncHandler;
  typedef Outcome<Error, Model::DescribeGrantRulesToCenResult>
      DescribeGrantRulesToCenOutcome;
  typedef std::future<DescribeGrantRulesToCenOutcome>
      DescribeGrantRulesToCenOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeGrantRulesToCenRequest &,
                             const DescribeGrantRulesToCenOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeGrantRulesToCenAsyncHandler;
  typedef Outcome<Error, Model::WithdrawPublishedRouteEntriesResult>
      WithdrawPublishedRouteEntriesOutcome;
  typedef std::future<WithdrawPublishedRouteEntriesOutcome>
      WithdrawPublishedRouteEntriesOutcomeCallable;
  typedef std::function<void(
      const CbnClient *, const Model::WithdrawPublishedRouteEntriesRequest &,
      const WithdrawPublishedRouteEntriesOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      WithdrawPublishedRouteEntriesAsyncHandler;
  typedef Outcome<Error, Model::DescribePublishedRouteEntriesResult>
      DescribePublishedRouteEntriesOutcome;
  typedef std::future<DescribePublishedRouteEntriesOutcome>
      DescribePublishedRouteEntriesOutcomeCallable;
  typedef std::function<void(
      const CbnClient *, const Model::DescribePublishedRouteEntriesRequest &,
      const DescribePublishedRouteEntriesOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      DescribePublishedRouteEntriesAsyncHandler;
  typedef Outcome<Error, Model::DescribeCenPrivateZoneRoutesResult>
      DescribeCenPrivateZoneRoutesOutcome;
  typedef std::future<DescribeCenPrivateZoneRoutesOutcome>
      DescribeCenPrivateZoneRoutesOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeCenPrivateZoneRoutesRequest &,
                             const DescribeCenPrivateZoneRoutesOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenPrivateZoneRoutesAsyncHandler;
  typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
  typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::UntagResourcesRequest &,
                             const UntagResourcesOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      UntagResourcesAsyncHandler;
  typedef Outcome<Error, Model::ModifyCenBandwidthPackageAttributeResult>
      ModifyCenBandwidthPackageAttributeOutcome;
  typedef std::future<ModifyCenBandwidthPackageAttributeOutcome>
      ModifyCenBandwidthPackageAttributeOutcomeCallable;
  typedef std::function<void(
      const CbnClient *,
      const Model::ModifyCenBandwidthPackageAttributeRequest &,
      const ModifyCenBandwidthPackageAttributeOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      ModifyCenBandwidthPackageAttributeAsyncHandler;
  typedef Outcome<Error, Model::DisableCenVbrHealthCheckResult>
      DisableCenVbrHealthCheckOutcome;
  typedef std::future<DisableCenVbrHealthCheckOutcome>
      DisableCenVbrHealthCheckOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DisableCenVbrHealthCheckRequest &,
                             const DisableCenVbrHealthCheckOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DisableCenVbrHealthCheckAsyncHandler;
  typedef Outcome<Error, Model::CreateCenResult> CreateCenOutcome;
  typedef std::future<CreateCenOutcome> CreateCenOutcomeCallable;
  typedef std::function<void(const CbnClient *, const Model::CreateCenRequest &,
                             const CreateCenOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      CreateCenAsyncHandler;
  typedef Outcome<Error, Model::UnroutePrivateZoneInCenToVpcResult>
      UnroutePrivateZoneInCenToVpcOutcome;
  typedef std::future<UnroutePrivateZoneInCenToVpcOutcome>
      UnroutePrivateZoneInCenToVpcOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::UnroutePrivateZoneInCenToVpcRequest &,
                             const UnroutePrivateZoneInCenToVpcOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      UnroutePrivateZoneInCenToVpcAsyncHandler;
  typedef Outcome<Error, Model::DescribeCenVbrHealthCheckResult>
      DescribeCenVbrHealthCheckOutcome;
  typedef std::future<DescribeCenVbrHealthCheckOutcome>
      DescribeCenVbrHealthCheckOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeCenVbrHealthCheckRequest &,
                             const DescribeCenVbrHealthCheckOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenVbrHealthCheckAsyncHandler;
  typedef Outcome<Error, Model::RoutePrivateZoneInCenToVpcResult>
      RoutePrivateZoneInCenToVpcOutcome;
  typedef std::future<RoutePrivateZoneInCenToVpcOutcome>
      RoutePrivateZoneInCenToVpcOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::RoutePrivateZoneInCenToVpcRequest &,
                             const RoutePrivateZoneInCenToVpcOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      RoutePrivateZoneInCenToVpcAsyncHandler;
  typedef Outcome<Error, Model::DeleteFlowlogResult> DeleteFlowlogOutcome;
  typedef std::future<DeleteFlowlogOutcome> DeleteFlowlogOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DeleteFlowlogRequest &,
                             const DeleteFlowlogOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DeleteFlowlogAsyncHandler;
  typedef Outcome<Error, Model::DescribeCenGeographicSpansResult>
      DescribeCenGeographicSpansOutcome;
  typedef std::future<DescribeCenGeographicSpansOutcome>
      DescribeCenGeographicSpansOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeCenGeographicSpansRequest &,
                             const DescribeCenGeographicSpansOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenGeographicSpansAsyncHandler;
  typedef Outcome<Error, Model::EnableCenVbrHealthCheckResult>
      EnableCenVbrHealthCheckOutcome;
  typedef std::future<EnableCenVbrHealthCheckOutcome>
      EnableCenVbrHealthCheckOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::EnableCenVbrHealthCheckRequest &,
                             const EnableCenVbrHealthCheckOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      EnableCenVbrHealthCheckAsyncHandler;
  typedef Outcome<Error, Model::DescribeCensResult> DescribeCensOutcome;
  typedef std::future<DescribeCensOutcome> DescribeCensOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeCensRequest &,
                             const DescribeCensOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCensAsyncHandler;
  typedef Outcome<Error, Model::DeleteCenResult> DeleteCenOutcome;
  typedef std::future<DeleteCenOutcome> DeleteCenOutcomeCallable;
  typedef std::function<void(const CbnClient *, const Model::DeleteCenRequest &,
                             const DeleteCenOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DeleteCenAsyncHandler;
  typedef Outcome<Error, Model::DescribeCenInterRegionBandwidthLimitsResult>
      DescribeCenInterRegionBandwidthLimitsOutcome;
  typedef std::future<DescribeCenInterRegionBandwidthLimitsOutcome>
      DescribeCenInterRegionBandwidthLimitsOutcomeCallable;
  typedef std::function<void(
      const CbnClient *,
      const Model::DescribeCenInterRegionBandwidthLimitsRequest &,
      const DescribeCenInterRegionBandwidthLimitsOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenInterRegionBandwidthLimitsAsyncHandler;
  typedef Outcome<Error, Model::UnassociateCenBandwidthPackageResult>
      UnassociateCenBandwidthPackageOutcome;
  typedef std::future<UnassociateCenBandwidthPackageOutcome>
      UnassociateCenBandwidthPackageOutcomeCallable;
  typedef std::function<void(
      const CbnClient *, const Model::UnassociateCenBandwidthPackageRequest &,
      const UnassociateCenBandwidthPackageOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      UnassociateCenBandwidthPackageAsyncHandler;
  typedef Outcome<Error, Model::DescribeFlowlogsResult> DescribeFlowlogsOutcome;
  typedef std::future<DescribeFlowlogsOutcome> DescribeFlowlogsOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeFlowlogsRequest &,
                             const DescribeFlowlogsOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeFlowlogsAsyncHandler;
  typedef Outcome<Error, Model::DeactiveFlowLogResult> DeactiveFlowLogOutcome;
  typedef std::future<DeactiveFlowLogOutcome> DeactiveFlowLogOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DeactiveFlowLogRequest &,
                             const DeactiveFlowLogOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DeactiveFlowLogAsyncHandler;
  typedef Outcome<Error, Model::DescribeChildInstanceRegionsResult>
      DescribeChildInstanceRegionsOutcome;
  typedef std::future<DescribeChildInstanceRegionsOutcome>
      DescribeChildInstanceRegionsOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeChildInstanceRegionsRequest &,
                             const DescribeChildInstanceRegionsOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeChildInstanceRegionsAsyncHandler;
  typedef Outcome<Error, Model::ActiveFlowLogResult> ActiveFlowLogOutcome;
  typedef std::future<ActiveFlowLogOutcome> ActiveFlowLogOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::ActiveFlowLogRequest &,
                             const ActiveFlowLogOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      ActiveFlowLogAsyncHandler;
  typedef Outcome<Error, Model::ModifyCenRouteMapResult>
      ModifyCenRouteMapOutcome;
  typedef std::future<ModifyCenRouteMapOutcome>
      ModifyCenRouteMapOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::ModifyCenRouteMapRequest &,
                             const ModifyCenRouteMapOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      ModifyCenRouteMapAsyncHandler;
  typedef Outcome<Error, Model::DetachCenChildInstanceResult>
      DetachCenChildInstanceOutcome;
  typedef std::future<DetachCenChildInstanceOutcome>
      DetachCenChildInstanceOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DetachCenChildInstanceRequest &,
                             const DetachCenChildInstanceOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DetachCenChildInstanceAsyncHandler;
  typedef Outcome<Error, Model::AttachCenChildInstanceResult>
      AttachCenChildInstanceOutcome;
  typedef std::future<AttachCenChildInstanceOutcome>
      AttachCenChildInstanceOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::AttachCenChildInstanceRequest &,
                             const AttachCenChildInstanceOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      AttachCenChildInstanceAsyncHandler;
  typedef Outcome<Error, Model::CreateCenRouteMapResult>
      CreateCenRouteMapOutcome;
  typedef std::future<CreateCenRouteMapOutcome>
      CreateCenRouteMapOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::CreateCenRouteMapRequest &,
                             const CreateCenRouteMapOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      CreateCenRouteMapAsyncHandler;
  typedef Outcome<Error, Model::SetCenInterRegionBandwidthLimitResult>
      SetCenInterRegionBandwidthLimitOutcome;
  typedef std::future<SetCenInterRegionBandwidthLimitOutcome>
      SetCenInterRegionBandwidthLimitOutcomeCallable;
  typedef std::function<void(
      const CbnClient *, const Model::SetCenInterRegionBandwidthLimitRequest &,
      const SetCenInterRegionBandwidthLimitOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      SetCenInterRegionBandwidthLimitAsyncHandler;
  typedef Outcome<Error, Model::DeleteCenBandwidthPackageResult>
      DeleteCenBandwidthPackageOutcome;
  typedef std::future<DeleteCenBandwidthPackageOutcome>
      DeleteCenBandwidthPackageOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DeleteCenBandwidthPackageRequest &,
                             const DeleteCenBandwidthPackageOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DeleteCenBandwidthPackageAsyncHandler;
  typedef Outcome<Error, Model::ModifyCenAttributeResult>
      ModifyCenAttributeOutcome;
  typedef std::future<ModifyCenAttributeOutcome>
      ModifyCenAttributeOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::ModifyCenAttributeRequest &,
                             const ModifyCenAttributeOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      ModifyCenAttributeAsyncHandler;
  typedef Outcome<Error, Model::DescribeGeographicRegionMembershipResult>
      DescribeGeographicRegionMembershipOutcome;
  typedef std::future<DescribeGeographicRegionMembershipOutcome>
      DescribeGeographicRegionMembershipOutcomeCallable;
  typedef std::function<void(
      const CbnClient *,
      const Model::DescribeGeographicRegionMembershipRequest &,
      const DescribeGeographicRegionMembershipOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeGeographicRegionMembershipAsyncHandler;
  typedef Outcome<Error, Model::DescribeRouteServicesInCenResult>
      DescribeRouteServicesInCenOutcome;
  typedef std::future<DescribeRouteServicesInCenOutcome>
      DescribeRouteServicesInCenOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeRouteServicesInCenRequest &,
                             const DescribeRouteServicesInCenOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeRouteServicesInCenAsyncHandler;
  typedef Outcome<Error, Model::DescribeRouteConflictResult>
      DescribeRouteConflictOutcome;
  typedef std::future<DescribeRouteConflictOutcome>
      DescribeRouteConflictOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeRouteConflictRequest &,
                             const DescribeRouteConflictOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeRouteConflictAsyncHandler;
  typedef Outcome<Error, Model::DescribeCenRegionDomainRouteEntriesResult>
      DescribeCenRegionDomainRouteEntriesOutcome;
  typedef std::future<DescribeCenRegionDomainRouteEntriesOutcome>
      DescribeCenRegionDomainRouteEntriesOutcomeCallable;
  typedef std::function<void(
      const CbnClient *,
      const Model::DescribeCenRegionDomainRouteEntriesRequest &,
      const DescribeCenRegionDomainRouteEntriesOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenRegionDomainRouteEntriesAsyncHandler;
  typedef Outcome<Error, Model::DeleteRouteServiceInCenResult>
      DeleteRouteServiceInCenOutcome;
  typedef std::future<DeleteRouteServiceInCenOutcome>
      DeleteRouteServiceInCenOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DeleteRouteServiceInCenRequest &,
                             const DeleteRouteServiceInCenOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DeleteRouteServiceInCenAsyncHandler;
  typedef Outcome<Error, Model::DescribeCenAttachedChildInstancesResult>
      DescribeCenAttachedChildInstancesOutcome;
  typedef std::future<DescribeCenAttachedChildInstancesOutcome>
      DescribeCenAttachedChildInstancesOutcomeCallable;
  typedef std::function<void(
      const CbnClient *,
      const Model::DescribeCenAttachedChildInstancesRequest &,
      const DescribeCenAttachedChildInstancesOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenAttachedChildInstancesAsyncHandler;
  typedef Outcome<Error, Model::DeleteCenRouteMapResult>
      DeleteCenRouteMapOutcome;
  typedef std::future<DeleteCenRouteMapOutcome>
      DeleteCenRouteMapOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DeleteCenRouteMapRequest &,
                             const DeleteCenRouteMapOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DeleteCenRouteMapAsyncHandler;
  typedef Outcome<Error, Model::DescribeCenAttachedChildInstanceAttributeResult>
      DescribeCenAttachedChildInstanceAttributeOutcome;
  typedef std::future<DescribeCenAttachedChildInstanceAttributeOutcome>
      DescribeCenAttachedChildInstanceAttributeOutcomeCallable;
  typedef std::function<void(
      const CbnClient *,
      const Model::DescribeCenAttachedChildInstanceAttributeRequest &,
      const DescribeCenAttachedChildInstanceAttributeOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenAttachedChildInstanceAttributeAsyncHandler;
  typedef Outcome<Error, Model::ModifyCenBandwidthPackageSpecResult>
      ModifyCenBandwidthPackageSpecOutcome;
  typedef std::future<ModifyCenBandwidthPackageSpecOutcome>
      ModifyCenBandwidthPackageSpecOutcomeCallable;
  typedef std::function<void(
      const CbnClient *, const Model::ModifyCenBandwidthPackageSpecRequest &,
      const ModifyCenBandwidthPackageSpecOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      ModifyCenBandwidthPackageSpecAsyncHandler;
  typedef Outcome<Error, Model::DescribeCenRouteMapsResult>
      DescribeCenRouteMapsOutcome;
  typedef std::future<DescribeCenRouteMapsOutcome>
      DescribeCenRouteMapsOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeCenRouteMapsRequest &,
                             const DescribeCenRouteMapsOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenRouteMapsAsyncHandler;
  typedef Outcome<Error, Model::DescribeCenChildInstanceRouteEntriesResult>
      DescribeCenChildInstanceRouteEntriesOutcome;
  typedef std::future<DescribeCenChildInstanceRouteEntriesOutcome>
      DescribeCenChildInstanceRouteEntriesOutcomeCallable;
  typedef std::function<void(
      const CbnClient *,
      const Model::DescribeCenChildInstanceRouteEntriesRequest &,
      const DescribeCenChildInstanceRouteEntriesOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenChildInstanceRouteEntriesAsyncHandler;
  typedef Outcome<Error, Model::DescribeCenBandwidthPackagesResult>
      DescribeCenBandwidthPackagesOutcome;
  typedef std::future<DescribeCenBandwidthPackagesOutcome>
      DescribeCenBandwidthPackagesOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::DescribeCenBandwidthPackagesRequest &,
                             const DescribeCenBandwidthPackagesOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenBandwidthPackagesAsyncHandler;
  typedef Outcome<Error, Model::CreateFlowlogResult> CreateFlowlogOutcome;
  typedef std::future<CreateFlowlogOutcome> CreateFlowlogOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::CreateFlowlogRequest &,
                             const CreateFlowlogOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      CreateFlowlogAsyncHandler;
  typedef Outcome<Error,
                  Model::DescribeCenGeographicSpanRemainingBandwidthResult>
      DescribeCenGeographicSpanRemainingBandwidthOutcome;
  typedef std::future<DescribeCenGeographicSpanRemainingBandwidthOutcome>
      DescribeCenGeographicSpanRemainingBandwidthOutcomeCallable;
  typedef std::function<void(
      const CbnClient *,
      const Model::DescribeCenGeographicSpanRemainingBandwidthRequest &,
      const DescribeCenGeographicSpanRemainingBandwidthOutcome &,
      const std::shared_ptr<const AsyncCallerContext> &)>
      DescribeCenGeographicSpanRemainingBandwidthAsyncHandler;
  typedef Outcome<Error, Model::PublishRouteEntriesResult>
      PublishRouteEntriesOutcome;
  typedef std::future<PublishRouteEntriesOutcome>
      PublishRouteEntriesOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::PublishRouteEntriesRequest &,
                             const PublishRouteEntriesOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      PublishRouteEntriesAsyncHandler;
  typedef Outcome<Error, Model::AssociateCenBandwidthPackageResult>
      AssociateCenBandwidthPackageOutcome;
  typedef std::future<AssociateCenBandwidthPackageOutcome>
      AssociateCenBandwidthPackageOutcomeCallable;
  typedef std::function<void(const CbnClient *,
                             const Model::AssociateCenBandwidthPackageRequest &,
                             const AssociateCenBandwidthPackageOutcome &,
                             const std::shared_ptr<const AsyncCallerContext> &)>
      AssociateCenBandwidthPackageAsyncHandler;

  CbnClient(const Credentials &credentials,
            const ClientConfiguration &configuration);
  CbnClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider,
            const ClientConfiguration &configuration);
  CbnClient(const std::string &accessKeyId, const std::string &accessKeySecret,
            const ClientConfiguration &configuration);
  ~CbnClient();
  ResolveAndRouteServiceInCenOutcome resolveAndRouteServiceInCen(
      const Model::ResolveAndRouteServiceInCenRequest &request) const;
  void resolveAndRouteServiceInCenAsync(
      const Model::ResolveAndRouteServiceInCenRequest &request,
      const ResolveAndRouteServiceInCenAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  ResolveAndRouteServiceInCenOutcomeCallable
  resolveAndRouteServiceInCenCallable(
      const Model::ResolveAndRouteServiceInCenRequest &request) const;
  CreateCenBandwidthPackageOutcome createCenBandwidthPackage(
      const Model::CreateCenBandwidthPackageRequest &request) const;
  void createCenBandwidthPackageAsync(
      const Model::CreateCenBandwidthPackageRequest &request,
      const CreateCenBandwidthPackageAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  CreateCenBandwidthPackageOutcomeCallable createCenBandwidthPackageCallable(
      const Model::CreateCenBandwidthPackageRequest &request) const;
  ModifyFlowLogAttributeOutcome modifyFlowLogAttribute(
      const Model::ModifyFlowLogAttributeRequest &request) const;
  void modifyFlowLogAttributeAsync(
      const Model::ModifyFlowLogAttributeRequest &request,
      const ModifyFlowLogAttributeAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  ModifyFlowLogAttributeOutcomeCallable modifyFlowLogAttributeCallable(
      const Model::ModifyFlowLogAttributeRequest &request) const;
  DescribeGrantRulesToCenOutcome describeGrantRulesToCen(
      const Model::DescribeGrantRulesToCenRequest &request) const;
  void describeGrantRulesToCenAsync(
      const Model::DescribeGrantRulesToCenRequest &request,
      const DescribeGrantRulesToCenAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeGrantRulesToCenOutcomeCallable describeGrantRulesToCenCallable(
      const Model::DescribeGrantRulesToCenRequest &request) const;
  WithdrawPublishedRouteEntriesOutcome withdrawPublishedRouteEntries(
      const Model::WithdrawPublishedRouteEntriesRequest &request) const;
  void withdrawPublishedRouteEntriesAsync(
      const Model::WithdrawPublishedRouteEntriesRequest &request,
      const WithdrawPublishedRouteEntriesAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  WithdrawPublishedRouteEntriesOutcomeCallable
  withdrawPublishedRouteEntriesCallable(
      const Model::WithdrawPublishedRouteEntriesRequest &request) const;
  DescribePublishedRouteEntriesOutcome describePublishedRouteEntries(
      const Model::DescribePublishedRouteEntriesRequest &request) const;
  void describePublishedRouteEntriesAsync(
      const Model::DescribePublishedRouteEntriesRequest &request,
      const DescribePublishedRouteEntriesAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribePublishedRouteEntriesOutcomeCallable
  describePublishedRouteEntriesCallable(
      const Model::DescribePublishedRouteEntriesRequest &request) const;
  DescribeCenPrivateZoneRoutesOutcome describeCenPrivateZoneRoutes(
      const Model::DescribeCenPrivateZoneRoutesRequest &request) const;
  void describeCenPrivateZoneRoutesAsync(
      const Model::DescribeCenPrivateZoneRoutesRequest &request,
      const DescribeCenPrivateZoneRoutesAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenPrivateZoneRoutesOutcomeCallable
  describeCenPrivateZoneRoutesCallable(
      const Model::DescribeCenPrivateZoneRoutesRequest &request) const;
  UntagResourcesOutcome
  untagResources(const Model::UntagResourcesRequest &request) const;
  void untagResourcesAsync(
      const Model::UntagResourcesRequest &request,
      const UntagResourcesAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  UntagResourcesOutcomeCallable
  untagResourcesCallable(const Model::UntagResourcesRequest &request) const;
  ModifyCenBandwidthPackageAttributeOutcome modifyCenBandwidthPackageAttribute(
      const Model::ModifyCenBandwidthPackageAttributeRequest &request) const;
  void modifyCenBandwidthPackageAttributeAsync(
      const Model::ModifyCenBandwidthPackageAttributeRequest &request,
      const ModifyCenBandwidthPackageAttributeAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  ModifyCenBandwidthPackageAttributeOutcomeCallable
  modifyCenBandwidthPackageAttributeCallable(
      const Model::ModifyCenBandwidthPackageAttributeRequest &request) const;
  DisableCenVbrHealthCheckOutcome disableCenVbrHealthCheck(
      const Model::DisableCenVbrHealthCheckRequest &request) const;
  void disableCenVbrHealthCheckAsync(
      const Model::DisableCenVbrHealthCheckRequest &request,
      const DisableCenVbrHealthCheckAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DisableCenVbrHealthCheckOutcomeCallable disableCenVbrHealthCheckCallable(
      const Model::DisableCenVbrHealthCheckRequest &request) const;
  CreateCenOutcome createCen(const Model::CreateCenRequest &request) const;
  void createCenAsync(
      const Model::CreateCenRequest &request,
      const CreateCenAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  CreateCenOutcomeCallable
  createCenCallable(const Model::CreateCenRequest &request) const;
  UnroutePrivateZoneInCenToVpcOutcome unroutePrivateZoneInCenToVpc(
      const Model::UnroutePrivateZoneInCenToVpcRequest &request) const;
  void unroutePrivateZoneInCenToVpcAsync(
      const Model::UnroutePrivateZoneInCenToVpcRequest &request,
      const UnroutePrivateZoneInCenToVpcAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  UnroutePrivateZoneInCenToVpcOutcomeCallable
  unroutePrivateZoneInCenToVpcCallable(
      const Model::UnroutePrivateZoneInCenToVpcRequest &request) const;
  DescribeCenVbrHealthCheckOutcome describeCenVbrHealthCheck(
      const Model::DescribeCenVbrHealthCheckRequest &request) const;
  void describeCenVbrHealthCheckAsync(
      const Model::DescribeCenVbrHealthCheckRequest &request,
      const DescribeCenVbrHealthCheckAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenVbrHealthCheckOutcomeCallable describeCenVbrHealthCheckCallable(
      const Model::DescribeCenVbrHealthCheckRequest &request) const;
  RoutePrivateZoneInCenToVpcOutcome routePrivateZoneInCenToVpc(
      const Model::RoutePrivateZoneInCenToVpcRequest &request) const;
  void routePrivateZoneInCenToVpcAsync(
      const Model::RoutePrivateZoneInCenToVpcRequest &request,
      const RoutePrivateZoneInCenToVpcAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  RoutePrivateZoneInCenToVpcOutcomeCallable routePrivateZoneInCenToVpcCallable(
      const Model::RoutePrivateZoneInCenToVpcRequest &request) const;
  DeleteFlowlogOutcome
  deleteFlowlog(const Model::DeleteFlowlogRequest &request) const;
  void deleteFlowlogAsync(
      const Model::DeleteFlowlogRequest &request,
      const DeleteFlowlogAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DeleteFlowlogOutcomeCallable
  deleteFlowlogCallable(const Model::DeleteFlowlogRequest &request) const;
  DescribeCenGeographicSpansOutcome describeCenGeographicSpans(
      const Model::DescribeCenGeographicSpansRequest &request) const;
  void describeCenGeographicSpansAsync(
      const Model::DescribeCenGeographicSpansRequest &request,
      const DescribeCenGeographicSpansAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenGeographicSpansOutcomeCallable describeCenGeographicSpansCallable(
      const Model::DescribeCenGeographicSpansRequest &request) const;
  EnableCenVbrHealthCheckOutcome enableCenVbrHealthCheck(
      const Model::EnableCenVbrHealthCheckRequest &request) const;
  void enableCenVbrHealthCheckAsync(
      const Model::EnableCenVbrHealthCheckRequest &request,
      const EnableCenVbrHealthCheckAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  EnableCenVbrHealthCheckOutcomeCallable enableCenVbrHealthCheckCallable(
      const Model::EnableCenVbrHealthCheckRequest &request) const;
  DescribeCensOutcome
  describeCens(const Model::DescribeCensRequest &request) const;
  void describeCensAsync(
      const Model::DescribeCensRequest &request,
      const DescribeCensAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCensOutcomeCallable
  describeCensCallable(const Model::DescribeCensRequest &request) const;
  DeleteCenOutcome deleteCen(const Model::DeleteCenRequest &request) const;
  void deleteCenAsync(
      const Model::DeleteCenRequest &request,
      const DeleteCenAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DeleteCenOutcomeCallable
  deleteCenCallable(const Model::DeleteCenRequest &request) const;
  DescribeCenInterRegionBandwidthLimitsOutcome
  describeCenInterRegionBandwidthLimits(
      const Model::DescribeCenInterRegionBandwidthLimitsRequest &request) const;
  void describeCenInterRegionBandwidthLimitsAsync(
      const Model::DescribeCenInterRegionBandwidthLimitsRequest &request,
      const DescribeCenInterRegionBandwidthLimitsAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenInterRegionBandwidthLimitsOutcomeCallable
  describeCenInterRegionBandwidthLimitsCallable(
      const Model::DescribeCenInterRegionBandwidthLimitsRequest &request) const;
  UnassociateCenBandwidthPackageOutcome unassociateCenBandwidthPackage(
      const Model::UnassociateCenBandwidthPackageRequest &request) const;
  void unassociateCenBandwidthPackageAsync(
      const Model::UnassociateCenBandwidthPackageRequest &request,
      const UnassociateCenBandwidthPackageAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  UnassociateCenBandwidthPackageOutcomeCallable
  unassociateCenBandwidthPackageCallable(
      const Model::UnassociateCenBandwidthPackageRequest &request) const;
  DescribeFlowlogsOutcome
  describeFlowlogs(const Model::DescribeFlowlogsRequest &request) const;
  void describeFlowlogsAsync(
      const Model::DescribeFlowlogsRequest &request,
      const DescribeFlowlogsAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeFlowlogsOutcomeCallable
  describeFlowlogsCallable(const Model::DescribeFlowlogsRequest &request) const;
  DeactiveFlowLogOutcome
  deactiveFlowLog(const Model::DeactiveFlowLogRequest &request) const;
  void deactiveFlowLogAsync(
      const Model::DeactiveFlowLogRequest &request,
      const DeactiveFlowLogAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DeactiveFlowLogOutcomeCallable
  deactiveFlowLogCallable(const Model::DeactiveFlowLogRequest &request) const;
  DescribeChildInstanceRegionsOutcome describeChildInstanceRegions(
      const Model::DescribeChildInstanceRegionsRequest &request) const;
  void describeChildInstanceRegionsAsync(
      const Model::DescribeChildInstanceRegionsRequest &request,
      const DescribeChildInstanceRegionsAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeChildInstanceRegionsOutcomeCallable
  describeChildInstanceRegionsCallable(
      const Model::DescribeChildInstanceRegionsRequest &request) const;
  ActiveFlowLogOutcome
  activeFlowLog(const Model::ActiveFlowLogRequest &request) const;
  void activeFlowLogAsync(
      const Model::ActiveFlowLogRequest &request,
      const ActiveFlowLogAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  ActiveFlowLogOutcomeCallable
  activeFlowLogCallable(const Model::ActiveFlowLogRequest &request) const;
  ModifyCenRouteMapOutcome
  modifyCenRouteMap(const Model::ModifyCenRouteMapRequest &request) const;
  void modifyCenRouteMapAsync(
      const Model::ModifyCenRouteMapRequest &request,
      const ModifyCenRouteMapAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  ModifyCenRouteMapOutcomeCallable modifyCenRouteMapCallable(
      const Model::ModifyCenRouteMapRequest &request) const;
  DetachCenChildInstanceOutcome detachCenChildInstance(
      const Model::DetachCenChildInstanceRequest &request) const;
  void detachCenChildInstanceAsync(
      const Model::DetachCenChildInstanceRequest &request,
      const DetachCenChildInstanceAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DetachCenChildInstanceOutcomeCallable detachCenChildInstanceCallable(
      const Model::DetachCenChildInstanceRequest &request) const;
  AttachCenChildInstanceOutcome attachCenChildInstance(
      const Model::AttachCenChildInstanceRequest &request) const;
  void attachCenChildInstanceAsync(
      const Model::AttachCenChildInstanceRequest &request,
      const AttachCenChildInstanceAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  AttachCenChildInstanceOutcomeCallable attachCenChildInstanceCallable(
      const Model::AttachCenChildInstanceRequest &request) const;
  CreateCenRouteMapOutcome
  createCenRouteMap(const Model::CreateCenRouteMapRequest &request) const;
  void createCenRouteMapAsync(
      const Model::CreateCenRouteMapRequest &request,
      const CreateCenRouteMapAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  CreateCenRouteMapOutcomeCallable createCenRouteMapCallable(
      const Model::CreateCenRouteMapRequest &request) const;
  SetCenInterRegionBandwidthLimitOutcome setCenInterRegionBandwidthLimit(
      const Model::SetCenInterRegionBandwidthLimitRequest &request) const;
  void setCenInterRegionBandwidthLimitAsync(
      const Model::SetCenInterRegionBandwidthLimitRequest &request,
      const SetCenInterRegionBandwidthLimitAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  SetCenInterRegionBandwidthLimitOutcomeCallable
  setCenInterRegionBandwidthLimitCallable(
      const Model::SetCenInterRegionBandwidthLimitRequest &request) const;
  DeleteCenBandwidthPackageOutcome deleteCenBandwidthPackage(
      const Model::DeleteCenBandwidthPackageRequest &request) const;
  void deleteCenBandwidthPackageAsync(
      const Model::DeleteCenBandwidthPackageRequest &request,
      const DeleteCenBandwidthPackageAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DeleteCenBandwidthPackageOutcomeCallable deleteCenBandwidthPackageCallable(
      const Model::DeleteCenBandwidthPackageRequest &request) const;
  ModifyCenAttributeOutcome
  modifyCenAttribute(const Model::ModifyCenAttributeRequest &request) const;
  void modifyCenAttributeAsync(
      const Model::ModifyCenAttributeRequest &request,
      const ModifyCenAttributeAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  ModifyCenAttributeOutcomeCallable modifyCenAttributeCallable(
      const Model::ModifyCenAttributeRequest &request) const;
  DescribeGeographicRegionMembershipOutcome describeGeographicRegionMembership(
      const Model::DescribeGeographicRegionMembershipRequest &request) const;
  void describeGeographicRegionMembershipAsync(
      const Model::DescribeGeographicRegionMembershipRequest &request,
      const DescribeGeographicRegionMembershipAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeGeographicRegionMembershipOutcomeCallable
  describeGeographicRegionMembershipCallable(
      const Model::DescribeGeographicRegionMembershipRequest &request) const;
  DescribeRouteServicesInCenOutcome describeRouteServicesInCen(
      const Model::DescribeRouteServicesInCenRequest &request) const;
  void describeRouteServicesInCenAsync(
      const Model::DescribeRouteServicesInCenRequest &request,
      const DescribeRouteServicesInCenAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeRouteServicesInCenOutcomeCallable describeRouteServicesInCenCallable(
      const Model::DescribeRouteServicesInCenRequest &request) const;
  DescribeRouteConflictOutcome describeRouteConflict(
      const Model::DescribeRouteConflictRequest &request) const;
  void describeRouteConflictAsync(
      const Model::DescribeRouteConflictRequest &request,
      const DescribeRouteConflictAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeRouteConflictOutcomeCallable describeRouteConflictCallable(
      const Model::DescribeRouteConflictRequest &request) const;
  DescribeCenRegionDomainRouteEntriesOutcome
  describeCenRegionDomainRouteEntries(
      const Model::DescribeCenRegionDomainRouteEntriesRequest &request) const;
  void describeCenRegionDomainRouteEntriesAsync(
      const Model::DescribeCenRegionDomainRouteEntriesRequest &request,
      const DescribeCenRegionDomainRouteEntriesAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenRegionDomainRouteEntriesOutcomeCallable
  describeCenRegionDomainRouteEntriesCallable(
      const Model::DescribeCenRegionDomainRouteEntriesRequest &request) const;
  DeleteRouteServiceInCenOutcome deleteRouteServiceInCen(
      const Model::DeleteRouteServiceInCenRequest &request) const;
  void deleteRouteServiceInCenAsync(
      const Model::DeleteRouteServiceInCenRequest &request,
      const DeleteRouteServiceInCenAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DeleteRouteServiceInCenOutcomeCallable deleteRouteServiceInCenCallable(
      const Model::DeleteRouteServiceInCenRequest &request) const;
  DescribeCenAttachedChildInstancesOutcome describeCenAttachedChildInstances(
      const Model::DescribeCenAttachedChildInstancesRequest &request) const;
  void describeCenAttachedChildInstancesAsync(
      const Model::DescribeCenAttachedChildInstancesRequest &request,
      const DescribeCenAttachedChildInstancesAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenAttachedChildInstancesOutcomeCallable
  describeCenAttachedChildInstancesCallable(
      const Model::DescribeCenAttachedChildInstancesRequest &request) const;
  DeleteCenRouteMapOutcome
  deleteCenRouteMap(const Model::DeleteCenRouteMapRequest &request) const;
  void deleteCenRouteMapAsync(
      const Model::DeleteCenRouteMapRequest &request,
      const DeleteCenRouteMapAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DeleteCenRouteMapOutcomeCallable deleteCenRouteMapCallable(
      const Model::DeleteCenRouteMapRequest &request) const;
  DescribeCenAttachedChildInstanceAttributeOutcome
  describeCenAttachedChildInstanceAttribute(
      const Model::DescribeCenAttachedChildInstanceAttributeRequest &request)
      const;
  void describeCenAttachedChildInstanceAttributeAsync(
      const Model::DescribeCenAttachedChildInstanceAttributeRequest &request,
      const DescribeCenAttachedChildInstanceAttributeAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenAttachedChildInstanceAttributeOutcomeCallable
  describeCenAttachedChildInstanceAttributeCallable(
      const Model::DescribeCenAttachedChildInstanceAttributeRequest &request)
      const;
  ModifyCenBandwidthPackageSpecOutcome modifyCenBandwidthPackageSpec(
      const Model::ModifyCenBandwidthPackageSpecRequest &request) const;
  void modifyCenBandwidthPackageSpecAsync(
      const Model::ModifyCenBandwidthPackageSpecRequest &request,
      const ModifyCenBandwidthPackageSpecAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  ModifyCenBandwidthPackageSpecOutcomeCallable
  modifyCenBandwidthPackageSpecCallable(
      const Model::ModifyCenBandwidthPackageSpecRequest &request) const;
  DescribeCenRouteMapsOutcome
  describeCenRouteMaps(const Model::DescribeCenRouteMapsRequest &request) const;
  void describeCenRouteMapsAsync(
      const Model::DescribeCenRouteMapsRequest &request,
      const DescribeCenRouteMapsAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenRouteMapsOutcomeCallable describeCenRouteMapsCallable(
      const Model::DescribeCenRouteMapsRequest &request) const;
  DescribeCenChildInstanceRouteEntriesOutcome
  describeCenChildInstanceRouteEntries(
      const Model::DescribeCenChildInstanceRouteEntriesRequest &request) const;
  void describeCenChildInstanceRouteEntriesAsync(
      const Model::DescribeCenChildInstanceRouteEntriesRequest &request,
      const DescribeCenChildInstanceRouteEntriesAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenChildInstanceRouteEntriesOutcomeCallable
  describeCenChildInstanceRouteEntriesCallable(
      const Model::DescribeCenChildInstanceRouteEntriesRequest &request) const;
  DescribeCenBandwidthPackagesOutcome describeCenBandwidthPackages(
      const Model::DescribeCenBandwidthPackagesRequest &request) const;
  void describeCenBandwidthPackagesAsync(
      const Model::DescribeCenBandwidthPackagesRequest &request,
      const DescribeCenBandwidthPackagesAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenBandwidthPackagesOutcomeCallable
  describeCenBandwidthPackagesCallable(
      const Model::DescribeCenBandwidthPackagesRequest &request) const;
  CreateFlowlogOutcome
  createFlowlog(const Model::CreateFlowlogRequest &request) const;
  void createFlowlogAsync(
      const Model::CreateFlowlogRequest &request,
      const CreateFlowlogAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  CreateFlowlogOutcomeCallable
  createFlowlogCallable(const Model::CreateFlowlogRequest &request) const;
  DescribeCenGeographicSpanRemainingBandwidthOutcome
  describeCenGeographicSpanRemainingBandwidth(
      const Model::DescribeCenGeographicSpanRemainingBandwidthRequest &request)
      const;
  void describeCenGeographicSpanRemainingBandwidthAsync(
      const Model::DescribeCenGeographicSpanRemainingBandwidthRequest &request,
      const DescribeCenGeographicSpanRemainingBandwidthAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  DescribeCenGeographicSpanRemainingBandwidthOutcomeCallable
  describeCenGeographicSpanRemainingBandwidthCallable(
      const Model::DescribeCenGeographicSpanRemainingBandwidthRequest &request)
      const;
  PublishRouteEntriesOutcome
  publishRouteEntries(const Model::PublishRouteEntriesRequest &request) const;
  void publishRouteEntriesAsync(
      const Model::PublishRouteEntriesRequest &request,
      const PublishRouteEntriesAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  PublishRouteEntriesOutcomeCallable publishRouteEntriesCallable(
      const Model::PublishRouteEntriesRequest &request) const;
  AssociateCenBandwidthPackageOutcome associateCenBandwidthPackage(
      const Model::AssociateCenBandwidthPackageRequest &request) const;
  void associateCenBandwidthPackageAsync(
      const Model::AssociateCenBandwidthPackageRequest &request,
      const AssociateCenBandwidthPackageAsyncHandler &handler,
      const std::shared_ptr<const AsyncCallerContext> &context = nullptr) const;
  AssociateCenBandwidthPackageOutcomeCallable
  associateCenBandwidthPackageCallable(
      const Model::AssociateCenBandwidthPackageRequest &request) const;

private:
  std::shared_ptr<EndpointProvider> endpointProvider_;
};
} // namespace Cbn
} // namespace AlibabaCloud

#endif // !ALIBABACLOUD_CBN_CBNCLIENT_H_
