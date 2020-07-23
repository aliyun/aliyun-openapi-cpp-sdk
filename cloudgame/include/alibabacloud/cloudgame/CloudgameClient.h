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

#ifndef ALIBABACLOUD_CLOUDGAME_CLOUDGAMECLIENT_H_
#define ALIBABACLOUD_CLOUDGAME_CLOUDGAMECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CloudgameExport.h"
#include "model/ListGamesRequest.h"
#include "model/ListGamesResult.h"
#include "model/ListProjectsRequest.h"
#include "model/ListProjectsResult.h"


namespace AlibabaCloud
{
	namespace Cloudgame
	{
		class ALIBABACLOUD_CLOUDGAME_EXPORT CloudgameClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ListGamesResult> ListGamesOutcome;
			typedef std::future<ListGamesOutcome> ListGamesOutcomeCallable;
			typedef std::function<void(const CloudgameClient*, const Model::ListGamesRequest&, const ListGamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGamesAsyncHandler;
			typedef Outcome<Error, Model::ListProjectsResult> ListProjectsOutcome;
			typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
			typedef std::function<void(const CloudgameClient*, const Model::ListProjectsRequest&, const ListProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;

			CloudgameClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudgameClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudgameClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudgameClient();
			ListGamesOutcome listGames(const Model::ListGamesRequest &request)const;
			void listGamesAsync(const Model::ListGamesRequest& request, const ListGamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGamesOutcomeCallable listGamesCallable(const Model::ListGamesRequest& request) const;
			ListProjectsOutcome listProjects(const Model::ListProjectsRequest &request)const;
			void listProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectsOutcomeCallable listProjectsCallable(const Model::ListProjectsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDGAME_CLOUDGAMECLIENT_H_
