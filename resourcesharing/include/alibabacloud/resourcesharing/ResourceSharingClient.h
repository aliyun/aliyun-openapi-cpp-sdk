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

#ifndef ALIBABACLOUD_RESOURCESHARING_RESOURCESHARINGCLIENT_H_
#define ALIBABACLOUD_RESOURCESHARING_RESOURCESHARINGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ResourceSharingExport.h"
#include "model/AcceptResourceShareInvitationRequest.h"
#include "model/AcceptResourceShareInvitationResult.h"
#include "model/AssociateResourceShareRequest.h"
#include "model/AssociateResourceShareResult.h"
#include "model/AssociateResourceSharePermissionRequest.h"
#include "model/AssociateResourceSharePermissionResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CheckSharingWithResourceDirectoryStatusRequest.h"
#include "model/CheckSharingWithResourceDirectoryStatusResult.h"
#include "model/CreateResourceShareRequest.h"
#include "model/CreateResourceShareResult.h"
#include "model/DeleteResourceShareRequest.h"
#include "model/DeleteResourceShareResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DisassociateResourceShareRequest.h"
#include "model/DisassociateResourceShareResult.h"
#include "model/DisassociateResourceSharePermissionRequest.h"
#include "model/DisassociateResourceSharePermissionResult.h"
#include "model/EnableSharingWithResourceDirectoryRequest.h"
#include "model/EnableSharingWithResourceDirectoryResult.h"
#include "model/GetPermissionRequest.h"
#include "model/GetPermissionResult.h"
#include "model/ListPermissionVersionsRequest.h"
#include "model/ListPermissionVersionsResult.h"
#include "model/ListPermissionsRequest.h"
#include "model/ListPermissionsResult.h"
#include "model/ListResourceShareAssociationsRequest.h"
#include "model/ListResourceShareAssociationsResult.h"
#include "model/ListResourceShareInvitationsRequest.h"
#include "model/ListResourceShareInvitationsResult.h"
#include "model/ListResourceSharePermissionsRequest.h"
#include "model/ListResourceSharePermissionsResult.h"
#include "model/ListResourceSharesRequest.h"
#include "model/ListResourceSharesResult.h"
#include "model/ListSharedResourcesRequest.h"
#include "model/ListSharedResourcesResult.h"
#include "model/ListSharedTargetsRequest.h"
#include "model/ListSharedTargetsResult.h"
#include "model/RejectResourceShareInvitationRequest.h"
#include "model/RejectResourceShareInvitationResult.h"
#include "model/UpdateResourceShareRequest.h"
#include "model/UpdateResourceShareResult.h"


