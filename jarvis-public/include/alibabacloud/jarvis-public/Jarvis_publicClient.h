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

#ifndef ALIBABACLOUD_JARVIS_PUBLIC_JARVIS_PUBLICCLIENT_H_
#define ALIBABACLOUD_JARVIS_PUBLIC_JARVIS_PUBLICCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Jarvis_publicExport.h"
#include "model/DescribeAttackEventRequest.h"
#include "model/DescribeAttackEventResult.h"
#include "model/DescribeAttackedIpRequest.h"
#include "model/DescribeAttackedIpResult.h"
#include "model/DescribeCountAttackEventRequest.h"
#include "model/DescribeCountAttackEventResult.h"
#include "model/DescribePhoneInfoRequest.h"
#include "model/DescribePhoneInfoResult.h"


namespace AlibabaCloud
{
	namespace Jarvis_public
	{
		class ALIBABACLOUD_JARVIS_PUBLIC_EXPORT Jarvis_publicClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeAttackEventResult> DescribeAttackEventOutcome;
			typedef std::future<DescribeAttackEventOutcome> DescribeAttackEventOutcomeCallable;
			typedef std::function<void(const Jarvis_publicClient*, const Model::DescribeAttackEventRequest&, const DescribeAttackEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackEventAsyncHandler;
			typedef Outcome<Error, Model::DescribeAttackedIpResult> DescribeAttackedIpOutcome;
			typedef std::future<DescribeAttackedIpOutcome> DescribeAttackedIpOutcomeCallable;
			typedef std::function<void(const Jarvis_publicClient*, const Model::DescribeAttackedIpRequest&, const DescribeAttackedIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackedIpAsyncHandler;
			typedef Outcome<Error, Model::DescribeCountAttackEventResult> DescribeCountAttackEventOutcome;
			typedef std::future<DescribeCountAttackEventOutcome> DescribeCountAttackEventOutcomeCallable;
			typedef std::function<void(const Jarvis_publicClient*, const Model::DescribeCountAttackEventRequest&, const DescribeCountAttackEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCountAttackEventAsyncHandler;
			typedef Outcome<Error, Model::DescribePhoneInfoResult> DescribePhoneInfoOutcome;
			typedef std::future<DescribePhoneInfoOutcome> DescribePhoneInfoOutcomeCallable;
			typedef std::function<void(const Jarvis_publicClient*, const Model::DescribePhoneInfoRequest&, const DescribePhoneInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneInfoAsyncHandler;

			Jarvis_publicClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Jarvis_publicClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Jarvis_publicClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Jarvis_publicClient();
			DescribeAttackEventOutcome describeAttackEvent(const Model::DescribeAttackEventRequest &request)const;
			void describeAttackEventAsync(const Model::DescribeAttackEventRequest& request, const DescribeAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAttackEventOutcomeCallable describeAttackEventCallable(const Model::DescribeAttackEventRequest& request) const;
			DescribeAttackedIpOutcome describeAttackedIp(const Model::DescribeAttackedIpRequest &request)const;
			void describeAttackedIpAsync(const Model::DescribeAttackedIpRequest& request, const DescribeAttackedIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAttackedIpOutcomeCallable describeAttackedIpCallable(const Model::DescribeAttackedIpRequest& request) const;
			DescribeCountAttackEventOutcome describeCountAttackEvent(const Model::DescribeCountAttackEventRequest &request)const;
			void describeCountAttackEventAsync(const Model::DescribeCountAttackEventRequest& request, const DescribeCountAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCountAttackEventOutcomeCallable describeCountAttackEventCallable(const Model::DescribeCountAttackEventRequest& request) const;
			DescribePhoneInfoOutcome describePhoneInfo(const Model::DescribePhoneInfoRequest &request)const;
			void describePhoneInfoAsync(const Model::DescribePhoneInfoRequest& request, const DescribePhoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePhoneInfoOutcomeCallable describePhoneInfoCallable(const Model::DescribePhoneInfoRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_JARVIS_PUBLIC_JARVIS_PUBLICCLIENT_H_
