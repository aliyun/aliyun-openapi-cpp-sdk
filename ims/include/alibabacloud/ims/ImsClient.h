/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_IMS_IMSCLIENT_H_
#define ALIBABACLOUD_IMS_IMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ImsExport.h"
#include "model/AddClientIdToOIDCProviderRequest.h"
#include "model/AddClientIdToOIDCProviderResult.h"
#include "model/AddFingerprintToOIDCProviderRequest.h"
#include "model/AddFingerprintToOIDCProviderResult.h"
#include "model/AddUserToGroupRequest.h"
#include "model/AddUserToGroupResult.h"
#include "model/BindMFADeviceRequest.h"
#include "model/BindMFADeviceResult.h"
#include "model/ChangePasswordRequest.h"
#include "model/ChangePasswordResult.h"
#include "model/CreateAccessKeyRequest.h"
#include "model/CreateAccessKeyResult.h"
#include "model/CreateAppSecretRequest.h"
#include "model/CreateAppSecretResult.h"
#include "model/CreateApplicationRequest.h"
#include "model/CreateApplicationResult.h"
#include "model/CreateGroupRequest.h"
#include "model/CreateGroupResult.h"
#include "model/CreateLoginProfileRequest.h"
#include "model/CreateLoginProfileResult.h"
#include "model/CreateOIDCProviderRequest.h"
#include "model/CreateOIDCProviderResult.h"
#include "model/CreateSAMLProviderRequest.h"
#include "model/CreateSAMLProviderResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/CreateVirtualMFADeviceRequest.h"
#include "model/CreateVirtualMFADeviceResult.h"
#include "model/DeleteAccessKeyRequest.h"
#include "model/DeleteAccessKeyResult.h"
#include "model/DeleteAppSecretRequest.h"
#include "model/DeleteAppSecretResult.h"
#include "model/DeleteApplicationRequest.h"
#include "model/DeleteApplicationResult.h"
#include "model/DeleteGroupRequest.h"
#include "model/DeleteGroupResult.h"
#include "model/DeleteLoginProfileRequest.h"
#include "model/DeleteLoginProfileResult.h"
#include "model/DeleteOIDCProviderRequest.h"
#include "model/DeleteOIDCProviderResult.h"
#include "model/DeleteSAMLProviderRequest.h"
#include "model/DeleteSAMLProviderResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DeleteVirtualMFADeviceRequest.h"
#include "model/DeleteVirtualMFADeviceResult.h"
#include "model/DisableVirtualMFARequest.h"
#include "model/DisableVirtualMFAResult.h"
#include "model/GenerateCredentialReportRequest.h"
#include "model/GenerateCredentialReportResult.h"
#include "model/GetAccessKeyLastUsedRequest.h"
#include "model/GetAccessKeyLastUsedResult.h"
#include "model/GetAccountMFAInfoRequest.h"
#include "model/GetAccountMFAInfoResult.h"
#include "model/GetAccountSecurityPracticeReportRequest.h"
#include "model/GetAccountSecurityPracticeReportResult.h"
#include "model/GetAccountSummaryRequest.h"
#include "model/GetAccountSummaryResult.h"
#include "model/GetAppSecretRequest.h"
#include "model/GetAppSecretResult.h"
#include "model/GetApplicationRequest.h"
#include "model/GetApplicationResult.h"
#include "model/GetCredentialReportRequest.h"
#include "model/GetCredentialReportResult.h"
#include "model/GetDefaultDomainRequest.h"
#include "model/GetDefaultDomainResult.h"
#include "model/GetGroupRequest.h"
#include "model/GetGroupResult.h"
#include "model/GetLoginProfileRequest.h"
#include "model/GetLoginProfileResult.h"
#include "model/GetOIDCProviderRequest.h"
#include "model/GetOIDCProviderResult.h"
#include "model/GetPasswordPolicyRequest.h"
#include "model/GetPasswordPolicyResult.h"
#include "model/GetSAMLProviderRequest.h"
#include "model/GetSAMLProviderResult.h"
#include "model/GetSecurityPreferenceRequest.h"
#include "model/GetSecurityPreferenceResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/GetUserMFAInfoRequest.h"
#include "model/GetUserMFAInfoResult.h"
#include "model/GetUserSsoSettingsRequest.h"
#include "model/GetUserSsoSettingsResult.h"
#include "model/GetVerificationInfoRequest.h"
#include "model/GetVerificationInfoResult.h"
#include "model/ListAccessKeysRequest.h"
#include "model/ListAccessKeysResult.h"
#include "model/ListAppSecretIdsRequest.h"
#include "model/ListAppSecretIdsResult.h"
#include "model/ListApplicationsRequest.h"
#include "model/ListApplicationsResult.h"
#include "model/ListGroupsRequest.h"
#include "model/ListGroupsResult.h"
#include "model/ListGroupsForUserRequest.h"
#include "model/ListGroupsForUserResult.h"
#include "model/ListOIDCProvidersRequest.h"
#include "model/ListOIDCProvidersResult.h"
#include "model/ListPredefinedScopesRequest.h"
#include "model/ListPredefinedScopesResult.h"
#include "model/ListSAMLProvidersRequest.h"
#include "model/ListSAMLProvidersResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListUserBasicInfosRequest.h"
#include "model/ListUserBasicInfosResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/ListUsersForGroupRequest.h"
#include "model/ListUsersForGroupResult.h"
#include "model/ListVirtualMFADevicesRequest.h"
#include "model/ListVirtualMFADevicesResult.h"
#include "model/RemoveClientIdFromOIDCProviderRequest.h"
#include "model/RemoveClientIdFromOIDCProviderResult.h"
#include "model/RemoveFingerprintFromOIDCProviderRequest.h"
#include "model/RemoveFingerprintFromOIDCProviderResult.h"
#include "model/RemoveUserFromGroupRequest.h"
#include "model/RemoveUserFromGroupResult.h"
#include "model/SetDefaultDomainRequest.h"
#include "model/SetDefaultDomainResult.h"
#include "model/SetPasswordPolicyRequest.h"
#include "model/SetPasswordPolicyResult.h"
#include "model/SetSecurityPreferenceRequest.h"
#include "model/SetSecurityPreferenceResult.h"
#include "model/SetUserSsoSettingsRequest.h"
#include "model/SetUserSsoSettingsResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnbindMFADeviceRequest.h"
#include "model/UnbindMFADeviceResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAccessKeyRequest.h"
#include "model/UpdateAccessKeyResult.h"
#include "model/UpdateApplicationRequest.h"
#include "model/UpdateApplicationResult.h"
#include "model/UpdateGroupRequest.h"
#include "model/UpdateGroupResult.h"
#include "model/UpdateLoginProfileRequest.h"
#include "model/UpdateLoginProfileResult.h"
#include "model/UpdateOIDCProviderRequest.h"
#include "model/UpdateOIDCProviderResult.h"
#include "model/UpdateSAMLProviderRequest.h"
#include "model/UpdateSAMLProviderResult.h"
#include "model/UpdateUserRequest.h"
#include "model/UpdateUserResult.h"


