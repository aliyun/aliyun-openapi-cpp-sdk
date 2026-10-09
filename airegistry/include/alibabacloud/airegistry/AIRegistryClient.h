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

#ifndef ALIBABACLOUD_AIREGISTRY_AIREGISTRYCLIENT_H_
#define ALIBABACLOUD_AIREGISTRY_AIREGISTRYCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AIRegistryExport.h"
#include "model/CreateNamespaceRequest.h"
#include "model/CreateNamespaceResult.h"
#include "model/CreatePromptRequest.h"
#include "model/CreatePromptResult.h"
#include "model/CreatePromptVersionRequest.h"
#include "model/CreatePromptVersionResult.h"
#include "model/CreateSkillDraftRequest.h"
#include "model/CreateSkillDraftResult.h"
#include "model/DeleteNamespaceRequest.h"
#include "model/DeleteNamespaceResult.h"
#include "model/DeletePromptRequest.h"
#include "model/DeletePromptResult.h"
#include "model/DeleteSkillRequest.h"
#include "model/DeleteSkillResult.h"
#include "model/DownloadSkillVersionViaOssRequest.h"
#include "model/DownloadSkillVersionViaOssResult.h"
#include "model/ForcePublishSkillVersionRequest.h"
#include "model/ForcePublishSkillVersionResult.h"
#include "model/GetNamespaceRequest.h"
#include "model/GetNamespaceResult.h"
#include "model/GetPromptRequest.h"
#include "model/GetPromptResult.h"
#include "model/GetPromptVersionRequest.h"
#include "model/GetPromptVersionResult.h"
#include "model/GetSkillDetailRequest.h"
#include "model/GetSkillDetailResult.h"
#include "model/GetSkillImportFileUrlRequest.h"
#include "model/GetSkillImportFileUrlResult.h"
#include "model/GetSkillVersionDetailRequest.h"
#include "model/GetSkillVersionDetailResult.h"
#include "model/ListNamespacesRequest.h"
#include "model/ListNamespacesResult.h"
#include "model/ListPromptVersionsRequest.h"
#include "model/ListPromptVersionsResult.h"
#include "model/ListPromptsRequest.h"
#include "model/ListPromptsResult.h"
#include "model/ListSkillsRequest.h"
#include "model/ListSkillsResult.h"
#include "model/OfflineSkillRequest.h"
#include "model/OfflineSkillResult.h"
#include "model/OnlineSkillRequest.h"
#include "model/OnlineSkillResult.h"
#include "model/PublishSkillVersionRequest.h"
#include "model/PublishSkillVersionResult.h"
#include "model/RedraftSkillVersionRequest.h"
#include "model/RedraftSkillVersionResult.h"
#include "model/SubmitPromptVersionRequest.h"
#include "model/SubmitPromptVersionResult.h"
#include "model/SubmitSkillVersionRequest.h"
#include "model/SubmitSkillVersionResult.h"
#include "model/UpdateNamespaceRequest.h"
#include "model/UpdateNamespaceResult.h"
#include "model/UpdatePromptRequest.h"
#include "model/UpdatePromptResult.h"
#include "model/UpdatePromptVersionRequest.h"
#include "model/UpdatePromptVersionResult.h"
#include "model/UpdateSkillBizTagsRequest.h"
#include "model/UpdateSkillBizTagsResult.h"
#include "model/UpdateSkillDraftRequest.h"
#include "model/UpdateSkillDraftResult.h"
#include "model/UpdateSkillLabelsRequest.h"
#include "model/UpdateSkillLabelsResult.h"
#include "model/UpdateSkillScopeRequest.h"
#include "model/UpdateSkillScopeResult.h"
#include "model/UploadSkillViaOssRequest.h"
#include "model/UploadSkillViaOssResult.h"


