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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_RESOURCEMANAGERCLIENT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_RESOURCEMANAGERCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ResourceManagerExport.h"
#include "model/AcceptHandshakeRequest.h"
#include "model/AcceptHandshakeResult.h"
#include "model/AttachControlPolicyRequest.h"
#include "model/AttachControlPolicyResult.h"
#include "model/AttachPolicyRequest.h"
#include "model/AttachPolicyResult.h"
#include "model/BindSecureMobilePhoneRequest.h"
#include "model/BindSecureMobilePhoneResult.h"
#include "model/CancelChangeAccountEmailRequest.h"
#include "model/CancelChangeAccountEmailResult.h"
#include "model/CancelCreateCloudAccountRequest.h"
#include "model/CancelCreateCloudAccountResult.h"
#include "model/CancelHandshakeRequest.h"
#include "model/CancelHandshakeResult.h"
#include "model/CancelPromoteResourceAccountRequest.h"
#include "model/CancelPromoteResourceAccountResult.h"
#include "model/ChangeAccountEmailRequest.h"
#include "model/ChangeAccountEmailResult.h"
#include "model/CheckAccountDeleteRequest.h"
#include "model/CheckAccountDeleteResult.h"
#include "model/CreateAutoGroupingRuleRequest.h"
#include "model/CreateAutoGroupingRuleResult.h"
#include "model/CreateCloudAccountRequest.h"
#include "model/CreateCloudAccountResult.h"
#include "model/CreateControlPolicyRequest.h"
#include "model/CreateControlPolicyResult.h"
#include "model/CreateFolderRequest.h"
#include "model/CreateFolderResult.h"
#include "model/CreatePolicyRequest.h"
#include "model/CreatePolicyResult.h"
#include "model/CreatePolicyVersionRequest.h"
#include "model/CreatePolicyVersionResult.h"
#include "model/CreateResourceAccountRequest.h"
#include "model/CreateResourceAccountResult.h"
#include "model/CreateResourceGroupRequest.h"
#include "model/CreateResourceGroupResult.h"
#include "model/CreateRoleRequest.h"
#include "model/CreateRoleResult.h"
#include "model/CreateServiceLinkedRoleRequest.h"
#include "model/CreateServiceLinkedRoleResult.h"
#include "model/DeclineHandshakeRequest.h"
#include "model/DeclineHandshakeResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteAutoGroupingRuleRequest.h"
#include "model/DeleteAutoGroupingRuleResult.h"
#include "model/DeleteControlPolicyRequest.h"
#include "model/DeleteControlPolicyResult.h"
#include "model/DeleteFolderRequest.h"
#include "model/DeleteFolderResult.h"
#include "model/DeletePolicyRequest.h"
#include "model/DeletePolicyResult.h"
#include "model/DeletePolicyVersionRequest.h"
#include "model/DeletePolicyVersionResult.h"
#include "model/DeleteResourceGroupRequest.h"
#include "model/DeleteResourceGroupResult.h"
#include "model/DeleteRoleRequest.h"
#include "model/DeleteRoleResult.h"
#include "model/DeleteServiceLinkedRoleRequest.h"
#include "model/DeleteServiceLinkedRoleResult.h"
#include "model/DeregisterDelegatedAdministratorRequest.h"
#include "model/DeregisterDelegatedAdministratorResult.h"
#include "model/DestroyResourceDirectoryRequest.h"
#include "model/DestroyResourceDirectoryResult.h"
#include "model/DetachControlPolicyRequest.h"
#include "model/DetachControlPolicyResult.h"
#include "model/DetachPolicyRequest.h"
#include "model/DetachPolicyResult.h"
#include "model/DisableAssociatedTransferRequest.h"
#include "model/DisableAssociatedTransferResult.h"
#include "model/DisableAutoGroupingRequest.h"
#include "model/DisableAutoGroupingResult.h"
#include "model/DisableControlPolicyRequest.h"
#include "model/DisableControlPolicyResult.h"
#include "model/EnableAssociatedTransferRequest.h"
#include "model/EnableAssociatedTransferResult.h"
#include "model/EnableAutoGroupingRequest.h"
#include "model/EnableAutoGroupingResult.h"
#include "model/EnableControlPolicyRequest.h"
#include "model/EnableControlPolicyResult.h"
#include "model/EnableResourceDirectoryRequest.h"
#include "model/EnableResourceDirectoryResult.h"
#include "model/GetAccountRequest.h"
#include "model/GetAccountResult.h"
#include "model/GetAccountDeletionCheckResultRequest.h"
#include "model/GetAccountDeletionCheckResultResult.h"
#include "model/GetAccountDeletionStatusRequest.h"
#include "model/GetAccountDeletionStatusResult.h"
#include "model/GetAutoGroupingRuleRequest.h"
#include "model/GetAutoGroupingRuleResult.h"
#include "model/GetAutoGroupingStatusRequest.h"
#include "model/GetAutoGroupingStatusResult.h"
#include "model/GetControlPolicyRequest.h"
#include "model/GetControlPolicyResult.h"
#include "model/GetControlPolicyEnablementStatusRequest.h"
#include "model/GetControlPolicyEnablementStatusResult.h"
#include "model/GetFolderRequest.h"
#include "model/GetFolderResult.h"
#include "model/GetHandshakeRequest.h"
#include "model/GetHandshakeResult.h"
#include "model/GetPayerForAccountRequest.h"
#include "model/GetPayerForAccountResult.h"
#include "model/GetPolicyRequest.h"
#include "model/GetPolicyResult.h"
#include "model/GetPolicyVersionRequest.h"
#include "model/GetPolicyVersionResult.h"
#include "model/GetResourceDirectoryRequest.h"
#include "model/GetResourceDirectoryResult.h"
#include "model/GetResourceGroupRequest.h"
#include "model/GetResourceGroupResult.h"
#include "model/GetRoleRequest.h"
#include "model/GetRoleResult.h"
#include "model/GetServiceLinkedRoleDeletionStatusRequest.h"
#include "model/GetServiceLinkedRoleDeletionStatusResult.h"
#include "model/InitResourceDirectoryRequest.h"
#include "model/InitResourceDirectoryResult.h"
#include "model/InviteAccountToResourceDirectoryRequest.h"
#include "model/InviteAccountToResourceDirectoryResult.h"
#include "model/ListAccountsRequest.h"
#include "model/ListAccountsResult.h"
#include "model/ListAccountsForParentRequest.h"
#include "model/ListAccountsForParentResult.h"
#include "model/ListAncestorsRequest.h"
#include "model/ListAncestorsResult.h"
#include "model/ListAssociatedTransferSettingRequest.h"
#include "model/ListAssociatedTransferSettingResult.h"
#include "model/ListAutoGroupingRulesRequest.h"
#include "model/ListAutoGroupingRulesResult.h"
#include "model/ListControlPoliciesRequest.h"
#include "model/ListControlPoliciesResult.h"
#include "model/ListControlPolicyAttachmentsForTargetRequest.h"
#include "model/ListControlPolicyAttachmentsForTargetResult.h"
#include "model/ListDelegatedAdministratorsRequest.h"
#include "model/ListDelegatedAdministratorsResult.h"
#include "model/ListDelegatedServicesForAccountRequest.h"
#include "model/ListDelegatedServicesForAccountResult.h"
#include "model/ListFoldersForParentRequest.h"
#include "model/ListFoldersForParentResult.h"
#include "model/ListHandshakesForAccountRequest.h"
#include "model/ListHandshakesForAccountResult.h"
#include "model/ListHandshakesForResourceDirectoryRequest.h"
#include "model/ListHandshakesForResourceDirectoryResult.h"
#include "model/ListPoliciesRequest.h"
#include "model/ListPoliciesResult.h"
#include "model/ListPolicyAttachmentsRequest.h"
#include "model/ListPolicyAttachmentsResult.h"
#include "model/ListPolicyVersionsRequest.h"
#include "model/ListPolicyVersionsResult.h"
#include "model/ListResourceGroupsRequest.h"
#include "model/ListResourceGroupsResult.h"
#include "model/ListResourcesRequest.h"
#include "model/ListResourcesResult.h"
#include "model/ListRolesRequest.h"
#include "model/ListRolesResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/ListTargetAttachmentsForControlPolicyRequest.h"
#include "model/ListTargetAttachmentsForControlPolicyResult.h"
#include "model/ListTrustedServiceStatusRequest.h"
#include "model/ListTrustedServiceStatusResult.h"
#include "model/MoveAccountRequest.h"
#include "model/MoveAccountResult.h"
#include "model/MoveResourcesRequest.h"
#include "model/MoveResourcesResult.h"
#include "model/PromoteResourceAccountRequest.h"
#include "model/PromoteResourceAccountResult.h"
#include "model/RegisterDelegatedAdministratorRequest.h"
#include "model/RegisterDelegatedAdministratorResult.h"
#include "model/RemoveCloudAccountRequest.h"
#include "model/RemoveCloudAccountResult.h"
#include "model/ResendCreateCloudAccountEmailRequest.h"
#include "model/ResendCreateCloudAccountEmailResult.h"
#include "model/ResendPromoteResourceAccountEmailRequest.h"
#include "model/ResendPromoteResourceAccountEmailResult.h"
#include "model/RetryChangeAccountEmailRequest.h"
#include "model/RetryChangeAccountEmailResult.h"
#include "model/SendVerificationCodeForBindSecureMobilePhoneRequest.h"
#include "model/SendVerificationCodeForBindSecureMobilePhoneResult.h"
#include "model/SendVerificationCodeForEnableRDRequest.h"
#include "model/SendVerificationCodeForEnableRDResult.h"
#include "model/SetDefaultPolicyVersionRequest.h"
#include "model/SetDefaultPolicyVersionResult.h"
#include "model/SetMemberDeletionPermissionRequest.h"
#include "model/SetMemberDeletionPermissionResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAccountRequest.h"
#include "model/UpdateAccountResult.h"
#include "model/UpdateAssociatedTransferSettingRequest.h"
#include "model/UpdateAssociatedTransferSettingResult.h"
#include "model/UpdateAutoGroupingConfigRequest.h"
#include "model/UpdateAutoGroupingConfigResult.h"
#include "model/UpdateAutoGroupingRuleRequest.h"
#include "model/UpdateAutoGroupingRuleResult.h"
#include "model/UpdateControlPolicyRequest.h"
#include "model/UpdateControlPolicyResult.h"
#include "model/UpdateFolderRequest.h"
#include "model/UpdateFolderResult.h"
#include "model/UpdateResourceGroupRequest.h"
#include "model/UpdateResourceGroupResult.h"
#include "model/UpdateRoleRequest.h"
#include "model/UpdateRoleResult.h"


