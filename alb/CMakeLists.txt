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

set(alb_public_header 
	include/alibabacloud/alb/AlbClient.h
	include/alibabacloud/alb/AlbExport.h )

set(alb_public_header_model 
	include/alibabacloud/alb/model/AddEntriesToAclRequest.h
	include/alibabacloud/alb/model/AddEntriesToAclResult.h
	include/alibabacloud/alb/model/AddServersToServerGroupRequest.h
	include/alibabacloud/alb/model/AddServersToServerGroupResult.h
	include/alibabacloud/alb/model/ApplyHealthCheckTemplateToServerGroupRequest.h
	include/alibabacloud/alb/model/ApplyHealthCheckTemplateToServerGroupResult.h
	include/alibabacloud/alb/model/AssociateAclsWithListenerRequest.h
	include/alibabacloud/alb/model/AssociateAclsWithListenerResult.h
	include/alibabacloud/alb/model/AssociateAdditionalCertificatesWithListenerRequest.h
	include/alibabacloud/alb/model/AssociateAdditionalCertificatesWithListenerResult.h
	include/alibabacloud/alb/model/AttachCommonBandwidthPackageToLoadBalancerRequest.h
	include/alibabacloud/alb/model/AttachCommonBandwidthPackageToLoadBalancerResult.h
	include/alibabacloud/alb/model/CancelShiftLoadBalancerZonesRequest.h
	include/alibabacloud/alb/model/CancelShiftLoadBalancerZonesResult.h
	include/alibabacloud/alb/model/CreateAScriptsRequest.h
	include/alibabacloud/alb/model/CreateAScriptsResult.h
	include/alibabacloud/alb/model/CreateAclRequest.h
	include/alibabacloud/alb/model/CreateAclResult.h
	include/alibabacloud/alb/model/CreateHealthCheckTemplateRequest.h
	include/alibabacloud/alb/model/CreateHealthCheckTemplateResult.h
	include/alibabacloud/alb/model/CreateListenerRequest.h
	include/alibabacloud/alb/model/CreateListenerResult.h
	include/alibabacloud/alb/model/CreateLoadBalancerRequest.h
	include/alibabacloud/alb/model/CreateLoadBalancerResult.h
	include/alibabacloud/alb/model/CreateRuleRequest.h
	include/alibabacloud/alb/model/CreateRuleResult.h
	include/alibabacloud/alb/model/CreateRulesRequest.h
	include/alibabacloud/alb/model/CreateRulesResult.h
	include/alibabacloud/alb/model/CreateSecurityPolicyRequest.h
	include/alibabacloud/alb/model/CreateSecurityPolicyResult.h
	include/alibabacloud/alb/model/CreateServerGroupRequest.h
	include/alibabacloud/alb/model/CreateServerGroupResult.h
	include/alibabacloud/alb/model/DeleteAScriptsRequest.h
	include/alibabacloud/alb/model/DeleteAScriptsResult.h
	include/alibabacloud/alb/model/DeleteAclRequest.h
	include/alibabacloud/alb/model/DeleteAclResult.h
	include/alibabacloud/alb/model/DeleteHealthCheckTemplatesRequest.h
	include/alibabacloud/alb/model/DeleteHealthCheckTemplatesResult.h
	include/alibabacloud/alb/model/DeleteListenerRequest.h
	include/alibabacloud/alb/model/DeleteListenerResult.h
	include/alibabacloud/alb/model/DeleteLoadBalancerRequest.h
	include/alibabacloud/alb/model/DeleteLoadBalancerResult.h
	include/alibabacloud/alb/model/DeleteRuleRequest.h
	include/alibabacloud/alb/model/DeleteRuleResult.h
	include/alibabacloud/alb/model/DeleteRulesRequest.h
	include/alibabacloud/alb/model/DeleteRulesResult.h
	include/alibabacloud/alb/model/DeleteSecurityPolicyRequest.h
	include/alibabacloud/alb/model/DeleteSecurityPolicyResult.h
	include/alibabacloud/alb/model/DeleteServerGroupRequest.h
	include/alibabacloud/alb/model/DeleteServerGroupResult.h
	include/alibabacloud/alb/model/DescribeRegionsRequest.h
	include/alibabacloud/alb/model/DescribeRegionsResult.h
	include/alibabacloud/alb/model/DescribeZonesRequest.h
	include/alibabacloud/alb/model/DescribeZonesResult.h
	include/alibabacloud/alb/model/DetachCommonBandwidthPackageFromLoadBalancerRequest.h
	include/alibabacloud/alb/model/DetachCommonBandwidthPackageFromLoadBalancerResult.h
	include/alibabacloud/alb/model/DisableDeletionProtectionRequest.h
	include/alibabacloud/alb/model/DisableDeletionProtectionResult.h
	include/alibabacloud/alb/model/DisableLoadBalancerAccessLogRequest.h
	include/alibabacloud/alb/model/DisableLoadBalancerAccessLogResult.h
	include/alibabacloud/alb/model/DisableLoadBalancerIpv6InternetRequest.h
	include/alibabacloud/alb/model/DisableLoadBalancerIpv6InternetResult.h
	include/alibabacloud/alb/model/DissociateAclsFromListenerRequest.h
	include/alibabacloud/alb/model/DissociateAclsFromListenerResult.h
	include/alibabacloud/alb/model/DissociateAdditionalCertificatesFromListenerRequest.h
	include/alibabacloud/alb/model/DissociateAdditionalCertificatesFromListenerResult.h
	include/alibabacloud/alb/model/EnableDeletionProtectionRequest.h
	include/alibabacloud/alb/model/EnableDeletionProtectionResult.h
	include/alibabacloud/alb/model/EnableLoadBalancerAccessLogRequest.h
	include/alibabacloud/alb/model/EnableLoadBalancerAccessLogResult.h
	include/alibabacloud/alb/model/EnableLoadBalancerIpv6InternetRequest.h
	include/alibabacloud/alb/model/EnableLoadBalancerIpv6InternetResult.h
	include/alibabacloud/alb/model/GetHealthCheckTemplateAttributeRequest.h
	include/alibabacloud/alb/model/GetHealthCheckTemplateAttributeResult.h
	include/alibabacloud/alb/model/GetListenerAttributeRequest.h
	include/alibabacloud/alb/model/GetListenerAttributeResult.h
	include/alibabacloud/alb/model/GetListenerHealthStatusRequest.h
	include/alibabacloud/alb/model/GetListenerHealthStatusResult.h
	include/alibabacloud/alb/model/GetLoadBalancerAttributeRequest.h
	include/alibabacloud/alb/model/GetLoadBalancerAttributeResult.h
	include/alibabacloud/alb/model/ListAScriptsRequest.h
	include/alibabacloud/alb/model/ListAScriptsResult.h
	include/alibabacloud/alb/model/ListAclEntriesRequest.h
	include/alibabacloud/alb/model/ListAclEntriesResult.h
	include/alibabacloud/alb/model/ListAclRelationsRequest.h
	include/alibabacloud/alb/model/ListAclRelationsResult.h
	include/alibabacloud/alb/model/ListAclsRequest.h
	include/alibabacloud/alb/model/ListAclsResult.h
	include/alibabacloud/alb/model/ListAsynJobsRequest.h
	include/alibabacloud/alb/model/ListAsynJobsResult.h
	include/alibabacloud/alb/model/ListHealthCheckTemplatesRequest.h
	include/alibabacloud/alb/model/ListHealthCheckTemplatesResult.h
	include/alibabacloud/alb/model/ListListenerCertificatesRequest.h
	include/alibabacloud/alb/model/ListListenerCertificatesResult.h
	include/alibabacloud/alb/model/ListListenersRequest.h
	include/alibabacloud/alb/model/ListListenersResult.h
	include/alibabacloud/alb/model/ListLoadBalancersRequest.h
	include/alibabacloud/alb/model/ListLoadBalancersResult.h
	include/alibabacloud/alb/model/ListRulesRequest.h
	include/alibabacloud/alb/model/ListRulesResult.h
	include/alibabacloud/alb/model/ListSecurityPoliciesRequest.h
	include/alibabacloud/alb/model/ListSecurityPoliciesResult.h
	include/alibabacloud/alb/model/ListSecurityPolicyRelationsRequest.h
	include/alibabacloud/alb/model/ListSecurityPolicyRelationsResult.h
	include/alibabacloud/alb/model/ListServerGroupServersRequest.h
	include/alibabacloud/alb/model/ListServerGroupServersResult.h
	include/alibabacloud/alb/model/ListServerGroupsRequest.h
	include/alibabacloud/alb/model/ListServerGroupsResult.h
	include/alibabacloud/alb/model/ListSystemSecurityPoliciesRequest.h
	include/alibabacloud/alb/model/ListSystemSecurityPoliciesResult.h
	include/alibabacloud/alb/model/ListTagKeysRequest.h
	include/alibabacloud/alb/model/ListTagKeysResult.h
	include/alibabacloud/alb/model/ListTagResourcesRequest.h
	include/alibabacloud/alb/model/ListTagResourcesResult.h
	include/alibabacloud/alb/model/ListTagValuesRequest.h
	include/alibabacloud/alb/model/ListTagValuesResult.h
	include/alibabacloud/alb/model/LoadBalancerJoinSecurityGroupRequest.h
	include/alibabacloud/alb/model/LoadBalancerJoinSecurityGroupResult.h
	include/alibabacloud/alb/model/LoadBalancerLeaveSecurityGroupRequest.h
	include/alibabacloud/alb/model/LoadBalancerLeaveSecurityGroupResult.h
	include/alibabacloud/alb/model/MoveResourceGroupRequest.h
	include/alibabacloud/alb/model/MoveResourceGroupResult.h
	include/alibabacloud/alb/model/RemoveEntriesFromAclRequest.h
	include/alibabacloud/alb/model/RemoveEntriesFromAclResult.h
	include/alibabacloud/alb/model/RemoveServersFromServerGroupRequest.h
	include/alibabacloud/alb/model/RemoveServersFromServerGroupResult.h
	include/alibabacloud/alb/model/ReplaceServersInServerGroupRequest.h
	include/alibabacloud/alb/model/ReplaceServersInServerGroupResult.h
	include/alibabacloud/alb/model/StartListenerRequest.h
	include/alibabacloud/alb/model/StartListenerResult.h
	include/alibabacloud/alb/model/StartShiftLoadBalancerZonesRequest.h
	include/alibabacloud/alb/model/StartShiftLoadBalancerZonesResult.h
	include/alibabacloud/alb/model/StopListenerRequest.h
	include/alibabacloud/alb/model/StopListenerResult.h
	include/alibabacloud/alb/model/TagResourcesRequest.h
	include/alibabacloud/alb/model/TagResourcesResult.h
	include/alibabacloud/alb/model/UnTagResourcesRequest.h
	include/alibabacloud/alb/model/UnTagResourcesResult.h
	include/alibabacloud/alb/model/UpdateAScriptsRequest.h
	include/alibabacloud/alb/model/UpdateAScriptsResult.h
	include/alibabacloud/alb/model/UpdateAclAttributeRequest.h
	include/alibabacloud/alb/model/UpdateAclAttributeResult.h
	include/alibabacloud/alb/model/UpdateHealthCheckTemplateAttributeRequest.h
	include/alibabacloud/alb/model/UpdateHealthCheckTemplateAttributeResult.h
	include/alibabacloud/alb/model/UpdateListenerAttributeRequest.h
	include/alibabacloud/alb/model/UpdateListenerAttributeResult.h
	include/alibabacloud/alb/model/UpdateListenerLogConfigRequest.h
	include/alibabacloud/alb/model/UpdateListenerLogConfigResult.h
	include/alibabacloud/alb/model/UpdateLoadBalancerAddressTypeConfigRequest.h
	include/alibabacloud/alb/model/UpdateLoadBalancerAddressTypeConfigResult.h
	include/alibabacloud/alb/model/UpdateLoadBalancerAttributeRequest.h
	include/alibabacloud/alb/model/UpdateLoadBalancerAttributeResult.h
	include/alibabacloud/alb/model/UpdateLoadBalancerEditionRequest.h
	include/alibabacloud/alb/model/UpdateLoadBalancerEditionResult.h
	include/alibabacloud/alb/model/UpdateLoadBalancerZonesRequest.h
	include/alibabacloud/alb/model/UpdateLoadBalancerZonesResult.h
	include/alibabacloud/alb/model/UpdateRuleAttributeRequest.h
	include/alibabacloud/alb/model/UpdateRuleAttributeResult.h
	include/alibabacloud/alb/model/UpdateRulesAttributeRequest.h
	include/alibabacloud/alb/model/UpdateRulesAttributeResult.h
	include/alibabacloud/alb/model/UpdateSecurityPolicyAttributeRequest.h
	include/alibabacloud/alb/model/UpdateSecurityPolicyAttributeResult.h
	include/alibabacloud/alb/model/UpdateServerGroupAttributeRequest.h
	include/alibabacloud/alb/model/UpdateServerGroupAttributeResult.h
	include/alibabacloud/alb/model/UpdateServerGroupServersAttributeRequest.h
	include/alibabacloud/alb/model/UpdateServerGroupServersAttributeResult.h )

