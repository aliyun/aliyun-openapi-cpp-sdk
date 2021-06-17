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

set(ga_public_header 
	include/alibabacloud/ga/GaClient.h
	include/alibabacloud/ga/GaExport.h )

set(ga_public_header_model 
	include/alibabacloud/ga/model/AddEntriesToAclRequest.h
	include/alibabacloud/ga/model/AddEntriesToAclResult.h
	include/alibabacloud/ga/model/AssociateAclsWithListenerRequest.h
	include/alibabacloud/ga/model/AssociateAclsWithListenerResult.h
	include/alibabacloud/ga/model/AttachDdosToAcceleratorRequest.h
	include/alibabacloud/ga/model/AttachDdosToAcceleratorResult.h
	include/alibabacloud/ga/model/AttachLogStoreToEndpointGroupRequest.h
	include/alibabacloud/ga/model/AttachLogStoreToEndpointGroupResult.h
	include/alibabacloud/ga/model/BandwidthPackageAddAcceleratorRequest.h
	include/alibabacloud/ga/model/BandwidthPackageAddAcceleratorResult.h
	include/alibabacloud/ga/model/BandwidthPackageRemoveAcceleratorRequest.h
	include/alibabacloud/ga/model/BandwidthPackageRemoveAcceleratorResult.h
	include/alibabacloud/ga/model/ConfigEndpointProbeRequest.h
	include/alibabacloud/ga/model/ConfigEndpointProbeResult.h
	include/alibabacloud/ga/model/CreateAcceleratorRequest.h
	include/alibabacloud/ga/model/CreateAcceleratorResult.h
	include/alibabacloud/ga/model/CreateAclRequest.h
	include/alibabacloud/ga/model/CreateAclResult.h
	include/alibabacloud/ga/model/CreateBandwidthPackageRequest.h
	include/alibabacloud/ga/model/CreateBandwidthPackageResult.h
	include/alibabacloud/ga/model/CreateEndpointGroupRequest.h
	include/alibabacloud/ga/model/CreateEndpointGroupResult.h
	include/alibabacloud/ga/model/CreateForwardingRulesRequest.h
	include/alibabacloud/ga/model/CreateForwardingRulesResult.h
	include/alibabacloud/ga/model/CreateIpSetsRequest.h
	include/alibabacloud/ga/model/CreateIpSetsResult.h
	include/alibabacloud/ga/model/CreateListenerRequest.h
	include/alibabacloud/ga/model/CreateListenerResult.h
	include/alibabacloud/ga/model/DeleteAcceleratorRequest.h
	include/alibabacloud/ga/model/DeleteAcceleratorResult.h
	include/alibabacloud/ga/model/DeleteAclRequest.h
	include/alibabacloud/ga/model/DeleteAclResult.h
	include/alibabacloud/ga/model/DeleteBandwidthPackageRequest.h
	include/alibabacloud/ga/model/DeleteBandwidthPackageResult.h
	include/alibabacloud/ga/model/DeleteEndpointGroupRequest.h
	include/alibabacloud/ga/model/DeleteEndpointGroupResult.h
	include/alibabacloud/ga/model/DeleteForwardingRulesRequest.h
	include/alibabacloud/ga/model/DeleteForwardingRulesResult.h
	include/alibabacloud/ga/model/DeleteIpSetRequest.h
	include/alibabacloud/ga/model/DeleteIpSetResult.h
	include/alibabacloud/ga/model/DeleteIpSetsRequest.h
	include/alibabacloud/ga/model/DeleteIpSetsResult.h
	include/alibabacloud/ga/model/DeleteListenerRequest.h
	include/alibabacloud/ga/model/DeleteListenerResult.h
	include/alibabacloud/ga/model/DescribeAcceleratorRequest.h
	include/alibabacloud/ga/model/DescribeAcceleratorResult.h
	include/alibabacloud/ga/model/DescribeBandwidthPackageRequest.h
	include/alibabacloud/ga/model/DescribeBandwidthPackageResult.h
	include/alibabacloud/ga/model/DescribeEndpointGroupRequest.h
	include/alibabacloud/ga/model/DescribeEndpointGroupResult.h
	include/alibabacloud/ga/model/DescribeIpSetRequest.h
	include/alibabacloud/ga/model/DescribeIpSetResult.h
	include/alibabacloud/ga/model/DescribeListenerRequest.h
	include/alibabacloud/ga/model/DescribeListenerResult.h
	include/alibabacloud/ga/model/DescribeRegionsRequest.h
	include/alibabacloud/ga/model/DescribeRegionsResult.h
	include/alibabacloud/ga/model/DetachDdosFromAcceleratorRequest.h
	include/alibabacloud/ga/model/DetachDdosFromAcceleratorResult.h
	include/alibabacloud/ga/model/DetachLogStoreFromEndpointGroupRequest.h
	include/alibabacloud/ga/model/DetachLogStoreFromEndpointGroupResult.h
	include/alibabacloud/ga/model/DissociateAclsFromListenerRequest.h
	include/alibabacloud/ga/model/DissociateAclsFromListenerResult.h
	include/alibabacloud/ga/model/GetAclRequest.h
	include/alibabacloud/ga/model/GetAclResult.h
	include/alibabacloud/ga/model/ListAccelerateAreasRequest.h
	include/alibabacloud/ga/model/ListAccelerateAreasResult.h
	include/alibabacloud/ga/model/ListAcceleratorsRequest.h
	include/alibabacloud/ga/model/ListAcceleratorsResult.h
	include/alibabacloud/ga/model/ListAclsRequest.h
	include/alibabacloud/ga/model/ListAclsResult.h
	include/alibabacloud/ga/model/ListAvailableAccelerateAreasRequest.h
	include/alibabacloud/ga/model/ListAvailableAccelerateAreasResult.h
	include/alibabacloud/ga/model/ListAvailableBusiRegionsRequest.h
	include/alibabacloud/ga/model/ListAvailableBusiRegionsResult.h
	include/alibabacloud/ga/model/ListBandwidthPackagesRequest.h
	include/alibabacloud/ga/model/ListBandwidthPackagesResult.h
	include/alibabacloud/ga/model/ListBandwidthackagesRequest.h
	include/alibabacloud/ga/model/ListBandwidthackagesResult.h
	include/alibabacloud/ga/model/ListBusiRegionsRequest.h
	include/alibabacloud/ga/model/ListBusiRegionsResult.h
	include/alibabacloud/ga/model/ListEndpointGroupsRequest.h
	include/alibabacloud/ga/model/ListEndpointGroupsResult.h
	include/alibabacloud/ga/model/ListForwardingRulesRequest.h
	include/alibabacloud/ga/model/ListForwardingRulesResult.h
	include/alibabacloud/ga/model/ListIpSetsRequest.h
	include/alibabacloud/ga/model/ListIpSetsResult.h
	include/alibabacloud/ga/model/ListListenersRequest.h
	include/alibabacloud/ga/model/ListListenersResult.h
	include/alibabacloud/ga/model/RemoveEntriesFromAclRequest.h
	include/alibabacloud/ga/model/RemoveEntriesFromAclResult.h
	include/alibabacloud/ga/model/ReplaceBandwidthPackageRequest.h
	include/alibabacloud/ga/model/ReplaceBandwidthPackageResult.h
	include/alibabacloud/ga/model/UpdateAcceleratorRequest.h
	include/alibabacloud/ga/model/UpdateAcceleratorResult.h
	include/alibabacloud/ga/model/UpdateAclAttributeRequest.h
	include/alibabacloud/ga/model/UpdateAclAttributeResult.h
	include/alibabacloud/ga/model/UpdateBandwidthPackageRequest.h
	include/alibabacloud/ga/model/UpdateBandwidthPackageResult.h
	include/alibabacloud/ga/model/UpdateEndpointGroupRequest.h
	include/alibabacloud/ga/model/UpdateEndpointGroupResult.h
	include/alibabacloud/ga/model/UpdateEndpointGroupAttributeRequest.h
	include/alibabacloud/ga/model/UpdateEndpointGroupAttributeResult.h
	include/alibabacloud/ga/model/UpdateForwardingRulesRequest.h
	include/alibabacloud/ga/model/UpdateForwardingRulesResult.h
	include/alibabacloud/ga/model/UpdateIpSetRequest.h
	include/alibabacloud/ga/model/UpdateIpSetResult.h
	include/alibabacloud/ga/model/UpdateIpSetsRequest.h
	include/alibabacloud/ga/model/UpdateIpSetsResult.h
	include/alibabacloud/ga/model/UpdateListenerRequest.h
	include/alibabacloud/ga/model/UpdateListenerResult.h )

