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

set(ims_public_header 
	include/alibabacloud/ims/ImsClient.h
	include/alibabacloud/ims/ImsExport.h )

set(ims_public_header_model 
	include/alibabacloud/ims/model/AddClientIdToOIDCProviderRequest.h
	include/alibabacloud/ims/model/AddClientIdToOIDCProviderResult.h
	include/alibabacloud/ims/model/AddFingerprintToOIDCProviderRequest.h
	include/alibabacloud/ims/model/AddFingerprintToOIDCProviderResult.h
	include/alibabacloud/ims/model/AddUserToGroupRequest.h
	include/alibabacloud/ims/model/AddUserToGroupResult.h
	include/alibabacloud/ims/model/BindMFADeviceRequest.h
	include/alibabacloud/ims/model/BindMFADeviceResult.h
	include/alibabacloud/ims/model/ChangePasswordRequest.h
	include/alibabacloud/ims/model/ChangePasswordResult.h
	include/alibabacloud/ims/model/CreateAccessKeyRequest.h
	include/alibabacloud/ims/model/CreateAccessKeyResult.h
	include/alibabacloud/ims/model/CreateAppSecretRequest.h
	include/alibabacloud/ims/model/CreateAppSecretResult.h
	include/alibabacloud/ims/model/CreateApplicationRequest.h
	include/alibabacloud/ims/model/CreateApplicationResult.h
	include/alibabacloud/ims/model/CreateGroupRequest.h
	include/alibabacloud/ims/model/CreateGroupResult.h
	include/alibabacloud/ims/model/CreateLoginProfileRequest.h
	include/alibabacloud/ims/model/CreateLoginProfileResult.h
	include/alibabacloud/ims/model/CreateOIDCProviderRequest.h
	include/alibabacloud/ims/model/CreateOIDCProviderResult.h
	include/alibabacloud/ims/model/CreateSAMLProviderRequest.h
	include/alibabacloud/ims/model/CreateSAMLProviderResult.h
	include/alibabacloud/ims/model/CreateUserRequest.h
	include/alibabacloud/ims/model/CreateUserResult.h
	include/alibabacloud/ims/model/CreateVirtualMFADeviceRequest.h
	include/alibabacloud/ims/model/CreateVirtualMFADeviceResult.h
	include/alibabacloud/ims/model/DeleteAccessKeyRequest.h
	include/alibabacloud/ims/model/DeleteAccessKeyResult.h
	include/alibabacloud/ims/model/DeleteAppSecretRequest.h
	include/alibabacloud/ims/model/DeleteAppSecretResult.h
	include/alibabacloud/ims/model/DeleteApplicationRequest.h
	include/alibabacloud/ims/model/DeleteApplicationResult.h
	include/alibabacloud/ims/model/DeleteGroupRequest.h
	include/alibabacloud/ims/model/DeleteGroupResult.h
	include/alibabacloud/ims/model/DeleteLoginProfileRequest.h
	include/alibabacloud/ims/model/DeleteLoginProfileResult.h
	include/alibabacloud/ims/model/DeleteOIDCProviderRequest.h
	include/alibabacloud/ims/model/DeleteOIDCProviderResult.h
	include/alibabacloud/ims/model/DeleteSAMLProviderRequest.h
	include/alibabacloud/ims/model/DeleteSAMLProviderResult.h
	include/alibabacloud/ims/model/DeleteUserRequest.h
	include/alibabacloud/ims/model/DeleteUserResult.h
	include/alibabacloud/ims/model/DeleteVirtualMFADeviceRequest.h
	include/alibabacloud/ims/model/DeleteVirtualMFADeviceResult.h
	include/alibabacloud/ims/model/DisableVirtualMFARequest.h
	include/alibabacloud/ims/model/DisableVirtualMFAResult.h
	include/alibabacloud/ims/model/GenerateCredentialReportRequest.h
	include/alibabacloud/ims/model/GenerateCredentialReportResult.h
	include/alibabacloud/ims/model/GetAccessKeyLastUsedRequest.h
	include/alibabacloud/ims/model/GetAccessKeyLastUsedResult.h
	include/alibabacloud/ims/model/GetAccountMFAInfoRequest.h
	include/alibabacloud/ims/model/GetAccountMFAInfoResult.h
	include/alibabacloud/ims/model/GetAccountSecurityPracticeReportRequest.h
	include/alibabacloud/ims/model/GetAccountSecurityPracticeReportResult.h
	include/alibabacloud/ims/model/GetAccountSummaryRequest.h
	include/alibabacloud/ims/model/GetAccountSummaryResult.h
	include/alibabacloud/ims/model/GetAppSecretRequest.h
	include/alibabacloud/ims/model/GetAppSecretResult.h
	include/alibabacloud/ims/model/GetApplicationRequest.h
	include/alibabacloud/ims/model/GetApplicationResult.h
	include/alibabacloud/ims/model/GetCredentialReportRequest.h
	include/alibabacloud/ims/model/GetCredentialReportResult.h
	include/alibabacloud/ims/model/GetDefaultDomainRequest.h
	include/alibabacloud/ims/model/GetDefaultDomainResult.h
	include/alibabacloud/ims/model/GetGroupRequest.h
	include/alibabacloud/ims/model/GetGroupResult.h
	include/alibabacloud/ims/model/GetLoginProfileRequest.h
	include/alibabacloud/ims/model/GetLoginProfileResult.h
	include/alibabacloud/ims/model/GetOIDCProviderRequest.h
	include/alibabacloud/ims/model/GetOIDCProviderResult.h
	include/alibabacloud/ims/model/GetPasswordPolicyRequest.h
	include/alibabacloud/ims/model/GetPasswordPolicyResult.h
	include/alibabacloud/ims/model/GetSAMLProviderRequest.h
	include/alibabacloud/ims/model/GetSAMLProviderResult.h
	include/alibabacloud/ims/model/GetSecurityPreferenceRequest.h
	include/alibabacloud/ims/model/GetSecurityPreferenceResult.h
	include/alibabacloud/ims/model/GetUserRequest.h
	include/alibabacloud/ims/model/GetUserResult.h
	include/alibabacloud/ims/model/GetUserMFAInfoRequest.h
	include/alibabacloud/ims/model/GetUserMFAInfoResult.h
	include/alibabacloud/ims/model/GetUserSsoSettingsRequest.h
	include/alibabacloud/ims/model/GetUserSsoSettingsResult.h
	include/alibabacloud/ims/model/GetVerificationInfoRequest.h
	include/alibabacloud/ims/model/GetVerificationInfoResult.h
	include/alibabacloud/ims/model/ListAccessKeysRequest.h
	include/alibabacloud/ims/model/ListAccessKeysResult.h
	include/alibabacloud/ims/model/ListAppSecretIdsRequest.h
	include/alibabacloud/ims/model/ListAppSecretIdsResult.h
	include/alibabacloud/ims/model/ListApplicationsRequest.h
	include/alibabacloud/ims/model/ListApplicationsResult.h
	include/alibabacloud/ims/model/ListGroupsRequest.h
	include/alibabacloud/ims/model/ListGroupsResult.h
	include/alibabacloud/ims/model/ListGroupsForUserRequest.h
	include/alibabacloud/ims/model/ListGroupsForUserResult.h
	include/alibabacloud/ims/model/ListOIDCProvidersRequest.h
	include/alibabacloud/ims/model/ListOIDCProvidersResult.h
	include/alibabacloud/ims/model/ListPredefinedScopesRequest.h
	include/alibabacloud/ims/model/ListPredefinedScopesResult.h
	include/alibabacloud/ims/model/ListSAMLProvidersRequest.h
	include/alibabacloud/ims/model/ListSAMLProvidersResult.h
	include/alibabacloud/ims/model/ListTagResourcesRequest.h
	include/alibabacloud/ims/model/ListTagResourcesResult.h
	include/alibabacloud/ims/model/ListUserBasicInfosRequest.h
	include/alibabacloud/ims/model/ListUserBasicInfosResult.h
	include/alibabacloud/ims/model/ListUsersRequest.h
	include/alibabacloud/ims/model/ListUsersResult.h
	include/alibabacloud/ims/model/ListUsersForGroupRequest.h
	include/alibabacloud/ims/model/ListUsersForGroupResult.h
	include/alibabacloud/ims/model/ListVirtualMFADevicesRequest.h
	include/alibabacloud/ims/model/ListVirtualMFADevicesResult.h
	include/alibabacloud/ims/model/RemoveClientIdFromOIDCProviderRequest.h
	include/alibabacloud/ims/model/RemoveClientIdFromOIDCProviderResult.h
	include/alibabacloud/ims/model/RemoveFingerprintFromOIDCProviderRequest.h
	include/alibabacloud/ims/model/RemoveFingerprintFromOIDCProviderResult.h
	include/alibabacloud/ims/model/RemoveUserFromGroupRequest.h
	include/alibabacloud/ims/model/RemoveUserFromGroupResult.h
	include/alibabacloud/ims/model/SetDefaultDomainRequest.h
	include/alibabacloud/ims/model/SetDefaultDomainResult.h
	include/alibabacloud/ims/model/SetPasswordPolicyRequest.h
	include/alibabacloud/ims/model/SetPasswordPolicyResult.h
	include/alibabacloud/ims/model/SetSecurityPreferenceRequest.h
	include/alibabacloud/ims/model/SetSecurityPreferenceResult.h
	include/alibabacloud/ims/model/SetUserSsoSettingsRequest.h
	include/alibabacloud/ims/model/SetUserSsoSettingsResult.h
	include/alibabacloud/ims/model/TagResourcesRequest.h
	include/alibabacloud/ims/model/TagResourcesResult.h
	include/alibabacloud/ims/model/UnbindMFADeviceRequest.h
	include/alibabacloud/ims/model/UnbindMFADeviceResult.h
	include/alibabacloud/ims/model/UntagResourcesRequest.h
	include/alibabacloud/ims/model/UntagResourcesResult.h
	include/alibabacloud/ims/model/UpdateAccessKeyRequest.h
	include/alibabacloud/ims/model/UpdateAccessKeyResult.h
	include/alibabacloud/ims/model/UpdateApplicationRequest.h
	include/alibabacloud/ims/model/UpdateApplicationResult.h
	include/alibabacloud/ims/model/UpdateGroupRequest.h
	include/alibabacloud/ims/model/UpdateGroupResult.h
	include/alibabacloud/ims/model/UpdateLoginProfileRequest.h
	include/alibabacloud/ims/model/UpdateLoginProfileResult.h
	include/alibabacloud/ims/model/UpdateOIDCProviderRequest.h
	include/alibabacloud/ims/model/UpdateOIDCProviderResult.h
	include/alibabacloud/ims/model/UpdateSAMLProviderRequest.h
	include/alibabacloud/ims/model/UpdateSAMLProviderResult.h
	include/alibabacloud/ims/model/UpdateUserRequest.h
	include/alibabacloud/ims/model/UpdateUserResult.h )

