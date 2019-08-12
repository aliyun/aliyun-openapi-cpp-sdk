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

#ifndef ALIBABACLOUD_RAM_RAMCLIENT_H_
#define ALIBABACLOUD_RAM_RAMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "RamExport.h"
#include "model/CreatePolicyRequest.h"
#include "model/CreatePolicyResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/UnbindMFADeviceRequest.h"
#include "model/UnbindMFADeviceResult.h"
#include "model/GetUserMFAInfoRequest.h"
#include "model/GetUserMFAInfoResult.h"
#include "model/BindMFADeviceRequest.h"
#include "model/BindMFADeviceResult.h"
#include "model/ListPublicKeysRequest.h"
#include "model/ListPublicKeysResult.h"
#include "model/GetAccountAliasRequest.h"
#include "model/GetAccountAliasResult.h"
#include "model/GetLoginProfileRequest.h"
#include "model/GetLoginProfileResult.h"
#include "model/AttachPolicyToRoleRequest.h"
#include "model/AttachPolicyToRoleResult.h"
#include "model/AddUserToGroupRequest.h"
#include "model/AddUserToGroupResult.h"
#include "model/ListEntitiesForPolicyRequest.h"
#include "model/ListEntitiesForPolicyResult.h"
#include "model/ListPoliciesForUserRequest.h"
#include "model/ListPoliciesForUserResult.h"
#include "model/SetSecurityPreferenceRequest.h"
#include "model/SetSecurityPreferenceResult.h"
#include "model/UpdateLoginProfileRequest.h"
#include "model/UpdateLoginProfileResult.h"
#include "model/ListUsersForGroupRequest.h"
#include "model/ListUsersForGroupResult.h"
#include "model/GetPolicyVersionRequest.h"
#include "model/GetPolicyVersionResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/DeleteRoleRequest.h"
#include "model/DeleteRoleResult.h"
#include "model/DeleteVirtualMFADeviceRequest.h"
#include "model/DeleteVirtualMFADeviceResult.h"
#include "model/DeletePolicyVersionRequest.h"
#include "model/DeletePolicyVersionResult.h"
#include "model/UploadPublicKeyRequest.h"
#include "model/UploadPublicKeyResult.h"
#include "model/RemoveUserFromGroupRequest.h"
#include "model/RemoveUserFromGroupResult.h"
#include "model/GetAccessKeyLastUsedRequest.h"
#include "model/GetAccessKeyLastUsedResult.h"
#include "model/UpdateAccessKeyRequest.h"
#include "model/UpdateAccessKeyResult.h"
#include "model/GetGroupRequest.h"
#include "model/GetGroupResult.h"
#include "model/CreateAccessKeyRequest.h"
#include "model/CreateAccessKeyResult.h"
#include "model/SetAccountAliasRequest.h"
#include "model/SetAccountAliasResult.h"
#include "model/ListPoliciesForGroupRequest.h"
#include "model/ListPoliciesForGroupResult.h"
#include "model/ChangePasswordRequest.h"
#include "model/ChangePasswordResult.h"
#include "model/ListGroupsForUserRequest.h"
#include "model/ListGroupsForUserResult.h"
#include "model/AttachPolicyToUserRequest.h"
#include "model/AttachPolicyToUserResult.h"
#include "model/CreateVirtualMFADeviceRequest.h"
#include "model/CreateVirtualMFADeviceResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/ListGroupsRequest.h"
#include "model/ListGroupsResult.h"
#include "model/DeletePolicyRequest.h"
#include "model/DeletePolicyResult.h"
#include "model/DeleteGroupRequest.h"
#include "model/DeleteGroupResult.h"
#include "model/ClearAccountAliasRequest.h"
#include "model/ClearAccountAliasResult.h"
#include "model/UpdateRoleRequest.h"
#include "model/UpdateRoleResult.h"
#include "model/ListPoliciesRequest.h"
#include "model/ListPoliciesResult.h"
#include "model/AttachPolicyToGroupRequest.h"
#include "model/AttachPolicyToGroupResult.h"
#include "model/GetPublicKeyRequest.h"
#include "model/GetPublicKeyResult.h"
#include "model/DetachPolicyFromRoleRequest.h"
#include "model/DetachPolicyFromRoleResult.h"
#include "model/DeletePublicKeyRequest.h"
#include "model/DeletePublicKeyResult.h"
#include "model/ListRolesRequest.h"
#include "model/ListRolesResult.h"
#include "model/SetDefaultPolicyVersionRequest.h"
#include "model/SetDefaultPolicyVersionResult.h"
#include "model/ListPolicyVersionsRequest.h"
#include "model/ListPolicyVersionsResult.h"
#include "model/CreateRoleRequest.h"
#include "model/CreateRoleResult.h"
#include "model/CreatePolicyVersionRequest.h"
#include "model/CreatePolicyVersionResult.h"
#include "model/ListPoliciesForRoleRequest.h"
#include "model/ListPoliciesForRoleResult.h"
#include "model/UpdatePublicKeyRequest.h"
#include "model/UpdatePublicKeyResult.h"
#include "model/CreateGroupRequest.h"
#include "model/CreateGroupResult.h"
#include "model/ListAccessKeysRequest.h"
#include "model/ListAccessKeysResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/GetPasswordPolicyRequest.h"
#include "model/GetPasswordPolicyResult.h"
#include "model/DetachPolicyFromGroupRequest.h"
#include "model/DetachPolicyFromGroupResult.h"
#include "model/SetPasswordPolicyRequest.h"
#include "model/SetPasswordPolicyResult.h"
#include "model/DeleteAccessKeyRequest.h"
#include "model/DeleteAccessKeyResult.h"
#include "model/GetRoleRequest.h"
#include "model/GetRoleResult.h"
#include "model/GetSecurityPreferenceRequest.h"
#include "model/GetSecurityPreferenceResult.h"
#include "model/DeleteLoginProfileRequest.h"
#include "model/DeleteLoginProfileResult.h"
#include "model/UpdateUserRequest.h"
#include "model/UpdateUserResult.h"
#include "model/DetachPolicyFromUserRequest.h"
#include "model/DetachPolicyFromUserResult.h"
#include "model/CreateLoginProfileRequest.h"
#include "model/CreateLoginProfileResult.h"
#include "model/ListVirtualMFADevicesRequest.h"
#include "model/ListVirtualMFADevicesResult.h"
#include "model/GetPolicyRequest.h"
#include "model/GetPolicyResult.h"
#include "model/UpdateGroupRequest.h"
#include "model/UpdateGroupResult.h"


