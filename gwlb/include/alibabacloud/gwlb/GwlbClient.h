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

#ifndef ALIBABACLOUD_GWLB_GWLBCLIENT_H_
#define ALIBABACLOUD_GWLB_GWLBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "GwlbExport.h"
#include "model/AddServersToServerGroupRequest.h"
#include "model/AddServersToServerGroupResult.h"
#include "model/CreateListenerRequest.h"
#include "model/CreateListenerResult.h"
#include "model/CreateLoadBalancerRequest.h"
#include "model/CreateLoadBalancerResult.h"
#include "model/CreateServerGroupRequest.h"
#include "model/CreateServerGroupResult.h"
#include "model/DeleteListenerRequest.h"
#include "model/DeleteListenerResult.h"
#include "model/DeleteLoadBalancerRequest.h"
#include "model/DeleteLoadBalancerResult.h"
#include "model/DeleteServerGroupRequest.h"
#include "model/DeleteServerGroupResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/GetListenerAttributeRequest.h"
#include "model/GetListenerAttributeResult.h"
#include "model/GetListenerHealthStatusRequest.h"
#include "model/GetListenerHealthStatusResult.h"
#include "model/GetLoadBalancerAttributeRequest.h"
#include "model/GetLoadBalancerAttributeResult.h"
#include "model/ListListenersRequest.h"
#include "model/ListListenersResult.h"
#include "model/ListLoadBalancersRequest.h"
#include "model/ListLoadBalancersResult.h"
#include "model/ListServerGroupServersRequest.h"
#include "model/ListServerGroupServersResult.h"
#include "model/ListServerGroupsRequest.h"
#include "model/ListServerGroupsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/RemoveServersFromServerGroupRequest.h"
#include "model/RemoveServersFromServerGroupResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateListenerAttributeRequest.h"
#include "model/UpdateListenerAttributeResult.h"
#include "model/UpdateLoadBalancerAttributeRequest.h"
#include "model/UpdateLoadBalancerAttributeResult.h"
#include "model/UpdateLoadBalancerZonesRequest.h"
#include "model/UpdateLoadBalancerZonesResult.h"
#include "model/UpdateServerGroupAttributeRequest.h"
#include "model/UpdateServerGroupAttributeResult.h"


