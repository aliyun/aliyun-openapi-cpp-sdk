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

#ifndef ALIBABACLOUD_GA_GACLIENT_H_
#define ALIBABACLOUD_GA_GACLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "GaExport.h"
#include "model/AddEntriesToAclRequest.h"
#include "model/AddEntriesToAclResult.h"
#include "model/AssociateAclsWithListenerRequest.h"
#include "model/AssociateAclsWithListenerResult.h"
#include "model/AssociateAdditionalCertificatesWithListenerRequest.h"
#include "model/AssociateAdditionalCertificatesWithListenerResult.h"
#include "model/AttachDdosToAcceleratorRequest.h"
#include "model/AttachDdosToAcceleratorResult.h"
#include "model/AttachLogStoreToEndpointGroupRequest.h"
#include "model/AttachLogStoreToEndpointGroupResult.h"
#include "model/BandwidthPackageAddAcceleratorRequest.h"
#include "model/BandwidthPackageAddAcceleratorResult.h"
#include "model/BandwidthPackageRemoveAcceleratorRequest.h"
#include "model/BandwidthPackageRemoveAcceleratorResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/ConfigEndpointProbeRequest.h"
#include "model/ConfigEndpointProbeResult.h"
#include "model/CreateAcceleratorRequest.h"
#include "model/CreateAcceleratorResult.h"
#include "model/CreateAclRequest.h"
#include "model/CreateAclResult.h"
#include "model/CreateApplicationMonitorRequest.h"
#include "model/CreateApplicationMonitorResult.h"
#include "model/CreateBandwidthPackageRequest.h"
#include "model/CreateBandwidthPackageResult.h"
#include "model/CreateBasicAccelerateIpRequest.h"
#include "model/CreateBasicAccelerateIpResult.h"
#include "model/CreateBasicAccelerateIpEndpointRelationRequest.h"
#include "model/CreateBasicAccelerateIpEndpointRelationResult.h"
#include "model/CreateBasicAccelerateIpEndpointRelationsRequest.h"
#include "model/CreateBasicAccelerateIpEndpointRelationsResult.h"
#include "model/CreateBasicAcceleratorRequest.h"
#include "model/CreateBasicAcceleratorResult.h"
#include "model/CreateBasicEndpointRequest.h"
#include "model/CreateBasicEndpointResult.h"
#include "model/CreateBasicEndpointGroupRequest.h"
#include "model/CreateBasicEndpointGroupResult.h"
#include "model/CreateBasicEndpointsRequest.h"
#include "model/CreateBasicEndpointsResult.h"
#include "model/CreateBasicIpSetRequest.h"
#include "model/CreateBasicIpSetResult.h"
#include "model/CreateCustomRoutingEndpointGroupDestinationsRequest.h"
#include "model/CreateCustomRoutingEndpointGroupDestinationsResult.h"
#include "model/CreateCustomRoutingEndpointGroupsRequest.h"
#include "model/CreateCustomRoutingEndpointGroupsResult.h"
#include "model/CreateCustomRoutingEndpointTrafficPoliciesRequest.h"
#include "model/CreateCustomRoutingEndpointTrafficPoliciesResult.h"
#include "model/CreateCustomRoutingEndpointsRequest.h"
#include "model/CreateCustomRoutingEndpointsResult.h"
#include "model/CreateDomainRequest.h"
#include "model/CreateDomainResult.h"
#include "model/CreateEndpointGroupRequest.h"
#include "model/CreateEndpointGroupResult.h"
#include "model/CreateEndpointGroupsRequest.h"
#include "model/CreateEndpointGroupsResult.h"
#include "model/CreateForwardingRulesRequest.h"
#include "model/CreateForwardingRulesResult.h"
#include "model/CreateIpSetsRequest.h"
#include "model/CreateIpSetsResult.h"
#include "model/CreateListenerRequest.h"
#include "model/CreateListenerResult.h"
#include "model/CreateSpareIpsRequest.h"
#include "model/CreateSpareIpsResult.h"
#include "model/DeleteAcceleratorRequest.h"
#include "model/DeleteAcceleratorResult.h"
#include "model/DeleteAclRequest.h"
#include "model/DeleteAclResult.h"
#include "model/DeleteApplicationMonitorRequest.h"
#include "model/DeleteApplicationMonitorResult.h"
#include "model/DeleteBandwidthPackageRequest.h"
#include "model/DeleteBandwidthPackageResult.h"
#include "model/DeleteBasicAccelerateIpRequest.h"
#include "model/DeleteBasicAccelerateIpResult.h"
#include "model/DeleteBasicAccelerateIpEndpointRelationRequest.h"
#include "model/DeleteBasicAccelerateIpEndpointRelationResult.h"
#include "model/DeleteBasicAcceleratorRequest.h"
#include "model/DeleteBasicAcceleratorResult.h"
#include "model/DeleteBasicEndpointRequest.h"
#include "model/DeleteBasicEndpointResult.h"
#include "model/DeleteBasicEndpointGroupRequest.h"
#include "model/DeleteBasicEndpointGroupResult.h"
#include "model/DeleteBasicIpSetRequest.h"
#include "model/DeleteBasicIpSetResult.h"
#include "model/DeleteCustomRoutingEndpointGroupDestinationsRequest.h"
#include "model/DeleteCustomRoutingEndpointGroupDestinationsResult.h"
#include "model/DeleteCustomRoutingEndpointGroupsRequest.h"
#include "model/DeleteCustomRoutingEndpointGroupsResult.h"
#include "model/DeleteCustomRoutingEndpointTrafficPoliciesRequest.h"
#include "model/DeleteCustomRoutingEndpointTrafficPoliciesResult.h"
#include "model/DeleteCustomRoutingEndpointsRequest.h"
#include "model/DeleteCustomRoutingEndpointsResult.h"
#include "model/DeleteDomainAcceleratorRelationRequest.h"
#include "model/DeleteDomainAcceleratorRelationResult.h"
#include "model/DeleteEndpointGroupRequest.h"
#include "model/DeleteEndpointGroupResult.h"
#include "model/DeleteEndpointGroupsRequest.h"
#include "model/DeleteEndpointGroupsResult.h"
#include "model/DeleteForwardingRulesRequest.h"
#include "model/DeleteForwardingRulesResult.h"
#include "model/DeleteIpSetRequest.h"
#include "model/DeleteIpSetResult.h"
#include "model/DeleteIpSetsRequest.h"
#include "model/DeleteIpSetsResult.h"
#include "model/DeleteListenerRequest.h"
#include "model/DeleteListenerResult.h"
#include "model/DeleteSpareIpsRequest.h"
#include "model/DeleteSpareIpsResult.h"
#include "model/DescribeAcceleratorRequest.h"
#include "model/DescribeAcceleratorResult.h"
#include "model/DescribeAcceleratorAutoRenewAttributeRequest.h"
#include "model/DescribeAcceleratorAutoRenewAttributeResult.h"
#include "model/DescribeApplicationMonitorRequest.h"
#include "model/DescribeApplicationMonitorResult.h"
#include "model/DescribeBandwidthPackageRequest.h"
#include "model/DescribeBandwidthPackageResult.h"
#include "model/DescribeBandwidthPackageAutoRenewAttributeRequest.h"
#include "model/DescribeBandwidthPackageAutoRenewAttributeResult.h"
#include "model/DescribeCommodityRequest.h"
#include "model/DescribeCommodityResult.h"
#include "model/DescribeCommodityPriceRequest.h"
#include "model/DescribeCommodityPriceResult.h"
#include "model/DescribeCustomRoutingEndPointTrafficPolicyRequest.h"
#include "model/DescribeCustomRoutingEndPointTrafficPolicyResult.h"
#include "model/DescribeCustomRoutingEndpointRequest.h"
#include "model/DescribeCustomRoutingEndpointResult.h"
#include "model/DescribeCustomRoutingEndpointGroupRequest.h"
#include "model/DescribeCustomRoutingEndpointGroupResult.h"
#include "model/DescribeCustomRoutingEndpointGroupDestinationsRequest.h"
#include "model/DescribeCustomRoutingEndpointGroupDestinationsResult.h"
#include "model/DescribeEndpointGroupRequest.h"
#include "model/DescribeEndpointGroupResult.h"
#include "model/DescribeIpSetRequest.h"
#include "model/DescribeIpSetResult.h"
#include "model/DescribeListenerRequest.h"
#include "model/DescribeListenerResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DetachDdosFromAcceleratorRequest.h"
#include "model/DetachDdosFromAcceleratorResult.h"
#include "model/DetachLogStoreFromEndpointGroupRequest.h"
#include "model/DetachLogStoreFromEndpointGroupResult.h"
#include "model/DetectApplicationMonitorRequest.h"
#include "model/DetectApplicationMonitorResult.h"
#include "model/DisableApplicationMonitorRequest.h"
#include "model/DisableApplicationMonitorResult.h"
#include "model/DissociateAclsFromListenerRequest.h"
#include "model/DissociateAclsFromListenerResult.h"
#include "model/DissociateAdditionalCertificatesFromListenerRequest.h"
#include "model/DissociateAdditionalCertificatesFromListenerResult.h"
#include "model/EnableApplicationMonitorRequest.h"
#include "model/EnableApplicationMonitorResult.h"
#include "model/GetAclRequest.h"
#include "model/GetAclResult.h"
#include "model/GetBasicAccelerateIpRequest.h"
#include "model/GetBasicAccelerateIpResult.h"
#include "model/GetBasicAccelerateIpEndpointRelationRequest.h"
#include "model/GetBasicAccelerateIpEndpointRelationResult.h"
#include "model/GetBasicAccelerateIpIdleCountRequest.h"
#include "model/GetBasicAccelerateIpIdleCountResult.h"
#include "model/GetBasicAcceleratorRequest.h"
#include "model/GetBasicAcceleratorResult.h"
#include "model/GetBasicEndpointRequest.h"
#include "model/GetBasicEndpointResult.h"
#include "model/GetBasicEndpointGroupRequest.h"
#include "model/GetBasicEndpointGroupResult.h"
#include "model/GetBasicIpSetRequest.h"
#include "model/GetBasicIpSetResult.h"
#include "model/GetHealthStatusRequest.h"
#include "model/GetHealthStatusResult.h"
#include "model/GetInvalidDomainCountRequest.h"
#include "model/GetInvalidDomainCountResult.h"
#include "model/GetIpsetsBandwidthLimitRequest.h"
#include "model/GetIpsetsBandwidthLimitResult.h"
#include "model/GetSpareIpRequest.h"
#include "model/GetSpareIpResult.h"
#include "model/ListAccelerateAreasRequest.h"
#include "model/ListAccelerateAreasResult.h"
#include "model/ListAcceleratorsRequest.h"
#include "model/ListAcceleratorsResult.h"
#include "model/ListAclsRequest.h"
#include "model/ListAclsResult.h"
#include "model/ListApplicationMonitorRequest.h"
#include "model/ListApplicationMonitorResult.h"
#include "model/ListApplicationMonitorDetectResultRequest.h"
#include "model/ListApplicationMonitorDetectResultResult.h"
#include "model/ListAvailableAccelerateAreasRequest.h"
#include "model/ListAvailableAccelerateAreasResult.h"
#include "model/ListAvailableBusiRegionsRequest.h"
#include "model/ListAvailableBusiRegionsResult.h"
#include "model/ListBandwidthPackagesRequest.h"
#include "model/ListBandwidthPackagesResult.h"
#include "model/ListBandwidthackagesRequest.h"
#include "model/ListBandwidthackagesResult.h"
#include "model/ListBasicAccelerateIpEndpointRelationsRequest.h"
#include "model/ListBasicAccelerateIpEndpointRelationsResult.h"
#include "model/ListBasicAccelerateIpsRequest.h"
#include "model/ListBasicAccelerateIpsResult.h"
#include "model/ListBasicAcceleratorsRequest.h"
#include "model/ListBasicAcceleratorsResult.h"
#include "model/ListBasicEndpointsRequest.h"
#include "model/ListBasicEndpointsResult.h"
#include "model/ListBusiRegionsRequest.h"
#include "model/ListBusiRegionsResult.h"
#include "model/ListCommonAreasRequest.h"
#include "model/ListCommonAreasResult.h"
#include "model/ListCustomRoutingEndpointGroupDestinationsRequest.h"
#include "model/ListCustomRoutingEndpointGroupDestinationsResult.h"
#include "model/ListCustomRoutingEndpointGroupsRequest.h"
#include "model/ListCustomRoutingEndpointGroupsResult.h"
#include "model/ListCustomRoutingEndpointTrafficPoliciesRequest.h"
#include "model/ListCustomRoutingEndpointTrafficPoliciesResult.h"
#include "model/ListCustomRoutingEndpointsRequest.h"
#include "model/ListCustomRoutingEndpointsResult.h"
#include "model/ListCustomRoutingPortMappingsRequest.h"
#include "model/ListCustomRoutingPortMappingsResult.h"
#include "model/ListCustomRoutingPortMappingsByDestinationRequest.h"
#include "model/ListCustomRoutingPortMappingsByDestinationResult.h"
#include "model/ListDomainsRequest.h"
#include "model/ListDomainsResult.h"
#include "model/ListEndpointGroupsRequest.h"
#include "model/ListEndpointGroupsResult.h"
#include "model/ListForwardingRulesRequest.h"
#include "model/ListForwardingRulesResult.h"
#include "model/ListIpSetsRequest.h"
#include "model/ListIpSetsResult.h"
#include "model/ListIspTypesRequest.h"
#include "model/ListIspTypesResult.h"
#include "model/ListListenerCertificatesRequest.h"
#include "model/ListListenerCertificatesResult.h"
#include "model/ListListenersRequest.h"
#include "model/ListListenersResult.h"
#include "model/ListSpareIpsRequest.h"
#include "model/ListSpareIpsResult.h"
#include "model/ListSystemSecurityPoliciesRequest.h"
#include "model/ListSystemSecurityPoliciesResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/QueryCrossBorderApprovalStatusRequest.h"
#include "model/QueryCrossBorderApprovalStatusResult.h"
#include "model/RemoveEntriesFromAclRequest.h"
#include "model/RemoveEntriesFromAclResult.h"
#include "model/ReplaceBandwidthPackageRequest.h"
#include "model/ReplaceBandwidthPackageResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAcceleratorRequest.h"
#include "model/UpdateAcceleratorResult.h"
#include "model/UpdateAcceleratorAutoRenewAttributeRequest.h"
#include "model/UpdateAcceleratorAutoRenewAttributeResult.h"
#include "model/UpdateAcceleratorConfirmRequest.h"
#include "model/UpdateAcceleratorConfirmResult.h"
#include "model/UpdateAcceleratorCrossBorderModeRequest.h"
#include "model/UpdateAcceleratorCrossBorderModeResult.h"
#include "model/UpdateAclAttributeRequest.h"
#include "model/UpdateAclAttributeResult.h"
#include "model/UpdateAdditionalCertificateWithListenerRequest.h"
#include "model/UpdateAdditionalCertificateWithListenerResult.h"
#include "model/UpdateApplicationMonitorRequest.h"
#include "model/UpdateApplicationMonitorResult.h"
#include "model/UpdateBandwidthPackagaAutoRenewAttributeRequest.h"
#include "model/UpdateBandwidthPackagaAutoRenewAttributeResult.h"
#include "model/UpdateBandwidthPackageRequest.h"
#include "model/UpdateBandwidthPackageResult.h"
#include "model/UpdateBasicAcceleratorRequest.h"
#include "model/UpdateBasicAcceleratorResult.h"
#include "model/UpdateBasicEndpointRequest.h"
#include "model/UpdateBasicEndpointResult.h"
#include "model/UpdateBasicEndpointGroupRequest.h"
#include "model/UpdateBasicEndpointGroupResult.h"
#include "model/UpdateBasicIpSetRequest.h"
#include "model/UpdateBasicIpSetResult.h"
#include "model/UpdateCustomRoutingEndpointGroupAttributeRequest.h"
#include "model/UpdateCustomRoutingEndpointGroupAttributeResult.h"
#include "model/UpdateCustomRoutingEndpointGroupDestinationsRequest.h"
#include "model/UpdateCustomRoutingEndpointGroupDestinationsResult.h"
#include "model/UpdateCustomRoutingEndpointTrafficPoliciesRequest.h"
#include "model/UpdateCustomRoutingEndpointTrafficPoliciesResult.h"
#include "model/UpdateCustomRoutingEndpointsRequest.h"
#include "model/UpdateCustomRoutingEndpointsResult.h"
#include "model/UpdateDomainRequest.h"
#include "model/UpdateDomainResult.h"
#include "model/UpdateDomainStateRequest.h"
#include "model/UpdateDomainStateResult.h"
#include "model/UpdateEndpointGroupRequest.h"
#include "model/UpdateEndpointGroupResult.h"
#include "model/UpdateEndpointGroupAttributeRequest.h"
#include "model/UpdateEndpointGroupAttributeResult.h"
#include "model/UpdateEndpointGroupsRequest.h"
#include "model/UpdateEndpointGroupsResult.h"
#include "model/UpdateForwardingRulesRequest.h"
#include "model/UpdateForwardingRulesResult.h"
#include "model/UpdateIpSetRequest.h"
#include "model/UpdateIpSetResult.h"
#include "model/UpdateIpSetsRequest.h"
#include "model/UpdateIpSetsResult.h"
#include "model/UpdateListenerRequest.h"
#include "model/UpdateListenerResult.h"