namespace AlibabaCloud
{
	namespace AIRegistry
	{
		class ALIBABACLOUD_AIREGISTRY_EXPORT AIRegistryClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateNamespaceResult> CreateNamespaceOutcome;
			typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::CreateNamespaceRequest&, const CreateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::CreatePromptResult> CreatePromptOutcome;
			typedef std::future<CreatePromptOutcome> CreatePromptOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::CreatePromptRequest&, const CreatePromptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePromptAsyncHandler;
			typedef Outcome<Error, Model::CreatePromptVersionResult> CreatePromptVersionOutcome;
			typedef std::future<CreatePromptVersionOutcome> CreatePromptVersionOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::CreatePromptVersionRequest&, const CreatePromptVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePromptVersionAsyncHandler;
			typedef Outcome<Error, Model::CreateSkillDraftResult> CreateSkillDraftOutcome;
			typedef std::future<CreateSkillDraftOutcome> CreateSkillDraftOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::CreateSkillDraftRequest&, const CreateSkillDraftOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillDraftAsyncHandler;
			typedef Outcome<Error, Model::DeleteNamespaceResult> DeleteNamespaceOutcome;
			typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::DeleteNamespaceRequest&, const DeleteNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeletePromptResult> DeletePromptOutcome;
			typedef std::future<DeletePromptOutcome> DeletePromptOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::DeletePromptRequest&, const DeletePromptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePromptAsyncHandler;
			typedef Outcome<Error, Model::DeleteSkillResult> DeleteSkillOutcome;
			typedef std::future<DeleteSkillOutcome> DeleteSkillOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::DeleteSkillRequest&, const DeleteSkillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSkillAsyncHandler;
			typedef Outcome<Error, Model::DownloadSkillVersionViaOssResult> DownloadSkillVersionViaOssOutcome;
			typedef std::future<DownloadSkillVersionViaOssOutcome> DownloadSkillVersionViaOssOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::DownloadSkillVersionViaOssRequest&, const DownloadSkillVersionViaOssOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadSkillVersionViaOssAsyncHandler;
			typedef Outcome<Error, Model::ForcePublishSkillVersionResult> ForcePublishSkillVersionOutcome;
			typedef std::future<ForcePublishSkillVersionOutcome> ForcePublishSkillVersionOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::ForcePublishSkillVersionRequest&, const ForcePublishSkillVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ForcePublishSkillVersionAsyncHandler;
			typedef Outcome<Error, Model::GetNamespaceResult> GetNamespaceOutcome;
			typedef std::future<GetNamespaceOutcome> GetNamespaceOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::GetNamespaceRequest&, const GetNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNamespaceAsyncHandler;
			typedef Outcome<Error, Model::GetPromptResult> GetPromptOutcome;
			typedef std::future<GetPromptOutcome> GetPromptOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::GetPromptRequest&, const GetPromptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPromptAsyncHandler;
			typedef Outcome<Error, Model::GetPromptVersionResult> GetPromptVersionOutcome;
			typedef std::future<GetPromptVersionOutcome> GetPromptVersionOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::GetPromptVersionRequest&, const GetPromptVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPromptVersionAsyncHandler;
			typedef Outcome<Error, Model::GetSkillDetailResult> GetSkillDetailOutcome;
			typedef std::future<GetSkillDetailOutcome> GetSkillDetailOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::GetSkillDetailRequest&, const GetSkillDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSkillDetailAsyncHandler;
			typedef Outcome<Error, Model::GetSkillImportFileUrlResult> GetSkillImportFileUrlOutcome;
			typedef std::future<GetSkillImportFileUrlOutcome> GetSkillImportFileUrlOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::GetSkillImportFileUrlRequest&, const GetSkillImportFileUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSkillImportFileUrlAsyncHandler;
			typedef Outcome<Error, Model::GetSkillVersionDetailResult> GetSkillVersionDetailOutcome;
			typedef std::future<GetSkillVersionDetailOutcome> GetSkillVersionDetailOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::GetSkillVersionDetailRequest&, const GetSkillVersionDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSkillVersionDetailAsyncHandler;
			typedef Outcome<Error, Model::ListNamespacesResult> ListNamespacesOutcome;
			typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::ListNamespacesRequest&, const ListNamespacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNamespacesAsyncHandler;
			typedef Outcome<Error, Model::ListPromptVersionsResult> ListPromptVersionsOutcome;
			typedef std::future<ListPromptVersionsOutcome> ListPromptVersionsOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::ListPromptVersionsRequest&, const ListPromptVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPromptVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListPromptsResult> ListPromptsOutcome;
			typedef std::future<ListPromptsOutcome> ListPromptsOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::ListPromptsRequest&, const ListPromptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPromptsAsyncHandler;
			typedef Outcome<Error, Model::ListSkillsResult> ListSkillsOutcome;
			typedef std::future<ListSkillsOutcome> ListSkillsOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::ListSkillsRequest&, const ListSkillsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillsAsyncHandler;
			typedef Outcome<Error, Model::OfflineSkillResult> OfflineSkillOutcome;
			typedef std::future<OfflineSkillOutcome> OfflineSkillOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::OfflineSkillRequest&, const OfflineSkillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OfflineSkillAsyncHandler;
			typedef Outcome<Error, Model::OnlineSkillResult> OnlineSkillOutcome;
			typedef std::future<OnlineSkillOutcome> OnlineSkillOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::OnlineSkillRequest&, const OnlineSkillOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnlineSkillAsyncHandler;
			typedef Outcome<Error, Model::PublishSkillVersionResult> PublishSkillVersionOutcome;
			typedef std::future<PublishSkillVersionOutcome> PublishSkillVersionOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::PublishSkillVersionRequest&, const PublishSkillVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishSkillVersionAsyncHandler;
			typedef Outcome<Error, Model::RedraftSkillVersionResult> RedraftSkillVersionOutcome;
			typedef std::future<RedraftSkillVersionOutcome> RedraftSkillVersionOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::RedraftSkillVersionRequest&, const RedraftSkillVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RedraftSkillVersionAsyncHandler;
			typedef Outcome<Error, Model::SubmitPromptVersionResult> SubmitPromptVersionOutcome;
			typedef std::future<SubmitPromptVersionOutcome> SubmitPromptVersionOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::SubmitPromptVersionRequest&, const SubmitPromptVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPromptVersionAsyncHandler;
			typedef Outcome<Error, Model::SubmitSkillVersionResult> SubmitSkillVersionOutcome;
			typedef std::future<SubmitSkillVersionOutcome> SubmitSkillVersionOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::SubmitSkillVersionRequest&, const SubmitSkillVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSkillVersionAsyncHandler;
			typedef Outcome<Error, Model::UpdateNamespaceResult> UpdateNamespaceOutcome;
			typedef std::future<UpdateNamespaceOutcome> UpdateNamespaceOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::UpdateNamespaceRequest&, const UpdateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::UpdatePromptResult> UpdatePromptOutcome;
			typedef std::future<UpdatePromptOutcome> UpdatePromptOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::UpdatePromptRequest&, const UpdatePromptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePromptAsyncHandler;
			typedef Outcome<Error, Model::UpdatePromptVersionResult> UpdatePromptVersionOutcome;
			typedef std::future<UpdatePromptVersionOutcome> UpdatePromptVersionOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::UpdatePromptVersionRequest&, const UpdatePromptVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePromptVersionAsyncHandler;
			typedef Outcome<Error, Model::UpdateSkillBizTagsResult> UpdateSkillBizTagsOutcome;
			typedef std::future<UpdateSkillBizTagsOutcome> UpdateSkillBizTagsOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::UpdateSkillBizTagsRequest&, const UpdateSkillBizTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSkillBizTagsAsyncHandler;
			typedef Outcome<Error, Model::UpdateSkillDraftResult> UpdateSkillDraftOutcome;
			typedef std::future<UpdateSkillDraftOutcome> UpdateSkillDraftOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::UpdateSkillDraftRequest&, const UpdateSkillDraftOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSkillDraftAsyncHandler;
			typedef Outcome<Error, Model::UpdateSkillLabelsResult> UpdateSkillLabelsOutcome;
			typedef std::future<UpdateSkillLabelsOutcome> UpdateSkillLabelsOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::UpdateSkillLabelsRequest&, const UpdateSkillLabelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSkillLabelsAsyncHandler;
			typedef Outcome<Error, Model::UpdateSkillScopeResult> UpdateSkillScopeOutcome;
			typedef std::future<UpdateSkillScopeOutcome> UpdateSkillScopeOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::UpdateSkillScopeRequest&, const UpdateSkillScopeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSkillScopeAsyncHandler;
			typedef Outcome<Error, Model::UploadSkillViaOssResult> UploadSkillViaOssOutcome;
			typedef std::future<UploadSkillViaOssOutcome> UploadSkillViaOssOutcomeCallable;
			typedef std::function<void(const AIRegistryClient*, const Model::UploadSkillViaOssRequest&, const UploadSkillViaOssOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadSkillViaOssAsyncHandler;

			AIRegistryClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AIRegistryClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AIRegistryClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AIRegistryClient();
			CreateNamespaceOutcome createNamespace(const Model::CreateNamespaceRequest &request)const;
			void createNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNamespaceOutcomeCallable createNamespaceCallable(const Model::CreateNamespaceRequest& request) const;
			CreatePromptOutcome createPrompt(const Model::CreatePromptRequest &request)const;
			void createPromptAsync(const Model::CreatePromptRequest& request, const CreatePromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePromptOutcomeCallable createPromptCallable(const Model::CreatePromptRequest& request) const;
			CreatePromptVersionOutcome createPromptVersion(const Model::CreatePromptVersionRequest &request)const;
			void createPromptVersionAsync(const Model::CreatePromptVersionRequest& request, const CreatePromptVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePromptVersionOutcomeCallable createPromptVersionCallable(const Model::CreatePromptVersionRequest& request) const;
			CreateSkillDraftOutcome createSkillDraft(const Model::CreateSkillDraftRequest &request)const;
			void createSkillDraftAsync(const Model::CreateSkillDraftRequest& request, const CreateSkillDraftAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSkillDraftOutcomeCallable createSkillDraftCallable(const Model::CreateSkillDraftRequest& request) const;
			DeleteNamespaceOutcome deleteNamespace(const Model::DeleteNamespaceRequest &request)const;
			void deleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNamespaceOutcomeCallable deleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;
			DeletePromptOutcome deletePrompt(const Model::DeletePromptRequest &request)const;
			void deletePromptAsync(const Model::DeletePromptRequest& request, const DeletePromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePromptOutcomeCallable deletePromptCallable(const Model::DeletePromptRequest& request) const;
			DeleteSkillOutcome deleteSkill(const Model::DeleteSkillRequest &request)const;
			void deleteSkillAsync(const Model::DeleteSkillRequest& request, const DeleteSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSkillOutcomeCallable deleteSkillCallable(const Model::DeleteSkillRequest& request) const;
			DownloadSkillVersionViaOssOutcome downloadSkillVersionViaOss(const Model::DownloadSkillVersionViaOssRequest &request)const;
			void downloadSkillVersionViaOssAsync(const Model::DownloadSkillVersionViaOssRequest& request, const DownloadSkillVersionViaOssAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadSkillVersionViaOssOutcomeCallable downloadSkillVersionViaOssCallable(const Model::DownloadSkillVersionViaOssRequest& request) const;
			ForcePublishSkillVersionOutcome forcePublishSkillVersion(const Model::ForcePublishSkillVersionRequest &request)const;
			void forcePublishSkillVersionAsync(const Model::ForcePublishSkillVersionRequest& request, const ForcePublishSkillVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ForcePublishSkillVersionOutcomeCallable forcePublishSkillVersionCallable(const Model::ForcePublishSkillVersionRequest& request) const;
			GetNamespaceOutcome getNamespace(const Model::GetNamespaceRequest &request)const;
			void getNamespaceAsync(const Model::GetNamespaceRequest& request, const GetNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNamespaceOutcomeCallable getNamespaceCallable(const Model::GetNamespaceRequest& request) const;
			GetPromptOutcome getPrompt(const Model::GetPromptRequest &request)const;
			void getPromptAsync(const Model::GetPromptRequest& request, const GetPromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPromptOutcomeCallable getPromptCallable(const Model::GetPromptRequest& request) const;
			GetPromptVersionOutcome getPromptVersion(const Model::GetPromptVersionRequest &request)const;
			void getPromptVersionAsync(const Model::GetPromptVersionRequest& request, const GetPromptVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPromptVersionOutcomeCallable getPromptVersionCallable(const Model::GetPromptVersionRequest& request) const;
			GetSkillDetailOutcome getSkillDetail(const Model::GetSkillDetailRequest &request)const;
			void getSkillDetailAsync(const Model::GetSkillDetailRequest& request, const GetSkillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSkillDetailOutcomeCallable getSkillDetailCallable(const Model::GetSkillDetailRequest& request) const;
			GetSkillImportFileUrlOutcome getSkillImportFileUrl(const Model::GetSkillImportFileUrlRequest &request)const;
			void getSkillImportFileUrlAsync(const Model::GetSkillImportFileUrlRequest& request, const GetSkillImportFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSkillImportFileUrlOutcomeCallable getSkillImportFileUrlCallable(const Model::GetSkillImportFileUrlRequest& request) const;
			GetSkillVersionDetailOutcome getSkillVersionDetail(const Model::GetSkillVersionDetailRequest &request)const;
			void getSkillVersionDetailAsync(const Model::GetSkillVersionDetailRequest& request, const GetSkillVersionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSkillVersionDetailOutcomeCallable getSkillVersionDetailCallable(const Model::GetSkillVersionDetailRequest& request) const;
			ListNamespacesOutcome listNamespaces(const Model::ListNamespacesRequest &request)const;
			void listNamespacesAsync(const Model::ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNamespacesOutcomeCallable listNamespacesCallable(const Model::ListNamespacesRequest& request) const;
			ListPromptVersionsOutcome listPromptVersions(const Model::ListPromptVersionsRequest &request)const;
			void listPromptVersionsAsync(const Model::ListPromptVersionsRequest& request, const ListPromptVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPromptVersionsOutcomeCallable listPromptVersionsCallable(const Model::ListPromptVersionsRequest& request) const;
			ListPromptsOutcome listPrompts(const Model::ListPromptsRequest &request)const;
			void listPromptsAsync(const Model::ListPromptsRequest& request, const ListPromptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPromptsOutcomeCallable listPromptsCallable(const Model::ListPromptsRequest& request) const;
			ListSkillsOutcome listSkills(const Model::ListSkillsRequest &request)const;
			void listSkillsAsync(const Model::ListSkillsRequest& request, const ListSkillsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillsOutcomeCallable listSkillsCallable(const Model::ListSkillsRequest& request) const;
			OfflineSkillOutcome offlineSkill(const Model::OfflineSkillRequest &request)const;
			void offlineSkillAsync(const Model::OfflineSkillRequest& request, const OfflineSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OfflineSkillOutcomeCallable offlineSkillCallable(const Model::OfflineSkillRequest& request) const;
			OnlineSkillOutcome onlineSkill(const Model::OnlineSkillRequest &request)const;
			void onlineSkillAsync(const Model::OnlineSkillRequest& request, const OnlineSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnlineSkillOutcomeCallable onlineSkillCallable(const Model::OnlineSkillRequest& request) const;
			PublishSkillVersionOutcome publishSkillVersion(const Model::PublishSkillVersionRequest &request)const;
			void publishSkillVersionAsync(const Model::PublishSkillVersionRequest& request, const PublishSkillVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishSkillVersionOutcomeCallable publishSkillVersionCallable(const Model::PublishSkillVersionRequest& request) const;
			RedraftSkillVersionOutcome redraftSkillVersion(const Model::RedraftSkillVersionRequest &request)const;
			void redraftSkillVersionAsync(const Model::RedraftSkillVersionRequest& request, const RedraftSkillVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RedraftSkillVersionOutcomeCallable redraftSkillVersionCallable(const Model::RedraftSkillVersionRequest& request) const;
			SubmitPromptVersionOutcome submitPromptVersion(const Model::SubmitPromptVersionRequest &request)const;
			void submitPromptVersionAsync(const Model::SubmitPromptVersionRequest& request, const SubmitPromptVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitPromptVersionOutcomeCallable submitPromptVersionCallable(const Model::SubmitPromptVersionRequest& request) const;
			SubmitSkillVersionOutcome submitSkillVersion(const Model::SubmitSkillVersionRequest &request)const;
			void submitSkillVersionAsync(const Model::SubmitSkillVersionRequest& request, const SubmitSkillVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSkillVersionOutcomeCallable submitSkillVersionCallable(const Model::SubmitSkillVersionRequest& request) const;
			UpdateNamespaceOutcome updateNamespace(const Model::UpdateNamespaceRequest &request)const;
			void updateNamespaceAsync(const Model::UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNamespaceOutcomeCallable updateNamespaceCallable(const Model::UpdateNamespaceRequest& request) const;
			UpdatePromptOutcome updatePrompt(const Model::UpdatePromptRequest &request)const;
			void updatePromptAsync(const Model::UpdatePromptRequest& request, const UpdatePromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePromptOutcomeCallable updatePromptCallable(const Model::UpdatePromptRequest& request) const;
			UpdatePromptVersionOutcome updatePromptVersion(const Model::UpdatePromptVersionRequest &request)const;
			void updatePromptVersionAsync(const Model::UpdatePromptVersionRequest& request, const UpdatePromptVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePromptVersionOutcomeCallable updatePromptVersionCallable(const Model::UpdatePromptVersionRequest& request) const;
			UpdateSkillBizTagsOutcome updateSkillBizTags(const Model::UpdateSkillBizTagsRequest &request)const;
			void updateSkillBizTagsAsync(const Model::UpdateSkillBizTagsRequest& request, const UpdateSkillBizTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSkillBizTagsOutcomeCallable updateSkillBizTagsCallable(const Model::UpdateSkillBizTagsRequest& request) const;
			UpdateSkillDraftOutcome updateSkillDraft(const Model::UpdateSkillDraftRequest &request)const;
			void updateSkillDraftAsync(const Model::UpdateSkillDraftRequest& request, const UpdateSkillDraftAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSkillDraftOutcomeCallable updateSkillDraftCallable(const Model::UpdateSkillDraftRequest& request) const;
			UpdateSkillLabelsOutcome updateSkillLabels(const Model::UpdateSkillLabelsRequest &request)const;
			void updateSkillLabelsAsync(const Model::UpdateSkillLabelsRequest& request, const UpdateSkillLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSkillLabelsOutcomeCallable updateSkillLabelsCallable(const Model::UpdateSkillLabelsRequest& request) const;
			UpdateSkillScopeOutcome updateSkillScope(const Model::UpdateSkillScopeRequest &request)const;
			void updateSkillScopeAsync(const Model::UpdateSkillScopeRequest& request, const UpdateSkillScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSkillScopeOutcomeCallable updateSkillScopeCallable(const Model::UpdateSkillScopeRequest& request) const;
			UploadSkillViaOssOutcome uploadSkillViaOss(const Model::UploadSkillViaOssRequest &request)const;
			void uploadSkillViaOssAsync(const Model::UploadSkillViaOssRequest& request, const UploadSkillViaOssAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadSkillViaOssOutcomeCallable uploadSkillViaOssCallable(const Model::UploadSkillViaOssRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AIREGISTRY_AIREGISTRYCLIENT_H_