namespace AlibabaCloud
{
	namespace Gwlb
	{
		class ALIBABACLOUD_GWLB_EXPORT GwlbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddServersToServerGroupResult> AddServersToServerGroupOutcome;
			typedef std::future<AddServersToServerGroupOutcome> AddServersToServerGroupOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::AddServersToServerGroupRequest&, const AddServersToServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddServersToServerGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateListenerResult> CreateListenerOutcome;
			typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::CreateListenerRequest&, const CreateListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
			typedef Outcome<Error, Model::CreateLoadBalancerResult> CreateLoadBalancerOutcome;
			typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::CreateLoadBalancerRequest&, const CreateLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::CreateServerGroupResult> CreateServerGroupOutcome;
			typedef std::future<CreateServerGroupOutcome> CreateServerGroupOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::CreateServerGroupRequest&, const CreateServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteListenerResult> DeleteListenerOutcome;
			typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::DeleteListenerRequest&, const DeleteListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoadBalancerResult> DeleteLoadBalancerOutcome;
			typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::DeleteLoadBalancerRequest&, const DeleteLoadBalancerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
			typedef Outcome<Error, Model::DeleteServerGroupResult> DeleteServerGroupOutcome;
			typedef std::future<DeleteServerGroupOutcome> DeleteServerGroupOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::DeleteServerGroupRequest&, const DeleteServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::GetListenerAttributeResult> GetListenerAttributeOutcome;
			typedef std::future<GetListenerAttributeOutcome> GetListenerAttributeOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::GetListenerAttributeRequest&, const GetListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetListenerHealthStatusResult> GetListenerHealthStatusOutcome;
			typedef std::future<GetListenerHealthStatusOutcome> GetListenerHealthStatusOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::GetListenerHealthStatusRequest&, const GetListenerHealthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetListenerHealthStatusAsyncHandler;
			typedef Outcome<Error, Model::GetLoadBalancerAttributeResult> GetLoadBalancerAttributeOutcome;
			typedef std::future<GetLoadBalancerAttributeOutcome> GetLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::GetLoadBalancerAttributeRequest&, const GetLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::ListListenersResult> ListListenersOutcome;
			typedef std::future<ListListenersOutcome> ListListenersOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::ListListenersRequest&, const ListListenersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenersAsyncHandler;
			typedef Outcome<Error, Model::ListLoadBalancersResult> ListLoadBalancersOutcome;
			typedef std::future<ListLoadBalancersOutcome> ListLoadBalancersOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::ListLoadBalancersRequest&, const ListLoadBalancersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLoadBalancersAsyncHandler;
			typedef Outcome<Error, Model::ListServerGroupServersResult> ListServerGroupServersOutcome;
			typedef std::future<ListServerGroupServersOutcome> ListServerGroupServersOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::ListServerGroupServersRequest&, const ListServerGroupServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServerGroupServersAsyncHandler;
			typedef Outcome<Error, Model::ListServerGroupsResult> ListServerGroupsOutcome;
			typedef std::future<ListServerGroupsOutcome> ListServerGroupsOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::ListServerGroupsRequest&, const ListServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveServersFromServerGroupResult> RemoveServersFromServerGroupOutcome;
			typedef std::future<RemoveServersFromServerGroupOutcome> RemoveServersFromServerGroupOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::RemoveServersFromServerGroupRequest&, const RemoveServersFromServerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveServersFromServerGroupAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateListenerAttributeResult> UpdateListenerAttributeOutcome;
			typedef std::future<UpdateListenerAttributeOutcome> UpdateListenerAttributeOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::UpdateListenerAttributeRequest&, const UpdateListenerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateListenerAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoadBalancerAttributeResult> UpdateLoadBalancerAttributeOutcome;
			typedef std::future<UpdateLoadBalancerAttributeOutcome> UpdateLoadBalancerAttributeOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::UpdateLoadBalancerAttributeRequest&, const UpdateLoadBalancerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoadBalancerAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateLoadBalancerZonesResult> UpdateLoadBalancerZonesOutcome;
			typedef std::future<UpdateLoadBalancerZonesOutcome> UpdateLoadBalancerZonesOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::UpdateLoadBalancerZonesRequest&, const UpdateLoadBalancerZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLoadBalancerZonesAsyncHandler;
			typedef Outcome<Error, Model::UpdateServerGroupAttributeResult> UpdateServerGroupAttributeOutcome;
			typedef std::future<UpdateServerGroupAttributeOutcome> UpdateServerGroupAttributeOutcomeCallable;
			typedef std::function<void(const GwlbClient*, const Model::UpdateServerGroupAttributeRequest&, const UpdateServerGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServerGroupAttributeAsyncHandler;

			GwlbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GwlbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GwlbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GwlbClient();
			AddServersToServerGroupOutcome addServersToServerGroup(const Model::AddServersToServerGroupRequest &request)const;
			void addServersToServerGroupAsync(const Model::AddServersToServerGroupRequest& request, const AddServersToServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddServersToServerGroupOutcomeCallable addServersToServerGroupCallable(const Model::AddServersToServerGroupRequest& request) const;
			CreateListenerOutcome createListener(const Model::CreateListenerRequest &request)const;
			void createListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateListenerOutcomeCallable createListenerCallable(const Model::CreateListenerRequest& request) const;
			CreateLoadBalancerOutcome createLoadBalancer(const Model::CreateLoadBalancerRequest &request)const;
			void createLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLoadBalancerOutcomeCallable createLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;
			CreateServerGroupOutcome createServerGroup(const Model::CreateServerGroupRequest &request)const;
			void createServerGroupAsync(const Model::CreateServerGroupRequest& request, const CreateServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServerGroupOutcomeCallable createServerGroupCallable(const Model::CreateServerGroupRequest& request) const;
			DeleteListenerOutcome deleteListener(const Model::DeleteListenerRequest &request)const;
			void deleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteListenerOutcomeCallable deleteListenerCallable(const Model::DeleteListenerRequest& request) const;
			DeleteLoadBalancerOutcome deleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request)const;
			void deleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoadBalancerOutcomeCallable deleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;
			DeleteServerGroupOutcome deleteServerGroup(const Model::DeleteServerGroupRequest &request)const;
			void deleteServerGroupAsync(const Model::DeleteServerGroupRequest& request, const DeleteServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServerGroupOutcomeCallable deleteServerGroupCallable(const Model::DeleteServerGroupRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			GetListenerAttributeOutcome getListenerAttribute(const Model::GetListenerAttributeRequest &request)const;
			void getListenerAttributeAsync(const Model::GetListenerAttributeRequest& request, const GetListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetListenerAttributeOutcomeCallable getListenerAttributeCallable(const Model::GetListenerAttributeRequest& request) const;
			GetListenerHealthStatusOutcome getListenerHealthStatus(const Model::GetListenerHealthStatusRequest &request)const;
			void getListenerHealthStatusAsync(const Model::GetListenerHealthStatusRequest& request, const GetListenerHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetListenerHealthStatusOutcomeCallable getListenerHealthStatusCallable(const Model::GetListenerHealthStatusRequest& request) const;
			GetLoadBalancerAttributeOutcome getLoadBalancerAttribute(const Model::GetLoadBalancerAttributeRequest &request)const;
			void getLoadBalancerAttributeAsync(const Model::GetLoadBalancerAttributeRequest& request, const GetLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLoadBalancerAttributeOutcomeCallable getLoadBalancerAttributeCallable(const Model::GetLoadBalancerAttributeRequest& request) const;
			ListListenersOutcome listListeners(const Model::ListListenersRequest &request)const;
			void listListenersAsync(const Model::ListListenersRequest& request, const ListListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenersOutcomeCallable listListenersCallable(const Model::ListListenersRequest& request) const;
			ListLoadBalancersOutcome listLoadBalancers(const Model::ListLoadBalancersRequest &request)const;
			void listLoadBalancersAsync(const Model::ListLoadBalancersRequest& request, const ListLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLoadBalancersOutcomeCallable listLoadBalancersCallable(const Model::ListLoadBalancersRequest& request) const;
			ListServerGroupServersOutcome listServerGroupServers(const Model::ListServerGroupServersRequest &request)const;
			void listServerGroupServersAsync(const Model::ListServerGroupServersRequest& request, const ListServerGroupServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServerGroupServersOutcomeCallable listServerGroupServersCallable(const Model::ListServerGroupServersRequest& request) const;
			ListServerGroupsOutcome listServerGroups(const Model::ListServerGroupsRequest &request)const;
			void listServerGroupsAsync(const Model::ListServerGroupsRequest& request, const ListServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServerGroupsOutcomeCallable listServerGroupsCallable(const Model::ListServerGroupsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			RemoveServersFromServerGroupOutcome removeServersFromServerGroup(const Model::RemoveServersFromServerGroupRequest &request)const;
			void removeServersFromServerGroupAsync(const Model::RemoveServersFromServerGroupRequest& request, const RemoveServersFromServerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveServersFromServerGroupOutcomeCallable removeServersFromServerGroupCallable(const Model::RemoveServersFromServerGroupRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateListenerAttributeOutcome updateListenerAttribute(const Model::UpdateListenerAttributeRequest &request)const;
			void updateListenerAttributeAsync(const Model::UpdateListenerAttributeRequest& request, const UpdateListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateListenerAttributeOutcomeCallable updateListenerAttributeCallable(const Model::UpdateListenerAttributeRequest& request) const;
			UpdateLoadBalancerAttributeOutcome updateLoadBalancerAttribute(const Model::UpdateLoadBalancerAttributeRequest &request)const;
			void updateLoadBalancerAttributeAsync(const Model::UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoadBalancerAttributeOutcomeCallable updateLoadBalancerAttributeCallable(const Model::UpdateLoadBalancerAttributeRequest& request) const;
			UpdateLoadBalancerZonesOutcome updateLoadBalancerZones(const Model::UpdateLoadBalancerZonesRequest &request)const;
			void updateLoadBalancerZonesAsync(const Model::UpdateLoadBalancerZonesRequest& request, const UpdateLoadBalancerZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLoadBalancerZonesOutcomeCallable updateLoadBalancerZonesCallable(const Model::UpdateLoadBalancerZonesRequest& request) const;
			UpdateServerGroupAttributeOutcome updateServerGroupAttribute(const Model::UpdateServerGroupAttributeRequest &request)const;
			void updateServerGroupAttributeAsync(const Model::UpdateServerGroupAttributeRequest& request, const UpdateServerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServerGroupAttributeOutcomeCallable updateServerGroupAttributeCallable(const Model::UpdateServerGroupAttributeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GWLB_GWLBCLIENT_H_
