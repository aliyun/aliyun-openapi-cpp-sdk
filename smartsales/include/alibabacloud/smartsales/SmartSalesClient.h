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

#ifndef ALIBABACLOUD_SMARTSALES_SMARTSALESCLIENT_H_
#define ALIBABACLOUD_SMARTSALES_SMARTSALESCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SmartSalesExport.h"
#include "model/UpdateCallRequest.h"
#include "model/UpdateCallResult.h"
#include "model/UploadVoiceDataRequest.h"
#include "model/UploadVoiceDataResult.h"


namespace AlibabaCloud
{
	namespace SmartSales
	{
		class ALIBABACLOUD_SMARTSALES_EXPORT SmartSalesClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::UpdateCallResult> UpdateCallOutcome;
			typedef std::future<UpdateCallOutcome> UpdateCallOutcomeCallable;
			typedef std::function<void(const SmartSalesClient*, const Model::UpdateCallRequest&, const UpdateCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCallAsyncHandler;
			typedef Outcome<Error, Model::UploadVoiceDataResult> UploadVoiceDataOutcome;
			typedef std::future<UploadVoiceDataOutcome> UploadVoiceDataOutcomeCallable;
			typedef std::function<void(const SmartSalesClient*, const Model::UploadVoiceDataRequest&, const UploadVoiceDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadVoiceDataAsyncHandler;

			SmartSalesClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SmartSalesClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SmartSalesClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SmartSalesClient();
			UpdateCallOutcome updateCall(const Model::UpdateCallRequest &request)const;
			void updateCallAsync(const Model::UpdateCallRequest& request, const UpdateCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCallOutcomeCallable updateCallCallable(const Model::UpdateCallRequest& request) const;
			UploadVoiceDataOutcome uploadVoiceData(const Model::UploadVoiceDataRequest &request)const;
			void uploadVoiceDataAsync(const Model::UploadVoiceDataRequest& request, const UploadVoiceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadVoiceDataOutcomeCallable uploadVoiceDataCallable(const Model::UploadVoiceDataRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SMARTSALES_SMARTSALESCLIENT_H_
