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

#ifndef ALIBABACLOUD_DBFS_DBFSCLIENT_H_
#define ALIBABACLOUD_DBFS_DBFSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DBFSExport.h"
#include "model/AddTagsBatchRequest.h"
#include "model/AddTagsBatchResult.h"
#include "model/AttachDbfsRequest.h"
#include "model/AttachDbfsResult.h"
#include "model/CreateConstantsRequest.h"
#include "model/CreateConstantsResult.h"
#include "model/CreateDbfsRequest.h"
#include "model/CreateDbfsResult.h"
#include "model/CreateServiceLinkedRoleRequest.h"
#include "model/CreateServiceLinkedRoleResult.h"
#include "model/CreateSnapshotRequest.h"
#include "model/CreateSnapshotResult.h"
#include "model/DbfsRecordRequest.h"
#include "model/DbfsRecordResult.h"
#include "model/DeleteConstantsRequest.h"
#include "model/DeleteConstantsResult.h"
#include "model/DeleteDbfsRequest.h"
#include "model/DeleteDbfsResult.h"
#include "model/DeleteSnapshotRequest.h"
#include "model/DeleteSnapshotResult.h"
#include "model/DeleteTagsBatchRequest.h"
#include "model/DeleteTagsBatchResult.h"
#include "model/DescribeDbfsSpecificationsRequest.h"
#include "model/DescribeDbfsSpecificationsResult.h"
#include "model/DetachDbfsRequest.h"
#include "model/DetachDbfsResult.h"
#include "model/GenerateUpgradeRecordRequest.h"
#include "model/GenerateUpgradeRecordResult.h"
#include "model/GetDbfsRequest.h"
#include "model/GetDbfsResult.h"
#include "model/GetServiceLinkedRoleRequest.h"
#include "model/GetServiceLinkedRoleResult.h"
#include "model/GetSynchronizConstantsRequest.h"
#include "model/GetSynchronizConstantsResult.h"
#include "model/InsertSynchronizConstantsRequest.h"
#include "model/InsertSynchronizConstantsResult.h"
#include "model/ListConstantsRequest.h"
#include "model/ListConstantsResult.h"
#include "model/ListDbfsRequest.h"
#include "model/ListDbfsResult.h"
#include "model/ListSnapshotRequest.h"
#include "model/ListSnapshotResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/ListTaskRequest.h"
#include "model/ListTaskResult.h"
#include "model/OpreateConstantsRequest.h"
#include "model/OpreateConstantsResult.h"
#include "model/PublishUpgradeTaskRequest.h"
#include "model/PublishUpgradeTaskResult.h"
#include "model/RenameDbfsRequest.h"
#include "model/RenameDbfsResult.h"
#include "model/ResetDbfsRequest.h"
#include "model/ResetDbfsResult.h"
#include "model/ResizeDbfsRequest.h"
#include "model/ResizeDbfsResult.h"
#include "model/StopUpgradeTaskRequest.h"
#include "model/StopUpgradeTaskResult.h"
#include "model/TagDbfsRequest.h"
#include "model/TagDbfsResult.h"
#include "model/UpdateConstantsRequest.h"
#include "model/UpdateConstantsResult.h"
#include "model/UpdateTaskRequest.h"
#include "model/UpdateTaskResult.h"


