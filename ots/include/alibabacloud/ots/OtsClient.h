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

#ifndef ALIBABACLOUD_OTS_OTSCLIENT_H_
#define ALIBABACLOUD_OTS_OTSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OtsExport.h"
#include "model/BindInstance2VpcRequest.h"
#include "model/BindInstance2VpcResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteTagsRequest.h"
#include "model/DeleteTagsResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/InsertInstanceRequest.h"
#include "model/InsertInstanceResult.h"
#include "model/InsertTagsRequest.h"
#include "model/InsertTagsResult.h"
#include "model/ListClusterTypeRequest.h"
#include "model/ListClusterTypeResult.h"
#include "model/ListInstanceRequest.h"
#include "model/ListInstanceResult.h"
#include "model/ListTagsRequest.h"
#include "model/ListTagsResult.h"
#include "model/ListVpcInfoByInstanceRequest.h"
#include "model/ListVpcInfoByInstanceResult.h"
#include "model/ListVpcInfoByVpcRequest.h"
#include "model/ListVpcInfoByVpcResult.h"
#include "model/UnbindInstance2VpcRequest.h"
#include "model/UnbindInstance2VpcResult.h"
#include "model/UpdateInstanceRequest.h"
#include "model/UpdateInstanceResult.h"


namespace AlibabaCloud
{
	namespace Ots
	{
		class ALIBABACLOUD_OTS_EXPORT OtsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BindInstance2VpcResult> BindInstance2VpcOutcome;
			typedef std::future<BindInstance2VpcOutcome> BindInstance2VpcOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::BindInstance2VpcRequest&, const BindInstance2VpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindInstance2VpcAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagsResult> DeleteTagsOutcome;
			typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::DeleteTagsRequest&, const DeleteTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagsAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResult> GetInstanceOutcome;
			typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::GetInstanceRequest&, const GetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAsyncHandler;
			typedef Outcome<Error, Model::InsertInstanceResult> InsertInstanceOutcome;
			typedef std::future<InsertInstanceOutcome> InsertInstanceOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::InsertInstanceRequest&, const InsertInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertInstanceAsyncHandler;
			typedef Outcome<Error, Model::InsertTagsResult> InsertTagsOutcome;
			typedef std::future<InsertTagsOutcome> InsertTagsOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::InsertTagsRequest&, const InsertTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertTagsAsyncHandler;
			typedef Outcome<Error, Model::ListClusterTypeResult> ListClusterTypeOutcome;
			typedef std::future<ListClusterTypeOutcome> ListClusterTypeOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::ListClusterTypeRequest&, const ListClusterTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterTypeAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceResult> ListInstanceOutcome;
			typedef std::future<ListInstanceOutcome> ListInstanceOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::ListInstanceRequest&, const ListInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListTagsResult> ListTagsOutcome;
			typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::ListTagsRequest&, const ListTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsAsyncHandler;
			typedef Outcome<Error, Model::ListVpcInfoByInstanceResult> ListVpcInfoByInstanceOutcome;
			typedef std::future<ListVpcInfoByInstanceOutcome> ListVpcInfoByInstanceOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::ListVpcInfoByInstanceRequest&, const ListVpcInfoByInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcInfoByInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListVpcInfoByVpcResult> ListVpcInfoByVpcOutcome;
			typedef std::future<ListVpcInfoByVpcOutcome> ListVpcInfoByVpcOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::ListVpcInfoByVpcRequest&, const ListVpcInfoByVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcInfoByVpcAsyncHandler;
			typedef Outcome<Error, Model::UnbindInstance2VpcResult> UnbindInstance2VpcOutcome;
			typedef std::future<UnbindInstance2VpcOutcome> UnbindInstance2VpcOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::UnbindInstance2VpcRequest&, const UnbindInstance2VpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindInstance2VpcAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceResult> UpdateInstanceOutcome;
			typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
			typedef std::function<void(const OtsClient*, const Model::UpdateInstanceRequest&, const UpdateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceAsyncHandler;

			OtsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OtsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OtsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OtsClient();
			BindInstance2VpcOutcome bindInstance2Vpc(const Model::BindInstance2VpcRequest &request)const;
			void bindInstance2VpcAsync(const Model::BindInstance2VpcRequest& request, const BindInstance2VpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindInstance2VpcOutcomeCallable bindInstance2VpcCallable(const Model::BindInstance2VpcRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteTagsOutcome deleteTags(const Model::DeleteTagsRequest &request)const;
			void deleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagsOutcomeCallable deleteTagsCallable(const Model::DeleteTagsRequest& request) const;
			GetInstanceOutcome getInstance(const Model::GetInstanceRequest &request)const;
			void getInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceOutcomeCallable getInstanceCallable(const Model::GetInstanceRequest& request) const;
			InsertInstanceOutcome insertInstance(const Model::InsertInstanceRequest &request)const;
			void insertInstanceAsync(const Model::InsertInstanceRequest& request, const InsertInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertInstanceOutcomeCallable insertInstanceCallable(const Model::InsertInstanceRequest& request) const;
			InsertTagsOutcome insertTags(const Model::InsertTagsRequest &request)const;
			void insertTagsAsync(const Model::InsertTagsRequest& request, const InsertTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertTagsOutcomeCallable insertTagsCallable(const Model::InsertTagsRequest& request) const;
			ListClusterTypeOutcome listClusterType(const Model::ListClusterTypeRequest &request)const;
			void listClusterTypeAsync(const Model::ListClusterTypeRequest& request, const ListClusterTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterTypeOutcomeCallable listClusterTypeCallable(const Model::ListClusterTypeRequest& request) const;
			ListInstanceOutcome listInstance(const Model::ListInstanceRequest &request)const;
			void listInstanceAsync(const Model::ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceOutcomeCallable listInstanceCallable(const Model::ListInstanceRequest& request) const;
			ListTagsOutcome listTags(const Model::ListTagsRequest &request)const;
			void listTagsAsync(const Model::ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsOutcomeCallable listTagsCallable(const Model::ListTagsRequest& request) const;
			ListVpcInfoByInstanceOutcome listVpcInfoByInstance(const Model::ListVpcInfoByInstanceRequest &request)const;
			void listVpcInfoByInstanceAsync(const Model::ListVpcInfoByInstanceRequest& request, const ListVpcInfoByInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcInfoByInstanceOutcomeCallable listVpcInfoByInstanceCallable(const Model::ListVpcInfoByInstanceRequest& request) const;
			ListVpcInfoByVpcOutcome listVpcInfoByVpc(const Model::ListVpcInfoByVpcRequest &request)const;
			void listVpcInfoByVpcAsync(const Model::ListVpcInfoByVpcRequest& request, const ListVpcInfoByVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcInfoByVpcOutcomeCallable listVpcInfoByVpcCallable(const Model::ListVpcInfoByVpcRequest& request) const;
			UnbindInstance2VpcOutcome unbindInstance2Vpc(const Model::UnbindInstance2VpcRequest &request)const;
			void unbindInstance2VpcAsync(const Model::UnbindInstance2VpcRequest& request, const UnbindInstance2VpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindInstance2VpcOutcomeCallable unbindInstance2VpcCallable(const Model::UnbindInstance2VpcRequest& request) const;
			UpdateInstanceOutcome updateInstance(const Model::UpdateInstanceRequest &request)const;
			void updateInstanceAsync(const Model::UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceOutcomeCallable updateInstanceCallable(const Model::UpdateInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OTS_OTSCLIENT_H_
