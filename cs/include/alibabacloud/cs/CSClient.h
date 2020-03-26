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
#include "model/CancelWorkflowRequest.h"
#include "model/CancelWorkflowResult.h"
#include "model/CheckAliyunCSServiceRoleRequest.h"
#include "model/CheckAliyunCSServiceRoleResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateClusterByResourcesGroupRequest.h"
#include "model/CreateClusterByResourcesGroupResult.h"
#include "model/CreateServiceMeshRequest.h"
#include "model/CreateServiceMeshResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DeleteClusterNodeRequest.h"
#include "model/DeleteClusterNodeResult.h"
#include "model/DeleteClusterNodesRequest.h"
#include "model/DeleteClusterNodesResult.h"
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
#include "model/DescribeClusterCertsRequest.h"
#include "model/DescribeClusterCertsResult.h"
#include "model/DescribeClusterDetailRequest.h"
#include "model/DescribeClusterDetailResult.h"
#include "model/DescribeClusterEndpointsRequest.h"
#include "model/DescribeClusterEndpointsResult.h"
#include "model/DescribeClusterLogsRequest.h"
#include "model/DescribeClusterLogsResult.h"
#include "model/DescribeClusterNodesRequest.h"
#include "model/DescribeClusterNodesResult.h"
#include "model/DescribeClusterUserKubeconfigRequest.h"
#include "model/DescribeClusterUserKubeconfigResult.h"
#include "model/DescribeClusterV2UserKubeconfigRequest.h"
#include "model/DescribeClusterV2UserKubeconfigResult.h"
#include "model/DescribeClustersRequest.h"
#include "model/DescribeClustersResult.h"
#include "model/DescribeEdgeClusterAttachScriptsRequest.h"
#include "model/DescribeEdgeClusterAttachScriptsResult.h"
#include "model/DescribeWorkflowsRequest.h"
#include "model/DescribeWorkflowsResult.h"
#include "model/DownloadClusterNodeCertsRequest.h"
#include "model/DownloadClusterNodeCertsResult.h"
#include "model/ModifyClusterRequest.h"
#include "model/ModifyClusterResult.h"
#include "model/ModifyClusterTagsRequest.h"
#include "model/ModifyClusterTagsResult.h"
#include "model/RemoveWorkflowRequest.h"
#include "model/RemoveWorkflowResult.h"
#include "model/ResetClusterNodeRequest.h"
#include "model/ResetClusterNodeResult.h"
#include "model/RevokeClusterTokenRequest.h"
#include "model/RevokeClusterTokenResult.h"
#include "model/ScaleClusterRequest.h"
#include "model/ScaleClusterResult.h"
#include "model/ScaleOutClusterRequest.h"
#include "model/ScaleOutClusterResult.h"
#include "model/ServiceMeshAddClusterRequest.h"
#include "model/ServiceMeshAddClusterResult.h"
#include "model/ServiceMeshApiServerRequest.h"
#include "model/ServiceMeshApiServerResult.h"
#include "model/ServiceMeshRemoveClusterRequest.h"
#include "model/ServiceMeshRemoveClusterResult.h"
#include "model/StartWorkflowRequest.h"
#include "model/StartWorkflowResult.h"
#include "model/UnInstallClusterAddonsRequest.h"
#include "model/UnInstallClusterAddonsResult.h"
#include "model/UpdateK8sClusterUserConfigExpireRequest.h"
#include "model/UpdateK8sClusterUserConfigExpireResult.h"
#include "model/UpdateServiceMeshRequest.h"
#include "model/UpdateServiceMeshResult.h"


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
			typedef Outcome<Error, Model::CancelWorkflowResult> CancelWorkflowOutcome;
			typedef std::future<CancelWorkflowOutcome> CancelWorkflowOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CancelWorkflowRequest&, const CancelWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelWorkflowAsyncHandler;
			typedef Outcome<Error, Model::CheckAliyunCSServiceRoleResult> CheckAliyunCSServiceRoleOutcome;
			typedef std::future<CheckAliyunCSServiceRoleOutcome> CheckAliyunCSServiceRoleOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CheckAliyunCSServiceRoleRequest&, const CheckAliyunCSServiceRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAliyunCSServiceRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterByResourcesGroupResult> CreateClusterByResourcesGroupOutcome;
			typedef std::future<CreateClusterByResourcesGroupOutcome> CreateClusterByResourcesGroupOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CreateClusterByResourcesGroupRequest&, const CreateClusterByResourcesGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterByResourcesGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceMeshResult> CreateServiceMeshOutcome;
			typedef std::future<CreateServiceMeshOutcome> CreateServiceMeshOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CreateServiceMeshRequest&, const CreateServiceMeshOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceMeshAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterNodeResult> DeleteClusterNodeOutcome;
			typedef std::future<DeleteClusterNodeOutcome> DeleteClusterNodeOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DeleteClusterNodeRequest&, const DeleteClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterNodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterNodesResult> DeleteClusterNodesOutcome;
			typedef std::future<DeleteClusterNodesOutcome> DeleteClusterNodesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DeleteClusterNodesRequest&, const DeleteClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterNodesAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeClusterCertsResult> DescribeClusterCertsOutcome;
			typedef std::future<DescribeClusterCertsOutcome> DescribeClusterCertsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterCertsRequest&, const DescribeClusterCertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterCertsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterDetailResult> DescribeClusterDetailOutcome;
			typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterDetailRequest&, const DescribeClusterDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterEndpointsResult> DescribeClusterEndpointsOutcome;
			typedef std::future<DescribeClusterEndpointsOutcome> DescribeClusterEndpointsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterEndpointsRequest&, const DescribeClusterEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterLogsResult> DescribeClusterLogsOutcome;
			typedef std::future<DescribeClusterLogsOutcome> DescribeClusterLogsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterLogsRequest&, const DescribeClusterLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterNodesResult> DescribeClusterNodesOutcome;
			typedef std::future<DescribeClusterNodesOutcome> DescribeClusterNodesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterNodesRequest&, const DescribeClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterUserKubeconfigResult> DescribeClusterUserKubeconfigOutcome;
			typedef std::future<DescribeClusterUserKubeconfigOutcome> DescribeClusterUserKubeconfigOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterUserKubeconfigRequest&, const DescribeClusterUserKubeconfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterUserKubeconfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterV2UserKubeconfigResult> DescribeClusterV2UserKubeconfigOutcome;
			typedef std::future<DescribeClusterV2UserKubeconfigOutcome> DescribeClusterV2UserKubeconfigOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterV2UserKubeconfigRequest&, const DescribeClusterV2UserKubeconfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterV2UserKubeconfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeClustersResult> DescribeClustersOutcome;
			typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClustersRequest&, const DescribeClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeEdgeClusterAttachScriptsResult> DescribeEdgeClusterAttachScriptsOutcome;
			typedef std::future<DescribeEdgeClusterAttachScriptsOutcome> DescribeEdgeClusterAttachScriptsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeEdgeClusterAttachScriptsRequest&, const DescribeEdgeClusterAttachScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeClusterAttachScriptsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWorkflowsResult> DescribeWorkflowsOutcome;
			typedef std::future<DescribeWorkflowsOutcome> DescribeWorkflowsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeWorkflowsRequest&, const DescribeWorkflowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkflowsAsyncHandler;
			typedef Outcome<Error, Model::DownloadClusterNodeCertsResult> DownloadClusterNodeCertsOutcome;
			typedef std::future<DownloadClusterNodeCertsOutcome> DownloadClusterNodeCertsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DownloadClusterNodeCertsRequest&, const DownloadClusterNodeCertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadClusterNodeCertsAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterResult> ModifyClusterOutcome;
			typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ModifyClusterRequest&, const ModifyClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterTagsResult> ModifyClusterTagsOutcome;
			typedef std::future<ModifyClusterTagsOutcome> ModifyClusterTagsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ModifyClusterTagsRequest&, const ModifyClusterTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterTagsAsyncHandler;
			typedef Outcome<Error, Model::RemoveWorkflowResult> RemoveWorkflowOutcome;
			typedef std::future<RemoveWorkflowOutcome> RemoveWorkflowOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::RemoveWorkflowRequest&, const RemoveWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWorkflowAsyncHandler;
			typedef Outcome<Error, Model::ResetClusterNodeResult> ResetClusterNodeOutcome;
			typedef std::future<ResetClusterNodeOutcome> ResetClusterNodeOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ResetClusterNodeRequest&, const ResetClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetClusterNodeAsyncHandler;
			typedef Outcome<Error, Model::RevokeClusterTokenResult> RevokeClusterTokenOutcome;
			typedef std::future<RevokeClusterTokenOutcome> RevokeClusterTokenOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::RevokeClusterTokenRequest&, const RevokeClusterTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeClusterTokenAsyncHandler;
			typedef Outcome<Error, Model::ScaleClusterResult> ScaleClusterOutcome;
			typedef std::future<ScaleClusterOutcome> ScaleClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ScaleClusterRequest&, const ScaleClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleClusterAsyncHandler;
			typedef Outcome<Error, Model::ScaleOutClusterResult> ScaleOutClusterOutcome;
			typedef std::future<ScaleOutClusterOutcome> ScaleOutClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ScaleOutClusterRequest&, const ScaleOutClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutClusterAsyncHandler;
			typedef Outcome<Error, Model::ServiceMeshAddClusterResult> ServiceMeshAddClusterOutcome;
			typedef std::future<ServiceMeshAddClusterOutcome> ServiceMeshAddClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ServiceMeshAddClusterRequest&, const ServiceMeshAddClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ServiceMeshAddClusterAsyncHandler;
			typedef Outcome<Error, Model::ServiceMeshApiServerResult> ServiceMeshApiServerOutcome;
			typedef std::future<ServiceMeshApiServerOutcome> ServiceMeshApiServerOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ServiceMeshApiServerRequest&, const ServiceMeshApiServerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ServiceMeshApiServerAsyncHandler;
			typedef Outcome<Error, Model::ServiceMeshRemoveClusterResult> ServiceMeshRemoveClusterOutcome;
			typedef std::future<ServiceMeshRemoveClusterOutcome> ServiceMeshRemoveClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ServiceMeshRemoveClusterRequest&, const ServiceMeshRemoveClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ServiceMeshRemoveClusterAsyncHandler;
			typedef Outcome<Error, Model::StartWorkflowResult> StartWorkflowOutcome;
			typedef std::future<StartWorkflowOutcome> StartWorkflowOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::StartWorkflowRequest&, const StartWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartWorkflowAsyncHandler;
			typedef Outcome<Error, Model::UnInstallClusterAddonsResult> UnInstallClusterAddonsOutcome;
			typedef std::future<UnInstallClusterAddonsOutcome> UnInstallClusterAddonsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::UnInstallClusterAddonsRequest&, const UnInstallClusterAddonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnInstallClusterAddonsAsyncHandler;
			typedef Outcome<Error, Model::UpdateK8sClusterUserConfigExpireResult> UpdateK8sClusterUserConfigExpireOutcome;
			typedef std::future<UpdateK8sClusterUserConfigExpireOutcome> UpdateK8sClusterUserConfigExpireOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::UpdateK8sClusterUserConfigExpireRequest&, const UpdateK8sClusterUserConfigExpireOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateK8sClusterUserConfigExpireAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceMeshResult> UpdateServiceMeshOutcome;
			typedef std::future<UpdateServiceMeshOutcome> UpdateServiceMeshOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::UpdateServiceMeshRequest&, const UpdateServiceMeshOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceMeshAsyncHandler;

			CSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CSClient();
			AttachInstancesOutcome attachInstances(const Model::AttachInstancesRequest &request)const;
			void attachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachInstancesOutcomeCallable attachInstancesCallable(const Model::AttachInstancesRequest& request) const;
			CancelWorkflowOutcome cancelWorkflow(const Model::CancelWorkflowRequest &request)const;
			void cancelWorkflowAsync(const Model::CancelWorkflowRequest& request, const CancelWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelWorkflowOutcomeCallable cancelWorkflowCallable(const Model::CancelWorkflowRequest& request) const;
			CheckAliyunCSServiceRoleOutcome checkAliyunCSServiceRole(const Model::CheckAliyunCSServiceRoleRequest &request)const;
			void checkAliyunCSServiceRoleAsync(const Model::CheckAliyunCSServiceRoleRequest& request, const CheckAliyunCSServiceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckAliyunCSServiceRoleOutcomeCallable checkAliyunCSServiceRoleCallable(const Model::CheckAliyunCSServiceRoleRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateClusterByResourcesGroupOutcome createClusterByResourcesGroup(const Model::CreateClusterByResourcesGroupRequest &request)const;
			void createClusterByResourcesGroupAsync(const Model::CreateClusterByResourcesGroupRequest& request, const CreateClusterByResourcesGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterByResourcesGroupOutcomeCallable createClusterByResourcesGroupCallable(const Model::CreateClusterByResourcesGroupRequest& request) const;
			CreateServiceMeshOutcome createServiceMesh(const Model::CreateServiceMeshRequest &request)const;
			void createServiceMeshAsync(const Model::CreateServiceMeshRequest& request, const CreateServiceMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceMeshOutcomeCallable createServiceMeshCallable(const Model::CreateServiceMeshRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DeleteClusterNodeOutcome deleteClusterNode(const Model::DeleteClusterNodeRequest &request)const;
			void deleteClusterNodeAsync(const Model::DeleteClusterNodeRequest& request, const DeleteClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterNodeOutcomeCallable deleteClusterNodeCallable(const Model::DeleteClusterNodeRequest& request) const;
			DeleteClusterNodesOutcome deleteClusterNodes(const Model::DeleteClusterNodesRequest &request)const;
			void deleteClusterNodesAsync(const Model::DeleteClusterNodesRequest& request, const DeleteClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterNodesOutcomeCallable deleteClusterNodesCallable(const Model::DeleteClusterNodesRequest& request) const;
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
			DescribeClusterCertsOutcome describeClusterCerts(const Model::DescribeClusterCertsRequest &request)const;
			void describeClusterCertsAsync(const Model::DescribeClusterCertsRequest& request, const DescribeClusterCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterCertsOutcomeCallable describeClusterCertsCallable(const Model::DescribeClusterCertsRequest& request) const;
			DescribeClusterDetailOutcome describeClusterDetail(const Model::DescribeClusterDetailRequest &request)const;
			void describeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterDetailOutcomeCallable describeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request) const;
			DescribeClusterEndpointsOutcome describeClusterEndpoints(const Model::DescribeClusterEndpointsRequest &request)const;
			void describeClusterEndpointsAsync(const Model::DescribeClusterEndpointsRequest& request, const DescribeClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterEndpointsOutcomeCallable describeClusterEndpointsCallable(const Model::DescribeClusterEndpointsRequest& request) const;
			DescribeClusterLogsOutcome describeClusterLogs(const Model::DescribeClusterLogsRequest &request)const;
			void describeClusterLogsAsync(const Model::DescribeClusterLogsRequest& request, const DescribeClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterLogsOutcomeCallable describeClusterLogsCallable(const Model::DescribeClusterLogsRequest& request) const;
			DescribeClusterNodesOutcome describeClusterNodes(const Model::DescribeClusterNodesRequest &request)const;
			void describeClusterNodesAsync(const Model::DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterNodesOutcomeCallable describeClusterNodesCallable(const Model::DescribeClusterNodesRequest& request) const;
			DescribeClusterUserKubeconfigOutcome describeClusterUserKubeconfig(const Model::DescribeClusterUserKubeconfigRequest &request)const;
			void describeClusterUserKubeconfigAsync(const Model::DescribeClusterUserKubeconfigRequest& request, const DescribeClusterUserKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterUserKubeconfigOutcomeCallable describeClusterUserKubeconfigCallable(const Model::DescribeClusterUserKubeconfigRequest& request) const;
			DescribeClusterV2UserKubeconfigOutcome describeClusterV2UserKubeconfig(const Model::DescribeClusterV2UserKubeconfigRequest &request)const;
			void describeClusterV2UserKubeconfigAsync(const Model::DescribeClusterV2UserKubeconfigRequest& request, const DescribeClusterV2UserKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterV2UserKubeconfigOutcomeCallable describeClusterV2UserKubeconfigCallable(const Model::DescribeClusterV2UserKubeconfigRequest& request) const;
			DescribeClustersOutcome describeClusters(const Model::DescribeClustersRequest &request)const;
			void describeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClustersOutcomeCallable describeClustersCallable(const Model::DescribeClustersRequest& request) const;
			DescribeEdgeClusterAttachScriptsOutcome describeEdgeClusterAttachScripts(const Model::DescribeEdgeClusterAttachScriptsRequest &request)const;
			void describeEdgeClusterAttachScriptsAsync(const Model::DescribeEdgeClusterAttachScriptsRequest& request, const DescribeEdgeClusterAttachScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEdgeClusterAttachScriptsOutcomeCallable describeEdgeClusterAttachScriptsCallable(const Model::DescribeEdgeClusterAttachScriptsRequest& request) const;
			DescribeWorkflowsOutcome describeWorkflows(const Model::DescribeWorkflowsRequest &request)const;
			void describeWorkflowsAsync(const Model::DescribeWorkflowsRequest& request, const DescribeWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWorkflowsOutcomeCallable describeWorkflowsCallable(const Model::DescribeWorkflowsRequest& request) const;
			DownloadClusterNodeCertsOutcome downloadClusterNodeCerts(const Model::DownloadClusterNodeCertsRequest &request)const;
			void downloadClusterNodeCertsAsync(const Model::DownloadClusterNodeCertsRequest& request, const DownloadClusterNodeCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadClusterNodeCertsOutcomeCallable downloadClusterNodeCertsCallable(const Model::DownloadClusterNodeCertsRequest& request) const;
			ModifyClusterOutcome modifyCluster(const Model::ModifyClusterRequest &request)const;
			void modifyClusterAsync(const Model::ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterOutcomeCallable modifyClusterCallable(const Model::ModifyClusterRequest& request) const;
			ModifyClusterTagsOutcome modifyClusterTags(const Model::ModifyClusterTagsRequest &request)const;
			void modifyClusterTagsAsync(const Model::ModifyClusterTagsRequest& request, const ModifyClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterTagsOutcomeCallable modifyClusterTagsCallable(const Model::ModifyClusterTagsRequest& request) const;
			RemoveWorkflowOutcome removeWorkflow(const Model::RemoveWorkflowRequest &request)const;
			void removeWorkflowAsync(const Model::RemoveWorkflowRequest& request, const RemoveWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveWorkflowOutcomeCallable removeWorkflowCallable(const Model::RemoveWorkflowRequest& request) const;
			ResetClusterNodeOutcome resetClusterNode(const Model::ResetClusterNodeRequest &request)const;
			void resetClusterNodeAsync(const Model::ResetClusterNodeRequest& request, const ResetClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetClusterNodeOutcomeCallable resetClusterNodeCallable(const Model::ResetClusterNodeRequest& request) const;
			RevokeClusterTokenOutcome revokeClusterToken(const Model::RevokeClusterTokenRequest &request)const;
			void revokeClusterTokenAsync(const Model::RevokeClusterTokenRequest& request, const RevokeClusterTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeClusterTokenOutcomeCallable revokeClusterTokenCallable(const Model::RevokeClusterTokenRequest& request) const;
			ScaleClusterOutcome scaleCluster(const Model::ScaleClusterRequest &request)const;
			void scaleClusterAsync(const Model::ScaleClusterRequest& request, const ScaleClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleClusterOutcomeCallable scaleClusterCallable(const Model::ScaleClusterRequest& request) const;
			ScaleOutClusterOutcome scaleOutCluster(const Model::ScaleOutClusterRequest &request)const;
			void scaleOutClusterAsync(const Model::ScaleOutClusterRequest& request, const ScaleOutClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleOutClusterOutcomeCallable scaleOutClusterCallable(const Model::ScaleOutClusterRequest& request) const;
			ServiceMeshAddClusterOutcome serviceMeshAddCluster(const Model::ServiceMeshAddClusterRequest &request)const;
			void serviceMeshAddClusterAsync(const Model::ServiceMeshAddClusterRequest& request, const ServiceMeshAddClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ServiceMeshAddClusterOutcomeCallable serviceMeshAddClusterCallable(const Model::ServiceMeshAddClusterRequest& request) const;
			ServiceMeshApiServerOutcome serviceMeshApiServer(const Model::ServiceMeshApiServerRequest &request)const;
			void serviceMeshApiServerAsync(const Model::ServiceMeshApiServerRequest& request, const ServiceMeshApiServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ServiceMeshApiServerOutcomeCallable serviceMeshApiServerCallable(const Model::ServiceMeshApiServerRequest& request) const;
			ServiceMeshRemoveClusterOutcome serviceMeshRemoveCluster(const Model::ServiceMeshRemoveClusterRequest &request)const;
			void serviceMeshRemoveClusterAsync(const Model::ServiceMeshRemoveClusterRequest& request, const ServiceMeshRemoveClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ServiceMeshRemoveClusterOutcomeCallable serviceMeshRemoveClusterCallable(const Model::ServiceMeshRemoveClusterRequest& request) const;
			StartWorkflowOutcome startWorkflow(const Model::StartWorkflowRequest &request)const;
			void startWorkflowAsync(const Model::StartWorkflowRequest& request, const StartWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartWorkflowOutcomeCallable startWorkflowCallable(const Model::StartWorkflowRequest& request) const;
			UnInstallClusterAddonsOutcome unInstallClusterAddons(const Model::UnInstallClusterAddonsRequest &request)const;
			void unInstallClusterAddonsAsync(const Model::UnInstallClusterAddonsRequest& request, const UnInstallClusterAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnInstallClusterAddonsOutcomeCallable unInstallClusterAddonsCallable(const Model::UnInstallClusterAddonsRequest& request) const;
			UpdateK8sClusterUserConfigExpireOutcome updateK8sClusterUserConfigExpire(const Model::UpdateK8sClusterUserConfigExpireRequest &request)const;
			void updateK8sClusterUserConfigExpireAsync(const Model::UpdateK8sClusterUserConfigExpireRequest& request, const UpdateK8sClusterUserConfigExpireAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateK8sClusterUserConfigExpireOutcomeCallable updateK8sClusterUserConfigExpireCallable(const Model::UpdateK8sClusterUserConfigExpireRequest& request) const;
			UpdateServiceMeshOutcome updateServiceMesh(const Model::UpdateServiceMeshRequest &request)const;
			void updateServiceMeshAsync(const Model::UpdateServiceMeshRequest& request, const UpdateServiceMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceMeshOutcomeCallable updateServiceMeshCallable(const Model::UpdateServiceMeshRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CS_CSCLIENT_H_