set(ims_src 
	src/ImsClient.cc
	src/model/AddClientIdToOIDCProviderRequest.cc
	src/model/AddClientIdToOIDCProviderResult.cc
	src/model/AddFingerprintToOIDCProviderRequest.cc
	src/model/AddFingerprintToOIDCProviderResult.cc
	src/model/AddUserToGroupRequest.cc
	src/model/AddUserToGroupResult.cc
	src/model/BindMFADeviceRequest.cc
	src/model/BindMFADeviceResult.cc
	src/model/ChangePasswordRequest.cc
	src/model/ChangePasswordResult.cc
	src/model/CreateAccessKeyRequest.cc
	src/model/CreateAccessKeyResult.cc
	src/model/CreateAppSecretRequest.cc
	src/model/CreateAppSecretResult.cc
	src/model/CreateApplicationRequest.cc
	src/model/CreateApplicationResult.cc
	src/model/CreateGroupRequest.cc
	src/model/CreateGroupResult.cc
	src/model/CreateLoginProfileRequest.cc
	src/model/CreateLoginProfileResult.cc
	src/model/CreateOIDCProviderRequest.cc
	src/model/CreateOIDCProviderResult.cc
	src/model/CreateSAMLProviderRequest.cc
	src/model/CreateSAMLProviderResult.cc
	src/model/CreateUserRequest.cc
	src/model/CreateUserResult.cc
	src/model/CreateVirtualMFADeviceRequest.cc
	src/model/CreateVirtualMFADeviceResult.cc
	src/model/DeleteAccessKeyRequest.cc
	src/model/DeleteAccessKeyResult.cc
	src/model/DeleteAppSecretRequest.cc
	src/model/DeleteAppSecretResult.cc
	src/model/DeleteApplicationRequest.cc
	src/model/DeleteApplicationResult.cc
	src/model/DeleteGroupRequest.cc
	src/model/DeleteGroupResult.cc
	src/model/DeleteLoginProfileRequest.cc
	src/model/DeleteLoginProfileResult.cc
	src/model/DeleteOIDCProviderRequest.cc
	src/model/DeleteOIDCProviderResult.cc
	src/model/DeleteSAMLProviderRequest.cc
	src/model/DeleteSAMLProviderResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/DeleteVirtualMFADeviceRequest.cc
	src/model/DeleteVirtualMFADeviceResult.cc
	src/model/DisableVirtualMFARequest.cc
	src/model/DisableVirtualMFAResult.cc
	src/model/GenerateCredentialReportRequest.cc
	src/model/GenerateCredentialReportResult.cc
	src/model/GetAccessKeyLastUsedRequest.cc
	src/model/GetAccessKeyLastUsedResult.cc
	src/model/GetAccountMFAInfoRequest.cc
	src/model/GetAccountMFAInfoResult.cc
	src/model/GetAccountSecurityPracticeReportRequest.cc
	src/model/GetAccountSecurityPracticeReportResult.cc
	src/model/GetAccountSummaryRequest.cc
	src/model/GetAccountSummaryResult.cc
	src/model/GetAppSecretRequest.cc
	src/model/GetAppSecretResult.cc
	src/model/GetApplicationRequest.cc
	src/model/GetApplicationResult.cc
	src/model/GetCredentialReportRequest.cc
	src/model/GetCredentialReportResult.cc
	src/model/GetDefaultDomainRequest.cc
	src/model/GetDefaultDomainResult.cc
	src/model/GetGroupRequest.cc
	src/model/GetGroupResult.cc
	src/model/GetLoginProfileRequest.cc
	src/model/GetLoginProfileResult.cc
	src/model/GetOIDCProviderRequest.cc
	src/model/GetOIDCProviderResult.cc
	src/model/GetPasswordPolicyRequest.cc
	src/model/GetPasswordPolicyResult.cc
	src/model/GetSAMLProviderRequest.cc
	src/model/GetSAMLProviderResult.cc
	src/model/GetSecurityPreferenceRequest.cc
	src/model/GetSecurityPreferenceResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc
	src/model/GetUserMFAInfoRequest.cc
	src/model/GetUserMFAInfoResult.cc
	src/model/GetUserSsoSettingsRequest.cc
	src/model/GetUserSsoSettingsResult.cc
	src/model/GetVerificationInfoRequest.cc
	src/model/GetVerificationInfoResult.cc
	src/model/ListAccessKeysRequest.cc
	src/model/ListAccessKeysResult.cc
	src/model/ListAppSecretIdsRequest.cc
	src/model/ListAppSecretIdsResult.cc
	src/model/ListApplicationsRequest.cc
	src/model/ListApplicationsResult.cc
	src/model/ListGroupsRequest.cc
	src/model/ListGroupsResult.cc
	src/model/ListGroupsForUserRequest.cc
	src/model/ListGroupsForUserResult.cc
	src/model/ListOIDCProvidersRequest.cc
	src/model/ListOIDCProvidersResult.cc
	src/model/ListPredefinedScopesRequest.cc
	src/model/ListPredefinedScopesResult.cc
	src/model/ListSAMLProvidersRequest.cc
	src/model/ListSAMLProvidersResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ListUserBasicInfosRequest.cc
	src/model/ListUserBasicInfosResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/ListUsersForGroupRequest.cc
	src/model/ListUsersForGroupResult.cc
	src/model/ListVirtualMFADevicesRequest.cc
	src/model/ListVirtualMFADevicesResult.cc
	src/model/RemoveClientIdFromOIDCProviderRequest.cc
	src/model/RemoveClientIdFromOIDCProviderResult.cc
	src/model/RemoveFingerprintFromOIDCProviderRequest.cc
	src/model/RemoveFingerprintFromOIDCProviderResult.cc
	src/model/RemoveUserFromGroupRequest.cc
	src/model/RemoveUserFromGroupResult.cc
	src/model/SetDefaultDomainRequest.cc
	src/model/SetDefaultDomainResult.cc
	src/model/SetPasswordPolicyRequest.cc
	src/model/SetPasswordPolicyResult.cc
	src/model/SetSecurityPreferenceRequest.cc
	src/model/SetSecurityPreferenceResult.cc
	src/model/SetUserSsoSettingsRequest.cc
	src/model/SetUserSsoSettingsResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UnbindMFADeviceRequest.cc
	src/model/UnbindMFADeviceResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateAccessKeyRequest.cc
	src/model/UpdateAccessKeyResult.cc
	src/model/UpdateApplicationRequest.cc
	src/model/UpdateApplicationResult.cc
	src/model/UpdateGroupRequest.cc
	src/model/UpdateGroupResult.cc
	src/model/UpdateLoginProfileRequest.cc
	src/model/UpdateLoginProfileResult.cc
	src/model/UpdateOIDCProviderRequest.cc
	src/model/UpdateOIDCProviderResult.cc
	src/model/UpdateSAMLProviderRequest.cc
	src/model/UpdateSAMLProviderResult.cc
	src/model/UpdateUserRequest.cc
	src/model/UpdateUserResult.cc )

add_library(ims ${LIB_TYPE}
	${ims_public_header}
	${ims_public_header_model}
	${ims_src})

set_target_properties(ims
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ims
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ims
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_IMS_LIBRARY)
endif()

target_include_directories(ims
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ims
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ims
		jsoncpp)
	target_include_directories(ims
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ims
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ims
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ims
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ims
		jsoncpp)
endif()

install(FILES ${ims_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ims)
install(FILES ${ims_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ims/model)
install(TARGETS ims
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)