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

#ifndef ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_
#define ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "HitsdbExport.h"
#include "model/CreateLdpsComputeGroupRequest.h"
#include "model/CreateLdpsComputeGroupResult.h"
#include "model/CreateLdpsNamespaceRequest.h"
#include "model/CreateLdpsNamespaceResult.h"
#include "model/CreateLindormInstanceRequest.h"
#include "model/CreateLindormInstanceResult.h"
#include "model/DeleteLdpsComputeGroupRequest.h"
#include "model/DeleteLdpsComputeGroupResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GetEngineDefaultAuthRequest.h"
#include "model/GetEngineDefaultAuthResult.h"
#include "model/GetInstanceIpWhiteListRequest.h"
#include "model/GetInstanceIpWhiteListResult.h"
#include "model/GetInstanceSecurityGroupsRequest.h"
#include "model/GetInstanceSecurityGroupsResult.h"
#include "model/GetLdpsComputeGroupRequest.h"
#include "model/GetLdpsComputeGroupResult.h"
#include "model/GetLdpsNamespacedQuotaRequest.h"
#include "model/GetLdpsNamespacedQuotaResult.h"
#include "model/GetLdpsResourceCostRequest.h"
#include "model/GetLdpsResourceCostResult.h"
#include "model/GetLindormInstanceRequest.h"
#include "model/GetLindormInstanceResult.h"
#include "model/GetLindormInstanceEngineListRequest.h"
#include "model/GetLindormInstanceEngineListResult.h"
#include "model/GetLindormInstanceListRequest.h"
#include "model/GetLindormInstanceListResult.h"
#include "model/ListLdpsComputeGroupsRequest.h"
#include "model/ListLdpsComputeGroupsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyInstancePayTypeRequest.h"
#include "model/ModifyInstancePayTypeResult.h"
#include "model/ReleaseLindormInstanceRequest.h"
#include "model/ReleaseLindormInstanceResult.h"
#include "model/RenewLindormInstanceRequest.h"
#include "model/RenewLindormInstanceResult.h"
#include "model/RestartLdpsComputeGroupRequest.h"
#include "model/RestartLdpsComputeGroupResult.h"
#include "model/SwitchLSQLV3MySQLServiceRequest.h"
#include "model/SwitchLSQLV3MySQLServiceResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateInstanceIpWhiteListRequest.h"
#include "model/UpdateInstanceIpWhiteListResult.h"
#include "model/UpdateInstanceSecurityGroupsRequest.h"
#include "model/UpdateInstanceSecurityGroupsResult.h"
#include "model/UpdateLdpsComputeGroupRequest.h"
#include "model/UpdateLdpsComputeGroupResult.h"
#include "model/UpgradeLindormInstanceRequest.h"
#include "model/UpgradeLindormInstanceResult.h"


