#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(dms-enterprise_public_header 
	include/alibabacloud/dms-enterprise/Dms_enterpriseClient.h
	include/alibabacloud/dms-enterprise/Dms_enterpriseExport.h )

set(dms-enterprise_public_header_model 
	include/alibabacloud/dms-enterprise/model/ApproveOrderRequest.h
	include/alibabacloud/dms-enterprise/model/ApproveOrderResult.h
	include/alibabacloud/dms-enterprise/model/CloseOrderRequest.h
	include/alibabacloud/dms-enterprise/model/CloseOrderResult.h
	include/alibabacloud/dms-enterprise/model/CreateDataCorrectOrderRequest.h
	include/alibabacloud/dms-enterprise/model/CreateDataCorrectOrderResult.h
	include/alibabacloud/dms-enterprise/model/CreateDataCronClearOrderRequest.h
	include/alibabacloud/dms-enterprise/model/CreateDataCronClearOrderResult.h
	include/alibabacloud/dms-enterprise/model/CreateDataImportOrderRequest.h
	include/alibabacloud/dms-enterprise/model/CreateDataImportOrderResult.h
	include/alibabacloud/dms-enterprise/model/CreateFreeLockCorrectOrderRequest.h
	include/alibabacloud/dms-enterprise/model/CreateFreeLockCorrectOrderResult.h
	include/alibabacloud/dms-enterprise/model/CreateOrderRequest.h
	include/alibabacloud/dms-enterprise/model/CreateOrderResult.h
	include/alibabacloud/dms-enterprise/model/CreatePublishGroupTaskRequest.h
	include/alibabacloud/dms-enterprise/model/CreatePublishGroupTaskResult.h
	include/alibabacloud/dms-enterprise/model/CreateSQLReviewOrderRequest.h
	include/alibabacloud/dms-enterprise/model/CreateSQLReviewOrderResult.h
	include/alibabacloud/dms-enterprise/model/CreateStructSyncOrderRequest.h
	include/alibabacloud/dms-enterprise/model/CreateStructSyncOrderResult.h
	include/alibabacloud/dms-enterprise/model/CreateUploadFileJobRequest.h
	include/alibabacloud/dms-enterprise/model/CreateUploadFileJobResult.h
	include/alibabacloud/dms-enterprise/model/CreateUploadOSSFileJobRequest.h
	include/alibabacloud/dms-enterprise/model/CreateUploadOSSFileJobResult.h
	include/alibabacloud/dms-enterprise/model/DeleteInstanceRequest.h
	include/alibabacloud/dms-enterprise/model/DeleteInstanceResult.h
	include/alibabacloud/dms-enterprise/model/DeleteUserRequest.h
	include/alibabacloud/dms-enterprise/model/DeleteUserResult.h
	include/alibabacloud/dms-enterprise/model/DisableUserRequest.h
	include/alibabacloud/dms-enterprise/model/DisableUserResult.h
	include/alibabacloud/dms-enterprise/model/EnableUserRequest.h
	include/alibabacloud/dms-enterprise/model/EnableUserResult.h
	include/alibabacloud/dms-enterprise/model/ExecuteDataCorrectRequest.h
	include/alibabacloud/dms-enterprise/model/ExecuteDataCorrectResult.h
	include/alibabacloud/dms-enterprise/model/ExecuteDataExportRequest.h
	include/alibabacloud/dms-enterprise/model/ExecuteDataExportResult.h
	include/alibabacloud/dms-enterprise/model/ExecuteScriptRequest.h
	include/alibabacloud/dms-enterprise/model/ExecuteScriptResult.h
	include/alibabacloud/dms-enterprise/model/ExecuteStructSyncRequest.h
	include/alibabacloud/dms-enterprise/model/ExecuteStructSyncResult.h
	include/alibabacloud/dms-enterprise/model/GetApprovalDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetApprovalDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetDBTopologyRequest.h
	include/alibabacloud/dms-enterprise/model/GetDBTopologyResult.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectBackupFilesRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectBackupFilesResult.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectOrderDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectOrderDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectSQLFileRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectSQLFileResult.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectTaskDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectTaskDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetDataCronClearTaskDetailListRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataCronClearTaskDetailListResult.h
	include/alibabacloud/dms-enterprise/model/GetDataExportDownloadURLRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataExportDownloadURLResult.h
	include/alibabacloud/dms-enterprise/model/GetDataExportOrderDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataExportOrderDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetDatabaseRequest.h
	include/alibabacloud/dms-enterprise/model/GetDatabaseResult.h
	include/alibabacloud/dms-enterprise/model/GetInstanceRequest.h
	include/alibabacloud/dms-enterprise/model/GetInstanceResult.h
	include/alibabacloud/dms-enterprise/model/GetLogicDatabaseRequest.h
	include/alibabacloud/dms-enterprise/model/GetLogicDatabaseResult.h
	include/alibabacloud/dms-enterprise/model/GetMetaTableColumnRequest.h
	include/alibabacloud/dms-enterprise/model/GetMetaTableColumnResult.h
	include/alibabacloud/dms-enterprise/model/GetMetaTableDetailInfoRequest.h
	include/alibabacloud/dms-enterprise/model/GetMetaTableDetailInfoResult.h
	include/alibabacloud/dms-enterprise/model/GetOpLogRequest.h
	include/alibabacloud/dms-enterprise/model/GetOpLogResult.h
	include/alibabacloud/dms-enterprise/model/GetOrderBaseInfoRequest.h
	include/alibabacloud/dms-enterprise/model/GetOrderBaseInfoResult.h
	include/alibabacloud/dms-enterprise/model/GetOwnerApplyOrderDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetOwnerApplyOrderDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetPermApplyOrderDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetPermApplyOrderDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetPhysicalDatabaseRequest.h
	include/alibabacloud/dms-enterprise/model/GetPhysicalDatabaseResult.h
	include/alibabacloud/dms-enterprise/model/GetSQLReviewCheckResultStatusRequest.h
	include/alibabacloud/dms-enterprise/model/GetSQLReviewCheckResultStatusResult.h
	include/alibabacloud/dms-enterprise/model/GetStructSyncExecSqlDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetStructSyncExecSqlDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetStructSyncJobAnalyzeResultRequest.h
	include/alibabacloud/dms-enterprise/model/GetStructSyncJobAnalyzeResultResult.h
	include/alibabacloud/dms-enterprise/model/GetStructSyncJobDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetStructSyncJobDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetStructSyncOrderDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetStructSyncOrderDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetTableDBTopologyRequest.h
	include/alibabacloud/dms-enterprise/model/GetTableDBTopologyResult.h
	include/alibabacloud/dms-enterprise/model/GetTableTopologyRequest.h
	include/alibabacloud/dms-enterprise/model/GetTableTopologyResult.h
	include/alibabacloud/dms-enterprise/model/GetUserRequest.h
	include/alibabacloud/dms-enterprise/model/GetUserResult.h
	include/alibabacloud/dms-enterprise/model/GetUserActiveTenantRequest.h
	include/alibabacloud/dms-enterprise/model/GetUserActiveTenantResult.h
	include/alibabacloud/dms-enterprise/model/GetUserUploadFileJobRequest.h
	include/alibabacloud/dms-enterprise/model/GetUserUploadFileJobResult.h
	include/alibabacloud/dms-enterprise/model/GrantUserPermissionRequest.h
	include/alibabacloud/dms-enterprise/model/GrantUserPermissionResult.h
	include/alibabacloud/dms-enterprise/model/ListColumnsRequest.h
	include/alibabacloud/dms-enterprise/model/ListColumnsResult.h
	include/alibabacloud/dms-enterprise/model/ListDBTaskSQLJobRequest.h
	include/alibabacloud/dms-enterprise/model/ListDBTaskSQLJobResult.h
	include/alibabacloud/dms-enterprise/model/ListDBTaskSQLJobDetailRequest.h
	include/alibabacloud/dms-enterprise/model/ListDBTaskSQLJobDetailResult.h
	include/alibabacloud/dms-enterprise/model/ListDDLPublishRecordsRequest.h
	include/alibabacloud/dms-enterprise/model/ListDDLPublishRecordsResult.h
	include/alibabacloud/dms-enterprise/model/ListDatabaseUserPermssionsRequest.h
	include/alibabacloud/dms-enterprise/model/ListDatabaseUserPermssionsResult.h
	include/alibabacloud/dms-enterprise/model/ListDatabasesRequest.h
	include/alibabacloud/dms-enterprise/model/ListDatabasesResult.h
	include/alibabacloud/dms-enterprise/model/ListIndexesRequest.h
	include/alibabacloud/dms-enterprise/model/ListIndexesResult.h
	include/alibabacloud/dms-enterprise/model/ListInstancesRequest.h
	include/alibabacloud/dms-enterprise/model/ListInstancesResult.h
	include/alibabacloud/dms-enterprise/model/ListLogicDatabasesRequest.h
	include/alibabacloud/dms-enterprise/model/ListLogicDatabasesResult.h
	include/alibabacloud/dms-enterprise/model/ListLogicTablesRequest.h
	include/alibabacloud/dms-enterprise/model/ListLogicTablesResult.h
	include/alibabacloud/dms-enterprise/model/ListOrdersRequest.h
	include/alibabacloud/dms-enterprise/model/ListOrdersResult.h
	include/alibabacloud/dms-enterprise/model/ListSQLReviewOriginSQLRequest.h
	include/alibabacloud/dms-enterprise/model/ListSQLReviewOriginSQLResult.h
	include/alibabacloud/dms-enterprise/model/ListSensitiveColumnsRequest.h
	include/alibabacloud/dms-enterprise/model/ListSensitiveColumnsResult.h
	include/alibabacloud/dms-enterprise/model/ListSensitiveColumnsDetailRequest.h
	include/alibabacloud/dms-enterprise/model/ListSensitiveColumnsDetailResult.h
	include/alibabacloud/dms-enterprise/model/ListTablesRequest.h
	include/alibabacloud/dms-enterprise/model/ListTablesResult.h
	include/alibabacloud/dms-enterprise/model/ListUserPermissionsRequest.h
	include/alibabacloud/dms-enterprise/model/ListUserPermissionsResult.h
	include/alibabacloud/dms-enterprise/model/ListUserTenantsRequest.h
	include/alibabacloud/dms-enterprise/model/ListUserTenantsResult.h
	include/alibabacloud/dms-enterprise/model/ListUsersRequest.h
	include/alibabacloud/dms-enterprise/model/ListUsersResult.h
	include/alibabacloud/dms-enterprise/model/ListWorkFlowNodesRequest.h
	include/alibabacloud/dms-enterprise/model/ListWorkFlowNodesResult.h
	include/alibabacloud/dms-enterprise/model/ListWorkFlowTemplatesRequest.h
	include/alibabacloud/dms-enterprise/model/ListWorkFlowTemplatesResult.h
	include/alibabacloud/dms-enterprise/model/RegisterInstanceRequest.h
	include/alibabacloud/dms-enterprise/model/RegisterInstanceResult.h
	include/alibabacloud/dms-enterprise/model/RegisterUserRequest.h
	include/alibabacloud/dms-enterprise/model/RegisterUserResult.h
	include/alibabacloud/dms-enterprise/model/RevokeUserPermissionRequest.h
	include/alibabacloud/dms-enterprise/model/RevokeUserPermissionResult.h
	include/alibabacloud/dms-enterprise/model/SearchDatabaseRequest.h
	include/alibabacloud/dms-enterprise/model/SearchDatabaseResult.h
	include/alibabacloud/dms-enterprise/model/SearchTableRequest.h
	include/alibabacloud/dms-enterprise/model/SearchTableResult.h
	include/alibabacloud/dms-enterprise/model/SetOwnersRequest.h
	include/alibabacloud/dms-enterprise/model/SetOwnersResult.h
	include/alibabacloud/dms-enterprise/model/SubmitOrderApprovalRequest.h
	include/alibabacloud/dms-enterprise/model/SubmitOrderApprovalResult.h
	include/alibabacloud/dms-enterprise/model/SubmitStructSyncOrderApprovalRequest.h
	include/alibabacloud/dms-enterprise/model/SubmitStructSyncOrderApprovalResult.h
	include/alibabacloud/dms-enterprise/model/SyncDatabaseMetaRequest.h
	include/alibabacloud/dms-enterprise/model/SyncDatabaseMetaResult.h
	include/alibabacloud/dms-enterprise/model/SyncInstanceMetaRequest.h
	include/alibabacloud/dms-enterprise/model/SyncInstanceMetaResult.h
	include/alibabacloud/dms-enterprise/model/UpdateInstanceRequest.h
	include/alibabacloud/dms-enterprise/model/UpdateInstanceResult.h
	include/alibabacloud/dms-enterprise/model/UpdateUserRequest.h
	include/alibabacloud/dms-enterprise/model/UpdateUserResult.h )