namespace AlibabaCloud
{
	namespace Ram
	{
		class ALIBABACLOUD_RAM_EXPORT RamClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreatePolicyResult> CreatePolicyOutcome;
			typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::CreatePolicyRequest&, const CreatePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::UnbindMFADeviceResult> UnbindMFADeviceOutcome;
			typedef std::future<UnbindMFADeviceOutcome> UnbindMFADeviceOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::UnbindMFADeviceRequest&, const UnbindMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::GetUserMFAInfoResult> GetUserMFAInfoOutcome;
			typedef std::future<GetUserMFAInfoOutcome> GetUserMFAInfoOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetUserMFAInfoRequest&, const GetUserMFAInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserMFAInfoAsyncHandler;
			typedef Outcome<Error, Model::BindMFADeviceResult> BindMFADeviceOutcome;
			typedef std::future<BindMFADeviceOutcome> BindMFADeviceOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::BindMFADeviceRequest&, const BindMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::ListPublicKeysResult> ListPublicKeysOutcome;
			typedef std::future<ListPublicKeysOutcome> ListPublicKeysOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListPublicKeysRequest&, const ListPublicKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPublicKeysAsyncHandler;
			typedef Outcome<Error, Model::GetAccountAliasResult> GetAccountAliasOutcome;
			typedef std::future<GetAccountAliasOutcome> GetAccountAliasOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetAccountAliasRequest&, const GetAccountAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountAliasAsyncHandler;
			typedef Outcome<Error, Model::GetLoginProfileResult> GetLoginProfileOutcome;
			typedef std::future<GetLoginProfileOutcome> GetLoginProfileOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetLoginProfileRequest&, const GetLoginProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLoginProfileAsyncHandler;
			typedef Outcome<Error, Model::AttachPolicyToRoleResult> AttachPolicyToRoleOutcome;
			typedef std::future<AttachPolicyToRoleOutcome> AttachPolicyToRoleOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::AttachPolicyToRoleRequest&, const AttachPolicyToRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachPolicyToRoleAsyncHandler;
			typedef Outcome<Error, Model::AddUserToGroupResult> AddUserToGroupOutcome;
			typedef std::future<AddUserToGroupOutcome> AddUserToGroupOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::AddUserToGroupRequest&, const AddUserToGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToGroupAsyncHandler;
			typedef Outcome<Error, Model::ListEntitiesForPolicyResult> ListEntitiesForPolicyOutcome;
			typedef std::future<ListEntitiesForPolicyOutcome> ListEntitiesForPolicyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListEntitiesForPolicyRequest&, const ListEntitiesForPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEntitiesForPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListPoliciesForUserResult> ListPoliciesForUserOutcome;
			typedef std::future<ListPoliciesForUserOutcome> ListPoliciesForUserOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListPoliciesForUserRequest&, const ListPoliciesForUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesForUserAsyncHandler;
			typedef Outcome<Error, Model::SetSecurityPreferenceResult> SetSecurityPreferenceOutcome;
			typedef std::future<SetSecurityPreferenceOutcome> SetSecurityPreferenceOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::SetSecurityPreferenceRequest&, const SetSecurityPreferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSecurityPreferenceAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoginProfileResult> UpdateLoginProfileOutcome;
			typedef std::future<UpdateLoginProfileOutcome> UpdateLoginProfileOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::UpdateLoginProfileRequest&, const UpdateLoginProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoginProfileAsyncHandler;
			typedef Outcome<Error, Model::ListUsersForGroupResult> ListUsersForGroupOutcome;
			typedef std::future<ListUsersForGroupOutcome> ListUsersForGroupOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListUsersForGroupRequest&, const ListUsersForGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersForGroupAsyncHandler;
			typedef Outcome<Error, Model::GetPolicyVersionResult> GetPolicyVersionOutcome;
			typedef std::future<GetPolicyVersionOutcome> GetPolicyVersionOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetPolicyVersionRequest&, const GetPolicyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyVersionAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteRoleResult> DeleteRoleOutcome;
			typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DeleteRoleRequest&, const DeleteRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAsyncHandler;
			typedef Outcome<Error, Model::DeleteVirtualMFADeviceResult> DeleteVirtualMFADeviceOutcome;
			typedef std::future<DeleteVirtualMFADeviceOutcome> DeleteVirtualMFADeviceOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DeleteVirtualMFADeviceRequest&, const DeleteVirtualMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVirtualMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::DeletePolicyVersionResult> DeletePolicyVersionOutcome;
			typedef std::future<DeletePolicyVersionOutcome> DeletePolicyVersionOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DeletePolicyVersionRequest&, const DeletePolicyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyVersionAsyncHandler;
			typedef Outcome<Error, Model::UploadPublicKeyResult> UploadPublicKeyOutcome;
			typedef std::future<UploadPublicKeyOutcome> UploadPublicKeyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::UploadPublicKeyRequest&, const UploadPublicKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadPublicKeyAsyncHandler;
			typedef Outcome<Error, Model::RemoveUserFromGroupResult> RemoveUserFromGroupOutcome;
			typedef std::future<RemoveUserFromGroupOutcome> RemoveUserFromGroupOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::RemoveUserFromGroupRequest&, const RemoveUserFromGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromGroupAsyncHandler;
			typedef Outcome<Error, Model::GetAccessKeyLastUsedResult> GetAccessKeyLastUsedOutcome;
			typedef std::future<GetAccessKeyLastUsedOutcome> GetAccessKeyLastUsedOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetAccessKeyLastUsedRequest&, const GetAccessKeyLastUsedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccessKeyLastUsedAsyncHandler;
			typedef Outcome<Error, Model::UpdateAccessKeyResult> UpdateAccessKeyOutcome;
			typedef std::future<UpdateAccessKeyOutcome> UpdateAccessKeyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::UpdateAccessKeyRequest&, const UpdateAccessKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccessKeyAsyncHandler;
			typedef Outcome<Error, Model::GetGroupResult> GetGroupOutcome;
			typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetGroupRequest&, const GetGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateAccessKeyResult> CreateAccessKeyOutcome;
			typedef std::future<CreateAccessKeyOutcome> CreateAccessKeyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::CreateAccessKeyRequest&, const CreateAccessKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessKeyAsyncHandler;
			typedef Outcome<Error, Model::SetAccountAliasResult> SetAccountAliasOutcome;
			typedef std::future<SetAccountAliasOutcome> SetAccountAliasOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::SetAccountAliasRequest&, const SetAccountAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAccountAliasAsyncHandler;
			typedef Outcome<Error, Model::ListPoliciesForGroupResult> ListPoliciesForGroupOutcome;
			typedef std::future<ListPoliciesForGroupOutcome> ListPoliciesForGroupOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListPoliciesForGroupRequest&, const ListPoliciesForGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesForGroupAsyncHandler;
			typedef Outcome<Error, Model::ChangePasswordResult> ChangePasswordOutcome;
			typedef std::future<ChangePasswordOutcome> ChangePasswordOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ChangePasswordRequest&, const ChangePasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangePasswordAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsForUserResult> ListGroupsForUserOutcome;
			typedef std::future<ListGroupsForUserOutcome> ListGroupsForUserOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListGroupsForUserRequest&, const ListGroupsForUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsForUserAsyncHandler;
			typedef Outcome<Error, Model::AttachPolicyToUserResult> AttachPolicyToUserOutcome;
			typedef std::future<AttachPolicyToUserOutcome> AttachPolicyToUserOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::AttachPolicyToUserRequest&, const AttachPolicyToUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachPolicyToUserAsyncHandler;
			typedef Outcome<Error, Model::CreateVirtualMFADeviceResult> CreateVirtualMFADeviceOutcome;
			typedef std::future<CreateVirtualMFADeviceOutcome> CreateVirtualMFADeviceOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::CreateVirtualMFADeviceRequest&, const CreateVirtualMFADeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirtualMFADeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsResult> ListGroupsOutcome;
			typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListGroupsRequest&, const ListGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
			typedef Outcome<Error, Model::DeletePolicyResult> DeletePolicyOutcome;
			typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DeletePolicyRequest&, const DeletePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupResult> DeleteGroupOutcome;
			typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DeleteGroupRequest&, const DeleteGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
			typedef Outcome<Error, Model::ClearAccountAliasResult> ClearAccountAliasOutcome;
			typedef std::future<ClearAccountAliasOutcome> ClearAccountAliasOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ClearAccountAliasRequest&, const ClearAccountAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClearAccountAliasAsyncHandler;
			typedef Outcome<Error, Model::UpdateRoleResult> UpdateRoleOutcome;
			typedef std::future<UpdateRoleOutcome> UpdateRoleOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::UpdateRoleRequest&, const UpdateRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleAsyncHandler;
			typedef Outcome<Error, Model::ListPoliciesResult> ListPoliciesOutcome;
			typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListPoliciesRequest&, const ListPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesAsyncHandler;
			typedef Outcome<Error, Model::AttachPolicyToGroupResult> AttachPolicyToGroupOutcome;
			typedef std::future<AttachPolicyToGroupOutcome> AttachPolicyToGroupOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::AttachPolicyToGroupRequest&, const AttachPolicyToGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachPolicyToGroupAsyncHandler;
			typedef Outcome<Error, Model::GetPublicKeyResult> GetPublicKeyOutcome;
			typedef std::future<GetPublicKeyOutcome> GetPublicKeyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetPublicKeyRequest&, const GetPublicKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPublicKeyAsyncHandler;
			typedef Outcome<Error, Model::DetachPolicyFromRoleResult> DetachPolicyFromRoleOutcome;
			typedef std::future<DetachPolicyFromRoleOutcome> DetachPolicyFromRoleOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DetachPolicyFromRoleRequest&, const DetachPolicyFromRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachPolicyFromRoleAsyncHandler;
			typedef Outcome<Error, Model::DeletePublicKeyResult> DeletePublicKeyOutcome;
			typedef std::future<DeletePublicKeyOutcome> DeletePublicKeyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DeletePublicKeyRequest&, const DeletePublicKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePublicKeyAsyncHandler;
			typedef Outcome<Error, Model::ListRolesResult> ListRolesOutcome;
			typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListRolesRequest&, const ListRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRolesAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultPolicyVersionResult> SetDefaultPolicyVersionOutcome;
			typedef std::future<SetDefaultPolicyVersionOutcome> SetDefaultPolicyVersionOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::SetDefaultPolicyVersionRequest&, const SetDefaultPolicyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultPolicyVersionAsyncHandler;
			typedef Outcome<Error, Model::ListPolicyVersionsResult> ListPolicyVersionsOutcome;
			typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListPolicyVersionsRequest&, const ListPolicyVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicyVersionsAsyncHandler;
			typedef Outcome<Error, Model::CreateRoleResult> CreateRoleOutcome;
			typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::CreateRoleRequest&, const CreateRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAsyncHandler;
			typedef Outcome<Error, Model::CreatePolicyVersionResult> CreatePolicyVersionOutcome;
			typedef std::future<CreatePolicyVersionOutcome> CreatePolicyVersionOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::CreatePolicyVersionRequest&, const CreatePolicyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyVersionAsyncHandler;
			typedef Outcome<Error, Model::ListPoliciesForRoleResult> ListPoliciesForRoleOutcome;
			typedef std::future<ListPoliciesForRoleOutcome> ListPoliciesForRoleOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListPoliciesForRoleRequest&, const ListPoliciesForRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesForRoleAsyncHandler;
			typedef Outcome<Error, Model::UpdatePublicKeyResult> UpdatePublicKeyOutcome;
			typedef std::future<UpdatePublicKeyOutcome> UpdatePublicKeyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::UpdatePublicKeyRequest&, const UpdatePublicKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePublicKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupResult> CreateGroupOutcome;
			typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::CreateGroupRequest&, const CreateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
			typedef Outcome<Error, Model::ListAccessKeysResult> ListAccessKeysOutcome;
			typedef std::future<ListAccessKeysOutcome> ListAccessKeysOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListAccessKeysRequest&, const ListAccessKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccessKeysAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::GetPasswordPolicyResult> GetPasswordPolicyOutcome;
			typedef std::future<GetPasswordPolicyOutcome> GetPasswordPolicyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetPasswordPolicyRequest&, const GetPasswordPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPasswordPolicyAsyncHandler;
			typedef Outcome<Error, Model::DetachPolicyFromGroupResult> DetachPolicyFromGroupOutcome;
			typedef std::future<DetachPolicyFromGroupOutcome> DetachPolicyFromGroupOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DetachPolicyFromGroupRequest&, const DetachPolicyFromGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachPolicyFromGroupAsyncHandler;
			typedef Outcome<Error, Model::SetPasswordPolicyResult> SetPasswordPolicyOutcome;
			typedef std::future<SetPasswordPolicyOutcome> SetPasswordPolicyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::SetPasswordPolicyRequest&, const SetPasswordPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPasswordPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessKeyResult> DeleteAccessKeyOutcome;
			typedef std::future<DeleteAccessKeyOutcome> DeleteAccessKeyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DeleteAccessKeyRequest&, const DeleteAccessKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessKeyAsyncHandler;
			typedef Outcome<Error, Model::GetRoleResult> GetRoleOutcome;
			typedef std::future<GetRoleOutcome> GetRoleOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetRoleRequest&, const GetRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRoleAsyncHandler;
			typedef Outcome<Error, Model::GetSecurityPreferenceResult> GetSecurityPreferenceOutcome;
			typedef std::future<GetSecurityPreferenceOutcome> GetSecurityPreferenceOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetSecurityPreferenceRequest&, const GetSecurityPreferenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecurityPreferenceAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoginProfileResult> DeleteLoginProfileOutcome;
			typedef std::future<DeleteLoginProfileOutcome> DeleteLoginProfileOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DeleteLoginProfileRequest&, const DeleteLoginProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginProfileAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserResult> UpdateUserOutcome;
			typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::UpdateUserRequest&, const UpdateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;
			typedef Outcome<Error, Model::DetachPolicyFromUserResult> DetachPolicyFromUserOutcome;
			typedef std::future<DetachPolicyFromUserOutcome> DetachPolicyFromUserOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::DetachPolicyFromUserRequest&, const DetachPolicyFromUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachPolicyFromUserAsyncHandler;
			typedef Outcome<Error, Model::CreateLoginProfileResult> CreateLoginProfileOutcome;
			typedef std::future<CreateLoginProfileOutcome> CreateLoginProfileOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::CreateLoginProfileRequest&, const CreateLoginProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoginProfileAsyncHandler;
			typedef Outcome<Error, Model::ListVirtualMFADevicesResult> ListVirtualMFADevicesOutcome;
			typedef std::future<ListVirtualMFADevicesOutcome> ListVirtualMFADevicesOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::ListVirtualMFADevicesRequest&, const ListVirtualMFADevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVirtualMFADevicesAsyncHandler;
			typedef Outcome<Error, Model::GetPolicyResult> GetPolicyOutcome;
			typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::GetPolicyRequest&, const GetPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateGroupResult> UpdateGroupOutcome;
			typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
			typedef std::function<void(const RamClient*, const Model::UpdateGroupRequest&, const UpdateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGroupAsyncHandler;

			RamClient(const Credentials &credentials, const ClientConfiguration &configuration);
			RamClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			RamClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~RamClient();
			CreatePolicyOutcome createPolicy(const Model::CreatePolicyRequest &request)const;
			void createPolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePolicyOutcomeCallable createPolicyCallable(const Model::CreatePolicyRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			UnbindMFADeviceOutcome unbindMFADevice(const Model::UnbindMFADeviceRequest &request)const;
			void unbindMFADeviceAsync(const Model::UnbindMFADeviceRequest& request, const UnbindMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindMFADeviceOutcomeCallable unbindMFADeviceCallable(const Model::UnbindMFADeviceRequest& request) const;
			GetUserMFAInfoOutcome getUserMFAInfo(const Model::GetUserMFAInfoRequest &request)const;
			void getUserMFAInfoAsync(const Model::GetUserMFAInfoRequest& request, const GetUserMFAInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserMFAInfoOutcomeCallable getUserMFAInfoCallable(const Model::GetUserMFAInfoRequest& request) const;
			BindMFADeviceOutcome bindMFADevice(const Model::BindMFADeviceRequest &request)const;
			void bindMFADeviceAsync(const Model::BindMFADeviceRequest& request, const BindMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindMFADeviceOutcomeCallable bindMFADeviceCallable(const Model::BindMFADeviceRequest& request) const;
			ListPublicKeysOutcome listPublicKeys(const Model::ListPublicKeysRequest &request)const;
			void listPublicKeysAsync(const Model::ListPublicKeysRequest& request, const ListPublicKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPublicKeysOutcomeCallable listPublicKeysCallable(const Model::ListPublicKeysRequest& request) const;
			GetAccountAliasOutcome getAccountAlias(const Model::GetAccountAliasRequest &request)const;
			void getAccountAliasAsync(const Model::GetAccountAliasRequest& request, const GetAccountAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountAliasOutcomeCallable getAccountAliasCallable(const Model::GetAccountAliasRequest& request) const;
			GetLoginProfileOutcome getLoginProfile(const Model::GetLoginProfileRequest &request)const;
			void getLoginProfileAsync(const Model::GetLoginProfileRequest& request, const GetLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLoginProfileOutcomeCallable getLoginProfileCallable(const Model::GetLoginProfileRequest& request) const;
			AttachPolicyToRoleOutcome attachPolicyToRole(const Model::AttachPolicyToRoleRequest &request)const;
			void attachPolicyToRoleAsync(const Model::AttachPolicyToRoleRequest& request, const AttachPolicyToRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachPolicyToRoleOutcomeCallable attachPolicyToRoleCallable(const Model::AttachPolicyToRoleRequest& request) const;
			AddUserToGroupOutcome addUserToGroup(const Model::AddUserToGroupRequest &request)const;
			void addUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserToGroupOutcomeCallable addUserToGroupCallable(const Model::AddUserToGroupRequest& request) const;
			ListEntitiesForPolicyOutcome listEntitiesForPolicy(const Model::ListEntitiesForPolicyRequest &request)const;
			void listEntitiesForPolicyAsync(const Model::ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEntitiesForPolicyOutcomeCallable listEntitiesForPolicyCallable(const Model::ListEntitiesForPolicyRequest& request) const;
			ListPoliciesForUserOutcome listPoliciesForUser(const Model::ListPoliciesForUserRequest &request)const;
			void listPoliciesForUserAsync(const Model::ListPoliciesForUserRequest& request, const ListPoliciesForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPoliciesForUserOutcomeCallable listPoliciesForUserCallable(const Model::ListPoliciesForUserRequest& request) const;
			SetSecurityPreferenceOutcome setSecurityPreference(const Model::SetSecurityPreferenceRequest &request)const;
			void setSecurityPreferenceAsync(const Model::SetSecurityPreferenceRequest& request, const SetSecurityPreferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSecurityPreferenceOutcomeCallable setSecurityPreferenceCallable(const Model::SetSecurityPreferenceRequest& request) const;
			UpdateLoginProfileOutcome updateLoginProfile(const Model::UpdateLoginProfileRequest &request)const;
			void updateLoginProfileAsync(const Model::UpdateLoginProfileRequest& request, const UpdateLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoginProfileOutcomeCallable updateLoginProfileCallable(const Model::UpdateLoginProfileRequest& request) const;
			ListUsersForGroupOutcome listUsersForGroup(const Model::ListUsersForGroupRequest &request)const;
			void listUsersForGroupAsync(const Model::ListUsersForGroupRequest& request, const ListUsersForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersForGroupOutcomeCallable listUsersForGroupCallable(const Model::ListUsersForGroupRequest& request) const;
			GetPolicyVersionOutcome getPolicyVersion(const Model::GetPolicyVersionRequest &request)const;
			void getPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPolicyVersionOutcomeCallable getPolicyVersionCallable(const Model::GetPolicyVersionRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			DeleteRoleOutcome deleteRole(const Model::DeleteRoleRequest &request)const;
			void deleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRoleOutcomeCallable deleteRoleCallable(const Model::DeleteRoleRequest& request) const;
			DeleteVirtualMFADeviceOutcome deleteVirtualMFADevice(const Model::DeleteVirtualMFADeviceRequest &request)const;
			void deleteVirtualMFADeviceAsync(const Model::DeleteVirtualMFADeviceRequest& request, const DeleteVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVirtualMFADeviceOutcomeCallable deleteVirtualMFADeviceCallable(const Model::DeleteVirtualMFADeviceRequest& request) const;
			DeletePolicyVersionOutcome deletePolicyVersion(const Model::DeletePolicyVersionRequest &request)const;
			void deletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePolicyVersionOutcomeCallable deletePolicyVersionCallable(const Model::DeletePolicyVersionRequest& request) const;
			UploadPublicKeyOutcome uploadPublicKey(const Model::UploadPublicKeyRequest &request)const;
			void uploadPublicKeyAsync(const Model::UploadPublicKeyRequest& request, const UploadPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadPublicKeyOutcomeCallable uploadPublicKeyCallable(const Model::UploadPublicKeyRequest& request) const;
			RemoveUserFromGroupOutcome removeUserFromGroup(const Model::RemoveUserFromGroupRequest &request)const;
			void removeUserFromGroupAsync(const Model::RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUserFromGroupOutcomeCallable removeUserFromGroupCallable(const Model::RemoveUserFromGroupRequest& request) const;
			GetAccessKeyLastUsedOutcome getAccessKeyLastUsed(const Model::GetAccessKeyLastUsedRequest &request)const;
			void getAccessKeyLastUsedAsync(const Model::GetAccessKeyLastUsedRequest& request, const GetAccessKeyLastUsedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccessKeyLastUsedOutcomeCallable getAccessKeyLastUsedCallable(const Model::GetAccessKeyLastUsedRequest& request) const;
			UpdateAccessKeyOutcome updateAccessKey(const Model::UpdateAccessKeyRequest &request)const;
			void updateAccessKeyAsync(const Model::UpdateAccessKeyRequest& request, const UpdateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAccessKeyOutcomeCallable updateAccessKeyCallable(const Model::UpdateAccessKeyRequest& request) const;
			GetGroupOutcome getGroup(const Model::GetGroupRequest &request)const;
			void getGroupAsync(const Model::GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupOutcomeCallable getGroupCallable(const Model::GetGroupRequest& request) const;
			CreateAccessKeyOutcome createAccessKey(const Model::CreateAccessKeyRequest &request)const;
			void createAccessKeyAsync(const Model::CreateAccessKeyRequest& request, const CreateAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccessKeyOutcomeCallable createAccessKeyCallable(const Model::CreateAccessKeyRequest& request) const;
			SetAccountAliasOutcome setAccountAlias(const Model::SetAccountAliasRequest &request)const;
			void setAccountAliasAsync(const Model::SetAccountAliasRequest& request, const SetAccountAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAccountAliasOutcomeCallable setAccountAliasCallable(const Model::SetAccountAliasRequest& request) const;
			ListPoliciesForGroupOutcome listPoliciesForGroup(const Model::ListPoliciesForGroupRequest &request)const;
			void listPoliciesForGroupAsync(const Model::ListPoliciesForGroupRequest& request, const ListPoliciesForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPoliciesForGroupOutcomeCallable listPoliciesForGroupCallable(const Model::ListPoliciesForGroupRequest& request) const;
			ChangePasswordOutcome changePassword(const Model::ChangePasswordRequest &request)const;
			void changePasswordAsync(const Model::ChangePasswordRequest& request, const ChangePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangePasswordOutcomeCallable changePasswordCallable(const Model::ChangePasswordRequest& request) const;
			ListGroupsForUserOutcome listGroupsForUser(const Model::ListGroupsForUserRequest &request)const;
			void listGroupsForUserAsync(const Model::ListGroupsForUserRequest& request, const ListGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsForUserOutcomeCallable listGroupsForUserCallable(const Model::ListGroupsForUserRequest& request) const;
			AttachPolicyToUserOutcome attachPolicyToUser(const Model::AttachPolicyToUserRequest &request)const;
			void attachPolicyToUserAsync(const Model::AttachPolicyToUserRequest& request, const AttachPolicyToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachPolicyToUserOutcomeCallable attachPolicyToUserCallable(const Model::AttachPolicyToUserRequest& request) const;
			CreateVirtualMFADeviceOutcome createVirtualMFADevice(const Model::CreateVirtualMFADeviceRequest &request)const;
			void createVirtualMFADeviceAsync(const Model::CreateVirtualMFADeviceRequest& request, const CreateVirtualMFADeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVirtualMFADeviceOutcomeCallable createVirtualMFADeviceCallable(const Model::CreateVirtualMFADeviceRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			ListGroupsOutcome listGroups(const Model::ListGroupsRequest &request)const;
			void listGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsOutcomeCallable listGroupsCallable(const Model::ListGroupsRequest& request) const;
			DeletePolicyOutcome deletePolicy(const Model::DeletePolicyRequest &request)const;
			void deletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePolicyOutcomeCallable deletePolicyCallable(const Model::DeletePolicyRequest& request) const;
			DeleteGroupOutcome deleteGroup(const Model::DeleteGroupRequest &request)const;
			void deleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupOutcomeCallable deleteGroupCallable(const Model::DeleteGroupRequest& request) const;
			ClearAccountAliasOutcome clearAccountAlias(const Model::ClearAccountAliasRequest &request)const;
			void clearAccountAliasAsync(const Model::ClearAccountAliasRequest& request, const ClearAccountAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClearAccountAliasOutcomeCallable clearAccountAliasCallable(const Model::ClearAccountAliasRequest& request) const;
			UpdateRoleOutcome updateRole(const Model::UpdateRoleRequest &request)const;
			void updateRoleAsync(const Model::UpdateRoleRequest& request, const UpdateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRoleOutcomeCallable updateRoleCallable(const Model::UpdateRoleRequest& request) const;
			ListPoliciesOutcome listPolicies(const Model::ListPoliciesRequest &request)const;
			void listPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPoliciesOutcomeCallable listPoliciesCallable(const Model::ListPoliciesRequest& request) const;
			AttachPolicyToGroupOutcome attachPolicyToGroup(const Model::AttachPolicyToGroupRequest &request)const;
			void attachPolicyToGroupAsync(const Model::AttachPolicyToGroupRequest& request, const AttachPolicyToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachPolicyToGroupOutcomeCallable attachPolicyToGroupCallable(const Model::AttachPolicyToGroupRequest& request) const;
			GetPublicKeyOutcome getPublicKey(const Model::GetPublicKeyRequest &request)const;
			void getPublicKeyAsync(const Model::GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPublicKeyOutcomeCallable getPublicKeyCallable(const Model::GetPublicKeyRequest& request) const;
			DetachPolicyFromRoleOutcome detachPolicyFromRole(const Model::DetachPolicyFromRoleRequest &request)const;
			void detachPolicyFromRoleAsync(const Model::DetachPolicyFromRoleRequest& request, const DetachPolicyFromRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachPolicyFromRoleOutcomeCallable detachPolicyFromRoleCallable(const Model::DetachPolicyFromRoleRequest& request) const;
			DeletePublicKeyOutcome deletePublicKey(const Model::DeletePublicKeyRequest &request)const;
			void deletePublicKeyAsync(const Model::DeletePublicKeyRequest& request, const DeletePublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePublicKeyOutcomeCallable deletePublicKeyCallable(const Model::DeletePublicKeyRequest& request) const;
			ListRolesOutcome listRoles(const Model::ListRolesRequest &request)const;
			void listRolesAsync(const Model::ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRolesOutcomeCallable listRolesCallable(const Model::ListRolesRequest& request) const;
			SetDefaultPolicyVersionOutcome setDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest &request)const;
			void setDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultPolicyVersionOutcomeCallable setDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request) const;
			ListPolicyVersionsOutcome listPolicyVersions(const Model::ListPolicyVersionsRequest &request)const;
			void listPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPolicyVersionsOutcomeCallable listPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request) const;
			CreateRoleOutcome createRole(const Model::CreateRoleRequest &request)const;
			void createRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRoleOutcomeCallable createRoleCallable(const Model::CreateRoleRequest& request) const;
			CreatePolicyVersionOutcome createPolicyVersion(const Model::CreatePolicyVersionRequest &request)const;
			void createPolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePolicyVersionOutcomeCallable createPolicyVersionCallable(const Model::CreatePolicyVersionRequest& request) const;
			ListPoliciesForRoleOutcome listPoliciesForRole(const Model::ListPoliciesForRoleRequest &request)const;
			void listPoliciesForRoleAsync(const Model::ListPoliciesForRoleRequest& request, const ListPoliciesForRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPoliciesForRoleOutcomeCallable listPoliciesForRoleCallable(const Model::ListPoliciesForRoleRequest& request) const;
			UpdatePublicKeyOutcome updatePublicKey(const Model::UpdatePublicKeyRequest &request)const;
			void updatePublicKeyAsync(const Model::UpdatePublicKeyRequest& request, const UpdatePublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePublicKeyOutcomeCallable updatePublicKeyCallable(const Model::UpdatePublicKeyRequest& request) const;
			CreateGroupOutcome createGroup(const Model::CreateGroupRequest &request)const;
			void createGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupOutcomeCallable createGroupCallable(const Model::CreateGroupRequest& request) const;
			ListAccessKeysOutcome listAccessKeys(const Model::ListAccessKeysRequest &request)const;
			void listAccessKeysAsync(const Model::ListAccessKeysRequest& request, const ListAccessKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccessKeysOutcomeCallable listAccessKeysCallable(const Model::ListAccessKeysRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			GetPasswordPolicyOutcome getPasswordPolicy(const Model::GetPasswordPolicyRequest &request)const;
			void getPasswordPolicyAsync(const Model::GetPasswordPolicyRequest& request, const GetPasswordPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPasswordPolicyOutcomeCallable getPasswordPolicyCallable(const Model::GetPasswordPolicyRequest& request) const;
			DetachPolicyFromGroupOutcome detachPolicyFromGroup(const Model::DetachPolicyFromGroupRequest &request)const;
			void detachPolicyFromGroupAsync(const Model::DetachPolicyFromGroupRequest& request, const DetachPolicyFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachPolicyFromGroupOutcomeCallable detachPolicyFromGroupCallable(const Model::DetachPolicyFromGroupRequest& request) const;
			SetPasswordPolicyOutcome setPasswordPolicy(const Model::SetPasswordPolicyRequest &request)const;
			void setPasswordPolicyAsync(const Model::SetPasswordPolicyRequest& request, const SetPasswordPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetPasswordPolicyOutcomeCallable setPasswordPolicyCallable(const Model::SetPasswordPolicyRequest& request) const;
			DeleteAccessKeyOutcome deleteAccessKey(const Model::DeleteAccessKeyRequest &request)const;
			void deleteAccessKeyAsync(const Model::DeleteAccessKeyRequest& request, const DeleteAccessKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessKeyOutcomeCallable deleteAccessKeyCallable(const Model::DeleteAccessKeyRequest& request) const;
			GetRoleOutcome getRole(const Model::GetRoleRequest &request)const;
			void getRoleAsync(const Model::GetRoleRequest& request, const GetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRoleOutcomeCallable getRoleCallable(const Model::GetRoleRequest& request) const;
			GetSecurityPreferenceOutcome getSecurityPreference(const Model::GetSecurityPreferenceRequest &request)const;
			void getSecurityPreferenceAsync(const Model::GetSecurityPreferenceRequest& request, const GetSecurityPreferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecurityPreferenceOutcomeCallable getSecurityPreferenceCallable(const Model::GetSecurityPreferenceRequest& request) const;
			DeleteLoginProfileOutcome deleteLoginProfile(const Model::DeleteLoginProfileRequest &request)const;
			void deleteLoginProfileAsync(const Model::DeleteLoginProfileRequest& request, const DeleteLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoginProfileOutcomeCallable deleteLoginProfileCallable(const Model::DeleteLoginProfileRequest& request) const;
			UpdateUserOutcome updateUser(const Model::UpdateUserRequest &request)const;
			void updateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserOutcomeCallable updateUserCallable(const Model::UpdateUserRequest& request) const;
			DetachPolicyFromUserOutcome detachPolicyFromUser(const Model::DetachPolicyFromUserRequest &request)const;
			void detachPolicyFromUserAsync(const Model::DetachPolicyFromUserRequest& request, const DetachPolicyFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachPolicyFromUserOutcomeCallable detachPolicyFromUserCallable(const Model::DetachPolicyFromUserRequest& request) const;
			CreateLoginProfileOutcome createLoginProfile(const Model::CreateLoginProfileRequest &request)const;
			void createLoginProfileAsync(const Model::CreateLoginProfileRequest& request, const CreateLoginProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoginProfileOutcomeCallable createLoginProfileCallable(const Model::CreateLoginProfileRequest& request) const;
			ListVirtualMFADevicesOutcome listVirtualMFADevices(const Model::ListVirtualMFADevicesRequest &request)const;
			void listVirtualMFADevicesAsync(const Model::ListVirtualMFADevicesRequest& request, const ListVirtualMFADevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVirtualMFADevicesOutcomeCallable listVirtualMFADevicesCallable(const Model::ListVirtualMFADevicesRequest& request) const;
			GetPolicyOutcome getPolicy(const Model::GetPolicyRequest &request)const;
			void getPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPolicyOutcomeCallable getPolicyCallable(const Model::GetPolicyRequest& request) const;
			UpdateGroupOutcome updateGroup(const Model::UpdateGroupRequest &request)const;
			void updateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGroupOutcomeCallable updateGroupCallable(const Model::UpdateGroupRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RAM_RAMCLIENT_H_
