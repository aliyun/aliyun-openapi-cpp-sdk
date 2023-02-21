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

#ifndef ALIBABACLOUD_EFLO_CONTROLLER_EFLO_CONTROLLERCLIENT_H_
#define ALIBABACLOUD_EFLO_CONTROLLER_EFLO_CONTROLLERCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Eflo_controllerExport.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DescribeClusterRequest.h"
#include "model/DescribeClusterResult.h"
#include "model/DescribeNodeRequest.h"
#include "model/DescribeNodeResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeTaskRequest.h"
#include "model/DescribeTaskResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/ExtendClusterRequest.h"
#include "model/ExtendClusterResult.h"
#include "model/ListClusterNodesRequest.h"
#include "model/ListClusterNodesResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/ListFreeNodesRequest.h"
#include "model/ListFreeNodesResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/RebootNodesRequest.h"
#include "model/RebootNodesResult.h"
#include "model/ReimageNodesRequest.h"
#include "model/ReimageNodesResult.h"
#include "model/ShrinkClusterRequest.h"
#include "model/ShrinkClusterResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Eflo_controller
	{
		class ALIBABACLOUD_EFLO_CONTROLLER_EXPORT Eflo_controllerClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResult> DescribeClusterOutcome;
			typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::DescribeClusterRequest&, const DescribeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeNodeResult> DescribeNodeOutcome;
			typedef std::future<DescribeNodeOutcome> DescribeNodeOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::DescribeNodeRequest&, const DescribeNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTaskResult> DescribeTaskOutcome;
			typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::DescribeTaskRequest&, const DescribeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::ExtendClusterResult> ExtendClusterOutcome;
			typedef std::future<ExtendClusterOutcome> ExtendClusterOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::ExtendClusterRequest&, const ExtendClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExtendClusterAsyncHandler;
			typedef Outcome<Error, Model::ListClusterNodesResult> ListClusterNodesOutcome;
			typedef std::future<ListClusterNodesOutcome> ListClusterNodesOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::ListClusterNodesRequest&, const ListClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::ListFreeNodesResult> ListFreeNodesOutcome;
			typedef std::future<ListFreeNodesOutcome> ListFreeNodesOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::ListFreeNodesRequest&, const ListFreeNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFreeNodesAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::RebootNodesResult> RebootNodesOutcome;
			typedef std::future<RebootNodesOutcome> RebootNodesOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::RebootNodesRequest&, const RebootNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootNodesAsyncHandler;
			typedef Outcome<Error, Model::ReimageNodesResult> ReimageNodesOutcome;
			typedef std::future<ReimageNodesOutcome> ReimageNodesOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::ReimageNodesRequest&, const ReimageNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReimageNodesAsyncHandler;
			typedef Outcome<Error, Model::ShrinkClusterResult> ShrinkClusterOutcome;
			typedef std::future<ShrinkClusterOutcome> ShrinkClusterOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::ShrinkClusterRequest&, const ShrinkClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShrinkClusterAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const Eflo_controllerClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			Eflo_controllerClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Eflo_controllerClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Eflo_controllerClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Eflo_controllerClient();
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DescribeClusterOutcome describeCluster(const Model::DescribeClusterRequest &request)const;
			void describeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOutcomeCallable describeClusterCallable(const Model::DescribeClusterRequest& request) const;
			DescribeNodeOutcome describeNode(const Model::DescribeNodeRequest &request)const;
			void describeNodeAsync(const Model::DescribeNodeRequest& request, const DescribeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNodeOutcomeCallable describeNodeCallable(const Model::DescribeNodeRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeTaskOutcome describeTask(const Model::DescribeTaskRequest &request)const;
			void describeTaskAsync(const Model::DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTaskOutcomeCallable describeTaskCallable(const Model::DescribeTaskRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			ExtendClusterOutcome extendCluster(const Model::ExtendClusterRequest &request)const;
			void extendClusterAsync(const Model::ExtendClusterRequest& request, const ExtendClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExtendClusterOutcomeCallable extendClusterCallable(const Model::ExtendClusterRequest& request) const;
			ListClusterNodesOutcome listClusterNodes(const Model::ListClusterNodesRequest &request)const;
			void listClusterNodesAsync(const Model::ListClusterNodesRequest& request, const ListClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterNodesOutcomeCallable listClusterNodesCallable(const Model::ListClusterNodesRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			ListFreeNodesOutcome listFreeNodes(const Model::ListFreeNodesRequest &request)const;
			void listFreeNodesAsync(const Model::ListFreeNodesRequest& request, const ListFreeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFreeNodesOutcomeCallable listFreeNodesCallable(const Model::ListFreeNodesRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			RebootNodesOutcome rebootNodes(const Model::RebootNodesRequest &request)const;
			void rebootNodesAsync(const Model::RebootNodesRequest& request, const RebootNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootNodesOutcomeCallable rebootNodesCallable(const Model::RebootNodesRequest& request) const;
			ReimageNodesOutcome reimageNodes(const Model::ReimageNodesRequest &request)const;
			void reimageNodesAsync(const Model::ReimageNodesRequest& request, const ReimageNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReimageNodesOutcomeCallable reimageNodesCallable(const Model::ReimageNodesRequest& request) const;
			ShrinkClusterOutcome shrinkCluster(const Model::ShrinkClusterRequest &request)const;
			void shrinkClusterAsync(const Model::ShrinkClusterRequest& request, const ShrinkClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShrinkClusterOutcomeCallable shrinkClusterCallable(const Model::ShrinkClusterRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EFLO_CONTROLLER_EFLO_CONTROLLERCLIENT_H_
