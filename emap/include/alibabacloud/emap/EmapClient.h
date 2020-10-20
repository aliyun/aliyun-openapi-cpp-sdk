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

#ifndef ALIBABACLOUD_EMAP_EMAPCLIENT_H_
#define ALIBABACLOUD_EMAP_EMAPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EmapExport.h"
#include "model/QueryMapInfoOpenRequest.h"
#include "model/QueryMapInfoOpenResult.h"


namespace AlibabaCloud
{
	namespace Emap
	{
		class ALIBABACLOUD_EMAP_EXPORT EmapClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::QueryMapInfoOpenResult> QueryMapInfoOpenOutcome;
			typedef std::future<QueryMapInfoOpenOutcome> QueryMapInfoOpenOutcomeCallable;
			typedef std::function<void(const EmapClient*, const Model::QueryMapInfoOpenRequest&, const QueryMapInfoOpenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMapInfoOpenAsyncHandler;

			EmapClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EmapClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EmapClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EmapClient();
			QueryMapInfoOpenOutcome queryMapInfoOpen(const Model::QueryMapInfoOpenRequest &request)const;
			void queryMapInfoOpenAsync(const Model::QueryMapInfoOpenRequest& request, const QueryMapInfoOpenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMapInfoOpenOutcomeCallable queryMapInfoOpenCallable(const Model::QueryMapInfoOpenRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EMAP_EMAPCLIENT_H_
