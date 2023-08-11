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

#ifndef ALIBABACLOUD_DATALAKE_DATALAKECLIENT_H_
#define ALIBABACLOUD_DATALAKE_DATALAKECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "DataLakeExport.h"
#include "model/AbortLockRequest.h"
#include "model/AbortLockResult.h"
#include "model/BatchCreatePartitionsRequest.h"
#include "model/BatchCreatePartitionsResult.h"
#include "model/BatchCreateTablesRequest.h"
#include "model/BatchCreateTablesResult.h"
#include "model/BatchDeletePartitionsRequest.h"
#include "model/BatchDeletePartitionsResult.h"
#include "model/BatchDeleteTableVersionsRequest.h"
#include "model/BatchDeleteTableVersionsResult.h"
#include "model/BatchDeleteTablesRequest.h"
#include "model/BatchDeleteTablesResult.h"
#include "model/BatchGetPartitionColumnStatisticsRequest.h"
#include "model/BatchGetPartitionColumnStatisticsResult.h"
#include "model/BatchGetPartitionsRequest.h"
#include "model/BatchGetPartitionsResult.h"
#include "model/BatchGetTablesRequest.h"
#include "model/BatchGetTablesResult.h"
#include "model/BatchGrantPermissionsRequest.h"
#include "model/BatchGrantPermissionsResult.h"
#include "model/BatchRevokePermissionsRequest.h"
#include "model/BatchRevokePermissionsResult.h"
#include "model/BatchUpdatePartitionsRequest.h"
#include "model/BatchUpdatePartitionsResult.h"
#include "model/BatchUpdateTablesRequest.h"
#include "model/BatchUpdateTablesResult.h"
#include "model/CancelQueryRequest.h"
#include "model/CancelQueryResult.h"
#include "model/CheckPermissionsRequest.h"
#include "model/CheckPermissionsResult.h"
#include "model/CreateCatalogRequest.h"
#include "model/CreateCatalogResult.h"
#include "model/CreateDatabaseRequest.h"
#include "model/CreateDatabaseResult.h"
#include "model/CreateFunctionRequest.h"
#include "model/CreateFunctionResult.h"
#include "model/CreateLockRequest.h"
#include "model/CreateLockResult.h"
#include "model/CreatePartitionRequest.h"
#include "model/CreatePartitionResult.h"
#include "model/CreateRoleRequest.h"
#include "model/CreateRoleResult.h"
#include "model/CreateTableRequest.h"
#include "model/CreateTableResult.h"
#include "model/DeleteCatalogRequest.h"
#include "model/DeleteCatalogResult.h"
#include "model/DeleteDatabaseRequest.h"
#include "model/DeleteDatabaseResult.h"
#include "model/DeleteFunctionRequest.h"
#include "model/DeleteFunctionResult.h"
#include "model/DeletePartitionRequest.h"
#include "model/DeletePartitionResult.h"
#include "model/DeletePartitionColumnStatisticsRequest.h"
#include "model/DeletePartitionColumnStatisticsResult.h"
#include "model/DeleteRoleRequest.h"
#include "model/DeleteRoleResult.h"
#include "model/DeleteTableRequest.h"
#include "model/DeleteTableResult.h"
#include "model/DeleteTableColumnStatisticsRequest.h"
#include "model/DeleteTableColumnStatisticsResult.h"
#include "model/DeleteTableVersionRequest.h"
#include "model/DeleteTableVersionResult.h"
#include "model/DeregisterLocationRequest.h"
#include "model/DeregisterLocationResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GetAsyncTaskStatusRequest.h"
#include "model/GetAsyncTaskStatusResult.h"
#include "model/GetCatalogRequest.h"
#include "model/GetCatalogResult.h"
#include "model/GetCatalogSettingsRequest.h"
#include "model/GetCatalogSettingsResult.h"
#include "model/GetDatabaseRequest.h"
#include "model/GetDatabaseResult.h"
#include "model/GetFunctionRequest.h"
#include "model/GetFunctionResult.h"
#include "model/GetLifecycleRuleRequest.h"
#include "model/GetLifecycleRuleResult.h"
#include "model/GetLockRequest.h"
#include "model/GetLockResult.h"
#include "model/GetPartitionRequest.h"
#include "model/GetPartitionResult.h"
#include "model/GetPartitionColumnStatisticsRequest.h"
#include "model/GetPartitionColumnStatisticsResult.h"
#include "model/GetQueryResultRequest.h"
#include "model/GetQueryResultResult.h"
#include "model/GetRegionStatusRequest.h"
#include "model/GetRegionStatusResult.h"
#include "model/GetRoleRequest.h"
#include "model/GetRoleResult.h"
#include "model/GetServiceStatusRequest.h"
#include "model/GetServiceStatusResult.h"
#include "model/GetTableRequest.h"
#include "model/GetTableResult.h"
#include "model/GetTableColumnStatisticsRequest.h"
#include "model/GetTableColumnStatisticsResult.h"
#include "model/GetTableProfileRequest.h"
#include "model/GetTableProfileResult.h"
#include "model/GetTableVersionRequest.h"
#include "model/GetTableVersionResult.h"
#include "model/GrantPermissionsRequest.h"
#include "model/GrantPermissionsResult.h"
#include "model/GrantRoleToUsersRequest.h"
#include "model/GrantRoleToUsersResult.h"
#include "model/GrantRolesToUserRequest.h"
#include "model/GrantRolesToUserResult.h"
#include "model/ListCatalogsRequest.h"
#include "model/ListCatalogsResult.h"
#include "model/ListDatabasesRequest.h"
#include "model/ListDatabasesResult.h"
#include "model/ListFunctionNamesRequest.h"
#include "model/ListFunctionNamesResult.h"
#include "model/ListFunctionsRequest.h"
#include "model/ListFunctionsResult.h"
#include "model/ListPartitionNamesRequest.h"
#include "model/ListPartitionNamesResult.h"
#include "model/ListPartitionsRequest.h"
#include "model/ListPartitionsResult.h"
#include "model/ListPartitionsByExprRequest.h"
#include "model/ListPartitionsByExprResult.h"
#include "model/ListPartitionsByFilterRequest.h"
#include "model/ListPartitionsByFilterResult.h"
#include "model/ListPermissionsRequest.h"
#include "model/ListPermissionsResult.h"
#include "model/ListRoleUsersRequest.h"
#include "model/ListRoleUsersResult.h"
#include "model/ListRolesRequest.h"
#include "model/ListRolesResult.h"
#include "model/ListTableNamesRequest.h"
#include "model/ListTableNamesResult.h"
#include "model/ListTableVersionsRequest.h"
#include "model/ListTableVersionsResult.h"
#include "model/ListTablesRequest.h"
#include "model/ListTablesResult.h"
#include "model/ListUserRolesRequest.h"
#include "model/ListUserRolesResult.h"
#include "model/RefreshLockRequest.h"
#include "model/RefreshLockResult.h"
#include "model/RegisterLocationRequest.h"
#include "model/RegisterLocationResult.h"
#include "model/RenamePartitionRequest.h"
#include "model/RenamePartitionResult.h"
#include "model/RenameTableRequest.h"
#include "model/RenameTableResult.h"
#include "model/RevokePermissionsRequest.h"
#include "model/RevokePermissionsResult.h"
#include "model/RevokeRoleFromUsersRequest.h"
#include "model/RevokeRoleFromUsersResult.h"
#include "model/RevokeRolesFromUserRequest.h"
#include "model/RevokeRolesFromUserResult.h"
#include "model/RunMigrationWorkflowRequest.h"
#include "model/RunMigrationWorkflowResult.h"
#include "model/SearchRequest.h"
#include "model/SearchResult.h"
#include "model/SearchAcrossCatalogRequest.h"
#include "model/SearchAcrossCatalogResult.h"
#include "model/StopMigrationWorkflowRequest.h"
#include "model/StopMigrationWorkflowResult.h"
#include "model/SubmitQueryRequest.h"
#include "model/SubmitQueryResult.h"
#include "model/UnLockRequest.h"
#include "model/UnLockResult.h"
#include "model/UpdateCatalogRequest.h"
#include "model/UpdateCatalogResult.h"
#include "model/UpdateCatalogSettingsRequest.h"
#include "model/UpdateCatalogSettingsResult.h"
#include "model/UpdateDatabaseRequest.h"
#include "model/UpdateDatabaseResult.h"
#include "model/UpdateFunctionRequest.h"
#include "model/UpdateFunctionResult.h"
#include "model/UpdatePartitionColumnStatisticsRequest.h"
#include "model/UpdatePartitionColumnStatisticsResult.h"
#include "model/UpdatePermissionsRequest.h"
#include "model/UpdatePermissionsResult.h"
#include "model/UpdateRegisteredLocationRequest.h"
#include "model/UpdateRegisteredLocationResult.h"
#include "model/UpdateRoleRequest.h"
#include "model/UpdateRoleResult.h"
#include "model/UpdateRoleUsersRequest.h"
#include "model/UpdateRoleUsersResult.h"
#include "model/UpdateTableRequest.h"
#include "model/UpdateTableResult.h"
#include "model/UpdateTableColumnStatisticsRequest.h"
#include "model/UpdateTableColumnStatisticsResult.h"


