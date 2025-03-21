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

#ifndef ALIBABACLOUD_EIAM_EIAMCLIENT_H_
#define ALIBABACLOUD_EIAM_EIAMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EiamExport.h"
#include "model/AddUserToOrganizationalUnitsRequest.h"
#include "model/AddUserToOrganizationalUnitsResult.h"
#include "model/AddUsersToGroupRequest.h"
#include "model/AddUsersToGroupResult.h"
#include "model/AuthorizeApplicationToGroupsRequest.h"
#include "model/AuthorizeApplicationToGroupsResult.h"
#include "model/AuthorizeApplicationToOrganizationalUnitsRequest.h"
#include "model/AuthorizeApplicationToOrganizationalUnitsResult.h"
#include "model/AuthorizeApplicationToUsersRequest.h"
#include "model/AuthorizeApplicationToUsersResult.h"
#include "model/CreateApplicationRequest.h"
#include "model/CreateApplicationResult.h"
#include "model/CreateApplicationClientSecretRequest.h"
#include "model/CreateApplicationClientSecretResult.h"
#include "model/CreateConditionalAccessPolicyRequest.h"
#include "model/CreateConditionalAccessPolicyResult.h"
#include "model/CreateDomainRequest.h"
#include "model/CreateDomainResult.h"
#include "model/CreateDomainProxyTokenRequest.h"
#include "model/CreateDomainProxyTokenResult.h"
#include "model/CreateGroupRequest.h"
#include "model/CreateGroupResult.h"
#include "model/CreateIdentityProviderRequest.h"
#include "model/CreateIdentityProviderResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateNetworkAccessEndpointRequest.h"
#include "model/CreateNetworkAccessEndpointResult.h"
#include "model/CreateOrganizationalUnitRequest.h"
#include "model/CreateOrganizationalUnitResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/DeleteApplicationRequest.h"
#include "model/DeleteApplicationResult.h"
#include "model/DeleteApplicationClientSecretRequest.h"
#include "model/DeleteApplicationClientSecretResult.h"
#include "model/DeleteConditionalAccessPolicyRequest.h"
#include "model/DeleteConditionalAccessPolicyResult.h"
#include "model/DeleteDomainRequest.h"
#include "model/DeleteDomainResult.h"
#include "model/DeleteDomainProxyTokenRequest.h"
#include "model/DeleteDomainProxyTokenResult.h"
#include "model/DeleteGroupRequest.h"
#include "model/DeleteGroupResult.h"
#include "model/DeleteIdentityProviderRequest.h"
#include "model/DeleteIdentityProviderResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteNetworkAccessEndpointRequest.h"
#include "model/DeleteNetworkAccessEndpointResult.h"
#include "model/DeleteOrganizationalUnitRequest.h"
#include "model/DeleteOrganizationalUnitResult.h"
#include "model/DeleteOrganizationalUnitChildrenRequest.h"
#include "model/DeleteOrganizationalUnitChildrenResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DisableApplicationRequest.h"
#include "model/DisableApplicationResult.h"
#include "model/DisableApplicationApiInvokeRequest.h"
#include "model/DisableApplicationApiInvokeResult.h"
#include "model/DisableApplicationClientSecretRequest.h"
#include "model/DisableApplicationClientSecretResult.h"
#include "model/DisableApplicationProvisioningRequest.h"
#include "model/DisableApplicationProvisioningResult.h"
#include "model/DisableApplicationSsoRequest.h"
#include "model/DisableApplicationSsoResult.h"
#include "model/DisableConditionalAccessPolicyRequest.h"
#include "model/DisableConditionalAccessPolicyResult.h"
#include "model/DisableDomainProxyTokenRequest.h"
#include "model/DisableDomainProxyTokenResult.h"
#include "model/DisableIdentityProviderUdPullRequest.h"
#include "model/DisableIdentityProviderUdPullResult.h"
#include "model/DisableInitDomainAutoRedirectRequest.h"
#include "model/DisableInitDomainAutoRedirectResult.h"
#include "model/DisableUserRequest.h"
#include "model/DisableUserResult.h"
#include "model/EnableApplicationRequest.h"
#include "model/EnableApplicationResult.h"
#include "model/EnableApplicationApiInvokeRequest.h"
#include "model/EnableApplicationApiInvokeResult.h"
#include "model/EnableApplicationClientSecretRequest.h"
#include "model/EnableApplicationClientSecretResult.h"
#include "model/EnableApplicationProvisioningRequest.h"
#include "model/EnableApplicationProvisioningResult.h"
#include "model/EnableApplicationSsoRequest.h"
#include "model/EnableApplicationSsoResult.h"
#include "model/EnableConditionalAccessPolicyRequest.h"
#include "model/EnableConditionalAccessPolicyResult.h"
#include "model/EnableDomainProxyTokenRequest.h"
#include "model/EnableDomainProxyTokenResult.h"
#include "model/EnableIdentityProviderUdPullRequest.h"
#include "model/EnableIdentityProviderUdPullResult.h"
#include "model/EnableInitDomainAutoRedirectRequest.h"
#include "model/EnableInitDomainAutoRedirectResult.h"
#include "model/EnableUserRequest.h"
#include "model/EnableUserResult.h"
#include "model/GetApplicationRequest.h"
#include "model/GetApplicationResult.h"
#include "model/GetApplicationGrantScopeRequest.h"
#include "model/GetApplicationGrantScopeResult.h"
#include "model/GetApplicationProvisioningConfigRequest.h"
#include "model/GetApplicationProvisioningConfigResult.h"
#include "model/GetApplicationProvisioningScopeRequest.h"
#include "model/GetApplicationProvisioningScopeResult.h"
#include "model/GetApplicationSsoConfigRequest.h"
#include "model/GetApplicationSsoConfigResult.h"
#include "model/GetConditionalAccessPolicyRequest.h"
#include "model/GetConditionalAccessPolicyResult.h"
#include "model/GetDomainRequest.h"
#include "model/GetDomainResult.h"
#include "model/GetDomainDnsChallengeRequest.h"
#include "model/GetDomainDnsChallengeResult.h"
#include "model/GetForgetPasswordConfigurationRequest.h"
#include "model/GetForgetPasswordConfigurationResult.h"
#include "model/GetGroupRequest.h"
#include "model/GetGroupResult.h"
#include "model/GetIdentityProviderRequest.h"
#include "model/GetIdentityProviderResult.h"
#include "model/GetIdentityProviderUdPullConfigurationRequest.h"
#include "model/GetIdentityProviderUdPullConfigurationResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/GetInstanceLicenseRequest.h"
#include "model/GetInstanceLicenseResult.h"
#include "model/GetNetworkAccessEndpointRequest.h"
#include "model/GetNetworkAccessEndpointResult.h"
#include "model/GetOrganizationalUnitRequest.h"
#include "model/GetOrganizationalUnitResult.h"
#include "model/GetPasswordComplexityConfigurationRequest.h"
#include "model/GetPasswordComplexityConfigurationResult.h"
#include "model/GetPasswordExpirationConfigurationRequest.h"
#include "model/GetPasswordExpirationConfigurationResult.h"
#include "model/GetPasswordHistoryConfigurationRequest.h"
#include "model/GetPasswordHistoryConfigurationResult.h"
#include "model/GetPasswordInitializationConfigurationRequest.h"
#include "model/GetPasswordInitializationConfigurationResult.h"
#include "model/GetRootOrganizationalUnitRequest.h"
#include "model/GetRootOrganizationalUnitResult.h"
#include "model/GetSynchronizationJobRequest.h"
#include "model/GetSynchronizationJobResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/ListApplicationClientSecretsRequest.h"
#include "model/ListApplicationClientSecretsResult.h"
#include "model/ListApplicationsRequest.h"
#include "model/ListApplicationsResult.h"
#include "model/ListApplicationsForOrganizationalUnitRequest.h"
#include "model/ListApplicationsForOrganizationalUnitResult.h"
#include "model/ListApplicationsForUserRequest.h"
#include "model/ListApplicationsForUserResult.h"
#include "model/ListConditionalAccessPoliciesRequest.h"
#include "model/ListConditionalAccessPoliciesResult.h"
#include "model/ListConditionalAccessPoliciesForNetworkZoneRequest.h"
#include "model/ListConditionalAccessPoliciesForNetworkZoneResult.h"
#include "model/ListDomainProxyTokensRequest.h"
#include "model/ListDomainProxyTokensResult.h"
#include "model/ListDomainsRequest.h"
#include "model/ListDomainsResult.h"
#include "model/ListEiamInstancesRequest.h"
#include "model/ListEiamInstancesResult.h"
#include "model/ListEiamRegionsRequest.h"
#include "model/ListEiamRegionsResult.h"
#include "model/ListGroupsRequest.h"
#include "model/ListGroupsResult.h"
#include "model/ListGroupsForApplicationRequest.h"
#include "model/ListGroupsForApplicationResult.h"
#include "model/ListGroupsForUserRequest.h"
#include "model/ListGroupsForUserResult.h"
#include "model/ListIdentityProvidersRequest.h"
#include "model/ListIdentityProvidersResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListNetworkAccessEndpointAvailableRegionsRequest.h"
#include "model/ListNetworkAccessEndpointAvailableRegionsResult.h"
#include "model/ListNetworkAccessEndpointAvailableZonesRequest.h"
#include "model/ListNetworkAccessEndpointAvailableZonesResult.h"
#include "model/ListNetworkAccessEndpointsRequest.h"
#include "model/ListNetworkAccessEndpointsResult.h"
#include "model/ListNetworkAccessPathsRequest.h"
#include "model/ListNetworkAccessPathsResult.h"
#include "model/ListOrganizationalUnitParentsRequest.h"
#include "model/ListOrganizationalUnitParentsResult.h"
#include "model/ListOrganizationalUnitsRequest.h"
#include "model/ListOrganizationalUnitsResult.h"
#include "model/ListOrganizationalUnitsForApplicationRequest.h"
#include "model/ListOrganizationalUnitsForApplicationResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/ListSynchronizationJobsRequest.h"
#include "model/ListSynchronizationJobsResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/ListUsersForApplicationRequest.h"
#include "model/ListUsersForApplicationResult.h"
#include "model/ListUsersForGroupRequest.h"
#include "model/ListUsersForGroupResult.h"
#include "model/ObtainApplicationClientSecretRequest.h"
#include "model/ObtainApplicationClientSecretResult.h"
#include "model/ObtainDomainProxyTokenRequest.h"
#include "model/ObtainDomainProxyTokenResult.h"
#include "model/RemoveUserFromOrganizationalUnitsRequest.h"
#include "model/RemoveUserFromOrganizationalUnitsResult.h"
#include "model/RemoveUsersFromGroupRequest.h"
#include "model/RemoveUsersFromGroupResult.h"
#include "model/RevokeApplicationFromGroupsRequest.h"
#include "model/RevokeApplicationFromGroupsResult.h"
#include "model/RevokeApplicationFromOrganizationalUnitsRequest.h"
#include "model/RevokeApplicationFromOrganizationalUnitsResult.h"
#include "model/RevokeApplicationFromUsersRequest.h"
#include "model/RevokeApplicationFromUsersResult.h"
#include "model/RunSynchronizationJobRequest.h"
#include "model/RunSynchronizationJobResult.h"
#include "model/SetApplicationGrantScopeRequest.h"
#include "model/SetApplicationGrantScopeResult.h"
#include "model/SetApplicationProvisioningConfigRequest.h"
#include "model/SetApplicationProvisioningConfigResult.h"
#include "model/SetApplicationProvisioningScopeRequest.h"
#include "model/SetApplicationProvisioningScopeResult.h"
#include "model/SetApplicationSsoConfigRequest.h"
#include "model/SetApplicationSsoConfigResult.h"
#include "model/SetDefaultDomainRequest.h"
#include "model/SetDefaultDomainResult.h"
#include "model/SetForgetPasswordConfigurationRequest.h"
#include "model/SetForgetPasswordConfigurationResult.h"
#include "model/SetIdentityProviderUdPullConfigurationRequest.h"
#include "model/SetIdentityProviderUdPullConfigurationResult.h"
#include "model/SetPasswordComplexityConfigurationRequest.h"
#include "model/SetPasswordComplexityConfigurationResult.h"
#include "model/SetPasswordExpirationConfigurationRequest.h"
#include "model/SetPasswordExpirationConfigurationResult.h"
#include "model/SetPasswordHistoryConfigurationRequest.h"
#include "model/SetPasswordHistoryConfigurationResult.h"
#include "model/SetPasswordInitializationConfigurationRequest.h"
#include "model/SetPasswordInitializationConfigurationResult.h"
#include "model/SetUserPrimaryOrganizationalUnitRequest.h"
#include "model/SetUserPrimaryOrganizationalUnitResult.h"
#include "model/UnlockUserRequest.h"
#include "model/UnlockUserResult.h"
#include "model/UpdateApplicationAuthorizationTypeRequest.h"
#include "model/UpdateApplicationAuthorizationTypeResult.h"
#include "model/UpdateApplicationDescriptionRequest.h"
#include "model/UpdateApplicationDescriptionResult.h"
#include "model/UpdateConditionalAccessPolicyRequest.h"
#include "model/UpdateConditionalAccessPolicyResult.h"
#include "model/UpdateConditionalAccessPolicyDescriptionRequest.h"
#include "model/UpdateConditionalAccessPolicyDescriptionResult.h"
#include "model/UpdateGroupRequest.h"
#include "model/UpdateGroupResult.h"
#include "model/UpdateGroupDescriptionRequest.h"
#include "model/UpdateGroupDescriptionResult.h"
#include "model/UpdateIdentityProviderRequest.h"
#include "model/UpdateIdentityProviderResult.h"
#include "model/UpdateInstanceDescriptionRequest.h"
#include "model/UpdateInstanceDescriptionResult.h"
#include "model/UpdateNetworkAccessEndpointNameRequest.h"
#include "model/UpdateNetworkAccessEndpointNameResult.h"
#include "model/UpdateOrganizationalUnitRequest.h"
#include "model/UpdateOrganizationalUnitResult.h"
#include "model/UpdateOrganizationalUnitDescriptionRequest.h"
#include "model/UpdateOrganizationalUnitDescriptionResult.h"
#include "model/UpdateOrganizationalUnitParentIdRequest.h"
#include "model/UpdateOrganizationalUnitParentIdResult.h"
#include "model/UpdateUserRequest.h"
#include "model/UpdateUserResult.h"
#include "model/UpdateUserDescriptionRequest.h"
#include "model/UpdateUserDescriptionResult.h"
#include "model/UpdateUserPasswordRequest.h"
#include "model/UpdateUserPasswordResult.h"


