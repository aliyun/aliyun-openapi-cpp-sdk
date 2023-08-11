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

set(datalake_public_header 
	include/alibabacloud/datalake/DataLakeClient.h
	include/alibabacloud/datalake/DataLakeExport.h )

set(datalake_public_header_model 
	include/alibabacloud/datalake/model/AbortLockRequest.h
	include/alibabacloud/datalake/model/AbortLockResult.h
	include/alibabacloud/datalake/model/BatchCreatePartitionsRequest.h
	include/alibabacloud/datalake/model/BatchCreatePartitionsResult.h
	include/alibabacloud/datalake/model/BatchCreateTablesRequest.h
	include/alibabacloud/datalake/model/BatchCreateTablesResult.h
	include/alibabacloud/datalake/model/BatchDeletePartitionsRequest.h
	include/alibabacloud/datalake/model/BatchDeletePartitionsResult.h
	include/alibabacloud/datalake/model/BatchDeleteTableVersionsRequest.h
	include/alibabacloud/datalake/model/BatchDeleteTableVersionsResult.h
	include/alibabacloud/datalake/model/BatchDeleteTablesRequest.h
	include/alibabacloud/datalake/model/BatchDeleteTablesResult.h
	include/alibabacloud/datalake/model/BatchGetPartitionColumnStatisticsRequest.h
	include/alibabacloud/datalake/model/BatchGetPartitionColumnStatisticsResult.h
	include/alibabacloud/datalake/model/BatchGetPartitionsRequest.h
	include/alibabacloud/datalake/model/BatchGetPartitionsResult.h
	include/alibabacloud/datalake/model/BatchGetTablesRequest.h
	include/alibabacloud/datalake/model/BatchGetTablesResult.h
	include/alibabacloud/datalake/model/BatchGrantPermissionsRequest.h
	include/alibabacloud/datalake/model/BatchGrantPermissionsResult.h
	include/alibabacloud/datalake/model/BatchRevokePermissionsRequest.h
	include/alibabacloud/datalake/model/BatchRevokePermissionsResult.h
	include/alibabacloud/datalake/model/BatchUpdatePartitionsRequest.h
	include/alibabacloud/datalake/model/BatchUpdatePartitionsResult.h
	include/alibabacloud/datalake/model/BatchUpdateTablesRequest.h
	include/alibabacloud/datalake/model/BatchUpdateTablesResult.h
	include/alibabacloud/datalake/model/CancelQueryRequest.h
	include/alibabacloud/datalake/model/CancelQueryResult.h
	include/alibabacloud/datalake/model/CheckPermissionsRequest.h
	include/alibabacloud/datalake/model/CheckPermissionsResult.h
	include/alibabacloud/datalake/model/CreateCatalogRequest.h
	include/alibabacloud/datalake/model/CreateCatalogResult.h
	include/alibabacloud/datalake/model/CreateDatabaseRequest.h
	include/alibabacloud/datalake/model/CreateDatabaseResult.h
	include/alibabacloud/datalake/model/CreateFunctionRequest.h
	include/alibabacloud/datalake/model/CreateFunctionResult.h
	include/alibabacloud/datalake/model/CreateLockRequest.h
	include/alibabacloud/datalake/model/CreateLockResult.h
	include/alibabacloud/datalake/model/CreatePartitionRequest.h
	include/alibabacloud/datalake/model/CreatePartitionResult.h
	include/alibabacloud/datalake/model/CreateRoleRequest.h
	include/alibabacloud/datalake/model/CreateRoleResult.h
	include/alibabacloud/datalake/model/CreateTableRequest.h
	include/alibabacloud/datalake/model/CreateTableResult.h
	include/alibabacloud/datalake/model/DeleteCatalogRequest.h
	include/alibabacloud/datalake/model/DeleteCatalogResult.h
	include/alibabacloud/datalake/model/DeleteDatabaseRequest.h
	include/alibabacloud/datalake/model/DeleteDatabaseResult.h
	include/alibabacloud/datalake/model/DeleteFunctionRequest.h
	include/alibabacloud/datalake/model/DeleteFunctionResult.h
	include/alibabacloud/datalake/model/DeletePartitionRequest.h
	include/alibabacloud/datalake/model/DeletePartitionResult.h
	include/alibabacloud/datalake/model/DeletePartitionColumnStatisticsRequest.h
	include/alibabacloud/datalake/model/DeletePartitionColumnStatisticsResult.h
	include/alibabacloud/datalake/model/DeleteRoleRequest.h
	include/alibabacloud/datalake/model/DeleteRoleResult.h
	include/alibabacloud/datalake/model/DeleteTableRequest.h
	include/alibabacloud/datalake/model/DeleteTableResult.h
	include/alibabacloud/datalake/model/DeleteTableColumnStatisticsRequest.h
	include/alibabacloud/datalake/model/DeleteTableColumnStatisticsResult.h
	include/alibabacloud/datalake/model/DeleteTableVersionRequest.h
	include/alibabacloud/datalake/model/DeleteTableVersionResult.h
	include/alibabacloud/datalake/model/DeregisterLocationRequest.h
	include/alibabacloud/datalake/model/DeregisterLocationResult.h
	include/alibabacloud/datalake/model/DescribeRegionsRequest.h
	include/alibabacloud/datalake/model/DescribeRegionsResult.h
	include/alibabacloud/datalake/model/GetAsyncTaskStatusRequest.h
	include/alibabacloud/datalake/model/GetAsyncTaskStatusResult.h
	include/alibabacloud/datalake/model/GetCatalogRequest.h
	include/alibabacloud/datalake/model/GetCatalogResult.h
	include/alibabacloud/datalake/model/GetCatalogSettingsRequest.h
	include/alibabacloud/datalake/model/GetCatalogSettingsResult.h
	include/alibabacloud/datalake/model/GetDatabaseRequest.h
	include/alibabacloud/datalake/model/GetDatabaseResult.h
	include/alibabacloud/datalake/model/GetFunctionRequest.h
	include/alibabacloud/datalake/model/GetFunctionResult.h
	include/alibabacloud/datalake/model/GetLifecycleRuleRequest.h
	include/alibabacloud/datalake/model/GetLifecycleRuleResult.h
	include/alibabacloud/datalake/model/GetLockRequest.h
	include/alibabacloud/datalake/model/GetLockResult.h
	include/alibabacloud/datalake/model/GetPartitionRequest.h
	include/alibabacloud/datalake/model/GetPartitionResult.h
	include/alibabacloud/datalake/model/GetPartitionColumnStatisticsRequest.h
	include/alibabacloud/datalake/model/GetPartitionColumnStatisticsResult.h
	include/alibabacloud/datalake/model/GetQueryResultRequest.h
	include/alibabacloud/datalake/model/GetQueryResultResult.h
	include/alibabacloud/datalake/model/GetRegionStatusRequest.h
	include/alibabacloud/datalake/model/GetRegionStatusResult.h
	include/alibabacloud/datalake/model/GetRoleRequest.h
	include/alibabacloud/datalake/model/GetRoleResult.h
	include/alibabacloud/datalake/model/GetServiceStatusRequest.h
	include/alibabacloud/datalake/model/GetServiceStatusResult.h
	include/alibabacloud/datalake/model/GetTableRequest.h
	include/alibabacloud/datalake/model/GetTableResult.h
	include/alibabacloud/datalake/model/GetTableColumnStatisticsRequest.h
	include/alibabacloud/datalake/model/GetTableColumnStatisticsResult.h
	include/alibabacloud/datalake/model/GetTableProfileRequest.h
	include/alibabacloud/datalake/model/GetTableProfileResult.h
	include/alibabacloud/datalake/model/GetTableVersionRequest.h
	include/alibabacloud/datalake/model/GetTableVersionResult.h
	include/alibabacloud/datalake/model/GrantPermissionsRequest.h
	include/alibabacloud/datalake/model/GrantPermissionsResult.h
	include/alibabacloud/datalake/model/GrantRoleToUsersRequest.h
	include/alibabacloud/datalake/model/GrantRoleToUsersResult.h
	include/alibabacloud/datalake/model/GrantRolesToUserRequest.h
	include/alibabacloud/datalake/model/GrantRolesToUserResult.h
	include/alibabacloud/datalake/model/ListCatalogsRequest.h
	include/alibabacloud/datalake/model/ListCatalogsResult.h
	include/alibabacloud/datalake/model/ListDatabasesRequest.h
	include/alibabacloud/datalake/model/ListDatabasesResult.h
	include/alibabacloud/datalake/model/ListFunctionNamesRequest.h
	include/alibabacloud/datalake/model/ListFunctionNamesResult.h
	include/alibabacloud/datalake/model/ListFunctionsRequest.h
	include/alibabacloud/datalake/model/ListFunctionsResult.h
	include/alibabacloud/datalake/model/ListPartitionNamesRequest.h
	include/alibabacloud/datalake/model/ListPartitionNamesResult.h
	include/alibabacloud/datalake/model/ListPartitionsRequest.h
	include/alibabacloud/datalake/model/ListPartitionsResult.h
	include/alibabacloud/datalake/model/ListPartitionsByExprRequest.h
	include/alibabacloud/datalake/model/ListPartitionsByExprResult.h
	include/alibabacloud/datalake/model/ListPartitionsByFilterRequest.h
	include/alibabacloud/datalake/model/ListPartitionsByFilterResult.h
	include/alibabacloud/datalake/model/ListPermissionsRequest.h
	include/alibabacloud/datalake/model/ListPermissionsResult.h
	include/alibabacloud/datalake/model/ListRoleUsersRequest.h
	include/alibabacloud/datalake/model/ListRoleUsersResult.h
	include/alibabacloud/datalake/model/ListRolesRequest.h
	include/alibabacloud/datalake/model/ListRolesResult.h
	include/alibabacloud/datalake/model/ListTableNamesRequest.h
	include/alibabacloud/datalake/model/ListTableNamesResult.h
	include/alibabacloud/datalake/model/ListTableVersionsRequest.h
	include/alibabacloud/datalake/model/ListTableVersionsResult.h
	include/alibabacloud/datalake/model/ListTablesRequest.h
	include/alibabacloud/datalake/model/ListTablesResult.h
	include/alibabacloud/datalake/model/ListUserRolesRequest.h
	include/alibabacloud/datalake/model/ListUserRolesResult.h
	include/alibabacloud/datalake/model/RefreshLockRequest.h
	include/alibabacloud/datalake/model/RefreshLockResult.h
	include/alibabacloud/datalake/model/RegisterLocationRequest.h
	include/alibabacloud/datalake/model/RegisterLocationResult.h
	include/alibabacloud/datalake/model/RenamePartitionRequest.h
	include/alibabacloud/datalake/model/RenamePartitionResult.h
	include/alibabacloud/datalake/model/RenameTableRequest.h
	include/alibabacloud/datalake/model/RenameTableResult.h
	include/alibabacloud/datalake/model/RevokePermissionsRequest.h
	include/alibabacloud/datalake/model/RevokePermissionsResult.h
	include/alibabacloud/datalake/model/RevokeRoleFromUsersRequest.h
	include/alibabacloud/datalake/model/RevokeRoleFromUsersResult.h
	include/alibabacloud/datalake/model/RevokeRolesFromUserRequest.h
	include/alibabacloud/datalake/model/RevokeRolesFromUserResult.h
	include/alibabacloud/datalake/model/RunMigrationWorkflowRequest.h
	include/alibabacloud/datalake/model/RunMigrationWorkflowResult.h
	include/alibabacloud/datalake/model/SearchRequest.h
	include/alibabacloud/datalake/model/SearchResult.h
	include/alibabacloud/datalake/model/SearchAcrossCatalogRequest.h
	include/alibabacloud/datalake/model/SearchAcrossCatalogResult.h
	include/alibabacloud/datalake/model/StopMigrationWorkflowRequest.h
	include/alibabacloud/datalake/model/StopMigrationWorkflowResult.h
	include/alibabacloud/datalake/model/SubmitQueryRequest.h
	include/alibabacloud/datalake/model/SubmitQueryResult.h
	include/alibabacloud/datalake/model/UnLockRequest.h
	include/alibabacloud/datalake/model/UnLockResult.h
	include/alibabacloud/datalake/model/UpdateCatalogRequest.h
	include/alibabacloud/datalake/model/UpdateCatalogResult.h
	include/alibabacloud/datalake/model/UpdateCatalogSettingsRequest.h
	include/alibabacloud/datalake/model/UpdateCatalogSettingsResult.h
	include/alibabacloud/datalake/model/UpdateDatabaseRequest.h
	include/alibabacloud/datalake/model/UpdateDatabaseResult.h
	include/alibabacloud/datalake/model/UpdateFunctionRequest.h
	include/alibabacloud/datalake/model/UpdateFunctionResult.h
	include/alibabacloud/datalake/model/UpdatePartitionColumnStatisticsRequest.h
	include/alibabacloud/datalake/model/UpdatePartitionColumnStatisticsResult.h
	include/alibabacloud/datalake/model/UpdatePermissionsRequest.h
	include/alibabacloud/datalake/model/UpdatePermissionsResult.h
	include/alibabacloud/datalake/model/UpdateRegisteredLocationRequest.h
	include/alibabacloud/datalake/model/UpdateRegisteredLocationResult.h
	include/alibabacloud/datalake/model/UpdateRoleRequest.h
	include/alibabacloud/datalake/model/UpdateRoleResult.h
	include/alibabacloud/datalake/model/UpdateRoleUsersRequest.h
	include/alibabacloud/datalake/model/UpdateRoleUsersResult.h
	include/alibabacloud/datalake/model/UpdateTableRequest.h
	include/alibabacloud/datalake/model/UpdateTableResult.h
	include/alibabacloud/datalake/model/UpdateTableColumnStatisticsRequest.h
	include/alibabacloud/datalake/model/UpdateTableColumnStatisticsResult.h )

