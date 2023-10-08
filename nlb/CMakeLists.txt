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

set(nlb_public_header 
	include/alibabacloud/nlb/NlbClient.h
	include/alibabacloud/nlb/NlbExport.h )

set(nlb_public_header_model 
	include/alibabacloud/nlb/model/AddServersToServerGroupRequest.h
	include/alibabacloud/nlb/model/AddServersToServerGroupResult.h
	include/alibabacloud/nlb/model/AssociateAdditionalCertificatesWithListenerRequest.h
	include/alibabacloud/nlb/model/AssociateAdditionalCertificatesWithListenerResult.h
	include/alibabacloud/nlb/model/AttachCommonBandwidthPackageToLoadBalancerRequest.h
	include/alibabacloud/nlb/model/AttachCommonBandwidthPackageToLoadBalancerResult.h
	include/alibabacloud/nlb/model/CancelShiftLoadBalancerZonesRequest.h
	include/alibabacloud/nlb/model/CancelShiftLoadBalancerZonesResult.h
	include/alibabacloud/nlb/model/CreateListenerRequest.h
	include/alibabacloud/nlb/model/CreateListenerResult.h
	include/alibabacloud/nlb/model/CreateLoadBalancerRequest.h
	include/alibabacloud/nlb/model/CreateLoadBalancerResult.h
	include/alibabacloud/nlb/model/CreateSecurityPolicyRequest.h
	include/alibabacloud/nlb/model/CreateSecurityPolicyResult.h
	include/alibabacloud/nlb/model/CreateServerGroupRequest.h
	include/alibabacloud/nlb/model/CreateServerGroupResult.h
	include/alibabacloud/nlb/model/DeleteListenerRequest.h
	include/alibabacloud/nlb/model/DeleteListenerResult.h
	include/alibabacloud/nlb/model/DeleteLoadBalancerRequest.h
	include/alibabacloud/nlb/model/DeleteLoadBalancerResult.h
	include/alibabacloud/nlb/model/DeleteSecurityPolicyRequest.h
	include/alibabacloud/nlb/model/DeleteSecurityPolicyResult.h
	include/alibabacloud/nlb/model/DeleteServerGroupRequest.h
	include/alibabacloud/nlb/model/DeleteServerGroupResult.h
	include/alibabacloud/nlb/model/DescribeRegionsRequest.h
	include/alibabacloud/nlb/model/DescribeRegionsResult.h
	include/alibabacloud/nlb/model/DescribeZonesRequest.h
	include/alibabacloud/nlb/model/DescribeZonesResult.h
	include/alibabacloud/nlb/model/DetachCommonBandwidthPackageFromLoadBalancerRequest.h
	include/alibabacloud/nlb/model/DetachCommonBandwidthPackageFromLoadBalancerResult.h
	include/alibabacloud/nlb/model/DisableLoadBalancerIpv6InternetRequest.h
	include/alibabacloud/nlb/model/DisableLoadBalancerIpv6InternetResult.h
	include/alibabacloud/nlb/model/DisassociateAdditionalCertificatesWithListenerRequest.h
	include/alibabacloud/nlb/model/DisassociateAdditionalCertificatesWithListenerResult.h
	include/alibabacloud/nlb/model/EnableLoadBalancerIpv6InternetRequest.h
	include/alibabacloud/nlb/model/EnableLoadBalancerIpv6InternetResult.h
	include/alibabacloud/nlb/model/GetJobStatusRequest.h
	include/alibabacloud/nlb/model/GetJobStatusResult.h
	include/alibabacloud/nlb/model/GetListenerAttributeRequest.h
	include/alibabacloud/nlb/model/GetListenerAttributeResult.h
	include/alibabacloud/nlb/model/GetListenerHealthStatusRequest.h
	include/alibabacloud/nlb/model/GetListenerHealthStatusResult.h
	include/alibabacloud/nlb/model/GetLoadBalancerAttributeRequest.h
	include/alibabacloud/nlb/model/GetLoadBalancerAttributeResult.h
	include/alibabacloud/nlb/model/ListListenerCertificatesRequest.h
	include/alibabacloud/nlb/model/ListListenerCertificatesResult.h
	include/alibabacloud/nlb/model/ListListenersRequest.h
	include/alibabacloud/nlb/model/ListListenersResult.h
	include/alibabacloud/nlb/model/ListLoadBalancersRequest.h
	include/alibabacloud/nlb/model/ListLoadBalancersResult.h
	include/alibabacloud/nlb/model/ListSecurityPolicyRequest.h
	include/alibabacloud/nlb/model/ListSecurityPolicyResult.h
	include/alibabacloud/nlb/model/ListServerGroupServersRequest.h
	include/alibabacloud/nlb/model/ListServerGroupServersResult.h
	include/alibabacloud/nlb/model/ListServerGroupsRequest.h
	include/alibabacloud/nlb/model/ListServerGroupsResult.h
	include/alibabacloud/nlb/model/ListSystemSecurityPolicyRequest.h
	include/alibabacloud/nlb/model/ListSystemSecurityPolicyResult.h
	include/alibabacloud/nlb/model/ListTagResourcesRequest.h
	include/alibabacloud/nlb/model/ListTagResourcesResult.h
	include/alibabacloud/nlb/model/LoadBalancerJoinSecurityGroupRequest.h
	include/alibabacloud/nlb/model/LoadBalancerJoinSecurityGroupResult.h
	include/alibabacloud/nlb/model/LoadBalancerLeaveSecurityGroupRequest.h
	include/alibabacloud/nlb/model/LoadBalancerLeaveSecurityGroupResult.h
	include/alibabacloud/nlb/model/MoveResourceGroupRequest.h
	include/alibabacloud/nlb/model/MoveResourceGroupResult.h
	include/alibabacloud/nlb/model/RemoveServersFromServerGroupRequest.h
	include/alibabacloud/nlb/model/RemoveServersFromServerGroupResult.h
	include/alibabacloud/nlb/model/StartListenerRequest.h
	include/alibabacloud/nlb/model/StartListenerResult.h
	include/alibabacloud/nlb/model/StartShiftLoadBalancerZonesRequest.h
	include/alibabacloud/nlb/model/StartShiftLoadBalancerZonesResult.h
	include/alibabacloud/nlb/model/StopListenerRequest.h
	include/alibabacloud/nlb/model/StopListenerResult.h
	include/alibabacloud/nlb/model/TagResourcesRequest.h
	include/alibabacloud/nlb/model/TagResourcesResult.h
	include/alibabacloud/nlb/model/UntagResourcesRequest.h
	include/alibabacloud/nlb/model/UntagResourcesResult.h
	include/alibabacloud/nlb/model/UpdateListenerAttributeRequest.h
	include/alibabacloud/nlb/model/UpdateListenerAttributeResult.h
	include/alibabacloud/nlb/model/UpdateLoadBalancerAddressTypeConfigRequest.h
	include/alibabacloud/nlb/model/UpdateLoadBalancerAddressTypeConfigResult.h
	include/alibabacloud/nlb/model/UpdateLoadBalancerAttributeRequest.h
	include/alibabacloud/nlb/model/UpdateLoadBalancerAttributeResult.h
	include/alibabacloud/nlb/model/UpdateLoadBalancerProtectionRequest.h
	include/alibabacloud/nlb/model/UpdateLoadBalancerProtectionResult.h
	include/alibabacloud/nlb/model/UpdateLoadBalancerZonesRequest.h
	include/alibabacloud/nlb/model/UpdateLoadBalancerZonesResult.h
	include/alibabacloud/nlb/model/UpdateSecurityPolicyAttributeRequest.h
	include/alibabacloud/nlb/model/UpdateSecurityPolicyAttributeResult.h
	include/alibabacloud/nlb/model/UpdateServerGroupAttributeRequest.h
	include/alibabacloud/nlb/model/UpdateServerGroupAttributeResult.h
	include/alibabacloud/nlb/model/UpdateServerGroupServersAttributeRequest.h
	include/alibabacloud/nlb/model/UpdateServerGroupServersAttributeResult.h )

