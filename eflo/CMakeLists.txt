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

set(eflo_public_header 
	include/alibabacloud/eflo/EfloClient.h
	include/alibabacloud/eflo/EfloExport.h )

set(eflo_public_header_model 
	include/alibabacloud/eflo/model/AssignLeniPrivateIpAddressRequest.h
	include/alibabacloud/eflo/model/AssignLeniPrivateIpAddressResult.h
	include/alibabacloud/eflo/model/AssignPrivateIpAddressRequest.h
	include/alibabacloud/eflo/model/AssignPrivateIpAddressResult.h
	include/alibabacloud/eflo/model/AssociateVpdCidrBlockRequest.h
	include/alibabacloud/eflo/model/AssociateVpdCidrBlockResult.h
	include/alibabacloud/eflo/model/CreateElasticNetworkInterfaceRequest.h
	include/alibabacloud/eflo/model/CreateElasticNetworkInterfaceResult.h
	include/alibabacloud/eflo/model/CreateErRequest.h
	include/alibabacloud/eflo/model/CreateErResult.h
	include/alibabacloud/eflo/model/CreateErAttachmentRequest.h
	include/alibabacloud/eflo/model/CreateErAttachmentResult.h
	include/alibabacloud/eflo/model/CreateErRouteMapRequest.h
	include/alibabacloud/eflo/model/CreateErRouteMapResult.h
	include/alibabacloud/eflo/model/CreateSubnetRequest.h
	include/alibabacloud/eflo/model/CreateSubnetResult.h
	include/alibabacloud/eflo/model/CreateVccRequest.h
	include/alibabacloud/eflo/model/CreateVccResult.h
	include/alibabacloud/eflo/model/CreateVccGrantRuleRequest.h
	include/alibabacloud/eflo/model/CreateVccGrantRuleResult.h
	include/alibabacloud/eflo/model/CreateVccRouteEntryRequest.h
	include/alibabacloud/eflo/model/CreateVccRouteEntryResult.h
	include/alibabacloud/eflo/model/CreateVpdRequest.h
	include/alibabacloud/eflo/model/CreateVpdResult.h
	include/alibabacloud/eflo/model/CreateVpdGrantRuleRequest.h
	include/alibabacloud/eflo/model/CreateVpdGrantRuleResult.h
	include/alibabacloud/eflo/model/DeleteElasticNetworkInterfaceRequest.h
	include/alibabacloud/eflo/model/DeleteElasticNetworkInterfaceResult.h
	include/alibabacloud/eflo/model/DeleteErRequest.h
	include/alibabacloud/eflo/model/DeleteErResult.h
	include/alibabacloud/eflo/model/DeleteErAttachmentRequest.h
	include/alibabacloud/eflo/model/DeleteErAttachmentResult.h
	include/alibabacloud/eflo/model/DeleteErRouteMapRequest.h
	include/alibabacloud/eflo/model/DeleteErRouteMapResult.h
	include/alibabacloud/eflo/model/DeleteSubnetRequest.h
	include/alibabacloud/eflo/model/DeleteSubnetResult.h
	include/alibabacloud/eflo/model/DeleteVccGrantRuleRequest.h
	include/alibabacloud/eflo/model/DeleteVccGrantRuleResult.h
	include/alibabacloud/eflo/model/DeleteVccRouteEntryRequest.h
	include/alibabacloud/eflo/model/DeleteVccRouteEntryResult.h
	include/alibabacloud/eflo/model/DeleteVpdRequest.h
	include/alibabacloud/eflo/model/DeleteVpdResult.h
	include/alibabacloud/eflo/model/DeleteVpdGrantRuleRequest.h
	include/alibabacloud/eflo/model/DeleteVpdGrantRuleResult.h
	include/alibabacloud/eflo/model/DescribeSlrRequest.h
	include/alibabacloud/eflo/model/DescribeSlrResult.h
	include/alibabacloud/eflo/model/GetElasticNetworkInterfaceRequest.h
	include/alibabacloud/eflo/model/GetElasticNetworkInterfaceResult.h
	include/alibabacloud/eflo/model/GetErRequest.h
	include/alibabacloud/eflo/model/GetErResult.h
	include/alibabacloud/eflo/model/GetErAttachmentRequest.h
	include/alibabacloud/eflo/model/GetErAttachmentResult.h
	include/alibabacloud/eflo/model/GetErRouteEntryRequest.h
	include/alibabacloud/eflo/model/GetErRouteEntryResult.h
	include/alibabacloud/eflo/model/GetErRouteMapRequest.h
	include/alibabacloud/eflo/model/GetErRouteMapResult.h
	include/alibabacloud/eflo/model/GetFabricTopologyRequest.h
	include/alibabacloud/eflo/model/GetFabricTopologyResult.h
	include/alibabacloud/eflo/model/GetLeniPrivateIpAddressRequest.h
	include/alibabacloud/eflo/model/GetLeniPrivateIpAddressResult.h
	include/alibabacloud/eflo/model/GetLniPrivateIpAddressRequest.h
	include/alibabacloud/eflo/model/GetLniPrivateIpAddressResult.h
	include/alibabacloud/eflo/model/GetNetworkInterfaceRequest.h
	include/alibabacloud/eflo/model/GetNetworkInterfaceResult.h
	include/alibabacloud/eflo/model/GetNodeInfoForPodRequest.h
	include/alibabacloud/eflo/model/GetNodeInfoForPodResult.h
	include/alibabacloud/eflo/model/GetSubnetRequest.h
	include/alibabacloud/eflo/model/GetSubnetResult.h
	include/alibabacloud/eflo/model/GetVccRequest.h
	include/alibabacloud/eflo/model/GetVccResult.h
	include/alibabacloud/eflo/model/GetVccGrantRuleRequest.h
	include/alibabacloud/eflo/model/GetVccGrantRuleResult.h
	include/alibabacloud/eflo/model/GetVccRouteEntryRequest.h
	include/alibabacloud/eflo/model/GetVccRouteEntryResult.h
	include/alibabacloud/eflo/model/GetVpdRequest.h
	include/alibabacloud/eflo/model/GetVpdResult.h
	include/alibabacloud/eflo/model/GetVpdGrantRuleRequest.h
	include/alibabacloud/eflo/model/GetVpdGrantRuleResult.h
	include/alibabacloud/eflo/model/GetVpdRouteEntryRequest.h
	include/alibabacloud/eflo/model/GetVpdRouteEntryResult.h
	include/alibabacloud/eflo/model/InitializeVccRequest.h
	include/alibabacloud/eflo/model/InitializeVccResult.h
	include/alibabacloud/eflo/model/ListElasticNetworkInterfacesRequest.h
	include/alibabacloud/eflo/model/ListElasticNetworkInterfacesResult.h
	include/alibabacloud/eflo/model/ListErAttachmentsRequest.h
	include/alibabacloud/eflo/model/ListErAttachmentsResult.h
	include/alibabacloud/eflo/model/ListErRouteEntriesRequest.h
	include/alibabacloud/eflo/model/ListErRouteEntriesResult.h
	include/alibabacloud/eflo/model/ListErRouteMapsRequest.h
	include/alibabacloud/eflo/model/ListErRouteMapsResult.h
	include/alibabacloud/eflo/model/ListErsRequest.h
	include/alibabacloud/eflo/model/ListErsResult.h
	include/alibabacloud/eflo/model/ListInstancesByNcdRequest.h
	include/alibabacloud/eflo/model/ListInstancesByNcdResult.h
	include/alibabacloud/eflo/model/ListLeniPrivateIpAddressesRequest.h
	include/alibabacloud/eflo/model/ListLeniPrivateIpAddressesResult.h
	include/alibabacloud/eflo/model/ListLniPrivateIpAddressRequest.h
	include/alibabacloud/eflo/model/ListLniPrivateIpAddressResult.h
	include/alibabacloud/eflo/model/ListNetworkInterfacesRequest.h
	include/alibabacloud/eflo/model/ListNetworkInterfacesResult.h
	include/alibabacloud/eflo/model/ListNodeInfosForPodRequest.h
	include/alibabacloud/eflo/model/ListNodeInfosForPodResult.h
	include/alibabacloud/eflo/model/ListSubnetsRequest.h
	include/alibabacloud/eflo/model/ListSubnetsResult.h
	include/alibabacloud/eflo/model/ListVccFlowInfosRequest.h
	include/alibabacloud/eflo/model/ListVccFlowInfosResult.h
	include/alibabacloud/eflo/model/ListVccGrantRulesRequest.h
	include/alibabacloud/eflo/model/ListVccGrantRulesResult.h
	include/alibabacloud/eflo/model/ListVccRouteEntriesRequest.h
	include/alibabacloud/eflo/model/ListVccRouteEntriesResult.h
	include/alibabacloud/eflo/model/ListVccsRequest.h
	include/alibabacloud/eflo/model/ListVccsResult.h
	include/alibabacloud/eflo/model/ListVpdGrantRulesRequest.h
	include/alibabacloud/eflo/model/ListVpdGrantRulesResult.h
	include/alibabacloud/eflo/model/ListVpdRouteEntriesRequest.h
	include/alibabacloud/eflo/model/ListVpdRouteEntriesResult.h
	include/alibabacloud/eflo/model/ListVpdsRequest.h
	include/alibabacloud/eflo/model/ListVpdsResult.h
	include/alibabacloud/eflo/model/QueryInstanceNcdRequest.h
	include/alibabacloud/eflo/model/QueryInstanceNcdResult.h
	include/alibabacloud/eflo/model/UnAssignPrivateIpAddressRequest.h
	include/alibabacloud/eflo/model/UnAssignPrivateIpAddressResult.h
	include/alibabacloud/eflo/model/UnAssociateVpdCidrBlockRequest.h
	include/alibabacloud/eflo/model/UnAssociateVpdCidrBlockResult.h
	include/alibabacloud/eflo/model/UnassignLeniPrivateIpAddressRequest.h
	include/alibabacloud/eflo/model/UnassignLeniPrivateIpAddressResult.h
	include/alibabacloud/eflo/model/UpdateElasticNetworkInterfaceRequest.h
	include/alibabacloud/eflo/model/UpdateElasticNetworkInterfaceResult.h
	include/alibabacloud/eflo/model/UpdateErRequest.h
	include/alibabacloud/eflo/model/UpdateErResult.h
	include/alibabacloud/eflo/model/UpdateErAttachmentRequest.h
	include/alibabacloud/eflo/model/UpdateErAttachmentResult.h
	include/alibabacloud/eflo/model/UpdateErRouteMapRequest.h
	include/alibabacloud/eflo/model/UpdateErRouteMapResult.h
	include/alibabacloud/eflo/model/UpdateLeniPrivateIpAddressRequest.h
	include/alibabacloud/eflo/model/UpdateLeniPrivateIpAddressResult.h
	include/alibabacloud/eflo/model/UpdateSubnetRequest.h
	include/alibabacloud/eflo/model/UpdateSubnetResult.h
	include/alibabacloud/eflo/model/UpdateVccRequest.h
	include/alibabacloud/eflo/model/UpdateVccResult.h
	include/alibabacloud/eflo/model/UpdateVpdRequest.h
	include/alibabacloud/eflo/model/UpdateVpdResult.h )