namespace AlibabaCloud
{
	namespace Eiam
	{
		class ALIBABACLOUD_EIAM_EXPORT EiamClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddUserToOrganizationalUnitsResult> AddUserToOrganizationalUnitsOutcome;
			typedef std::future<AddUserToOrganizationalUnitsOutcome> AddUserToOrganizationalUnitsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::AddUserToOrganizationalUnitsRequest&, const AddUserToOrganizationalUnitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToOrganizationalUnitsAsyncHandler;
			typedef Outcome<Error, Model::AddUsersToGroupResult> AddUsersToGroupOutcome;
			typedef std::future<AddUsersToGroupOutcome> AddUsersToGroupOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::AddUsersToGroupRequest&, const AddUsersToGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersToGroupAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeApplicationToGroupsResult> AuthorizeApplicationToGroupsOutcome;
			typedef std::future<AuthorizeApplicationToGroupsOutcome> AuthorizeApplicationToGroupsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::AuthorizeApplicationToGroupsRequest&, const AuthorizeApplicationToGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeApplicationToGroupsAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeApplicationToOrganizationalUnitsResult> AuthorizeApplicationToOrganizationalUnitsOutcome;
			typedef std::future<AuthorizeApplicationToOrganizationalUnitsOutcome> AuthorizeApplicationToOrganizationalUnitsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::AuthorizeApplicationToOrganizationalUnitsRequest&, const AuthorizeApplicationToOrganizationalUnitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeApplicationToOrganizationalUnitsAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeApplicationToUsersResult> AuthorizeApplicationToUsersOutcome;
			typedef std::future<AuthorizeApplicationToUsersOutcome> AuthorizeApplicationToUsersOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::AuthorizeApplicationToUsersRequest&, const AuthorizeApplicationToUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeApplicationToUsersAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationResult> CreateApplicationOutcome;
			typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateApplicationRequest&, const CreateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationClientSecretResult> CreateApplicationClientSecretOutcome;
			typedef std::future<CreateApplicationClientSecretOutcome> CreateApplicationClientSecretOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateApplicationClientSecretRequest&, const CreateApplicationClientSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationClientSecretAsyncHandler;
			typedef Outcome<Error, Model::CreateConditionalAccessPolicyResult> CreateConditionalAccessPolicyOutcome;
			typedef std::future<CreateConditionalAccessPolicyOutcome> CreateConditionalAccessPolicyOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateConditionalAccessPolicyRequest&, const CreateConditionalAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConditionalAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateDomainResult> CreateDomainOutcome;
			typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateDomainRequest&, const CreateDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAsyncHandler;
			typedef Outcome<Error, Model::CreateDomainProxyTokenResult> CreateDomainProxyTokenOutcome;
			typedef std::future<CreateDomainProxyTokenOutcome> CreateDomainProxyTokenOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateDomainProxyTokenRequest&, const CreateDomainProxyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainProxyTokenAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupResult> CreateGroupOutcome;
			typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateGroupRequest&, const CreateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateIdentityProviderResult> CreateIdentityProviderOutcome;
			typedef std::future<CreateIdentityProviderOutcome> CreateIdentityProviderOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateIdentityProviderRequest&, const CreateIdentityProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIdentityProviderAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkAccessEndpointResult> CreateNetworkAccessEndpointOutcome;
			typedef std::future<CreateNetworkAccessEndpointOutcome> CreateNetworkAccessEndpointOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateNetworkAccessEndpointRequest&, const CreateNetworkAccessEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAccessEndpointAsyncHandler;
			typedef Outcome<Error, Model::CreateOrganizationalUnitResult> CreateOrganizationalUnitOutcome;
			typedef std::future<CreateOrganizationalUnitOutcome> CreateOrganizationalUnitOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateOrganizationalUnitRequest&, const CreateOrganizationalUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationalUnitAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationResult> DeleteApplicationOutcome;
			typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteApplicationRequest&, const DeleteApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationClientSecretResult> DeleteApplicationClientSecretOutcome;
			typedef std::future<DeleteApplicationClientSecretOutcome> DeleteApplicationClientSecretOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteApplicationClientSecretRequest&, const DeleteApplicationClientSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationClientSecretAsyncHandler;
			typedef Outcome<Error, Model::DeleteConditionalAccessPolicyResult> DeleteConditionalAccessPolicyOutcome;
			typedef std::future<DeleteConditionalAccessPolicyOutcome> DeleteConditionalAccessPolicyOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteConditionalAccessPolicyRequest&, const DeleteConditionalAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConditionalAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainResult> DeleteDomainOutcome;
			typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteDomainRequest&, const DeleteDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainProxyTokenResult> DeleteDomainProxyTokenOutcome;
			typedef std::future<DeleteDomainProxyTokenOutcome> DeleteDomainProxyTokenOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteDomainProxyTokenRequest&, const DeleteDomainProxyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainProxyTokenAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupResult> DeleteGroupOutcome;
			typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteGroupRequest&, const DeleteGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteIdentityProviderResult> DeleteIdentityProviderOutcome;
			typedef std::future<DeleteIdentityProviderOutcome> DeleteIdentityProviderOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteIdentityProviderRequest&, const DeleteIdentityProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIdentityProviderAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkAccessEndpointResult> DeleteNetworkAccessEndpointOutcome;
			typedef std::future<DeleteNetworkAccessEndpointOutcome> DeleteNetworkAccessEndpointOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteNetworkAccessEndpointRequest&, const DeleteNetworkAccessEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAccessEndpointAsyncHandler;
			typedef Outcome<Error, Model::DeleteOrganizationalUnitResult> DeleteOrganizationalUnitOutcome;
			typedef std::future<DeleteOrganizationalUnitOutcome> DeleteOrganizationalUnitOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteOrganizationalUnitRequest&, const DeleteOrganizationalUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationalUnitAsyncHandler;
			typedef Outcome<Error, Model::DeleteOrganizationalUnitChildrenResult> DeleteOrganizationalUnitChildrenOutcome;
			typedef std::future<DeleteOrganizationalUnitChildrenOutcome> DeleteOrganizationalUnitChildrenOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteOrganizationalUnitChildrenRequest&, const DeleteOrganizationalUnitChildrenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationalUnitChildrenAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DisableApplicationResult> DisableApplicationOutcome;
			typedef std::future<DisableApplicationOutcome> DisableApplicationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DisableApplicationRequest&, const DisableApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationAsyncHandler;
			typedef Outcome<Error, Model::DisableApplicationApiInvokeResult> DisableApplicationApiInvokeOutcome;
			typedef std::future<DisableApplicationApiInvokeOutcome> DisableApplicationApiInvokeOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DisableApplicationApiInvokeRequest&, const DisableApplicationApiInvokeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationApiInvokeAsyncHandler;
			typedef Outcome<Error, Model::DisableApplicationClientSecretResult> DisableApplicationClientSecretOutcome;
			typedef std::future<DisableApplicationClientSecretOutcome> DisableApplicationClientSecretOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DisableApplicationClientSecretRequest&, const DisableApplicationClientSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationClientSecretAsyncHandler;
			typedef Outcome<Error, Model::DisableApplicationProvisioningResult> DisableApplicationProvisioningOutcome;
			typedef std::future<DisableApplicationProvisioningOutcome> DisableApplicationProvisioningOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DisableApplicationProvisioningRequest&, const DisableApplicationProvisioningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationProvisioningAsyncHandler;
			typedef Outcome<Error, Model::DisableApplicationSsoResult> DisableApplicationSsoOutcome;
			typedef std::future<DisableApplicationSsoOutcome> DisableApplicationSsoOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DisableApplicationSsoRequest&, const DisableApplicationSsoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationSsoAsyncHandler;
			typedef Outcome<Error, Model::DisableConditionalAccessPolicyResult> DisableConditionalAccessPolicyOutcome;
			typedef std::future<DisableConditionalAccessPolicyOutcome> DisableConditionalAccessPolicyOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DisableConditionalAccessPolicyRequest&, const DisableConditionalAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableConditionalAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::DisableDomainProxyTokenResult> DisableDomainProxyTokenOutcome;
			typedef std::future<DisableDomainProxyTokenOutcome> DisableDomainProxyTokenOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DisableDomainProxyTokenRequest&, const DisableDomainProxyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDomainProxyTokenAsyncHandler;
			typedef Outcome<Error, Model::DisableIdentityProviderUdPullResult> DisableIdentityProviderUdPullOutcome;
			typedef std::future<DisableIdentityProviderUdPullOutcome> DisableIdentityProviderUdPullOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DisableIdentityProviderUdPullRequest&, const DisableIdentityProviderUdPullOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableIdentityProviderUdPullAsyncHandler;
			typedef Outcome<Error, Model::DisableInitDomainAutoRedirectResult> DisableInitDomainAutoRedirectOutcome;
			typedef std::future<DisableInitDomainAutoRedirectOutcome> DisableInitDomainAutoRedirectOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DisableInitDomainAutoRedirectRequest&, const DisableInitDomainAutoRedirectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableInitDomainAutoRedirectAsyncHandler;
			typedef Outcome<Error, Model::DisableUserResult> DisableUserOutcome;
			typedef std::future<DisableUserOutcome> DisableUserOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::DisableUserRequest&, const DisableUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableUserAsyncHandler;
			typedef Outcome<Error, Model::EnableApplicationResult> EnableApplicationOutcome;
			typedef std::future<EnableApplicationOutcome> EnableApplicationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::EnableApplicationRequest&, const EnableApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationAsyncHandler;
			typedef Outcome<Error, Model::EnableApplicationApiInvokeResult> EnableApplicationApiInvokeOutcome;
			typedef std::future<EnableApplicationApiInvokeOutcome> EnableApplicationApiInvokeOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::EnableApplicationApiInvokeRequest&, const EnableApplicationApiInvokeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationApiInvokeAsyncHandler;
			typedef Outcome<Error, Model::EnableApplicationClientSecretResult> EnableApplicationClientSecretOutcome;
			typedef std::future<EnableApplicationClientSecretOutcome> EnableApplicationClientSecretOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::EnableApplicationClientSecretRequest&, const EnableApplicationClientSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationClientSecretAsyncHandler;
			typedef Outcome<Error, Model::EnableApplicationProvisioningResult> EnableApplicationProvisioningOutcome;
			typedef std::future<EnableApplicationProvisioningOutcome> EnableApplicationProvisioningOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::EnableApplicationProvisioningRequest&, const EnableApplicationProvisioningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationProvisioningAsyncHandler;
			typedef Outcome<Error, Model::EnableApplicationSsoResult> EnableApplicationSsoOutcome;
			typedef std::future<EnableApplicationSsoOutcome> EnableApplicationSsoOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::EnableApplicationSsoRequest&, const EnableApplicationSsoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationSsoAsyncHandler;
			typedef Outcome<Error, Model::EnableConditionalAccessPolicyResult> EnableConditionalAccessPolicyOutcome;
			typedef std::future<EnableConditionalAccessPolicyOutcome> EnableConditionalAccessPolicyOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::EnableConditionalAccessPolicyRequest&, const EnableConditionalAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableConditionalAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::EnableDomainProxyTokenResult> EnableDomainProxyTokenOutcome;
			typedef std::future<EnableDomainProxyTokenOutcome> EnableDomainProxyTokenOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::EnableDomainProxyTokenRequest&, const EnableDomainProxyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDomainProxyTokenAsyncHandler;
			typedef Outcome<Error, Model::EnableIdentityProviderUdPullResult> EnableIdentityProviderUdPullOutcome;
			typedef std::future<EnableIdentityProviderUdPullOutcome> EnableIdentityProviderUdPullOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::EnableIdentityProviderUdPullRequest&, const EnableIdentityProviderUdPullOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableIdentityProviderUdPullAsyncHandler;
			typedef Outcome<Error, Model::EnableInitDomainAutoRedirectResult> EnableInitDomainAutoRedirectOutcome;
			typedef std::future<EnableInitDomainAutoRedirectOutcome> EnableInitDomainAutoRedirectOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::EnableInitDomainAutoRedirectRequest&, const EnableInitDomainAutoRedirectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableInitDomainAutoRedirectAsyncHandler;
			typedef Outcome<Error, Model::EnableUserResult> EnableUserOutcome;
			typedef std::future<EnableUserOutcome> EnableUserOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::EnableUserRequest&, const EnableUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableUserAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationResult> GetApplicationOutcome;
			typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetApplicationRequest&, const GetApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationGrantScopeResult> GetApplicationGrantScopeOutcome;
			typedef std::future<GetApplicationGrantScopeOutcome> GetApplicationGrantScopeOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetApplicationGrantScopeRequest&, const GetApplicationGrantScopeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationGrantScopeAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationProvisioningConfigResult> GetApplicationProvisioningConfigOutcome;
			typedef std::future<GetApplicationProvisioningConfigOutcome> GetApplicationProvisioningConfigOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetApplicationProvisioningConfigRequest&, const GetApplicationProvisioningConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationProvisioningConfigAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationProvisioningScopeResult> GetApplicationProvisioningScopeOutcome;
			typedef std::future<GetApplicationProvisioningScopeOutcome> GetApplicationProvisioningScopeOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetApplicationProvisioningScopeRequest&, const GetApplicationProvisioningScopeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationProvisioningScopeAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationSsoConfigResult> GetApplicationSsoConfigOutcome;
			typedef std::future<GetApplicationSsoConfigOutcome> GetApplicationSsoConfigOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetApplicationSsoConfigRequest&, const GetApplicationSsoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationSsoConfigAsyncHandler;
			typedef Outcome<Error, Model::GetConditionalAccessPolicyResult> GetConditionalAccessPolicyOutcome;
			typedef std::future<GetConditionalAccessPolicyOutcome> GetConditionalAccessPolicyOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetConditionalAccessPolicyRequest&, const GetConditionalAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConditionalAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetDomainResult> GetDomainOutcome;
			typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetDomainRequest&, const GetDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDomainAsyncHandler;
			typedef Outcome<Error, Model::GetDomainDnsChallengeResult> GetDomainDnsChallengeOutcome;
			typedef std::future<GetDomainDnsChallengeOutcome> GetDomainDnsChallengeOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetDomainDnsChallengeRequest&, const GetDomainDnsChallengeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDomainDnsChallengeAsyncHandler;
			typedef Outcome<Error, Model::GetForgetPasswordConfigurationResult> GetForgetPasswordConfigurationOutcome;
			typedef std::future<GetForgetPasswordConfigurationOutcome> GetForgetPasswordConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetForgetPasswordConfigurationRequest&, const GetForgetPasswordConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetForgetPasswordConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetGroupResult> GetGroupOutcome;
			typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetGroupRequest&, const GetGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupAsyncHandler;
			typedef Outcome<Error, Model::GetIdentityProviderResult> GetIdentityProviderOutcome;
			typedef std::future<GetIdentityProviderOutcome> GetIdentityProviderOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetIdentityProviderRequest&, const GetIdentityProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIdentityProviderAsyncHandler;
			typedef Outcome<Error, Model::GetIdentityProviderUdPullConfigurationResult> GetIdentityProviderUdPullConfigurationOutcome;
			typedef std::future<GetIdentityProviderUdPullConfigurationOutcome> GetIdentityProviderUdPullConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetIdentityProviderUdPullConfigurationRequest&, const GetIdentityProviderUdPullConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIdentityProviderUdPullConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResult> GetInstanceOutcome;
			typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetInstanceRequest&, const GetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceLicenseResult> GetInstanceLicenseOutcome;
			typedef std::future<GetInstanceLicenseOutcome> GetInstanceLicenseOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetInstanceLicenseRequest&, const GetInstanceLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceLicenseAsyncHandler;
			typedef Outcome<Error, Model::GetNetworkAccessEndpointResult> GetNetworkAccessEndpointOutcome;
			typedef std::future<GetNetworkAccessEndpointOutcome> GetNetworkAccessEndpointOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetNetworkAccessEndpointRequest&, const GetNetworkAccessEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNetworkAccessEndpointAsyncHandler;
			typedef Outcome<Error, Model::GetOrganizationalUnitResult> GetOrganizationalUnitOutcome;
			typedef std::future<GetOrganizationalUnitOutcome> GetOrganizationalUnitOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetOrganizationalUnitRequest&, const GetOrganizationalUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOrganizationalUnitAsyncHandler;
			typedef Outcome<Error, Model::GetPasswordComplexityConfigurationResult> GetPasswordComplexityConfigurationOutcome;
			typedef std::future<GetPasswordComplexityConfigurationOutcome> GetPasswordComplexityConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetPasswordComplexityConfigurationRequest&, const GetPasswordComplexityConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPasswordComplexityConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetPasswordExpirationConfigurationResult> GetPasswordExpirationConfigurationOutcome;
			typedef std::future<GetPasswordExpirationConfigurationOutcome> GetPasswordExpirationConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetPasswordExpirationConfigurationRequest&, const GetPasswordExpirationConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPasswordExpirationConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetPasswordHistoryConfigurationResult> GetPasswordHistoryConfigurationOutcome;
			typedef std::future<GetPasswordHistoryConfigurationOutcome> GetPasswordHistoryConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetPasswordHistoryConfigurationRequest&, const GetPasswordHistoryConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPasswordHistoryConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetPasswordInitializationConfigurationResult> GetPasswordInitializationConfigurationOutcome;
			typedef std::future<GetPasswordInitializationConfigurationOutcome> GetPasswordInitializationConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetPasswordInitializationConfigurationRequest&, const GetPasswordInitializationConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPasswordInitializationConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetRootOrganizationalUnitResult> GetRootOrganizationalUnitOutcome;
			typedef std::future<GetRootOrganizationalUnitOutcome> GetRootOrganizationalUnitOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetRootOrganizationalUnitRequest&, const GetRootOrganizationalUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRootOrganizationalUnitAsyncHandler;
			typedef Outcome<Error, Model::GetSynchronizationJobResult> GetSynchronizationJobOutcome;
			typedef std::future<GetSynchronizationJobOutcome> GetSynchronizationJobOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetSynchronizationJobRequest&, const GetSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationClientSecretsResult> ListApplicationClientSecretsOutcome;
			typedef std::future<ListApplicationClientSecretsOutcome> ListApplicationClientSecretsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListApplicationClientSecretsRequest&, const ListApplicationClientSecretsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationClientSecretsAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsResult> ListApplicationsOutcome;
			typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListApplicationsRequest&, const ListApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsForOrganizationalUnitResult> ListApplicationsForOrganizationalUnitOutcome;
			typedef std::future<ListApplicationsForOrganizationalUnitOutcome> ListApplicationsForOrganizationalUnitOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListApplicationsForOrganizationalUnitRequest&, const ListApplicationsForOrganizationalUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsForOrganizationalUnitAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsForUserResult> ListApplicationsForUserOutcome;
			typedef std::future<ListApplicationsForUserOutcome> ListApplicationsForUserOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListApplicationsForUserRequest&, const ListApplicationsForUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsForUserAsyncHandler;
			typedef Outcome<Error, Model::ListConditionalAccessPoliciesResult> ListConditionalAccessPoliciesOutcome;
			typedef std::future<ListConditionalAccessPoliciesOutcome> ListConditionalAccessPoliciesOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListConditionalAccessPoliciesRequest&, const ListConditionalAccessPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConditionalAccessPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListConditionalAccessPoliciesForNetworkZoneResult> ListConditionalAccessPoliciesForNetworkZoneOutcome;
			typedef std::future<ListConditionalAccessPoliciesForNetworkZoneOutcome> ListConditionalAccessPoliciesForNetworkZoneOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListConditionalAccessPoliciesForNetworkZoneRequest&, const ListConditionalAccessPoliciesForNetworkZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConditionalAccessPoliciesForNetworkZoneAsyncHandler;
			typedef Outcome<Error, Model::ListDomainProxyTokensResult> ListDomainProxyTokensOutcome;
			typedef std::future<ListDomainProxyTokensOutcome> ListDomainProxyTokensOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListDomainProxyTokensRequest&, const ListDomainProxyTokensOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDomainProxyTokensAsyncHandler;
			typedef Outcome<Error, Model::ListDomainsResult> ListDomainsOutcome;
			typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListDomainsRequest&, const ListDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDomainsAsyncHandler;
			typedef Outcome<Error, Model::ListEiamInstancesResult> ListEiamInstancesOutcome;
			typedef std::future<ListEiamInstancesOutcome> ListEiamInstancesOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListEiamInstancesRequest&, const ListEiamInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEiamInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListEiamRegionsResult> ListEiamRegionsOutcome;
			typedef std::future<ListEiamRegionsOutcome> ListEiamRegionsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListEiamRegionsRequest&, const ListEiamRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEiamRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsResult> ListGroupsOutcome;
			typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListGroupsRequest&, const ListGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsForApplicationResult> ListGroupsForApplicationOutcome;
			typedef std::future<ListGroupsForApplicationOutcome> ListGroupsForApplicationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListGroupsForApplicationRequest&, const ListGroupsForApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsForApplicationAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsForUserResult> ListGroupsForUserOutcome;
			typedef std::future<ListGroupsForUserOutcome> ListGroupsForUserOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListGroupsForUserRequest&, const ListGroupsForUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsForUserAsyncHandler;
			typedef Outcome<Error, Model::ListIdentityProvidersResult> ListIdentityProvidersOutcome;
			typedef std::future<ListIdentityProvidersOutcome> ListIdentityProvidersOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListIdentityProvidersRequest&, const ListIdentityProvidersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIdentityProvidersAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListNetworkAccessEndpointAvailableRegionsResult> ListNetworkAccessEndpointAvailableRegionsOutcome;
			typedef std::future<ListNetworkAccessEndpointAvailableRegionsOutcome> ListNetworkAccessEndpointAvailableRegionsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListNetworkAccessEndpointAvailableRegionsRequest&, const ListNetworkAccessEndpointAvailableRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNetworkAccessEndpointAvailableRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListNetworkAccessEndpointAvailableZonesResult> ListNetworkAccessEndpointAvailableZonesOutcome;
			typedef std::future<ListNetworkAccessEndpointAvailableZonesOutcome> ListNetworkAccessEndpointAvailableZonesOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListNetworkAccessEndpointAvailableZonesRequest&, const ListNetworkAccessEndpointAvailableZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNetworkAccessEndpointAvailableZonesAsyncHandler;
			typedef Outcome<Error, Model::ListNetworkAccessEndpointsResult> ListNetworkAccessEndpointsOutcome;
			typedef std::future<ListNetworkAccessEndpointsOutcome> ListNetworkAccessEndpointsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListNetworkAccessEndpointsRequest&, const ListNetworkAccessEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNetworkAccessEndpointsAsyncHandler;
			typedef Outcome<Error, Model::ListNetworkAccessPathsResult> ListNetworkAccessPathsOutcome;
			typedef std::future<ListNetworkAccessPathsOutcome> ListNetworkAccessPathsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListNetworkAccessPathsRequest&, const ListNetworkAccessPathsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNetworkAccessPathsAsyncHandler;
			typedef Outcome<Error, Model::ListOrganizationalUnitParentsResult> ListOrganizationalUnitParentsOutcome;
			typedef std::future<ListOrganizationalUnitParentsOutcome> ListOrganizationalUnitParentsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListOrganizationalUnitParentsRequest&, const ListOrganizationalUnitParentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationalUnitParentsAsyncHandler;
			typedef Outcome<Error, Model::ListOrganizationalUnitsResult> ListOrganizationalUnitsOutcome;
			typedef std::future<ListOrganizationalUnitsOutcome> ListOrganizationalUnitsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListOrganizationalUnitsRequest&, const ListOrganizationalUnitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationalUnitsAsyncHandler;
			typedef Outcome<Error, Model::ListOrganizationalUnitsForApplicationResult> ListOrganizationalUnitsForApplicationOutcome;
			typedef std::future<ListOrganizationalUnitsForApplicationOutcome> ListOrganizationalUnitsForApplicationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListOrganizationalUnitsForApplicationRequest&, const ListOrganizationalUnitsForApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationalUnitsForApplicationAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListSynchronizationJobsResult> ListSynchronizationJobsOutcome;
			typedef std::future<ListSynchronizationJobsOutcome> ListSynchronizationJobsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListSynchronizationJobsRequest&, const ListSynchronizationJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSynchronizationJobsAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::ListUsersForApplicationResult> ListUsersForApplicationOutcome;
			typedef std::future<ListUsersForApplicationOutcome> ListUsersForApplicationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListUsersForApplicationRequest&, const ListUsersForApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersForApplicationAsyncHandler;
			typedef Outcome<Error, Model::ListUsersForGroupResult> ListUsersForGroupOutcome;
			typedef std::future<ListUsersForGroupOutcome> ListUsersForGroupOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ListUsersForGroupRequest&, const ListUsersForGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersForGroupAsyncHandler;
			typedef Outcome<Error, Model::ObtainApplicationClientSecretResult> ObtainApplicationClientSecretOutcome;
			typedef std::future<ObtainApplicationClientSecretOutcome> ObtainApplicationClientSecretOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ObtainApplicationClientSecretRequest&, const ObtainApplicationClientSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ObtainApplicationClientSecretAsyncHandler;
			typedef Outcome<Error, Model::ObtainDomainProxyTokenResult> ObtainDomainProxyTokenOutcome;
			typedef std::future<ObtainDomainProxyTokenOutcome> ObtainDomainProxyTokenOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::ObtainDomainProxyTokenRequest&, const ObtainDomainProxyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ObtainDomainProxyTokenAsyncHandler;
			typedef Outcome<Error, Model::RemoveUserFromOrganizationalUnitsResult> RemoveUserFromOrganizationalUnitsOutcome;
			typedef std::future<RemoveUserFromOrganizationalUnitsOutcome> RemoveUserFromOrganizationalUnitsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::RemoveUserFromOrganizationalUnitsRequest&, const RemoveUserFromOrganizationalUnitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromOrganizationalUnitsAsyncHandler;
			typedef Outcome<Error, Model::RemoveUsersFromGroupResult> RemoveUsersFromGroupOutcome;
			typedef std::future<RemoveUsersFromGroupOutcome> RemoveUsersFromGroupOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::RemoveUsersFromGroupRequest&, const RemoveUsersFromGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUsersFromGroupAsyncHandler;
			typedef Outcome<Error, Model::RevokeApplicationFromGroupsResult> RevokeApplicationFromGroupsOutcome;
			typedef std::future<RevokeApplicationFromGroupsOutcome> RevokeApplicationFromGroupsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::RevokeApplicationFromGroupsRequest&, const RevokeApplicationFromGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeApplicationFromGroupsAsyncHandler;
			typedef Outcome<Error, Model::RevokeApplicationFromOrganizationalUnitsResult> RevokeApplicationFromOrganizationalUnitsOutcome;
			typedef std::future<RevokeApplicationFromOrganizationalUnitsOutcome> RevokeApplicationFromOrganizationalUnitsOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::RevokeApplicationFromOrganizationalUnitsRequest&, const RevokeApplicationFromOrganizationalUnitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeApplicationFromOrganizationalUnitsAsyncHandler;
			typedef Outcome<Error, Model::RevokeApplicationFromUsersResult> RevokeApplicationFromUsersOutcome;
			typedef std::future<RevokeApplicationFromUsersOutcome> RevokeApplicationFromUsersOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::RevokeApplicationFromUsersRequest&, const RevokeApplicationFromUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeApplicationFromUsersAsyncHandler;
			typedef Outcome<Error, Model::RunSynchronizationJobResult> RunSynchronizationJobOutcome;
			typedef std::future<RunSynchronizationJobOutcome> RunSynchronizationJobOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::RunSynchronizationJobRequest&, const RunSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::SetApplicationGrantScopeResult> SetApplicationGrantScopeOutcome;
			typedef std::future<SetApplicationGrantScopeOutcome> SetApplicationGrantScopeOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetApplicationGrantScopeRequest&, const SetApplicationGrantScopeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetApplicationGrantScopeAsyncHandler;
			typedef Outcome<Error, Model::SetApplicationProvisioningConfigResult> SetApplicationProvisioningConfigOutcome;
			typedef std::future<SetApplicationProvisioningConfigOutcome> SetApplicationProvisioningConfigOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetApplicationProvisioningConfigRequest&, const SetApplicationProvisioningConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetApplicationProvisioningConfigAsyncHandler;
			typedef Outcome<Error, Model::SetApplicationProvisioningScopeResult> SetApplicationProvisioningScopeOutcome;
			typedef std::future<SetApplicationProvisioningScopeOutcome> SetApplicationProvisioningScopeOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetApplicationProvisioningScopeRequest&, const SetApplicationProvisioningScopeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetApplicationProvisioningScopeAsyncHandler;
			typedef Outcome<Error, Model::SetApplicationSsoConfigResult> SetApplicationSsoConfigOutcome;
			typedef std::future<SetApplicationSsoConfigOutcome> SetApplicationSsoConfigOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetApplicationSsoConfigRequest&, const SetApplicationSsoConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetApplicationSsoConfigAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultDomainResult> SetDefaultDomainOutcome;
			typedef std::future<SetDefaultDomainOutcome> SetDefaultDomainOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetDefaultDomainRequest&, const SetDefaultDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultDomainAsyncHandler;
			typedef Outcome<Error, Model::SetForgetPasswordConfigurationResult> SetForgetPasswordConfigurationOutcome;
			typedef std::future<SetForgetPasswordConfigurationOutcome> SetForgetPasswordConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetForgetPasswordConfigurationRequest&, const SetForgetPasswordConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetForgetPasswordConfigurationAsyncHandler;
			typedef Outcome<Error, Model::SetIdentityProviderUdPullConfigurationResult> SetIdentityProviderUdPullConfigurationOutcome;
			typedef std::future<SetIdentityProviderUdPullConfigurationOutcome> SetIdentityProviderUdPullConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetIdentityProviderUdPullConfigurationRequest&, const SetIdentityProviderUdPullConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetIdentityProviderUdPullConfigurationAsyncHandler;
			typedef Outcome<Error, Model::SetPasswordComplexityConfigurationResult> SetPasswordComplexityConfigurationOutcome;
			typedef std::future<SetPasswordComplexityConfigurationOutcome> SetPasswordComplexityConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetPasswordComplexityConfigurationRequest&, const SetPasswordComplexityConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPasswordComplexityConfigurationAsyncHandler;
			typedef Outcome<Error, Model::SetPasswordExpirationConfigurationResult> SetPasswordExpirationConfigurationOutcome;
			typedef std::future<SetPasswordExpirationConfigurationOutcome> SetPasswordExpirationConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetPasswordExpirationConfigurationRequest&, const SetPasswordExpirationConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPasswordExpirationConfigurationAsyncHandler;
			typedef Outcome<Error, Model::SetPasswordHistoryConfigurationResult> SetPasswordHistoryConfigurationOutcome;
			typedef std::future<SetPasswordHistoryConfigurationOutcome> SetPasswordHistoryConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetPasswordHistoryConfigurationRequest&, const SetPasswordHistoryConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPasswordHistoryConfigurationAsyncHandler;
			typedef Outcome<Error, Model::SetPasswordInitializationConfigurationResult> SetPasswordInitializationConfigurationOutcome;
			typedef std::future<SetPasswordInitializationConfigurationOutcome> SetPasswordInitializationConfigurationOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetPasswordInitializationConfigurationRequest&, const SetPasswordInitializationConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPasswordInitializationConfigurationAsyncHandler;
			typedef Outcome<Error, Model::SetUserPrimaryOrganizationalUnitResult> SetUserPrimaryOrganizationalUnitOutcome;
			typedef std::future<SetUserPrimaryOrganizationalUnitOutcome> SetUserPrimaryOrganizationalUnitOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::SetUserPrimaryOrganizationalUnitRequest&, const SetUserPrimaryOrganizationalUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetUserPrimaryOrganizationalUnitAsyncHandler;
			typedef Outcome<Error, Model::UnlockUserResult> UnlockUserOutcome;
			typedef std::future<UnlockUserOutcome> UnlockUserOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UnlockUserRequest&, const UnlockUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockUserAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationAuthorizationTypeResult> UpdateApplicationAuthorizationTypeOutcome;
			typedef std::future<UpdateApplicationAuthorizationTypeOutcome> UpdateApplicationAuthorizationTypeOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateApplicationAuthorizationTypeRequest&, const UpdateApplicationAuthorizationTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationAuthorizationTypeAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationDescriptionResult> UpdateApplicationDescriptionOutcome;
			typedef std::future<UpdateApplicationDescriptionOutcome> UpdateApplicationDescriptionOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateApplicationDescriptionRequest&, const UpdateApplicationDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateConditionalAccessPolicyResult> UpdateConditionalAccessPolicyOutcome;
			typedef std::future<UpdateConditionalAccessPolicyOutcome> UpdateConditionalAccessPolicyOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateConditionalAccessPolicyRequest&, const UpdateConditionalAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConditionalAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateConditionalAccessPolicyDescriptionResult> UpdateConditionalAccessPolicyDescriptionOutcome;
			typedef std::future<UpdateConditionalAccessPolicyDescriptionOutcome> UpdateConditionalAccessPolicyDescriptionOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateConditionalAccessPolicyDescriptionRequest&, const UpdateConditionalAccessPolicyDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConditionalAccessPolicyDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateGroupResult> UpdateGroupOutcome;
			typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateGroupRequest&, const UpdateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateGroupDescriptionResult> UpdateGroupDescriptionOutcome;
			typedef std::future<UpdateGroupDescriptionOutcome> UpdateGroupDescriptionOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateGroupDescriptionRequest&, const UpdateGroupDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateIdentityProviderResult> UpdateIdentityProviderOutcome;
			typedef std::future<UpdateIdentityProviderOutcome> UpdateIdentityProviderOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateIdentityProviderRequest&, const UpdateIdentityProviderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIdentityProviderAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceDescriptionResult> UpdateInstanceDescriptionOutcome;
			typedef std::future<UpdateInstanceDescriptionOutcome> UpdateInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateInstanceDescriptionRequest&, const UpdateInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateNetworkAccessEndpointNameResult> UpdateNetworkAccessEndpointNameOutcome;
			typedef std::future<UpdateNetworkAccessEndpointNameOutcome> UpdateNetworkAccessEndpointNameOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateNetworkAccessEndpointNameRequest&, const UpdateNetworkAccessEndpointNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNetworkAccessEndpointNameAsyncHandler;
			typedef Outcome<Error, Model::UpdateOrganizationalUnitResult> UpdateOrganizationalUnitOutcome;
			typedef std::future<UpdateOrganizationalUnitOutcome> UpdateOrganizationalUnitOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateOrganizationalUnitRequest&, const UpdateOrganizationalUnitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationalUnitAsyncHandler;
			typedef Outcome<Error, Model::UpdateOrganizationalUnitDescriptionResult> UpdateOrganizationalUnitDescriptionOutcome;
			typedef std::future<UpdateOrganizationalUnitDescriptionOutcome> UpdateOrganizationalUnitDescriptionOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateOrganizationalUnitDescriptionRequest&, const UpdateOrganizationalUnitDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationalUnitDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateOrganizationalUnitParentIdResult> UpdateOrganizationalUnitParentIdOutcome;
			typedef std::future<UpdateOrganizationalUnitParentIdOutcome> UpdateOrganizationalUnitParentIdOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateOrganizationalUnitParentIdRequest&, const UpdateOrganizationalUnitParentIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOrganizationalUnitParentIdAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserResult> UpdateUserOutcome;
			typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateUserRequest&, const UpdateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserDescriptionResult> UpdateUserDescriptionOutcome;
			typedef std::future<UpdateUserDescriptionOutcome> UpdateUserDescriptionOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateUserDescriptionRequest&, const UpdateUserDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserPasswordResult> UpdateUserPasswordOutcome;
			typedef std::future<UpdateUserPasswordOutcome> UpdateUserPasswordOutcomeCallable;
			typedef std::function<void(const EiamClient*, const Model::UpdateUserPasswordRequest&, const UpdateUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserPasswordAsyncHandler;

			EiamClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EiamClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EiamClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EiamClient();
			AddUserToOrganizationalUnitsOutcome addUserToOrganizationalUnits(const Model::AddUserToOrganizationalUnitsRequest &request)const;
			void addUserToOrganizationalUnitsAsync(const Model::AddUserToOrganizationalUnitsRequest& request, const AddUserToOrganizationalUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserToOrganizationalUnitsOutcomeCallable addUserToOrganizationalUnitsCallable(const Model::AddUserToOrganizationalUnitsRequest& request) const;
			AddUsersToGroupOutcome addUsersToGroup(const Model::AddUsersToGroupRequest &request)const;
			void addUsersToGroupAsync(const Model::AddUsersToGroupRequest& request, const AddUsersToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUsersToGroupOutcomeCallable addUsersToGroupCallable(const Model::AddUsersToGroupRequest& request) const;
			AuthorizeApplicationToGroupsOutcome authorizeApplicationToGroups(const Model::AuthorizeApplicationToGroupsRequest &request)const;
			void authorizeApplicationToGroupsAsync(const Model::AuthorizeApplicationToGroupsRequest& request, const AuthorizeApplicationToGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeApplicationToGroupsOutcomeCallable authorizeApplicationToGroupsCallable(const Model::AuthorizeApplicationToGroupsRequest& request) const;
			AuthorizeApplicationToOrganizationalUnitsOutcome authorizeApplicationToOrganizationalUnits(const Model::AuthorizeApplicationToOrganizationalUnitsRequest &request)const;
			void authorizeApplicationToOrganizationalUnitsAsync(const Model::AuthorizeApplicationToOrganizationalUnitsRequest& request, const AuthorizeApplicationToOrganizationalUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeApplicationToOrganizationalUnitsOutcomeCallable authorizeApplicationToOrganizationalUnitsCallable(const Model::AuthorizeApplicationToOrganizationalUnitsRequest& request) const;
			AuthorizeApplicationToUsersOutcome authorizeApplicationToUsers(const Model::AuthorizeApplicationToUsersRequest &request)const;
			void authorizeApplicationToUsersAsync(const Model::AuthorizeApplicationToUsersRequest& request, const AuthorizeApplicationToUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeApplicationToUsersOutcomeCallable authorizeApplicationToUsersCallable(const Model::AuthorizeApplicationToUsersRequest& request) const;
			CreateApplicationOutcome createApplication(const Model::CreateApplicationRequest &request)const;
			void createApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationOutcomeCallable createApplicationCallable(const Model::CreateApplicationRequest& request) const;
			CreateApplicationClientSecretOutcome createApplicationClientSecret(const Model::CreateApplicationClientSecretRequest &request)const;
			void createApplicationClientSecretAsync(const Model::CreateApplicationClientSecretRequest& request, const CreateApplicationClientSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationClientSecretOutcomeCallable createApplicationClientSecretCallable(const Model::CreateApplicationClientSecretRequest& request) const;
			CreateConditionalAccessPolicyOutcome createConditionalAccessPolicy(const Model::CreateConditionalAccessPolicyRequest &request)const;
			void createConditionalAccessPolicyAsync(const Model::CreateConditionalAccessPolicyRequest& request, const CreateConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConditionalAccessPolicyOutcomeCallable createConditionalAccessPolicyCallable(const Model::CreateConditionalAccessPolicyRequest& request) const;
			CreateDomainOutcome createDomain(const Model::CreateDomainRequest &request)const;
			void createDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDomainOutcomeCallable createDomainCallable(const Model::CreateDomainRequest& request) const;
			CreateDomainProxyTokenOutcome createDomainProxyToken(const Model::CreateDomainProxyTokenRequest &request)const;
			void createDomainProxyTokenAsync(const Model::CreateDomainProxyTokenRequest& request, const CreateDomainProxyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDomainProxyTokenOutcomeCallable createDomainProxyTokenCallable(const Model::CreateDomainProxyTokenRequest& request) const;
			CreateGroupOutcome createGroup(const Model::CreateGroupRequest &request)const;
			void createGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupOutcomeCallable createGroupCallable(const Model::CreateGroupRequest& request) const;
			CreateIdentityProviderOutcome createIdentityProvider(const Model::CreateIdentityProviderRequest &request)const;
			void createIdentityProviderAsync(const Model::CreateIdentityProviderRequest& request, const CreateIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIdentityProviderOutcomeCallable createIdentityProviderCallable(const Model::CreateIdentityProviderRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateNetworkAccessEndpointOutcome createNetworkAccessEndpoint(const Model::CreateNetworkAccessEndpointRequest &request)const;
			void createNetworkAccessEndpointAsync(const Model::CreateNetworkAccessEndpointRequest& request, const CreateNetworkAccessEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkAccessEndpointOutcomeCallable createNetworkAccessEndpointCallable(const Model::CreateNetworkAccessEndpointRequest& request) const;
			CreateOrganizationalUnitOutcome createOrganizationalUnit(const Model::CreateOrganizationalUnitRequest &request)const;
			void createOrganizationalUnitAsync(const Model::CreateOrganizationalUnitRequest& request, const CreateOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrganizationalUnitOutcomeCallable createOrganizationalUnitCallable(const Model::CreateOrganizationalUnitRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			DeleteApplicationOutcome deleteApplication(const Model::DeleteApplicationRequest &request)const;
			void deleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationOutcomeCallable deleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;
			DeleteApplicationClientSecretOutcome deleteApplicationClientSecret(const Model::DeleteApplicationClientSecretRequest &request)const;
			void deleteApplicationClientSecretAsync(const Model::DeleteApplicationClientSecretRequest& request, const DeleteApplicationClientSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationClientSecretOutcomeCallable deleteApplicationClientSecretCallable(const Model::DeleteApplicationClientSecretRequest& request) const;
			DeleteConditionalAccessPolicyOutcome deleteConditionalAccessPolicy(const Model::DeleteConditionalAccessPolicyRequest &request)const;
			void deleteConditionalAccessPolicyAsync(const Model::DeleteConditionalAccessPolicyRequest& request, const DeleteConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConditionalAccessPolicyOutcomeCallable deleteConditionalAccessPolicyCallable(const Model::DeleteConditionalAccessPolicyRequest& request) const;
			DeleteDomainOutcome deleteDomain(const Model::DeleteDomainRequest &request)const;
			void deleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainOutcomeCallable deleteDomainCallable(const Model::DeleteDomainRequest& request) const;
			DeleteDomainProxyTokenOutcome deleteDomainProxyToken(const Model::DeleteDomainProxyTokenRequest &request)const;
			void deleteDomainProxyTokenAsync(const Model::DeleteDomainProxyTokenRequest& request, const DeleteDomainProxyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainProxyTokenOutcomeCallable deleteDomainProxyTokenCallable(const Model::DeleteDomainProxyTokenRequest& request) const;
			DeleteGroupOutcome deleteGroup(const Model::DeleteGroupRequest &request)const;
			void deleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupOutcomeCallable deleteGroupCallable(const Model::DeleteGroupRequest& request) const;
			DeleteIdentityProviderOutcome deleteIdentityProvider(const Model::DeleteIdentityProviderRequest &request)const;
			void deleteIdentityProviderAsync(const Model::DeleteIdentityProviderRequest& request, const DeleteIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIdentityProviderOutcomeCallable deleteIdentityProviderCallable(const Model::DeleteIdentityProviderRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteNetworkAccessEndpointOutcome deleteNetworkAccessEndpoint(const Model::DeleteNetworkAccessEndpointRequest &request)const;
			void deleteNetworkAccessEndpointAsync(const Model::DeleteNetworkAccessEndpointRequest& request, const DeleteNetworkAccessEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkAccessEndpointOutcomeCallable deleteNetworkAccessEndpointCallable(const Model::DeleteNetworkAccessEndpointRequest& request) const;
			DeleteOrganizationalUnitOutcome deleteOrganizationalUnit(const Model::DeleteOrganizationalUnitRequest &request)const;
			void deleteOrganizationalUnitAsync(const Model::DeleteOrganizationalUnitRequest& request, const DeleteOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOrganizationalUnitOutcomeCallable deleteOrganizationalUnitCallable(const Model::DeleteOrganizationalUnitRequest& request) const;
			DeleteOrganizationalUnitChildrenOutcome deleteOrganizationalUnitChildren(const Model::DeleteOrganizationalUnitChildrenRequest &request)const;
			void deleteOrganizationalUnitChildrenAsync(const Model::DeleteOrganizationalUnitChildrenRequest& request, const DeleteOrganizationalUnitChildrenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOrganizationalUnitChildrenOutcomeCallable deleteOrganizationalUnitChildrenCallable(const Model::DeleteOrganizationalUnitChildrenRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DisableApplicationOutcome disableApplication(const Model::DisableApplicationRequest &request)const;
			void disableApplicationAsync(const Model::DisableApplicationRequest& request, const DisableApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableApplicationOutcomeCallable disableApplicationCallable(const Model::DisableApplicationRequest& request) const;
			DisableApplicationApiInvokeOutcome disableApplicationApiInvoke(const Model::DisableApplicationApiInvokeRequest &request)const;
			void disableApplicationApiInvokeAsync(const Model::DisableApplicationApiInvokeRequest& request, const DisableApplicationApiInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableApplicationApiInvokeOutcomeCallable disableApplicationApiInvokeCallable(const Model::DisableApplicationApiInvokeRequest& request) const;
			DisableApplicationClientSecretOutcome disableApplicationClientSecret(const Model::DisableApplicationClientSecretRequest &request)const;
			void disableApplicationClientSecretAsync(const Model::DisableApplicationClientSecretRequest& request, const DisableApplicationClientSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableApplicationClientSecretOutcomeCallable disableApplicationClientSecretCallable(const Model::DisableApplicationClientSecretRequest& request) const;
			DisableApplicationProvisioningOutcome disableApplicationProvisioning(const Model::DisableApplicationProvisioningRequest &request)const;
			void disableApplicationProvisioningAsync(const Model::DisableApplicationProvisioningRequest& request, const DisableApplicationProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableApplicationProvisioningOutcomeCallable disableApplicationProvisioningCallable(const Model::DisableApplicationProvisioningRequest& request) const;
			DisableApplicationSsoOutcome disableApplicationSso(const Model::DisableApplicationSsoRequest &request)const;
			void disableApplicationSsoAsync(const Model::DisableApplicationSsoRequest& request, const DisableApplicationSsoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableApplicationSsoOutcomeCallable disableApplicationSsoCallable(const Model::DisableApplicationSsoRequest& request) const;
			DisableConditionalAccessPolicyOutcome disableConditionalAccessPolicy(const Model::DisableConditionalAccessPolicyRequest &request)const;
			void disableConditionalAccessPolicyAsync(const Model::DisableConditionalAccessPolicyRequest& request, const DisableConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableConditionalAccessPolicyOutcomeCallable disableConditionalAccessPolicyCallable(const Model::DisableConditionalAccessPolicyRequest& request) const;
			DisableDomainProxyTokenOutcome disableDomainProxyToken(const Model::DisableDomainProxyTokenRequest &request)const;
			void disableDomainProxyTokenAsync(const Model::DisableDomainProxyTokenRequest& request, const DisableDomainProxyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDomainProxyTokenOutcomeCallable disableDomainProxyTokenCallable(const Model::DisableDomainProxyTokenRequest& request) const;
			DisableIdentityProviderUdPullOutcome disableIdentityProviderUdPull(const Model::DisableIdentityProviderUdPullRequest &request)const;
			void disableIdentityProviderUdPullAsync(const Model::DisableIdentityProviderUdPullRequest& request, const DisableIdentityProviderUdPullAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableIdentityProviderUdPullOutcomeCallable disableIdentityProviderUdPullCallable(const Model::DisableIdentityProviderUdPullRequest& request) const;
			DisableInitDomainAutoRedirectOutcome disableInitDomainAutoRedirect(const Model::DisableInitDomainAutoRedirectRequest &request)const;
			void disableInitDomainAutoRedirectAsync(const Model::DisableInitDomainAutoRedirectRequest& request, const DisableInitDomainAutoRedirectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableInitDomainAutoRedirectOutcomeCallable disableInitDomainAutoRedirectCallable(const Model::DisableInitDomainAutoRedirectRequest& request) const;
			DisableUserOutcome disableUser(const Model::DisableUserRequest &request)const;
			void disableUserAsync(const Model::DisableUserRequest& request, const DisableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableUserOutcomeCallable disableUserCallable(const Model::DisableUserRequest& request) const;
			EnableApplicationOutcome enableApplication(const Model::EnableApplicationRequest &request)const;
			void enableApplicationAsync(const Model::EnableApplicationRequest& request, const EnableApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableApplicationOutcomeCallable enableApplicationCallable(const Model::EnableApplicationRequest& request) const;
			EnableApplicationApiInvokeOutcome enableApplicationApiInvoke(const Model::EnableApplicationApiInvokeRequest &request)const;
			void enableApplicationApiInvokeAsync(const Model::EnableApplicationApiInvokeRequest& request, const EnableApplicationApiInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableApplicationApiInvokeOutcomeCallable enableApplicationApiInvokeCallable(const Model::EnableApplicationApiInvokeRequest& request) const;
			EnableApplicationClientSecretOutcome enableApplicationClientSecret(const Model::EnableApplicationClientSecretRequest &request)const;
			void enableApplicationClientSecretAsync(const Model::EnableApplicationClientSecretRequest& request, const EnableApplicationClientSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableApplicationClientSecretOutcomeCallable enableApplicationClientSecretCallable(const Model::EnableApplicationClientSecretRequest& request) const;
			EnableApplicationProvisioningOutcome enableApplicationProvisioning(const Model::EnableApplicationProvisioningRequest &request)const;
			void enableApplicationProvisioningAsync(const Model::EnableApplicationProvisioningRequest& request, const EnableApplicationProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableApplicationProvisioningOutcomeCallable enableApplicationProvisioningCallable(const Model::EnableApplicationProvisioningRequest& request) const;
			EnableApplicationSsoOutcome enableApplicationSso(const Model::EnableApplicationSsoRequest &request)const;
			void enableApplicationSsoAsync(const Model::EnableApplicationSsoRequest& request, const EnableApplicationSsoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableApplicationSsoOutcomeCallable enableApplicationSsoCallable(const Model::EnableApplicationSsoRequest& request) const;
			EnableConditionalAccessPolicyOutcome enableConditionalAccessPolicy(const Model::EnableConditionalAccessPolicyRequest &request)const;
			void enableConditionalAccessPolicyAsync(const Model::EnableConditionalAccessPolicyRequest& request, const EnableConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableConditionalAccessPolicyOutcomeCallable enableConditionalAccessPolicyCallable(const Model::EnableConditionalAccessPolicyRequest& request) const;
			EnableDomainProxyTokenOutcome enableDomainProxyToken(const Model::EnableDomainProxyTokenRequest &request)const;
			void enableDomainProxyTokenAsync(const Model::EnableDomainProxyTokenRequest& request, const EnableDomainProxyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDomainProxyTokenOutcomeCallable enableDomainProxyTokenCallable(const Model::EnableDomainProxyTokenRequest& request) const;
			EnableIdentityProviderUdPullOutcome enableIdentityProviderUdPull(const Model::EnableIdentityProviderUdPullRequest &request)const;
			void enableIdentityProviderUdPullAsync(const Model::EnableIdentityProviderUdPullRequest& request, const EnableIdentityProviderUdPullAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableIdentityProviderUdPullOutcomeCallable enableIdentityProviderUdPullCallable(const Model::EnableIdentityProviderUdPullRequest& request) const;
			EnableInitDomainAutoRedirectOutcome enableInitDomainAutoRedirect(const Model::EnableInitDomainAutoRedirectRequest &request)const;
			void enableInitDomainAutoRedirectAsync(const Model::EnableInitDomainAutoRedirectRequest& request, const EnableInitDomainAutoRedirectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableInitDomainAutoRedirectOutcomeCallable enableInitDomainAutoRedirectCallable(const Model::EnableInitDomainAutoRedirectRequest& request) const;
			EnableUserOutcome enableUser(const Model::EnableUserRequest &request)const;
			void enableUserAsync(const Model::EnableUserRequest& request, const EnableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableUserOutcomeCallable enableUserCallable(const Model::EnableUserRequest& request) const;
			GetApplicationOutcome getApplication(const Model::GetApplicationRequest &request)const;
			void getApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationOutcomeCallable getApplicationCallable(const Model::GetApplicationRequest& request) const;
			GetApplicationGrantScopeOutcome getApplicationGrantScope(const Model::GetApplicationGrantScopeRequest &request)const;
			void getApplicationGrantScopeAsync(const Model::GetApplicationGrantScopeRequest& request, const GetApplicationGrantScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationGrantScopeOutcomeCallable getApplicationGrantScopeCallable(const Model::GetApplicationGrantScopeRequest& request) const;
			GetApplicationProvisioningConfigOutcome getApplicationProvisioningConfig(const Model::GetApplicationProvisioningConfigRequest &request)const;
			void getApplicationProvisioningConfigAsync(const Model::GetApplicationProvisioningConfigRequest& request, const GetApplicationProvisioningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationProvisioningConfigOutcomeCallable getApplicationProvisioningConfigCallable(const Model::GetApplicationProvisioningConfigRequest& request) const;
			GetApplicationProvisioningScopeOutcome getApplicationProvisioningScope(const Model::GetApplicationProvisioningScopeRequest &request)const;
			void getApplicationProvisioningScopeAsync(const Model::GetApplicationProvisioningScopeRequest& request, const GetApplicationProvisioningScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationProvisioningScopeOutcomeCallable getApplicationProvisioningScopeCallable(const Model::GetApplicationProvisioningScopeRequest& request) const;
			GetApplicationSsoConfigOutcome getApplicationSsoConfig(const Model::GetApplicationSsoConfigRequest &request)const;
			void getApplicationSsoConfigAsync(const Model::GetApplicationSsoConfigRequest& request, const GetApplicationSsoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationSsoConfigOutcomeCallable getApplicationSsoConfigCallable(const Model::GetApplicationSsoConfigRequest& request) const;
			GetConditionalAccessPolicyOutcome getConditionalAccessPolicy(const Model::GetConditionalAccessPolicyRequest &request)const;
			void getConditionalAccessPolicyAsync(const Model::GetConditionalAccessPolicyRequest& request, const GetConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConditionalAccessPolicyOutcomeCallable getConditionalAccessPolicyCallable(const Model::GetConditionalAccessPolicyRequest& request) const;
			GetDomainOutcome getDomain(const Model::GetDomainRequest &request)const;
			void getDomainAsync(const Model::GetDomainRequest& request, const GetDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDomainOutcomeCallable getDomainCallable(const Model::GetDomainRequest& request) const;
			GetDomainDnsChallengeOutcome getDomainDnsChallenge(const Model::GetDomainDnsChallengeRequest &request)const;
			void getDomainDnsChallengeAsync(const Model::GetDomainDnsChallengeRequest& request, const GetDomainDnsChallengeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDomainDnsChallengeOutcomeCallable getDomainDnsChallengeCallable(const Model::GetDomainDnsChallengeRequest& request) const;
			GetForgetPasswordConfigurationOutcome getForgetPasswordConfiguration(const Model::GetForgetPasswordConfigurationRequest &request)const;
			void getForgetPasswordConfigurationAsync(const Model::GetForgetPasswordConfigurationRequest& request, const GetForgetPasswordConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetForgetPasswordConfigurationOutcomeCallable getForgetPasswordConfigurationCallable(const Model::GetForgetPasswordConfigurationRequest& request) const;
			GetGroupOutcome getGroup(const Model::GetGroupRequest &request)const;
			void getGroupAsync(const Model::GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupOutcomeCallable getGroupCallable(const Model::GetGroupRequest& request) const;
			GetIdentityProviderOutcome getIdentityProvider(const Model::GetIdentityProviderRequest &request)const;
			void getIdentityProviderAsync(const Model::GetIdentityProviderRequest& request, const GetIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIdentityProviderOutcomeCallable getIdentityProviderCallable(const Model::GetIdentityProviderRequest& request) const;
			GetIdentityProviderUdPullConfigurationOutcome getIdentityProviderUdPullConfiguration(const Model::GetIdentityProviderUdPullConfigurationRequest &request)const;
			void getIdentityProviderUdPullConfigurationAsync(const Model::GetIdentityProviderUdPullConfigurationRequest& request, const GetIdentityProviderUdPullConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIdentityProviderUdPullConfigurationOutcomeCallable getIdentityProviderUdPullConfigurationCallable(const Model::GetIdentityProviderUdPullConfigurationRequest& request) const;
			GetInstanceOutcome getInstance(const Model::GetInstanceRequest &request)const;
			void getInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceOutcomeCallable getInstanceCallable(const Model::GetInstanceRequest& request) const;
			GetInstanceLicenseOutcome getInstanceLicense(const Model::GetInstanceLicenseRequest &request)const;
			void getInstanceLicenseAsync(const Model::GetInstanceLicenseRequest& request, const GetInstanceLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceLicenseOutcomeCallable getInstanceLicenseCallable(const Model::GetInstanceLicenseRequest& request) const;
			GetNetworkAccessEndpointOutcome getNetworkAccessEndpoint(const Model::GetNetworkAccessEndpointRequest &request)const;
			void getNetworkAccessEndpointAsync(const Model::GetNetworkAccessEndpointRequest& request, const GetNetworkAccessEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNetworkAccessEndpointOutcomeCallable getNetworkAccessEndpointCallable(const Model::GetNetworkAccessEndpointRequest& request) const;
			GetOrganizationalUnitOutcome getOrganizationalUnit(const Model::GetOrganizationalUnitRequest &request)const;
			void getOrganizationalUnitAsync(const Model::GetOrganizationalUnitRequest& request, const GetOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOrganizationalUnitOutcomeCallable getOrganizationalUnitCallable(const Model::GetOrganizationalUnitRequest& request) const;
			GetPasswordComplexityConfigurationOutcome getPasswordComplexityConfiguration(const Model::GetPasswordComplexityConfigurationRequest &request)const;
			void getPasswordComplexityConfigurationAsync(const Model::GetPasswordComplexityConfigurationRequest& request, const GetPasswordComplexityConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPasswordComplexityConfigurationOutcomeCallable getPasswordComplexityConfigurationCallable(const Model::GetPasswordComplexityConfigurationRequest& request) const;
			GetPasswordExpirationConfigurationOutcome getPasswordExpirationConfiguration(const Model::GetPasswordExpirationConfigurationRequest &request)const;
			void getPasswordExpirationConfigurationAsync(const Model::GetPasswordExpirationConfigurationRequest& request, const GetPasswordExpirationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPasswordExpirationConfigurationOutcomeCallable getPasswordExpirationConfigurationCallable(const Model::GetPasswordExpirationConfigurationRequest& request) const;
			GetPasswordHistoryConfigurationOutcome getPasswordHistoryConfiguration(const Model::GetPasswordHistoryConfigurationRequest &request)const;
			void getPasswordHistoryConfigurationAsync(const Model::GetPasswordHistoryConfigurationRequest& request, const GetPasswordHistoryConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPasswordHistoryConfigurationOutcomeCallable getPasswordHistoryConfigurationCallable(const Model::GetPasswordHistoryConfigurationRequest& request) const;
			GetPasswordInitializationConfigurationOutcome getPasswordInitializationConfiguration(const Model::GetPasswordInitializationConfigurationRequest &request)const;
			void getPasswordInitializationConfigurationAsync(const Model::GetPasswordInitializationConfigurationRequest& request, const GetPasswordInitializationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPasswordInitializationConfigurationOutcomeCallable getPasswordInitializationConfigurationCallable(const Model::GetPasswordInitializationConfigurationRequest& request) const;
			GetRootOrganizationalUnitOutcome getRootOrganizationalUnit(const Model::GetRootOrganizationalUnitRequest &request)const;
			void getRootOrganizationalUnitAsync(const Model::GetRootOrganizationalUnitRequest& request, const GetRootOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRootOrganizationalUnitOutcomeCallable getRootOrganizationalUnitCallable(const Model::GetRootOrganizationalUnitRequest& request) const;
			GetSynchronizationJobOutcome getSynchronizationJob(const Model::GetSynchronizationJobRequest &request)const;
			void getSynchronizationJobAsync(const Model::GetSynchronizationJobRequest& request, const GetSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSynchronizationJobOutcomeCallable getSynchronizationJobCallable(const Model::GetSynchronizationJobRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			ListApplicationClientSecretsOutcome listApplicationClientSecrets(const Model::ListApplicationClientSecretsRequest &request)const;
			void listApplicationClientSecretsAsync(const Model::ListApplicationClientSecretsRequest& request, const ListApplicationClientSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationClientSecretsOutcomeCallable listApplicationClientSecretsCallable(const Model::ListApplicationClientSecretsRequest& request) const;
			ListApplicationsOutcome listApplications(const Model::ListApplicationsRequest &request)const;
			void listApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsOutcomeCallable listApplicationsCallable(const Model::ListApplicationsRequest& request) const;
			ListApplicationsForOrganizationalUnitOutcome listApplicationsForOrganizationalUnit(const Model::ListApplicationsForOrganizationalUnitRequest &request)const;
			void listApplicationsForOrganizationalUnitAsync(const Model::ListApplicationsForOrganizationalUnitRequest& request, const ListApplicationsForOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsForOrganizationalUnitOutcomeCallable listApplicationsForOrganizationalUnitCallable(const Model::ListApplicationsForOrganizationalUnitRequest& request) const;
			ListApplicationsForUserOutcome listApplicationsForUser(const Model::ListApplicationsForUserRequest &request)const;
			void listApplicationsForUserAsync(const Model::ListApplicationsForUserRequest& request, const ListApplicationsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsForUserOutcomeCallable listApplicationsForUserCallable(const Model::ListApplicationsForUserRequest& request) const;
			ListConditionalAccessPoliciesOutcome listConditionalAccessPolicies(const Model::ListConditionalAccessPoliciesRequest &request)const;
			void listConditionalAccessPoliciesAsync(const Model::ListConditionalAccessPoliciesRequest& request, const ListConditionalAccessPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConditionalAccessPoliciesOutcomeCallable listConditionalAccessPoliciesCallable(const Model::ListConditionalAccessPoliciesRequest& request) const;
			ListConditionalAccessPoliciesForNetworkZoneOutcome listConditionalAccessPoliciesForNetworkZone(const Model::ListConditionalAccessPoliciesForNetworkZoneRequest &request)const;
			void listConditionalAccessPoliciesForNetworkZoneAsync(const Model::ListConditionalAccessPoliciesForNetworkZoneRequest& request, const ListConditionalAccessPoliciesForNetworkZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConditionalAccessPoliciesForNetworkZoneOutcomeCallable listConditionalAccessPoliciesForNetworkZoneCallable(const Model::ListConditionalAccessPoliciesForNetworkZoneRequest& request) const;
			ListDomainProxyTokensOutcome listDomainProxyTokens(const Model::ListDomainProxyTokensRequest &request)const;
			void listDomainProxyTokensAsync(const Model::ListDomainProxyTokensRequest& request, const ListDomainProxyTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDomainProxyTokensOutcomeCallable listDomainProxyTokensCallable(const Model::ListDomainProxyTokensRequest& request) const;
			ListDomainsOutcome listDomains(const Model::ListDomainsRequest &request)const;
			void listDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDomainsOutcomeCallable listDomainsCallable(const Model::ListDomainsRequest& request) const;
			ListEiamInstancesOutcome listEiamInstances(const Model::ListEiamInstancesRequest &request)const;
			void listEiamInstancesAsync(const Model::ListEiamInstancesRequest& request, const ListEiamInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEiamInstancesOutcomeCallable listEiamInstancesCallable(const Model::ListEiamInstancesRequest& request) const;
			ListEiamRegionsOutcome listEiamRegions(const Model::ListEiamRegionsRequest &request)const;
			void listEiamRegionsAsync(const Model::ListEiamRegionsRequest& request, const ListEiamRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEiamRegionsOutcomeCallable listEiamRegionsCallable(const Model::ListEiamRegionsRequest& request) const;
			ListGroupsOutcome listGroups(const Model::ListGroupsRequest &request)const;
			void listGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsOutcomeCallable listGroupsCallable(const Model::ListGroupsRequest& request) const;
			ListGroupsForApplicationOutcome listGroupsForApplication(const Model::ListGroupsForApplicationRequest &request)const;
			void listGroupsForApplicationAsync(const Model::ListGroupsForApplicationRequest& request, const ListGroupsForApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsForApplicationOutcomeCallable listGroupsForApplicationCallable(const Model::ListGroupsForApplicationRequest& request) const;
			ListGroupsForUserOutcome listGroupsForUser(const Model::ListGroupsForUserRequest &request)const;
			void listGroupsForUserAsync(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsForUserOutcomeCallable listGroupsForUserCallable(const Model::ListGroupsForUserRequest& request) const;
			ListIdentityProvidersOutcome listIdentityProviders(const Model::ListIdentityProvidersRequest &request)const;
			void listIdentityProvidersAsync(const Model::ListIdentityProvidersRequest& request, const ListIdentityProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIdentityProvidersOutcomeCallable listIdentityProvidersCallable(const Model::ListIdentityProvidersRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListNetworkAccessEndpointAvailableRegionsOutcome listNetworkAccessEndpointAvailableRegions(const Model::ListNetworkAccessEndpointAvailableRegionsRequest &request)const;
			void listNetworkAccessEndpointAvailableRegionsAsync(const Model::ListNetworkAccessEndpointAvailableRegionsRequest& request, const ListNetworkAccessEndpointAvailableRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNetworkAccessEndpointAvailableRegionsOutcomeCallable listNetworkAccessEndpointAvailableRegionsCallable(const Model::ListNetworkAccessEndpointAvailableRegionsRequest& request) const;
			ListNetworkAccessEndpointAvailableZonesOutcome listNetworkAccessEndpointAvailableZones(const Model::ListNetworkAccessEndpointAvailableZonesRequest &request)const;
			void listNetworkAccessEndpointAvailableZonesAsync(const Model::ListNetworkAccessEndpointAvailableZonesRequest& request, const ListNetworkAccessEndpointAvailableZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNetworkAccessEndpointAvailableZonesOutcomeCallable listNetworkAccessEndpointAvailableZonesCallable(const Model::ListNetworkAccessEndpointAvailableZonesRequest& request) const;
			ListNetworkAccessEndpointsOutcome listNetworkAccessEndpoints(const Model::ListNetworkAccessEndpointsRequest &request)const;
			void listNetworkAccessEndpointsAsync(const Model::ListNetworkAccessEndpointsRequest& request, const ListNetworkAccessEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNetworkAccessEndpointsOutcomeCallable listNetworkAccessEndpointsCallable(const Model::ListNetworkAccessEndpointsRequest& request) const;
			ListNetworkAccessPathsOutcome listNetworkAccessPaths(const Model::ListNetworkAccessPathsRequest &request)const;
			void listNetworkAccessPathsAsync(const Model::ListNetworkAccessPathsRequest& request, const ListNetworkAccessPathsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNetworkAccessPathsOutcomeCallable listNetworkAccessPathsCallable(const Model::ListNetworkAccessPathsRequest& request) const;
			ListOrganizationalUnitParentsOutcome listOrganizationalUnitParents(const Model::ListOrganizationalUnitParentsRequest &request)const;
			void listOrganizationalUnitParentsAsync(const Model::ListOrganizationalUnitParentsRequest& request, const ListOrganizationalUnitParentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrganizationalUnitParentsOutcomeCallable listOrganizationalUnitParentsCallable(const Model::ListOrganizationalUnitParentsRequest& request) const;
			ListOrganizationalUnitsOutcome listOrganizationalUnits(const Model::ListOrganizationalUnitsRequest &request)const;
			void listOrganizationalUnitsAsync(const Model::ListOrganizationalUnitsRequest& request, const ListOrganizationalUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrganizationalUnitsOutcomeCallable listOrganizationalUnitsCallable(const Model::ListOrganizationalUnitsRequest& request) const;
			ListOrganizationalUnitsForApplicationOutcome listOrganizationalUnitsForApplication(const Model::ListOrganizationalUnitsForApplicationRequest &request)const;
			void listOrganizationalUnitsForApplicationAsync(const Model::ListOrganizationalUnitsForApplicationRequest& request, const ListOrganizationalUnitsForApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrganizationalUnitsForApplicationOutcomeCallable listOrganizationalUnitsForApplicationCallable(const Model::ListOrganizationalUnitsForApplicationRequest& request) const;
			ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
			void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
			ListSynchronizationJobsOutcome listSynchronizationJobs(const Model::ListSynchronizationJobsRequest &request)const;
			void listSynchronizationJobsAsync(const Model::ListSynchronizationJobsRequest& request, const ListSynchronizationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSynchronizationJobsOutcomeCallable listSynchronizationJobsCallable(const Model::ListSynchronizationJobsRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			ListUsersForApplicationOutcome listUsersForApplication(const Model::ListUsersForApplicationRequest &request)const;
			void listUsersForApplicationAsync(const Model::ListUsersForApplicationRequest& request, const ListUsersForApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersForApplicationOutcomeCallable listUsersForApplicationCallable(const Model::ListUsersForApplicationRequest& request) const;
			ListUsersForGroupOutcome listUsersForGroup(const Model::ListUsersForGroupRequest &request)const;
			void listUsersForGroupAsync(const Model::ListUsersForGroupRequest& request, const ListUsersForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersForGroupOutcomeCallable listUsersForGroupCallable(const Model::ListUsersForGroupRequest& request) const;
			ObtainApplicationClientSecretOutcome obtainApplicationClientSecret(const Model::ObtainApplicationClientSecretRequest &request)const;
			void obtainApplicationClientSecretAsync(const Model::ObtainApplicationClientSecretRequest& request, const ObtainApplicationClientSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ObtainApplicationClientSecretOutcomeCallable obtainApplicationClientSecretCallable(const Model::ObtainApplicationClientSecretRequest& request) const;
			ObtainDomainProxyTokenOutcome obtainDomainProxyToken(const Model::ObtainDomainProxyTokenRequest &request)const;
			void obtainDomainProxyTokenAsync(const Model::ObtainDomainProxyTokenRequest& request, const ObtainDomainProxyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ObtainDomainProxyTokenOutcomeCallable obtainDomainProxyTokenCallable(const Model::ObtainDomainProxyTokenRequest& request) const;
			RemoveUserFromOrganizationalUnitsOutcome removeUserFromOrganizationalUnits(const Model::RemoveUserFromOrganizationalUnitsRequest &request)const;
			void removeUserFromOrganizationalUnitsAsync(const Model::RemoveUserFromOrganizationalUnitsRequest& request, const RemoveUserFromOrganizationalUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUserFromOrganizationalUnitsOutcomeCallable removeUserFromOrganizationalUnitsCallable(const Model::RemoveUserFromOrganizationalUnitsRequest& request) const;
			RemoveUsersFromGroupOutcome removeUsersFromGroup(const Model::RemoveUsersFromGroupRequest &request)const;
			void removeUsersFromGroupAsync(const Model::RemoveUsersFromGroupRequest& request, const RemoveUsersFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUsersFromGroupOutcomeCallable removeUsersFromGroupCallable(const Model::RemoveUsersFromGroupRequest& request) const;
			RevokeApplicationFromGroupsOutcome revokeApplicationFromGroups(const Model::RevokeApplicationFromGroupsRequest &request)const;
			void revokeApplicationFromGroupsAsync(const Model::RevokeApplicationFromGroupsRequest& request, const RevokeApplicationFromGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeApplicationFromGroupsOutcomeCallable revokeApplicationFromGroupsCallable(const Model::RevokeApplicationFromGroupsRequest& request) const;
			RevokeApplicationFromOrganizationalUnitsOutcome revokeApplicationFromOrganizationalUnits(const Model::RevokeApplicationFromOrganizationalUnitsRequest &request)const;
			void revokeApplicationFromOrganizationalUnitsAsync(const Model::RevokeApplicationFromOrganizationalUnitsRequest& request, const RevokeApplicationFromOrganizationalUnitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeApplicationFromOrganizationalUnitsOutcomeCallable revokeApplicationFromOrganizationalUnitsCallable(const Model::RevokeApplicationFromOrganizationalUnitsRequest& request) const;
			RevokeApplicationFromUsersOutcome revokeApplicationFromUsers(const Model::RevokeApplicationFromUsersRequest &request)const;
			void revokeApplicationFromUsersAsync(const Model::RevokeApplicationFromUsersRequest& request, const RevokeApplicationFromUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeApplicationFromUsersOutcomeCallable revokeApplicationFromUsersCallable(const Model::RevokeApplicationFromUsersRequest& request) const;
			RunSynchronizationJobOutcome runSynchronizationJob(const Model::RunSynchronizationJobRequest &request)const;
			void runSynchronizationJobAsync(const Model::RunSynchronizationJobRequest& request, const RunSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunSynchronizationJobOutcomeCallable runSynchronizationJobCallable(const Model::RunSynchronizationJobRequest& request) const;
			SetApplicationGrantScopeOutcome setApplicationGrantScope(const Model::SetApplicationGrantScopeRequest &request)const;
			void setApplicationGrantScopeAsync(const Model::SetApplicationGrantScopeRequest& request, const SetApplicationGrantScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetApplicationGrantScopeOutcomeCallable setApplicationGrantScopeCallable(const Model::SetApplicationGrantScopeRequest& request) const;
			SetApplicationProvisioningConfigOutcome setApplicationProvisioningConfig(const Model::SetApplicationProvisioningConfigRequest &request)const;
			void setApplicationProvisioningConfigAsync(const Model::SetApplicationProvisioningConfigRequest& request, const SetApplicationProvisioningConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetApplicationProvisioningConfigOutcomeCallable setApplicationProvisioningConfigCallable(const Model::SetApplicationProvisioningConfigRequest& request) const;
			SetApplicationProvisioningScopeOutcome setApplicationProvisioningScope(const Model::SetApplicationProvisioningScopeRequest &request)const;
			void setApplicationProvisioningScopeAsync(const Model::SetApplicationProvisioningScopeRequest& request, const SetApplicationProvisioningScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetApplicationProvisioningScopeOutcomeCallable setApplicationProvisioningScopeCallable(const Model::SetApplicationProvisioningScopeRequest& request) const;
			SetApplicationSsoConfigOutcome setApplicationSsoConfig(const Model::SetApplicationSsoConfigRequest &request)const;
			void setApplicationSsoConfigAsync(const Model::SetApplicationSsoConfigRequest& request, const SetApplicationSsoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetApplicationSsoConfigOutcomeCallable setApplicationSsoConfigCallable(const Model::SetApplicationSsoConfigRequest& request) const;
			SetDefaultDomainOutcome setDefaultDomain(const Model::SetDefaultDomainRequest &request)const;
			void setDefaultDomainAsync(const Model::SetDefaultDomainRequest& request, const SetDefaultDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultDomainOutcomeCallable setDefaultDomainCallable(const Model::SetDefaultDomainRequest& request) const;
			SetForgetPasswordConfigurationOutcome setForgetPasswordConfiguration(const Model::SetForgetPasswordConfigurationRequest &request)const;
			void setForgetPasswordConfigurationAsync(const Model::SetForgetPasswordConfigurationRequest& request, const SetForgetPasswordConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetForgetPasswordConfigurationOutcomeCallable setForgetPasswordConfigurationCallable(const Model::SetForgetPasswordConfigurationRequest& request) const;
			SetIdentityProviderUdPullConfigurationOutcome setIdentityProviderUdPullConfiguration(const Model::SetIdentityProviderUdPullConfigurationRequest &request)const;
			void setIdentityProviderUdPullConfigurationAsync(const Model::SetIdentityProviderUdPullConfigurationRequest& request, const SetIdentityProviderUdPullConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetIdentityProviderUdPullConfigurationOutcomeCallable setIdentityProviderUdPullConfigurationCallable(const Model::SetIdentityProviderUdPullConfigurationRequest& request) const;
			SetPasswordComplexityConfigurationOutcome setPasswordComplexityConfiguration(const Model::SetPasswordComplexityConfigurationRequest &request)const;
			void setPasswordComplexityConfigurationAsync(const Model::SetPasswordComplexityConfigurationRequest& request, const SetPasswordComplexityConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetPasswordComplexityConfigurationOutcomeCallable setPasswordComplexityConfigurationCallable(const Model::SetPasswordComplexityConfigurationRequest& request) const;
			SetPasswordExpirationConfigurationOutcome setPasswordExpirationConfiguration(const Model::SetPasswordExpirationConfigurationRequest &request)const;
			void setPasswordExpirationConfigurationAsync(const Model::SetPasswordExpirationConfigurationRequest& request, const SetPasswordExpirationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetPasswordExpirationConfigurationOutcomeCallable setPasswordExpirationConfigurationCallable(const Model::SetPasswordExpirationConfigurationRequest& request) const;
			SetPasswordHistoryConfigurationOutcome setPasswordHistoryConfiguration(const Model::SetPasswordHistoryConfigurationRequest &request)const;
			void setPasswordHistoryConfigurationAsync(const Model::SetPasswordHistoryConfigurationRequest& request, const SetPasswordHistoryConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetPasswordHistoryConfigurationOutcomeCallable setPasswordHistoryConfigurationCallable(const Model::SetPasswordHistoryConfigurationRequest& request) const;
			SetPasswordInitializationConfigurationOutcome setPasswordInitializationConfiguration(const Model::SetPasswordInitializationConfigurationRequest &request)const;
			void setPasswordInitializationConfigurationAsync(const Model::SetPasswordInitializationConfigurationRequest& request, const SetPasswordInitializationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetPasswordInitializationConfigurationOutcomeCallable setPasswordInitializationConfigurationCallable(const Model::SetPasswordInitializationConfigurationRequest& request) const;
			SetUserPrimaryOrganizationalUnitOutcome setUserPrimaryOrganizationalUnit(const Model::SetUserPrimaryOrganizationalUnitRequest &request)const;
			void setUserPrimaryOrganizationalUnitAsync(const Model::SetUserPrimaryOrganizationalUnitRequest& request, const SetUserPrimaryOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetUserPrimaryOrganizationalUnitOutcomeCallable setUserPrimaryOrganizationalUnitCallable(const Model::SetUserPrimaryOrganizationalUnitRequest& request) const;
			UnlockUserOutcome unlockUser(const Model::UnlockUserRequest &request)const;
			void unlockUserAsync(const Model::UnlockUserRequest& request, const UnlockUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockUserOutcomeCallable unlockUserCallable(const Model::UnlockUserRequest& request) const;
			UpdateApplicationAuthorizationTypeOutcome updateApplicationAuthorizationType(const Model::UpdateApplicationAuthorizationTypeRequest &request)const;
			void updateApplicationAuthorizationTypeAsync(const Model::UpdateApplicationAuthorizationTypeRequest& request, const UpdateApplicationAuthorizationTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationAuthorizationTypeOutcomeCallable updateApplicationAuthorizationTypeCallable(const Model::UpdateApplicationAuthorizationTypeRequest& request) const;
			UpdateApplicationDescriptionOutcome updateApplicationDescription(const Model::UpdateApplicationDescriptionRequest &request)const;
			void updateApplicationDescriptionAsync(const Model::UpdateApplicationDescriptionRequest& request, const UpdateApplicationDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationDescriptionOutcomeCallable updateApplicationDescriptionCallable(const Model::UpdateApplicationDescriptionRequest& request) const;
			UpdateConditionalAccessPolicyOutcome updateConditionalAccessPolicy(const Model::UpdateConditionalAccessPolicyRequest &request)const;
			void updateConditionalAccessPolicyAsync(const Model::UpdateConditionalAccessPolicyRequest& request, const UpdateConditionalAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConditionalAccessPolicyOutcomeCallable updateConditionalAccessPolicyCallable(const Model::UpdateConditionalAccessPolicyRequest& request) const;
			UpdateConditionalAccessPolicyDescriptionOutcome updateConditionalAccessPolicyDescription(const Model::UpdateConditionalAccessPolicyDescriptionRequest &request)const;
			void updateConditionalAccessPolicyDescriptionAsync(const Model::UpdateConditionalAccessPolicyDescriptionRequest& request, const UpdateConditionalAccessPolicyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConditionalAccessPolicyDescriptionOutcomeCallable updateConditionalAccessPolicyDescriptionCallable(const Model::UpdateConditionalAccessPolicyDescriptionRequest& request) const;
			UpdateGroupOutcome updateGroup(const Model::UpdateGroupRequest &request)const;
			void updateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGroupOutcomeCallable updateGroupCallable(const Model::UpdateGroupRequest& request) const;
			UpdateGroupDescriptionOutcome updateGroupDescription(const Model::UpdateGroupDescriptionRequest &request)const;
			void updateGroupDescriptionAsync(const Model::UpdateGroupDescriptionRequest& request, const UpdateGroupDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGroupDescriptionOutcomeCallable updateGroupDescriptionCallable(const Model::UpdateGroupDescriptionRequest& request) const;
			UpdateIdentityProviderOutcome updateIdentityProvider(const Model::UpdateIdentityProviderRequest &request)const;
			void updateIdentityProviderAsync(const Model::UpdateIdentityProviderRequest& request, const UpdateIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIdentityProviderOutcomeCallable updateIdentityProviderCallable(const Model::UpdateIdentityProviderRequest& request) const;
			UpdateInstanceDescriptionOutcome updateInstanceDescription(const Model::UpdateInstanceDescriptionRequest &request)const;
			void updateInstanceDescriptionAsync(const Model::UpdateInstanceDescriptionRequest& request, const UpdateInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceDescriptionOutcomeCallable updateInstanceDescriptionCallable(const Model::UpdateInstanceDescriptionRequest& request) const;
			UpdateNetworkAccessEndpointNameOutcome updateNetworkAccessEndpointName(const Model::UpdateNetworkAccessEndpointNameRequest &request)const;
			void updateNetworkAccessEndpointNameAsync(const Model::UpdateNetworkAccessEndpointNameRequest& request, const UpdateNetworkAccessEndpointNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNetworkAccessEndpointNameOutcomeCallable updateNetworkAccessEndpointNameCallable(const Model::UpdateNetworkAccessEndpointNameRequest& request) const;
			UpdateOrganizationalUnitOutcome updateOrganizationalUnit(const Model::UpdateOrganizationalUnitRequest &request)const;
			void updateOrganizationalUnitAsync(const Model::UpdateOrganizationalUnitRequest& request, const UpdateOrganizationalUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOrganizationalUnitOutcomeCallable updateOrganizationalUnitCallable(const Model::UpdateOrganizationalUnitRequest& request) const;
			UpdateOrganizationalUnitDescriptionOutcome updateOrganizationalUnitDescription(const Model::UpdateOrganizationalUnitDescriptionRequest &request)const;
			void updateOrganizationalUnitDescriptionAsync(const Model::UpdateOrganizationalUnitDescriptionRequest& request, const UpdateOrganizationalUnitDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOrganizationalUnitDescriptionOutcomeCallable updateOrganizationalUnitDescriptionCallable(const Model::UpdateOrganizationalUnitDescriptionRequest& request) const;
			UpdateOrganizationalUnitParentIdOutcome updateOrganizationalUnitParentId(const Model::UpdateOrganizationalUnitParentIdRequest &request)const;
			void updateOrganizationalUnitParentIdAsync(const Model::UpdateOrganizationalUnitParentIdRequest& request, const UpdateOrganizationalUnitParentIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOrganizationalUnitParentIdOutcomeCallable updateOrganizationalUnitParentIdCallable(const Model::UpdateOrganizationalUnitParentIdRequest& request) const;
			UpdateUserOutcome updateUser(const Model::UpdateUserRequest &request)const;
			void updateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserOutcomeCallable updateUserCallable(const Model::UpdateUserRequest& request) const;
			UpdateUserDescriptionOutcome updateUserDescription(const Model::UpdateUserDescriptionRequest &request)const;
			void updateUserDescriptionAsync(const Model::UpdateUserDescriptionRequest& request, const UpdateUserDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserDescriptionOutcomeCallable updateUserDescriptionCallable(const Model::UpdateUserDescriptionRequest& request) const;
			UpdateUserPasswordOutcome updateUserPassword(const Model::UpdateUserPasswordRequest &request)const;
			void updateUserPasswordAsync(const Model::UpdateUserPasswordRequest& request, const UpdateUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserPasswordOutcomeCallable updateUserPasswordCallable(const Model::UpdateUserPasswordRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EIAM_EIAMCLIENT_H_
