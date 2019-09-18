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

#ifndef ALIBABACLOUD_TESLADAM_TESLADAMCLIENT_H_
#define ALIBABACLOUD_TESLADAM_TESLADAMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "TeslaDamExport.h"
#include "model/ActionRequest.h"
#include "model/ActionResult.h"
#include "model/ActionDiskCheckRequest.h"
#include "model/ActionDiskCheckResult.h"
#include "model/ActionDiskMaskRequest.h"
#include "model/ActionDiskMaskResult.h"
#include "model/ActionDiskRmaRequest.h"
#include "model/ActionDiskRmaResult.h"
#include "model/HostGetsRequest.h"
#include "model/HostGetsResult.h"


namespace AlibabaCloud
{
	namespace TeslaDam
	{
		class ALIBABACLOUD_TESLADAM_EXPORT TeslaDamClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActionResult> ActionOutcome;
			typedef std::future<ActionOutcome> ActionOutcomeCallable;
			typedef std::function<void(const TeslaDamClient*, const Model::ActionRequest&, const ActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActionAsyncHandler;
			typedef Outcome<Error, Model::ActionDiskCheckResult> ActionDiskCheckOutcome;
			typedef std::future<ActionDiskCheckOutcome> ActionDiskCheckOutcomeCallable;
			typedef std::function<void(const TeslaDamClient*, const Model::ActionDiskCheckRequest&, const ActionDiskCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActionDiskCheckAsyncHandler;
			typedef Outcome<Error, Model::ActionDiskMaskResult> ActionDiskMaskOutcome;
			typedef std::future<ActionDiskMaskOutcome> ActionDiskMaskOutcomeCallable;
			typedef std::function<void(const TeslaDamClient*, const Model::ActionDiskMaskRequest&, const ActionDiskMaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActionDiskMaskAsyncHandler;
			typedef Outcome<Error, Model::ActionDiskRmaResult> ActionDiskRmaOutcome;
			typedef std::future<ActionDiskRmaOutcome> ActionDiskRmaOutcomeCallable;
			typedef std::function<void(const TeslaDamClient*, const Model::ActionDiskRmaRequest&, const ActionDiskRmaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActionDiskRmaAsyncHandler;
			typedef Outcome<Error, Model::HostGetsResult> HostGetsOutcome;
			typedef std::future<HostGetsOutcome> HostGetsOutcomeCallable;
			typedef std::function<void(const TeslaDamClient*, const Model::HostGetsRequest&, const HostGetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HostGetsAsyncHandler;

			TeslaDamClient(const Credentials &credentials, const ClientConfiguration &configuration);
			TeslaDamClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			TeslaDamClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~TeslaDamClient();
			ActionOutcome action(const Model::ActionRequest &request)const;
			void actionAsync(const Model::ActionRequest& request, const ActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActionOutcomeCallable actionCallable(const Model::ActionRequest& request) const;
			ActionDiskCheckOutcome actionDiskCheck(const Model::ActionDiskCheckRequest &request)const;
			void actionDiskCheckAsync(const Model::ActionDiskCheckRequest& request, const ActionDiskCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActionDiskCheckOutcomeCallable actionDiskCheckCallable(const Model::ActionDiskCheckRequest& request) const;
			ActionDiskMaskOutcome actionDiskMask(const Model::ActionDiskMaskRequest &request)const;
			void actionDiskMaskAsync(const Model::ActionDiskMaskRequest& request, const ActionDiskMaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActionDiskMaskOutcomeCallable actionDiskMaskCallable(const Model::ActionDiskMaskRequest& request) const;
			ActionDiskRmaOutcome actionDiskRma(const Model::ActionDiskRmaRequest &request)const;
			void actionDiskRmaAsync(const Model::ActionDiskRmaRequest& request, const ActionDiskRmaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActionDiskRmaOutcomeCallable actionDiskRmaCallable(const Model::ActionDiskRmaRequest& request) const;
			HostGetsOutcome hostGets(const Model::HostGetsRequest &request)const;
			void hostGetsAsync(const Model::HostGetsRequest& request, const HostGetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HostGetsOutcomeCallable hostGetsCallable(const Model::HostGetsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_TESLADAM_TESLADAMCLIENT_H_