set(dms-enterprise_src 
	src/Dms-enterpriseClient.cc
	src/model/ApproveOrderRequest.cc
	src/model/ApproveOrderResult.cc
	src/model/CloseOrderRequest.cc
	src/model/CloseOrderResult.cc
	src/model/CreateDataCorrectOrderRequest.cc
	src/model/CreateDataCorrectOrderResult.cc
	src/model/CreateDataCronClearOrderRequest.cc
	src/model/CreateDataCronClearOrderResult.cc
	src/model/CreateDataImportOrderRequest.cc
	src/model/CreateDataImportOrderResult.cc
	src/model/CreateFreeLockCorrectOrderRequest.cc
	src/model/CreateFreeLockCorrectOrderResult.cc
	src/model/CreateOrderRequest.cc
	src/model/CreateOrderResult.cc
	src/model/CreatePublishGroupTaskRequest.cc
	src/model/CreatePublishGroupTaskResult.cc
	src/model/CreateSQLReviewOrderRequest.cc
	src/model/CreateSQLReviewOrderResult.cc
	src/model/CreateStructSyncOrderRequest.cc
	src/model/CreateStructSyncOrderResult.cc
	src/model/CreateUploadFileJobRequest.cc
	src/model/CreateUploadFileJobResult.cc
	src/model/CreateUploadOSSFileJobRequest.cc
	src/model/CreateUploadOSSFileJobResult.cc
	src/model/DeleteInstanceRequest.cc
	src/model/DeleteInstanceResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/DisableUserRequest.cc
	src/model/DisableUserResult.cc
	src/model/EnableUserRequest.cc
	src/model/EnableUserResult.cc
	src/model/ExecuteDataCorrectRequest.cc
	src/model/ExecuteDataCorrectResult.cc
	src/model/ExecuteDataExportRequest.cc
	src/model/ExecuteDataExportResult.cc
	src/model/ExecuteScriptRequest.cc
	src/model/ExecuteScriptResult.cc
	src/model/ExecuteStructSyncRequest.cc
	src/model/ExecuteStructSyncResult.cc
	src/model/GetApprovalDetailRequest.cc
	src/model/GetApprovalDetailResult.cc
	src/model/GetDBTopologyRequest.cc
	src/model/GetDBTopologyResult.cc
	src/model/GetDataCorrectBackupFilesRequest.cc
	src/model/GetDataCorrectBackupFilesResult.cc
	src/model/GetDataCorrectOrderDetailRequest.cc
	src/model/GetDataCorrectOrderDetailResult.cc
	src/model/GetDataCorrectSQLFileRequest.cc
	src/model/GetDataCorrectSQLFileResult.cc
	src/model/GetDataCorrectTaskDetailRequest.cc
	src/model/GetDataCorrectTaskDetailResult.cc
	src/model/GetDataCronClearTaskDetailListRequest.cc
	src/model/GetDataCronClearTaskDetailListResult.cc
	src/model/GetDataExportDownloadURLRequest.cc
	src/model/GetDataExportDownloadURLResult.cc
	src/model/GetDataExportOrderDetailRequest.cc
	src/model/GetDataExportOrderDetailResult.cc
	src/model/GetDatabaseRequest.cc
	src/model/GetDatabaseResult.cc
	src/model/GetInstanceRequest.cc
	src/model/GetInstanceResult.cc
	src/model/GetLogicDatabaseRequest.cc
	src/model/GetLogicDatabaseResult.cc
	src/model/GetMetaTableColumnRequest.cc
	src/model/GetMetaTableColumnResult.cc
	src/model/GetMetaTableDetailInfoRequest.cc
	src/model/GetMetaTableDetailInfoResult.cc
	src/model/GetOpLogRequest.cc
	src/model/GetOpLogResult.cc
	src/model/GetOrderBaseInfoRequest.cc
	src/model/GetOrderBaseInfoResult.cc
	src/model/GetOwnerApplyOrderDetailRequest.cc
	src/model/GetOwnerApplyOrderDetailResult.cc
	src/model/GetPermApplyOrderDetailRequest.cc
	src/model/GetPermApplyOrderDetailResult.cc
	src/model/GetPhysicalDatabaseRequest.cc
	src/model/GetPhysicalDatabaseResult.cc
	src/model/GetSQLReviewCheckResultStatusRequest.cc
	src/model/GetSQLReviewCheckResultStatusResult.cc
	src/model/GetStructSyncExecSqlDetailRequest.cc
	src/model/GetStructSyncExecSqlDetailResult.cc
	src/model/GetStructSyncJobAnalyzeResultRequest.cc
	src/model/GetStructSyncJobAnalyzeResultResult.cc
	src/model/GetStructSyncJobDetailRequest.cc
	src/model/GetStructSyncJobDetailResult.cc
	src/model/GetStructSyncOrderDetailRequest.cc
	src/model/GetStructSyncOrderDetailResult.cc
	src/model/GetTableDBTopologyRequest.cc
	src/model/GetTableDBTopologyResult.cc
	src/model/GetTableTopologyRequest.cc
	src/model/GetTableTopologyResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc
	src/model/GetUserActiveTenantRequest.cc
	src/model/GetUserActiveTenantResult.cc
	src/model/GetUserUploadFileJobRequest.cc
	src/model/GetUserUploadFileJobResult.cc
	src/model/GrantUserPermissionRequest.cc
	src/model/GrantUserPermissionResult.cc
	src/model/ListColumnsRequest.cc
	src/model/ListColumnsResult.cc
	src/model/ListDBTaskSQLJobRequest.cc
	src/model/ListDBTaskSQLJobResult.cc
	src/model/ListDBTaskSQLJobDetailRequest.cc
	src/model/ListDBTaskSQLJobDetailResult.cc
	src/model/ListDDLPublishRecordsRequest.cc
	src/model/ListDDLPublishRecordsResult.cc
	src/model/ListDatabaseUserPermssionsRequest.cc
	src/model/ListDatabaseUserPermssionsResult.cc
	src/model/ListDatabasesRequest.cc
	src/model/ListDatabasesResult.cc
	src/model/ListIndexesRequest.cc
	src/model/ListIndexesResult.cc
	src/model/ListInstancesRequest.cc
	src/model/ListInstancesResult.cc
	src/model/ListLogicDatabasesRequest.cc
	src/model/ListLogicDatabasesResult.cc
	src/model/ListLogicTablesRequest.cc
	src/model/ListLogicTablesResult.cc
	src/model/ListOrdersRequest.cc
	src/model/ListOrdersResult.cc
	src/model/ListSQLReviewOriginSQLRequest.cc
	src/model/ListSQLReviewOriginSQLResult.cc
	src/model/ListSensitiveColumnsRequest.cc
	src/model/ListSensitiveColumnsResult.cc
	src/model/ListSensitiveColumnsDetailRequest.cc
	src/model/ListSensitiveColumnsDetailResult.cc
	src/model/ListTablesRequest.cc
	src/model/ListTablesResult.cc
	src/model/ListUserPermissionsRequest.cc
	src/model/ListUserPermissionsResult.cc
	src/model/ListUserTenantsRequest.cc
	src/model/ListUserTenantsResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/ListWorkFlowNodesRequest.cc
	src/model/ListWorkFlowNodesResult.cc
	src/model/ListWorkFlowTemplatesRequest.cc
	src/model/ListWorkFlowTemplatesResult.cc
	src/model/RegisterInstanceRequest.cc
	src/model/RegisterInstanceResult.cc
	src/model/RegisterUserRequest.cc
	src/model/RegisterUserResult.cc
	src/model/RevokeUserPermissionRequest.cc
	src/model/RevokeUserPermissionResult.cc
	src/model/SearchDatabaseRequest.cc
	src/model/SearchDatabaseResult.cc
	src/model/SearchTableRequest.cc
	src/model/SearchTableResult.cc
	src/model/SetOwnersRequest.cc
	src/model/SetOwnersResult.cc
	src/model/SubmitOrderApprovalRequest.cc
	src/model/SubmitOrderApprovalResult.cc
	src/model/SubmitStructSyncOrderApprovalRequest.cc
	src/model/SubmitStructSyncOrderApprovalResult.cc
	src/model/SyncDatabaseMetaRequest.cc
	src/model/SyncDatabaseMetaResult.cc
	src/model/SyncInstanceMetaRequest.cc
	src/model/SyncInstanceMetaResult.cc
	src/model/UpdateInstanceRequest.cc
	src/model/UpdateInstanceResult.cc
	src/model/UpdateUserRequest.cc
	src/model/UpdateUserResult.cc )

add_library(dms-enterprise ${LIB_TYPE}
	${dms-enterprise_public_header}
	${dms-enterprise_public_header_model}
	${dms-enterprise_src})

set_target_properties(dms-enterprise
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dms-enterprise
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dms-enterprise
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DMS_ENTERPRISE_LIBRARY)
endif()

target_include_directories(dms-enterprise
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dms-enterprise
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dms-enterprise
		jsoncpp)
	target_include_directories(dms-enterprise
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dms-enterprise
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dms-enterprise
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dms-enterprise
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dms-enterprise
		jsoncpp)
endif()

install(FILES ${dms-enterprise_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dms-enterprise)
install(FILES ${dms-enterprise_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dms-enterprise/model)
install(TARGETS dms-enterprise
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)