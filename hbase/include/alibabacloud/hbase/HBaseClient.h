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

#ifndef ALIBABACLOUD_HBASE_HBASECLIENT_H_
#define ALIBABACLOUD_HBASE_HBASECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "HBaseExport.h"
#include "model/AddUserHdfsInfoRequest.h"
#include "model/AddUserHdfsInfoResult.h"
#include "model/ConvertInstanceRequest.h"
#include "model/ConvertInstanceResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateHbaseHaSlbRequest.h"
#include "model/CreateHbaseHaSlbResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/DeleteHbaseHaSlbRequest.h"
#include "model/DeleteHbaseHaSlbResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteUserHdfsInfoRequest.h"
#include "model/DeleteUserHdfsInfoResult.h"
#include "model/DescribeDBInstanceUsageRequest.h"
#include "model/DescribeDBInstanceUsageResult.h"
#include "model/DescribeEndpointsRequest.h"
#include "model/DescribeEndpointsResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeInstanceTypeRequest.h"
#include "model/DescribeInstanceTypeResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeIpWhitelistRequest.h"
#include "model/DescribeIpWhitelistResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSecurityGroupsRequest.h"
#include "model/DescribeSecurityGroupsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagsRequest.h"
#include "model/ListTagsResult.h"
#include "model/ModifyClusterDeletionProtectionRequest.h"
#include "model/ModifyClusterDeletionProtectionResult.h"
#include "model/ModifyInstanceMaintainTimeRequest.h"
#include "model/ModifyInstanceMaintainTimeResult.h"
#include "model/ModifyInstanceNameRequest.h"
#include "model/ModifyInstanceNameResult.h"
#include "model/ModifyIpWhitelistRequest.h"
#include "model/ModifyIpWhitelistResult.h"
#include "model/ModifySecurityGroupsRequest.h"
#include "model/ModifySecurityGroupsResult.h"
#include "model/ModifyUIAccountPasswordRequest.h"
#include "model/ModifyUIAccountPasswordResult.h"
#include "model/QueryHBaseHaDBRequest.h"
#include "model/QueryHBaseHaDBResult.h"
#include "model/QueryXpackRelateDBRequest.h"
#include "model/QueryXpackRelateDBResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/ResizeDiskSizeRequest.h"
#include "model/ResizeDiskSizeResult.h"
#include "model/ResizeNodeCountRequest.h"
#include "model/ResizeNodeCountResult.h"
#include "model/RestartInstanceRequest.h"
#include "model/RestartInstanceResult.h"
#include "model/SwitchHbaseHaSlbRequest.h"
#include "model/SwitchHbaseHaSlbResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnTagResourcesRequest.h"
#include "model/UnTagResourcesResult.h"
#include "model/XpackRelateDBRequest.h"
#include "model/XpackRelateDBResult.h"


