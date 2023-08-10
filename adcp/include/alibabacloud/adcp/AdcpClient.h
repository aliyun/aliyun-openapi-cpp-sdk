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

#ifndef ALIBABACLOUD_ADCP_ADCPCLIENT_H_
#define ALIBABACLOUD_ADCP_ADCPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AdcpExport.h"
#include "model/AttachClusterToHubRequest.h"
#include "model/AttachClusterToHubResult.h"
#include "model/CreateHubClusterRequest.h"
#include "model/CreateHubClusterResult.h"
#include "model/DeleteHubClusterRequest.h"
#include "model/DeleteHubClusterResult.h"
#include "model/DeletePolicyInstanceRequest.h"
#include "model/DeletePolicyInstanceResult.h"
#include "model/DeleteUserPermissionRequest.h"
#include "model/DeleteUserPermissionResult.h"
#include "model/DeployPolicyInstanceRequest.h"
#include "model/DeployPolicyInstanceResult.h"
#include "model/DescribeHubClusterDetailsRequest.h"
#include "model/DescribeHubClusterDetailsResult.h"
#include "model/DescribeHubClusterKubeconfigRequest.h"
#include "model/DescribeHubClusterKubeconfigResult.h"
#include "model/DescribeHubClusterLogsRequest.h"
#include "model/DescribeHubClusterLogsResult.h"
#include "model/DescribeHubClustersRequest.h"
#include "model/DescribeHubClustersResult.h"
#include "model/DescribeManagedClustersRequest.h"
#include "model/DescribeManagedClustersResult.h"
#include "model/DescribePoliciesRequest.h"
#include "model/DescribePoliciesResult.h"
#include "model/DescribePolicyDetailsRequest.h"
#include "model/DescribePolicyDetailsResult.h"
#include "model/DescribePolicyGovernanceInClusterRequest.h"
#include "model/DescribePolicyGovernanceInClusterResult.h"
#include "model/DescribePolicyInstancesRequest.h"
#include "model/DescribePolicyInstancesResult.h"
#include "model/DescribePolicyInstancesStatusRequest.h"
#include "model/DescribePolicyInstancesStatusResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeUserPermissionsRequest.h"
#include "model/DescribeUserPermissionsResult.h"
#include "model/DetachClusterFromHubRequest.h"
#include "model/DetachClusterFromHubResult.h"
#include "model/GrantUserPermissionRequest.h"
#include "model/GrantUserPermissionResult.h"
#include "model/GrantUserPermissionsRequest.h"
#include "model/GrantUserPermissionsResult.h"
#include "model/UpdateHubClusterFeatureRequest.h"
#include "model/UpdateHubClusterFeatureResult.h"
#include "model/UpdateUserPermissionRequest.h"
#include "model/UpdateUserPermissionResult.h"


