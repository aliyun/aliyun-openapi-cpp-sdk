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

#ifndef ALIBABACLOUD_PRIVATELINK_PRIVATELINKCLIENT_H_
#define ALIBABACLOUD_PRIVATELINK_PRIVATELINKCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "PrivatelinkExport.h"
#include "model/AddUserToVpcEndpointServiceRequest.h"
#include "model/AddUserToVpcEndpointServiceResult.h"
#include "model/AddZoneToVpcEndpointRequest.h"
#include "model/AddZoneToVpcEndpointResult.h"
#include "model/AttachResourceToVpcEndpointServiceRequest.h"
#include "model/AttachResourceToVpcEndpointServiceResult.h"
#include "model/AttachSecurityGroupToVpcEndpointRequest.h"
#include "model/AttachSecurityGroupToVpcEndpointResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CheckProductOpenRequest.h"
#include "model/CheckProductOpenResult.h"
#include "model/CheckResourceSupportOperateRequest.h"
#include "model/CheckResourceSupportOperateResult.h"
#include "model/CreateVpcEndpointRequest.h"
#include "model/CreateVpcEndpointResult.h"
#include "model/CreateVpcEndpointServiceRequest.h"
#include "model/CreateVpcEndpointServiceResult.h"
#include "model/DeleteVpcEndpointRequest.h"
#include "model/DeleteVpcEndpointResult.h"
#include "model/DeleteVpcEndpointServiceRequest.h"
#include "model/DeleteVpcEndpointServiceResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/DetachResourceFromVpcEndpointServiceRequest.h"
#include "model/DetachResourceFromVpcEndpointServiceResult.h"
#include "model/DetachSecurityGroupFromVpcEndpointRequest.h"
#include "model/DetachSecurityGroupFromVpcEndpointResult.h"
#include "model/DisableVpcEndpointConnectionRequest.h"
#include "model/DisableVpcEndpointConnectionResult.h"
#include "model/DisableVpcEndpointZoneConnectionRequest.h"
#include "model/DisableVpcEndpointZoneConnectionResult.h"
#include "model/EnableVpcEndpointConnectionRequest.h"
#include "model/EnableVpcEndpointConnectionResult.h"
#include "model/EnableVpcEndpointZoneConnectionRequest.h"
#include "model/EnableVpcEndpointZoneConnectionResult.h"
#include "model/GetVpcEndpointAttributeRequest.h"
#include "model/GetVpcEndpointAttributeResult.h"
#include "model/GetVpcEndpointServiceAttributeRequest.h"
#include "model/GetVpcEndpointServiceAttributeResult.h"
#include "model/ListVpcEndpointConnectionsRequest.h"
#include "model/ListVpcEndpointConnectionsResult.h"
#include "model/ListVpcEndpointSecurityGroupsRequest.h"
#include "model/ListVpcEndpointSecurityGroupsResult.h"
#include "model/ListVpcEndpointServiceResourcesRequest.h"
#include "model/ListVpcEndpointServiceResourcesResult.h"
#include "model/ListVpcEndpointServiceUsersRequest.h"
#include "model/ListVpcEndpointServiceUsersResult.h"
#include "model/ListVpcEndpointServicesRequest.h"
#include "model/ListVpcEndpointServicesResult.h"
#include "model/ListVpcEndpointServicesByEndUserRequest.h"
#include "model/ListVpcEndpointServicesByEndUserResult.h"
#include "model/ListVpcEndpointZonesRequest.h"
#include "model/ListVpcEndpointZonesResult.h"
#include "model/ListVpcEndpointsRequest.h"
#include "model/ListVpcEndpointsResult.h"
#include "model/NotifyResourceAddressFamilyRequest.h"
#include "model/NotifyResourceAddressFamilyResult.h"
#include "model/OpenPrivateLinkServiceRequest.h"
#include "model/OpenPrivateLinkServiceResult.h"
#include "model/RemoveUserFromVpcEndpointServiceRequest.h"
#include "model/RemoveUserFromVpcEndpointServiceResult.h"
#include "model/RemoveZoneFromVpcEndpointRequest.h"
#include "model/RemoveZoneFromVpcEndpointResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UpdateVpcEndpointAttributeRequest.h"
#include "model/UpdateVpcEndpointAttributeResult.h"
#include "model/UpdateVpcEndpointConnectionAttributeRequest.h"
#include "model/UpdateVpcEndpointConnectionAttributeResult.h"
#include "model/UpdateVpcEndpointServiceAttributeRequest.h"
#include "model/UpdateVpcEndpointServiceAttributeResult.h"
#include "model/UpdateVpcEndpointServiceResourceAttributeRequest.h"
#include "model/UpdateVpcEndpointServiceResourceAttributeResult.h"
#include "model/UpdateVpcEndpointZoneConnectionResourceAttributeRequest.h"
#include "model/UpdateVpcEndpointZoneConnectionResourceAttributeResult.h"


