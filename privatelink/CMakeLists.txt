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

set(privatelink_public_header 
	include/alibabacloud/privatelink/PrivatelinkClient.h
	include/alibabacloud/privatelink/PrivatelinkExport.h )

set(privatelink_public_header_model 
	include/alibabacloud/privatelink/model/AddUserToVpcEndpointServiceRequest.h
	include/alibabacloud/privatelink/model/AddUserToVpcEndpointServiceResult.h
	include/alibabacloud/privatelink/model/AddZoneToVpcEndpointRequest.h
	include/alibabacloud/privatelink/model/AddZoneToVpcEndpointResult.h
	include/alibabacloud/privatelink/model/AttachResourceToVpcEndpointServiceRequest.h
	include/alibabacloud/privatelink/model/AttachResourceToVpcEndpointServiceResult.h
	include/alibabacloud/privatelink/model/AttachSecurityGroupToVpcEndpointRequest.h
	include/alibabacloud/privatelink/model/AttachSecurityGroupToVpcEndpointResult.h
	include/alibabacloud/privatelink/model/ChangeResourceGroupRequest.h
	include/alibabacloud/privatelink/model/ChangeResourceGroupResult.h
	include/alibabacloud/privatelink/model/CheckProductOpenRequest.h
	include/alibabacloud/privatelink/model/CheckProductOpenResult.h
	include/alibabacloud/privatelink/model/CheckResourceSupportOperateRequest.h
	include/alibabacloud/privatelink/model/CheckResourceSupportOperateResult.h
	include/alibabacloud/privatelink/model/CreateVpcEndpointRequest.h
	include/alibabacloud/privatelink/model/CreateVpcEndpointResult.h
	include/alibabacloud/privatelink/model/CreateVpcEndpointServiceRequest.h
	include/alibabacloud/privatelink/model/CreateVpcEndpointServiceResult.h
	include/alibabacloud/privatelink/model/DeleteVpcEndpointRequest.h
	include/alibabacloud/privatelink/model/DeleteVpcEndpointResult.h
	include/alibabacloud/privatelink/model/DeleteVpcEndpointServiceRequest.h
	include/alibabacloud/privatelink/model/DeleteVpcEndpointServiceResult.h
	include/alibabacloud/privatelink/model/DescribeRegionsRequest.h
	include/alibabacloud/privatelink/model/DescribeRegionsResult.h
	include/alibabacloud/privatelink/model/DescribeZonesRequest.h
	include/alibabacloud/privatelink/model/DescribeZonesResult.h
	include/alibabacloud/privatelink/model/DetachResourceFromVpcEndpointServiceRequest.h
	include/alibabacloud/privatelink/model/DetachResourceFromVpcEndpointServiceResult.h
	include/alibabacloud/privatelink/model/DetachSecurityGroupFromVpcEndpointRequest.h
	include/alibabacloud/privatelink/model/DetachSecurityGroupFromVpcEndpointResult.h
	include/alibabacloud/privatelink/model/DisableVpcEndpointConnectionRequest.h
	include/alibabacloud/privatelink/model/DisableVpcEndpointConnectionResult.h
	include/alibabacloud/privatelink/model/DisableVpcEndpointZoneConnectionRequest.h
	include/alibabacloud/privatelink/model/DisableVpcEndpointZoneConnectionResult.h
	include/alibabacloud/privatelink/model/EnableVpcEndpointConnectionRequest.h
	include/alibabacloud/privatelink/model/EnableVpcEndpointConnectionResult.h
	include/alibabacloud/privatelink/model/EnableVpcEndpointZoneConnectionRequest.h
	include/alibabacloud/privatelink/model/EnableVpcEndpointZoneConnectionResult.h
	include/alibabacloud/privatelink/model/GetVpcEndpointAttributeRequest.h
	include/alibabacloud/privatelink/model/GetVpcEndpointAttributeResult.h
	include/alibabacloud/privatelink/model/GetVpcEndpointServiceAttributeRequest.h
	include/alibabacloud/privatelink/model/GetVpcEndpointServiceAttributeResult.h
	include/alibabacloud/privatelink/model/ListVpcEndpointConnectionsRequest.h
	include/alibabacloud/privatelink/model/ListVpcEndpointConnectionsResult.h
	include/alibabacloud/privatelink/model/ListVpcEndpointSecurityGroupsRequest.h
	include/alibabacloud/privatelink/model/ListVpcEndpointSecurityGroupsResult.h
	include/alibabacloud/privatelink/model/ListVpcEndpointServiceResourcesRequest.h
	include/alibabacloud/privatelink/model/ListVpcEndpointServiceResourcesResult.h
	include/alibabacloud/privatelink/model/ListVpcEndpointServiceUsersRequest.h
	include/alibabacloud/privatelink/model/ListVpcEndpointServiceUsersResult.h
	include/alibabacloud/privatelink/model/ListVpcEndpointServicesRequest.h
	include/alibabacloud/privatelink/model/ListVpcEndpointServicesResult.h
	include/alibabacloud/privatelink/model/ListVpcEndpointServicesByEndUserRequest.h
	include/alibabacloud/privatelink/model/ListVpcEndpointServicesByEndUserResult.h
	include/alibabacloud/privatelink/model/ListVpcEndpointZonesRequest.h
	include/alibabacloud/privatelink/model/ListVpcEndpointZonesResult.h
	include/alibabacloud/privatelink/model/ListVpcEndpointsRequest.h
	include/alibabacloud/privatelink/model/ListVpcEndpointsResult.h
	include/alibabacloud/privatelink/model/NotifyResourceAddressFamilyRequest.h
	include/alibabacloud/privatelink/model/NotifyResourceAddressFamilyResult.h
	include/alibabacloud/privatelink/model/OpenPrivateLinkServiceRequest.h
	include/alibabacloud/privatelink/model/OpenPrivateLinkServiceResult.h
	include/alibabacloud/privatelink/model/RemoveUserFromVpcEndpointServiceRequest.h
	include/alibabacloud/privatelink/model/RemoveUserFromVpcEndpointServiceResult.h
	include/alibabacloud/privatelink/model/RemoveZoneFromVpcEndpointRequest.h
	include/alibabacloud/privatelink/model/RemoveZoneFromVpcEndpointResult.h
	include/alibabacloud/privatelink/model/TagResourcesRequest.h
	include/alibabacloud/privatelink/model/TagResourcesResult.h
	include/alibabacloud/privatelink/model/UpdateVpcEndpointAttributeRequest.h
	include/alibabacloud/privatelink/model/UpdateVpcEndpointAttributeResult.h
	include/alibabacloud/privatelink/model/UpdateVpcEndpointConnectionAttributeRequest.h
	include/alibabacloud/privatelink/model/UpdateVpcEndpointConnectionAttributeResult.h
	include/alibabacloud/privatelink/model/UpdateVpcEndpointServiceAttributeRequest.h
	include/alibabacloud/privatelink/model/UpdateVpcEndpointServiceAttributeResult.h
	include/alibabacloud/privatelink/model/UpdateVpcEndpointServiceResourceAttributeRequest.h
	include/alibabacloud/privatelink/model/UpdateVpcEndpointServiceResourceAttributeResult.h
	include/alibabacloud/privatelink/model/UpdateVpcEndpointZoneConnectionResourceAttributeRequest.h
	include/alibabacloud/privatelink/model/UpdateVpcEndpointZoneConnectionResourceAttributeResult.h )

