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
#include "model/CreateTaskRequest.h"
#include "model/CreateTaskResult.h"
#include "model/CreateTranscriptionPhrasesRequest.h"
#include "model/CreateTranscriptionPhrasesResult.h"
#include "model/DeleteTranscriptionPhrasesRequest.h"
#include "model/DeleteTranscriptionPhrasesResult.h"
#include "model/GetTaskInfoRequest.h"
#include "model/GetTaskInfoResult.h"
#include "model/GetTranscriptionPhrasesRequest.h"
#include "model/GetTranscriptionPhrasesResult.h"
#include "model/ListTranscriptionPhrasesRequest.h"
#include "model/ListTranscriptionPhrasesResult.h"
#include "model/UpdateTranscriptionPhrasesRequest.h"
#include "model/UpdateTranscriptionPhrasesResult.h"


namespace AlibabaCloud
{
	namespace Tingwu
	{
		class ALIBABACLOUD_TINGWU_EXPORT TingwuClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateTaskResult> CreateTaskOutcome;
			typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::CreateTaskRequest&, const CreateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateTranscriptionPhrasesResult> CreateTranscriptionPhrasesOutcome;
			typedef std::future<CreateTranscriptionPhrasesOutcome> CreateTranscriptionPhrasesOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::CreateTranscriptionPhrasesRequest&, const CreateTranscriptionPhrasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTranscriptionPhrasesAsyncHandler;
			typedef Outcome<Error, Model::DeleteTranscriptionPhrasesResult> DeleteTranscriptionPhrasesOutcome;
			typedef std::future<DeleteTranscriptionPhrasesOutcome> DeleteTranscriptionPhrasesOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::DeleteTranscriptionPhrasesRequest&, const DeleteTranscriptionPhrasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTranscriptionPhrasesAsyncHandler;
			typedef Outcome<Error, Model::GetTaskInfoResult> GetTaskInfoOutcome;
			typedef std::future<GetTaskInfoOutcome> GetTaskInfoOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::GetTaskInfoRequest&, const GetTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTranscriptionPhrasesResult> GetTranscriptionPhrasesOutcome;
			typedef std::future<GetTranscriptionPhrasesOutcome> GetTranscriptionPhrasesOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::GetTranscriptionPhrasesRequest&, const GetTranscriptionPhrasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTranscriptionPhrasesAsyncHandler;
			typedef Outcome<Error, Model::ListTranscriptionPhrasesResult> ListTranscriptionPhrasesOutcome;
			typedef std::future<ListTranscriptionPhrasesOutcome> ListTranscriptionPhrasesOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::ListTranscriptionPhrasesRequest&, const ListTranscriptionPhrasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTranscriptionPhrasesAsyncHandler;
			typedef Outcome<Error, Model::UpdateTranscriptionPhrasesResult> UpdateTranscriptionPhrasesOutcome;
			typedef std::future<UpdateTranscriptionPhrasesOutcome> UpdateTranscriptionPhrasesOutcomeCallable;
			typedef std::function<void(const TingwuClient*, const Model::UpdateTranscriptionPhrasesRequest&, const UpdateTranscriptionPhrasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTranscriptionPhrasesAsyncHandler;

			TingwuClient(const Credentials &credentials, const ClientConfiguration &configuration);
			TingwuClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			TingwuClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~TingwuClient();
			CreateTaskOutcome createTask(const Model::CreateTaskRequest &request)const;
			void createTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTaskOutcomeCallable createTaskCallable(const Model::CreateTaskRequest& request) const;
			CreateTranscriptionPhrasesOutcome createTranscriptionPhrases(const Model::CreateTranscriptionPhrasesRequest &request)const;
			void createTranscriptionPhrasesAsync(const Model::CreateTranscriptionPhrasesRequest& request, const CreateTranscriptionPhrasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTranscriptionPhrasesOutcomeCallable createTranscriptionPhrasesCallable(const Model::CreateTranscriptionPhrasesRequest& request) const;
			DeleteTranscriptionPhrasesOutcome deleteTranscriptionPhrases(const Model::DeleteTranscriptionPhrasesRequest &request)const;
			void deleteTranscriptionPhrasesAsync(const Model::DeleteTranscriptionPhrasesRequest& request, const DeleteTranscriptionPhrasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTranscriptionPhrasesOutcomeCallable deleteTranscriptionPhrasesCallable(const Model::DeleteTranscriptionPhrasesRequest& request) const;
			GetTaskInfoOutcome getTaskInfo(const Model::GetTaskInfoRequest &request)const;
			void getTaskInfoAsync(const Model::GetTaskInfoRequest& request, const GetTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskInfoOutcomeCallable getTaskInfoCallable(const Model::GetTaskInfoRequest& request) const;
			GetTranscriptionPhrasesOutcome getTranscriptionPhrases(const Model::GetTranscriptionPhrasesRequest &request)const;
			void getTranscriptionPhrasesAsync(const Model::GetTranscriptionPhrasesRequest& request, const GetTranscriptionPhrasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTranscriptionPhrasesOutcomeCallable getTranscriptionPhrasesCallable(const Model::GetTranscriptionPhrasesRequest& request) const;
			ListTranscriptionPhrasesOutcome listTranscriptionPhrases(const Model::ListTranscriptionPhrasesRequest &request)const;
			void listTranscriptionPhrasesAsync(const Model::ListTranscriptionPhrasesRequest& request, const ListTranscriptionPhrasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTranscriptionPhrasesOutcomeCallable listTranscriptionPhrasesCallable(const Model::ListTranscriptionPhrasesRequest& request) const;
			UpdateTranscriptionPhrasesOutcome updateTranscriptionPhrases(const Model::UpdateTranscriptionPhrasesRequest &request)const;
			void updateTranscriptionPhrasesAsync(const Model::UpdateTranscriptionPhrasesRequest& request, const UpdateTranscriptionPhrasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTranscriptionPhrasesOutcomeCallable updateTranscriptionPhrasesCallable(const Model::UpdateTranscriptionPhrasesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_TINGWU_TINGWUCLIENT_H_
