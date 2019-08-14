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
#include "model/DescribeClustersRequest.h"
#include "model/DescribeClustersResult.h"
#include "model/RevokeClusterTokenRequest.h"
#include "model/RevokeClusterTokenResult.h"
#include "model/AttachInstancesRequest.h"
#include "model/AttachInstancesResult.h"
#include "model/CreateClusterByResourcesGroupRequest.h"
#include "model/CreateClusterByResourcesGroupResult.h"
#include "model/CheckAliyunCSServiceRoleRequest.h"
#include "model/CheckAliyunCSServiceRoleResult.h"
#include "model/DescribeClusterCertsRequest.h"
#include "model/DescribeClusterCertsResult.h"
#include "model/DescribeClusterAttachScriptsRequest.h"
#include "model/DescribeClusterAttachScriptsResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DescribeClusterNodesRequest.h"
#include "model/DescribeClusterNodesResult.h"
#include "model/ModifyClusterRequest.h"
#include "model/ModifyClusterResult.h"
#include "model/DescribeApiVersionRequest.h"
#include "model/DescribeApiVersionResult.h"
#include "model/ScaleOutClusterRequest.h"
#include "model/ScaleOutClusterResult.h"
#include "model/DescribeClusterLogsRequest.h"
#include "model/DescribeClusterLogsResult.h"
#include "model/DescribeClusterUserKubeconfigRequest.h"
#include "model/DescribeClusterUserKubeconfigResult.h"
#include "model/DescribeClusterDetailRequest.h"
#include "model/DescribeClusterDetailResult.h"
#include "model/ResetClusterNodeRequest.h"
#include "model/ResetClusterNodeResult.h"
#include "model/ScaleClusterRequest.h"
#include "model/ScaleClusterResult.h"
#include "model/DescribeClusterEndpointsRequest.h"
#include "model/DescribeClusterEndpointsResult.h"
#include "model/DownloadClusterNodeCertsRequest.h"
#include "model/DownloadClusterNodeCertsResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/DeleteClusterNodesRequest.h"
#include "model/DeleteClusterNodesResult.h"
#include "model/DeleteClusterNodeRequest.h"
#include "model/DeleteClusterNodeResult.h"


