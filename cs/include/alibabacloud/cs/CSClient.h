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

#ifndef ALIBABACLOUD_CS_CSCLIENT_H_
#define ALIBABACLOUD_CS_CSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "CSExport.h"
#include "model/AttachInstancesRequest.h"
#include "model/AttachInstancesResult.h"
#include "model/CancelClusterUpgradeRequest.h"
#include "model/CancelClusterUpgradeResult.h"
#include "model/CancelComponentUpgradeRequest.h"
#include "model/CancelComponentUpgradeResult.h"
#include "model/CancelWorkflowRequest.h"
#include "model/CancelWorkflowResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateTemplateRequest.h"
#include "model/CreateTemplateResult.h"
#include "model/CreateTriggerHookRequest.h"
#include "model/CreateTriggerHookResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DeleteClusterNodesRequest.h"
#include "model/DeleteClusterNodesResult.h"
#include "model/DeleteTemplateRequest.h"
#include "model/DeleteTemplateResult.h"
#include "model/DeleteTriggerHookRequest.h"
#include "model/DeleteTriggerHookResult.h"
#include "model/DescirbeWorkflowRequest.h"
#include "model/DescirbeWorkflowResult.h"
#include "model/DescribeAddonsRequest.h"
#include "model/DescribeAddonsResult.h"
#include "model/DescribeApiVersionRequest.h"
#include "model/DescribeApiVersionResult.h"
#include "model/DescribeClusterAddonUpgradeStatusRequest.h"
#include "model/DescribeClusterAddonUpgradeStatusResult.h"
#include "model/DescribeClusterAddonsVersionRequest.h"
#include "model/DescribeClusterAddonsVersionResult.h"
#include "model/DescribeClusterAttachScriptsRequest.h"
#include "model/DescribeClusterAttachScriptsResult.h"
#include "model/DescribeClusterDetailRequest.h"
#include "model/DescribeClusterDetailResult.h"
#include "model/DescribeClusterLogsRequest.h"
#include "model/DescribeClusterLogsResult.h"
#include "model/DescribeClusterNodesRequest.h"
#include "model/DescribeClusterNodesResult.h"
#include "model/DescribeClusterResourcesRequest.h"
#include "model/DescribeClusterResourcesResult.h"
#include "model/DescribeClusterUserKubeconfigRequest.h"
#include "model/DescribeClusterUserKubeconfigResult.h"
#include "model/DescribeClusterV2UserKubeconfigRequest.h"
#include "model/DescribeClusterV2UserKubeconfigResult.h"
#include "model/DescribeClustersRequest.h"
#include "model/DescribeClustersResult.h"
#include "model/DescribeExternalAgentRequest.h"
#include "model/DescribeExternalAgentResult.h"
#include "model/DescribeTemplatesRequest.h"
#include "model/DescribeTemplatesResult.h"
#include "model/DescribeUserQuotaRequest.h"
#include "model/DescribeUserQuotaResult.h"
#include "model/DescribeWorkflowsRequest.h"
#include "model/DescribeWorkflowsResult.h"
#include "model/GetUpgradeStatusRequest.h"
#include "model/GetUpgradeStatusResult.h"
#include "model/InstallClusterAddonsRequest.h"
#include "model/InstallClusterAddonsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyClusterRequest.h"
#include "model/ModifyClusterResult.h"
#include "model/ModifyClusterTagsRequest.h"
#include "model/ModifyClusterTagsResult.h"
#include "model/PauseClusterUpgradeRequest.h"
#include "model/PauseClusterUpgradeResult.h"
#include "model/PauseComponentUpgradeRequest.h"
#include "model/PauseComponentUpgradeResult.h"
#include "model/RemoveClusterNodesRequest.h"
#include "model/RemoveClusterNodesResult.h"
#include "model/RemoveWorkflowRequest.h"
#include "model/RemoveWorkflowResult.h"
#include "model/ResumeComponentUpgradeRequest.h"
#include "model/ResumeComponentUpgradeResult.h"
#include "model/ResumeUpgradeClusterRequest.h"
#include "model/ResumeUpgradeClusterResult.h"
#include "model/ScaleClusterRequest.h"
#include "model/ScaleClusterResult.h"
#include "model/ScaleOutClusterRequest.h"
#include "model/ScaleOutClusterResult.h"
#include "model/StartWorkflowRequest.h"
#include "model/StartWorkflowResult.h"
#include "model/UnInstallClusterAddonsRequest.h"
#include "model/UnInstallClusterAddonsResult.h"
#include "model/UpdateK8sClusterUserConfigExpireRequest.h"
#include "model/UpdateK8sClusterUserConfigExpireResult.h"
#include "model/UpgradeClusterRequest.h"
#include "model/UpgradeClusterResult.h"
#include "model/UpgradeClusterAddonsRequest.h"
#include "model/UpgradeClusterAddonsResult.h"


