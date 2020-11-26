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

#ifndef ALIBABACLOUD_ACTIONTRAIL_ACTIONTRAILCLIENT_H_
#define ALIBABACLOUD_ACTIONTRAIL_ACTIONTRAILCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ActiontrailExport.h"
#include "model/CreateDeliveryHistoryJobRequest.h"
#include "model/CreateDeliveryHistoryJobResult.h"
#include "model/DeleteDeliveryHistoryJobRequest.h"
#include "model/DeleteDeliveryHistoryJobResult.h"
#include "model/ListDeliveryHistoryJobsRequest.h"
#include "model/ListDeliveryHistoryJobsResult.h"
#include "model/LookupEventsRequest.h"
#include "model/LookupEventsResult.h"


namespace AlibabaCloud
{
	namespace Actiontrail
	{
		class ALIBABACLOUD_ACTIONTRAIL_EXPORT ActiontrailClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateDeliveryHistoryJobResult> CreateDeliveryHistoryJobOutcome;
			typedef std::future<CreateDeliveryHistoryJobOutcome> CreateDeliveryHistoryJobOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::CreateDeliveryHistoryJobRequest&, const CreateDeliveryHistoryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeliveryHistoryJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeliveryHistoryJobResult> DeleteDeliveryHistoryJobOutcome;
			typedef std::future<DeleteDeliveryHistoryJobOutcome> DeleteDeliveryHistoryJobOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::DeleteDeliveryHistoryJobRequest&, const DeleteDeliveryHistoryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeliveryHistoryJobAsyncHandler;
			typedef Outcome<Error, Model::ListDeliveryHistoryJobsResult> ListDeliveryHistoryJobsOutcome;
			typedef std::future<ListDeliveryHistoryJobsOutcome> ListDeliveryHistoryJobsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::ListDeliveryHistoryJobsRequest&, const ListDeliveryHistoryJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeliveryHistoryJobsAsyncHandler;
			typedef Outcome<Error, Model::LookupEventsResult> LookupEventsOutcome;
			typedef std::future<LookupEventsOutcome> LookupEventsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::LookupEventsRequest&, const LookupEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LookupEventsAsyncHandler;

			ActiontrailClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ActiontrailClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ActiontrailClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ActiontrailClient();
			CreateDeliveryHistoryJobOutcome createDeliveryHistoryJob(const Model::CreateDeliveryHistoryJobRequest &request)const;
			void createDeliveryHistoryJobAsync(const Model::CreateDeliveryHistoryJobRequest& request, const CreateDeliveryHistoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeliveryHistoryJobOutcomeCallable createDeliveryHistoryJobCallable(const Model::CreateDeliveryHistoryJobRequest& request) const;
			DeleteDeliveryHistoryJobOutcome deleteDeliveryHistoryJob(const Model::DeleteDeliveryHistoryJobRequest &request)const;
			void deleteDeliveryHistoryJobAsync(const Model::DeleteDeliveryHistoryJobRequest& request, const DeleteDeliveryHistoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeliveryHistoryJobOutcomeCallable deleteDeliveryHistoryJobCallable(const Model::DeleteDeliveryHistoryJobRequest& request) const;
			ListDeliveryHistoryJobsOutcome listDeliveryHistoryJobs(const Model::ListDeliveryHistoryJobsRequest &request)const;
			void listDeliveryHistoryJobsAsync(const Model::ListDeliveryHistoryJobsRequest& request, const ListDeliveryHistoryJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeliveryHistoryJobsOutcomeCallable listDeliveryHistoryJobsCallable(const Model::ListDeliveryHistoryJobsRequest& request) const;
			LookupEventsOutcome lookupEvents(const Model::LookupEventsRequest &request)const;
			void lookupEventsAsync(const Model::LookupEventsRequest& request, const LookupEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LookupEventsOutcomeCallable lookupEventsCallable(const Model::LookupEventsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ACTIONTRAIL_ACTIONTRAILCLIENT_H_
