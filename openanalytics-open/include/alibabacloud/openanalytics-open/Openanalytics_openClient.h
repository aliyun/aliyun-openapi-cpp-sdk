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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_OPENANALYTICS_OPENCLIENT_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_OPENANALYTICS_OPENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Openanalytics_openExport.h"
#include "model/AddAccountRequest.h"
#include "model/AddAccountResult.h"
#include "model/AddEndPointRequest.h"
#include "model/AddEndPointResult.h"
#include "model/AddPartitionsRequest.h"
#include "model/AddPartitionsResult.h"
#include "model/AlterDatabaseRequest.h"
#include "model/AlterDatabaseResult.h"
#include "model/AlterTableRequest.h"
#include "model/AlterTableResult.h"
#include "model/CancelQueryByExecuteIdRequest.h"
#include "model/CancelQueryByExecuteIdResult.h"
#include "model/CancelQueryByIdRequest.h"
#include "model/CancelQueryByIdResult.h"
#include "model/CreateDatabaseRequest.h"
#include "model/CreateDatabaseResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateTableRequest.h"
#include "model/CreateTableResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DescribeTagsRequest.h"
#include "model/DescribeTagsResult.h"
#include "model/DropDatabaseRequest.h"
#include "model/DropDatabaseResult.h"
#include "model/DropPartitionRequest.h"
#include "model/DropPartitionResult.h"
#include "model/DropTableRequest.h"
#include "model/DropTableResult.h"
#include "model/GetAllDatabasesRequest.h"
#include "model/GetAllDatabasesResult.h"
#include "model/GetAllTablesRequest.h"
#include "model/GetAllTablesResult.h"
#include "model/GetAllowIPRequest.h"
#include "model/GetAllowIPResult.h"
#include "model/GetDatabaseRequest.h"
#include "model/GetDatabaseResult.h"
#include "model/GetEndPointRequest.h"
#include "model/GetEndPointResult.h"
#include "model/GetEndPointByDomainRequest.h"
#include "model/GetEndPointByDomainResult.h"
#include "model/GetJobDetailRequest.h"
#include "model/GetJobDetailResult.h"
#include "model/GetJobLogRequest.h"
#include "model/GetJobLogResult.h"
#include "model/GetJobStatusRequest.h"
#include "model/GetJobStatusResult.h"
#include "model/GetPartitionRequest.h"
#include "model/GetPartitionResult.h"
#include "model/GetPartitionsRequest.h"
#include "model/GetPartitionsResult.h"
#include "model/GetTableRequest.h"
#include "model/GetTableResult.h"
#include "model/GrantPrivilegesRequest.h"
#include "model/GrantPrivilegesResult.h"
#include "model/KillSparkJobRequest.h"
#include "model/KillSparkJobResult.h"
#include "model/ListSparkJobRequest.h"
#include "model/ListSparkJobResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/QueryAccountListRequest.h"
#include "model/QueryAccountListResult.h"
#include "model/QueryEndPointListRequest.h"
#include "model/QueryEndPointListResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/RemoveEndPointRequest.h"
#include "model/RemoveEndPointResult.h"
#include "model/ResetMainPasswordRequest.h"
#include "model/ResetMainPasswordResult.h"
#include "model/RevokePrivilegesRequest.h"
#include "model/RevokePrivilegesResult.h"
#include "model/SetAllowIPRequest.h"
#include "model/SetAllowIPResult.h"
#include "model/SubmitSparkJobRequest.h"
#include "model/SubmitSparkJobResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnSubscribeRegionRequest.h"
#include "model/UnSubscribeRegionResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAccountPasswordRequest.h"
#include "model/UpdateAccountPasswordResult.h"
#include "model/UpgradeInstanceRequest.h"
#include "model/UpgradeInstanceResult.h"
#include "model/ValidateVirtualClusterNameRequest.h"
#include "model/ValidateVirtualClusterNameResult.h"


namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT Openanalytics_openClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAccountResult> AddAccountOutcome;
			typedef std::future<AddAccountOutcome> AddAccountOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::AddAccountRequest&, const AddAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAccountAsyncHandler;
			typedef Outcome<Error, Model::AddEndPointResult> AddEndPointOutcome;
			typedef std::future<AddEndPointOutcome> AddEndPointOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::AddEndPointRequest&, const AddEndPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEndPointAsyncHandler;
			typedef Outcome<Error, Model::AddPartitionsResult> AddPartitionsOutcome;
			typedef std::future<AddPartitionsOutcome> AddPartitionsOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::AddPartitionsRequest&, const AddPartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPartitionsAsyncHandler;
			typedef Outcome<Error, Model::AlterDatabaseResult> AlterDatabaseOutcome;
			typedef std::future<AlterDatabaseOutcome> AlterDatabaseOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::AlterDatabaseRequest&, const AlterDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AlterDatabaseAsyncHandler;
			typedef Outcome<Error, Model::AlterTableResult> AlterTableOutcome;
			typedef std::future<AlterTableOutcome> AlterTableOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::AlterTableRequest&, const AlterTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AlterTableAsyncHandler;
			typedef Outcome<Error, Model::CancelQueryByExecuteIdResult> CancelQueryByExecuteIdOutcome;
			typedef std::future<CancelQueryByExecuteIdOutcome> CancelQueryByExecuteIdOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CancelQueryByExecuteIdRequest&, const CancelQueryByExecuteIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelQueryByExecuteIdAsyncHandler;
			typedef Outcome<Error, Model::CancelQueryByIdResult> CancelQueryByIdOutcome;
			typedef std::future<CancelQueryByIdOutcome> CancelQueryByIdOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CancelQueryByIdRequest&, const CancelQueryByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelQueryByIdAsyncHandler;
			typedef Outcome<Error, Model::CreateDatabaseResult> CreateDatabaseOutcome;
			typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CreateDatabaseRequest&, const CreateDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateTableResult> CreateTableOutcome;
			typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CreateTableRequest&, const CreateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagsResult> DescribeTagsOutcome;
			typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DescribeTagsRequest&, const DescribeTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
			typedef Outcome<Error, Model::DropDatabaseResult> DropDatabaseOutcome;
			typedef std::future<DropDatabaseOutcome> DropDatabaseOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DropDatabaseRequest&, const DropDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DropDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DropPartitionResult> DropPartitionOutcome;
			typedef std::future<DropPartitionOutcome> DropPartitionOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DropPartitionRequest&, const DropPartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DropPartitionAsyncHandler;
			typedef Outcome<Error, Model::DropTableResult> DropTableOutcome;
			typedef std::future<DropTableOutcome> DropTableOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DropTableRequest&, const DropTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DropTableAsyncHandler;
			typedef Outcome<Error, Model::GetAllDatabasesResult> GetAllDatabasesOutcome;
			typedef std::future<GetAllDatabasesOutcome> GetAllDatabasesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetAllDatabasesRequest&, const GetAllDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllDatabasesAsyncHandler;
			typedef Outcome<Error, Model::GetAllTablesResult> GetAllTablesOutcome;
			typedef std::future<GetAllTablesOutcome> GetAllTablesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetAllTablesRequest&, const GetAllTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllTablesAsyncHandler;
			typedef Outcome<Error, Model::GetAllowIPResult> GetAllowIPOutcome;
			typedef std::future<GetAllowIPOutcome> GetAllowIPOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetAllowIPRequest&, const GetAllowIPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllowIPAsyncHandler;
			typedef Outcome<Error, Model::GetDatabaseResult> GetDatabaseOutcome;
			typedef std::future<GetDatabaseOutcome> GetDatabaseOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetDatabaseRequest&, const GetDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatabaseAsyncHandler;
			typedef Outcome<Error, Model::GetEndPointResult> GetEndPointOutcome;
			typedef std::future<GetEndPointOutcome> GetEndPointOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetEndPointRequest&, const GetEndPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEndPointAsyncHandler;
			typedef Outcome<Error, Model::GetEndPointByDomainResult> GetEndPointByDomainOutcome;
			typedef std::future<GetEndPointByDomainOutcome> GetEndPointByDomainOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetEndPointByDomainRequest&, const GetEndPointByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEndPointByDomainAsyncHandler;
			typedef Outcome<Error, Model::GetJobDetailResult> GetJobDetailOutcome;
			typedef std::future<GetJobDetailOutcome> GetJobDetailOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetJobDetailRequest&, const GetJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobDetailAsyncHandler;
			typedef Outcome<Error, Model::GetJobLogResult> GetJobLogOutcome;
			typedef std::future<GetJobLogOutcome> GetJobLogOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetJobLogRequest&, const GetJobLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobLogAsyncHandler;
			typedef Outcome<Error, Model::GetJobStatusResult> GetJobStatusOutcome;
			typedef std::future<GetJobStatusOutcome> GetJobStatusOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetJobStatusRequest&, const GetJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobStatusAsyncHandler;
			typedef Outcome<Error, Model::GetPartitionResult> GetPartitionOutcome;
			typedef std::future<GetPartitionOutcome> GetPartitionOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetPartitionRequest&, const GetPartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPartitionAsyncHandler;
			typedef Outcome<Error, Model::GetPartitionsResult> GetPartitionsOutcome;
			typedef std::future<GetPartitionsOutcome> GetPartitionsOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetPartitionsRequest&, const GetPartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPartitionsAsyncHandler;
			typedef Outcome<Error, Model::GetTableResult> GetTableOutcome;
			typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetTableRequest&, const GetTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableAsyncHandler;
			typedef Outcome<Error, Model::GrantPrivilegesResult> GrantPrivilegesOutcome;
			typedef std::future<GrantPrivilegesOutcome> GrantPrivilegesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GrantPrivilegesRequest&, const GrantPrivilegesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantPrivilegesAsyncHandler;
			typedef Outcome<Error, Model::KillSparkJobResult> KillSparkJobOutcome;
			typedef std::future<KillSparkJobOutcome> KillSparkJobOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::KillSparkJobRequest&, const KillSparkJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillSparkJobAsyncHandler;
			typedef Outcome<Error, Model::ListSparkJobResult> ListSparkJobOutcome;
			typedef std::future<ListSparkJobOutcome> ListSparkJobOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ListSparkJobRequest&, const ListSparkJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSparkJobAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::QueryAccountListResult> QueryAccountListOutcome;
			typedef std::future<QueryAccountListOutcome> QueryAccountListOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::QueryAccountListRequest&, const QueryAccountListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccountListAsyncHandler;
			typedef Outcome<Error, Model::QueryEndPointListResult> QueryEndPointListOutcome;
			typedef std::future<QueryEndPointListOutcome> QueryEndPointListOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::QueryEndPointListRequest&, const QueryEndPointListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEndPointListAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::RemoveEndPointResult> RemoveEndPointOutcome;
			typedef std::future<RemoveEndPointOutcome> RemoveEndPointOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::RemoveEndPointRequest&, const RemoveEndPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEndPointAsyncHandler;
			typedef Outcome<Error, Model::ResetMainPasswordResult> ResetMainPasswordOutcome;
			typedef std::future<ResetMainPasswordOutcome> ResetMainPasswordOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ResetMainPasswordRequest&, const ResetMainPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetMainPasswordAsyncHandler;
			typedef Outcome<Error, Model::RevokePrivilegesResult> RevokePrivilegesOutcome;
			typedef std::future<RevokePrivilegesOutcome> RevokePrivilegesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::RevokePrivilegesRequest&, const RevokePrivilegesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokePrivilegesAsyncHandler;
			typedef Outcome<Error, Model::SetAllowIPResult> SetAllowIPOutcome;
			typedef std::future<SetAllowIPOutcome> SetAllowIPOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::SetAllowIPRequest&, const SetAllowIPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAllowIPAsyncHandler;
			typedef Outcome<Error, Model::SubmitSparkJobResult> SubmitSparkJobOutcome;
			typedef std::future<SubmitSparkJobOutcome> SubmitSparkJobOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::SubmitSparkJobRequest&, const SubmitSparkJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSparkJobAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnSubscribeRegionResult> UnSubscribeRegionOutcome;
			typedef std::future<UnSubscribeRegionOutcome> UnSubscribeRegionOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::UnSubscribeRegionRequest&, const UnSubscribeRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnSubscribeRegionAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAccountPasswordResult> UpdateAccountPasswordOutcome;
			typedef std::future<UpdateAccountPasswordOutcome> UpdateAccountPasswordOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::UpdateAccountPasswordRequest&, const UpdateAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::UpgradeInstanceResult> UpgradeInstanceOutcome;
			typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::UpgradeInstanceRequest&, const UpgradeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;
			typedef Outcome<Error, Model::ValidateVirtualClusterNameResult> ValidateVirtualClusterNameOutcome;
			typedef std::future<ValidateVirtualClusterNameOutcome> ValidateVirtualClusterNameOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ValidateVirtualClusterNameRequest&, const ValidateVirtualClusterNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateVirtualClusterNameAsyncHandler;

			Openanalytics_openClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Openanalytics_openClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Openanalytics_openClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Openanalytics_openClient();
			AddAccountOutcome addAccount(const Model::AddAccountRequest &request)const;
			void addAccountAsync(const Model::AddAccountRequest& request, const AddAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAccountOutcomeCallable addAccountCallable(const Model::AddAccountRequest& request) const;
			AddEndPointOutcome addEndPoint(const Model::AddEndPointRequest &request)const;
			void addEndPointAsync(const Model::AddEndPointRequest& request, const AddEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEndPointOutcomeCallable addEndPointCallable(const Model::AddEndPointRequest& request) const;
			AddPartitionsOutcome addPartitions(const Model::AddPartitionsRequest &request)const;
			void addPartitionsAsync(const Model::AddPartitionsRequest& request, const AddPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPartitionsOutcomeCallable addPartitionsCallable(const Model::AddPartitionsRequest& request) const;
			AlterDatabaseOutcome alterDatabase(const Model::AlterDatabaseRequest &request)const;
			void alterDatabaseAsync(const Model::AlterDatabaseRequest& request, const AlterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AlterDatabaseOutcomeCallable alterDatabaseCallable(const Model::AlterDatabaseRequest& request) const;
			AlterTableOutcome alterTable(const Model::AlterTableRequest &request)const;
			void alterTableAsync(const Model::AlterTableRequest& request, const AlterTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AlterTableOutcomeCallable alterTableCallable(const Model::AlterTableRequest& request) const;
			CancelQueryByExecuteIdOutcome cancelQueryByExecuteId(const Model::CancelQueryByExecuteIdRequest &request)const;
			void cancelQueryByExecuteIdAsync(const Model::CancelQueryByExecuteIdRequest& request, const CancelQueryByExecuteIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelQueryByExecuteIdOutcomeCallable cancelQueryByExecuteIdCallable(const Model::CancelQueryByExecuteIdRequest& request) const;
			CancelQueryByIdOutcome cancelQueryById(const Model::CancelQueryByIdRequest &request)const;
			void cancelQueryByIdAsync(const Model::CancelQueryByIdRequest& request, const CancelQueryByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelQueryByIdOutcomeCallable cancelQueryByIdCallable(const Model::CancelQueryByIdRequest& request) const;
			CreateDatabaseOutcome createDatabase(const Model::CreateDatabaseRequest &request)const;
			void createDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatabaseOutcomeCallable createDatabaseCallable(const Model::CreateDatabaseRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateTableOutcome createTable(const Model::CreateTableRequest &request)const;
			void createTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTableOutcomeCallable createTableCallable(const Model::CreateTableRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DescribeTagsOutcome describeTags(const Model::DescribeTagsRequest &request)const;
			void describeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagsOutcomeCallable describeTagsCallable(const Model::DescribeTagsRequest& request) const;
			DropDatabaseOutcome dropDatabase(const Model::DropDatabaseRequest &request)const;
			void dropDatabaseAsync(const Model::DropDatabaseRequest& request, const DropDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DropDatabaseOutcomeCallable dropDatabaseCallable(const Model::DropDatabaseRequest& request) const;
			DropPartitionOutcome dropPartition(const Model::DropPartitionRequest &request)const;
			void dropPartitionAsync(const Model::DropPartitionRequest& request, const DropPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DropPartitionOutcomeCallable dropPartitionCallable(const Model::DropPartitionRequest& request) const;
			DropTableOutcome dropTable(const Model::DropTableRequest &request)const;
			void dropTableAsync(const Model::DropTableRequest& request, const DropTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DropTableOutcomeCallable dropTableCallable(const Model::DropTableRequest& request) const;
			GetAllDatabasesOutcome getAllDatabases(const Model::GetAllDatabasesRequest &request)const;
			void getAllDatabasesAsync(const Model::GetAllDatabasesRequest& request, const GetAllDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllDatabasesOutcomeCallable getAllDatabasesCallable(const Model::GetAllDatabasesRequest& request) const;
			GetAllTablesOutcome getAllTables(const Model::GetAllTablesRequest &request)const;
			void getAllTablesAsync(const Model::GetAllTablesRequest& request, const GetAllTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllTablesOutcomeCallable getAllTablesCallable(const Model::GetAllTablesRequest& request) const;
			GetAllowIPOutcome getAllowIP(const Model::GetAllowIPRequest &request)const;
			void getAllowIPAsync(const Model::GetAllowIPRequest& request, const GetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllowIPOutcomeCallable getAllowIPCallable(const Model::GetAllowIPRequest& request) const;
			GetDatabaseOutcome getDatabase(const Model::GetDatabaseRequest &request)const;
			void getDatabaseAsync(const Model::GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatabaseOutcomeCallable getDatabaseCallable(const Model::GetDatabaseRequest& request) const;
			GetEndPointOutcome getEndPoint(const Model::GetEndPointRequest &request)const;
			void getEndPointAsync(const Model::GetEndPointRequest& request, const GetEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEndPointOutcomeCallable getEndPointCallable(const Model::GetEndPointRequest& request) const;
			GetEndPointByDomainOutcome getEndPointByDomain(const Model::GetEndPointByDomainRequest &request)const;
			void getEndPointByDomainAsync(const Model::GetEndPointByDomainRequest& request, const GetEndPointByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEndPointByDomainOutcomeCallable getEndPointByDomainCallable(const Model::GetEndPointByDomainRequest& request) const;
			GetJobDetailOutcome getJobDetail(const Model::GetJobDetailRequest &request)const;
			void getJobDetailAsync(const Model::GetJobDetailRequest& request, const GetJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobDetailOutcomeCallable getJobDetailCallable(const Model::GetJobDetailRequest& request) const;
			GetJobLogOutcome getJobLog(const Model::GetJobLogRequest &request)const;
			void getJobLogAsync(const Model::GetJobLogRequest& request, const GetJobLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobLogOutcomeCallable getJobLogCallable(const Model::GetJobLogRequest& request) const;
			GetJobStatusOutcome getJobStatus(const Model::GetJobStatusRequest &request)const;
			void getJobStatusAsync(const Model::GetJobStatusRequest& request, const GetJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobStatusOutcomeCallable getJobStatusCallable(const Model::GetJobStatusRequest& request) const;
			GetPartitionOutcome getPartition(const Model::GetPartitionRequest &request)const;
			void getPartitionAsync(const Model::GetPartitionRequest& request, const GetPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPartitionOutcomeCallable getPartitionCallable(const Model::GetPartitionRequest& request) const;
			GetPartitionsOutcome getPartitions(const Model::GetPartitionsRequest &request)const;
			void getPartitionsAsync(const Model::GetPartitionsRequest& request, const GetPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPartitionsOutcomeCallable getPartitionsCallable(const Model::GetPartitionsRequest& request) const;
			GetTableOutcome getTable(const Model::GetTableRequest &request)const;
			void getTableAsync(const Model::GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableOutcomeCallable getTableCallable(const Model::GetTableRequest& request) const;
			GrantPrivilegesOutcome grantPrivileges(const Model::GrantPrivilegesRequest &request)const;
			void grantPrivilegesAsync(const Model::GrantPrivilegesRequest& request, const GrantPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantPrivilegesOutcomeCallable grantPrivilegesCallable(const Model::GrantPrivilegesRequest& request) const;
			KillSparkJobOutcome killSparkJob(const Model::KillSparkJobRequest &request)const;
			void killSparkJobAsync(const Model::KillSparkJobRequest& request, const KillSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillSparkJobOutcomeCallable killSparkJobCallable(const Model::KillSparkJobRequest& request) const;
			ListSparkJobOutcome listSparkJob(const Model::ListSparkJobRequest &request)const;
			void listSparkJobAsync(const Model::ListSparkJobRequest& request, const ListSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSparkJobOutcomeCallable listSparkJobCallable(const Model::ListSparkJobRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			QueryAccountListOutcome queryAccountList(const Model::QueryAccountListRequest &request)const;
			void queryAccountListAsync(const Model::QueryAccountListRequest& request, const QueryAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccountListOutcomeCallable queryAccountListCallable(const Model::QueryAccountListRequest& request) const;
			QueryEndPointListOutcome queryEndPointList(const Model::QueryEndPointListRequest &request)const;
			void queryEndPointListAsync(const Model::QueryEndPointListRequest& request, const QueryEndPointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEndPointListOutcomeCallable queryEndPointListCallable(const Model::QueryEndPointListRequest& request) const;
			ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
			void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
			RemoveEndPointOutcome removeEndPoint(const Model::RemoveEndPointRequest &request)const;
			void removeEndPointAsync(const Model::RemoveEndPointRequest& request, const RemoveEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveEndPointOutcomeCallable removeEndPointCallable(const Model::RemoveEndPointRequest& request) const;
			ResetMainPasswordOutcome resetMainPassword(const Model::ResetMainPasswordRequest &request)const;
			void resetMainPasswordAsync(const Model::ResetMainPasswordRequest& request, const ResetMainPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetMainPasswordOutcomeCallable resetMainPasswordCallable(const Model::ResetMainPasswordRequest& request) const;
			RevokePrivilegesOutcome revokePrivileges(const Model::RevokePrivilegesRequest &request)const;
			void revokePrivilegesAsync(const Model::RevokePrivilegesRequest& request, const RevokePrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokePrivilegesOutcomeCallable revokePrivilegesCallable(const Model::RevokePrivilegesRequest& request) const;
			SetAllowIPOutcome setAllowIP(const Model::SetAllowIPRequest &request)const;
			void setAllowIPAsync(const Model::SetAllowIPRequest& request, const SetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAllowIPOutcomeCallable setAllowIPCallable(const Model::SetAllowIPRequest& request) const;
			SubmitSparkJobOutcome submitSparkJob(const Model::SubmitSparkJobRequest &request)const;
			void submitSparkJobAsync(const Model::SubmitSparkJobRequest& request, const SubmitSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSparkJobOutcomeCallable submitSparkJobCallable(const Model::SubmitSparkJobRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnSubscribeRegionOutcome unSubscribeRegion(const Model::UnSubscribeRegionRequest &request)const;
			void unSubscribeRegionAsync(const Model::UnSubscribeRegionRequest& request, const UnSubscribeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnSubscribeRegionOutcomeCallable unSubscribeRegionCallable(const Model::UnSubscribeRegionRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAccountPasswordOutcome updateAccountPassword(const Model::UpdateAccountPasswordRequest &request)const;
			void updateAccountPasswordAsync(const Model::UpdateAccountPasswordRequest& request, const UpdateAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAccountPasswordOutcomeCallable updateAccountPasswordCallable(const Model::UpdateAccountPasswordRequest& request) const;
			UpgradeInstanceOutcome upgradeInstance(const Model::UpgradeInstanceRequest &request)const;
			void upgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeInstanceOutcomeCallable upgradeInstanceCallable(const Model::UpgradeInstanceRequest& request) const;
			ValidateVirtualClusterNameOutcome validateVirtualClusterName(const Model::ValidateVirtualClusterNameRequest &request)const;
			void validateVirtualClusterNameAsync(const Model::ValidateVirtualClusterNameRequest& request, const ValidateVirtualClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateVirtualClusterNameOutcomeCallable validateVirtualClusterNameCallable(const Model::ValidateVirtualClusterNameRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_OPENANALYTICS_OPENCLIENT_H_
