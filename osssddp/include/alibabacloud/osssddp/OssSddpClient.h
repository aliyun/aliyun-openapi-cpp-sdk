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

#ifndef ALIBABACLOUD_OSSSDDP_OSSSDDPCLIENT_H_
#define ALIBABACLOUD_OSSSDDP_OSSSDDPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OssSddpExport.h"
#include "model/GetSddpVersionRequest.h"
#include "model/GetSddpVersionResult.h"
#include "model/UpgradeSddpVersionRequest.h"
#include "model/UpgradeSddpVersionResult.h"


namespace AlibabaCloud
{
	namespace OssSddp
	{
		class ALIBABACLOUD_OSSSDDP_EXPORT OssSddpClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetSddpVersionResult> GetSddpVersionOutcome;
			typedef std::future<GetSddpVersionOutcome> GetSddpVersionOutcomeCallable;
			typedef std::function<void(const OssSddpClient*, const Model::GetSddpVersionRequest&, const GetSddpVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSddpVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeSddpVersionResult> UpgradeSddpVersionOutcome;
			typedef std::future<UpgradeSddpVersionOutcome> UpgradeSddpVersionOutcomeCallable;
			typedef std::function<void(const OssSddpClient*, const Model::UpgradeSddpVersionRequest&, const UpgradeSddpVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeSddpVersionAsyncHandler;

			OssSddpClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OssSddpClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OssSddpClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OssSddpClient();
			GetSddpVersionOutcome getSddpVersion(const Model::GetSddpVersionRequest &request)const;
			void getSddpVersionAsync(const Model::GetSddpVersionRequest& request, const GetSddpVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSddpVersionOutcomeCallable getSddpVersionCallable(const Model::GetSddpVersionRequest& request) const;
			UpgradeSddpVersionOutcome upgradeSddpVersion(const Model::UpgradeSddpVersionRequest &request)const;
			void upgradeSddpVersionAsync(const Model::UpgradeSddpVersionRequest& request, const UpgradeSddpVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeSddpVersionOutcomeCallable upgradeSddpVersionCallable(const Model::UpgradeSddpVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OSSSDDP_OSSSDDPCLIENT_H_
