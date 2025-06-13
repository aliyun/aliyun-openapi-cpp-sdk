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

set(ram_public_header 
	include/alibabacloud/ram/RamClient.h
	include/alibabacloud/ram/RamExport.h )

set(ram_public_header_model 
	include/alibabacloud/ram/model/AddUserToGroupRequest.h
	include/alibabacloud/ram/model/AddUserToGroupResult.h
	include/alibabacloud/ram/model/AttachPolicyToGroupRequest.h
	include/alibabacloud/ram/model/AttachPolicyToGroupResult.h
	include/alibabacloud/ram/model/AttachPolicyToRoleRequest.h
	include/alibabacloud/ram/model/AttachPolicyToRoleResult.h
	include/alibabacloud/ram/model/AttachPolicyToUserRequest.h
	include/alibabacloud/ram/model/AttachPolicyToUserResult.h
	include/alibabacloud/ram/model/BindMFADeviceRequest.h
	include/alibabacloud/ram/model/BindMFADeviceResult.h
	include/alibabacloud/ram/model/ChangePasswordRequest.h
	include/alibabacloud/ram/model/ChangePasswordResult.h
	include/alibabacloud/ram/model/ClearAccountAliasRequest.h
	include/alibabacloud/ram/model/ClearAccountAliasResult.h
	include/alibabacloud/ram/model/CreateAccessKeyRequest.h
	include/alibabacloud/ram/model/CreateAccessKeyResult.h
	include/alibabacloud/ram/model/CreateGroupRequest.h
	include/alibabacloud/ram/model/CreateGroupResult.h
	include/alibabacloud/ram/model/CreateLoginProfileRequest.h
	include/alibabacloud/ram/model/CreateLoginProfileResult.h
	include/alibabacloud/ram/model/CreatePolicyRequest.h
	include/alibabacloud/ram/model/CreatePolicyResult.h
	include/alibabacloud/ram/model/CreatePolicyVersionRequest.h
	include/alibabacloud/ram/model/CreatePolicyVersionResult.h
	include/alibabacloud/ram/model/CreateRoleRequest.h
	include/alibabacloud/ram/model/CreateRoleResult.h
	include/alibabacloud/ram/model/CreateUserRequest.h
	include/alibabacloud/ram/model/CreateUserResult.h
	include/alibabacloud/ram/model/CreateVirtualMFADeviceRequest.h
	include/alibabacloud/ram/model/CreateVirtualMFADeviceResult.h
	include/alibabacloud/ram/model/DecodeDiagnosticMessageRequest.h
	include/alibabacloud/ram/model/DecodeDiagnosticMessageResult.h
	include/alibabacloud/ram/model/DeleteAccessKeyRequest.h
	include/alibabacloud/ram/model/DeleteAccessKeyResult.h
	include/alibabacloud/ram/model/DeleteGroupRequest.h
	include/alibabacloud/ram/model/DeleteGroupResult.h
	include/alibabacloud/ram/model/DeleteLoginProfileRequest.h
	include/alibabacloud/ram/model/DeleteLoginProfileResult.h
	include/alibabacloud/ram/model/DeletePolicyRequest.h
	include/alibabacloud/ram/model/DeletePolicyResult.h
	include/alibabacloud/ram/model/DeletePolicyVersionRequest.h
	include/alibabacloud/ram/model/DeletePolicyVersionResult.h
	include/alibabacloud/ram/model/DeleteRoleRequest.h
	include/alibabacloud/ram/model/DeleteRoleResult.h
	include/alibabacloud/ram/model/DeleteUserRequest.h
	include/alibabacloud/ram/model/DeleteUserResult.h
	include/alibabacloud/ram/model/DeleteVirtualMFADeviceRequest.h
	include/alibabacloud/ram/model/DeleteVirtualMFADeviceResult.h
	include/alibabacloud/ram/model/DetachPolicyFromGroupRequest.h
	include/alibabacloud/ram/model/DetachPolicyFromGroupResult.h
	include/alibabacloud/ram/model/DetachPolicyFromRoleRequest.h
	include/alibabacloud/ram/model/DetachPolicyFromRoleResult.h
	include/alibabacloud/ram/model/DetachPolicyFromUserRequest.h
	include/alibabacloud/ram/model/DetachPolicyFromUserResult.h
	include/alibabacloud/ram/model/GetAccessKeyLastUsedRequest.h
	include/alibabacloud/ram/model/GetAccessKeyLastUsedResult.h
	include/alibabacloud/ram/model/GetAccountAliasRequest.h
	include/alibabacloud/ram/model/GetAccountAliasResult.h
	include/alibabacloud/ram/model/GetGroupRequest.h
	include/alibabacloud/ram/model/GetGroupResult.h
	include/alibabacloud/ram/model/GetLoginProfileRequest.h
	include/alibabacloud/ram/model/GetLoginProfileResult.h
	include/alibabacloud/ram/model/GetPasswordPolicyRequest.h
	include/alibabacloud/ram/model/GetPasswordPolicyResult.h
	include/alibabacloud/ram/model/GetPolicyRequest.h
	include/alibabacloud/ram/model/GetPolicyResult.h
	include/alibabacloud/ram/model/GetPolicyVersionRequest.h
	include/alibabacloud/ram/model/GetPolicyVersionResult.h
	include/alibabacloud/ram/model/GetRoleRequest.h
	include/alibabacloud/ram/model/GetRoleResult.h
	include/alibabacloud/ram/model/GetSecurityPreferenceRequest.h
	include/alibabacloud/ram/model/GetSecurityPreferenceResult.h
	include/alibabacloud/ram/model/GetUserRequest.h
	include/alibabacloud/ram/model/GetUserResult.h
	include/alibabacloud/ram/model/GetUserMFAInfoRequest.h
	include/alibabacloud/ram/model/GetUserMFAInfoResult.h
	include/alibabacloud/ram/model/ListAccessKeysRequest.h
	include/alibabacloud/ram/model/ListAccessKeysResult.h
	include/alibabacloud/ram/model/ListEntitiesForPolicyRequest.h
	include/alibabacloud/ram/model/ListEntitiesForPolicyResult.h
	include/alibabacloud/ram/model/ListGroupsRequest.h
	include/alibabacloud/ram/model/ListGroupsResult.h
	include/alibabacloud/ram/model/ListGroupsForUserRequest.h
	include/alibabacloud/ram/model/ListGroupsForUserResult.h
	include/alibabacloud/ram/model/ListPoliciesRequest.h
	include/alibabacloud/ram/model/ListPoliciesResult.h
	include/alibabacloud/ram/model/ListPoliciesForGroupRequest.h
	include/alibabacloud/ram/model/ListPoliciesForGroupResult.h
	include/alibabacloud/ram/model/ListPoliciesForRoleRequest.h
	include/alibabacloud/ram/model/ListPoliciesForRoleResult.h
	include/alibabacloud/ram/model/ListPoliciesForUserRequest.h
	include/alibabacloud/ram/model/ListPoliciesForUserResult.h
	include/alibabacloud/ram/model/ListPolicyVersionsRequest.h
	include/alibabacloud/ram/model/ListPolicyVersionsResult.h
	include/alibabacloud/ram/model/ListRolesRequest.h
	include/alibabacloud/ram/model/ListRolesResult.h
	include/alibabacloud/ram/model/ListTagResourcesRequest.h
	include/alibabacloud/ram/model/ListTagResourcesResult.h
	include/alibabacloud/ram/model/ListUsersRequest.h
	include/alibabacloud/ram/model/ListUsersResult.h
	include/alibabacloud/ram/model/ListUsersForGroupRequest.h
	include/alibabacloud/ram/model/ListUsersForGroupResult.h
	include/alibabacloud/ram/model/ListVirtualMFADevicesRequest.h
	include/alibabacloud/ram/model/ListVirtualMFADevicesResult.h
	include/alibabacloud/ram/model/RemoveUserFromGroupRequest.h
	include/alibabacloud/ram/model/RemoveUserFromGroupResult.h
	include/alibabacloud/ram/model/SetAccountAliasRequest.h
	include/alibabacloud/ram/model/SetAccountAliasResult.h
	include/alibabacloud/ram/model/SetDefaultPolicyVersionRequest.h
	include/alibabacloud/ram/model/SetDefaultPolicyVersionResult.h
	include/alibabacloud/ram/model/SetPasswordPolicyRequest.h
	include/alibabacloud/ram/model/SetPasswordPolicyResult.h
	include/alibabacloud/ram/model/SetSecurityPreferenceRequest.h
	include/alibabacloud/ram/model/SetSecurityPreferenceResult.h
	include/alibabacloud/ram/model/TagResourcesRequest.h
	include/alibabacloud/ram/model/TagResourcesResult.h
	include/alibabacloud/ram/model/UnbindMFADeviceRequest.h
	include/alibabacloud/ram/model/UnbindMFADeviceResult.h
	include/alibabacloud/ram/model/UntagResourcesRequest.h
	include/alibabacloud/ram/model/UntagResourcesResult.h
	include/alibabacloud/ram/model/UpdateAccessKeyRequest.h
	include/alibabacloud/ram/model/UpdateAccessKeyResult.h
	include/alibabacloud/ram/model/UpdateGroupRequest.h
	include/alibabacloud/ram/model/UpdateGroupResult.h
	include/alibabacloud/ram/model/UpdateLoginProfileRequest.h
	include/alibabacloud/ram/model/UpdateLoginProfileResult.h
	include/alibabacloud/ram/model/UpdatePolicyDescriptionRequest.h
	include/alibabacloud/ram/model/UpdatePolicyDescriptionResult.h
	include/alibabacloud/ram/model/UpdateRoleRequest.h
	include/alibabacloud/ram/model/UpdateRoleResult.h
	include/alibabacloud/ram/model/UpdateUserRequest.h
	include/alibabacloud/ram/model/UpdateUserResult.h )