namespace AlibabaCloud
{
	namespace ResourceManager
	{
		class ALIBABACLOUD_RESOURCEMANAGER_EXPORT ResourceManagerClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AcceptHandshakeResult> AcceptHandshakeOutcome;
			typedef std::future<AcceptHandshakeOutcome> AcceptHandshakeOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::AcceptHandshakeRequest&, const AcceptHandshakeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptHandshakeAsyncHandler;
			typedef Outcome<Error, Model::AttachControlPolicyResult> AttachControlPolicyOutcome;
			typedef std::future<AttachControlPolicyOutcome> AttachControlPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::AttachControlPolicyRequest&, const AttachControlPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachControlPolicyAsyncHandler;
			typedef Outcome<Error, Model::AttachPolicyResult> AttachPolicyOutcome;
			typedef std::future<AttachPolicyOutcome> AttachPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::AttachPolicyRequest&, const AttachPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachPolicyAsyncHandler;
			typedef Outcome<Error, Model::BindSecureMobilePhoneResult> BindSecureMobilePhoneOutcome;
			typedef std::future<BindSecureMobilePhoneOutcome> BindSecureMobilePhoneOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::BindSecureMobilePhoneRequest&, const BindSecureMobilePhoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindSecureMobilePhoneAsyncHandler;
			typedef Outcome<Error, Model::CancelChangeAccountEmailResult> CancelChangeAccountEmailOutcome;
			typedef std::future<CancelChangeAccountEmailOutcome> CancelChangeAccountEmailOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CancelChangeAccountEmailRequest&, const CancelChangeAccountEmailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelChangeAccountEmailAsyncHandler;
			typedef Outcome<Error, Model::CancelCreateCloudAccountResult> CancelCreateCloudAccountOutcome;
			typedef std::future<CancelCreateCloudAccountOutcome> CancelCreateCloudAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CancelCreateCloudAccountRequest&, const CancelCreateCloudAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCreateCloudAccountAsyncHandler;
			typedef Outcome<Error, Model::CancelHandshakeResult> CancelHandshakeOutcome;
			typedef std::future<CancelHandshakeOutcome> CancelHandshakeOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CancelHandshakeRequest&, const CancelHandshakeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelHandshakeAsyncHandler;
			typedef Outcome<Error, Model::CancelPromoteResourceAccountResult> CancelPromoteResourceAccountOutcome;
			typedef std::future<CancelPromoteResourceAccountOutcome> CancelPromoteResourceAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CancelPromoteResourceAccountRequest&, const CancelPromoteResourceAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelPromoteResourceAccountAsyncHandler;
			typedef Outcome<Error, Model::ChangeAccountEmailResult> ChangeAccountEmailOutcome;
			typedef std::future<ChangeAccountEmailOutcome> ChangeAccountEmailOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ChangeAccountEmailRequest&, const ChangeAccountEmailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeAccountEmailAsyncHandler;
			typedef Outcome<Error, Model::CheckAccountDeleteResult> CheckAccountDeleteOutcome;
			typedef std::future<CheckAccountDeleteOutcome> CheckAccountDeleteOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CheckAccountDeleteRequest&, const CheckAccountDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAccountDeleteAsyncHandler;
			typedef Outcome<Error, Model::CreateAutoGroupingRuleResult> CreateAutoGroupingRuleOutcome;
			typedef std::future<CreateAutoGroupingRuleOutcome> CreateAutoGroupingRuleOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CreateAutoGroupingRuleRequest&, const CreateAutoGroupingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoGroupingRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateCloudAccountResult> CreateCloudAccountOutcome;
			typedef std::future<CreateCloudAccountOutcome> CreateCloudAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CreateCloudAccountRequest&, const CreateCloudAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateControlPolicyResult> CreateControlPolicyOutcome;
			typedef std::future<CreateControlPolicyOutcome> CreateControlPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CreateControlPolicyRequest&, const CreateControlPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateControlPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateFolderResult> CreateFolderOutcome;
			typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CreateFolderRequest&, const CreateFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFolderAsyncHandler;
			typedef Outcome<Error, Model::CreatePolicyResult> CreatePolicyOutcome;
			typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CreatePolicyRequest&, const CreatePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyAsyncHandler;
			typedef Outcome<Error, Model::CreatePolicyVersionResult> CreatePolicyVersionOutcome;
			typedef std::future<CreatePolicyVersionOutcome> CreatePolicyVersionOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CreatePolicyVersionRequest&, const CreatePolicyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyVersionAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceAccountResult> CreateResourceAccountOutcome;
			typedef std::future<CreateResourceAccountOutcome> CreateResourceAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CreateResourceAccountRequest&, const CreateResourceAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceGroupResult> CreateResourceGroupOutcome;
			typedef std::future<CreateResourceGroupOutcome> CreateResourceGroupOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CreateResourceGroupRequest&, const CreateResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateRoleResult> CreateRoleOutcome;
			typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CreateRoleRequest&, const CreateRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleResult> CreateServiceLinkedRoleOutcome;
			typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::CreateServiceLinkedRoleRequest&, const CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::DeclineHandshakeResult> DeclineHandshakeOutcome;
			typedef std::future<DeclineHandshakeOutcome> DeclineHandshakeOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeclineHandshakeRequest&, const DeclineHandshakeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeclineHandshakeAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutoGroupingRuleResult> DeleteAutoGroupingRuleOutcome;
			typedef std::future<DeleteAutoGroupingRuleOutcome> DeleteAutoGroupingRuleOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeleteAutoGroupingRuleRequest&, const DeleteAutoGroupingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoGroupingRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteControlPolicyResult> DeleteControlPolicyOutcome;
			typedef std::future<DeleteControlPolicyOutcome> DeleteControlPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeleteControlPolicyRequest&, const DeleteControlPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteControlPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteFolderResult> DeleteFolderOutcome;
			typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeleteFolderRequest&, const DeleteFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFolderAsyncHandler;
			typedef Outcome<Error, Model::DeletePolicyResult> DeletePolicyOutcome;
			typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeletePolicyRequest&, const DeletePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyAsyncHandler;
			typedef Outcome<Error, Model::DeletePolicyVersionResult> DeletePolicyVersionOutcome;
			typedef std::future<DeletePolicyVersionOutcome> DeletePolicyVersionOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeletePolicyVersionRequest&, const DeletePolicyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyVersionAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceGroupResult> DeleteResourceGroupOutcome;
			typedef std::future<DeleteResourceGroupOutcome> DeleteResourceGroupOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeleteResourceGroupRequest&, const DeleteResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteRoleResult> DeleteRoleOutcome;
			typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeleteRoleRequest&, const DeleteRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceLinkedRoleResult> DeleteServiceLinkedRoleOutcome;
			typedef std::future<DeleteServiceLinkedRoleOutcome> DeleteServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeleteServiceLinkedRoleRequest&, const DeleteServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::DeregisterDelegatedAdministratorResult> DeregisterDelegatedAdministratorOutcome;
			typedef std::future<DeregisterDelegatedAdministratorOutcome> DeregisterDelegatedAdministratorOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DeregisterDelegatedAdministratorRequest&, const DeregisterDelegatedAdministratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterDelegatedAdministratorAsyncHandler;
			typedef Outcome<Error, Model::DestroyResourceDirectoryResult> DestroyResourceDirectoryOutcome;
			typedef std::future<DestroyResourceDirectoryOutcome> DestroyResourceDirectoryOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DestroyResourceDirectoryRequest&, const DestroyResourceDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DestroyResourceDirectoryAsyncHandler;
			typedef Outcome<Error, Model::DetachControlPolicyResult> DetachControlPolicyOutcome;
			typedef std::future<DetachControlPolicyOutcome> DetachControlPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DetachControlPolicyRequest&, const DetachControlPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachControlPolicyAsyncHandler;
			typedef Outcome<Error, Model::DetachPolicyResult> DetachPolicyOutcome;
			typedef std::future<DetachPolicyOutcome> DetachPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DetachPolicyRequest&, const DetachPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachPolicyAsyncHandler;
			typedef Outcome<Error, Model::DisableAssociatedTransferResult> DisableAssociatedTransferOutcome;
			typedef std::future<DisableAssociatedTransferOutcome> DisableAssociatedTransferOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DisableAssociatedTransferRequest&, const DisableAssociatedTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableAssociatedTransferAsyncHandler;
			typedef Outcome<Error, Model::DisableAutoGroupingResult> DisableAutoGroupingOutcome;
			typedef std::future<DisableAutoGroupingOutcome> DisableAutoGroupingOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DisableAutoGroupingRequest&, const DisableAutoGroupingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableAutoGroupingAsyncHandler;
			typedef Outcome<Error, Model::DisableControlPolicyResult> DisableControlPolicyOutcome;
			typedef std::future<DisableControlPolicyOutcome> DisableControlPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::DisableControlPolicyRequest&, const DisableControlPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableControlPolicyAsyncHandler;
			typedef Outcome<Error, Model::EnableAssociatedTransferResult> EnableAssociatedTransferOutcome;
			typedef std::future<EnableAssociatedTransferOutcome> EnableAssociatedTransferOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::EnableAssociatedTransferRequest&, const EnableAssociatedTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAssociatedTransferAsyncHandler;
			typedef Outcome<Error, Model::EnableAutoGroupingResult> EnableAutoGroupingOutcome;
			typedef std::future<EnableAutoGroupingOutcome> EnableAutoGroupingOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::EnableAutoGroupingRequest&, const EnableAutoGroupingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAutoGroupingAsyncHandler;
			typedef Outcome<Error, Model::EnableControlPolicyResult> EnableControlPolicyOutcome;
			typedef std::future<EnableControlPolicyOutcome> EnableControlPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::EnableControlPolicyRequest&, const EnableControlPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableControlPolicyAsyncHandler;
			typedef Outcome<Error, Model::EnableResourceDirectoryResult> EnableResourceDirectoryOutcome;
			typedef std::future<EnableResourceDirectoryOutcome> EnableResourceDirectoryOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::EnableResourceDirectoryRequest&, const EnableResourceDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableResourceDirectoryAsyncHandler;
			typedef Outcome<Error, Model::GetAccountResult> GetAccountOutcome;
			typedef std::future<GetAccountOutcome> GetAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetAccountRequest&, const GetAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountAsyncHandler;
			typedef Outcome<Error, Model::GetAccountDeletionCheckResultResult> GetAccountDeletionCheckResultOutcome;
			typedef std::future<GetAccountDeletionCheckResultOutcome> GetAccountDeletionCheckResultOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetAccountDeletionCheckResultRequest&, const GetAccountDeletionCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountDeletionCheckResultAsyncHandler;
			typedef Outcome<Error, Model::GetAccountDeletionStatusResult> GetAccountDeletionStatusOutcome;
			typedef std::future<GetAccountDeletionStatusOutcome> GetAccountDeletionStatusOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetAccountDeletionStatusRequest&, const GetAccountDeletionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountDeletionStatusAsyncHandler;
			typedef Outcome<Error, Model::GetAutoGroupingRuleResult> GetAutoGroupingRuleOutcome;
			typedef std::future<GetAutoGroupingRuleOutcome> GetAutoGroupingRuleOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetAutoGroupingRuleRequest&, const GetAutoGroupingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAutoGroupingRuleAsyncHandler;
			typedef Outcome<Error, Model::GetAutoGroupingStatusResult> GetAutoGroupingStatusOutcome;
			typedef std::future<GetAutoGroupingStatusOutcome> GetAutoGroupingStatusOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetAutoGroupingStatusRequest&, const GetAutoGroupingStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAutoGroupingStatusAsyncHandler;
			typedef Outcome<Error, Model::GetControlPolicyResult> GetControlPolicyOutcome;
			typedef std::future<GetControlPolicyOutcome> GetControlPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetControlPolicyRequest&, const GetControlPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetControlPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetControlPolicyEnablementStatusResult> GetControlPolicyEnablementStatusOutcome;
			typedef std::future<GetControlPolicyEnablementStatusOutcome> GetControlPolicyEnablementStatusOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetControlPolicyEnablementStatusRequest&, const GetControlPolicyEnablementStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetControlPolicyEnablementStatusAsyncHandler;
			typedef Outcome<Error, Model::GetFolderResult> GetFolderOutcome;
			typedef std::future<GetFolderOutcome> GetFolderOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetFolderRequest&, const GetFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFolderAsyncHandler;
			typedef Outcome<Error, Model::GetHandshakeResult> GetHandshakeOutcome;
			typedef std::future<GetHandshakeOutcome> GetHandshakeOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetHandshakeRequest&, const GetHandshakeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHandshakeAsyncHandler;
			typedef Outcome<Error, Model::GetPayerForAccountResult> GetPayerForAccountOutcome;
			typedef std::future<GetPayerForAccountOutcome> GetPayerForAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetPayerForAccountRequest&, const GetPayerForAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPayerForAccountAsyncHandler;
			typedef Outcome<Error, Model::GetPolicyResult> GetPolicyOutcome;
			typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetPolicyRequest&, const GetPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetPolicyVersionResult> GetPolicyVersionOutcome;
			typedef std::future<GetPolicyVersionOutcome> GetPolicyVersionOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetPolicyVersionRequest&, const GetPolicyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyVersionAsyncHandler;
			typedef Outcome<Error, Model::GetResourceDirectoryResult> GetResourceDirectoryOutcome;
			typedef std::future<GetResourceDirectoryOutcome> GetResourceDirectoryOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetResourceDirectoryRequest&, const GetResourceDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceDirectoryAsyncHandler;
			typedef Outcome<Error, Model::GetResourceGroupResult> GetResourceGroupOutcome;
			typedef std::future<GetResourceGroupOutcome> GetResourceGroupOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetResourceGroupRequest&, const GetResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::GetRoleResult> GetRoleOutcome;
			typedef std::future<GetRoleOutcome> GetRoleOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetRoleRequest&, const GetRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRoleAsyncHandler;
			typedef Outcome<Error, Model::GetServiceLinkedRoleDeletionStatusResult> GetServiceLinkedRoleDeletionStatusOutcome;
			typedef std::future<GetServiceLinkedRoleDeletionStatusOutcome> GetServiceLinkedRoleDeletionStatusOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::GetServiceLinkedRoleDeletionStatusRequest&, const GetServiceLinkedRoleDeletionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceLinkedRoleDeletionStatusAsyncHandler;
			typedef Outcome<Error, Model::InitResourceDirectoryResult> InitResourceDirectoryOutcome;
			typedef std::future<InitResourceDirectoryOutcome> InitResourceDirectoryOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::InitResourceDirectoryRequest&, const InitResourceDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitResourceDirectoryAsyncHandler;
			typedef Outcome<Error, Model::InviteAccountToResourceDirectoryResult> InviteAccountToResourceDirectoryOutcome;
			typedef std::future<InviteAccountToResourceDirectoryOutcome> InviteAccountToResourceDirectoryOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::InviteAccountToResourceDirectoryRequest&, const InviteAccountToResourceDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InviteAccountToResourceDirectoryAsyncHandler;
			typedef Outcome<Error, Model::ListAccountsResult> ListAccountsOutcome;
			typedef std::future<ListAccountsOutcome> ListAccountsOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListAccountsRequest&, const ListAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccountsAsyncHandler;
			typedef Outcome<Error, Model::ListAccountsForParentResult> ListAccountsForParentOutcome;
			typedef std::future<ListAccountsForParentOutcome> ListAccountsForParentOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListAccountsForParentRequest&, const ListAccountsForParentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccountsForParentAsyncHandler;
			typedef Outcome<Error, Model::ListAncestorsResult> ListAncestorsOutcome;
			typedef std::future<ListAncestorsOutcome> ListAncestorsOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListAncestorsRequest&, const ListAncestorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAncestorsAsyncHandler;
			typedef Outcome<Error, Model::ListAssociatedTransferSettingResult> ListAssociatedTransferSettingOutcome;
			typedef std::future<ListAssociatedTransferSettingOutcome> ListAssociatedTransferSettingOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListAssociatedTransferSettingRequest&, const ListAssociatedTransferSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAssociatedTransferSettingAsyncHandler;
			typedef Outcome<Error, Model::ListAutoGroupingRulesResult> ListAutoGroupingRulesOutcome;
			typedef std::future<ListAutoGroupingRulesOutcome> ListAutoGroupingRulesOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListAutoGroupingRulesRequest&, const ListAutoGroupingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAutoGroupingRulesAsyncHandler;
			typedef Outcome<Error, Model::ListControlPoliciesResult> ListControlPoliciesOutcome;
			typedef std::future<ListControlPoliciesOutcome> ListControlPoliciesOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListControlPoliciesRequest&, const ListControlPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListControlPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListControlPolicyAttachmentsForTargetResult> ListControlPolicyAttachmentsForTargetOutcome;
			typedef std::future<ListControlPolicyAttachmentsForTargetOutcome> ListControlPolicyAttachmentsForTargetOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListControlPolicyAttachmentsForTargetRequest&, const ListControlPolicyAttachmentsForTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListControlPolicyAttachmentsForTargetAsyncHandler;
			typedef Outcome<Error, Model::ListDelegatedAdministratorsResult> ListDelegatedAdministratorsOutcome;
			typedef std::future<ListDelegatedAdministratorsOutcome> ListDelegatedAdministratorsOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListDelegatedAdministratorsRequest&, const ListDelegatedAdministratorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDelegatedAdministratorsAsyncHandler;
			typedef Outcome<Error, Model::ListDelegatedServicesForAccountResult> ListDelegatedServicesForAccountOutcome;
			typedef std::future<ListDelegatedServicesForAccountOutcome> ListDelegatedServicesForAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListDelegatedServicesForAccountRequest&, const ListDelegatedServicesForAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDelegatedServicesForAccountAsyncHandler;
			typedef Outcome<Error, Model::ListFoldersForParentResult> ListFoldersForParentOutcome;
			typedef std::future<ListFoldersForParentOutcome> ListFoldersForParentOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListFoldersForParentRequest&, const ListFoldersForParentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFoldersForParentAsyncHandler;
			typedef Outcome<Error, Model::ListHandshakesForAccountResult> ListHandshakesForAccountOutcome;
			typedef std::future<ListHandshakesForAccountOutcome> ListHandshakesForAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListHandshakesForAccountRequest&, const ListHandshakesForAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHandshakesForAccountAsyncHandler;
			typedef Outcome<Error, Model::ListHandshakesForResourceDirectoryResult> ListHandshakesForResourceDirectoryOutcome;
			typedef std::future<ListHandshakesForResourceDirectoryOutcome> ListHandshakesForResourceDirectoryOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListHandshakesForResourceDirectoryRequest&, const ListHandshakesForResourceDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHandshakesForResourceDirectoryAsyncHandler;
			typedef Outcome<Error, Model::ListPoliciesResult> ListPoliciesOutcome;
			typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListPoliciesRequest&, const ListPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListPolicyAttachmentsResult> ListPolicyAttachmentsOutcome;
			typedef std::future<ListPolicyAttachmentsOutcome> ListPolicyAttachmentsOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListPolicyAttachmentsRequest&, const ListPolicyAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicyAttachmentsAsyncHandler;
			typedef Outcome<Error, Model::ListPolicyVersionsResult> ListPolicyVersionsOutcome;
			typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListPolicyVersionsRequest&, const ListPolicyVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicyVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceGroupsResult> ListResourceGroupsOutcome;
			typedef std::future<ListResourceGroupsOutcome> ListResourceGroupsOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListResourceGroupsRequest&, const ListResourceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListResourcesResult> ListResourcesOutcome;
			typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListResourcesRequest&, const ListResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListRolesResult> ListRolesOutcome;
			typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListRolesRequest&, const ListRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRolesAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagValuesResult> ListTagValuesOutcome;
			typedef std::future<ListTagValuesOutcome> ListTagValuesOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListTagValuesRequest&, const ListTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagValuesAsyncHandler;
			typedef Outcome<Error, Model::ListTargetAttachmentsForControlPolicyResult> ListTargetAttachmentsForControlPolicyOutcome;
			typedef std::future<ListTargetAttachmentsForControlPolicyOutcome> ListTargetAttachmentsForControlPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListTargetAttachmentsForControlPolicyRequest&, const ListTargetAttachmentsForControlPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTargetAttachmentsForControlPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListTrustedServiceStatusResult> ListTrustedServiceStatusOutcome;
			typedef std::future<ListTrustedServiceStatusOutcome> ListTrustedServiceStatusOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ListTrustedServiceStatusRequest&, const ListTrustedServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTrustedServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::MoveAccountResult> MoveAccountOutcome;
			typedef std::future<MoveAccountOutcome> MoveAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::MoveAccountRequest&, const MoveAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveAccountAsyncHandler;
			typedef Outcome<Error, Model::MoveResourcesResult> MoveResourcesOutcome;
			typedef std::future<MoveResourcesOutcome> MoveResourcesOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::MoveResourcesRequest&, const MoveResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourcesAsyncHandler;
			typedef Outcome<Error, Model::PromoteResourceAccountResult> PromoteResourceAccountOutcome;
			typedef std::future<PromoteResourceAccountOutcome> PromoteResourceAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::PromoteResourceAccountRequest&, const PromoteResourceAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PromoteResourceAccountAsyncHandler;
			typedef Outcome<Error, Model::RegisterDelegatedAdministratorResult> RegisterDelegatedAdministratorOutcome;
			typedef std::future<RegisterDelegatedAdministratorOutcome> RegisterDelegatedAdministratorOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::RegisterDelegatedAdministratorRequest&, const RegisterDelegatedAdministratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDelegatedAdministratorAsyncHandler;
			typedef Outcome<Error, Model::RemoveCloudAccountResult> RemoveCloudAccountOutcome;
			typedef std::future<RemoveCloudAccountOutcome> RemoveCloudAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::RemoveCloudAccountRequest&, const RemoveCloudAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveCloudAccountAsyncHandler;
			typedef Outcome<Error, Model::ResendCreateCloudAccountEmailResult> ResendCreateCloudAccountEmailOutcome;
			typedef std::future<ResendCreateCloudAccountEmailOutcome> ResendCreateCloudAccountEmailOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ResendCreateCloudAccountEmailRequest&, const ResendCreateCloudAccountEmailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResendCreateCloudAccountEmailAsyncHandler;
			typedef Outcome<Error, Model::ResendPromoteResourceAccountEmailResult> ResendPromoteResourceAccountEmailOutcome;
			typedef std::future<ResendPromoteResourceAccountEmailOutcome> ResendPromoteResourceAccountEmailOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::ResendPromoteResourceAccountEmailRequest&, const ResendPromoteResourceAccountEmailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResendPromoteResourceAccountEmailAsyncHandler;
			typedef Outcome<Error, Model::RetryChangeAccountEmailResult> RetryChangeAccountEmailOutcome;
			typedef std::future<RetryChangeAccountEmailOutcome> RetryChangeAccountEmailOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::RetryChangeAccountEmailRequest&, const RetryChangeAccountEmailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryChangeAccountEmailAsyncHandler;
			typedef Outcome<Error, Model::SendVerificationCodeForBindSecureMobilePhoneResult> SendVerificationCodeForBindSecureMobilePhoneOutcome;
			typedef std::future<SendVerificationCodeForBindSecureMobilePhoneOutcome> SendVerificationCodeForBindSecureMobilePhoneOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::SendVerificationCodeForBindSecureMobilePhoneRequest&, const SendVerificationCodeForBindSecureMobilePhoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendVerificationCodeForBindSecureMobilePhoneAsyncHandler;
			typedef Outcome<Error, Model::SendVerificationCodeForEnableRDResult> SendVerificationCodeForEnableRDOutcome;
			typedef std::future<SendVerificationCodeForEnableRDOutcome> SendVerificationCodeForEnableRDOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::SendVerificationCodeForEnableRDRequest&, const SendVerificationCodeForEnableRDOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendVerificationCodeForEnableRDAsyncHandler;
			typedef Outcome<Error, Model::SetDefaultPolicyVersionResult> SetDefaultPolicyVersionOutcome;
			typedef std::future<SetDefaultPolicyVersionOutcome> SetDefaultPolicyVersionOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::SetDefaultPolicyVersionRequest&, const SetDefaultPolicyVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultPolicyVersionAsyncHandler;
			typedef Outcome<Error, Model::SetMemberDeletionPermissionResult> SetMemberDeletionPermissionOutcome;
			typedef std::future<SetMemberDeletionPermissionOutcome> SetMemberDeletionPermissionOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::SetMemberDeletionPermissionRequest&, const SetMemberDeletionPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetMemberDeletionPermissionAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAccountResult> UpdateAccountOutcome;
			typedef std::future<UpdateAccountOutcome> UpdateAccountOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::UpdateAccountRequest&, const UpdateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccountAsyncHandler;
			typedef Outcome<Error, Model::UpdateAssociatedTransferSettingResult> UpdateAssociatedTransferSettingOutcome;
			typedef std::future<UpdateAssociatedTransferSettingOutcome> UpdateAssociatedTransferSettingOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::UpdateAssociatedTransferSettingRequest&, const UpdateAssociatedTransferSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAssociatedTransferSettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateAutoGroupingConfigResult> UpdateAutoGroupingConfigOutcome;
			typedef std::future<UpdateAutoGroupingConfigOutcome> UpdateAutoGroupingConfigOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::UpdateAutoGroupingConfigRequest&, const UpdateAutoGroupingConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAutoGroupingConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateAutoGroupingRuleResult> UpdateAutoGroupingRuleOutcome;
			typedef std::future<UpdateAutoGroupingRuleOutcome> UpdateAutoGroupingRuleOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::UpdateAutoGroupingRuleRequest&, const UpdateAutoGroupingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAutoGroupingRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateControlPolicyResult> UpdateControlPolicyOutcome;
			typedef std::future<UpdateControlPolicyOutcome> UpdateControlPolicyOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::UpdateControlPolicyRequest&, const UpdateControlPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateControlPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateFolderResult> UpdateFolderOutcome;
			typedef std::future<UpdateFolderOutcome> UpdateFolderOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::UpdateFolderRequest&, const UpdateFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFolderAsyncHandler;
			typedef Outcome<Error, Model::UpdateResourceGroupResult> UpdateResourceGroupOutcome;
			typedef std::future<UpdateResourceGroupOutcome> UpdateResourceGroupOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::UpdateResourceGroupRequest&, const UpdateResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateRoleResult> UpdateRoleOutcome;
			typedef std::future<UpdateRoleOutcome> UpdateRoleOutcomeCallable;
			typedef std::function<void(const ResourceManagerClient*, const Model::UpdateRoleRequest&, const UpdateRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleAsyncHandler;

			ResourceManagerClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ResourceManagerClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ResourceManagerClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ResourceManagerClient();
			AcceptHandshakeOutcome acceptHandshake(const Model::AcceptHandshakeRequest &request)const;
			void acceptHandshakeAsync(const Model::AcceptHandshakeRequest& request, const AcceptHandshakeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptHandshakeOutcomeCallable acceptHandshakeCallable(const Model::AcceptHandshakeRequest& request) const;
			AttachControlPolicyOutcome attachControlPolicy(const Model::AttachControlPolicyRequest &request)const;
			void attachControlPolicyAsync(const Model::AttachControlPolicyRequest& request, const AttachControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachControlPolicyOutcomeCallable attachControlPolicyCallable(const Model::AttachControlPolicyRequest& request) const;
			AttachPolicyOutcome attachPolicy(const Model::AttachPolicyRequest &request)const;
			void attachPolicyAsync(const Model::AttachPolicyRequest& request, const AttachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachPolicyOutcomeCallable attachPolicyCallable(const Model::AttachPolicyRequest& request) const;
			BindSecureMobilePhoneOutcome bindSecureMobilePhone(const Model::BindSecureMobilePhoneRequest &request)const;
			void bindSecureMobilePhoneAsync(const Model::BindSecureMobilePhoneRequest& request, const BindSecureMobilePhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindSecureMobilePhoneOutcomeCallable bindSecureMobilePhoneCallable(const Model::BindSecureMobilePhoneRequest& request) const;
			CancelChangeAccountEmailOutcome cancelChangeAccountEmail(const Model::CancelChangeAccountEmailRequest &request)const;
			void cancelChangeAccountEmailAsync(const Model::CancelChangeAccountEmailRequest& request, const CancelChangeAccountEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelChangeAccountEmailOutcomeCallable cancelChangeAccountEmailCallable(const Model::CancelChangeAccountEmailRequest& request) const;
			CancelCreateCloudAccountOutcome cancelCreateCloudAccount(const Model::CancelCreateCloudAccountRequest &request)const;
			void cancelCreateCloudAccountAsync(const Model::CancelCreateCloudAccountRequest& request, const CancelCreateCloudAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCreateCloudAccountOutcomeCallable cancelCreateCloudAccountCallable(const Model::CancelCreateCloudAccountRequest& request) const;
			CancelHandshakeOutcome cancelHandshake(const Model::CancelHandshakeRequest &request)const;
			void cancelHandshakeAsync(const Model::CancelHandshakeRequest& request, const CancelHandshakeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelHandshakeOutcomeCallable cancelHandshakeCallable(const Model::CancelHandshakeRequest& request) const;
			CancelPromoteResourceAccountOutcome cancelPromoteResourceAccount(const Model::CancelPromoteResourceAccountRequest &request)const;
			void cancelPromoteResourceAccountAsync(const Model::CancelPromoteResourceAccountRequest& request, const CancelPromoteResourceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelPromoteResourceAccountOutcomeCallable cancelPromoteResourceAccountCallable(const Model::CancelPromoteResourceAccountRequest& request) const;
			ChangeAccountEmailOutcome changeAccountEmail(const Model::ChangeAccountEmailRequest &request)const;
			void changeAccountEmailAsync(const Model::ChangeAccountEmailRequest& request, const ChangeAccountEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeAccountEmailOutcomeCallable changeAccountEmailCallable(const Model::ChangeAccountEmailRequest& request) const;
			CheckAccountDeleteOutcome checkAccountDelete(const Model::CheckAccountDeleteRequest &request)const;
			void checkAccountDeleteAsync(const Model::CheckAccountDeleteRequest& request, const CheckAccountDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckAccountDeleteOutcomeCallable checkAccountDeleteCallable(const Model::CheckAccountDeleteRequest& request) const;
			CreateAutoGroupingRuleOutcome createAutoGroupingRule(const Model::CreateAutoGroupingRuleRequest &request)const;
			void createAutoGroupingRuleAsync(const Model::CreateAutoGroupingRuleRequest& request, const CreateAutoGroupingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAutoGroupingRuleOutcomeCallable createAutoGroupingRuleCallable(const Model::CreateAutoGroupingRuleRequest& request) const;
			CreateCloudAccountOutcome createCloudAccount(const Model::CreateCloudAccountRequest &request)const;
			void createCloudAccountAsync(const Model::CreateCloudAccountRequest& request, const CreateCloudAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCloudAccountOutcomeCallable createCloudAccountCallable(const Model::CreateCloudAccountRequest& request) const;
			CreateControlPolicyOutcome createControlPolicy(const Model::CreateControlPolicyRequest &request)const;
			void createControlPolicyAsync(const Model::CreateControlPolicyRequest& request, const CreateControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateControlPolicyOutcomeCallable createControlPolicyCallable(const Model::CreateControlPolicyRequest& request) const;
			CreateFolderOutcome createFolder(const Model::CreateFolderRequest &request)const;
			void createFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFolderOutcomeCallable createFolderCallable(const Model::CreateFolderRequest& request) const;
			CreatePolicyOutcome createPolicy(const Model::CreatePolicyRequest &request)const;
			void createPolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePolicyOutcomeCallable createPolicyCallable(const Model::CreatePolicyRequest& request) const;
			CreatePolicyVersionOutcome createPolicyVersion(const Model::CreatePolicyVersionRequest &request)const;
			void createPolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePolicyVersionOutcomeCallable createPolicyVersionCallable(const Model::CreatePolicyVersionRequest& request) const;
			CreateResourceAccountOutcome createResourceAccount(const Model::CreateResourceAccountRequest &request)const;
			void createResourceAccountAsync(const Model::CreateResourceAccountRequest& request, const CreateResourceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceAccountOutcomeCallable createResourceAccountCallable(const Model::CreateResourceAccountRequest& request) const;
			CreateResourceGroupOutcome createResourceGroup(const Model::CreateResourceGroupRequest &request)const;
			void createResourceGroupAsync(const Model::CreateResourceGroupRequest& request, const CreateResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceGroupOutcomeCallable createResourceGroupCallable(const Model::CreateResourceGroupRequest& request) const;
			CreateRoleOutcome createRole(const Model::CreateRoleRequest &request)const;
			void createRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRoleOutcomeCallable createRoleCallable(const Model::CreateRoleRequest& request) const;
			CreateServiceLinkedRoleOutcome createServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request)const;
			void createServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleOutcomeCallable createServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;
			DeclineHandshakeOutcome declineHandshake(const Model::DeclineHandshakeRequest &request)const;
			void declineHandshakeAsync(const Model::DeclineHandshakeRequest& request, const DeclineHandshakeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeclineHandshakeOutcomeCallable declineHandshakeCallable(const Model::DeclineHandshakeRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteAutoGroupingRuleOutcome deleteAutoGroupingRule(const Model::DeleteAutoGroupingRuleRequest &request)const;
			void deleteAutoGroupingRuleAsync(const Model::DeleteAutoGroupingRuleRequest& request, const DeleteAutoGroupingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutoGroupingRuleOutcomeCallable deleteAutoGroupingRuleCallable(const Model::DeleteAutoGroupingRuleRequest& request) const;
			DeleteControlPolicyOutcome deleteControlPolicy(const Model::DeleteControlPolicyRequest &request)const;
			void deleteControlPolicyAsync(const Model::DeleteControlPolicyRequest& request, const DeleteControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteControlPolicyOutcomeCallable deleteControlPolicyCallable(const Model::DeleteControlPolicyRequest& request) const;
			DeleteFolderOutcome deleteFolder(const Model::DeleteFolderRequest &request)const;
			void deleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFolderOutcomeCallable deleteFolderCallable(const Model::DeleteFolderRequest& request) const;
			DeletePolicyOutcome deletePolicy(const Model::DeletePolicyRequest &request)const;
			void deletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePolicyOutcomeCallable deletePolicyCallable(const Model::DeletePolicyRequest& request) const;
			DeletePolicyVersionOutcome deletePolicyVersion(const Model::DeletePolicyVersionRequest &request)const;
			void deletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePolicyVersionOutcomeCallable deletePolicyVersionCallable(const Model::DeletePolicyVersionRequest& request) const;
			DeleteResourceGroupOutcome deleteResourceGroup(const Model::DeleteResourceGroupRequest &request)const;
			void deleteResourceGroupAsync(const Model::DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceGroupOutcomeCallable deleteResourceGroupCallable(const Model::DeleteResourceGroupRequest& request) const;
			DeleteRoleOutcome deleteRole(const Model::DeleteRoleRequest &request)const;
			void deleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRoleOutcomeCallable deleteRoleCallable(const Model::DeleteRoleRequest& request) const;
			DeleteServiceLinkedRoleOutcome deleteServiceLinkedRole(const Model::DeleteServiceLinkedRoleRequest &request)const;
			void deleteServiceLinkedRoleAsync(const Model::DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceLinkedRoleOutcomeCallable deleteServiceLinkedRoleCallable(const Model::DeleteServiceLinkedRoleRequest& request) const;
			DeregisterDelegatedAdministratorOutcome deregisterDelegatedAdministrator(const Model::DeregisterDelegatedAdministratorRequest &request)const;
			void deregisterDelegatedAdministratorAsync(const Model::DeregisterDelegatedAdministratorRequest& request, const DeregisterDelegatedAdministratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeregisterDelegatedAdministratorOutcomeCallable deregisterDelegatedAdministratorCallable(const Model::DeregisterDelegatedAdministratorRequest& request) const;
			DestroyResourceDirectoryOutcome destroyResourceDirectory(const Model::DestroyResourceDirectoryRequest &request)const;
			void destroyResourceDirectoryAsync(const Model::DestroyResourceDirectoryRequest& request, const DestroyResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DestroyResourceDirectoryOutcomeCallable destroyResourceDirectoryCallable(const Model::DestroyResourceDirectoryRequest& request) const;
			DetachControlPolicyOutcome detachControlPolicy(const Model::DetachControlPolicyRequest &request)const;
			void detachControlPolicyAsync(const Model::DetachControlPolicyRequest& request, const DetachControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachControlPolicyOutcomeCallable detachControlPolicyCallable(const Model::DetachControlPolicyRequest& request) const;
			DetachPolicyOutcome detachPolicy(const Model::DetachPolicyRequest &request)const;
			void detachPolicyAsync(const Model::DetachPolicyRequest& request, const DetachPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachPolicyOutcomeCallable detachPolicyCallable(const Model::DetachPolicyRequest& request) const;
			DisableAssociatedTransferOutcome disableAssociatedTransfer(const Model::DisableAssociatedTransferRequest &request)const;
			void disableAssociatedTransferAsync(const Model::DisableAssociatedTransferRequest& request, const DisableAssociatedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableAssociatedTransferOutcomeCallable disableAssociatedTransferCallable(const Model::DisableAssociatedTransferRequest& request) const;
			DisableAutoGroupingOutcome disableAutoGrouping(const Model::DisableAutoGroupingRequest &request)const;
			void disableAutoGroupingAsync(const Model::DisableAutoGroupingRequest& request, const DisableAutoGroupingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableAutoGroupingOutcomeCallable disableAutoGroupingCallable(const Model::DisableAutoGroupingRequest& request) const;
			DisableControlPolicyOutcome disableControlPolicy(const Model::DisableControlPolicyRequest &request)const;
			void disableControlPolicyAsync(const Model::DisableControlPolicyRequest& request, const DisableControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableControlPolicyOutcomeCallable disableControlPolicyCallable(const Model::DisableControlPolicyRequest& request) const;
			EnableAssociatedTransferOutcome enableAssociatedTransfer(const Model::EnableAssociatedTransferRequest &request)const;
			void enableAssociatedTransferAsync(const Model::EnableAssociatedTransferRequest& request, const EnableAssociatedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAssociatedTransferOutcomeCallable enableAssociatedTransferCallable(const Model::EnableAssociatedTransferRequest& request) const;
			EnableAutoGroupingOutcome enableAutoGrouping(const Model::EnableAutoGroupingRequest &request)const;
			void enableAutoGroupingAsync(const Model::EnableAutoGroupingRequest& request, const EnableAutoGroupingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAutoGroupingOutcomeCallable enableAutoGroupingCallable(const Model::EnableAutoGroupingRequest& request) const;
			EnableControlPolicyOutcome enableControlPolicy(const Model::EnableControlPolicyRequest &request)const;
			void enableControlPolicyAsync(const Model::EnableControlPolicyRequest& request, const EnableControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableControlPolicyOutcomeCallable enableControlPolicyCallable(const Model::EnableControlPolicyRequest& request) const;
			EnableResourceDirectoryOutcome enableResourceDirectory(const Model::EnableResourceDirectoryRequest &request)const;
			void enableResourceDirectoryAsync(const Model::EnableResourceDirectoryRequest& request, const EnableResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableResourceDirectoryOutcomeCallable enableResourceDirectoryCallable(const Model::EnableResourceDirectoryRequest& request) const;
			GetAccountOutcome getAccount(const Model::GetAccountRequest &request)const;
			void getAccountAsync(const Model::GetAccountRequest& request, const GetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountOutcomeCallable getAccountCallable(const Model::GetAccountRequest& request) const;
			GetAccountDeletionCheckResultOutcome getAccountDeletionCheckResult(const Model::GetAccountDeletionCheckResultRequest &request)const;
			void getAccountDeletionCheckResultAsync(const Model::GetAccountDeletionCheckResultRequest& request, const GetAccountDeletionCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountDeletionCheckResultOutcomeCallable getAccountDeletionCheckResultCallable(const Model::GetAccountDeletionCheckResultRequest& request) const;
			GetAccountDeletionStatusOutcome getAccountDeletionStatus(const Model::GetAccountDeletionStatusRequest &request)const;
			void getAccountDeletionStatusAsync(const Model::GetAccountDeletionStatusRequest& request, const GetAccountDeletionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountDeletionStatusOutcomeCallable getAccountDeletionStatusCallable(const Model::GetAccountDeletionStatusRequest& request) const;
			GetAutoGroupingRuleOutcome getAutoGroupingRule(const Model::GetAutoGroupingRuleRequest &request)const;
			void getAutoGroupingRuleAsync(const Model::GetAutoGroupingRuleRequest& request, const GetAutoGroupingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAutoGroupingRuleOutcomeCallable getAutoGroupingRuleCallable(const Model::GetAutoGroupingRuleRequest& request) const;
			GetAutoGroupingStatusOutcome getAutoGroupingStatus(const Model::GetAutoGroupingStatusRequest &request)const;
			void getAutoGroupingStatusAsync(const Model::GetAutoGroupingStatusRequest& request, const GetAutoGroupingStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAutoGroupingStatusOutcomeCallable getAutoGroupingStatusCallable(const Model::GetAutoGroupingStatusRequest& request) const;
			GetControlPolicyOutcome getControlPolicy(const Model::GetControlPolicyRequest &request)const;
			void getControlPolicyAsync(const Model::GetControlPolicyRequest& request, const GetControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetControlPolicyOutcomeCallable getControlPolicyCallable(const Model::GetControlPolicyRequest& request) const;
			GetControlPolicyEnablementStatusOutcome getControlPolicyEnablementStatus(const Model::GetControlPolicyEnablementStatusRequest &request)const;
			void getControlPolicyEnablementStatusAsync(const Model::GetControlPolicyEnablementStatusRequest& request, const GetControlPolicyEnablementStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetControlPolicyEnablementStatusOutcomeCallable getControlPolicyEnablementStatusCallable(const Model::GetControlPolicyEnablementStatusRequest& request) const;
			GetFolderOutcome getFolder(const Model::GetFolderRequest &request)const;
			void getFolderAsync(const Model::GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFolderOutcomeCallable getFolderCallable(const Model::GetFolderRequest& request) const;
			GetHandshakeOutcome getHandshake(const Model::GetHandshakeRequest &request)const;
			void getHandshakeAsync(const Model::GetHandshakeRequest& request, const GetHandshakeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHandshakeOutcomeCallable getHandshakeCallable(const Model::GetHandshakeRequest& request) const;
			GetPayerForAccountOutcome getPayerForAccount(const Model::GetPayerForAccountRequest &request)const;
			void getPayerForAccountAsync(const Model::GetPayerForAccountRequest& request, const GetPayerForAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPayerForAccountOutcomeCallable getPayerForAccountCallable(const Model::GetPayerForAccountRequest& request) const;
			GetPolicyOutcome getPolicy(const Model::GetPolicyRequest &request)const;
			void getPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPolicyOutcomeCallable getPolicyCallable(const Model::GetPolicyRequest& request) const;
			GetPolicyVersionOutcome getPolicyVersion(const Model::GetPolicyVersionRequest &request)const;
			void getPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPolicyVersionOutcomeCallable getPolicyVersionCallable(const Model::GetPolicyVersionRequest& request) const;
			GetResourceDirectoryOutcome getResourceDirectory(const Model::GetResourceDirectoryRequest &request)const;
			void getResourceDirectoryAsync(const Model::GetResourceDirectoryRequest& request, const GetResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceDirectoryOutcomeCallable getResourceDirectoryCallable(const Model::GetResourceDirectoryRequest& request) const;
			GetResourceGroupOutcome getResourceGroup(const Model::GetResourceGroupRequest &request)const;
			void getResourceGroupAsync(const Model::GetResourceGroupRequest& request, const GetResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceGroupOutcomeCallable getResourceGroupCallable(const Model::GetResourceGroupRequest& request) const;
			GetRoleOutcome getRole(const Model::GetRoleRequest &request)const;
			void getRoleAsync(const Model::GetRoleRequest& request, const GetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRoleOutcomeCallable getRoleCallable(const Model::GetRoleRequest& request) const;
			GetServiceLinkedRoleDeletionStatusOutcome getServiceLinkedRoleDeletionStatus(const Model::GetServiceLinkedRoleDeletionStatusRequest &request)const;
			void getServiceLinkedRoleDeletionStatusAsync(const Model::GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceLinkedRoleDeletionStatusOutcomeCallable getServiceLinkedRoleDeletionStatusCallable(const Model::GetServiceLinkedRoleDeletionStatusRequest& request) const;
			InitResourceDirectoryOutcome initResourceDirectory(const Model::InitResourceDirectoryRequest &request)const;
			void initResourceDirectoryAsync(const Model::InitResourceDirectoryRequest& request, const InitResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitResourceDirectoryOutcomeCallable initResourceDirectoryCallable(const Model::InitResourceDirectoryRequest& request) const;
			InviteAccountToResourceDirectoryOutcome inviteAccountToResourceDirectory(const Model::InviteAccountToResourceDirectoryRequest &request)const;
			void inviteAccountToResourceDirectoryAsync(const Model::InviteAccountToResourceDirectoryRequest& request, const InviteAccountToResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InviteAccountToResourceDirectoryOutcomeCallable inviteAccountToResourceDirectoryCallable(const Model::InviteAccountToResourceDirectoryRequest& request) const;
			ListAccountsOutcome listAccounts(const Model::ListAccountsRequest &request)const;
			void listAccountsAsync(const Model::ListAccountsRequest& request, const ListAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccountsOutcomeCallable listAccountsCallable(const Model::ListAccountsRequest& request) const;
			ListAccountsForParentOutcome listAccountsForParent(const Model::ListAccountsForParentRequest &request)const;
			void listAccountsForParentAsync(const Model::ListAccountsForParentRequest& request, const ListAccountsForParentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccountsForParentOutcomeCallable listAccountsForParentCallable(const Model::ListAccountsForParentRequest& request) const;
			ListAncestorsOutcome listAncestors(const Model::ListAncestorsRequest &request)const;
			void listAncestorsAsync(const Model::ListAncestorsRequest& request, const ListAncestorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAncestorsOutcomeCallable listAncestorsCallable(const Model::ListAncestorsRequest& request) const;
			ListAssociatedTransferSettingOutcome listAssociatedTransferSetting(const Model::ListAssociatedTransferSettingRequest &request)const;
			void listAssociatedTransferSettingAsync(const Model::ListAssociatedTransferSettingRequest& request, const ListAssociatedTransferSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAssociatedTransferSettingOutcomeCallable listAssociatedTransferSettingCallable(const Model::ListAssociatedTransferSettingRequest& request) const;
			ListAutoGroupingRulesOutcome listAutoGroupingRules(const Model::ListAutoGroupingRulesRequest &request)const;
			void listAutoGroupingRulesAsync(const Model::ListAutoGroupingRulesRequest& request, const ListAutoGroupingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAutoGroupingRulesOutcomeCallable listAutoGroupingRulesCallable(const Model::ListAutoGroupingRulesRequest& request) const;
			ListControlPoliciesOutcome listControlPolicies(const Model::ListControlPoliciesRequest &request)const;
			void listControlPoliciesAsync(const Model::ListControlPoliciesRequest& request, const ListControlPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListControlPoliciesOutcomeCallable listControlPoliciesCallable(const Model::ListControlPoliciesRequest& request) const;
			ListControlPolicyAttachmentsForTargetOutcome listControlPolicyAttachmentsForTarget(const Model::ListControlPolicyAttachmentsForTargetRequest &request)const;
			void listControlPolicyAttachmentsForTargetAsync(const Model::ListControlPolicyAttachmentsForTargetRequest& request, const ListControlPolicyAttachmentsForTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListControlPolicyAttachmentsForTargetOutcomeCallable listControlPolicyAttachmentsForTargetCallable(const Model::ListControlPolicyAttachmentsForTargetRequest& request) const;
			ListDelegatedAdministratorsOutcome listDelegatedAdministrators(const Model::ListDelegatedAdministratorsRequest &request)const;
			void listDelegatedAdministratorsAsync(const Model::ListDelegatedAdministratorsRequest& request, const ListDelegatedAdministratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDelegatedAdministratorsOutcomeCallable listDelegatedAdministratorsCallable(const Model::ListDelegatedAdministratorsRequest& request) const;
			ListDelegatedServicesForAccountOutcome listDelegatedServicesForAccount(const Model::ListDelegatedServicesForAccountRequest &request)const;
			void listDelegatedServicesForAccountAsync(const Model::ListDelegatedServicesForAccountRequest& request, const ListDelegatedServicesForAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDelegatedServicesForAccountOutcomeCallable listDelegatedServicesForAccountCallable(const Model::ListDelegatedServicesForAccountRequest& request) const;
			ListFoldersForParentOutcome listFoldersForParent(const Model::ListFoldersForParentRequest &request)const;
			void listFoldersForParentAsync(const Model::ListFoldersForParentRequest& request, const ListFoldersForParentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFoldersForParentOutcomeCallable listFoldersForParentCallable(const Model::ListFoldersForParentRequest& request) const;
			ListHandshakesForAccountOutcome listHandshakesForAccount(const Model::ListHandshakesForAccountRequest &request)const;
			void listHandshakesForAccountAsync(const Model::ListHandshakesForAccountRequest& request, const ListHandshakesForAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHandshakesForAccountOutcomeCallable listHandshakesForAccountCallable(const Model::ListHandshakesForAccountRequest& request) const;
			ListHandshakesForResourceDirectoryOutcome listHandshakesForResourceDirectory(const Model::ListHandshakesForResourceDirectoryRequest &request)const;
			void listHandshakesForResourceDirectoryAsync(const Model::ListHandshakesForResourceDirectoryRequest& request, const ListHandshakesForResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHandshakesForResourceDirectoryOutcomeCallable listHandshakesForResourceDirectoryCallable(const Model::ListHandshakesForResourceDirectoryRequest& request) const;
			ListPoliciesOutcome listPolicies(const Model::ListPoliciesRequest &request)const;
			void listPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPoliciesOutcomeCallable listPoliciesCallable(const Model::ListPoliciesRequest& request) const;
			ListPolicyAttachmentsOutcome listPolicyAttachments(const Model::ListPolicyAttachmentsRequest &request)const;
			void listPolicyAttachmentsAsync(const Model::ListPolicyAttachmentsRequest& request, const ListPolicyAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPolicyAttachmentsOutcomeCallable listPolicyAttachmentsCallable(const Model::ListPolicyAttachmentsRequest& request) const;
			ListPolicyVersionsOutcome listPolicyVersions(const Model::ListPolicyVersionsRequest &request)const;
			void listPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPolicyVersionsOutcomeCallable listPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request) const;
			ListResourceGroupsOutcome listResourceGroups(const Model::ListResourceGroupsRequest &request)const;
			void listResourceGroupsAsync(const Model::ListResourceGroupsRequest& request, const ListResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceGroupsOutcomeCallable listResourceGroupsCallable(const Model::ListResourceGroupsRequest& request) const;
			ListResourcesOutcome listResources(const Model::ListResourcesRequest &request)const;
			void listResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourcesOutcomeCallable listResourcesCallable(const Model::ListResourcesRequest& request) const;
			ListRolesOutcome listRoles(const Model::ListRolesRequest &request)const;
			void listRolesAsync(const Model::ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRolesOutcomeCallable listRolesCallable(const Model::ListRolesRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagValuesOutcome listTagValues(const Model::ListTagValuesRequest &request)const;
			void listTagValuesAsync(const Model::ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagValuesOutcomeCallable listTagValuesCallable(const Model::ListTagValuesRequest& request) const;
			ListTargetAttachmentsForControlPolicyOutcome listTargetAttachmentsForControlPolicy(const Model::ListTargetAttachmentsForControlPolicyRequest &request)const;
			void listTargetAttachmentsForControlPolicyAsync(const Model::ListTargetAttachmentsForControlPolicyRequest& request, const ListTargetAttachmentsForControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTargetAttachmentsForControlPolicyOutcomeCallable listTargetAttachmentsForControlPolicyCallable(const Model::ListTargetAttachmentsForControlPolicyRequest& request) const;
			ListTrustedServiceStatusOutcome listTrustedServiceStatus(const Model::ListTrustedServiceStatusRequest &request)const;
			void listTrustedServiceStatusAsync(const Model::ListTrustedServiceStatusRequest& request, const ListTrustedServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTrustedServiceStatusOutcomeCallable listTrustedServiceStatusCallable(const Model::ListTrustedServiceStatusRequest& request) const;
			MoveAccountOutcome moveAccount(const Model::MoveAccountRequest &request)const;
			void moveAccountAsync(const Model::MoveAccountRequest& request, const MoveAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveAccountOutcomeCallable moveAccountCallable(const Model::MoveAccountRequest& request) const;
			MoveResourcesOutcome moveResources(const Model::MoveResourcesRequest &request)const;
			void moveResourcesAsync(const Model::MoveResourcesRequest& request, const MoveResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourcesOutcomeCallable moveResourcesCallable(const Model::MoveResourcesRequest& request) const;
			PromoteResourceAccountOutcome promoteResourceAccount(const Model::PromoteResourceAccountRequest &request)const;
			void promoteResourceAccountAsync(const Model::PromoteResourceAccountRequest& request, const PromoteResourceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PromoteResourceAccountOutcomeCallable promoteResourceAccountCallable(const Model::PromoteResourceAccountRequest& request) const;
			RegisterDelegatedAdministratorOutcome registerDelegatedAdministrator(const Model::RegisterDelegatedAdministratorRequest &request)const;
			void registerDelegatedAdministratorAsync(const Model::RegisterDelegatedAdministratorRequest& request, const RegisterDelegatedAdministratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDelegatedAdministratorOutcomeCallable registerDelegatedAdministratorCallable(const Model::RegisterDelegatedAdministratorRequest& request) const;
			RemoveCloudAccountOutcome removeCloudAccount(const Model::RemoveCloudAccountRequest &request)const;
			void removeCloudAccountAsync(const Model::RemoveCloudAccountRequest& request, const RemoveCloudAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveCloudAccountOutcomeCallable removeCloudAccountCallable(const Model::RemoveCloudAccountRequest& request) const;
			ResendCreateCloudAccountEmailOutcome resendCreateCloudAccountEmail(const Model::ResendCreateCloudAccountEmailRequest &request)const;
			void resendCreateCloudAccountEmailAsync(const Model::ResendCreateCloudAccountEmailRequest& request, const ResendCreateCloudAccountEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResendCreateCloudAccountEmailOutcomeCallable resendCreateCloudAccountEmailCallable(const Model::ResendCreateCloudAccountEmailRequest& request) const;
			ResendPromoteResourceAccountEmailOutcome resendPromoteResourceAccountEmail(const Model::ResendPromoteResourceAccountEmailRequest &request)const;
			void resendPromoteResourceAccountEmailAsync(const Model::ResendPromoteResourceAccountEmailRequest& request, const ResendPromoteResourceAccountEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResendPromoteResourceAccountEmailOutcomeCallable resendPromoteResourceAccountEmailCallable(const Model::ResendPromoteResourceAccountEmailRequest& request) const;
			RetryChangeAccountEmailOutcome retryChangeAccountEmail(const Model::RetryChangeAccountEmailRequest &request)const;
			void retryChangeAccountEmailAsync(const Model::RetryChangeAccountEmailRequest& request, const RetryChangeAccountEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryChangeAccountEmailOutcomeCallable retryChangeAccountEmailCallable(const Model::RetryChangeAccountEmailRequest& request) const;
			SendVerificationCodeForBindSecureMobilePhoneOutcome sendVerificationCodeForBindSecureMobilePhone(const Model::SendVerificationCodeForBindSecureMobilePhoneRequest &request)const;
			void sendVerificationCodeForBindSecureMobilePhoneAsync(const Model::SendVerificationCodeForBindSecureMobilePhoneRequest& request, const SendVerificationCodeForBindSecureMobilePhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendVerificationCodeForBindSecureMobilePhoneOutcomeCallable sendVerificationCodeForBindSecureMobilePhoneCallable(const Model::SendVerificationCodeForBindSecureMobilePhoneRequest& request) const;
			SendVerificationCodeForEnableRDOutcome sendVerificationCodeForEnableRD(const Model::SendVerificationCodeForEnableRDRequest &request)const;
			void sendVerificationCodeForEnableRDAsync(const Model::SendVerificationCodeForEnableRDRequest& request, const SendVerificationCodeForEnableRDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendVerificationCodeForEnableRDOutcomeCallable sendVerificationCodeForEnableRDCallable(const Model::SendVerificationCodeForEnableRDRequest& request) const;
			SetDefaultPolicyVersionOutcome setDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest &request)const;
			void setDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDefaultPolicyVersionOutcomeCallable setDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request) const;
			SetMemberDeletionPermissionOutcome setMemberDeletionPermission(const Model::SetMemberDeletionPermissionRequest &request)const;
			void setMemberDeletionPermissionAsync(const Model::SetMemberDeletionPermissionRequest& request, const SetMemberDeletionPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetMemberDeletionPermissionOutcomeCallable setMemberDeletionPermissionCallable(const Model::SetMemberDeletionPermissionRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAccountOutcome updateAccount(const Model::UpdateAccountRequest &request)const;
			void updateAccountAsync(const Model::UpdateAccountRequest& request, const UpdateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAccountOutcomeCallable updateAccountCallable(const Model::UpdateAccountRequest& request) const;
			UpdateAssociatedTransferSettingOutcome updateAssociatedTransferSetting(const Model::UpdateAssociatedTransferSettingRequest &request)const;
			void updateAssociatedTransferSettingAsync(const Model::UpdateAssociatedTransferSettingRequest& request, const UpdateAssociatedTransferSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAssociatedTransferSettingOutcomeCallable updateAssociatedTransferSettingCallable(const Model::UpdateAssociatedTransferSettingRequest& request) const;
			UpdateAutoGroupingConfigOutcome updateAutoGroupingConfig(const Model::UpdateAutoGroupingConfigRequest &request)const;
			void updateAutoGroupingConfigAsync(const Model::UpdateAutoGroupingConfigRequest& request, const UpdateAutoGroupingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAutoGroupingConfigOutcomeCallable updateAutoGroupingConfigCallable(const Model::UpdateAutoGroupingConfigRequest& request) const;
			UpdateAutoGroupingRuleOutcome updateAutoGroupingRule(const Model::UpdateAutoGroupingRuleRequest &request)const;
			void updateAutoGroupingRuleAsync(const Model::UpdateAutoGroupingRuleRequest& request, const UpdateAutoGroupingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAutoGroupingRuleOutcomeCallable updateAutoGroupingRuleCallable(const Model::UpdateAutoGroupingRuleRequest& request) const;
			UpdateControlPolicyOutcome updateControlPolicy(const Model::UpdateControlPolicyRequest &request)const;
			void updateControlPolicyAsync(const Model::UpdateControlPolicyRequest& request, const UpdateControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateControlPolicyOutcomeCallable updateControlPolicyCallable(const Model::UpdateControlPolicyRequest& request) const;
			UpdateFolderOutcome updateFolder(const Model::UpdateFolderRequest &request)const;
			void updateFolderAsync(const Model::UpdateFolderRequest& request, const UpdateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFolderOutcomeCallable updateFolderCallable(const Model::UpdateFolderRequest& request) const;
			UpdateResourceGroupOutcome updateResourceGroup(const Model::UpdateResourceGroupRequest &request)const;
			void updateResourceGroupAsync(const Model::UpdateResourceGroupRequest& request, const UpdateResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateResourceGroupOutcomeCallable updateResourceGroupCallable(const Model::UpdateResourceGroupRequest& request) const;
			UpdateRoleOutcome updateRole(const Model::UpdateRoleRequest &request)const;
			void updateRoleAsync(const Model::UpdateRoleRequest& request, const UpdateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRoleOutcomeCallable updateRoleCallable(const Model::UpdateRoleRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RESOURCEMANAGER_RESOURCEMANAGERCLIENT_H_
