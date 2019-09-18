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

#ifndef ALIBABACLOUD_CCS_CCSCLIENT_H_
#define ALIBABACLOUD_CCS_CCSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CcsExport.h"
#include "model/CreateTicketRequest.h"
#include "model/CreateTicketResult.h"
#include "model/GetHotlineRecordRequest.h"
#include "model/GetHotlineRecordResult.h"
#include "model/ProceedTicketRequest.h"
#include "model/ProceedTicketResult.h"
#include "model/QueryHotlineRecordRequest.h"
#include "model/QueryHotlineRecordResult.h"
#include "model/QueryTicketRequest.h"
#include "model/QueryTicketResult.h"


namespace AlibabaCloud
{
	namespace Ccs
	{
		class ALIBABACLOUD_CCS_EXPORT CcsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateTicketResult> CreateTicketOutcome;
			typedef std::future<CreateTicketOutcome> CreateTicketOutcomeCallable;
			typedef std::function<void(const CcsClient*, const Model::CreateTicketRequest&, const CreateTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTicketAsyncHandler;
			typedef Outcome<Error, Model::GetHotlineRecordResult> GetHotlineRecordOutcome;
			typedef std::future<GetHotlineRecordOutcome> GetHotlineRecordOutcomeCallable;
			typedef std::function<void(const CcsClient*, const Model::GetHotlineRecordRequest&, const GetHotlineRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHotlineRecordAsyncHandler;
			typedef Outcome<Error, Model::ProceedTicketResult> ProceedTicketOutcome;
			typedef std::future<ProceedTicketOutcome> ProceedTicketOutcomeCallable;
			typedef std::function<void(const CcsClient*, const Model::ProceedTicketRequest&, const ProceedTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProceedTicketAsyncHandler;
			typedef Outcome<Error, Model::QueryHotlineRecordResult> QueryHotlineRecordOutcome;
			typedef std::future<QueryHotlineRecordOutcome> QueryHotlineRecordOutcomeCallable;
			typedef std::function<void(const CcsClient*, const Model::QueryHotlineRecordRequest&, const QueryHotlineRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryHotlineRecordAsyncHandler;
			typedef Outcome<Error, Model::QueryTicketResult> QueryTicketOutcome;
			typedef std::future<QueryTicketOutcome> QueryTicketOutcomeCallable;
			typedef std::function<void(const CcsClient*, const Model::QueryTicketRequest&, const QueryTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTicketAsyncHandler;

			CcsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CcsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CcsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CcsClient();
			CreateTicketOutcome createTicket(const Model::CreateTicketRequest &request)const;
			void createTicketAsync(const Model::CreateTicketRequest& request, const CreateTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTicketOutcomeCallable createTicketCallable(const Model::CreateTicketRequest& request) const;
			GetHotlineRecordOutcome getHotlineRecord(const Model::GetHotlineRecordRequest &request)const;
			void getHotlineRecordAsync(const Model::GetHotlineRecordRequest& request, const GetHotlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHotlineRecordOutcomeCallable getHotlineRecordCallable(const Model::GetHotlineRecordRequest& request) const;
			ProceedTicketOutcome proceedTicket(const Model::ProceedTicketRequest &request)const;
			void proceedTicketAsync(const Model::ProceedTicketRequest& request, const ProceedTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProceedTicketOutcomeCallable proceedTicketCallable(const Model::ProceedTicketRequest& request) const;
			QueryHotlineRecordOutcome queryHotlineRecord(const Model::QueryHotlineRecordRequest &request)const;
			void queryHotlineRecordAsync(const Model::QueryHotlineRecordRequest& request, const QueryHotlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryHotlineRecordOutcomeCallable queryHotlineRecordCallable(const Model::QueryHotlineRecordRequest& request) const;
			QueryTicketOutcome queryTicket(const Model::QueryTicketRequest &request)const;
			void queryTicketAsync(const Model::QueryTicketRequest& request, const QueryTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTicketOutcomeCallable queryTicketCallable(const Model::QueryTicketRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CCS_CCSCLIENT_H_