set(ram_src 
	src/RamClient.cc
	src/model/AddUserToGroupRequest.cc
	src/model/AddUserToGroupResult.cc
	src/model/AttachPolicyToGroupRequest.cc
	src/model/AttachPolicyToGroupResult.cc
	src/model/AttachPolicyToRoleRequest.cc
	src/model/AttachPolicyToRoleResult.cc
	src/model/AttachPolicyToUserRequest.cc
	src/model/AttachPolicyToUserResult.cc
	src/model/BindMFADeviceRequest.cc
	src/model/BindMFADeviceResult.cc
	src/model/ChangePasswordRequest.cc
	src/model/ChangePasswordResult.cc
	src/model/ClearAccountAliasRequest.cc
	src/model/ClearAccountAliasResult.cc
	src/model/CreateAccessKeyRequest.cc
	src/model/CreateAccessKeyResult.cc
	src/model/CreateGroupRequest.cc
	src/model/CreateGroupResult.cc
	src/model/CreateLoginProfileRequest.cc
	src/model/CreateLoginProfileResult.cc
	src/model/CreatePolicyRequest.cc
	src/model/CreatePolicyResult.cc
	src/model/CreatePolicyVersionRequest.cc
	src/model/CreatePolicyVersionResult.cc
	src/model/CreateRoleRequest.cc
	src/model/CreateRoleResult.cc
	src/model/CreateUserRequest.cc
	src/model/CreateUserResult.cc
	src/model/CreateVirtualMFADeviceRequest.cc
	src/model/CreateVirtualMFADeviceResult.cc
	src/model/DecodeDiagnosticMessageRequest.cc
	src/model/DecodeDiagnosticMessageResult.cc
	src/model/DeleteAccessKeyRequest.cc
	src/model/DeleteAccessKeyResult.cc
	src/model/DeleteGroupRequest.cc
	src/model/DeleteGroupResult.cc
	src/model/DeleteLoginProfileRequest.cc
	src/model/DeleteLoginProfileResult.cc
	src/model/DeletePolicyRequest.cc
	src/model/DeletePolicyResult.cc
	src/model/DeletePolicyVersionRequest.cc
	src/model/DeletePolicyVersionResult.cc
	src/model/DeleteRoleRequest.cc
	src/model/DeleteRoleResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/DeleteVirtualMFADeviceRequest.cc
	src/model/DeleteVirtualMFADeviceResult.cc
	src/model/DetachPolicyFromGroupRequest.cc
	src/model/DetachPolicyFromGroupResult.cc
	src/model/DetachPolicyFromRoleRequest.cc
	src/model/DetachPolicyFromRoleResult.cc
	src/model/DetachPolicyFromUserRequest.cc
	src/model/DetachPolicyFromUserResult.cc
	src/model/GetAccessKeyLastUsedRequest.cc
	src/model/GetAccessKeyLastUsedResult.cc
	src/model/GetAccountAliasRequest.cc
	src/model/GetAccountAliasResult.cc
	src/model/GetGroupRequest.cc
	src/model/GetGroupResult.cc
	src/model/GetLoginProfileRequest.cc
	src/model/GetLoginProfileResult.cc
	src/model/GetPasswordPolicyRequest.cc
	src/model/GetPasswordPolicyResult.cc
	src/model/GetPolicyRequest.cc
	src/model/GetPolicyResult.cc
	src/model/GetPolicyVersionRequest.cc
	src/model/GetPolicyVersionResult.cc
	src/model/GetRoleRequest.cc
	src/model/GetRoleResult.cc
	src/model/GetSecurityPreferenceRequest.cc
	src/model/GetSecurityPreferenceResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc
	src/model/GetUserMFAInfoRequest.cc
	src/model/GetUserMFAInfoResult.cc
	src/model/ListAccessKeysRequest.cc
	src/model/ListAccessKeysResult.cc
	src/model/ListEntitiesForPolicyRequest.cc
	src/model/ListEntitiesForPolicyResult.cc
	src/model/ListGroupsRequest.cc
	src/model/ListGroupsResult.cc
	src/model/ListGroupsForUserRequest.cc
	src/model/ListGroupsForUserResult.cc
	src/model/ListPoliciesRequest.cc
	src/model/ListPoliciesResult.cc
	src/model/ListPoliciesForGroupRequest.cc
	src/model/ListPoliciesForGroupResult.cc
	src/model/ListPoliciesForRoleRequest.cc
	src/model/ListPoliciesForRoleResult.cc
	src/model/ListPoliciesForUserRequest.cc
	src/model/ListPoliciesForUserResult.cc
	src/model/ListPolicyVersionsRequest.cc
	src/model/ListPolicyVersionsResult.cc
	src/model/ListRolesRequest.cc
	src/model/ListRolesResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/ListUsersForGroupRequest.cc
	src/model/ListUsersForGroupResult.cc
	src/model/ListVirtualMFADevicesRequest.cc
	src/model/ListVirtualMFADevicesResult.cc
	src/model/RemoveUserFromGroupRequest.cc
	src/model/RemoveUserFromGroupResult.cc
	src/model/SetAccountAliasRequest.cc
	src/model/SetAccountAliasResult.cc
	src/model/SetDefaultPolicyVersionRequest.cc
	src/model/SetDefaultPolicyVersionResult.cc
	src/model/SetPasswordPolicyRequest.cc
	src/model/SetPasswordPolicyResult.cc
	src/model/SetSecurityPreferenceRequest.cc
	src/model/SetSecurityPreferenceResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UnbindMFADeviceRequest.cc
	src/model/UnbindMFADeviceResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateAccessKeyRequest.cc
	src/model/UpdateAccessKeyResult.cc
	src/model/UpdateGroupRequest.cc
	src/model/UpdateGroupResult.cc
	src/model/UpdateLoginProfileRequest.cc
	src/model/UpdateLoginProfileResult.cc
	src/model/UpdatePolicyDescriptionRequest.cc
	src/model/UpdatePolicyDescriptionResult.cc
	src/model/UpdateRoleRequest.cc
	src/model/UpdateRoleResult.cc
	src/model/UpdateUserRequest.cc
	src/model/UpdateUserResult.cc )

add_library(ram ${LIB_TYPE}
	${ram_public_header}
	${ram_public_header_model}
	${ram_src})

set_target_properties(ram
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ram
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ram
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_RAM_LIBRARY)
endif()

target_include_directories(ram
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ram
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ram
		jsoncpp)
	target_include_directories(ram
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ram
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ram
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ram
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ram
		jsoncpp)
endif()

install(FILES ${ram_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ram)
install(FILES ${ram_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ram/model)
install(TARGETS ram
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)