namespace AlibabaCloud
{
	namespace Privatelink
	{
		class ALIBABACLOUD_PRIVATELINK_EXPORT PrivatelinkClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddUserToVpcEndpointServiceResult> AddUserToVpcEndpointServiceOutcome;
			typedef std::future<AddUserToVpcEndpointServiceOutcome> AddUserToVpcEndpointServiceOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::AddUserToVpcEndpointServiceRequest&, const AddUserToVpcEndpointServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToVpcEndpointServiceAsyncHandler;
			typedef Outcome<Error, Model::AddZoneToVpcEndpointResult> AddZoneToVpcEndpointOutcome;
			typedef std::future<AddZoneToVpcEndpointOutcome> AddZoneToVpcEndpointOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::AddZoneToVpcEndpointRequest&, const AddZoneToVpcEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddZoneToVpcEndpointAsyncHandler;
			typedef Outcome<Error, Model::AttachResourceToVpcEndpointServiceResult> AttachResourceToVpcEndpointServiceOutcome;
			typedef std::future<AttachResourceToVpcEndpointServiceOutcome> AttachResourceToVpcEndpointServiceOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::AttachResourceToVpcEndpointServiceRequest&, const AttachResourceToVpcEndpointServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachResourceToVpcEndpointServiceAsyncHandler;
			typedef Outcome<Error, Model::AttachSecurityGroupToVpcEndpointResult> AttachSecurityGroupToVpcEndpointOutcome;
			typedef std::future<AttachSecurityGroupToVpcEndpointOutcome> AttachSecurityGroupToVpcEndpointOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::AttachSecurityGroupToVpcEndpointRequest&, const AttachSecurityGroupToVpcEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachSecurityGroupToVpcEndpointAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CheckProductOpenResult> CheckProductOpenOutcome;
			typedef std::future<CheckProductOpenOutcome> CheckProductOpenOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::CheckProductOpenRequest&, const CheckProductOpenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckProductOpenAsyncHandler;
			typedef Outcome<Error, Model::CheckResourceSupportOperateResult> CheckResourceSupportOperateOutcome;
			typedef std::future<CheckResourceSupportOperateOutcome> CheckResourceSupportOperateOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::CheckResourceSupportOperateRequest&, const CheckResourceSupportOperateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckResourceSupportOperateAsyncHandler;
			typedef Outcome<Error, Model::CreateVpcEndpointResult> CreateVpcEndpointOutcome;
			typedef std::future<CreateVpcEndpointOutcome> CreateVpcEndpointOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::CreateVpcEndpointRequest&, const CreateVpcEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndpointAsyncHandler;
			typedef Outcome<Error, Model::CreateVpcEndpointServiceResult> CreateVpcEndpointServiceOutcome;
			typedef std::future<CreateVpcEndpointServiceOutcome> CreateVpcEndpointServiceOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::CreateVpcEndpointServiceRequest&, const CreateVpcEndpointServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndpointServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcEndpointResult> DeleteVpcEndpointOutcome;
			typedef std::future<DeleteVpcEndpointOutcome> DeleteVpcEndpointOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::DeleteVpcEndpointRequest&, const DeleteVpcEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndpointAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpcEndpointServiceResult> DeleteVpcEndpointServiceOutcome;
			typedef std::future<DeleteVpcEndpointServiceOutcome> DeleteVpcEndpointServiceOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::DeleteVpcEndpointServiceRequest&, const DeleteVpcEndpointServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndpointServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DetachResourceFromVpcEndpointServiceResult> DetachResourceFromVpcEndpointServiceOutcome;
			typedef std::future<DetachResourceFromVpcEndpointServiceOutcome> DetachResourceFromVpcEndpointServiceOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::DetachResourceFromVpcEndpointServiceRequest&, const DetachResourceFromVpcEndpointServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachResourceFromVpcEndpointServiceAsyncHandler;
			typedef Outcome<Error, Model::DetachSecurityGroupFromVpcEndpointResult> DetachSecurityGroupFromVpcEndpointOutcome;
			typedef std::future<DetachSecurityGroupFromVpcEndpointOutcome> DetachSecurityGroupFromVpcEndpointOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::DetachSecurityGroupFromVpcEndpointRequest&, const DetachSecurityGroupFromVpcEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachSecurityGroupFromVpcEndpointAsyncHandler;
			typedef Outcome<Error, Model::DisableVpcEndpointConnectionResult> DisableVpcEndpointConnectionOutcome;
			typedef std::future<DisableVpcEndpointConnectionOutcome> DisableVpcEndpointConnectionOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::DisableVpcEndpointConnectionRequest&, const DisableVpcEndpointConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableVpcEndpointConnectionAsyncHandler;
			typedef Outcome<Error, Model::DisableVpcEndpointZoneConnectionResult> DisableVpcEndpointZoneConnectionOutcome;
			typedef std::future<DisableVpcEndpointZoneConnectionOutcome> DisableVpcEndpointZoneConnectionOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::DisableVpcEndpointZoneConnectionRequest&, const DisableVpcEndpointZoneConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableVpcEndpointZoneConnectionAsyncHandler;
			typedef Outcome<Error, Model::EnableVpcEndpointConnectionResult> EnableVpcEndpointConnectionOutcome;
			typedef std::future<EnableVpcEndpointConnectionOutcome> EnableVpcEndpointConnectionOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::EnableVpcEndpointConnectionRequest&, const EnableVpcEndpointConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcEndpointConnectionAsyncHandler;
			typedef Outcome<Error, Model::EnableVpcEndpointZoneConnectionResult> EnableVpcEndpointZoneConnectionOutcome;
			typedef std::future<EnableVpcEndpointZoneConnectionOutcome> EnableVpcEndpointZoneConnectionOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::EnableVpcEndpointZoneConnectionRequest&, const EnableVpcEndpointZoneConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcEndpointZoneConnectionAsyncHandler;
			typedef Outcome<Error, Model::GetVpcEndpointAttributeResult> GetVpcEndpointAttributeOutcome;
			typedef std::future<GetVpcEndpointAttributeOutcome> GetVpcEndpointAttributeOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::GetVpcEndpointAttributeRequest&, const GetVpcEndpointAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpcEndpointAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetVpcEndpointServiceAttributeResult> GetVpcEndpointServiceAttributeOutcome;
			typedef std::future<GetVpcEndpointServiceAttributeOutcome> GetVpcEndpointServiceAttributeOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::GetVpcEndpointServiceAttributeRequest&, const GetVpcEndpointServiceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpcEndpointServiceAttributeAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointConnectionsResult> ListVpcEndpointConnectionsOutcome;
			typedef std::future<ListVpcEndpointConnectionsOutcome> ListVpcEndpointConnectionsOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::ListVpcEndpointConnectionsRequest&, const ListVpcEndpointConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointConnectionsAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointSecurityGroupsResult> ListVpcEndpointSecurityGroupsOutcome;
			typedef std::future<ListVpcEndpointSecurityGroupsOutcome> ListVpcEndpointSecurityGroupsOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::ListVpcEndpointSecurityGroupsRequest&, const ListVpcEndpointSecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointSecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointServiceResourcesResult> ListVpcEndpointServiceResourcesOutcome;
			typedef std::future<ListVpcEndpointServiceResourcesOutcome> ListVpcEndpointServiceResourcesOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::ListVpcEndpointServiceResourcesRequest&, const ListVpcEndpointServiceResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointServiceResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointServiceUsersResult> ListVpcEndpointServiceUsersOutcome;
			typedef std::future<ListVpcEndpointServiceUsersOutcome> ListVpcEndpointServiceUsersOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::ListVpcEndpointServiceUsersRequest&, const ListVpcEndpointServiceUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointServiceUsersAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointServicesResult> ListVpcEndpointServicesOutcome;
			typedef std::future<ListVpcEndpointServicesOutcome> ListVpcEndpointServicesOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::ListVpcEndpointServicesRequest&, const ListVpcEndpointServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointServicesAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointServicesByEndUserResult> ListVpcEndpointServicesByEndUserOutcome;
			typedef std::future<ListVpcEndpointServicesByEndUserOutcome> ListVpcEndpointServicesByEndUserOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::ListVpcEndpointServicesByEndUserRequest&, const ListVpcEndpointServicesByEndUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointServicesByEndUserAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointZonesResult> ListVpcEndpointZonesOutcome;
			typedef std::future<ListVpcEndpointZonesOutcome> ListVpcEndpointZonesOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::ListVpcEndpointZonesRequest&, const ListVpcEndpointZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointZonesAsyncHandler;
			typedef Outcome<Error, Model::ListVpcEndpointsResult> ListVpcEndpointsOutcome;
			typedef std::future<ListVpcEndpointsOutcome> ListVpcEndpointsOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::ListVpcEndpointsRequest&, const ListVpcEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcEndpointsAsyncHandler;
			typedef Outcome<Error, Model::NotifyResourceAddressFamilyResult> NotifyResourceAddressFamilyOutcome;
			typedef std::future<NotifyResourceAddressFamilyOutcome> NotifyResourceAddressFamilyOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::NotifyResourceAddressFamilyRequest&, const NotifyResourceAddressFamilyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NotifyResourceAddressFamilyAsyncHandler;
			typedef Outcome<Error, Model::OpenPrivateLinkServiceResult> OpenPrivateLinkServiceOutcome;
			typedef std::future<OpenPrivateLinkServiceOutcome> OpenPrivateLinkServiceOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::OpenPrivateLinkServiceRequest&, const OpenPrivateLinkServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenPrivateLinkServiceAsyncHandler;
			typedef Outcome<Error, Model::RemoveUserFromVpcEndpointServiceResult> RemoveUserFromVpcEndpointServiceOutcome;
			typedef std::future<RemoveUserFromVpcEndpointServiceOutcome> RemoveUserFromVpcEndpointServiceOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::RemoveUserFromVpcEndpointServiceRequest&, const RemoveUserFromVpcEndpointServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserFromVpcEndpointServiceAsyncHandler;
			typedef Outcome<Error, Model::RemoveZoneFromVpcEndpointResult> RemoveZoneFromVpcEndpointOutcome;
			typedef std::future<RemoveZoneFromVpcEndpointOutcome> RemoveZoneFromVpcEndpointOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::RemoveZoneFromVpcEndpointRequest&, const RemoveZoneFromVpcEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveZoneFromVpcEndpointAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateVpcEndpointAttributeResult> UpdateVpcEndpointAttributeOutcome;
			typedef std::future<UpdateVpcEndpointAttributeOutcome> UpdateVpcEndpointAttributeOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::UpdateVpcEndpointAttributeRequest&, const UpdateVpcEndpointAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVpcEndpointAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateVpcEndpointConnectionAttributeResult> UpdateVpcEndpointConnectionAttributeOutcome;
			typedef std::future<UpdateVpcEndpointConnectionAttributeOutcome> UpdateVpcEndpointConnectionAttributeOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::UpdateVpcEndpointConnectionAttributeRequest&, const UpdateVpcEndpointConnectionAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVpcEndpointConnectionAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateVpcEndpointServiceAttributeResult> UpdateVpcEndpointServiceAttributeOutcome;
			typedef std::future<UpdateVpcEndpointServiceAttributeOutcome> UpdateVpcEndpointServiceAttributeOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::UpdateVpcEndpointServiceAttributeRequest&, const UpdateVpcEndpointServiceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVpcEndpointServiceAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateVpcEndpointServiceResourceAttributeResult> UpdateVpcEndpointServiceResourceAttributeOutcome;
			typedef std::future<UpdateVpcEndpointServiceResourceAttributeOutcome> UpdateVpcEndpointServiceResourceAttributeOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::UpdateVpcEndpointServiceResourceAttributeRequest&, const UpdateVpcEndpointServiceResourceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVpcEndpointServiceResourceAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateVpcEndpointZoneConnectionResourceAttributeResult> UpdateVpcEndpointZoneConnectionResourceAttributeOutcome;
			typedef std::future<UpdateVpcEndpointZoneConnectionResourceAttributeOutcome> UpdateVpcEndpointZoneConnectionResourceAttributeOutcomeCallable;
			typedef std::function<void(const PrivatelinkClient*, const Model::UpdateVpcEndpointZoneConnectionResourceAttributeRequest&, const UpdateVpcEndpointZoneConnectionResourceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVpcEndpointZoneConnectionResourceAttributeAsyncHandler;

			PrivatelinkClient(const Credentials &credentials, const ClientConfiguration &configuration);
			PrivatelinkClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			PrivatelinkClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~PrivatelinkClient();
			AddUserToVpcEndpointServiceOutcome addUserToVpcEndpointService(const Model::AddUserToVpcEndpointServiceRequest &request)const;
			void addUserToVpcEndpointServiceAsync(const Model::AddUserToVpcEndpointServiceRequest& request, const AddUserToVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserToVpcEndpointServiceOutcomeCallable addUserToVpcEndpointServiceCallable(const Model::AddUserToVpcEndpointServiceRequest& request) const;
			AddZoneToVpcEndpointOutcome addZoneToVpcEndpoint(const Model::AddZoneToVpcEndpointRequest &request)const;
			void addZoneToVpcEndpointAsync(const Model::AddZoneToVpcEndpointRequest& request, const AddZoneToVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddZoneToVpcEndpointOutcomeCallable addZoneToVpcEndpointCallable(const Model::AddZoneToVpcEndpointRequest& request) const;
			AttachResourceToVpcEndpointServiceOutcome attachResourceToVpcEndpointService(const Model::AttachResourceToVpcEndpointServiceRequest &request)const;
			void attachResourceToVpcEndpointServiceAsync(const Model::AttachResourceToVpcEndpointServiceRequest& request, const AttachResourceToVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachResourceToVpcEndpointServiceOutcomeCallable attachResourceToVpcEndpointServiceCallable(const Model::AttachResourceToVpcEndpointServiceRequest& request) const;
			AttachSecurityGroupToVpcEndpointOutcome attachSecurityGroupToVpcEndpoint(const Model::AttachSecurityGroupToVpcEndpointRequest &request)const;
			void attachSecurityGroupToVpcEndpointAsync(const Model::AttachSecurityGroupToVpcEndpointRequest& request, const AttachSecurityGroupToVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachSecurityGroupToVpcEndpointOutcomeCallable attachSecurityGroupToVpcEndpointCallable(const Model::AttachSecurityGroupToVpcEndpointRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CheckProductOpenOutcome checkProductOpen(const Model::CheckProductOpenRequest &request)const;
			void checkProductOpenAsync(const Model::CheckProductOpenRequest& request, const CheckProductOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckProductOpenOutcomeCallable checkProductOpenCallable(const Model::CheckProductOpenRequest& request) const;
			CheckResourceSupportOperateOutcome checkResourceSupportOperate(const Model::CheckResourceSupportOperateRequest &request)const;
			void checkResourceSupportOperateAsync(const Model::CheckResourceSupportOperateRequest& request, const CheckResourceSupportOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckResourceSupportOperateOutcomeCallable checkResourceSupportOperateCallable(const Model::CheckResourceSupportOperateRequest& request) const;
			CreateVpcEndpointOutcome createVpcEndpoint(const Model::CreateVpcEndpointRequest &request)const;
			void createVpcEndpointAsync(const Model::CreateVpcEndpointRequest& request, const CreateVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpcEndpointOutcomeCallable createVpcEndpointCallable(const Model::CreateVpcEndpointRequest& request) const;
			CreateVpcEndpointServiceOutcome createVpcEndpointService(const Model::CreateVpcEndpointServiceRequest &request)const;
			void createVpcEndpointServiceAsync(const Model::CreateVpcEndpointServiceRequest& request, const CreateVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpcEndpointServiceOutcomeCallable createVpcEndpointServiceCallable(const Model::CreateVpcEndpointServiceRequest& request) const;
			DeleteVpcEndpointOutcome deleteVpcEndpoint(const Model::DeleteVpcEndpointRequest &request)const;
			void deleteVpcEndpointAsync(const Model::DeleteVpcEndpointRequest& request, const DeleteVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpcEndpointOutcomeCallable deleteVpcEndpointCallable(const Model::DeleteVpcEndpointRequest& request) const;
			DeleteVpcEndpointServiceOutcome deleteVpcEndpointService(const Model::DeleteVpcEndpointServiceRequest &request)const;
			void deleteVpcEndpointServiceAsync(const Model::DeleteVpcEndpointServiceRequest& request, const DeleteVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpcEndpointServiceOutcomeCallable deleteVpcEndpointServiceCallable(const Model::DeleteVpcEndpointServiceRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			DetachResourceFromVpcEndpointServiceOutcome detachResourceFromVpcEndpointService(const Model::DetachResourceFromVpcEndpointServiceRequest &request)const;
			void detachResourceFromVpcEndpointServiceAsync(const Model::DetachResourceFromVpcEndpointServiceRequest& request, const DetachResourceFromVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachResourceFromVpcEndpointServiceOutcomeCallable detachResourceFromVpcEndpointServiceCallable(const Model::DetachResourceFromVpcEndpointServiceRequest& request) const;
			DetachSecurityGroupFromVpcEndpointOutcome detachSecurityGroupFromVpcEndpoint(const Model::DetachSecurityGroupFromVpcEndpointRequest &request)const;
			void detachSecurityGroupFromVpcEndpointAsync(const Model::DetachSecurityGroupFromVpcEndpointRequest& request, const DetachSecurityGroupFromVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachSecurityGroupFromVpcEndpointOutcomeCallable detachSecurityGroupFromVpcEndpointCallable(const Model::DetachSecurityGroupFromVpcEndpointRequest& request) const;
			DisableVpcEndpointConnectionOutcome disableVpcEndpointConnection(const Model::DisableVpcEndpointConnectionRequest &request)const;
			void disableVpcEndpointConnectionAsync(const Model::DisableVpcEndpointConnectionRequest& request, const DisableVpcEndpointConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableVpcEndpointConnectionOutcomeCallable disableVpcEndpointConnectionCallable(const Model::DisableVpcEndpointConnectionRequest& request) const;
			DisableVpcEndpointZoneConnectionOutcome disableVpcEndpointZoneConnection(const Model::DisableVpcEndpointZoneConnectionRequest &request)const;
			void disableVpcEndpointZoneConnectionAsync(const Model::DisableVpcEndpointZoneConnectionRequest& request, const DisableVpcEndpointZoneConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableVpcEndpointZoneConnectionOutcomeCallable disableVpcEndpointZoneConnectionCallable(const Model::DisableVpcEndpointZoneConnectionRequest& request) const;
			EnableVpcEndpointConnectionOutcome enableVpcEndpointConnection(const Model::EnableVpcEndpointConnectionRequest &request)const;
			void enableVpcEndpointConnectionAsync(const Model::EnableVpcEndpointConnectionRequest& request, const EnableVpcEndpointConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableVpcEndpointConnectionOutcomeCallable enableVpcEndpointConnectionCallable(const Model::EnableVpcEndpointConnectionRequest& request) const;
			EnableVpcEndpointZoneConnectionOutcome enableVpcEndpointZoneConnection(const Model::EnableVpcEndpointZoneConnectionRequest &request)const;
			void enableVpcEndpointZoneConnectionAsync(const Model::EnableVpcEndpointZoneConnectionRequest& request, const EnableVpcEndpointZoneConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableVpcEndpointZoneConnectionOutcomeCallable enableVpcEndpointZoneConnectionCallable(const Model::EnableVpcEndpointZoneConnectionRequest& request) const;
			GetVpcEndpointAttributeOutcome getVpcEndpointAttribute(const Model::GetVpcEndpointAttributeRequest &request)const;
			void getVpcEndpointAttributeAsync(const Model::GetVpcEndpointAttributeRequest& request, const GetVpcEndpointAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpcEndpointAttributeOutcomeCallable getVpcEndpointAttributeCallable(const Model::GetVpcEndpointAttributeRequest& request) const;
			GetVpcEndpointServiceAttributeOutcome getVpcEndpointServiceAttribute(const Model::GetVpcEndpointServiceAttributeRequest &request)const;
			void getVpcEndpointServiceAttributeAsync(const Model::GetVpcEndpointServiceAttributeRequest& request, const GetVpcEndpointServiceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpcEndpointServiceAttributeOutcomeCallable getVpcEndpointServiceAttributeCallable(const Model::GetVpcEndpointServiceAttributeRequest& request) const;
			ListVpcEndpointConnectionsOutcome listVpcEndpointConnections(const Model::ListVpcEndpointConnectionsRequest &request)const;
			void listVpcEndpointConnectionsAsync(const Model::ListVpcEndpointConnectionsRequest& request, const ListVpcEndpointConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointConnectionsOutcomeCallable listVpcEndpointConnectionsCallable(const Model::ListVpcEndpointConnectionsRequest& request) const;
			ListVpcEndpointSecurityGroupsOutcome listVpcEndpointSecurityGroups(const Model::ListVpcEndpointSecurityGroupsRequest &request)const;
			void listVpcEndpointSecurityGroupsAsync(const Model::ListVpcEndpointSecurityGroupsRequest& request, const ListVpcEndpointSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointSecurityGroupsOutcomeCallable listVpcEndpointSecurityGroupsCallable(const Model::ListVpcEndpointSecurityGroupsRequest& request) const;
			ListVpcEndpointServiceResourcesOutcome listVpcEndpointServiceResources(const Model::ListVpcEndpointServiceResourcesRequest &request)const;
			void listVpcEndpointServiceResourcesAsync(const Model::ListVpcEndpointServiceResourcesRequest& request, const ListVpcEndpointServiceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointServiceResourcesOutcomeCallable listVpcEndpointServiceResourcesCallable(const Model::ListVpcEndpointServiceResourcesRequest& request) const;
			ListVpcEndpointServiceUsersOutcome listVpcEndpointServiceUsers(const Model::ListVpcEndpointServiceUsersRequest &request)const;
			void listVpcEndpointServiceUsersAsync(const Model::ListVpcEndpointServiceUsersRequest& request, const ListVpcEndpointServiceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointServiceUsersOutcomeCallable listVpcEndpointServiceUsersCallable(const Model::ListVpcEndpointServiceUsersRequest& request) const;
			ListVpcEndpointServicesOutcome listVpcEndpointServices(const Model::ListVpcEndpointServicesRequest &request)const;
			void listVpcEndpointServicesAsync(const Model::ListVpcEndpointServicesRequest& request, const ListVpcEndpointServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointServicesOutcomeCallable listVpcEndpointServicesCallable(const Model::ListVpcEndpointServicesRequest& request) const;
			ListVpcEndpointServicesByEndUserOutcome listVpcEndpointServicesByEndUser(const Model::ListVpcEndpointServicesByEndUserRequest &request)const;
			void listVpcEndpointServicesByEndUserAsync(const Model::ListVpcEndpointServicesByEndUserRequest& request, const ListVpcEndpointServicesByEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointServicesByEndUserOutcomeCallable listVpcEndpointServicesByEndUserCallable(const Model::ListVpcEndpointServicesByEndUserRequest& request) const;
			ListVpcEndpointZonesOutcome listVpcEndpointZones(const Model::ListVpcEndpointZonesRequest &request)const;
			void listVpcEndpointZonesAsync(const Model::ListVpcEndpointZonesRequest& request, const ListVpcEndpointZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointZonesOutcomeCallable listVpcEndpointZonesCallable(const Model::ListVpcEndpointZonesRequest& request) const;
			ListVpcEndpointsOutcome listVpcEndpoints(const Model::ListVpcEndpointsRequest &request)const;
			void listVpcEndpointsAsync(const Model::ListVpcEndpointsRequest& request, const ListVpcEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcEndpointsOutcomeCallable listVpcEndpointsCallable(const Model::ListVpcEndpointsRequest& request) const;
			NotifyResourceAddressFamilyOutcome notifyResourceAddressFamily(const Model::NotifyResourceAddressFamilyRequest &request)const;
			void notifyResourceAddressFamilyAsync(const Model::NotifyResourceAddressFamilyRequest& request, const NotifyResourceAddressFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NotifyResourceAddressFamilyOutcomeCallable notifyResourceAddressFamilyCallable(const Model::NotifyResourceAddressFamilyRequest& request) const;
			OpenPrivateLinkServiceOutcome openPrivateLinkService(const Model::OpenPrivateLinkServiceRequest &request)const;
			void openPrivateLinkServiceAsync(const Model::OpenPrivateLinkServiceRequest& request, const OpenPrivateLinkServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenPrivateLinkServiceOutcomeCallable openPrivateLinkServiceCallable(const Model::OpenPrivateLinkServiceRequest& request) const;
			RemoveUserFromVpcEndpointServiceOutcome removeUserFromVpcEndpointService(const Model::RemoveUserFromVpcEndpointServiceRequest &request)const;
			void removeUserFromVpcEndpointServiceAsync(const Model::RemoveUserFromVpcEndpointServiceRequest& request, const RemoveUserFromVpcEndpointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUserFromVpcEndpointServiceOutcomeCallable removeUserFromVpcEndpointServiceCallable(const Model::RemoveUserFromVpcEndpointServiceRequest& request) const;
			RemoveZoneFromVpcEndpointOutcome removeZoneFromVpcEndpoint(const Model::RemoveZoneFromVpcEndpointRequest &request)const;
			void removeZoneFromVpcEndpointAsync(const Model::RemoveZoneFromVpcEndpointRequest& request, const RemoveZoneFromVpcEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveZoneFromVpcEndpointOutcomeCallable removeZoneFromVpcEndpointCallable(const Model::RemoveZoneFromVpcEndpointRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UpdateVpcEndpointAttributeOutcome updateVpcEndpointAttribute(const Model::UpdateVpcEndpointAttributeRequest &request)const;
			void updateVpcEndpointAttributeAsync(const Model::UpdateVpcEndpointAttributeRequest& request, const UpdateVpcEndpointAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVpcEndpointAttributeOutcomeCallable updateVpcEndpointAttributeCallable(const Model::UpdateVpcEndpointAttributeRequest& request) const;
			UpdateVpcEndpointConnectionAttributeOutcome updateVpcEndpointConnectionAttribute(const Model::UpdateVpcEndpointConnectionAttributeRequest &request)const;
			void updateVpcEndpointConnectionAttributeAsync(const Model::UpdateVpcEndpointConnectionAttributeRequest& request, const UpdateVpcEndpointConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVpcEndpointConnectionAttributeOutcomeCallable updateVpcEndpointConnectionAttributeCallable(const Model::UpdateVpcEndpointConnectionAttributeRequest& request) const;
			UpdateVpcEndpointServiceAttributeOutcome updateVpcEndpointServiceAttribute(const Model::UpdateVpcEndpointServiceAttributeRequest &request)const;
			void updateVpcEndpointServiceAttributeAsync(const Model::UpdateVpcEndpointServiceAttributeRequest& request, const UpdateVpcEndpointServiceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVpcEndpointServiceAttributeOutcomeCallable updateVpcEndpointServiceAttributeCallable(const Model::UpdateVpcEndpointServiceAttributeRequest& request) const;
			UpdateVpcEndpointServiceResourceAttributeOutcome updateVpcEndpointServiceResourceAttribute(const Model::UpdateVpcEndpointServiceResourceAttributeRequest &request)const;
			void updateVpcEndpointServiceResourceAttributeAsync(const Model::UpdateVpcEndpointServiceResourceAttributeRequest& request, const UpdateVpcEndpointServiceResourceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVpcEndpointServiceResourceAttributeOutcomeCallable updateVpcEndpointServiceResourceAttributeCallable(const Model::UpdateVpcEndpointServiceResourceAttributeRequest& request) const;
			UpdateVpcEndpointZoneConnectionResourceAttributeOutcome updateVpcEndpointZoneConnectionResourceAttribute(const Model::UpdateVpcEndpointZoneConnectionResourceAttributeRequest &request)const;
			void updateVpcEndpointZoneConnectionResourceAttributeAsync(const Model::UpdateVpcEndpointZoneConnectionResourceAttributeRequest& request, const UpdateVpcEndpointZoneConnectionResourceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVpcEndpointZoneConnectionResourceAttributeOutcomeCallable updateVpcEndpointZoneConnectionResourceAttributeCallable(const Model::UpdateVpcEndpointZoneConnectionResourceAttributeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_PRIVATELINK_PRIVATELINKCLIENT_H_
