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

#ifndef ALIBABACLOUD_SLB_SLBCLIENT_H_
#define ALIBABACLOUD_SLB_SLBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SlbExport.h"
#include "model/AddAccessControlListEntryRequest.h"
#include "model/AddAccessControlListEntryResult.h"
#include "model/AddBackendServersRequest.h"
#include "model/AddBackendServersResult.h"
#include "model/AddListenerWhiteListItemRequest.h"
#include "model/AddListenerWhiteListItemResult.h"
#include "model/AddTagsRequest.h"
#include "model/AddTagsResult.h"
#include "model/AddVServerGroupBackendServersRequest.h"
#include "model/AddVServerGroupBackendServersResult.h"
#include "model/CreateAccessControlListRequest.h"
#include "model/CreateAccessControlListResult.h"
#include "model/CreateDomainExtensionRequest.h"
#include "model/CreateDomainExtensionResult.h"
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
#include "model/CreateMasterSlaveServerGroupRequest.h"
#include "model/CreateMasterSlaveServerGroupResult.h"
#include "model/CreateRulesRequest.h"
#include "model/CreateRulesResult.h"
#include "model/CreateTLSCipherPolicyRequest.h"
#include "model/CreateTLSCipherPolicyResult.h"
#include "model/CreateVServerGroupRequest.h"
#include "model/CreateVServerGroupResult.h"
#include "model/DeleteAccessControlListRequest.h"
#include "model/DeleteAccessControlListResult.h"
#include "model/DeleteAccessLogsDownloadAttributeRequest.h"
#include "model/DeleteAccessLogsDownloadAttributeResult.h"
#include "model/DeleteCACertificateRequest.h"
#include "model/DeleteCACertificateResult.h"
#include "model/DeleteDomainExtensionRequest.h"
#include "model/DeleteDomainExtensionResult.h"
#include "model/DeleteLoadBalancerRequest.h"
#include "model/DeleteLoadBalancerResult.h"
#include "model/DeleteLoadBalancerListenerRequest.h"
#include "model/DeleteLoadBalancerListenerResult.h"
#include "model/DeleteMasterSlaveServerGroupRequest.h"
#include "model/DeleteMasterSlaveServerGroupResult.h"
#include "model/DeleteRulesRequest.h"
#include "model/DeleteRulesResult.h"
#include "model/DeleteServerCertificateRequest.h"
#include "model/DeleteServerCertificateResult.h"
#include "model/DeleteTLSCipherPolicyRequest.h"
#include "model/DeleteTLSCipherPolicyResult.h"
#include "model/DeleteVServerGroupRequest.h"
#include "model/DeleteVServerGroupResult.h"
#include "model/DescribeAccessControlListAttributeRequest.h"
#include "model/DescribeAccessControlListAttributeResult.h"
#include "model/DescribeAccessControlListsRequest.h"
#include "model/DescribeAccessControlListsResult.h"
#include "model/DescribeAccessLogsDownloadAttributeRequest.h"
#include "model/DescribeAccessLogsDownloadAttributeResult.h"
#include "model/DescribeAvailableResourceRequest.h"
#include "model/DescribeAvailableResourceResult.h"
#include "model/DescribeCACertificatesRequest.h"
#include "model/DescribeCACertificatesResult.h"
#include "model/DescribeDomainExtensionAttributeRequest.h"
#include "model/DescribeDomainExtensionAttributeResult.h"
#include "model/DescribeDomainExtensionsRequest.h"
#include "model/DescribeDomainExtensionsResult.h"
#include "model/DescribeHealthStatusRequest.h"
#include "model/DescribeHealthStatusResult.h"
#include "model/DescribeHighDefinationMonitorRequest.h"
#include "model/DescribeHighDefinationMonitorResult.h"
#include "model/DescribeListenerAccessControlAttributeRequest.h"
#include "model/DescribeListenerAccessControlAttributeResult.h"
#include "model/DescribeLoadBalancerAttributeRequest.h"
#include "model/DescribeLoadBalancerAttributeResult.h"
#include "model/DescribeLoadBalancerHTTPListenerAttributeRequest.h"
#include "model/DescribeLoadBalancerHTTPListenerAttributeResult.h"
#include "model/DescribeLoadBalancerHTTPSListenerAttributeRequest.h"
#include "model/DescribeLoadBalancerHTTPSListenerAttributeResult.h"
#include "model/DescribeLoadBalancerListenersRequest.h"
#include "model/DescribeLoadBalancerListenersResult.h"
#include "model/DescribeLoadBalancerTCPListenerAttributeRequest.h"
#include "model/DescribeLoadBalancerTCPListenerAttributeResult.h"
#include "model/DescribeLoadBalancerUDPListenerAttributeRequest.h"
#include "model/DescribeLoadBalancerUDPListenerAttributeResult.h"
#include "model/DescribeLoadBalancersRequest.h"
#include "model/DescribeLoadBalancersResult.h"
#include "model/DescribeMasterSlaveServerGroupAttributeRequest.h"
#include "model/DescribeMasterSlaveServerGroupAttributeResult.h"
#include "model/DescribeMasterSlaveServerGroupsRequest.h"
#include "model/DescribeMasterSlaveServerGroupsResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRuleAttributeRequest.h"
#include "model/DescribeRuleAttributeResult.h"
#include "model/DescribeRulesRequest.h"
#include "model/DescribeRulesResult.h"
#include "model/DescribeServerCertificatesRequest.h"
#include "model/DescribeServerCertificatesResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DescribeVServerGroupAttributeRequest.h"
#include "model/DescribeVServerGroupAttributeResult.h"
#include "model/DescribeVServerGroupsRequest.h"
#include "model/DescribeVServerGroupsResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/EnableHighDefinationMonitorRequest.h"
#include "model/EnableHighDefinationMonitorResult.h"
#include "model/ListTLSCipherPoliciesRequest.h"
#include "model/ListTLSCipherPoliciesResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyHighDefinationMonitorRequest.h"
#include "model/ModifyHighDefinationMonitorResult.h"
#include "model/ModifyLoadBalancerInstanceChargeTypeRequest.h"
#include "model/ModifyLoadBalancerInstanceChargeTypeResult.h"
#include "model/ModifyLoadBalancerInstanceSpecRequest.h"
#include "model/ModifyLoadBalancerInstanceSpecResult.h"
#include "model/ModifyLoadBalancerInternetSpecRequest.h"
#include "model/ModifyLoadBalancerInternetSpecResult.h"
#include "model/ModifyLoadBalancerPayTypeRequest.h"
#include "model/ModifyLoadBalancerPayTypeResult.h"
#include "model/ModifyVServerGroupBackendServersRequest.h"
#include "model/ModifyVServerGroupBackendServersResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/RemoveAccessControlListEntryRequest.h"
#include "model/RemoveAccessControlListEntryResult.h"
#include "model/RemoveBackendServersRequest.h"
#include "model/RemoveBackendServersResult.h"
#include "model/RemoveListenerWhiteListItemRequest.h"
#include "model/RemoveListenerWhiteListItemResult.h"
#include "model/RemoveTagsRequest.h"
#include "model/RemoveTagsResult.h"
#include "model/RemoveVServerGroupBackendServersRequest.h"
#include "model/RemoveVServerGroupBackendServersResult.h"
#include "model/SetAccessControlListAttributeRequest.h"
#include "model/SetAccessControlListAttributeResult.h"
#include "model/SetAccessLogsDownloadAttributeRequest.h"
#include "model/SetAccessLogsDownloadAttributeResult.h"
#include "model/SetBackendServersRequest.h"
#include "model/SetBackendServersResult.h"
#include "model/SetCACertificateNameRequest.h"
#include "model/SetCACertificateNameResult.h"
#include "model/SetDomainExtensionAttributeRequest.h"
#include "model/SetDomainExtensionAttributeResult.h"
#include "model/SetListenerAccessControlStatusRequest.h"
#include "model/SetListenerAccessControlStatusResult.h"
#include "model/SetLoadBalancerDeleteProtectionRequest.h"
#include "model/SetLoadBalancerDeleteProtectionResult.h"
#include "model/SetLoadBalancerHTTPListenerAttributeRequest.h"
#include "model/SetLoadBalancerHTTPListenerAttributeResult.h"
#include "model/SetLoadBalancerHTTPSListenerAttributeRequest.h"
#include "model/SetLoadBalancerHTTPSListenerAttributeResult.h"
#include "model/SetLoadBalancerModificationProtectionRequest.h"
#include "model/SetLoadBalancerModificationProtectionResult.h"
#include "model/SetLoadBalancerNameRequest.h"
#include "model/SetLoadBalancerNameResult.h"
#include "model/SetLoadBalancerStatusRequest.h"
#include "model/SetLoadBalancerStatusResult.h"
#include "model/SetLoadBalancerTCPListenerAttributeRequest.h"
#include "model/SetLoadBalancerTCPListenerAttributeResult.h"
#include "model/SetLoadBalancerUDPListenerAttributeRequest.h"
#include "model/SetLoadBalancerUDPListenerAttributeResult.h"
#include "model/SetRuleRequest.h"
#include "model/SetRuleResult.h"
#include "model/SetServerCertificateNameRequest.h"
#include "model/SetServerCertificateNameResult.h"
#include "model/SetTLSCipherPolicyAttributeRequest.h"
#include "model/SetTLSCipherPolicyAttributeResult.h"
#include "model/SetVServerGroupAttributeRequest.h"
#include "model/SetVServerGroupAttributeResult.h"
#include "model/StartLoadBalancerListenerRequest.h"
#include "model/StartLoadBalancerListenerResult.h"
#include "model/StopLoadBalancerListenerRequest.h"
#include "model/StopLoadBalancerListenerResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UploadCACertificateRequest.h"
#include "model/UploadCACertificateResult.h"
#include "model/UploadServerCertificateRequest.h"
#include "model/UploadServerCertificateResult.h"


