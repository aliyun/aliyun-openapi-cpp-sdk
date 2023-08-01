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

#ifndef ALIBABACLOUD_GRACE_GRACECLIENT_H_
#define ALIBABACLOUD_GRACE_GRACECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "GraceExport.h"
#include "model/AnalyzeFileRequest.h"
#include "model/AnalyzeFileResult.h"
#include "model/GetFileRequest.h"
#include "model/GetFileResult.h"
#include "model/UploadFileByOSSRequest.h"
#include "model/UploadFileByOSSResult.h"
#include "model/UploadFileByURLRequest.h"
#include "model/UploadFileByURLResult.h"


namespace AlibabaCloud
{
	namespace Grace
	{
		class ALIBABACLOUD_GRACE_EXPORT GraceClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AnalyzeFileResult> AnalyzeFileOutcome;
			typedef std::future<AnalyzeFileOutcome> AnalyzeFileOutcomeCallable;
			typedef std::function<void(const GraceClient*, const Model::AnalyzeFileRequest&, const AnalyzeFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AnalyzeFileAsyncHandler;
			typedef Outcome<Error, Model::GetFileResult> GetFileOutcome;
			typedef std::future<GetFileOutcome> GetFileOutcomeCallable;
			typedef std::function<void(const GraceClient*, const Model::GetFileRequest&, const GetFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileAsyncHandler;
			typedef Outcome<Error, Model::UploadFileByOSSResult> UploadFileByOSSOutcome;
			typedef std::future<UploadFileByOSSOutcome> UploadFileByOSSOutcomeCallable;
			typedef std::function<void(const GraceClient*, const Model::UploadFileByOSSRequest&, const UploadFileByOSSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadFileByOSSAsyncHandler;
			typedef Outcome<Error, Model::UploadFileByURLResult> UploadFileByURLOutcome;
			typedef std::future<UploadFileByURLOutcome> UploadFileByURLOutcomeCallable;
			typedef std::function<void(const GraceClient*, const Model::UploadFileByURLRequest&, const UploadFileByURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadFileByURLAsyncHandler;

			GraceClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GraceClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GraceClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GraceClient();
			AnalyzeFileOutcome analyzeFile(const Model::AnalyzeFileRequest &request)const;
			void analyzeFileAsync(const Model::AnalyzeFileRequest& request, const AnalyzeFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AnalyzeFileOutcomeCallable analyzeFileCallable(const Model::AnalyzeFileRequest& request) const;
			GetFileOutcome getFile(const Model::GetFileRequest &request)const;
			void getFileAsync(const Model::GetFileRequest& request, const GetFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileOutcomeCallable getFileCallable(const Model::GetFileRequest& request) const;
			UploadFileByOSSOutcome uploadFileByOSS(const Model::UploadFileByOSSRequest &request)const;
			void uploadFileByOSSAsync(const Model::UploadFileByOSSRequest& request, const UploadFileByOSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadFileByOSSOutcomeCallable uploadFileByOSSCallable(const Model::UploadFileByOSSRequest& request) const;
			UploadFileByURLOutcome uploadFileByURL(const Model::UploadFileByURLRequest &request)const;
			void uploadFileByURLAsync(const Model::UploadFileByURLRequest& request, const UploadFileByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadFileByURLOutcomeCallable uploadFileByURLCallable(const Model::UploadFileByURLRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GRACE_GRACECLIENT_H_
