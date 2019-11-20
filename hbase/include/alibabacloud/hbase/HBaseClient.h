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
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteUserHdfsInfoRequest.h"
#include "model/DeleteUserHdfsInfoResult.h"
#include "model/DescribeEndpointsRequest.h"
#include "model/DescribeEndpointsResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeIpWhitelistRequest.h"
#include "model/DescribeIpWhitelistResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSecurityGroupsRequest.h"
#include "model/DescribeSecurityGroupsResult.h"
#include "model/ModifyInstanceNameRequest.h"
#include "model/ModifyInstanceNameResult.h"
#include "model/ModifyIpWhitelistRequest.h"
#include "model/ModifyIpWhitelistResult.h"
#include "model/ModifySecurityGroupsRequest.h"
#include "model/ModifySecurityGroupsResult.h"
#include "model/ModifyUIAccountPasswordRequest.h"
#include "model/ModifyUIAccountPasswordResult.h"
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
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserHdfsInfoResult> DeleteUserHdfsInfoOutcome;
			typedef std::future<DeleteUserHdfsInfoOutcome> DeleteUserHdfsInfoOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DeleteUserHdfsInfoRequest&, const DeleteUserHdfsInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserHdfsInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeEndpointsResult> DescribeEndpointsOutcome;
			typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeEndpointsRequest&, const DescribeEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const HBaseClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
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
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteUserHdfsInfoOutcome deleteUserHdfsInfo(const Model::DeleteUserHdfsInfoRequest &request)const;
			void deleteUserHdfsInfoAsync(const Model::DeleteUserHdfsInfoRequest& request, const DeleteUserHdfsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserHdfsInfoOutcomeCallable deleteUserHdfsInfoCallable(const Model::DeleteUserHdfsInfoRequest& request) const;
			DescribeEndpointsOutcome describeEndpoints(const Model::DescribeEndpointsRequest &request)const;
			void describeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEndpointsOutcomeCallable describeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
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
			XpackRelateDBOutcome xpackRelateDB(const Model::XpackRelateDBRequest &request)const;
			void xpackRelateDBAsync(const Model::XpackRelateDBRequest& request, const XpackRelateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			XpackRelateDBOutcomeCallable xpackRelateDBCallable(const Model::XpackRelateDBRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HBASE_HBASECLIENT_H_