set(privatelink_src 
	src/PrivatelinkClient.cc
	src/model/AddUserToVpcEndpointServiceRequest.cc
	src/model/AddUserToVpcEndpointServiceResult.cc
	src/model/AddZoneToVpcEndpointRequest.cc
	src/model/AddZoneToVpcEndpointResult.cc
	src/model/AttachResourceToVpcEndpointServiceRequest.cc
	src/model/AttachResourceToVpcEndpointServiceResult.cc
	src/model/AttachSecurityGroupToVpcEndpointRequest.cc
	src/model/AttachSecurityGroupToVpcEndpointResult.cc
	src/model/ChangeResourceGroupRequest.cc
	src/model/ChangeResourceGroupResult.cc
	src/model/CheckProductOpenRequest.cc
	src/model/CheckProductOpenResult.cc
	src/model/CheckResourceSupportOperateRequest.cc
	src/model/CheckResourceSupportOperateResult.cc
	src/model/CreateVpcEndpointRequest.cc
	src/model/CreateVpcEndpointResult.cc
	src/model/CreateVpcEndpointServiceRequest.cc
	src/model/CreateVpcEndpointServiceResult.cc
	src/model/DeleteVpcEndpointRequest.cc
	src/model/DeleteVpcEndpointResult.cc
	src/model/DeleteVpcEndpointServiceRequest.cc
	src/model/DeleteVpcEndpointServiceResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeZonesRequest.cc
	src/model/DescribeZonesResult.cc
	src/model/DetachResourceFromVpcEndpointServiceRequest.cc
	src/model/DetachResourceFromVpcEndpointServiceResult.cc
	src/model/DetachSecurityGroupFromVpcEndpointRequest.cc
	src/model/DetachSecurityGroupFromVpcEndpointResult.cc
	src/model/DisableVpcEndpointConnectionRequest.cc
	src/model/DisableVpcEndpointConnectionResult.cc
	src/model/DisableVpcEndpointZoneConnectionRequest.cc
	src/model/DisableVpcEndpointZoneConnectionResult.cc
	src/model/EnableVpcEndpointConnectionRequest.cc
	src/model/EnableVpcEndpointConnectionResult.cc
	src/model/EnableVpcEndpointZoneConnectionRequest.cc
	src/model/EnableVpcEndpointZoneConnectionResult.cc
	src/model/GetVpcEndpointAttributeRequest.cc
	src/model/GetVpcEndpointAttributeResult.cc
	src/model/GetVpcEndpointServiceAttributeRequest.cc
	src/model/GetVpcEndpointServiceAttributeResult.cc
	src/model/ListVpcEndpointConnectionsRequest.cc
	src/model/ListVpcEndpointConnectionsResult.cc
	src/model/ListVpcEndpointSecurityGroupsRequest.cc
	src/model/ListVpcEndpointSecurityGroupsResult.cc
	src/model/ListVpcEndpointServiceResourcesRequest.cc
	src/model/ListVpcEndpointServiceResourcesResult.cc
	src/model/ListVpcEndpointServiceUsersRequest.cc
	src/model/ListVpcEndpointServiceUsersResult.cc
	src/model/ListVpcEndpointServicesRequest.cc
	src/model/ListVpcEndpointServicesResult.cc
	src/model/ListVpcEndpointServicesByEndUserRequest.cc
	src/model/ListVpcEndpointServicesByEndUserResult.cc
	src/model/ListVpcEndpointZonesRequest.cc
	src/model/ListVpcEndpointZonesResult.cc
	src/model/ListVpcEndpointsRequest.cc
	src/model/ListVpcEndpointsResult.cc
	src/model/NotifyResourceAddressFamilyRequest.cc
	src/model/NotifyResourceAddressFamilyResult.cc
	src/model/OpenPrivateLinkServiceRequest.cc
	src/model/OpenPrivateLinkServiceResult.cc
	src/model/RemoveUserFromVpcEndpointServiceRequest.cc
	src/model/RemoveUserFromVpcEndpointServiceResult.cc
	src/model/RemoveZoneFromVpcEndpointRequest.cc
	src/model/RemoveZoneFromVpcEndpointResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UpdateVpcEndpointAttributeRequest.cc
	src/model/UpdateVpcEndpointAttributeResult.cc
	src/model/UpdateVpcEndpointConnectionAttributeRequest.cc
	src/model/UpdateVpcEndpointConnectionAttributeResult.cc
	src/model/UpdateVpcEndpointServiceAttributeRequest.cc
	src/model/UpdateVpcEndpointServiceAttributeResult.cc
	src/model/UpdateVpcEndpointServiceResourceAttributeRequest.cc
	src/model/UpdateVpcEndpointServiceResourceAttributeResult.cc
	src/model/UpdateVpcEndpointZoneConnectionResourceAttributeRequest.cc
	src/model/UpdateVpcEndpointZoneConnectionResourceAttributeResult.cc )

add_library(privatelink ${LIB_TYPE}
	${privatelink_public_header}
	${privatelink_public_header_model}
	${privatelink_src})

set_target_properties(privatelink
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}privatelink
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(privatelink
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_PRIVATELINK_LIBRARY)
endif()

target_include_directories(privatelink
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(privatelink
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(privatelink
		jsoncpp)
	target_include_directories(privatelink
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(privatelink
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(privatelink
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(privatelink
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(privatelink
		jsoncpp)
endif()

install(FILES ${privatelink_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/privatelink)
install(FILES ${privatelink_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/privatelink/model)
install(TARGETS privatelink
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)