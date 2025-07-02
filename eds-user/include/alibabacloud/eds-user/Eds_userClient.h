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

#ifndef ALIBABACLOUD_EDS_USER_EDS_USERCLIENT_H_
#define ALIBABACLOUD_EDS_USER_EDS_USERCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Eds_userExport.h"
#include "model/BatchSetDesktopManagerRequest.h"
#include "model/BatchSetDesktopManagerResult.h"
#include "model/ChangeUserPasswordRequest.h"
#include "model/ChangeUserPasswordResult.h"
#include "model/CheckUsedPropertyRequest.h"
#include "model/CheckUsedPropertyResult.h"
#include "model/CheckUsedPropertyValueRequest.h"
#include "model/CheckUsedPropertyValueResult.h"
#include "model/CreateGroupRequest.h"
#include "model/CreateGroupResult.h"
#include "model/CreateOrgRequest.h"
#include "model/CreateOrgResult.h"
#include "model/CreatePropertyRequest.h"
#include "model/CreatePropertyResult.h"
#include "model/CreateResourceGroupRequest.h"
#include "model/CreateResourceGroupResult.h"
#include "model/CreateUsersRequest.h"
#include "model/CreateUsersResult.h"
#include "model/DeleteResourceGroupRequest.h"
#include "model/DeleteResourceGroupResult.h"
#include "model/DeleteUserPropertyValueRequest.h"
#include "model/DeleteUserPropertyValueResult.h"
#include "model/DescribeGroupUserRequest.h"
#include "model/DescribeGroupUserResult.h"
#include "model/DescribeGroupsRequest.h"
#include "model/DescribeGroupsResult.h"
#include "model/DescribeMfaDevicesRequest.h"
#include "model/DescribeMfaDevicesResult.h"
#include "model/DescribeOrgByLayerRequest.h"
#include "model/DescribeOrgByLayerResult.h"
#include "model/DescribeOrgsRequest.h"
#include "model/DescribeOrgsResult.h"
#include "model/DescribeResourceGroupsRequest.h"
#include "model/DescribeResourceGroupsResult.h"
#include "model/DescribeUsersRequest.h"
#include "model/DescribeUsersResult.h"
#include "model/FilterUsersRequest.h"
#include "model/FilterUsersResult.h"
#include "model/GetManagerInfoByAuthCodeRequest.h"
#include "model/GetManagerInfoByAuthCodeResult.h"
#include "model/InitTenantAliasRequest.h"
#include "model/InitTenantAliasResult.h"
#include "model/ListPropertyRequest.h"
#include "model/ListPropertyResult.h"
#include "model/ListPropertyValueRequest.h"
#include "model/ListPropertyValueResult.h"
#include "model/LockMfaDeviceRequest.h"
#include "model/LockMfaDeviceResult.h"
#include "model/LockUsersRequest.h"
#include "model/LockUsersResult.h"
#include "model/ModifyGroupRequest.h"
#include "model/ModifyGroupResult.h"
#include "model/ModifyOrgRequest.h"
#include "model/ModifyOrgResult.h"
#include "model/ModifyUserRequest.h"
#include "model/ModifyUserResult.h"
#include "model/MoveOrgRequest.h"
#include "model/MoveOrgResult.h"
#include "model/MoveUserOrgRequest.h"
#include "model/MoveUserOrgResult.h"
#include "model/QuerySyncStatusByAliUidRequest.h"
#include "model/QuerySyncStatusByAliUidResult.h"
#include "model/RemoveGroupRequest.h"
#include "model/RemoveGroupResult.h"
#include "model/RemoveMfaDeviceRequest.h"
#include "model/RemoveMfaDeviceResult.h"
#include "model/RemoveOrgRequest.h"
#include "model/RemoveOrgResult.h"
#include "model/RemovePropertyRequest.h"
#include "model/RemovePropertyResult.h"
#include "model/RemoveUsersRequest.h"
#include "model/RemoveUsersResult.h"
#include "model/ResetUserPasswordRequest.h"
#include "model/ResetUserPasswordResult.h"
#include "model/SetUserPropertyValueRequest.h"
#include "model/SetUserPropertyValueResult.h"
#include "model/SyncAllEduInfoRequest.h"
#include "model/SyncAllEduInfoResult.h"
#include "model/UnlockMfaDeviceRequest.h"
#include "model/UnlockMfaDeviceResult.h"
#include "model/UnlockUsersRequest.h"
#include "model/UnlockUsersResult.h"
#include "model/UpdatePropertyRequest.h"
#include "model/UpdatePropertyResult.h"
#include "model/UserBatchJoinGroupRequest.h"
#include "model/UserBatchJoinGroupResult.h"
#include "model/UserBatchQuitGroupRequest.h"
#include "model/UserBatchQuitGroupResult.h"


