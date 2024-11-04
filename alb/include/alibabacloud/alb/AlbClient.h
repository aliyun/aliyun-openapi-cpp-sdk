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

#ifndef ALIBABACLOUD_ALB_ALBCLIENT_H_
#define ALIBABACLOUD_ALB_ALBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AlbExport.h"
#include "model/AddEntriesToAclRequest.h"
#include "model/AddEntriesToAclResult.h"
#include "model/AddServersToServerGroupRequest.h"
#include "model/AddServersToServerGroupResult.h"
#include "model/ApplyHealthCheckTemplateToServerGroupRequest.h"
#include "model/ApplyHealthCheckTemplateToServerGroupResult.h"
#include "model/AssociateAclsWithListenerRequest.h"
#include "model/AssociateAclsWithListenerResult.h"
#include "model/AssociateAdditionalCertificatesWithListenerRequest.h"
#include "model/AssociateAdditionalCertificatesWithListenerResult.h"
#include "model/AttachCommonBandwidthPackageToLoadBalancerRequest.h"
#include "model/AttachCommonBandwidthPackageToLoadBalancerResult.h"
#include "model/CancelShiftLoadBalancerZonesRequest.h"
#include "model/CancelShiftLoadBalancerZonesResult.h"
#include "model/CreateAScriptsRequest.h"
#include "model/CreateAScriptsResult.h"
#include "model/CreateAclRequest.h"
#include "model/CreateAclResult.h"
#include "model/CreateHealthCheckTemplateRequest.h"
#include "model/CreateHealthCheckTemplateResult.h"
#include "model/CreateListenerRequest.h"
#include "model/CreateListenerResult.h"
#include "model/CreateLoadBalancerRequest.h"
#include "model/CreateLoadBalancerResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/CreateRulesRequest.h"
#include "model/CreateRulesResult.h"
#include "model/CreateSecurityPolicyRequest.h"
#include "model/CreateSecurityPolicyResult.h"
#include "model/CreateServerGroupRequest.h"
#include "model/CreateServerGroupResult.h"
#include "model/DeleteAScriptsRequest.h"
#include "model/DeleteAScriptsResult.h"
#include "model/DeleteAclRequest.h"
#include "model/DeleteAclResult.h"
#include "model/DeleteHealthCheckTemplatesRequest.h"
#include "model/DeleteHealthCheckTemplatesResult.h"
#include "model/DeleteListenerRequest.h"
#include "model/DeleteListenerResult.h"
#include "model/DeleteLoadBalancerRequest.h"
#include "model/DeleteLoadBalancerResult.h"
#include "model/DeleteRuleRequest.h"
#include "model/DeleteRuleResult.h"
#include "model/DeleteRulesRequest.h"
#include "model/DeleteRulesResult.h"
#include "model/DeleteSecurityPolicyRequest.h"
#include "model/DeleteSecurityPolicyResult.h"
#include "model/DeleteServerGroupRequest.h"
#include "model/DeleteServerGroupResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/DetachCommonBandwidthPackageFromLoadBalancerRequest.h"
#include "model/DetachCommonBandwidthPackageFromLoadBalancerResult.h"
#include "model/DisableDeletionProtectionRequest.h"
#include "model/DisableDeletionProtectionResult.h"
#include "model/DisableLoadBalancerAccessLogRequest.h"
#include "model/DisableLoadBalancerAccessLogResult.h"
#include "model/DisableLoadBalancerIpv6InternetRequest.h"
#include "model/DisableLoadBalancerIpv6InternetResult.h"
#include "model/DissociateAclsFromListenerRequest.h"
#include "model/DissociateAclsFromListenerResult.h"
#include "model/DissociateAdditionalCertificatesFromListenerRequest.h"
#include "model/DissociateAdditionalCertificatesFromListenerResult.h"
#include "model/EnableDeletionProtectionRequest.h"
#include "model/EnableDeletionProtectionResult.h"
#include "model/EnableLoadBalancerAccessLogRequest.h"
#include "model/EnableLoadBalancerAccessLogResult.h"
#include "model/EnableLoadBalancerIpv6InternetRequest.h"
#include "model/EnableLoadBalancerIpv6InternetResult.h"
#include "model/GetHealthCheckTemplateAttributeRequest.h"
#include "model/GetHealthCheckTemplateAttributeResult.h"
#include "model/GetListenerAttributeRequest.h"
#include "model/GetListenerAttributeResult.h"
#include "model/GetListenerHealthStatusRequest.h"
#include "model/GetListenerHealthStatusResult.h"
#include "model/GetLoadBalancerAttributeRequest.h"
#include "model/GetLoadBalancerAttributeResult.h"
#include "model/ListAScriptsRequest.h"
#include "model/ListAScriptsResult.h"
#include "model/ListAclEntriesRequest.h"
#include "model/ListAclEntriesResult.h"
#include "model/ListAclRelationsRequest.h"
#include "model/ListAclRelationsResult.h"
#include "model/ListAclsRequest.h"
#include "model/ListAclsResult.h"
#include "model/ListAsynJobsRequest.h"
#include "model/ListAsynJobsResult.h"
#include "model/ListHealthCheckTemplatesRequest.h"
#include "model/ListHealthCheckTemplatesResult.h"
#include "model/ListListenerCertificatesRequest.h"
#include "model/ListListenerCertificatesResult.h"
#include "model/ListListenersRequest.h"
#include "model/ListListenersResult.h"
#include "model/ListLoadBalancersRequest.h"
#include "model/ListLoadBalancersResult.h"
#include "model/ListRulesRequest.h"
#include "model/ListRulesResult.h"
#include "model/ListSecurityPoliciesRequest.h"
#include "model/ListSecurityPoliciesResult.h"
#include "model/ListSecurityPolicyRelationsRequest.h"
#include "model/ListSecurityPolicyRelationsResult.h"
#include "model/ListServerGroupServersRequest.h"
#include "model/ListServerGroupServersResult.h"
#include "model/ListServerGroupsRequest.h"
#include "model/ListServerGroupsResult.h"
#include "model/ListSystemSecurityPoliciesRequest.h"
#include "model/ListSystemSecurityPoliciesResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/LoadBalancerJoinSecurityGroupRequest.h"
#include "model/LoadBalancerJoinSecurityGroupResult.h"
#include "model/LoadBalancerLeaveSecurityGroupRequest.h"
#include "model/LoadBalancerLeaveSecurityGroupResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/RemoveEntriesFromAclRequest.h"
#include "model/RemoveEntriesFromAclResult.h"
#include "model/RemoveServersFromServerGroupRequest.h"
#include "model/RemoveServersFromServerGroupResult.h"
#include "model/ReplaceServersInServerGroupRequest.h"
#include "model/ReplaceServersInServerGroupResult.h"
#include "model/StartListenerRequest.h"
#include "model/StartListenerResult.h"
#include "model/StartShiftLoadBalancerZonesRequest.h"
#include "model/StartShiftLoadBalancerZonesResult.h"
#include "model/StopListenerRequest.h"
#include "model/StopListenerResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnTagResourcesRequest.h"
#include "model/UnTagResourcesResult.h"
#include "model/UpdateAScriptsRequest.h"
#include "model/UpdateAScriptsResult.h"
#include "model/UpdateAclAttributeRequest.h"
#include "model/UpdateAclAttributeResult.h"
#include "model/UpdateHealthCheckTemplateAttributeRequest.h"
#include "model/UpdateHealthCheckTemplateAttributeResult.h"
#include "model/UpdateListenerAttributeRequest.h"
#include "model/UpdateListenerAttributeResult.h"
#include "model/UpdateListenerLogConfigRequest.h"
#include "model/UpdateListenerLogConfigResult.h"
#include "model/UpdateLoadBalancerAddressTypeConfigRequest.h"
#include "model/UpdateLoadBalancerAddressTypeConfigResult.h"
#include "model/UpdateLoadBalancerAttributeRequest.h"
#include "model/UpdateLoadBalancerAttributeResult.h"
#include "model/UpdateLoadBalancerEditionRequest.h"
#include "model/UpdateLoadBalancerEditionResult.h"
#include "model/UpdateLoadBalancerZonesRequest.h"
#include "model/UpdateLoadBalancerZonesResult.h"
#include "model/UpdateRuleAttributeRequest.h"
#include "model/UpdateRuleAttributeResult.h"
#include "model/UpdateRulesAttributeRequest.h"
#include "model/UpdateRulesAttributeResult.h"
#include "model/UpdateSecurityPolicyAttributeRequest.h"
#include "model/UpdateSecurityPolicyAttributeResult.h"
#include "model/UpdateServerGroupAttributeRequest.h"
#include "model/UpdateServerGroupAttributeResult.h"
#include "model/UpdateServerGroupServersAttributeRequest.h"
#include "model/UpdateServerGroupServersAttributeResult.h"


