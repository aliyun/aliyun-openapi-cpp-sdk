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

#ifndef ALIBABACLOUD_INDUSTRY_BRAIN_INDUSTRY_BRAINCLIENT_H_
#define ALIBABACLOUD_INDUSTRY_BRAIN_INDUSTRY_BRAINCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Industry_brainExport.h"
#include "model/AsyncResponsePostRequest.h"
#include "model/AsyncResponsePostResult.h"
#include "model/GetAlgorithmHistoryResultRequest.h"
#include "model/GetAlgorithmHistoryResultResult.h"
#include "model/GetServiceResultAsyncRequest.h"
#include "model/GetServiceResultAsyncResult.h"
#include "model/InvokeServiceRequest.h"
#include "model/InvokeServiceResult.h"
#include "model/InvokeServiceAsyncRequest.h"
#include "model/InvokeServiceAsyncResult.h"


namespace AlibabaCloud
{
	namespace Industry_brain
	{
		class ALIBABACLOUD_INDUSTRY_BRAIN_EXPORT Industry_brainClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AsyncResponsePostResult> AsyncResponsePostOutcome;
			typedef std::future<AsyncResponsePostOutcome> AsyncResponsePostOutcomeCallable;
			typedef std::function<void(const Industry_brainClient*, const Model::AsyncResponsePostRequest&, const AsyncResponsePostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AsyncResponsePostAsyncHandler;
			typedef Outcome<Error, Model::GetAlgorithmHistoryResultResult> GetAlgorithmHistoryResultOutcome;
			typedef std::future<GetAlgorithmHistoryResultOutcome> GetAlgorithmHistoryResultOutcomeCallable;
			typedef std::function<void(const Industry_brainClient*, const Model::GetAlgorithmHistoryResultRequest&, const GetAlgorithmHistoryResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAlgorithmHistoryResultAsyncHandler;
			typedef Outcome<Error, Model::GetServiceResultAsyncResult> GetServiceResultAsyncOutcome;
			typedef std::future<GetServiceResultAsyncOutcome> GetServiceResultAsyncOutcomeCallable;
			typedef std::function<void(const Industry_brainClient*, const Model::GetServiceResultAsyncRequest&, const GetServiceResultAsyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceResultAsyncAsyncHandler;
			typedef Outcome<Error, Model::InvokeServiceResult> InvokeServiceOutcome;
			typedef std::future<InvokeServiceOutcome> InvokeServiceOutcomeCallable;
			typedef std::function<void(const Industry_brainClient*, const Model::InvokeServiceRequest&, const InvokeServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeServiceAsyncHandler;
			typedef Outcome<Error, Model::InvokeServiceAsyncResult> InvokeServiceAsyncOutcome;
			typedef std::future<InvokeServiceAsyncOutcome> InvokeServiceAsyncOutcomeCallable;
			typedef std::function<void(const Industry_brainClient*, const Model::InvokeServiceAsyncRequest&, const InvokeServiceAsyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeServiceAsyncAsyncHandler;

			Industry_brainClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Industry_brainClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Industry_brainClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Industry_brainClient();
			AsyncResponsePostOutcome asyncResponsePost(const Model::AsyncResponsePostRequest &request)const;
			void asyncResponsePostAsync(const Model::AsyncResponsePostRequest& request, const AsyncResponsePostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AsyncResponsePostOutcomeCallable asyncResponsePostCallable(const Model::AsyncResponsePostRequest& request) const;
			GetAlgorithmHistoryResultOutcome getAlgorithmHistoryResult(const Model::GetAlgorithmHistoryResultRequest &request)const;
			void getAlgorithmHistoryResultAsync(const Model::GetAlgorithmHistoryResultRequest& request, const GetAlgorithmHistoryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAlgorithmHistoryResultOutcomeCallable getAlgorithmHistoryResultCallable(const Model::GetAlgorithmHistoryResultRequest& request) const;
			GetServiceResultAsyncOutcome getServiceResultAsync(const Model::GetServiceResultAsyncRequest &request)const;
			void getServiceResultAsyncAsync(const Model::GetServiceResultAsyncRequest& request, const GetServiceResultAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceResultAsyncOutcomeCallable getServiceResultAsyncCallable(const Model::GetServiceResultAsyncRequest& request) const;
			InvokeServiceOutcome invokeService(const Model::InvokeServiceRequest &request)const;
			void invokeServiceAsync(const Model::InvokeServiceRequest& request, const InvokeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeServiceOutcomeCallable invokeServiceCallable(const Model::InvokeServiceRequest& request) const;
			InvokeServiceAsyncOutcome invokeServiceAsync(const Model::InvokeServiceAsyncRequest &request)const;
			void invokeServiceAsyncAsync(const Model::InvokeServiceAsyncRequest& request, const InvokeServiceAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeServiceAsyncOutcomeCallable invokeServiceAsyncCallable(const Model::InvokeServiceAsyncRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_INDUSTRY_BRAIN_INDUSTRY_BRAINCLIENT_H_
