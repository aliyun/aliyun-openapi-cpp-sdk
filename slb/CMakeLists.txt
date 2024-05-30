#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(slb_public_header 
	include/alibabacloud/slb/SlbClient.h
	include/alibabacloud/slb/SlbExport.h )

set(slb_public_header_model 
	include/alibabacloud/slb/model/AddAccessControlListEntryRequest.h
	include/alibabacloud/slb/model/AddAccessControlListEntryResult.h
	include/alibabacloud/slb/model/AddBackendServersRequest.h
	include/alibabacloud/slb/model/AddBackendServersResult.h
	include/alibabacloud/slb/model/AddListenerWhiteListItemRequest.h
	include/alibabacloud/slb/model/AddListenerWhiteListItemResult.h
	include/alibabacloud/slb/model/AddTagsRequest.h
	include/alibabacloud/slb/model/AddTagsResult.h
	include/alibabacloud/slb/model/AddVServerGroupBackendServersRequest.h
	include/alibabacloud/slb/model/AddVServerGroupBackendServersResult.h
	include/alibabacloud/slb/model/CreateAccessControlListRequest.h
	include/alibabacloud/slb/model/CreateAccessControlListResult.h
	include/alibabacloud/slb/model/CreateDomainExtensionRequest.h
	include/alibabacloud/slb/model/CreateDomainExtensionResult.h
	include/alibabacloud/slb/model/CreateLoadBalancerRequest.h
	include/alibabacloud/slb/model/CreateLoadBalancerResult.h
	include/alibabacloud/slb/model/CreateLoadBalancerHTTPListenerRequest.h
	include/alibabacloud/slb/model/CreateLoadBalancerHTTPListenerResult.h
	include/alibabacloud/slb/model/CreateLoadBalancerHTTPSListenerRequest.h
	include/alibabacloud/slb/model/CreateLoadBalancerHTTPSListenerResult.h
	include/alibabacloud/slb/model/CreateLoadBalancerTCPListenerRequest.h
	include/alibabacloud/slb/model/CreateLoadBalancerTCPListenerResult.h
	include/alibabacloud/slb/model/CreateLoadBalancerUDPListenerRequest.h
	include/alibabacloud/slb/model/CreateLoadBalancerUDPListenerResult.h
	include/alibabacloud/slb/model/CreateMasterSlaveServerGroupRequest.h
	include/alibabacloud/slb/model/CreateMasterSlaveServerGroupResult.h
	include/alibabacloud/slb/model/CreateRulesRequest.h
	include/alibabacloud/slb/model/CreateRulesResult.h
	include/alibabacloud/slb/model/CreateTLSCipherPolicyRequest.h
	include/alibabacloud/slb/model/CreateTLSCipherPolicyResult.h
	include/alibabacloud/slb/model/CreateVServerGroupRequest.h
	include/alibabacloud/slb/model/CreateVServerGroupResult.h
	include/alibabacloud/slb/model/DeleteAccessControlListRequest.h
	include/alibabacloud/slb/model/DeleteAccessControlListResult.h
	include/alibabacloud/slb/model/DeleteAccessLogsDownloadAttributeRequest.h
	include/alibabacloud/slb/model/DeleteAccessLogsDownloadAttributeResult.h
	include/alibabacloud/slb/model/DeleteCACertificateRequest.h
	include/alibabacloud/slb/model/DeleteCACertificateResult.h
	include/alibabacloud/slb/model/DeleteDomainExtensionRequest.h
	include/alibabacloud/slb/model/DeleteDomainExtensionResult.h
	include/alibabacloud/slb/model/DeleteLoadBalancerRequest.h
	include/alibabacloud/slb/model/DeleteLoadBalancerResult.h
	include/alibabacloud/slb/model/DeleteLoadBalancerListenerRequest.h
	include/alibabacloud/slb/model/DeleteLoadBalancerListenerResult.h
	include/alibabacloud/slb/model/DeleteMasterSlaveServerGroupRequest.h
	include/alibabacloud/slb/model/DeleteMasterSlaveServerGroupResult.h
	include/alibabacloud/slb/model/DeleteRulesRequest.h
	include/alibabacloud/slb/model/DeleteRulesResult.h
	include/alibabacloud/slb/model/DeleteServerCertificateRequest.h
	include/alibabacloud/slb/model/DeleteServerCertificateResult.h
	include/alibabacloud/slb/model/DeleteTLSCipherPolicyRequest.h
	include/alibabacloud/slb/model/DeleteTLSCipherPolicyResult.h
	include/alibabacloud/slb/model/DeleteVServerGroupRequest.h
	include/alibabacloud/slb/model/DeleteVServerGroupResult.h
	include/alibabacloud/slb/model/DescribeAccessControlListAttributeRequest.h
	include/alibabacloud/slb/model/DescribeAccessControlListAttributeResult.h
	include/alibabacloud/slb/model/DescribeAccessControlListsRequest.h
	include/alibabacloud/slb/model/DescribeAccessControlListsResult.h
	include/alibabacloud/slb/model/DescribeAccessLogsDownloadAttributeRequest.h
	include/alibabacloud/slb/model/DescribeAccessLogsDownloadAttributeResult.h
	include/alibabacloud/slb/model/DescribeAvailableResourceRequest.h
	include/alibabacloud/slb/model/DescribeAvailableResourceResult.h
	include/alibabacloud/slb/model/DescribeCACertificatesRequest.h
	include/alibabacloud/slb/model/DescribeCACertificatesResult.h
	include/alibabacloud/slb/model/DescribeDomainExtensionAttributeRequest.h
	include/alibabacloud/slb/model/DescribeDomainExtensionAttributeResult.h
	include/alibabacloud/slb/model/DescribeDomainExtensionsRequest.h
	include/alibabacloud/slb/model/DescribeDomainExtensionsResult.h
	include/alibabacloud/slb/model/DescribeHealthStatusRequest.h
	include/alibabacloud/slb/model/DescribeHealthStatusResult.h
	include/alibabacloud/slb/model/DescribeHighDefinationMonitorRequest.h
	include/alibabacloud/slb/model/DescribeHighDefinationMonitorResult.h
	include/alibabacloud/slb/model/DescribeListenerAccessControlAttributeRequest.h
	include/alibabacloud/slb/model/DescribeListenerAccessControlAttributeResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancerAttributeRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancerAttributeResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancerHTTPListenerAttributeRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancerHTTPListenerAttributeResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancerHTTPSListenerAttributeRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancerHTTPSListenerAttributeResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancerListenersRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancerListenersResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancerTCPListenerAttributeRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancerTCPListenerAttributeResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancerUDPListenerAttributeRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancerUDPListenerAttributeResult.h
	include/alibabacloud/slb/model/DescribeLoadBalancersRequest.h
	include/alibabacloud/slb/model/DescribeLoadBalancersResult.h
	include/alibabacloud/slb/model/DescribeMasterSlaveServerGroupAttributeRequest.h
	include/alibabacloud/slb/model/DescribeMasterSlaveServerGroupAttributeResult.h
	include/alibabacloud/slb/model/DescribeMasterSlaveServerGroupsRequest.h
	include/alibabacloud/slb/model/DescribeMasterSlaveServerGroupsResult.h
	include/alibabacloud/slb/model/DescribeRegionsRequest.h
	include/alibabacloud/slb/model/DescribeRegionsResult.h
	include/alibabacloud/slb/model/DescribeRuleAttributeRequest.h
	include/alibabacloud/slb/model/DescribeRuleAttributeResult.h
	include/alibabacloud/slb/model/DescribeRulesRequest.h
	include/alibabacloud/slb/model/DescribeRulesResult.h
	include/alibabacloud/slb/model/DescribeServerCertificatesRequest.h
	include/alibabacloud/slb/model/DescribeServerCertificatesResult.h
	include/alibabacloud/slb/model/DescribeTagsRequest.h
	include/alibabacloud/slb/model/DescribeTagsResult.h
	include/alibabacloud/slb/model/DescribeVServerGroupAttributeRequest.h
	include/alibabacloud/slb/model/DescribeVServerGroupAttributeResult.h
	include/alibabacloud/slb/model/DescribeVServerGroupsRequest.h
	include/alibabacloud/slb/model/DescribeVServerGroupsResult.h
	include/alibabacloud/slb/model/DescribeZonesRequest.h
	include/alibabacloud/slb/model/DescribeZonesResult.h
	include/alibabacloud/slb/model/EnableHighDefinationMonitorRequest.h
	include/alibabacloud/slb/model/EnableHighDefinationMonitorResult.h
	include/alibabacloud/slb/model/ListTLSCipherPoliciesRequest.h
	include/alibabacloud/slb/model/ListTLSCipherPoliciesResult.h
	include/alibabacloud/slb/model/ListTagResourcesRequest.h
	include/alibabacloud/slb/model/ListTagResourcesResult.h
	include/alibabacloud/slb/model/ModifyHighDefinationMonitorRequest.h
	include/alibabacloud/slb/model/ModifyHighDefinationMonitorResult.h
	include/alibabacloud/slb/model/ModifyLoadBalancerInstanceChargeTypeRequest.h
	include/alibabacloud/slb/model/ModifyLoadBalancerInstanceChargeTypeResult.h
	include/alibabacloud/slb/model/ModifyLoadBalancerInstanceSpecRequest.h
	include/alibabacloud/slb/model/ModifyLoadBalancerInstanceSpecResult.h
	include/alibabacloud/slb/model/ModifyLoadBalancerInternetSpecRequest.h
	include/alibabacloud/slb/model/ModifyLoadBalancerInternetSpecResult.h
	include/alibabacloud/slb/model/ModifyLoadBalancerPayTypeRequest.h
	include/alibabacloud/slb/model/ModifyLoadBalancerPayTypeResult.h
	include/alibabacloud/slb/model/ModifyVServerGroupBackendServersRequest.h
	include/alibabacloud/slb/model/ModifyVServerGroupBackendServersResult.h
	include/alibabacloud/slb/model/MoveResourceGroupRequest.h
	include/alibabacloud/slb/model/MoveResourceGroupResult.h
	include/alibabacloud/slb/model/RemoveAccessControlListEntryRequest.h
	include/alibabacloud/slb/model/RemoveAccessControlListEntryResult.h
	include/alibabacloud/slb/model/RemoveBackendServersRequest.h
	include/alibabacloud/slb/model/RemoveBackendServersResult.h
	include/alibabacloud/slb/model/RemoveListenerWhiteListItemRequest.h
	include/alibabacloud/slb/model/RemoveListenerWhiteListItemResult.h
	include/alibabacloud/slb/model/RemoveTagsRequest.h
	include/alibabacloud/slb/model/RemoveTagsResult.h
	include/alibabacloud/slb/model/RemoveVServerGroupBackendServersRequest.h
	include/alibabacloud/slb/model/RemoveVServerGroupBackendServersResult.h
	include/alibabacloud/slb/model/SetAccessControlListAttributeRequest.h
	include/alibabacloud/slb/model/SetAccessControlListAttributeResult.h
	include/alibabacloud/slb/model/SetAccessLogsDownloadAttributeRequest.h
	include/alibabacloud/slb/model/SetAccessLogsDownloadAttributeResult.h
	include/alibabacloud/slb/model/SetBackendServersRequest.h
	include/alibabacloud/slb/model/SetBackendServersResult.h
	include/alibabacloud/slb/model/SetCACertificateNameRequest.h
	include/alibabacloud/slb/model/SetCACertificateNameResult.h
	include/alibabacloud/slb/model/SetDomainExtensionAttributeRequest.h
	include/alibabacloud/slb/model/SetDomainExtensionAttributeResult.h
	include/alibabacloud/slb/model/SetListenerAccessControlStatusRequest.h
	include/alibabacloud/slb/model/SetListenerAccessControlStatusResult.h
	include/alibabacloud/slb/model/SetLoadBalancerDeleteProtectionRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerDeleteProtectionResult.h
	include/alibabacloud/slb/model/SetLoadBalancerHTTPListenerAttributeRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerHTTPListenerAttributeResult.h
	include/alibabacloud/slb/model/SetLoadBalancerHTTPSListenerAttributeRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerHTTPSListenerAttributeResult.h
	include/alibabacloud/slb/model/SetLoadBalancerModificationProtectionRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerModificationProtectionResult.h
	include/alibabacloud/slb/model/SetLoadBalancerNameRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerNameResult.h
	include/alibabacloud/slb/model/SetLoadBalancerStatusRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerStatusResult.h
	include/alibabacloud/slb/model/SetLoadBalancerTCPListenerAttributeRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerTCPListenerAttributeResult.h
	include/alibabacloud/slb/model/SetLoadBalancerUDPListenerAttributeRequest.h
	include/alibabacloud/slb/model/SetLoadBalancerUDPListenerAttributeResult.h
	include/alibabacloud/slb/model/SetRuleRequest.h
	include/alibabacloud/slb/model/SetRuleResult.h
	include/alibabacloud/slb/model/SetServerCertificateNameRequest.h
	include/alibabacloud/slb/model/SetServerCertificateNameResult.h
	include/alibabacloud/slb/model/SetTLSCipherPolicyAttributeRequest.h
	include/alibabacloud/slb/model/SetTLSCipherPolicyAttributeResult.h
	include/alibabacloud/slb/model/SetVServerGroupAttributeRequest.h
	include/alibabacloud/slb/model/SetVServerGroupAttributeResult.h
	include/alibabacloud/slb/model/StartLoadBalancerListenerRequest.h
	include/alibabacloud/slb/model/StartLoadBalancerListenerResult.h
	include/alibabacloud/slb/model/StopLoadBalancerListenerRequest.h
	include/alibabacloud/slb/model/StopLoadBalancerListenerResult.h
	include/alibabacloud/slb/model/TagResourcesRequest.h
	include/alibabacloud/slb/model/TagResourcesResult.h
	include/alibabacloud/slb/model/UntagResourcesRequest.h
	include/alibabacloud/slb/model/UntagResourcesResult.h
	include/alibabacloud/slb/model/UploadCACertificateRequest.h
	include/alibabacloud/slb/model/UploadCACertificateResult.h
	include/alibabacloud/slb/model/UploadServerCertificateRequest.h
	include/alibabacloud/slb/model/UploadServerCertificateResult.h )