namespace AlibabaCloud
{
	namespace Eds_user
	{
		class ALIBABACLOUD_EDS_USER_EXPORT Eds_userClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchSetDesktopManagerResult> BatchSetDesktopManagerOutcome;
			typedef std::future<BatchSetDesktopManagerOutcome> BatchSetDesktopManagerOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::BatchSetDesktopManagerRequest&, const BatchSetDesktopManagerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchSetDesktopManagerAsyncHandler;
			typedef Outcome<Error, Model::ChangeUserPasswordResult> ChangeUserPasswordOutcome;
			typedef std::future<ChangeUserPasswordOutcome> ChangeUserPasswordOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::ChangeUserPasswordRequest&, const ChangeUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeUserPasswordAsyncHandler;
			typedef Outcome<Error, Model::CheckUsedPropertyResult> CheckUsedPropertyOutcome;
			typedef std::future<CheckUsedPropertyOutcome> CheckUsedPropertyOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::CheckUsedPropertyRequest&, const CheckUsedPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckUsedPropertyAsyncHandler;
			typedef Outcome<Error, Model::CheckUsedPropertyValueResult> CheckUsedPropertyValueOutcome;
			typedef std::future<CheckUsedPropertyValueOutcome> CheckUsedPropertyValueOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::CheckUsedPropertyValueRequest&, const CheckUsedPropertyValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckUsedPropertyValueAsyncHandler;
			typedef Outcome<Error, Model::CreateGroupResult> CreateGroupOutcome;
			typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::CreateGroupRequest&, const CreateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateOrgResult> CreateOrgOutcome;
			typedef std::future<CreateOrgOutcome> CreateOrgOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::CreateOrgRequest&, const CreateOrgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrgAsyncHandler;
			typedef Outcome<Error, Model::CreatePropertyResult> CreatePropertyOutcome;
			typedef std::future<CreatePropertyOutcome> CreatePropertyOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::CreatePropertyRequest&, const CreatePropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePropertyAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceGroupResult> CreateResourceGroupOutcome;
			typedef std::future<CreateResourceGroupOutcome> CreateResourceGroupOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::CreateResourceGroupRequest&, const CreateResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateUsersResult> CreateUsersOutcome;
			typedef std::future<CreateUsersOutcome> CreateUsersOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::CreateUsersRequest&, const CreateUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUsersAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceGroupResult> DeleteResourceGroupOutcome;
			typedef std::future<DeleteResourceGroupOutcome> DeleteResourceGroupOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::DeleteResourceGroupRequest&, const DeleteResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserPropertyValueResult> DeleteUserPropertyValueOutcome;
			typedef std::future<DeleteUserPropertyValueOutcome> DeleteUserPropertyValueOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::DeleteUserPropertyValueRequest&, const DeleteUserPropertyValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserPropertyValueAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupUserResult> DescribeGroupUserOutcome;
			typedef std::future<DescribeGroupUserOutcome> DescribeGroupUserOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::DescribeGroupUserRequest&, const DescribeGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupUserAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupsResult> DescribeGroupsOutcome;
			typedef std::future<DescribeGroupsOutcome> DescribeGroupsOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::DescribeGroupsRequest&, const DescribeGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMfaDevicesResult> DescribeMfaDevicesOutcome;
			typedef std::future<DescribeMfaDevicesOutcome> DescribeMfaDevicesOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::DescribeMfaDevicesRequest&, const DescribeMfaDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMfaDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrgByLayerResult> DescribeOrgByLayerOutcome;
			typedef std::future<DescribeOrgByLayerOutcome> DescribeOrgByLayerOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::DescribeOrgByLayerRequest&, const DescribeOrgByLayerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrgByLayerAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrgsResult> DescribeOrgsOutcome;
			typedef std::future<DescribeOrgsOutcome> DescribeOrgsOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::DescribeOrgsRequest&, const DescribeOrgsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrgsAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceGroupsResult> DescribeResourceGroupsOutcome;
			typedef std::future<DescribeResourceGroupsOutcome> DescribeResourceGroupsOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::DescribeResourceGroupsRequest&, const DescribeResourceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUsersResult> DescribeUsersOutcome;
			typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::DescribeUsersRequest&, const DescribeUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
			typedef Outcome<Error, Model::FilterUsersResult> FilterUsersOutcome;
			typedef std::future<FilterUsersOutcome> FilterUsersOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::FilterUsersRequest&, const FilterUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FilterUsersAsyncHandler;
			typedef Outcome<Error, Model::GetManagerInfoByAuthCodeResult> GetManagerInfoByAuthCodeOutcome;
			typedef std::future<GetManagerInfoByAuthCodeOutcome> GetManagerInfoByAuthCodeOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::GetManagerInfoByAuthCodeRequest&, const GetManagerInfoByAuthCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetManagerInfoByAuthCodeAsyncHandler;
			typedef Outcome<Error, Model::InitTenantAliasResult> InitTenantAliasOutcome;
			typedef std::future<InitTenantAliasOutcome> InitTenantAliasOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::InitTenantAliasRequest&, const InitTenantAliasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitTenantAliasAsyncHandler;
			typedef Outcome<Error, Model::ListPropertyResult> ListPropertyOutcome;
			typedef std::future<ListPropertyOutcome> ListPropertyOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::ListPropertyRequest&, const ListPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPropertyAsyncHandler;
			typedef Outcome<Error, Model::ListPropertyValueResult> ListPropertyValueOutcome;
			typedef std::future<ListPropertyValueOutcome> ListPropertyValueOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::ListPropertyValueRequest&, const ListPropertyValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPropertyValueAsyncHandler;
			typedef Outcome<Error, Model::LockMfaDeviceResult> LockMfaDeviceOutcome;
			typedef std::future<LockMfaDeviceOutcome> LockMfaDeviceOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::LockMfaDeviceRequest&, const LockMfaDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LockMfaDeviceAsyncHandler;
			typedef Outcome<Error, Model::LockUsersResult> LockUsersOutcome;
			typedef std::future<LockUsersOutcome> LockUsersOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::LockUsersRequest&, const LockUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LockUsersAsyncHandler;
			typedef Outcome<Error, Model::ModifyGroupResult> ModifyGroupOutcome;
			typedef std::future<ModifyGroupOutcome> ModifyGroupOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::ModifyGroupRequest&, const ModifyGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyOrgResult> ModifyOrgOutcome;
			typedef std::future<ModifyOrgOutcome> ModifyOrgOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::ModifyOrgRequest&, const ModifyOrgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOrgAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserResult> ModifyUserOutcome;
			typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::ModifyUserRequest&, const ModifyUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
			typedef Outcome<Error, Model::MoveOrgResult> MoveOrgOutcome;
			typedef std::future<MoveOrgOutcome> MoveOrgOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::MoveOrgRequest&, const MoveOrgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveOrgAsyncHandler;
			typedef Outcome<Error, Model::MoveUserOrgResult> MoveUserOrgOutcome;
			typedef std::future<MoveUserOrgOutcome> MoveUserOrgOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::MoveUserOrgRequest&, const MoveUserOrgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveUserOrgAsyncHandler;
			typedef Outcome<Error, Model::QuerySyncStatusByAliUidResult> QuerySyncStatusByAliUidOutcome;
			typedef std::future<QuerySyncStatusByAliUidOutcome> QuerySyncStatusByAliUidOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::QuerySyncStatusByAliUidRequest&, const QuerySyncStatusByAliUidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySyncStatusByAliUidAsyncHandler;
			typedef Outcome<Error, Model::RemoveGroupResult> RemoveGroupOutcome;
			typedef std::future<RemoveGroupOutcome> RemoveGroupOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::RemoveGroupRequest&, const RemoveGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveMfaDeviceResult> RemoveMfaDeviceOutcome;
			typedef std::future<RemoveMfaDeviceOutcome> RemoveMfaDeviceOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::RemoveMfaDeviceRequest&, const RemoveMfaDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMfaDeviceAsyncHandler;
			typedef Outcome<Error, Model::RemoveOrgResult> RemoveOrgOutcome;
			typedef std::future<RemoveOrgOutcome> RemoveOrgOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::RemoveOrgRequest&, const RemoveOrgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveOrgAsyncHandler;
			typedef Outcome<Error, Model::RemovePropertyResult> RemovePropertyOutcome;
			typedef std::future<RemovePropertyOutcome> RemovePropertyOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::RemovePropertyRequest&, const RemovePropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemovePropertyAsyncHandler;
			typedef Outcome<Error, Model::RemoveUsersResult> RemoveUsersOutcome;
			typedef std::future<RemoveUsersOutcome> RemoveUsersOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::RemoveUsersRequest&, const RemoveUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUsersAsyncHandler;
			typedef Outcome<Error, Model::ResetUserPasswordResult> ResetUserPasswordOutcome;
			typedef std::future<ResetUserPasswordOutcome> ResetUserPasswordOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::ResetUserPasswordRequest&, const ResetUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetUserPasswordAsyncHandler;
			typedef Outcome<Error, Model::SetUserPropertyValueResult> SetUserPropertyValueOutcome;
			typedef std::future<SetUserPropertyValueOutcome> SetUserPropertyValueOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::SetUserPropertyValueRequest&, const SetUserPropertyValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetUserPropertyValueAsyncHandler;
			typedef Outcome<Error, Model::SyncAllEduInfoResult> SyncAllEduInfoOutcome;
			typedef std::future<SyncAllEduInfoOutcome> SyncAllEduInfoOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::SyncAllEduInfoRequest&, const SyncAllEduInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncAllEduInfoAsyncHandler;
			typedef Outcome<Error, Model::UnlockMfaDeviceResult> UnlockMfaDeviceOutcome;
			typedef std::future<UnlockMfaDeviceOutcome> UnlockMfaDeviceOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::UnlockMfaDeviceRequest&, const UnlockMfaDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockMfaDeviceAsyncHandler;
			typedef Outcome<Error, Model::UnlockUsersResult> UnlockUsersOutcome;
			typedef std::future<UnlockUsersOutcome> UnlockUsersOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::UnlockUsersRequest&, const UnlockUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockUsersAsyncHandler;
			typedef Outcome<Error, Model::UpdatePropertyResult> UpdatePropertyOutcome;
			typedef std::future<UpdatePropertyOutcome> UpdatePropertyOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::UpdatePropertyRequest&, const UpdatePropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePropertyAsyncHandler;
			typedef Outcome<Error, Model::UserBatchJoinGroupResult> UserBatchJoinGroupOutcome;
			typedef std::future<UserBatchJoinGroupOutcome> UserBatchJoinGroupOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::UserBatchJoinGroupRequest&, const UserBatchJoinGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UserBatchJoinGroupAsyncHandler;
			typedef Outcome<Error, Model::UserBatchQuitGroupResult> UserBatchQuitGroupOutcome;
			typedef std::future<UserBatchQuitGroupOutcome> UserBatchQuitGroupOutcomeCallable;
			typedef std::function<void(const Eds_userClient*, const Model::UserBatchQuitGroupRequest&, const UserBatchQuitGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UserBatchQuitGroupAsyncHandler;

			Eds_userClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Eds_userClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Eds_userClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Eds_userClient();
			BatchSetDesktopManagerOutcome batchSetDesktopManager(const Model::BatchSetDesktopManagerRequest &request)const;
			void batchSetDesktopManagerAsync(const Model::BatchSetDesktopManagerRequest& request, const BatchSetDesktopManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchSetDesktopManagerOutcomeCallable batchSetDesktopManagerCallable(const Model::BatchSetDesktopManagerRequest& request) const;
			ChangeUserPasswordOutcome changeUserPassword(const Model::ChangeUserPasswordRequest &request)const;
			void changeUserPasswordAsync(const Model::ChangeUserPasswordRequest& request, const ChangeUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeUserPasswordOutcomeCallable changeUserPasswordCallable(const Model::ChangeUserPasswordRequest& request) const;
			CheckUsedPropertyOutcome checkUsedProperty(const Model::CheckUsedPropertyRequest &request)const;
			void checkUsedPropertyAsync(const Model::CheckUsedPropertyRequest& request, const CheckUsedPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckUsedPropertyOutcomeCallable checkUsedPropertyCallable(const Model::CheckUsedPropertyRequest& request) const;
			CheckUsedPropertyValueOutcome checkUsedPropertyValue(const Model::CheckUsedPropertyValueRequest &request)const;
			void checkUsedPropertyValueAsync(const Model::CheckUsedPropertyValueRequest& request, const CheckUsedPropertyValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckUsedPropertyValueOutcomeCallable checkUsedPropertyValueCallable(const Model::CheckUsedPropertyValueRequest& request) const;
			CreateGroupOutcome createGroup(const Model::CreateGroupRequest &request)const;
			void createGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGroupOutcomeCallable createGroupCallable(const Model::CreateGroupRequest& request) const;
			CreateOrgOutcome createOrg(const Model::CreateOrgRequest &request)const;
			void createOrgAsync(const Model::CreateOrgRequest& request, const CreateOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrgOutcomeCallable createOrgCallable(const Model::CreateOrgRequest& request) const;
			CreatePropertyOutcome createProperty(const Model::CreatePropertyRequest &request)const;
			void createPropertyAsync(const Model::CreatePropertyRequest& request, const CreatePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePropertyOutcomeCallable createPropertyCallable(const Model::CreatePropertyRequest& request) const;
			CreateResourceGroupOutcome createResourceGroup(const Model::CreateResourceGroupRequest &request)const;
			void createResourceGroupAsync(const Model::CreateResourceGroupRequest& request, const CreateResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceGroupOutcomeCallable createResourceGroupCallable(const Model::CreateResourceGroupRequest& request) const;
			CreateUsersOutcome createUsers(const Model::CreateUsersRequest &request)const;
			void createUsersAsync(const Model::CreateUsersRequest& request, const CreateUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUsersOutcomeCallable createUsersCallable(const Model::CreateUsersRequest& request) const;
			DeleteResourceGroupOutcome deleteResourceGroup(const Model::DeleteResourceGroupRequest &request)const;
			void deleteResourceGroupAsync(const Model::DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceGroupOutcomeCallable deleteResourceGroupCallable(const Model::DeleteResourceGroupRequest& request) const;
			DeleteUserPropertyValueOutcome deleteUserPropertyValue(const Model::DeleteUserPropertyValueRequest &request)const;
			void deleteUserPropertyValueAsync(const Model::DeleteUserPropertyValueRequest& request, const DeleteUserPropertyValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserPropertyValueOutcomeCallable deleteUserPropertyValueCallable(const Model::DeleteUserPropertyValueRequest& request) const;
			DescribeGroupUserOutcome describeGroupUser(const Model::DescribeGroupUserRequest &request)const;
			void describeGroupUserAsync(const Model::DescribeGroupUserRequest& request, const DescribeGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupUserOutcomeCallable describeGroupUserCallable(const Model::DescribeGroupUserRequest& request) const;
			DescribeGroupsOutcome describeGroups(const Model::DescribeGroupsRequest &request)const;
			void describeGroupsAsync(const Model::DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupsOutcomeCallable describeGroupsCallable(const Model::DescribeGroupsRequest& request) const;
			DescribeMfaDevicesOutcome describeMfaDevices(const Model::DescribeMfaDevicesRequest &request)const;
			void describeMfaDevicesAsync(const Model::DescribeMfaDevicesRequest& request, const DescribeMfaDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMfaDevicesOutcomeCallable describeMfaDevicesCallable(const Model::DescribeMfaDevicesRequest& request) const;
			DescribeOrgByLayerOutcome describeOrgByLayer(const Model::DescribeOrgByLayerRequest &request)const;
			void describeOrgByLayerAsync(const Model::DescribeOrgByLayerRequest& request, const DescribeOrgByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrgByLayerOutcomeCallable describeOrgByLayerCallable(const Model::DescribeOrgByLayerRequest& request) const;
			DescribeOrgsOutcome describeOrgs(const Model::DescribeOrgsRequest &request)const;
			void describeOrgsAsync(const Model::DescribeOrgsRequest& request, const DescribeOrgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrgsOutcomeCallable describeOrgsCallable(const Model::DescribeOrgsRequest& request) const;
			DescribeResourceGroupsOutcome describeResourceGroups(const Model::DescribeResourceGroupsRequest &request)const;
			void describeResourceGroupsAsync(const Model::DescribeResourceGroupsRequest& request, const DescribeResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceGroupsOutcomeCallable describeResourceGroupsCallable(const Model::DescribeResourceGroupsRequest& request) const;
			DescribeUsersOutcome describeUsers(const Model::DescribeUsersRequest &request)const;
			void describeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUsersOutcomeCallable describeUsersCallable(const Model::DescribeUsersRequest& request) const;
			FilterUsersOutcome filterUsers(const Model::FilterUsersRequest &request)const;
			void filterUsersAsync(const Model::FilterUsersRequest& request, const FilterUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FilterUsersOutcomeCallable filterUsersCallable(const Model::FilterUsersRequest& request) const;
			GetManagerInfoByAuthCodeOutcome getManagerInfoByAuthCode(const Model::GetManagerInfoByAuthCodeRequest &request)const;
			void getManagerInfoByAuthCodeAsync(const Model::GetManagerInfoByAuthCodeRequest& request, const GetManagerInfoByAuthCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetManagerInfoByAuthCodeOutcomeCallable getManagerInfoByAuthCodeCallable(const Model::GetManagerInfoByAuthCodeRequest& request) const;
			InitTenantAliasOutcome initTenantAlias(const Model::InitTenantAliasRequest &request)const;
			void initTenantAliasAsync(const Model::InitTenantAliasRequest& request, const InitTenantAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitTenantAliasOutcomeCallable initTenantAliasCallable(const Model::InitTenantAliasRequest& request) const;
			ListPropertyOutcome listProperty(const Model::ListPropertyRequest &request)const;
			void listPropertyAsync(const Model::ListPropertyRequest& request, const ListPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPropertyOutcomeCallable listPropertyCallable(const Model::ListPropertyRequest& request) const;
			ListPropertyValueOutcome listPropertyValue(const Model::ListPropertyValueRequest &request)const;
			void listPropertyValueAsync(const Model::ListPropertyValueRequest& request, const ListPropertyValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPropertyValueOutcomeCallable listPropertyValueCallable(const Model::ListPropertyValueRequest& request) const;
			LockMfaDeviceOutcome lockMfaDevice(const Model::LockMfaDeviceRequest &request)const;
			void lockMfaDeviceAsync(const Model::LockMfaDeviceRequest& request, const LockMfaDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LockMfaDeviceOutcomeCallable lockMfaDeviceCallable(const Model::LockMfaDeviceRequest& request) const;
			LockUsersOutcome lockUsers(const Model::LockUsersRequest &request)const;
			void lockUsersAsync(const Model::LockUsersRequest& request, const LockUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LockUsersOutcomeCallable lockUsersCallable(const Model::LockUsersRequest& request) const;
			ModifyGroupOutcome modifyGroup(const Model::ModifyGroupRequest &request)const;
			void modifyGroupAsync(const Model::ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGroupOutcomeCallable modifyGroupCallable(const Model::ModifyGroupRequest& request) const;
			ModifyOrgOutcome modifyOrg(const Model::ModifyOrgRequest &request)const;
			void modifyOrgAsync(const Model::ModifyOrgRequest& request, const ModifyOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOrgOutcomeCallable modifyOrgCallable(const Model::ModifyOrgRequest& request) const;
			ModifyUserOutcome modifyUser(const Model::ModifyUserRequest &request)const;
			void modifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserOutcomeCallable modifyUserCallable(const Model::ModifyUserRequest& request) const;
			MoveOrgOutcome moveOrg(const Model::MoveOrgRequest &request)const;
			void moveOrgAsync(const Model::MoveOrgRequest& request, const MoveOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveOrgOutcomeCallable moveOrgCallable(const Model::MoveOrgRequest& request) const;
			MoveUserOrgOutcome moveUserOrg(const Model::MoveUserOrgRequest &request)const;
			void moveUserOrgAsync(const Model::MoveUserOrgRequest& request, const MoveUserOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveUserOrgOutcomeCallable moveUserOrgCallable(const Model::MoveUserOrgRequest& request) const;
			QuerySyncStatusByAliUidOutcome querySyncStatusByAliUid(const Model::QuerySyncStatusByAliUidRequest &request)const;
			void querySyncStatusByAliUidAsync(const Model::QuerySyncStatusByAliUidRequest& request, const QuerySyncStatusByAliUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySyncStatusByAliUidOutcomeCallable querySyncStatusByAliUidCallable(const Model::QuerySyncStatusByAliUidRequest& request) const;
			RemoveGroupOutcome removeGroup(const Model::RemoveGroupRequest &request)const;
			void removeGroupAsync(const Model::RemoveGroupRequest& request, const RemoveGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveGroupOutcomeCallable removeGroupCallable(const Model::RemoveGroupRequest& request) const;
			RemoveMfaDeviceOutcome removeMfaDevice(const Model::RemoveMfaDeviceRequest &request)const;
			void removeMfaDeviceAsync(const Model::RemoveMfaDeviceRequest& request, const RemoveMfaDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveMfaDeviceOutcomeCallable removeMfaDeviceCallable(const Model::RemoveMfaDeviceRequest& request) const;
			RemoveOrgOutcome removeOrg(const Model::RemoveOrgRequest &request)const;
			void removeOrgAsync(const Model::RemoveOrgRequest& request, const RemoveOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveOrgOutcomeCallable removeOrgCallable(const Model::RemoveOrgRequest& request) const;
			RemovePropertyOutcome removeProperty(const Model::RemovePropertyRequest &request)const;
			void removePropertyAsync(const Model::RemovePropertyRequest& request, const RemovePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemovePropertyOutcomeCallable removePropertyCallable(const Model::RemovePropertyRequest& request) const;
			RemoveUsersOutcome removeUsers(const Model::RemoveUsersRequest &request)const;
			void removeUsersAsync(const Model::RemoveUsersRequest& request, const RemoveUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUsersOutcomeCallable removeUsersCallable(const Model::RemoveUsersRequest& request) const;
			ResetUserPasswordOutcome resetUserPassword(const Model::ResetUserPasswordRequest &request)const;
			void resetUserPasswordAsync(const Model::ResetUserPasswordRequest& request, const ResetUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetUserPasswordOutcomeCallable resetUserPasswordCallable(const Model::ResetUserPasswordRequest& request) const;
			SetUserPropertyValueOutcome setUserPropertyValue(const Model::SetUserPropertyValueRequest &request)const;
			void setUserPropertyValueAsync(const Model::SetUserPropertyValueRequest& request, const SetUserPropertyValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetUserPropertyValueOutcomeCallable setUserPropertyValueCallable(const Model::SetUserPropertyValueRequest& request) const;
			SyncAllEduInfoOutcome syncAllEduInfo(const Model::SyncAllEduInfoRequest &request)const;
			void syncAllEduInfoAsync(const Model::SyncAllEduInfoRequest& request, const SyncAllEduInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncAllEduInfoOutcomeCallable syncAllEduInfoCallable(const Model::SyncAllEduInfoRequest& request) const;
			UnlockMfaDeviceOutcome unlockMfaDevice(const Model::UnlockMfaDeviceRequest &request)const;
			void unlockMfaDeviceAsync(const Model::UnlockMfaDeviceRequest& request, const UnlockMfaDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockMfaDeviceOutcomeCallable unlockMfaDeviceCallable(const Model::UnlockMfaDeviceRequest& request) const;
			UnlockUsersOutcome unlockUsers(const Model::UnlockUsersRequest &request)const;
			void unlockUsersAsync(const Model::UnlockUsersRequest& request, const UnlockUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockUsersOutcomeCallable unlockUsersCallable(const Model::UnlockUsersRequest& request) const;
			UpdatePropertyOutcome updateProperty(const Model::UpdatePropertyRequest &request)const;
			void updatePropertyAsync(const Model::UpdatePropertyRequest& request, const UpdatePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePropertyOutcomeCallable updatePropertyCallable(const Model::UpdatePropertyRequest& request) const;
			UserBatchJoinGroupOutcome userBatchJoinGroup(const Model::UserBatchJoinGroupRequest &request)const;
			void userBatchJoinGroupAsync(const Model::UserBatchJoinGroupRequest& request, const UserBatchJoinGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UserBatchJoinGroupOutcomeCallable userBatchJoinGroupCallable(const Model::UserBatchJoinGroupRequest& request) const;
			UserBatchQuitGroupOutcome userBatchQuitGroup(const Model::UserBatchQuitGroupRequest &request)const;
			void userBatchQuitGroupAsync(const Model::UserBatchQuitGroupRequest& request, const UserBatchQuitGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UserBatchQuitGroupOutcomeCallable userBatchQuitGroupCallable(const Model::UserBatchQuitGroupRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EDS_USER_EDS_USERCLIENT_H_
