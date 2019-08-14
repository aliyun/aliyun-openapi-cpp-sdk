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

#ifndef ALIBABACLOUD_UBSMS_UBSMSCLIENT_H_
#define ALIBABACLOUD_UBSMS_UBSMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "UbsmsExport.h"
#include "model/DescribeBusinessStatusRequest.h"
#include "model/DescribeBusinessStatusResult.h"
#include "model/NotifyUserBusinessCommandRequest.h"
#include "model/NotifyUserBusinessCommandResult.h"
#include "model/SetUserBusinessStatusRequest.h"
#include "model/SetUserBusinessStatusResult.h"


namespace AlibabaCloud
{
	namespace Ubsms
	{
		class ALIBABACLOUD_UBSMS_EXPORT UbsmsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeBusinessStatusResult> DescribeBusinessStatusOutcome;
			typedef std::future<DescribeBusinessStatusOutcome> DescribeBusinessStatusOutcomeCallable;
			typedef std::function<void(const UbsmsClient*, const Model::DescribeBusinessStatusRequest&, const DescribeBusinessStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBusinessStatusAsyncHandler;
			typedef Outcome<Error, Model::NotifyUserBusinessCommandResult> NotifyUserBusinessCommandOutcome;
			typedef std::future<NotifyUserBusinessCommandOutcome> NotifyUserBusinessCommandOutcomeCallable;
			typedef std::function<void(const UbsmsClient*, const Model::NotifyUserBusinessCommandRequest&, const NotifyUserBusinessCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NotifyUserBusinessCommandAsyncHandler;
			typedef Outcome<Error, Model::SetUserBusinessStatusResult> SetUserBusinessStatusOutcome;
			typedef std::future<SetUserBusinessStatusOutcome> SetUserBusinessStatusOutcomeCallable;
			typedef std::function<void(const UbsmsClient*, const Model::SetUserBusinessStatusRequest&, const SetUserBusinessStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetUserBusinessStatusAsyncHandler;

			UbsmsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			UbsmsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			UbsmsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~UbsmsClient();
			DescribeBusinessStatusOutcome describeBusinessStatus(const Model::DescribeBusinessStatusRequest &request)const;
			void describeBusinessStatusAsync(const Model::DescribeBusinessStatusRequest& request, const DescribeBusinessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBusinessStatusOutcomeCallable describeBusinessStatusCallable(const Model::DescribeBusinessStatusRequest& request) const;
			NotifyUserBusinessCommandOutcome notifyUserBusinessCommand(const Model::NotifyUserBusinessCommandRequest &request)const;
			void notifyUserBusinessCommandAsync(const Model::NotifyUserBusinessCommandRequest& request, const NotifyUserBusinessCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NotifyUserBusinessCommandOutcomeCallable notifyUserBusinessCommandCallable(const Model::NotifyUserBusinessCommandRequest& request) const;
			SetUserBusinessStatusOutcome setUserBusinessStatus(const Model::SetUserBusinessStatusRequest &request)const;
			void setUserBusinessStatusAsync(const Model::SetUserBusinessStatusRequest& request, const SetUserBusinessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetUserBusinessStatusOutcomeCallable setUserBusinessStatusCallable(const Model::SetUserBusinessStatusRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_UBSMS_UBSMSCLIENT_H_
