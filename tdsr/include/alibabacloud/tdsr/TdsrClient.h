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

#ifndef ALIBABACLOUD_TDSR_TDSRCLIENT_H_
#define ALIBABACLOUD_TDSR_TDSRCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "TdsrExport.h"
#include "model/CheckPermissionRequest.h"
#include "model/CheckPermissionResult.h"
#include "model/CheckResourceRequest.h"
#include "model/CheckResourceResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/CreateSceneRequest.h"
#include "model/CreateSceneResult.h"
#include "model/DeleteFileRequest.h"
#include "model/DeleteFileResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/GetHotspotConfigRequest.h"
#include "model/GetHotspotConfigResult.h"
#include "model/GetHotspotTagRequest.h"
#include "model/GetHotspotTagResult.h"
#include "model/GetPolicyRequest.h"
#include "model/GetPolicyResult.h"
#include "model/GetSceneDataRequest.h"
#include "model/GetSceneDataResult.h"
#include "model/GetSceneListRequest.h"
#include "model/GetSceneListResult.h"
#include "model/GetWindowConfigRequest.h"
#include "model/GetWindowConfigResult.h"
#include "model/ListMainScenesRequest.h"
#include "model/ListMainScenesResult.h"
#include "model/ListScenesRequest.h"
#include "model/ListScenesResult.h"
#include "model/PublishHotspotRequest.h"
#include "model/PublishHotspotResult.h"
#include "model/SaveFileRequest.h"
#include "model/SaveFileResult.h"
#include "model/SaveHotspotConfigRequest.h"
#include "model/SaveHotspotConfigResult.h"
#include "model/SaveHotspotTagRequest.h"
#include "model/SaveHotspotTagResult.h"


