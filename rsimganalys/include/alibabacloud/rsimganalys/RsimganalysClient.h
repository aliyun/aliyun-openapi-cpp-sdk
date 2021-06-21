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

#ifndef ALIBABACLOUD_RSIMGANALYS_RSIMGANALYSCLIENT_H_
#define ALIBABACLOUD_RSIMGANALYS_RSIMGANALYSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "RsimganalysExport.h"
#include "model/CreateImageRequest.h"
#include "model/CreateImageResult.h"
#include "model/CreateTaskRequest.h"
#include "model/CreateTaskResult.h"
#include "model/DeleteImageRequest.h"
#include "model/DeleteImageResult.h"
#include "model/DeleteTaskRequest.h"
#include "model/DeleteTaskResult.h"
#include "model/GetImageRequest.h"
#include "model/GetImageResult.h"
#include "model/GetShpInfoRequest.h"
#include "model/GetShpInfoResult.h"
#include "model/GetTaskRequest.h"
#include "model/GetTaskResult.h"
#include "model/ListTasksRequest.h"
#include "model/ListTasksResult.h"


namespace AlibabaCloud
{
	namespace Rsimganalys
	{
		class ALIBABACLOUD_RSIMGANALYS_EXPORT RsimganalysClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateImageResult> CreateImageOutcome;
			typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
			typedef std::function<void(const RsimganalysClient*, const Model::CreateImageRequest&, const CreateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
			typedef Outcome<Error, Model::CreateTaskResult> CreateTaskOutcome;
			typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
			typedef std::function<void(const RsimganalysClient*, const Model::CreateTaskRequest&, const CreateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageResult> DeleteImageOutcome;
			typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
			typedef std::function<void(const RsimganalysClient*, const Model::DeleteImageRequest&, const DeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteTaskResult> DeleteTaskOutcome;
			typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
			typedef std::function<void(const RsimganalysClient*, const Model::DeleteTaskRequest&, const DeleteTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAsyncHandler;
			typedef Outcome<Error, Model::GetImageResult> GetImageOutcome;
			typedef std::future<GetImageOutcome> GetImageOutcomeCallable;
			typedef std::function<void(const RsimganalysClient*, const Model::GetImageRequest&, const GetImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageAsyncHandler;
			typedef Outcome<Error, Model::GetShpInfoResult> GetShpInfoOutcome;
			typedef std::future<GetShpInfoOutcome> GetShpInfoOutcomeCallable;
			typedef std::function<void(const RsimganalysClient*, const Model::GetShpInfoRequest&, const GetShpInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetShpInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTaskResult> GetTaskOutcome;
			typedef std::future<GetTaskOutcome> GetTaskOutcomeCallable;
			typedef std::function<void(const RsimganalysClient*, const Model::GetTaskRequest&, const GetTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskAsyncHandler;
			typedef Outcome<Error, Model::ListTasksResult> ListTasksOutcome;
			typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
			typedef std::function<void(const RsimganalysClient*, const Model::ListTasksRequest&, const ListTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTasksAsyncHandler;

			RsimganalysClient(const Credentials &credentials, const ClientConfiguration &configuration);
			RsimganalysClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			RsimganalysClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~RsimganalysClient();
			CreateImageOutcome createImage(const Model::CreateImageRequest &request)const;
			void createImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateImageOutcomeCallable createImageCallable(const Model::CreateImageRequest& request) const;
			CreateTaskOutcome createTask(const Model::CreateTaskRequest &request)const;
			void createTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTaskOutcomeCallable createTaskCallable(const Model::CreateTaskRequest& request) const;
			DeleteImageOutcome deleteImage(const Model::DeleteImageRequest &request)const;
			void deleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageOutcomeCallable deleteImageCallable(const Model::DeleteImageRequest& request) const;
			DeleteTaskOutcome deleteTask(const Model::DeleteTaskRequest &request)const;
			void deleteTaskAsync(const Model::DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTaskOutcomeCallable deleteTaskCallable(const Model::DeleteTaskRequest& request) const;
			GetImageOutcome getImage(const Model::GetImageRequest &request)const;
			void getImageAsync(const Model::GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageOutcomeCallable getImageCallable(const Model::GetImageRequest& request) const;
			GetShpInfoOutcome getShpInfo(const Model::GetShpInfoRequest &request)const;
			void getShpInfoAsync(const Model::GetShpInfoRequest& request, const GetShpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetShpInfoOutcomeCallable getShpInfoCallable(const Model::GetShpInfoRequest& request) const;
			GetTaskOutcome getTask(const Model::GetTaskRequest &request)const;
			void getTaskAsync(const Model::GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskOutcomeCallable getTaskCallable(const Model::GetTaskRequest& request) const;
			ListTasksOutcome listTasks(const Model::ListTasksRequest &request)const;
			void listTasksAsync(const Model::ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTasksOutcomeCallable listTasksCallable(const Model::ListTasksRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RSIMGANALYS_RSIMGANALYSCLIENT_H_
