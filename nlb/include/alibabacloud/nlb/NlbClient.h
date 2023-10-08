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

#ifndef ALIBABACLOUD_NLB_NLBCLIENT_H_
#define ALIBABACLOUD_NLB_NLBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "NlbExport.h"
#include "model/AddServersToServerGroupRequest.h"
#include "model/AddServersToServerGroupResult.h"
#include "model/AssociateAdditionalCertificatesWithListenerRequest.h"
#include "model/AssociateAdditionalCertificatesWithListenerResult.h"
#include "model/AttachCommonBandwidthPackageToLoadBalancerRequest.h"
#include "model/AttachCommonBandwidthPackageToLoadBalancerResult.h"
#include "model/CancelShiftLoadBalancerZonesRequest.h"
#include "model/CancelShiftLoadBalancerZonesResult.h"
#include "model/CreateListenerRequest.h"
#include "model/CreateListenerResult.h"
#include "model/CreateLoadBalancerRequest.h"
#include "model/CreateLoadBalancerResult.h"
#include "model/CreateSecurityPolicyRequest.h"
#include "model/CreateSecurityPolicyResult.h"
#include "model/CreateServerGroupRequest.h"
#include "model/CreateServerGroupResult.h"
#include "model/DeleteListenerRequest.h"
#include "model/DeleteListenerResult.h"
#include "model/DeleteLoadBalancerRequest.h"
#include "model/DeleteLoadBalancerResult.h"
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
#include "model/DisableLoadBalancerIpv6InternetRequest.h"
#include "model/DisableLoadBalancerIpv6InternetResult.h"
#include "model/DisassociateAdditionalCertificatesWithListenerRequest.h"
#include "model/DisassociateAdditionalCertificatesWithListenerResult.h"
#include "model/EnableLoadBalancerIpv6InternetRequest.h"
#include "model/EnableLoadBalancerIpv6InternetResult.h"
#include "model/GetJobStatusRequest.h"
#include "model/GetJobStatusResult.h"
#include "model/GetListenerAttributeRequest.h"
#include "model/GetListenerAttributeResult.h"
#include "model/GetListenerHealthStatusRequest.h"
#include "model/GetListenerHealthStatusResult.h"
#include "model/GetLoadBalancerAttributeRequest.h"
#include "model/GetLoadBalancerAttributeResult.h"
#include "model/ListListenerCertificatesRequest.h"
#include "model/ListListenerCertificatesResult.h"
#include "model/ListListenersRequest.h"
#include "model/ListListenersResult.h"
#include "model/ListLoadBalancersRequest.h"
#include "model/ListLoadBalancersResult.h"
#include "model/ListSecurityPolicyRequest.h"
#include "model/ListSecurityPolicyResult.h"
#include "model/ListServerGroupServersRequest.h"
#include "model/ListServerGroupServersResult.h"
#include "model/ListServerGroupsRequest.h"
#include "model/ListServerGroupsResult.h"
#include "model/ListSystemSecurityPolicyRequest.h"
#include "model/ListSystemSecurityPolicyResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/LoadBalancerJoinSecurityGroupRequest.h"
#include "model/LoadBalancerJoinSecurityGroupResult.h"
#include "model/LoadBalancerLeaveSecurityGroupRequest.h"
#include "model/LoadBalancerLeaveSecurityGroupResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/RemoveServersFromServerGroupRequest.h"
#include "model/RemoveServersFromServerGroupResult.h"
#include "model/StartListenerRequest.h"
#include "model/StartListenerResult.h"
#include "model/StartShiftLoadBalancerZonesRequest.h"
#include "model/StartShiftLoadBalancerZonesResult.h"
#include "model/StopListenerRequest.h"
#include "model/StopListenerResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateListenerAttributeRequest.h"
#include "model/UpdateListenerAttributeResult.h"
#include "model/UpdateLoadBalancerAddressTypeConfigRequest.h"
#include "model/UpdateLoadBalancerAddressTypeConfigResult.h"
#include "model/UpdateLoadBalancerAttributeRequest.h"
#include "model/UpdateLoadBalancerAttributeResult.h"
#include "model/UpdateLoadBalancerProtectionRequest.h"
#include "model/UpdateLoadBalancerProtectionResult.h"
#include "model/UpdateLoadBalancerZonesRequest.h"
#include "model/UpdateLoadBalancerZonesResult.h"
#include "model/UpdateSecurityPolicyAttributeRequest.h"
#include "model/UpdateSecurityPolicyAttributeResult.h"
#include "model/UpdateServerGroupAttributeRequest.h"
#include "model/UpdateServerGroupAttributeResult.h"
#include "model/UpdateServerGroupServersAttributeRequest.h"
#include "model/UpdateServerGroupServersAttributeResult.h"