namespace AlibabaCloud
{
	namespace CS
	{
		class ALIBABACLOUD_CS_EXPORT CSClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachInstancesResult> AttachInstancesOutcome;
			typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::AttachInstancesRequest&, const AttachInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstancesAsyncHandler;
			typedef Outcome<Error, Model::CancelClusterUpgradeResult> CancelClusterUpgradeOutcome;
			typedef std::future<CancelClusterUpgradeOutcome> CancelClusterUpgradeOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CancelClusterUpgradeRequest&, const CancelClusterUpgradeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelClusterUpgradeAsyncHandler;
			typedef Outcome<Error, Model::CancelComponentUpgradeResult> CancelComponentUpgradeOutcome;
			typedef std::future<CancelComponentUpgradeOutcome> CancelComponentUpgradeOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CancelComponentUpgradeRequest&, const CancelComponentUpgradeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelComponentUpgradeAsyncHandler;
			typedef Outcome<Error, Model::CancelWorkflowResult> CancelWorkflowOutcome;
			typedef std::future<CancelWorkflowOutcome> CancelWorkflowOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CancelWorkflowRequest&, const CancelWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelWorkflowAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateTemplateResult> CreateTemplateOutcome;
			typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CreateTemplateRequest&, const CreateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateTriggerHookResult> CreateTriggerHookOutcome;
			typedef std::future<CreateTriggerHookOutcome> CreateTriggerHookOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CreateTriggerHookRequest&, const CreateTriggerHookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTriggerHookAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterNodesResult> DeleteClusterNodesOutcome;
			typedef std::future<DeleteClusterNodesOutcome> DeleteClusterNodesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DeleteClusterNodesRequest&, const DeleteClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplateResult> DeleteTemplateOutcome;
			typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DeleteTemplateRequest&, const DeleteTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteTriggerHookResult> DeleteTriggerHookOutcome;
			typedef std::future<DeleteTriggerHookOutcome> DeleteTriggerHookOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DeleteTriggerHookRequest&, const DeleteTriggerHookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTriggerHookAsyncHandler;
			typedef Outcome<Error, Model::DescirbeWorkflowResult> DescirbeWorkflowOutcome;
			typedef std::future<DescirbeWorkflowOutcome> DescirbeWorkflowOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescirbeWorkflowRequest&, const DescirbeWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescirbeWorkflowAsyncHandler;
			typedef Outcome<Error, Model::DescribeAddonsResult> DescribeAddonsOutcome;
			typedef std::future<DescribeAddonsOutcome> DescribeAddonsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeAddonsRequest&, const DescribeAddonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddonsAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiVersionResult> DescribeApiVersionOutcome;
			typedef std::future<DescribeApiVersionOutcome> DescribeApiVersionOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeApiVersionRequest&, const DescribeApiVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterAddonUpgradeStatusResult> DescribeClusterAddonUpgradeStatusOutcome;
			typedef std::future<DescribeClusterAddonUpgradeStatusOutcome> DescribeClusterAddonUpgradeStatusOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterAddonUpgradeStatusRequest&, const DescribeClusterAddonUpgradeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAddonUpgradeStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterAddonsVersionResult> DescribeClusterAddonsVersionOutcome;
			typedef std::future<DescribeClusterAddonsVersionOutcome> DescribeClusterAddonsVersionOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterAddonsVersionRequest&, const DescribeClusterAddonsVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAddonsVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterAttachScriptsResult> DescribeClusterAttachScriptsOutcome;
			typedef std::future<DescribeClusterAttachScriptsOutcome> DescribeClusterAttachScriptsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterAttachScriptsRequest&, const DescribeClusterAttachScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAttachScriptsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterDetailResult> DescribeClusterDetailOutcome;
			typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterDetailRequest&, const DescribeClusterDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterLogsResult> DescribeClusterLogsOutcome;
			typedef std::future<DescribeClusterLogsOutcome> DescribeClusterLogsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterLogsRequest&, const DescribeClusterLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterNodesResult> DescribeClusterNodesOutcome;
			typedef std::future<DescribeClusterNodesOutcome> DescribeClusterNodesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterNodesRequest&, const DescribeClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResourcesResult> DescribeClusterResourcesOutcome;
			typedef std::future<DescribeClusterResourcesOutcome> DescribeClusterResourcesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterResourcesRequest&, const DescribeClusterResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterUserKubeconfigResult> DescribeClusterUserKubeconfigOutcome;
			typedef std::future<DescribeClusterUserKubeconfigOutcome> DescribeClusterUserKubeconfigOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterUserKubeconfigRequest&, const DescribeClusterUserKubeconfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterUserKubeconfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterV2UserKubeconfigResult> DescribeClusterV2UserKubeconfigOutcome;
			typedef std::future<DescribeClusterV2UserKubeconfigOutcome> DescribeClusterV2UserKubeconfigOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterV2UserKubeconfigRequest&, const DescribeClusterV2UserKubeconfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterV2UserKubeconfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeClustersResult> DescribeClustersOutcome;
			typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClustersRequest&, const DescribeClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeExternalAgentResult> DescribeExternalAgentOutcome;
			typedef std::future<DescribeExternalAgentOutcome> DescribeExternalAgentOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeExternalAgentRequest&, const DescribeExternalAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalAgentAsyncHandler;
			typedef Outcome<Error, Model::DescribeTemplatesResult> DescribeTemplatesOutcome;
			typedef std::future<DescribeTemplatesOutcome> DescribeTemplatesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeTemplatesRequest&, const DescribeTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserQuotaResult> DescribeUserQuotaOutcome;
			typedef std::future<DescribeUserQuotaOutcome> DescribeUserQuotaOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeUserQuotaRequest&, const DescribeUserQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeWorkflowsResult> DescribeWorkflowsOutcome;
			typedef std::future<DescribeWorkflowsOutcome> DescribeWorkflowsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeWorkflowsRequest&, const DescribeWorkflowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowsAsyncHandler;
			typedef Outcome<Error, Model::GetUpgradeStatusResult> GetUpgradeStatusOutcome;
			typedef std::future<GetUpgradeStatusOutcome> GetUpgradeStatusOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::GetUpgradeStatusRequest&, const GetUpgradeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUpgradeStatusAsyncHandler;
			typedef Outcome<Error, Model::InstallClusterAddonsResult> InstallClusterAddonsOutcome;
			typedef std::future<InstallClusterAddonsOutcome> InstallClusterAddonsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::InstallClusterAddonsRequest&, const InstallClusterAddonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallClusterAddonsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterResult> ModifyClusterOutcome;
			typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ModifyClusterRequest&, const ModifyClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterTagsResult> ModifyClusterTagsOutcome;
			typedef std::future<ModifyClusterTagsOutcome> ModifyClusterTagsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ModifyClusterTagsRequest&, const ModifyClusterTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterTagsAsyncHandler;
			typedef Outcome<Error, Model::PauseClusterUpgradeResult> PauseClusterUpgradeOutcome;
			typedef std::future<PauseClusterUpgradeOutcome> PauseClusterUpgradeOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::PauseClusterUpgradeRequest&, const PauseClusterUpgradeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PauseClusterUpgradeAsyncHandler;
			typedef Outcome<Error, Model::PauseComponentUpgradeResult> PauseComponentUpgradeOutcome;
			typedef std::future<PauseComponentUpgradeOutcome> PauseComponentUpgradeOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::PauseComponentUpgradeRequest&, const PauseComponentUpgradeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PauseComponentUpgradeAsyncHandler;
			typedef Outcome<Error, Model::RemoveClusterNodesResult> RemoveClusterNodesOutcome;
			typedef std::future<RemoveClusterNodesOutcome> RemoveClusterNodesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::RemoveClusterNodesRequest&, const RemoveClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::RemoveWorkflowResult> RemoveWorkflowOutcome;
			typedef std::future<RemoveWorkflowOutcome> RemoveWorkflowOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::RemoveWorkflowRequest&, const RemoveWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWorkflowAsyncHandler;
			typedef Outcome<Error, Model::ResumeComponentUpgradeResult> ResumeComponentUpgradeOutcome;
			typedef std::future<ResumeComponentUpgradeOutcome> ResumeComponentUpgradeOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ResumeComponentUpgradeRequest&, const ResumeComponentUpgradeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeComponentUpgradeAsyncHandler;
			typedef Outcome<Error, Model::ResumeUpgradeClusterResult> ResumeUpgradeClusterOutcome;
			typedef std::future<ResumeUpgradeClusterOutcome> ResumeUpgradeClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ResumeUpgradeClusterRequest&, const ResumeUpgradeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeUpgradeClusterAsyncHandler;
			typedef Outcome<Error, Model::ScaleClusterResult> ScaleClusterOutcome;
			typedef std::future<ScaleClusterOutcome> ScaleClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ScaleClusterRequest&, const ScaleClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleClusterAsyncHandler;
			typedef Outcome<Error, Model::ScaleOutClusterResult> ScaleOutClusterOutcome;
			typedef std::future<ScaleOutClusterOutcome> ScaleOutClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ScaleOutClusterRequest&, const ScaleOutClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutClusterAsyncHandler;
			typedef Outcome<Error, Model::StartWorkflowResult> StartWorkflowOutcome;
			typedef std::future<StartWorkflowOutcome> StartWorkflowOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::StartWorkflowRequest&, const StartWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartWorkflowAsyncHandler;
			typedef Outcome<Error, Model::UnInstallClusterAddonsResult> UnInstallClusterAddonsOutcome;
			typedef std::future<UnInstallClusterAddonsOutcome> UnInstallClusterAddonsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::UnInstallClusterAddonsRequest&, const UnInstallClusterAddonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnInstallClusterAddonsAsyncHandler;
			typedef Outcome<Error, Model::UpdateK8sClusterUserConfigExpireResult> UpdateK8sClusterUserConfigExpireOutcome;
			typedef std::future<UpdateK8sClusterUserConfigExpireOutcome> UpdateK8sClusterUserConfigExpireOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::UpdateK8sClusterUserConfigExpireRequest&, const UpdateK8sClusterUserConfigExpireOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateK8sClusterUserConfigExpireAsyncHandler;
			typedef Outcome<Error, Model::UpgradeClusterResult> UpgradeClusterOutcome;
			typedef std::future<UpgradeClusterOutcome> UpgradeClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::UpgradeClusterRequest&, const UpgradeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClusterAsyncHandler;
			typedef Outcome<Error, Model::UpgradeClusterAddonsResult> UpgradeClusterAddonsOutcome;
			typedef std::future<UpgradeClusterAddonsOutcome> UpgradeClusterAddonsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::UpgradeClusterAddonsRequest&, const UpgradeClusterAddonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClusterAddonsAsyncHandler;

			CSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CSClient();
			AttachInstancesOutcome attachInstances(const Model::AttachInstancesRequest &request)const;
			void attachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachInstancesOutcomeCallable attachInstancesCallable(const Model::AttachInstancesRequest& request) const;
			CancelClusterUpgradeOutcome cancelClusterUpgrade(const Model::CancelClusterUpgradeRequest &request)const;
			void cancelClusterUpgradeAsync(const Model::CancelClusterUpgradeRequest& request, const CancelClusterUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelClusterUpgradeOutcomeCallable cancelClusterUpgradeCallable(const Model::CancelClusterUpgradeRequest& request) const;
			CancelComponentUpgradeOutcome cancelComponentUpgrade(const Model::CancelComponentUpgradeRequest &request)const;
			void cancelComponentUpgradeAsync(const Model::CancelComponentUpgradeRequest& request, const CancelComponentUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelComponentUpgradeOutcomeCallable cancelComponentUpgradeCallable(const Model::CancelComponentUpgradeRequest& request) const;
			CancelWorkflowOutcome cancelWorkflow(const Model::CancelWorkflowRequest &request)const;
			void cancelWorkflowAsync(const Model::CancelWorkflowRequest& request, const CancelWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelWorkflowOutcomeCallable cancelWorkflowCallable(const Model::CancelWorkflowRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateTemplateOutcome createTemplate(const Model::CreateTemplateRequest &request)const;
			void createTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTemplateOutcomeCallable createTemplateCallable(const Model::CreateTemplateRequest& request) const;
			CreateTriggerHookOutcome createTriggerHook(const Model::CreateTriggerHookRequest &request)const;
			void createTriggerHookAsync(const Model::CreateTriggerHookRequest& request, const CreateTriggerHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTriggerHookOutcomeCallable createTriggerHookCallable(const Model::CreateTriggerHookRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DeleteClusterNodesOutcome deleteClusterNodes(const Model::DeleteClusterNodesRequest &request)const;
			void deleteClusterNodesAsync(const Model::DeleteClusterNodesRequest& request, const DeleteClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterNodesOutcomeCallable deleteClusterNodesCallable(const Model::DeleteClusterNodesRequest& request) const;
			DeleteTemplateOutcome deleteTemplate(const Model::DeleteTemplateRequest &request)const;
			void deleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplateOutcomeCallable deleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;
			DeleteTriggerHookOutcome deleteTriggerHook(const Model::DeleteTriggerHookRequest &request)const;
			void deleteTriggerHookAsync(const Model::DeleteTriggerHookRequest& request, const DeleteTriggerHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTriggerHookOutcomeCallable deleteTriggerHookCallable(const Model::DeleteTriggerHookRequest& request) const;
			DescirbeWorkflowOutcome descirbeWorkflow(const Model::DescirbeWorkflowRequest &request)const;
			void descirbeWorkflowAsync(const Model::DescirbeWorkflowRequest& request, const DescirbeWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescirbeWorkflowOutcomeCallable descirbeWorkflowCallable(const Model::DescirbeWorkflowRequest& request) const;
			DescribeAddonsOutcome describeAddons(const Model::DescribeAddonsRequest &request)const;
			void describeAddonsAsync(const Model::DescribeAddonsRequest& request, const DescribeAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAddonsOutcomeCallable describeAddonsCallable(const Model::DescribeAddonsRequest& request) const;
			DescribeApiVersionOutcome describeApiVersion(const Model::DescribeApiVersionRequest &request)const;
			void describeApiVersionAsync(const Model::DescribeApiVersionRequest& request, const DescribeApiVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiVersionOutcomeCallable describeApiVersionCallable(const Model::DescribeApiVersionRequest& request) const;
			DescribeClusterAddonUpgradeStatusOutcome describeClusterAddonUpgradeStatus(const Model::DescribeClusterAddonUpgradeStatusRequest &request)const;
			void describeClusterAddonUpgradeStatusAsync(const Model::DescribeClusterAddonUpgradeStatusRequest& request, const DescribeClusterAddonUpgradeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterAddonUpgradeStatusOutcomeCallable describeClusterAddonUpgradeStatusCallable(const Model::DescribeClusterAddonUpgradeStatusRequest& request) const;
			DescribeClusterAddonsVersionOutcome describeClusterAddonsVersion(const Model::DescribeClusterAddonsVersionRequest &request)const;
			void describeClusterAddonsVersionAsync(const Model::DescribeClusterAddonsVersionRequest& request, const DescribeClusterAddonsVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterAddonsVersionOutcomeCallable describeClusterAddonsVersionCallable(const Model::DescribeClusterAddonsVersionRequest& request) const;
			DescribeClusterAttachScriptsOutcome describeClusterAttachScripts(const Model::DescribeClusterAttachScriptsRequest &request)const;
			void describeClusterAttachScriptsAsync(const Model::DescribeClusterAttachScriptsRequest& request, const DescribeClusterAttachScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterAttachScriptsOutcomeCallable describeClusterAttachScriptsCallable(const Model::DescribeClusterAttachScriptsRequest& request) const;
			DescribeClusterDetailOutcome describeClusterDetail(const Model::DescribeClusterDetailRequest &request)const;
			void describeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterDetailOutcomeCallable describeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request) const;
			DescribeClusterLogsOutcome describeClusterLogs(const Model::DescribeClusterLogsRequest &request)const;
			void describeClusterLogsAsync(const Model::DescribeClusterLogsRequest& request, const DescribeClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterLogsOutcomeCallable describeClusterLogsCallable(const Model::DescribeClusterLogsRequest& request) const;
			DescribeClusterNodesOutcome describeClusterNodes(const Model::DescribeClusterNodesRequest &request)const;
			void describeClusterNodesAsync(const Model::DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterNodesOutcomeCallable describeClusterNodesCallable(const Model::DescribeClusterNodesRequest& request) const;
			DescribeClusterResourcesOutcome describeClusterResources(const Model::DescribeClusterResourcesRequest &request)const;
			void describeClusterResourcesAsync(const Model::DescribeClusterResourcesRequest& request, const DescribeClusterResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterResourcesOutcomeCallable describeClusterResourcesCallable(const Model::DescribeClusterResourcesRequest& request) const;
			DescribeClusterUserKubeconfigOutcome describeClusterUserKubeconfig(const Model::DescribeClusterUserKubeconfigRequest &request)const;
			void describeClusterUserKubeconfigAsync(const Model::DescribeClusterUserKubeconfigRequest& request, const DescribeClusterUserKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterUserKubeconfigOutcomeCallable describeClusterUserKubeconfigCallable(const Model::DescribeClusterUserKubeconfigRequest& request) const;
			DescribeClusterV2UserKubeconfigOutcome describeClusterV2UserKubeconfig(const Model::DescribeClusterV2UserKubeconfigRequest &request)const;
			void describeClusterV2UserKubeconfigAsync(const Model::DescribeClusterV2UserKubeconfigRequest& request, const DescribeClusterV2UserKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterV2UserKubeconfigOutcomeCallable describeClusterV2UserKubeconfigCallable(const Model::DescribeClusterV2UserKubeconfigRequest& request) const;
			DescribeClustersOutcome describeClusters(const Model::DescribeClustersRequest &request)const;
			void describeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClustersOutcomeCallable describeClustersCallable(const Model::DescribeClustersRequest& request) const;
			DescribeExternalAgentOutcome describeExternalAgent(const Model::DescribeExternalAgentRequest &request)const;
			void describeExternalAgentAsync(const Model::DescribeExternalAgentRequest& request, const DescribeExternalAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExternalAgentOutcomeCallable describeExternalAgentCallable(const Model::DescribeExternalAgentRequest& request) const;
			DescribeTemplatesOutcome describeTemplates(const Model::DescribeTemplatesRequest &request)const;
			void describeTemplatesAsync(const Model::DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTemplatesOutcomeCallable describeTemplatesCallable(const Model::DescribeTemplatesRequest& request) const;
			DescribeUserQuotaOutcome describeUserQuota(const Model::DescribeUserQuotaRequest &request)const;
			void describeUserQuotaAsync(const Model::DescribeUserQuotaRequest& request, const DescribeUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserQuotaOutcomeCallable describeUserQuotaCallable(const Model::DescribeUserQuotaRequest& request) const;
			DescribeWorkflowsOutcome describeWorkflows(const Model::DescribeWorkflowsRequest &request)const;
			void describeWorkflowsAsync(const Model::DescribeWorkflowsRequest& request, const DescribeWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWorkflowsOutcomeCallable describeWorkflowsCallable(const Model::DescribeWorkflowsRequest& request) const;
			GetUpgradeStatusOutcome getUpgradeStatus(const Model::GetUpgradeStatusRequest &request)const;
			void getUpgradeStatusAsync(const Model::GetUpgradeStatusRequest& request, const GetUpgradeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUpgradeStatusOutcomeCallable getUpgradeStatusCallable(const Model::GetUpgradeStatusRequest& request) const;
			InstallClusterAddonsOutcome installClusterAddons(const Model::InstallClusterAddonsRequest &request)const;
			void installClusterAddonsAsync(const Model::InstallClusterAddonsRequest& request, const InstallClusterAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallClusterAddonsOutcomeCallable installClusterAddonsCallable(const Model::InstallClusterAddonsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyClusterOutcome modifyCluster(const Model::ModifyClusterRequest &request)const;
			void modifyClusterAsync(const Model::ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterOutcomeCallable modifyClusterCallable(const Model::ModifyClusterRequest& request) const;
			ModifyClusterTagsOutcome modifyClusterTags(const Model::ModifyClusterTagsRequest &request)const;
			void modifyClusterTagsAsync(const Model::ModifyClusterTagsRequest& request, const ModifyClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterTagsOutcomeCallable modifyClusterTagsCallable(const Model::ModifyClusterTagsRequest& request) const;
			PauseClusterUpgradeOutcome pauseClusterUpgrade(const Model::PauseClusterUpgradeRequest &request)const;
			void pauseClusterUpgradeAsync(const Model::PauseClusterUpgradeRequest& request, const PauseClusterUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PauseClusterUpgradeOutcomeCallable pauseClusterUpgradeCallable(const Model::PauseClusterUpgradeRequest& request) const;
			PauseComponentUpgradeOutcome pauseComponentUpgrade(const Model::PauseComponentUpgradeRequest &request)const;
			void pauseComponentUpgradeAsync(const Model::PauseComponentUpgradeRequest& request, const PauseComponentUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PauseComponentUpgradeOutcomeCallable pauseComponentUpgradeCallable(const Model::PauseComponentUpgradeRequest& request) const;
			RemoveClusterNodesOutcome removeClusterNodes(const Model::RemoveClusterNodesRequest &request)const;
			void removeClusterNodesAsync(const Model::RemoveClusterNodesRequest& request, const RemoveClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveClusterNodesOutcomeCallable removeClusterNodesCallable(const Model::RemoveClusterNodesRequest& request) const;
			RemoveWorkflowOutcome removeWorkflow(const Model::RemoveWorkflowRequest &request)const;
			void removeWorkflowAsync(const Model::RemoveWorkflowRequest& request, const RemoveWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveWorkflowOutcomeCallable removeWorkflowCallable(const Model::RemoveWorkflowRequest& request) const;
			ResumeComponentUpgradeOutcome resumeComponentUpgrade(const Model::ResumeComponentUpgradeRequest &request)const;
			void resumeComponentUpgradeAsync(const Model::ResumeComponentUpgradeRequest& request, const ResumeComponentUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeComponentUpgradeOutcomeCallable resumeComponentUpgradeCallable(const Model::ResumeComponentUpgradeRequest& request) const;
			ResumeUpgradeClusterOutcome resumeUpgradeCluster(const Model::ResumeUpgradeClusterRequest &request)const;
			void resumeUpgradeClusterAsync(const Model::ResumeUpgradeClusterRequest& request, const ResumeUpgradeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeUpgradeClusterOutcomeCallable resumeUpgradeClusterCallable(const Model::ResumeUpgradeClusterRequest& request) const;
			ScaleClusterOutcome scaleCluster(const Model::ScaleClusterRequest &request)const;
			void scaleClusterAsync(const Model::ScaleClusterRequest& request, const ScaleClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleClusterOutcomeCallable scaleClusterCallable(const Model::ScaleClusterRequest& request) const;
			ScaleOutClusterOutcome scaleOutCluster(const Model::ScaleOutClusterRequest &request)const;
			void scaleOutClusterAsync(const Model::ScaleOutClusterRequest& request, const ScaleOutClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleOutClusterOutcomeCallable scaleOutClusterCallable(const Model::ScaleOutClusterRequest& request) const;
			StartWorkflowOutcome startWorkflow(const Model::StartWorkflowRequest &request)const;
			void startWorkflowAsync(const Model::StartWorkflowRequest& request, const StartWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartWorkflowOutcomeCallable startWorkflowCallable(const Model::StartWorkflowRequest& request) const;
			UnInstallClusterAddonsOutcome unInstallClusterAddons(const Model::UnInstallClusterAddonsRequest &request)const;
			void unInstallClusterAddonsAsync(const Model::UnInstallClusterAddonsRequest& request, const UnInstallClusterAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnInstallClusterAddonsOutcomeCallable unInstallClusterAddonsCallable(const Model::UnInstallClusterAddonsRequest& request) const;
			UpdateK8sClusterUserConfigExpireOutcome updateK8sClusterUserConfigExpire(const Model::UpdateK8sClusterUserConfigExpireRequest &request)const;
			void updateK8sClusterUserConfigExpireAsync(const Model::UpdateK8sClusterUserConfigExpireRequest& request, const UpdateK8sClusterUserConfigExpireAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateK8sClusterUserConfigExpireOutcomeCallable updateK8sClusterUserConfigExpireCallable(const Model::UpdateK8sClusterUserConfigExpireRequest& request) const;
			UpgradeClusterOutcome upgradeCluster(const Model::UpgradeClusterRequest &request)const;
			void upgradeClusterAsync(const Model::UpgradeClusterRequest& request, const UpgradeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeClusterOutcomeCallable upgradeClusterCallable(const Model::UpgradeClusterRequest& request) const;
			UpgradeClusterAddonsOutcome upgradeClusterAddons(const Model::UpgradeClusterAddonsRequest &request)const;
			void upgradeClusterAddonsAsync(const Model::UpgradeClusterAddonsRequest& request, const UpgradeClusterAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeClusterAddonsOutcomeCallable upgradeClusterAddonsCallable(const Model::UpgradeClusterAddonsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CS_CSCLIENT_H_