namespace AlibabaCloud
{
	namespace DataLake
	{
		class ALIBABACLOUD_DATALAKE_EXPORT DataLakeClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbortLockResult> AbortLockOutcome;
			typedef std::future<AbortLockOutcome> AbortLockOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::AbortLockRequest&, const AbortLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbortLockAsyncHandler;
			typedef Outcome<Error, Model::BatchCreatePartitionsResult> BatchCreatePartitionsOutcome;
			typedef std::future<BatchCreatePartitionsOutcome> BatchCreatePartitionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchCreatePartitionsRequest&, const BatchCreatePartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreatePartitionsAsyncHandler;
			typedef Outcome<Error, Model::BatchCreateTablesResult> BatchCreateTablesOutcome;
			typedef std::future<BatchCreateTablesOutcome> BatchCreateTablesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchCreateTablesRequest&, const BatchCreateTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateTablesAsyncHandler;
			typedef Outcome<Error, Model::BatchDeletePartitionsResult> BatchDeletePartitionsOutcome;
			typedef std::future<BatchDeletePartitionsOutcome> BatchDeletePartitionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchDeletePartitionsRequest&, const BatchDeletePartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeletePartitionsAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteTableVersionsResult> BatchDeleteTableVersionsOutcome;
			typedef std::future<BatchDeleteTableVersionsOutcome> BatchDeleteTableVersionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchDeleteTableVersionsRequest&, const BatchDeleteTableVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteTableVersionsAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteTablesResult> BatchDeleteTablesOutcome;
			typedef std::future<BatchDeleteTablesOutcome> BatchDeleteTablesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchDeleteTablesRequest&, const BatchDeleteTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteTablesAsyncHandler;
			typedef Outcome<Error, Model::BatchGetPartitionColumnStatisticsResult> BatchGetPartitionColumnStatisticsOutcome;
			typedef std::future<BatchGetPartitionColumnStatisticsOutcome> BatchGetPartitionColumnStatisticsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchGetPartitionColumnStatisticsRequest&, const BatchGetPartitionColumnStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetPartitionColumnStatisticsAsyncHandler;
			typedef Outcome<Error, Model::BatchGetPartitionsResult> BatchGetPartitionsOutcome;
			typedef std::future<BatchGetPartitionsOutcome> BatchGetPartitionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchGetPartitionsRequest&, const BatchGetPartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetPartitionsAsyncHandler;
			typedef Outcome<Error, Model::BatchGetTablesResult> BatchGetTablesOutcome;
			typedef std::future<BatchGetTablesOutcome> BatchGetTablesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchGetTablesRequest&, const BatchGetTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGetTablesAsyncHandler;
			typedef Outcome<Error, Model::BatchGrantPermissionsResult> BatchGrantPermissionsOutcome;
			typedef std::future<BatchGrantPermissionsOutcome> BatchGrantPermissionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchGrantPermissionsRequest&, const BatchGrantPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchGrantPermissionsAsyncHandler;
			typedef Outcome<Error, Model::BatchRevokePermissionsResult> BatchRevokePermissionsOutcome;
			typedef std::future<BatchRevokePermissionsOutcome> BatchRevokePermissionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchRevokePermissionsRequest&, const BatchRevokePermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchRevokePermissionsAsyncHandler;
			typedef Outcome<Error, Model::BatchUpdatePartitionsResult> BatchUpdatePartitionsOutcome;
			typedef std::future<BatchUpdatePartitionsOutcome> BatchUpdatePartitionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchUpdatePartitionsRequest&, const BatchUpdatePartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdatePartitionsAsyncHandler;
			typedef Outcome<Error, Model::BatchUpdateTablesResult> BatchUpdateTablesOutcome;
			typedef std::future<BatchUpdateTablesOutcome> BatchUpdateTablesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::BatchUpdateTablesRequest&, const BatchUpdateTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateTablesAsyncHandler;
			typedef Outcome<Error, Model::CancelQueryResult> CancelQueryOutcome;
			typedef std::future<CancelQueryOutcome> CancelQueryOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::CancelQueryRequest&, const CancelQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelQueryAsyncHandler;
			typedef Outcome<Error, Model::CheckPermissionsResult> CheckPermissionsOutcome;
			typedef std::future<CheckPermissionsOutcome> CheckPermissionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::CheckPermissionsRequest&, const CheckPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckPermissionsAsyncHandler;
			typedef Outcome<Error, Model::CreateCatalogResult> CreateCatalogOutcome;
			typedef std::future<CreateCatalogOutcome> CreateCatalogOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::CreateCatalogRequest&, const CreateCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCatalogAsyncHandler;
			typedef Outcome<Error, Model::CreateDatabaseResult> CreateDatabaseOutcome;
			typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::CreateDatabaseRequest&, const CreateDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CreateFunctionResult> CreateFunctionOutcome;
			typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::CreateFunctionRequest&, const CreateFunctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFunctionAsyncHandler;
			typedef Outcome<Error, Model::CreateLockResult> CreateLockOutcome;
			typedef std::future<CreateLockOutcome> CreateLockOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::CreateLockRequest&, const CreateLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLockAsyncHandler;
			typedef Outcome<Error, Model::CreatePartitionResult> CreatePartitionOutcome;
			typedef std::future<CreatePartitionOutcome> CreatePartitionOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::CreatePartitionRequest&, const CreatePartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePartitionAsyncHandler;
			typedef Outcome<Error, Model::CreateRoleResult> CreateRoleOutcome;
			typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::CreateRoleRequest&, const CreateRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateTableResult> CreateTableOutcome;
			typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::CreateTableRequest&, const CreateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
			typedef Outcome<Error, Model::DeleteCatalogResult> DeleteCatalogOutcome;
			typedef std::future<DeleteCatalogOutcome> DeleteCatalogOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DeleteCatalogRequest&, const DeleteCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCatalogAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseResult> DeleteDatabaseOutcome;
			typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DeleteDatabaseRequest&, const DeleteDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DeleteFunctionResult> DeleteFunctionOutcome;
			typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DeleteFunctionRequest&, const DeleteFunctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFunctionAsyncHandler;
			typedef Outcome<Error, Model::DeletePartitionResult> DeletePartitionOutcome;
			typedef std::future<DeletePartitionOutcome> DeletePartitionOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DeletePartitionRequest&, const DeletePartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePartitionAsyncHandler;
			typedef Outcome<Error, Model::DeletePartitionColumnStatisticsResult> DeletePartitionColumnStatisticsOutcome;
			typedef std::future<DeletePartitionColumnStatisticsOutcome> DeletePartitionColumnStatisticsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DeletePartitionColumnStatisticsRequest&, const DeletePartitionColumnStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePartitionColumnStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DeleteRoleResult> DeleteRoleOutcome;
			typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DeleteRoleRequest&, const DeleteRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAsyncHandler;
			typedef Outcome<Error, Model::DeleteTableResult> DeleteTableOutcome;
			typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DeleteTableRequest&, const DeleteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableAsyncHandler;
			typedef Outcome<Error, Model::DeleteTableColumnStatisticsResult> DeleteTableColumnStatisticsOutcome;
			typedef std::future<DeleteTableColumnStatisticsOutcome> DeleteTableColumnStatisticsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DeleteTableColumnStatisticsRequest&, const DeleteTableColumnStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableColumnStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DeleteTableVersionResult> DeleteTableVersionOutcome;
			typedef std::future<DeleteTableVersionOutcome> DeleteTableVersionOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DeleteTableVersionRequest&, const DeleteTableVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableVersionAsyncHandler;
			typedef Outcome<Error, Model::DeregisterLocationResult> DeregisterLocationOutcome;
			typedef std::future<DeregisterLocationOutcome> DeregisterLocationOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DeregisterLocationRequest&, const DeregisterLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterLocationAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GetAsyncTaskStatusResult> GetAsyncTaskStatusOutcome;
			typedef std::future<GetAsyncTaskStatusOutcome> GetAsyncTaskStatusOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetAsyncTaskStatusRequest&, const GetAsyncTaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsyncTaskStatusAsyncHandler;
			typedef Outcome<Error, Model::GetCatalogResult> GetCatalogOutcome;
			typedef std::future<GetCatalogOutcome> GetCatalogOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetCatalogRequest&, const GetCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCatalogAsyncHandler;
			typedef Outcome<Error, Model::GetCatalogSettingsResult> GetCatalogSettingsOutcome;
			typedef std::future<GetCatalogSettingsOutcome> GetCatalogSettingsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetCatalogSettingsRequest&, const GetCatalogSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCatalogSettingsAsyncHandler;
			typedef Outcome<Error, Model::GetDatabaseResult> GetDatabaseOutcome;
			typedef std::future<GetDatabaseOutcome> GetDatabaseOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetDatabaseRequest&, const GetDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatabaseAsyncHandler;
			typedef Outcome<Error, Model::GetFunctionResult> GetFunctionOutcome;
			typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetFunctionRequest&, const GetFunctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionAsyncHandler;
			typedef Outcome<Error, Model::GetLifecycleRuleResult> GetLifecycleRuleOutcome;
			typedef std::future<GetLifecycleRuleOutcome> GetLifecycleRuleOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetLifecycleRuleRequest&, const GetLifecycleRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLifecycleRuleAsyncHandler;
			typedef Outcome<Error, Model::GetLockResult> GetLockOutcome;
			typedef std::future<GetLockOutcome> GetLockOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetLockRequest&, const GetLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLockAsyncHandler;
			typedef Outcome<Error, Model::GetPartitionResult> GetPartitionOutcome;
			typedef std::future<GetPartitionOutcome> GetPartitionOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetPartitionRequest&, const GetPartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPartitionAsyncHandler;
			typedef Outcome<Error, Model::GetPartitionColumnStatisticsResult> GetPartitionColumnStatisticsOutcome;
			typedef std::future<GetPartitionColumnStatisticsOutcome> GetPartitionColumnStatisticsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetPartitionColumnStatisticsRequest&, const GetPartitionColumnStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPartitionColumnStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetQueryResultResult> GetQueryResultOutcome;
			typedef std::future<GetQueryResultOutcome> GetQueryResultOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetQueryResultRequest&, const GetQueryResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQueryResultAsyncHandler;
			typedef Outcome<Error, Model::GetRegionStatusResult> GetRegionStatusOutcome;
			typedef std::future<GetRegionStatusOutcome> GetRegionStatusOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetRegionStatusRequest&, const GetRegionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRegionStatusAsyncHandler;
			typedef Outcome<Error, Model::GetRoleResult> GetRoleOutcome;
			typedef std::future<GetRoleOutcome> GetRoleOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetRoleRequest&, const GetRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRoleAsyncHandler;
			typedef Outcome<Error, Model::GetServiceStatusResult> GetServiceStatusOutcome;
			typedef std::future<GetServiceStatusOutcome> GetServiceStatusOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetServiceStatusRequest&, const GetServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetTableResult> GetTableOutcome;
			typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetTableRequest&, const GetTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableAsyncHandler;
			typedef Outcome<Error, Model::GetTableColumnStatisticsResult> GetTableColumnStatisticsOutcome;
			typedef std::future<GetTableColumnStatisticsOutcome> GetTableColumnStatisticsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetTableColumnStatisticsRequest&, const GetTableColumnStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableColumnStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetTableProfileResult> GetTableProfileOutcome;
			typedef std::future<GetTableProfileOutcome> GetTableProfileOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetTableProfileRequest&, const GetTableProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableProfileAsyncHandler;
			typedef Outcome<Error, Model::GetTableVersionResult> GetTableVersionOutcome;
			typedef std::future<GetTableVersionOutcome> GetTableVersionOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GetTableVersionRequest&, const GetTableVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableVersionAsyncHandler;
			typedef Outcome<Error, Model::GrantPermissionsResult> GrantPermissionsOutcome;
			typedef std::future<GrantPermissionsOutcome> GrantPermissionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GrantPermissionsRequest&, const GrantPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantPermissionsAsyncHandler;
			typedef Outcome<Error, Model::GrantRoleToUsersResult> GrantRoleToUsersOutcome;
			typedef std::future<GrantRoleToUsersOutcome> GrantRoleToUsersOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GrantRoleToUsersRequest&, const GrantRoleToUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantRoleToUsersAsyncHandler;
			typedef Outcome<Error, Model::GrantRolesToUserResult> GrantRolesToUserOutcome;
			typedef std::future<GrantRolesToUserOutcome> GrantRolesToUserOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::GrantRolesToUserRequest&, const GrantRolesToUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantRolesToUserAsyncHandler;
			typedef Outcome<Error, Model::ListCatalogsResult> ListCatalogsOutcome;
			typedef std::future<ListCatalogsOutcome> ListCatalogsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListCatalogsRequest&, const ListCatalogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCatalogsAsyncHandler;
			typedef Outcome<Error, Model::ListDatabasesResult> ListDatabasesOutcome;
			typedef std::future<ListDatabasesOutcome> ListDatabasesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListDatabasesRequest&, const ListDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatabasesAsyncHandler;
			typedef Outcome<Error, Model::ListFunctionNamesResult> ListFunctionNamesOutcome;
			typedef std::future<ListFunctionNamesOutcome> ListFunctionNamesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListFunctionNamesRequest&, const ListFunctionNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFunctionNamesAsyncHandler;
			typedef Outcome<Error, Model::ListFunctionsResult> ListFunctionsOutcome;
			typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListFunctionsRequest&, const ListFunctionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFunctionsAsyncHandler;
			typedef Outcome<Error, Model::ListPartitionNamesResult> ListPartitionNamesOutcome;
			typedef std::future<ListPartitionNamesOutcome> ListPartitionNamesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListPartitionNamesRequest&, const ListPartitionNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPartitionNamesAsyncHandler;
			typedef Outcome<Error, Model::ListPartitionsResult> ListPartitionsOutcome;
			typedef std::future<ListPartitionsOutcome> ListPartitionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListPartitionsRequest&, const ListPartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPartitionsAsyncHandler;
			typedef Outcome<Error, Model::ListPartitionsByExprResult> ListPartitionsByExprOutcome;
			typedef std::future<ListPartitionsByExprOutcome> ListPartitionsByExprOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListPartitionsByExprRequest&, const ListPartitionsByExprOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPartitionsByExprAsyncHandler;
			typedef Outcome<Error, Model::ListPartitionsByFilterResult> ListPartitionsByFilterOutcome;
			typedef std::future<ListPartitionsByFilterOutcome> ListPartitionsByFilterOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListPartitionsByFilterRequest&, const ListPartitionsByFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPartitionsByFilterAsyncHandler;
			typedef Outcome<Error, Model::ListPermissionsResult> ListPermissionsOutcome;
			typedef std::future<ListPermissionsOutcome> ListPermissionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListPermissionsRequest&, const ListPermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPermissionsAsyncHandler;
			typedef Outcome<Error, Model::ListRoleUsersResult> ListRoleUsersOutcome;
			typedef std::future<ListRoleUsersOutcome> ListRoleUsersOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListRoleUsersRequest&, const ListRoleUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRoleUsersAsyncHandler;
			typedef Outcome<Error, Model::ListRolesResult> ListRolesOutcome;
			typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListRolesRequest&, const ListRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRolesAsyncHandler;
			typedef Outcome<Error, Model::ListTableNamesResult> ListTableNamesOutcome;
			typedef std::future<ListTableNamesOutcome> ListTableNamesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListTableNamesRequest&, const ListTableNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTableNamesAsyncHandler;
			typedef Outcome<Error, Model::ListTableVersionsResult> ListTableVersionsOutcome;
			typedef std::future<ListTableVersionsOutcome> ListTableVersionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListTableVersionsRequest&, const ListTableVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTableVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListTablesResult> ListTablesOutcome;
			typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListTablesRequest&, const ListTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTablesAsyncHandler;
			typedef Outcome<Error, Model::ListUserRolesResult> ListUserRolesOutcome;
			typedef std::future<ListUserRolesOutcome> ListUserRolesOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::ListUserRolesRequest&, const ListUserRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserRolesAsyncHandler;
			typedef Outcome<Error, Model::RefreshLockResult> RefreshLockOutcome;
			typedef std::future<RefreshLockOutcome> RefreshLockOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::RefreshLockRequest&, const RefreshLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshLockAsyncHandler;
			typedef Outcome<Error, Model::RegisterLocationResult> RegisterLocationOutcome;
			typedef std::future<RegisterLocationOutcome> RegisterLocationOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::RegisterLocationRequest&, const RegisterLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterLocationAsyncHandler;
			typedef Outcome<Error, Model::RenamePartitionResult> RenamePartitionOutcome;
			typedef std::future<RenamePartitionOutcome> RenamePartitionOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::RenamePartitionRequest&, const RenamePartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenamePartitionAsyncHandler;
			typedef Outcome<Error, Model::RenameTableResult> RenameTableOutcome;
			typedef std::future<RenameTableOutcome> RenameTableOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::RenameTableRequest&, const RenameTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenameTableAsyncHandler;
			typedef Outcome<Error, Model::RevokePermissionsResult> RevokePermissionsOutcome;
			typedef std::future<RevokePermissionsOutcome> RevokePermissionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::RevokePermissionsRequest&, const RevokePermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokePermissionsAsyncHandler;
			typedef Outcome<Error, Model::RevokeRoleFromUsersResult> RevokeRoleFromUsersOutcome;
			typedef std::future<RevokeRoleFromUsersOutcome> RevokeRoleFromUsersOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::RevokeRoleFromUsersRequest&, const RevokeRoleFromUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeRoleFromUsersAsyncHandler;
			typedef Outcome<Error, Model::RevokeRolesFromUserResult> RevokeRolesFromUserOutcome;
			typedef std::future<RevokeRolesFromUserOutcome> RevokeRolesFromUserOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::RevokeRolesFromUserRequest&, const RevokeRolesFromUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeRolesFromUserAsyncHandler;
			typedef Outcome<Error, Model::RunMigrationWorkflowResult> RunMigrationWorkflowOutcome;
			typedef std::future<RunMigrationWorkflowOutcome> RunMigrationWorkflowOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::RunMigrationWorkflowRequest&, const RunMigrationWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunMigrationWorkflowAsyncHandler;
			typedef Outcome<Error, Model::SearchResult> SearchOutcome;
			typedef std::future<SearchOutcome> SearchOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::SearchRequest&, const SearchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchAsyncHandler;
			typedef Outcome<Error, Model::SearchAcrossCatalogResult> SearchAcrossCatalogOutcome;
			typedef std::future<SearchAcrossCatalogOutcome> SearchAcrossCatalogOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::SearchAcrossCatalogRequest&, const SearchAcrossCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchAcrossCatalogAsyncHandler;
			typedef Outcome<Error, Model::StopMigrationWorkflowResult> StopMigrationWorkflowOutcome;
			typedef std::future<StopMigrationWorkflowOutcome> StopMigrationWorkflowOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::StopMigrationWorkflowRequest&, const StopMigrationWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrationWorkflowAsyncHandler;
			typedef Outcome<Error, Model::SubmitQueryResult> SubmitQueryOutcome;
			typedef std::future<SubmitQueryOutcome> SubmitQueryOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::SubmitQueryRequest&, const SubmitQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitQueryAsyncHandler;
			typedef Outcome<Error, Model::UnLockResult> UnLockOutcome;
			typedef std::future<UnLockOutcome> UnLockOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UnLockRequest&, const UnLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnLockAsyncHandler;
			typedef Outcome<Error, Model::UpdateCatalogResult> UpdateCatalogOutcome;
			typedef std::future<UpdateCatalogOutcome> UpdateCatalogOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdateCatalogRequest&, const UpdateCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCatalogAsyncHandler;
			typedef Outcome<Error, Model::UpdateCatalogSettingsResult> UpdateCatalogSettingsOutcome;
			typedef std::future<UpdateCatalogSettingsOutcome> UpdateCatalogSettingsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdateCatalogSettingsRequest&, const UpdateCatalogSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCatalogSettingsAsyncHandler;
			typedef Outcome<Error, Model::UpdateDatabaseResult> UpdateDatabaseOutcome;
			typedef std::future<UpdateDatabaseOutcome> UpdateDatabaseOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdateDatabaseRequest&, const UpdateDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDatabaseAsyncHandler;
			typedef Outcome<Error, Model::UpdateFunctionResult> UpdateFunctionOutcome;
			typedef std::future<UpdateFunctionOutcome> UpdateFunctionOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdateFunctionRequest&, const UpdateFunctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionAsyncHandler;
			typedef Outcome<Error, Model::UpdatePartitionColumnStatisticsResult> UpdatePartitionColumnStatisticsOutcome;
			typedef std::future<UpdatePartitionColumnStatisticsOutcome> UpdatePartitionColumnStatisticsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdatePartitionColumnStatisticsRequest&, const UpdatePartitionColumnStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePartitionColumnStatisticsAsyncHandler;
			typedef Outcome<Error, Model::UpdatePermissionsResult> UpdatePermissionsOutcome;
			typedef std::future<UpdatePermissionsOutcome> UpdatePermissionsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdatePermissionsRequest&, const UpdatePermissionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePermissionsAsyncHandler;
			typedef Outcome<Error, Model::UpdateRegisteredLocationResult> UpdateRegisteredLocationOutcome;
			typedef std::future<UpdateRegisteredLocationOutcome> UpdateRegisteredLocationOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdateRegisteredLocationRequest&, const UpdateRegisteredLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRegisteredLocationAsyncHandler;
			typedef Outcome<Error, Model::UpdateRoleResult> UpdateRoleOutcome;
			typedef std::future<UpdateRoleOutcome> UpdateRoleOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdateRoleRequest&, const UpdateRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleAsyncHandler;
			typedef Outcome<Error, Model::UpdateRoleUsersResult> UpdateRoleUsersOutcome;
			typedef std::future<UpdateRoleUsersOutcome> UpdateRoleUsersOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdateRoleUsersRequest&, const UpdateRoleUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleUsersAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableResult> UpdateTableOutcome;
			typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdateTableRequest&, const UpdateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableColumnStatisticsResult> UpdateTableColumnStatisticsOutcome;
			typedef std::future<UpdateTableColumnStatisticsOutcome> UpdateTableColumnStatisticsOutcomeCallable;
			typedef std::function<void(const DataLakeClient*, const Model::UpdateTableColumnStatisticsRequest&, const UpdateTableColumnStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableColumnStatisticsAsyncHandler;

			DataLakeClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DataLakeClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DataLakeClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DataLakeClient();
			AbortLockOutcome abortLock(const Model::AbortLockRequest &request)const;
			void abortLockAsync(const Model::AbortLockRequest& request, const AbortLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbortLockOutcomeCallable abortLockCallable(const Model::AbortLockRequest& request) const;
			BatchCreatePartitionsOutcome batchCreatePartitions(const Model::BatchCreatePartitionsRequest &request)const;
			void batchCreatePartitionsAsync(const Model::BatchCreatePartitionsRequest& request, const BatchCreatePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchCreatePartitionsOutcomeCallable batchCreatePartitionsCallable(const Model::BatchCreatePartitionsRequest& request) const;
			BatchCreateTablesOutcome batchCreateTables(const Model::BatchCreateTablesRequest &request)const;
			void batchCreateTablesAsync(const Model::BatchCreateTablesRequest& request, const BatchCreateTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchCreateTablesOutcomeCallable batchCreateTablesCallable(const Model::BatchCreateTablesRequest& request) const;
			BatchDeletePartitionsOutcome batchDeletePartitions(const Model::BatchDeletePartitionsRequest &request)const;
			void batchDeletePartitionsAsync(const Model::BatchDeletePartitionsRequest& request, const BatchDeletePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeletePartitionsOutcomeCallable batchDeletePartitionsCallable(const Model::BatchDeletePartitionsRequest& request) const;
			BatchDeleteTableVersionsOutcome batchDeleteTableVersions(const Model::BatchDeleteTableVersionsRequest &request)const;
			void batchDeleteTableVersionsAsync(const Model::BatchDeleteTableVersionsRequest& request, const BatchDeleteTableVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteTableVersionsOutcomeCallable batchDeleteTableVersionsCallable(const Model::BatchDeleteTableVersionsRequest& request) const;
			BatchDeleteTablesOutcome batchDeleteTables(const Model::BatchDeleteTablesRequest &request)const;
			void batchDeleteTablesAsync(const Model::BatchDeleteTablesRequest& request, const BatchDeleteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteTablesOutcomeCallable batchDeleteTablesCallable(const Model::BatchDeleteTablesRequest& request) const;
			BatchGetPartitionColumnStatisticsOutcome batchGetPartitionColumnStatistics(const Model::BatchGetPartitionColumnStatisticsRequest &request)const;
			void batchGetPartitionColumnStatisticsAsync(const Model::BatchGetPartitionColumnStatisticsRequest& request, const BatchGetPartitionColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetPartitionColumnStatisticsOutcomeCallable batchGetPartitionColumnStatisticsCallable(const Model::BatchGetPartitionColumnStatisticsRequest& request) const;
			BatchGetPartitionsOutcome batchGetPartitions(const Model::BatchGetPartitionsRequest &request)const;
			void batchGetPartitionsAsync(const Model::BatchGetPartitionsRequest& request, const BatchGetPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetPartitionsOutcomeCallable batchGetPartitionsCallable(const Model::BatchGetPartitionsRequest& request) const;
			BatchGetTablesOutcome batchGetTables(const Model::BatchGetTablesRequest &request)const;
			void batchGetTablesAsync(const Model::BatchGetTablesRequest& request, const BatchGetTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGetTablesOutcomeCallable batchGetTablesCallable(const Model::BatchGetTablesRequest& request) const;
			BatchGrantPermissionsOutcome batchGrantPermissions(const Model::BatchGrantPermissionsRequest &request)const;
			void batchGrantPermissionsAsync(const Model::BatchGrantPermissionsRequest& request, const BatchGrantPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchGrantPermissionsOutcomeCallable batchGrantPermissionsCallable(const Model::BatchGrantPermissionsRequest& request) const;
			BatchRevokePermissionsOutcome batchRevokePermissions(const Model::BatchRevokePermissionsRequest &request)const;
			void batchRevokePermissionsAsync(const Model::BatchRevokePermissionsRequest& request, const BatchRevokePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchRevokePermissionsOutcomeCallable batchRevokePermissionsCallable(const Model::BatchRevokePermissionsRequest& request) const;
			BatchUpdatePartitionsOutcome batchUpdatePartitions(const Model::BatchUpdatePartitionsRequest &request)const;
			void batchUpdatePartitionsAsync(const Model::BatchUpdatePartitionsRequest& request, const BatchUpdatePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUpdatePartitionsOutcomeCallable batchUpdatePartitionsCallable(const Model::BatchUpdatePartitionsRequest& request) const;
			BatchUpdateTablesOutcome batchUpdateTables(const Model::BatchUpdateTablesRequest &request)const;
			void batchUpdateTablesAsync(const Model::BatchUpdateTablesRequest& request, const BatchUpdateTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchUpdateTablesOutcomeCallable batchUpdateTablesCallable(const Model::BatchUpdateTablesRequest& request) const;
			CancelQueryOutcome cancelQuery(const Model::CancelQueryRequest &request)const;
			void cancelQueryAsync(const Model::CancelQueryRequest& request, const CancelQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelQueryOutcomeCallable cancelQueryCallable(const Model::CancelQueryRequest& request) const;
			CheckPermissionsOutcome checkPermissions(const Model::CheckPermissionsRequest &request)const;
			void checkPermissionsAsync(const Model::CheckPermissionsRequest& request, const CheckPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckPermissionsOutcomeCallable checkPermissionsCallable(const Model::CheckPermissionsRequest& request) const;
			CreateCatalogOutcome createCatalog(const Model::CreateCatalogRequest &request)const;
			void createCatalogAsync(const Model::CreateCatalogRequest& request, const CreateCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCatalogOutcomeCallable createCatalogCallable(const Model::CreateCatalogRequest& request) const;
			CreateDatabaseOutcome createDatabase(const Model::CreateDatabaseRequest &request)const;
			void createDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatabaseOutcomeCallable createDatabaseCallable(const Model::CreateDatabaseRequest& request) const;
			CreateFunctionOutcome createFunction(const Model::CreateFunctionRequest &request)const;
			void createFunctionAsync(const Model::CreateFunctionRequest& request, const CreateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFunctionOutcomeCallable createFunctionCallable(const Model::CreateFunctionRequest& request) const;
			CreateLockOutcome createLock(const Model::CreateLockRequest &request)const;
			void createLockAsync(const Model::CreateLockRequest& request, const CreateLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLockOutcomeCallable createLockCallable(const Model::CreateLockRequest& request) const;
			CreatePartitionOutcome createPartition(const Model::CreatePartitionRequest &request)const;
			void createPartitionAsync(const Model::CreatePartitionRequest& request, const CreatePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePartitionOutcomeCallable createPartitionCallable(const Model::CreatePartitionRequest& request) const;
			CreateRoleOutcome createRole(const Model::CreateRoleRequest &request)const;
			void createRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRoleOutcomeCallable createRoleCallable(const Model::CreateRoleRequest& request) const;
			CreateTableOutcome createTable(const Model::CreateTableRequest &request)const;
			void createTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTableOutcomeCallable createTableCallable(const Model::CreateTableRequest& request) const;
			DeleteCatalogOutcome deleteCatalog(const Model::DeleteCatalogRequest &request)const;
			void deleteCatalogAsync(const Model::DeleteCatalogRequest& request, const DeleteCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCatalogOutcomeCallable deleteCatalogCallable(const Model::DeleteCatalogRequest& request) const;
			DeleteDatabaseOutcome deleteDatabase(const Model::DeleteDatabaseRequest &request)const;
			void deleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabaseOutcomeCallable deleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;
			DeleteFunctionOutcome deleteFunction(const Model::DeleteFunctionRequest &request)const;
			void deleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFunctionOutcomeCallable deleteFunctionCallable(const Model::DeleteFunctionRequest& request) const;
			DeletePartitionOutcome deletePartition(const Model::DeletePartitionRequest &request)const;
			void deletePartitionAsync(const Model::DeletePartitionRequest& request, const DeletePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePartitionOutcomeCallable deletePartitionCallable(const Model::DeletePartitionRequest& request) const;
			DeletePartitionColumnStatisticsOutcome deletePartitionColumnStatistics(const Model::DeletePartitionColumnStatisticsRequest &request)const;
			void deletePartitionColumnStatisticsAsync(const Model::DeletePartitionColumnStatisticsRequest& request, const DeletePartitionColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePartitionColumnStatisticsOutcomeCallable deletePartitionColumnStatisticsCallable(const Model::DeletePartitionColumnStatisticsRequest& request) const;
			DeleteRoleOutcome deleteRole(const Model::DeleteRoleRequest &request)const;
			void deleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRoleOutcomeCallable deleteRoleCallable(const Model::DeleteRoleRequest& request) const;
			DeleteTableOutcome deleteTable(const Model::DeleteTableRequest &request)const;
			void deleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTableOutcomeCallable deleteTableCallable(const Model::DeleteTableRequest& request) const;
			DeleteTableColumnStatisticsOutcome deleteTableColumnStatistics(const Model::DeleteTableColumnStatisticsRequest &request)const;
			void deleteTableColumnStatisticsAsync(const Model::DeleteTableColumnStatisticsRequest& request, const DeleteTableColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTableColumnStatisticsOutcomeCallable deleteTableColumnStatisticsCallable(const Model::DeleteTableColumnStatisticsRequest& request) const;
			DeleteTableVersionOutcome deleteTableVersion(const Model::DeleteTableVersionRequest &request)const;
			void deleteTableVersionAsync(const Model::DeleteTableVersionRequest& request, const DeleteTableVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTableVersionOutcomeCallable deleteTableVersionCallable(const Model::DeleteTableVersionRequest& request) const;
			DeregisterLocationOutcome deregisterLocation(const Model::DeregisterLocationRequest &request)const;
			void deregisterLocationAsync(const Model::DeregisterLocationRequest& request, const DeregisterLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeregisterLocationOutcomeCallable deregisterLocationCallable(const Model::DeregisterLocationRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GetAsyncTaskStatusOutcome getAsyncTaskStatus(const Model::GetAsyncTaskStatusRequest &request)const;
			void getAsyncTaskStatusAsync(const Model::GetAsyncTaskStatusRequest& request, const GetAsyncTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsyncTaskStatusOutcomeCallable getAsyncTaskStatusCallable(const Model::GetAsyncTaskStatusRequest& request) const;
			GetCatalogOutcome getCatalog(const Model::GetCatalogRequest &request)const;
			void getCatalogAsync(const Model::GetCatalogRequest& request, const GetCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCatalogOutcomeCallable getCatalogCallable(const Model::GetCatalogRequest& request) const;
			GetCatalogSettingsOutcome getCatalogSettings(const Model::GetCatalogSettingsRequest &request)const;
			void getCatalogSettingsAsync(const Model::GetCatalogSettingsRequest& request, const GetCatalogSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCatalogSettingsOutcomeCallable getCatalogSettingsCallable(const Model::GetCatalogSettingsRequest& request) const;
			GetDatabaseOutcome getDatabase(const Model::GetDatabaseRequest &request)const;
			void getDatabaseAsync(const Model::GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatabaseOutcomeCallable getDatabaseCallable(const Model::GetDatabaseRequest& request) const;
			GetFunctionOutcome getFunction(const Model::GetFunctionRequest &request)const;
			void getFunctionAsync(const Model::GetFunctionRequest& request, const GetFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFunctionOutcomeCallable getFunctionCallable(const Model::GetFunctionRequest& request) const;
			GetLifecycleRuleOutcome getLifecycleRule(const Model::GetLifecycleRuleRequest &request)const;
			void getLifecycleRuleAsync(const Model::GetLifecycleRuleRequest& request, const GetLifecycleRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLifecycleRuleOutcomeCallable getLifecycleRuleCallable(const Model::GetLifecycleRuleRequest& request) const;
			GetLockOutcome getLock(const Model::GetLockRequest &request)const;
			void getLockAsync(const Model::GetLockRequest& request, const GetLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLockOutcomeCallable getLockCallable(const Model::GetLockRequest& request) const;
			GetPartitionOutcome getPartition(const Model::GetPartitionRequest &request)const;
			void getPartitionAsync(const Model::GetPartitionRequest& request, const GetPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPartitionOutcomeCallable getPartitionCallable(const Model::GetPartitionRequest& request) const;
			GetPartitionColumnStatisticsOutcome getPartitionColumnStatistics(const Model::GetPartitionColumnStatisticsRequest &request)const;
			void getPartitionColumnStatisticsAsync(const Model::GetPartitionColumnStatisticsRequest& request, const GetPartitionColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPartitionColumnStatisticsOutcomeCallable getPartitionColumnStatisticsCallable(const Model::GetPartitionColumnStatisticsRequest& request) const;
			GetQueryResultOutcome getQueryResult(const Model::GetQueryResultRequest &request)const;
			void getQueryResultAsync(const Model::GetQueryResultRequest& request, const GetQueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQueryResultOutcomeCallable getQueryResultCallable(const Model::GetQueryResultRequest& request) const;
			GetRegionStatusOutcome getRegionStatus(const Model::GetRegionStatusRequest &request)const;
			void getRegionStatusAsync(const Model::GetRegionStatusRequest& request, const GetRegionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRegionStatusOutcomeCallable getRegionStatusCallable(const Model::GetRegionStatusRequest& request) const;
			GetRoleOutcome getRole(const Model::GetRoleRequest &request)const;
			void getRoleAsync(const Model::GetRoleRequest& request, const GetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRoleOutcomeCallable getRoleCallable(const Model::GetRoleRequest& request) const;
			GetServiceStatusOutcome getServiceStatus(const Model::GetServiceStatusRequest &request)const;
			void getServiceStatusAsync(const Model::GetServiceStatusRequest& request, const GetServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceStatusOutcomeCallable getServiceStatusCallable(const Model::GetServiceStatusRequest& request) const;
			GetTableOutcome getTable(const Model::GetTableRequest &request)const;
			void getTableAsync(const Model::GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableOutcomeCallable getTableCallable(const Model::GetTableRequest& request) const;
			GetTableColumnStatisticsOutcome getTableColumnStatistics(const Model::GetTableColumnStatisticsRequest &request)const;
			void getTableColumnStatisticsAsync(const Model::GetTableColumnStatisticsRequest& request, const GetTableColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableColumnStatisticsOutcomeCallable getTableColumnStatisticsCallable(const Model::GetTableColumnStatisticsRequest& request) const;
			GetTableProfileOutcome getTableProfile(const Model::GetTableProfileRequest &request)const;
			void getTableProfileAsync(const Model::GetTableProfileRequest& request, const GetTableProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableProfileOutcomeCallable getTableProfileCallable(const Model::GetTableProfileRequest& request) const;
			GetTableVersionOutcome getTableVersion(const Model::GetTableVersionRequest &request)const;
			void getTableVersionAsync(const Model::GetTableVersionRequest& request, const GetTableVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableVersionOutcomeCallable getTableVersionCallable(const Model::GetTableVersionRequest& request) const;
			GrantPermissionsOutcome grantPermissions(const Model::GrantPermissionsRequest &request)const;
			void grantPermissionsAsync(const Model::GrantPermissionsRequest& request, const GrantPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantPermissionsOutcomeCallable grantPermissionsCallable(const Model::GrantPermissionsRequest& request) const;
			GrantRoleToUsersOutcome grantRoleToUsers(const Model::GrantRoleToUsersRequest &request)const;
			void grantRoleToUsersAsync(const Model::GrantRoleToUsersRequest& request, const GrantRoleToUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantRoleToUsersOutcomeCallable grantRoleToUsersCallable(const Model::GrantRoleToUsersRequest& request) const;
			GrantRolesToUserOutcome grantRolesToUser(const Model::GrantRolesToUserRequest &request)const;
			void grantRolesToUserAsync(const Model::GrantRolesToUserRequest& request, const GrantRolesToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantRolesToUserOutcomeCallable grantRolesToUserCallable(const Model::GrantRolesToUserRequest& request) const;
			ListCatalogsOutcome listCatalogs(const Model::ListCatalogsRequest &request)const;
			void listCatalogsAsync(const Model::ListCatalogsRequest& request, const ListCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCatalogsOutcomeCallable listCatalogsCallable(const Model::ListCatalogsRequest& request) const;
			ListDatabasesOutcome listDatabases(const Model::ListDatabasesRequest &request)const;
			void listDatabasesAsync(const Model::ListDatabasesRequest& request, const ListDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatabasesOutcomeCallable listDatabasesCallable(const Model::ListDatabasesRequest& request) const;
			ListFunctionNamesOutcome listFunctionNames(const Model::ListFunctionNamesRequest &request)const;
			void listFunctionNamesAsync(const Model::ListFunctionNamesRequest& request, const ListFunctionNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFunctionNamesOutcomeCallable listFunctionNamesCallable(const Model::ListFunctionNamesRequest& request) const;
			ListFunctionsOutcome listFunctions(const Model::ListFunctionsRequest &request)const;
			void listFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFunctionsOutcomeCallable listFunctionsCallable(const Model::ListFunctionsRequest& request) const;
			ListPartitionNamesOutcome listPartitionNames(const Model::ListPartitionNamesRequest &request)const;
			void listPartitionNamesAsync(const Model::ListPartitionNamesRequest& request, const ListPartitionNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPartitionNamesOutcomeCallable listPartitionNamesCallable(const Model::ListPartitionNamesRequest& request) const;
			ListPartitionsOutcome listPartitions(const Model::ListPartitionsRequest &request)const;
			void listPartitionsAsync(const Model::ListPartitionsRequest& request, const ListPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPartitionsOutcomeCallable listPartitionsCallable(const Model::ListPartitionsRequest& request) const;
			ListPartitionsByExprOutcome listPartitionsByExpr(const Model::ListPartitionsByExprRequest &request)const;
			void listPartitionsByExprAsync(const Model::ListPartitionsByExprRequest& request, const ListPartitionsByExprAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPartitionsByExprOutcomeCallable listPartitionsByExprCallable(const Model::ListPartitionsByExprRequest& request) const;
			ListPartitionsByFilterOutcome listPartitionsByFilter(const Model::ListPartitionsByFilterRequest &request)const;
			void listPartitionsByFilterAsync(const Model::ListPartitionsByFilterRequest& request, const ListPartitionsByFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPartitionsByFilterOutcomeCallable listPartitionsByFilterCallable(const Model::ListPartitionsByFilterRequest& request) const;
			ListPermissionsOutcome listPermissions(const Model::ListPermissionsRequest &request)const;
			void listPermissionsAsync(const Model::ListPermissionsRequest& request, const ListPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPermissionsOutcomeCallable listPermissionsCallable(const Model::ListPermissionsRequest& request) const;
			ListRoleUsersOutcome listRoleUsers(const Model::ListRoleUsersRequest &request)const;
			void listRoleUsersAsync(const Model::ListRoleUsersRequest& request, const ListRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRoleUsersOutcomeCallable listRoleUsersCallable(const Model::ListRoleUsersRequest& request) const;
			ListRolesOutcome listRoles(const Model::ListRolesRequest &request)const;
			void listRolesAsync(const Model::ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRolesOutcomeCallable listRolesCallable(const Model::ListRolesRequest& request) const;
			ListTableNamesOutcome listTableNames(const Model::ListTableNamesRequest &request)const;
			void listTableNamesAsync(const Model::ListTableNamesRequest& request, const ListTableNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTableNamesOutcomeCallable listTableNamesCallable(const Model::ListTableNamesRequest& request) const;
			ListTableVersionsOutcome listTableVersions(const Model::ListTableVersionsRequest &request)const;
			void listTableVersionsAsync(const Model::ListTableVersionsRequest& request, const ListTableVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTableVersionsOutcomeCallable listTableVersionsCallable(const Model::ListTableVersionsRequest& request) const;
			ListTablesOutcome listTables(const Model::ListTablesRequest &request)const;
			void listTablesAsync(const Model::ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTablesOutcomeCallable listTablesCallable(const Model::ListTablesRequest& request) const;
			ListUserRolesOutcome listUserRoles(const Model::ListUserRolesRequest &request)const;
			void listUserRolesAsync(const Model::ListUserRolesRequest& request, const ListUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserRolesOutcomeCallable listUserRolesCallable(const Model::ListUserRolesRequest& request) const;
			RefreshLockOutcome refreshLock(const Model::RefreshLockRequest &request)const;
			void refreshLockAsync(const Model::RefreshLockRequest& request, const RefreshLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshLockOutcomeCallable refreshLockCallable(const Model::RefreshLockRequest& request) const;
			RegisterLocationOutcome registerLocation(const Model::RegisterLocationRequest &request)const;
			void registerLocationAsync(const Model::RegisterLocationRequest& request, const RegisterLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterLocationOutcomeCallable registerLocationCallable(const Model::RegisterLocationRequest& request) const;
			RenamePartitionOutcome renamePartition(const Model::RenamePartitionRequest &request)const;
			void renamePartitionAsync(const Model::RenamePartitionRequest& request, const RenamePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenamePartitionOutcomeCallable renamePartitionCallable(const Model::RenamePartitionRequest& request) const;
			RenameTableOutcome renameTable(const Model::RenameTableRequest &request)const;
			void renameTableAsync(const Model::RenameTableRequest& request, const RenameTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenameTableOutcomeCallable renameTableCallable(const Model::RenameTableRequest& request) const;
			RevokePermissionsOutcome revokePermissions(const Model::RevokePermissionsRequest &request)const;
			void revokePermissionsAsync(const Model::RevokePermissionsRequest& request, const RevokePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokePermissionsOutcomeCallable revokePermissionsCallable(const Model::RevokePermissionsRequest& request) const;
			RevokeRoleFromUsersOutcome revokeRoleFromUsers(const Model::RevokeRoleFromUsersRequest &request)const;
			void revokeRoleFromUsersAsync(const Model::RevokeRoleFromUsersRequest& request, const RevokeRoleFromUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeRoleFromUsersOutcomeCallable revokeRoleFromUsersCallable(const Model::RevokeRoleFromUsersRequest& request) const;
			RevokeRolesFromUserOutcome revokeRolesFromUser(const Model::RevokeRolesFromUserRequest &request)const;
			void revokeRolesFromUserAsync(const Model::RevokeRolesFromUserRequest& request, const RevokeRolesFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeRolesFromUserOutcomeCallable revokeRolesFromUserCallable(const Model::RevokeRolesFromUserRequest& request) const;
			RunMigrationWorkflowOutcome runMigrationWorkflow(const Model::RunMigrationWorkflowRequest &request)const;
			void runMigrationWorkflowAsync(const Model::RunMigrationWorkflowRequest& request, const RunMigrationWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunMigrationWorkflowOutcomeCallable runMigrationWorkflowCallable(const Model::RunMigrationWorkflowRequest& request) const;
			SearchOutcome search(const Model::SearchRequest &request)const;
			void searchAsync(const Model::SearchRequest& request, const SearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchOutcomeCallable searchCallable(const Model::SearchRequest& request) const;
			SearchAcrossCatalogOutcome searchAcrossCatalog(const Model::SearchAcrossCatalogRequest &request)const;
			void searchAcrossCatalogAsync(const Model::SearchAcrossCatalogRequest& request, const SearchAcrossCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchAcrossCatalogOutcomeCallable searchAcrossCatalogCallable(const Model::SearchAcrossCatalogRequest& request) const;
			StopMigrationWorkflowOutcome stopMigrationWorkflow(const Model::StopMigrationWorkflowRequest &request)const;
			void stopMigrationWorkflowAsync(const Model::StopMigrationWorkflowRequest& request, const StopMigrationWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMigrationWorkflowOutcomeCallable stopMigrationWorkflowCallable(const Model::StopMigrationWorkflowRequest& request) const;
			SubmitQueryOutcome submitQuery(const Model::SubmitQueryRequest &request)const;
			void submitQueryAsync(const Model::SubmitQueryRequest& request, const SubmitQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitQueryOutcomeCallable submitQueryCallable(const Model::SubmitQueryRequest& request) const;
			UnLockOutcome unLock(const Model::UnLockRequest &request)const;
			void unLockAsync(const Model::UnLockRequest& request, const UnLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnLockOutcomeCallable unLockCallable(const Model::UnLockRequest& request) const;
			UpdateCatalogOutcome updateCatalog(const Model::UpdateCatalogRequest &request)const;
			void updateCatalogAsync(const Model::UpdateCatalogRequest& request, const UpdateCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCatalogOutcomeCallable updateCatalogCallable(const Model::UpdateCatalogRequest& request) const;
			UpdateCatalogSettingsOutcome updateCatalogSettings(const Model::UpdateCatalogSettingsRequest &request)const;
			void updateCatalogSettingsAsync(const Model::UpdateCatalogSettingsRequest& request, const UpdateCatalogSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCatalogSettingsOutcomeCallable updateCatalogSettingsCallable(const Model::UpdateCatalogSettingsRequest& request) const;
			UpdateDatabaseOutcome updateDatabase(const Model::UpdateDatabaseRequest &request)const;
			void updateDatabaseAsync(const Model::UpdateDatabaseRequest& request, const UpdateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDatabaseOutcomeCallable updateDatabaseCallable(const Model::UpdateDatabaseRequest& request) const;
			UpdateFunctionOutcome updateFunction(const Model::UpdateFunctionRequest &request)const;
			void updateFunctionAsync(const Model::UpdateFunctionRequest& request, const UpdateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFunctionOutcomeCallable updateFunctionCallable(const Model::UpdateFunctionRequest& request) const;
			UpdatePartitionColumnStatisticsOutcome updatePartitionColumnStatistics(const Model::UpdatePartitionColumnStatisticsRequest &request)const;
			void updatePartitionColumnStatisticsAsync(const Model::UpdatePartitionColumnStatisticsRequest& request, const UpdatePartitionColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePartitionColumnStatisticsOutcomeCallable updatePartitionColumnStatisticsCallable(const Model::UpdatePartitionColumnStatisticsRequest& request) const;
			UpdatePermissionsOutcome updatePermissions(const Model::UpdatePermissionsRequest &request)const;
			void updatePermissionsAsync(const Model::UpdatePermissionsRequest& request, const UpdatePermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePermissionsOutcomeCallable updatePermissionsCallable(const Model::UpdatePermissionsRequest& request) const;
			UpdateRegisteredLocationOutcome updateRegisteredLocation(const Model::UpdateRegisteredLocationRequest &request)const;
			void updateRegisteredLocationAsync(const Model::UpdateRegisteredLocationRequest& request, const UpdateRegisteredLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRegisteredLocationOutcomeCallable updateRegisteredLocationCallable(const Model::UpdateRegisteredLocationRequest& request) const;
			UpdateRoleOutcome updateRole(const Model::UpdateRoleRequest &request)const;
			void updateRoleAsync(const Model::UpdateRoleRequest& request, const UpdateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRoleOutcomeCallable updateRoleCallable(const Model::UpdateRoleRequest& request) const;
			UpdateRoleUsersOutcome updateRoleUsers(const Model::UpdateRoleUsersRequest &request)const;
			void updateRoleUsersAsync(const Model::UpdateRoleUsersRequest& request, const UpdateRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRoleUsersOutcomeCallable updateRoleUsersCallable(const Model::UpdateRoleUsersRequest& request) const;
			UpdateTableOutcome updateTable(const Model::UpdateTableRequest &request)const;
			void updateTableAsync(const Model::UpdateTableRequest& request, const UpdateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableOutcomeCallable updateTableCallable(const Model::UpdateTableRequest& request) const;
			UpdateTableColumnStatisticsOutcome updateTableColumnStatistics(const Model::UpdateTableColumnStatisticsRequest &request)const;
			void updateTableColumnStatisticsAsync(const Model::UpdateTableColumnStatisticsRequest& request, const UpdateTableColumnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableColumnStatisticsOutcomeCallable updateTableColumnStatisticsCallable(const Model::UpdateTableColumnStatisticsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DATALAKE_DATALAKECLIENT_H_
