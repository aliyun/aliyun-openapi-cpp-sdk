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

#ifndef ALIBABACLOUD_TINGWU_TINGWUCLIENT_H_
#define ALIBABACLOUD_TINGWU_TINGWUCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "TingwuExport.h"
#include "model/CreateFileTransRequest.h"
#include "model/CreateFileTransResult.h"
#include "model/CreateMeetingTransRequest.h"
#include "model/CreateMeetingTransResult.h"
#include "model/GetFileTransRequest.h"
#include "model/GetFileTransResult.h"
#include "model/GetMeetingTransRequest.h"
#include "model/GetMeetingTransResult.h"
#include "model/StopMeetingTransRequest.h"
#include "model/StopMeetingTransResult.h"


namespace AlibabaCloud
{
	namespace Tingwu
	{
		class ALIBABACLOUD_TINGWU_EXPORT TingwuClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateFileTransResult> CreateFileTransOutcome;
			typedef std::future<CreateFileTransOutcome> CreateFileTransOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::CreateFileTransRequest&, const CreateFileTransOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileTransAsyncHandler;
			typedef Outcome<Error, Model::CreateMeetingTransResult> CreateMeetingTransOutcome;
			typedef std::future<CreateMeetingTransOutcome> CreateMeetingTransOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::CreateMeetingTransRequest&, const CreateMeetingTransOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMeetingTransAsyncHandler;
			typedef Outcome<Error, Model::GetFileTransResult> GetFileTransOutcome;
			typedef std::future<GetFileTransOutcome> GetFileTransOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::GetFileTransRequest&, const GetFileTransOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileTransAsyncHandler;
			typedef Outcome<Error, Model::GetMeetingTransResult> GetMeetingTransOutcome;
			typedef std::future<GetMeetingTransOutcome> GetMeetingTransOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::GetMeetingTransRequest&, const GetMeetingTransOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMeetingTransAsyncHandler;
			typedef Outcome<Error, Model::StopMeetingTransResult> StopMeetingTransOutcome;
			typedef std::future<StopMeetingTransOutcome> StopMeetingTransOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::StopMeetingTransRequest&, const StopMeetingTransOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMeetingTransAsyncHandler;

			TingwuClient(const Credentials &credentials, const ClientConfiguration &configuration);
			TingwuClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			TingwuClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~TingwuClient();
			CreateFileTransOutcome createFileTrans(const Model::CreateFileTransRequest &request)const;
			void createFileTransAsync(const Model::CreateFileTransRequest& request, const CreateFileTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileTransOutcomeCallable createFileTransCallable(const Model::CreateFileTransRequest& request) const;
			CreateMeetingTransOutcome createMeetingTrans(const Model::CreateMeetingTransRequest &request)const;
			void createMeetingTransAsync(const Model::CreateMeetingTransRequest& request, const CreateMeetingTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMeetingTransOutcomeCallable createMeetingTransCallable(const Model::CreateMeetingTransRequest& request) const;
			GetFileTransOutcome getFileTrans(const Model::GetFileTransRequest &request)const;
			void getFileTransAsync(const Model::GetFileTransRequest& request, const GetFileTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileTransOutcomeCallable getFileTransCallable(const Model::GetFileTransRequest& request) const;
			GetMeetingTransOutcome getMeetingTrans(const Model::GetMeetingTransRequest &request)const;
			void getMeetingTransAsync(const Model::GetMeetingTransRequest& request, const GetMeetingTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMeetingTransOutcomeCallable getMeetingTransCallable(const Model::GetMeetingTransRequest& request) const;
			StopMeetingTransOutcome stopMeetingTrans(const Model::StopMeetingTransRequest &request)const;
			void stopMeetingTransAsync(const Model::StopMeetingTransRequest& request, const StopMeetingTransAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMeetingTransOutcomeCallable stopMeetingTransCallable(const Model::StopMeetingTransRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_TINGWU_TINGWUCLIENT_H_
