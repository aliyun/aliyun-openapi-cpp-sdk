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

#ifndef ALIBABACLOUD_IQA_IQACLIENT_H_
#define ALIBABACLOUD_IQA_IQACLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "IqaExport.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/DeployServiceRequest.h"
#include "model/DeployServiceResult.h"
#include "model/DescribeProjectRequest.h"
#include "model/DescribeProjectResult.h"
#include "model/GetPredictResultRequest.h"
#include "model/GetPredictResultResult.h"
#include "model/ListProjectsRequest.h"
#include "model/ListProjectsResult.h"
#include "model/ModifiyProjectRequest.h"
#include "model/ModifiyProjectResult.h"
#include "model/UploadDictionaryRequest.h"
#include "model/UploadDictionaryResult.h"
#include "model/UploadDocumentRequest.h"
#include "model/UploadDocumentResult.h"


namespace AlibabaCloud
{
	namespace Iqa
	{
		class ALIBABACLOUD_IQA_EXPORT IqaClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const IqaClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const IqaClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::DeployServiceResult> DeployServiceOutcome;
			typedef std::future<DeployServiceOutcome> DeployServiceOutcomeCallable;
			typedef std::function<void(const IqaClient*, const Model::DeployServiceRequest&, const DeployServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectResult> DescribeProjectOutcome;
			typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
			typedef std::function<void(const IqaClient*, const Model::DescribeProjectRequest&, const DescribeProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
			typedef Outcome<Error, Model::GetPredictResultResult> GetPredictResultOutcome;
			typedef std::future<GetPredictResultOutcome> GetPredictResultOutcomeCallable;
			typedef std::function<void(const IqaClient*, const Model::GetPredictResultRequest&, const GetPredictResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPredictResultAsyncHandler;
			typedef Outcome<Error, Model::ListProjectsResult> ListProjectsOutcome;
			typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
			typedef std::function<void(const IqaClient*, const Model::ListProjectsRequest&, const ListProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;
			typedef Outcome<Error, Model::ModifiyProjectResult> ModifiyProjectOutcome;
			typedef std::future<ModifiyProjectOutcome> ModifiyProjectOutcomeCallable;
			typedef std::function<void(const IqaClient*, const Model::ModifiyProjectRequest&, const ModifiyProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifiyProjectAsyncHandler;
			typedef Outcome<Error, Model::UploadDictionaryResult> UploadDictionaryOutcome;
			typedef std::future<UploadDictionaryOutcome> UploadDictionaryOutcomeCallable;
			typedef std::function<void(const IqaClient*, const Model::UploadDictionaryRequest&, const UploadDictionaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadDictionaryAsyncHandler;
			typedef Outcome<Error, Model::UploadDocumentResult> UploadDocumentOutcome;
			typedef std::future<UploadDocumentOutcome> UploadDocumentOutcomeCallable;
			typedef std::function<void(const IqaClient*, const Model::UploadDocumentRequest&, const UploadDocumentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadDocumentAsyncHandler;

			IqaClient(const Credentials &credentials, const ClientConfiguration &configuration);
			IqaClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			IqaClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~IqaClient();
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			DeployServiceOutcome deployService(const Model::DeployServiceRequest &request)const;
			void deployServiceAsync(const Model::DeployServiceRequest& request, const DeployServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployServiceOutcomeCallable deployServiceCallable(const Model::DeployServiceRequest& request) const;
			DescribeProjectOutcome describeProject(const Model::DescribeProjectRequest &request)const;
			void describeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectOutcomeCallable describeProjectCallable(const Model::DescribeProjectRequest& request) const;
			GetPredictResultOutcome getPredictResult(const Model::GetPredictResultRequest &request)const;
			void getPredictResultAsync(const Model::GetPredictResultRequest& request, const GetPredictResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPredictResultOutcomeCallable getPredictResultCallable(const Model::GetPredictResultRequest& request) const;
			ListProjectsOutcome listProjects(const Model::ListProjectsRequest &request)const;
			void listProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectsOutcomeCallable listProjectsCallable(const Model::ListProjectsRequest& request) const;
			ModifiyProjectOutcome modifiyProject(const Model::ModifiyProjectRequest &request)const;
			void modifiyProjectAsync(const Model::ModifiyProjectRequest& request, const ModifiyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifiyProjectOutcomeCallable modifiyProjectCallable(const Model::ModifiyProjectRequest& request) const;
			UploadDictionaryOutcome uploadDictionary(const Model::UploadDictionaryRequest &request)const;
			void uploadDictionaryAsync(const Model::UploadDictionaryRequest& request, const UploadDictionaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadDictionaryOutcomeCallable uploadDictionaryCallable(const Model::UploadDictionaryRequest& request) const;
			UploadDocumentOutcome uploadDocument(const Model::UploadDocumentRequest &request)const;
			void uploadDocumentAsync(const Model::UploadDocumentRequest& request, const UploadDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadDocumentOutcomeCallable uploadDocumentCallable(const Model::UploadDocumentRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IQA_IQACLIENT_H_