namespace AlibabaCloud
{
	namespace CS
	{
		class ALIBABACLOUD_CS_EXPORT CSClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeClustersResult> DescribeClustersOutcome;
			typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClustersRequest&, const DescribeClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
			typedef Outcome<Error, Model::RevokeClusterTokenResult> RevokeClusterTokenOutcome;
			typedef std::future<RevokeClusterTokenOutcome> RevokeClusterTokenOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::RevokeClusterTokenRequest&, const RevokeClusterTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeClusterTokenAsyncHandler;
			typedef Outcome<Error, Model::AttachInstancesResult> AttachInstancesOutcome;
			typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::AttachInstancesRequest&, const AttachInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstancesAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterByResourcesGroupResult> CreateClusterByResourcesGroupOutcome;
			typedef std::future<CreateClusterByResourcesGroupOutcome> CreateClusterByResourcesGroupOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CreateClusterByResourcesGroupRequest&, const CreateClusterByResourcesGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterByResourcesGroupAsyncHandler;
			typedef Outcome<Error, Model::CheckAliyunCSServiceRoleResult> CheckAliyunCSServiceRoleOutcome;
			typedef std::future<CheckAliyunCSServiceRoleOutcome> CheckAliyunCSServiceRoleOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CheckAliyunCSServiceRoleRequest&, const CheckAliyunCSServiceRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAliyunCSServiceRoleAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterCertsResult> DescribeClusterCertsOutcome;
			typedef std::future<DescribeClusterCertsOutcome> DescribeClusterCertsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterCertsRequest&, const DescribeClusterCertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterCertsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterAttachScriptsResult> DescribeClusterAttachScriptsOutcome;
			typedef std::future<DescribeClusterAttachScriptsOutcome> DescribeClusterAttachScriptsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterAttachScriptsRequest&, const DescribeClusterAttachScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAttachScriptsAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterNodesResult> DescribeClusterNodesOutcome;
			typedef std::future<DescribeClusterNodesOutcome> DescribeClusterNodesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterNodesRequest&, const DescribeClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterResult> ModifyClusterOutcome;
			typedef std::future<ModifyClusterOutcome> ModifyClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ModifyClusterRequest&, const ModifyClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiVersionResult> DescribeApiVersionOutcome;
			typedef std::future<DescribeApiVersionOutcome> DescribeApiVersionOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeApiVersionRequest&, const DescribeApiVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiVersionAsyncHandler;
			typedef Outcome<Error, Model::ScaleOutClusterResult> ScaleOutClusterOutcome;
			typedef std::future<ScaleOutClusterOutcome> ScaleOutClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ScaleOutClusterRequest&, const ScaleOutClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterLogsResult> DescribeClusterLogsOutcome;
			typedef std::future<DescribeClusterLogsOutcome> DescribeClusterLogsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterLogsRequest&, const DescribeClusterLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterUserKubeconfigResult> DescribeClusterUserKubeconfigOutcome;
			typedef std::future<DescribeClusterUserKubeconfigOutcome> DescribeClusterUserKubeconfigOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterUserKubeconfigRequest&, const DescribeClusterUserKubeconfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterUserKubeconfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterDetailResult> DescribeClusterDetailOutcome;
			typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterDetailRequest&, const DescribeClusterDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
			typedef Outcome<Error, Model::ResetClusterNodeResult> ResetClusterNodeOutcome;
			typedef std::future<ResetClusterNodeOutcome> ResetClusterNodeOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ResetClusterNodeRequest&, const ResetClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetClusterNodeAsyncHandler;
			typedef Outcome<Error, Model::ScaleClusterResult> ScaleClusterOutcome;
			typedef std::future<ScaleClusterOutcome> ScaleClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::ScaleClusterRequest&, const ScaleClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterEndpointsResult> DescribeClusterEndpointsOutcome;
			typedef std::future<DescribeClusterEndpointsOutcome> DescribeClusterEndpointsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DescribeClusterEndpointsRequest&, const DescribeClusterEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointsAsyncHandler;
			typedef Outcome<Error, Model::DownloadClusterNodeCertsResult> DownloadClusterNodeCertsOutcome;
			typedef std::future<DownloadClusterNodeCertsOutcome> DownloadClusterNodeCertsOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DownloadClusterNodeCertsRequest&, const DownloadClusterNodeCertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadClusterNodeCertsAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterNodesResult> DeleteClusterNodesOutcome;
			typedef std::future<DeleteClusterNodesOutcome> DeleteClusterNodesOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DeleteClusterNodesRequest&, const DeleteClusterNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterNodesAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterNodeResult> DeleteClusterNodeOutcome;
			typedef std::future<DeleteClusterNodeOutcome> DeleteClusterNodeOutcomeCallable;
			typedef std::function<void(const CSClient*, const Model::DeleteClusterNodeRequest&, const DeleteClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterNodeAsyncHandler;

			CSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CSClient();
			DescribeClustersOutcome describeClusters(const Model::DescribeClustersRequest &request)const;
			void describeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClustersOutcomeCallable describeClustersCallable(const Model::DescribeClustersRequest& request) const;
			RevokeClusterTokenOutcome revokeClusterToken(const Model::RevokeClusterTokenRequest &request)const;
			void revokeClusterTokenAsync(const Model::RevokeClusterTokenRequest& request, const RevokeClusterTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeClusterTokenOutcomeCallable revokeClusterTokenCallable(const Model::RevokeClusterTokenRequest& request) const;
			AttachInstancesOutcome attachInstances(const Model::AttachInstancesRequest &request)const;
			void attachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachInstancesOutcomeCallable attachInstancesCallable(const Model::AttachInstancesRequest& request) const;
			CreateClusterByResourcesGroupOutcome createClusterByResourcesGroup(const Model::CreateClusterByResourcesGroupRequest &request)const;
			void createClusterByResourcesGroupAsync(const Model::CreateClusterByResourcesGroupRequest& request, const CreateClusterByResourcesGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterByResourcesGroupOutcomeCallable createClusterByResourcesGroupCallable(const Model::CreateClusterByResourcesGroupRequest& request) const;
			CheckAliyunCSServiceRoleOutcome checkAliyunCSServiceRole(const Model::CheckAliyunCSServiceRoleRequest &request)const;
			void checkAliyunCSServiceRoleAsync(const Model::CheckAliyunCSServiceRoleRequest& request, const CheckAliyunCSServiceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckAliyunCSServiceRoleOutcomeCallable checkAliyunCSServiceRoleCallable(const Model::CheckAliyunCSServiceRoleRequest& request) const;
			DescribeClusterCertsOutcome describeClusterCerts(const Model::DescribeClusterCertsRequest &request)const;
			void describeClusterCertsAsync(const Model::DescribeClusterCertsRequest& request, const DescribeClusterCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterCertsOutcomeCallable describeClusterCertsCallable(const Model::DescribeClusterCertsRequest& request) const;
			DescribeClusterAttachScriptsOutcome describeClusterAttachScripts(const Model::DescribeClusterAttachScriptsRequest &request)const;
			void describeClusterAttachScriptsAsync(const Model::DescribeClusterAttachScriptsRequest& request, const DescribeClusterAttachScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterAttachScriptsOutcomeCallable describeClusterAttachScriptsCallable(const Model::DescribeClusterAttachScriptsRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DescribeClusterNodesOutcome describeClusterNodes(const Model::DescribeClusterNodesRequest &request)const;
			void describeClusterNodesAsync(const Model::DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterNodesOutcomeCallable describeClusterNodesCallable(const Model::DescribeClusterNodesRequest& request) const;
			ModifyClusterOutcome modifyCluster(const Model::ModifyClusterRequest &request)const;
			void modifyClusterAsync(const Model::ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterOutcomeCallable modifyClusterCallable(const Model::ModifyClusterRequest& request) const;
			DescribeApiVersionOutcome describeApiVersion(const Model::DescribeApiVersionRequest &request)const;
			void describeApiVersionAsync(const Model::DescribeApiVersionRequest& request, const DescribeApiVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiVersionOutcomeCallable describeApiVersionCallable(const Model::DescribeApiVersionRequest& request) const;
			ScaleOutClusterOutcome scaleOutCluster(const Model::ScaleOutClusterRequest &request)const;
			void scaleOutClusterAsync(const Model::ScaleOutClusterRequest& request, const ScaleOutClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleOutClusterOutcomeCallable scaleOutClusterCallable(const Model::ScaleOutClusterRequest& request) const;
			DescribeClusterLogsOutcome describeClusterLogs(const Model::DescribeClusterLogsRequest &request)const;
			void describeClusterLogsAsync(const Model::DescribeClusterLogsRequest& request, const DescribeClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterLogsOutcomeCallable describeClusterLogsCallable(const Model::DescribeClusterLogsRequest& request) const;
			DescribeClusterUserKubeconfigOutcome describeClusterUserKubeconfig(const Model::DescribeClusterUserKubeconfigRequest &request)const;
			void describeClusterUserKubeconfigAsync(const Model::DescribeClusterUserKubeconfigRequest& request, const DescribeClusterUserKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterUserKubeconfigOutcomeCallable describeClusterUserKubeconfigCallable(const Model::DescribeClusterUserKubeconfigRequest& request) const;
			DescribeClusterDetailOutcome describeClusterDetail(const Model::DescribeClusterDetailRequest &request)const;
			void describeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterDetailOutcomeCallable describeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request) const;
			ResetClusterNodeOutcome resetClusterNode(const Model::ResetClusterNodeRequest &request)const;
			void resetClusterNodeAsync(const Model::ResetClusterNodeRequest& request, const ResetClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetClusterNodeOutcomeCallable resetClusterNodeCallable(const Model::ResetClusterNodeRequest& request) const;
			ScaleClusterOutcome scaleCluster(const Model::ScaleClusterRequest &request)const;
			void scaleClusterAsync(const Model::ScaleClusterRequest& request, const ScaleClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleClusterOutcomeCallable scaleClusterCallable(const Model::ScaleClusterRequest& request) const;
			DescribeClusterEndpointsOutcome describeClusterEndpoints(const Model::DescribeClusterEndpointsRequest &request)const;
			void describeClusterEndpointsAsync(const Model::DescribeClusterEndpointsRequest& request, const DescribeClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterEndpointsOutcomeCallable describeClusterEndpointsCallable(const Model::DescribeClusterEndpointsRequest& request) const;
			DownloadClusterNodeCertsOutcome downloadClusterNodeCerts(const Model::DownloadClusterNodeCertsRequest &request)const;
			void downloadClusterNodeCertsAsync(const Model::DownloadClusterNodeCertsRequest& request, const DownloadClusterNodeCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadClusterNodeCertsOutcomeCallable downloadClusterNodeCertsCallable(const Model::DownloadClusterNodeCertsRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			DeleteClusterNodesOutcome deleteClusterNodes(const Model::DeleteClusterNodesRequest &request)const;
			void deleteClusterNodesAsync(const Model::DeleteClusterNodesRequest& request, const DeleteClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterNodesOutcomeCallable deleteClusterNodesCallable(const Model::DeleteClusterNodesRequest& request) const;
			DeleteClusterNodeOutcome deleteClusterNode(const Model::DeleteClusterNodeRequest &request)const;
			void deleteClusterNodeAsync(const Model::DeleteClusterNodeRequest& request, const DeleteClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterNodeOutcomeCallable deleteClusterNodeCallable(const Model::DeleteClusterNodeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CS_CSCLIENT_H_
