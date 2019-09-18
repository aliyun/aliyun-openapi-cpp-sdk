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

#ifndef ALIBABACLOUD_POLARDB_POLARDBCLIENT_H_
#define ALIBABACLOUD_POLARDB_POLARDBCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "PolardbExport.h"
#include "model/AbortDBClusterMigrationRequest.h"
#include "model/AbortDBClusterMigrationResult.h"
#include "model/CloseDBClusterMigrationRequest.h"
#include "model/CloseDBClusterMigrationResult.h"
#include "model/ContinueDBClusterMigrationRequest.h"
#include "model/ContinueDBClusterMigrationResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateBackupRequest.h"
#include "model/CreateBackupResult.h"
#include "model/CreateDBClusterRequest.h"
#include "model/CreateDBClusterResult.h"
#include "model/CreateDBClusterEndpointRequest.h"
#include "model/CreateDBClusterEndpointResult.h"
#include "model/CreateDBEndpointAddressRequest.h"
#include "model/CreateDBEndpointAddressResult.h"
#include "model/CreateDBNodesRequest.h"
#include "model/CreateDBNodesResult.h"
#include "model/CreateDatabaseRequest.h"
#include "model/CreateDatabaseResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteBackupRequest.h"
#include "model/DeleteBackupResult.h"
#include "model/DeleteDBClusterRequest.h"
#include "model/DeleteDBClusterResult.h"
#include "model/DeleteDBClusterEndpointRequest.h"
#include "model/DeleteDBClusterEndpointResult.h"
#include "model/DeleteDBEndpointAddressRequest.h"
#include "model/DeleteDBEndpointAddressResult.h"
#include "model/DeleteDBNodesRequest.h"
#include "model/DeleteDBNodesResult.h"
#include "model/DeleteDatabaseRequest.h"
#include "model/DeleteDatabaseResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeAutoRenewAttributeRequest.h"
#include "model/DescribeAutoRenewAttributeResult.h"
#include "model/DescribeBackupPolicyRequest.h"
#include "model/DescribeBackupPolicyResult.h"
#include "model/DescribeBackupsRequest.h"
#include "model/DescribeBackupsResult.h"
#include "model/DescribeDBClusterAccessWhitelistRequest.h"
#include "model/DescribeDBClusterAccessWhitelistResult.h"
#include "model/DescribeDBClusterAttributeRequest.h"
#include "model/DescribeDBClusterAttributeResult.h"
#include "model/DescribeDBClusterEndpointsRequest.h"
#include "model/DescribeDBClusterEndpointsResult.h"
#include "model/DescribeDBClusterMigrationRequest.h"
#include "model/DescribeDBClusterMigrationResult.h"
#include "model/DescribeDBClusterParametersRequest.h"
#include "model/DescribeDBClusterParametersResult.h"
#include "model/DescribeDBClustersRequest.h"
#include "model/DescribeDBClustersResult.h"
#include "model/DescribeDatabasesRequest.h"
#include "model/DescribeDatabasesResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GrantAccountPrivilegeRequest.h"
#include "model/GrantAccountPrivilegeResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/LockDBClusterDeletionRequest.h"
#include "model/LockDBClusterDeletionResult.h"
#include "model/ModifyAccountDescriptionRequest.h"
#include "model/ModifyAccountDescriptionResult.h"
#include "model/ModifyAccountPasswordRequest.h"
#include "model/ModifyAccountPasswordResult.h"
#include "model/ModifyAutoRenewAttributeRequest.h"
#include "model/ModifyAutoRenewAttributeResult.h"
#include "model/ModifyBackupPolicyRequest.h"
#include "model/ModifyBackupPolicyResult.h"
#include "model/ModifyDBClusterAccessWhitelistRequest.h"
#include "model/ModifyDBClusterAccessWhitelistResult.h"
#include "model/ModifyDBClusterDescriptionRequest.h"
#include "model/ModifyDBClusterDescriptionResult.h"
#include "model/ModifyDBClusterEndpointRequest.h"
#include "model/ModifyDBClusterEndpointResult.h"
#include "model/ModifyDBClusterMaintainTimeRequest.h"
#include "model/ModifyDBClusterMaintainTimeResult.h"
#include "model/ModifyDBClusterMigrationRequest.h"
#include "model/ModifyDBClusterMigrationResult.h"
#include "model/ModifyDBClusterParametersRequest.h"
#include "model/ModifyDBClusterParametersResult.h"
#include "model/ModifyDBDescriptionRequest.h"
#include "model/ModifyDBDescriptionResult.h"
#include "model/ModifyDBEndpointAddressRequest.h"
#include "model/ModifyDBEndpointAddressResult.h"
#include "model/ModifyDBNodeClassRequest.h"
#include "model/ModifyDBNodeClassResult.h"
#include "model/ResetAccountRequest.h"
#include "model/ResetAccountResult.h"
#include "model/RestartDBNodeRequest.h"
#include "model/RestartDBNodeResult.h"
#include "model/RevokeAccountPrivilegeRequest.h"
#include "model/RevokeAccountPrivilegeResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnlockDBClusterDeletionRequest.h"
#include "model/UnlockDBClusterDeletionResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Polardb
	{
		class ALIBABACLOUD_POLARDB_EXPORT PolardbClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbortDBClusterMigrationResult> AbortDBClusterMigrationOutcome;
			typedef std::future<AbortDBClusterMigrationOutcome> AbortDBClusterMigrationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::AbortDBClusterMigrationRequest&, const AbortDBClusterMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbortDBClusterMigrationAsyncHandler;
			typedef Outcome<Error, Model::CloseDBClusterMigrationResult> CloseDBClusterMigrationOutcome;
			typedef std::future<CloseDBClusterMigrationOutcome> CloseDBClusterMigrationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CloseDBClusterMigrationRequest&, const CloseDBClusterMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBClusterMigrationAsyncHandler;
			typedef Outcome<Error, Model::ContinueDBClusterMigrationResult> ContinueDBClusterMigrationOutcome;
			typedef std::future<ContinueDBClusterMigrationOutcome> ContinueDBClusterMigrationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ContinueDBClusterMigrationRequest&, const ContinueDBClusterMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContinueDBClusterMigrationAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupResult> CreateBackupOutcome;
			typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateBackupRequest&, const CreateBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
			typedef Outcome<Error, Model::CreateDBClusterResult> CreateDBClusterOutcome;
			typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDBClusterRequest&, const CreateDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateDBClusterEndpointResult> CreateDBClusterEndpointOutcome;
			typedef std::future<CreateDBClusterEndpointOutcome> CreateDBClusterEndpointOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDBClusterEndpointRequest&, const CreateDBClusterEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBClusterEndpointAsyncHandler;
			typedef Outcome<Error, Model::CreateDBEndpointAddressResult> CreateDBEndpointAddressOutcome;
			typedef std::future<CreateDBEndpointAddressOutcome> CreateDBEndpointAddressOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDBEndpointAddressRequest&, const CreateDBEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateDBNodesResult> CreateDBNodesOutcome;
			typedef std::future<CreateDBNodesOutcome> CreateDBNodesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDBNodesRequest&, const CreateDBNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBNodesAsyncHandler;
			typedef Outcome<Error, Model::CreateDatabaseResult> CreateDatabaseOutcome;
			typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::CreateDatabaseRequest&, const CreateDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackupResult> DeleteBackupOutcome;
			typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteBackupRequest&, const DeleteBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBClusterResult> DeleteDBClusterOutcome;
			typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDBClusterRequest&, const DeleteDBClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBClusterEndpointResult> DeleteDBClusterEndpointOutcome;
			typedef std::future<DeleteDBClusterEndpointOutcome> DeleteDBClusterEndpointOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDBClusterEndpointRequest&, const DeleteDBClusterEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBClusterEndpointAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBEndpointAddressResult> DeleteDBEndpointAddressOutcome;
			typedef std::future<DeleteDBEndpointAddressOutcome> DeleteDBEndpointAddressOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDBEndpointAddressRequest&, const DeleteDBEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::DeleteDBNodesResult> DeleteDBNodesOutcome;
			typedef std::future<DeleteDBNodesOutcome> DeleteDBNodesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDBNodesRequest&, const DeleteDBNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBNodesAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseResult> DeleteDatabaseOutcome;
			typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DeleteDatabaseRequest&, const DeleteDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoRenewAttributeResult> DescribeAutoRenewAttributeOutcome;
			typedef std::future<DescribeAutoRenewAttributeOutcome> DescribeAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeAutoRenewAttributeRequest&, const DescribeAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPolicyResult> DescribeBackupPolicyOutcome;
			typedef std::future<DescribeBackupPolicyOutcome> DescribeBackupPolicyOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeBackupPolicyRequest&, const DescribeBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupsResult> DescribeBackupsOutcome;
			typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeBackupsRequest&, const DescribeBackupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAccessWhitelistResult> DescribeDBClusterAccessWhitelistOutcome;
			typedef std::future<DescribeDBClusterAccessWhitelistOutcome> DescribeDBClusterAccessWhitelistOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterAccessWhitelistRequest&, const DescribeDBClusterAccessWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAccessWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterAttributeResult> DescribeDBClusterAttributeOutcome;
			typedef std::future<DescribeDBClusterAttributeOutcome> DescribeDBClusterAttributeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterAttributeRequest&, const DescribeDBClusterAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterEndpointsResult> DescribeDBClusterEndpointsOutcome;
			typedef std::future<DescribeDBClusterEndpointsOutcome> DescribeDBClusterEndpointsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterEndpointsRequest&, const DescribeDBClusterEndpointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterEndpointsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterMigrationResult> DescribeDBClusterMigrationOutcome;
			typedef std::future<DescribeDBClusterMigrationOutcome> DescribeDBClusterMigrationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterMigrationRequest&, const DescribeDBClusterMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterMigrationAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClusterParametersResult> DescribeDBClusterParametersOutcome;
			typedef std::future<DescribeDBClusterParametersOutcome> DescribeDBClusterParametersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClusterParametersRequest&, const DescribeDBClusterParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClusterParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDBClustersResult> DescribeDBClustersOutcome;
			typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDBClustersRequest&, const DescribeDBClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBClustersAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabasesResult> DescribeDatabasesOutcome;
			typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeDatabasesRequest&, const DescribeDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GrantAccountPrivilegeResult> GrantAccountPrivilegeOutcome;
			typedef std::future<GrantAccountPrivilegeOutcome> GrantAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::GrantAccountPrivilegeRequest&, const GrantAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::LockDBClusterDeletionResult> LockDBClusterDeletionOutcome;
			typedef std::future<LockDBClusterDeletionOutcome> LockDBClusterDeletionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::LockDBClusterDeletionRequest&, const LockDBClusterDeletionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LockDBClusterDeletionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountDescriptionResult> ModifyAccountDescriptionOutcome;
			typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyAccountDescriptionRequest&, const ModifyAccountDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccountPasswordResult> ModifyAccountPasswordOutcome;
			typedef std::future<ModifyAccountPasswordOutcome> ModifyAccountPasswordOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyAccountPasswordRequest&, const ModifyAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoRenewAttributeResult> ModifyAutoRenewAttributeOutcome;
			typedef std::future<ModifyAutoRenewAttributeOutcome> ModifyAutoRenewAttributeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyAutoRenewAttributeRequest&, const ModifyAutoRenewAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPolicyResult> ModifyBackupPolicyOutcome;
			typedef std::future<ModifyBackupPolicyOutcome> ModifyBackupPolicyOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyBackupPolicyRequest&, const ModifyBackupPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterAccessWhitelistResult> ModifyDBClusterAccessWhitelistOutcome;
			typedef std::future<ModifyDBClusterAccessWhitelistOutcome> ModifyDBClusterAccessWhitelistOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterAccessWhitelistRequest&, const ModifyDBClusterAccessWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterAccessWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterDescriptionResult> ModifyDBClusterDescriptionOutcome;
			typedef std::future<ModifyDBClusterDescriptionOutcome> ModifyDBClusterDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterDescriptionRequest&, const ModifyDBClusterDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterEndpointResult> ModifyDBClusterEndpointOutcome;
			typedef std::future<ModifyDBClusterEndpointOutcome> ModifyDBClusterEndpointOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterEndpointRequest&, const ModifyDBClusterEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterEndpointAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterMaintainTimeResult> ModifyDBClusterMaintainTimeOutcome;
			typedef std::future<ModifyDBClusterMaintainTimeOutcome> ModifyDBClusterMaintainTimeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterMaintainTimeRequest&, const ModifyDBClusterMaintainTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterMaintainTimeAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterMigrationResult> ModifyDBClusterMigrationOutcome;
			typedef std::future<ModifyDBClusterMigrationOutcome> ModifyDBClusterMigrationOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterMigrationRequest&, const ModifyDBClusterMigrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterMigrationAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBClusterParametersResult> ModifyDBClusterParametersOutcome;
			typedef std::future<ModifyDBClusterParametersOutcome> ModifyDBClusterParametersOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBClusterParametersRequest&, const ModifyDBClusterParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBClusterParametersAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBDescriptionResult> ModifyDBDescriptionOutcome;
			typedef std::future<ModifyDBDescriptionOutcome> ModifyDBDescriptionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBDescriptionRequest&, const ModifyDBDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBDescriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBEndpointAddressResult> ModifyDBEndpointAddressOutcome;
			typedef std::future<ModifyDBEndpointAddressOutcome> ModifyDBEndpointAddressOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBEndpointAddressRequest&, const ModifyDBEndpointAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBEndpointAddressAsyncHandler;
			typedef Outcome<Error, Model::ModifyDBNodeClassResult> ModifyDBNodeClassOutcome;
			typedef std::future<ModifyDBNodeClassOutcome> ModifyDBNodeClassOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ModifyDBNodeClassRequest&, const ModifyDBNodeClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNodeClassAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountResult> ResetAccountOutcome;
			typedef std::future<ResetAccountOutcome> ResetAccountOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::ResetAccountRequest&, const ResetAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountAsyncHandler;
			typedef Outcome<Error, Model::RestartDBNodeResult> RestartDBNodeOutcome;
			typedef std::future<RestartDBNodeOutcome> RestartDBNodeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::RestartDBNodeRequest&, const RestartDBNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBNodeAsyncHandler;
			typedef Outcome<Error, Model::RevokeAccountPrivilegeResult> RevokeAccountPrivilegeOutcome;
			typedef std::future<RevokeAccountPrivilegeOutcome> RevokeAccountPrivilegeOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::RevokeAccountPrivilegeRequest&, const RevokeAccountPrivilegeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeAccountPrivilegeAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnlockDBClusterDeletionResult> UnlockDBClusterDeletionOutcome;
			typedef std::future<UnlockDBClusterDeletionOutcome> UnlockDBClusterDeletionOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::UnlockDBClusterDeletionRequest&, const UnlockDBClusterDeletionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockDBClusterDeletionAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const PolardbClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			PolardbClient(const Credentials &credentials, const ClientConfiguration &configuration);
			PolardbClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			PolardbClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~PolardbClient();
			AbortDBClusterMigrationOutcome abortDBClusterMigration(const Model::AbortDBClusterMigrationRequest &request)const;
			void abortDBClusterMigrationAsync(const Model::AbortDBClusterMigrationRequest& request, const AbortDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbortDBClusterMigrationOutcomeCallable abortDBClusterMigrationCallable(const Model::AbortDBClusterMigrationRequest& request) const;
			CloseDBClusterMigrationOutcome closeDBClusterMigration(const Model::CloseDBClusterMigrationRequest &request)const;
			void closeDBClusterMigrationAsync(const Model::CloseDBClusterMigrationRequest& request, const CloseDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseDBClusterMigrationOutcomeCallable closeDBClusterMigrationCallable(const Model::CloseDBClusterMigrationRequest& request) const;
			ContinueDBClusterMigrationOutcome continueDBClusterMigration(const Model::ContinueDBClusterMigrationRequest &request)const;
			void continueDBClusterMigrationAsync(const Model::ContinueDBClusterMigrationRequest& request, const ContinueDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContinueDBClusterMigrationOutcomeCallable continueDBClusterMigrationCallable(const Model::ContinueDBClusterMigrationRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateBackupOutcome createBackup(const Model::CreateBackupRequest &request)const;
			void createBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupOutcomeCallable createBackupCallable(const Model::CreateBackupRequest& request) const;
			CreateDBClusterOutcome createDBCluster(const Model::CreateDBClusterRequest &request)const;
			void createDBClusterAsync(const Model::CreateDBClusterRequest& request, const CreateDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBClusterOutcomeCallable createDBClusterCallable(const Model::CreateDBClusterRequest& request) const;
			CreateDBClusterEndpointOutcome createDBClusterEndpoint(const Model::CreateDBClusterEndpointRequest &request)const;
			void createDBClusterEndpointAsync(const Model::CreateDBClusterEndpointRequest& request, const CreateDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBClusterEndpointOutcomeCallable createDBClusterEndpointCallable(const Model::CreateDBClusterEndpointRequest& request) const;
			CreateDBEndpointAddressOutcome createDBEndpointAddress(const Model::CreateDBEndpointAddressRequest &request)const;
			void createDBEndpointAddressAsync(const Model::CreateDBEndpointAddressRequest& request, const CreateDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBEndpointAddressOutcomeCallable createDBEndpointAddressCallable(const Model::CreateDBEndpointAddressRequest& request) const;
			CreateDBNodesOutcome createDBNodes(const Model::CreateDBNodesRequest &request)const;
			void createDBNodesAsync(const Model::CreateDBNodesRequest& request, const CreateDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDBNodesOutcomeCallable createDBNodesCallable(const Model::CreateDBNodesRequest& request) const;
			CreateDatabaseOutcome createDatabase(const Model::CreateDatabaseRequest &request)const;
			void createDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatabaseOutcomeCallable createDatabaseCallable(const Model::CreateDatabaseRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteBackupOutcome deleteBackup(const Model::DeleteBackupRequest &request)const;
			void deleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackupOutcomeCallable deleteBackupCallable(const Model::DeleteBackupRequest& request) const;
			DeleteDBClusterOutcome deleteDBCluster(const Model::DeleteDBClusterRequest &request)const;
			void deleteDBClusterAsync(const Model::DeleteDBClusterRequest& request, const DeleteDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBClusterOutcomeCallable deleteDBClusterCallable(const Model::DeleteDBClusterRequest& request) const;
			DeleteDBClusterEndpointOutcome deleteDBClusterEndpoint(const Model::DeleteDBClusterEndpointRequest &request)const;
			void deleteDBClusterEndpointAsync(const Model::DeleteDBClusterEndpointRequest& request, const DeleteDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBClusterEndpointOutcomeCallable deleteDBClusterEndpointCallable(const Model::DeleteDBClusterEndpointRequest& request) const;
			DeleteDBEndpointAddressOutcome deleteDBEndpointAddress(const Model::DeleteDBEndpointAddressRequest &request)const;
			void deleteDBEndpointAddressAsync(const Model::DeleteDBEndpointAddressRequest& request, const DeleteDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBEndpointAddressOutcomeCallable deleteDBEndpointAddressCallable(const Model::DeleteDBEndpointAddressRequest& request) const;
			DeleteDBNodesOutcome deleteDBNodes(const Model::DeleteDBNodesRequest &request)const;
			void deleteDBNodesAsync(const Model::DeleteDBNodesRequest& request, const DeleteDBNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDBNodesOutcomeCallable deleteDBNodesCallable(const Model::DeleteDBNodesRequest& request) const;
			DeleteDatabaseOutcome deleteDatabase(const Model::DeleteDatabaseRequest &request)const;
			void deleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabaseOutcomeCallable deleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeAutoRenewAttributeOutcome describeAutoRenewAttribute(const Model::DescribeAutoRenewAttributeRequest &request)const;
			void describeAutoRenewAttributeAsync(const Model::DescribeAutoRenewAttributeRequest& request, const DescribeAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoRenewAttributeOutcomeCallable describeAutoRenewAttributeCallable(const Model::DescribeAutoRenewAttributeRequest& request) const;
			DescribeBackupPolicyOutcome describeBackupPolicy(const Model::DescribeBackupPolicyRequest &request)const;
			void describeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPolicyOutcomeCallable describeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;
			DescribeBackupsOutcome describeBackups(const Model::DescribeBackupsRequest &request)const;
			void describeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupsOutcomeCallable describeBackupsCallable(const Model::DescribeBackupsRequest& request) const;
			DescribeDBClusterAccessWhitelistOutcome describeDBClusterAccessWhitelist(const Model::DescribeDBClusterAccessWhitelistRequest &request)const;
			void describeDBClusterAccessWhitelistAsync(const Model::DescribeDBClusterAccessWhitelistRequest& request, const DescribeDBClusterAccessWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAccessWhitelistOutcomeCallable describeDBClusterAccessWhitelistCallable(const Model::DescribeDBClusterAccessWhitelistRequest& request) const;
			DescribeDBClusterAttributeOutcome describeDBClusterAttribute(const Model::DescribeDBClusterAttributeRequest &request)const;
			void describeDBClusterAttributeAsync(const Model::DescribeDBClusterAttributeRequest& request, const DescribeDBClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterAttributeOutcomeCallable describeDBClusterAttributeCallable(const Model::DescribeDBClusterAttributeRequest& request) const;
			DescribeDBClusterEndpointsOutcome describeDBClusterEndpoints(const Model::DescribeDBClusterEndpointsRequest &request)const;
			void describeDBClusterEndpointsAsync(const Model::DescribeDBClusterEndpointsRequest& request, const DescribeDBClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterEndpointsOutcomeCallable describeDBClusterEndpointsCallable(const Model::DescribeDBClusterEndpointsRequest& request) const;
			DescribeDBClusterMigrationOutcome describeDBClusterMigration(const Model::DescribeDBClusterMigrationRequest &request)const;
			void describeDBClusterMigrationAsync(const Model::DescribeDBClusterMigrationRequest& request, const DescribeDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterMigrationOutcomeCallable describeDBClusterMigrationCallable(const Model::DescribeDBClusterMigrationRequest& request) const;
			DescribeDBClusterParametersOutcome describeDBClusterParameters(const Model::DescribeDBClusterParametersRequest &request)const;
			void describeDBClusterParametersAsync(const Model::DescribeDBClusterParametersRequest& request, const DescribeDBClusterParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClusterParametersOutcomeCallable describeDBClusterParametersCallable(const Model::DescribeDBClusterParametersRequest& request) const;
			DescribeDBClustersOutcome describeDBClusters(const Model::DescribeDBClustersRequest &request)const;
			void describeDBClustersAsync(const Model::DescribeDBClustersRequest& request, const DescribeDBClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDBClustersOutcomeCallable describeDBClustersCallable(const Model::DescribeDBClustersRequest& request) const;
			DescribeDatabasesOutcome describeDatabases(const Model::DescribeDatabasesRequest &request)const;
			void describeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabasesOutcomeCallable describeDatabasesCallable(const Model::DescribeDatabasesRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GrantAccountPrivilegeOutcome grantAccountPrivilege(const Model::GrantAccountPrivilegeRequest &request)const;
			void grantAccountPrivilegeAsync(const Model::GrantAccountPrivilegeRequest& request, const GrantAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantAccountPrivilegeOutcomeCallable grantAccountPrivilegeCallable(const Model::GrantAccountPrivilegeRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			LockDBClusterDeletionOutcome lockDBClusterDeletion(const Model::LockDBClusterDeletionRequest &request)const;
			void lockDBClusterDeletionAsync(const Model::LockDBClusterDeletionRequest& request, const LockDBClusterDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LockDBClusterDeletionOutcomeCallable lockDBClusterDeletionCallable(const Model::LockDBClusterDeletionRequest& request) const;
			ModifyAccountDescriptionOutcome modifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request)const;
			void modifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountDescriptionOutcomeCallable modifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request) const;
			ModifyAccountPasswordOutcome modifyAccountPassword(const Model::ModifyAccountPasswordRequest &request)const;
			void modifyAccountPasswordAsync(const Model::ModifyAccountPasswordRequest& request, const ModifyAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccountPasswordOutcomeCallable modifyAccountPasswordCallable(const Model::ModifyAccountPasswordRequest& request) const;
			ModifyAutoRenewAttributeOutcome modifyAutoRenewAttribute(const Model::ModifyAutoRenewAttributeRequest &request)const;
			void modifyAutoRenewAttributeAsync(const Model::ModifyAutoRenewAttributeRequest& request, const ModifyAutoRenewAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoRenewAttributeOutcomeCallable modifyAutoRenewAttributeCallable(const Model::ModifyAutoRenewAttributeRequest& request) const;
			ModifyBackupPolicyOutcome modifyBackupPolicy(const Model::ModifyBackupPolicyRequest &request)const;
			void modifyBackupPolicyAsync(const Model::ModifyBackupPolicyRequest& request, const ModifyBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPolicyOutcomeCallable modifyBackupPolicyCallable(const Model::ModifyBackupPolicyRequest& request) const;
			ModifyDBClusterAccessWhitelistOutcome modifyDBClusterAccessWhitelist(const Model::ModifyDBClusterAccessWhitelistRequest &request)const;
			void modifyDBClusterAccessWhitelistAsync(const Model::ModifyDBClusterAccessWhitelistRequest& request, const ModifyDBClusterAccessWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterAccessWhitelistOutcomeCallable modifyDBClusterAccessWhitelistCallable(const Model::ModifyDBClusterAccessWhitelistRequest& request) const;
			ModifyDBClusterDescriptionOutcome modifyDBClusterDescription(const Model::ModifyDBClusterDescriptionRequest &request)const;
			void modifyDBClusterDescriptionAsync(const Model::ModifyDBClusterDescriptionRequest& request, const ModifyDBClusterDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterDescriptionOutcomeCallable modifyDBClusterDescriptionCallable(const Model::ModifyDBClusterDescriptionRequest& request) const;
			ModifyDBClusterEndpointOutcome modifyDBClusterEndpoint(const Model::ModifyDBClusterEndpointRequest &request)const;
			void modifyDBClusterEndpointAsync(const Model::ModifyDBClusterEndpointRequest& request, const ModifyDBClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterEndpointOutcomeCallable modifyDBClusterEndpointCallable(const Model::ModifyDBClusterEndpointRequest& request) const;
			ModifyDBClusterMaintainTimeOutcome modifyDBClusterMaintainTime(const Model::ModifyDBClusterMaintainTimeRequest &request)const;
			void modifyDBClusterMaintainTimeAsync(const Model::ModifyDBClusterMaintainTimeRequest& request, const ModifyDBClusterMaintainTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterMaintainTimeOutcomeCallable modifyDBClusterMaintainTimeCallable(const Model::ModifyDBClusterMaintainTimeRequest& request) const;
			ModifyDBClusterMigrationOutcome modifyDBClusterMigration(const Model::ModifyDBClusterMigrationRequest &request)const;
			void modifyDBClusterMigrationAsync(const Model::ModifyDBClusterMigrationRequest& request, const ModifyDBClusterMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterMigrationOutcomeCallable modifyDBClusterMigrationCallable(const Model::ModifyDBClusterMigrationRequest& request) const;
			ModifyDBClusterParametersOutcome modifyDBClusterParameters(const Model::ModifyDBClusterParametersRequest &request)const;
			void modifyDBClusterParametersAsync(const Model::ModifyDBClusterParametersRequest& request, const ModifyDBClusterParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBClusterParametersOutcomeCallable modifyDBClusterParametersCallable(const Model::ModifyDBClusterParametersRequest& request) const;
			ModifyDBDescriptionOutcome modifyDBDescription(const Model::ModifyDBDescriptionRequest &request)const;
			void modifyDBDescriptionAsync(const Model::ModifyDBDescriptionRequest& request, const ModifyDBDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBDescriptionOutcomeCallable modifyDBDescriptionCallable(const Model::ModifyDBDescriptionRequest& request) const;
			ModifyDBEndpointAddressOutcome modifyDBEndpointAddress(const Model::ModifyDBEndpointAddressRequest &request)const;
			void modifyDBEndpointAddressAsync(const Model::ModifyDBEndpointAddressRequest& request, const ModifyDBEndpointAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBEndpointAddressOutcomeCallable modifyDBEndpointAddressCallable(const Model::ModifyDBEndpointAddressRequest& request) const;
			ModifyDBNodeClassOutcome modifyDBNodeClass(const Model::ModifyDBNodeClassRequest &request)const;
			void modifyDBNodeClassAsync(const Model::ModifyDBNodeClassRequest& request, const ModifyDBNodeClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDBNodeClassOutcomeCallable modifyDBNodeClassCallable(const Model::ModifyDBNodeClassRequest& request) const;
			ResetAccountOutcome resetAccount(const Model::ResetAccountRequest &request)const;
			void resetAccountAsync(const Model::ResetAccountRequest& request, const ResetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountOutcomeCallable resetAccountCallable(const Model::ResetAccountRequest& request) const;
			RestartDBNodeOutcome restartDBNode(const Model::RestartDBNodeRequest &request)const;
			void restartDBNodeAsync(const Model::RestartDBNodeRequest& request, const RestartDBNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDBNodeOutcomeCallable restartDBNodeCallable(const Model::RestartDBNodeRequest& request) const;
			RevokeAccountPrivilegeOutcome revokeAccountPrivilege(const Model::RevokeAccountPrivilegeRequest &request)const;
			void revokeAccountPrivilegeAsync(const Model::RevokeAccountPrivilegeRequest& request, const RevokeAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeAccountPrivilegeOutcomeCallable revokeAccountPrivilegeCallable(const Model::RevokeAccountPrivilegeRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnlockDBClusterDeletionOutcome unlockDBClusterDeletion(const Model::UnlockDBClusterDeletionRequest &request)const;
			void unlockDBClusterDeletionAsync(const Model::UnlockDBClusterDeletionRequest& request, const UnlockDBClusterDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockDBClusterDeletionOutcomeCallable unlockDBClusterDeletionCallable(const Model::UnlockDBClusterDeletionRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_POLARDB_POLARDBCLIENT_H_
