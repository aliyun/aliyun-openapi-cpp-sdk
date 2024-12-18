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

#ifndef ALIBABACLOUD_SELECTDB_SELECTDBCLIENT_H_
#define ALIBABACLOUD_SELECTDB_SELECTDBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SelectdbExport.h"
#include "model/AllocateInstancePublicConnectionRequest.h"
#include "model/AllocateInstancePublicConnectionResult.h"
#include "model/CheckCreateDBInstanceRequest.h"
#include "model/CheckCreateDBInstanceResult.h"
#include "model/CheckServiceLinkedRoleRequest.h"
#include "model/CheckServiceLinkedRoleResult.h"
#include "model/CreateDBClusterRequest.h"
#include "model/CreateDBClusterResult.h"
#include "model/CreateDBInstanceRequest.h"
#include "model/CreateDBInstanceResult.h"
#include "model/CreateElasticRuleRequest.h"
#include "model/CreateElasticRuleResult.h"
#include "model/CreateServiceLinkedRoleForSelectDBRequest.h"
#include "model/CreateServiceLinkedRoleForSelectDBResult.h"
#include "model/DeleteDBClusterRequest.h"
#include "model/DeleteDBClusterResult.h"
#include "model/DeleteDBInstanceRequest.h"
#include "model/DeleteDBInstanceResult.h"
#include "model/DeleteElasticRuleRequest.h"
#include "model/DeleteElasticRuleResult.h"
#include "model/DescribeAllDBInstanceClassRequest.h"
#include "model/DescribeAllDBInstanceClassResult.h"
#include "model/DescribeDBClusterConfigRequest.h"
#include "model/DescribeDBClusterConfigResult.h"
#include "model/DescribeDBClusterConfigChangeLogsRequest.h"
#include "model/DescribeDBClusterConfigChangeLogsResult.h"
#include "model/DescribeDBInstanceAttributeRequest.h"
#include "model/DescribeDBInstanceAttributeResult.h"
#include "model/DescribeDBInstanceNetInfoRequest.h"
#include "model/DescribeDBInstanceNetInfoResult.h"
#include "model/DescribeDBInstancesRequest.h"
#include "model/DescribeDBInstancesResult.h"
#include "model/DescribeElasticRulesRequest.h"
#include "model/DescribeElasticRulesResult.h"
#include "model/DescribeSecurityIPListRequest.h"
#include "model/DescribeSecurityIPListResult.h"
#include "model/EnDisableScalingRulesRequest.h"
#include "model/EnDisableScalingRulesResult.h"
#include "model/GetCreateBEClusterInquiryRequest.h"
#include "model/GetCreateBEClusterInquiryResult.h"
#include "model/GetModifyBEClusterInquiryRequest.h"
#include "model/GetModifyBEClusterInquiryResult.h"
#include "model/ModifyBEClusterAttributeRequest.h"
#include "model/ModifyBEClusterAttributeResult.h"
#include "model/ModifyDBClusterRequest.h"
#include "model/ModifyDBClusterResult.h"
#include "model/ModifyDBClusterConfigRequest.h"
#include "model/ModifyDBClusterConfigResult.h"
#include "model/ModifyDBInstanceAttributeRequest.h"
#include "model/ModifyDBInstanceAttributeResult.h"
#include "model/ModifyElasticRuleRequest.h"
#include "model/ModifyElasticRuleResult.h"
#include "model/ModifySecurityIPListRequest.h"
#include "model/ModifySecurityIPListResult.h"
#include "model/ReleaseInstancePublicConnectionRequest.h"
#include "model/ReleaseInstancePublicConnectionResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/RestartDBClusterRequest.h"
#include "model/RestartDBClusterResult.h"
#include "model/StartBEClusterRequest.h"
#include "model/StartBEClusterResult.h"
#include "model/StopBEClusterRequest.h"
#include "model/StopBEClusterResult.h"
#include "model/UpgradeDBInstanceEngineVersionRequest.h"
#include "model/UpgradeDBInstanceEngineVersionResult.h"