set(slb_src 
	src/SlbClient.cc
	src/model/AddAccessControlListEntryRequest.cc
	src/model/AddAccessControlListEntryResult.cc
	src/model/AddBackendServersRequest.cc
	src/model/AddBackendServersResult.cc
	src/model/AddListenerWhiteListItemRequest.cc
	src/model/AddListenerWhiteListItemResult.cc
	src/model/AddTagsRequest.cc
	src/model/AddTagsResult.cc
	src/model/AddVServerGroupBackendServersRequest.cc
	src/model/AddVServerGroupBackendServersResult.cc
	src/model/CreateAccessControlListRequest.cc
	src/model/CreateAccessControlListResult.cc
	src/model/CreateDomainExtensionRequest.cc
	src/model/CreateDomainExtensionResult.cc
	src/model/CreateLoadBalancerRequest.cc
	src/model/CreateLoadBalancerResult.cc
	src/model/CreateLoadBalancerHTTPListenerRequest.cc
	src/model/CreateLoadBalancerHTTPListenerResult.cc
	src/model/CreateLoadBalancerHTTPSListenerRequest.cc
	src/model/CreateLoadBalancerHTTPSListenerResult.cc
	src/model/CreateLoadBalancerTCPListenerRequest.cc
	src/model/CreateLoadBalancerTCPListenerResult.cc
	src/model/CreateLoadBalancerUDPListenerRequest.cc
	src/model/CreateLoadBalancerUDPListenerResult.cc
	src/model/CreateMasterSlaveServerGroupRequest.cc
	src/model/CreateMasterSlaveServerGroupResult.cc
	src/model/CreateRulesRequest.cc
	src/model/CreateRulesResult.cc
	src/model/CreateTLSCipherPolicyRequest.cc
	src/model/CreateTLSCipherPolicyResult.cc
	src/model/CreateVServerGroupRequest.cc
	src/model/CreateVServerGroupResult.cc
	src/model/DeleteAccessControlListRequest.cc
	src/model/DeleteAccessControlListResult.cc
	src/model/DeleteAccessLogsDownloadAttributeRequest.cc
	src/model/DeleteAccessLogsDownloadAttributeResult.cc
	src/model/DeleteCACertificateRequest.cc
	src/model/DeleteCACertificateResult.cc
	src/model/DeleteDomainExtensionRequest.cc
	src/model/DeleteDomainExtensionResult.cc
	src/model/DeleteLoadBalancerRequest.cc
	src/model/DeleteLoadBalancerResult.cc
	src/model/DeleteLoadBalancerListenerRequest.cc
	src/model/DeleteLoadBalancerListenerResult.cc
	src/model/DeleteMasterSlaveServerGroupRequest.cc
	src/model/DeleteMasterSlaveServerGroupResult.cc
	src/model/DeleteRulesRequest.cc
	src/model/DeleteRulesResult.cc
	src/model/DeleteServerCertificateRequest.cc
	src/model/DeleteServerCertificateResult.cc
	src/model/DeleteTLSCipherPolicyRequest.cc
	src/model/DeleteTLSCipherPolicyResult.cc
	src/model/DeleteVServerGroupRequest.cc
	src/model/DeleteVServerGroupResult.cc
	src/model/DescribeAccessControlListAttributeRequest.cc
	src/model/DescribeAccessControlListAttributeResult.cc
	src/model/DescribeAccessControlListsRequest.cc
	src/model/DescribeAccessControlListsResult.cc
	src/model/DescribeAccessLogsDownloadAttributeRequest.cc
	src/model/DescribeAccessLogsDownloadAttributeResult.cc
	src/model/DescribeAvailableResourceRequest.cc
	src/model/DescribeAvailableResourceResult.cc
	src/model/DescribeCACertificatesRequest.cc
	src/model/DescribeCACertificatesResult.cc
	src/model/DescribeDomainExtensionAttributeRequest.cc
	src/model/DescribeDomainExtensionAttributeResult.cc
	src/model/DescribeDomainExtensionsRequest.cc
	src/model/DescribeDomainExtensionsResult.cc
	src/model/DescribeHealthStatusRequest.cc
	src/model/DescribeHealthStatusResult.cc
	src/model/DescribeHighDefinationMonitorRequest.cc
	src/model/DescribeHighDefinationMonitorResult.cc
	src/model/DescribeListenerAccessControlAttributeRequest.cc
	src/model/DescribeListenerAccessControlAttributeResult.cc
	src/model/DescribeLoadBalancerAttributeRequest.cc
	src/model/DescribeLoadBalancerAttributeResult.cc
	src/model/DescribeLoadBalancerHTTPListenerAttributeRequest.cc
	src/model/DescribeLoadBalancerHTTPListenerAttributeResult.cc
	src/model/DescribeLoadBalancerHTTPSListenerAttributeRequest.cc
	src/model/DescribeLoadBalancerHTTPSListenerAttributeResult.cc
	src/model/DescribeLoadBalancerListenersRequest.cc
	src/model/DescribeLoadBalancerListenersResult.cc
	src/model/DescribeLoadBalancerTCPListenerAttributeRequest.cc
	src/model/DescribeLoadBalancerTCPListenerAttributeResult.cc
	src/model/DescribeLoadBalancerUDPListenerAttributeRequest.cc
	src/model/DescribeLoadBalancerUDPListenerAttributeResult.cc
	src/model/DescribeLoadBalancersRequest.cc
	src/model/DescribeLoadBalancersResult.cc
	src/model/DescribeMasterSlaveServerGroupAttributeRequest.cc
	src/model/DescribeMasterSlaveServerGroupAttributeResult.cc
	src/model/DescribeMasterSlaveServerGroupsRequest.cc
	src/model/DescribeMasterSlaveServerGroupsResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeRuleAttributeRequest.cc
	src/model/DescribeRuleAttributeResult.cc
	src/model/DescribeRulesRequest.cc
	src/model/DescribeRulesResult.cc
	src/model/DescribeServerCertificatesRequest.cc
	src/model/DescribeServerCertificatesResult.cc
	src/model/DescribeTagsRequest.cc
	src/model/DescribeTagsResult.cc
	src/model/DescribeVServerGroupAttributeRequest.cc
	src/model/DescribeVServerGroupAttributeResult.cc
	src/model/DescribeVServerGroupsRequest.cc
	src/model/DescribeVServerGroupsResult.cc
	src/model/DescribeZonesRequest.cc
	src/model/DescribeZonesResult.cc
	src/model/EnableHighDefinationMonitorRequest.cc
	src/model/EnableHighDefinationMonitorResult.cc
	src/model/ListTLSCipherPoliciesRequest.cc
	src/model/ListTLSCipherPoliciesResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyHighDefinationMonitorRequest.cc
	src/model/ModifyHighDefinationMonitorResult.cc
	src/model/ModifyLoadBalancerInstanceChargeTypeRequest.cc
	src/model/ModifyLoadBalancerInstanceChargeTypeResult.cc
	src/model/ModifyLoadBalancerInstanceSpecRequest.cc
	src/model/ModifyLoadBalancerInstanceSpecResult.cc
	src/model/ModifyLoadBalancerInternetSpecRequest.cc
	src/model/ModifyLoadBalancerInternetSpecResult.cc
	src/model/ModifyLoadBalancerPayTypeRequest.cc
	src/model/ModifyLoadBalancerPayTypeResult.cc
	src/model/ModifyVServerGroupBackendServersRequest.cc
	src/model/ModifyVServerGroupBackendServersResult.cc
	src/model/MoveResourceGroupRequest.cc
	src/model/MoveResourceGroupResult.cc
	src/model/RemoveAccessControlListEntryRequest.cc
	src/model/RemoveAccessControlListEntryResult.cc
	src/model/RemoveBackendServersRequest.cc
	src/model/RemoveBackendServersResult.cc
	src/model/RemoveListenerWhiteListItemRequest.cc
	src/model/RemoveListenerWhiteListItemResult.cc
	src/model/RemoveTagsRequest.cc
	src/model/RemoveTagsResult.cc
	src/model/RemoveVServerGroupBackendServersRequest.cc
	src/model/RemoveVServerGroupBackendServersResult.cc
	src/model/SetAccessControlListAttributeRequest.cc
	src/model/SetAccessControlListAttributeResult.cc
	src/model/SetAccessLogsDownloadAttributeRequest.cc
	src/model/SetAccessLogsDownloadAttributeResult.cc
	src/model/SetBackendServersRequest.cc
	src/model/SetBackendServersResult.cc
	src/model/SetCACertificateNameRequest.cc
	src/model/SetCACertificateNameResult.cc
	src/model/SetDomainExtensionAttributeRequest.cc
	src/model/SetDomainExtensionAttributeResult.cc
	src/model/SetListenerAccessControlStatusRequest.cc
	src/model/SetListenerAccessControlStatusResult.cc
	src/model/SetLoadBalancerDeleteProtectionRequest.cc
	src/model/SetLoadBalancerDeleteProtectionResult.cc
	src/model/SetLoadBalancerHTTPListenerAttributeRequest.cc
	src/model/SetLoadBalancerHTTPListenerAttributeResult.cc
	src/model/SetLoadBalancerHTTPSListenerAttributeRequest.cc
	src/model/SetLoadBalancerHTTPSListenerAttributeResult.cc
	src/model/SetLoadBalancerModificationProtectionRequest.cc
	src/model/SetLoadBalancerModificationProtectionResult.cc
	src/model/SetLoadBalancerNameRequest.cc
	src/model/SetLoadBalancerNameResult.cc
	src/model/SetLoadBalancerStatusRequest.cc
	src/model/SetLoadBalancerStatusResult.cc
	src/model/SetLoadBalancerTCPListenerAttributeRequest.cc
	src/model/SetLoadBalancerTCPListenerAttributeResult.cc
	src/model/SetLoadBalancerUDPListenerAttributeRequest.cc
	src/model/SetLoadBalancerUDPListenerAttributeResult.cc
	src/model/SetRuleRequest.cc
	src/model/SetRuleResult.cc
	src/model/SetServerCertificateNameRequest.cc
	src/model/SetServerCertificateNameResult.cc
	src/model/SetTLSCipherPolicyAttributeRequest.cc
	src/model/SetTLSCipherPolicyAttributeResult.cc
	src/model/SetVServerGroupAttributeRequest.cc
	src/model/SetVServerGroupAttributeResult.cc
	src/model/StartLoadBalancerListenerRequest.cc
	src/model/StartLoadBalancerListenerResult.cc
	src/model/StopLoadBalancerListenerRequest.cc
	src/model/StopLoadBalancerListenerResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UploadCACertificateRequest.cc
	src/model/UploadCACertificateResult.cc
	src/model/UploadServerCertificateRequest.cc
	src/model/UploadServerCertificateResult.cc )

add_library(slb ${LIB_TYPE}
	${slb_public_header}
	${slb_public_header_model}
	${slb_src})

set_target_properties(slb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}slb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(slb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SLB_LIBRARY)
endif()

target_include_directories(slb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(slb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(slb
		jsoncpp)
	target_include_directories(slb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(slb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(slb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(slb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(slb
		jsoncpp)
endif()

install(FILES ${slb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/slb)
install(FILES ${slb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/slb/model)
install(TARGETS slb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)