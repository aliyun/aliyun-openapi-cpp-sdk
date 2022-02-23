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

#ifndef ALIBABACLOUD_CLOUDAUTH_CONSOLE_CLOUDAUTH_CONSOLECLIENT_H_
#define ALIBABACLOUD_CLOUDAUTH_CONSOLE_CLOUDAUTH_CONSOLECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Cloudauth_consoleExport.h"
#include "model/RetrieveFaceRequest.h"
#include "model/RetrieveFaceResult.h"
#include "model/UploadIdentifyRecordRequest.h"
#include "model/UploadIdentifyRecordResult.h"


namespace AlibabaCloud
{
	namespace Cloudauth_console
	{
		class ALIBABACLOUD_CLOUDAUTH_CONSOLE_EXPORT Cloudauth_consoleClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::RetrieveFaceResult> RetrieveFaceOutcome;
			typedef std::future<RetrieveFaceOutcome> RetrieveFaceOutcomeCallable;
			typedef std::function<void(const Cloudauth_consoleClient*, const Model::RetrieveFaceRequest&, const RetrieveFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetrieveFaceAsyncHandler;
			typedef Outcome<Error, Model::UploadIdentifyRecordResult> UploadIdentifyRecordOutcome;
			typedef std::future<UploadIdentifyRecordOutcome> UploadIdentifyRecordOutcomeCallable;
			typedef std::function<void(const Cloudauth_consoleClient*, const Model::UploadIdentifyRecordRequest&, const UploadIdentifyRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadIdentifyRecordAsyncHandler;

			Cloudauth_consoleClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Cloudauth_consoleClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Cloudauth_consoleClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Cloudauth_consoleClient();
			RetrieveFaceOutcome retrieveFace(const Model::RetrieveFaceRequest &request)const;
			void retrieveFaceAsync(const Model::RetrieveFaceRequest& request, const RetrieveFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetrieveFaceOutcomeCallable retrieveFaceCallable(const Model::RetrieveFaceRequest& request) const;
			UploadIdentifyRecordOutcome uploadIdentifyRecord(const Model::UploadIdentifyRecordRequest &request)const;
			void uploadIdentifyRecordAsync(const Model::UploadIdentifyRecordRequest& request, const UploadIdentifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadIdentifyRecordOutcomeCallable uploadIdentifyRecordCallable(const Model::UploadIdentifyRecordRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDAUTH_CONSOLE_CLOUDAUTH_CONSOLECLIENT_H_
