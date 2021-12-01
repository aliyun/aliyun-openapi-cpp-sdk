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

#ifndef ALIBABACLOUD_SAF_SAFCLIENT_H_
#define ALIBABACLOUD_SAF_SAFCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SafExport.h"
#include "model/ExecuteExtendServiceRequest.h"
#include "model/ExecuteExtendServiceResult.h"
#include "model/ExecuteRequestRequest.h"
#include "model/ExecuteRequestResult.h"
#include "model/ExecuteRequestMLRequest.h"
#include "model/ExecuteRequestMLResult.h"
#include "model/ExecuteRequestSGRequest.h"
#include "model/ExecuteRequestSGResult.h"
#include "model/RequestDecisionRequest.h"
#include "model/RequestDecisionResult.h"


namespace AlibabaCloud
{
	namespace Saf
	{
		class ALIBABACLOUD_SAF_EXPORT SafClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ExecuteExtendServiceResult> ExecuteExtendServiceOutcome;
			typedef std::future<ExecuteExtendServiceOutcome> ExecuteExtendServiceOutcomeCallable;
			typedef std::function<void(const SafClient*, const Model::ExecuteExtendServiceRequest&, const ExecuteExtendServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteExtendServiceAsyncHandler;
			typedef Outcome<Error, Model::ExecuteRequestResult> ExecuteRequestOutcome;
			typedef std::future<ExecuteRequestOutcome> ExecuteRequestOutcomeCallable;
			typedef std::function<void(const SafClient*, const Model::ExecuteRequestRequest&, const ExecuteRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteRequestAsyncHandler;
			typedef Outcome<Error, Model::ExecuteRequestMLResult> ExecuteRequestMLOutcome;
			typedef std::future<ExecuteRequestMLOutcome> ExecuteRequestMLOutcomeCallable;
			typedef std::function<void(const SafClient*, const Model::ExecuteRequestMLRequest&, const ExecuteRequestMLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteRequestMLAsyncHandler;
			typedef Outcome<Error, Model::ExecuteRequestSGResult> ExecuteRequestSGOutcome;
			typedef std::future<ExecuteRequestSGOutcome> ExecuteRequestSGOutcomeCallable;
			typedef std::function<void(const SafClient*, const Model::ExecuteRequestSGRequest&, const ExecuteRequestSGOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteRequestSGAsyncHandler;
			typedef Outcome<Error, Model::RequestDecisionResult> RequestDecisionOutcome;
			typedef std::future<RequestDecisionOutcome> RequestDecisionOutcomeCallable;
			typedef std::function<void(const SafClient*, const Model::RequestDecisionRequest&, const RequestDecisionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RequestDecisionAsyncHandler;

			SafClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SafClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SafClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SafClient();
			ExecuteExtendServiceOutcome executeExtendService(const Model::ExecuteExtendServiceRequest &request)const;
			void executeExtendServiceAsync(const Model::ExecuteExtendServiceRequest& request, const ExecuteExtendServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteExtendServiceOutcomeCallable executeExtendServiceCallable(const Model::ExecuteExtendServiceRequest& request) const;
			ExecuteRequestOutcome executeRequest(const Model::ExecuteRequestRequest &request)const;
			void executeRequestAsync(const Model::ExecuteRequestRequest& request, const ExecuteRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteRequestOutcomeCallable executeRequestCallable(const Model::ExecuteRequestRequest& request) const;
			ExecuteRequestMLOutcome executeRequestML(const Model::ExecuteRequestMLRequest &request)const;
			void executeRequestMLAsync(const Model::ExecuteRequestMLRequest& request, const ExecuteRequestMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteRequestMLOutcomeCallable executeRequestMLCallable(const Model::ExecuteRequestMLRequest& request) const;
			ExecuteRequestSGOutcome executeRequestSG(const Model::ExecuteRequestSGRequest &request)const;
			void executeRequestSGAsync(const Model::ExecuteRequestSGRequest& request, const ExecuteRequestSGAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteRequestSGOutcomeCallable executeRequestSGCallable(const Model::ExecuteRequestSGRequest& request) const;
			RequestDecisionOutcome requestDecision(const Model::RequestDecisionRequest &request)const;
			void requestDecisionAsync(const Model::RequestDecisionRequest& request, const RequestDecisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RequestDecisionOutcomeCallable requestDecisionCallable(const Model::RequestDecisionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SAF_SAFCLIENT_H_