set(nlb_src 
	src/NlbClient.cc
	src/model/AddServersToServerGroupRequest.cc
	src/model/AddServersToServerGroupResult.cc
	src/model/AssociateAdditionalCertificatesWithListenerRequest.cc
	src/model/AssociateAdditionalCertificatesWithListenerResult.cc
	src/model/AttachCommonBandwidthPackageToLoadBalancerRequest.cc
	src/model/AttachCommonBandwidthPackageToLoadBalancerResult.cc
	src/model/CancelShiftLoadBalancerZonesRequest.cc
	src/model/CancelShiftLoadBalancerZonesResult.cc
	src/model/CreateListenerRequest.cc
	src/model/CreateListenerResult.cc
	src/model/CreateLoadBalancerRequest.cc
	src/model/CreateLoadBalancerResult.cc
	src/model/CreateSecurityPolicyRequest.cc
	src/model/CreateSecurityPolicyResult.cc
	src/model/CreateServerGroupRequest.cc
	src/model/CreateServerGroupResult.cc
	src/model/DeleteListenerRequest.cc
	src/model/DeleteListenerResult.cc
	src/model/DeleteLoadBalancerRequest.cc
	src/model/DeleteLoadBalancerResult.cc
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
	src/model/DisableLoadBalancerIpv6InternetRequest.cc
	src/model/DisableLoadBalancerIpv6InternetResult.cc
	src/model/DisassociateAdditionalCertificatesWithListenerRequest.cc
	src/model/DisassociateAdditionalCertificatesWithListenerResult.cc
	src/model/EnableLoadBalancerIpv6InternetRequest.cc
	src/model/EnableLoadBalancerIpv6InternetResult.cc
	src/model/GetJobStatusRequest.cc
	src/model/GetJobStatusResult.cc
	src/model/GetListenerAttributeRequest.cc
	src/model/GetListenerAttributeResult.cc
	src/model/GetListenerHealthStatusRequest.cc
	src/model/GetListenerHealthStatusResult.cc
	src/model/GetLoadBalancerAttributeRequest.cc
	src/model/GetLoadBalancerAttributeResult.cc
	src/model/ListListenerCertificatesRequest.cc
	src/model/ListListenerCertificatesResult.cc
	src/model/ListListenersRequest.cc
	src/model/ListListenersResult.cc
	src/model/ListLoadBalancersRequest.cc
	src/model/ListLoadBalancersResult.cc
	src/model/ListSecurityPolicyRequest.cc
	src/model/ListSecurityPolicyResult.cc
	src/model/ListServerGroupServersRequest.cc
	src/model/ListServerGroupServersResult.cc
	src/model/ListServerGroupsRequest.cc
	src/model/ListServerGroupsResult.cc
	src/model/ListSystemSecurityPolicyRequest.cc
	src/model/ListSystemSecurityPolicyResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/LoadBalancerJoinSecurityGroupRequest.cc
	src/model/LoadBalancerJoinSecurityGroupResult.cc
	src/model/LoadBalancerLeaveSecurityGroupRequest.cc
	src/model/LoadBalancerLeaveSecurityGroupResult.cc
	src/model/MoveResourceGroupRequest.cc
	src/model/MoveResourceGroupResult.cc
	src/model/RemoveServersFromServerGroupRequest.cc
	src/model/RemoveServersFromServerGroupResult.cc
	src/model/StartListenerRequest.cc
	src/model/StartListenerResult.cc
	src/model/StartShiftLoadBalancerZonesRequest.cc
	src/model/StartShiftLoadBalancerZonesResult.cc
	src/model/StopListenerRequest.cc
	src/model/StopListenerResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateListenerAttributeRequest.cc
	src/model/UpdateListenerAttributeResult.cc
	src/model/UpdateLoadBalancerAddressTypeConfigRequest.cc
	src/model/UpdateLoadBalancerAddressTypeConfigResult.cc
	src/model/UpdateLoadBalancerAttributeRequest.cc
	src/model/UpdateLoadBalancerAttributeResult.cc
	src/model/UpdateLoadBalancerProtectionRequest.cc
	src/model/UpdateLoadBalancerProtectionResult.cc
	src/model/UpdateLoadBalancerZonesRequest.cc
	src/model/UpdateLoadBalancerZonesResult.cc
	src/model/UpdateSecurityPolicyAttributeRequest.cc
	src/model/UpdateSecurityPolicyAttributeResult.cc
	src/model/UpdateServerGroupAttributeRequest.cc
	src/model/UpdateServerGroupAttributeResult.cc
	src/model/UpdateServerGroupServersAttributeRequest.cc
	src/model/UpdateServerGroupServersAttributeResult.cc )

add_library(nlb ${LIB_TYPE}
	${nlb_public_header}
	${nlb_public_header_model}
	${nlb_src})

set_target_properties(nlb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}nlb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(nlb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_NLB_LIBRARY)
endif()

target_include_directories(nlb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(nlb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(nlb
		jsoncpp)
	target_include_directories(nlb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(nlb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(nlb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(nlb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(nlb
		jsoncpp)
endif()

install(FILES ${nlb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/nlb)
install(FILES ${nlb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/nlb/model)
install(TARGETS nlb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)