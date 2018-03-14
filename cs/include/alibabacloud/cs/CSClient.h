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
#include "model/CallbackClusterTokenRequest.h"
#include "model/CallbackClusterTokenResult.h"
#include "model/DescribeTemplatesRequest.h"
#include "model/DescribeTemplatesResult.h"
#include "model/GetProjectEventsRequest.h"
#include "model/GetProjectEventsResult.h"
#include "model/CheckAliyunCSServiceRoleRequest.h"
#include "model/CheckAliyunCSServiceRoleResult.h"
#include "model/DescribeTemplateAttributeRequest.h"
#include "model/DescribeTemplateAttributeResult.h"
#include "model/CreateTemplateRequest.h"
#include "model/CreateTemplateResult.h"
#include "model/DescribeClusterCertsRequest.h"
#include "model/DescribeClusterCertsResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DescribeClusterNodesRequest.h"
#include "model/DescribeClusterNodesResult.h"
#include "model/CallBackAgilityClusterRequest.h"
#include "model/CallBackAgilityClusterResult.h"
#include "model/DescribeClusterScaledNodeRequest.h"
#include "model/DescribeClusterScaledNodeResult.h"
#include "model/DescribeClusterLogsRequest.h"
#include "model/DescribeClusterLogsResult.h"
#include "model/DescribeClusterDetailRequest.h"
#include "model/DescribeClusterDetailResult.h"
#include "model/ResetClusterNodeRequest.h"
#include "model/ResetClusterNodeResult.h"
#include "model/DescribeServiceContainersRequest.h"
#include "model/DescribeServiceContainersResult.h"
#include "model/DescribeTaskInfoRequest.h"
#include "model/DescribeTaskInfoResult.h"
#include "model/GetClusterProjectsRequest.h"
#include "model/GetClusterProjectsResult.h"
#include "model/DescribeClusterServicesRequest.h"
#include "model/DescribeClusterServicesResult.h"
#include "model/ScaleInClusterRequest.h"
#include "model/ScaleInClusterResult.h"
#include "model/DeleteClusterNodeRequest.h"
#include "model/DeleteClusterNodeResult.h"
#include "model/RevokeClusterTokenRequest.h"
#include "model/RevokeClusterTokenResult.h"
#include "model/DescribeClustersRequest.h"
#include "model/DescribeClustersResult.h"
#include "model/AddAgilityClusterRequest.h"
#include "model/AddAgilityClusterResult.h"
#include "model/DescribeImagesRequest.h"
#include "model/DescribeImagesResult.h"
#include "model/GetTriggerHookRequest.h"
#include "model/GetTriggerHookResult.h"
#include "model/DescribeClusterTokensRequest.h"
#include "model/DescribeClusterTokensResult.h"
#include "model/UpdateSubUserResoucesRequest.h"
#include "model/UpdateSubUserResoucesResult.h"
#include "model/ModifyClusterNameRequest.h"
#include "model/ModifyClusterNameResult.h"
#include "model/DescribeClusterHostsRequest.h"
#include "model/DescribeClusterHostsResult.h"
#include "model/DescribeApiVersionRequest.h"
#include "model/DescribeApiVersionResult.h"
#include "model/GatherLogsTokenRequest.h"
#include "model/GatherLogsTokenResult.h"
#include "model/CreateClusterTokenRequest.h"
#include "model/CreateClusterTokenResult.h"
#include "model/DescribeUserContainersRequest.h"
#include "model/DescribeUserContainersResult.h"
#include "model/DescribeAgilityTunnelAgentInfoRequest.h"
#include "model/DescribeAgilityTunnelAgentInfoResult.h"
#include "model/DescribeClusterNodeInfoRequest.h"
#include "model/DescribeClusterNodeInfoResult.h"
#include "model/ScaleClusterRequest.h"
#include "model/ScaleClusterResult.h"
#include "model/DescribeAgilityTunnelCertsRequest.h"
#include "model/DescribeAgilityTunnelCertsResult.h"
#include "model/DescribeClusterNodeInfoWithInstanceRequest.h"
#include "model/DescribeClusterNodeInfoWithInstanceResult.h"
#include "model/UpgradeClusterComponentsRequest.h"
#include "model/UpgradeClusterComponentsResult.h"
#include "model/DownloadClusterNodeCertsRequest.h"
#include "model/DownloadClusterNodeCertsResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"


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
			typedef Outcome<Error, Model::CallbackClusterTokenResult> CallbackClusterTokenOutcome;			
			typedef std::future<CallbackClusterTokenOutcome> CallbackClusterTokenOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::CallbackClusterTokenRequest&, const CallbackClusterTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CallbackClusterTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribeTemplatesResult> DescribeTemplatesOutcome;			
			typedef std::future<DescribeTemplatesOutcome> DescribeTemplatesOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeTemplatesRequest&, const DescribeTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplatesAsyncHandler;
			typedef Outcome<Error, Model::GetProjectEventsResult> GetProjectEventsOutcome;			
			typedef std::future<GetProjectEventsOutcome> GetProjectEventsOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::GetProjectEventsRequest&, const GetProjectEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectEventsAsyncHandler;
			typedef Outcome<Error, Model::CheckAliyunCSServiceRoleResult> CheckAliyunCSServiceRoleOutcome;			
			typedef std::future<CheckAliyunCSServiceRoleOutcome> CheckAliyunCSServiceRoleOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::CheckAliyunCSServiceRoleRequest&, const CheckAliyunCSServiceRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAliyunCSServiceRoleAsyncHandler;
			typedef Outcome<Error, Model::DescribeTemplateAttributeResult> DescribeTemplateAttributeOutcome;			
			typedef std::future<DescribeTemplateAttributeOutcome> DescribeTemplateAttributeOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeTemplateAttributeRequest&, const DescribeTemplateAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateAttributeAsyncHandler;
			typedef Outcome<Error, Model::CreateTemplateResult> CreateTemplateOutcome;			
			typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::CreateTemplateRequest&, const CreateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterCertsResult> DescribeClusterCertsOutcome;			
			typedef std::future<DescribeClusterCertsOutcome> DescribeClusterCertsOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClusterCertsRequest&, const DescribeClusterCertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterCertsAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;			
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterNodesResult> DescribeClusterNodesOutcome;			
			typedef std::future<DescribeClusterNodesOutcome> DescribeClusterNodesOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClusterNodesRequest&, const DescribeClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::CallBackAgilityClusterResult> CallBackAgilityClusterOutcome;			
			typedef std::future<CallBackAgilityClusterOutcome> CallBackAgilityClusterOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::CallBackAgilityClusterRequest&, const CallBackAgilityClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CallBackAgilityClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterScaledNodeResult> DescribeClusterScaledNodeOutcome;			
			typedef std::future<DescribeClusterScaledNodeOutcome> DescribeClusterScaledNodeOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClusterScaledNodeRequest&, const DescribeClusterScaledNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterScaledNodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterLogsResult> DescribeClusterLogsOutcome;			
			typedef std::future<DescribeClusterLogsOutcome> DescribeClusterLogsOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClusterLogsRequest&, const DescribeClusterLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterDetailResult> DescribeClusterDetailOutcome;			
			typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClusterDetailRequest&, const DescribeClusterDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
			typedef Outcome<Error, Model::ResetClusterNodeResult> ResetClusterNodeOutcome;			
			typedef std::future<ResetClusterNodeOutcome> ResetClusterNodeOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::ResetClusterNodeRequest&, const ResetClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetClusterNodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceContainersResult> DescribeServiceContainersOutcome;			
			typedef std::future<DescribeServiceContainersOutcome> DescribeServiceContainersOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeServiceContainersRequest&, const DescribeServiceContainersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceContainersAsyncHandler;
			typedef Outcome<Error, Model::DescribeTaskInfoResult> DescribeTaskInfoOutcome;			
			typedef std::future<DescribeTaskInfoOutcome> DescribeTaskInfoOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeTaskInfoRequest&, const DescribeTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::GetClusterProjectsResult> GetClusterProjectsOutcome;			
			typedef std::future<GetClusterProjectsOutcome> GetClusterProjectsOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::GetClusterProjectsRequest&, const GetClusterProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterProjectsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServicesResult> DescribeClusterServicesOutcome;			
			typedef std::future<DescribeClusterServicesOutcome> DescribeClusterServicesOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClusterServicesRequest&, const DescribeClusterServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServicesAsyncHandler;
			typedef Outcome<Error, Model::ScaleInClusterResult> ScaleInClusterOutcome;			
			typedef std::future<ScaleInClusterOutcome> ScaleInClusterOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::ScaleInClusterRequest&, const ScaleInClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleInClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterNodeResult> DeleteClusterNodeOutcome;			
			typedef std::future<DeleteClusterNodeOutcome> DeleteClusterNodeOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DeleteClusterNodeRequest&, const DeleteClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterNodeAsyncHandler;
			typedef Outcome<Error, Model::RevokeClusterTokenResult> RevokeClusterTokenOutcome;			
			typedef std::future<RevokeClusterTokenOutcome> RevokeClusterTokenOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::RevokeClusterTokenRequest&, const RevokeClusterTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeClusterTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribeClustersResult> DescribeClustersOutcome;			
			typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClustersRequest&, const DescribeClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
			typedef Outcome<Error, Model::AddAgilityClusterResult> AddAgilityClusterOutcome;			
			typedef std::future<AddAgilityClusterOutcome> AddAgilityClusterOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::AddAgilityClusterRequest&, const AddAgilityClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAgilityClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeImagesResult> DescribeImagesOutcome;			
			typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeImagesRequest&, const DescribeImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
			typedef Outcome<Error, Model::GetTriggerHookResult> GetTriggerHookOutcome;			
			typedef std::future<GetTriggerHookOutcome> GetTriggerHookOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::GetTriggerHookRequest&, const GetTriggerHookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTriggerHookAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterTokensResult> DescribeClusterTokensOutcome;			
			typedef std::future<DescribeClusterTokensOutcome> DescribeClusterTokensOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClusterTokensRequest&, const DescribeClusterTokensOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterTokensAsyncHandler;
			typedef Outcome<Error, Model::UpdateSubUserResoucesResult> UpdateSubUserResoucesOutcome;			
			typedef std::future<UpdateSubUserResoucesOutcome> UpdateSubUserResoucesOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::UpdateSubUserResoucesRequest&, const UpdateSubUserResoucesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSubUserResoucesAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterNameResult> ModifyClusterNameOutcome;			
			typedef std::future<ModifyClusterNameOutcome> ModifyClusterNameOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::ModifyClusterNameRequest&, const ModifyClusterNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNameAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterHostsResult> DescribeClusterHostsOutcome;			
			typedef std::future<DescribeClusterHostsOutcome> DescribeClusterHostsOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClusterHostsRequest&, const DescribeClusterHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterHostsAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiVersionResult> DescribeApiVersionOutcome;			
			typedef std::future<DescribeApiVersionOutcome> DescribeApiVersionOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeApiVersionRequest&, const DescribeApiVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiVersionAsyncHandler;
			typedef Outcome<Error, Model::GatherLogsTokenResult> GatherLogsTokenOutcome;			
			typedef std::future<GatherLogsTokenOutcome> GatherLogsTokenOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::GatherLogsTokenRequest&, const GatherLogsTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GatherLogsTokenAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterTokenResult> CreateClusterTokenOutcome;			
			typedef std::future<CreateClusterTokenOutcome> CreateClusterTokenOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::CreateClusterTokenRequest&, const CreateClusterTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserContainersResult> DescribeUserContainersOutcome;			
			typedef std::future<DescribeUserContainersOutcome> DescribeUserContainersOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeUserContainersRequest&, const DescribeUserContainersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserContainersAsyncHandler;
			typedef Outcome<Error, Model::DescribeAgilityTunnelAgentInfoResult> DescribeAgilityTunnelAgentInfoOutcome;			
			typedef std::future<DescribeAgilityTunnelAgentInfoOutcome> DescribeAgilityTunnelAgentInfoOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeAgilityTunnelAgentInfoRequest&, const DescribeAgilityTunnelAgentInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgilityTunnelAgentInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterNodeInfoResult> DescribeClusterNodeInfoOutcome;			
			typedef std::future<DescribeClusterNodeInfoOutcome> DescribeClusterNodeInfoOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClusterNodeInfoRequest&, const DescribeClusterNodeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodeInfoAsyncHandler;
			typedef Outcome<Error, Model::ScaleClusterResult> ScaleClusterOutcome;			
			typedef std::future<ScaleClusterOutcome> ScaleClusterOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::ScaleClusterRequest&, const ScaleClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeAgilityTunnelCertsResult> DescribeAgilityTunnelCertsOutcome;			
			typedef std::future<DescribeAgilityTunnelCertsOutcome> DescribeAgilityTunnelCertsOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeAgilityTunnelCertsRequest&, const DescribeAgilityTunnelCertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgilityTunnelCertsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterNodeInfoWithInstanceResult> DescribeClusterNodeInfoWithInstanceOutcome;			
			typedef std::future<DescribeClusterNodeInfoWithInstanceOutcome> DescribeClusterNodeInfoWithInstanceOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DescribeClusterNodeInfoWithInstanceRequest&, const DescribeClusterNodeInfoWithInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodeInfoWithInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpgradeClusterComponentsResult> UpgradeClusterComponentsOutcome;			
			typedef std::future<UpgradeClusterComponentsOutcome> UpgradeClusterComponentsOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::UpgradeClusterComponentsRequest&, const UpgradeClusterComponentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClusterComponentsAsyncHandler;
			typedef Outcome<Error, Model::DownloadClusterNodeCertsResult> DownloadClusterNodeCertsOutcome;			
			typedef std::future<DownloadClusterNodeCertsOutcome> DownloadClusterNodeCertsOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::DownloadClusterNodeCertsRequest&, const DownloadClusterNodeCertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadClusterNodeCertsAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;			
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;			
			typedef std::function<void(const CSClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;

			CSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CSClient();
            AttachInstancesOutcome attachInstances(const Model::AttachInstancesRequest &request)const;
            void attachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AttachInstancesOutcomeCallable attachInstancesCallable(const Model::AttachInstancesRequest& request) const;
            CallbackClusterTokenOutcome callbackClusterToken(const Model::CallbackClusterTokenRequest &request)const;
            void callbackClusterTokenAsync(const Model::CallbackClusterTokenRequest& request, const CallbackClusterTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CallbackClusterTokenOutcomeCallable callbackClusterTokenCallable(const Model::CallbackClusterTokenRequest& request) const;
            DescribeTemplatesOutcome describeTemplates(const Model::DescribeTemplatesRequest &request)const;
            void describeTemplatesAsync(const Model::DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeTemplatesOutcomeCallable describeTemplatesCallable(const Model::DescribeTemplatesRequest& request) const;
            GetProjectEventsOutcome getProjectEvents(const Model::GetProjectEventsRequest &request)const;
            void getProjectEventsAsync(const Model::GetProjectEventsRequest& request, const GetProjectEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetProjectEventsOutcomeCallable getProjectEventsCallable(const Model::GetProjectEventsRequest& request) const;
            CheckAliyunCSServiceRoleOutcome checkAliyunCSServiceRole(const Model::CheckAliyunCSServiceRoleRequest &request)const;
            void checkAliyunCSServiceRoleAsync(const Model::CheckAliyunCSServiceRoleRequest& request, const CheckAliyunCSServiceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CheckAliyunCSServiceRoleOutcomeCallable checkAliyunCSServiceRoleCallable(const Model::CheckAliyunCSServiceRoleRequest& request) const;
            DescribeTemplateAttributeOutcome describeTemplateAttribute(const Model::DescribeTemplateAttributeRequest &request)const;
            void describeTemplateAttributeAsync(const Model::DescribeTemplateAttributeRequest& request, const DescribeTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeTemplateAttributeOutcomeCallable describeTemplateAttributeCallable(const Model::DescribeTemplateAttributeRequest& request) const;
            CreateTemplateOutcome createTemplate(const Model::CreateTemplateRequest &request)const;
            void createTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateTemplateOutcomeCallable createTemplateCallable(const Model::CreateTemplateRequest& request) const;
            DescribeClusterCertsOutcome describeClusterCerts(const Model::DescribeClusterCertsRequest &request)const;
            void describeClusterCertsAsync(const Model::DescribeClusterCertsRequest& request, const DescribeClusterCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterCertsOutcomeCallable describeClusterCertsCallable(const Model::DescribeClusterCertsRequest& request) const;
            DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
            void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
            DescribeClusterNodesOutcome describeClusterNodes(const Model::DescribeClusterNodesRequest &request)const;
            void describeClusterNodesAsync(const Model::DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterNodesOutcomeCallable describeClusterNodesCallable(const Model::DescribeClusterNodesRequest& request) const;
            CallBackAgilityClusterOutcome callBackAgilityCluster(const Model::CallBackAgilityClusterRequest &request)const;
            void callBackAgilityClusterAsync(const Model::CallBackAgilityClusterRequest& request, const CallBackAgilityClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CallBackAgilityClusterOutcomeCallable callBackAgilityClusterCallable(const Model::CallBackAgilityClusterRequest& request) const;
            DescribeClusterScaledNodeOutcome describeClusterScaledNode(const Model::DescribeClusterScaledNodeRequest &request)const;
            void describeClusterScaledNodeAsync(const Model::DescribeClusterScaledNodeRequest& request, const DescribeClusterScaledNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterScaledNodeOutcomeCallable describeClusterScaledNodeCallable(const Model::DescribeClusterScaledNodeRequest& request) const;
            DescribeClusterLogsOutcome describeClusterLogs(const Model::DescribeClusterLogsRequest &request)const;
            void describeClusterLogsAsync(const Model::DescribeClusterLogsRequest& request, const DescribeClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterLogsOutcomeCallable describeClusterLogsCallable(const Model::DescribeClusterLogsRequest& request) const;
            DescribeClusterDetailOutcome describeClusterDetail(const Model::DescribeClusterDetailRequest &request)const;
            void describeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterDetailOutcomeCallable describeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request) const;
            ResetClusterNodeOutcome resetClusterNode(const Model::ResetClusterNodeRequest &request)const;
            void resetClusterNodeAsync(const Model::ResetClusterNodeRequest& request, const ResetClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ResetClusterNodeOutcomeCallable resetClusterNodeCallable(const Model::ResetClusterNodeRequest& request) const;
            DescribeServiceContainersOutcome describeServiceContainers(const Model::DescribeServiceContainersRequest &request)const;
            void describeServiceContainersAsync(const Model::DescribeServiceContainersRequest& request, const DescribeServiceContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeServiceContainersOutcomeCallable describeServiceContainersCallable(const Model::DescribeServiceContainersRequest& request) const;
            DescribeTaskInfoOutcome describeTaskInfo(const Model::DescribeTaskInfoRequest &request)const;
            void describeTaskInfoAsync(const Model::DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeTaskInfoOutcomeCallable describeTaskInfoCallable(const Model::DescribeTaskInfoRequest& request) const;
            GetClusterProjectsOutcome getClusterProjects(const Model::GetClusterProjectsRequest &request)const;
            void getClusterProjectsAsync(const Model::GetClusterProjectsRequest& request, const GetClusterProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetClusterProjectsOutcomeCallable getClusterProjectsCallable(const Model::GetClusterProjectsRequest& request) const;
            DescribeClusterServicesOutcome describeClusterServices(const Model::DescribeClusterServicesRequest &request)const;
            void describeClusterServicesAsync(const Model::DescribeClusterServicesRequest& request, const DescribeClusterServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterServicesOutcomeCallable describeClusterServicesCallable(const Model::DescribeClusterServicesRequest& request) const;
            ScaleInClusterOutcome scaleInCluster(const Model::ScaleInClusterRequest &request)const;
            void scaleInClusterAsync(const Model::ScaleInClusterRequest& request, const ScaleInClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ScaleInClusterOutcomeCallable scaleInClusterCallable(const Model::ScaleInClusterRequest& request) const;
            DeleteClusterNodeOutcome deleteClusterNode(const Model::DeleteClusterNodeRequest &request)const;
            void deleteClusterNodeAsync(const Model::DeleteClusterNodeRequest& request, const DeleteClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteClusterNodeOutcomeCallable deleteClusterNodeCallable(const Model::DeleteClusterNodeRequest& request) const;
            RevokeClusterTokenOutcome revokeClusterToken(const Model::RevokeClusterTokenRequest &request)const;
            void revokeClusterTokenAsync(const Model::RevokeClusterTokenRequest& request, const RevokeClusterTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RevokeClusterTokenOutcomeCallable revokeClusterTokenCallable(const Model::RevokeClusterTokenRequest& request) const;
            DescribeClustersOutcome describeClusters(const Model::DescribeClustersRequest &request)const;
            void describeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClustersOutcomeCallable describeClustersCallable(const Model::DescribeClustersRequest& request) const;
            AddAgilityClusterOutcome addAgilityCluster(const Model::AddAgilityClusterRequest &request)const;
            void addAgilityClusterAsync(const Model::AddAgilityClusterRequest& request, const AddAgilityClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddAgilityClusterOutcomeCallable addAgilityClusterCallable(const Model::AddAgilityClusterRequest& request) const;
            DescribeImagesOutcome describeImages(const Model::DescribeImagesRequest &request)const;
            void describeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeImagesOutcomeCallable describeImagesCallable(const Model::DescribeImagesRequest& request) const;
            GetTriggerHookOutcome getTriggerHook(const Model::GetTriggerHookRequest &request)const;
            void getTriggerHookAsync(const Model::GetTriggerHookRequest& request, const GetTriggerHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetTriggerHookOutcomeCallable getTriggerHookCallable(const Model::GetTriggerHookRequest& request) const;
            DescribeClusterTokensOutcome describeClusterTokens(const Model::DescribeClusterTokensRequest &request)const;
            void describeClusterTokensAsync(const Model::DescribeClusterTokensRequest& request, const DescribeClusterTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterTokensOutcomeCallable describeClusterTokensCallable(const Model::DescribeClusterTokensRequest& request) const;
            UpdateSubUserResoucesOutcome updateSubUserResouces(const Model::UpdateSubUserResoucesRequest &request)const;
            void updateSubUserResoucesAsync(const Model::UpdateSubUserResoucesRequest& request, const UpdateSubUserResoucesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpdateSubUserResoucesOutcomeCallable updateSubUserResoucesCallable(const Model::UpdateSubUserResoucesRequest& request) const;
            ModifyClusterNameOutcome modifyClusterName(const Model::ModifyClusterNameRequest &request)const;
            void modifyClusterNameAsync(const Model::ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyClusterNameOutcomeCallable modifyClusterNameCallable(const Model::ModifyClusterNameRequest& request) const;
            DescribeClusterHostsOutcome describeClusterHosts(const Model::DescribeClusterHostsRequest &request)const;
            void describeClusterHostsAsync(const Model::DescribeClusterHostsRequest& request, const DescribeClusterHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterHostsOutcomeCallable describeClusterHostsCallable(const Model::DescribeClusterHostsRequest& request) const;
            DescribeApiVersionOutcome describeApiVersion(const Model::DescribeApiVersionRequest &request)const;
            void describeApiVersionAsync(const Model::DescribeApiVersionRequest& request, const DescribeApiVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeApiVersionOutcomeCallable describeApiVersionCallable(const Model::DescribeApiVersionRequest& request) const;
            GatherLogsTokenOutcome gatherLogsToken(const Model::GatherLogsTokenRequest &request)const;
            void gatherLogsTokenAsync(const Model::GatherLogsTokenRequest& request, const GatherLogsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GatherLogsTokenOutcomeCallable gatherLogsTokenCallable(const Model::GatherLogsTokenRequest& request) const;
            CreateClusterTokenOutcome createClusterToken(const Model::CreateClusterTokenRequest &request)const;
            void createClusterTokenAsync(const Model::CreateClusterTokenRequest& request, const CreateClusterTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateClusterTokenOutcomeCallable createClusterTokenCallable(const Model::CreateClusterTokenRequest& request) const;
            DescribeUserContainersOutcome describeUserContainers(const Model::DescribeUserContainersRequest &request)const;
            void describeUserContainersAsync(const Model::DescribeUserContainersRequest& request, const DescribeUserContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeUserContainersOutcomeCallable describeUserContainersCallable(const Model::DescribeUserContainersRequest& request) const;
            DescribeAgilityTunnelAgentInfoOutcome describeAgilityTunnelAgentInfo(const Model::DescribeAgilityTunnelAgentInfoRequest &request)const;
            void describeAgilityTunnelAgentInfoAsync(const Model::DescribeAgilityTunnelAgentInfoRequest& request, const DescribeAgilityTunnelAgentInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeAgilityTunnelAgentInfoOutcomeCallable describeAgilityTunnelAgentInfoCallable(const Model::DescribeAgilityTunnelAgentInfoRequest& request) const;
            DescribeClusterNodeInfoOutcome describeClusterNodeInfo(const Model::DescribeClusterNodeInfoRequest &request)const;
            void describeClusterNodeInfoAsync(const Model::DescribeClusterNodeInfoRequest& request, const DescribeClusterNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterNodeInfoOutcomeCallable describeClusterNodeInfoCallable(const Model::DescribeClusterNodeInfoRequest& request) const;
            ScaleClusterOutcome scaleCluster(const Model::ScaleClusterRequest &request)const;
            void scaleClusterAsync(const Model::ScaleClusterRequest& request, const ScaleClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ScaleClusterOutcomeCallable scaleClusterCallable(const Model::ScaleClusterRequest& request) const;
            DescribeAgilityTunnelCertsOutcome describeAgilityTunnelCerts(const Model::DescribeAgilityTunnelCertsRequest &request)const;
            void describeAgilityTunnelCertsAsync(const Model::DescribeAgilityTunnelCertsRequest& request, const DescribeAgilityTunnelCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeAgilityTunnelCertsOutcomeCallable describeAgilityTunnelCertsCallable(const Model::DescribeAgilityTunnelCertsRequest& request) const;
            DescribeClusterNodeInfoWithInstanceOutcome describeClusterNodeInfoWithInstance(const Model::DescribeClusterNodeInfoWithInstanceRequest &request)const;
            void describeClusterNodeInfoWithInstanceAsync(const Model::DescribeClusterNodeInfoWithInstanceRequest& request, const DescribeClusterNodeInfoWithInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterNodeInfoWithInstanceOutcomeCallable describeClusterNodeInfoWithInstanceCallable(const Model::DescribeClusterNodeInfoWithInstanceRequest& request) const;
            UpgradeClusterComponentsOutcome upgradeClusterComponents(const Model::UpgradeClusterComponentsRequest &request)const;
            void upgradeClusterComponentsAsync(const Model::UpgradeClusterComponentsRequest& request, const UpgradeClusterComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpgradeClusterComponentsOutcomeCallable upgradeClusterComponentsCallable(const Model::UpgradeClusterComponentsRequest& request) const;
            DownloadClusterNodeCertsOutcome downloadClusterNodeCerts(const Model::DownloadClusterNodeCertsRequest &request)const;
            void downloadClusterNodeCertsAsync(const Model::DownloadClusterNodeCertsRequest& request, const DownloadClusterNodeCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DownloadClusterNodeCertsOutcomeCallable downloadClusterNodeCertsCallable(const Model::DownloadClusterNodeCertsRequest& request) const;
            CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
            void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CS_CSCLIENT_H_