namespace AlibabaCloud
{
	namespace Adcp
	{
		class ALIBABACLOUD_ADCP_EXPORT AdcpClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachClusterToHubResult> AttachClusterToHubOutcome;
			typedef std::future<AttachClusterToHubOutcome> AttachClusterToHubOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::AttachClusterToHubRequest&, const AttachClusterToHubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachClusterToHubAsyncHandler;
			typedef Outcome<Error, Model::CreateHubClusterResult> CreateHubClusterOutcome;
			typedef std::future<CreateHubClusterOutcome> CreateHubClusterOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::CreateHubClusterRequest&, const CreateHubClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHubClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteHubClusterResult> DeleteHubClusterOutcome;
			typedef std::future<DeleteHubClusterOutcome> DeleteHubClusterOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DeleteHubClusterRequest&, const DeleteHubClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHubClusterAsyncHandler;
			typedef Outcome<Error, Model::DeletePolicyInstanceResult> DeletePolicyInstanceOutcome;
			typedef std::future<DeletePolicyInstanceOutcome> DeletePolicyInstanceOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DeletePolicyInstanceRequest&, const DeletePolicyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserPermissionResult> DeleteUserPermissionOutcome;
			typedef std::future<DeleteUserPermissionOutcome> DeleteUserPermissionOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DeleteUserPermissionRequest&, const DeleteUserPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserPermissionAsyncHandler;
			typedef Outcome<Error, Model::DeployPolicyInstanceResult> DeployPolicyInstanceOutcome;
			typedef std::future<DeployPolicyInstanceOutcome> DeployPolicyInstanceOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DeployPolicyInstanceRequest&, const DeployPolicyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployPolicyInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeHubClusterDetailsResult> DescribeHubClusterDetailsOutcome;
			typedef std::future<DescribeHubClusterDetailsOutcome> DescribeHubClusterDetailsOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribeHubClusterDetailsRequest&, const DescribeHubClusterDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHubClusterDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeHubClusterKubeconfigResult> DescribeHubClusterKubeconfigOutcome;
			typedef std::future<DescribeHubClusterKubeconfigOutcome> DescribeHubClusterKubeconfigOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribeHubClusterKubeconfigRequest&, const DescribeHubClusterKubeconfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHubClusterKubeconfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeHubClusterLogsResult> DescribeHubClusterLogsOutcome;
			typedef std::future<DescribeHubClusterLogsOutcome> DescribeHubClusterLogsOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribeHubClusterLogsRequest&, const DescribeHubClusterLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHubClusterLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeHubClustersResult> DescribeHubClustersOutcome;
			typedef std::future<DescribeHubClustersOutcome> DescribeHubClustersOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribeHubClustersRequest&, const DescribeHubClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHubClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeManagedClustersResult> DescribeManagedClustersOutcome;
			typedef std::future<DescribeManagedClustersOutcome> DescribeManagedClustersOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribeManagedClustersRequest&, const DescribeManagedClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeManagedClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribePoliciesResult> DescribePoliciesOutcome;
			typedef std::future<DescribePoliciesOutcome> DescribePoliciesOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribePoliciesRequest&, const DescribePoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePoliciesAsyncHandler;
			typedef Outcome<Error, Model::DescribePolicyDetailsResult> DescribePolicyDetailsOutcome;
			typedef std::future<DescribePolicyDetailsOutcome> DescribePolicyDetailsOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribePolicyDetailsRequest&, const DescribePolicyDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribePolicyGovernanceInClusterResult> DescribePolicyGovernanceInClusterOutcome;
			typedef std::future<DescribePolicyGovernanceInClusterOutcome> DescribePolicyGovernanceInClusterOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribePolicyGovernanceInClusterRequest&, const DescribePolicyGovernanceInClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGovernanceInClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribePolicyInstancesResult> DescribePolicyInstancesOutcome;
			typedef std::future<DescribePolicyInstancesOutcome> DescribePolicyInstancesOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribePolicyInstancesRequest&, const DescribePolicyInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribePolicyInstancesStatusResult> DescribePolicyInstancesStatusOutcome;
			typedef std::future<DescribePolicyInstancesStatusOutcome> DescribePolicyInstancesStatusOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribePolicyInstancesStatusRequest&, const DescribePolicyInstancesStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyInstancesStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserPermissionsResult> DescribeUserPermissionsOutcome;
			typedef std::future<DescribeUserPermissionsOutcome> DescribeUserPermissionsOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DescribeUserPermissionsRequest&, const DescribeUserPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserPermissionsAsyncHandler;
			typedef Outcome<Error, Model::DetachClusterFromHubResult> DetachClusterFromHubOutcome;
			typedef std::future<DetachClusterFromHubOutcome> DetachClusterFromHubOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::DetachClusterFromHubRequest&, const DetachClusterFromHubOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachClusterFromHubAsyncHandler;
			typedef Outcome<Error, Model::GrantUserPermissionResult> GrantUserPermissionOutcome;
			typedef std::future<GrantUserPermissionOutcome> GrantUserPermissionOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::GrantUserPermissionRequest&, const GrantUserPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantUserPermissionAsyncHandler;
			typedef Outcome<Error, Model::GrantUserPermissionsResult> GrantUserPermissionsOutcome;
			typedef std::future<GrantUserPermissionsOutcome> GrantUserPermissionsOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::GrantUserPermissionsRequest&, const GrantUserPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantUserPermissionsAsyncHandler;
			typedef Outcome<Error, Model::UpdateHubClusterFeatureResult> UpdateHubClusterFeatureOutcome;
			typedef std::future<UpdateHubClusterFeatureOutcome> UpdateHubClusterFeatureOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::UpdateHubClusterFeatureRequest&, const UpdateHubClusterFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHubClusterFeatureAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserPermissionResult> UpdateUserPermissionOutcome;
			typedef std::future<UpdateUserPermissionOutcome> UpdateUserPermissionOutcomeCallable;
			typedef std::function<void(const AdcpClient*, const Model::UpdateUserPermissionRequest&, const UpdateUserPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserPermissionAsyncHandler;

			AdcpClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AdcpClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AdcpClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AdcpClient();
			AttachClusterToHubOutcome attachClusterToHub(const Model::AttachClusterToHubRequest &request)const;
			void attachClusterToHubAsync(const Model::AttachClusterToHubRequest& request, const AttachClusterToHubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachClusterToHubOutcomeCallable attachClusterToHubCallable(const Model::AttachClusterToHubRequest& request) const;
			CreateHubClusterOutcome createHubCluster(const Model::CreateHubClusterRequest &request)const;
			void createHubClusterAsync(const Model::CreateHubClusterRequest& request, const CreateHubClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHubClusterOutcomeCallable createHubClusterCallable(const Model::CreateHubClusterRequest& request) const;
			DeleteHubClusterOutcome deleteHubCluster(const Model::DeleteHubClusterRequest &request)const;
			void deleteHubClusterAsync(const Model::DeleteHubClusterRequest& request, const DeleteHubClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHubClusterOutcomeCallable deleteHubClusterCallable(const Model::DeleteHubClusterRequest& request) const;
			DeletePolicyInstanceOutcome deletePolicyInstance(const Model::DeletePolicyInstanceRequest &request)const;
			void deletePolicyInstanceAsync(const Model::DeletePolicyInstanceRequest& request, const DeletePolicyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePolicyInstanceOutcomeCallable deletePolicyInstanceCallable(const Model::DeletePolicyInstanceRequest& request) const;
			DeleteUserPermissionOutcome deleteUserPermission(const Model::DeleteUserPermissionRequest &request)const;
			void deleteUserPermissionAsync(const Model::DeleteUserPermissionRequest& request, const DeleteUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserPermissionOutcomeCallable deleteUserPermissionCallable(const Model::DeleteUserPermissionRequest& request) const;
			DeployPolicyInstanceOutcome deployPolicyInstance(const Model::DeployPolicyInstanceRequest &request)const;
			void deployPolicyInstanceAsync(const Model::DeployPolicyInstanceRequest& request, const DeployPolicyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployPolicyInstanceOutcomeCallable deployPolicyInstanceCallable(const Model::DeployPolicyInstanceRequest& request) const;
			DescribeHubClusterDetailsOutcome describeHubClusterDetails(const Model::DescribeHubClusterDetailsRequest &request)const;
			void describeHubClusterDetailsAsync(const Model::DescribeHubClusterDetailsRequest& request, const DescribeHubClusterDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHubClusterDetailsOutcomeCallable describeHubClusterDetailsCallable(const Model::DescribeHubClusterDetailsRequest& request) const;
			DescribeHubClusterKubeconfigOutcome describeHubClusterKubeconfig(const Model::DescribeHubClusterKubeconfigRequest &request)const;
			void describeHubClusterKubeconfigAsync(const Model::DescribeHubClusterKubeconfigRequest& request, const DescribeHubClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHubClusterKubeconfigOutcomeCallable describeHubClusterKubeconfigCallable(const Model::DescribeHubClusterKubeconfigRequest& request) const;
			DescribeHubClusterLogsOutcome describeHubClusterLogs(const Model::DescribeHubClusterLogsRequest &request)const;
			void describeHubClusterLogsAsync(const Model::DescribeHubClusterLogsRequest& request, const DescribeHubClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHubClusterLogsOutcomeCallable describeHubClusterLogsCallable(const Model::DescribeHubClusterLogsRequest& request) const;
			DescribeHubClustersOutcome describeHubClusters(const Model::DescribeHubClustersRequest &request)const;
			void describeHubClustersAsync(const Model::DescribeHubClustersRequest& request, const DescribeHubClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHubClustersOutcomeCallable describeHubClustersCallable(const Model::DescribeHubClustersRequest& request) const;
			DescribeManagedClustersOutcome describeManagedClusters(const Model::DescribeManagedClustersRequest &request)const;
			void describeManagedClustersAsync(const Model::DescribeManagedClustersRequest& request, const DescribeManagedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeManagedClustersOutcomeCallable describeManagedClustersCallable(const Model::DescribeManagedClustersRequest& request) const;
			DescribePoliciesOutcome describePolicies(const Model::DescribePoliciesRequest &request)const;
			void describePoliciesAsync(const Model::DescribePoliciesRequest& request, const DescribePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePoliciesOutcomeCallable describePoliciesCallable(const Model::DescribePoliciesRequest& request) const;
			DescribePolicyDetailsOutcome describePolicyDetails(const Model::DescribePolicyDetailsRequest &request)const;
			void describePolicyDetailsAsync(const Model::DescribePolicyDetailsRequest& request, const DescribePolicyDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePolicyDetailsOutcomeCallable describePolicyDetailsCallable(const Model::DescribePolicyDetailsRequest& request) const;
			DescribePolicyGovernanceInClusterOutcome describePolicyGovernanceInCluster(const Model::DescribePolicyGovernanceInClusterRequest &request)const;
			void describePolicyGovernanceInClusterAsync(const Model::DescribePolicyGovernanceInClusterRequest& request, const DescribePolicyGovernanceInClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePolicyGovernanceInClusterOutcomeCallable describePolicyGovernanceInClusterCallable(const Model::DescribePolicyGovernanceInClusterRequest& request) const;
			DescribePolicyInstancesOutcome describePolicyInstances(const Model::DescribePolicyInstancesRequest &request)const;
			void describePolicyInstancesAsync(const Model::DescribePolicyInstancesRequest& request, const DescribePolicyInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePolicyInstancesOutcomeCallable describePolicyInstancesCallable(const Model::DescribePolicyInstancesRequest& request) const;
			DescribePolicyInstancesStatusOutcome describePolicyInstancesStatus(const Model::DescribePolicyInstancesStatusRequest &request)const;
			void describePolicyInstancesStatusAsync(const Model::DescribePolicyInstancesStatusRequest& request, const DescribePolicyInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePolicyInstancesStatusOutcomeCallable describePolicyInstancesStatusCallable(const Model::DescribePolicyInstancesStatusRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeUserPermissionsOutcome describeUserPermissions(const Model::DescribeUserPermissionsRequest &request)const;
			void describeUserPermissionsAsync(const Model::DescribeUserPermissionsRequest& request, const DescribeUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserPermissionsOutcomeCallable describeUserPermissionsCallable(const Model::DescribeUserPermissionsRequest& request) const;
			DetachClusterFromHubOutcome detachClusterFromHub(const Model::DetachClusterFromHubRequest &request)const;
			void detachClusterFromHubAsync(const Model::DetachClusterFromHubRequest& request, const DetachClusterFromHubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachClusterFromHubOutcomeCallable detachClusterFromHubCallable(const Model::DetachClusterFromHubRequest& request) const;
			GrantUserPermissionOutcome grantUserPermission(const Model::GrantUserPermissionRequest &request)const;
			void grantUserPermissionAsync(const Model::GrantUserPermissionRequest& request, const GrantUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantUserPermissionOutcomeCallable grantUserPermissionCallable(const Model::GrantUserPermissionRequest& request) const;
			GrantUserPermissionsOutcome grantUserPermissions(const Model::GrantUserPermissionsRequest &request)const;
			void grantUserPermissionsAsync(const Model::GrantUserPermissionsRequest& request, const GrantUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantUserPermissionsOutcomeCallable grantUserPermissionsCallable(const Model::GrantUserPermissionsRequest& request) const;
			UpdateHubClusterFeatureOutcome updateHubClusterFeature(const Model::UpdateHubClusterFeatureRequest &request)const;
			void updateHubClusterFeatureAsync(const Model::UpdateHubClusterFeatureRequest& request, const UpdateHubClusterFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHubClusterFeatureOutcomeCallable updateHubClusterFeatureCallable(const Model::UpdateHubClusterFeatureRequest& request) const;
			UpdateUserPermissionOutcome updateUserPermission(const Model::UpdateUserPermissionRequest &request)const;
			void updateUserPermissionAsync(const Model::UpdateUserPermissionRequest& request, const UpdateUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserPermissionOutcomeCallable updateUserPermissionCallable(const Model::UpdateUserPermissionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ADCP_ADCPCLIENT_H_
