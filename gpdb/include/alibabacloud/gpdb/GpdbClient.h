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

#ifndef ALIBABACLOUD_GPDB_GPDBCLIENT_H_
#define ALIBABACLOUD_GPDB_GPDBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "GpdbExport.h"
#include "model/AddBuDBInstanceRelationRequest.h"
#include "model/AddBuDBInstanceRelationResult.h"
#include "model/AllocateInstancePublicConnectionRequest.h"
#include "model/AllocateInstancePublicConnectionResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateDBInstanceRequest.h"
#include "model/CreateDBInstanceResult.h"
#include "model/DeleteDBInstanceRequest.h"
#include "model/DeleteDBInstanceResult.h"
#include "model/DeleteDatabaseRequest.h"
#include "model/DeleteDatabaseResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeDBInstanceAttributeRequest.h"
#include "model/DescribeDBInstanceAttributeResult.h"
#include "model/DescribeDBInstanceIPArrayListRequest.h"
#include "model/DescribeDBInstanceIPArrayListResult.h"
#include "model/DescribeDBInstanceNetInfoRequest.h"
#include "model/DescribeDBInstanceNetInfoResult.h"
#include "model/DescribeDBInstancePerformanceRequest.h"
#include "model/DescribeDBInstancePerformanceResult.h"
#include "model/DescribeDBInstancesRequest.h"
#include "model/DescribeDBInstancesResult.h"
#include "model/DescribeRdsVSwitchsRequest.h"
#include "model/DescribeRdsVSwitchsResult.h"
#include "model/DescribeRdsVpcsRequest.h"
#include "model/DescribeRdsVpcsResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeResourceUsageRequest.h"
#include "model/DescribeResourceUsageResult.h"
#include "model/DescribeSQLCollectorPolicyRequest.h"
#include "model/DescribeSQLCollectorPolicyResult.h"
#include "model/DescribeSQLLogFilesRequest.h"
#include "model/DescribeSQLLogFilesResult.h"
#include "model/DescribeSQLLogRecordsRequest.h"
#include "model/DescribeSQLLogRecordsResult.h"
#include "model/DescribeSlowLogRecordsRequest.h"
#include "model/DescribeSlowLogRecordsResult.h"
#include "model/DescribeSpecificationRequest.h"
#include "model/DescribeSpecificationResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyDBInstanceConnectionModeRequest.h"
#include "model/ModifyDBInstanceConnectionModeResult.h"
#include "model/ModifyDBInstanceConnectionStringRequest.h"
#include "model/ModifyDBInstanceConnectionStringResult.h"
#include "model/ModifyDBInstanceDescriptionRequest.h"
#include "model/ModifyDBInstanceDescriptionResult.h"
#include "model/ModifyDBInstanceMaintainTimeRequest.h"
#include "model/ModifyDBInstanceMaintainTimeResult.h"
#include "model/ModifyDBInstanceNetworkTypeRequest.h"
#include "model/ModifyDBInstanceNetworkTypeResult.h"
#include "model/ModifySQLCollectorPolicyRequest.h"
#include "model/ModifySQLCollectorPolicyResult.h"
#include "model/ModifySecurityIpsRequest.h"
#include "model/ModifySecurityIpsResult.h"
#include "model/ReleaseInstancePublicConnectionRequest.h"
#include "model/ReleaseInstancePublicConnectionResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/RestartDBInstanceRequest.h"
#include "model/RestartDBInstanceResult.h"
#include "model/SwitchDBInstanceNetTypeRequest.h"
#include "model/SwitchDBInstanceNetTypeResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpgradeDBInstanceRequest.h"
#include "model/UpgradeDBInstanceResult.h"
#include "model/UpgradeDBVersionRequest.h"
#include "model/UpgradeDBVersionResult.h"