set(alb_src 
	src/AlbClient.cc
	src/model/AddEntriesToAclRequest.cc
	src/model/AddEntriesToAclResult.cc
	src/model/AddServersToServerGroupRequest.cc
	src/model/AddServersToServerGroupResult.cc
	src/model/ApplyHealthCheckTemplateToServerGroupRequest.cc
	src/model/ApplyHealthCheckTemplateToServerGroupResult.cc
	src/model/AssociateAclsWithListenerRequest.cc
	src/model/AssociateAclsWithListenerResult.cc
	src/model/AssociateAdditionalCertificatesWithListenerRequest.cc
	src/model/AssociateAdditionalCertificatesWithListenerResult.cc
	src/model/AttachCommonBandwidthPackageToLoadBalancerRequest.cc
	src/model/AttachCommonBandwidthPackageToLoadBalancerResult.cc
	src/model/CancelShiftLoadBalancerZonesRequest.cc
	src/model/CancelShiftLoadBalancerZonesResult.cc
	src/model/CreateAScriptsRequest.cc
	src/model/CreateAScriptsResult.cc
	src/model/CreateAclRequest.cc
	src/model/CreateAclResult.cc
	src/model/CreateHealthCheckTemplateRequest.cc
	src/model/CreateHealthCheckTemplateResult.cc
	src/model/CreateListenerRequest.cc
	src/model/CreateListenerResult.cc
	src/model/CreateLoadBalancerRequest.cc
	src/model/CreateLoadBalancerResult.cc
	src/model/CreateRuleRequest.cc
	src/model/CreateRuleResult.cc
	src/model/CreateRulesRequest.cc
	src/model/CreateRulesResult.cc
	src/model/CreateSecurityPolicyRequest.cc
	src/model/CreateSecurityPolicyResult.cc
	src/model/CreateServerGroupRequest.cc
	src/model/CreateServerGroupResult.cc
	src/model/DeleteAScriptsRequest.cc
	src/model/DeleteAScriptsResult.cc
	src/model/DeleteAclRequest.cc
	src/model/DeleteAclResult.cc
	src/model/DeleteHealthCheckTemplatesRequest.cc
	src/model/DeleteHealthCheckTemplatesResult.cc
	src/model/DeleteListenerRequest.cc
	src/model/DeleteListenerResult.cc
	src/model/DeleteLoadBalancerRequest.cc
	src/model/DeleteLoadBalancerResult.cc
	src/model/DeleteRuleRequest.cc
	src/model/DeleteRuleResult.cc
	src/model/DeleteRulesRequest.cc
	src/model/DeleteRulesResult.cc
	src/model/DeleteSecurityPolicyRequest.cc
	src/model/DeleteSecurityPolicyResult.cc
	src/model/DeleteServerGroupRequest.cc
	src/model/DeleteServerGroupResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeZonesRequest.cc
	src/model/DescribeZonesResult.cc
	src/model/DetachCommonBandwidthPackageFromLoadBalancerRequest.cc
	src/model/DetachCommonBandwidthPackageFromLoadBalancerResult.cc
	src/model/DisableDeletionProtectionRequest.cc
	src/model/DisableDeletionProtectionResult.cc
	src/model/DisableLoadBalancerAccessLogRequest.cc
	src/model/DisableLoadBalancerAccessLogResult.cc
	src/model/DisableLoadBalancerIpv6InternetRequest.cc
	src/model/DisableLoadBalancerIpv6InternetResult.cc
	src/model/DissociateAclsFromListenerRequest.cc
	src/model/DissociateAclsFromListenerResult.cc
	src/model/DissociateAdditionalCertificatesFromListenerRequest.cc
	src/model/DissociateAdditionalCertificatesFromListenerResult.cc
	src/model/EnableDeletionProtectionRequest.cc
	src/model/EnableDeletionProtectionResult.cc
	src/model/EnableLoadBalancerAccessLogRequest.cc
	src/model/EnableLoadBalancerAccessLogResult.cc
	src/model/EnableLoadBalancerIpv6InternetRequest.cc
	src/model/EnableLoadBalancerIpv6InternetResult.cc
	src/model/GetHealthCheckTemplateAttributeRequest.cc
	src/model/GetHealthCheckTemplateAttributeResult.cc
	src/model/GetListenerAttributeRequest.cc
	src/model/GetListenerAttributeResult.cc
	src/model/GetListenerHealthStatusRequest.cc
	src/model/GetListenerHealthStatusResult.cc
	src/model/GetLoadBalancerAttributeRequest.cc
	src/model/GetLoadBalancerAttributeResult.cc
	src/model/ListAScriptsRequest.cc
	src/model/ListAScriptsResult.cc
	src/model/ListAclEntriesRequest.cc
	src/model/ListAclEntriesResult.cc
	src/model/ListAclRelationsRequest.cc
	src/model/ListAclRelationsResult.cc
	src/model/ListAclsRequest.cc
	src/model/ListAclsResult.cc
	src/model/ListAsynJobsRequest.cc
	src/model/ListAsynJobsResult.cc
	src/model/ListHealthCheckTemplatesRequest.cc
	src/model/ListHealthCheckTemplatesResult.cc
	src/model/ListListenerCertificatesRequest.cc
	src/model/ListListenerCertificatesResult.cc
	src/model/ListListenersRequest.cc
	src/model/ListListenersResult.cc
	src/model/ListLoadBalancersRequest.cc
	src/model/ListLoadBalancersResult.cc
	src/model/ListRulesRequest.cc
	src/model/ListRulesResult.cc
	src/model/ListSecurityPoliciesRequest.cc
	src/model/ListSecurityPoliciesResult.cc
	src/model/ListSecurityPolicyRelationsRequest.cc
	src/model/ListSecurityPolicyRelationsResult.cc
	src/model/ListServerGroupServersRequest.cc
	src/model/ListServerGroupServersResult.cc
	src/model/ListServerGroupsRequest.cc
	src/model/ListServerGroupsResult.cc
	src/model/ListSystemSecurityPoliciesRequest.cc
	src/model/ListSystemSecurityPoliciesResult.cc
	src/model/ListTagKeysRequest.cc
	src/model/ListTagKeysResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ListTagValuesRequest.cc
	src/model/ListTagValuesResult.cc
	src/model/LoadBalancerJoinSecurityGroupRequest.cc
	src/model/LoadBalancerJoinSecurityGroupResult.cc
	src/model/LoadBalancerLeaveSecurityGroupRequest.cc
	src/model/LoadBalancerLeaveSecurityGroupResult.cc
	src/model/MoveResourceGroupRequest.cc
	src/model/MoveResourceGroupResult.cc
	src/model/RemoveEntriesFromAclRequest.cc
	src/model/RemoveEntriesFromAclResult.cc
	src/model/RemoveServersFromServerGroupRequest.cc
	src/model/RemoveServersFromServerGroupResult.cc
	src/model/ReplaceServersInServerGroupRequest.cc
	src/model/ReplaceServersInServerGroupResult.cc
	src/model/StartListenerRequest.cc
	src/model/StartListenerResult.cc
	src/model/StartShiftLoadBalancerZonesRequest.cc
	src/model/StartShiftLoadBalancerZonesResult.cc
	src/model/StopListenerRequest.cc
	src/model/StopListenerResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UnTagResourcesRequest.cc
	src/model/UnTagResourcesResult.cc
	src/model/UpdateAScriptsRequest.cc
	src/model/UpdateAScriptsResult.cc
	src/model/UpdateAclAttributeRequest.cc
	src/model/UpdateAclAttributeResult.cc
	src/model/UpdateHealthCheckTemplateAttributeRequest.cc
	src/model/UpdateHealthCheckTemplateAttributeResult.cc
	src/model/UpdateListenerAttributeRequest.cc
	src/model/UpdateListenerAttributeResult.cc
	src/model/UpdateListenerLogConfigRequest.cc
	src/model/UpdateListenerLogConfigResult.cc
	src/model/UpdateLoadBalancerAddressTypeConfigRequest.cc
	src/model/UpdateLoadBalancerAddressTypeConfigResult.cc
	src/model/UpdateLoadBalancerAttributeRequest.cc
	src/model/UpdateLoadBalancerAttributeResult.cc
	src/model/UpdateLoadBalancerEditionRequest.cc
	src/model/UpdateLoadBalancerEditionResult.cc
	src/model/UpdateLoadBalancerZonesRequest.cc
	src/model/UpdateLoadBalancerZonesResult.cc
	src/model/UpdateRuleAttributeRequest.cc
	src/model/UpdateRuleAttributeResult.cc
	src/model/UpdateRulesAttributeRequest.cc
	src/model/UpdateRulesAttributeResult.cc
	src/model/UpdateSecurityPolicyAttributeRequest.cc
	src/model/UpdateSecurityPolicyAttributeResult.cc
	src/model/UpdateServerGroupAttributeRequest.cc
	src/model/UpdateServerGroupAttributeResult.cc
	src/model/UpdateServerGroupServersAttributeRequest.cc
	src/model/UpdateServerGroupServersAttributeResult.cc )

add_library(alb ${LIB_TYPE}
	${alb_public_header}
	${alb_public_header_model}
	${alb_src})

set_target_properties(alb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}alb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(alb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ALB_LIBRARY)
endif()

target_include_directories(alb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(alb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(alb
		jsoncpp)
	target_include_directories(alb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(alb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(alb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(alb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(alb
		jsoncpp)
endif()

install(FILES ${alb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/alb)
install(FILES ${alb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/alb/model)
install(TARGETS alb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)