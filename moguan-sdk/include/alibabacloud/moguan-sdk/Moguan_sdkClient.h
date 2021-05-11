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

#ifndef ALIBABACLOUD_MOGUAN_SDK_MOGUAN_SDKCLIENT_H_
#define ALIBABACLOUD_MOGUAN_SDK_MOGUAN_SDKCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Moguan_sdkExport.h"
#include "model/RegisterDeviceRequest.h"
#include "model/RegisterDeviceResult.h"


namespace AlibabaCloud
{
	namespace Moguan_sdk
	{
		class ALIBABACLOUD_MOGUAN_SDK_EXPORT Moguan_sdkClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::RegisterDeviceResult> RegisterDeviceOutcome;
			typedef std::future<RegisterDeviceOutcome> RegisterDeviceOutcomeCallable;
			typedef std::function<void(const Moguan_sdkClient*, const Model::RegisterDeviceRequest&, const RegisterDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDeviceAsyncHandler;

			Moguan_sdkClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Moguan_sdkClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Moguan_sdkClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Moguan_sdkClient();
			RegisterDeviceOutcome registerDevice(const Model::RegisterDeviceRequest &request)const;
			void registerDeviceAsync(const Model::RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDeviceOutcomeCallable registerDeviceCallable(const Model::RegisterDeviceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_MOGUAN_SDK_MOGUAN_SDKCLIENT_H_