namespace AlibabaCloud
{
	namespace Gpdb
	{
		class ALIBABACLOUD_GPDB_EXPORT GpdbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddBuDBInstanceRelationResult> AddBuDBInstanceRelationOutcome;
			typedef std::future<AddBuDBInstanceRelationOutcome> AddBuDBInstanceRelationOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::AddBuDBInstanceRelationRequest&, const AddBuDBInstanceRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBuDBInstanceRelationAsyncHandler;
			typedef Outcome<Error, Model::AllocateInstancePublicConnectionResult> AllocateInstancePublicConnectionOutcome;
			typedef std::future<AllocateInstancePublicConnectionOutcome> AllocateInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::AllocateInstancePublicConnectionRequest&, const AllocateInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocateInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateDBInstanceResult> CreateDBInstanceOutcome;
			typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::CreateDBInstanceRequest&, const CreateDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBInstanceResult> DeleteDBInstanceOutcome;
			typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DeleteDBInstanceRequest&, const DeleteDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseResult> DeleteDatabaseOutcome;
			typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DeleteDatabaseRequest&, const DeleteDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceAttributeResult> DescribeDBInstanceAttributeOutcome;
			typedef std::future<DescribeDBInstanceAttributeOutcome> DescribeDBInstanceAttributeOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceAttributeRequest&, const DescribeDBInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceIPArrayListResult> DescribeDBInstanceIPArrayListOutcome;
			typedef std::future<DescribeDBInstanceIPArrayListOutcome> DescribeDBInstanceIPArrayListOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceIPArrayListRequest&, const DescribeDBInstanceIPArrayListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceIPArrayListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstanceNetInfoResult> DescribeDBInstanceNetInfoOutcome;
			typedef std::future<DescribeDBInstanceNetInfoOutcome> DescribeDBInstanceNetInfoOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstanceNetInfoRequest&, const DescribeDBInstanceNetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceNetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancePerformanceResult> DescribeDBInstancePerformanceOutcome;
			typedef std::future<DescribeDBInstancePerformanceOutcome> DescribeDBInstancePerformanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstancePerformanceRequest&, const DescribeDBInstancePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancePerformanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBInstancesResult> DescribeDBInstancesOutcome;
			typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeDBInstancesRequest&, const DescribeDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsVSwitchsResult> DescribeRdsVSwitchsOutcome;
			typedef std::future<DescribeRdsVSwitchsOutcome> DescribeRdsVSwitchsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeRdsVSwitchsRequest&, const DescribeRdsVSwitchsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsVSwitchsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsVpcsResult> DescribeRdsVpcsOutcome;
			typedef std::future<DescribeRdsVpcsOutcome> DescribeRdsVpcsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeRdsVpcsRequest&, const DescribeRdsVpcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsVpcsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceUsageResult> DescribeResourceUsageOutcome;
			typedef std::future<DescribeResourceUsageOutcome> DescribeResourceUsageOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeResourceUsageRequest&, const DescribeResourceUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLCollectorPolicyResult> DescribeSQLCollectorPolicyOutcome;
			typedef std::future<DescribeSQLCollectorPolicyOutcome> DescribeSQLCollectorPolicyOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeSQLCollectorPolicyRequest&, const DescribeSQLCollectorPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLCollectorPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogFilesResult> DescribeSQLLogFilesOutcome;
			typedef std::future<DescribeSQLLogFilesOutcome> DescribeSQLLogFilesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeSQLLogFilesRequest&, const DescribeSQLLogFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSQLLogRecordsResult> DescribeSQLLogRecordsOutcome;
			typedef std::future<DescribeSQLLogRecordsOutcome> DescribeSQLLogRecordsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeSQLLogRecordsRequest&, const DescribeSQLLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSQLLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowLogRecordsResult> DescribeSlowLogRecordsOutcome;
			typedef std::future<DescribeSlowLogRecordsOutcome> DescribeSlowLogRecordsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeSlowLogRecordsRequest&, const DescribeSlowLogRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSpecificationResult> DescribeSpecificationOutcome;
			typedef std::future<DescribeSpecificationOutcome> DescribeSpecificationOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeSpecificationRequest&, const DescribeSpecificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecificationAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionModeResult> ModifyDBInstanceConnectionModeOutcome;
			typedef std::future<ModifyDBInstanceConnectionModeOutcome> ModifyDBInstanceConnectionModeOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceConnectionModeRequest&, const ModifyDBInstanceConnectionModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceConnectionStringResult> ModifyDBInstanceConnectionStringOutcome;
			typedef std::future<ModifyDBInstanceConnectionStringOutcome> ModifyDBInstanceConnectionStringOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceConnectionStringRequest&, const ModifyDBInstanceConnectionStringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceConnectionStringAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceDescriptionResult> ModifyDBInstanceDescriptionOutcome;
			typedef std::future<ModifyDBInstanceDescriptionOutcome> ModifyDBInstanceDescriptionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceDescriptionRequest&, const ModifyDBInstanceDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceMaintainTimeResult> ModifyDBInstanceMaintainTimeOutcome;
			typedef std::future<ModifyDBInstanceMaintainTimeOutcome> ModifyDBInstanceMaintainTimeOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceMaintainTimeRequest&, const ModifyDBInstanceMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBInstanceNetworkTypeResult> ModifyDBInstanceNetworkTypeOutcome;
			typedef std::future<ModifyDBInstanceNetworkTypeOutcome> ModifyDBInstanceNetworkTypeOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifyDBInstanceNetworkTypeRequest&, const ModifyDBInstanceNetworkTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkTypeAsyncHandler;
			typedef Outcome<Error, Model::ModifySQLCollectorPolicyResult> ModifySQLCollectorPolicyOutcome;
			typedef std::future<ModifySQLCollectorPolicyOutcome> ModifySQLCollectorPolicyOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifySQLCollectorPolicyRequest&, const ModifySQLCollectorPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySQLCollectorPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityIpsResult> ModifySecurityIpsOutcome;
			typedef std::future<ModifySecurityIpsOutcome> ModifySecurityIpsOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ModifySecurityIpsRequest&, const ModifySecurityIpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIpsAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstancePublicConnectionResult> ReleaseInstancePublicConnectionOutcome;
			typedef std::future<ReleaseInstancePublicConnectionOutcome> ReleaseInstancePublicConnectionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ReleaseInstancePublicConnectionRequest&, const ReleaseInstancePublicConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstancePublicConnectionAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestartDBInstanceResult> RestartDBInstanceOutcome;
			typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::RestartDBInstanceRequest&, const RestartDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::SwitchDBInstanceNetTypeResult> SwitchDBInstanceNetTypeOutcome;
			typedef std::future<SwitchDBInstanceNetTypeOutcome> SwitchDBInstanceNetTypeOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::SwitchDBInstanceNetTypeRequest&, const SwitchDBInstanceNetTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceNetTypeAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBInstanceResult> UpgradeDBInstanceOutcome;
			typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::UpgradeDBInstanceRequest&, const UpgradeDBInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpgradeDBVersionResult> UpgradeDBVersionOutcome;
			typedef std::future<UpgradeDBVersionOutcome> UpgradeDBVersionOutcomeCallable;
			typedef std::function<void(const GpdbClient*, const Model::UpgradeDBVersionRequest&, const UpgradeDBVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBVersionAsyncHandler;

			GpdbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GpdbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GpdbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GpdbClient();
			AddBuDBInstanceRelationOutcome addBuDBInstanceRelation(const Model::AddBuDBInstanceRelationRequest &request)const;
			void addBuDBInstanceRelationAsync(const Model::AddBuDBInstanceRelationRequest& request, const AddBuDBInstanceRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBuDBInstanceRelationOutcomeCallable addBuDBInstanceRelationCallable(const Model::AddBuDBInstanceRelationRequest& request) const;
			AllocateInstancePublicConnectionOutcome allocateInstancePublicConnection(const Model::AllocateInstancePublicConnectionRequest &request)const;
			void allocateInstancePublicConnectionAsync(const Model::AllocateInstancePublicConnectionRequest& request, const AllocateInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocateInstancePublicConnectionOutcomeCallable allocateInstancePublicConnectionCallable(const Model::AllocateInstancePublicConnectionRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateDBInstanceOutcome createDBInstance(const Model::CreateDBInstanceRequest &request)const;
			void createDBInstanceAsync(const Model::CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBInstanceOutcomeCallable createDBInstanceCallable(const Model::CreateDBInstanceRequest& request) const;
			DeleteDBInstanceOutcome deleteDBInstance(const Model::DeleteDBInstanceRequest &request)const;
			void deleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBInstanceOutcomeCallable deleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request) const;
			DeleteDatabaseOutcome deleteDatabase(const Model::DeleteDatabaseRequest &request)const;
			void deleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabaseOutcomeCallable deleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeDBInstanceAttributeOutcome describeDBInstanceAttribute(const Model::DescribeDBInstanceAttributeRequest &request)const;
			void describeDBInstanceAttributeAsync(const Model::DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceAttributeOutcomeCallable describeDBInstanceAttributeCallable(const Model::DescribeDBInstanceAttributeRequest& request) const;
			DescribeDBInstanceIPArrayListOutcome describeDBInstanceIPArrayList(const Model::DescribeDBInstanceIPArrayListRequest &request)const;
			void describeDBInstanceIPArrayListAsync(const Model::DescribeDBInstanceIPArrayListRequest& request, const DescribeDBInstanceIPArrayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceIPArrayListOutcomeCallable describeDBInstanceIPArrayListCallable(const Model::DescribeDBInstanceIPArrayListRequest& request) const;
			DescribeDBInstanceNetInfoOutcome describeDBInstanceNetInfo(const Model::DescribeDBInstanceNetInfoRequest &request)const;
			void describeDBInstanceNetInfoAsync(const Model::DescribeDBInstanceNetInfoRequest& request, const DescribeDBInstanceNetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstanceNetInfoOutcomeCallable describeDBInstanceNetInfoCallable(const Model::DescribeDBInstanceNetInfoRequest& request) const;
			DescribeDBInstancePerformanceOutcome describeDBInstancePerformance(const Model::DescribeDBInstancePerformanceRequest &request)const;
			void describeDBInstancePerformanceAsync(const Model::DescribeDBInstancePerformanceRequest& request, const DescribeDBInstancePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancePerformanceOutcomeCallable describeDBInstancePerformanceCallable(const Model::DescribeDBInstancePerformanceRequest& request) const;
			DescribeDBInstancesOutcome describeDBInstances(const Model::DescribeDBInstancesRequest &request)const;
			void describeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBInstancesOutcomeCallable describeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request) const;
			DescribeRdsVSwitchsOutcome describeRdsVSwitchs(const Model::DescribeRdsVSwitchsRequest &request)const;
			void describeRdsVSwitchsAsync(const Model::DescribeRdsVSwitchsRequest& request, const DescribeRdsVSwitchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsVSwitchsOutcomeCallable describeRdsVSwitchsCallable(const Model::DescribeRdsVSwitchsRequest& request) const;
			DescribeRdsVpcsOutcome describeRdsVpcs(const Model::DescribeRdsVpcsRequest &request)const;
			void describeRdsVpcsAsync(const Model::DescribeRdsVpcsRequest& request, const DescribeRdsVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsVpcsOutcomeCallable describeRdsVpcsCallable(const Model::DescribeRdsVpcsRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeResourceUsageOutcome describeResourceUsage(const Model::DescribeResourceUsageRequest &request)const;
			void describeResourceUsageAsync(const Model::DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceUsageOutcomeCallable describeResourceUsageCallable(const Model::DescribeResourceUsageRequest& request) const;
			DescribeSQLCollectorPolicyOutcome describeSQLCollectorPolicy(const Model::DescribeSQLCollectorPolicyRequest &request)const;
			void describeSQLCollectorPolicyAsync(const Model::DescribeSQLCollectorPolicyRequest& request, const DescribeSQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLCollectorPolicyOutcomeCallable describeSQLCollectorPolicyCallable(const Model::DescribeSQLCollectorPolicyRequest& request) const;
			DescribeSQLLogFilesOutcome describeSQLLogFiles(const Model::DescribeSQLLogFilesRequest &request)const;
			void describeSQLLogFilesAsync(const Model::DescribeSQLLogFilesRequest& request, const DescribeSQLLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLLogFilesOutcomeCallable describeSQLLogFilesCallable(const Model::DescribeSQLLogFilesRequest& request) const;
			DescribeSQLLogRecordsOutcome describeSQLLogRecords(const Model::DescribeSQLLogRecordsRequest &request)const;
			void describeSQLLogRecordsAsync(const Model::DescribeSQLLogRecordsRequest& request, const DescribeSQLLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSQLLogRecordsOutcomeCallable describeSQLLogRecordsCallable(const Model::DescribeSQLLogRecordsRequest& request) const;
			DescribeSlowLogRecordsOutcome describeSlowLogRecords(const Model::DescribeSlowLogRecordsRequest &request)const;
			void describeSlowLogRecordsAsync(const Model::DescribeSlowLogRecordsRequest& request, const DescribeSlowLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowLogRecordsOutcomeCallable describeSlowLogRecordsCallable(const Model::DescribeSlowLogRecordsRequest& request) const;
			DescribeSpecificationOutcome describeSpecification(const Model::DescribeSpecificationRequest &request)const;
			void describeSpecificationAsync(const Model::DescribeSpecificationRequest& request, const DescribeSpecificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSpecificationOutcomeCallable describeSpecificationCallable(const Model::DescribeSpecificationRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyDBInstanceConnectionModeOutcome modifyDBInstanceConnectionMode(const Model::ModifyDBInstanceConnectionModeRequest &request)const;
			void modifyDBInstanceConnectionModeAsync(const Model::ModifyDBInstanceConnectionModeRequest& request, const ModifyDBInstanceConnectionModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConnectionModeOutcomeCallable modifyDBInstanceConnectionModeCallable(const Model::ModifyDBInstanceConnectionModeRequest& request) const;
			ModifyDBInstanceConnectionStringOutcome modifyDBInstanceConnectionString(const Model::ModifyDBInstanceConnectionStringRequest &request)const;
			void modifyDBInstanceConnectionStringAsync(const Model::ModifyDBInstanceConnectionStringRequest& request, const ModifyDBInstanceConnectionStringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceConnectionStringOutcomeCallable modifyDBInstanceConnectionStringCallable(const Model::ModifyDBInstanceConnectionStringRequest& request) const;
			ModifyDBInstanceDescriptionOutcome modifyDBInstanceDescription(const Model::ModifyDBInstanceDescriptionRequest &request)const;
			void modifyDBInstanceDescriptionAsync(const Model::ModifyDBInstanceDescriptionRequest& request, const ModifyDBInstanceDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceDescriptionOutcomeCallable modifyDBInstanceDescriptionCallable(const Model::ModifyDBInstanceDescriptionRequest& request) const;
			ModifyDBInstanceMaintainTimeOutcome modifyDBInstanceMaintainTime(const Model::ModifyDBInstanceMaintainTimeRequest &request)const;
			void modifyDBInstanceMaintainTimeAsync(const Model::ModifyDBInstanceMaintainTimeRequest& request, const ModifyDBInstanceMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceMaintainTimeOutcomeCallable modifyDBInstanceMaintainTimeCallable(const Model::ModifyDBInstanceMaintainTimeRequest& request) const;
			ModifyDBInstanceNetworkTypeOutcome modifyDBInstanceNetworkType(const Model::ModifyDBInstanceNetworkTypeRequest &request)const;
			void modifyDBInstanceNetworkTypeAsync(const Model::ModifyDBInstanceNetworkTypeRequest& request, const ModifyDBInstanceNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBInstanceNetworkTypeOutcomeCallable modifyDBInstanceNetworkTypeCallable(const Model::ModifyDBInstanceNetworkTypeRequest& request) const;
			ModifySQLCollectorPolicyOutcome modifySQLCollectorPolicy(const Model::ModifySQLCollectorPolicyRequest &request)const;
			void modifySQLCollectorPolicyAsync(const Model::ModifySQLCollectorPolicyRequest& request, const ModifySQLCollectorPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySQLCollectorPolicyOutcomeCallable modifySQLCollectorPolicyCallable(const Model::ModifySQLCollectorPolicyRequest& request) const;
			ModifySecurityIpsOutcome modifySecurityIps(const Model::ModifySecurityIpsRequest &request)const;
			void modifySecurityIpsAsync(const Model::ModifySecurityIpsRequest& request, const ModifySecurityIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityIpsOutcomeCallable modifySecurityIpsCallable(const Model::ModifySecurityIpsRequest& request) const;
			ReleaseInstancePublicConnectionOutcome releaseInstancePublicConnection(const Model::ReleaseInstancePublicConnectionRequest &request)const;
			void releaseInstancePublicConnectionAsync(const Model::ReleaseInstancePublicConnectionRequest& request, const ReleaseInstancePublicConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstancePublicConnectionOutcomeCallable releaseInstancePublicConnectionCallable(const Model::ReleaseInstancePublicConnectionRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			RestartDBInstanceOutcome restartDBInstance(const Model::RestartDBInstanceRequest &request)const;
			void restartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBInstanceOutcomeCallable restartDBInstanceCallable(const Model::RestartDBInstanceRequest& request) const;
			SwitchDBInstanceNetTypeOutcome switchDBInstanceNetType(const Model::SwitchDBInstanceNetTypeRequest &request)const;
			void switchDBInstanceNetTypeAsync(const Model::SwitchDBInstanceNetTypeRequest& request, const SwitchDBInstanceNetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchDBInstanceNetTypeOutcomeCallable switchDBInstanceNetTypeCallable(const Model::SwitchDBInstanceNetTypeRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpgradeDBInstanceOutcome upgradeDBInstance(const Model::UpgradeDBInstanceRequest &request)const;
			void upgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBInstanceOutcomeCallable upgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request) const;
			UpgradeDBVersionOutcome upgradeDBVersion(const Model::UpgradeDBVersionRequest &request)const;
			void upgradeDBVersionAsync(const Model::UpgradeDBVersionRequest& request, const UpgradeDBVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeDBVersionOutcomeCallable upgradeDBVersionCallable(const Model::UpgradeDBVersionRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GPDB_GPDBCLIENT_H_