namespace AlibabaCloud
{
	namespace Ga
	{
		class ALIBABACLOUD_GA_EXPORT GaClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddEntriesToAclResult> AddEntriesToAclOutcome;
			typedef std::future<AddEntriesToAclOutcome> AddEntriesToAclOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::AddEntriesToAclRequest&, const AddEntriesToAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEntriesToAclAsyncHandler;
			typedef Outcome<Error, Model::AssociateAclsWithListenerResult> AssociateAclsWithListenerOutcome;
			typedef std::future<AssociateAclsWithListenerOutcome> AssociateAclsWithListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::AssociateAclsWithListenerRequest&, const AssociateAclsWithListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAclsWithListenerAsyncHandler;
			typedef Outcome<Error, Model::AssociateAdditionalCertificatesWithListenerResult> AssociateAdditionalCertificatesWithListenerOutcome;
			typedef std::future<AssociateAdditionalCertificatesWithListenerOutcome> AssociateAdditionalCertificatesWithListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::AssociateAdditionalCertificatesWithListenerRequest&, const AssociateAdditionalCertificatesWithListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAdditionalCertificatesWithListenerAsyncHandler;
			typedef Outcome<Error, Model::AttachDdosToAcceleratorResult> AttachDdosToAcceleratorOutcome;
			typedef std::future<AttachDdosToAcceleratorOutcome> AttachDdosToAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::AttachDdosToAcceleratorRequest&, const AttachDdosToAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDdosToAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::AttachLogStoreToEndpointGroupResult> AttachLogStoreToEndpointGroupOutcome;
			typedef std::future<AttachLogStoreToEndpointGroupOutcome> AttachLogStoreToEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::AttachLogStoreToEndpointGroupRequest&, const AttachLogStoreToEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachLogStoreToEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::BandwidthPackageAddAcceleratorResult> BandwidthPackageAddAcceleratorOutcome;
			typedef std::future<BandwidthPackageAddAcceleratorOutcome> BandwidthPackageAddAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::BandwidthPackageAddAcceleratorRequest&, const BandwidthPackageAddAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BandwidthPackageAddAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::BandwidthPackageRemoveAcceleratorResult> BandwidthPackageRemoveAcceleratorOutcome;
			typedef std::future<BandwidthPackageRemoveAcceleratorOutcome> BandwidthPackageRemoveAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::BandwidthPackageRemoveAcceleratorRequest&, const BandwidthPackageRemoveAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BandwidthPackageRemoveAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ConfigEndpointProbeResult> ConfigEndpointProbeOutcome;
			typedef std::future<ConfigEndpointProbeOutcome> ConfigEndpointProbeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ConfigEndpointProbeRequest&, const ConfigEndpointProbeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigEndpointProbeAsyncHandler;
			typedef Outcome<Error, Model::CreateAcceleratorResult> CreateAcceleratorOutcome;
			typedef std::future<CreateAcceleratorOutcome> CreateAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateAcceleratorRequest&, const CreateAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::CreateAclResult> CreateAclOutcome;
			typedef std::future<CreateAclOutcome> CreateAclOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateAclRequest&, const CreateAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationMonitorResult> CreateApplicationMonitorOutcome;
			typedef std::future<CreateApplicationMonitorOutcome> CreateApplicationMonitorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateApplicationMonitorRequest&, const CreateApplicationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationMonitorAsyncHandler;
			typedef Outcome<Error, Model::CreateBandwidthPackageResult> CreateBandwidthPackageOutcome;
			typedef std::future<CreateBandwidthPackageOutcome> CreateBandwidthPackageOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateBandwidthPackageRequest&, const CreateBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::CreateBasicAccelerateIpResult> CreateBasicAccelerateIpOutcome;
			typedef std::future<CreateBasicAccelerateIpOutcome> CreateBasicAccelerateIpOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateBasicAccelerateIpRequest&, const CreateBasicAccelerateIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicAccelerateIpAsyncHandler;
			typedef Outcome<Error, Model::CreateBasicAccelerateIpEndpointRelationResult> CreateBasicAccelerateIpEndpointRelationOutcome;
			typedef std::future<CreateBasicAccelerateIpEndpointRelationOutcome> CreateBasicAccelerateIpEndpointRelationOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateBasicAccelerateIpEndpointRelationRequest&, const CreateBasicAccelerateIpEndpointRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicAccelerateIpEndpointRelationAsyncHandler;
			typedef Outcome<Error, Model::CreateBasicAccelerateIpEndpointRelationsResult> CreateBasicAccelerateIpEndpointRelationsOutcome;
			typedef std::future<CreateBasicAccelerateIpEndpointRelationsOutcome> CreateBasicAccelerateIpEndpointRelationsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateBasicAccelerateIpEndpointRelationsRequest&, const CreateBasicAccelerateIpEndpointRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicAccelerateIpEndpointRelationsAsyncHandler;
			typedef Outcome<Error, Model::CreateBasicAcceleratorResult> CreateBasicAcceleratorOutcome;
			typedef std::future<CreateBasicAcceleratorOutcome> CreateBasicAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateBasicAcceleratorRequest&, const CreateBasicAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::CreateBasicEndpointResult> CreateBasicEndpointOutcome;
			typedef std::future<CreateBasicEndpointOutcome> CreateBasicEndpointOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateBasicEndpointRequest&, const CreateBasicEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicEndpointAsyncHandler;
			typedef Outcome<Error, Model::CreateBasicEndpointGroupResult> CreateBasicEndpointGroupOutcome;
			typedef std::future<CreateBasicEndpointGroupOutcome> CreateBasicEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateBasicEndpointGroupRequest&, const CreateBasicEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateBasicEndpointsResult> CreateBasicEndpointsOutcome;
			typedef std::future<CreateBasicEndpointsOutcome> CreateBasicEndpointsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateBasicEndpointsRequest&, const CreateBasicEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicEndpointsAsyncHandler;
			typedef Outcome<Error, Model::CreateBasicIpSetResult> CreateBasicIpSetOutcome;
			typedef std::future<CreateBasicIpSetOutcome> CreateBasicIpSetOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateBasicIpSetRequest&, const CreateBasicIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicIpSetAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomRoutingEndpointGroupDestinationsResult> CreateCustomRoutingEndpointGroupDestinationsOutcome;
			typedef std::future<CreateCustomRoutingEndpointGroupDestinationsOutcome> CreateCustomRoutingEndpointGroupDestinationsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateCustomRoutingEndpointGroupDestinationsRequest&, const CreateCustomRoutingEndpointGroupDestinationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomRoutingEndpointGroupDestinationsAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomRoutingEndpointGroupsResult> CreateCustomRoutingEndpointGroupsOutcome;
			typedef std::future<CreateCustomRoutingEndpointGroupsOutcome> CreateCustomRoutingEndpointGroupsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateCustomRoutingEndpointGroupsRequest&, const CreateCustomRoutingEndpointGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomRoutingEndpointGroupsAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomRoutingEndpointTrafficPoliciesResult> CreateCustomRoutingEndpointTrafficPoliciesOutcome;
			typedef std::future<CreateCustomRoutingEndpointTrafficPoliciesOutcome> CreateCustomRoutingEndpointTrafficPoliciesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateCustomRoutingEndpointTrafficPoliciesRequest&, const CreateCustomRoutingEndpointTrafficPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomRoutingEndpointTrafficPoliciesAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomRoutingEndpointsResult> CreateCustomRoutingEndpointsOutcome;
			typedef std::future<CreateCustomRoutingEndpointsOutcome> CreateCustomRoutingEndpointsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateCustomRoutingEndpointsRequest&, const CreateCustomRoutingEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomRoutingEndpointsAsyncHandler;
			typedef Outcome<Error, Model::CreateDomainResult> CreateDomainOutcome;
			typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateDomainRequest&, const CreateDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAsyncHandler;
			typedef Outcome<Error, Model::CreateEndpointGroupResult> CreateEndpointGroupOutcome;
			typedef std::future<CreateEndpointGroupOutcome> CreateEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateEndpointGroupRequest&, const CreateEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateEndpointGroupsResult> CreateEndpointGroupsOutcome;
			typedef std::future<CreateEndpointGroupsOutcome> CreateEndpointGroupsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateEndpointGroupsRequest&, const CreateEndpointGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEndpointGroupsAsyncHandler;
			typedef Outcome<Error, Model::CreateForwardingRulesResult> CreateForwardingRulesOutcome;
			typedef std::future<CreateForwardingRulesOutcome> CreateForwardingRulesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateForwardingRulesRequest&, const CreateForwardingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardingRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateIpSetsResult> CreateIpSetsOutcome;
			typedef std::future<CreateIpSetsOutcome> CreateIpSetsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateIpSetsRequest&, const CreateIpSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpSetsAsyncHandler;
			typedef Outcome<Error, Model::CreateListenerResult> CreateListenerOutcome;
			typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateListenerRequest&, const CreateListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateSpareIpsResult> CreateSpareIpsOutcome;
			typedef std::future<CreateSpareIpsOutcome> CreateSpareIpsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateSpareIpsRequest&, const CreateSpareIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSpareIpsAsyncHandler;
			typedef Outcome<Error, Model::DeleteAcceleratorResult> DeleteAcceleratorOutcome;
			typedef std::future<DeleteAcceleratorOutcome> DeleteAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteAcceleratorRequest&, const DeleteAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::DeleteAclResult> DeleteAclOutcome;
			typedef std::future<DeleteAclOutcome> DeleteAclOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteAclRequest&, const DeleteAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationMonitorResult> DeleteApplicationMonitorOutcome;
			typedef std::future<DeleteApplicationMonitorOutcome> DeleteApplicationMonitorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteApplicationMonitorRequest&, const DeleteApplicationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationMonitorAsyncHandler;
			typedef Outcome<Error, Model::DeleteBandwidthPackageResult> DeleteBandwidthPackageOutcome;
			typedef std::future<DeleteBandwidthPackageOutcome> DeleteBandwidthPackageOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteBandwidthPackageRequest&, const DeleteBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::DeleteBasicAccelerateIpResult> DeleteBasicAccelerateIpOutcome;
			typedef std::future<DeleteBasicAccelerateIpOutcome> DeleteBasicAccelerateIpOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteBasicAccelerateIpRequest&, const DeleteBasicAccelerateIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBasicAccelerateIpAsyncHandler;
			typedef Outcome<Error, Model::DeleteBasicAccelerateIpEndpointRelationResult> DeleteBasicAccelerateIpEndpointRelationOutcome;
			typedef std::future<DeleteBasicAccelerateIpEndpointRelationOutcome> DeleteBasicAccelerateIpEndpointRelationOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteBasicAccelerateIpEndpointRelationRequest&, const DeleteBasicAccelerateIpEndpointRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBasicAccelerateIpEndpointRelationAsyncHandler;
			typedef Outcome<Error, Model::DeleteBasicAcceleratorResult> DeleteBasicAcceleratorOutcome;
			typedef std::future<DeleteBasicAcceleratorOutcome> DeleteBasicAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteBasicAcceleratorRequest&, const DeleteBasicAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBasicAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::DeleteBasicEndpointResult> DeleteBasicEndpointOutcome;
			typedef std::future<DeleteBasicEndpointOutcome> DeleteBasicEndpointOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteBasicEndpointRequest&, const DeleteBasicEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBasicEndpointAsyncHandler;
			typedef Outcome<Error, Model::DeleteBasicEndpointGroupResult> DeleteBasicEndpointGroupOutcome;
			typedef std::future<DeleteBasicEndpointGroupOutcome> DeleteBasicEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteBasicEndpointGroupRequest&, const DeleteBasicEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBasicEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteBasicIpSetResult> DeleteBasicIpSetOutcome;
			typedef std::future<DeleteBasicIpSetOutcome> DeleteBasicIpSetOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteBasicIpSetRequest&, const DeleteBasicIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBasicIpSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomRoutingEndpointGroupDestinationsResult> DeleteCustomRoutingEndpointGroupDestinationsOutcome;
			typedef std::future<DeleteCustomRoutingEndpointGroupDestinationsOutcome> DeleteCustomRoutingEndpointGroupDestinationsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteCustomRoutingEndpointGroupDestinationsRequest&, const DeleteCustomRoutingEndpointGroupDestinationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomRoutingEndpointGroupDestinationsAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomRoutingEndpointGroupsResult> DeleteCustomRoutingEndpointGroupsOutcome;
			typedef std::future<DeleteCustomRoutingEndpointGroupsOutcome> DeleteCustomRoutingEndpointGroupsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteCustomRoutingEndpointGroupsRequest&, const DeleteCustomRoutingEndpointGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomRoutingEndpointGroupsAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomRoutingEndpointTrafficPoliciesResult> DeleteCustomRoutingEndpointTrafficPoliciesOutcome;
			typedef std::future<DeleteCustomRoutingEndpointTrafficPoliciesOutcome> DeleteCustomRoutingEndpointTrafficPoliciesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteCustomRoutingEndpointTrafficPoliciesRequest&, const DeleteCustomRoutingEndpointTrafficPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomRoutingEndpointTrafficPoliciesAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomRoutingEndpointsResult> DeleteCustomRoutingEndpointsOutcome;
			typedef std::future<DeleteCustomRoutingEndpointsOutcome> DeleteCustomRoutingEndpointsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteCustomRoutingEndpointsRequest&, const DeleteCustomRoutingEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomRoutingEndpointsAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainAcceleratorRelationResult> DeleteDomainAcceleratorRelationOutcome;
			typedef std::future<DeleteDomainAcceleratorRelationOutcome> DeleteDomainAcceleratorRelationOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteDomainAcceleratorRelationRequest&, const DeleteDomainAcceleratorRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAcceleratorRelationAsyncHandler;
			typedef Outcome<Error, Model::DeleteEndpointGroupResult> DeleteEndpointGroupOutcome;
			typedef std::future<DeleteEndpointGroupOutcome> DeleteEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteEndpointGroupRequest&, const DeleteEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteEndpointGroupsResult> DeleteEndpointGroupsOutcome;
			typedef std::future<DeleteEndpointGroupsOutcome> DeleteEndpointGroupsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteEndpointGroupsRequest&, const DeleteEndpointGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEndpointGroupsAsyncHandler;
			typedef Outcome<Error, Model::DeleteForwardingRulesResult> DeleteForwardingRulesOutcome;
			typedef std::future<DeleteForwardingRulesOutcome> DeleteForwardingRulesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteForwardingRulesRequest&, const DeleteForwardingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardingRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpSetResult> DeleteIpSetOutcome;
			typedef std::future<DeleteIpSetOutcome> DeleteIpSetOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteIpSetRequest&, const DeleteIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpSetsResult> DeleteIpSetsOutcome;
			typedef std::future<DeleteIpSetsOutcome> DeleteIpSetsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteIpSetsRequest&, const DeleteIpSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpSetsAsyncHandler;
			typedef Outcome<Error, Model::DeleteListenerResult> DeleteListenerOutcome;
			typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteListenerRequest&, const DeleteListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
			typedef Outcome<Error, Model::DeleteSpareIpsResult> DeleteSpareIpsOutcome;
			typedef std::future<DeleteSpareIpsOutcome> DeleteSpareIpsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteSpareIpsRequest&, const DeleteSpareIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSpareIpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAcceleratorResult> DescribeAcceleratorOutcome;
			typedef std::future<DescribeAcceleratorOutcome> DescribeAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeAcceleratorRequest&, const DescribeAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::DescribeAcceleratorAutoRenewAttributeResult> DescribeAcceleratorAutoRenewAttributeOutcome;
			typedef std::future<DescribeAcceleratorAutoRenewAttributeOutcome> DescribeAcceleratorAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeAcceleratorAutoRenewAttributeRequest&, const DescribeAcceleratorAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAcceleratorAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationMonitorResult> DescribeApplicationMonitorOutcome;
			typedef std::future<DescribeApplicationMonitorOutcome> DescribeApplicationMonitorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeApplicationMonitorRequest&, const DescribeApplicationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeBandwidthPackageResult> DescribeBandwidthPackageOutcome;
			typedef std::future<DescribeBandwidthPackageOutcome> DescribeBandwidthPackageOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeBandwidthPackageRequest&, const DescribeBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::DescribeBandwidthPackageAutoRenewAttributeResult> DescribeBandwidthPackageAutoRenewAttributeOutcome;
			typedef std::future<DescribeBandwidthPackageAutoRenewAttributeOutcome> DescribeBandwidthPackageAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeBandwidthPackageAutoRenewAttributeRequest&, const DescribeBandwidthPackageAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommodityResult> DescribeCommodityOutcome;
			typedef std::future<DescribeCommodityOutcome> DescribeCommodityOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeCommodityRequest&, const DescribeCommodityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommodityAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommodityPriceResult> DescribeCommodityPriceOutcome;
			typedef std::future<DescribeCommodityPriceOutcome> DescribeCommodityPriceOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeCommodityPriceRequest&, const DescribeCommodityPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommodityPriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomRoutingEndPointTrafficPolicyResult> DescribeCustomRoutingEndPointTrafficPolicyOutcome;
			typedef std::future<DescribeCustomRoutingEndPointTrafficPolicyOutcome> DescribeCustomRoutingEndPointTrafficPolicyOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeCustomRoutingEndPointTrafficPolicyRequest&, const DescribeCustomRoutingEndPointTrafficPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRoutingEndPointTrafficPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomRoutingEndpointResult> DescribeCustomRoutingEndpointOutcome;
			typedef std::future<DescribeCustomRoutingEndpointOutcome> DescribeCustomRoutingEndpointOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeCustomRoutingEndpointRequest&, const DescribeCustomRoutingEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRoutingEndpointAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomRoutingEndpointGroupResult> DescribeCustomRoutingEndpointGroupOutcome;
			typedef std::future<DescribeCustomRoutingEndpointGroupOutcome> DescribeCustomRoutingEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeCustomRoutingEndpointGroupRequest&, const DescribeCustomRoutingEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRoutingEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomRoutingEndpointGroupDestinationsResult> DescribeCustomRoutingEndpointGroupDestinationsOutcome;
			typedef std::future<DescribeCustomRoutingEndpointGroupDestinationsOutcome> DescribeCustomRoutingEndpointGroupDestinationsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeCustomRoutingEndpointGroupDestinationsRequest&, const DescribeCustomRoutingEndpointGroupDestinationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRoutingEndpointGroupDestinationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeEndpointGroupResult> DescribeEndpointGroupOutcome;
			typedef std::future<DescribeEndpointGroupOutcome> DescribeEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeEndpointGroupRequest&, const DescribeEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpSetResult> DescribeIpSetOutcome;
			typedef std::future<DescribeIpSetOutcome> DescribeIpSetOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeIpSetRequest&, const DescribeIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpSetAsyncHandler;
			typedef Outcome<Error, Model::DescribeListenerResult> DescribeListenerOutcome;
			typedef std::future<DescribeListenerOutcome> DescribeListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeListenerRequest&, const DescribeListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DetachDdosFromAcceleratorResult> DetachDdosFromAcceleratorOutcome;
			typedef std::future<DetachDdosFromAcceleratorOutcome> DetachDdosFromAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DetachDdosFromAcceleratorRequest&, const DetachDdosFromAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachDdosFromAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::DetachLogStoreFromEndpointGroupResult> DetachLogStoreFromEndpointGroupOutcome;
			typedef std::future<DetachLogStoreFromEndpointGroupOutcome> DetachLogStoreFromEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DetachLogStoreFromEndpointGroupRequest&, const DetachLogStoreFromEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachLogStoreFromEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::DetectApplicationMonitorResult> DetectApplicationMonitorOutcome;
			typedef std::future<DetectApplicationMonitorOutcome> DetectApplicationMonitorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DetectApplicationMonitorRequest&, const DetectApplicationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectApplicationMonitorAsyncHandler;
			typedef Outcome<Error, Model::DisableApplicationMonitorResult> DisableApplicationMonitorOutcome;
			typedef std::future<DisableApplicationMonitorOutcome> DisableApplicationMonitorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DisableApplicationMonitorRequest&, const DisableApplicationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationMonitorAsyncHandler;
			typedef Outcome<Error, Model::DissociateAclsFromListenerResult> DissociateAclsFromListenerOutcome;
			typedef std::future<DissociateAclsFromListenerOutcome> DissociateAclsFromListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DissociateAclsFromListenerRequest&, const DissociateAclsFromListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateAclsFromListenerAsyncHandler;
			typedef Outcome<Error, Model::DissociateAdditionalCertificatesFromListenerResult> DissociateAdditionalCertificatesFromListenerOutcome;
			typedef std::future<DissociateAdditionalCertificatesFromListenerOutcome> DissociateAdditionalCertificatesFromListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DissociateAdditionalCertificatesFromListenerRequest&, const DissociateAdditionalCertificatesFromListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateAdditionalCertificatesFromListenerAsyncHandler;
			typedef Outcome<Error, Model::EnableApplicationMonitorResult> EnableApplicationMonitorOutcome;
			typedef std::future<EnableApplicationMonitorOutcome> EnableApplicationMonitorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::EnableApplicationMonitorRequest&, const EnableApplicationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationMonitorAsyncHandler;
			typedef Outcome<Error, Model::GetAclResult> GetAclOutcome;
			typedef std::future<GetAclOutcome> GetAclOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetAclRequest&, const GetAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAclAsyncHandler;
			typedef Outcome<Error, Model::GetBasicAccelerateIpResult> GetBasicAccelerateIpOutcome;
			typedef std::future<GetBasicAccelerateIpOutcome> GetBasicAccelerateIpOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetBasicAccelerateIpRequest&, const GetBasicAccelerateIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBasicAccelerateIpAsyncHandler;
			typedef Outcome<Error, Model::GetBasicAccelerateIpEndpointRelationResult> GetBasicAccelerateIpEndpointRelationOutcome;
			typedef std::future<GetBasicAccelerateIpEndpointRelationOutcome> GetBasicAccelerateIpEndpointRelationOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetBasicAccelerateIpEndpointRelationRequest&, const GetBasicAccelerateIpEndpointRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBasicAccelerateIpEndpointRelationAsyncHandler;
			typedef Outcome<Error, Model::GetBasicAccelerateIpIdleCountResult> GetBasicAccelerateIpIdleCountOutcome;
			typedef std::future<GetBasicAccelerateIpIdleCountOutcome> GetBasicAccelerateIpIdleCountOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetBasicAccelerateIpIdleCountRequest&, const GetBasicAccelerateIpIdleCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBasicAccelerateIpIdleCountAsyncHandler;
			typedef Outcome<Error, Model::GetBasicAcceleratorResult> GetBasicAcceleratorOutcome;
			typedef std::future<GetBasicAcceleratorOutcome> GetBasicAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetBasicAcceleratorRequest&, const GetBasicAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBasicAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::GetBasicEndpointResult> GetBasicEndpointOutcome;
			typedef std::future<GetBasicEndpointOutcome> GetBasicEndpointOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetBasicEndpointRequest&, const GetBasicEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBasicEndpointAsyncHandler;
			typedef Outcome<Error, Model::GetBasicEndpointGroupResult> GetBasicEndpointGroupOutcome;
			typedef std::future<GetBasicEndpointGroupOutcome> GetBasicEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetBasicEndpointGroupRequest&, const GetBasicEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBasicEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::GetBasicIpSetResult> GetBasicIpSetOutcome;
			typedef std::future<GetBasicIpSetOutcome> GetBasicIpSetOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetBasicIpSetRequest&, const GetBasicIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBasicIpSetAsyncHandler;
			typedef Outcome<Error, Model::GetHealthStatusResult> GetHealthStatusOutcome;
			typedef std::future<GetHealthStatusOutcome> GetHealthStatusOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetHealthStatusRequest&, const GetHealthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHealthStatusAsyncHandler;
			typedef Outcome<Error, Model::GetInvalidDomainCountResult> GetInvalidDomainCountOutcome;
			typedef std::future<GetInvalidDomainCountOutcome> GetInvalidDomainCountOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetInvalidDomainCountRequest&, const GetInvalidDomainCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInvalidDomainCountAsyncHandler;
			typedef Outcome<Error, Model::GetIpsetsBandwidthLimitResult> GetIpsetsBandwidthLimitOutcome;
			typedef std::future<GetIpsetsBandwidthLimitOutcome> GetIpsetsBandwidthLimitOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetIpsetsBandwidthLimitRequest&, const GetIpsetsBandwidthLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIpsetsBandwidthLimitAsyncHandler;
			typedef Outcome<Error, Model::GetSpareIpResult> GetSpareIpOutcome;
			typedef std::future<GetSpareIpOutcome> GetSpareIpOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetSpareIpRequest&, const GetSpareIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSpareIpAsyncHandler;
			typedef Outcome<Error, Model::ListAccelerateAreasResult> ListAccelerateAreasOutcome;
			typedef std::future<ListAccelerateAreasOutcome> ListAccelerateAreasOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListAccelerateAreasRequest&, const ListAccelerateAreasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccelerateAreasAsyncHandler;
			typedef Outcome<Error, Model::ListAcceleratorsResult> ListAcceleratorsOutcome;
			typedef std::future<ListAcceleratorsOutcome> ListAcceleratorsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListAcceleratorsRequest&, const ListAcceleratorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAcceleratorsAsyncHandler;
			typedef Outcome<Error, Model::ListAclsResult> ListAclsOutcome;
			typedef std::future<ListAclsOutcome> ListAclsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListAclsRequest&, const ListAclsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAclsAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationMonitorResult> ListApplicationMonitorOutcome;
			typedef std::future<ListApplicationMonitorOutcome> ListApplicationMonitorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListApplicationMonitorRequest&, const ListApplicationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationMonitorAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationMonitorDetectResultResult> ListApplicationMonitorDetectResultOutcome;
			typedef std::future<ListApplicationMonitorDetectResultOutcome> ListApplicationMonitorDetectResultOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListApplicationMonitorDetectResultRequest&, const ListApplicationMonitorDetectResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationMonitorDetectResultAsyncHandler;
			typedef Outcome<Error, Model::ListAvailableAccelerateAreasResult> ListAvailableAccelerateAreasOutcome;
			typedef std::future<ListAvailableAccelerateAreasOutcome> ListAvailableAccelerateAreasOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListAvailableAccelerateAreasRequest&, const ListAvailableAccelerateAreasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAvailableAccelerateAreasAsyncHandler;
			typedef Outcome<Error, Model::ListAvailableBusiRegionsResult> ListAvailableBusiRegionsOutcome;
			typedef std::future<ListAvailableBusiRegionsOutcome> ListAvailableBusiRegionsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListAvailableBusiRegionsRequest&, const ListAvailableBusiRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAvailableBusiRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListBandwidthPackagesResult> ListBandwidthPackagesOutcome;
			typedef std::future<ListBandwidthPackagesOutcome> ListBandwidthPackagesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListBandwidthPackagesRequest&, const ListBandwidthPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBandwidthPackagesAsyncHandler;
			typedef Outcome<Error, Model::ListBandwidthackagesResult> ListBandwidthackagesOutcome;
			typedef std::future<ListBandwidthackagesOutcome> ListBandwidthackagesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListBandwidthackagesRequest&, const ListBandwidthackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBandwidthackagesAsyncHandler;
			typedef Outcome<Error, Model::ListBasicAccelerateIpEndpointRelationsResult> ListBasicAccelerateIpEndpointRelationsOutcome;
			typedef std::future<ListBasicAccelerateIpEndpointRelationsOutcome> ListBasicAccelerateIpEndpointRelationsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListBasicAccelerateIpEndpointRelationsRequest&, const ListBasicAccelerateIpEndpointRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBasicAccelerateIpEndpointRelationsAsyncHandler;
			typedef Outcome<Error, Model::ListBasicAccelerateIpsResult> ListBasicAccelerateIpsOutcome;
			typedef std::future<ListBasicAccelerateIpsOutcome> ListBasicAccelerateIpsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListBasicAccelerateIpsRequest&, const ListBasicAccelerateIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBasicAccelerateIpsAsyncHandler;
			typedef Outcome<Error, Model::ListBasicAcceleratorsResult> ListBasicAcceleratorsOutcome;
			typedef std::future<ListBasicAcceleratorsOutcome> ListBasicAcceleratorsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListBasicAcceleratorsRequest&, const ListBasicAcceleratorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBasicAcceleratorsAsyncHandler;
			typedef Outcome<Error, Model::ListBasicEndpointsResult> ListBasicEndpointsOutcome;
			typedef std::future<ListBasicEndpointsOutcome> ListBasicEndpointsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListBasicEndpointsRequest&, const ListBasicEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBasicEndpointsAsyncHandler;
			typedef Outcome<Error, Model::ListBusiRegionsResult> ListBusiRegionsOutcome;
			typedef std::future<ListBusiRegionsOutcome> ListBusiRegionsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListBusiRegionsRequest&, const ListBusiRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBusiRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListCommonAreasResult> ListCommonAreasOutcome;
			typedef std::future<ListCommonAreasOutcome> ListCommonAreasOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListCommonAreasRequest&, const ListCommonAreasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCommonAreasAsyncHandler;
			typedef Outcome<Error, Model::ListCustomRoutingEndpointGroupDestinationsResult> ListCustomRoutingEndpointGroupDestinationsOutcome;
			typedef std::future<ListCustomRoutingEndpointGroupDestinationsOutcome> ListCustomRoutingEndpointGroupDestinationsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListCustomRoutingEndpointGroupDestinationsRequest&, const ListCustomRoutingEndpointGroupDestinationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomRoutingEndpointGroupDestinationsAsyncHandler;
			typedef Outcome<Error, Model::ListCustomRoutingEndpointGroupsResult> ListCustomRoutingEndpointGroupsOutcome;
			typedef std::future<ListCustomRoutingEndpointGroupsOutcome> ListCustomRoutingEndpointGroupsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListCustomRoutingEndpointGroupsRequest&, const ListCustomRoutingEndpointGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomRoutingEndpointGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListCustomRoutingEndpointTrafficPoliciesResult> ListCustomRoutingEndpointTrafficPoliciesOutcome;
			typedef std::future<ListCustomRoutingEndpointTrafficPoliciesOutcome> ListCustomRoutingEndpointTrafficPoliciesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListCustomRoutingEndpointTrafficPoliciesRequest&, const ListCustomRoutingEndpointTrafficPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomRoutingEndpointTrafficPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListCustomRoutingEndpointsResult> ListCustomRoutingEndpointsOutcome;
			typedef std::future<ListCustomRoutingEndpointsOutcome> ListCustomRoutingEndpointsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListCustomRoutingEndpointsRequest&, const ListCustomRoutingEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomRoutingEndpointsAsyncHandler;
			typedef Outcome<Error, Model::ListCustomRoutingPortMappingsResult> ListCustomRoutingPortMappingsOutcome;
			typedef std::future<ListCustomRoutingPortMappingsOutcome> ListCustomRoutingPortMappingsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListCustomRoutingPortMappingsRequest&, const ListCustomRoutingPortMappingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomRoutingPortMappingsAsyncHandler;
			typedef Outcome<Error, Model::ListCustomRoutingPortMappingsByDestinationResult> ListCustomRoutingPortMappingsByDestinationOutcome;
			typedef std::future<ListCustomRoutingPortMappingsByDestinationOutcome> ListCustomRoutingPortMappingsByDestinationOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListCustomRoutingPortMappingsByDestinationRequest&, const ListCustomRoutingPortMappingsByDestinationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomRoutingPortMappingsByDestinationAsyncHandler;
			typedef Outcome<Error, Model::ListDomainsResult> ListDomainsOutcome;
			typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListDomainsRequest&, const ListDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDomainsAsyncHandler;
			typedef Outcome<Error, Model::ListEndpointGroupsResult> ListEndpointGroupsOutcome;
			typedef std::future<ListEndpointGroupsOutcome> ListEndpointGroupsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListEndpointGroupsRequest&, const ListEndpointGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEndpointGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListForwardingRulesResult> ListForwardingRulesOutcome;
			typedef std::future<ListForwardingRulesOutcome> ListForwardingRulesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListForwardingRulesRequest&, const ListForwardingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListForwardingRulesAsyncHandler;
			typedef Outcome<Error, Model::ListIpSetsResult> ListIpSetsOutcome;
			typedef std::future<ListIpSetsOutcome> ListIpSetsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListIpSetsRequest&, const ListIpSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIpSetsAsyncHandler;
			typedef Outcome<Error, Model::ListIspTypesResult> ListIspTypesOutcome;
			typedef std::future<ListIspTypesOutcome> ListIspTypesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListIspTypesRequest&, const ListIspTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIspTypesAsyncHandler;
			typedef Outcome<Error, Model::ListListenerCertificatesResult> ListListenerCertificatesOutcome;
			typedef std::future<ListListenerCertificatesOutcome> ListListenerCertificatesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListListenerCertificatesRequest&, const ListListenerCertificatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenerCertificatesAsyncHandler;
			typedef Outcome<Error, Model::ListListenersResult> ListListenersOutcome;
			typedef std::future<ListListenersOutcome> ListListenersOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListListenersRequest&, const ListListenersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenersAsyncHandler;
			typedef Outcome<Error, Model::ListSpareIpsResult> ListSpareIpsOutcome;
			typedef std::future<ListSpareIpsOutcome> ListSpareIpsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListSpareIpsRequest&, const ListSpareIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSpareIpsAsyncHandler;
			typedef Outcome<Error, Model::ListSystemSecurityPoliciesResult> ListSystemSecurityPoliciesOutcome;
			typedef std::future<ListSystemSecurityPoliciesOutcome> ListSystemSecurityPoliciesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListSystemSecurityPoliciesRequest&, const ListSystemSecurityPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSystemSecurityPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::QueryCrossBorderApprovalStatusResult> QueryCrossBorderApprovalStatusOutcome;
			typedef std::future<QueryCrossBorderApprovalStatusOutcome> QueryCrossBorderApprovalStatusOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::QueryCrossBorderApprovalStatusRequest&, const QueryCrossBorderApprovalStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCrossBorderApprovalStatusAsyncHandler;
			typedef Outcome<Error, Model::RemoveEntriesFromAclResult> RemoveEntriesFromAclOutcome;
			typedef std::future<RemoveEntriesFromAclOutcome> RemoveEntriesFromAclOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::RemoveEntriesFromAclRequest&, const RemoveEntriesFromAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEntriesFromAclAsyncHandler;
			typedef Outcome<Error, Model::ReplaceBandwidthPackageResult> ReplaceBandwidthPackageOutcome;
			typedef std::future<ReplaceBandwidthPackageOutcome> ReplaceBandwidthPackageOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ReplaceBandwidthPackageRequest&, const ReplaceBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAcceleratorResult> UpdateAcceleratorOutcome;
			typedef std::future<UpdateAcceleratorOutcome> UpdateAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateAcceleratorRequest&, const UpdateAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::UpdateAcceleratorAutoRenewAttributeResult> UpdateAcceleratorAutoRenewAttributeOutcome;
			typedef std::future<UpdateAcceleratorAutoRenewAttributeOutcome> UpdateAcceleratorAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateAcceleratorAutoRenewAttributeRequest&, const UpdateAcceleratorAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAcceleratorAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateAcceleratorConfirmResult> UpdateAcceleratorConfirmOutcome;
			typedef std::future<UpdateAcceleratorConfirmOutcome> UpdateAcceleratorConfirmOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateAcceleratorConfirmRequest&, const UpdateAcceleratorConfirmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAcceleratorConfirmAsyncHandler;
			typedef Outcome<Error, Model::UpdateAcceleratorCrossBorderModeResult> UpdateAcceleratorCrossBorderModeOutcome;
			typedef std::future<UpdateAcceleratorCrossBorderModeOutcome> UpdateAcceleratorCrossBorderModeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateAcceleratorCrossBorderModeRequest&, const UpdateAcceleratorCrossBorderModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAcceleratorCrossBorderModeAsyncHandler;
			typedef Outcome<Error, Model::UpdateAclAttributeResult> UpdateAclAttributeOutcome;
			typedef std::future<UpdateAclAttributeOutcome> UpdateAclAttributeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateAclAttributeRequest&, const UpdateAclAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAclAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateAdditionalCertificateWithListenerResult> UpdateAdditionalCertificateWithListenerOutcome;
			typedef std::future<UpdateAdditionalCertificateWithListenerOutcome> UpdateAdditionalCertificateWithListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateAdditionalCertificateWithListenerRequest&, const UpdateAdditionalCertificateWithListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAdditionalCertificateWithListenerAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationMonitorResult> UpdateApplicationMonitorOutcome;
			typedef std::future<UpdateApplicationMonitorOutcome> UpdateApplicationMonitorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateApplicationMonitorRequest&, const UpdateApplicationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationMonitorAsyncHandler;
			typedef Outcome<Error, Model::UpdateBandwidthPackagaAutoRenewAttributeResult> UpdateBandwidthPackagaAutoRenewAttributeOutcome;
			typedef std::future<UpdateBandwidthPackagaAutoRenewAttributeOutcome> UpdateBandwidthPackagaAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateBandwidthPackagaAutoRenewAttributeRequest&, const UpdateBandwidthPackagaAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBandwidthPackagaAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateBandwidthPackageResult> UpdateBandwidthPackageOutcome;
			typedef std::future<UpdateBandwidthPackageOutcome> UpdateBandwidthPackageOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateBandwidthPackageRequest&, const UpdateBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::UpdateBasicAcceleratorResult> UpdateBasicAcceleratorOutcome;
			typedef std::future<UpdateBasicAcceleratorOutcome> UpdateBasicAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateBasicAcceleratorRequest&, const UpdateBasicAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBasicAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::UpdateBasicEndpointResult> UpdateBasicEndpointOutcome;
			typedef std::future<UpdateBasicEndpointOutcome> UpdateBasicEndpointOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateBasicEndpointRequest&, const UpdateBasicEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBasicEndpointAsyncHandler;
			typedef Outcome<Error, Model::UpdateBasicEndpointGroupResult> UpdateBasicEndpointGroupOutcome;
			typedef std::future<UpdateBasicEndpointGroupOutcome> UpdateBasicEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateBasicEndpointGroupRequest&, const UpdateBasicEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBasicEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateBasicIpSetResult> UpdateBasicIpSetOutcome;
			typedef std::future<UpdateBasicIpSetOutcome> UpdateBasicIpSetOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateBasicIpSetRequest&, const UpdateBasicIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBasicIpSetAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomRoutingEndpointGroupAttributeResult> UpdateCustomRoutingEndpointGroupAttributeOutcome;
			typedef std::future<UpdateCustomRoutingEndpointGroupAttributeOutcome> UpdateCustomRoutingEndpointGroupAttributeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateCustomRoutingEndpointGroupAttributeRequest&, const UpdateCustomRoutingEndpointGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomRoutingEndpointGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomRoutingEndpointGroupDestinationsResult> UpdateCustomRoutingEndpointGroupDestinationsOutcome;
			typedef std::future<UpdateCustomRoutingEndpointGroupDestinationsOutcome> UpdateCustomRoutingEndpointGroupDestinationsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateCustomRoutingEndpointGroupDestinationsRequest&, const UpdateCustomRoutingEndpointGroupDestinationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomRoutingEndpointGroupDestinationsAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomRoutingEndpointTrafficPoliciesResult> UpdateCustomRoutingEndpointTrafficPoliciesOutcome;
			typedef std::future<UpdateCustomRoutingEndpointTrafficPoliciesOutcome> UpdateCustomRoutingEndpointTrafficPoliciesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateCustomRoutingEndpointTrafficPoliciesRequest&, const UpdateCustomRoutingEndpointTrafficPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomRoutingEndpointTrafficPoliciesAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomRoutingEndpointsResult> UpdateCustomRoutingEndpointsOutcome;
			typedef std::future<UpdateCustomRoutingEndpointsOutcome> UpdateCustomRoutingEndpointsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateCustomRoutingEndpointsRequest&, const UpdateCustomRoutingEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomRoutingEndpointsAsyncHandler;
			typedef Outcome<Error, Model::UpdateDomainResult> UpdateDomainOutcome;
			typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateDomainRequest&, const UpdateDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainAsyncHandler;
			typedef Outcome<Error, Model::UpdateDomainStateResult> UpdateDomainStateOutcome;
			typedef std::future<UpdateDomainStateOutcome> UpdateDomainStateOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateDomainStateRequest&, const UpdateDomainStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainStateAsyncHandler;
			typedef Outcome<Error, Model::UpdateEndpointGroupResult> UpdateEndpointGroupOutcome;
			typedef std::future<UpdateEndpointGroupOutcome> UpdateEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateEndpointGroupRequest&, const UpdateEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateEndpointGroupAttributeResult> UpdateEndpointGroupAttributeOutcome;
			typedef std::future<UpdateEndpointGroupAttributeOutcome> UpdateEndpointGroupAttributeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateEndpointGroupAttributeRequest&, const UpdateEndpointGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEndpointGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateEndpointGroupsResult> UpdateEndpointGroupsOutcome;
			typedef std::future<UpdateEndpointGroupsOutcome> UpdateEndpointGroupsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateEndpointGroupsRequest&, const UpdateEndpointGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEndpointGroupsAsyncHandler;
			typedef Outcome<Error, Model::UpdateForwardingRulesResult> UpdateForwardingRulesOutcome;
			typedef std::future<UpdateForwardingRulesOutcome> UpdateForwardingRulesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateForwardingRulesRequest&, const UpdateForwardingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateForwardingRulesAsyncHandler;
			typedef Outcome<Error, Model::UpdateIpSetResult> UpdateIpSetOutcome;
			typedef std::future<UpdateIpSetOutcome> UpdateIpSetOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateIpSetRequest&, const UpdateIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIpSetAsyncHandler;
			typedef Outcome<Error, Model::UpdateIpSetsResult> UpdateIpSetsOutcome;
			typedef std::future<UpdateIpSetsOutcome> UpdateIpSetsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateIpSetsRequest&, const UpdateIpSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIpSetsAsyncHandler;
			typedef Outcome<Error, Model::UpdateListenerResult> UpdateListenerOutcome;
			typedef std::future<UpdateListenerOutcome> UpdateListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateListenerRequest&, const UpdateListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateListenerAsyncHandler;

			GaClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GaClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GaClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GaClient();
			AddEntriesToAclOutcome addEntriesToAcl(const Model::AddEntriesToAclRequest &request)const;
			void addEntriesToAclAsync(const Model::AddEntriesToAclRequest& request, const AddEntriesToAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEntriesToAclOutcomeCallable addEntriesToAclCallable(const Model::AddEntriesToAclRequest& request) const;
			AssociateAclsWithListenerOutcome associateAclsWithListener(const Model::AssociateAclsWithListenerRequest &request)const;
			void associateAclsWithListenerAsync(const Model::AssociateAclsWithListenerRequest& request, const AssociateAclsWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateAclsWithListenerOutcomeCallable associateAclsWithListenerCallable(const Model::AssociateAclsWithListenerRequest& request) const;
			AssociateAdditionalCertificatesWithListenerOutcome associateAdditionalCertificatesWithListener(const Model::AssociateAdditionalCertificatesWithListenerRequest &request)const;
			void associateAdditionalCertificatesWithListenerAsync(const Model::AssociateAdditionalCertificatesWithListenerRequest& request, const AssociateAdditionalCertificatesWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateAdditionalCertificatesWithListenerOutcomeCallable associateAdditionalCertificatesWithListenerCallable(const Model::AssociateAdditionalCertificatesWithListenerRequest& request) const;
			AttachDdosToAcceleratorOutcome attachDdosToAccelerator(const Model::AttachDdosToAcceleratorRequest &request)const;
			void attachDdosToAcceleratorAsync(const Model::AttachDdosToAcceleratorRequest& request, const AttachDdosToAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDdosToAcceleratorOutcomeCallable attachDdosToAcceleratorCallable(const Model::AttachDdosToAcceleratorRequest& request) const;
			AttachLogStoreToEndpointGroupOutcome attachLogStoreToEndpointGroup(const Model::AttachLogStoreToEndpointGroupRequest &request)const;
			void attachLogStoreToEndpointGroupAsync(const Model::AttachLogStoreToEndpointGroupRequest& request, const AttachLogStoreToEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachLogStoreToEndpointGroupOutcomeCallable attachLogStoreToEndpointGroupCallable(const Model::AttachLogStoreToEndpointGroupRequest& request) const;
			BandwidthPackageAddAcceleratorOutcome bandwidthPackageAddAccelerator(const Model::BandwidthPackageAddAcceleratorRequest &request)const;
			void bandwidthPackageAddAcceleratorAsync(const Model::BandwidthPackageAddAcceleratorRequest& request, const BandwidthPackageAddAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BandwidthPackageAddAcceleratorOutcomeCallable bandwidthPackageAddAcceleratorCallable(const Model::BandwidthPackageAddAcceleratorRequest& request) const;
			BandwidthPackageRemoveAcceleratorOutcome bandwidthPackageRemoveAccelerator(const Model::BandwidthPackageRemoveAcceleratorRequest &request)const;
			void bandwidthPackageRemoveAcceleratorAsync(const Model::BandwidthPackageRemoveAcceleratorRequest& request, const BandwidthPackageRemoveAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BandwidthPackageRemoveAcceleratorOutcomeCallable bandwidthPackageRemoveAcceleratorCallable(const Model::BandwidthPackageRemoveAcceleratorRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			ConfigEndpointProbeOutcome configEndpointProbe(const Model::ConfigEndpointProbeRequest &request)const;
			void configEndpointProbeAsync(const Model::ConfigEndpointProbeRequest& request, const ConfigEndpointProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigEndpointProbeOutcomeCallable configEndpointProbeCallable(const Model::ConfigEndpointProbeRequest& request) const;
			CreateAcceleratorOutcome createAccelerator(const Model::CreateAcceleratorRequest &request)const;
			void createAcceleratorAsync(const Model::CreateAcceleratorRequest& request, const CreateAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAcceleratorOutcomeCallable createAcceleratorCallable(const Model::CreateAcceleratorRequest& request) const;
			CreateAclOutcome createAcl(const Model::CreateAclRequest &request)const;
			void createAclAsync(const Model::CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAclOutcomeCallable createAclCallable(const Model::CreateAclRequest& request) const;
			CreateApplicationMonitorOutcome createApplicationMonitor(const Model::CreateApplicationMonitorRequest &request)const;
			void createApplicationMonitorAsync(const Model::CreateApplicationMonitorRequest& request, const CreateApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationMonitorOutcomeCallable createApplicationMonitorCallable(const Model::CreateApplicationMonitorRequest& request) const;
			CreateBandwidthPackageOutcome createBandwidthPackage(const Model::CreateBandwidthPackageRequest &request)const;
			void createBandwidthPackageAsync(const Model::CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBandwidthPackageOutcomeCallable createBandwidthPackageCallable(const Model::CreateBandwidthPackageRequest& request) const;
			CreateBasicAccelerateIpOutcome createBasicAccelerateIp(const Model::CreateBasicAccelerateIpRequest &request)const;
			void createBasicAccelerateIpAsync(const Model::CreateBasicAccelerateIpRequest& request, const CreateBasicAccelerateIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBasicAccelerateIpOutcomeCallable createBasicAccelerateIpCallable(const Model::CreateBasicAccelerateIpRequest& request) const;
			CreateBasicAccelerateIpEndpointRelationOutcome createBasicAccelerateIpEndpointRelation(const Model::CreateBasicAccelerateIpEndpointRelationRequest &request)const;
			void createBasicAccelerateIpEndpointRelationAsync(const Model::CreateBasicAccelerateIpEndpointRelationRequest& request, const CreateBasicAccelerateIpEndpointRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBasicAccelerateIpEndpointRelationOutcomeCallable createBasicAccelerateIpEndpointRelationCallable(const Model::CreateBasicAccelerateIpEndpointRelationRequest& request) const;
			CreateBasicAccelerateIpEndpointRelationsOutcome createBasicAccelerateIpEndpointRelations(const Model::CreateBasicAccelerateIpEndpointRelationsRequest &request)const;
			void createBasicAccelerateIpEndpointRelationsAsync(const Model::CreateBasicAccelerateIpEndpointRelationsRequest& request, const CreateBasicAccelerateIpEndpointRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBasicAccelerateIpEndpointRelationsOutcomeCallable createBasicAccelerateIpEndpointRelationsCallable(const Model::CreateBasicAccelerateIpEndpointRelationsRequest& request) const;
			CreateBasicAcceleratorOutcome createBasicAccelerator(const Model::CreateBasicAcceleratorRequest &request)const;
			void createBasicAcceleratorAsync(const Model::CreateBasicAcceleratorRequest& request, const CreateBasicAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBasicAcceleratorOutcomeCallable createBasicAcceleratorCallable(const Model::CreateBasicAcceleratorRequest& request) const;
			CreateBasicEndpointOutcome createBasicEndpoint(const Model::CreateBasicEndpointRequest &request)const;
			void createBasicEndpointAsync(const Model::CreateBasicEndpointRequest& request, const CreateBasicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBasicEndpointOutcomeCallable createBasicEndpointCallable(const Model::CreateBasicEndpointRequest& request) const;
			CreateBasicEndpointGroupOutcome createBasicEndpointGroup(const Model::CreateBasicEndpointGroupRequest &request)const;
			void createBasicEndpointGroupAsync(const Model::CreateBasicEndpointGroupRequest& request, const CreateBasicEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBasicEndpointGroupOutcomeCallable createBasicEndpointGroupCallable(const Model::CreateBasicEndpointGroupRequest& request) const;
			CreateBasicEndpointsOutcome createBasicEndpoints(const Model::CreateBasicEndpointsRequest &request)const;
			void createBasicEndpointsAsync(const Model::CreateBasicEndpointsRequest& request, const CreateBasicEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBasicEndpointsOutcomeCallable createBasicEndpointsCallable(const Model::CreateBasicEndpointsRequest& request) const;
			CreateBasicIpSetOutcome createBasicIpSet(const Model::CreateBasicIpSetRequest &request)const;
			void createBasicIpSetAsync(const Model::CreateBasicIpSetRequest& request, const CreateBasicIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBasicIpSetOutcomeCallable createBasicIpSetCallable(const Model::CreateBasicIpSetRequest& request) const;
			CreateCustomRoutingEndpointGroupDestinationsOutcome createCustomRoutingEndpointGroupDestinations(const Model::CreateCustomRoutingEndpointGroupDestinationsRequest &request)const;
			void createCustomRoutingEndpointGroupDestinationsAsync(const Model::CreateCustomRoutingEndpointGroupDestinationsRequest& request, const CreateCustomRoutingEndpointGroupDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomRoutingEndpointGroupDestinationsOutcomeCallable createCustomRoutingEndpointGroupDestinationsCallable(const Model::CreateCustomRoutingEndpointGroupDestinationsRequest& request) const;
			CreateCustomRoutingEndpointGroupsOutcome createCustomRoutingEndpointGroups(const Model::CreateCustomRoutingEndpointGroupsRequest &request)const;
			void createCustomRoutingEndpointGroupsAsync(const Model::CreateCustomRoutingEndpointGroupsRequest& request, const CreateCustomRoutingEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomRoutingEndpointGroupsOutcomeCallable createCustomRoutingEndpointGroupsCallable(const Model::CreateCustomRoutingEndpointGroupsRequest& request) const;
			CreateCustomRoutingEndpointTrafficPoliciesOutcome createCustomRoutingEndpointTrafficPolicies(const Model::CreateCustomRoutingEndpointTrafficPoliciesRequest &request)const;
			void createCustomRoutingEndpointTrafficPoliciesAsync(const Model::CreateCustomRoutingEndpointTrafficPoliciesRequest& request, const CreateCustomRoutingEndpointTrafficPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomRoutingEndpointTrafficPoliciesOutcomeCallable createCustomRoutingEndpointTrafficPoliciesCallable(const Model::CreateCustomRoutingEndpointTrafficPoliciesRequest& request) const;
			CreateCustomRoutingEndpointsOutcome createCustomRoutingEndpoints(const Model::CreateCustomRoutingEndpointsRequest &request)const;
			void createCustomRoutingEndpointsAsync(const Model::CreateCustomRoutingEndpointsRequest& request, const CreateCustomRoutingEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomRoutingEndpointsOutcomeCallable createCustomRoutingEndpointsCallable(const Model::CreateCustomRoutingEndpointsRequest& request) const;
			CreateDomainOutcome createDomain(const Model::CreateDomainRequest &request)const;
			void createDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDomainOutcomeCallable createDomainCallable(const Model::CreateDomainRequest& request) const;
			CreateEndpointGroupOutcome createEndpointGroup(const Model::CreateEndpointGroupRequest &request)const;
			void createEndpointGroupAsync(const Model::CreateEndpointGroupRequest& request, const CreateEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEndpointGroupOutcomeCallable createEndpointGroupCallable(const Model::CreateEndpointGroupRequest& request) const;
			CreateEndpointGroupsOutcome createEndpointGroups(const Model::CreateEndpointGroupsRequest &request)const;
			void createEndpointGroupsAsync(const Model::CreateEndpointGroupsRequest& request, const CreateEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEndpointGroupsOutcomeCallable createEndpointGroupsCallable(const Model::CreateEndpointGroupsRequest& request) const;
			CreateForwardingRulesOutcome createForwardingRules(const Model::CreateForwardingRulesRequest &request)const;
			void createForwardingRulesAsync(const Model::CreateForwardingRulesRequest& request, const CreateForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateForwardingRulesOutcomeCallable createForwardingRulesCallable(const Model::CreateForwardingRulesRequest& request) const;
			CreateIpSetsOutcome createIpSets(const Model::CreateIpSetsRequest &request)const;
			void createIpSetsAsync(const Model::CreateIpSetsRequest& request, const CreateIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIpSetsOutcomeCallable createIpSetsCallable(const Model::CreateIpSetsRequest& request) const;
			CreateListenerOutcome createListener(const Model::CreateListenerRequest &request)const;
			void createListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateListenerOutcomeCallable createListenerCallable(const Model::CreateListenerRequest& request) const;
			CreateSpareIpsOutcome createSpareIps(const Model::CreateSpareIpsRequest &request)const;
			void createSpareIpsAsync(const Model::CreateSpareIpsRequest& request, const CreateSpareIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSpareIpsOutcomeCallable createSpareIpsCallable(const Model::CreateSpareIpsRequest& request) const;
			DeleteAcceleratorOutcome deleteAccelerator(const Model::DeleteAcceleratorRequest &request)const;
			void deleteAcceleratorAsync(const Model::DeleteAcceleratorRequest& request, const DeleteAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAcceleratorOutcomeCallable deleteAcceleratorCallable(const Model::DeleteAcceleratorRequest& request) const;
			DeleteAclOutcome deleteAcl(const Model::DeleteAclRequest &request)const;
			void deleteAclAsync(const Model::DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAclOutcomeCallable deleteAclCallable(const Model::DeleteAclRequest& request) const;
			DeleteApplicationMonitorOutcome deleteApplicationMonitor(const Model::DeleteApplicationMonitorRequest &request)const;
			void deleteApplicationMonitorAsync(const Model::DeleteApplicationMonitorRequest& request, const DeleteApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationMonitorOutcomeCallable deleteApplicationMonitorCallable(const Model::DeleteApplicationMonitorRequest& request) const;
			DeleteBandwidthPackageOutcome deleteBandwidthPackage(const Model::DeleteBandwidthPackageRequest &request)const;
			void deleteBandwidthPackageAsync(const Model::DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBandwidthPackageOutcomeCallable deleteBandwidthPackageCallable(const Model::DeleteBandwidthPackageRequest& request) const;
			DeleteBasicAccelerateIpOutcome deleteBasicAccelerateIp(const Model::DeleteBasicAccelerateIpRequest &request)const;
			void deleteBasicAccelerateIpAsync(const Model::DeleteBasicAccelerateIpRequest& request, const DeleteBasicAccelerateIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBasicAccelerateIpOutcomeCallable deleteBasicAccelerateIpCallable(const Model::DeleteBasicAccelerateIpRequest& request) const;
			DeleteBasicAccelerateIpEndpointRelationOutcome deleteBasicAccelerateIpEndpointRelation(const Model::DeleteBasicAccelerateIpEndpointRelationRequest &request)const;
			void deleteBasicAccelerateIpEndpointRelationAsync(const Model::DeleteBasicAccelerateIpEndpointRelationRequest& request, const DeleteBasicAccelerateIpEndpointRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBasicAccelerateIpEndpointRelationOutcomeCallable deleteBasicAccelerateIpEndpointRelationCallable(const Model::DeleteBasicAccelerateIpEndpointRelationRequest& request) const;
			DeleteBasicAcceleratorOutcome deleteBasicAccelerator(const Model::DeleteBasicAcceleratorRequest &request)const;
			void deleteBasicAcceleratorAsync(const Model::DeleteBasicAcceleratorRequest& request, const DeleteBasicAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBasicAcceleratorOutcomeCallable deleteBasicAcceleratorCallable(const Model::DeleteBasicAcceleratorRequest& request) const;
			DeleteBasicEndpointOutcome deleteBasicEndpoint(const Model::DeleteBasicEndpointRequest &request)const;
			void deleteBasicEndpointAsync(const Model::DeleteBasicEndpointRequest& request, const DeleteBasicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBasicEndpointOutcomeCallable deleteBasicEndpointCallable(const Model::DeleteBasicEndpointRequest& request) const;
			DeleteBasicEndpointGroupOutcome deleteBasicEndpointGroup(const Model::DeleteBasicEndpointGroupRequest &request)const;
			void deleteBasicEndpointGroupAsync(const Model::DeleteBasicEndpointGroupRequest& request, const DeleteBasicEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBasicEndpointGroupOutcomeCallable deleteBasicEndpointGroupCallable(const Model::DeleteBasicEndpointGroupRequest& request) const;
			DeleteBasicIpSetOutcome deleteBasicIpSet(const Model::DeleteBasicIpSetRequest &request)const;
			void deleteBasicIpSetAsync(const Model::DeleteBasicIpSetRequest& request, const DeleteBasicIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBasicIpSetOutcomeCallable deleteBasicIpSetCallable(const Model::DeleteBasicIpSetRequest& request) const;
			DeleteCustomRoutingEndpointGroupDestinationsOutcome deleteCustomRoutingEndpointGroupDestinations(const Model::DeleteCustomRoutingEndpointGroupDestinationsRequest &request)const;
			void deleteCustomRoutingEndpointGroupDestinationsAsync(const Model::DeleteCustomRoutingEndpointGroupDestinationsRequest& request, const DeleteCustomRoutingEndpointGroupDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomRoutingEndpointGroupDestinationsOutcomeCallable deleteCustomRoutingEndpointGroupDestinationsCallable(const Model::DeleteCustomRoutingEndpointGroupDestinationsRequest& request) const;
			DeleteCustomRoutingEndpointGroupsOutcome deleteCustomRoutingEndpointGroups(const Model::DeleteCustomRoutingEndpointGroupsRequest &request)const;
			void deleteCustomRoutingEndpointGroupsAsync(const Model::DeleteCustomRoutingEndpointGroupsRequest& request, const DeleteCustomRoutingEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomRoutingEndpointGroupsOutcomeCallable deleteCustomRoutingEndpointGroupsCallable(const Model::DeleteCustomRoutingEndpointGroupsRequest& request) const;
			DeleteCustomRoutingEndpointTrafficPoliciesOutcome deleteCustomRoutingEndpointTrafficPolicies(const Model::DeleteCustomRoutingEndpointTrafficPoliciesRequest &request)const;
			void deleteCustomRoutingEndpointTrafficPoliciesAsync(const Model::DeleteCustomRoutingEndpointTrafficPoliciesRequest& request, const DeleteCustomRoutingEndpointTrafficPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomRoutingEndpointTrafficPoliciesOutcomeCallable deleteCustomRoutingEndpointTrafficPoliciesCallable(const Model::DeleteCustomRoutingEndpointTrafficPoliciesRequest& request) const;
			DeleteCustomRoutingEndpointsOutcome deleteCustomRoutingEndpoints(const Model::DeleteCustomRoutingEndpointsRequest &request)const;
			void deleteCustomRoutingEndpointsAsync(const Model::DeleteCustomRoutingEndpointsRequest& request, const DeleteCustomRoutingEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomRoutingEndpointsOutcomeCallable deleteCustomRoutingEndpointsCallable(const Model::DeleteCustomRoutingEndpointsRequest& request) const;
			DeleteDomainAcceleratorRelationOutcome deleteDomainAcceleratorRelation(const Model::DeleteDomainAcceleratorRelationRequest &request)const;
			void deleteDomainAcceleratorRelationAsync(const Model::DeleteDomainAcceleratorRelationRequest& request, const DeleteDomainAcceleratorRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainAcceleratorRelationOutcomeCallable deleteDomainAcceleratorRelationCallable(const Model::DeleteDomainAcceleratorRelationRequest& request) const;
			DeleteEndpointGroupOutcome deleteEndpointGroup(const Model::DeleteEndpointGroupRequest &request)const;
			void deleteEndpointGroupAsync(const Model::DeleteEndpointGroupRequest& request, const DeleteEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEndpointGroupOutcomeCallable deleteEndpointGroupCallable(const Model::DeleteEndpointGroupRequest& request) const;
			DeleteEndpointGroupsOutcome deleteEndpointGroups(const Model::DeleteEndpointGroupsRequest &request)const;
			void deleteEndpointGroupsAsync(const Model::DeleteEndpointGroupsRequest& request, const DeleteEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEndpointGroupsOutcomeCallable deleteEndpointGroupsCallable(const Model::DeleteEndpointGroupsRequest& request) const;
			DeleteForwardingRulesOutcome deleteForwardingRules(const Model::DeleteForwardingRulesRequest &request)const;
			void deleteForwardingRulesAsync(const Model::DeleteForwardingRulesRequest& request, const DeleteForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteForwardingRulesOutcomeCallable deleteForwardingRulesCallable(const Model::DeleteForwardingRulesRequest& request) const;
			DeleteIpSetOutcome deleteIpSet(const Model::DeleteIpSetRequest &request)const;
			void deleteIpSetAsync(const Model::DeleteIpSetRequest& request, const DeleteIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpSetOutcomeCallable deleteIpSetCallable(const Model::DeleteIpSetRequest& request) const;
			DeleteIpSetsOutcome deleteIpSets(const Model::DeleteIpSetsRequest &request)const;
			void deleteIpSetsAsync(const Model::DeleteIpSetsRequest& request, const DeleteIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpSetsOutcomeCallable deleteIpSetsCallable(const Model::DeleteIpSetsRequest& request) const;
			DeleteListenerOutcome deleteListener(const Model::DeleteListenerRequest &request)const;
			void deleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteListenerOutcomeCallable deleteListenerCallable(const Model::DeleteListenerRequest& request) const;
			DeleteSpareIpsOutcome deleteSpareIps(const Model::DeleteSpareIpsRequest &request)const;
			void deleteSpareIpsAsync(const Model::DeleteSpareIpsRequest& request, const DeleteSpareIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSpareIpsOutcomeCallable deleteSpareIpsCallable(const Model::DeleteSpareIpsRequest& request) const;
			DescribeAcceleratorOutcome describeAccelerator(const Model::DescribeAcceleratorRequest &request)const;
			void describeAcceleratorAsync(const Model::DescribeAcceleratorRequest& request, const DescribeAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAcceleratorOutcomeCallable describeAcceleratorCallable(const Model::DescribeAcceleratorRequest& request) const;
			DescribeAcceleratorAutoRenewAttributeOutcome describeAcceleratorAutoRenewAttribute(const Model::DescribeAcceleratorAutoRenewAttributeRequest &request)const;
			void describeAcceleratorAutoRenewAttributeAsync(const Model::DescribeAcceleratorAutoRenewAttributeRequest& request, const DescribeAcceleratorAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAcceleratorAutoRenewAttributeOutcomeCallable describeAcceleratorAutoRenewAttributeCallable(const Model::DescribeAcceleratorAutoRenewAttributeRequest& request) const;
			DescribeApplicationMonitorOutcome describeApplicationMonitor(const Model::DescribeApplicationMonitorRequest &request)const;
			void describeApplicationMonitorAsync(const Model::DescribeApplicationMonitorRequest& request, const DescribeApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationMonitorOutcomeCallable describeApplicationMonitorCallable(const Model::DescribeApplicationMonitorRequest& request) const;
			DescribeBandwidthPackageOutcome describeBandwidthPackage(const Model::DescribeBandwidthPackageRequest &request)const;
			void describeBandwidthPackageAsync(const Model::DescribeBandwidthPackageRequest& request, const DescribeBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBandwidthPackageOutcomeCallable describeBandwidthPackageCallable(const Model::DescribeBandwidthPackageRequest& request) const;
			DescribeBandwidthPackageAutoRenewAttributeOutcome describeBandwidthPackageAutoRenewAttribute(const Model::DescribeBandwidthPackageAutoRenewAttributeRequest &request)const;
			void describeBandwidthPackageAutoRenewAttributeAsync(const Model::DescribeBandwidthPackageAutoRenewAttributeRequest& request, const DescribeBandwidthPackageAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBandwidthPackageAutoRenewAttributeOutcomeCallable describeBandwidthPackageAutoRenewAttributeCallable(const Model::DescribeBandwidthPackageAutoRenewAttributeRequest& request) const;
			DescribeCommodityOutcome describeCommodity(const Model::DescribeCommodityRequest &request)const;
			void describeCommodityAsync(const Model::DescribeCommodityRequest& request, const DescribeCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommodityOutcomeCallable describeCommodityCallable(const Model::DescribeCommodityRequest& request) const;
			DescribeCommodityPriceOutcome describeCommodityPrice(const Model::DescribeCommodityPriceRequest &request)const;
			void describeCommodityPriceAsync(const Model::DescribeCommodityPriceRequest& request, const DescribeCommodityPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommodityPriceOutcomeCallable describeCommodityPriceCallable(const Model::DescribeCommodityPriceRequest& request) const;
			DescribeCustomRoutingEndPointTrafficPolicyOutcome describeCustomRoutingEndPointTrafficPolicy(const Model::DescribeCustomRoutingEndPointTrafficPolicyRequest &request)const;
			void describeCustomRoutingEndPointTrafficPolicyAsync(const Model::DescribeCustomRoutingEndPointTrafficPolicyRequest& request, const DescribeCustomRoutingEndPointTrafficPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomRoutingEndPointTrafficPolicyOutcomeCallable describeCustomRoutingEndPointTrafficPolicyCallable(const Model::DescribeCustomRoutingEndPointTrafficPolicyRequest& request) const;
			DescribeCustomRoutingEndpointOutcome describeCustomRoutingEndpoint(const Model::DescribeCustomRoutingEndpointRequest &request)const;
			void describeCustomRoutingEndpointAsync(const Model::DescribeCustomRoutingEndpointRequest& request, const DescribeCustomRoutingEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomRoutingEndpointOutcomeCallable describeCustomRoutingEndpointCallable(const Model::DescribeCustomRoutingEndpointRequest& request) const;
			DescribeCustomRoutingEndpointGroupOutcome describeCustomRoutingEndpointGroup(const Model::DescribeCustomRoutingEndpointGroupRequest &request)const;
			void describeCustomRoutingEndpointGroupAsync(const Model::DescribeCustomRoutingEndpointGroupRequest& request, const DescribeCustomRoutingEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomRoutingEndpointGroupOutcomeCallable describeCustomRoutingEndpointGroupCallable(const Model::DescribeCustomRoutingEndpointGroupRequest& request) const;
			DescribeCustomRoutingEndpointGroupDestinationsOutcome describeCustomRoutingEndpointGroupDestinations(const Model::DescribeCustomRoutingEndpointGroupDestinationsRequest &request)const;
			void describeCustomRoutingEndpointGroupDestinationsAsync(const Model::DescribeCustomRoutingEndpointGroupDestinationsRequest& request, const DescribeCustomRoutingEndpointGroupDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomRoutingEndpointGroupDestinationsOutcomeCallable describeCustomRoutingEndpointGroupDestinationsCallable(const Model::DescribeCustomRoutingEndpointGroupDestinationsRequest& request) const;
			DescribeEndpointGroupOutcome describeEndpointGroup(const Model::DescribeEndpointGroupRequest &request)const;
			void describeEndpointGroupAsync(const Model::DescribeEndpointGroupRequest& request, const DescribeEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEndpointGroupOutcomeCallable describeEndpointGroupCallable(const Model::DescribeEndpointGroupRequest& request) const;
			DescribeIpSetOutcome describeIpSet(const Model::DescribeIpSetRequest &request)const;
			void describeIpSetAsync(const Model::DescribeIpSetRequest& request, const DescribeIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpSetOutcomeCallable describeIpSetCallable(const Model::DescribeIpSetRequest& request) const;
			DescribeListenerOutcome describeListener(const Model::DescribeListenerRequest &request)const;
			void describeListenerAsync(const Model::DescribeListenerRequest& request, const DescribeListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeListenerOutcomeCallable describeListenerCallable(const Model::DescribeListenerRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DetachDdosFromAcceleratorOutcome detachDdosFromAccelerator(const Model::DetachDdosFromAcceleratorRequest &request)const;
			void detachDdosFromAcceleratorAsync(const Model::DetachDdosFromAcceleratorRequest& request, const DetachDdosFromAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachDdosFromAcceleratorOutcomeCallable detachDdosFromAcceleratorCallable(const Model::DetachDdosFromAcceleratorRequest& request) const;
			DetachLogStoreFromEndpointGroupOutcome detachLogStoreFromEndpointGroup(const Model::DetachLogStoreFromEndpointGroupRequest &request)const;
			void detachLogStoreFromEndpointGroupAsync(const Model::DetachLogStoreFromEndpointGroupRequest& request, const DetachLogStoreFromEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachLogStoreFromEndpointGroupOutcomeCallable detachLogStoreFromEndpointGroupCallable(const Model::DetachLogStoreFromEndpointGroupRequest& request) const;
			DetectApplicationMonitorOutcome detectApplicationMonitor(const Model::DetectApplicationMonitorRequest &request)const;
			void detectApplicationMonitorAsync(const Model::DetectApplicationMonitorRequest& request, const DetectApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectApplicationMonitorOutcomeCallable detectApplicationMonitorCallable(const Model::DetectApplicationMonitorRequest& request) const;
			DisableApplicationMonitorOutcome disableApplicationMonitor(const Model::DisableApplicationMonitorRequest &request)const;
			void disableApplicationMonitorAsync(const Model::DisableApplicationMonitorRequest& request, const DisableApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableApplicationMonitorOutcomeCallable disableApplicationMonitorCallable(const Model::DisableApplicationMonitorRequest& request) const;
			DissociateAclsFromListenerOutcome dissociateAclsFromListener(const Model::DissociateAclsFromListenerRequest &request)const;
			void dissociateAclsFromListenerAsync(const Model::DissociateAclsFromListenerRequest& request, const DissociateAclsFromListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateAclsFromListenerOutcomeCallable dissociateAclsFromListenerCallable(const Model::DissociateAclsFromListenerRequest& request) const;
			DissociateAdditionalCertificatesFromListenerOutcome dissociateAdditionalCertificatesFromListener(const Model::DissociateAdditionalCertificatesFromListenerRequest &request)const;
			void dissociateAdditionalCertificatesFromListenerAsync(const Model::DissociateAdditionalCertificatesFromListenerRequest& request, const DissociateAdditionalCertificatesFromListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateAdditionalCertificatesFromListenerOutcomeCallable dissociateAdditionalCertificatesFromListenerCallable(const Model::DissociateAdditionalCertificatesFromListenerRequest& request) const;
			EnableApplicationMonitorOutcome enableApplicationMonitor(const Model::EnableApplicationMonitorRequest &request)const;
			void enableApplicationMonitorAsync(const Model::EnableApplicationMonitorRequest& request, const EnableApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableApplicationMonitorOutcomeCallable enableApplicationMonitorCallable(const Model::EnableApplicationMonitorRequest& request) const;
			GetAclOutcome getAcl(const Model::GetAclRequest &request)const;
			void getAclAsync(const Model::GetAclRequest& request, const GetAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAclOutcomeCallable getAclCallable(const Model::GetAclRequest& request) const;
			GetBasicAccelerateIpOutcome getBasicAccelerateIp(const Model::GetBasicAccelerateIpRequest &request)const;
			void getBasicAccelerateIpAsync(const Model::GetBasicAccelerateIpRequest& request, const GetBasicAccelerateIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBasicAccelerateIpOutcomeCallable getBasicAccelerateIpCallable(const Model::GetBasicAccelerateIpRequest& request) const;
			GetBasicAccelerateIpEndpointRelationOutcome getBasicAccelerateIpEndpointRelation(const Model::GetBasicAccelerateIpEndpointRelationRequest &request)const;
			void getBasicAccelerateIpEndpointRelationAsync(const Model::GetBasicAccelerateIpEndpointRelationRequest& request, const GetBasicAccelerateIpEndpointRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBasicAccelerateIpEndpointRelationOutcomeCallable getBasicAccelerateIpEndpointRelationCallable(const Model::GetBasicAccelerateIpEndpointRelationRequest& request) const;
			GetBasicAccelerateIpIdleCountOutcome getBasicAccelerateIpIdleCount(const Model::GetBasicAccelerateIpIdleCountRequest &request)const;
			void getBasicAccelerateIpIdleCountAsync(const Model::GetBasicAccelerateIpIdleCountRequest& request, const GetBasicAccelerateIpIdleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBasicAccelerateIpIdleCountOutcomeCallable getBasicAccelerateIpIdleCountCallable(const Model::GetBasicAccelerateIpIdleCountRequest& request) const;
			GetBasicAcceleratorOutcome getBasicAccelerator(const Model::GetBasicAcceleratorRequest &request)const;
			void getBasicAcceleratorAsync(const Model::GetBasicAcceleratorRequest& request, const GetBasicAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBasicAcceleratorOutcomeCallable getBasicAcceleratorCallable(const Model::GetBasicAcceleratorRequest& request) const;
			GetBasicEndpointOutcome getBasicEndpoint(const Model::GetBasicEndpointRequest &request)const;
			void getBasicEndpointAsync(const Model::GetBasicEndpointRequest& request, const GetBasicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBasicEndpointOutcomeCallable getBasicEndpointCallable(const Model::GetBasicEndpointRequest& request) const;
			GetBasicEndpointGroupOutcome getBasicEndpointGroup(const Model::GetBasicEndpointGroupRequest &request)const;
			void getBasicEndpointGroupAsync(const Model::GetBasicEndpointGroupRequest& request, const GetBasicEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBasicEndpointGroupOutcomeCallable getBasicEndpointGroupCallable(const Model::GetBasicEndpointGroupRequest& request) const;
			GetBasicIpSetOutcome getBasicIpSet(const Model::GetBasicIpSetRequest &request)const;
			void getBasicIpSetAsync(const Model::GetBasicIpSetRequest& request, const GetBasicIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBasicIpSetOutcomeCallable getBasicIpSetCallable(const Model::GetBasicIpSetRequest& request) const;
			GetHealthStatusOutcome getHealthStatus(const Model::GetHealthStatusRequest &request)const;
			void getHealthStatusAsync(const Model::GetHealthStatusRequest& request, const GetHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHealthStatusOutcomeCallable getHealthStatusCallable(const Model::GetHealthStatusRequest& request) const;
			GetInvalidDomainCountOutcome getInvalidDomainCount(const Model::GetInvalidDomainCountRequest &request)const;
			void getInvalidDomainCountAsync(const Model::GetInvalidDomainCountRequest& request, const GetInvalidDomainCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInvalidDomainCountOutcomeCallable getInvalidDomainCountCallable(const Model::GetInvalidDomainCountRequest& request) const;
			GetIpsetsBandwidthLimitOutcome getIpsetsBandwidthLimit(const Model::GetIpsetsBandwidthLimitRequest &request)const;
			void getIpsetsBandwidthLimitAsync(const Model::GetIpsetsBandwidthLimitRequest& request, const GetIpsetsBandwidthLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIpsetsBandwidthLimitOutcomeCallable getIpsetsBandwidthLimitCallable(const Model::GetIpsetsBandwidthLimitRequest& request) const;
			GetSpareIpOutcome getSpareIp(const Model::GetSpareIpRequest &request)const;
			void getSpareIpAsync(const Model::GetSpareIpRequest& request, const GetSpareIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSpareIpOutcomeCallable getSpareIpCallable(const Model::GetSpareIpRequest& request) const;
			ListAccelerateAreasOutcome listAccelerateAreas(const Model::ListAccelerateAreasRequest &request)const;
			void listAccelerateAreasAsync(const Model::ListAccelerateAreasRequest& request, const ListAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccelerateAreasOutcomeCallable listAccelerateAreasCallable(const Model::ListAccelerateAreasRequest& request) const;
			ListAcceleratorsOutcome listAccelerators(const Model::ListAcceleratorsRequest &request)const;
			void listAcceleratorsAsync(const Model::ListAcceleratorsRequest& request, const ListAcceleratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAcceleratorsOutcomeCallable listAcceleratorsCallable(const Model::ListAcceleratorsRequest& request) const;
			ListAclsOutcome listAcls(const Model::ListAclsRequest &request)const;
			void listAclsAsync(const Model::ListAclsRequest& request, const ListAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAclsOutcomeCallable listAclsCallable(const Model::ListAclsRequest& request) const;
			ListApplicationMonitorOutcome listApplicationMonitor(const Model::ListApplicationMonitorRequest &request)const;
			void listApplicationMonitorAsync(const Model::ListApplicationMonitorRequest& request, const ListApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationMonitorOutcomeCallable listApplicationMonitorCallable(const Model::ListApplicationMonitorRequest& request) const;
			ListApplicationMonitorDetectResultOutcome listApplicationMonitorDetectResult(const Model::ListApplicationMonitorDetectResultRequest &request)const;
			void listApplicationMonitorDetectResultAsync(const Model::ListApplicationMonitorDetectResultRequest& request, const ListApplicationMonitorDetectResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationMonitorDetectResultOutcomeCallable listApplicationMonitorDetectResultCallable(const Model::ListApplicationMonitorDetectResultRequest& request) const;
			ListAvailableAccelerateAreasOutcome listAvailableAccelerateAreas(const Model::ListAvailableAccelerateAreasRequest &request)const;
			void listAvailableAccelerateAreasAsync(const Model::ListAvailableAccelerateAreasRequest& request, const ListAvailableAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAvailableAccelerateAreasOutcomeCallable listAvailableAccelerateAreasCallable(const Model::ListAvailableAccelerateAreasRequest& request) const;
			ListAvailableBusiRegionsOutcome listAvailableBusiRegions(const Model::ListAvailableBusiRegionsRequest &request)const;
			void listAvailableBusiRegionsAsync(const Model::ListAvailableBusiRegionsRequest& request, const ListAvailableBusiRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAvailableBusiRegionsOutcomeCallable listAvailableBusiRegionsCallable(const Model::ListAvailableBusiRegionsRequest& request) const;
			ListBandwidthPackagesOutcome listBandwidthPackages(const Model::ListBandwidthPackagesRequest &request)const;
			void listBandwidthPackagesAsync(const Model::ListBandwidthPackagesRequest& request, const ListBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBandwidthPackagesOutcomeCallable listBandwidthPackagesCallable(const Model::ListBandwidthPackagesRequest& request) const;
			ListBandwidthackagesOutcome listBandwidthackages(const Model::ListBandwidthackagesRequest &request)const;
			void listBandwidthackagesAsync(const Model::ListBandwidthackagesRequest& request, const ListBandwidthackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBandwidthackagesOutcomeCallable listBandwidthackagesCallable(const Model::ListBandwidthackagesRequest& request) const;
			ListBasicAccelerateIpEndpointRelationsOutcome listBasicAccelerateIpEndpointRelations(const Model::ListBasicAccelerateIpEndpointRelationsRequest &request)const;
			void listBasicAccelerateIpEndpointRelationsAsync(const Model::ListBasicAccelerateIpEndpointRelationsRequest& request, const ListBasicAccelerateIpEndpointRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBasicAccelerateIpEndpointRelationsOutcomeCallable listBasicAccelerateIpEndpointRelationsCallable(const Model::ListBasicAccelerateIpEndpointRelationsRequest& request) const;
			ListBasicAccelerateIpsOutcome listBasicAccelerateIps(const Model::ListBasicAccelerateIpsRequest &request)const;
			void listBasicAccelerateIpsAsync(const Model::ListBasicAccelerateIpsRequest& request, const ListBasicAccelerateIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBasicAccelerateIpsOutcomeCallable listBasicAccelerateIpsCallable(const Model::ListBasicAccelerateIpsRequest& request) const;
			ListBasicAcceleratorsOutcome listBasicAccelerators(const Model::ListBasicAcceleratorsRequest &request)const;
			void listBasicAcceleratorsAsync(const Model::ListBasicAcceleratorsRequest& request, const ListBasicAcceleratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBasicAcceleratorsOutcomeCallable listBasicAcceleratorsCallable(const Model::ListBasicAcceleratorsRequest& request) const;
			ListBasicEndpointsOutcome listBasicEndpoints(const Model::ListBasicEndpointsRequest &request)const;
			void listBasicEndpointsAsync(const Model::ListBasicEndpointsRequest& request, const ListBasicEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBasicEndpointsOutcomeCallable listBasicEndpointsCallable(const Model::ListBasicEndpointsRequest& request) const;
			ListBusiRegionsOutcome listBusiRegions(const Model::ListBusiRegionsRequest &request)const;
			void listBusiRegionsAsync(const Model::ListBusiRegionsRequest& request, const ListBusiRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBusiRegionsOutcomeCallable listBusiRegionsCallable(const Model::ListBusiRegionsRequest& request) const;
			ListCommonAreasOutcome listCommonAreas(const Model::ListCommonAreasRequest &request)const;
			void listCommonAreasAsync(const Model::ListCommonAreasRequest& request, const ListCommonAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCommonAreasOutcomeCallable listCommonAreasCallable(const Model::ListCommonAreasRequest& request) const;
			ListCustomRoutingEndpointGroupDestinationsOutcome listCustomRoutingEndpointGroupDestinations(const Model::ListCustomRoutingEndpointGroupDestinationsRequest &request)const;
			void listCustomRoutingEndpointGroupDestinationsAsync(const Model::ListCustomRoutingEndpointGroupDestinationsRequest& request, const ListCustomRoutingEndpointGroupDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomRoutingEndpointGroupDestinationsOutcomeCallable listCustomRoutingEndpointGroupDestinationsCallable(const Model::ListCustomRoutingEndpointGroupDestinationsRequest& request) const;
			ListCustomRoutingEndpointGroupsOutcome listCustomRoutingEndpointGroups(const Model::ListCustomRoutingEndpointGroupsRequest &request)const;
			void listCustomRoutingEndpointGroupsAsync(const Model::ListCustomRoutingEndpointGroupsRequest& request, const ListCustomRoutingEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomRoutingEndpointGroupsOutcomeCallable listCustomRoutingEndpointGroupsCallable(const Model::ListCustomRoutingEndpointGroupsRequest& request) const;
			ListCustomRoutingEndpointTrafficPoliciesOutcome listCustomRoutingEndpointTrafficPolicies(const Model::ListCustomRoutingEndpointTrafficPoliciesRequest &request)const;
			void listCustomRoutingEndpointTrafficPoliciesAsync(const Model::ListCustomRoutingEndpointTrafficPoliciesRequest& request, const ListCustomRoutingEndpointTrafficPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomRoutingEndpointTrafficPoliciesOutcomeCallable listCustomRoutingEndpointTrafficPoliciesCallable(const Model::ListCustomRoutingEndpointTrafficPoliciesRequest& request) const;
			ListCustomRoutingEndpointsOutcome listCustomRoutingEndpoints(const Model::ListCustomRoutingEndpointsRequest &request)const;
			void listCustomRoutingEndpointsAsync(const Model::ListCustomRoutingEndpointsRequest& request, const ListCustomRoutingEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomRoutingEndpointsOutcomeCallable listCustomRoutingEndpointsCallable(const Model::ListCustomRoutingEndpointsRequest& request) const;
			ListCustomRoutingPortMappingsOutcome listCustomRoutingPortMappings(const Model::ListCustomRoutingPortMappingsRequest &request)const;
			void listCustomRoutingPortMappingsAsync(const Model::ListCustomRoutingPortMappingsRequest& request, const ListCustomRoutingPortMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomRoutingPortMappingsOutcomeCallable listCustomRoutingPortMappingsCallable(const Model::ListCustomRoutingPortMappingsRequest& request) const;
			ListCustomRoutingPortMappingsByDestinationOutcome listCustomRoutingPortMappingsByDestination(const Model::ListCustomRoutingPortMappingsByDestinationRequest &request)const;
			void listCustomRoutingPortMappingsByDestinationAsync(const Model::ListCustomRoutingPortMappingsByDestinationRequest& request, const ListCustomRoutingPortMappingsByDestinationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomRoutingPortMappingsByDestinationOutcomeCallable listCustomRoutingPortMappingsByDestinationCallable(const Model::ListCustomRoutingPortMappingsByDestinationRequest& request) const;
			ListDomainsOutcome listDomains(const Model::ListDomainsRequest &request)const;
			void listDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDomainsOutcomeCallable listDomainsCallable(const Model::ListDomainsRequest& request) const;
			ListEndpointGroupsOutcome listEndpointGroups(const Model::ListEndpointGroupsRequest &request)const;
			void listEndpointGroupsAsync(const Model::ListEndpointGroupsRequest& request, const ListEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEndpointGroupsOutcomeCallable listEndpointGroupsCallable(const Model::ListEndpointGroupsRequest& request) const;
			ListForwardingRulesOutcome listForwardingRules(const Model::ListForwardingRulesRequest &request)const;
			void listForwardingRulesAsync(const Model::ListForwardingRulesRequest& request, const ListForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListForwardingRulesOutcomeCallable listForwardingRulesCallable(const Model::ListForwardingRulesRequest& request) const;
			ListIpSetsOutcome listIpSets(const Model::ListIpSetsRequest &request)const;
			void listIpSetsAsync(const Model::ListIpSetsRequest& request, const ListIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIpSetsOutcomeCallable listIpSetsCallable(const Model::ListIpSetsRequest& request) const;
			ListIspTypesOutcome listIspTypes(const Model::ListIspTypesRequest &request)const;
			void listIspTypesAsync(const Model::ListIspTypesRequest& request, const ListIspTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIspTypesOutcomeCallable listIspTypesCallable(const Model::ListIspTypesRequest& request) const;
			ListListenerCertificatesOutcome listListenerCertificates(const Model::ListListenerCertificatesRequest &request)const;
			void listListenerCertificatesAsync(const Model::ListListenerCertificatesRequest& request, const ListListenerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenerCertificatesOutcomeCallable listListenerCertificatesCallable(const Model::ListListenerCertificatesRequest& request) const;
			ListListenersOutcome listListeners(const Model::ListListenersRequest &request)const;
			void listListenersAsync(const Model::ListListenersRequest& request, const ListListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenersOutcomeCallable listListenersCallable(const Model::ListListenersRequest& request) const;
			ListSpareIpsOutcome listSpareIps(const Model::ListSpareIpsRequest &request)const;
			void listSpareIpsAsync(const Model::ListSpareIpsRequest& request, const ListSpareIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSpareIpsOutcomeCallable listSpareIpsCallable(const Model::ListSpareIpsRequest& request) const;
			ListSystemSecurityPoliciesOutcome listSystemSecurityPolicies(const Model::ListSystemSecurityPoliciesRequest &request)const;
			void listSystemSecurityPoliciesAsync(const Model::ListSystemSecurityPoliciesRequest& request, const ListSystemSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSystemSecurityPoliciesOutcomeCallable listSystemSecurityPoliciesCallable(const Model::ListSystemSecurityPoliciesRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			QueryCrossBorderApprovalStatusOutcome queryCrossBorderApprovalStatus(const Model::QueryCrossBorderApprovalStatusRequest &request)const;
			void queryCrossBorderApprovalStatusAsync(const Model::QueryCrossBorderApprovalStatusRequest& request, const QueryCrossBorderApprovalStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCrossBorderApprovalStatusOutcomeCallable queryCrossBorderApprovalStatusCallable(const Model::QueryCrossBorderApprovalStatusRequest& request) const;
			RemoveEntriesFromAclOutcome removeEntriesFromAcl(const Model::RemoveEntriesFromAclRequest &request)const;
			void removeEntriesFromAclAsync(const Model::RemoveEntriesFromAclRequest& request, const RemoveEntriesFromAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveEntriesFromAclOutcomeCallable removeEntriesFromAclCallable(const Model::RemoveEntriesFromAclRequest& request) const;
			ReplaceBandwidthPackageOutcome replaceBandwidthPackage(const Model::ReplaceBandwidthPackageRequest &request)const;
			void replaceBandwidthPackageAsync(const Model::ReplaceBandwidthPackageRequest& request, const ReplaceBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceBandwidthPackageOutcomeCallable replaceBandwidthPackageCallable(const Model::ReplaceBandwidthPackageRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAcceleratorOutcome updateAccelerator(const Model::UpdateAcceleratorRequest &request)const;
			void updateAcceleratorAsync(const Model::UpdateAcceleratorRequest& request, const UpdateAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAcceleratorOutcomeCallable updateAcceleratorCallable(const Model::UpdateAcceleratorRequest& request) const;
			UpdateAcceleratorAutoRenewAttributeOutcome updateAcceleratorAutoRenewAttribute(const Model::UpdateAcceleratorAutoRenewAttributeRequest &request)const;
			void updateAcceleratorAutoRenewAttributeAsync(const Model::UpdateAcceleratorAutoRenewAttributeRequest& request, const UpdateAcceleratorAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAcceleratorAutoRenewAttributeOutcomeCallable updateAcceleratorAutoRenewAttributeCallable(const Model::UpdateAcceleratorAutoRenewAttributeRequest& request) const;
			UpdateAcceleratorConfirmOutcome updateAcceleratorConfirm(const Model::UpdateAcceleratorConfirmRequest &request)const;
			void updateAcceleratorConfirmAsync(const Model::UpdateAcceleratorConfirmRequest& request, const UpdateAcceleratorConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAcceleratorConfirmOutcomeCallable updateAcceleratorConfirmCallable(const Model::UpdateAcceleratorConfirmRequest& request) const;
			UpdateAcceleratorCrossBorderModeOutcome updateAcceleratorCrossBorderMode(const Model::UpdateAcceleratorCrossBorderModeRequest &request)const;
			void updateAcceleratorCrossBorderModeAsync(const Model::UpdateAcceleratorCrossBorderModeRequest& request, const UpdateAcceleratorCrossBorderModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAcceleratorCrossBorderModeOutcomeCallable updateAcceleratorCrossBorderModeCallable(const Model::UpdateAcceleratorCrossBorderModeRequest& request) const;
			UpdateAclAttributeOutcome updateAclAttribute(const Model::UpdateAclAttributeRequest &request)const;
			void updateAclAttributeAsync(const Model::UpdateAclAttributeRequest& request, const UpdateAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAclAttributeOutcomeCallable updateAclAttributeCallable(const Model::UpdateAclAttributeRequest& request) const;
			UpdateAdditionalCertificateWithListenerOutcome updateAdditionalCertificateWithListener(const Model::UpdateAdditionalCertificateWithListenerRequest &request)const;
			void updateAdditionalCertificateWithListenerAsync(const Model::UpdateAdditionalCertificateWithListenerRequest& request, const UpdateAdditionalCertificateWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAdditionalCertificateWithListenerOutcomeCallable updateAdditionalCertificateWithListenerCallable(const Model::UpdateAdditionalCertificateWithListenerRequest& request) const;
			UpdateApplicationMonitorOutcome updateApplicationMonitor(const Model::UpdateApplicationMonitorRequest &request)const;
			void updateApplicationMonitorAsync(const Model::UpdateApplicationMonitorRequest& request, const UpdateApplicationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationMonitorOutcomeCallable updateApplicationMonitorCallable(const Model::UpdateApplicationMonitorRequest& request) const;
			UpdateBandwidthPackagaAutoRenewAttributeOutcome updateBandwidthPackagaAutoRenewAttribute(const Model::UpdateBandwidthPackagaAutoRenewAttributeRequest &request)const;
			void updateBandwidthPackagaAutoRenewAttributeAsync(const Model::UpdateBandwidthPackagaAutoRenewAttributeRequest& request, const UpdateBandwidthPackagaAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBandwidthPackagaAutoRenewAttributeOutcomeCallable updateBandwidthPackagaAutoRenewAttributeCallable(const Model::UpdateBandwidthPackagaAutoRenewAttributeRequest& request) const;
			UpdateBandwidthPackageOutcome updateBandwidthPackage(const Model::UpdateBandwidthPackageRequest &request)const;
			void updateBandwidthPackageAsync(const Model::UpdateBandwidthPackageRequest& request, const UpdateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBandwidthPackageOutcomeCallable updateBandwidthPackageCallable(const Model::UpdateBandwidthPackageRequest& request) const;
			UpdateBasicAcceleratorOutcome updateBasicAccelerator(const Model::UpdateBasicAcceleratorRequest &request)const;
			void updateBasicAcceleratorAsync(const Model::UpdateBasicAcceleratorRequest& request, const UpdateBasicAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBasicAcceleratorOutcomeCallable updateBasicAcceleratorCallable(const Model::UpdateBasicAcceleratorRequest& request) const;
			UpdateBasicEndpointOutcome updateBasicEndpoint(const Model::UpdateBasicEndpointRequest &request)const;
			void updateBasicEndpointAsync(const Model::UpdateBasicEndpointRequest& request, const UpdateBasicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBasicEndpointOutcomeCallable updateBasicEndpointCallable(const Model::UpdateBasicEndpointRequest& request) const;
			UpdateBasicEndpointGroupOutcome updateBasicEndpointGroup(const Model::UpdateBasicEndpointGroupRequest &request)const;
			void updateBasicEndpointGroupAsync(const Model::UpdateBasicEndpointGroupRequest& request, const UpdateBasicEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBasicEndpointGroupOutcomeCallable updateBasicEndpointGroupCallable(const Model::UpdateBasicEndpointGroupRequest& request) const;
			UpdateBasicIpSetOutcome updateBasicIpSet(const Model::UpdateBasicIpSetRequest &request)const;
			void updateBasicIpSetAsync(const Model::UpdateBasicIpSetRequest& request, const UpdateBasicIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBasicIpSetOutcomeCallable updateBasicIpSetCallable(const Model::UpdateBasicIpSetRequest& request) const;
			UpdateCustomRoutingEndpointGroupAttributeOutcome updateCustomRoutingEndpointGroupAttribute(const Model::UpdateCustomRoutingEndpointGroupAttributeRequest &request)const;
			void updateCustomRoutingEndpointGroupAttributeAsync(const Model::UpdateCustomRoutingEndpointGroupAttributeRequest& request, const UpdateCustomRoutingEndpointGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomRoutingEndpointGroupAttributeOutcomeCallable updateCustomRoutingEndpointGroupAttributeCallable(const Model::UpdateCustomRoutingEndpointGroupAttributeRequest& request) const;
			UpdateCustomRoutingEndpointGroupDestinationsOutcome updateCustomRoutingEndpointGroupDestinations(const Model::UpdateCustomRoutingEndpointGroupDestinationsRequest &request)const;
			void updateCustomRoutingEndpointGroupDestinationsAsync(const Model::UpdateCustomRoutingEndpointGroupDestinationsRequest& request, const UpdateCustomRoutingEndpointGroupDestinationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomRoutingEndpointGroupDestinationsOutcomeCallable updateCustomRoutingEndpointGroupDestinationsCallable(const Model::UpdateCustomRoutingEndpointGroupDestinationsRequest& request) const;
			UpdateCustomRoutingEndpointTrafficPoliciesOutcome updateCustomRoutingEndpointTrafficPolicies(const Model::UpdateCustomRoutingEndpointTrafficPoliciesRequest &request)const;
			void updateCustomRoutingEndpointTrafficPoliciesAsync(const Model::UpdateCustomRoutingEndpointTrafficPoliciesRequest& request, const UpdateCustomRoutingEndpointTrafficPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomRoutingEndpointTrafficPoliciesOutcomeCallable updateCustomRoutingEndpointTrafficPoliciesCallable(const Model::UpdateCustomRoutingEndpointTrafficPoliciesRequest& request) const;
			UpdateCustomRoutingEndpointsOutcome updateCustomRoutingEndpoints(const Model::UpdateCustomRoutingEndpointsRequest &request)const;
			void updateCustomRoutingEndpointsAsync(const Model::UpdateCustomRoutingEndpointsRequest& request, const UpdateCustomRoutingEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomRoutingEndpointsOutcomeCallable updateCustomRoutingEndpointsCallable(const Model::UpdateCustomRoutingEndpointsRequest& request) const;
			UpdateDomainOutcome updateDomain(const Model::UpdateDomainRequest &request)const;
			void updateDomainAsync(const Model::UpdateDomainRequest& request, const UpdateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDomainOutcomeCallable updateDomainCallable(const Model::UpdateDomainRequest& request) const;
			UpdateDomainStateOutcome updateDomainState(const Model::UpdateDomainStateRequest &request)const;
			void updateDomainStateAsync(const Model::UpdateDomainStateRequest& request, const UpdateDomainStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDomainStateOutcomeCallable updateDomainStateCallable(const Model::UpdateDomainStateRequest& request) const;
			UpdateEndpointGroupOutcome updateEndpointGroup(const Model::UpdateEndpointGroupRequest &request)const;
			void updateEndpointGroupAsync(const Model::UpdateEndpointGroupRequest& request, const UpdateEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEndpointGroupOutcomeCallable updateEndpointGroupCallable(const Model::UpdateEndpointGroupRequest& request) const;
			UpdateEndpointGroupAttributeOutcome updateEndpointGroupAttribute(const Model::UpdateEndpointGroupAttributeRequest &request)const;
			void updateEndpointGroupAttributeAsync(const Model::UpdateEndpointGroupAttributeRequest& request, const UpdateEndpointGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEndpointGroupAttributeOutcomeCallable updateEndpointGroupAttributeCallable(const Model::UpdateEndpointGroupAttributeRequest& request) const;
			UpdateEndpointGroupsOutcome updateEndpointGroups(const Model::UpdateEndpointGroupsRequest &request)const;
			void updateEndpointGroupsAsync(const Model::UpdateEndpointGroupsRequest& request, const UpdateEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEndpointGroupsOutcomeCallable updateEndpointGroupsCallable(const Model::UpdateEndpointGroupsRequest& request) const;
			UpdateForwardingRulesOutcome updateForwardingRules(const Model::UpdateForwardingRulesRequest &request)const;
			void updateForwardingRulesAsync(const Model::UpdateForwardingRulesRequest& request, const UpdateForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateForwardingRulesOutcomeCallable updateForwardingRulesCallable(const Model::UpdateForwardingRulesRequest& request) const;
			UpdateIpSetOutcome updateIpSet(const Model::UpdateIpSetRequest &request)const;
			void updateIpSetAsync(const Model::UpdateIpSetRequest& request, const UpdateIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIpSetOutcomeCallable updateIpSetCallable(const Model::UpdateIpSetRequest& request) const;
			UpdateIpSetsOutcome updateIpSets(const Model::UpdateIpSetsRequest &request)const;
			void updateIpSetsAsync(const Model::UpdateIpSetsRequest& request, const UpdateIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIpSetsOutcomeCallable updateIpSetsCallable(const Model::UpdateIpSetsRequest& request) const;
			UpdateListenerOutcome updateListener(const Model::UpdateListenerRequest &request)const;
			void updateListenerAsync(const Model::UpdateListenerRequest& request, const UpdateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateListenerOutcomeCallable updateListenerCallable(const Model::UpdateListenerRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GA_GACLIENT_H_