namespace AlibabaCloud
{
	namespace Ims
	{
		class ALIBABACLOUD_IMS_EXPORT ImsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddClientIdToOIDCProviderResult> AddClientIdToOIDCProviderOutcome;
			typedef std::future<AddClientIdToOIDCProviderOutcome> AddClientIdToOIDCProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::AddClientIdToOIDCProviderRequest&, const AddClientIdToOIDCProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddClientIdToOIDCProviderAsyncHandler;
			typedef Outcome<Error, Model::AddFingerprintToOIDCProviderResult> AddFingerprintToOIDCProviderOutcome;
			typedef std::future<AddFingerprintToOIDCProviderOutcome> AddFingerprintToOIDCProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::AddFingerprintToOIDCProviderRequest&, const AddFingerprintToOIDCProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFingerprintToOIDCProviderAsyncHandler;
			typedef Outcome<Error, Model::AddUserToGroupResult> AddUserToGroupOutcome;
			typedef std::future<AddUserToGroupOutcome> AddUserToGroupOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::AddUserToGroupRequest&, const AddUserToGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToGroupAsyncHandler;
			typedef Outcome<Error, Model::BindMFADeviceResult> BindMFADeviceOutcome;
			typedef std::future<BindMFADeviceOutcome> BindMFADeviceOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::BindMFADeviceRequest&, const BindMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::ChangePasswordResult> ChangePasswordOutcome;
			typedef std::future<ChangePasswordOutcome> ChangePasswordOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ChangePasswordRequest&, const ChangePasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangePasswordAsyncHandler;
			typedef Outcome<Error, Model::CreateAccessKeyResult> CreateAccessKeyOutcome;
			typedef std::future<CreateAccessKeyOutcome> CreateAccessKeyOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::CreateAccessKeyRequest&, const CreateAccessKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateAppSecretResult> CreateAppSecretOutcome;
			typedef std::future<CreateAppSecretOutcome> CreateAppSecretOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::CreateAppSecretRequest&, const CreateAppSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppSecretAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationResult> CreateApplicationOutcome;
			typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::CreateApplicationRequest&, const CreateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupResult> CreateGroupOutcome;
			typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::CreateGroupRequest&, const CreateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateLoginProfileResult> CreateLoginProfileOutcome;
			typedef std::future<CreateLoginProfileOutcome> CreateLoginProfileOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::CreateLoginProfileRequest&, const CreateLoginProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoginProfileAsyncHandler;
			typedef Outcome<Error, Model::CreateOIDCProviderResult> CreateOIDCProviderOutcome;
			typedef std::future<CreateOIDCProviderOutcome> CreateOIDCProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::CreateOIDCProviderRequest&, const CreateOIDCProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOIDCProviderAsyncHandler;
			typedef Outcome<Error, Model::CreateSAMLProviderResult> CreateSAMLProviderOutcome;
			typedef std::future<CreateSAMLProviderOutcome> CreateSAMLProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::CreateSAMLProviderRequest&, const CreateSAMLProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSAMLProviderAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::CreateVirtualMFADeviceResult> CreateVirtualMFADeviceOutcome;
			typedef std::future<CreateVirtualMFADeviceOutcome> CreateVirtualMFADeviceOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::CreateVirtualMFADeviceRequest&, const CreateVirtualMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirtualMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessKeyResult> DeleteAccessKeyOutcome;
			typedef std::future<DeleteAccessKeyOutcome> DeleteAccessKeyOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::DeleteAccessKeyRequest&, const DeleteAccessKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessKeyAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppSecretResult> DeleteAppSecretOutcome;
			typedef std::future<DeleteAppSecretOutcome> DeleteAppSecretOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::DeleteAppSecretRequest&, const DeleteAppSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppSecretAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationResult> DeleteApplicationOutcome;
			typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::DeleteApplicationRequest&, const DeleteApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupResult> DeleteGroupOutcome;
			typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::DeleteGroupRequest&, const DeleteGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoginProfileResult> DeleteLoginProfileOutcome;
			typedef std::future<DeleteLoginProfileOutcome> DeleteLoginProfileOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::DeleteLoginProfileRequest&, const DeleteLoginProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginProfileAsyncHandler;
			typedef Outcome<Error, Model::DeleteOIDCProviderResult> DeleteOIDCProviderOutcome;
			typedef std::future<DeleteOIDCProviderOutcome> DeleteOIDCProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::DeleteOIDCProviderRequest&, const DeleteOIDCProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOIDCProviderAsyncHandler;
			typedef Outcome<Error, Model::DeleteSAMLProviderResult> DeleteSAMLProviderOutcome;
			typedef std::future<DeleteSAMLProviderOutcome> DeleteSAMLProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::DeleteSAMLProviderRequest&, const DeleteSAMLProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSAMLProviderAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteVirtualMFADeviceResult> DeleteVirtualMFADeviceOutcome;
			typedef std::future<DeleteVirtualMFADeviceOutcome> DeleteVirtualMFADeviceOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::DeleteVirtualMFADeviceRequest&, const DeleteVirtualMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVirtualMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::DisableVirtualMFAResult> DisableVirtualMFAOutcome;
			typedef std::future<DisableVirtualMFAOutcome> DisableVirtualMFAOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::DisableVirtualMFARequest&, const DisableVirtualMFAOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableVirtualMFAAsyncHandler;
			typedef Outcome<Error, Model::GenerateCredentialReportResult> GenerateCredentialReportOutcome;
			typedef std::future<GenerateCredentialReportOutcome> GenerateCredentialReportOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GenerateCredentialReportRequest&, const GenerateCredentialReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateCredentialReportAsyncHandler;
			typedef Outcome<Error, Model::GetAccessKeyLastUsedResult> GetAccessKeyLastUsedOutcome;
			typedef std::future<GetAccessKeyLastUsedOutcome> GetAccessKeyLastUsedOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetAccessKeyLastUsedRequest&, const GetAccessKeyLastUsedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccessKeyLastUsedAsyncHandler;
			typedef Outcome<Error, Model::GetAccountMFAInfoResult> GetAccountMFAInfoOutcome;
			typedef std::future<GetAccountMFAInfoOutcome> GetAccountMFAInfoOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetAccountMFAInfoRequest&, const GetAccountMFAInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountMFAInfoAsyncHandler;
			typedef Outcome<Error, Model::GetAccountSecurityPracticeReportResult> GetAccountSecurityPracticeReportOutcome;
			typedef std::future<GetAccountSecurityPracticeReportOutcome> GetAccountSecurityPracticeReportOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetAccountSecurityPracticeReportRequest&, const GetAccountSecurityPracticeReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountSecurityPracticeReportAsyncHandler;
			typedef Outcome<Error, Model::GetAccountSummaryResult> GetAccountSummaryOutcome;
			typedef std::future<GetAccountSummaryOutcome> GetAccountSummaryOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetAccountSummaryRequest&, const GetAccountSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetAppSecretResult> GetAppSecretOutcome;
			typedef std::future<GetAppSecretOutcome> GetAppSecretOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetAppSecretRequest&, const GetAppSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppSecretAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationResult> GetApplicationOutcome;
			typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetApplicationRequest&, const GetApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetCredentialReportResult> GetCredentialReportOutcome;
			typedef std::future<GetCredentialReportOutcome> GetCredentialReportOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetCredentialReportRequest&, const GetCredentialReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCredentialReportAsyncHandler;
			typedef Outcome<Error, Model::GetDefaultDomainResult> GetDefaultDomainOutcome;
			typedef std::future<GetDefaultDomainOutcome> GetDefaultDomainOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetDefaultDomainRequest&, const GetDefaultDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDefaultDomainAsyncHandler;
			typedef Outcome<Error, Model::GetGroupResult> GetGroupOutcome;
			typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetGroupRequest&, const GetGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupAsyncHandler;
			typedef Outcome<Error, Model::GetLoginProfileResult> GetLoginProfileOutcome;
			typedef std::future<GetLoginProfileOutcome> GetLoginProfileOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetLoginProfileRequest&, const GetLoginProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLoginProfileAsyncHandler;
			typedef Outcome<Error, Model::GetOIDCProviderResult> GetOIDCProviderOutcome;
			typedef std::future<GetOIDCProviderOutcome> GetOIDCProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetOIDCProviderRequest&, const GetOIDCProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOIDCProviderAsyncHandler;
			typedef Outcome<Error, Model::GetPasswordPolicyResult> GetPasswordPolicyOutcome;
			typedef std::future<GetPasswordPolicyOutcome> GetPasswordPolicyOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetPasswordPolicyRequest&, const GetPasswordPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPasswordPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetSAMLProviderResult> GetSAMLProviderOutcome;
			typedef std::future<GetSAMLProviderOutcome> GetSAMLProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetSAMLProviderRequest&, const GetSAMLProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSAMLProviderAsyncHandler;
			typedef Outcome<Error, Model::GetSecurityPreferenceResult> GetSecurityPreferenceOutcome;
			typedef std::future<GetSecurityPreferenceOutcome> GetSecurityPreferenceOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetSecurityPreferenceRequest&, const GetSecurityPreferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecurityPreferenceAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::GetUserMFAInfoResult> GetUserMFAInfoOutcome;
			typedef std::future<GetUserMFAInfoOutcome> GetUserMFAInfoOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetUserMFAInfoRequest&, const GetUserMFAInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserMFAInfoAsyncHandler;
			typedef Outcome<Error, Model::GetUserSsoSettingsResult> GetUserSsoSettingsOutcome;
			typedef std::future<GetUserSsoSettingsOutcome> GetUserSsoSettingsOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetUserSsoSettingsRequest&, const GetUserSsoSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserSsoSettingsAsyncHandler;
			typedef Outcome<Error, Model::GetVerificationInfoResult> GetVerificationInfoOutcome;
			typedef std::future<GetVerificationInfoOutcome> GetVerificationInfoOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::GetVerificationInfoRequest&, const GetVerificationInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVerificationInfoAsyncHandler;
			typedef Outcome<Error, Model::ListAccessKeysResult> ListAccessKeysOutcome;
			typedef std::future<ListAccessKeysOutcome> ListAccessKeysOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListAccessKeysRequest&, const ListAccessKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccessKeysAsyncHandler;
			typedef Outcome<Error, Model::ListAppSecretIdsResult> ListAppSecretIdsOutcome;
			typedef std::future<ListAppSecretIdsOutcome> ListAppSecretIdsOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListAppSecretIdsRequest&, const ListAppSecretIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppSecretIdsAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsResult> ListApplicationsOutcome;
			typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListApplicationsRequest&, const ListApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsResult> ListGroupsOutcome;
			typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListGroupsRequest&, const ListGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsForUserResult> ListGroupsForUserOutcome;
			typedef std::future<ListGroupsForUserOutcome> ListGroupsForUserOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListGroupsForUserRequest&, const ListGroupsForUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsForUserAsyncHandler;
			typedef Outcome<Error, Model::ListOIDCProvidersResult> ListOIDCProvidersOutcome;
			typedef std::future<ListOIDCProvidersOutcome> ListOIDCProvidersOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListOIDCProvidersRequest&, const ListOIDCProvidersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOIDCProvidersAsyncHandler;
			typedef Outcome<Error, Model::ListPredefinedScopesResult> ListPredefinedScopesOutcome;
			typedef std::future<ListPredefinedScopesOutcome> ListPredefinedScopesOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListPredefinedScopesRequest&, const ListPredefinedScopesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPredefinedScopesAsyncHandler;
			typedef Outcome<Error, Model::ListSAMLProvidersResult> ListSAMLProvidersOutcome;
			typedef std::future<ListSAMLProvidersOutcome> ListSAMLProvidersOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListSAMLProvidersRequest&, const ListSAMLProvidersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSAMLProvidersAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListUserBasicInfosResult> ListUserBasicInfosOutcome;
			typedef std::future<ListUserBasicInfosOutcome> ListUserBasicInfosOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListUserBasicInfosRequest&, const ListUserBasicInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserBasicInfosAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::ListUsersForGroupResult> ListUsersForGroupOutcome;
			typedef std::future<ListUsersForGroupOutcome> ListUsersForGroupOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListUsersForGroupRequest&, const ListUsersForGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersForGroupAsyncHandler;
			typedef Outcome<Error, Model::ListVirtualMFADevicesResult> ListVirtualMFADevicesOutcome;
			typedef std::future<ListVirtualMFADevicesOutcome> ListVirtualMFADevicesOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::ListVirtualMFADevicesRequest&, const ListVirtualMFADevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVirtualMFADevicesAsyncHandler;
			typedef Outcome<Error, Model::RemoveClientIdFromOIDCProviderResult> RemoveClientIdFromOIDCProviderOutcome;
			typedef std::future<RemoveClientIdFromOIDCProviderOutcome> RemoveClientIdFromOIDCProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::RemoveClientIdFromOIDCProviderRequest&, const RemoveClientIdFromOIDCProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveClientIdFromOIDCProviderAsyncHandler;
			typedef Outcome<Error, Model::RemoveFingerprintFromOIDCProviderResult> RemoveFingerprintFromOIDCProviderOutcome;
			typedef std::future<RemoveFingerprintFromOIDCProviderOutcome> RemoveFingerprintFromOIDCProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::RemoveFingerprintFromOIDCProviderRequest&, const RemoveFingerprintFromOIDCProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveFingerprintFromOIDCProviderAsyncHandler;
			typedef Outcome<Error, Model::RemoveUserFromGroupResult> RemoveUserFromGroupOutcome;
			typedef std::future<RemoveUserFromGroupOutcome> RemoveUserFromGroupOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::RemoveUserFromGroupRequest&, const RemoveUserFromGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromGroupAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultDomainResult> SetDefaultDomainOutcome;
			typedef std::future<SetDefaultDomainOutcome> SetDefaultDomainOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::SetDefaultDomainRequest&, const SetDefaultDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultDomainAsyncHandler;
			typedef Outcome<Error, Model::SetPasswordPolicyResult> SetPasswordPolicyOutcome;
			typedef std::future<SetPasswordPolicyOutcome> SetPasswordPolicyOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::SetPasswordPolicyRequest&, const SetPasswordPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPasswordPolicyAsyncHandler;
			typedef Outcome<Error, Model::SetSecurityPreferenceResult> SetSecurityPreferenceOutcome;
			typedef std::future<SetSecurityPreferenceOutcome> SetSecurityPreferenceOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::SetSecurityPreferenceRequest&, const SetSecurityPreferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSecurityPreferenceAsyncHandler;
			typedef Outcome<Error, Model::SetUserSsoSettingsResult> SetUserSsoSettingsOutcome;
			typedef std::future<SetUserSsoSettingsOutcome> SetUserSsoSettingsOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::SetUserSsoSettingsRequest&, const SetUserSsoSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetUserSsoSettingsAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnbindMFADeviceResult> UnbindMFADeviceOutcome;
			typedef std::future<UnbindMFADeviceOutcome> UnbindMFADeviceOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::UnbindMFADeviceRequest&, const UnbindMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAccessKeyResult> UpdateAccessKeyOutcome;
			typedef std::future<UpdateAccessKeyOutcome> UpdateAccessKeyOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::UpdateAccessKeyRequest&, const UpdateAccessKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccessKeyAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationResult> UpdateApplicationOutcome;
			typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::UpdateApplicationRequest&, const UpdateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationAsyncHandler;
			typedef Outcome<Error, Model::UpdateGroupResult> UpdateGroupOutcome;
			typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::UpdateGroupRequest&, const UpdateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoginProfileResult> UpdateLoginProfileOutcome;
			typedef std::future<UpdateLoginProfileOutcome> UpdateLoginProfileOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::UpdateLoginProfileRequest&, const UpdateLoginProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoginProfileAsyncHandler;
			typedef Outcome<Error, Model::UpdateOIDCProviderResult> UpdateOIDCProviderOutcome;
			typedef std::future<UpdateOIDCProviderOutcome> UpdateOIDCProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::UpdateOIDCProviderRequest&, const UpdateOIDCProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOIDCProviderAsyncHandler;
			typedef Outcome<Error, Model::UpdateSAMLProviderResult> UpdateSAMLProviderOutcome;
			typedef std::future<UpdateSAMLProviderOutcome> UpdateSAMLProviderOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::UpdateSAMLProviderRequest&, const UpdateSAMLProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSAMLProviderAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserResult> UpdateUserOutcome;
			typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
			typedef std::function<void(const ImsClient*, const Model::UpdateUserRequest&, const UpdateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;

			ImsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ImsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ImsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ImsClient();
			AddClientIdToOIDCProviderOutcome addClientIdToOIDCProvider(const Model::AddClientIdToOIDCProviderRequest &request)const;
			void addClientIdToOIDCProviderAsync(const Model::AddClientIdToOIDCProviderRequest& request, const AddClientIdToOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddClientIdToOIDCProviderOutcomeCallable addClientIdToOIDCProviderCallable(const Model::AddClientIdToOIDCProviderRequest& request) const;
			AddFingerprintToOIDCProviderOutcome addFingerprintToOIDCProvider(const Model::AddFingerprintToOIDCProviderRequest &request)const;
			void addFingerprintToOIDCProviderAsync(const Model::AddFingerprintToOIDCProviderRequest& request, const AddFingerprintToOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFingerprintToOIDCProviderOutcomeCallable addFingerprintToOIDCProviderCallable(const Model::AddFingerprintToOIDCProviderRequest& request) const;
			AddUserToGroupOutcome addUserToGroup(const Model::AddUserToGroupRequest &request)const;
			void addUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserToGroupOutcomeCallable addUserToGroupCallable(const Model::AddUserToGroupRequest& request) const;
			BindMFADeviceOutcome bindMFADevice(const Model::BindMFADeviceRequest &request)const;
			void bindMFADeviceAsync(const Model::BindMFADeviceRequest& request, const BindMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindMFADeviceOutcomeCallable bindMFADeviceCallable(const Model::BindMFADeviceRequest& request) const;
			ChangePasswordOutcome changePassword(const Model::ChangePasswordRequest &request)const;
			void changePasswordAsync(const Model::ChangePasswordRequest& request, const ChangePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangePasswordOutcomeCallable changePasswordCallable(const Model::ChangePasswordRequest& request) const;
			CreateAccessKeyOutcome createAccessKey(const Model::CreateAccessKeyRequest &request)const;
			void createAccessKeyAsync(const Model::CreateAccessKeyRequest& request, const CreateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccessKeyOutcomeCallable createAccessKeyCallable(const Model::CreateAccessKeyRequest& request) const;
			CreateAppSecretOutcome createAppSecret(const Model::CreateAppSecretRequest &request)const;
			void createAppSecretAsync(const Model::CreateAppSecretRequest& request, const CreateAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppSecretOutcomeCallable createAppSecretCallable(const Model::CreateAppSecretRequest& request) const;
			CreateApplicationOutcome createApplication(const Model::CreateApplicationRequest &request)const;
			void createApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationOutcomeCallable createApplicationCallable(const Model::CreateApplicationRequest& request) const;
			CreateGroupOutcome createGroup(const Model::CreateGroupRequest &request)const;
			void createGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupOutcomeCallable createGroupCallable(const Model::CreateGroupRequest& request) const;
			CreateLoginProfileOutcome createLoginProfile(const Model::CreateLoginProfileRequest &request)const;
			void createLoginProfileAsync(const Model::CreateLoginProfileRequest& request, const CreateLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoginProfileOutcomeCallable createLoginProfileCallable(const Model::CreateLoginProfileRequest& request) const;
			CreateOIDCProviderOutcome createOIDCProvider(const Model::CreateOIDCProviderRequest &request)const;
			void createOIDCProviderAsync(const Model::CreateOIDCProviderRequest& request, const CreateOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOIDCProviderOutcomeCallable createOIDCProviderCallable(const Model::CreateOIDCProviderRequest& request) const;
			CreateSAMLProviderOutcome createSAMLProvider(const Model::CreateSAMLProviderRequest &request)const;
			void createSAMLProviderAsync(const Model::CreateSAMLProviderRequest& request, const CreateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSAMLProviderOutcomeCallable createSAMLProviderCallable(const Model::CreateSAMLProviderRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			CreateVirtualMFADeviceOutcome createVirtualMFADevice(const Model::CreateVirtualMFADeviceRequest &request)const;
			void createVirtualMFADeviceAsync(const Model::CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVirtualMFADeviceOutcomeCallable createVirtualMFADeviceCallable(const Model::CreateVirtualMFADeviceRequest& request) const;
			DeleteAccessKeyOutcome deleteAccessKey(const Model::DeleteAccessKeyRequest &request)const;
			void deleteAccessKeyAsync(const Model::DeleteAccessKeyRequest& request, const DeleteAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessKeyOutcomeCallable deleteAccessKeyCallable(const Model::DeleteAccessKeyRequest& request) const;
			DeleteAppSecretOutcome deleteAppSecret(const Model::DeleteAppSecretRequest &request)const;
			void deleteAppSecretAsync(const Model::DeleteAppSecretRequest& request, const DeleteAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppSecretOutcomeCallable deleteAppSecretCallable(const Model::DeleteAppSecretRequest& request) const;
			DeleteApplicationOutcome deleteApplication(const Model::DeleteApplicationRequest &request)const;
			void deleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationOutcomeCallable deleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;
			DeleteGroupOutcome deleteGroup(const Model::DeleteGroupRequest &request)const;
			void deleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupOutcomeCallable deleteGroupCallable(const Model::DeleteGroupRequest& request) const;
			DeleteLoginProfileOutcome deleteLoginProfile(const Model::DeleteLoginProfileRequest &request)const;
			void deleteLoginProfileAsync(const Model::DeleteLoginProfileRequest& request, const DeleteLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoginProfileOutcomeCallable deleteLoginProfileCallable(const Model::DeleteLoginProfileRequest& request) const;
			DeleteOIDCProviderOutcome deleteOIDCProvider(const Model::DeleteOIDCProviderRequest &request)const;
			void deleteOIDCProviderAsync(const Model::DeleteOIDCProviderRequest& request, const DeleteOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOIDCProviderOutcomeCallable deleteOIDCProviderCallable(const Model::DeleteOIDCProviderRequest& request) const;
			DeleteSAMLProviderOutcome deleteSAMLProvider(const Model::DeleteSAMLProviderRequest &request)const;
			void deleteSAMLProviderAsync(const Model::DeleteSAMLProviderRequest& request, const DeleteSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSAMLProviderOutcomeCallable deleteSAMLProviderCallable(const Model::DeleteSAMLProviderRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DeleteVirtualMFADeviceOutcome deleteVirtualMFADevice(const Model::DeleteVirtualMFADeviceRequest &request)const;
			void deleteVirtualMFADeviceAsync(const Model::DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVirtualMFADeviceOutcomeCallable deleteVirtualMFADeviceCallable(const Model::DeleteVirtualMFADeviceRequest& request) const;
			DisableVirtualMFAOutcome disableVirtualMFA(const Model::DisableVirtualMFARequest &request)const;
			void disableVirtualMFAAsync(const Model::DisableVirtualMFARequest& request, const DisableVirtualMFAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableVirtualMFAOutcomeCallable disableVirtualMFACallable(const Model::DisableVirtualMFARequest& request) const;
			GenerateCredentialReportOutcome generateCredentialReport(const Model::GenerateCredentialReportRequest &request)const;
			void generateCredentialReportAsync(const Model::GenerateCredentialReportRequest& request, const GenerateCredentialReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateCredentialReportOutcomeCallable generateCredentialReportCallable(const Model::GenerateCredentialReportRequest& request) const;
			GetAccessKeyLastUsedOutcome getAccessKeyLastUsed(const Model::GetAccessKeyLastUsedRequest &request)const;
			void getAccessKeyLastUsedAsync(const Model::GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccessKeyLastUsedOutcomeCallable getAccessKeyLastUsedCallable(const Model::GetAccessKeyLastUsedRequest& request) const;
			GetAccountMFAInfoOutcome getAccountMFAInfo(const Model::GetAccountMFAInfoRequest &request)const;
			void getAccountMFAInfoAsync(const Model::GetAccountMFAInfoRequest& request, const GetAccountMFAInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountMFAInfoOutcomeCallable getAccountMFAInfoCallable(const Model::GetAccountMFAInfoRequest& request) const;
			GetAccountSecurityPracticeReportOutcome getAccountSecurityPracticeReport(const Model::GetAccountSecurityPracticeReportRequest &request)const;
			void getAccountSecurityPracticeReportAsync(const Model::GetAccountSecurityPracticeReportRequest& request, const GetAccountSecurityPracticeReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountSecurityPracticeReportOutcomeCallable getAccountSecurityPracticeReportCallable(const Model::GetAccountSecurityPracticeReportRequest& request) const;
			GetAccountSummaryOutcome getAccountSummary(const Model::GetAccountSummaryRequest &request)const;
			void getAccountSummaryAsync(const Model::GetAccountSummaryRequest& request, const GetAccountSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountSummaryOutcomeCallable getAccountSummaryCallable(const Model::GetAccountSummaryRequest& request) const;
			GetAppSecretOutcome getAppSecret(const Model::GetAppSecretRequest &request)const;
			void getAppSecretAsync(const Model::GetAppSecretRequest& request, const GetAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppSecretOutcomeCallable getAppSecretCallable(const Model::GetAppSecretRequest& request) const;
			GetApplicationOutcome getApplication(const Model::GetApplicationRequest &request)const;
			void getApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationOutcomeCallable getApplicationCallable(const Model::GetApplicationRequest& request) const;
			GetCredentialReportOutcome getCredentialReport(const Model::GetCredentialReportRequest &request)const;
			void getCredentialReportAsync(const Model::GetCredentialReportRequest& request, const GetCredentialReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCredentialReportOutcomeCallable getCredentialReportCallable(const Model::GetCredentialReportRequest& request) const;
			GetDefaultDomainOutcome getDefaultDomain(const Model::GetDefaultDomainRequest &request)const;
			void getDefaultDomainAsync(const Model::GetDefaultDomainRequest& request, const GetDefaultDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDefaultDomainOutcomeCallable getDefaultDomainCallable(const Model::GetDefaultDomainRequest& request) const;
			GetGroupOutcome getGroup(const Model::GetGroupRequest &request)const;
			void getGroupAsync(const Model::GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupOutcomeCallable getGroupCallable(const Model::GetGroupRequest& request) const;
			GetLoginProfileOutcome getLoginProfile(const Model::GetLoginProfileRequest &request)const;
			void getLoginProfileAsync(const Model::GetLoginProfileRequest& request, const GetLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLoginProfileOutcomeCallable getLoginProfileCallable(const Model::GetLoginProfileRequest& request) const;
			GetOIDCProviderOutcome getOIDCProvider(const Model::GetOIDCProviderRequest &request)const;
			void getOIDCProviderAsync(const Model::GetOIDCProviderRequest& request, const GetOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOIDCProviderOutcomeCallable getOIDCProviderCallable(const Model::GetOIDCProviderRequest& request) const;
			GetPasswordPolicyOutcome getPasswordPolicy(const Model::GetPasswordPolicyRequest &request)const;
			void getPasswordPolicyAsync(const Model::GetPasswordPolicyRequest& request, const GetPasswordPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPasswordPolicyOutcomeCallable getPasswordPolicyCallable(const Model::GetPasswordPolicyRequest& request) const;
			GetSAMLProviderOutcome getSAMLProvider(const Model::GetSAMLProviderRequest &request)const;
			void getSAMLProviderAsync(const Model::GetSAMLProviderRequest& request, const GetSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSAMLProviderOutcomeCallable getSAMLProviderCallable(const Model::GetSAMLProviderRequest& request) const;
			GetSecurityPreferenceOutcome getSecurityPreference(const Model::GetSecurityPreferenceRequest &request)const;
			void getSecurityPreferenceAsync(const Model::GetSecurityPreferenceRequest& request, const GetSecurityPreferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecurityPreferenceOutcomeCallable getSecurityPreferenceCallable(const Model::GetSecurityPreferenceRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			GetUserMFAInfoOutcome getUserMFAInfo(const Model::GetUserMFAInfoRequest &request)const;
			void getUserMFAInfoAsync(const Model::GetUserMFAInfoRequest& request, const GetUserMFAInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserMFAInfoOutcomeCallable getUserMFAInfoCallable(const Model::GetUserMFAInfoRequest& request) const;
			GetUserSsoSettingsOutcome getUserSsoSettings(const Model::GetUserSsoSettingsRequest &request)const;
			void getUserSsoSettingsAsync(const Model::GetUserSsoSettingsRequest& request, const GetUserSsoSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserSsoSettingsOutcomeCallable getUserSsoSettingsCallable(const Model::GetUserSsoSettingsRequest& request) const;
			GetVerificationInfoOutcome getVerificationInfo(const Model::GetVerificationInfoRequest &request)const;
			void getVerificationInfoAsync(const Model::GetVerificationInfoRequest& request, const GetVerificationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVerificationInfoOutcomeCallable getVerificationInfoCallable(const Model::GetVerificationInfoRequest& request) const;
			ListAccessKeysOutcome listAccessKeys(const Model::ListAccessKeysRequest &request)const;
			void listAccessKeysAsync(const Model::ListAccessKeysRequest& request, const ListAccessKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccessKeysOutcomeCallable listAccessKeysCallable(const Model::ListAccessKeysRequest& request) const;
			ListAppSecretIdsOutcome listAppSecretIds(const Model::ListAppSecretIdsRequest &request)const;
			void listAppSecretIdsAsync(const Model::ListAppSecretIdsRequest& request, const ListAppSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppSecretIdsOutcomeCallable listAppSecretIdsCallable(const Model::ListAppSecretIdsRequest& request) const;
			ListApplicationsOutcome listApplications(const Model::ListApplicationsRequest &request)const;
			void listApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsOutcomeCallable listApplicationsCallable(const Model::ListApplicationsRequest& request) const;
			ListGroupsOutcome listGroups(const Model::ListGroupsRequest &request)const;
			void listGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsOutcomeCallable listGroupsCallable(const Model::ListGroupsRequest& request) const;
			ListGroupsForUserOutcome listGroupsForUser(const Model::ListGroupsForUserRequest &request)const;
			void listGroupsForUserAsync(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsForUserOutcomeCallable listGroupsForUserCallable(const Model::ListGroupsForUserRequest& request) const;
			ListOIDCProvidersOutcome listOIDCProviders(const Model::ListOIDCProvidersRequest &request)const;
			void listOIDCProvidersAsync(const Model::ListOIDCProvidersRequest& request, const ListOIDCProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOIDCProvidersOutcomeCallable listOIDCProvidersCallable(const Model::ListOIDCProvidersRequest& request) const;
			ListPredefinedScopesOutcome listPredefinedScopes(const Model::ListPredefinedScopesRequest &request)const;
			void listPredefinedScopesAsync(const Model::ListPredefinedScopesRequest& request, const ListPredefinedScopesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPredefinedScopesOutcomeCallable listPredefinedScopesCallable(const Model::ListPredefinedScopesRequest& request) const;
			ListSAMLProvidersOutcome listSAMLProviders(const Model::ListSAMLProvidersRequest &request)const;
			void listSAMLProvidersAsync(const Model::ListSAMLProvidersRequest& request, const ListSAMLProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSAMLProvidersOutcomeCallable listSAMLProvidersCallable(const Model::ListSAMLProvidersRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListUserBasicInfosOutcome listUserBasicInfos(const Model::ListUserBasicInfosRequest &request)const;
			void listUserBasicInfosAsync(const Model::ListUserBasicInfosRequest& request, const ListUserBasicInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserBasicInfosOutcomeCallable listUserBasicInfosCallable(const Model::ListUserBasicInfosRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			ListUsersForGroupOutcome listUsersForGroup(const Model::ListUsersForGroupRequest &request)const;
			void listUsersForGroupAsync(const Model::ListUsersForGroupRequest& request, const ListUsersForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersForGroupOutcomeCallable listUsersForGroupCallable(const Model::ListUsersForGroupRequest& request) const;
			ListVirtualMFADevicesOutcome listVirtualMFADevices(const Model::ListVirtualMFADevicesRequest &request)const;
			void listVirtualMFADevicesAsync(const Model::ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVirtualMFADevicesOutcomeCallable listVirtualMFADevicesCallable(const Model::ListVirtualMFADevicesRequest& request) const;
			RemoveClientIdFromOIDCProviderOutcome removeClientIdFromOIDCProvider(const Model::RemoveClientIdFromOIDCProviderRequest &request)const;
			void removeClientIdFromOIDCProviderAsync(const Model::RemoveClientIdFromOIDCProviderRequest& request, const RemoveClientIdFromOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveClientIdFromOIDCProviderOutcomeCallable removeClientIdFromOIDCProviderCallable(const Model::RemoveClientIdFromOIDCProviderRequest& request) const;
			RemoveFingerprintFromOIDCProviderOutcome removeFingerprintFromOIDCProvider(const Model::RemoveFingerprintFromOIDCProviderRequest &request)const;
			void removeFingerprintFromOIDCProviderAsync(const Model::RemoveFingerprintFromOIDCProviderRequest& request, const RemoveFingerprintFromOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveFingerprintFromOIDCProviderOutcomeCallable removeFingerprintFromOIDCProviderCallable(const Model::RemoveFingerprintFromOIDCProviderRequest& request) const;
			RemoveUserFromGroupOutcome removeUserFromGroup(const Model::RemoveUserFromGroupRequest &request)const;
			void removeUserFromGroupAsync(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUserFromGroupOutcomeCallable removeUserFromGroupCallable(const Model::RemoveUserFromGroupRequest& request) const;
			SetDefaultDomainOutcome setDefaultDomain(const Model::SetDefaultDomainRequest &request)const;
			void setDefaultDomainAsync(const Model::SetDefaultDomainRequest& request, const SetDefaultDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultDomainOutcomeCallable setDefaultDomainCallable(const Model::SetDefaultDomainRequest& request) const;
			SetPasswordPolicyOutcome setPasswordPolicy(const Model::SetPasswordPolicyRequest &request)const;
			void setPasswordPolicyAsync(const Model::SetPasswordPolicyRequest& request, const SetPasswordPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetPasswordPolicyOutcomeCallable setPasswordPolicyCallable(const Model::SetPasswordPolicyRequest& request) const;
			SetSecurityPreferenceOutcome setSecurityPreference(const Model::SetSecurityPreferenceRequest &request)const;
			void setSecurityPreferenceAsync(const Model::SetSecurityPreferenceRequest& request, const SetSecurityPreferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSecurityPreferenceOutcomeCallable setSecurityPreferenceCallable(const Model::SetSecurityPreferenceRequest& request) const;
			SetUserSsoSettingsOutcome setUserSsoSettings(const Model::SetUserSsoSettingsRequest &request)const;
			void setUserSsoSettingsAsync(const Model::SetUserSsoSettingsRequest& request, const SetUserSsoSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetUserSsoSettingsOutcomeCallable setUserSsoSettingsCallable(const Model::SetUserSsoSettingsRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnbindMFADeviceOutcome unbindMFADevice(const Model::UnbindMFADeviceRequest &request)const;
			void unbindMFADeviceAsync(const Model::UnbindMFADeviceRequest& request, const UnbindMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindMFADeviceOutcomeCallable unbindMFADeviceCallable(const Model::UnbindMFADeviceRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAccessKeyOutcome updateAccessKey(const Model::UpdateAccessKeyRequest &request)const;
			void updateAccessKeyAsync(const Model::UpdateAccessKeyRequest& request, const UpdateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAccessKeyOutcomeCallable updateAccessKeyCallable(const Model::UpdateAccessKeyRequest& request) const;
			UpdateApplicationOutcome updateApplication(const Model::UpdateApplicationRequest &request)const;
			void updateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationOutcomeCallable updateApplicationCallable(const Model::UpdateApplicationRequest& request) const;
			UpdateGroupOutcome updateGroup(const Model::UpdateGroupRequest &request)const;
			void updateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGroupOutcomeCallable updateGroupCallable(const Model::UpdateGroupRequest& request) const;
			UpdateLoginProfileOutcome updateLoginProfile(const Model::UpdateLoginProfileRequest &request)const;
			void updateLoginProfileAsync(const Model::UpdateLoginProfileRequest& request, const UpdateLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoginProfileOutcomeCallable updateLoginProfileCallable(const Model::UpdateLoginProfileRequest& request) const;
			UpdateOIDCProviderOutcome updateOIDCProvider(const Model::UpdateOIDCProviderRequest &request)const;
			void updateOIDCProviderAsync(const Model::UpdateOIDCProviderRequest& request, const UpdateOIDCProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOIDCProviderOutcomeCallable updateOIDCProviderCallable(const Model::UpdateOIDCProviderRequest& request) const;
			UpdateSAMLProviderOutcome updateSAMLProvider(const Model::UpdateSAMLProviderRequest &request)const;
			void updateSAMLProviderAsync(const Model::UpdateSAMLProviderRequest& request, const UpdateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSAMLProviderOutcomeCallable updateSAMLProviderCallable(const Model::UpdateSAMLProviderRequest& request) const;
			UpdateUserOutcome updateUser(const Model::UpdateUserRequest &request)const;
			void updateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserOutcomeCallable updateUserCallable(const Model::UpdateUserRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IMS_IMSCLIENT_H_