set(eflo_src 
	src/EfloClient.cc
	src/model/AssignLeniPrivateIpAddressRequest.cc
	src/model/AssignLeniPrivateIpAddressResult.cc
	src/model/AssignPrivateIpAddressRequest.cc
	src/model/AssignPrivateIpAddressResult.cc
	src/model/AssociateVpdCidrBlockRequest.cc
	src/model/AssociateVpdCidrBlockResult.cc
	src/model/CreateElasticNetworkInterfaceRequest.cc
	src/model/CreateElasticNetworkInterfaceResult.cc
	src/model/CreateErRequest.cc
	src/model/CreateErResult.cc
	src/model/CreateErAttachmentRequest.cc
	src/model/CreateErAttachmentResult.cc
	src/model/CreateErRouteMapRequest.cc
	src/model/CreateErRouteMapResult.cc
	src/model/CreateSubnetRequest.cc
	src/model/CreateSubnetResult.cc
	src/model/CreateVccRequest.cc
	src/model/CreateVccResult.cc
	src/model/CreateVccGrantRuleRequest.cc
	src/model/CreateVccGrantRuleResult.cc
	src/model/CreateVccRouteEntryRequest.cc
	src/model/CreateVccRouteEntryResult.cc
	src/model/CreateVpdRequest.cc
	src/model/CreateVpdResult.cc
	src/model/CreateVpdGrantRuleRequest.cc
	src/model/CreateVpdGrantRuleResult.cc
	src/model/DeleteElasticNetworkInterfaceRequest.cc
	src/model/DeleteElasticNetworkInterfaceResult.cc
	src/model/DeleteErRequest.cc
	src/model/DeleteErResult.cc
	src/model/DeleteErAttachmentRequest.cc
	src/model/DeleteErAttachmentResult.cc
	src/model/DeleteErRouteMapRequest.cc
	src/model/DeleteErRouteMapResult.cc
	src/model/DeleteSubnetRequest.cc
	src/model/DeleteSubnetResult.cc
	src/model/DeleteVccGrantRuleRequest.cc
	src/model/DeleteVccGrantRuleResult.cc
	src/model/DeleteVccRouteEntryRequest.cc
	src/model/DeleteVccRouteEntryResult.cc
	src/model/DeleteVpdRequest.cc
	src/model/DeleteVpdResult.cc
	src/model/DeleteVpdGrantRuleRequest.cc
	src/model/DeleteVpdGrantRuleResult.cc
	src/model/DescribeSlrRequest.cc
	src/model/DescribeSlrResult.cc
	src/model/GetElasticNetworkInterfaceRequest.cc
	src/model/GetElasticNetworkInterfaceResult.cc
	src/model/GetErRequest.cc
	src/model/GetErResult.cc
	src/model/GetErAttachmentRequest.cc
	src/model/GetErAttachmentResult.cc
	src/model/GetErRouteEntryRequest.cc
	src/model/GetErRouteEntryResult.cc
	src/model/GetErRouteMapRequest.cc
	src/model/GetErRouteMapResult.cc
	src/model/GetFabricTopologyRequest.cc
	src/model/GetFabricTopologyResult.cc
	src/model/GetLeniPrivateIpAddressRequest.cc
	src/model/GetLeniPrivateIpAddressResult.cc
	src/model/GetLniPrivateIpAddressRequest.cc
	src/model/GetLniPrivateIpAddressResult.cc
	src/model/GetNetworkInterfaceRequest.cc
	src/model/GetNetworkInterfaceResult.cc
	src/model/GetNodeInfoForPodRequest.cc
	src/model/GetNodeInfoForPodResult.cc
	src/model/GetSubnetRequest.cc
	src/model/GetSubnetResult.cc
	src/model/GetVccRequest.cc
	src/model/GetVccResult.cc
	src/model/GetVccGrantRuleRequest.cc
	src/model/GetVccGrantRuleResult.cc
	src/model/GetVccRouteEntryRequest.cc
	src/model/GetVccRouteEntryResult.cc
	src/model/GetVpdRequest.cc
	src/model/GetVpdResult.cc
	src/model/GetVpdGrantRuleRequest.cc
	src/model/GetVpdGrantRuleResult.cc
	src/model/GetVpdRouteEntryRequest.cc
	src/model/GetVpdRouteEntryResult.cc
	src/model/InitializeVccRequest.cc
	src/model/InitializeVccResult.cc
	src/model/ListElasticNetworkInterfacesRequest.cc
	src/model/ListElasticNetworkInterfacesResult.cc
	src/model/ListErAttachmentsRequest.cc
	src/model/ListErAttachmentsResult.cc
	src/model/ListErRouteEntriesRequest.cc
	src/model/ListErRouteEntriesResult.cc
	src/model/ListErRouteMapsRequest.cc
	src/model/ListErRouteMapsResult.cc
	src/model/ListErsRequest.cc
	src/model/ListErsResult.cc
	src/model/ListInstancesByNcdRequest.cc
	src/model/ListInstancesByNcdResult.cc
	src/model/ListLeniPrivateIpAddressesRequest.cc
	src/model/ListLeniPrivateIpAddressesResult.cc
	src/model/ListLniPrivateIpAddressRequest.cc
	src/model/ListLniPrivateIpAddressResult.cc
	src/model/ListNetworkInterfacesRequest.cc
	src/model/ListNetworkInterfacesResult.cc
	src/model/ListNodeInfosForPodRequest.cc
	src/model/ListNodeInfosForPodResult.cc
	src/model/ListSubnetsRequest.cc
	src/model/ListSubnetsResult.cc
	src/model/ListVccFlowInfosRequest.cc
	src/model/ListVccFlowInfosResult.cc
	src/model/ListVccGrantRulesRequest.cc
	src/model/ListVccGrantRulesResult.cc
	src/model/ListVccRouteEntriesRequest.cc
	src/model/ListVccRouteEntriesResult.cc
	src/model/ListVccsRequest.cc
	src/model/ListVccsResult.cc
	src/model/ListVpdGrantRulesRequest.cc
	src/model/ListVpdGrantRulesResult.cc
	src/model/ListVpdRouteEntriesRequest.cc
	src/model/ListVpdRouteEntriesResult.cc
	src/model/ListVpdsRequest.cc
	src/model/ListVpdsResult.cc
	src/model/QueryInstanceNcdRequest.cc
	src/model/QueryInstanceNcdResult.cc
	src/model/UnAssignPrivateIpAddressRequest.cc
	src/model/UnAssignPrivateIpAddressResult.cc
	src/model/UnAssociateVpdCidrBlockRequest.cc
	src/model/UnAssociateVpdCidrBlockResult.cc
	src/model/UnassignLeniPrivateIpAddressRequest.cc
	src/model/UnassignLeniPrivateIpAddressResult.cc
	src/model/UpdateElasticNetworkInterfaceRequest.cc
	src/model/UpdateElasticNetworkInterfaceResult.cc
	src/model/UpdateErRequest.cc
	src/model/UpdateErResult.cc
	src/model/UpdateErAttachmentRequest.cc
	src/model/UpdateErAttachmentResult.cc
	src/model/UpdateErRouteMapRequest.cc
	src/model/UpdateErRouteMapResult.cc
	src/model/UpdateLeniPrivateIpAddressRequest.cc
	src/model/UpdateLeniPrivateIpAddressResult.cc
	src/model/UpdateSubnetRequest.cc
	src/model/UpdateSubnetResult.cc
	src/model/UpdateVccRequest.cc
	src/model/UpdateVccResult.cc
	src/model/UpdateVpdRequest.cc
	src/model/UpdateVpdResult.cc )

add_library(eflo ${LIB_TYPE}
	${eflo_public_header}
	${eflo_public_header_model}
	${eflo_src})

set_target_properties(eflo
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eflo
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(eflo
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EFLO_LIBRARY)
endif()

target_include_directories(eflo
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(eflo
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(eflo
		jsoncpp)
	target_include_directories(eflo
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(eflo
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(eflo
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(eflo
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(eflo
		jsoncpp)
endif()

install(FILES ${eflo_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eflo)
install(FILES ${eflo_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eflo/model)
install(TARGETS eflo
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)