set(ga_src 
	src/GaClient.cc
	src/model/AddEntriesToAclRequest.cc
	src/model/AddEntriesToAclResult.cc
	src/model/AssociateAclsWithListenerRequest.cc
	src/model/AssociateAclsWithListenerResult.cc
	src/model/AttachDdosToAcceleratorRequest.cc
	src/model/AttachDdosToAcceleratorResult.cc
	src/model/AttachLogStoreToEndpointGroupRequest.cc
	src/model/AttachLogStoreToEndpointGroupResult.cc
	src/model/BandwidthPackageAddAcceleratorRequest.cc
	src/model/BandwidthPackageAddAcceleratorResult.cc
	src/model/BandwidthPackageRemoveAcceleratorRequest.cc
	src/model/BandwidthPackageRemoveAcceleratorResult.cc
	src/model/ConfigEndpointProbeRequest.cc
	src/model/ConfigEndpointProbeResult.cc
	src/model/CreateAcceleratorRequest.cc
	src/model/CreateAcceleratorResult.cc
	src/model/CreateAclRequest.cc
	src/model/CreateAclResult.cc
	src/model/CreateBandwidthPackageRequest.cc
	src/model/CreateBandwidthPackageResult.cc
	src/model/CreateEndpointGroupRequest.cc
	src/model/CreateEndpointGroupResult.cc
	src/model/CreateForwardingRulesRequest.cc
	src/model/CreateForwardingRulesResult.cc
	src/model/CreateIpSetsRequest.cc
	src/model/CreateIpSetsResult.cc
	src/model/CreateListenerRequest.cc
	src/model/CreateListenerResult.cc
	src/model/DeleteAcceleratorRequest.cc
	src/model/DeleteAcceleratorResult.cc
	src/model/DeleteAclRequest.cc
	src/model/DeleteAclResult.cc
	src/model/DeleteBandwidthPackageRequest.cc
	src/model/DeleteBandwidthPackageResult.cc
	src/model/DeleteEndpointGroupRequest.cc
	src/model/DeleteEndpointGroupResult.cc
	src/model/DeleteForwardingRulesRequest.cc
	src/model/DeleteForwardingRulesResult.cc
	src/model/DeleteIpSetRequest.cc
	src/model/DeleteIpSetResult.cc
	src/model/DeleteIpSetsRequest.cc
	src/model/DeleteIpSetsResult.cc
	src/model/DeleteListenerRequest.cc
	src/model/DeleteListenerResult.cc
	src/model/DescribeAcceleratorRequest.cc
	src/model/DescribeAcceleratorResult.cc
	src/model/DescribeBandwidthPackageRequest.cc
	src/model/DescribeBandwidthPackageResult.cc
	src/model/DescribeEndpointGroupRequest.cc
	src/model/DescribeEndpointGroupResult.cc
	src/model/DescribeIpSetRequest.cc
	src/model/DescribeIpSetResult.cc
	src/model/DescribeListenerRequest.cc
	src/model/DescribeListenerResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DetachDdosFromAcceleratorRequest.cc
	src/model/DetachDdosFromAcceleratorResult.cc
	src/model/DetachLogStoreFromEndpointGroupRequest.cc
	src/model/DetachLogStoreFromEndpointGroupResult.cc
	src/model/DissociateAclsFromListenerRequest.cc
	src/model/DissociateAclsFromListenerResult.cc
	src/model/GetAclRequest.cc
	src/model/GetAclResult.cc
	src/model/ListAccelerateAreasRequest.cc
	src/model/ListAccelerateAreasResult.cc
	src/model/ListAcceleratorsRequest.cc
	src/model/ListAcceleratorsResult.cc
	src/model/ListAclsRequest.cc
	src/model/ListAclsResult.cc
	src/model/ListAvailableAccelerateAreasRequest.cc
	src/model/ListAvailableAccelerateAreasResult.cc
	src/model/ListAvailableBusiRegionsRequest.cc
	src/model/ListAvailableBusiRegionsResult.cc
	src/model/ListBandwidthPackagesRequest.cc
	src/model/ListBandwidthPackagesResult.cc
	src/model/ListBandwidthackagesRequest.cc
	src/model/ListBandwidthackagesResult.cc
	src/model/ListBusiRegionsRequest.cc
	src/model/ListBusiRegionsResult.cc
	src/model/ListEndpointGroupsRequest.cc
	src/model/ListEndpointGroupsResult.cc
	src/model/ListForwardingRulesRequest.cc
	src/model/ListForwardingRulesResult.cc
	src/model/ListIpSetsRequest.cc
	src/model/ListIpSetsResult.cc
	src/model/ListListenersRequest.cc
	src/model/ListListenersResult.cc
	src/model/RemoveEntriesFromAclRequest.cc
	src/model/RemoveEntriesFromAclResult.cc
	src/model/ReplaceBandwidthPackageRequest.cc
	src/model/ReplaceBandwidthPackageResult.cc
	src/model/UpdateAcceleratorRequest.cc
	src/model/UpdateAcceleratorResult.cc
	src/model/UpdateAclAttributeRequest.cc
	src/model/UpdateAclAttributeResult.cc
	src/model/UpdateBandwidthPackageRequest.cc
	src/model/UpdateBandwidthPackageResult.cc
	src/model/UpdateEndpointGroupRequest.cc
	src/model/UpdateEndpointGroupResult.cc
	src/model/UpdateEndpointGroupAttributeRequest.cc
	src/model/UpdateEndpointGroupAttributeResult.cc
	src/model/UpdateForwardingRulesRequest.cc
	src/model/UpdateForwardingRulesResult.cc
	src/model/UpdateIpSetRequest.cc
	src/model/UpdateIpSetResult.cc
	src/model/UpdateIpSetsRequest.cc
	src/model/UpdateIpSetsResult.cc
	src/model/UpdateListenerRequest.cc
	src/model/UpdateListenerResult.cc )

add_library(ga ${LIB_TYPE}
	${ga_public_header}
	${ga_public_header_model}
	${ga_src})

set_target_properties(ga
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ga
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ga
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_GA_LIBRARY)
endif()

target_include_directories(ga
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ga
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ga
		jsoncpp)
	target_include_directories(ga
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ga
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ga
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ga
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ga
		jsoncpp)
endif()

install(FILES ${ga_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ga)
install(FILES ${ga_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ga/model)
install(TARGETS ga
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)