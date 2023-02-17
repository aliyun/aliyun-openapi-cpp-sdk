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

#ifndef ALIBABACLOUD_VIAPI_VIAPICLIENT_H_
#define ALIBABACLOUD_VIAPI_VIAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ViapiExport.h"
#include "model/CancelWaitingAsyncJobRequest.h"
#include "model/CancelWaitingAsyncJobResult.h"
#include "model/GetAsyncJobResultRequest.h"
#include "model/GetAsyncJobResultResult.h"
#include "model/QueryAsyncJobListRequest.h"
#include "model/QueryAsyncJobListResult.h"


namespace AlibabaCloud
{
	namespace Viapi
	{
		class ALIBABACLOUD_VIAPI_EXPORT ViapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CancelWaitingAsyncJobResult> CancelWaitingAsyncJobOutcome;
			typedef std::future<CancelWaitingAsyncJobOutcome> CancelWaitingAsyncJobOutcomeCallable;
			typedef std::function<void(const ViapiClient*, const Model::CancelWaitingAsyncJobRequest&, const CancelWaitingAsyncJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelWaitingAsyncJobAsyncHandler;
			typedef Outcome<Error, Model::GetAsyncJobResultResult> GetAsyncJobResultOutcome;
			typedef std::future<GetAsyncJobResultOutcome> GetAsyncJobResultOutcomeCallable;
			typedef std::function<void(const ViapiClient*, const Model::GetAsyncJobResultRequest&, const GetAsyncJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsyncJobResultAsyncHandler;
			typedef Outcome<Error, Model::QueryAsyncJobListResult> QueryAsyncJobListOutcome;
			typedef std::future<QueryAsyncJobListOutcome> QueryAsyncJobListOutcomeCallable;
			typedef std::function<void(const ViapiClient*, const Model::QueryAsyncJobListRequest&, const QueryAsyncJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAsyncJobListAsyncHandler;

			ViapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ViapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ViapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ViapiClient();
			CancelWaitingAsyncJobOutcome cancelWaitingAsyncJob(const Model::CancelWaitingAsyncJobRequest &request)const;
			void cancelWaitingAsyncJobAsync(const Model::CancelWaitingAsyncJobRequest& request, const CancelWaitingAsyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelWaitingAsyncJobOutcomeCallable cancelWaitingAsyncJobCallable(const Model::CancelWaitingAsyncJobRequest& request) const;
			GetAsyncJobResultOutcome getAsyncJobResult(const Model::GetAsyncJobResultRequest &request)const;
			void getAsyncJobResultAsync(const Model::GetAsyncJobResultRequest& request, const GetAsyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsyncJobResultOutcomeCallable getAsyncJobResultCallable(const Model::GetAsyncJobResultRequest& request) const;
			QueryAsyncJobListOutcome queryAsyncJobList(const Model::QueryAsyncJobListRequest &request)const;
			void queryAsyncJobListAsync(const Model::QueryAsyncJobListRequest& request, const QueryAsyncJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAsyncJobListOutcomeCallable queryAsyncJobListCallable(const Model::QueryAsyncJobListRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VIAPI_VIAPICLIENT_H_