namespace AlibabaCloud
{
	namespace DBFS
	{
		class ALIBABACLOUD_DBFS_EXPORT DBFSClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddTagsBatchResult> AddTagsBatchOutcome;
			typedef std::future<AddTagsBatchOutcome> AddTagsBatchOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::AddTagsBatchRequest&, const AddTagsBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagsBatchAsyncHandler;
			typedef Outcome<Error, Model::AttachDbfsResult> AttachDbfsOutcome;
			typedef std::future<AttachDbfsOutcome> AttachDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::AttachDbfsRequest&, const AttachDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDbfsAsyncHandler;
			typedef Outcome<Error, Model::CreateConstantsResult> CreateConstantsOutcome;
			typedef std::future<CreateConstantsOutcome> CreateConstantsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::CreateConstantsRequest&, const CreateConstantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConstantsAsyncHandler;
			typedef Outcome<Error, Model::CreateDbfsResult> CreateDbfsOutcome;
			typedef std::future<CreateDbfsOutcome> CreateDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::CreateDbfsRequest&, const CreateDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDbfsAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleResult> CreateServiceLinkedRoleOutcome;
			typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::CreateServiceLinkedRoleRequest&, const CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateSnapshotResult> CreateSnapshotOutcome;
			typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::CreateSnapshotRequest&, const CreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DbfsRecordResult> DbfsRecordOutcome;
			typedef std::future<DbfsRecordOutcome> DbfsRecordOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DbfsRecordRequest&, const DbfsRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DbfsRecordAsyncHandler;
			typedef Outcome<Error, Model::DeleteConstantsResult> DeleteConstantsOutcome;
			typedef std::future<DeleteConstantsOutcome> DeleteConstantsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DeleteConstantsRequest&, const DeleteConstantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConstantsAsyncHandler;
			typedef Outcome<Error, Model::DeleteDbfsResult> DeleteDbfsOutcome;
			typedef std::future<DeleteDbfsOutcome> DeleteDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DeleteDbfsRequest&, const DeleteDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDbfsAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnapshotResult> DeleteSnapshotOutcome;
			typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DeleteSnapshotRequest&, const DeleteSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagsBatchResult> DeleteTagsBatchOutcome;
			typedef std::future<DeleteTagsBatchOutcome> DeleteTagsBatchOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DeleteTagsBatchRequest&, const DeleteTagsBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagsBatchAsyncHandler;
			typedef Outcome<Error, Model::DescribeDbfsSpecificationsResult> DescribeDbfsSpecificationsOutcome;
			typedef std::future<DescribeDbfsSpecificationsOutcome> DescribeDbfsSpecificationsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DescribeDbfsSpecificationsRequest&, const DescribeDbfsSpecificationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbfsSpecificationsAsyncHandler;
			typedef Outcome<Error, Model::DetachDbfsResult> DetachDbfsOutcome;
			typedef std::future<DetachDbfsOutcome> DetachDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::DetachDbfsRequest&, const DetachDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachDbfsAsyncHandler;
			typedef Outcome<Error, Model::GenerateUpgradeRecordResult> GenerateUpgradeRecordOutcome;
			typedef std::future<GenerateUpgradeRecordOutcome> GenerateUpgradeRecordOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::GenerateUpgradeRecordRequest&, const GenerateUpgradeRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateUpgradeRecordAsyncHandler;
			typedef Outcome<Error, Model::GetDbfsResult> GetDbfsOutcome;
			typedef std::future<GetDbfsOutcome> GetDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::GetDbfsRequest&, const GetDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDbfsAsyncHandler;
			typedef Outcome<Error, Model::GetServiceLinkedRoleResult> GetServiceLinkedRoleOutcome;
			typedef std::future<GetServiceLinkedRoleOutcome> GetServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::GetServiceLinkedRoleRequest&, const GetServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::GetSynchronizConstantsResult> GetSynchronizConstantsOutcome;
			typedef std::future<GetSynchronizConstantsOutcome> GetSynchronizConstantsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::GetSynchronizConstantsRequest&, const GetSynchronizConstantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSynchronizConstantsAsyncHandler;
			typedef Outcome<Error, Model::InsertSynchronizConstantsResult> InsertSynchronizConstantsOutcome;
			typedef std::future<InsertSynchronizConstantsOutcome> InsertSynchronizConstantsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::InsertSynchronizConstantsRequest&, const InsertSynchronizConstantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertSynchronizConstantsAsyncHandler;
			typedef Outcome<Error, Model::ListConstantsResult> ListConstantsOutcome;
			typedef std::future<ListConstantsOutcome> ListConstantsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListConstantsRequest&, const ListConstantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConstantsAsyncHandler;
			typedef Outcome<Error, Model::ListDbfsResult> ListDbfsOutcome;
			typedef std::future<ListDbfsOutcome> ListDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListDbfsRequest&, const ListDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDbfsAsyncHandler;
			typedef Outcome<Error, Model::ListSnapshotResult> ListSnapshotOutcome;
			typedef std::future<ListSnapshotOutcome> ListSnapshotOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListSnapshotRequest&, const ListSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSnapshotAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagValuesResult> ListTagValuesOutcome;
			typedef std::future<ListTagValuesOutcome> ListTagValuesOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListTagValuesRequest&, const ListTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagValuesAsyncHandler;
			typedef Outcome<Error, Model::ListTaskResult> ListTaskOutcome;
			typedef std::future<ListTaskOutcome> ListTaskOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ListTaskRequest&, const ListTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskAsyncHandler;
			typedef Outcome<Error, Model::OpreateConstantsResult> OpreateConstantsOutcome;
			typedef std::future<OpreateConstantsOutcome> OpreateConstantsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::OpreateConstantsRequest&, const OpreateConstantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpreateConstantsAsyncHandler;
			typedef Outcome<Error, Model::PublishUpgradeTaskResult> PublishUpgradeTaskOutcome;
			typedef std::future<PublishUpgradeTaskOutcome> PublishUpgradeTaskOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::PublishUpgradeTaskRequest&, const PublishUpgradeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishUpgradeTaskAsyncHandler;
			typedef Outcome<Error, Model::RenameDbfsResult> RenameDbfsOutcome;
			typedef std::future<RenameDbfsOutcome> RenameDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::RenameDbfsRequest&, const RenameDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenameDbfsAsyncHandler;
			typedef Outcome<Error, Model::ResetDbfsResult> ResetDbfsOutcome;
			typedef std::future<ResetDbfsOutcome> ResetDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ResetDbfsRequest&, const ResetDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetDbfsAsyncHandler;
			typedef Outcome<Error, Model::ResizeDbfsResult> ResizeDbfsOutcome;
			typedef std::future<ResizeDbfsOutcome> ResizeDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::ResizeDbfsRequest&, const ResizeDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDbfsAsyncHandler;
			typedef Outcome<Error, Model::StopUpgradeTaskResult> StopUpgradeTaskOutcome;
			typedef std::future<StopUpgradeTaskOutcome> StopUpgradeTaskOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::StopUpgradeTaskRequest&, const StopUpgradeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopUpgradeTaskAsyncHandler;
			typedef Outcome<Error, Model::TagDbfsResult> TagDbfsOutcome;
			typedef std::future<TagDbfsOutcome> TagDbfsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::TagDbfsRequest&, const TagDbfsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagDbfsAsyncHandler;
			typedef Outcome<Error, Model::UpdateConstantsResult> UpdateConstantsOutcome;
			typedef std::future<UpdateConstantsOutcome> UpdateConstantsOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::UpdateConstantsRequest&, const UpdateConstantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConstantsAsyncHandler;
			typedef Outcome<Error, Model::UpdateTaskResult> UpdateTaskOutcome;
			typedef std::future<UpdateTaskOutcome> UpdateTaskOutcomeCallable;
			typedef std::function<void(const DBFSClient*, const Model::UpdateTaskRequest&, const UpdateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaskAsyncHandler;

			DBFSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DBFSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DBFSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DBFSClient();
			AddTagsBatchOutcome addTagsBatch(const Model::AddTagsBatchRequest &request)const;
			void addTagsBatchAsync(const Model::AddTagsBatchRequest& request, const AddTagsBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagsBatchOutcomeCallable addTagsBatchCallable(const Model::AddTagsBatchRequest& request) const;
			AttachDbfsOutcome attachDbfs(const Model::AttachDbfsRequest &request)const;
			void attachDbfsAsync(const Model::AttachDbfsRequest& request, const AttachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDbfsOutcomeCallable attachDbfsCallable(const Model::AttachDbfsRequest& request) const;
			CreateConstantsOutcome createConstants(const Model::CreateConstantsRequest &request)const;
			void createConstantsAsync(const Model::CreateConstantsRequest& request, const CreateConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConstantsOutcomeCallable createConstantsCallable(const Model::CreateConstantsRequest& request) const;
			CreateDbfsOutcome createDbfs(const Model::CreateDbfsRequest &request)const;
			void createDbfsAsync(const Model::CreateDbfsRequest& request, const CreateDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDbfsOutcomeCallable createDbfsCallable(const Model::CreateDbfsRequest& request) const;
			CreateServiceLinkedRoleOutcome createServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request)const;
			void createServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleOutcomeCallable createServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;
			CreateSnapshotOutcome createSnapshot(const Model::CreateSnapshotRequest &request)const;
			void createSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSnapshotOutcomeCallable createSnapshotCallable(const Model::CreateSnapshotRequest& request) const;
			DbfsRecordOutcome dbfsRecord(const Model::DbfsRecordRequest &request)const;
			void dbfsRecordAsync(const Model::DbfsRecordRequest& request, const DbfsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DbfsRecordOutcomeCallable dbfsRecordCallable(const Model::DbfsRecordRequest& request) const;
			DeleteConstantsOutcome deleteConstants(const Model::DeleteConstantsRequest &request)const;
			void deleteConstantsAsync(const Model::DeleteConstantsRequest& request, const DeleteConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConstantsOutcomeCallable deleteConstantsCallable(const Model::DeleteConstantsRequest& request) const;
			DeleteDbfsOutcome deleteDbfs(const Model::DeleteDbfsRequest &request)const;
			void deleteDbfsAsync(const Model::DeleteDbfsRequest& request, const DeleteDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDbfsOutcomeCallable deleteDbfsCallable(const Model::DeleteDbfsRequest& request) const;
			DeleteSnapshotOutcome deleteSnapshot(const Model::DeleteSnapshotRequest &request)const;
			void deleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnapshotOutcomeCallable deleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;
			DeleteTagsBatchOutcome deleteTagsBatch(const Model::DeleteTagsBatchRequest &request)const;
			void deleteTagsBatchAsync(const Model::DeleteTagsBatchRequest& request, const DeleteTagsBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagsBatchOutcomeCallable deleteTagsBatchCallable(const Model::DeleteTagsBatchRequest& request) const;
			DescribeDbfsSpecificationsOutcome describeDbfsSpecifications(const Model::DescribeDbfsSpecificationsRequest &request)const;
			void describeDbfsSpecificationsAsync(const Model::DescribeDbfsSpecificationsRequest& request, const DescribeDbfsSpecificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDbfsSpecificationsOutcomeCallable describeDbfsSpecificationsCallable(const Model::DescribeDbfsSpecificationsRequest& request) const;
			DetachDbfsOutcome detachDbfs(const Model::DetachDbfsRequest &request)const;
			void detachDbfsAsync(const Model::DetachDbfsRequest& request, const DetachDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachDbfsOutcomeCallable detachDbfsCallable(const Model::DetachDbfsRequest& request) const;
			GenerateUpgradeRecordOutcome generateUpgradeRecord(const Model::GenerateUpgradeRecordRequest &request)const;
			void generateUpgradeRecordAsync(const Model::GenerateUpgradeRecordRequest& request, const GenerateUpgradeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateUpgradeRecordOutcomeCallable generateUpgradeRecordCallable(const Model::GenerateUpgradeRecordRequest& request) const;
			GetDbfsOutcome getDbfs(const Model::GetDbfsRequest &request)const;
			void getDbfsAsync(const Model::GetDbfsRequest& request, const GetDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDbfsOutcomeCallable getDbfsCallable(const Model::GetDbfsRequest& request) const;
			GetServiceLinkedRoleOutcome getServiceLinkedRole(const Model::GetServiceLinkedRoleRequest &request)const;
			void getServiceLinkedRoleAsync(const Model::GetServiceLinkedRoleRequest& request, const GetServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceLinkedRoleOutcomeCallable getServiceLinkedRoleCallable(const Model::GetServiceLinkedRoleRequest& request) const;
			GetSynchronizConstantsOutcome getSynchronizConstants(const Model::GetSynchronizConstantsRequest &request)const;
			void getSynchronizConstantsAsync(const Model::GetSynchronizConstantsRequest& request, const GetSynchronizConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSynchronizConstantsOutcomeCallable getSynchronizConstantsCallable(const Model::GetSynchronizConstantsRequest& request) const;
			InsertSynchronizConstantsOutcome insertSynchronizConstants(const Model::InsertSynchronizConstantsRequest &request)const;
			void insertSynchronizConstantsAsync(const Model::InsertSynchronizConstantsRequest& request, const InsertSynchronizConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertSynchronizConstantsOutcomeCallable insertSynchronizConstantsCallable(const Model::InsertSynchronizConstantsRequest& request) const;
			ListConstantsOutcome listConstants(const Model::ListConstantsRequest &request)const;
			void listConstantsAsync(const Model::ListConstantsRequest& request, const ListConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConstantsOutcomeCallable listConstantsCallable(const Model::ListConstantsRequest& request) const;
			ListDbfsOutcome listDbfs(const Model::ListDbfsRequest &request)const;
			void listDbfsAsync(const Model::ListDbfsRequest& request, const ListDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDbfsOutcomeCallable listDbfsCallable(const Model::ListDbfsRequest& request) const;
			ListSnapshotOutcome listSnapshot(const Model::ListSnapshotRequest &request)const;
			void listSnapshotAsync(const Model::ListSnapshotRequest& request, const ListSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSnapshotOutcomeCallable listSnapshotCallable(const Model::ListSnapshotRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagValuesOutcome listTagValues(const Model::ListTagValuesRequest &request)const;
			void listTagValuesAsync(const Model::ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagValuesOutcomeCallable listTagValuesCallable(const Model::ListTagValuesRequest& request) const;
			ListTaskOutcome listTask(const Model::ListTaskRequest &request)const;
			void listTaskAsync(const Model::ListTaskRequest& request, const ListTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTaskOutcomeCallable listTaskCallable(const Model::ListTaskRequest& request) const;
			OpreateConstantsOutcome opreateConstants(const Model::OpreateConstantsRequest &request)const;
			void opreateConstantsAsync(const Model::OpreateConstantsRequest& request, const OpreateConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpreateConstantsOutcomeCallable opreateConstantsCallable(const Model::OpreateConstantsRequest& request) const;
			PublishUpgradeTaskOutcome publishUpgradeTask(const Model::PublishUpgradeTaskRequest &request)const;
			void publishUpgradeTaskAsync(const Model::PublishUpgradeTaskRequest& request, const PublishUpgradeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishUpgradeTaskOutcomeCallable publishUpgradeTaskCallable(const Model::PublishUpgradeTaskRequest& request) const;
			RenameDbfsOutcome renameDbfs(const Model::RenameDbfsRequest &request)const;
			void renameDbfsAsync(const Model::RenameDbfsRequest& request, const RenameDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenameDbfsOutcomeCallable renameDbfsCallable(const Model::RenameDbfsRequest& request) const;
			ResetDbfsOutcome resetDbfs(const Model::ResetDbfsRequest &request)const;
			void resetDbfsAsync(const Model::ResetDbfsRequest& request, const ResetDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetDbfsOutcomeCallable resetDbfsCallable(const Model::ResetDbfsRequest& request) const;
			ResizeDbfsOutcome resizeDbfs(const Model::ResizeDbfsRequest &request)const;
			void resizeDbfsAsync(const Model::ResizeDbfsRequest& request, const ResizeDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeDbfsOutcomeCallable resizeDbfsCallable(const Model::ResizeDbfsRequest& request) const;
			StopUpgradeTaskOutcome stopUpgradeTask(const Model::StopUpgradeTaskRequest &request)const;
			void stopUpgradeTaskAsync(const Model::StopUpgradeTaskRequest& request, const StopUpgradeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopUpgradeTaskOutcomeCallable stopUpgradeTaskCallable(const Model::StopUpgradeTaskRequest& request) const;
			TagDbfsOutcome tagDbfs(const Model::TagDbfsRequest &request)const;
			void tagDbfsAsync(const Model::TagDbfsRequest& request, const TagDbfsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagDbfsOutcomeCallable tagDbfsCallable(const Model::TagDbfsRequest& request) const;
			UpdateConstantsOutcome updateConstants(const Model::UpdateConstantsRequest &request)const;
			void updateConstantsAsync(const Model::UpdateConstantsRequest& request, const UpdateConstantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConstantsOutcomeCallable updateConstantsCallable(const Model::UpdateConstantsRequest& request) const;
			UpdateTaskOutcome updateTask(const Model::UpdateTaskRequest &request)const;
			void updateTaskAsync(const Model::UpdateTaskRequest& request, const UpdateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTaskOutcomeCallable updateTaskCallable(const Model::UpdateTaskRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DBFS_DBFSCLIENT_H_
