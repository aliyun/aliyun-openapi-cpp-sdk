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
#include "model/GetHotlineRecordRequest.h"
#include "model/GetHotlineRecordResult.h"
#include "model/QueryHotlineRecordRequest.h"
#include "model/QueryHotlineRecordResult.h"


namespace AlibabaCloud
{
	namespace Ccs
	{
		class ALIBABACLOUD_CCS_EXPORT CcsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetHotlineRecordResult> GetHotlineRecordOutcome;
			typedef std::future<GetHotlineRecordOutcome> GetHotlineRecordOutcomeCallable;
			typedef std::function<void(const CcsClient*, const Model::GetHotlineRecordRequest&, const GetHotlineRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHotlineRecordAsyncHandler;
			typedef Outcome<Error, Model::QueryHotlineRecordResult> QueryHotlineRecordOutcome;
			typedef std::future<QueryHotlineRecordOutcome> QueryHotlineRecordOutcomeCallable;
			typedef std::function<void(const CcsClient*, const Model::QueryHotlineRecordRequest&, const QueryHotlineRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryHotlineRecordAsyncHandler;

			CcsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CcsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CcsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CcsClient();
			GetHotlineRecordOutcome getHotlineRecord(const Model::GetHotlineRecordRequest &request)const;
			void getHotlineRecordAsync(const Model::GetHotlineRecordRequest& request, const GetHotlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHotlineRecordOutcomeCallable getHotlineRecordCallable(const Model::GetHotlineRecordRequest& request) const;
			QueryHotlineRecordOutcome queryHotlineRecord(const Model::QueryHotlineRecordRequest &request)const;
			void queryHotlineRecordAsync(const Model::QueryHotlineRecordRequest& request, const QueryHotlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryHotlineRecordOutcomeCallable queryHotlineRecordCallable(const Model::QueryHotlineRecordRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CCS_CCSCLIENT_H_