namespace AlibabaCloud
{
	namespace Alb
	{
		class ALIBABACLOUD_ALB_EXPORT AlbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddEntriesToAclResult> AddEntriesToAclOutcome;
			typedef std::future<AddEntriesToAclOutcome> AddEntriesToAclOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::AddEntriesToAclRequest&, const AddEntriesToAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEntriesToAclAsyncHandler;
			typedef Outcome<Error, Model::AddServersToServerGroupResult> AddServersToServerGroupOutcome;
			typedef std::future<AddServersToServerGroupOutcome> AddServersToServerGroupOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::AddServersToServerGroupRequest&, const AddServersToServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddServersToServerGroupAsyncHandler;
			typedef Outcome<Error, Model::ApplyHealthCheckTemplateToServerGroupResult> ApplyHealthCheckTemplateToServerGroupOutcome;
			typedef std::future<ApplyHealthCheckTemplateToServerGroupOutcome> ApplyHealthCheckTemplateToServerGroupOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ApplyHealthCheckTemplateToServerGroupRequest&, const ApplyHealthCheckTemplateToServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyHealthCheckTemplateToServerGroupAsyncHandler;
			typedef Outcome<Error, Model::AssociateAclsWithListenerResult> AssociateAclsWithListenerOutcome;
			typedef std::future<AssociateAclsWithListenerOutcome> AssociateAclsWithListenerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::AssociateAclsWithListenerRequest&, const AssociateAclsWithListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAclsWithListenerAsyncHandler;
			typedef Outcome<Error, Model::AssociateAdditionalCertificatesWithListenerResult> AssociateAdditionalCertificatesWithListenerOutcome;
			typedef std::future<AssociateAdditionalCertificatesWithListenerOutcome> AssociateAdditionalCertificatesWithListenerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::AssociateAdditionalCertificatesWithListenerRequest&, const AssociateAdditionalCertificatesWithListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAdditionalCertificatesWithListenerAsyncHandler;
			typedef Outcome<Error, Model::AttachCommonBandwidthPackageToLoadBalancerResult> AttachCommonBandwidthPackageToLoadBalancerOutcome;
			typedef std::future<AttachCommonBandwidthPackageToLoadBalancerOutcome> AttachCommonBandwidthPackageToLoadBalancerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::AttachCommonBandwidthPackageToLoadBalancerRequest&, const AttachCommonBandwidthPackageToLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachCommonBandwidthPackageToLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::CancelShiftLoadBalancerZonesResult> CancelShiftLoadBalancerZonesOutcome;
			typedef std::future<CancelShiftLoadBalancerZonesOutcome> CancelShiftLoadBalancerZonesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::CancelShiftLoadBalancerZonesRequest&, const CancelShiftLoadBalancerZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelShiftLoadBalancerZonesAsyncHandler;
			typedef Outcome<Error, Model::CreateAScriptsResult> CreateAScriptsOutcome;
			typedef std::future<CreateAScriptsOutcome> CreateAScriptsOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::CreateAScriptsRequest&, const CreateAScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAScriptsAsyncHandler;
			typedef Outcome<Error, Model::CreateAclResult> CreateAclOutcome;
			typedef std::future<CreateAclOutcome> CreateAclOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::CreateAclRequest&, const CreateAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclAsyncHandler;
			typedef Outcome<Error, Model::CreateHealthCheckTemplateResult> CreateHealthCheckTemplateOutcome;
			typedef std::future<CreateHealthCheckTemplateOutcome> CreateHealthCheckTemplateOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::CreateHealthCheckTemplateRequest&, const CreateHealthCheckTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHealthCheckTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateListenerResult> CreateListenerOutcome;
			typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::CreateListenerRequest&, const CreateListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerResult> CreateLoadBalancerOutcome;
			typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::CreateLoadBalancerRequest&, const CreateLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleResult> CreateRuleOutcome;
			typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::CreateRuleRequest&, const CreateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateRulesResult> CreateRulesOutcome;
			typedef std::future<CreateRulesOutcome> CreateRulesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::CreateRulesRequest&, const CreateRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateSecurityPolicyResult> CreateSecurityPolicyOutcome;
			typedef std::future<CreateSecurityPolicyOutcome> CreateSecurityPolicyOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::CreateSecurityPolicyRequest&, const CreateSecurityPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateServerGroupResult> CreateServerGroupOutcome;
			typedef std::future<CreateServerGroupOutcome> CreateServerGroupOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::CreateServerGroupRequest&, const CreateServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteAScriptsResult> DeleteAScriptsOutcome;
			typedef std::future<DeleteAScriptsOutcome> DeleteAScriptsOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DeleteAScriptsRequest&, const DeleteAScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAScriptsAsyncHandler;
			typedef Outcome<Error, Model::DeleteAclResult> DeleteAclOutcome;
			typedef std::future<DeleteAclOutcome> DeleteAclOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DeleteAclRequest&, const DeleteAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclAsyncHandler;
			typedef Outcome<Error, Model::DeleteHealthCheckTemplatesResult> DeleteHealthCheckTemplatesOutcome;
			typedef std::future<DeleteHealthCheckTemplatesOutcome> DeleteHealthCheckTemplatesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DeleteHealthCheckTemplatesRequest&, const DeleteHealthCheckTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHealthCheckTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DeleteListenerResult> DeleteListenerOutcome;
			typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DeleteListenerRequest&, const DeleteListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoadBalancerResult> DeleteLoadBalancerOutcome;
			typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DeleteLoadBalancerRequest&, const DeleteLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleResult> DeleteRuleOutcome;
			typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DeleteRuleRequest&, const DeleteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteRulesResult> DeleteRulesOutcome;
			typedef std::future<DeleteRulesOutcome> DeleteRulesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DeleteRulesRequest&, const DeleteRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecurityPolicyResult> DeleteSecurityPolicyOutcome;
			typedef std::future<DeleteSecurityPolicyOutcome> DeleteSecurityPolicyOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DeleteSecurityPolicyRequest&, const DeleteSecurityPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteServerGroupResult> DeleteServerGroupOutcome;
			typedef std::future<DeleteServerGroupOutcome> DeleteServerGroupOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DeleteServerGroupRequest&, const DeleteServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DetachCommonBandwidthPackageFromLoadBalancerResult> DetachCommonBandwidthPackageFromLoadBalancerOutcome;
			typedef std::future<DetachCommonBandwidthPackageFromLoadBalancerOutcome> DetachCommonBandwidthPackageFromLoadBalancerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DetachCommonBandwidthPackageFromLoadBalancerRequest&, const DetachCommonBandwidthPackageFromLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachCommonBandwidthPackageFromLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::DisableDeletionProtectionResult> DisableDeletionProtectionOutcome;
			typedef std::future<DisableDeletionProtectionOutcome> DisableDeletionProtectionOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DisableDeletionProtectionRequest&, const DisableDeletionProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDeletionProtectionAsyncHandler;
			typedef Outcome<Error, Model::DisableLoadBalancerAccessLogResult> DisableLoadBalancerAccessLogOutcome;
			typedef std::future<DisableLoadBalancerAccessLogOutcome> DisableLoadBalancerAccessLogOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DisableLoadBalancerAccessLogRequest&, const DisableLoadBalancerAccessLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableLoadBalancerAccessLogAsyncHandler;
			typedef Outcome<Error, Model::DisableLoadBalancerIpv6InternetResult> DisableLoadBalancerIpv6InternetOutcome;
			typedef std::future<DisableLoadBalancerIpv6InternetOutcome> DisableLoadBalancerIpv6InternetOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DisableLoadBalancerIpv6InternetRequest&, const DisableLoadBalancerIpv6InternetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableLoadBalancerIpv6InternetAsyncHandler;
			typedef Outcome<Error, Model::DissociateAclsFromListenerResult> DissociateAclsFromListenerOutcome;
			typedef std::future<DissociateAclsFromListenerOutcome> DissociateAclsFromListenerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DissociateAclsFromListenerRequest&, const DissociateAclsFromListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateAclsFromListenerAsyncHandler;
			typedef Outcome<Error, Model::DissociateAdditionalCertificatesFromListenerResult> DissociateAdditionalCertificatesFromListenerOutcome;
			typedef std::future<DissociateAdditionalCertificatesFromListenerOutcome> DissociateAdditionalCertificatesFromListenerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::DissociateAdditionalCertificatesFromListenerRequest&, const DissociateAdditionalCertificatesFromListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateAdditionalCertificatesFromListenerAsyncHandler;
			typedef Outcome<Error, Model::EnableDeletionProtectionResult> EnableDeletionProtectionOutcome;
			typedef std::future<EnableDeletionProtectionOutcome> EnableDeletionProtectionOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::EnableDeletionProtectionRequest&, const EnableDeletionProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDeletionProtectionAsyncHandler;
			typedef Outcome<Error, Model::EnableLoadBalancerAccessLogResult> EnableLoadBalancerAccessLogOutcome;
			typedef std::future<EnableLoadBalancerAccessLogOutcome> EnableLoadBalancerAccessLogOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::EnableLoadBalancerAccessLogRequest&, const EnableLoadBalancerAccessLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableLoadBalancerAccessLogAsyncHandler;
			typedef Outcome<Error, Model::EnableLoadBalancerIpv6InternetResult> EnableLoadBalancerIpv6InternetOutcome;
			typedef std::future<EnableLoadBalancerIpv6InternetOutcome> EnableLoadBalancerIpv6InternetOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::EnableLoadBalancerIpv6InternetRequest&, const EnableLoadBalancerIpv6InternetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableLoadBalancerIpv6InternetAsyncHandler;
			typedef Outcome<Error, Model::GetHealthCheckTemplateAttributeResult> GetHealthCheckTemplateAttributeOutcome;
			typedef std::future<GetHealthCheckTemplateAttributeOutcome> GetHealthCheckTemplateAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::GetHealthCheckTemplateAttributeRequest&, const GetHealthCheckTemplateAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHealthCheckTemplateAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetListenerAttributeResult> GetListenerAttributeOutcome;
			typedef std::future<GetListenerAttributeOutcome> GetListenerAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::GetListenerAttributeRequest&, const GetListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetListenerHealthStatusResult> GetListenerHealthStatusOutcome;
			typedef std::future<GetListenerHealthStatusOutcome> GetListenerHealthStatusOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::GetListenerHealthStatusRequest&, const GetListenerHealthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetListenerHealthStatusAsyncHandler;
			typedef Outcome<Error, Model::GetLoadBalancerAttributeResult> GetLoadBalancerAttributeOutcome;
			typedef std::future<GetLoadBalancerAttributeOutcome> GetLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::GetLoadBalancerAttributeRequest&, const GetLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::ListAScriptsResult> ListAScriptsOutcome;
			typedef std::future<ListAScriptsOutcome> ListAScriptsOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListAScriptsRequest&, const ListAScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAScriptsAsyncHandler;
			typedef Outcome<Error, Model::ListAclEntriesResult> ListAclEntriesOutcome;
			typedef std::future<ListAclEntriesOutcome> ListAclEntriesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListAclEntriesRequest&, const ListAclEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAclEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListAclRelationsResult> ListAclRelationsOutcome;
			typedef std::future<ListAclRelationsOutcome> ListAclRelationsOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListAclRelationsRequest&, const ListAclRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAclRelationsAsyncHandler;
			typedef Outcome<Error, Model::ListAclsResult> ListAclsOutcome;
			typedef std::future<ListAclsOutcome> ListAclsOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListAclsRequest&, const ListAclsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAclsAsyncHandler;
			typedef Outcome<Error, Model::ListAsynJobsResult> ListAsynJobsOutcome;
			typedef std::future<ListAsynJobsOutcome> ListAsynJobsOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListAsynJobsRequest&, const ListAsynJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAsynJobsAsyncHandler;
			typedef Outcome<Error, Model::ListHealthCheckTemplatesResult> ListHealthCheckTemplatesOutcome;
			typedef std::future<ListHealthCheckTemplatesOutcome> ListHealthCheckTemplatesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListHealthCheckTemplatesRequest&, const ListHealthCheckTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHealthCheckTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListListenerCertificatesResult> ListListenerCertificatesOutcome;
			typedef std::future<ListListenerCertificatesOutcome> ListListenerCertificatesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListListenerCertificatesRequest&, const ListListenerCertificatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenerCertificatesAsyncHandler;
			typedef Outcome<Error, Model::ListListenersResult> ListListenersOutcome;
			typedef std::future<ListListenersOutcome> ListListenersOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListListenersRequest&, const ListListenersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenersAsyncHandler;
			typedef Outcome<Error, Model::ListLoadBalancersResult> ListLoadBalancersOutcome;
			typedef std::future<ListLoadBalancersOutcome> ListLoadBalancersOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListLoadBalancersRequest&, const ListLoadBalancersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLoadBalancersAsyncHandler;
			typedef Outcome<Error, Model::ListRulesResult> ListRulesOutcome;
			typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListRulesRequest&, const ListRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRulesAsyncHandler;
			typedef Outcome<Error, Model::ListSecurityPoliciesResult> ListSecurityPoliciesOutcome;
			typedef std::future<ListSecurityPoliciesOutcome> ListSecurityPoliciesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListSecurityPoliciesRequest&, const ListSecurityPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecurityPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListSecurityPolicyRelationsResult> ListSecurityPolicyRelationsOutcome;
			typedef std::future<ListSecurityPolicyRelationsOutcome> ListSecurityPolicyRelationsOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListSecurityPolicyRelationsRequest&, const ListSecurityPolicyRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecurityPolicyRelationsAsyncHandler;
			typedef Outcome<Error, Model::ListServerGroupServersResult> ListServerGroupServersOutcome;
			typedef std::future<ListServerGroupServersOutcome> ListServerGroupServersOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListServerGroupServersRequest&, const ListServerGroupServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServerGroupServersAsyncHandler;
			typedef Outcome<Error, Model::ListServerGroupsResult> ListServerGroupsOutcome;
			typedef std::future<ListServerGroupsOutcome> ListServerGroupsOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListServerGroupsRequest&, const ListServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListSystemSecurityPoliciesResult> ListSystemSecurityPoliciesOutcome;
			typedef std::future<ListSystemSecurityPoliciesOutcome> ListSystemSecurityPoliciesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListSystemSecurityPoliciesRequest&, const ListSystemSecurityPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSystemSecurityPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagValuesResult> ListTagValuesOutcome;
			typedef std::future<ListTagValuesOutcome> ListTagValuesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ListTagValuesRequest&, const ListTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagValuesAsyncHandler;
			typedef Outcome<Error, Model::LoadBalancerJoinSecurityGroupResult> LoadBalancerJoinSecurityGroupOutcome;
			typedef std::future<LoadBalancerJoinSecurityGroupOutcome> LoadBalancerJoinSecurityGroupOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::LoadBalancerJoinSecurityGroupRequest&, const LoadBalancerJoinSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LoadBalancerJoinSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::LoadBalancerLeaveSecurityGroupResult> LoadBalancerLeaveSecurityGroupOutcome;
			typedef std::future<LoadBalancerLeaveSecurityGroupOutcome> LoadBalancerLeaveSecurityGroupOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::LoadBalancerLeaveSecurityGroupRequest&, const LoadBalancerLeaveSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LoadBalancerLeaveSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveEntriesFromAclResult> RemoveEntriesFromAclOutcome;
			typedef std::future<RemoveEntriesFromAclOutcome> RemoveEntriesFromAclOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::RemoveEntriesFromAclRequest&, const RemoveEntriesFromAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEntriesFromAclAsyncHandler;
			typedef Outcome<Error, Model::RemoveServersFromServerGroupResult> RemoveServersFromServerGroupOutcome;
			typedef std::future<RemoveServersFromServerGroupOutcome> RemoveServersFromServerGroupOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::RemoveServersFromServerGroupRequest&, const RemoveServersFromServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveServersFromServerGroupAsyncHandler;
			typedef Outcome<Error, Model::ReplaceServersInServerGroupResult> ReplaceServersInServerGroupOutcome;
			typedef std::future<ReplaceServersInServerGroupOutcome> ReplaceServersInServerGroupOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::ReplaceServersInServerGroupRequest&, const ReplaceServersInServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceServersInServerGroupAsyncHandler;
			typedef Outcome<Error, Model::StartListenerResult> StartListenerOutcome;
			typedef std::future<StartListenerOutcome> StartListenerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::StartListenerRequest&, const StartListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartListenerAsyncHandler;
			typedef Outcome<Error, Model::StartShiftLoadBalancerZonesResult> StartShiftLoadBalancerZonesOutcome;
			typedef std::future<StartShiftLoadBalancerZonesOutcome> StartShiftLoadBalancerZonesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::StartShiftLoadBalancerZonesRequest&, const StartShiftLoadBalancerZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartShiftLoadBalancerZonesAsyncHandler;
			typedef Outcome<Error, Model::StopListenerResult> StopListenerOutcome;
			typedef std::future<StopListenerOutcome> StopListenerOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::StopListenerRequest&, const StopListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopListenerAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnTagResourcesResult> UnTagResourcesOutcome;
			typedef std::future<UnTagResourcesOutcome> UnTagResourcesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UnTagResourcesRequest&, const UnTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAScriptsResult> UpdateAScriptsOutcome;
			typedef std::future<UpdateAScriptsOutcome> UpdateAScriptsOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateAScriptsRequest&, const UpdateAScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAScriptsAsyncHandler;
			typedef Outcome<Error, Model::UpdateAclAttributeResult> UpdateAclAttributeOutcome;
			typedef std::future<UpdateAclAttributeOutcome> UpdateAclAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateAclAttributeRequest&, const UpdateAclAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAclAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateHealthCheckTemplateAttributeResult> UpdateHealthCheckTemplateAttributeOutcome;
			typedef std::future<UpdateHealthCheckTemplateAttributeOutcome> UpdateHealthCheckTemplateAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateHealthCheckTemplateAttributeRequest&, const UpdateHealthCheckTemplateAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHealthCheckTemplateAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateListenerAttributeResult> UpdateListenerAttributeOutcome;
			typedef std::future<UpdateListenerAttributeOutcome> UpdateListenerAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateListenerAttributeRequest&, const UpdateListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateListenerLogConfigResult> UpdateListenerLogConfigOutcome;
			typedef std::future<UpdateListenerLogConfigOutcome> UpdateListenerLogConfigOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateListenerLogConfigRequest&, const UpdateListenerLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateListenerLogConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoadBalancerAddressTypeConfigResult> UpdateLoadBalancerAddressTypeConfigOutcome;
			typedef std::future<UpdateLoadBalancerAddressTypeConfigOutcome> UpdateLoadBalancerAddressTypeConfigOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateLoadBalancerAddressTypeConfigRequest&, const UpdateLoadBalancerAddressTypeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoadBalancerAddressTypeConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoadBalancerAttributeResult> UpdateLoadBalancerAttributeOutcome;
			typedef std::future<UpdateLoadBalancerAttributeOutcome> UpdateLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateLoadBalancerAttributeRequest&, const UpdateLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoadBalancerEditionResult> UpdateLoadBalancerEditionOutcome;
			typedef std::future<UpdateLoadBalancerEditionOutcome> UpdateLoadBalancerEditionOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateLoadBalancerEditionRequest&, const UpdateLoadBalancerEditionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoadBalancerEditionAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoadBalancerZonesResult> UpdateLoadBalancerZonesOutcome;
			typedef std::future<UpdateLoadBalancerZonesOutcome> UpdateLoadBalancerZonesOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateLoadBalancerZonesRequest&, const UpdateLoadBalancerZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoadBalancerZonesAsyncHandler;
			typedef Outcome<Error, Model::UpdateRuleAttributeResult> UpdateRuleAttributeOutcome;
			typedef std::future<UpdateRuleAttributeOutcome> UpdateRuleAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateRuleAttributeRequest&, const UpdateRuleAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuleAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateRulesAttributeResult> UpdateRulesAttributeOutcome;
			typedef std::future<UpdateRulesAttributeOutcome> UpdateRulesAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateRulesAttributeRequest&, const UpdateRulesAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRulesAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateSecurityPolicyAttributeResult> UpdateSecurityPolicyAttributeOutcome;
			typedef std::future<UpdateSecurityPolicyAttributeOutcome> UpdateSecurityPolicyAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateSecurityPolicyAttributeRequest&, const UpdateSecurityPolicyAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecurityPolicyAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateServerGroupAttributeResult> UpdateServerGroupAttributeOutcome;
			typedef std::future<UpdateServerGroupAttributeOutcome> UpdateServerGroupAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateServerGroupAttributeRequest&, const UpdateServerGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServerGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateServerGroupServersAttributeResult> UpdateServerGroupServersAttributeOutcome;
			typedef std::future<UpdateServerGroupServersAttributeOutcome> UpdateServerGroupServersAttributeOutcomeCallable;
			typedef std::function<void(const AlbClient*, const Model::UpdateServerGroupServersAttributeRequest&, const UpdateServerGroupServersAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServerGroupServersAttributeAsyncHandler;

			AlbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AlbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AlbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AlbClient();
			AddEntriesToAclOutcome addEntriesToAcl(const Model::AddEntriesToAclRequest &request)const;
			void addEntriesToAclAsync(const Model::AddEntriesToAclRequest& request, const AddEntriesToAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEntriesToAclOutcomeCallable addEntriesToAclCallable(const Model::AddEntriesToAclRequest& request) const;
			AddServersToServerGroupOutcome addServersToServerGroup(const Model::AddServersToServerGroupRequest &request)const;
			void addServersToServerGroupAsync(const Model::AddServersToServerGroupRequest& request, const AddServersToServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddServersToServerGroupOutcomeCallable addServersToServerGroupCallable(const Model::AddServersToServerGroupRequest& request) const;
			ApplyHealthCheckTemplateToServerGroupOutcome applyHealthCheckTemplateToServerGroup(const Model::ApplyHealthCheckTemplateToServerGroupRequest &request)const;
			void applyHealthCheckTemplateToServerGroupAsync(const Model::ApplyHealthCheckTemplateToServerGroupRequest& request, const ApplyHealthCheckTemplateToServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyHealthCheckTemplateToServerGroupOutcomeCallable applyHealthCheckTemplateToServerGroupCallable(const Model::ApplyHealthCheckTemplateToServerGroupRequest& request) const;
			AssociateAclsWithListenerOutcome associateAclsWithListener(const Model::AssociateAclsWithListenerRequest &request)const;
			void associateAclsWithListenerAsync(const Model::AssociateAclsWithListenerRequest& request, const AssociateAclsWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateAclsWithListenerOutcomeCallable associateAclsWithListenerCallable(const Model::AssociateAclsWithListenerRequest& request) const;
			AssociateAdditionalCertificatesWithListenerOutcome associateAdditionalCertificatesWithListener(const Model::AssociateAdditionalCertificatesWithListenerRequest &request)const;
			void associateAdditionalCertificatesWithListenerAsync(const Model::AssociateAdditionalCertificatesWithListenerRequest& request, const AssociateAdditionalCertificatesWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateAdditionalCertificatesWithListenerOutcomeCallable associateAdditionalCertificatesWithListenerCallable(const Model::AssociateAdditionalCertificatesWithListenerRequest& request) const;
			AttachCommonBandwidthPackageToLoadBalancerOutcome attachCommonBandwidthPackageToLoadBalancer(const Model::AttachCommonBandwidthPackageToLoadBalancerRequest &request)const;
			void attachCommonBandwidthPackageToLoadBalancerAsync(const Model::AttachCommonBandwidthPackageToLoadBalancerRequest& request, const AttachCommonBandwidthPackageToLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachCommonBandwidthPackageToLoadBalancerOutcomeCallable attachCommonBandwidthPackageToLoadBalancerCallable(const Model::AttachCommonBandwidthPackageToLoadBalancerRequest& request) const;
			CancelShiftLoadBalancerZonesOutcome cancelShiftLoadBalancerZones(const Model::CancelShiftLoadBalancerZonesRequest &request)const;
			void cancelShiftLoadBalancerZonesAsync(const Model::CancelShiftLoadBalancerZonesRequest& request, const CancelShiftLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelShiftLoadBalancerZonesOutcomeCallable cancelShiftLoadBalancerZonesCallable(const Model::CancelShiftLoadBalancerZonesRequest& request) const;
			CreateAScriptsOutcome createAScripts(const Model::CreateAScriptsRequest &request)const;
			void createAScriptsAsync(const Model::CreateAScriptsRequest& request, const CreateAScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAScriptsOutcomeCallable createAScriptsCallable(const Model::CreateAScriptsRequest& request) const;
			CreateAclOutcome createAcl(const Model::CreateAclRequest &request)const;
			void createAclAsync(const Model::CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAclOutcomeCallable createAclCallable(const Model::CreateAclRequest& request) const;
			CreateHealthCheckTemplateOutcome createHealthCheckTemplate(const Model::CreateHealthCheckTemplateRequest &request)const;
			void createHealthCheckTemplateAsync(const Model::CreateHealthCheckTemplateRequest& request, const CreateHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHealthCheckTemplateOutcomeCallable createHealthCheckTemplateCallable(const Model::CreateHealthCheckTemplateRequest& request) const;
			CreateListenerOutcome createListener(const Model::CreateListenerRequest &request)const;
			void createListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateListenerOutcomeCallable createListenerCallable(const Model::CreateListenerRequest& request) const;
			CreateLoadBalancerOutcome createLoadBalancer(const Model::CreateLoadBalancerRequest &request)const;
			void createLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerOutcomeCallable createLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;
			CreateRuleOutcome createRule(const Model::CreateRuleRequest &request)const;
			void createRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleOutcomeCallable createRuleCallable(const Model::CreateRuleRequest& request) const;
			CreateRulesOutcome createRules(const Model::CreateRulesRequest &request)const;
			void createRulesAsync(const Model::CreateRulesRequest& request, const CreateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRulesOutcomeCallable createRulesCallable(const Model::CreateRulesRequest& request) const;
			CreateSecurityPolicyOutcome createSecurityPolicy(const Model::CreateSecurityPolicyRequest &request)const;
			void createSecurityPolicyAsync(const Model::CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecurityPolicyOutcomeCallable createSecurityPolicyCallable(const Model::CreateSecurityPolicyRequest& request) const;
			CreateServerGroupOutcome createServerGroup(const Model::CreateServerGroupRequest &request)const;
			void createServerGroupAsync(const Model::CreateServerGroupRequest& request, const CreateServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServerGroupOutcomeCallable createServerGroupCallable(const Model::CreateServerGroupRequest& request) const;
			DeleteAScriptsOutcome deleteAScripts(const Model::DeleteAScriptsRequest &request)const;
			void deleteAScriptsAsync(const Model::DeleteAScriptsRequest& request, const DeleteAScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAScriptsOutcomeCallable deleteAScriptsCallable(const Model::DeleteAScriptsRequest& request) const;
			DeleteAclOutcome deleteAcl(const Model::DeleteAclRequest &request)const;
			void deleteAclAsync(const Model::DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAclOutcomeCallable deleteAclCallable(const Model::DeleteAclRequest& request) const;
			DeleteHealthCheckTemplatesOutcome deleteHealthCheckTemplates(const Model::DeleteHealthCheckTemplatesRequest &request)const;
			void deleteHealthCheckTemplatesAsync(const Model::DeleteHealthCheckTemplatesRequest& request, const DeleteHealthCheckTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHealthCheckTemplatesOutcomeCallable deleteHealthCheckTemplatesCallable(const Model::DeleteHealthCheckTemplatesRequest& request) const;
			DeleteListenerOutcome deleteListener(const Model::DeleteListenerRequest &request)const;
			void deleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteListenerOutcomeCallable deleteListenerCallable(const Model::DeleteListenerRequest& request) const;
			DeleteLoadBalancerOutcome deleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request)const;
			void deleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoadBalancerOutcomeCallable deleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;
			DeleteRuleOutcome deleteRule(const Model::DeleteRuleRequest &request)const;
			void deleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleOutcomeCallable deleteRuleCallable(const Model::DeleteRuleRequest& request) const;
			DeleteRulesOutcome deleteRules(const Model::DeleteRulesRequest &request)const;
			void deleteRulesAsync(const Model::DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRulesOutcomeCallable deleteRulesCallable(const Model::DeleteRulesRequest& request) const;
			DeleteSecurityPolicyOutcome deleteSecurityPolicy(const Model::DeleteSecurityPolicyRequest &request)const;
			void deleteSecurityPolicyAsync(const Model::DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecurityPolicyOutcomeCallable deleteSecurityPolicyCallable(const Model::DeleteSecurityPolicyRequest& request) const;
			DeleteServerGroupOutcome deleteServerGroup(const Model::DeleteServerGroupRequest &request)const;
			void deleteServerGroupAsync(const Model::DeleteServerGroupRequest& request, const DeleteServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServerGroupOutcomeCallable deleteServerGroupCallable(const Model::DeleteServerGroupRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			DetachCommonBandwidthPackageFromLoadBalancerOutcome detachCommonBandwidthPackageFromLoadBalancer(const Model::DetachCommonBandwidthPackageFromLoadBalancerRequest &request)const;
			void detachCommonBandwidthPackageFromLoadBalancerAsync(const Model::DetachCommonBandwidthPackageFromLoadBalancerRequest& request, const DetachCommonBandwidthPackageFromLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachCommonBandwidthPackageFromLoadBalancerOutcomeCallable detachCommonBandwidthPackageFromLoadBalancerCallable(const Model::DetachCommonBandwidthPackageFromLoadBalancerRequest& request) const;
			DisableDeletionProtectionOutcome disableDeletionProtection(const Model::DisableDeletionProtectionRequest &request)const;
			void disableDeletionProtectionAsync(const Model::DisableDeletionProtectionRequest& request, const DisableDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDeletionProtectionOutcomeCallable disableDeletionProtectionCallable(const Model::DisableDeletionProtectionRequest& request) const;
			DisableLoadBalancerAccessLogOutcome disableLoadBalancerAccessLog(const Model::DisableLoadBalancerAccessLogRequest &request)const;
			void disableLoadBalancerAccessLogAsync(const Model::DisableLoadBalancerAccessLogRequest& request, const DisableLoadBalancerAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableLoadBalancerAccessLogOutcomeCallable disableLoadBalancerAccessLogCallable(const Model::DisableLoadBalancerAccessLogRequest& request) const;
			DisableLoadBalancerIpv6InternetOutcome disableLoadBalancerIpv6Internet(const Model::DisableLoadBalancerIpv6InternetRequest &request)const;
			void disableLoadBalancerIpv6InternetAsync(const Model::DisableLoadBalancerIpv6InternetRequest& request, const DisableLoadBalancerIpv6InternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableLoadBalancerIpv6InternetOutcomeCallable disableLoadBalancerIpv6InternetCallable(const Model::DisableLoadBalancerIpv6InternetRequest& request) const;
			DissociateAclsFromListenerOutcome dissociateAclsFromListener(const Model::DissociateAclsFromListenerRequest &request)const;
			void dissociateAclsFromListenerAsync(const Model::DissociateAclsFromListenerRequest& request, const DissociateAclsFromListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateAclsFromListenerOutcomeCallable dissociateAclsFromListenerCallable(const Model::DissociateAclsFromListenerRequest& request) const;
			DissociateAdditionalCertificatesFromListenerOutcome dissociateAdditionalCertificatesFromListener(const Model::DissociateAdditionalCertificatesFromListenerRequest &request)const;
			void dissociateAdditionalCertificatesFromListenerAsync(const Model::DissociateAdditionalCertificatesFromListenerRequest& request, const DissociateAdditionalCertificatesFromListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateAdditionalCertificatesFromListenerOutcomeCallable dissociateAdditionalCertificatesFromListenerCallable(const Model::DissociateAdditionalCertificatesFromListenerRequest& request) const;
			EnableDeletionProtectionOutcome enableDeletionProtection(const Model::EnableDeletionProtectionRequest &request)const;
			void enableDeletionProtectionAsync(const Model::EnableDeletionProtectionRequest& request, const EnableDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDeletionProtectionOutcomeCallable enableDeletionProtectionCallable(const Model::EnableDeletionProtectionRequest& request) const;
			EnableLoadBalancerAccessLogOutcome enableLoadBalancerAccessLog(const Model::EnableLoadBalancerAccessLogRequest &request)const;
			void enableLoadBalancerAccessLogAsync(const Model::EnableLoadBalancerAccessLogRequest& request, const EnableLoadBalancerAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableLoadBalancerAccessLogOutcomeCallable enableLoadBalancerAccessLogCallable(const Model::EnableLoadBalancerAccessLogRequest& request) const;
			EnableLoadBalancerIpv6InternetOutcome enableLoadBalancerIpv6Internet(const Model::EnableLoadBalancerIpv6InternetRequest &request)const;
			void enableLoadBalancerIpv6InternetAsync(const Model::EnableLoadBalancerIpv6InternetRequest& request, const EnableLoadBalancerIpv6InternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableLoadBalancerIpv6InternetOutcomeCallable enableLoadBalancerIpv6InternetCallable(const Model::EnableLoadBalancerIpv6InternetRequest& request) const;
			GetHealthCheckTemplateAttributeOutcome getHealthCheckTemplateAttribute(const Model::GetHealthCheckTemplateAttributeRequest &request)const;
			void getHealthCheckTemplateAttributeAsync(const Model::GetHealthCheckTemplateAttributeRequest& request, const GetHealthCheckTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHealthCheckTemplateAttributeOutcomeCallable getHealthCheckTemplateAttributeCallable(const Model::GetHealthCheckTemplateAttributeRequest& request) const;
			GetListenerAttributeOutcome getListenerAttribute(const Model::GetListenerAttributeRequest &request)const;
			void getListenerAttributeAsync(const Model::GetListenerAttributeRequest& request, const GetListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetListenerAttributeOutcomeCallable getListenerAttributeCallable(const Model::GetListenerAttributeRequest& request) const;
			GetListenerHealthStatusOutcome getListenerHealthStatus(const Model::GetListenerHealthStatusRequest &request)const;
			void getListenerHealthStatusAsync(const Model::GetListenerHealthStatusRequest& request, const GetListenerHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetListenerHealthStatusOutcomeCallable getListenerHealthStatusCallable(const Model::GetListenerHealthStatusRequest& request) const;
			GetLoadBalancerAttributeOutcome getLoadBalancerAttribute(const Model::GetLoadBalancerAttributeRequest &request)const;
			void getLoadBalancerAttributeAsync(const Model::GetLoadBalancerAttributeRequest& request, const GetLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLoadBalancerAttributeOutcomeCallable getLoadBalancerAttributeCallable(const Model::GetLoadBalancerAttributeRequest& request) const;
			ListAScriptsOutcome listAScripts(const Model::ListAScriptsRequest &request)const;
			void listAScriptsAsync(const Model::ListAScriptsRequest& request, const ListAScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAScriptsOutcomeCallable listAScriptsCallable(const Model::ListAScriptsRequest& request) const;
			ListAclEntriesOutcome listAclEntries(const Model::ListAclEntriesRequest &request)const;
			void listAclEntriesAsync(const Model::ListAclEntriesRequest& request, const ListAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAclEntriesOutcomeCallable listAclEntriesCallable(const Model::ListAclEntriesRequest& request) const;
			ListAclRelationsOutcome listAclRelations(const Model::ListAclRelationsRequest &request)const;
			void listAclRelationsAsync(const Model::ListAclRelationsRequest& request, const ListAclRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAclRelationsOutcomeCallable listAclRelationsCallable(const Model::ListAclRelationsRequest& request) const;
			ListAclsOutcome listAcls(const Model::ListAclsRequest &request)const;
			void listAclsAsync(const Model::ListAclsRequest& request, const ListAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAclsOutcomeCallable listAclsCallable(const Model::ListAclsRequest& request) const;
			ListAsynJobsOutcome listAsynJobs(const Model::ListAsynJobsRequest &request)const;
			void listAsynJobsAsync(const Model::ListAsynJobsRequest& request, const ListAsynJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAsynJobsOutcomeCallable listAsynJobsCallable(const Model::ListAsynJobsRequest& request) const;
			ListHealthCheckTemplatesOutcome listHealthCheckTemplates(const Model::ListHealthCheckTemplatesRequest &request)const;
			void listHealthCheckTemplatesAsync(const Model::ListHealthCheckTemplatesRequest& request, const ListHealthCheckTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHealthCheckTemplatesOutcomeCallable listHealthCheckTemplatesCallable(const Model::ListHealthCheckTemplatesRequest& request) const;
			ListListenerCertificatesOutcome listListenerCertificates(const Model::ListListenerCertificatesRequest &request)const;
			void listListenerCertificatesAsync(const Model::ListListenerCertificatesRequest& request, const ListListenerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenerCertificatesOutcomeCallable listListenerCertificatesCallable(const Model::ListListenerCertificatesRequest& request) const;
			ListListenersOutcome listListeners(const Model::ListListenersRequest &request)const;
			void listListenersAsync(const Model::ListListenersRequest& request, const ListListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenersOutcomeCallable listListenersCallable(const Model::ListListenersRequest& request) const;
			ListLoadBalancersOutcome listLoadBalancers(const Model::ListLoadBalancersRequest &request)const;
			void listLoadBalancersAsync(const Model::ListLoadBalancersRequest& request, const ListLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLoadBalancersOutcomeCallable listLoadBalancersCallable(const Model::ListLoadBalancersRequest& request) const;
			ListRulesOutcome listRules(const Model::ListRulesRequest &request)const;
			void listRulesAsync(const Model::ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRulesOutcomeCallable listRulesCallable(const Model::ListRulesRequest& request) const;
			ListSecurityPoliciesOutcome listSecurityPolicies(const Model::ListSecurityPoliciesRequest &request)const;
			void listSecurityPoliciesAsync(const Model::ListSecurityPoliciesRequest& request, const ListSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecurityPoliciesOutcomeCallable listSecurityPoliciesCallable(const Model::ListSecurityPoliciesRequest& request) const;
			ListSecurityPolicyRelationsOutcome listSecurityPolicyRelations(const Model::ListSecurityPolicyRelationsRequest &request)const;
			void listSecurityPolicyRelationsAsync(const Model::ListSecurityPolicyRelationsRequest& request, const ListSecurityPolicyRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecurityPolicyRelationsOutcomeCallable listSecurityPolicyRelationsCallable(const Model::ListSecurityPolicyRelationsRequest& request) const;
			ListServerGroupServersOutcome listServerGroupServers(const Model::ListServerGroupServersRequest &request)const;
			void listServerGroupServersAsync(const Model::ListServerGroupServersRequest& request, const ListServerGroupServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServerGroupServersOutcomeCallable listServerGroupServersCallable(const Model::ListServerGroupServersRequest& request) const;
			ListServerGroupsOutcome listServerGroups(const Model::ListServerGroupsRequest &request)const;
			void listServerGroupsAsync(const Model::ListServerGroupsRequest& request, const ListServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServerGroupsOutcomeCallable listServerGroupsCallable(const Model::ListServerGroupsRequest& request) const;
			ListSystemSecurityPoliciesOutcome listSystemSecurityPolicies(const Model::ListSystemSecurityPoliciesRequest &request)const;
			void listSystemSecurityPoliciesAsync(const Model::ListSystemSecurityPoliciesRequest& request, const ListSystemSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSystemSecurityPoliciesOutcomeCallable listSystemSecurityPoliciesCallable(const Model::ListSystemSecurityPoliciesRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagValuesOutcome listTagValues(const Model::ListTagValuesRequest &request)const;
			void listTagValuesAsync(const Model::ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagValuesOutcomeCallable listTagValuesCallable(const Model::ListTagValuesRequest& request) const;
			LoadBalancerJoinSecurityGroupOutcome loadBalancerJoinSecurityGroup(const Model::LoadBalancerJoinSecurityGroupRequest &request)const;
			void loadBalancerJoinSecurityGroupAsync(const Model::LoadBalancerJoinSecurityGroupRequest& request, const LoadBalancerJoinSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LoadBalancerJoinSecurityGroupOutcomeCallable loadBalancerJoinSecurityGroupCallable(const Model::LoadBalancerJoinSecurityGroupRequest& request) const;
			LoadBalancerLeaveSecurityGroupOutcome loadBalancerLeaveSecurityGroup(const Model::LoadBalancerLeaveSecurityGroupRequest &request)const;
			void loadBalancerLeaveSecurityGroupAsync(const Model::LoadBalancerLeaveSecurityGroupRequest& request, const LoadBalancerLeaveSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LoadBalancerLeaveSecurityGroupOutcomeCallable loadBalancerLeaveSecurityGroupCallable(const Model::LoadBalancerLeaveSecurityGroupRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			RemoveEntriesFromAclOutcome removeEntriesFromAcl(const Model::RemoveEntriesFromAclRequest &request)const;
			void removeEntriesFromAclAsync(const Model::RemoveEntriesFromAclRequest& request, const RemoveEntriesFromAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveEntriesFromAclOutcomeCallable removeEntriesFromAclCallable(const Model::RemoveEntriesFromAclRequest& request) const;
			RemoveServersFromServerGroupOutcome removeServersFromServerGroup(const Model::RemoveServersFromServerGroupRequest &request)const;
			void removeServersFromServerGroupAsync(const Model::RemoveServersFromServerGroupRequest& request, const RemoveServersFromServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveServersFromServerGroupOutcomeCallable removeServersFromServerGroupCallable(const Model::RemoveServersFromServerGroupRequest& request) const;
			ReplaceServersInServerGroupOutcome replaceServersInServerGroup(const Model::ReplaceServersInServerGroupRequest &request)const;
			void replaceServersInServerGroupAsync(const Model::ReplaceServersInServerGroupRequest& request, const ReplaceServersInServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceServersInServerGroupOutcomeCallable replaceServersInServerGroupCallable(const Model::ReplaceServersInServerGroupRequest& request) const;
			StartListenerOutcome startListener(const Model::StartListenerRequest &request)const;
			void startListenerAsync(const Model::StartListenerRequest& request, const StartListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartListenerOutcomeCallable startListenerCallable(const Model::StartListenerRequest& request) const;
			StartShiftLoadBalancerZonesOutcome startShiftLoadBalancerZones(const Model::StartShiftLoadBalancerZonesRequest &request)const;
			void startShiftLoadBalancerZonesAsync(const Model::StartShiftLoadBalancerZonesRequest& request, const StartShiftLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartShiftLoadBalancerZonesOutcomeCallable startShiftLoadBalancerZonesCallable(const Model::StartShiftLoadBalancerZonesRequest& request) const;
			StopListenerOutcome stopListener(const Model::StopListenerRequest &request)const;
			void stopListenerAsync(const Model::StopListenerRequest& request, const StopListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopListenerOutcomeCallable stopListenerCallable(const Model::StopListenerRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnTagResourcesOutcome unTagResources(const Model::UnTagResourcesRequest &request)const;
			void unTagResourcesAsync(const Model::UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnTagResourcesOutcomeCallable unTagResourcesCallable(const Model::UnTagResourcesRequest& request) const;
			UpdateAScriptsOutcome updateAScripts(const Model::UpdateAScriptsRequest &request)const;
			void updateAScriptsAsync(const Model::UpdateAScriptsRequest& request, const UpdateAScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAScriptsOutcomeCallable updateAScriptsCallable(const Model::UpdateAScriptsRequest& request) const;
			UpdateAclAttributeOutcome updateAclAttribute(const Model::UpdateAclAttributeRequest &request)const;
			void updateAclAttributeAsync(const Model::UpdateAclAttributeRequest& request, const UpdateAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAclAttributeOutcomeCallable updateAclAttributeCallable(const Model::UpdateAclAttributeRequest& request) const;
			UpdateHealthCheckTemplateAttributeOutcome updateHealthCheckTemplateAttribute(const Model::UpdateHealthCheckTemplateAttributeRequest &request)const;
			void updateHealthCheckTemplateAttributeAsync(const Model::UpdateHealthCheckTemplateAttributeRequest& request, const UpdateHealthCheckTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHealthCheckTemplateAttributeOutcomeCallable updateHealthCheckTemplateAttributeCallable(const Model::UpdateHealthCheckTemplateAttributeRequest& request) const;
			UpdateListenerAttributeOutcome updateListenerAttribute(const Model::UpdateListenerAttributeRequest &request)const;
			void updateListenerAttributeAsync(const Model::UpdateListenerAttributeRequest& request, const UpdateListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateListenerAttributeOutcomeCallable updateListenerAttributeCallable(const Model::UpdateListenerAttributeRequest& request) const;
			UpdateListenerLogConfigOutcome updateListenerLogConfig(const Model::UpdateListenerLogConfigRequest &request)const;
			void updateListenerLogConfigAsync(const Model::UpdateListenerLogConfigRequest& request, const UpdateListenerLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateListenerLogConfigOutcomeCallable updateListenerLogConfigCallable(const Model::UpdateListenerLogConfigRequest& request) const;
			UpdateLoadBalancerAddressTypeConfigOutcome updateLoadBalancerAddressTypeConfig(const Model::UpdateLoadBalancerAddressTypeConfigRequest &request)const;
			void updateLoadBalancerAddressTypeConfigAsync(const Model::UpdateLoadBalancerAddressTypeConfigRequest& request, const UpdateLoadBalancerAddressTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoadBalancerAddressTypeConfigOutcomeCallable updateLoadBalancerAddressTypeConfigCallable(const Model::UpdateLoadBalancerAddressTypeConfigRequest& request) const;
			UpdateLoadBalancerAttributeOutcome updateLoadBalancerAttribute(const Model::UpdateLoadBalancerAttributeRequest &request)const;
			void updateLoadBalancerAttributeAsync(const Model::UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoadBalancerAttributeOutcomeCallable updateLoadBalancerAttributeCallable(const Model::UpdateLoadBalancerAttributeRequest& request) const;
			UpdateLoadBalancerEditionOutcome updateLoadBalancerEdition(const Model::UpdateLoadBalancerEditionRequest &request)const;
			void updateLoadBalancerEditionAsync(const Model::UpdateLoadBalancerEditionRequest& request, const UpdateLoadBalancerEditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoadBalancerEditionOutcomeCallable updateLoadBalancerEditionCallable(const Model::UpdateLoadBalancerEditionRequest& request) const;
			UpdateLoadBalancerZonesOutcome updateLoadBalancerZones(const Model::UpdateLoadBalancerZonesRequest &request)const;
			void updateLoadBalancerZonesAsync(const Model::UpdateLoadBalancerZonesRequest& request, const UpdateLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoadBalancerZonesOutcomeCallable updateLoadBalancerZonesCallable(const Model::UpdateLoadBalancerZonesRequest& request) const;
			UpdateRuleAttributeOutcome updateRuleAttribute(const Model::UpdateRuleAttributeRequest &request)const;
			void updateRuleAttributeAsync(const Model::UpdateRuleAttributeRequest& request, const UpdateRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRuleAttributeOutcomeCallable updateRuleAttributeCallable(const Model::UpdateRuleAttributeRequest& request) const;
			UpdateRulesAttributeOutcome updateRulesAttribute(const Model::UpdateRulesAttributeRequest &request)const;
			void updateRulesAttributeAsync(const Model::UpdateRulesAttributeRequest& request, const UpdateRulesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRulesAttributeOutcomeCallable updateRulesAttributeCallable(const Model::UpdateRulesAttributeRequest& request) const;
			UpdateSecurityPolicyAttributeOutcome updateSecurityPolicyAttribute(const Model::UpdateSecurityPolicyAttributeRequest &request)const;
			void updateSecurityPolicyAttributeAsync(const Model::UpdateSecurityPolicyAttributeRequest& request, const UpdateSecurityPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSecurityPolicyAttributeOutcomeCallable updateSecurityPolicyAttributeCallable(const Model::UpdateSecurityPolicyAttributeRequest& request) const;
			UpdateServerGroupAttributeOutcome updateServerGroupAttribute(const Model::UpdateServerGroupAttributeRequest &request)const;
			void updateServerGroupAttributeAsync(const Model::UpdateServerGroupAttributeRequest& request, const UpdateServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServerGroupAttributeOutcomeCallable updateServerGroupAttributeCallable(const Model::UpdateServerGroupAttributeRequest& request) const;
			UpdateServerGroupServersAttributeOutcome updateServerGroupServersAttribute(const Model::UpdateServerGroupServersAttributeRequest &request)const;
			void updateServerGroupServersAttributeAsync(const Model::UpdateServerGroupServersAttributeRequest& request, const UpdateServerGroupServersAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServerGroupServersAttributeOutcomeCallable updateServerGroupServersAttributeCallable(const Model::UpdateServerGroupServersAttributeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ALB_ALBCLIENT_H_