namespace AlibabaCloud
{
	namespace Selectdb
	{
		class ALIBABACLOUD_SELECTDB_EXPORT SelectdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllocateInstancePublicConnectionResult> AllocateInstancePublicConnectionOutcome;
			typedef std::future<AllocateInstancePublicConnectionOutcome> AllocateInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::AllocateInstancePublicConnectionRequest&, const AllocateInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::CheckCreateDBInstanceResult> CheckCreateDBInstanceOutcome;
			typedef std::future<CheckCreateDBInstanceOutcome> CheckCreateDBInstanceOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::CheckCreateDBInstanceRequest&, const CheckCreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CheckServiceLinkedRoleResult> CheckServiceLinkedRoleOutcome;
			typedef std::future<CheckServiceLinkedRoleOutcome> CheckServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::CheckServiceLinkedRoleRequest&, const CheckServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateDBClusterResult> CreateDBClusterOutcome;
			typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::CreateDBClusterRequest&, const CreateDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceResult> CreateDBInstanceOutcome;
			typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::CreateDBInstanceRequest&, const CreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateElasticRuleResult> CreateElasticRuleOutcome;
			typedef std::future<CreateElasticRuleOutcome> CreateElasticRuleOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::CreateElasticRuleRequest&, const CreateElasticRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateElasticRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleForSelectDBResult> CreateServiceLinkedRoleForSelectDBOutcome;
			typedef std::future<CreateServiceLinkedRoleForSelectDBOutcome> CreateServiceLinkedRoleForSelectDBOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::CreateServiceLinkedRoleForSelectDBRequest&, const CreateServiceLinkedRoleForSelectDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleForSelectDBAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBClusterResult> DeleteDBClusterOutcome;
			typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DeleteDBClusterRequest&, const DeleteDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstanceResult> DeleteDBInstanceOutcome;
			typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DeleteDBInstanceRequest&, const DeleteDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteElasticRuleResult> DeleteElasticRuleOutcome;
			typedef std::future<DeleteElasticRuleOutcome> DeleteElasticRuleOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DeleteElasticRuleRequest&, const DeleteElasticRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteElasticRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllDBInstanceClassResult> DescribeAllDBInstanceClassOutcome;
			typedef std::future<DescribeAllDBInstanceClassOutcome> DescribeAllDBInstanceClassOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DescribeAllDBInstanceClassRequest&, const DescribeAllDBInstanceClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllDBInstanceClassAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterConfigResult> DescribeDBClusterConfigOutcome;
			typedef std::future<DescribeDBClusterConfigOutcome> DescribeDBClusterConfigOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DescribeDBClusterConfigRequest&, const DescribeDBClusterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterConfigChangeLogsResult> DescribeDBClusterConfigChangeLogsOutcome;
			typedef std::future<DescribeDBClusterConfigChangeLogsOutcome> DescribeDBClusterConfigChangeLogsOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DescribeDBClusterConfigChangeLogsRequest&, const DescribeDBClusterConfigChangeLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterConfigChangeLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceAttributeResult> DescribeDBInstanceAttributeOutcome;
			typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DescribeDBInstanceAttributeRequest&, const DescribeDBInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetInfoResult> DescribeDBInstanceNetInfoOutcome;
			typedef std::future<DescribeDBInstanceNetInfoOutcome> DescribeDBInstanceNetInfoOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DescribeDBInstanceNetInfoRequest&, const DescribeDBInstanceNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesResult> DescribeDBInstancesOutcome;
			typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DescribeDBInstancesRequest&, const DescribeDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeElasticRulesResult> DescribeElasticRulesOutcome;
			typedef std::future<DescribeElasticRulesOutcome> DescribeElasticRulesOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DescribeElasticRulesRequest&, const DescribeElasticRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElasticRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityIPListResult> DescribeSecurityIPListOutcome;
			typedef std::future<DescribeSecurityIPListOutcome> DescribeSecurityIPListOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::DescribeSecurityIPListRequest&, const DescribeSecurityIPListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIPListAsyncHandler;
			typedef Outcome<Error, Model::EnDisableScalingRulesResult> EnDisableScalingRulesOutcome;
			typedef std::future<EnDisableScalingRulesOutcome> EnDisableScalingRulesOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::EnDisableScalingRulesRequest&, const EnDisableScalingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnDisableScalingRulesAsyncHandler;
			typedef Outcome<Error, Model::GetCreateBEClusterInquiryResult> GetCreateBEClusterInquiryOutcome;
			typedef std::future<GetCreateBEClusterInquiryOutcome> GetCreateBEClusterInquiryOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::GetCreateBEClusterInquiryRequest&, const GetCreateBEClusterInquiryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCreateBEClusterInquiryAsyncHandler;
			typedef Outcome<Error, Model::GetModifyBEClusterInquiryResult> GetModifyBEClusterInquiryOutcome;
			typedef std::future<GetModifyBEClusterInquiryOutcome> GetModifyBEClusterInquiryOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::GetModifyBEClusterInquiryRequest&, const GetModifyBEClusterInquiryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModifyBEClusterInquiryAsyncHandler;
			typedef Outcome<Error, Model::ModifyBEClusterAttributeResult> ModifyBEClusterAttributeOutcome;
			typedef std::future<ModifyBEClusterAttributeOutcome> ModifyBEClusterAttributeOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::ModifyBEClusterAttributeRequest&, const ModifyBEClusterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBEClusterAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterResult> ModifyDBClusterOutcome;
			typedef std::future<ModifyDBClusterOutcome> ModifyDBClusterOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::ModifyDBClusterRequest&, const ModifyDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterConfigResult> ModifyDBClusterConfigOutcome;
			typedef std::future<ModifyDBClusterConfigOutcome> ModifyDBClusterConfigOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::ModifyDBClusterConfigRequest&, const ModifyDBClusterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceAttributeResult> ModifyDBInstanceAttributeOutcome;
			typedef std::future<ModifyDBInstanceAttributeOutcome> ModifyDBInstanceAttributeOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::ModifyDBInstanceAttributeRequest&, const ModifyDBInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyElasticRuleResult> ModifyElasticRuleOutcome;
			typedef std::future<ModifyElasticRuleOutcome> ModifyElasticRuleOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::ModifyElasticRuleRequest&, const ModifyElasticRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyElasticRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIPListResult> ModifySecurityIPListOutcome;
			typedef std::future<ModifySecurityIPListOutcome> ModifySecurityIPListOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::ModifySecurityIPListRequest&, const ModifySecurityIPListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIPListAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstancePublicConnectionResult> ReleaseInstancePublicConnectionOutcome;
			typedef std::future<ReleaseInstancePublicConnectionOutcome> ReleaseInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::ReleaseInstancePublicConnectionRequest&, const ReleaseInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestartDBClusterResult> RestartDBClusterOutcome;
			typedef std::future<RestartDBClusterOutcome> RestartDBClusterOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::RestartDBClusterRequest&, const RestartDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBClusterAsyncHandler;
			typedef Outcome<Error, Model::StartBEClusterResult> StartBEClusterOutcome;
			typedef std::future<StartBEClusterOutcome> StartBEClusterOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::StartBEClusterRequest&, const StartBEClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBEClusterAsyncHandler;
			typedef Outcome<Error, Model::StopBEClusterResult> StopBEClusterOutcome;
			typedef std::future<StopBEClusterOutcome> StopBEClusterOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::StopBEClusterRequest&, const StopBEClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopBEClusterAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceEngineVersionResult> UpgradeDBInstanceEngineVersionOutcome;
			typedef std::future<UpgradeDBInstanceEngineVersionOutcome> UpgradeDBInstanceEngineVersionOutcomeCallable;
			typedef std::function<void(const SelectdbClient*, const Model::UpgradeDBInstanceEngineVersionRequest&, const UpgradeDBInstanceEngineVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceEngineVersionAsyncHandler;

			SelectdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SelectdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SelectdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SelectdbClient();
			AllocateInstancePublicConnectionOutcome allocateInstancePublicConnection(const Model::AllocateInstancePublicConnectionRequest &request)const;
			void allocateInstancePublicConnectionAsync(const Model::AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateInstancePublicConnectionOutcomeCallable allocateInstancePublicConnectionCallable(const Model::AllocateInstancePublicConnectionRequest& request) const;
			CheckCreateDBInstanceOutcome checkCreateDBInstance(const Model::CheckCreateDBInstanceRequest &request)const;
			void checkCreateDBInstanceAsync(const Model::CheckCreateDBInstanceRequest& request, const CheckCreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCreateDBInstanceOutcomeCallable checkCreateDBInstanceCallable(const Model::CheckCreateDBInstanceRequest& request) const;
			CheckServiceLinkedRoleOutcome checkServiceLinkedRole(const Model::CheckServiceLinkedRoleRequest &request)const;
			void checkServiceLinkedRoleAsync(const Model::CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceLinkedRoleOutcomeCallable checkServiceLinkedRoleCallable(const Model::CheckServiceLinkedRoleRequest& request) const;
			CreateDBClusterOutcome createDBCluster(const Model::CreateDBClusterRequest &request)const;
			void createDBClusterAsync(const Model::CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBClusterOutcomeCallable createDBClusterCallable(const Model::CreateDBClusterRequest& request) const;
			CreateDBInstanceOutcome createDBInstance(const Model::CreateDBInstanceRequest &request)const;
			void createDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceOutcomeCallable createDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;
			CreateElasticRuleOutcome createElasticRule(const Model::CreateElasticRuleRequest &request)const;
			void createElasticRuleAsync(const Model::CreateElasticRuleRequest& request, const CreateElasticRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateElasticRuleOutcomeCallable createElasticRuleCallable(const Model::CreateElasticRuleRequest& request) const;
			CreateServiceLinkedRoleForSelectDBOutcome createServiceLinkedRoleForSelectDB(const Model::CreateServiceLinkedRoleForSelectDBRequest &request)const;
			void createServiceLinkedRoleForSelectDBAsync(const Model::CreateServiceLinkedRoleForSelectDBRequest& request, const CreateServiceLinkedRoleForSelectDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleForSelectDBOutcomeCallable createServiceLinkedRoleForSelectDBCallable(const Model::CreateServiceLinkedRoleForSelectDBRequest& request) const;
			DeleteDBClusterOutcome deleteDBCluster(const Model::DeleteDBClusterRequest &request)const;
			void deleteDBClusterAsync(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBClusterOutcomeCallable deleteDBClusterCallable(const Model::DeleteDBClusterRequest& request) const;
			DeleteDBInstanceOutcome deleteDBInstance(const Model::DeleteDBInstanceRequest &request)const;
			void deleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstanceOutcomeCallable deleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;
			DeleteElasticRuleOutcome deleteElasticRule(const Model::DeleteElasticRuleRequest &request)const;
			void deleteElasticRuleAsync(const Model::DeleteElasticRuleRequest& request, const DeleteElasticRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteElasticRuleOutcomeCallable deleteElasticRuleCallable(const Model::DeleteElasticRuleRequest& request) const;
			DescribeAllDBInstanceClassOutcome describeAllDBInstanceClass(const Model::DescribeAllDBInstanceClassRequest &request)const;
			void describeAllDBInstanceClassAsync(const Model::DescribeAllDBInstanceClassRequest& request, const DescribeAllDBInstanceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllDBInstanceClassOutcomeCallable describeAllDBInstanceClassCallable(const Model::DescribeAllDBInstanceClassRequest& request) const;
			DescribeDBClusterConfigOutcome describeDBClusterConfig(const Model::DescribeDBClusterConfigRequest &request)const;
			void describeDBClusterConfigAsync(const Model::DescribeDBClusterConfigRequest& request, const DescribeDBClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterConfigOutcomeCallable describeDBClusterConfigCallable(const Model::DescribeDBClusterConfigRequest& request) const;
			DescribeDBClusterConfigChangeLogsOutcome describeDBClusterConfigChangeLogs(const Model::DescribeDBClusterConfigChangeLogsRequest &request)const;
			void describeDBClusterConfigChangeLogsAsync(const Model::DescribeDBClusterConfigChangeLogsRequest& request, const DescribeDBClusterConfigChangeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterConfigChangeLogsOutcomeCallable describeDBClusterConfigChangeLogsCallable(const Model::DescribeDBClusterConfigChangeLogsRequest& request) const;
			DescribeDBInstanceAttributeOutcome describeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request)const;
			void describeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceAttributeOutcomeCallable describeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request) const;
			DescribeDBInstanceNetInfoOutcome describeDBInstanceNetInfo(const Model::DescribeDBInstanceNetInfoRequest &request)const;
			void describeDBInstanceNetInfoAsync(const Model::DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceNetInfoOutcomeCallable describeDBInstanceNetInfoCallable(const Model::DescribeDBInstanceNetInfoRequest& request) const;
			DescribeDBInstancesOutcome describeDBInstances(const Model::DescribeDBInstancesRequest &request)const;
			void describeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesOutcomeCallable describeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;
			DescribeElasticRulesOutcome describeElasticRules(const Model::DescribeElasticRulesRequest &request)const;
			void describeElasticRulesAsync(const Model::DescribeElasticRulesRequest& request, const DescribeElasticRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElasticRulesOutcomeCallable describeElasticRulesCallable(const Model::DescribeElasticRulesRequest& request) const;
			DescribeSecurityIPListOutcome describeSecurityIPList(const Model::DescribeSecurityIPListRequest &request)const;
			void describeSecurityIPListAsync(const Model::DescribeSecurityIPListRequest& request, const DescribeSecurityIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityIPListOutcomeCallable describeSecurityIPListCallable(const Model::DescribeSecurityIPListRequest& request) const;
			EnDisableScalingRulesOutcome enDisableScalingRules(const Model::EnDisableScalingRulesRequest &request)const;
			void enDisableScalingRulesAsync(const Model::EnDisableScalingRulesRequest& request, const EnDisableScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnDisableScalingRulesOutcomeCallable enDisableScalingRulesCallable(const Model::EnDisableScalingRulesRequest& request) const;
			GetCreateBEClusterInquiryOutcome getCreateBEClusterInquiry(const Model::GetCreateBEClusterInquiryRequest &request)const;
			void getCreateBEClusterInquiryAsync(const Model::GetCreateBEClusterInquiryRequest& request, const GetCreateBEClusterInquiryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCreateBEClusterInquiryOutcomeCallable getCreateBEClusterInquiryCallable(const Model::GetCreateBEClusterInquiryRequest& request) const;
			GetModifyBEClusterInquiryOutcome getModifyBEClusterInquiry(const Model::GetModifyBEClusterInquiryRequest &request)const;
			void getModifyBEClusterInquiryAsync(const Model::GetModifyBEClusterInquiryRequest& request, const GetModifyBEClusterInquiryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModifyBEClusterInquiryOutcomeCallable getModifyBEClusterInquiryCallable(const Model::GetModifyBEClusterInquiryRequest& request) const;
			ModifyBEClusterAttributeOutcome modifyBEClusterAttribute(const Model::ModifyBEClusterAttributeRequest &request)const;
			void modifyBEClusterAttributeAsync(const Model::ModifyBEClusterAttributeRequest& request, const ModifyBEClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBEClusterAttributeOutcomeCallable modifyBEClusterAttributeCallable(const Model::ModifyBEClusterAttributeRequest& request) const;
			ModifyDBClusterOutcome modifyDBCluster(const Model::ModifyDBClusterRequest &request)const;
			void modifyDBClusterAsync(const Model::ModifyDBClusterRequest& request, const ModifyDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterOutcomeCallable modifyDBClusterCallable(const Model::ModifyDBClusterRequest& request) const;
			ModifyDBClusterConfigOutcome modifyDBClusterConfig(const Model::ModifyDBClusterConfigRequest &request)const;
			void modifyDBClusterConfigAsync(const Model::ModifyDBClusterConfigRequest& request, const ModifyDBClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterConfigOutcomeCallable modifyDBClusterConfigCallable(const Model::ModifyDBClusterConfigRequest& request) const;
			ModifyDBInstanceAttributeOutcome modifyDBInstanceAttribute(const Model::ModifyDBInstanceAttributeRequest &request)const;
			void modifyDBInstanceAttributeAsync(const Model::ModifyDBInstanceAttributeRequest& request, const ModifyDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceAttributeOutcomeCallable modifyDBInstanceAttributeCallable(const Model::ModifyDBInstanceAttributeRequest& request) const;
			ModifyElasticRuleOutcome modifyElasticRule(const Model::ModifyElasticRuleRequest &request)const;
			void modifyElasticRuleAsync(const Model::ModifyElasticRuleRequest& request, const ModifyElasticRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyElasticRuleOutcomeCallable modifyElasticRuleCallable(const Model::ModifyElasticRuleRequest& request) const;
			ModifySecurityIPListOutcome modifySecurityIPList(const Model::ModifySecurityIPListRequest &request)const;
			void modifySecurityIPListAsync(const Model::ModifySecurityIPListRequest& request, const ModifySecurityIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityIPListOutcomeCallable modifySecurityIPListCallable(const Model::ModifySecurityIPListRequest& request) const;
			ReleaseInstancePublicConnectionOutcome releaseInstancePublicConnection(const Model::ReleaseInstancePublicConnectionRequest &request)const;
			void releaseInstancePublicConnectionAsync(const Model::ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstancePublicConnectionOutcomeCallable releaseInstancePublicConnectionCallable(const Model::ReleaseInstancePublicConnectionRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			RestartDBClusterOutcome restartDBCluster(const Model::RestartDBClusterRequest &request)const;
			void restartDBClusterAsync(const Model::RestartDBClusterRequest& request, const RestartDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBClusterOutcomeCallable restartDBClusterCallable(const Model::RestartDBClusterRequest& request) const;
			StartBEClusterOutcome startBECluster(const Model::StartBEClusterRequest &request)const;
			void startBEClusterAsync(const Model::StartBEClusterRequest& request, const StartBEClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBEClusterOutcomeCallable startBEClusterCallable(const Model::StartBEClusterRequest& request) const;
			StopBEClusterOutcome stopBECluster(const Model::StopBEClusterRequest &request)const;
			void stopBEClusterAsync(const Model::StopBEClusterRequest& request, const StopBEClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopBEClusterOutcomeCallable stopBEClusterCallable(const Model::StopBEClusterRequest& request) const;
			UpgradeDBInstanceEngineVersionOutcome upgradeDBInstanceEngineVersion(const Model::UpgradeDBInstanceEngineVersionRequest &request)const;
			void upgradeDBInstanceEngineVersionAsync(const Model::UpgradeDBInstanceEngineVersionRequest& request, const UpgradeDBInstanceEngineVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceEngineVersionOutcomeCallable upgradeDBInstanceEngineVersionCallable(const Model::UpgradeDBInstanceEngineVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SELECTDB_SELECTDBCLIENT_H_