namespace AlibabaCloud
{
	namespace ResourceSharing
	{
		class ALIBABACLOUD_RESOURCESHARING_EXPORT ResourceSharingClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AcceptResourceShareInvitationResult> AcceptResourceShareInvitationOutcome;
			typedef std::future<AcceptResourceShareInvitationOutcome> AcceptResourceShareInvitationOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::AcceptResourceShareInvitationRequest&, const AcceptResourceShareInvitationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptResourceShareInvitationAsyncHandler;
			typedef Outcome<Error, Model::AssociateResourceShareResult> AssociateResourceShareOutcome;
			typedef std::future<AssociateResourceShareOutcome> AssociateResourceShareOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::AssociateResourceShareRequest&, const AssociateResourceShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateResourceShareAsyncHandler;
			typedef Outcome<Error, Model::AssociateResourceSharePermissionResult> AssociateResourceSharePermissionOutcome;
			typedef std::future<AssociateResourceSharePermissionOutcome> AssociateResourceSharePermissionOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::AssociateResourceSharePermissionRequest&, const AssociateResourceSharePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateResourceSharePermissionAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CheckSharingWithResourceDirectoryStatusResult> CheckSharingWithResourceDirectoryStatusOutcome;
			typedef std::future<CheckSharingWithResourceDirectoryStatusOutcome> CheckSharingWithResourceDirectoryStatusOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::CheckSharingWithResourceDirectoryStatusRequest&, const CheckSharingWithResourceDirectoryStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckSharingWithResourceDirectoryStatusAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceShareResult> CreateResourceShareOutcome;
			typedef std::future<CreateResourceShareOutcome> CreateResourceShareOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::CreateResourceShareRequest&, const CreateResourceShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceShareAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceShareResult> DeleteResourceShareOutcome;
			typedef std::future<DeleteResourceShareOutcome> DeleteResourceShareOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::DeleteResourceShareRequest&, const DeleteResourceShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceShareAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DisassociateResourceShareResult> DisassociateResourceShareOutcome;
			typedef std::future<DisassociateResourceShareOutcome> DisassociateResourceShareOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::DisassociateResourceShareRequest&, const DisassociateResourceShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateResourceShareAsyncHandler;
			typedef Outcome<Error, Model::DisassociateResourceSharePermissionResult> DisassociateResourceSharePermissionOutcome;
			typedef std::future<DisassociateResourceSharePermissionOutcome> DisassociateResourceSharePermissionOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::DisassociateResourceSharePermissionRequest&, const DisassociateResourceSharePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateResourceSharePermissionAsyncHandler;
			typedef Outcome<Error, Model::EnableSharingWithResourceDirectoryResult> EnableSharingWithResourceDirectoryOutcome;
			typedef std::future<EnableSharingWithResourceDirectoryOutcome> EnableSharingWithResourceDirectoryOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::EnableSharingWithResourceDirectoryRequest&, const EnableSharingWithResourceDirectoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSharingWithResourceDirectoryAsyncHandler;
			typedef Outcome<Error, Model::GetPermissionResult> GetPermissionOutcome;
			typedef std::future<GetPermissionOutcome> GetPermissionOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::GetPermissionRequest&, const GetPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPermissionAsyncHandler;
			typedef Outcome<Error, Model::ListPermissionVersionsResult> ListPermissionVersionsOutcome;
			typedef std::future<ListPermissionVersionsOutcome> ListPermissionVersionsOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::ListPermissionVersionsRequest&, const ListPermissionVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPermissionVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListPermissionsResult> ListPermissionsOutcome;
			typedef std::future<ListPermissionsOutcome> ListPermissionsOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::ListPermissionsRequest&, const ListPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPermissionsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceShareAssociationsResult> ListResourceShareAssociationsOutcome;
			typedef std::future<ListResourceShareAssociationsOutcome> ListResourceShareAssociationsOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::ListResourceShareAssociationsRequest&, const ListResourceShareAssociationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceShareAssociationsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceShareInvitationsResult> ListResourceShareInvitationsOutcome;
			typedef std::future<ListResourceShareInvitationsOutcome> ListResourceShareInvitationsOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::ListResourceShareInvitationsRequest&, const ListResourceShareInvitationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceShareInvitationsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceSharePermissionsResult> ListResourceSharePermissionsOutcome;
			typedef std::future<ListResourceSharePermissionsOutcome> ListResourceSharePermissionsOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::ListResourceSharePermissionsRequest&, const ListResourceSharePermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceSharePermissionsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceSharesResult> ListResourceSharesOutcome;
			typedef std::future<ListResourceSharesOutcome> ListResourceSharesOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::ListResourceSharesRequest&, const ListResourceSharesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceSharesAsyncHandler;
			typedef Outcome<Error, Model::ListSharedResourcesResult> ListSharedResourcesOutcome;
			typedef std::future<ListSharedResourcesOutcome> ListSharedResourcesOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::ListSharedResourcesRequest&, const ListSharedResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSharedResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListSharedTargetsResult> ListSharedTargetsOutcome;
			typedef std::future<ListSharedTargetsOutcome> ListSharedTargetsOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::ListSharedTargetsRequest&, const ListSharedTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSharedTargetsAsyncHandler;
			typedef Outcome<Error, Model::RejectResourceShareInvitationResult> RejectResourceShareInvitationOutcome;
			typedef std::future<RejectResourceShareInvitationOutcome> RejectResourceShareInvitationOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::RejectResourceShareInvitationRequest&, const RejectResourceShareInvitationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RejectResourceShareInvitationAsyncHandler;
			typedef Outcome<Error, Model::UpdateResourceShareResult> UpdateResourceShareOutcome;
			typedef std::future<UpdateResourceShareOutcome> UpdateResourceShareOutcomeCallable;
			typedef std::function<void(const ResourceSharingClient*, const Model::UpdateResourceShareRequest&, const UpdateResourceShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceShareAsyncHandler;

			ResourceSharingClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ResourceSharingClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ResourceSharingClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ResourceSharingClient();
			AcceptResourceShareInvitationOutcome acceptResourceShareInvitation(const Model::AcceptResourceShareInvitationRequest &request)const;
			void acceptResourceShareInvitationAsync(const Model::AcceptResourceShareInvitationRequest& request, const AcceptResourceShareInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptResourceShareInvitationOutcomeCallable acceptResourceShareInvitationCallable(const Model::AcceptResourceShareInvitationRequest& request) const;
			AssociateResourceShareOutcome associateResourceShare(const Model::AssociateResourceShareRequest &request)const;
			void associateResourceShareAsync(const Model::AssociateResourceShareRequest& request, const AssociateResourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateResourceShareOutcomeCallable associateResourceShareCallable(const Model::AssociateResourceShareRequest& request) const;
			AssociateResourceSharePermissionOutcome associateResourceSharePermission(const Model::AssociateResourceSharePermissionRequest &request)const;
			void associateResourceSharePermissionAsync(const Model::AssociateResourceSharePermissionRequest& request, const AssociateResourceSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateResourceSharePermissionOutcomeCallable associateResourceSharePermissionCallable(const Model::AssociateResourceSharePermissionRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CheckSharingWithResourceDirectoryStatusOutcome checkSharingWithResourceDirectoryStatus(const Model::CheckSharingWithResourceDirectoryStatusRequest &request)const;
			void checkSharingWithResourceDirectoryStatusAsync(const Model::CheckSharingWithResourceDirectoryStatusRequest& request, const CheckSharingWithResourceDirectoryStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckSharingWithResourceDirectoryStatusOutcomeCallable checkSharingWithResourceDirectoryStatusCallable(const Model::CheckSharingWithResourceDirectoryStatusRequest& request) const;
			CreateResourceShareOutcome createResourceShare(const Model::CreateResourceShareRequest &request)const;
			void createResourceShareAsync(const Model::CreateResourceShareRequest& request, const CreateResourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceShareOutcomeCallable createResourceShareCallable(const Model::CreateResourceShareRequest& request) const;
			DeleteResourceShareOutcome deleteResourceShare(const Model::DeleteResourceShareRequest &request)const;
			void deleteResourceShareAsync(const Model::DeleteResourceShareRequest& request, const DeleteResourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceShareOutcomeCallable deleteResourceShareCallable(const Model::DeleteResourceShareRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DisassociateResourceShareOutcome disassociateResourceShare(const Model::DisassociateResourceShareRequest &request)const;
			void disassociateResourceShareAsync(const Model::DisassociateResourceShareRequest& request, const DisassociateResourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateResourceShareOutcomeCallable disassociateResourceShareCallable(const Model::DisassociateResourceShareRequest& request) const;
			DisassociateResourceSharePermissionOutcome disassociateResourceSharePermission(const Model::DisassociateResourceSharePermissionRequest &request)const;
			void disassociateResourceSharePermissionAsync(const Model::DisassociateResourceSharePermissionRequest& request, const DisassociateResourceSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateResourceSharePermissionOutcomeCallable disassociateResourceSharePermissionCallable(const Model::DisassociateResourceSharePermissionRequest& request) const;
			EnableSharingWithResourceDirectoryOutcome enableSharingWithResourceDirectory(const Model::EnableSharingWithResourceDirectoryRequest &request)const;
			void enableSharingWithResourceDirectoryAsync(const Model::EnableSharingWithResourceDirectoryRequest& request, const EnableSharingWithResourceDirectoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSharingWithResourceDirectoryOutcomeCallable enableSharingWithResourceDirectoryCallable(const Model::EnableSharingWithResourceDirectoryRequest& request) const;
			GetPermissionOutcome getPermission(const Model::GetPermissionRequest &request)const;
			void getPermissionAsync(const Model::GetPermissionRequest& request, const GetPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPermissionOutcomeCallable getPermissionCallable(const Model::GetPermissionRequest& request) const;
			ListPermissionVersionsOutcome listPermissionVersions(const Model::ListPermissionVersionsRequest &request)const;
			void listPermissionVersionsAsync(const Model::ListPermissionVersionsRequest& request, const ListPermissionVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPermissionVersionsOutcomeCallable listPermissionVersionsCallable(const Model::ListPermissionVersionsRequest& request) const;
			ListPermissionsOutcome listPermissions(const Model::ListPermissionsRequest &request)const;
			void listPermissionsAsync(const Model::ListPermissionsRequest& request, const ListPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPermissionsOutcomeCallable listPermissionsCallable(const Model::ListPermissionsRequest& request) const;
			ListResourceShareAssociationsOutcome listResourceShareAssociations(const Model::ListResourceShareAssociationsRequest &request)const;
			void listResourceShareAssociationsAsync(const Model::ListResourceShareAssociationsRequest& request, const ListResourceShareAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceShareAssociationsOutcomeCallable listResourceShareAssociationsCallable(const Model::ListResourceShareAssociationsRequest& request) const;
			ListResourceShareInvitationsOutcome listResourceShareInvitations(const Model::ListResourceShareInvitationsRequest &request)const;
			void listResourceShareInvitationsAsync(const Model::ListResourceShareInvitationsRequest& request, const ListResourceShareInvitationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceShareInvitationsOutcomeCallable listResourceShareInvitationsCallable(const Model::ListResourceShareInvitationsRequest& request) const;
			ListResourceSharePermissionsOutcome listResourceSharePermissions(const Model::ListResourceSharePermissionsRequest &request)const;
			void listResourceSharePermissionsAsync(const Model::ListResourceSharePermissionsRequest& request, const ListResourceSharePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceSharePermissionsOutcomeCallable listResourceSharePermissionsCallable(const Model::ListResourceSharePermissionsRequest& request) const;
			ListResourceSharesOutcome listResourceShares(const Model::ListResourceSharesRequest &request)const;
			void listResourceSharesAsync(const Model::ListResourceSharesRequest& request, const ListResourceSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceSharesOutcomeCallable listResourceSharesCallable(const Model::ListResourceSharesRequest& request) const;
			ListSharedResourcesOutcome listSharedResources(const Model::ListSharedResourcesRequest &request)const;
			void listSharedResourcesAsync(const Model::ListSharedResourcesRequest& request, const ListSharedResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSharedResourcesOutcomeCallable listSharedResourcesCallable(const Model::ListSharedResourcesRequest& request) const;
			ListSharedTargetsOutcome listSharedTargets(const Model::ListSharedTargetsRequest &request)const;
			void listSharedTargetsAsync(const Model::ListSharedTargetsRequest& request, const ListSharedTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSharedTargetsOutcomeCallable listSharedTargetsCallable(const Model::ListSharedTargetsRequest& request) const;
			RejectResourceShareInvitationOutcome rejectResourceShareInvitation(const Model::RejectResourceShareInvitationRequest &request)const;
			void rejectResourceShareInvitationAsync(const Model::RejectResourceShareInvitationRequest& request, const RejectResourceShareInvitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RejectResourceShareInvitationOutcomeCallable rejectResourceShareInvitationCallable(const Model::RejectResourceShareInvitationRequest& request) const;
			UpdateResourceShareOutcome updateResourceShare(const Model::UpdateResourceShareRequest &request)const;
			void updateResourceShareAsync(const Model::UpdateResourceShareRequest& request, const UpdateResourceShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateResourceShareOutcomeCallable updateResourceShareCallable(const Model::UpdateResourceShareRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RESOURCESHARING_RESOURCESHARINGCLIENT_H_