namespace AlibabaCloud
{
	namespace HBase
	{
		class ALIBABACLOUD_HBASE_EXPORT HBaseClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddUserHdfsInfoResult> AddUserHdfsInfoOutcome;
			typedef std::future<AddUserHdfsInfoOutcome> AddUserHdfsInfoOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::AddUserHdfsInfoRequest&, const AddUserHdfsInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserHdfsInfoAsyncHandler;
			typedef Outcome<Error, Model::ConvertInstanceResult> ConvertInstanceOutcome;
			typedef std::future<ConvertInstanceOutcome> ConvertInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ConvertInstanceRequest&, const ConvertInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateHbaseHaSlbResult> CreateHbaseHaSlbOutcome;
			typedef std::future<CreateHbaseHaSlbOutcome> CreateHbaseHaSlbOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateHbaseHaSlbRequest&, const CreateHbaseHaSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHbaseHaSlbAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteHbaseHaSlbResult> DeleteHbaseHaSlbOutcome;
			typedef std::future<DeleteHbaseHaSlbOutcome> DeleteHbaseHaSlbOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteHbaseHaSlbRequest&, const DeleteHbaseHaSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHbaseHaSlbAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserHdfsInfoResult> DeleteUserHdfsInfoOutcome;
			typedef std::future<DeleteUserHdfsInfoOutcome> DeleteUserHdfsInfoOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteUserHdfsInfoRequest&, const DeleteUserHdfsInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserHdfsInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceUsageResult> DescribeDBInstanceUsageOutcome;
			typedef std::future<DescribeDBInstanceUsageOutcome> DescribeDBInstanceUsageOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeDBInstanceUsageRequest&, const DescribeDBInstanceUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeEndpointsResult> DescribeEndpointsOutcome;
			typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeEndpointsRequest&, const DescribeEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTypeResult> DescribeInstanceTypeOutcome;
			typedef std::future<DescribeInstanceTypeOutcome> DescribeInstanceTypeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeInstanceTypeRequest&, const DescribeInstanceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpWhitelistResult> DescribeIpWhitelistOutcome;
			typedef std::future<DescribeIpWhitelistOutcome> DescribeIpWhitelistOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeIpWhitelistRequest&, const DescribeIpWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupsResult> DescribeSecurityGroupsOutcome;
			typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeSecurityGroupsRequest&, const DescribeSecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagsResult> ListTagsOutcome;
			typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ListTagsRequest&, const ListTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterDeletionProtectionResult> ModifyClusterDeletionProtectionOutcome;
			typedef std::future<ModifyClusterDeletionProtectionOutcome> ModifyClusterDeletionProtectionOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyClusterDeletionProtectionRequest&, const ModifyClusterDeletionProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterDeletionProtectionAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceMaintainTimeResult> ModifyInstanceMaintainTimeOutcome;
			typedef std::future<ModifyInstanceMaintainTimeOutcome> ModifyInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyInstanceMaintainTimeRequest&, const ModifyInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceNameResult> ModifyInstanceNameOutcome;
			typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyInstanceNameRequest&, const ModifyInstanceNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpWhitelistResult> ModifyIpWhitelistOutcome;
			typedef std::future<ModifyIpWhitelistOutcome> ModifyIpWhitelistOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyIpWhitelistRequest&, const ModifyIpWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityGroupsResult> ModifySecurityGroupsOutcome;
			typedef std::future<ModifySecurityGroupsOutcome> ModifySecurityGroupsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifySecurityGroupsRequest&, const ModifySecurityGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupsAsyncHandler;
			typedef Outcome<Error, Model::ModifyUIAccountPasswordResult> ModifyUIAccountPasswordOutcome;
			typedef std::future<ModifyUIAccountPasswordOutcome> ModifyUIAccountPasswordOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ModifyUIAccountPasswordRequest&, const ModifyUIAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUIAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::QueryHBaseHaDBResult> QueryHBaseHaDBOutcome;
			typedef std::future<QueryHBaseHaDBOutcome> QueryHBaseHaDBOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::QueryHBaseHaDBRequest&, const QueryHBaseHaDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryHBaseHaDBAsyncHandler;
			typedef Outcome<Error, Model::QueryXpackRelateDBResult> QueryXpackRelateDBOutcome;
			typedef std::future<QueryXpackRelateDBOutcome> QueryXpackRelateDBOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::QueryXpackRelateDBRequest&, const QueryXpackRelateDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryXpackRelateDBAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResizeDiskSizeResult> ResizeDiskSizeOutcome;
			typedef std::future<ResizeDiskSizeOutcome> ResizeDiskSizeOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ResizeDiskSizeRequest&, const ResizeDiskSizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskSizeAsyncHandler;
			typedef Outcome<Error, Model::ResizeNodeCountResult> ResizeNodeCountOutcome;
			typedef std::future<ResizeNodeCountOutcome> ResizeNodeCountOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::ResizeNodeCountRequest&, const ResizeNodeCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeNodeCountAsyncHandler;
			typedef Outcome<Error, Model::RestartInstanceResult> RestartInstanceOutcome;
			typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::RestartInstanceRequest&, const RestartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
			typedef Outcome<Error, Model::SwitchHbaseHaSlbResult> SwitchHbaseHaSlbOutcome;
			typedef std::future<SwitchHbaseHaSlbOutcome> SwitchHbaseHaSlbOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::SwitchHbaseHaSlbRequest&, const SwitchHbaseHaSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchHbaseHaSlbAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnTagResourcesResult> UnTagResourcesOutcome;
			typedef std::future<UnTagResourcesOutcome> UnTagResourcesOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::UnTagResourcesRequest&, const UnTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::XpackRelateDBResult> XpackRelateDBOutcome;
			typedef std::future<XpackRelateDBOutcome> XpackRelateDBOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::XpackRelateDBRequest&, const XpackRelateDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> XpackRelateDBAsyncHandler;

