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
#include "model/AddLhMembersRequest.h"
#include "model/AddLhMembersResult.h"
#include "model/AddLogicTableRouteConfigRequest.h"
#include "model/AddLogicTableRouteConfigResult.h"
#include "model/ApproveOrderRequest.h"
#include "model/ApproveOrderResult.h"
#include "model/ChangeColumnSecLevelRequest.h"
#include "model/ChangeColumnSecLevelResult.h"
#include "model/ChangeLhDagOwnerRequest.h"
#include "model/ChangeLhDagOwnerResult.h"
#include "model/CloseOrderRequest.h"
#include "model/CloseOrderResult.h"
#include "model/CreateDataCorrectOrderRequest.h"
#include "model/CreateDataCorrectOrderResult.h"
#include "model/CreateDataCronClearOrderRequest.h"
#include "model/CreateDataCronClearOrderResult.h"
#include "model/CreateDataImportOrderRequest.h"
#include "model/CreateDataImportOrderResult.h"
#include "model/CreateFreeLockCorrectOrderRequest.h"
#include "model/CreateFreeLockCorrectOrderResult.h"
#include "model/CreateLakeHouseSpaceRequest.h"
#include "model/CreateLakeHouseSpaceResult.h"
#include "model/CreateLogicDatabaseRequest.h"
#include "model/CreateLogicDatabaseResult.h"
#include "model/CreateOrderRequest.h"
#include "model/CreateOrderResult.h"
#include "model/CreateProxyRequest.h"
#include "model/CreateProxyResult.h"
#include "model/CreateProxyAccessRequest.h"
#include "model/CreateProxyAccessResult.h"
#include "model/CreatePublishGroupTaskRequest.h"
#include "model/CreatePublishGroupTaskResult.h"
#include "model/CreateSQLReviewOrderRequest.h"
#include "model/CreateSQLReviewOrderResult.h"
#include "model/CreateStandardGroupRequest.h"
#include "model/CreateStandardGroupResult.h"
#include "model/CreateStructSyncOrderRequest.h"
#include "model/CreateStructSyncOrderResult.h"
#include "model/CreateUploadFileJobRequest.h"
#include "model/CreateUploadFileJobResult.h"
#include "model/CreateUploadOSSFileJobRequest.h"
#include "model/CreateUploadOSSFileJobResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteLakeHouseSpaceRequest.h"
#include "model/DeleteLakeHouseSpaceResult.h"
#include "model/DeleteLhMembersRequest.h"
#include "model/DeleteLhMembersResult.h"
#include "model/DeleteLogicDatabaseRequest.h"
#include "model/DeleteLogicDatabaseResult.h"
#include "model/DeleteLogicTableRouteConfigRequest.h"
#include "model/DeleteLogicTableRouteConfigResult.h"
#include "model/DeleteProxyRequest.h"
#include "model/DeleteProxyResult.h"
#include "model/DeleteProxyAccessRequest.h"
#include "model/DeleteProxyAccessResult.h"
#include "model/DeleteTaskFlowRequest.h"
#include "model/DeleteTaskFlowResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DisableUserRequest.h"
#include "model/DisableUserResult.h"
#include "model/EditLogicDatabaseRequest.h"
#include "model/EditLogicDatabaseResult.h"
#include "model/EnableUserRequest.h"
#include "model/EnableUserResult.h"
#include "model/ExecuteDataCorrectRequest.h"
#include "model/ExecuteDataCorrectResult.h"
#include "model/ExecuteDataExportRequest.h"
#include "model/ExecuteDataExportResult.h"
#include "model/ExecuteScriptRequest.h"
#include "model/ExecuteScriptResult.h"
#include "model/ExecuteStructSyncRequest.h"
#include "model/ExecuteStructSyncResult.h"
#include "model/GetApprovalDetailRequest.h"
#include "model/GetApprovalDetailResult.h"
#include "model/GetDBTaskSQLJobLogRequest.h"
#include "model/GetDBTaskSQLJobLogResult.h"
#include "model/GetDBTopologyRequest.h"
#include "model/GetDBTopologyResult.h"
#include "model/GetDataCorrectBackupFilesRequest.h"
#include "model/GetDataCorrectBackupFilesResult.h"
#include "model/GetDataCorrectOrderDetailRequest.h"
#include "model/GetDataCorrectOrderDetailResult.h"
#include "model/GetDataCorrectSQLFileRequest.h"
#include "model/GetDataCorrectSQLFileResult.h"
#include "model/GetDataCorrectTaskDetailRequest.h"
#include "model/GetDataCorrectTaskDetailResult.h"
#include "model/GetDataCronClearTaskDetailListRequest.h"
#include "model/GetDataCronClearTaskDetailListResult.h"
#include "model/GetDataExportDownloadURLRequest.h"
#include "model/GetDataExportDownloadURLResult.h"
#include "model/GetDataExportOrderDetailRequest.h"
#include "model/GetDataExportOrderDetailResult.h"
#include "model/GetDatabaseRequest.h"
#include "model/GetDatabaseResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/GetLhSpaceByNameRequest.h"
#include "model/GetLhSpaceByNameResult.h"
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
#include "model/GetOwnerApplyOrderDetailRequest.h"
#include "model/GetOwnerApplyOrderDetailResult.h"
#include "model/GetPermApplyOrderDetailRequest.h"
#include "model/GetPermApplyOrderDetailResult.h"
#include "model/GetPhysicalDatabaseRequest.h"
#include "model/GetPhysicalDatabaseResult.h"
#include "model/GetProxyRequest.h"
#include "model/GetProxyResult.h"
#include "model/GetSQLReviewCheckResultStatusRequest.h"
#include "model/GetSQLReviewCheckResultStatusResult.h"
#include "model/GetSQLReviewOptimizeDetailRequest.h"
#include "model/GetSQLReviewOptimizeDetailResult.h"
#include "model/GetStructSyncExecSqlDetailRequest.h"
#include "model/GetStructSyncExecSqlDetailResult.h"
#include "model/GetStructSyncJobAnalyzeResultRequest.h"
#include "model/GetStructSyncJobAnalyzeResultResult.h"
#include "model/GetStructSyncJobDetailRequest.h"
#include "model/GetStructSyncJobDetailResult.h"
#include "model/GetStructSyncOrderDetailRequest.h"
#include "model/GetStructSyncOrderDetailResult.h"
#include "model/GetTableDBTopologyRequest.h"
#include "model/GetTableDBTopologyResult.h"
#include "model/GetTableTopologyRequest.h"
#include "model/GetTableTopologyResult.h"
#include "model/GetTaskInstanceRelationRequest.h"
#include "model/GetTaskInstanceRelationResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/GetUserActiveTenantRequest.h"
#include "model/GetUserActiveTenantResult.h"
#include "model/GetUserUploadFileJobRequest.h"
#include "model/GetUserUploadFileJobResult.h"
#include "model/GrantUserPermissionRequest.h"
#include "model/GrantUserPermissionResult.h"
#include "model/InspectProxyAccessSecretRequest.h"
#include "model/InspectProxyAccessSecretResult.h"
#include "model/ListColumnsRequest.h"
#include "model/ListColumnsResult.h"
#include "model/ListDBTaskSQLJobRequest.h"
#include "model/ListDBTaskSQLJobResult.h"
#include "model/ListDBTaskSQLJobDetailRequest.h"
#include "model/ListDBTaskSQLJobDetailResult.h"
#include "model/ListDDLPublishRecordsRequest.h"
#include "model/ListDDLPublishRecordsResult.h"
#include "model/ListDataCorrectPreCheckDBRequest.h"
#include "model/ListDataCorrectPreCheckDBResult.h"
#include "model/ListDataCorrectPreCheckSQLRequest.h"
#include "model/ListDataCorrectPreCheckSQLResult.h"
#include "model/ListDatabaseUserPermssionsRequest.h"
#include "model/ListDatabaseUserPermssionsResult.h"
#include "model/ListDatabasesRequest.h"
#include "model/ListDatabasesResult.h"
#include "model/ListIndexesRequest.h"
#include "model/ListIndexesResult.h"
#include "model/ListInstanceLoginAuditLogRequest.h"
#include "model/ListInstanceLoginAuditLogResult.h"
#include "model/ListInstanceUserPermissionsRequest.h"
#include "model/ListInstanceUserPermissionsResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListLhTaskFlowAndScenarioRequest.h"
#include "model/ListLhTaskFlowAndScenarioResult.h"
#include "model/ListLogicDatabasesRequest.h"
#include "model/ListLogicDatabasesResult.h"
#include "model/ListLogicTableRouteConfigRequest.h"
#include "model/ListLogicTableRouteConfigResult.h"
#include "model/ListLogicTablesRequest.h"
#include "model/ListLogicTablesResult.h"
#include "model/ListOrdersRequest.h"
#include "model/ListOrdersResult.h"
#include "model/ListProxiesRequest.h"
#include "model/ListProxiesResult.h"
#include "model/ListProxyAccessesRequest.h"
#include "model/ListProxyAccessesResult.h"
#include "model/ListProxySQLExecAuditLogRequest.h"
#include "model/ListProxySQLExecAuditLogResult.h"
#include "model/ListSQLExecAuditLogRequest.h"
#include "model/ListSQLExecAuditLogResult.h"
#include "model/ListSQLReviewOriginSQLRequest.h"
#include "model/ListSQLReviewOriginSQLResult.h"
#include "model/ListSensitiveColumnsRequest.h"
#include "model/ListSensitiveColumnsResult.h"
#include "model/ListSensitiveColumnsDetailRequest.h"
#include "model/ListSensitiveColumnsDetailResult.h"
#include "model/ListStandardGroupsRequest.h"
#include "model/ListStandardGroupsResult.h"
#include "model/ListTablesRequest.h"
#include "model/ListTablesResult.h"
#include "model/ListTaskFlowRequest.h"
#include "model/ListTaskFlowResult.h"
#include "model/ListTaskFlowInstanceRequest.h"
#include "model/ListTaskFlowInstanceResult.h"
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
#include "model/ModifyDataCorrectExecSQLRequest.h"
#include "model/ModifyDataCorrectExecSQLResult.h"
#include "model/PauseDataCorrectSQLJobRequest.h"
#include "model/PauseDataCorrectSQLJobResult.h"
#include "model/ReDeployLhDagVersionRequest.h"
#include "model/ReDeployLhDagVersionResult.h"
#include "model/RegisterInstanceRequest.h"
#include "model/RegisterInstanceResult.h"
#include "model/RegisterUserRequest.h"
#include "model/RegisterUserResult.h"
#include "model/RestartDataCorrectSQLJobRequest.h"
#include "model/RestartDataCorrectSQLJobResult.h"
#include "model/RetryDataCorrectPreCheckRequest.h"
#include "model/RetryDataCorrectPreCheckResult.h"
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
#include "model/SubmitStructSyncOrderApprovalRequest.h"
#include "model/SubmitStructSyncOrderApprovalResult.h"
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
			typedef Outcome<Error, Model::AddLhMembersResult> AddLhMembersOutcome;
			typedef std::future<AddLhMembersOutcome> AddLhMembersOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::AddLhMembersRequest&, const AddLhMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLhMembersAsyncHandler;
			typedef Outcome<Error, Model::AddLogicTableRouteConfigResult> AddLogicTableRouteConfigOutcome;
			typedef std::future<AddLogicTableRouteConfigOutcome> AddLogicTableRouteConfigOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::AddLogicTableRouteConfigRequest&, const AddLogicTableRouteConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLogicTableRouteConfigAsyncHandler;
			typedef Outcome<Error, Model::ApproveOrderResult> ApproveOrderOutcome;
			typedef std::future<ApproveOrderOutcome> ApproveOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ApproveOrderRequest&, const ApproveOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApproveOrderAsyncHandler;
			typedef Outcome<Error, Model::ChangeColumnSecLevelResult> ChangeColumnSecLevelOutcome;
			typedef std::future<ChangeColumnSecLevelOutcome> ChangeColumnSecLevelOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ChangeColumnSecLevelRequest&, const ChangeColumnSecLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeColumnSecLevelAsyncHandler;
			typedef Outcome<Error, Model::ChangeLhDagOwnerResult> ChangeLhDagOwnerOutcome;
			typedef std::future<ChangeLhDagOwnerOutcome> ChangeLhDagOwnerOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ChangeLhDagOwnerRequest&, const ChangeLhDagOwnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeLhDagOwnerAsyncHandler;
			typedef Outcome<Error, Model::CloseOrderResult> CloseOrderOutcome;
			typedef std::future<CloseOrderOutcome> CloseOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CloseOrderRequest&, const CloseOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateDataCorrectOrderResult> CreateDataCorrectOrderOutcome;
			typedef std::future<CreateDataCorrectOrderOutcome> CreateDataCorrectOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateDataCorrectOrderRequest&, const CreateDataCorrectOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataCorrectOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateDataCronClearOrderResult> CreateDataCronClearOrderOutcome;
			typedef std::future<CreateDataCronClearOrderOutcome> CreateDataCronClearOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateDataCronClearOrderRequest&, const CreateDataCronClearOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataCronClearOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateDataImportOrderResult> CreateDataImportOrderOutcome;
			typedef std::future<CreateDataImportOrderOutcome> CreateDataImportOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateDataImportOrderRequest&, const CreateDataImportOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataImportOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateFreeLockCorrectOrderResult> CreateFreeLockCorrectOrderOutcome;
			typedef std::future<CreateFreeLockCorrectOrderOutcome> CreateFreeLockCorrectOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateFreeLockCorrectOrderRequest&, const CreateFreeLockCorrectOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFreeLockCorrectOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateLakeHouseSpaceResult> CreateLakeHouseSpaceOutcome;
			typedef std::future<CreateLakeHouseSpaceOutcome> CreateLakeHouseSpaceOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateLakeHouseSpaceRequest&, const CreateLakeHouseSpaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLakeHouseSpaceAsyncHandler;
			typedef Outcome<Error, Model::CreateLogicDatabaseResult> CreateLogicDatabaseOutcome;
			typedef std::future<CreateLogicDatabaseOutcome> CreateLogicDatabaseOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateLogicDatabaseRequest&, const CreateLogicDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogicDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderResult> CreateOrderOutcome;
			typedef std::future<CreateOrderOutcome> CreateOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateOrderRequest&, const CreateOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateProxyResult> CreateProxyOutcome;
			typedef std::future<CreateProxyOutcome> CreateProxyOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateProxyRequest&, const CreateProxyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxyAsyncHandler;
			typedef Outcome<Error, Model::CreateProxyAccessResult> CreateProxyAccessOutcome;
			typedef std::future<CreateProxyAccessOutcome> CreateProxyAccessOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateProxyAccessRequest&, const CreateProxyAccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxyAccessAsyncHandler;
			typedef Outcome<Error, Model::CreatePublishGroupTaskResult> CreatePublishGroupTaskOutcome;
			typedef std::future<CreatePublishGroupTaskOutcome> CreatePublishGroupTaskOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreatePublishGroupTaskRequest&, const CreatePublishGroupTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublishGroupTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateSQLReviewOrderResult> CreateSQLReviewOrderOutcome;
			typedef std::future<CreateSQLReviewOrderOutcome> CreateSQLReviewOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateSQLReviewOrderRequest&, const CreateSQLReviewOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSQLReviewOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateStandardGroupResult> CreateStandardGroupOutcome;
			typedef std::future<CreateStandardGroupOutcome> CreateStandardGroupOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateStandardGroupRequest&, const CreateStandardGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStandardGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateStructSyncOrderResult> CreateStructSyncOrderOutcome;
			typedef std::future<CreateStructSyncOrderOutcome> CreateStructSyncOrderOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateStructSyncOrderRequest&, const CreateStructSyncOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStructSyncOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadFileJobResult> CreateUploadFileJobOutcome;
			typedef std::future<CreateUploadFileJobOutcome> CreateUploadFileJobOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateUploadFileJobRequest&, const CreateUploadFileJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadFileJobAsyncHandler;
			typedef Outcome<Error, Model::CreateUploadOSSFileJobResult> CreateUploadOSSFileJobOutcome;
			typedef std::future<CreateUploadOSSFileJobOutcome> CreateUploadOSSFileJobOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::CreateUploadOSSFileJobRequest&, const CreateUploadOSSFileJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadOSSFileJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteLakeHouseSpaceResult> DeleteLakeHouseSpaceOutcome;
			typedef std::future<DeleteLakeHouseSpaceOutcome> DeleteLakeHouseSpaceOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteLakeHouseSpaceRequest&, const DeleteLakeHouseSpaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLakeHouseSpaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteLhMembersResult> DeleteLhMembersOutcome;
			typedef std::future<DeleteLhMembersOutcome> DeleteLhMembersOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteLhMembersRequest&, const DeleteLhMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLhMembersAsyncHandler;
			typedef Outcome<Error, Model::DeleteLogicDatabaseResult> DeleteLogicDatabaseOutcome;
			typedef std::future<DeleteLogicDatabaseOutcome> DeleteLogicDatabaseOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteLogicDatabaseRequest&, const DeleteLogicDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogicDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DeleteLogicTableRouteConfigResult> DeleteLogicTableRouteConfigOutcome;
			typedef std::future<DeleteLogicTableRouteConfigOutcome> DeleteLogicTableRouteConfigOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteLogicTableRouteConfigRequest&, const DeleteLogicTableRouteConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogicTableRouteConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteProxyResult> DeleteProxyOutcome;
			typedef std::future<DeleteProxyOutcome> DeleteProxyOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteProxyRequest&, const DeleteProxyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProxyAsyncHandler;
			typedef Outcome<Error, Model::DeleteProxyAccessResult> DeleteProxyAccessOutcome;
			typedef std::future<DeleteProxyAccessOutcome> DeleteProxyAccessOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteProxyAccessRequest&, const DeleteProxyAccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProxyAccessAsyncHandler;
			typedef Outcome<Error, Model::DeleteTaskFlowResult> DeleteTaskFlowOutcome;
			typedef std::future<DeleteTaskFlowOutcome> DeleteTaskFlowOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteTaskFlowRequest&, const DeleteTaskFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskFlowAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DisableUserResult> DisableUserOutcome;
			typedef std::future<DisableUserOutcome> DisableUserOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::DisableUserRequest&, const DisableUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableUserAsyncHandler;
			typedef Outcome<Error, Model::EditLogicDatabaseResult> EditLogicDatabaseOutcome;
			typedef std::future<EditLogicDatabaseOutcome> EditLogicDatabaseOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::EditLogicDatabaseRequest&, const EditLogicDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditLogicDatabaseAsyncHandler;
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
			typedef Outcome<Error, Model::ExecuteStructSyncResult> ExecuteStructSyncOutcome;
			typedef std::future<ExecuteStructSyncOutcome> ExecuteStructSyncOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ExecuteStructSyncRequest&, const ExecuteStructSyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteStructSyncAsyncHandler;
			typedef Outcome<Error, Model::GetApprovalDetailResult> GetApprovalDetailOutcome;
			typedef std::future<GetApprovalDetailOutcome> GetApprovalDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetApprovalDetailRequest&, const GetApprovalDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApprovalDetailAsyncHandler;
			typedef Outcome<Error, Model::GetDBTaskSQLJobLogResult> GetDBTaskSQLJobLogOutcome;
			typedef std::future<GetDBTaskSQLJobLogOutcome> GetDBTaskSQLJobLogOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDBTaskSQLJobLogRequest&, const GetDBTaskSQLJobLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDBTaskSQLJobLogAsyncHandler;
			typedef Outcome<Error, Model::GetDBTopologyResult> GetDBTopologyOutcome;
			typedef std::future<GetDBTopologyOutcome> GetDBTopologyOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDBTopologyRequest&, const GetDBTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDBTopologyAsyncHandler;
			typedef Outcome<Error, Model::GetDataCorrectBackupFilesResult> GetDataCorrectBackupFilesOutcome;
			typedef std::future<GetDataCorrectBackupFilesOutcome> GetDataCorrectBackupFilesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDataCorrectBackupFilesRequest&, const GetDataCorrectBackupFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataCorrectBackupFilesAsyncHandler;
			typedef Outcome<Error, Model::GetDataCorrectOrderDetailResult> GetDataCorrectOrderDetailOutcome;
			typedef std::future<GetDataCorrectOrderDetailOutcome> GetDataCorrectOrderDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDataCorrectOrderDetailRequest&, const GetDataCorrectOrderDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataCorrectOrderDetailAsyncHandler;
			typedef Outcome<Error, Model::GetDataCorrectSQLFileResult> GetDataCorrectSQLFileOutcome;
			typedef std::future<GetDataCorrectSQLFileOutcome> GetDataCorrectSQLFileOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDataCorrectSQLFileRequest&, const GetDataCorrectSQLFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataCorrectSQLFileAsyncHandler;
			typedef Outcome<Error, Model::GetDataCorrectTaskDetailResult> GetDataCorrectTaskDetailOutcome;
			typedef std::future<GetDataCorrectTaskDetailOutcome> GetDataCorrectTaskDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDataCorrectTaskDetailRequest&, const GetDataCorrectTaskDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataCorrectTaskDetailAsyncHandler;
			typedef Outcome<Error, Model::GetDataCronClearTaskDetailListResult> GetDataCronClearTaskDetailListOutcome;
			typedef std::future<GetDataCronClearTaskDetailListOutcome> GetDataCronClearTaskDetailListOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetDataCronClearTaskDetailListRequest&, const GetDataCronClearTaskDetailListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataCronClearTaskDetailListAsyncHandler;
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
			typedef Outcome<Error, Model::GetLhSpaceByNameResult> GetLhSpaceByNameOutcome;
			typedef std::future<GetLhSpaceByNameOutcome> GetLhSpaceByNameOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetLhSpaceByNameRequest&, const GetLhSpaceByNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLhSpaceByNameAsyncHandler;
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
			typedef Outcome<Error, Model::GetOwnerApplyOrderDetailResult> GetOwnerApplyOrderDetailOutcome;
			typedef std::future<GetOwnerApplyOrderDetailOutcome> GetOwnerApplyOrderDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetOwnerApplyOrderDetailRequest&, const GetOwnerApplyOrderDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOwnerApplyOrderDetailAsyncHandler;
			typedef Outcome<Error, Model::GetPermApplyOrderDetailResult> GetPermApplyOrderDetailOutcome;
			typedef std::future<GetPermApplyOrderDetailOutcome> GetPermApplyOrderDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetPermApplyOrderDetailRequest&, const GetPermApplyOrderDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPermApplyOrderDetailAsyncHandler;
			typedef Outcome<Error, Model::GetPhysicalDatabaseResult> GetPhysicalDatabaseOutcome;
			typedef std::future<GetPhysicalDatabaseOutcome> GetPhysicalDatabaseOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetPhysicalDatabaseRequest&, const GetPhysicalDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPhysicalDatabaseAsyncHandler;
			typedef Outcome<Error, Model::GetProxyResult> GetProxyOutcome;
			typedef std::future<GetProxyOutcome> GetProxyOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetProxyRequest&, const GetProxyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProxyAsyncHandler;
			typedef Outcome<Error, Model::GetSQLReviewCheckResultStatusResult> GetSQLReviewCheckResultStatusOutcome;
			typedef std::future<GetSQLReviewCheckResultStatusOutcome> GetSQLReviewCheckResultStatusOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetSQLReviewCheckResultStatusRequest&, const GetSQLReviewCheckResultStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSQLReviewCheckResultStatusAsyncHandler;
			typedef Outcome<Error, Model::GetSQLReviewOptimizeDetailResult> GetSQLReviewOptimizeDetailOutcome;
			typedef std::future<GetSQLReviewOptimizeDetailOutcome> GetSQLReviewOptimizeDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetSQLReviewOptimizeDetailRequest&, const GetSQLReviewOptimizeDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSQLReviewOptimizeDetailAsyncHandler;
			typedef Outcome<Error, Model::GetStructSyncExecSqlDetailResult> GetStructSyncExecSqlDetailOutcome;
			typedef std::future<GetStructSyncExecSqlDetailOutcome> GetStructSyncExecSqlDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetStructSyncExecSqlDetailRequest&, const GetStructSyncExecSqlDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStructSyncExecSqlDetailAsyncHandler;
			typedef Outcome<Error, Model::GetStructSyncJobAnalyzeResultResult> GetStructSyncJobAnalyzeResultOutcome;
			typedef std::future<GetStructSyncJobAnalyzeResultOutcome> GetStructSyncJobAnalyzeResultOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetStructSyncJobAnalyzeResultRequest&, const GetStructSyncJobAnalyzeResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStructSyncJobAnalyzeResultAsyncHandler;
			typedef Outcome<Error, Model::GetStructSyncJobDetailResult> GetStructSyncJobDetailOutcome;
			typedef std::future<GetStructSyncJobDetailOutcome> GetStructSyncJobDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetStructSyncJobDetailRequest&, const GetStructSyncJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStructSyncJobDetailAsyncHandler;
			typedef Outcome<Error, Model::GetStructSyncOrderDetailResult> GetStructSyncOrderDetailOutcome;
			typedef std::future<GetStructSyncOrderDetailOutcome> GetStructSyncOrderDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetStructSyncOrderDetailRequest&, const GetStructSyncOrderDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStructSyncOrderDetailAsyncHandler;
			typedef Outcome<Error, Model::GetTableDBTopologyResult> GetTableDBTopologyOutcome;
			typedef std::future<GetTableDBTopologyOutcome> GetTableDBTopologyOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetTableDBTopologyRequest&, const GetTableDBTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableDBTopologyAsyncHandler;
			typedef Outcome<Error, Model::GetTableTopologyResult> GetTableTopologyOutcome;
			typedef std::future<GetTableTopologyOutcome> GetTableTopologyOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetTableTopologyRequest&, const GetTableTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableTopologyAsyncHandler;
			typedef Outcome<Error, Model::GetTaskInstanceRelationResult> GetTaskInstanceRelationOutcome;
			typedef std::future<GetTaskInstanceRelationOutcome> GetTaskInstanceRelationOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetTaskInstanceRelationRequest&, const GetTaskInstanceRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskInstanceRelationAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::GetUserActiveTenantResult> GetUserActiveTenantOutcome;
			typedef std::future<GetUserActiveTenantOutcome> GetUserActiveTenantOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetUserActiveTenantRequest&, const GetUserActiveTenantOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserActiveTenantAsyncHandler;
			typedef Outcome<Error, Model::GetUserUploadFileJobResult> GetUserUploadFileJobOutcome;
			typedef std::future<GetUserUploadFileJobOutcome> GetUserUploadFileJobOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GetUserUploadFileJobRequest&, const GetUserUploadFileJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserUploadFileJobAsyncHandler;
			typedef Outcome<Error, Model::GrantUserPermissionResult> GrantUserPermissionOutcome;
			typedef std::future<GrantUserPermissionOutcome> GrantUserPermissionOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::GrantUserPermissionRequest&, const GrantUserPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantUserPermissionAsyncHandler;
			typedef Outcome<Error, Model::InspectProxyAccessSecretResult> InspectProxyAccessSecretOutcome;
			typedef std::future<InspectProxyAccessSecretOutcome> InspectProxyAccessSecretOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::InspectProxyAccessSecretRequest&, const InspectProxyAccessSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InspectProxyAccessSecretAsyncHandler;
			typedef Outcome<Error, Model::ListColumnsResult> ListColumnsOutcome;
			typedef std::future<ListColumnsOutcome> ListColumnsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListColumnsRequest&, const ListColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListColumnsAsyncHandler;
			typedef Outcome<Error, Model::ListDBTaskSQLJobResult> ListDBTaskSQLJobOutcome;
			typedef std::future<ListDBTaskSQLJobOutcome> ListDBTaskSQLJobOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListDBTaskSQLJobRequest&, const ListDBTaskSQLJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDBTaskSQLJobAsyncHandler;
			typedef Outcome<Error, Model::ListDBTaskSQLJobDetailResult> ListDBTaskSQLJobDetailOutcome;
			typedef std::future<ListDBTaskSQLJobDetailOutcome> ListDBTaskSQLJobDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListDBTaskSQLJobDetailRequest&, const ListDBTaskSQLJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDBTaskSQLJobDetailAsyncHandler;
			typedef Outcome<Error, Model::ListDDLPublishRecordsResult> ListDDLPublishRecordsOutcome;
			typedef std::future<ListDDLPublishRecordsOutcome> ListDDLPublishRecordsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListDDLPublishRecordsRequest&, const ListDDLPublishRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDDLPublishRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListDataCorrectPreCheckDBResult> ListDataCorrectPreCheckDBOutcome;
			typedef std::future<ListDataCorrectPreCheckDBOutcome> ListDataCorrectPreCheckDBOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListDataCorrectPreCheckDBRequest&, const ListDataCorrectPreCheckDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataCorrectPreCheckDBAsyncHandler;
			typedef Outcome<Error, Model::ListDataCorrectPreCheckSQLResult> ListDataCorrectPreCheckSQLOutcome;
			typedef std::future<ListDataCorrectPreCheckSQLOutcome> ListDataCorrectPreCheckSQLOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListDataCorrectPreCheckSQLRequest&, const ListDataCorrectPreCheckSQLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataCorrectPreCheckSQLAsyncHandler;
			typedef Outcome<Error, Model::ListDatabaseUserPermssionsResult> ListDatabaseUserPermssionsOutcome;
			typedef std::future<ListDatabaseUserPermssionsOutcome> ListDatabaseUserPermssionsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListDatabaseUserPermssionsRequest&, const ListDatabaseUserPermssionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatabaseUserPermssionsAsyncHandler;
			typedef Outcome<Error, Model::ListDatabasesResult> ListDatabasesOutcome;
			typedef std::future<ListDatabasesOutcome> ListDatabasesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListDatabasesRequest&, const ListDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatabasesAsyncHandler;
			typedef Outcome<Error, Model::ListIndexesResult> ListIndexesOutcome;
			typedef std::future<ListIndexesOutcome> ListIndexesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListIndexesRequest&, const ListIndexesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIndexesAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceLoginAuditLogResult> ListInstanceLoginAuditLogOutcome;
			typedef std::future<ListInstanceLoginAuditLogOutcome> ListInstanceLoginAuditLogOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListInstanceLoginAuditLogRequest&, const ListInstanceLoginAuditLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceLoginAuditLogAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceUserPermissionsResult> ListInstanceUserPermissionsOutcome;
			typedef std::future<ListInstanceUserPermissionsOutcome> ListInstanceUserPermissionsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListInstanceUserPermissionsRequest&, const ListInstanceUserPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceUserPermissionsAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListLhTaskFlowAndScenarioResult> ListLhTaskFlowAndScenarioOutcome;
			typedef std::future<ListLhTaskFlowAndScenarioOutcome> ListLhTaskFlowAndScenarioOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListLhTaskFlowAndScenarioRequest&, const ListLhTaskFlowAndScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLhTaskFlowAndScenarioAsyncHandler;
			typedef Outcome<Error, Model::ListLogicDatabasesResult> ListLogicDatabasesOutcome;
			typedef std::future<ListLogicDatabasesOutcome> ListLogicDatabasesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListLogicDatabasesRequest&, const ListLogicDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogicDatabasesAsyncHandler;
			typedef Outcome<Error, Model::ListLogicTableRouteConfigResult> ListLogicTableRouteConfigOutcome;
			typedef std::future<ListLogicTableRouteConfigOutcome> ListLogicTableRouteConfigOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListLogicTableRouteConfigRequest&, const ListLogicTableRouteConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogicTableRouteConfigAsyncHandler;
			typedef Outcome<Error, Model::ListLogicTablesResult> ListLogicTablesOutcome;
			typedef std::future<ListLogicTablesOutcome> ListLogicTablesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListLogicTablesRequest&, const ListLogicTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogicTablesAsyncHandler;
			typedef Outcome<Error, Model::ListOrdersResult> ListOrdersOutcome;
			typedef std::future<ListOrdersOutcome> ListOrdersOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListOrdersRequest&, const ListOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListProxiesResult> ListProxiesOutcome;
			typedef std::future<ListProxiesOutcome> ListProxiesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListProxiesRequest&, const ListProxiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProxiesAsyncHandler;
			typedef Outcome<Error, Model::ListProxyAccessesResult> ListProxyAccessesOutcome;
			typedef std::future<ListProxyAccessesOutcome> ListProxyAccessesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListProxyAccessesRequest&, const ListProxyAccessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProxyAccessesAsyncHandler;
			typedef Outcome<Error, Model::ListProxySQLExecAuditLogResult> ListProxySQLExecAuditLogOutcome;
			typedef std::future<ListProxySQLExecAuditLogOutcome> ListProxySQLExecAuditLogOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListProxySQLExecAuditLogRequest&, const ListProxySQLExecAuditLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProxySQLExecAuditLogAsyncHandler;
			typedef Outcome<Error, Model::ListSQLExecAuditLogResult> ListSQLExecAuditLogOutcome;
			typedef std::future<ListSQLExecAuditLogOutcome> ListSQLExecAuditLogOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListSQLExecAuditLogRequest&, const ListSQLExecAuditLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSQLExecAuditLogAsyncHandler;
			typedef Outcome<Error, Model::ListSQLReviewOriginSQLResult> ListSQLReviewOriginSQLOutcome;
			typedef std::future<ListSQLReviewOriginSQLOutcome> ListSQLReviewOriginSQLOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListSQLReviewOriginSQLRequest&, const ListSQLReviewOriginSQLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSQLReviewOriginSQLAsyncHandler;
			typedef Outcome<Error, Model::ListSensitiveColumnsResult> ListSensitiveColumnsOutcome;
			typedef std::future<ListSensitiveColumnsOutcome> ListSensitiveColumnsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListSensitiveColumnsRequest&, const ListSensitiveColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSensitiveColumnsAsyncHandler;
			typedef Outcome<Error, Model::ListSensitiveColumnsDetailResult> ListSensitiveColumnsDetailOutcome;
			typedef std::future<ListSensitiveColumnsDetailOutcome> ListSensitiveColumnsDetailOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListSensitiveColumnsDetailRequest&, const ListSensitiveColumnsDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSensitiveColumnsDetailAsyncHandler;
			typedef Outcome<Error, Model::ListStandardGroupsResult> ListStandardGroupsOutcome;
			typedef std::future<ListStandardGroupsOutcome> ListStandardGroupsOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListStandardGroupsRequest&, const ListStandardGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStandardGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListTablesResult> ListTablesOutcome;
			typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListTablesRequest&, const ListTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTablesAsyncHandler;
			typedef Outcome<Error, Model::ListTaskFlowResult> ListTaskFlowOutcome;
			typedef std::future<ListTaskFlowOutcome> ListTaskFlowOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListTaskFlowRequest&, const ListTaskFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskFlowAsyncHandler;
			typedef Outcome<Error, Model::ListTaskFlowInstanceResult> ListTaskFlowInstanceOutcome;
			typedef std::future<ListTaskFlowInstanceOutcome> ListTaskFlowInstanceOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ListTaskFlowInstanceRequest&, const ListTaskFlowInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskFlowInstanceAsyncHandler;
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
			typedef Outcome<Error, Model::ModifyDataCorrectExecSQLResult> ModifyDataCorrectExecSQLOutcome;
			typedef std::future<ModifyDataCorrectExecSQLOutcome> ModifyDataCorrectExecSQLOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ModifyDataCorrectExecSQLRequest&, const ModifyDataCorrectExecSQLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataCorrectExecSQLAsyncHandler;
			typedef Outcome<Error, Model::PauseDataCorrectSQLJobResult> PauseDataCorrectSQLJobOutcome;
			typedef std::future<PauseDataCorrectSQLJobOutcome> PauseDataCorrectSQLJobOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::PauseDataCorrectSQLJobRequest&, const PauseDataCorrectSQLJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PauseDataCorrectSQLJobAsyncHandler;
			typedef Outcome<Error, Model::ReDeployLhDagVersionResult> ReDeployLhDagVersionOutcome;
			typedef std::future<ReDeployLhDagVersionOutcome> ReDeployLhDagVersionOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::ReDeployLhDagVersionRequest&, const ReDeployLhDagVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReDeployLhDagVersionAsyncHandler;
			typedef Outcome<Error, Model::RegisterInstanceResult> RegisterInstanceOutcome;
			typedef std::future<RegisterInstanceOutcome> RegisterInstanceOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::RegisterInstanceRequest&, const RegisterInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterInstanceAsyncHandler;
			typedef Outcome<Error, Model::RegisterUserResult> RegisterUserOutcome;
			typedef std::future<RegisterUserOutcome> RegisterUserOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::RegisterUserRequest&, const RegisterUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterUserAsyncHandler;
			typedef Outcome<Error, Model::RestartDataCorrectSQLJobResult> RestartDataCorrectSQLJobOutcome;
			typedef std::future<RestartDataCorrectSQLJobOutcome> RestartDataCorrectSQLJobOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::RestartDataCorrectSQLJobRequest&, const RestartDataCorrectSQLJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartDataCorrectSQLJobAsyncHandler;
			typedef Outcome<Error, Model::RetryDataCorrectPreCheckResult> RetryDataCorrectPreCheckOutcome;
			typedef std::future<RetryDataCorrectPreCheckOutcome> RetryDataCorrectPreCheckOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::RetryDataCorrectPreCheckRequest&, const RetryDataCorrectPreCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryDataCorrectPreCheckAsyncHandler;
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
			typedef Outcome<Error, Model::SubmitStructSyncOrderApprovalResult> SubmitStructSyncOrderApprovalOutcome;
			typedef std::future<SubmitStructSyncOrderApprovalOutcome> SubmitStructSyncOrderApprovalOutcomeCallable;
			typedef std::function<void(const Dms_enterpriseClient*, const Model::SubmitStructSyncOrderApprovalRequest&, const SubmitStructSyncOrderApprovalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitStructSyncOrderApprovalAsyncHandler;
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
			AddLhMembersOutcome addLhMembers(const Model::AddLhMembersRequest &request)const;
			void addLhMembersAsync(const Model::AddLhMembersRequest& request, const AddLhMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLhMembersOutcomeCallable addLhMembersCallable(const Model::AddLhMembersRequest& request) const;
			AddLogicTableRouteConfigOutcome addLogicTableRouteConfig(const Model::AddLogicTableRouteConfigRequest &request)const;
			void addLogicTableRouteConfigAsync(const Model::AddLogicTableRouteConfigRequest& request, const AddLogicTableRouteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLogicTableRouteConfigOutcomeCallable addLogicTableRouteConfigCallable(const Model::AddLogicTableRouteConfigRequest& request) const;
			ApproveOrderOutcome approveOrder(const Model::ApproveOrderRequest &request)const;
			void approveOrderAsync(const Model::ApproveOrderRequest& request, const ApproveOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApproveOrderOutcomeCallable approveOrderCallable(const Model::ApproveOrderRequest& request) const;
			ChangeColumnSecLevelOutcome changeColumnSecLevel(const Model::ChangeColumnSecLevelRequest &request)const;
			void changeColumnSecLevelAsync(const Model::ChangeColumnSecLevelRequest& request, const ChangeColumnSecLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeColumnSecLevelOutcomeCallable changeColumnSecLevelCallable(const Model::ChangeColumnSecLevelRequest& request) const;
			ChangeLhDagOwnerOutcome changeLhDagOwner(const Model::ChangeLhDagOwnerRequest &request)const;
			void changeLhDagOwnerAsync(const Model::ChangeLhDagOwnerRequest& request, const ChangeLhDagOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeLhDagOwnerOutcomeCallable changeLhDagOwnerCallable(const Model::ChangeLhDagOwnerRequest& request) const;
			CloseOrderOutcome closeOrder(const Model::CloseOrderRequest &request)const;
			void closeOrderAsync(const Model::CloseOrderRequest& request, const CloseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseOrderOutcomeCallable closeOrderCallable(const Model::CloseOrderRequest& request) const;
			CreateDataCorrectOrderOutcome createDataCorrectOrder(const Model::CreateDataCorrectOrderRequest &request)const;
			void createDataCorrectOrderAsync(const Model::CreateDataCorrectOrderRequest& request, const CreateDataCorrectOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataCorrectOrderOutcomeCallable createDataCorrectOrderCallable(const Model::CreateDataCorrectOrderRequest& request) const;
			CreateDataCronClearOrderOutcome createDataCronClearOrder(const Model::CreateDataCronClearOrderRequest &request)const;
			void createDataCronClearOrderAsync(const Model::CreateDataCronClearOrderRequest& request, const CreateDataCronClearOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataCronClearOrderOutcomeCallable createDataCronClearOrderCallable(const Model::CreateDataCronClearOrderRequest& request) const;
			CreateDataImportOrderOutcome createDataImportOrder(const Model::CreateDataImportOrderRequest &request)const;
			void createDataImportOrderAsync(const Model::CreateDataImportOrderRequest& request, const CreateDataImportOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataImportOrderOutcomeCallable createDataImportOrderCallable(const Model::CreateDataImportOrderRequest& request) const;
			CreateFreeLockCorrectOrderOutcome createFreeLockCorrectOrder(const Model::CreateFreeLockCorrectOrderRequest &request)const;
			void createFreeLockCorrectOrderAsync(const Model::CreateFreeLockCorrectOrderRequest& request, const CreateFreeLockCorrectOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFreeLockCorrectOrderOutcomeCallable createFreeLockCorrectOrderCallable(const Model::CreateFreeLockCorrectOrderRequest& request) const;
			CreateLakeHouseSpaceOutcome createLakeHouseSpace(const Model::CreateLakeHouseSpaceRequest &request)const;
			void createLakeHouseSpaceAsync(const Model::CreateLakeHouseSpaceRequest& request, const CreateLakeHouseSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLakeHouseSpaceOutcomeCallable createLakeHouseSpaceCallable(const Model::CreateLakeHouseSpaceRequest& request) const;
			CreateLogicDatabaseOutcome createLogicDatabase(const Model::CreateLogicDatabaseRequest &request)const;
			void createLogicDatabaseAsync(const Model::CreateLogicDatabaseRequest& request, const CreateLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLogicDatabaseOutcomeCallable createLogicDatabaseCallable(const Model::CreateLogicDatabaseRequest& request) const;
			CreateOrderOutcome createOrder(const Model::CreateOrderRequest &request)const;
			void createOrderAsync(const Model::CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderOutcomeCallable createOrderCallable(const Model::CreateOrderRequest& request) const;
			CreateProxyOutcome createProxy(const Model::CreateProxyRequest &request)const;
			void createProxyAsync(const Model::CreateProxyRequest& request, const CreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProxyOutcomeCallable createProxyCallable(const Model::CreateProxyRequest& request) const;
			CreateProxyAccessOutcome createProxyAccess(const Model::CreateProxyAccessRequest &request)const;
			void createProxyAccessAsync(const Model::CreateProxyAccessRequest& request, const CreateProxyAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProxyAccessOutcomeCallable createProxyAccessCallable(const Model::CreateProxyAccessRequest& request) const;
			CreatePublishGroupTaskOutcome createPublishGroupTask(const Model::CreatePublishGroupTaskRequest &request)const;
			void createPublishGroupTaskAsync(const Model::CreatePublishGroupTaskRequest& request, const CreatePublishGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePublishGroupTaskOutcomeCallable createPublishGroupTaskCallable(const Model::CreatePublishGroupTaskRequest& request) const;
			CreateSQLReviewOrderOutcome createSQLReviewOrder(const Model::CreateSQLReviewOrderRequest &request)const;
			void createSQLReviewOrderAsync(const Model::CreateSQLReviewOrderRequest& request, const CreateSQLReviewOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSQLReviewOrderOutcomeCallable createSQLReviewOrderCallable(const Model::CreateSQLReviewOrderRequest& request) const;
			CreateStandardGroupOutcome createStandardGroup(const Model::CreateStandardGroupRequest &request)const;
			void createStandardGroupAsync(const Model::CreateStandardGroupRequest& request, const CreateStandardGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStandardGroupOutcomeCallable createStandardGroupCallable(const Model::CreateStandardGroupRequest& request) const;
			CreateStructSyncOrderOutcome createStructSyncOrder(const Model::CreateStructSyncOrderRequest &request)const;
			void createStructSyncOrderAsync(const Model::CreateStructSyncOrderRequest& request, const CreateStructSyncOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStructSyncOrderOutcomeCallable createStructSyncOrderCallable(const Model::CreateStructSyncOrderRequest& request) const;
			CreateUploadFileJobOutcome createUploadFileJob(const Model::CreateUploadFileJobRequest &request)const;
			void createUploadFileJobAsync(const Model::CreateUploadFileJobRequest& request, const CreateUploadFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadFileJobOutcomeCallable createUploadFileJobCallable(const Model::CreateUploadFileJobRequest& request) const;
			CreateUploadOSSFileJobOutcome createUploadOSSFileJob(const Model::CreateUploadOSSFileJobRequest &request)const;
			void createUploadOSSFileJobAsync(const Model::CreateUploadOSSFileJobRequest& request, const CreateUploadOSSFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUploadOSSFileJobOutcomeCallable createUploadOSSFileJobCallable(const Model::CreateUploadOSSFileJobRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteLakeHouseSpaceOutcome deleteLakeHouseSpace(const Model::DeleteLakeHouseSpaceRequest &request)const;
			void deleteLakeHouseSpaceAsync(const Model::DeleteLakeHouseSpaceRequest& request, const DeleteLakeHouseSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLakeHouseSpaceOutcomeCallable deleteLakeHouseSpaceCallable(const Model::DeleteLakeHouseSpaceRequest& request) const;
			DeleteLhMembersOutcome deleteLhMembers(const Model::DeleteLhMembersRequest &request)const;
			void deleteLhMembersAsync(const Model::DeleteLhMembersRequest& request, const DeleteLhMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLhMembersOutcomeCallable deleteLhMembersCallable(const Model::DeleteLhMembersRequest& request) const;
			DeleteLogicDatabaseOutcome deleteLogicDatabase(const Model::DeleteLogicDatabaseRequest &request)const;
			void deleteLogicDatabaseAsync(const Model::DeleteLogicDatabaseRequest& request, const DeleteLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLogicDatabaseOutcomeCallable deleteLogicDatabaseCallable(const Model::DeleteLogicDatabaseRequest& request) const;
			DeleteLogicTableRouteConfigOutcome deleteLogicTableRouteConfig(const Model::DeleteLogicTableRouteConfigRequest &request)const;
			void deleteLogicTableRouteConfigAsync(const Model::DeleteLogicTableRouteConfigRequest& request, const DeleteLogicTableRouteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLogicTableRouteConfigOutcomeCallable deleteLogicTableRouteConfigCallable(const Model::DeleteLogicTableRouteConfigRequest& request) const;
			DeleteProxyOutcome deleteProxy(const Model::DeleteProxyRequest &request)const;
			void deleteProxyAsync(const Model::DeleteProxyRequest& request, const DeleteProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProxyOutcomeCallable deleteProxyCallable(const Model::DeleteProxyRequest& request) const;
			DeleteProxyAccessOutcome deleteProxyAccess(const Model::DeleteProxyAccessRequest &request)const;
			void deleteProxyAccessAsync(const Model::DeleteProxyAccessRequest& request, const DeleteProxyAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProxyAccessOutcomeCallable deleteProxyAccessCallable(const Model::DeleteProxyAccessRequest& request) const;
			DeleteTaskFlowOutcome deleteTaskFlow(const Model::DeleteTaskFlowRequest &request)const;
			void deleteTaskFlowAsync(const Model::DeleteTaskFlowRequest& request, const DeleteTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTaskFlowOutcomeCallable deleteTaskFlowCallable(const Model::DeleteTaskFlowRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DisableUserOutcome disableUser(const Model::DisableUserRequest &request)const;
			void disableUserAsync(const Model::DisableUserRequest& request, const DisableUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableUserOutcomeCallable disableUserCallable(const Model::DisableUserRequest& request) const;
			EditLogicDatabaseOutcome editLogicDatabase(const Model::EditLogicDatabaseRequest &request)const;
			void editLogicDatabaseAsync(const Model::EditLogicDatabaseRequest& request, const EditLogicDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditLogicDatabaseOutcomeCallable editLogicDatabaseCallable(const Model::EditLogicDatabaseRequest& request) const;
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
			ExecuteStructSyncOutcome executeStructSync(const Model::ExecuteStructSyncRequest &request)const;
			void executeStructSyncAsync(const Model::ExecuteStructSyncRequest& request, const ExecuteStructSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteStructSyncOutcomeCallable executeStructSyncCallable(const Model::ExecuteStructSyncRequest& request) const;
			GetApprovalDetailOutcome getApprovalDetail(const Model::GetApprovalDetailRequest &request)const;
			void getApprovalDetailAsync(const Model::GetApprovalDetailRequest& request, const GetApprovalDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApprovalDetailOutcomeCallable getApprovalDetailCallable(const Model::GetApprovalDetailRequest& request) const;
			GetDBTaskSQLJobLogOutcome getDBTaskSQLJobLog(const Model::GetDBTaskSQLJobLogRequest &request)const;
			void getDBTaskSQLJobLogAsync(const Model::GetDBTaskSQLJobLogRequest& request, const GetDBTaskSQLJobLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDBTaskSQLJobLogOutcomeCallable getDBTaskSQLJobLogCallable(const Model::GetDBTaskSQLJobLogRequest& request) const;
			GetDBTopologyOutcome getDBTopology(const Model::GetDBTopologyRequest &request)const;
			void getDBTopologyAsync(const Model::GetDBTopologyRequest& request, const GetDBTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDBTopologyOutcomeCallable getDBTopologyCallable(const Model::GetDBTopologyRequest& request) const;
			GetDataCorrectBackupFilesOutcome getDataCorrectBackupFiles(const Model::GetDataCorrectBackupFilesRequest &request)const;
			void getDataCorrectBackupFilesAsync(const Model::GetDataCorrectBackupFilesRequest& request, const GetDataCorrectBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataCorrectBackupFilesOutcomeCallable getDataCorrectBackupFilesCallable(const Model::GetDataCorrectBackupFilesRequest& request) const;
			GetDataCorrectOrderDetailOutcome getDataCorrectOrderDetail(const Model::GetDataCorrectOrderDetailRequest &request)const;
			void getDataCorrectOrderDetailAsync(const Model::GetDataCorrectOrderDetailRequest& request, const GetDataCorrectOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataCorrectOrderDetailOutcomeCallable getDataCorrectOrderDetailCallable(const Model::GetDataCorrectOrderDetailRequest& request) const;
			GetDataCorrectSQLFileOutcome getDataCorrectSQLFile(const Model::GetDataCorrectSQLFileRequest &request)const;
			void getDataCorrectSQLFileAsync(const Model::GetDataCorrectSQLFileRequest& request, const GetDataCorrectSQLFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataCorrectSQLFileOutcomeCallable getDataCorrectSQLFileCallable(const Model::GetDataCorrectSQLFileRequest& request) const;
			GetDataCorrectTaskDetailOutcome getDataCorrectTaskDetail(const Model::GetDataCorrectTaskDetailRequest &request)const;
			void getDataCorrectTaskDetailAsync(const Model::GetDataCorrectTaskDetailRequest& request, const GetDataCorrectTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataCorrectTaskDetailOutcomeCallable getDataCorrectTaskDetailCallable(const Model::GetDataCorrectTaskDetailRequest& request) const;
			GetDataCronClearTaskDetailListOutcome getDataCronClearTaskDetailList(const Model::GetDataCronClearTaskDetailListRequest &request)const;
			void getDataCronClearTaskDetailListAsync(const Model::GetDataCronClearTaskDetailListRequest& request, const GetDataCronClearTaskDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataCronClearTaskDetailListOutcomeCallable getDataCronClearTaskDetailListCallable(const Model::GetDataCronClearTaskDetailListRequest& request) const;
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
			GetLhSpaceByNameOutcome getLhSpaceByName(const Model::GetLhSpaceByNameRequest &request)const;
			void getLhSpaceByNameAsync(const Model::GetLhSpaceByNameRequest& request, const GetLhSpaceByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLhSpaceByNameOutcomeCallable getLhSpaceByNameCallable(const Model::GetLhSpaceByNameRequest& request) const;
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
			GetOwnerApplyOrderDetailOutcome getOwnerApplyOrderDetail(const Model::GetOwnerApplyOrderDetailRequest &request)const;
			void getOwnerApplyOrderDetailAsync(const Model::GetOwnerApplyOrderDetailRequest& request, const GetOwnerApplyOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOwnerApplyOrderDetailOutcomeCallable getOwnerApplyOrderDetailCallable(const Model::GetOwnerApplyOrderDetailRequest& request) const;
			GetPermApplyOrderDetailOutcome getPermApplyOrderDetail(const Model::GetPermApplyOrderDetailRequest &request)const;
			void getPermApplyOrderDetailAsync(const Model::GetPermApplyOrderDetailRequest& request, const GetPermApplyOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPermApplyOrderDetailOutcomeCallable getPermApplyOrderDetailCallable(const Model::GetPermApplyOrderDetailRequest& request) const;
			GetPhysicalDatabaseOutcome getPhysicalDatabase(const Model::GetPhysicalDatabaseRequest &request)const;
			void getPhysicalDatabaseAsync(const Model::GetPhysicalDatabaseRequest& request, const GetPhysicalDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPhysicalDatabaseOutcomeCallable getPhysicalDatabaseCallable(const Model::GetPhysicalDatabaseRequest& request) const;
			GetProxyOutcome getProxy(const Model::GetProxyRequest &request)const;
			void getProxyAsync(const Model::GetProxyRequest& request, const GetProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProxyOutcomeCallable getProxyCallable(const Model::GetProxyRequest& request) const;
			GetSQLReviewCheckResultStatusOutcome getSQLReviewCheckResultStatus(const Model::GetSQLReviewCheckResultStatusRequest &request)const;
			void getSQLReviewCheckResultStatusAsync(const Model::GetSQLReviewCheckResultStatusRequest& request, const GetSQLReviewCheckResultStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSQLReviewCheckResultStatusOutcomeCallable getSQLReviewCheckResultStatusCallable(const Model::GetSQLReviewCheckResultStatusRequest& request) const;
			GetSQLReviewOptimizeDetailOutcome getSQLReviewOptimizeDetail(const Model::GetSQLReviewOptimizeDetailRequest &request)const;
			void getSQLReviewOptimizeDetailAsync(const Model::GetSQLReviewOptimizeDetailRequest& request, const GetSQLReviewOptimizeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSQLReviewOptimizeDetailOutcomeCallable getSQLReviewOptimizeDetailCallable(const Model::GetSQLReviewOptimizeDetailRequest& request) const;
			GetStructSyncExecSqlDetailOutcome getStructSyncExecSqlDetail(const Model::GetStructSyncExecSqlDetailRequest &request)const;
			void getStructSyncExecSqlDetailAsync(const Model::GetStructSyncExecSqlDetailRequest& request, const GetStructSyncExecSqlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStructSyncExecSqlDetailOutcomeCallable getStructSyncExecSqlDetailCallable(const Model::GetStructSyncExecSqlDetailRequest& request) const;
			GetStructSyncJobAnalyzeResultOutcome getStructSyncJobAnalyzeResult(const Model::GetStructSyncJobAnalyzeResultRequest &request)const;
			void getStructSyncJobAnalyzeResultAsync(const Model::GetStructSyncJobAnalyzeResultRequest& request, const GetStructSyncJobAnalyzeResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStructSyncJobAnalyzeResultOutcomeCallable getStructSyncJobAnalyzeResultCallable(const Model::GetStructSyncJobAnalyzeResultRequest& request) const;
			GetStructSyncJobDetailOutcome getStructSyncJobDetail(const Model::GetStructSyncJobDetailRequest &request)const;
			void getStructSyncJobDetailAsync(const Model::GetStructSyncJobDetailRequest& request, const GetStructSyncJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStructSyncJobDetailOutcomeCallable getStructSyncJobDetailCallable(const Model::GetStructSyncJobDetailRequest& request) const;
			GetStructSyncOrderDetailOutcome getStructSyncOrderDetail(const Model::GetStructSyncOrderDetailRequest &request)const;
			void getStructSyncOrderDetailAsync(const Model::GetStructSyncOrderDetailRequest& request, const GetStructSyncOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStructSyncOrderDetailOutcomeCallable getStructSyncOrderDetailCallable(const Model::GetStructSyncOrderDetailRequest& request) const;
			GetTableDBTopologyOutcome getTableDBTopology(const Model::GetTableDBTopologyRequest &request)const;
			void getTableDBTopologyAsync(const Model::GetTableDBTopologyRequest& request, const GetTableDBTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableDBTopologyOutcomeCallable getTableDBTopologyCallable(const Model::GetTableDBTopologyRequest& request) const;
			GetTableTopologyOutcome getTableTopology(const Model::GetTableTopologyRequest &request)const;
			void getTableTopologyAsync(const Model::GetTableTopologyRequest& request, const GetTableTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableTopologyOutcomeCallable getTableTopologyCallable(const Model::GetTableTopologyRequest& request) const;
			GetTaskInstanceRelationOutcome getTaskInstanceRelation(const Model::GetTaskInstanceRelationRequest &request)const;
			void getTaskInstanceRelationAsync(const Model::GetTaskInstanceRelationRequest& request, const GetTaskInstanceRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskInstanceRelationOutcomeCallable getTaskInstanceRelationCallable(const Model::GetTaskInstanceRelationRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			GetUserActiveTenantOutcome getUserActiveTenant(const Model::GetUserActiveTenantRequest &request)const;
			void getUserActiveTenantAsync(const Model::GetUserActiveTenantRequest& request, const GetUserActiveTenantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserActiveTenantOutcomeCallable getUserActiveTenantCallable(const Model::GetUserActiveTenantRequest& request) const;
			GetUserUploadFileJobOutcome getUserUploadFileJob(const Model::GetUserUploadFileJobRequest &request)const;
			void getUserUploadFileJobAsync(const Model::GetUserUploadFileJobRequest& request, const GetUserUploadFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserUploadFileJobOutcomeCallable getUserUploadFileJobCallable(const Model::GetUserUploadFileJobRequest& request) const;
			GrantUserPermissionOutcome grantUserPermission(const Model::GrantUserPermissionRequest &request)const;
			void grantUserPermissionAsync(const Model::GrantUserPermissionRequest& request, const GrantUserPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantUserPermissionOutcomeCallable grantUserPermissionCallable(const Model::GrantUserPermissionRequest& request) const;
			InspectProxyAccessSecretOutcome inspectProxyAccessSecret(const Model::InspectProxyAccessSecretRequest &request)const;
			void inspectProxyAccessSecretAsync(const Model::InspectProxyAccessSecretRequest& request, const InspectProxyAccessSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InspectProxyAccessSecretOutcomeCallable inspectProxyAccessSecretCallable(const Model::InspectProxyAccessSecretRequest& request) const;
			ListColumnsOutcome listColumns(const Model::ListColumnsRequest &request)const;
			void listColumnsAsync(const Model::ListColumnsRequest& request, const ListColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListColumnsOutcomeCallable listColumnsCallable(const Model::ListColumnsRequest& request) const;
			ListDBTaskSQLJobOutcome listDBTaskSQLJob(const Model::ListDBTaskSQLJobRequest &request)const;
			void listDBTaskSQLJobAsync(const Model::ListDBTaskSQLJobRequest& request, const ListDBTaskSQLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDBTaskSQLJobOutcomeCallable listDBTaskSQLJobCallable(const Model::ListDBTaskSQLJobRequest& request) const;
			ListDBTaskSQLJobDetailOutcome listDBTaskSQLJobDetail(const Model::ListDBTaskSQLJobDetailRequest &request)const;
			void listDBTaskSQLJobDetailAsync(const Model::ListDBTaskSQLJobDetailRequest& request, const ListDBTaskSQLJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDBTaskSQLJobDetailOutcomeCallable listDBTaskSQLJobDetailCallable(const Model::ListDBTaskSQLJobDetailRequest& request) const;
			ListDDLPublishRecordsOutcome listDDLPublishRecords(const Model::ListDDLPublishRecordsRequest &request)const;
			void listDDLPublishRecordsAsync(const Model::ListDDLPublishRecordsRequest& request, const ListDDLPublishRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDDLPublishRecordsOutcomeCallable listDDLPublishRecordsCallable(const Model::ListDDLPublishRecordsRequest& request) const;
			ListDataCorrectPreCheckDBOutcome listDataCorrectPreCheckDB(const Model::ListDataCorrectPreCheckDBRequest &request)const;
			void listDataCorrectPreCheckDBAsync(const Model::ListDataCorrectPreCheckDBRequest& request, const ListDataCorrectPreCheckDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataCorrectPreCheckDBOutcomeCallable listDataCorrectPreCheckDBCallable(const Model::ListDataCorrectPreCheckDBRequest& request) const;
			ListDataCorrectPreCheckSQLOutcome listDataCorrectPreCheckSQL(const Model::ListDataCorrectPreCheckSQLRequest &request)const;
			void listDataCorrectPreCheckSQLAsync(const Model::ListDataCorrectPreCheckSQLRequest& request, const ListDataCorrectPreCheckSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataCorrectPreCheckSQLOutcomeCallable listDataCorrectPreCheckSQLCallable(const Model::ListDataCorrectPreCheckSQLRequest& request) const;
			ListDatabaseUserPermssionsOutcome listDatabaseUserPermssions(const Model::ListDatabaseUserPermssionsRequest &request)const;
			void listDatabaseUserPermssionsAsync(const Model::ListDatabaseUserPermssionsRequest& request, const ListDatabaseUserPermssionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatabaseUserPermssionsOutcomeCallable listDatabaseUserPermssionsCallable(const Model::ListDatabaseUserPermssionsRequest& request) const;
			ListDatabasesOutcome listDatabases(const Model::ListDatabasesRequest &request)const;
			void listDatabasesAsync(const Model::ListDatabasesRequest& request, const ListDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatabasesOutcomeCallable listDatabasesCallable(const Model::ListDatabasesRequest& request) const;
			ListIndexesOutcome listIndexes(const Model::ListIndexesRequest &request)const;
			void listIndexesAsync(const Model::ListIndexesRequest& request, const ListIndexesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIndexesOutcomeCallable listIndexesCallable(const Model::ListIndexesRequest& request) const;
			ListInstanceLoginAuditLogOutcome listInstanceLoginAuditLog(const Model::ListInstanceLoginAuditLogRequest &request)const;
			void listInstanceLoginAuditLogAsync(const Model::ListInstanceLoginAuditLogRequest& request, const ListInstanceLoginAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceLoginAuditLogOutcomeCallable listInstanceLoginAuditLogCallable(const Model::ListInstanceLoginAuditLogRequest& request) const;
			ListInstanceUserPermissionsOutcome listInstanceUserPermissions(const Model::ListInstanceUserPermissionsRequest &request)const;
			void listInstanceUserPermissionsAsync(const Model::ListInstanceUserPermissionsRequest& request, const ListInstanceUserPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceUserPermissionsOutcomeCallable listInstanceUserPermissionsCallable(const Model::ListInstanceUserPermissionsRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListLhTaskFlowAndScenarioOutcome listLhTaskFlowAndScenario(const Model::ListLhTaskFlowAndScenarioRequest &request)const;
			void listLhTaskFlowAndScenarioAsync(const Model::ListLhTaskFlowAndScenarioRequest& request, const ListLhTaskFlowAndScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLhTaskFlowAndScenarioOutcomeCallable listLhTaskFlowAndScenarioCallable(const Model::ListLhTaskFlowAndScenarioRequest& request) const;
			ListLogicDatabasesOutcome listLogicDatabases(const Model::ListLogicDatabasesRequest &request)const;
			void listLogicDatabasesAsync(const Model::ListLogicDatabasesRequest& request, const ListLogicDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogicDatabasesOutcomeCallable listLogicDatabasesCallable(const Model::ListLogicDatabasesRequest& request) const;
			ListLogicTableRouteConfigOutcome listLogicTableRouteConfig(const Model::ListLogicTableRouteConfigRequest &request)const;
			void listLogicTableRouteConfigAsync(const Model::ListLogicTableRouteConfigRequest& request, const ListLogicTableRouteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogicTableRouteConfigOutcomeCallable listLogicTableRouteConfigCallable(const Model::ListLogicTableRouteConfigRequest& request) const;
			ListLogicTablesOutcome listLogicTables(const Model::ListLogicTablesRequest &request)const;
			void listLogicTablesAsync(const Model::ListLogicTablesRequest& request, const ListLogicTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogicTablesOutcomeCallable listLogicTablesCallable(const Model::ListLogicTablesRequest& request) const;
			ListOrdersOutcome listOrders(const Model::ListOrdersRequest &request)const;
			void listOrdersAsync(const Model::ListOrdersRequest& request, const ListOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrdersOutcomeCallable listOrdersCallable(const Model::ListOrdersRequest& request) const;
			ListProxiesOutcome listProxies(const Model::ListProxiesRequest &request)const;
			void listProxiesAsync(const Model::ListProxiesRequest& request, const ListProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProxiesOutcomeCallable listProxiesCallable(const Model::ListProxiesRequest& request) const;
			ListProxyAccessesOutcome listProxyAccesses(const Model::ListProxyAccessesRequest &request)const;
			void listProxyAccessesAsync(const Model::ListProxyAccessesRequest& request, const ListProxyAccessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProxyAccessesOutcomeCallable listProxyAccessesCallable(const Model::ListProxyAccessesRequest& request) const;
			ListProxySQLExecAuditLogOutcome listProxySQLExecAuditLog(const Model::ListProxySQLExecAuditLogRequest &request)const;
			void listProxySQLExecAuditLogAsync(const Model::ListProxySQLExecAuditLogRequest& request, const ListProxySQLExecAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProxySQLExecAuditLogOutcomeCallable listProxySQLExecAuditLogCallable(const Model::ListProxySQLExecAuditLogRequest& request) const;
			ListSQLExecAuditLogOutcome listSQLExecAuditLog(const Model::ListSQLExecAuditLogRequest &request)const;
			void listSQLExecAuditLogAsync(const Model::ListSQLExecAuditLogRequest& request, const ListSQLExecAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSQLExecAuditLogOutcomeCallable listSQLExecAuditLogCallable(const Model::ListSQLExecAuditLogRequest& request) const;
			ListSQLReviewOriginSQLOutcome listSQLReviewOriginSQL(const Model::ListSQLReviewOriginSQLRequest &request)const;
			void listSQLReviewOriginSQLAsync(const Model::ListSQLReviewOriginSQLRequest& request, const ListSQLReviewOriginSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSQLReviewOriginSQLOutcomeCallable listSQLReviewOriginSQLCallable(const Model::ListSQLReviewOriginSQLRequest& request) const;
			ListSensitiveColumnsOutcome listSensitiveColumns(const Model::ListSensitiveColumnsRequest &request)const;
			void listSensitiveColumnsAsync(const Model::ListSensitiveColumnsRequest& request, const ListSensitiveColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSensitiveColumnsOutcomeCallable listSensitiveColumnsCallable(const Model::ListSensitiveColumnsRequest& request) const;
			ListSensitiveColumnsDetailOutcome listSensitiveColumnsDetail(const Model::ListSensitiveColumnsDetailRequest &request)const;
			void listSensitiveColumnsDetailAsync(const Model::ListSensitiveColumnsDetailRequest& request, const ListSensitiveColumnsDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSensitiveColumnsDetailOutcomeCallable listSensitiveColumnsDetailCallable(const Model::ListSensitiveColumnsDetailRequest& request) const;
			ListStandardGroupsOutcome listStandardGroups(const Model::ListStandardGroupsRequest &request)const;
			void listStandardGroupsAsync(const Model::ListStandardGroupsRequest& request, const ListStandardGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStandardGroupsOutcomeCallable listStandardGroupsCallable(const Model::ListStandardGroupsRequest& request) const;
			ListTablesOutcome listTables(const Model::ListTablesRequest &request)const;
			void listTablesAsync(const Model::ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTablesOutcomeCallable listTablesCallable(const Model::ListTablesRequest& request) const;
			ListTaskFlowOutcome listTaskFlow(const Model::ListTaskFlowRequest &request)const;
			void listTaskFlowAsync(const Model::ListTaskFlowRequest& request, const ListTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTaskFlowOutcomeCallable listTaskFlowCallable(const Model::ListTaskFlowRequest& request) const;
			ListTaskFlowInstanceOutcome listTaskFlowInstance(const Model::ListTaskFlowInstanceRequest &request)const;
			void listTaskFlowInstanceAsync(const Model::ListTaskFlowInstanceRequest& request, const ListTaskFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTaskFlowInstanceOutcomeCallable listTaskFlowInstanceCallable(const Model::ListTaskFlowInstanceRequest& request) const;
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
			ModifyDataCorrectExecSQLOutcome modifyDataCorrectExecSQL(const Model::ModifyDataCorrectExecSQLRequest &request)const;
			void modifyDataCorrectExecSQLAsync(const Model::ModifyDataCorrectExecSQLRequest& request, const ModifyDataCorrectExecSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDataCorrectExecSQLOutcomeCallable modifyDataCorrectExecSQLCallable(const Model::ModifyDataCorrectExecSQLRequest& request) const;
			PauseDataCorrectSQLJobOutcome pauseDataCorrectSQLJob(const Model::PauseDataCorrectSQLJobRequest &request)const;
			void pauseDataCorrectSQLJobAsync(const Model::PauseDataCorrectSQLJobRequest& request, const PauseDataCorrectSQLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PauseDataCorrectSQLJobOutcomeCallable pauseDataCorrectSQLJobCallable(const Model::PauseDataCorrectSQLJobRequest& request) const;
			ReDeployLhDagVersionOutcome reDeployLhDagVersion(const Model::ReDeployLhDagVersionRequest &request)const;
			void reDeployLhDagVersionAsync(const Model::ReDeployLhDagVersionRequest& request, const ReDeployLhDagVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReDeployLhDagVersionOutcomeCallable reDeployLhDagVersionCallable(const Model::ReDeployLhDagVersionRequest& request) const;
			RegisterInstanceOutcome registerInstance(const Model::RegisterInstanceRequest &request)const;
			void registerInstanceAsync(const Model::RegisterInstanceRequest& request, const RegisterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterInstanceOutcomeCallable registerInstanceCallable(const Model::RegisterInstanceRequest& request) const;
			RegisterUserOutcome registerUser(const Model::RegisterUserRequest &request)const;
			void registerUserAsync(const Model::RegisterUserRequest& request, const RegisterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterUserOutcomeCallable registerUserCallable(const Model::RegisterUserRequest& request) const;
			RestartDataCorrectSQLJobOutcome restartDataCorrectSQLJob(const Model::RestartDataCorrectSQLJobRequest &request)const;
			void restartDataCorrectSQLJobAsync(const Model::RestartDataCorrectSQLJobRequest& request, const RestartDataCorrectSQLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartDataCorrectSQLJobOutcomeCallable restartDataCorrectSQLJobCallable(const Model::RestartDataCorrectSQLJobRequest& request) const;
			RetryDataCorrectPreCheckOutcome retryDataCorrectPreCheck(const Model::RetryDataCorrectPreCheckRequest &request)const;
			void retryDataCorrectPreCheckAsync(const Model::RetryDataCorrectPreCheckRequest& request, const RetryDataCorrectPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryDataCorrectPreCheckOutcomeCallable retryDataCorrectPreCheckCallable(const Model::RetryDataCorrectPreCheckRequest& request) const;
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
			SubmitStructSyncOrderApprovalOutcome submitStructSyncOrderApproval(const Model::SubmitStructSyncOrderApprovalRequest &request)const;
			void submitStructSyncOrderApprovalAsync(const Model::SubmitStructSyncOrderApprovalRequest& request, const SubmitStructSyncOrderApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitStructSyncOrderApprovalOutcomeCallable submitStructSyncOrderApprovalCallable(const Model::SubmitStructSyncOrderApprovalRequest& request) const;
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