namespace AlibabaCloud
{
	namespace Slb
	{
		class ALIBABACLOUD_SLB_EXPORT SlbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAccessControlListEntryResult> AddAccessControlListEntryOutcome;
			typedef std::future<AddAccessControlListEntryOutcome> AddAccessControlListEntryOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::AddAccessControlListEntryRequest&, const AddAccessControlListEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAccessControlListEntryAsyncHandler;
			typedef Outcome<Error, Model::AddBackendServersResult> AddBackendServersOutcome;
			typedef std::future<AddBackendServersOutcome> AddBackendServersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::AddBackendServersRequest&, const AddBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBackendServersAsyncHandler;
			typedef Outcome<Error, Model::AddListenerWhiteListItemResult> AddListenerWhiteListItemOutcome;
			typedef std::future<AddListenerWhiteListItemOutcome> AddListenerWhiteListItemOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::AddListenerWhiteListItemRequest&, const AddListenerWhiteListItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddListenerWhiteListItemAsyncHandler;
			typedef Outcome<Error, Model::AddTagsResult> AddTagsOutcome;
			typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::AddTagsRequest&, const AddTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagsAsyncHandler;
			typedef Outcome<Error, Model::AddVServerGroupBackendServersResult> AddVServerGroupBackendServersOutcome;
			typedef std::future<AddVServerGroupBackendServersOutcome> AddVServerGroupBackendServersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::AddVServerGroupBackendServersRequest&, const AddVServerGroupBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVServerGroupBackendServersAsyncHandler;
			typedef Outcome<Error, Model::CreateAccessControlListResult> CreateAccessControlListOutcome;
			typedef std::future<CreateAccessControlListOutcome> CreateAccessControlListOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateAccessControlListRequest&, const CreateAccessControlListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessControlListAsyncHandler;
			typedef Outcome<Error, Model::CreateDomainExtensionResult> CreateDomainExtensionOutcome;
			typedef std::future<CreateDomainExtensionOutcome> CreateDomainExtensionOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateDomainExtensionRequest&, const CreateDomainExtensionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainExtensionAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerResult> CreateLoadBalancerOutcome;
			typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateLoadBalancerRequest&, const CreateLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerHTTPListenerResult> CreateLoadBalancerHTTPListenerOutcome;
			typedef std::future<CreateLoadBalancerHTTPListenerOutcome> CreateLoadBalancerHTTPListenerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateLoadBalancerHTTPListenerRequest&, const CreateLoadBalancerHTTPListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerHTTPListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerHTTPSListenerResult> CreateLoadBalancerHTTPSListenerOutcome;
			typedef std::future<CreateLoadBalancerHTTPSListenerOutcome> CreateLoadBalancerHTTPSListenerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateLoadBalancerHTTPSListenerRequest&, const CreateLoadBalancerHTTPSListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerHTTPSListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerTCPListenerResult> CreateLoadBalancerTCPListenerOutcome;
			typedef std::future<CreateLoadBalancerTCPListenerOutcome> CreateLoadBalancerTCPListenerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateLoadBalancerTCPListenerRequest&, const CreateLoadBalancerTCPListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerTCPListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerUDPListenerResult> CreateLoadBalancerUDPListenerOutcome;
			typedef std::future<CreateLoadBalancerUDPListenerOutcome> CreateLoadBalancerUDPListenerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateLoadBalancerUDPListenerRequest&, const CreateLoadBalancerUDPListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerUDPListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateMasterSlaveServerGroupResult> CreateMasterSlaveServerGroupOutcome;
			typedef std::future<CreateMasterSlaveServerGroupOutcome> CreateMasterSlaveServerGroupOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateMasterSlaveServerGroupRequest&, const CreateMasterSlaveServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMasterSlaveServerGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateRulesResult> CreateRulesOutcome;
			typedef std::future<CreateRulesOutcome> CreateRulesOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateRulesRequest&, const CreateRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateTLSCipherPolicyResult> CreateTLSCipherPolicyOutcome;
			typedef std::future<CreateTLSCipherPolicyOutcome> CreateTLSCipherPolicyOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateTLSCipherPolicyRequest&, const CreateTLSCipherPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTLSCipherPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateVServerGroupResult> CreateVServerGroupOutcome;
			typedef std::future<CreateVServerGroupOutcome> CreateVServerGroupOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::CreateVServerGroupRequest&, const CreateVServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVServerGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessControlListResult> DeleteAccessControlListOutcome;
			typedef std::future<DeleteAccessControlListOutcome> DeleteAccessControlListOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteAccessControlListRequest&, const DeleteAccessControlListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessControlListAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessLogsDownloadAttributeResult> DeleteAccessLogsDownloadAttributeOutcome;
			typedef std::future<DeleteAccessLogsDownloadAttributeOutcome> DeleteAccessLogsDownloadAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteAccessLogsDownloadAttributeRequest&, const DeleteAccessLogsDownloadAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessLogsDownloadAttributeAsyncHandler;
			typedef Outcome<Error, Model::DeleteCACertificateResult> DeleteCACertificateOutcome;
			typedef std::future<DeleteCACertificateOutcome> DeleteCACertificateOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteCACertificateRequest&, const DeleteCACertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCACertificateAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainExtensionResult> DeleteDomainExtensionOutcome;
			typedef std::future<DeleteDomainExtensionOutcome> DeleteDomainExtensionOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteDomainExtensionRequest&, const DeleteDomainExtensionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainExtensionAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoadBalancerResult> DeleteLoadBalancerOutcome;
			typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteLoadBalancerRequest&, const DeleteLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoadBalancerListenerResult> DeleteLoadBalancerListenerOutcome;
			typedef std::future<DeleteLoadBalancerListenerOutcome> DeleteLoadBalancerListenerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteLoadBalancerListenerRequest&, const DeleteLoadBalancerListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerListenerAsyncHandler;
			typedef Outcome<Error, Model::DeleteMasterSlaveServerGroupResult> DeleteMasterSlaveServerGroupOutcome;
			typedef std::future<DeleteMasterSlaveServerGroupOutcome> DeleteMasterSlaveServerGroupOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteMasterSlaveServerGroupRequest&, const DeleteMasterSlaveServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMasterSlaveServerGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteRulesResult> DeleteRulesOutcome;
			typedef std::future<DeleteRulesOutcome> DeleteRulesOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteRulesRequest&, const DeleteRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteServerCertificateResult> DeleteServerCertificateOutcome;
			typedef std::future<DeleteServerCertificateOutcome> DeleteServerCertificateOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteServerCertificateRequest&, const DeleteServerCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerCertificateAsyncHandler;
			typedef Outcome<Error, Model::DeleteTLSCipherPolicyResult> DeleteTLSCipherPolicyOutcome;
			typedef std::future<DeleteTLSCipherPolicyOutcome> DeleteTLSCipherPolicyOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteTLSCipherPolicyRequest&, const DeleteTLSCipherPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTLSCipherPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteVServerGroupResult> DeleteVServerGroupOutcome;
			typedef std::future<DeleteVServerGroupOutcome> DeleteVServerGroupOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DeleteVServerGroupRequest&, const DeleteVServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVServerGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessControlListAttributeResult> DescribeAccessControlListAttributeOutcome;
			typedef std::future<DescribeAccessControlListAttributeOutcome> DescribeAccessControlListAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeAccessControlListAttributeRequest&, const DescribeAccessControlListAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessControlListAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessControlListsResult> DescribeAccessControlListsOutcome;
			typedef std::future<DescribeAccessControlListsOutcome> DescribeAccessControlListsOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeAccessControlListsRequest&, const DescribeAccessControlListsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessControlListsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessLogsDownloadAttributeResult> DescribeAccessLogsDownloadAttributeOutcome;
			typedef std::future<DescribeAccessLogsDownloadAttributeOutcome> DescribeAccessLogsDownloadAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeAccessLogsDownloadAttributeRequest&, const DescribeAccessLogsDownloadAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessLogsDownloadAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableResourceResult> DescribeAvailableResourceOutcome;
			typedef std::future<DescribeAvailableResourceOutcome> DescribeAvailableResourceOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeAvailableResourceRequest&, const DescribeAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeCACertificatesResult> DescribeCACertificatesOutcome;
			typedef std::future<DescribeCACertificatesOutcome> DescribeCACertificatesOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeCACertificatesRequest&, const DescribeCACertificatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCACertificatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainExtensionAttributeResult> DescribeDomainExtensionAttributeOutcome;
			typedef std::future<DescribeDomainExtensionAttributeOutcome> DescribeDomainExtensionAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeDomainExtensionAttributeRequest&, const DescribeDomainExtensionAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainExtensionAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainExtensionsResult> DescribeDomainExtensionsOutcome;
			typedef std::future<DescribeDomainExtensionsOutcome> DescribeDomainExtensionsOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeDomainExtensionsRequest&, const DescribeDomainExtensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainExtensionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeHealthStatusResult> DescribeHealthStatusOutcome;
			typedef std::future<DescribeHealthStatusOutcome> DescribeHealthStatusOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeHealthStatusRequest&, const DescribeHealthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeHighDefinationMonitorResult> DescribeHighDefinationMonitorOutcome;
			typedef std::future<DescribeHighDefinationMonitorOutcome> DescribeHighDefinationMonitorOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeHighDefinationMonitorRequest&, const DescribeHighDefinationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHighDefinationMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeListenerAccessControlAttributeResult> DescribeListenerAccessControlAttributeOutcome;
			typedef std::future<DescribeListenerAccessControlAttributeOutcome> DescribeListenerAccessControlAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeListenerAccessControlAttributeRequest&, const DescribeListenerAccessControlAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerAccessControlAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerAttributeResult> DescribeLoadBalancerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerAttributeOutcome> DescribeLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancerAttributeRequest&, const DescribeLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerHTTPListenerAttributeResult> DescribeLoadBalancerHTTPListenerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerHTTPListenerAttributeOutcome> DescribeLoadBalancerHTTPListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancerHTTPListenerAttributeRequest&, const DescribeLoadBalancerHTTPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerHTTPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerHTTPSListenerAttributeResult> DescribeLoadBalancerHTTPSListenerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerHTTPSListenerAttributeOutcome> DescribeLoadBalancerHTTPSListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancerHTTPSListenerAttributeRequest&, const DescribeLoadBalancerHTTPSListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerHTTPSListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerListenersResult> DescribeLoadBalancerListenersOutcome;
			typedef std::future<DescribeLoadBalancerListenersOutcome> DescribeLoadBalancerListenersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancerListenersRequest&, const DescribeLoadBalancerListenersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerListenersAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerTCPListenerAttributeResult> DescribeLoadBalancerTCPListenerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerTCPListenerAttributeOutcome> DescribeLoadBalancerTCPListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancerTCPListenerAttributeRequest&, const DescribeLoadBalancerTCPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerTCPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancerUDPListenerAttributeResult> DescribeLoadBalancerUDPListenerAttributeOutcome;
			typedef std::future<DescribeLoadBalancerUDPListenerAttributeOutcome> DescribeLoadBalancerUDPListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancerUDPListenerAttributeRequest&, const DescribeLoadBalancerUDPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerUDPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoadBalancersResult> DescribeLoadBalancersOutcome;
			typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeLoadBalancersRequest&, const DescribeLoadBalancersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
			typedef Outcome<Error, Model::DescribeMasterSlaveServerGroupAttributeResult> DescribeMasterSlaveServerGroupAttributeOutcome;
			typedef std::future<DescribeMasterSlaveServerGroupAttributeOutcome> DescribeMasterSlaveServerGroupAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeMasterSlaveServerGroupAttributeRequest&, const DescribeMasterSlaveServerGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMasterSlaveServerGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeMasterSlaveServerGroupsResult> DescribeMasterSlaveServerGroupsOutcome;
			typedef std::future<DescribeMasterSlaveServerGroupsOutcome> DescribeMasterSlaveServerGroupsOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeMasterSlaveServerGroupsRequest&, const DescribeMasterSlaveServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMasterSlaveServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRuleAttributeResult> DescribeRuleAttributeOutcome;
			typedef std::future<DescribeRuleAttributeOutcome> DescribeRuleAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeRuleAttributeRequest&, const DescribeRuleAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeRulesResult> DescribeRulesOutcome;
			typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeRulesRequest&, const DescribeRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeServerCertificatesResult> DescribeServerCertificatesOutcome;
			typedef std::future<DescribeServerCertificatesOutcome> DescribeServerCertificatesOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeServerCertificatesRequest&, const DescribeServerCertificatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerCertificatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVServerGroupAttributeResult> DescribeVServerGroupAttributeOutcome;
			typedef std::future<DescribeVServerGroupAttributeOutcome> DescribeVServerGroupAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeVServerGroupAttributeRequest&, const DescribeVServerGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVServerGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeVServerGroupsResult> DescribeVServerGroupsOutcome;
			typedef std::future<DescribeVServerGroupsOutcome> DescribeVServerGroupsOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeVServerGroupsRequest&, const DescribeVServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::EnableHighDefinationMonitorResult> EnableHighDefinationMonitorOutcome;
			typedef std::future<EnableHighDefinationMonitorOutcome> EnableHighDefinationMonitorOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::EnableHighDefinationMonitorRequest&, const EnableHighDefinationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableHighDefinationMonitorAsyncHandler;
			typedef Outcome<Error, Model::ListTLSCipherPoliciesResult> ListTLSCipherPoliciesOutcome;
			typedef std::future<ListTLSCipherPoliciesOutcome> ListTLSCipherPoliciesOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::ListTLSCipherPoliciesRequest&, const ListTLSCipherPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTLSCipherPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyHighDefinationMonitorResult> ModifyHighDefinationMonitorOutcome;
			typedef std::future<ModifyHighDefinationMonitorOutcome> ModifyHighDefinationMonitorOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::ModifyHighDefinationMonitorRequest&, const ModifyHighDefinationMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHighDefinationMonitorAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoadBalancerInstanceChargeTypeResult> ModifyLoadBalancerInstanceChargeTypeOutcome;
			typedef std::future<ModifyLoadBalancerInstanceChargeTypeOutcome> ModifyLoadBalancerInstanceChargeTypeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::ModifyLoadBalancerInstanceChargeTypeRequest&, const ModifyLoadBalancerInstanceChargeTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerInstanceChargeTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoadBalancerInstanceSpecResult> ModifyLoadBalancerInstanceSpecOutcome;
			typedef std::future<ModifyLoadBalancerInstanceSpecOutcome> ModifyLoadBalancerInstanceSpecOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::ModifyLoadBalancerInstanceSpecRequest&, const ModifyLoadBalancerInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoadBalancerInternetSpecResult> ModifyLoadBalancerInternetSpecOutcome;
			typedef std::future<ModifyLoadBalancerInternetSpecOutcome> ModifyLoadBalancerInternetSpecOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::ModifyLoadBalancerInternetSpecRequest&, const ModifyLoadBalancerInternetSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerInternetSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoadBalancerPayTypeResult> ModifyLoadBalancerPayTypeOutcome;
			typedef std::future<ModifyLoadBalancerPayTypeOutcome> ModifyLoadBalancerPayTypeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::ModifyLoadBalancerPayTypeRequest&, const ModifyLoadBalancerPayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerPayTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifyVServerGroupBackendServersResult> ModifyVServerGroupBackendServersOutcome;
			typedef std::future<ModifyVServerGroupBackendServersOutcome> ModifyVServerGroupBackendServersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::ModifyVServerGroupBackendServersRequest&, const ModifyVServerGroupBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVServerGroupBackendServersAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveAccessControlListEntryResult> RemoveAccessControlListEntryOutcome;
			typedef std::future<RemoveAccessControlListEntryOutcome> RemoveAccessControlListEntryOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::RemoveAccessControlListEntryRequest&, const RemoveAccessControlListEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAccessControlListEntryAsyncHandler;
			typedef Outcome<Error, Model::RemoveBackendServersResult> RemoveBackendServersOutcome;
			typedef std::future<RemoveBackendServersOutcome> RemoveBackendServersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::RemoveBackendServersRequest&, const RemoveBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBackendServersAsyncHandler;
			typedef Outcome<Error, Model::RemoveListenerWhiteListItemResult> RemoveListenerWhiteListItemOutcome;
			typedef std::future<RemoveListenerWhiteListItemOutcome> RemoveListenerWhiteListItemOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::RemoveListenerWhiteListItemRequest&, const RemoveListenerWhiteListItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveListenerWhiteListItemAsyncHandler;
			typedef Outcome<Error, Model::RemoveTagsResult> RemoveTagsOutcome;
			typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::RemoveTagsRequest&, const RemoveTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTagsAsyncHandler;
			typedef Outcome<Error, Model::RemoveVServerGroupBackendServersResult> RemoveVServerGroupBackendServersOutcome;
			typedef std::future<RemoveVServerGroupBackendServersOutcome> RemoveVServerGroupBackendServersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::RemoveVServerGroupBackendServersRequest&, const RemoveVServerGroupBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveVServerGroupBackendServersAsyncHandler;
			typedef Outcome<Error, Model::SetAccessControlListAttributeResult> SetAccessControlListAttributeOutcome;
			typedef std::future<SetAccessControlListAttributeOutcome> SetAccessControlListAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetAccessControlListAttributeRequest&, const SetAccessControlListAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAccessControlListAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetAccessLogsDownloadAttributeResult> SetAccessLogsDownloadAttributeOutcome;
			typedef std::future<SetAccessLogsDownloadAttributeOutcome> SetAccessLogsDownloadAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetAccessLogsDownloadAttributeRequest&, const SetAccessLogsDownloadAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAccessLogsDownloadAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetBackendServersResult> SetBackendServersOutcome;
			typedef std::future<SetBackendServersOutcome> SetBackendServersOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetBackendServersRequest&, const SetBackendServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetBackendServersAsyncHandler;
			typedef Outcome<Error, Model::SetCACertificateNameResult> SetCACertificateNameOutcome;
			typedef std::future<SetCACertificateNameOutcome> SetCACertificateNameOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetCACertificateNameRequest&, const SetCACertificateNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCACertificateNameAsyncHandler;
			typedef Outcome<Error, Model::SetDomainExtensionAttributeResult> SetDomainExtensionAttributeOutcome;
			typedef std::future<SetDomainExtensionAttributeOutcome> SetDomainExtensionAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetDomainExtensionAttributeRequest&, const SetDomainExtensionAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainExtensionAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetListenerAccessControlStatusResult> SetListenerAccessControlStatusOutcome;
			typedef std::future<SetListenerAccessControlStatusOutcome> SetListenerAccessControlStatusOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetListenerAccessControlStatusRequest&, const SetListenerAccessControlStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetListenerAccessControlStatusAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerDeleteProtectionResult> SetLoadBalancerDeleteProtectionOutcome;
			typedef std::future<SetLoadBalancerDeleteProtectionOutcome> SetLoadBalancerDeleteProtectionOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerDeleteProtectionRequest&, const SetLoadBalancerDeleteProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerDeleteProtectionAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerHTTPListenerAttributeResult> SetLoadBalancerHTTPListenerAttributeOutcome;
			typedef std::future<SetLoadBalancerHTTPListenerAttributeOutcome> SetLoadBalancerHTTPListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerHTTPListenerAttributeRequest&, const SetLoadBalancerHTTPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerHTTPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerHTTPSListenerAttributeResult> SetLoadBalancerHTTPSListenerAttributeOutcome;
			typedef std::future<SetLoadBalancerHTTPSListenerAttributeOutcome> SetLoadBalancerHTTPSListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerHTTPSListenerAttributeRequest&, const SetLoadBalancerHTTPSListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerHTTPSListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerModificationProtectionResult> SetLoadBalancerModificationProtectionOutcome;
			typedef std::future<SetLoadBalancerModificationProtectionOutcome> SetLoadBalancerModificationProtectionOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerModificationProtectionRequest&, const SetLoadBalancerModificationProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerModificationProtectionAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerNameResult> SetLoadBalancerNameOutcome;
			typedef std::future<SetLoadBalancerNameOutcome> SetLoadBalancerNameOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerNameRequest&, const SetLoadBalancerNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerNameAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerStatusResult> SetLoadBalancerStatusOutcome;
			typedef std::future<SetLoadBalancerStatusOutcome> SetLoadBalancerStatusOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerStatusRequest&, const SetLoadBalancerStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerStatusAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerTCPListenerAttributeResult> SetLoadBalancerTCPListenerAttributeOutcome;
			typedef std::future<SetLoadBalancerTCPListenerAttributeOutcome> SetLoadBalancerTCPListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerTCPListenerAttributeRequest&, const SetLoadBalancerTCPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerTCPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetLoadBalancerUDPListenerAttributeResult> SetLoadBalancerUDPListenerAttributeOutcome;
			typedef std::future<SetLoadBalancerUDPListenerAttributeOutcome> SetLoadBalancerUDPListenerAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetLoadBalancerUDPListenerAttributeRequest&, const SetLoadBalancerUDPListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerUDPListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetRuleResult> SetRuleOutcome;
			typedef std::future<SetRuleOutcome> SetRuleOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetRuleRequest&, const SetRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRuleAsyncHandler;
			typedef Outcome<Error, Model::SetServerCertificateNameResult> SetServerCertificateNameOutcome;
			typedef std::future<SetServerCertificateNameOutcome> SetServerCertificateNameOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetServerCertificateNameRequest&, const SetServerCertificateNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetServerCertificateNameAsyncHandler;
			typedef Outcome<Error, Model::SetTLSCipherPolicyAttributeResult> SetTLSCipherPolicyAttributeOutcome;
			typedef std::future<SetTLSCipherPolicyAttributeOutcome> SetTLSCipherPolicyAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetTLSCipherPolicyAttributeRequest&, const SetTLSCipherPolicyAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetTLSCipherPolicyAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetVServerGroupAttributeResult> SetVServerGroupAttributeOutcome;
			typedef std::future<SetVServerGroupAttributeOutcome> SetVServerGroupAttributeOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::SetVServerGroupAttributeRequest&, const SetVServerGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetVServerGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::StartLoadBalancerListenerResult> StartLoadBalancerListenerOutcome;
			typedef std::future<StartLoadBalancerListenerOutcome> StartLoadBalancerListenerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::StartLoadBalancerListenerRequest&, const StartLoadBalancerListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLoadBalancerListenerAsyncHandler;
			typedef Outcome<Error, Model::StopLoadBalancerListenerResult> StopLoadBalancerListenerOutcome;
			typedef std::future<StopLoadBalancerListenerOutcome> StopLoadBalancerListenerOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::StopLoadBalancerListenerRequest&, const StopLoadBalancerListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLoadBalancerListenerAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UploadCACertificateResult> UploadCACertificateOutcome;
			typedef std::future<UploadCACertificateOutcome> UploadCACertificateOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::UploadCACertificateRequest&, const UploadCACertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadCACertificateAsyncHandler;
			typedef Outcome<Error, Model::UploadServerCertificateResult> UploadServerCertificateOutcome;
			typedef std::future<UploadServerCertificateOutcome> UploadServerCertificateOutcomeCallable;
			typedef std::function<void(const SlbClient*, const Model::UploadServerCertificateRequest&, const UploadServerCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadServerCertificateAsyncHandler;

			SlbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SlbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SlbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SlbClient();
			AddAccessControlListEntryOutcome addAccessControlListEntry(const Model::AddAccessControlListEntryRequest &request)const;
			void addAccessControlListEntryAsync(const Model::AddAccessControlListEntryRequest& request, const AddAccessControlListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAccessControlListEntryOutcomeCallable addAccessControlListEntryCallable(const Model::AddAccessControlListEntryRequest& request) const;
			AddBackendServersOutcome addBackendServers(const Model::AddBackendServersRequest &request)const;
			void addBackendServersAsync(const Model::AddBackendServersRequest& request, const AddBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBackendServersOutcomeCallable addBackendServersCallable(const Model::AddBackendServersRequest& request) const;
			AddListenerWhiteListItemOutcome addListenerWhiteListItem(const Model::AddListenerWhiteListItemRequest &request)const;
			void addListenerWhiteListItemAsync(const Model::AddListenerWhiteListItemRequest& request, const AddListenerWhiteListItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddListenerWhiteListItemOutcomeCallable addListenerWhiteListItemCallable(const Model::AddListenerWhiteListItemRequest& request) const;
			AddTagsOutcome addTags(const Model::AddTagsRequest &request)const;
			void addTagsAsync(const Model::AddTagsRequest& request, const AddTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagsOutcomeCallable addTagsCallable(const Model::AddTagsRequest& request) const;
			AddVServerGroupBackendServersOutcome addVServerGroupBackendServers(const Model::AddVServerGroupBackendServersRequest &request)const;
			void addVServerGroupBackendServersAsync(const Model::AddVServerGroupBackendServersRequest& request, const AddVServerGroupBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVServerGroupBackendServersOutcomeCallable addVServerGroupBackendServersCallable(const Model::AddVServerGroupBackendServersRequest& request) const;
			CreateAccessControlListOutcome createAccessControlList(const Model::CreateAccessControlListRequest &request)const;
			void createAccessControlListAsync(const Model::CreateAccessControlListRequest& request, const CreateAccessControlListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccessControlListOutcomeCallable createAccessControlListCallable(const Model::CreateAccessControlListRequest& request) const;
			CreateDomainExtensionOutcome createDomainExtension(const Model::CreateDomainExtensionRequest &request)const;
			void createDomainExtensionAsync(const Model::CreateDomainExtensionRequest& request, const CreateDomainExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDomainExtensionOutcomeCallable createDomainExtensionCallable(const Model::CreateDomainExtensionRequest& request) const;
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
			CreateMasterSlaveServerGroupOutcome createMasterSlaveServerGroup(const Model::CreateMasterSlaveServerGroupRequest &request)const;
			void createMasterSlaveServerGroupAsync(const Model::CreateMasterSlaveServerGroupRequest& request, const CreateMasterSlaveServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMasterSlaveServerGroupOutcomeCallable createMasterSlaveServerGroupCallable(const Model::CreateMasterSlaveServerGroupRequest& request) const;
			CreateRulesOutcome createRules(const Model::CreateRulesRequest &request)const;
			void createRulesAsync(const Model::CreateRulesRequest& request, const CreateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRulesOutcomeCallable createRulesCallable(const Model::CreateRulesRequest& request) const;
			CreateTLSCipherPolicyOutcome createTLSCipherPolicy(const Model::CreateTLSCipherPolicyRequest &request)const;
			void createTLSCipherPolicyAsync(const Model::CreateTLSCipherPolicyRequest& request, const CreateTLSCipherPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTLSCipherPolicyOutcomeCallable createTLSCipherPolicyCallable(const Model::CreateTLSCipherPolicyRequest& request) const;
			CreateVServerGroupOutcome createVServerGroup(const Model::CreateVServerGroupRequest &request)const;
			void createVServerGroupAsync(const Model::CreateVServerGroupRequest& request, const CreateVServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVServerGroupOutcomeCallable createVServerGroupCallable(const Model::CreateVServerGroupRequest& request) const;
			DeleteAccessControlListOutcome deleteAccessControlList(const Model::DeleteAccessControlListRequest &request)const;
			void deleteAccessControlListAsync(const Model::DeleteAccessControlListRequest& request, const DeleteAccessControlListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessControlListOutcomeCallable deleteAccessControlListCallable(const Model::DeleteAccessControlListRequest& request) const;
			DeleteAccessLogsDownloadAttributeOutcome deleteAccessLogsDownloadAttribute(const Model::DeleteAccessLogsDownloadAttributeRequest &request)const;
			void deleteAccessLogsDownloadAttributeAsync(const Model::DeleteAccessLogsDownloadAttributeRequest& request, const DeleteAccessLogsDownloadAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessLogsDownloadAttributeOutcomeCallable deleteAccessLogsDownloadAttributeCallable(const Model::DeleteAccessLogsDownloadAttributeRequest& request) const;
			DeleteCACertificateOutcome deleteCACertificate(const Model::DeleteCACertificateRequest &request)const;
			void deleteCACertificateAsync(const Model::DeleteCACertificateRequest& request, const DeleteCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCACertificateOutcomeCallable deleteCACertificateCallable(const Model::DeleteCACertificateRequest& request) const;
			DeleteDomainExtensionOutcome deleteDomainExtension(const Model::DeleteDomainExtensionRequest &request)const;
			void deleteDomainExtensionAsync(const Model::DeleteDomainExtensionRequest& request, const DeleteDomainExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainExtensionOutcomeCallable deleteDomainExtensionCallable(const Model::DeleteDomainExtensionRequest& request) const;
			DeleteLoadBalancerOutcome deleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request)const;
			void deleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoadBalancerOutcomeCallable deleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;
			DeleteLoadBalancerListenerOutcome deleteLoadBalancerListener(const Model::DeleteLoadBalancerListenerRequest &request)const;
			void deleteLoadBalancerListenerAsync(const Model::DeleteLoadBalancerListenerRequest& request, const DeleteLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoadBalancerListenerOutcomeCallable deleteLoadBalancerListenerCallable(const Model::DeleteLoadBalancerListenerRequest& request) const;
			DeleteMasterSlaveServerGroupOutcome deleteMasterSlaveServerGroup(const Model::DeleteMasterSlaveServerGroupRequest &request)const;
			void deleteMasterSlaveServerGroupAsync(const Model::DeleteMasterSlaveServerGroupRequest& request, const DeleteMasterSlaveServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMasterSlaveServerGroupOutcomeCallable deleteMasterSlaveServerGroupCallable(const Model::DeleteMasterSlaveServerGroupRequest& request) const;
			DeleteRulesOutcome deleteRules(const Model::DeleteRulesRequest &request)const;
			void deleteRulesAsync(const Model::DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRulesOutcomeCallable deleteRulesCallable(const Model::DeleteRulesRequest& request) const;
			DeleteServerCertificateOutcome deleteServerCertificate(const Model::DeleteServerCertificateRequest &request)const;
			void deleteServerCertificateAsync(const Model::DeleteServerCertificateRequest& request, const DeleteServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServerCertificateOutcomeCallable deleteServerCertificateCallable(const Model::DeleteServerCertificateRequest& request) const;
			DeleteTLSCipherPolicyOutcome deleteTLSCipherPolicy(const Model::DeleteTLSCipherPolicyRequest &request)const;
			void deleteTLSCipherPolicyAsync(const Model::DeleteTLSCipherPolicyRequest& request, const DeleteTLSCipherPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTLSCipherPolicyOutcomeCallable deleteTLSCipherPolicyCallable(const Model::DeleteTLSCipherPolicyRequest& request) const;
			DeleteVServerGroupOutcome deleteVServerGroup(const Model::DeleteVServerGroupRequest &request)const;
			void deleteVServerGroupAsync(const Model::DeleteVServerGroupRequest& request, const DeleteVServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVServerGroupOutcomeCallable deleteVServerGroupCallable(const Model::DeleteVServerGroupRequest& request) const;
			DescribeAccessControlListAttributeOutcome describeAccessControlListAttribute(const Model::DescribeAccessControlListAttributeRequest &request)const;
			void describeAccessControlListAttributeAsync(const Model::DescribeAccessControlListAttributeRequest& request, const DescribeAccessControlListAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessControlListAttributeOutcomeCallable describeAccessControlListAttributeCallable(const Model::DescribeAccessControlListAttributeRequest& request) const;
			DescribeAccessControlListsOutcome describeAccessControlLists(const Model::DescribeAccessControlListsRequest &request)const;
			void describeAccessControlListsAsync(const Model::DescribeAccessControlListsRequest& request, const DescribeAccessControlListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessControlListsOutcomeCallable describeAccessControlListsCallable(const Model::DescribeAccessControlListsRequest& request) const;
			DescribeAccessLogsDownloadAttributeOutcome describeAccessLogsDownloadAttribute(const Model::DescribeAccessLogsDownloadAttributeRequest &request)const;
			void describeAccessLogsDownloadAttributeAsync(const Model::DescribeAccessLogsDownloadAttributeRequest& request, const DescribeAccessLogsDownloadAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessLogsDownloadAttributeOutcomeCallable describeAccessLogsDownloadAttributeCallable(const Model::DescribeAccessLogsDownloadAttributeRequest& request) const;
			DescribeAvailableResourceOutcome describeAvailableResource(const Model::DescribeAvailableResourceRequest &request)const;
			void describeAvailableResourceAsync(const Model::DescribeAvailableResourceRequest& request, const DescribeAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableResourceOutcomeCallable describeAvailableResourceCallable(const Model::DescribeAvailableResourceRequest& request) const;
			DescribeCACertificatesOutcome describeCACertificates(const Model::DescribeCACertificatesRequest &request)const;
			void describeCACertificatesAsync(const Model::DescribeCACertificatesRequest& request, const DescribeCACertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCACertificatesOutcomeCallable describeCACertificatesCallable(const Model::DescribeCACertificatesRequest& request) const;
			DescribeDomainExtensionAttributeOutcome describeDomainExtensionAttribute(const Model::DescribeDomainExtensionAttributeRequest &request)const;
			void describeDomainExtensionAttributeAsync(const Model::DescribeDomainExtensionAttributeRequest& request, const DescribeDomainExtensionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainExtensionAttributeOutcomeCallable describeDomainExtensionAttributeCallable(const Model::DescribeDomainExtensionAttributeRequest& request) const;
			DescribeDomainExtensionsOutcome describeDomainExtensions(const Model::DescribeDomainExtensionsRequest &request)const;
			void describeDomainExtensionsAsync(const Model::DescribeDomainExtensionsRequest& request, const DescribeDomainExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainExtensionsOutcomeCallable describeDomainExtensionsCallable(const Model::DescribeDomainExtensionsRequest& request) const;
			DescribeHealthStatusOutcome describeHealthStatus(const Model::DescribeHealthStatusRequest &request)const;
			void describeHealthStatusAsync(const Model::DescribeHealthStatusRequest& request, const DescribeHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHealthStatusOutcomeCallable describeHealthStatusCallable(const Model::DescribeHealthStatusRequest& request) const;
			DescribeHighDefinationMonitorOutcome describeHighDefinationMonitor(const Model::DescribeHighDefinationMonitorRequest &request)const;
			void describeHighDefinationMonitorAsync(const Model::DescribeHighDefinationMonitorRequest& request, const DescribeHighDefinationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHighDefinationMonitorOutcomeCallable describeHighDefinationMonitorCallable(const Model::DescribeHighDefinationMonitorRequest& request) const;
			DescribeListenerAccessControlAttributeOutcome describeListenerAccessControlAttribute(const Model::DescribeListenerAccessControlAttributeRequest &request)const;
			void describeListenerAccessControlAttributeAsync(const Model::DescribeListenerAccessControlAttributeRequest& request, const DescribeListenerAccessControlAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeListenerAccessControlAttributeOutcomeCallable describeListenerAccessControlAttributeCallable(const Model::DescribeListenerAccessControlAttributeRequest& request) const;
			DescribeLoadBalancerAttributeOutcome describeLoadBalancerAttribute(const Model::DescribeLoadBalancerAttributeRequest &request)const;
			void describeLoadBalancerAttributeAsync(const Model::DescribeLoadBalancerAttributeRequest& request, const DescribeLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerAttributeOutcomeCallable describeLoadBalancerAttributeCallable(const Model::DescribeLoadBalancerAttributeRequest& request) const;
			DescribeLoadBalancerHTTPListenerAttributeOutcome describeLoadBalancerHTTPListenerAttribute(const Model::DescribeLoadBalancerHTTPListenerAttributeRequest &request)const;
			void describeLoadBalancerHTTPListenerAttributeAsync(const Model::DescribeLoadBalancerHTTPListenerAttributeRequest& request, const DescribeLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerHTTPListenerAttributeOutcomeCallable describeLoadBalancerHTTPListenerAttributeCallable(const Model::DescribeLoadBalancerHTTPListenerAttributeRequest& request) const;
			DescribeLoadBalancerHTTPSListenerAttributeOutcome describeLoadBalancerHTTPSListenerAttribute(const Model::DescribeLoadBalancerHTTPSListenerAttributeRequest &request)const;
			void describeLoadBalancerHTTPSListenerAttributeAsync(const Model::DescribeLoadBalancerHTTPSListenerAttributeRequest& request, const DescribeLoadBalancerHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerHTTPSListenerAttributeOutcomeCallable describeLoadBalancerHTTPSListenerAttributeCallable(const Model::DescribeLoadBalancerHTTPSListenerAttributeRequest& request) const;
			DescribeLoadBalancerListenersOutcome describeLoadBalancerListeners(const Model::DescribeLoadBalancerListenersRequest &request)const;
			void describeLoadBalancerListenersAsync(const Model::DescribeLoadBalancerListenersRequest& request, const DescribeLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerListenersOutcomeCallable describeLoadBalancerListenersCallable(const Model::DescribeLoadBalancerListenersRequest& request) const;
			DescribeLoadBalancerTCPListenerAttributeOutcome describeLoadBalancerTCPListenerAttribute(const Model::DescribeLoadBalancerTCPListenerAttributeRequest &request)const;
			void describeLoadBalancerTCPListenerAttributeAsync(const Model::DescribeLoadBalancerTCPListenerAttributeRequest& request, const DescribeLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerTCPListenerAttributeOutcomeCallable describeLoadBalancerTCPListenerAttributeCallable(const Model::DescribeLoadBalancerTCPListenerAttributeRequest& request) const;
			DescribeLoadBalancerUDPListenerAttributeOutcome describeLoadBalancerUDPListenerAttribute(const Model::DescribeLoadBalancerUDPListenerAttributeRequest &request)const;
			void describeLoadBalancerUDPListenerAttributeAsync(const Model::DescribeLoadBalancerUDPListenerAttributeRequest& request, const DescribeLoadBalancerUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancerUDPListenerAttributeOutcomeCallable describeLoadBalancerUDPListenerAttributeCallable(const Model::DescribeLoadBalancerUDPListenerAttributeRequest& request) const;
			DescribeLoadBalancersOutcome describeLoadBalancers(const Model::DescribeLoadBalancersRequest &request)const;
			void describeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoadBalancersOutcomeCallable describeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request) const;
			DescribeMasterSlaveServerGroupAttributeOutcome describeMasterSlaveServerGroupAttribute(const Model::DescribeMasterSlaveServerGroupAttributeRequest &request)const;
			void describeMasterSlaveServerGroupAttributeAsync(const Model::DescribeMasterSlaveServerGroupAttributeRequest& request, const DescribeMasterSlaveServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMasterSlaveServerGroupAttributeOutcomeCallable describeMasterSlaveServerGroupAttributeCallable(const Model::DescribeMasterSlaveServerGroupAttributeRequest& request) const;
			DescribeMasterSlaveServerGroupsOutcome describeMasterSlaveServerGroups(const Model::DescribeMasterSlaveServerGroupsRequest &request)const;
			void describeMasterSlaveServerGroupsAsync(const Model::DescribeMasterSlaveServerGroupsRequest& request, const DescribeMasterSlaveServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMasterSlaveServerGroupsOutcomeCallable describeMasterSlaveServerGroupsCallable(const Model::DescribeMasterSlaveServerGroupsRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRuleAttributeOutcome describeRuleAttribute(const Model::DescribeRuleAttributeRequest &request)const;
			void describeRuleAttributeAsync(const Model::DescribeRuleAttributeRequest& request, const DescribeRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRuleAttributeOutcomeCallable describeRuleAttributeCallable(const Model::DescribeRuleAttributeRequest& request) const;
			DescribeRulesOutcome describeRules(const Model::DescribeRulesRequest &request)const;
			void describeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRulesOutcomeCallable describeRulesCallable(const Model::DescribeRulesRequest& request) const;
			DescribeServerCertificatesOutcome describeServerCertificates(const Model::DescribeServerCertificatesRequest &request)const;
			void describeServerCertificatesAsync(const Model::DescribeServerCertificatesRequest& request, const DescribeServerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServerCertificatesOutcomeCallable describeServerCertificatesCallable(const Model::DescribeServerCertificatesRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DescribeVServerGroupAttributeOutcome describeVServerGroupAttribute(const Model::DescribeVServerGroupAttributeRequest &request)const;
			void describeVServerGroupAttributeAsync(const Model::DescribeVServerGroupAttributeRequest& request, const DescribeVServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVServerGroupAttributeOutcomeCallable describeVServerGroupAttributeCallable(const Model::DescribeVServerGroupAttributeRequest& request) const;
			DescribeVServerGroupsOutcome describeVServerGroups(const Model::DescribeVServerGroupsRequest &request)const;
			void describeVServerGroupsAsync(const Model::DescribeVServerGroupsRequest& request, const DescribeVServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVServerGroupsOutcomeCallable describeVServerGroupsCallable(const Model::DescribeVServerGroupsRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			EnableHighDefinationMonitorOutcome enableHighDefinationMonitor(const Model::EnableHighDefinationMonitorRequest &request)const;
			void enableHighDefinationMonitorAsync(const Model::EnableHighDefinationMonitorRequest& request, const EnableHighDefinationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableHighDefinationMonitorOutcomeCallable enableHighDefinationMonitorCallable(const Model::EnableHighDefinationMonitorRequest& request) const;
			ListTLSCipherPoliciesOutcome listTLSCipherPolicies(const Model::ListTLSCipherPoliciesRequest &request)const;
			void listTLSCipherPoliciesAsync(const Model::ListTLSCipherPoliciesRequest& request, const ListTLSCipherPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTLSCipherPoliciesOutcomeCallable listTLSCipherPoliciesCallable(const Model::ListTLSCipherPoliciesRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyHighDefinationMonitorOutcome modifyHighDefinationMonitor(const Model::ModifyHighDefinationMonitorRequest &request)const;
			void modifyHighDefinationMonitorAsync(const Model::ModifyHighDefinationMonitorRequest& request, const ModifyHighDefinationMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHighDefinationMonitorOutcomeCallable modifyHighDefinationMonitorCallable(const Model::ModifyHighDefinationMonitorRequest& request) const;
			ModifyLoadBalancerInstanceChargeTypeOutcome modifyLoadBalancerInstanceChargeType(const Model::ModifyLoadBalancerInstanceChargeTypeRequest &request)const;
			void modifyLoadBalancerInstanceChargeTypeAsync(const Model::ModifyLoadBalancerInstanceChargeTypeRequest& request, const ModifyLoadBalancerInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoadBalancerInstanceChargeTypeOutcomeCallable modifyLoadBalancerInstanceChargeTypeCallable(const Model::ModifyLoadBalancerInstanceChargeTypeRequest& request) const;
			ModifyLoadBalancerInstanceSpecOutcome modifyLoadBalancerInstanceSpec(const Model::ModifyLoadBalancerInstanceSpecRequest &request)const;
			void modifyLoadBalancerInstanceSpecAsync(const Model::ModifyLoadBalancerInstanceSpecRequest& request, const ModifyLoadBalancerInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoadBalancerInstanceSpecOutcomeCallable modifyLoadBalancerInstanceSpecCallable(const Model::ModifyLoadBalancerInstanceSpecRequest& request) const;
			ModifyLoadBalancerInternetSpecOutcome modifyLoadBalancerInternetSpec(const Model::ModifyLoadBalancerInternetSpecRequest &request)const;
			void modifyLoadBalancerInternetSpecAsync(const Model::ModifyLoadBalancerInternetSpecRequest& request, const ModifyLoadBalancerInternetSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoadBalancerInternetSpecOutcomeCallable modifyLoadBalancerInternetSpecCallable(const Model::ModifyLoadBalancerInternetSpecRequest& request) const;
			ModifyLoadBalancerPayTypeOutcome modifyLoadBalancerPayType(const Model::ModifyLoadBalancerPayTypeRequest &request)const;
			void modifyLoadBalancerPayTypeAsync(const Model::ModifyLoadBalancerPayTypeRequest& request, const ModifyLoadBalancerPayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoadBalancerPayTypeOutcomeCallable modifyLoadBalancerPayTypeCallable(const Model::ModifyLoadBalancerPayTypeRequest& request) const;
			ModifyVServerGroupBackendServersOutcome modifyVServerGroupBackendServers(const Model::ModifyVServerGroupBackendServersRequest &request)const;
			void modifyVServerGroupBackendServersAsync(const Model::ModifyVServerGroupBackendServersRequest& request, const ModifyVServerGroupBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVServerGroupBackendServersOutcomeCallable modifyVServerGroupBackendServersCallable(const Model::ModifyVServerGroupBackendServersRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			RemoveAccessControlListEntryOutcome removeAccessControlListEntry(const Model::RemoveAccessControlListEntryRequest &request)const;
			void removeAccessControlListEntryAsync(const Model::RemoveAccessControlListEntryRequest& request, const RemoveAccessControlListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveAccessControlListEntryOutcomeCallable removeAccessControlListEntryCallable(const Model::RemoveAccessControlListEntryRequest& request) const;
			RemoveBackendServersOutcome removeBackendServers(const Model::RemoveBackendServersRequest &request)const;
			void removeBackendServersAsync(const Model::RemoveBackendServersRequest& request, const RemoveBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveBackendServersOutcomeCallable removeBackendServersCallable(const Model::RemoveBackendServersRequest& request) const;
			RemoveListenerWhiteListItemOutcome removeListenerWhiteListItem(const Model::RemoveListenerWhiteListItemRequest &request)const;
			void removeListenerWhiteListItemAsync(const Model::RemoveListenerWhiteListItemRequest& request, const RemoveListenerWhiteListItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveListenerWhiteListItemOutcomeCallable removeListenerWhiteListItemCallable(const Model::RemoveListenerWhiteListItemRequest& request) const;
			RemoveTagsOutcome removeTags(const Model::RemoveTagsRequest &request)const;
			void removeTagsAsync(const Model::RemoveTagsRequest& request, const RemoveTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTagsOutcomeCallable removeTagsCallable(const Model::RemoveTagsRequest& request) const;
			RemoveVServerGroupBackendServersOutcome removeVServerGroupBackendServers(const Model::RemoveVServerGroupBackendServersRequest &request)const;
			void removeVServerGroupBackendServersAsync(const Model::RemoveVServerGroupBackendServersRequest& request, const RemoveVServerGroupBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveVServerGroupBackendServersOutcomeCallable removeVServerGroupBackendServersCallable(const Model::RemoveVServerGroupBackendServersRequest& request) const;
			SetAccessControlListAttributeOutcome setAccessControlListAttribute(const Model::SetAccessControlListAttributeRequest &request)const;
			void setAccessControlListAttributeAsync(const Model::SetAccessControlListAttributeRequest& request, const SetAccessControlListAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAccessControlListAttributeOutcomeCallable setAccessControlListAttributeCallable(const Model::SetAccessControlListAttributeRequest& request) const;
			SetAccessLogsDownloadAttributeOutcome setAccessLogsDownloadAttribute(const Model::SetAccessLogsDownloadAttributeRequest &request)const;
			void setAccessLogsDownloadAttributeAsync(const Model::SetAccessLogsDownloadAttributeRequest& request, const SetAccessLogsDownloadAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAccessLogsDownloadAttributeOutcomeCallable setAccessLogsDownloadAttributeCallable(const Model::SetAccessLogsDownloadAttributeRequest& request) const;
			SetBackendServersOutcome setBackendServers(const Model::SetBackendServersRequest &request)const;
			void setBackendServersAsync(const Model::SetBackendServersRequest& request, const SetBackendServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetBackendServersOutcomeCallable setBackendServersCallable(const Model::SetBackendServersRequest& request) const;
			SetCACertificateNameOutcome setCACertificateName(const Model::SetCACertificateNameRequest &request)const;
			void setCACertificateNameAsync(const Model::SetCACertificateNameRequest& request, const SetCACertificateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCACertificateNameOutcomeCallable setCACertificateNameCallable(const Model::SetCACertificateNameRequest& request) const;
			SetDomainExtensionAttributeOutcome setDomainExtensionAttribute(const Model::SetDomainExtensionAttributeRequest &request)const;
			void setDomainExtensionAttributeAsync(const Model::SetDomainExtensionAttributeRequest& request, const SetDomainExtensionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDomainExtensionAttributeOutcomeCallable setDomainExtensionAttributeCallable(const Model::SetDomainExtensionAttributeRequest& request) const;
			SetListenerAccessControlStatusOutcome setListenerAccessControlStatus(const Model::SetListenerAccessControlStatusRequest &request)const;
			void setListenerAccessControlStatusAsync(const Model::SetListenerAccessControlStatusRequest& request, const SetListenerAccessControlStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetListenerAccessControlStatusOutcomeCallable setListenerAccessControlStatusCallable(const Model::SetListenerAccessControlStatusRequest& request) const;
			SetLoadBalancerDeleteProtectionOutcome setLoadBalancerDeleteProtection(const Model::SetLoadBalancerDeleteProtectionRequest &request)const;
			void setLoadBalancerDeleteProtectionAsync(const Model::SetLoadBalancerDeleteProtectionRequest& request, const SetLoadBalancerDeleteProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerDeleteProtectionOutcomeCallable setLoadBalancerDeleteProtectionCallable(const Model::SetLoadBalancerDeleteProtectionRequest& request) const;
			SetLoadBalancerHTTPListenerAttributeOutcome setLoadBalancerHTTPListenerAttribute(const Model::SetLoadBalancerHTTPListenerAttributeRequest &request)const;
			void setLoadBalancerHTTPListenerAttributeAsync(const Model::SetLoadBalancerHTTPListenerAttributeRequest& request, const SetLoadBalancerHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerHTTPListenerAttributeOutcomeCallable setLoadBalancerHTTPListenerAttributeCallable(const Model::SetLoadBalancerHTTPListenerAttributeRequest& request) const;
			SetLoadBalancerHTTPSListenerAttributeOutcome setLoadBalancerHTTPSListenerAttribute(const Model::SetLoadBalancerHTTPSListenerAttributeRequest &request)const;
			void setLoadBalancerHTTPSListenerAttributeAsync(const Model::SetLoadBalancerHTTPSListenerAttributeRequest& request, const SetLoadBalancerHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerHTTPSListenerAttributeOutcomeCallable setLoadBalancerHTTPSListenerAttributeCallable(const Model::SetLoadBalancerHTTPSListenerAttributeRequest& request) const;
			SetLoadBalancerModificationProtectionOutcome setLoadBalancerModificationProtection(const Model::SetLoadBalancerModificationProtectionRequest &request)const;
			void setLoadBalancerModificationProtectionAsync(const Model::SetLoadBalancerModificationProtectionRequest& request, const SetLoadBalancerModificationProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerModificationProtectionOutcomeCallable setLoadBalancerModificationProtectionCallable(const Model::SetLoadBalancerModificationProtectionRequest& request) const;
			SetLoadBalancerNameOutcome setLoadBalancerName(const Model::SetLoadBalancerNameRequest &request)const;
			void setLoadBalancerNameAsync(const Model::SetLoadBalancerNameRequest& request, const SetLoadBalancerNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerNameOutcomeCallable setLoadBalancerNameCallable(const Model::SetLoadBalancerNameRequest& request) const;
			SetLoadBalancerStatusOutcome setLoadBalancerStatus(const Model::SetLoadBalancerStatusRequest &request)const;
			void setLoadBalancerStatusAsync(const Model::SetLoadBalancerStatusRequest& request, const SetLoadBalancerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerStatusOutcomeCallable setLoadBalancerStatusCallable(const Model::SetLoadBalancerStatusRequest& request) const;
			SetLoadBalancerTCPListenerAttributeOutcome setLoadBalancerTCPListenerAttribute(const Model::SetLoadBalancerTCPListenerAttributeRequest &request)const;
			void setLoadBalancerTCPListenerAttributeAsync(const Model::SetLoadBalancerTCPListenerAttributeRequest& request, const SetLoadBalancerTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerTCPListenerAttributeOutcomeCallable setLoadBalancerTCPListenerAttributeCallable(const Model::SetLoadBalancerTCPListenerAttributeRequest& request) const;
			SetLoadBalancerUDPListenerAttributeOutcome setLoadBalancerUDPListenerAttribute(const Model::SetLoadBalancerUDPListenerAttributeRequest &request)const;
			void setLoadBalancerUDPListenerAttributeAsync(const Model::SetLoadBalancerUDPListenerAttributeRequest& request, const SetLoadBalancerUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetLoadBalancerUDPListenerAttributeOutcomeCallable setLoadBalancerUDPListenerAttributeCallable(const Model::SetLoadBalancerUDPListenerAttributeRequest& request) const;
			SetRuleOutcome setRule(const Model::SetRuleRequest &request)const;
			void setRuleAsync(const Model::SetRuleRequest& request, const SetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetRuleOutcomeCallable setRuleCallable(const Model::SetRuleRequest& request) const;
			SetServerCertificateNameOutcome setServerCertificateName(const Model::SetServerCertificateNameRequest &request)const;
			void setServerCertificateNameAsync(const Model::SetServerCertificateNameRequest& request, const SetServerCertificateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetServerCertificateNameOutcomeCallable setServerCertificateNameCallable(const Model::SetServerCertificateNameRequest& request) const;
			SetTLSCipherPolicyAttributeOutcome setTLSCipherPolicyAttribute(const Model::SetTLSCipherPolicyAttributeRequest &request)const;
			void setTLSCipherPolicyAttributeAsync(const Model::SetTLSCipherPolicyAttributeRequest& request, const SetTLSCipherPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetTLSCipherPolicyAttributeOutcomeCallable setTLSCipherPolicyAttributeCallable(const Model::SetTLSCipherPolicyAttributeRequest& request) const;
			SetVServerGroupAttributeOutcome setVServerGroupAttribute(const Model::SetVServerGroupAttributeRequest &request)const;
			void setVServerGroupAttributeAsync(const Model::SetVServerGroupAttributeRequest& request, const SetVServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetVServerGroupAttributeOutcomeCallable setVServerGroupAttributeCallable(const Model::SetVServerGroupAttributeRequest& request) const;
			StartLoadBalancerListenerOutcome startLoadBalancerListener(const Model::StartLoadBalancerListenerRequest &request)const;
			void startLoadBalancerListenerAsync(const Model::StartLoadBalancerListenerRequest& request, const StartLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLoadBalancerListenerOutcomeCallable startLoadBalancerListenerCallable(const Model::StartLoadBalancerListenerRequest& request) const;
			StopLoadBalancerListenerOutcome stopLoadBalancerListener(const Model::StopLoadBalancerListenerRequest &request)const;
			void stopLoadBalancerListenerAsync(const Model::StopLoadBalancerListenerRequest& request, const StopLoadBalancerListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLoadBalancerListenerOutcomeCallable stopLoadBalancerListenerCallable(const Model::StopLoadBalancerListenerRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UploadCACertificateOutcome uploadCACertificate(const Model::UploadCACertificateRequest &request)const;
			void uploadCACertificateAsync(const Model::UploadCACertificateRequest& request, const UploadCACertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadCACertificateOutcomeCallable uploadCACertificateCallable(const Model::UploadCACertificateRequest& request) const;
			UploadServerCertificateOutcome uploadServerCertificate(const Model::UploadServerCertificateRequest &request)const;
			void uploadServerCertificateAsync(const Model::UploadServerCertificateRequest& request, const UploadServerCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadServerCertificateOutcomeCallable uploadServerCertificateCallable(const Model::UploadServerCertificateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SLB_SLBCLIENT_H_