namespace AlibabaCloud
{
	namespace Hitsdb
	{
		class ALIBABACLOUD_HITSDB_EXPORT HitsdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateLdpsComputeGroupResult> CreateLdpsComputeGroupOutcome;
			typedef std::future<CreateLdpsComputeGroupOutcome> CreateLdpsComputeGroupOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::CreateLdpsComputeGroupRequest&, const CreateLdpsComputeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLdpsComputeGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateLdpsNamespaceResult> CreateLdpsNamespaceOutcome;
			typedef std::future<CreateLdpsNamespaceOutcome> CreateLdpsNamespaceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::CreateLdpsNamespaceRequest&, const CreateLdpsNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLdpsNamespaceAsyncHandler;
			typedef Outcome<Error, Model::CreateLindormInstanceResult> CreateLindormInstanceOutcome;
			typedef std::future<CreateLindormInstanceOutcome> CreateLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::CreateLindormInstanceRequest&, const CreateLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLindormInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteLdpsComputeGroupResult> DeleteLdpsComputeGroupOutcome;
			typedef std::future<DeleteLdpsComputeGroupOutcome> DeleteLdpsComputeGroupOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DeleteLdpsComputeGroupRequest&, const DeleteLdpsComputeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLdpsComputeGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GetEngineDefaultAuthResult> GetEngineDefaultAuthOutcome;
			typedef std::future<GetEngineDefaultAuthOutcome> GetEngineDefaultAuthOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetEngineDefaultAuthRequest&, const GetEngineDefaultAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEngineDefaultAuthAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceIpWhiteListResult> GetInstanceIpWhiteListOutcome;
			typedef std::future<GetInstanceIpWhiteListOutcome> GetInstanceIpWhiteListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetInstanceIpWhiteListRequest&, const GetInstanceIpWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceIpWhiteListAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceSecurityGroupsResult> GetInstanceSecurityGroupsOutcome;
			typedef std::future<GetInstanceSecurityGroupsOutcome> GetInstanceSecurityGroupsOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetInstanceSecurityGroupsRequest&, const GetInstanceSecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceSecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::GetLdpsComputeGroupResult> GetLdpsComputeGroupOutcome;
			typedef std::future<GetLdpsComputeGroupOutcome> GetLdpsComputeGroupOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLdpsComputeGroupRequest&, const GetLdpsComputeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLdpsComputeGroupAsyncHandler;
			typedef Outcome<Error, Model::GetLdpsNamespacedQuotaResult> GetLdpsNamespacedQuotaOutcome;
			typedef std::future<GetLdpsNamespacedQuotaOutcome> GetLdpsNamespacedQuotaOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLdpsNamespacedQuotaRequest&, const GetLdpsNamespacedQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLdpsNamespacedQuotaAsyncHandler;
			typedef Outcome<Error, Model::GetLdpsResourceCostResult> GetLdpsResourceCostOutcome;
			typedef std::future<GetLdpsResourceCostOutcome> GetLdpsResourceCostOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLdpsResourceCostRequest&, const GetLdpsResourceCostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLdpsResourceCostAsyncHandler;
			typedef Outcome<Error, Model::GetLindormInstanceResult> GetLindormInstanceOutcome;
			typedef std::future<GetLindormInstanceOutcome> GetLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLindormInstanceRequest&, const GetLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLindormInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetLindormInstanceEngineListResult> GetLindormInstanceEngineListOutcome;
			typedef std::future<GetLindormInstanceEngineListOutcome> GetLindormInstanceEngineListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLindormInstanceEngineListRequest&, const GetLindormInstanceEngineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLindormInstanceEngineListAsyncHandler;
			typedef Outcome<Error, Model::GetLindormInstanceListResult> GetLindormInstanceListOutcome;
			typedef std::future<GetLindormInstanceListOutcome> GetLindormInstanceListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::GetLindormInstanceListRequest&, const GetLindormInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLindormInstanceListAsyncHandler;
			typedef Outcome<Error, Model::ListLdpsComputeGroupsResult> ListLdpsComputeGroupsOutcome;
			typedef std::future<ListLdpsComputeGroupsOutcome> ListLdpsComputeGroupsOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ListLdpsComputeGroupsRequest&, const ListLdpsComputeGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLdpsComputeGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstancePayTypeResult> ModifyInstancePayTypeOutcome;
			typedef std::future<ModifyInstancePayTypeOutcome> ModifyInstancePayTypeOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ModifyInstancePayTypeRequest&, const ModifyInstancePayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancePayTypeAsyncHandler;
			typedef Outcome<Error, Model::ReleaseLindormInstanceResult> ReleaseLindormInstanceOutcome;
			typedef std::future<ReleaseLindormInstanceOutcome> ReleaseLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::ReleaseLindormInstanceRequest&, const ReleaseLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseLindormInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewLindormInstanceResult> RenewLindormInstanceOutcome;
			typedef std::future<RenewLindormInstanceOutcome> RenewLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::RenewLindormInstanceRequest&, const RenewLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewLindormInstanceAsyncHandler;
			typedef Outcome<Error, Model::RestartLdpsComputeGroupResult> RestartLdpsComputeGroupOutcome;
			typedef std::future<RestartLdpsComputeGroupOutcome> RestartLdpsComputeGroupOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::RestartLdpsComputeGroupRequest&, const RestartLdpsComputeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartLdpsComputeGroupAsyncHandler;
			typedef Outcome<Error, Model::SwitchLSQLV3MySQLServiceResult> SwitchLSQLV3MySQLServiceOutcome;
			typedef std::future<SwitchLSQLV3MySQLServiceOutcome> SwitchLSQLV3MySQLServiceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::SwitchLSQLV3MySQLServiceRequest&, const SwitchLSQLV3MySQLServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchLSQLV3MySQLServiceAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceIpWhiteListResult> UpdateInstanceIpWhiteListOutcome;
			typedef std::future<UpdateInstanceIpWhiteListOutcome> UpdateInstanceIpWhiteListOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::UpdateInstanceIpWhiteListRequest&, const UpdateInstanceIpWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceIpWhiteListAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceSecurityGroupsResult> UpdateInstanceSecurityGroupsOutcome;
			typedef std::future<UpdateInstanceSecurityGroupsOutcome> UpdateInstanceSecurityGroupsOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::UpdateInstanceSecurityGroupsRequest&, const UpdateInstanceSecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceSecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::UpdateLdpsComputeGroupResult> UpdateLdpsComputeGroupOutcome;
			typedef std::future<UpdateLdpsComputeGroupOutcome> UpdateLdpsComputeGroupOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::UpdateLdpsComputeGroupRequest&, const UpdateLdpsComputeGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLdpsComputeGroupAsyncHandler;
			typedef Outcome<Error, Model::UpgradeLindormInstanceResult> UpgradeLindormInstanceOutcome;
			typedef std::future<UpgradeLindormInstanceOutcome> UpgradeLindormInstanceOutcomeCallable;
			typedef std::function<void(const HitsdbClient*, const Model::UpgradeLindormInstanceRequest&, const UpgradeLindormInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLindormInstanceAsyncHandler;

			HitsdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			HitsdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			HitsdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~HitsdbClient();
			CreateLdpsComputeGroupOutcome createLdpsComputeGroup(const Model::CreateLdpsComputeGroupRequest &request)const;
			void createLdpsComputeGroupAsync(const Model::CreateLdpsComputeGroupRequest& request, const CreateLdpsComputeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLdpsComputeGroupOutcomeCallable createLdpsComputeGroupCallable(const Model::CreateLdpsComputeGroupRequest& request) const;
			CreateLdpsNamespaceOutcome createLdpsNamespace(const Model::CreateLdpsNamespaceRequest &request)const;
			void createLdpsNamespaceAsync(const Model::CreateLdpsNamespaceRequest& request, const CreateLdpsNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLdpsNamespaceOutcomeCallable createLdpsNamespaceCallable(const Model::CreateLdpsNamespaceRequest& request) const;
			CreateLindormInstanceOutcome createLindormInstance(const Model::CreateLindormInstanceRequest &request)const;
			void createLindormInstanceAsync(const Model::CreateLindormInstanceRequest& request, const CreateLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLindormInstanceOutcomeCallable createLindormInstanceCallable(const Model::CreateLindormInstanceRequest& request) const;
			DeleteLdpsComputeGroupOutcome deleteLdpsComputeGroup(const Model::DeleteLdpsComputeGroupRequest &request)const;
			void deleteLdpsComputeGroupAsync(const Model::DeleteLdpsComputeGroupRequest& request, const DeleteLdpsComputeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLdpsComputeGroupOutcomeCallable deleteLdpsComputeGroupCallable(const Model::DeleteLdpsComputeGroupRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GetEngineDefaultAuthOutcome getEngineDefaultAuth(const Model::GetEngineDefaultAuthRequest &request)const;
			void getEngineDefaultAuthAsync(const Model::GetEngineDefaultAuthRequest& request, const GetEngineDefaultAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEngineDefaultAuthOutcomeCallable getEngineDefaultAuthCallable(const Model::GetEngineDefaultAuthRequest& request) const;
			GetInstanceIpWhiteListOutcome getInstanceIpWhiteList(const Model::GetInstanceIpWhiteListRequest &request)const;
			void getInstanceIpWhiteListAsync(const Model::GetInstanceIpWhiteListRequest& request, const GetInstanceIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceIpWhiteListOutcomeCallable getInstanceIpWhiteListCallable(const Model::GetInstanceIpWhiteListRequest& request) const;
			GetInstanceSecurityGroupsOutcome getInstanceSecurityGroups(const Model::GetInstanceSecurityGroupsRequest &request)const;
			void getInstanceSecurityGroupsAsync(const Model::GetInstanceSecurityGroupsRequest& request, const GetInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceSecurityGroupsOutcomeCallable getInstanceSecurityGroupsCallable(const Model::GetInstanceSecurityGroupsRequest& request) const;
			GetLdpsComputeGroupOutcome getLdpsComputeGroup(const Model::GetLdpsComputeGroupRequest &request)const;
			void getLdpsComputeGroupAsync(const Model::GetLdpsComputeGroupRequest& request, const GetLdpsComputeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLdpsComputeGroupOutcomeCallable getLdpsComputeGroupCallable(const Model::GetLdpsComputeGroupRequest& request) const;
			GetLdpsNamespacedQuotaOutcome getLdpsNamespacedQuota(const Model::GetLdpsNamespacedQuotaRequest &request)const;
			void getLdpsNamespacedQuotaAsync(const Model::GetLdpsNamespacedQuotaRequest& request, const GetLdpsNamespacedQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLdpsNamespacedQuotaOutcomeCallable getLdpsNamespacedQuotaCallable(const Model::GetLdpsNamespacedQuotaRequest& request) const;
			GetLdpsResourceCostOutcome getLdpsResourceCost(const Model::GetLdpsResourceCostRequest &request)const;
			void getLdpsResourceCostAsync(const Model::GetLdpsResourceCostRequest& request, const GetLdpsResourceCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLdpsResourceCostOutcomeCallable getLdpsResourceCostCallable(const Model::GetLdpsResourceCostRequest& request) const;
			GetLindormInstanceOutcome getLindormInstance(const Model::GetLindormInstanceRequest &request)const;
			void getLindormInstanceAsync(const Model::GetLindormInstanceRequest& request, const GetLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLindormInstanceOutcomeCallable getLindormInstanceCallable(const Model::GetLindormInstanceRequest& request) const;
			GetLindormInstanceEngineListOutcome getLindormInstanceEngineList(const Model::GetLindormInstanceEngineListRequest &request)const;
			void getLindormInstanceEngineListAsync(const Model::GetLindormInstanceEngineListRequest& request, const GetLindormInstanceEngineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLindormInstanceEngineListOutcomeCallable getLindormInstanceEngineListCallable(const Model::GetLindormInstanceEngineListRequest& request) const;
			GetLindormInstanceListOutcome getLindormInstanceList(const Model::GetLindormInstanceListRequest &request)const;
			void getLindormInstanceListAsync(const Model::GetLindormInstanceListRequest& request, const GetLindormInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLindormInstanceListOutcomeCallable getLindormInstanceListCallable(const Model::GetLindormInstanceListRequest& request) const;
			ListLdpsComputeGroupsOutcome listLdpsComputeGroups(const Model::ListLdpsComputeGroupsRequest &request)const;
			void listLdpsComputeGroupsAsync(const Model::ListLdpsComputeGroupsRequest& request, const ListLdpsComputeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLdpsComputeGroupsOutcomeCallable listLdpsComputeGroupsCallable(const Model::ListLdpsComputeGroupsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyInstancePayTypeOutcome modifyInstancePayType(const Model::ModifyInstancePayTypeRequest &request)const;
			void modifyInstancePayTypeAsync(const Model::ModifyInstancePayTypeRequest& request, const ModifyInstancePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstancePayTypeOutcomeCallable modifyInstancePayTypeCallable(const Model::ModifyInstancePayTypeRequest& request) const;
			ReleaseLindormInstanceOutcome releaseLindormInstance(const Model::ReleaseLindormInstanceRequest &request)const;
			void releaseLindormInstanceAsync(const Model::ReleaseLindormInstanceRequest& request, const ReleaseLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseLindormInstanceOutcomeCallable releaseLindormInstanceCallable(const Model::ReleaseLindormInstanceRequest& request) const;
			RenewLindormInstanceOutcome renewLindormInstance(const Model::RenewLindormInstanceRequest &request)const;
			void renewLindormInstanceAsync(const Model::RenewLindormInstanceRequest& request, const RenewLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewLindormInstanceOutcomeCallable renewLindormInstanceCallable(const Model::RenewLindormInstanceRequest& request) const;
			RestartLdpsComputeGroupOutcome restartLdpsComputeGroup(const Model::RestartLdpsComputeGroupRequest &request)const;
			void restartLdpsComputeGroupAsync(const Model::RestartLdpsComputeGroupRequest& request, const RestartLdpsComputeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartLdpsComputeGroupOutcomeCallable restartLdpsComputeGroupCallable(const Model::RestartLdpsComputeGroupRequest& request) const;
			SwitchLSQLV3MySQLServiceOutcome switchLSQLV3MySQLService(const Model::SwitchLSQLV3MySQLServiceRequest &request)const;
			void switchLSQLV3MySQLServiceAsync(const Model::SwitchLSQLV3MySQLServiceRequest& request, const SwitchLSQLV3MySQLServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchLSQLV3MySQLServiceOutcomeCallable switchLSQLV3MySQLServiceCallable(const Model::SwitchLSQLV3MySQLServiceRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateInstanceIpWhiteListOutcome updateInstanceIpWhiteList(const Model::UpdateInstanceIpWhiteListRequest &request)const;
			void updateInstanceIpWhiteListAsync(const Model::UpdateInstanceIpWhiteListRequest& request, const UpdateInstanceIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceIpWhiteListOutcomeCallable updateInstanceIpWhiteListCallable(const Model::UpdateInstanceIpWhiteListRequest& request) const;
			UpdateInstanceSecurityGroupsOutcome updateInstanceSecurityGroups(const Model::UpdateInstanceSecurityGroupsRequest &request)const;
			void updateInstanceSecurityGroupsAsync(const Model::UpdateInstanceSecurityGroupsRequest& request, const UpdateInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceSecurityGroupsOutcomeCallable updateInstanceSecurityGroupsCallable(const Model::UpdateInstanceSecurityGroupsRequest& request) const;
			UpdateLdpsComputeGroupOutcome updateLdpsComputeGroup(const Model::UpdateLdpsComputeGroupRequest &request)const;
			void updateLdpsComputeGroupAsync(const Model::UpdateLdpsComputeGroupRequest& request, const UpdateLdpsComputeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLdpsComputeGroupOutcomeCallable updateLdpsComputeGroupCallable(const Model::UpdateLdpsComputeGroupRequest& request) const;
			UpgradeLindormInstanceOutcome upgradeLindormInstance(const Model::UpgradeLindormInstanceRequest &request)const;
			void upgradeLindormInstanceAsync(const Model::UpgradeLindormInstanceRequest& request, const UpgradeLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeLindormInstanceOutcomeCallable upgradeLindormInstanceCallable(const Model::UpgradeLindormInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HITSDB_HITSDBCLIENT_H_
