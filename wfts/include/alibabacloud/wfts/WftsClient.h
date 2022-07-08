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

#ifndef ALIBABACLOUD_WFTS_WFTSCLIENT_H_
#define ALIBABACLOUD_WFTS_WFTSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "WftsExport.h"
#include "model/GetLjxAccountInfoRequest.h"
#include "model/GetLjxAccountInfoResult.h"


namespace AlibabaCloud
{
	namespace Wfts
	{
		class ALIBABACLOUD_WFTS_EXPORT WftsClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetLjxAccountInfoResult> GetLjxAccountInfoOutcome;
			typedef std::future<GetLjxAccountInfoOutcome> GetLjxAccountInfoOutcomeCallable;
			typedef std::function<void(const WftsClient*, const Model::GetLjxAccountInfoRequest&, const GetLjxAccountInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLjxAccountInfoAsyncHandler;

			WftsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			WftsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			WftsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~WftsClient();
			GetLjxAccountInfoOutcome getLjxAccountInfo(const Model::GetLjxAccountInfoRequest &request)const;
			void getLjxAccountInfoAsync(const Model::GetLjxAccountInfoRequest& request, const GetLjxAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLjxAccountInfoOutcomeCallable getLjxAccountInfoCallable(const Model::GetLjxAccountInfoRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_WFTS_WFTSCLIENT_H_
