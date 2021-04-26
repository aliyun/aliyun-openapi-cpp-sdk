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

#ifndef ALIBABACLOUD_SMC_SMCCLIENT_H_
#define ALIBABACLOUD_SMC_SMCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SmcExport.h"
#include "model/CreateReplicationJobRequest.h"
#include "model/CreateReplicationJobResult.h"
#include "model/CutOverReplicationJobRequest.h"
#include "model/CutOverReplicationJobResult.h"
#include "model/DeleteReplicationJobRequest.h"
#include "model/DeleteReplicationJobResult.h"
#include "model/DeleteSourceServerRequest.h"
#include "model/DeleteSourceServerResult.h"
#include "model/DescribeReplicationJobsRequest.h"
#include "model/DescribeReplicationJobsResult.h"
#include "model/DescribeSourceServersRequest.h"
#include "model/DescribeSourceServersResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyReplicationJobAttributeRequest.h"
#include "model/ModifyReplicationJobAttributeResult.h"
#include "model/ModifySourceServerAttributeRequest.h"
#include "model/ModifySourceServerAttributeResult.h"
#include "model/StartReplicationJobRequest.h"
#include "model/StartReplicationJobResult.h"
#include "model/StopReplicationJobRequest.h"
#include "model/StopReplicationJobResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Smc
	{
		class ALIBABACLOUD_SMC_EXPORT SmcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateReplicationJobResult> CreateReplicationJobOutcome;
			typedef std::future<CreateReplicationJobOutcome> CreateReplicationJobOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::CreateReplicationJobRequest&, const CreateReplicationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateReplicationJobAsyncHandler;
			typedef Outcome<Error, Model::CutOverReplicationJobResult> CutOverReplicationJobOutcome;
			typedef std::future<CutOverReplicationJobOutcome> CutOverReplicationJobOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::CutOverReplicationJobRequest&, const CutOverReplicationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CutOverReplicationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteReplicationJobResult> DeleteReplicationJobOutcome;
			typedef std::future<DeleteReplicationJobOutcome> DeleteReplicationJobOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::DeleteReplicationJobRequest&, const DeleteReplicationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReplicationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteSourceServerResult> DeleteSourceServerOutcome;
			typedef std::future<DeleteSourceServerOutcome> DeleteSourceServerOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::DeleteSourceServerRequest&, const DeleteSourceServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSourceServerAsyncHandler;
			typedef Outcome<Error, Model::DescribeReplicationJobsResult> DescribeReplicationJobsOutcome;
			typedef std::future<DescribeReplicationJobsOutcome> DescribeReplicationJobsOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::DescribeReplicationJobsRequest&, const DescribeReplicationJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReplicationJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSourceServersResult> DescribeSourceServersOutcome;
			typedef std::future<DescribeSourceServersOutcome> DescribeSourceServersOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::DescribeSourceServersRequest&, const DescribeSourceServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSourceServersAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyReplicationJobAttributeResult> ModifyReplicationJobAttributeOutcome;
			typedef std::future<ModifyReplicationJobAttributeOutcome> ModifyReplicationJobAttributeOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::ModifyReplicationJobAttributeRequest&, const ModifyReplicationJobAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReplicationJobAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifySourceServerAttributeResult> ModifySourceServerAttributeOutcome;
			typedef std::future<ModifySourceServerAttributeOutcome> ModifySourceServerAttributeOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::ModifySourceServerAttributeRequest&, const ModifySourceServerAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySourceServerAttributeAsyncHandler;
			typedef Outcome<Error, Model::StartReplicationJobResult> StartReplicationJobOutcome;
			typedef std::future<StartReplicationJobOutcome> StartReplicationJobOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::StartReplicationJobRequest&, const StartReplicationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartReplicationJobAsyncHandler;
			typedef Outcome<Error, Model::StopReplicationJobResult> StopReplicationJobOutcome;
			typedef std::future<StopReplicationJobOutcome> StopReplicationJobOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::StopReplicationJobRequest&, const StopReplicationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopReplicationJobAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const SmcClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			SmcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SmcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SmcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SmcClient();
			CreateReplicationJobOutcome createReplicationJob(const Model::CreateReplicationJobRequest &request)const;
			void createReplicationJobAsync(const Model::CreateReplicationJobRequest& request, const CreateReplicationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateReplicationJobOutcomeCallable createReplicationJobCallable(const Model::CreateReplicationJobRequest& request) const;
			CutOverReplicationJobOutcome cutOverReplicationJob(const Model::CutOverReplicationJobRequest &request)const;
			void cutOverReplicationJobAsync(const Model::CutOverReplicationJobRequest& request, const CutOverReplicationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CutOverReplicationJobOutcomeCallable cutOverReplicationJobCallable(const Model::CutOverReplicationJobRequest& request) const;
			DeleteReplicationJobOutcome deleteReplicationJob(const Model::DeleteReplicationJobRequest &request)const;
			void deleteReplicationJobAsync(const Model::DeleteReplicationJobRequest& request, const DeleteReplicationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteReplicationJobOutcomeCallable deleteReplicationJobCallable(const Model::DeleteReplicationJobRequest& request) const;
			DeleteSourceServerOutcome deleteSourceServer(const Model::DeleteSourceServerRequest &request)const;
			void deleteSourceServerAsync(const Model::DeleteSourceServerRequest& request, const DeleteSourceServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSourceServerOutcomeCallable deleteSourceServerCallable(const Model::DeleteSourceServerRequest& request) const;
			DescribeReplicationJobsOutcome describeReplicationJobs(const Model::DescribeReplicationJobsRequest &request)const;
			void describeReplicationJobsAsync(const Model::DescribeReplicationJobsRequest& request, const DescribeReplicationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeReplicationJobsOutcomeCallable describeReplicationJobsCallable(const Model::DescribeReplicationJobsRequest& request) const;
			DescribeSourceServersOutcome describeSourceServers(const Model::DescribeSourceServersRequest &request)const;
			void describeSourceServersAsync(const Model::DescribeSourceServersRequest& request, const DescribeSourceServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSourceServersOutcomeCallable describeSourceServersCallable(const Model::DescribeSourceServersRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyReplicationJobAttributeOutcome modifyReplicationJobAttribute(const Model::ModifyReplicationJobAttributeRequest &request)const;
			void modifyReplicationJobAttributeAsync(const Model::ModifyReplicationJobAttributeRequest& request, const ModifyReplicationJobAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReplicationJobAttributeOutcomeCallable modifyReplicationJobAttributeCallable(const Model::ModifyReplicationJobAttributeRequest& request) const;
			ModifySourceServerAttributeOutcome modifySourceServerAttribute(const Model::ModifySourceServerAttributeRequest &request)const;
			void modifySourceServerAttributeAsync(const Model::ModifySourceServerAttributeRequest& request, const ModifySourceServerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySourceServerAttributeOutcomeCallable modifySourceServerAttributeCallable(const Model::ModifySourceServerAttributeRequest& request) const;
			StartReplicationJobOutcome startReplicationJob(const Model::StartReplicationJobRequest &request)const;
			void startReplicationJobAsync(const Model::StartReplicationJobRequest& request, const StartReplicationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartReplicationJobOutcomeCallable startReplicationJobCallable(const Model::StartReplicationJobRequest& request) const;
			StopReplicationJobOutcome stopReplicationJob(const Model::StopReplicationJobRequest &request)const;
			void stopReplicationJobAsync(const Model::StopReplicationJobRequest& request, const StopReplicationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopReplicationJobOutcomeCallable stopReplicationJobCallable(const Model::StopReplicationJobRequest& request) const;
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

#endif // !ALIBABACLOUD_SMC_SMCCLIENT_H_
