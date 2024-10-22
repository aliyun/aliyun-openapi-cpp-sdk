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

#ifndef ALIBABACLOUD_EAIS_EAISCLIENT_H_
#define ALIBABACLOUD_EAIS_EAISCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EaisExport.h"
#include "model/AttachEaiRequest.h"
#include "model/AttachEaiResult.h"
#include "model/AttachEaisEiRequest.h"
#include "model/AttachEaisEiResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CreateEaiRequest.h"
#include "model/CreateEaiResult.h"
#include "model/CreateEaiEciRequest.h"
#include "model/CreateEaiEciResult.h"
#include "model/CreateEaiEcsRequest.h"
#include "model/CreateEaiEcsResult.h"
#include "model/CreateEaiJupyterRequest.h"
#include "model/CreateEaiJupyterResult.h"
#include "model/CreateEaisEiRequest.h"
#include "model/CreateEaisEiResult.h"
#include "model/DeleteEaiRequest.h"
#include "model/DeleteEaiResult.h"
#include "model/DeleteEaiAllRequest.h"
#include "model/DeleteEaiAllResult.h"
#include "model/DeleteEaisEiRequest.h"
#include "model/DeleteEaisEiResult.h"
#include "model/DescribeEaisRequest.h"
#include "model/DescribeEaisResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DetachEaiRequest.h"
#include "model/DetachEaiResult.h"
#include "model/DetachEaisEiRequest.h"
#include "model/DetachEaisEiResult.h"
#include "model/GetInstanceMetricsRequest.h"
#include "model/GetInstanceMetricsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/StartEaiJupyterRequest.h"
#include "model/StartEaiJupyterResult.h"
#include "model/StartEaisEiRequest.h"
#include "model/StartEaisEiResult.h"
#include "model/StopEaiJupyterRequest.h"
#include "model/StopEaiJupyterResult.h"
#include "model/StopEaisEiRequest.h"
#include "model/StopEaisEiResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Eais
	{
		class ALIBABACLOUD_EAIS_EXPORT EaisClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachEaiResult> AttachEaiOutcome;
			typedef std::future<AttachEaiOutcome> AttachEaiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::AttachEaiRequest&, const AttachEaiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachEaiAsyncHandler;
			typedef Outcome<Error, Model::AttachEaisEiResult> AttachEaisEiOutcome;
			typedef std::future<AttachEaisEiOutcome> AttachEaisEiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::AttachEaisEiRequest&, const AttachEaisEiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachEaisEiAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateEaiResult> CreateEaiOutcome;
			typedef std::future<CreateEaiOutcome> CreateEaiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::CreateEaiRequest&, const CreateEaiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEaiAsyncHandler;
			typedef Outcome<Error, Model::CreateEaiEciResult> CreateEaiEciOutcome;
			typedef std::future<CreateEaiEciOutcome> CreateEaiEciOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::CreateEaiEciRequest&, const CreateEaiEciOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEaiEciAsyncHandler;
			typedef Outcome<Error, Model::CreateEaiEcsResult> CreateEaiEcsOutcome;
			typedef std::future<CreateEaiEcsOutcome> CreateEaiEcsOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::CreateEaiEcsRequest&, const CreateEaiEcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEaiEcsAsyncHandler;
			typedef Outcome<Error, Model::CreateEaiJupyterResult> CreateEaiJupyterOutcome;
			typedef std::future<CreateEaiJupyterOutcome> CreateEaiJupyterOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::CreateEaiJupyterRequest&, const CreateEaiJupyterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEaiJupyterAsyncHandler;
			typedef Outcome<Error, Model::CreateEaisEiResult> CreateEaisEiOutcome;
			typedef std::future<CreateEaisEiOutcome> CreateEaisEiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::CreateEaisEiRequest&, const CreateEaisEiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEaisEiAsyncHandler;
			typedef Outcome<Error, Model::DeleteEaiResult> DeleteEaiOutcome;
			typedef std::future<DeleteEaiOutcome> DeleteEaiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DeleteEaiRequest&, const DeleteEaiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEaiAsyncHandler;
			typedef Outcome<Error, Model::DeleteEaiAllResult> DeleteEaiAllOutcome;
			typedef std::future<DeleteEaiAllOutcome> DeleteEaiAllOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DeleteEaiAllRequest&, const DeleteEaiAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEaiAllAsyncHandler;
			typedef Outcome<Error, Model::DeleteEaisEiResult> DeleteEaisEiOutcome;
			typedef std::future<DeleteEaisEiOutcome> DeleteEaisEiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DeleteEaisEiRequest&, const DeleteEaisEiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEaisEiAsyncHandler;
			typedef Outcome<Error, Model::DescribeEaisResult> DescribeEaisOutcome;
			typedef std::future<DescribeEaisOutcome> DescribeEaisOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DescribeEaisRequest&, const DescribeEaisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEaisAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DetachEaiResult> DetachEaiOutcome;
			typedef std::future<DetachEaiOutcome> DetachEaiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DetachEaiRequest&, const DetachEaiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachEaiAsyncHandler;
			typedef Outcome<Error, Model::DetachEaisEiResult> DetachEaisEiOutcome;
			typedef std::future<DetachEaisEiOutcome> DetachEaisEiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::DetachEaisEiRequest&, const DetachEaisEiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachEaisEiAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceMetricsResult> GetInstanceMetricsOutcome;
			typedef std::future<GetInstanceMetricsOutcome> GetInstanceMetricsOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::GetInstanceMetricsRequest&, const GetInstanceMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceMetricsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::StartEaiJupyterResult> StartEaiJupyterOutcome;
			typedef std::future<StartEaiJupyterOutcome> StartEaiJupyterOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::StartEaiJupyterRequest&, const StartEaiJupyterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartEaiJupyterAsyncHandler;
			typedef Outcome<Error, Model::StartEaisEiResult> StartEaisEiOutcome;
			typedef std::future<StartEaisEiOutcome> StartEaisEiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::StartEaisEiRequest&, const StartEaisEiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartEaisEiAsyncHandler;
			typedef Outcome<Error, Model::StopEaiJupyterResult> StopEaiJupyterOutcome;
			typedef std::future<StopEaiJupyterOutcome> StopEaiJupyterOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::StopEaiJupyterRequest&, const StopEaiJupyterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopEaiJupyterAsyncHandler;
			typedef Outcome<Error, Model::StopEaisEiResult> StopEaisEiOutcome;
			typedef std::future<StopEaisEiOutcome> StopEaisEiOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::StopEaisEiRequest&, const StopEaisEiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopEaisEiAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const EaisClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			EaisClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EaisClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EaisClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EaisClient();
			AttachEaiOutcome attachEai(const Model::AttachEaiRequest &request)const;
			void attachEaiAsync(const Model::AttachEaiRequest& request, const AttachEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachEaiOutcomeCallable attachEaiCallable(const Model::AttachEaiRequest& request) const;
			AttachEaisEiOutcome attachEaisEi(const Model::AttachEaisEiRequest &request)const;
			void attachEaisEiAsync(const Model::AttachEaisEiRequest& request, const AttachEaisEiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachEaisEiOutcomeCallable attachEaisEiCallable(const Model::AttachEaisEiRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CreateEaiOutcome createEai(const Model::CreateEaiRequest &request)const;
			void createEaiAsync(const Model::CreateEaiRequest& request, const CreateEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEaiOutcomeCallable createEaiCallable(const Model::CreateEaiRequest& request) const;
			CreateEaiEciOutcome createEaiEci(const Model::CreateEaiEciRequest &request)const;
			void createEaiEciAsync(const Model::CreateEaiEciRequest& request, const CreateEaiEciAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEaiEciOutcomeCallable createEaiEciCallable(const Model::CreateEaiEciRequest& request) const;
			CreateEaiEcsOutcome createEaiEcs(const Model::CreateEaiEcsRequest &request)const;
			void createEaiEcsAsync(const Model::CreateEaiEcsRequest& request, const CreateEaiEcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEaiEcsOutcomeCallable createEaiEcsCallable(const Model::CreateEaiEcsRequest& request) const;
			CreateEaiJupyterOutcome createEaiJupyter(const Model::CreateEaiJupyterRequest &request)const;
			void createEaiJupyterAsync(const Model::CreateEaiJupyterRequest& request, const CreateEaiJupyterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEaiJupyterOutcomeCallable createEaiJupyterCallable(const Model::CreateEaiJupyterRequest& request) const;
			CreateEaisEiOutcome createEaisEi(const Model::CreateEaisEiRequest &request)const;
			void createEaisEiAsync(const Model::CreateEaisEiRequest& request, const CreateEaisEiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEaisEiOutcomeCallable createEaisEiCallable(const Model::CreateEaisEiRequest& request) const;
			DeleteEaiOutcome deleteEai(const Model::DeleteEaiRequest &request)const;
			void deleteEaiAsync(const Model::DeleteEaiRequest& request, const DeleteEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEaiOutcomeCallable deleteEaiCallable(const Model::DeleteEaiRequest& request) const;
			DeleteEaiAllOutcome deleteEaiAll(const Model::DeleteEaiAllRequest &request)const;
			void deleteEaiAllAsync(const Model::DeleteEaiAllRequest& request, const DeleteEaiAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEaiAllOutcomeCallable deleteEaiAllCallable(const Model::DeleteEaiAllRequest& request) const;
			DeleteEaisEiOutcome deleteEaisEi(const Model::DeleteEaisEiRequest &request)const;
			void deleteEaisEiAsync(const Model::DeleteEaisEiRequest& request, const DeleteEaisEiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEaisEiOutcomeCallable deleteEaisEiCallable(const Model::DeleteEaisEiRequest& request) const;
			DescribeEaisOutcome describeEais(const Model::DescribeEaisRequest &request)const;
			void describeEaisAsync(const Model::DescribeEaisRequest& request, const DescribeEaisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEaisOutcomeCallable describeEaisCallable(const Model::DescribeEaisRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DetachEaiOutcome detachEai(const Model::DetachEaiRequest &request)const;
			void detachEaiAsync(const Model::DetachEaiRequest& request, const DetachEaiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachEaiOutcomeCallable detachEaiCallable(const Model::DetachEaiRequest& request) const;
			DetachEaisEiOutcome detachEaisEi(const Model::DetachEaisEiRequest &request)const;
			void detachEaisEiAsync(const Model::DetachEaisEiRequest& request, const DetachEaisEiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachEaisEiOutcomeCallable detachEaisEiCallable(const Model::DetachEaisEiRequest& request) const;
			GetInstanceMetricsOutcome getInstanceMetrics(const Model::GetInstanceMetricsRequest &request)const;
			void getInstanceMetricsAsync(const Model::GetInstanceMetricsRequest& request, const GetInstanceMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceMetricsOutcomeCallable getInstanceMetricsCallable(const Model::GetInstanceMetricsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			StartEaiJupyterOutcome startEaiJupyter(const Model::StartEaiJupyterRequest &request)const;
			void startEaiJupyterAsync(const Model::StartEaiJupyterRequest& request, const StartEaiJupyterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartEaiJupyterOutcomeCallable startEaiJupyterCallable(const Model::StartEaiJupyterRequest& request) const;
			StartEaisEiOutcome startEaisEi(const Model::StartEaisEiRequest &request)const;
			void startEaisEiAsync(const Model::StartEaisEiRequest& request, const StartEaisEiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartEaisEiOutcomeCallable startEaisEiCallable(const Model::StartEaisEiRequest& request) const;
			StopEaiJupyterOutcome stopEaiJupyter(const Model::StopEaiJupyterRequest &request)const;
			void stopEaiJupyterAsync(const Model::StopEaiJupyterRequest& request, const StopEaiJupyterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopEaiJupyterOutcomeCallable stopEaiJupyterCallable(const Model::StopEaiJupyterRequest& request) const;
			StopEaisEiOutcome stopEaisEi(const Model::StopEaisEiRequest &request)const;
			void stopEaisEiAsync(const Model::StopEaisEiRequest& request, const StopEaisEiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopEaisEiOutcomeCallable stopEaisEiCallable(const Model::StopEaisEiRequest& request) const;
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

#endif // !ALIBABACLOUD_EAIS_EAISCLIENT_H_