set(datalake_src 
	src/DataLakeClient.cc
	src/model/AbortLockRequest.cc
	src/model/AbortLockResult.cc
	src/model/BatchCreatePartitionsRequest.cc
	src/model/BatchCreatePartitionsResult.cc
	src/model/BatchCreateTablesRequest.cc
	src/model/BatchCreateTablesResult.cc
	src/model/BatchDeletePartitionsRequest.cc
	src/model/BatchDeletePartitionsResult.cc
	src/model/BatchDeleteTableVersionsRequest.cc
	src/model/BatchDeleteTableVersionsResult.cc
	src/model/BatchDeleteTablesRequest.cc
	src/model/BatchDeleteTablesResult.cc
	src/model/BatchGetPartitionColumnStatisticsRequest.cc
	src/model/BatchGetPartitionColumnStatisticsResult.cc
	src/model/BatchGetPartitionsRequest.cc
	src/model/BatchGetPartitionsResult.cc
	src/model/BatchGetTablesRequest.cc
	src/model/BatchGetTablesResult.cc
	src/model/BatchGrantPermissionsRequest.cc
	src/model/BatchGrantPermissionsResult.cc
	src/model/BatchRevokePermissionsRequest.cc
	src/model/BatchRevokePermissionsResult.cc
	src/model/BatchUpdatePartitionsRequest.cc
	src/model/BatchUpdatePartitionsResult.cc
	src/model/BatchUpdateTablesRequest.cc
	src/model/BatchUpdateTablesResult.cc
	src/model/CancelQueryRequest.cc
	src/model/CancelQueryResult.cc
	src/model/CheckPermissionsRequest.cc
	src/model/CheckPermissionsResult.cc
	src/model/CreateCatalogRequest.cc
	src/model/CreateCatalogResult.cc
	src/model/CreateDatabaseRequest.cc
	src/model/CreateDatabaseResult.cc
	src/model/CreateFunctionRequest.cc
	src/model/CreateFunctionResult.cc
	src/model/CreateLockRequest.cc
	src/model/CreateLockResult.cc
	src/model/CreatePartitionRequest.cc
	src/model/CreatePartitionResult.cc
	src/model/CreateRoleRequest.cc
	src/model/CreateRoleResult.cc
	src/model/CreateTableRequest.cc
	src/model/CreateTableResult.cc
	src/model/DeleteCatalogRequest.cc
	src/model/DeleteCatalogResult.cc
	src/model/DeleteDatabaseRequest.cc
	src/model/DeleteDatabaseResult.cc
	src/model/DeleteFunctionRequest.cc
	src/model/DeleteFunctionResult.cc
	src/model/DeletePartitionRequest.cc
	src/model/DeletePartitionResult.cc
	src/model/DeletePartitionColumnStatisticsRequest.cc
	src/model/DeletePartitionColumnStatisticsResult.cc
	src/model/DeleteRoleRequest.cc
	src/model/DeleteRoleResult.cc
	src/model/DeleteTableRequest.cc
	src/model/DeleteTableResult.cc
	src/model/DeleteTableColumnStatisticsRequest.cc
	src/model/DeleteTableColumnStatisticsResult.cc
	src/model/DeleteTableVersionRequest.cc
	src/model/DeleteTableVersionResult.cc
	src/model/DeregisterLocationRequest.cc
	src/model/DeregisterLocationResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/GetAsyncTaskStatusRequest.cc
	src/model/GetAsyncTaskStatusResult.cc
	src/model/GetCatalogRequest.cc
	src/model/GetCatalogResult.cc
	src/model/GetCatalogSettingsRequest.cc
	src/model/GetCatalogSettingsResult.cc
	src/model/GetDatabaseRequest.cc
	src/model/GetDatabaseResult.cc
	src/model/GetFunctionRequest.cc
	src/model/GetFunctionResult.cc
	src/model/GetLifecycleRuleRequest.cc
	src/model/GetLifecycleRuleResult.cc
	src/model/GetLockRequest.cc
	src/model/GetLockResult.cc
	src/model/GetPartitionRequest.cc
	src/model/GetPartitionResult.cc
	src/model/GetPartitionColumnStatisticsRequest.cc
	src/model/GetPartitionColumnStatisticsResult.cc
	src/model/GetQueryResultRequest.cc
	src/model/GetQueryResultResult.cc
	src/model/GetRegionStatusRequest.cc
	src/model/GetRegionStatusResult.cc
	src/model/GetRoleRequest.cc
	src/model/GetRoleResult.cc
	src/model/GetServiceStatusRequest.cc
	src/model/GetServiceStatusResult.cc
	src/model/GetTableRequest.cc
	src/model/GetTableResult.cc
	src/model/GetTableColumnStatisticsRequest.cc
	src/model/GetTableColumnStatisticsResult.cc
	src/model/GetTableProfileRequest.cc
	src/model/GetTableProfileResult.cc
	src/model/GetTableVersionRequest.cc
	src/model/GetTableVersionResult.cc
	src/model/GrantPermissionsRequest.cc
	src/model/GrantPermissionsResult.cc
	src/model/GrantRoleToUsersRequest.cc
	src/model/GrantRoleToUsersResult.cc
	src/model/GrantRolesToUserRequest.cc
	src/model/GrantRolesToUserResult.cc
	src/model/ListCatalogsRequest.cc
	src/model/ListCatalogsResult.cc
	src/model/ListDatabasesRequest.cc
	src/model/ListDatabasesResult.cc
	src/model/ListFunctionNamesRequest.cc
	src/model/ListFunctionNamesResult.cc
	src/model/ListFunctionsRequest.cc
	src/model/ListFunctionsResult.cc
	src/model/ListPartitionNamesRequest.cc
	src/model/ListPartitionNamesResult.cc
	src/model/ListPartitionsRequest.cc
	src/model/ListPartitionsResult.cc
	src/model/ListPartitionsByExprRequest.cc
	src/model/ListPartitionsByExprResult.cc
	src/model/ListPartitionsByFilterRequest.cc
	src/model/ListPartitionsByFilterResult.cc
	src/model/ListPermissionsRequest.cc
	src/model/ListPermissionsResult.cc
	src/model/ListRoleUsersRequest.cc
	src/model/ListRoleUsersResult.cc
	src/model/ListRolesRequest.cc
	src/model/ListRolesResult.cc
	src/model/ListTableNamesRequest.cc
	src/model/ListTableNamesResult.cc
	src/model/ListTableVersionsRequest.cc
	src/model/ListTableVersionsResult.cc
	src/model/ListTablesRequest.cc
	src/model/ListTablesResult.cc
	src/model/ListUserRolesRequest.cc
	src/model/ListUserRolesResult.cc
	src/model/RefreshLockRequest.cc
	src/model/RefreshLockResult.cc
	src/model/RegisterLocationRequest.cc
	src/model/RegisterLocationResult.cc
	src/model/RenamePartitionRequest.cc
	src/model/RenamePartitionResult.cc
	src/model/RenameTableRequest.cc
	src/model/RenameTableResult.cc
	src/model/RevokePermissionsRequest.cc
	src/model/RevokePermissionsResult.cc
	src/model/RevokeRoleFromUsersRequest.cc
	src/model/RevokeRoleFromUsersResult.cc
	src/model/RevokeRolesFromUserRequest.cc
	src/model/RevokeRolesFromUserResult.cc
	src/model/RunMigrationWorkflowRequest.cc
	src/model/RunMigrationWorkflowResult.cc
	src/model/SearchRequest.cc
	src/model/SearchResult.cc
	src/model/SearchAcrossCatalogRequest.cc
	src/model/SearchAcrossCatalogResult.cc
	src/model/StopMigrationWorkflowRequest.cc
	src/model/StopMigrationWorkflowResult.cc
	src/model/SubmitQueryRequest.cc
	src/model/SubmitQueryResult.cc
	src/model/UnLockRequest.cc
	src/model/UnLockResult.cc
	src/model/UpdateCatalogRequest.cc
	src/model/UpdateCatalogResult.cc
	src/model/UpdateCatalogSettingsRequest.cc
	src/model/UpdateCatalogSettingsResult.cc
	src/model/UpdateDatabaseRequest.cc
	src/model/UpdateDatabaseResult.cc
	src/model/UpdateFunctionRequest.cc
	src/model/UpdateFunctionResult.cc
	src/model/UpdatePartitionColumnStatisticsRequest.cc
	src/model/UpdatePartitionColumnStatisticsResult.cc
	src/model/UpdatePermissionsRequest.cc
	src/model/UpdatePermissionsResult.cc
	src/model/UpdateRegisteredLocationRequest.cc
	src/model/UpdateRegisteredLocationResult.cc
	src/model/UpdateRoleRequest.cc
	src/model/UpdateRoleResult.cc
	src/model/UpdateRoleUsersRequest.cc
	src/model/UpdateRoleUsersResult.cc
	src/model/UpdateTableRequest.cc
	src/model/UpdateTableResult.cc
	src/model/UpdateTableColumnStatisticsRequest.cc
	src/model/UpdateTableColumnStatisticsResult.cc )

add_library(datalake ${LIB_TYPE}
	${datalake_public_header}
	${datalake_public_header_model}
	${datalake_src})

set_target_properties(datalake
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}datalake
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(datalake
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DATALAKE_LIBRARY)
endif()

target_include_directories(datalake
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(datalake
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(datalake
		jsoncpp)
	target_include_directories(datalake
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(datalake
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(datalake
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(datalake
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(datalake
		jsoncpp)
endif()

install(FILES ${datalake_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/datalake)
install(FILES ${datalake_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/datalake/model)
install(TARGETS datalake
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)