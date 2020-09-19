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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_DMS_ENTERPRISECLIENT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_DMS_ENTERPRISECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Dms_enterpriseExport.h"
#include "model/ApproveOrderRequest.h"
#include "model/ApproveOrderResult.h"
#include "model/CheckFinishMissionRequest.h"
#include "model/CheckFinishMissionResult.h"
#include "model/CloseOrderRequest.h"
#include "model/CloseOrderResult.h"
#include "model/CreateOrderRequest.h"
#include "model/CreateOrderResult.h"
#include "model/CreatePublishGroupTaskRequest.h"
#include "model/CreatePublishGroupTaskResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DisableUserRequest.h"
#include "model/DisableUserResult.h"
#include "model/EnableUserRequest.h"
#include "model/EnableUserResult.h"
#include "model/ExecuteDataCorrectRequest.h"
#include "model/ExecuteDataCorrectResult.h"
#include "model/ExecuteDataExportRequest.h"
#include "model/ExecuteDataExportResult.h"
#include "model/ExecuteScriptRequest.h"
#include "model/ExecuteScriptResult.h"
#include "model/GetApprovalDetailRequest.h"
#include "model/GetApprovalDetailResult.h"
#include "model/GetDataCorrectBackupFilesRequest.h"
#include "model/GetDataCorrectBackupFilesResult.h"
#include "model/GetDataCorrectOrderDetailRequest.h"
#include "model/GetDataCorrectOrderDetailResult.h"
#include "model/GetDataExportDownloadURLRequest.h"
#include "model/GetDataExportDownloadURLResult.h"
#include "model/GetDataExportOrderDetailRequest.h"
#include "model/GetDataExportOrderDetailResult.h"
#include "model/GetDatabaseRequest.h"
#include "model/GetDatabaseResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/GetLogicDatabaseRequest.h"
#include "model/GetLogicDatabaseResult.h"
#include "model/GetMetaTableColumnRequest.h"
#include "model/GetMetaTableColumnResult.h"
#include "model/GetMetaTableDetailInfoRequest.h"
#include "model/GetMetaTableDetailInfoResult.h"
#include "model/GetOpLogRequest.h"
#include "model/GetOpLogResult.h"
#include "model/GetOrderBaseInfoRequest.h"
#include "model/GetOrderBaseInfoResult.h"
#include "model/GetTableDBTopologyRequest.h"
#include "model/GetTableDBTopologyResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/GetUserActiveTenantRequest.h"
#include "model/GetUserActiveTenantResult.h"
#include "model/GrantUserPermissionRequest.h"
#include "model/GrantUserPermissionResult.h"
#include "model/ListColumnsRequest.h"
#include "model/ListColumnsResult.h"
#include "model/ListDatabaseUserPermssionsRequest.h"
#include "model/ListDatabaseUserPermssionsResult.h"
#include "model/ListDatabasesRequest.h"
#include "model/ListDatabasesResult.h"
#include "model/ListIndexesRequest.h"
#include "model/ListIndexesResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListLogicDatabasesRequest.h"
#include "model/ListLogicDatabasesResult.h"
#include "model/ListLogicTablesRequest.h"
#include "model/ListLogicTablesResult.h"
#include "model/ListOrdersRequest.h"
#include "model/ListOrdersResult.h"
#include "model/ListSensitiveColumnsRequest.h"
#include "model/ListSensitiveColumnsResult.h"
#include "model/ListSensitiveColumnsDetailRequest.h"
#include "model/ListSensitiveColumnsDetailResult.h"
#include "model/ListTablesRequest.h"
#include "model/ListTablesResult.h"
#include "model/ListUserPermissionsRequest.h"
#include "model/ListUserPermissionsResult.h"
#include "model/ListUserTenantsRequest.h"
#include "model/ListUserTenantsResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/ListWorkFlowNodesRequest.h"
#include "model/ListWorkFlowNodesResult.h"
#include "model/ListWorkFlowTemplatesRequest.h"
#include "model/ListWorkFlowTemplatesResult.h"
#include "model/RegisterInstanceRequest.h"
#include "model/RegisterInstanceResult.h"
#include "model/RegisterUserRequest.h"
#include "model/RegisterUserResult.h"
#include "model/RevokeUserPermissionRequest.h"
#include "model/RevokeUserPermissionResult.h"
#include "model/SearchDatabaseRequest.h"
#include "model/SearchDatabaseResult.h"
#include "model/SearchTableRequest.h"
#include "model/SearchTableResult.h"
#include "model/SetOwnersRequest.h"
#include "model/SetOwnersResult.h"
#include "model/SubmitOrderApprovalRequest.h"
#include "model/SubmitOrderApprovalResult.h"
#include "model/SyncDatabaseMetaRequest.h"
#include "model/SyncDatabaseMetaResult.h"
#include "model/SyncInstanceMetaRequest.h"
#include "model/SyncInstanceMetaResult.h"
#include "model/UpdateInstanceRequest.h"
#include "model/UpdateInstanceResult.h"
#include "model/UpdateUserRequest.h"
#include "model/UpdateUserResult.h"


namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT Dms_enterpriseClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ApproveOrderResult> ApproveOrderOutcome;
			typedef std::future<ApproveOrderOutcome> ApproveOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ApproveOrderRequest&, const ApproveOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApproveOrderAsyncHandler;
			typedef Outcome<Error, Model::CheckFinishMissionResult> CheckFinishMissionOutcome;
			typedef std::future<CheckFinishMissionOutcome> CheckFinishMissionOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CheckFinishMissionRequest&, const CheckFinishMissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckFinishMissionAsyncHandler;
			typedef Outcome<Error, Model::CloseOrderResult> CloseOrderOutcome;
			typedef std::future<CloseOrderOutcome> CloseOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CloseOrderRequest&, const CloseOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderResult> CreateOrderOutcome;
			typedef std::future<CreateOrderOutcome> CreateOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateOrderRequest&, const CreateOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderAsyncHandler;
			typedef Outcome<Error, Model::CreatePublishGroupTaskResult> CreatePublishGroupTaskOutcome;
			typedef std::future<CreatePublishGroupTaskOutcome> CreatePublishGroupTaskOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreatePublishGroupTaskRequest&, const CreatePublishGroupTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublishGroupTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DisableUserResult> DisableUserOutcome;
			typedef std::future<DisableUserOutcome> DisableUserOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DisableUserRequest&, const DisableUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableUserAsyncHandler;
			typedef Outcome<Error, Model::EnableUserResult> EnableUserOutcome;
			typedef std::future<EnableUserOutcome> EnableUserOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::EnableUserRequest&, const EnableUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableUserAsyncHandler;
			typedef Outcome<Error, Model::ExecuteDataCorrectResult> ExecuteDataCorrectOutcome;
			typedef std::future<ExecuteDataCorrectOutcome> ExecuteDataCorrectOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ExecuteDataCorrectRequest&, const ExecuteDataCorrectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteDataCorrectAsyncHandler;
			typedef Outcome<Error, Model::ExecuteDataExportResult> ExecuteDataExportOutcome;
			typedef std::future<ExecuteDataExportOutcome> ExecuteDataExportOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ExecuteDataExportRequest&, const ExecuteDataExportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteDataExportAsyncHandler;
			typedef Outcome<Error, Model::ExecuteScriptResult> ExecuteScriptOutcome;
			typedef std::future<ExecuteScriptOutcome> ExecuteScriptOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ExecuteScriptRequest&, const ExecuteScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteScriptAsyncHandler;
			typedef Outcome<Error, Model::GetApprovalDetailResult> GetApprovalDetailOutcome;
			typedef std::future<GetApprovalDetailOutcome> GetApprovalDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetApprovalDetailRequest&, const GetApprovalDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApprovalDetailAsyncHandler;
			typedef Outcome<Error, Model::GetDataCorrectBackupFilesResult> GetDataCorrectBackupFilesOutcome;
			typedef std::future<GetDataCorrectBackupFilesOutcome> GetDataCorrectBackupFilesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDataCorrectBackupFilesRequest&, const GetDataCorrectBackupFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataCorrectBackupFilesAsyncHandler;
			typedef Outcome<Error, Model::GetDataCorrectOrderDetailResult> GetDataCorrectOrderDetailOutcome;
			typedef std::future<GetDataCorrectOrderDetailOutcome> GetDataCorrectOrderDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDataCorrectOrderDetailRequest&, const GetDataCorrectOrderDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataCorrectOrderDetailAsyncHandler;
			typedef Outcome<Error, Model::GetDataExportDownloadURLResult> GetDataExportDownloadURLOutcome;
			typedef std::future<GetDataExportDownloadURLOutcome> GetDataExportDownloadURLOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDataExportDownloadURLRequest&, const GetDataExportDownloadURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataExportDownloadURLAsyncHandler;
			typedef Outcome<Error, Model::GetDataExportOrderDetailResult> GetDataExportOrderDetailOutcome;
			typedef std::future<GetDataExportOrderDetailOutcome> GetDataExportOrderDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDataExportOrderDetailRequest&, const GetDataExportOrderDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataExportOrderDetailAsyncHandler;
			typedef Outcome<Error, Model::GetDatabaseResult> GetDatabaseOutcome;
			typedef std::future<GetDatabaseOutcome> GetDatabaseOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDatabaseRequest&, const GetDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatabaseAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResult> GetInstanceOutcome;
			typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetInstanceRequest&, const GetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetLogicDatabaseResult> GetLogicDatabaseOutcome;
			typedef std::future<GetLogicDatabaseOutcome> GetLogicDatabaseOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetLogicDatabaseRequest&, const GetLogicDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLogicDatabaseAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableColumnResult> GetMetaTableColumnOutcome;
			typedef std::future<GetMetaTableColumnOutcome> GetMetaTableColumnOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetMetaTableColumnRequest&, const GetMetaTableColumnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableColumnAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableDetailInfoResult> GetMetaTableDetailInfoOutcome;
			typedef std::future<GetMetaTableDetailInfoOutcome> GetMetaTableDetailInfoOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetMetaTableDetailInfoRequest&, const GetMetaTableDetailInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableDetailInfoAsyncHandler;
			typedef Outcome<Error, Model::GetOpLogResult> GetOpLogOutcome;
			typedef std::future<GetOpLogOutcome> GetOpLogOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetOpLogRequest&, const GetOpLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpLogAsyncHandler;
			typedef Outcome<Error, Model::GetOrderBaseInfoResult> GetOrderBaseInfoOutcome;
			typedef std::future<GetOrderBaseInfoOutcome> GetOrderBaseInfoOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetOrderBaseInfoRequest&, const GetOrderBaseInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOrderBaseInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTableDBTopologyResult> GetTableDBTopologyOutcome;
			typedef std::future<GetTableDBTopologyOutcome> GetTableDBTopologyOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetTableDBTopologyRequest&, const GetTableDBTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableDBTopologyAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::GetUserActiveTenantResult> GetUserActiveTenantOutcome;
			typedef std::future<GetUserActiveTenantOutcome> GetUserActiveTenantOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetUserActiveTenantRequest&, const GetUserActiveTenantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserActiveTenantAsyncHandler;
			typedef Outcome<Error, Model::GrantUserPermissionResult> GrantUserPermissionOutcome;
			typedef std::future<GrantUserPermissionOutcome> GrantUserPermissionOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GrantUserPermissionRequest&, const GrantUserPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantUserPermissionAsyncHandler;
			typedef Outcome<Error, Model::ListColumnsResult> ListColumnsOutcome;
			typedef std::future<ListColumnsOutcome> ListColumnsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListColumnsRequest&, const ListColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListColumnsAsyncHandler;
			typedef Outcome<Error, Model::ListDatabaseUserPermssionsResult> ListDatabaseUserPermssionsOutcome;
			typedef std::future<ListDatabaseUserPermssionsOutcome> ListDatabaseUserPermssionsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListDatabaseUserPermssionsRequest&, const ListDatabaseUserPermssionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatabaseUserPermssionsAsyncHandler;
			typedef Outcome<Error, Model::ListDatabasesResult> ListDatabasesOutcome;
			typedef std::future<ListDatabasesOutcome> ListDatabasesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListDatabasesRequest&, const ListDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatabasesAsyncHandler;
			typedef Outcome<Error, Model::ListIndexesResult> ListIndexesOutcome;
			typedef std::future<ListIndexesOutcome> ListIndexesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListIndexesRequest&, const ListIndexesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIndexesAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListLogicDatabasesResult> ListLogicDatabasesOutcome;
			typedef std::future<ListLogicDatabasesOutcome> ListLogicDatabasesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListLogicDatabasesRequest&, const ListLogicDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogicDatabasesAsyncHandler;
			typedef Outcome<Error, Model::ListLogicTablesResult> ListLogicTablesOutcome;
			typedef std::future<ListLogicTablesOutcome> ListLogicTablesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListLogicTablesRequest&, const ListLogicTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogicTablesAsyncHandler;
			typedef Outcome<Error, Model::ListOrdersResult> ListOrdersOutcome;
			typedef std::future<ListOrdersOutcome> ListOrdersOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListOrdersRequest&, const ListOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListSensitiveColumnsResult> ListSensitiveColumnsOutcome;
			typedef std::future<ListSensitiveColumnsOutcome> ListSensitiveColumnsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListSensitiveColumnsRequest&, const ListSensitiveColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSensitiveColumnsAsyncHandler;
			typedef Outcome<Error, Model::ListSensitiveColumnsDetailResult> ListSensitiveColumnsDetailOutcome;
			typedef std::future<ListSensitiveColumnsDetailOutcome> ListSensitiveColumnsDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListSensitiveColumnsDetailRequest&, const ListSensitiveColumnsDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSensitiveColumnsDetailAsyncHandler;
			typedef Outcome<Error, Model::ListTablesResult> ListTablesOutcome;
			typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListTablesRequest&, const ListTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTablesAsyncHandler;
			typedef Outcome<Error, Model::ListUserPermissionsResult> ListUserPermissionsOutcome;
			typedef std::future<ListUserPermissionsOutcome> ListUserPermissionsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListUserPermissionsRequest&, const ListUserPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserPermissionsAsyncHandler;
			typedef Outcome<Error, Model::ListUserTenantsResult> ListUserTenantsOutcome;
			typedef std::future<ListUserTenantsOutcome> ListUserTenantsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListUserTenantsRequest&, const ListUserTenantsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserTenantsAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::ListWorkFlowNodesResult> ListWorkFlowNodesOutcome;
			typedef std::future<ListWorkFlowNodesOutcome> ListWorkFlowNodesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListWorkFlowNodesRequest&, const ListWorkFlowNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkFlowNodesAsyncHandler;
			typedef Outcome<Error, Model::ListWorkFlowTemplatesResult> ListWorkFlowTemplatesOutcome;
			typedef std::future<ListWorkFlowTemplatesOutcome> ListWorkFlowTemplatesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListWorkFlowTemplatesRequest&, const ListWorkFlowTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkFlowTemplatesAsyncHandler;
			typedef Outcome<Error, Model::RegisterInstanceResult> RegisterInstanceOutcome;
			typedef std::future<RegisterInstanceOutcome> RegisterInstanceOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::RegisterInstanceRequest&, const RegisterInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterInstanceAsyncHandler;
			typedef Outcome<Error, Model::RegisterUserResult> RegisterUserOutcome;
			typedef std::future<RegisterUserOutcome> RegisterUserOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::RegisterUserRequest&, const RegisterUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterUserAsyncHandler;
			typedef Outcome<Error, Model::RevokeUserPermissionResult> RevokeUserPermissionOutcome;
			typedef std::future<RevokeUserPermissionOutcome> RevokeUserPermissionOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::RevokeUserPermissionRequest&, const RevokeUserPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeUserPermissionAsyncHandler;
			typedef Outcome<Error, Model::SearchDatabaseResult> SearchDatabaseOutcome;
			typedef std::future<SearchDatabaseOutcome> SearchDatabaseOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::SearchDatabaseRequest&, const SearchDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchDatabaseAsyncHandler;
			typedef Outcome<Error, Model::SearchTableResult> SearchTableOutcome;
			typedef std::future<SearchTableOutcome> SearchTableOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::SearchTableRequest&, const SearchTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTableAsyncHandler;
			typedef Outcome<Error, Model::SetOwnersResult> SetOwnersOutcome;
			typedef std::future<SetOwnersOutcome> SetOwnersOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::SetOwnersRequest&, const SetOwnersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetOwnersAsyncHandler;
			typedef Outcome<Error, Model::SubmitOrderApprovalResult> SubmitOrderApprovalOutcome;
			typedef std::future<SubmitOrderApprovalOutcome> SubmitOrderApprovalOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::SubmitOrderApprovalRequest&, const SubmitOrderApprovalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitOrderApprovalAsyncHandler;
			typedef Outcome<Error, Model::SyncDatabaseMetaResult> SyncDatabaseMetaOutcome;
			typedef std::future<SyncDatabaseMetaOutcome> SyncDatabaseMetaOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::SyncDatabaseMetaRequest&, const SyncDatabaseMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncDatabaseMetaAsyncHandler;
			typedef Outcome<Error, Model::SyncInstanceMetaResult> SyncInstanceMetaOutcome;
			typedef std::future<SyncInstanceMetaOutcome> SyncInstanceMetaOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::SyncInstanceMetaRequest&, const SyncInstanceMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncInstanceMetaAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceResult> UpdateInstanceOutcome;
			typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::UpdateInstanceRequest&, const UpdateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserResult> UpdateUserOutcome;
			typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::UpdateUserRequest&, const UpdateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;

			Dms_enterpriseClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Dms_enterpriseClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Dms_enterpriseClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Dms_enterpriseClient();
			ApproveOrderOutcome approveOrder(const Model::ApproveOrderRequest &request)const;
			void approveOrderAsync(const Model::ApproveOrderRequest& request, const ApproveOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApproveOrderOutcomeCallable approveOrderCallable(const Model::ApproveOrderRequest& request) const;
			CheckFinishMissionOutcome checkFinishMission(const Model::CheckFinishMissionRequest &request)const;
			void checkFinishMissionAsync(const Model::CheckFinishMissionRequest& request, const CheckFinishMissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckFinishMissionOutcomeCallable checkFinishMissionCallable(const Model::CheckFinishMissionRequest& request) const;
			CloseOrderOutcome closeOrder(const Model::CloseOrderRequest &request)const;
			void closeOrderAsync(const Model::CloseOrderRequest& request, const CloseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseOrderOutcomeCallable closeOrderCallable(const Model::CloseOrderRequest& request) const;
			CreateOrderOutcome createOrder(const Model::CreateOrderRequest &request)const;
			void createOrderAsync(const Model::CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderOutcomeCallable createOrderCallable(const Model::CreateOrderRequest& request) const;
			CreatePublishGroupTaskOutcome createPublishGroupTask(const Model::CreatePublishGroupTaskRequest &request)const;
			void createPublishGroupTaskAsync(const Model::CreatePublishGroupTaskRequest& request, const CreatePublishGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePublishGroupTaskOutcomeCallable createPublishGroupTaskCallable(const Model::CreatePublishGroupTaskRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DisableUserOutcome disableUser(const Model::DisableUserRequest &request)const;
			void disableUserAsync(const Model::DisableUserRequest& request, const DisableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableUserOutcomeCallable disableUserCallable(const Model::DisableUserRequest& request) const;
			EnableUserOutcome enableUser(const Model::EnableUserRequest &request)const;
			void enableUserAsync(const Model::EnableUserRequest& request, const EnableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableUserOutcomeCallable enableUserCallable(const Model::EnableUserRequest& request) const;
			ExecuteDataCorrectOutcome executeDataCorrect(const Model::ExecuteDataCorrectRequest &request)const;
			void executeDataCorrectAsync(const Model::ExecuteDataCorrectRequest& request, const ExecuteDataCorrectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteDataCorrectOutcomeCallable executeDataCorrectCallable(const Model::ExecuteDataCorrectRequest& request) const;
			ExecuteDataExportOutcome executeDataExport(const Model::ExecuteDataExportRequest &request)const;
			void executeDataExportAsync(const Model::ExecuteDataExportRequest& request, const ExecuteDataExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteDataExportOutcomeCallable executeDataExportCallable(const Model::ExecuteDataExportRequest& request) const;
			ExecuteScriptOutcome executeScript(const Model::ExecuteScriptRequest &request)const;
			void executeScriptAsync(const Model::ExecuteScriptRequest& request, const ExecuteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteScriptOutcomeCallable executeScriptCallable(const Model::ExecuteScriptRequest& request) const;
			GetApprovalDetailOutcome getApprovalDetail(const Model::GetApprovalDetailRequest &request)const;
			void getApprovalDetailAsync(const Model::GetApprovalDetailRequest& request, const GetApprovalDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApprovalDetailOutcomeCallable getApprovalDetailCallable(const Model::GetApprovalDetailRequest& request) const;
			GetDataCorrectBackupFilesOutcome getDataCorrectBackupFiles(const Model::GetDataCorrectBackupFilesRequest &request)const;
			void getDataCorrectBackupFilesAsync(const Model::GetDataCorrectBackupFilesRequest& request, const GetDataCorrectBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataCorrectBackupFilesOutcomeCallable getDataCorrectBackupFilesCallable(const Model::GetDataCorrectBackupFilesRequest& request) const;
			GetDataCorrectOrderDetailOutcome getDataCorrectOrderDetail(const Model::GetDataCorrectOrderDetailRequest &request)const;
			void getDataCorrectOrderDetailAsync(const Model::GetDataCorrectOrderDetailRequest& request, const GetDataCorrectOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataCorrectOrderDetailOutcomeCallable getDataCorrectOrderDetailCallable(const Model::GetDataCorrectOrderDetailRequest& request) const;
			GetDataExportDownloadURLOutcome getDataExportDownloadURL(const Model::GetDataExportDownloadURLRequest &request)const;
			void getDataExportDownloadURLAsync(const Model::GetDataExportDownloadURLRequest& request, const GetDataExportDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataExportDownloadURLOutcomeCallable getDataExportDownloadURLCallable(const Model::GetDataExportDownloadURLRequest& request) const;
			GetDataExportOrderDetailOutcome getDataExportOrderDetail(const Model::GetDataExportOrderDetailRequest &request)const;
			void getDataExportOrderDetailAsync(const Model::GetDataExportOrderDetailRequest& request, const GetDataExportOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataExportOrderDetailOutcomeCallable getDataExportOrderDetailCallable(const Model::GetDataExportOrderDetailRequest& request) const;
			GetDatabaseOutcome getDatabase(const Model::GetDatabaseRequest &request)const;
			void getDatabaseAsync(const Model::GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatabaseOutcomeCallable getDatabaseCallable(const Model::GetDatabaseRequest& request) const;
			GetInstanceOutcome getInstance(const Model::GetInstanceRequest &request)const;
			void getInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceOutcomeCallable getInstanceCallable(const Model::GetInstanceRequest& request) const;
			GetLogicDatabaseOutcome getLogicDatabase(const Model::GetLogicDatabaseRequest &request)const;
			void getLogicDatabaseAsync(const Model::GetLogicDatabaseRequest& request, const GetLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLogicDatabaseOutcomeCallable getLogicDatabaseCallable(const Model::GetLogicDatabaseRequest& request) const;
			GetMetaTableColumnOutcome getMetaTableColumn(const Model::GetMetaTableColumnRequest &request)const;
			void getMetaTableColumnAsync(const Model::GetMetaTableColumnRequest& request, const GetMetaTableColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableColumnOutcomeCallable getMetaTableColumnCallable(const Model::GetMetaTableColumnRequest& request) const;
			GetMetaTableDetailInfoOutcome getMetaTableDetailInfo(const Model::GetMetaTableDetailInfoRequest &request)const;
			void getMetaTableDetailInfoAsync(const Model::GetMetaTableDetailInfoRequest& request, const GetMetaTableDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableDetailInfoOutcomeCallable getMetaTableDetailInfoCallable(const Model::GetMetaTableDetailInfoRequest& request) const;
			GetOpLogOutcome getOpLog(const Model::GetOpLogRequest &request)const;
			void getOpLogAsync(const Model::GetOpLogRequest& request, const GetOpLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpLogOutcomeCallable getOpLogCallable(const Model::GetOpLogRequest& request) const;
			GetOrderBaseInfoOutcome getOrderBaseInfo(const Model::GetOrderBaseInfoRequest &request)const;
			void getOrderBaseInfoAsync(const Model::GetOrderBaseInfoRequest& request, const GetOrderBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOrderBaseInfoOutcomeCallable getOrderBaseInfoCallable(const Model::GetOrderBaseInfoRequest& request) const;
			GetTableDBTopologyOutcome getTableDBTopology(const Model::GetTableDBTopologyRequest &request)const;
			void getTableDBTopologyAsync(const Model::GetTableDBTopologyRequest& request, const GetTableDBTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableDBTopologyOutcomeCallable getTableDBTopologyCallable(const Model::GetTableDBTopologyRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			GetUserActiveTenantOutcome getUserActiveTenant(const Model::GetUserActiveTenantRequest &request)const;
			void getUserActiveTenantAsync(const Model::GetUserActiveTenantRequest& request, const GetUserActiveTenantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserActiveTenantOutcomeCallable getUserActiveTenantCallable(const Model::GetUserActiveTenantRequest& request) const;
			GrantUserPermissionOutcome grantUserPermission(const Model::GrantUserPermissionRequest &request)const;
			void grantUserPermissionAsync(const Model::GrantUserPermissionRequest& request, const GrantUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantUserPermissionOutcomeCallable grantUserPermissionCallable(const Model::GrantUserPermissionRequest& request) const;
			ListColumnsOutcome listColumns(const Model::ListColumnsRequest &request)const;
			void listColumnsAsync(const Model::ListColumnsRequest& request, const ListColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListColumnsOutcomeCallable listColumnsCallable(const Model::ListColumnsRequest& request) const;
			ListDatabaseUserPermssionsOutcome listDatabaseUserPermssions(const Model::ListDatabaseUserPermssionsRequest &request)const;
			void listDatabaseUserPermssionsAsync(const Model::ListDatabaseUserPermssionsRequest& request, const ListDatabaseUserPermssionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatabaseUserPermssionsOutcomeCallable listDatabaseUserPermssionsCallable(const Model::ListDatabaseUserPermssionsRequest& request) const;
			ListDatabasesOutcome listDatabases(const Model::ListDatabasesRequest &request)const;
			void listDatabasesAsync(const Model::ListDatabasesRequest& request, const ListDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatabasesOutcomeCallable listDatabasesCallable(const Model::ListDatabasesRequest& request) const;
			ListIndexesOutcome listIndexes(const Model::ListIndexesRequest &request)const;
			void listIndexesAsync(const Model::ListIndexesRequest& request, const ListIndexesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIndexesOutcomeCallable listIndexesCallable(const Model::ListIndexesRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListLogicDatabasesOutcome listLogicDatabases(const Model::ListLogicDatabasesRequest &request)const;
			void listLogicDatabasesAsync(const Model::ListLogicDatabasesRequest& request, const ListLogicDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogicDatabasesOutcomeCallable listLogicDatabasesCallable(const Model::ListLogicDatabasesRequest& request) const;
			ListLogicTablesOutcome listLogicTables(const Model::ListLogicTablesRequest &request)const;
			void listLogicTablesAsync(const Model::ListLogicTablesRequest& request, const ListLogicTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogicTablesOutcomeCallable listLogicTablesCallable(const Model::ListLogicTablesRequest& request) const;
			ListOrdersOutcome listOrders(const Model::ListOrdersRequest &request)const;
			void listOrdersAsync(const Model::ListOrdersRequest& request, const ListOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrdersOutcomeCallable listOrdersCallable(const Model::ListOrdersRequest& request) const;
			ListSensitiveColumnsOutcome listSensitiveColumns(const Model::ListSensitiveColumnsRequest &request)const;
			void listSensitiveColumnsAsync(const Model::ListSensitiveColumnsRequest& request, const ListSensitiveColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSensitiveColumnsOutcomeCallable listSensitiveColumnsCallable(const Model::ListSensitiveColumnsRequest& request) const;
			ListSensitiveColumnsDetailOutcome listSensitiveColumnsDetail(const Model::ListSensitiveColumnsDetailRequest &request)const;
			void listSensitiveColumnsDetailAsync(const Model::ListSensitiveColumnsDetailRequest& request, const ListSensitiveColumnsDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSensitiveColumnsDetailOutcomeCallable listSensitiveColumnsDetailCallable(const Model::ListSensitiveColumnsDetailRequest& request) const;
			ListTablesOutcome listTables(const Model::ListTablesRequest &request)const;
			void listTablesAsync(const Model::ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTablesOutcomeCallable listTablesCallable(const Model::ListTablesRequest& request) const;
			ListUserPermissionsOutcome listUserPermissions(const Model::ListUserPermissionsRequest &request)const;
			void listUserPermissionsAsync(const Model::ListUserPermissionsRequest& request, const ListUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserPermissionsOutcomeCallable listUserPermissionsCallable(const Model::ListUserPermissionsRequest& request) const;
			ListUserTenantsOutcome listUserTenants(const Model::ListUserTenantsRequest &request)const;
			void listUserTenantsAsync(const Model::ListUserTenantsRequest& request, const ListUserTenantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserTenantsOutcomeCallable listUserTenantsCallable(const Model::ListUserTenantsRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			ListWorkFlowNodesOutcome listWorkFlowNodes(const Model::ListWorkFlowNodesRequest &request)const;
			void listWorkFlowNodesAsync(const Model::ListWorkFlowNodesRequest& request, const ListWorkFlowNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkFlowNodesOutcomeCallable listWorkFlowNodesCallable(const Model::ListWorkFlowNodesRequest& request) const;
			ListWorkFlowTemplatesOutcome listWorkFlowTemplates(const Model::ListWorkFlowTemplatesRequest &request)const;
			void listWorkFlowTemplatesAsync(const Model::ListWorkFlowTemplatesRequest& request, const ListWorkFlowTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkFlowTemplatesOutcomeCallable listWorkFlowTemplatesCallable(const Model::ListWorkFlowTemplatesRequest& request) const;
			RegisterInstanceOutcome registerInstance(const Model::RegisterInstanceRequest &request)const;
			void registerInstanceAsync(const Model::RegisterInstanceRequest& request, const RegisterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterInstanceOutcomeCallable registerInstanceCallable(const Model::RegisterInstanceRequest& request) const;
			RegisterUserOutcome registerUser(const Model::RegisterUserRequest &request)const;
			void registerUserAsync(const Model::RegisterUserRequest& request, const RegisterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterUserOutcomeCallable registerUserCallable(const Model::RegisterUserRequest& request) const;
			RevokeUserPermissionOutcome revokeUserPermission(const Model::RevokeUserPermissionRequest &request)const;
			void revokeUserPermissionAsync(const Model::RevokeUserPermissionRequest& request, const RevokeUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeUserPermissionOutcomeCallable revokeUserPermissionCallable(const Model::RevokeUserPermissionRequest& request) const;
			SearchDatabaseOutcome searchDatabase(const Model::SearchDatabaseRequest &request)const;
			void searchDatabaseAsync(const Model::SearchDatabaseRequest& request, const SearchDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchDatabaseOutcomeCallable searchDatabaseCallable(const Model::SearchDatabaseRequest& request) const;
			SearchTableOutcome searchTable(const Model::SearchTableRequest &request)const;
			void searchTableAsync(const Model::SearchTableRequest& request, const SearchTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTableOutcomeCallable searchTableCallable(const Model::SearchTableRequest& request) const;
			SetOwnersOutcome setOwners(const Model::SetOwnersRequest &request)const;
			void setOwnersAsync(const Model::SetOwnersRequest& request, const SetOwnersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetOwnersOutcomeCallable setOwnersCallable(const Model::SetOwnersRequest& request) const;
			SubmitOrderApprovalOutcome submitOrderApproval(const Model::SubmitOrderApprovalRequest &request)const;
			void submitOrderApprovalAsync(const Model::SubmitOrderApprovalRequest& request, const SubmitOrderApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitOrderApprovalOutcomeCallable submitOrderApprovalCallable(const Model::SubmitOrderApprovalRequest& request) const;
			SyncDatabaseMetaOutcome syncDatabaseMeta(const Model::SyncDatabaseMetaRequest &request)const;
			void syncDatabaseMetaAsync(const Model::SyncDatabaseMetaRequest& request, const SyncDatabaseMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncDatabaseMetaOutcomeCallable syncDatabaseMetaCallable(const Model::SyncDatabaseMetaRequest& request) const;
			SyncInstanceMetaOutcome syncInstanceMeta(const Model::SyncInstanceMetaRequest &request)const;
			void syncInstanceMetaAsync(const Model::SyncInstanceMetaRequest& request, const SyncInstanceMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncInstanceMetaOutcomeCallable syncInstanceMetaCallable(const Model::SyncInstanceMetaRequest& request) const;
			UpdateInstanceOutcome updateInstance(const Model::UpdateInstanceRequest &request)const;
			void updateInstanceAsync(const Model::UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceOutcomeCallable updateInstanceCallable(const Model::UpdateInstanceRequest& request) const;
			UpdateUserOutcome updateUser(const Model::UpdateUserRequest &request)const;
			void updateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserOutcomeCallable updateUserCallable(const Model::UpdateUserRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DMS_ENTERPRISE_DMS_ENTERPRISECLIENT_H_