			HBaseClient(const Credentials &credentials, const ClientConfiguration &configuration);
			HBaseClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			HBaseClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~HBaseClient();
			AddUserHdfsInfoOutcome addUserHdfsInfo(const Model::AddUserHdfsInfoRequest &request)const;
			void addUserHdfsInfoAsync(const Model::AddUserHdfsInfoRequest& request, const AddUserHdfsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserHdfsInfoOutcomeCallable addUserHdfsInfoCallable(const Model::AddUserHdfsInfoRequest& request) const;
			ConvertInstanceOutcome convertInstance(const Model::ConvertInstanceRequest &request)const;
			void convertInstanceAsync(const Model::ConvertInstanceRequest& request, const ConvertInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertInstanceOutcomeCallable convertInstanceCallable(const Model::ConvertInstanceRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateHbaseHaSlbOutcome createHbaseHaSlb(const Model::CreateHbaseHaSlbRequest &request)const;
			void createHbaseHaSlbAsync(const Model::CreateHbaseHaSlbRequest& request, const CreateHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHbaseHaSlbOutcomeCallable createHbaseHaSlbCallable(const Model::CreateHbaseHaSlbRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			DeleteHbaseHaSlbOutcome deleteHbaseHaSlb(const Model::DeleteHbaseHaSlbRequest &request)const;
			void deleteHbaseHaSlbAsync(const Model::DeleteHbaseHaSlbRequest& request, const DeleteHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHbaseHaSlbOutcomeCallable deleteHbaseHaSlbCallable(const Model::DeleteHbaseHaSlbRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteUserHdfsInfoOutcome deleteUserHdfsInfo(const Model::DeleteUserHdfsInfoRequest &request)const;
			void deleteUserHdfsInfoAsync(const Model::DeleteUserHdfsInfoRequest& request, const DeleteUserHdfsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserHdfsInfoOutcomeCallable deleteUserHdfsInfoCallable(const Model::DeleteUserHdfsInfoRequest& request) const;
			DescribeDBInstanceUsageOutcome describeDBInstanceUsage(const Model::DescribeDBInstanceUsageRequest &request)const;
			void describeDBInstanceUsageAsync(const Model::DescribeDBInstanceUsageRequest& request, const DescribeDBInstanceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceUsageOutcomeCallable describeDBInstanceUsageCallable(const Model::DescribeDBInstanceUsageRequest& request) const;
			DescribeEndpointsOutcome describeEndpoints(const Model::DescribeEndpointsRequest &request)const;
			void describeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEndpointsOutcomeCallable describeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeInstanceTypeOutcome describeInstanceType(const Model::DescribeInstanceTypeRequest &request)const;
			void describeInstanceTypeAsync(const Model::DescribeInstanceTypeRequest& request, const DescribeInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTypeOutcomeCallable describeInstanceTypeCallable(const Model::DescribeInstanceTypeRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeIpWhitelistOutcome describeIpWhitelist(const Model::DescribeIpWhitelistRequest &request)const;
			void describeIpWhitelistAsync(const Model::DescribeIpWhitelistRequest& request, const DescribeIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpWhitelistOutcomeCallable describeIpWhitelistCallable(const Model::DescribeIpWhitelistRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSecurityGroupsOutcome describeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request)const;
			void describeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupsOutcomeCallable describeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagsOutcome listTags(const Model::ListTagsRequest &request)const;
			void listTagsAsync(const Model::ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsOutcomeCallable listTagsCallable(const Model::ListTagsRequest& request) const;
			ModifyClusterDeletionProtectionOutcome modifyClusterDeletionProtection(const Model::ModifyClusterDeletionProtectionRequest &request)const;
			void modifyClusterDeletionProtectionAsync(const Model::ModifyClusterDeletionProtectionRequest& request, const ModifyClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterDeletionProtectionOutcomeCallable modifyClusterDeletionProtectionCallable(const Model::ModifyClusterDeletionProtectionRequest& request) const;
			ModifyInstanceMaintainTimeOutcome modifyInstanceMaintainTime(const Model::ModifyInstanceMaintainTimeRequest &request)const;
			void modifyInstanceMaintainTimeAsync(const Model::ModifyInstanceMaintainTimeRequest& request, const ModifyInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceMaintainTimeOutcomeCallable modifyInstanceMaintainTimeCallable(const Model::ModifyInstanceMaintainTimeRequest& request) const;
			ModifyInstanceNameOutcome modifyInstanceName(const Model::ModifyInstanceNameRequest &request)const;
			void modifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceNameOutcomeCallable modifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request) const;
			ModifyIpWhitelistOutcome modifyIpWhitelist(const Model::ModifyIpWhitelistRequest &request)const;
			void modifyIpWhitelistAsync(const Model::ModifyIpWhitelistRequest& request, const ModifyIpWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpWhitelistOutcomeCallable modifyIpWhitelistCallable(const Model::ModifyIpWhitelistRequest& request) const;
			ModifySecurityGroupsOutcome modifySecurityGroups(const Model::ModifySecurityGroupsRequest &request)const;
			void modifySecurityGroupsAsync(const Model::ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityGroupsOutcomeCallable modifySecurityGroupsCallable(const Model::ModifySecurityGroupsRequest& request) const;
			ModifyUIAccountPasswordOutcome modifyUIAccountPassword(const Model::ModifyUIAccountPasswordRequest &request)const;
			void modifyUIAccountPasswordAsync(const Model::ModifyUIAccountPasswordRequest& request, const ModifyUIAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUIAccountPasswordOutcomeCallable modifyUIAccountPasswordCallable(const Model::ModifyUIAccountPasswordRequest& request) const;
			QueryHBaseHaDBOutcome queryHBaseHaDB(const Model::QueryHBaseHaDBRequest &request)const;
			void queryHBaseHaDBAsync(const Model::QueryHBaseHaDBRequest& request, const QueryHBaseHaDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryHBaseHaDBOutcomeCallable queryHBaseHaDBCallable(const Model::QueryHBaseHaDBRequest& request) const;
			QueryXpackRelateDBOutcome queryXpackRelateDB(const Model::QueryXpackRelateDBRequest &request)const;
			void queryXpackRelateDBAsync(const Model::QueryXpackRelateDBRequest& request, const QueryXpackRelateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryXpackRelateDBOutcomeCallable queryXpackRelateDBCallable(const Model::QueryXpackRelateDBRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			ResizeDiskSizeOutcome resizeDiskSize(const Model::ResizeDiskSizeRequest &request)const;
			void resizeDiskSizeAsync(const Model::ResizeDiskSizeRequest& request, const ResizeDiskSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeDiskSizeOutcomeCallable resizeDiskSizeCallable(const Model::ResizeDiskSizeRequest& request) const;
			ResizeNodeCountOutcome resizeNodeCount(const Model::ResizeNodeCountRequest &request)const;
			void resizeNodeCountAsync(const Model::ResizeNodeCountRequest& request, const ResizeNodeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeNodeCountOutcomeCallable resizeNodeCountCallable(const Model::ResizeNodeCountRequest& request) const;
			RestartInstanceOutcome restartInstance(const Model::RestartInstanceRequest &request)const;
			void restartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartInstanceOutcomeCallable restartInstanceCallable(const Model::RestartInstanceRequest& request) const;
			SwitchHbaseHaSlbOutcome switchHbaseHaSlb(const Model::SwitchHbaseHaSlbRequest &request)const;
			void switchHbaseHaSlbAsync(const Model::SwitchHbaseHaSlbRequest& request, const SwitchHbaseHaSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchHbaseHaSlbOutcomeCallable switchHbaseHaSlbCallable(const Model::SwitchHbaseHaSlbRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnTagResourcesOutcome unTagResources(const Model::UnTagResourcesRequest &request)const;
			void unTagResourcesAsync(const Model::UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnTagResourcesOutcomeCallable unTagResourcesCallable(const Model::UnTagResourcesRequest& request) const;
			XpackRelateDBOutcome xpackRelateDB(const Model::XpackRelateDBRequest &request)const;
			void xpackRelateDBAsync(const Model::XpackRelateDBRequest& request, const XpackRelateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			XpackRelateDBOutcomeCallable xpackRelateDBCallable(const Model::XpackRelateDBRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HBASE_HBASECLIENT_H_
