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

set(resourcesharing_public_header 
	include/alibabacloud/resourcesharing/ResourceSharingClient.h
	include/alibabacloud/resourcesharing/ResourceSharingExport.h )

set(resourcesharing_public_header_model 
	include/alibabacloud/resourcesharing/model/AcceptResourceShareInvitationRequest.h
	include/alibabacloud/resourcesharing/model/AcceptResourceShareInvitationResult.h
	include/alibabacloud/resourcesharing/model/AssociateResourceShareRequest.h
	include/alibabacloud/resourcesharing/model/AssociateResourceShareResult.h
	include/alibabacloud/resourcesharing/model/AssociateResourceSharePermissionRequest.h
	include/alibabacloud/resourcesharing/model/AssociateResourceSharePermissionResult.h
	include/alibabacloud/resourcesharing/model/ChangeResourceGroupRequest.h
	include/alibabacloud/resourcesharing/model/ChangeResourceGroupResult.h
	include/alibabacloud/resourcesharing/model/CheckSharingWithResourceDirectoryStatusRequest.h
	include/alibabacloud/resourcesharing/model/CheckSharingWithResourceDirectoryStatusResult.h
	include/alibabacloud/resourcesharing/model/CreateResourceShareRequest.h
	include/alibabacloud/resourcesharing/model/CreateResourceShareResult.h
	include/alibabacloud/resourcesharing/model/DeleteResourceShareRequest.h
	include/alibabacloud/resourcesharing/model/DeleteResourceShareResult.h
	include/alibabacloud/resourcesharing/model/DescribeRegionsRequest.h
	include/alibabacloud/resourcesharing/model/DescribeRegionsResult.h
	include/alibabacloud/resourcesharing/model/DisassociateResourceShareRequest.h
	include/alibabacloud/resourcesharing/model/DisassociateResourceShareResult.h
	include/alibabacloud/resourcesharing/model/DisassociateResourceSharePermissionRequest.h
	include/alibabacloud/resourcesharing/model/DisassociateResourceSharePermissionResult.h
	include/alibabacloud/resourcesharing/model/EnableSharingWithResourceDirectoryRequest.h
	include/alibabacloud/resourcesharing/model/EnableSharingWithResourceDirectoryResult.h
	include/alibabacloud/resourcesharing/model/GetPermissionRequest.h
	include/alibabacloud/resourcesharing/model/GetPermissionResult.h
	include/alibabacloud/resourcesharing/model/ListPermissionVersionsRequest.h
	include/alibabacloud/resourcesharing/model/ListPermissionVersionsResult.h
	include/alibabacloud/resourcesharing/model/ListPermissionsRequest.h
	include/alibabacloud/resourcesharing/model/ListPermissionsResult.h
	include/alibabacloud/resourcesharing/model/ListResourceShareAssociationsRequest.h
	include/alibabacloud/resourcesharing/model/ListResourceShareAssociationsResult.h
	include/alibabacloud/resourcesharing/model/ListResourceShareInvitationsRequest.h
	include/alibabacloud/resourcesharing/model/ListResourceShareInvitationsResult.h
	include/alibabacloud/resourcesharing/model/ListResourceSharePermissionsRequest.h
	include/alibabacloud/resourcesharing/model/ListResourceSharePermissionsResult.h
	include/alibabacloud/resourcesharing/model/ListResourceSharesRequest.h
	include/alibabacloud/resourcesharing/model/ListResourceSharesResult.h
	include/alibabacloud/resourcesharing/model/ListSharedResourcesRequest.h
	include/alibabacloud/resourcesharing/model/ListSharedResourcesResult.h
	include/alibabacloud/resourcesharing/model/ListSharedTargetsRequest.h
	include/alibabacloud/resourcesharing/model/ListSharedTargetsResult.h
	include/alibabacloud/resourcesharing/model/RejectResourceShareInvitationRequest.h
	include/alibabacloud/resourcesharing/model/RejectResourceShareInvitationResult.h
	include/alibabacloud/resourcesharing/model/UpdateResourceShareRequest.h
	include/alibabacloud/resourcesharing/model/UpdateResourceShareResult.h )

set(resourcesharing_src 
	src/ResourceSharingClient.cc
	src/model/AcceptResourceShareInvitationRequest.cc
	src/model/AcceptResourceShareInvitationResult.cc
	src/model/AssociateResourceShareRequest.cc
	src/model/AssociateResourceShareResult.cc
	src/model/AssociateResourceSharePermissionRequest.cc
	src/model/AssociateResourceSharePermissionResult.cc
	src/model/ChangeResourceGroupRequest.cc
	src/model/ChangeResourceGroupResult.cc
	src/model/CheckSharingWithResourceDirectoryStatusRequest.cc
	src/model/CheckSharingWithResourceDirectoryStatusResult.cc
	src/model/CreateResourceShareRequest.cc
	src/model/CreateResourceShareResult.cc
	src/model/DeleteResourceShareRequest.cc
	src/model/DeleteResourceShareResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DisassociateResourceShareRequest.cc
	src/model/DisassociateResourceShareResult.cc
	src/model/DisassociateResourceSharePermissionRequest.cc
	src/model/DisassociateResourceSharePermissionResult.cc
	src/model/EnableSharingWithResourceDirectoryRequest.cc
	src/model/EnableSharingWithResourceDirectoryResult.cc
	src/model/GetPermissionRequest.cc
	src/model/GetPermissionResult.cc
	src/model/ListPermissionVersionsRequest.cc
	src/model/ListPermissionVersionsResult.cc
	src/model/ListPermissionsRequest.cc
	src/model/ListPermissionsResult.cc
	src/model/ListResourceShareAssociationsRequest.cc
	src/model/ListResourceShareAssociationsResult.cc
	src/model/ListResourceShareInvitationsRequest.cc
	src/model/ListResourceShareInvitationsResult.cc
	src/model/ListResourceSharePermissionsRequest.cc
	src/model/ListResourceSharePermissionsResult.cc
	src/model/ListResourceSharesRequest.cc
	src/model/ListResourceSharesResult.cc
	src/model/ListSharedResourcesRequest.cc
	src/model/ListSharedResourcesResult.cc
	src/model/ListSharedTargetsRequest.cc
	src/model/ListSharedTargetsResult.cc
	src/model/RejectResourceShareInvitationRequest.cc
	src/model/RejectResourceShareInvitationResult.cc
	src/model/UpdateResourceShareRequest.cc
	src/model/UpdateResourceShareResult.cc )

add_library(resourcesharing ${LIB_TYPE}
	${resourcesharing_public_header}
	${resourcesharing_public_header_model}
	${resourcesharing_src})

set_target_properties(resourcesharing
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}resourcesharing
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(resourcesharing
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_RESOURCESHARING_LIBRARY)
endif()

target_include_directories(resourcesharing
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(resourcesharing
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(resourcesharing
		jsoncpp)
	target_include_directories(resourcesharing
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(resourcesharing
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(resourcesharing
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(resourcesharing
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(resourcesharing
		jsoncpp)
endif()

install(FILES ${resourcesharing_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/resourcesharing)
install(FILES ${resourcesharing_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/resourcesharing/model)
install(TARGETS resourcesharing
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)