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

set(gwlb_public_header 
	include/alibabacloud/gwlb/GwlbClient.h
	include/alibabacloud/gwlb/GwlbExport.h )

set(gwlb_public_header_model 
	include/alibabacloud/gwlb/model/AddServersToServerGroupRequest.h
	include/alibabacloud/gwlb/model/AddServersToServerGroupResult.h
	include/alibabacloud/gwlb/model/CreateListenerRequest.h
	include/alibabacloud/gwlb/model/CreateListenerResult.h
	include/alibabacloud/gwlb/model/CreateLoadBalancerRequest.h
	include/alibabacloud/gwlb/model/CreateLoadBalancerResult.h
	include/alibabacloud/gwlb/model/CreateServerGroupRequest.h
	include/alibabacloud/gwlb/model/CreateServerGroupResult.h
	include/alibabacloud/gwlb/model/DeleteListenerRequest.h
	include/alibabacloud/gwlb/model/DeleteListenerResult.h
	include/alibabacloud/gwlb/model/DeleteLoadBalancerRequest.h
	include/alibabacloud/gwlb/model/DeleteLoadBalancerResult.h
	include/alibabacloud/gwlb/model/DeleteServerGroupRequest.h
	include/alibabacloud/gwlb/model/DeleteServerGroupResult.h
	include/alibabacloud/gwlb/model/DescribeRegionsRequest.h
	include/alibabacloud/gwlb/model/DescribeRegionsResult.h
	include/alibabacloud/gwlb/model/DescribeZonesRequest.h
	include/alibabacloud/gwlb/model/DescribeZonesResult.h
	include/alibabacloud/gwlb/model/GetListenerAttributeRequest.h
	include/alibabacloud/gwlb/model/GetListenerAttributeResult.h
	include/alibabacloud/gwlb/model/GetListenerHealthStatusRequest.h
	include/alibabacloud/gwlb/model/GetListenerHealthStatusResult.h
	include/alibabacloud/gwlb/model/GetLoadBalancerAttributeRequest.h
	include/alibabacloud/gwlb/model/GetLoadBalancerAttributeResult.h
	include/alibabacloud/gwlb/model/ListListenersRequest.h
	include/alibabacloud/gwlb/model/ListListenersResult.h
	include/alibabacloud/gwlb/model/ListLoadBalancersRequest.h
	include/alibabacloud/gwlb/model/ListLoadBalancersResult.h
	include/alibabacloud/gwlb/model/ListServerGroupServersRequest.h
	include/alibabacloud/gwlb/model/ListServerGroupServersResult.h
	include/alibabacloud/gwlb/model/ListServerGroupsRequest.h
	include/alibabacloud/gwlb/model/ListServerGroupsResult.h
	include/alibabacloud/gwlb/model/ListTagResourcesRequest.h
	include/alibabacloud/gwlb/model/ListTagResourcesResult.h
	include/alibabacloud/gwlb/model/MoveResourceGroupRequest.h
	include/alibabacloud/gwlb/model/MoveResourceGroupResult.h
	include/alibabacloud/gwlb/model/RemoveServersFromServerGroupRequest.h
	include/alibabacloud/gwlb/model/RemoveServersFromServerGroupResult.h
	include/alibabacloud/gwlb/model/TagResourcesRequest.h
	include/alibabacloud/gwlb/model/TagResourcesResult.h
	include/alibabacloud/gwlb/model/UntagResourcesRequest.h
	include/alibabacloud/gwlb/model/UntagResourcesResult.h
	include/alibabacloud/gwlb/model/UpdateListenerAttributeRequest.h
	include/alibabacloud/gwlb/model/UpdateListenerAttributeResult.h
	include/alibabacloud/gwlb/model/UpdateLoadBalancerAttributeRequest.h
	include/alibabacloud/gwlb/model/UpdateLoadBalancerAttributeResult.h
	include/alibabacloud/gwlb/model/UpdateLoadBalancerZonesRequest.h
	include/alibabacloud/gwlb/model/UpdateLoadBalancerZonesResult.h
	include/alibabacloud/gwlb/model/UpdateServerGroupAttributeRequest.h
	include/alibabacloud/gwlb/model/UpdateServerGroupAttributeResult.h )

set(gwlb_src 
	src/GwlbClient.cc
	src/model/AddServersToServerGroupRequest.cc
	src/model/AddServersToServerGroupResult.cc
	src/model/CreateListenerRequest.cc
	src/model/CreateListenerResult.cc
	src/model/CreateLoadBalancerRequest.cc
	src/model/CreateLoadBalancerResult.cc
	src/model/CreateServerGroupRequest.cc
	src/model/CreateServerGroupResult.cc
	src/model/DeleteListenerRequest.cc
	src/model/DeleteListenerResult.cc
	src/model/DeleteLoadBalancerRequest.cc
	src/model/DeleteLoadBalancerResult.cc
	src/model/DeleteServerGroupRequest.cc
	src/model/DeleteServerGroupResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeZonesRequest.cc
	src/model/DescribeZonesResult.cc
	src/model/GetListenerAttributeRequest.cc
	src/model/GetListenerAttributeResult.cc
	src/model/GetListenerHealthStatusRequest.cc
	src/model/GetListenerHealthStatusResult.cc
	src/model/GetLoadBalancerAttributeRequest.cc
	src/model/GetLoadBalancerAttributeResult.cc
	src/model/ListListenersRequest.cc
	src/model/ListListenersResult.cc
	src/model/ListLoadBalancersRequest.cc
	src/model/ListLoadBalancersResult.cc
	src/model/ListServerGroupServersRequest.cc
	src/model/ListServerGroupServersResult.cc
	src/model/ListServerGroupsRequest.cc
	src/model/ListServerGroupsResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/MoveResourceGroupRequest.cc
	src/model/MoveResourceGroupResult.cc
	src/model/RemoveServersFromServerGroupRequest.cc
	src/model/RemoveServersFromServerGroupResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateListenerAttributeRequest.cc
	src/model/UpdateListenerAttributeResult.cc
	src/model/UpdateLoadBalancerAttributeRequest.cc
	src/model/UpdateLoadBalancerAttributeResult.cc
	src/model/UpdateLoadBalancerZonesRequest.cc
	src/model/UpdateLoadBalancerZonesResult.cc
	src/model/UpdateServerGroupAttributeRequest.cc
	src/model/UpdateServerGroupAttributeResult.cc )

add_library(gwlb ${LIB_TYPE}
	${gwlb_public_header}
	${gwlb_public_header_model}
	${gwlb_src})

set_target_properties(gwlb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gwlb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(gwlb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_GWLB_LIBRARY)
endif()

target_include_directories(gwlb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(gwlb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(gwlb
		jsoncpp)
	target_include_directories(gwlb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(gwlb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(gwlb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(gwlb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(gwlb
		jsoncpp)
endif()

install(FILES ${gwlb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/gwlb)
install(FILES ${gwlb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/gwlb/model)
install(TARGETS gwlb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)