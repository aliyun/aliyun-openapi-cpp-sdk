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

#ifndef ALIBABACLOUD_BTRIPOPEN_BTRIPOPENCLIENT_H_
#define ALIBABACLOUD_BTRIPOPEN_BTRIPOPENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "BtripOpenExport.h"
#include "model/AccessTokenRequest.h"
#include "model/AccessTokenResult.h"


namespace AlibabaCloud
{
	namespace BtripOpen
	{
		class ALIBABACLOUD_BTRIPOPEN_EXPORT BtripOpenClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AccessTokenResult> AccessTokenOutcome;
			typedef std::future<AccessTokenOutcome> AccessTokenOutcomeCallable;
			typedef std::function<void(const BtripOpenClient*, const Model::AccessTokenRequest&, const AccessTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AccessTokenAsyncHandler;

			BtripOpenClient(const Credentials &credentials, const ClientConfiguration &configuration);
			BtripOpenClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			BtripOpenClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~BtripOpenClient();
			AccessTokenOutcome accessToken(const Model::AccessTokenRequest &request)const;
			void accessTokenAsync(const Model::AccessTokenRequest& request, const AccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AccessTokenOutcomeCallable accessTokenCallable(const Model::AccessTokenRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_BTRIPOPEN_BTRIPOPENCLIENT_H_