namespace AlibabaCloud
{
	namespace Tdsr
	{
		class ALIBABACLOUD_TDSR_EXPORT TdsrClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CheckPermissionResult> CheckPermissionOutcome;
			typedef std::future<CheckPermissionOutcome> CheckPermissionOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::CheckPermissionRequest&, const CheckPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckPermissionAsyncHandler;
			typedef Outcome<Error, Model::CheckResourceResult> CheckResourceOutcome;
			typedef std::future<CheckResourceOutcome> CheckResourceOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::CheckResourceRequest&, const CheckResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckResourceAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateSceneResult> CreateSceneOutcome;
			typedef std::future<CreateSceneOutcome> CreateSceneOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::CreateSceneRequest&, const CreateSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSceneAsyncHandler;
			typedef Outcome<Error, Model::DeleteFileResult> DeleteFileOutcome;
			typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::DeleteFileRequest&, const DeleteFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::GetHotspotConfigResult> GetHotspotConfigOutcome;
			typedef std::future<GetHotspotConfigOutcome> GetHotspotConfigOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::GetHotspotConfigRequest&, const GetHotspotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHotspotConfigAsyncHandler;
			typedef Outcome<Error, Model::GetHotspotTagResult> GetHotspotTagOutcome;
			typedef std::future<GetHotspotTagOutcome> GetHotspotTagOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::GetHotspotTagRequest&, const GetHotspotTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHotspotTagAsyncHandler;
			typedef Outcome<Error, Model::GetPolicyResult> GetPolicyOutcome;
			typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::GetPolicyRequest&, const GetPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetSceneDataResult> GetSceneDataOutcome;
			typedef std::future<GetSceneDataOutcome> GetSceneDataOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::GetSceneDataRequest&, const GetSceneDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSceneDataAsyncHandler;
			typedef Outcome<Error, Model::GetSceneListResult> GetSceneListOutcome;
			typedef std::future<GetSceneListOutcome> GetSceneListOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::GetSceneListRequest&, const GetSceneListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSceneListAsyncHandler;
			typedef Outcome<Error, Model::GetWindowConfigResult> GetWindowConfigOutcome;
			typedef std::future<GetWindowConfigOutcome> GetWindowConfigOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::GetWindowConfigRequest&, const GetWindowConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWindowConfigAsyncHandler;
			typedef Outcome<Error, Model::ListMainScenesResult> ListMainScenesOutcome;
			typedef std::future<ListMainScenesOutcome> ListMainScenesOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::ListMainScenesRequest&, const ListMainScenesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMainScenesAsyncHandler;
			typedef Outcome<Error, Model::ListScenesResult> ListScenesOutcome;
			typedef std::future<ListScenesOutcome> ListScenesOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::ListScenesRequest&, const ListScenesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScenesAsyncHandler;
			typedef Outcome<Error, Model::PublishHotspotResult> PublishHotspotOutcome;
			typedef std::future<PublishHotspotOutcome> PublishHotspotOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::PublishHotspotRequest&, const PublishHotspotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishHotspotAsyncHandler;
			typedef Outcome<Error, Model::SaveFileResult> SaveFileOutcome;
			typedef std::future<SaveFileOutcome> SaveFileOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::SaveFileRequest&, const SaveFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveFileAsyncHandler;
			typedef Outcome<Error, Model::SaveHotspotConfigResult> SaveHotspotConfigOutcome;
			typedef std::future<SaveHotspotConfigOutcome> SaveHotspotConfigOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::SaveHotspotConfigRequest&, const SaveHotspotConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveHotspotConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveHotspotTagResult> SaveHotspotTagOutcome;
			typedef std::future<SaveHotspotTagOutcome> SaveHotspotTagOutcomeCallable;
			typedef std::function<void(const TdsrClient*, const Model::SaveHotspotTagRequest&, const SaveHotspotTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveHotspotTagAsyncHandler;

			TdsrClient(const Credentials &credentials, const ClientConfiguration &configuration);
			TdsrClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			TdsrClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~TdsrClient();
			CheckPermissionOutcome checkPermission(const Model::CheckPermissionRequest &request)const;
			void checkPermissionAsync(const Model::CheckPermissionRequest& request, const CheckPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckPermissionOutcomeCallable checkPermissionCallable(const Model::CheckPermissionRequest& request) const;
			CheckResourceOutcome checkResource(const Model::CheckResourceRequest &request)const;
			void checkResourceAsync(const Model::CheckResourceRequest& request, const CheckResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckResourceOutcomeCallable checkResourceCallable(const Model::CheckResourceRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			CreateSceneOutcome createScene(const Model::CreateSceneRequest &request)const;
			void createSceneAsync(const Model::CreateSceneRequest& request, const CreateSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSceneOutcomeCallable createSceneCallable(const Model::CreateSceneRequest& request) const;
			DeleteFileOutcome deleteFile(const Model::DeleteFileRequest &request)const;
			void deleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFileOutcomeCallable deleteFileCallable(const Model::DeleteFileRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			GetHotspotConfigOutcome getHotspotConfig(const Model::GetHotspotConfigRequest &request)const;
			void getHotspotConfigAsync(const Model::GetHotspotConfigRequest& request, const GetHotspotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHotspotConfigOutcomeCallable getHotspotConfigCallable(const Model::GetHotspotConfigRequest& request) const;
			GetHotspotTagOutcome getHotspotTag(const Model::GetHotspotTagRequest &request)const;
			void getHotspotTagAsync(const Model::GetHotspotTagRequest& request, const GetHotspotTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHotspotTagOutcomeCallable getHotspotTagCallable(const Model::GetHotspotTagRequest& request) const;
			GetPolicyOutcome getPolicy(const Model::GetPolicyRequest &request)const;
			void getPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPolicyOutcomeCallable getPolicyCallable(const Model::GetPolicyRequest& request) const;
			GetSceneDataOutcome getSceneData(const Model::GetSceneDataRequest &request)const;
			void getSceneDataAsync(const Model::GetSceneDataRequest& request, const GetSceneDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSceneDataOutcomeCallable getSceneDataCallable(const Model::GetSceneDataRequest& request) const;
			GetSceneListOutcome getSceneList(const Model::GetSceneListRequest &request)const;
			void getSceneListAsync(const Model::GetSceneListRequest& request, const GetSceneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSceneListOutcomeCallable getSceneListCallable(const Model::GetSceneListRequest& request) const;
			GetWindowConfigOutcome getWindowConfig(const Model::GetWindowConfigRequest &request)const;
			void getWindowConfigAsync(const Model::GetWindowConfigRequest& request, const GetWindowConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWindowConfigOutcomeCallable getWindowConfigCallable(const Model::GetWindowConfigRequest& request) const;
			ListMainScenesOutcome listMainScenes(const Model::ListMainScenesRequest &request)const;
			void listMainScenesAsync(const Model::ListMainScenesRequest& request, const ListMainScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMainScenesOutcomeCallable listMainScenesCallable(const Model::ListMainScenesRequest& request) const;
			ListScenesOutcome listScenes(const Model::ListScenesRequest &request)const;
			void listScenesAsync(const Model::ListScenesRequest& request, const ListScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScenesOutcomeCallable listScenesCallable(const Model::ListScenesRequest& request) const;
			PublishHotspotOutcome publishHotspot(const Model::PublishHotspotRequest &request)const;
			void publishHotspotAsync(const Model::PublishHotspotRequest& request, const PublishHotspotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishHotspotOutcomeCallable publishHotspotCallable(const Model::PublishHotspotRequest& request) const;
			SaveFileOutcome saveFile(const Model::SaveFileRequest &request)const;
			void saveFileAsync(const Model::SaveFileRequest& request, const SaveFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveFileOutcomeCallable saveFileCallable(const Model::SaveFileRequest& request) const;
			SaveHotspotConfigOutcome saveHotspotConfig(const Model::SaveHotspotConfigRequest &request)const;
			void saveHotspotConfigAsync(const Model::SaveHotspotConfigRequest& request, const SaveHotspotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveHotspotConfigOutcomeCallable saveHotspotConfigCallable(const Model::SaveHotspotConfigRequest& request) const;
			SaveHotspotTagOutcome saveHotspotTag(const Model::SaveHotspotTagRequest &request)const;
			void saveHotspotTagAsync(const Model::SaveHotspotTagRequest& request, const SaveHotspotTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveHotspotTagOutcomeCallable saveHotspotTagCallable(const Model::SaveHotspotTagRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_TDSR_TDSRCLIENT_H_
