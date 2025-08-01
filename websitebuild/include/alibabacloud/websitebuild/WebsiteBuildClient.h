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

#ifndef ALIBABACLOUD_WEBSITEBUILD_WEBSITEBUILDCLIENT_H_
#define ALIBABACLOUD_WEBSITEBUILD_WEBSITEBUILDCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "WebsiteBuildExport.h"
#include "model/CreateLogoTaskRequest.h"
#include "model/CreateLogoTaskResult.h"
#include "model/GetCreateLogoTaskRequest.h"
#include "model/GetCreateLogoTaskResult.h"
#include "model/OperateAppInstanceForPartnerRequest.h"
#include "model/OperateAppInstanceForPartnerResult.h"
#include "model/OperateAppServiceForPartnerRequest.h"
#include "model/OperateAppServiceForPartnerResult.h"
#include "model/SearchImageRequest.h"
#include "model/SearchImageResult.h"
#include "model/SyncAppInstanceForPartnerRequest.h"
#include "model/SyncAppInstanceForPartnerResult.h"


namespace AlibabaCloud
{
	namespace WebsiteBuild
	{
		class ALIBABACLOUD_WEBSITEBUILD_EXPORT WebsiteBuildClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateLogoTaskResult> CreateLogoTaskOutcome;
			typedef std::future<CreateLogoTaskOutcome> CreateLogoTaskOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::CreateLogoTaskRequest&, const CreateLogoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogoTaskAsyncHandler;
			typedef Outcome<Error, Model::GetCreateLogoTaskResult> GetCreateLogoTaskOutcome;
			typedef std::future<GetCreateLogoTaskOutcome> GetCreateLogoTaskOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::GetCreateLogoTaskRequest&, const GetCreateLogoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCreateLogoTaskAsyncHandler;
			typedef Outcome<Error, Model::OperateAppInstanceForPartnerResult> OperateAppInstanceForPartnerOutcome;
			typedef std::future<OperateAppInstanceForPartnerOutcome> OperateAppInstanceForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::OperateAppInstanceForPartnerRequest&, const OperateAppInstanceForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateAppInstanceForPartnerAsyncHandler;
			typedef Outcome<Error, Model::OperateAppServiceForPartnerResult> OperateAppServiceForPartnerOutcome;
			typedef std::future<OperateAppServiceForPartnerOutcome> OperateAppServiceForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::OperateAppServiceForPartnerRequest&, const OperateAppServiceForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateAppServiceForPartnerAsyncHandler;
			typedef Outcome<Error, Model::SearchImageResult> SearchImageOutcome;
			typedef std::future<SearchImageOutcome> SearchImageOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::SearchImageRequest&, const SearchImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchImageAsyncHandler;
			typedef Outcome<Error, Model::SyncAppInstanceForPartnerResult> SyncAppInstanceForPartnerOutcome;
			typedef std::future<SyncAppInstanceForPartnerOutcome> SyncAppInstanceForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::SyncAppInstanceForPartnerRequest&, const SyncAppInstanceForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncAppInstanceForPartnerAsyncHandler;

			WebsiteBuildClient(const Credentials &credentials, const ClientConfiguration &configuration);
			WebsiteBuildClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			WebsiteBuildClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~WebsiteBuildClient();
			CreateLogoTaskOutcome createLogoTask(const Model::CreateLogoTaskRequest &request)const;
			void createLogoTaskAsync(const Model::CreateLogoTaskRequest& request, const CreateLogoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLogoTaskOutcomeCallable createLogoTaskCallable(const Model::CreateLogoTaskRequest& request) const;
			GetCreateLogoTaskOutcome getCreateLogoTask(const Model::GetCreateLogoTaskRequest &request)const;
			void getCreateLogoTaskAsync(const Model::GetCreateLogoTaskRequest& request, const GetCreateLogoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCreateLogoTaskOutcomeCallable getCreateLogoTaskCallable(const Model::GetCreateLogoTaskRequest& request) const;
			OperateAppInstanceForPartnerOutcome operateAppInstanceForPartner(const Model::OperateAppInstanceForPartnerRequest &request)const;
			void operateAppInstanceForPartnerAsync(const Model::OperateAppInstanceForPartnerRequest& request, const OperateAppInstanceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateAppInstanceForPartnerOutcomeCallable operateAppInstanceForPartnerCallable(const Model::OperateAppInstanceForPartnerRequest& request) const;
			OperateAppServiceForPartnerOutcome operateAppServiceForPartner(const Model::OperateAppServiceForPartnerRequest &request)const;
			void operateAppServiceForPartnerAsync(const Model::OperateAppServiceForPartnerRequest& request, const OperateAppServiceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateAppServiceForPartnerOutcomeCallable operateAppServiceForPartnerCallable(const Model::OperateAppServiceForPartnerRequest& request) const;
			SearchImageOutcome searchImage(const Model::SearchImageRequest &request)const;
			void searchImageAsync(const Model::SearchImageRequest& request, const SearchImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchImageOutcomeCallable searchImageCallable(const Model::SearchImageRequest& request) const;
			SyncAppInstanceForPartnerOutcome syncAppInstanceForPartner(const Model::SyncAppInstanceForPartnerRequest &request)const;
			void syncAppInstanceForPartnerAsync(const Model::SyncAppInstanceForPartnerRequest& request, const SyncAppInstanceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncAppInstanceForPartnerOutcomeCallable syncAppInstanceForPartnerCallable(const Model::SyncAppInstanceForPartnerRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_WEBSITEBUILD_WEBSITEBUILDCLIENT_H_
