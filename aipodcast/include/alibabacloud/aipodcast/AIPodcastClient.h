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

#ifndef ALIBABACLOUD_AIPODCAST_AIPODCASTCLIENT_H_
#define ALIBABACLOUD_AIPODCAST_AIPODCASTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "AIPodcastExport.h"
#include "model/PodcastTaskResultQueryRequest.h"
#include "model/PodcastTaskResultQueryResult.h"
#include "model/PodcastTaskSubmitRequest.h"
#include "model/PodcastTaskSubmitResult.h"


namespace AlibabaCloud
{
	namespace AIPodcast
	{
		class ALIBABACLOUD_AIPODCAST_EXPORT AIPodcastClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::PodcastTaskResultQueryResult> PodcastTaskResultQueryOutcome;
			typedef std::future<PodcastTaskResultQueryOutcome> PodcastTaskResultQueryOutcomeCallable;
			typedef std::function<void(const AIPodcastClient*, const Model::PodcastTaskResultQueryRequest&, const PodcastTaskResultQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PodcastTaskResultQueryAsyncHandler;
			typedef Outcome<Error, Model::PodcastTaskSubmitResult> PodcastTaskSubmitOutcome;
			typedef std::future<PodcastTaskSubmitOutcome> PodcastTaskSubmitOutcomeCallable;
			typedef std::function<void(const AIPodcastClient*, const Model::PodcastTaskSubmitRequest&, const PodcastTaskSubmitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PodcastTaskSubmitAsyncHandler;

			AIPodcastClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AIPodcastClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AIPodcastClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AIPodcastClient();
			PodcastTaskResultQueryOutcome podcastTaskResultQuery(const Model::PodcastTaskResultQueryRequest &request)const;
			void podcastTaskResultQueryAsync(const Model::PodcastTaskResultQueryRequest& request, const PodcastTaskResultQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PodcastTaskResultQueryOutcomeCallable podcastTaskResultQueryCallable(const Model::PodcastTaskResultQueryRequest& request) const;
			PodcastTaskSubmitOutcome podcastTaskSubmit(const Model::PodcastTaskSubmitRequest &request)const;
			void podcastTaskSubmitAsync(const Model::PodcastTaskSubmitRequest& request, const PodcastTaskSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PodcastTaskSubmitOutcomeCallable podcastTaskSubmitCallable(const Model::PodcastTaskSubmitRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AIPODCAST_AIPODCASTCLIENT_H_