namespace AlibabaCloud
{
	namespace Nlb
	{
		class ALIBABACLOUD_NLB_EXPORT NlbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddServersToServerGroupResult> AddServersToServerGroupOutcome;
			typedef std::future<AddServersToServerGroupOutcome> AddServersToServerGroupOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::AddServersToServerGroupRequest&, const AddServersToServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddServersToServerGroupAsyncHandler;
			typedef Outcome<Error, Model::AssociateAdditionalCertificatesWithListenerResult> AssociateAdditionalCertificatesWithListenerOutcome;
			typedef std::future<AssociateAdditionalCertificatesWithListenerOutcome> AssociateAdditionalCertificatesWithListenerOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::AssociateAdditionalCertificatesWithListenerRequest&, const AssociateAdditionalCertificatesWithListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAdditionalCertificatesWithListenerAsyncHandler;
			typedef Outcome<Error, Model::AttachCommonBandwidthPackageToLoadBalancerResult> AttachCommonBandwidthPackageToLoadBalancerOutcome;
			typedef std::future<AttachCommonBandwidthPackageToLoadBalancerOutcome> AttachCommonBandwidthPackageToLoadBalancerOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::AttachCommonBandwidthPackageToLoadBalancerRequest&, const AttachCommonBandwidthPackageToLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachCommonBandwidthPackageToLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::CancelShiftLoadBalancerZonesResult> CancelShiftLoadBalancerZonesOutcome;
			typedef std::future<CancelShiftLoadBalancerZonesOutcome> CancelShiftLoadBalancerZonesOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::CancelShiftLoadBalancerZonesRequest&, const CancelShiftLoadBalancerZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelShiftLoadBalancerZonesAsyncHandler;
			typedef Outcome<Error, Model::CreateListenerResult> CreateListenerOutcome;
			typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::CreateListenerRequest&, const CreateListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerResult> CreateLoadBalancerOutcome;
			typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::CreateLoadBalancerRequest&, const CreateLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::CreateSecurityPolicyResult> CreateSecurityPolicyOutcome;
			typedef std::future<CreateSecurityPolicyOutcome> CreateSecurityPolicyOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::CreateSecurityPolicyRequest&, const CreateSecurityPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateServerGroupResult> CreateServerGroupOutcome;
			typedef std::future<CreateServerGroupOutcome> CreateServerGroupOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::CreateServerGroupRequest&, const CreateServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteListenerResult> DeleteListenerOutcome;
			typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::DeleteListenerRequest&, const DeleteListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoadBalancerResult> DeleteLoadBalancerOutcome;
			typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::DeleteLoadBalancerRequest&, const DeleteLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecurityPolicyResult> DeleteSecurityPolicyOutcome;
			typedef std::future<DeleteSecurityPolicyOutcome> DeleteSecurityPolicyOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::DeleteSecurityPolicyRequest&, const DeleteSecurityPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteServerGroupResult> DeleteServerGroupOutcome;
			typedef std::future<DeleteServerGroupOutcome> DeleteServerGroupOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::DeleteServerGroupRequest&, const DeleteServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DetachCommonBandwidthPackageFromLoadBalancerResult> DetachCommonBandwidthPackageFromLoadBalancerOutcome;
			typedef std::future<DetachCommonBandwidthPackageFromLoadBalancerOutcome> DetachCommonBandwidthPackageFromLoadBalancerOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::DetachCommonBandwidthPackageFromLoadBalancerRequest&, const DetachCommonBandwidthPackageFromLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachCommonBandwidthPackageFromLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::DisableLoadBalancerIpv6InternetResult> DisableLoadBalancerIpv6InternetOutcome;
			typedef std::future<DisableLoadBalancerIpv6InternetOutcome> DisableLoadBalancerIpv6InternetOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::DisableLoadBalancerIpv6InternetRequest&, const DisableLoadBalancerIpv6InternetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableLoadBalancerIpv6InternetAsyncHandler;
			typedef Outcome<Error, Model::DisassociateAdditionalCertificatesWithListenerResult> DisassociateAdditionalCertificatesWithListenerOutcome;
			typedef std::future<DisassociateAdditionalCertificatesWithListenerOutcome> DisassociateAdditionalCertificatesWithListenerOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::DisassociateAdditionalCertificatesWithListenerRequest&, const DisassociateAdditionalCertificatesWithListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateAdditionalCertificatesWithListenerAsyncHandler;
			typedef Outcome<Error, Model::EnableLoadBalancerIpv6InternetResult> EnableLoadBalancerIpv6InternetOutcome;
			typedef std::future<EnableLoadBalancerIpv6InternetOutcome> EnableLoadBalancerIpv6InternetOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::EnableLoadBalancerIpv6InternetRequest&, const EnableLoadBalancerIpv6InternetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableLoadBalancerIpv6InternetAsyncHandler;
			typedef Outcome<Error, Model::GetJobStatusResult> GetJobStatusOutcome;
			typedef std::future<GetJobStatusOutcome> GetJobStatusOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::GetJobStatusRequest&, const GetJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobStatusAsyncHandler;
			typedef Outcome<Error, Model::GetListenerAttributeResult> GetListenerAttributeOutcome;
			typedef std::future<GetListenerAttributeOutcome> GetListenerAttributeOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::GetListenerAttributeRequest&, const GetListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetListenerHealthStatusResult> GetListenerHealthStatusOutcome;
			typedef std::future<GetListenerHealthStatusOutcome> GetListenerHealthStatusOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::GetListenerHealthStatusRequest&, const GetListenerHealthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetListenerHealthStatusAsyncHandler;
			typedef Outcome<Error, Model::GetLoadBalancerAttributeResult> GetLoadBalancerAttributeOutcome;
			typedef std::future<GetLoadBalancerAttributeOutcome> GetLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::GetLoadBalancerAttributeRequest&, const GetLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::ListListenerCertificatesResult> ListListenerCertificatesOutcome;
			typedef std::future<ListListenerCertificatesOutcome> ListListenerCertificatesOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::ListListenerCertificatesRequest&, const ListListenerCertificatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenerCertificatesAsyncHandler;
			typedef Outcome<Error, Model::ListListenersResult> ListListenersOutcome;
			typedef std::future<ListListenersOutcome> ListListenersOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::ListListenersRequest&, const ListListenersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenersAsyncHandler;
			typedef Outcome<Error, Model::ListLoadBalancersResult> ListLoadBalancersOutcome;
			typedef std::future<ListLoadBalancersOutcome> ListLoadBalancersOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::ListLoadBalancersRequest&, const ListLoadBalancersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLoadBalancersAsyncHandler;
			typedef Outcome<Error, Model::ListSecurityPolicyResult> ListSecurityPolicyOutcome;
			typedef std::future<ListSecurityPolicyOutcome> ListSecurityPolicyOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::ListSecurityPolicyRequest&, const ListSecurityPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecurityPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListServerGroupServersResult> ListServerGroupServersOutcome;
			typedef std::future<ListServerGroupServersOutcome> ListServerGroupServersOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::ListServerGroupServersRequest&, const ListServerGroupServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServerGroupServersAsyncHandler;
			typedef Outcome<Error, Model::ListServerGroupsResult> ListServerGroupsOutcome;
			typedef std::future<ListServerGroupsOutcome> ListServerGroupsOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::ListServerGroupsRequest&, const ListServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListSystemSecurityPolicyResult> ListSystemSecurityPolicyOutcome;
			typedef std::future<ListSystemSecurityPolicyOutcome> ListSystemSecurityPolicyOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::ListSystemSecurityPolicyRequest&, const ListSystemSecurityPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSystemSecurityPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::LoadBalancerJoinSecurityGroupResult> LoadBalancerJoinSecurityGroupOutcome;
			typedef std::future<LoadBalancerJoinSecurityGroupOutcome> LoadBalancerJoinSecurityGroupOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::LoadBalancerJoinSecurityGroupRequest&, const LoadBalancerJoinSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LoadBalancerJoinSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::LoadBalancerLeaveSecurityGroupResult> LoadBalancerLeaveSecurityGroupOutcome;
			typedef std::future<LoadBalancerLeaveSecurityGroupOutcome> LoadBalancerLeaveSecurityGroupOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::LoadBalancerLeaveSecurityGroupRequest&, const LoadBalancerLeaveSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LoadBalancerLeaveSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveServersFromServerGroupResult> RemoveServersFromServerGroupOutcome;
			typedef std::future<RemoveServersFromServerGroupOutcome> RemoveServersFromServerGroupOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::RemoveServersFromServerGroupRequest&, const RemoveServersFromServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveServersFromServerGroupAsyncHandler;
			typedef Outcome<Error, Model::StartListenerResult> StartListenerOutcome;
			typedef std::future<StartListenerOutcome> StartListenerOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::StartListenerRequest&, const StartListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartListenerAsyncHandler;
			typedef Outcome<Error, Model::StartShiftLoadBalancerZonesResult> StartShiftLoadBalancerZonesOutcome;
			typedef std::future<StartShiftLoadBalancerZonesOutcome> StartShiftLoadBalancerZonesOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::StartShiftLoadBalancerZonesRequest&, const StartShiftLoadBalancerZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartShiftLoadBalancerZonesAsyncHandler;
			typedef Outcome<Error, Model::StopListenerResult> StopListenerOutcome;
			typedef std::future<StopListenerOutcome> StopListenerOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::StopListenerRequest&, const StopListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopListenerAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateListenerAttributeResult> UpdateListenerAttributeOutcome;
			typedef std::future<UpdateListenerAttributeOutcome> UpdateListenerAttributeOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::UpdateListenerAttributeRequest&, const UpdateListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoadBalancerAddressTypeConfigResult> UpdateLoadBalancerAddressTypeConfigOutcome;
			typedef std::future<UpdateLoadBalancerAddressTypeConfigOutcome> UpdateLoadBalancerAddressTypeConfigOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::UpdateLoadBalancerAddressTypeConfigRequest&, const UpdateLoadBalancerAddressTypeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoadBalancerAddressTypeConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoadBalancerAttributeResult> UpdateLoadBalancerAttributeOutcome;
			typedef std::future<UpdateLoadBalancerAttributeOutcome> UpdateLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::UpdateLoadBalancerAttributeRequest&, const UpdateLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoadBalancerProtectionResult> UpdateLoadBalancerProtectionOutcome;
			typedef std::future<UpdateLoadBalancerProtectionOutcome> UpdateLoadBalancerProtectionOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::UpdateLoadBalancerProtectionRequest&, const UpdateLoadBalancerProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoadBalancerProtectionAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoadBalancerZonesResult> UpdateLoadBalancerZonesOutcome;
			typedef std::future<UpdateLoadBalancerZonesOutcome> UpdateLoadBalancerZonesOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::UpdateLoadBalancerZonesRequest&, const UpdateLoadBalancerZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoadBalancerZonesAsyncHandler;
			typedef Outcome<Error, Model::UpdateSecurityPolicyAttributeResult> UpdateSecurityPolicyAttributeOutcome;
			typedef std::future<UpdateSecurityPolicyAttributeOutcome> UpdateSecurityPolicyAttributeOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::UpdateSecurityPolicyAttributeRequest&, const UpdateSecurityPolicyAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecurityPolicyAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateServerGroupAttributeResult> UpdateServerGroupAttributeOutcome;
			typedef std::future<UpdateServerGroupAttributeOutcome> UpdateServerGroupAttributeOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::UpdateServerGroupAttributeRequest&, const UpdateServerGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServerGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateServerGroupServersAttributeResult> UpdateServerGroupServersAttributeOutcome;
			typedef std::future<UpdateServerGroupServersAttributeOutcome> UpdateServerGroupServersAttributeOutcomeCallable;
			typedef std::function<void(const NlbClient*, const Model::UpdateServerGroupServersAttributeRequest&, const UpdateServerGroupServersAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServerGroupServersAttributeAsyncHandler;

			NlbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			NlbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			NlbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~NlbClient();
			AddServersToServerGroupOutcome addServersToServerGroup(const Model::AddServersToServerGroupRequest &request)const;
			void addServersToServerGroupAsync(const Model::AddServersToServerGroupRequest& request, const AddServersToServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddServersToServerGroupOutcomeCallable addServersToServerGroupCallable(const Model::AddServersToServerGroupRequest& request) const;
			AssociateAdditionalCertificatesWithListenerOutcome associateAdditionalCertificatesWithListener(const Model::AssociateAdditionalCertificatesWithListenerRequest &request)const;
			void associateAdditionalCertificatesWithListenerAsync(const Model::AssociateAdditionalCertificatesWithListenerRequest& request, const AssociateAdditionalCertificatesWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateAdditionalCertificatesWithListenerOutcomeCallable associateAdditionalCertificatesWithListenerCallable(const Model::AssociateAdditionalCertificatesWithListenerRequest& request) const;
			AttachCommonBandwidthPackageToLoadBalancerOutcome attachCommonBandwidthPackageToLoadBalancer(const Model::AttachCommonBandwidthPackageToLoadBalancerRequest &request)const;
			void attachCommonBandwidthPackageToLoadBalancerAsync(const Model::AttachCommonBandwidthPackageToLoadBalancerRequest& request, const AttachCommonBandwidthPackageToLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachCommonBandwidthPackageToLoadBalancerOutcomeCallable attachCommonBandwidthPackageToLoadBalancerCallable(const Model::AttachCommonBandwidthPackageToLoadBalancerRequest& request) const;
			CancelShiftLoadBalancerZonesOutcome cancelShiftLoadBalancerZones(const Model::CancelShiftLoadBalancerZonesRequest &request)const;
			void cancelShiftLoadBalancerZonesAsync(const Model::CancelShiftLoadBalancerZonesRequest& request, const CancelShiftLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelShiftLoadBalancerZonesOutcomeCallable cancelShiftLoadBalancerZonesCallable(const Model::CancelShiftLoadBalancerZonesRequest& request) const;
			CreateListenerOutcome createListener(const Model::CreateListenerRequest &request)const;
			void createListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateListenerOutcomeCallable createListenerCallable(const Model::CreateListenerRequest& request) const;
			CreateLoadBalancerOutcome createLoadBalancer(const Model::CreateLoadBalancerRequest &request)const;
			void createLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerOutcomeCallable createLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;
			CreateSecurityPolicyOutcome createSecurityPolicy(const Model::CreateSecurityPolicyRequest &request)const;
			void createSecurityPolicyAsync(const Model::CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecurityPolicyOutcomeCallable createSecurityPolicyCallable(const Model::CreateSecurityPolicyRequest& request) const;
			CreateServerGroupOutcome createServerGroup(const Model::CreateServerGroupRequest &request)const;
			void createServerGroupAsync(const Model::CreateServerGroupRequest& request, const CreateServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServerGroupOutcomeCallable createServerGroupCallable(const Model::CreateServerGroupRequest& request) const;
			DeleteListenerOutcome deleteListener(const Model::DeleteListenerRequest &request)const;
			void deleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteListenerOutcomeCallable deleteListenerCallable(const Model::DeleteListenerRequest& request) const;
			DeleteLoadBalancerOutcome deleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request)const;
			void deleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoadBalancerOutcomeCallable deleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;
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
			DisableLoadBalancerIpv6InternetOutcome disableLoadBalancerIpv6Internet(const Model::DisableLoadBalancerIpv6InternetRequest &request)const;
			void disableLoadBalancerIpv6InternetAsync(const Model::DisableLoadBalancerIpv6InternetRequest& request, const DisableLoadBalancerIpv6InternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableLoadBalancerIpv6InternetOutcomeCallable disableLoadBalancerIpv6InternetCallable(const Model::DisableLoadBalancerIpv6InternetRequest& request) const;
			DisassociateAdditionalCertificatesWithListenerOutcome disassociateAdditionalCertificatesWithListener(const Model::DisassociateAdditionalCertificatesWithListenerRequest &request)const;
			void disassociateAdditionalCertificatesWithListenerAsync(const Model::DisassociateAdditionalCertificatesWithListenerRequest& request, const DisassociateAdditionalCertificatesWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateAdditionalCertificatesWithListenerOutcomeCallable disassociateAdditionalCertificatesWithListenerCallable(const Model::DisassociateAdditionalCertificatesWithListenerRequest& request) const;
			EnableLoadBalancerIpv6InternetOutcome enableLoadBalancerIpv6Internet(const Model::EnableLoadBalancerIpv6InternetRequest &request)const;
			void enableLoadBalancerIpv6InternetAsync(const Model::EnableLoadBalancerIpv6InternetRequest& request, const EnableLoadBalancerIpv6InternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableLoadBalancerIpv6InternetOutcomeCallable enableLoadBalancerIpv6InternetCallable(const Model::EnableLoadBalancerIpv6InternetRequest& request) const;
			GetJobStatusOutcome getJobStatus(const Model::GetJobStatusRequest &request)const;
			void getJobStatusAsync(const Model::GetJobStatusRequest& request, const GetJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobStatusOutcomeCallable getJobStatusCallable(const Model::GetJobStatusRequest& request) const;
			GetListenerAttributeOutcome getListenerAttribute(const Model::GetListenerAttributeRequest &request)const;
			void getListenerAttributeAsync(const Model::GetListenerAttributeRequest& request, const GetListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetListenerAttributeOutcomeCallable getListenerAttributeCallable(const Model::GetListenerAttributeRequest& request) const;
			GetListenerHealthStatusOutcome getListenerHealthStatus(const Model::GetListenerHealthStatusRequest &request)const;
			void getListenerHealthStatusAsync(const Model::GetListenerHealthStatusRequest& request, const GetListenerHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetListenerHealthStatusOutcomeCallable getListenerHealthStatusCallable(const Model::GetListenerHealthStatusRequest& request) const;
			GetLoadBalancerAttributeOutcome getLoadBalancerAttribute(const Model::GetLoadBalancerAttributeRequest &request)const;
			void getLoadBalancerAttributeAsync(const Model::GetLoadBalancerAttributeRequest& request, const GetLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLoadBalancerAttributeOutcomeCallable getLoadBalancerAttributeCallable(const Model::GetLoadBalancerAttributeRequest& request) const;
			ListListenerCertificatesOutcome listListenerCertificates(const Model::ListListenerCertificatesRequest &request)const;
			void listListenerCertificatesAsync(const Model::ListListenerCertificatesRequest& request, const ListListenerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenerCertificatesOutcomeCallable listListenerCertificatesCallable(const Model::ListListenerCertificatesRequest& request) const;
			ListListenersOutcome listListeners(const Model::ListListenersRequest &request)const;
			void listListenersAsync(const Model::ListListenersRequest& request, const ListListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenersOutcomeCallable listListenersCallable(const Model::ListListenersRequest& request) const;
			ListLoadBalancersOutcome listLoadBalancers(const Model::ListLoadBalancersRequest &request)const;
			void listLoadBalancersAsync(const Model::ListLoadBalancersRequest& request, const ListLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLoadBalancersOutcomeCallable listLoadBalancersCallable(const Model::ListLoadBalancersRequest& request) const;
			ListSecurityPolicyOutcome listSecurityPolicy(const Model::ListSecurityPolicyRequest &request)const;
			void listSecurityPolicyAsync(const Model::ListSecurityPolicyRequest& request, const ListSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecurityPolicyOutcomeCallable listSecurityPolicyCallable(const Model::ListSecurityPolicyRequest& request) const;
			ListServerGroupServersOutcome listServerGroupServers(const Model::ListServerGroupServersRequest &request)const;
			void listServerGroupServersAsync(const Model::ListServerGroupServersRequest& request, const ListServerGroupServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServerGroupServersOutcomeCallable listServerGroupServersCallable(const Model::ListServerGroupServersRequest& request) const;
			ListServerGroupsOutcome listServerGroups(const Model::ListServerGroupsRequest &request)const;
			void listServerGroupsAsync(const Model::ListServerGroupsRequest& request, const ListServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServerGroupsOutcomeCallable listServerGroupsCallable(const Model::ListServerGroupsRequest& request) const;
			ListSystemSecurityPolicyOutcome listSystemSecurityPolicy(const Model::ListSystemSecurityPolicyRequest &request)const;
			void listSystemSecurityPolicyAsync(const Model::ListSystemSecurityPolicyRequest& request, const ListSystemSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSystemSecurityPolicyOutcomeCallable listSystemSecurityPolicyCallable(const Model::ListSystemSecurityPolicyRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			LoadBalancerJoinSecurityGroupOutcome loadBalancerJoinSecurityGroup(const Model::LoadBalancerJoinSecurityGroupRequest &request)const;
			void loadBalancerJoinSecurityGroupAsync(const Model::LoadBalancerJoinSecurityGroupRequest& request, const LoadBalancerJoinSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LoadBalancerJoinSecurityGroupOutcomeCallable loadBalancerJoinSecurityGroupCallable(const Model::LoadBalancerJoinSecurityGroupRequest& request) const;
			LoadBalancerLeaveSecurityGroupOutcome loadBalancerLeaveSecurityGroup(const Model::LoadBalancerLeaveSecurityGroupRequest &request)const;
			void loadBalancerLeaveSecurityGroupAsync(const Model::LoadBalancerLeaveSecurityGroupRequest& request, const LoadBalancerLeaveSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LoadBalancerLeaveSecurityGroupOutcomeCallable loadBalancerLeaveSecurityGroupCallable(const Model::LoadBalancerLeaveSecurityGroupRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			RemoveServersFromServerGroupOutcome removeServersFromServerGroup(const Model::RemoveServersFromServerGroupRequest &request)const;
			void removeServersFromServerGroupAsync(const Model::RemoveServersFromServerGroupRequest& request, const RemoveServersFromServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveServersFromServerGroupOutcomeCallable removeServersFromServerGroupCallable(const Model::RemoveServersFromServerGroupRequest& request) const;
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
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateListenerAttributeOutcome updateListenerAttribute(const Model::UpdateListenerAttributeRequest &request)const;
			void updateListenerAttributeAsync(const Model::UpdateListenerAttributeRequest& request, const UpdateListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateListenerAttributeOutcomeCallable updateListenerAttributeCallable(const Model::UpdateListenerAttributeRequest& request) const;
			UpdateLoadBalancerAddressTypeConfigOutcome updateLoadBalancerAddressTypeConfig(const Model::UpdateLoadBalancerAddressTypeConfigRequest &request)const;
			void updateLoadBalancerAddressTypeConfigAsync(const Model::UpdateLoadBalancerAddressTypeConfigRequest& request, const UpdateLoadBalancerAddressTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoadBalancerAddressTypeConfigOutcomeCallable updateLoadBalancerAddressTypeConfigCallable(const Model::UpdateLoadBalancerAddressTypeConfigRequest& request) const;
			UpdateLoadBalancerAttributeOutcome updateLoadBalancerAttribute(const Model::UpdateLoadBalancerAttributeRequest &request)const;
			void updateLoadBalancerAttributeAsync(const Model::UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoadBalancerAttributeOutcomeCallable updateLoadBalancerAttributeCallable(const Model::UpdateLoadBalancerAttributeRequest& request) const;
			UpdateLoadBalancerProtectionOutcome updateLoadBalancerProtection(const Model::UpdateLoadBalancerProtectionRequest &request)const;
			void updateLoadBalancerProtectionAsync(const Model::UpdateLoadBalancerProtectionRequest& request, const UpdateLoadBalancerProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoadBalancerProtectionOutcomeCallable updateLoadBalancerProtectionCallable(const Model::UpdateLoadBalancerProtectionRequest& request) const;
			UpdateLoadBalancerZonesOutcome updateLoadBalancerZones(const Model::UpdateLoadBalancerZonesRequest &request)const;
			void updateLoadBalancerZonesAsync(const Model::UpdateLoadBalancerZonesRequest& request, const UpdateLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoadBalancerZonesOutcomeCallable updateLoadBalancerZonesCallable(const Model::UpdateLoadBalancerZonesRequest& request) const;
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

#endif // !ALIBABACLOUD_NLB_NLBCLIENT_H_
