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

set(adb_public_header 
	include/alibabacloud/adb/AdbClient.h
	include/alibabacloud/adb/AdbExport.h )

set(adb_public_header_model 
	include/alibabacloud/adb/model/AllocateClusterPublicConnectionRequest.h
	include/alibabacloud/adb/model/AllocateClusterPublicConnectionResult.h
	include/alibabacloud/adb/model/CreateAccountRequest.h
	include/alibabacloud/adb/model/CreateAccountResult.h
	include/alibabacloud/adb/model/CreateDBClusterRequest.h
	include/alibabacloud/adb/model/CreateDBClusterResult.h
	include/alibabacloud/adb/model/DeleteAccountRequest.h
	include/alibabacloud/adb/model/DeleteAccountResult.h
	include/alibabacloud/adb/model/DeleteDBClusterRequest.h
	include/alibabacloud/adb/model/DeleteDBClusterResult.h
	include/alibabacloud/adb/model/DescribeAccountsRequest.h
	include/alibabacloud/adb/model/DescribeAccountsResult.h
	include/alibabacloud/adb/model/DescribeAllDataSourceRequest.h
	include/alibabacloud/adb/model/DescribeAllDataSourceResult.h
	include/alibabacloud/adb/model/DescribeAutoRenewAttributeRequest.h
	include/alibabacloud/adb/model/DescribeAutoRenewAttributeResult.h
	include/alibabacloud/adb/model/DescribeAvailableResourceRequest.h
	include/alibabacloud/adb/model/DescribeAvailableResourceResult.h
	include/alibabacloud/adb/model/DescribeBackupPolicyRequest.h
	include/alibabacloud/adb/model/DescribeBackupPolicyResult.h
	include/alibabacloud/adb/model/DescribeBackupsRequest.h
	include/alibabacloud/adb/model/DescribeBackupsResult.h
	include/alibabacloud/adb/model/DescribeColumnsRequest.h
	include/alibabacloud/adb/model/DescribeColumnsResult.h
	include/alibabacloud/adb/model/DescribeDBClusterAccessWhiteListRequest.h
	include/alibabacloud/adb/model/DescribeDBClusterAccessWhiteListResult.h
	include/alibabacloud/adb/model/DescribeDBClusterAttributeRequest.h
	include/alibabacloud/adb/model/DescribeDBClusterAttributeResult.h
	include/alibabacloud/adb/model/DescribeDBClusterNetInfoRequest.h
	include/alibabacloud/adb/model/DescribeDBClusterNetInfoResult.h
	include/alibabacloud/adb/model/DescribeDBClusterPerformanceRequest.h
	include/alibabacloud/adb/model/DescribeDBClusterPerformanceResult.h
	include/alibabacloud/adb/model/DescribeDBClustersRequest.h
	include/alibabacloud/adb/model/DescribeDBClustersResult.h
	include/alibabacloud/adb/model/DescribeInclinedTablesRequest.h
	include/alibabacloud/adb/model/DescribeInclinedTablesResult.h
	include/alibabacloud/adb/model/DescribeLogStoreKeysRequest.h
	include/alibabacloud/adb/model/DescribeLogStoreKeysResult.h
	include/alibabacloud/adb/model/DescribeLoghubDetailRequest.h
	include/alibabacloud/adb/model/DescribeLoghubDetailResult.h
	include/alibabacloud/adb/model/DescribeOperatorPermissionRequest.h
	include/alibabacloud/adb/model/DescribeOperatorPermissionResult.h
	include/alibabacloud/adb/model/DescribeProcessListRequest.h
	include/alibabacloud/adb/model/DescribeProcessListResult.h
	include/alibabacloud/adb/model/DescribeRegionsRequest.h
	include/alibabacloud/adb/model/DescribeRegionsResult.h
	include/alibabacloud/adb/model/DescribeSchemasRequest.h
	include/alibabacloud/adb/model/DescribeSchemasResult.h
	include/alibabacloud/adb/model/DescribeSlowLogRecordsRequest.h
	include/alibabacloud/adb/model/DescribeSlowLogRecordsResult.h
	include/alibabacloud/adb/model/DescribeSlowLogTrendRequest.h
	include/alibabacloud/adb/model/DescribeSlowLogTrendResult.h
	include/alibabacloud/adb/model/DescribeTableDetailRequest.h
	include/alibabacloud/adb/model/DescribeTableDetailResult.h
	include/alibabacloud/adb/model/DescribeTablesRequest.h
	include/alibabacloud/adb/model/DescribeTablesResult.h
	include/alibabacloud/adb/model/DescribeTaskInfoRequest.h
	include/alibabacloud/adb/model/DescribeTaskInfoResult.h
	include/alibabacloud/adb/model/GrantOperatorPermissionRequest.h
	include/alibabacloud/adb/model/GrantOperatorPermissionResult.h
	include/alibabacloud/adb/model/KillProcessRequest.h
	include/alibabacloud/adb/model/KillProcessResult.h
	include/alibabacloud/adb/model/ListTagResourcesRequest.h
	include/alibabacloud/adb/model/ListTagResourcesResult.h
	include/alibabacloud/adb/model/ModifyAccountDescriptionRequest.h
	include/alibabacloud/adb/model/ModifyAccountDescriptionResult.h
	include/alibabacloud/adb/model/ModifyAutoRenewAttributeRequest.h
	include/alibabacloud/adb/model/ModifyAutoRenewAttributeResult.h
	include/alibabacloud/adb/model/ModifyBackupPolicyRequest.h
	include/alibabacloud/adb/model/ModifyBackupPolicyResult.h
	include/alibabacloud/adb/model/ModifyClusterConnectionStringRequest.h
	include/alibabacloud/adb/model/ModifyClusterConnectionStringResult.h
	include/alibabacloud/adb/model/ModifyDBClusterRequest.h
	include/alibabacloud/adb/model/ModifyDBClusterResult.h
	include/alibabacloud/adb/model/ModifyDBClusterAccessWhiteListRequest.h
	include/alibabacloud/adb/model/ModifyDBClusterAccessWhiteListResult.h
	include/alibabacloud/adb/model/ModifyDBClusterDescriptionRequest.h
	include/alibabacloud/adb/model/ModifyDBClusterDescriptionResult.h
	include/alibabacloud/adb/model/ModifyDBClusterMaintainTimeRequest.h
	include/alibabacloud/adb/model/ModifyDBClusterMaintainTimeResult.h
	include/alibabacloud/adb/model/ModifyLogBackupPolicyRequest.h
	include/alibabacloud/adb/model/ModifyLogBackupPolicyResult.h
	include/alibabacloud/adb/model/ReleaseClusterPublicConnectionRequest.h
	include/alibabacloud/adb/model/ReleaseClusterPublicConnectionResult.h
	include/alibabacloud/adb/model/ResetAccountPasswordRequest.h
	include/alibabacloud/adb/model/ResetAccountPasswordResult.h
	include/alibabacloud/adb/model/RevokeOperatorPermissionRequest.h
	include/alibabacloud/adb/model/RevokeOperatorPermissionResult.h
	include/alibabacloud/adb/model/TagResourcesRequest.h
	include/alibabacloud/adb/model/TagResourcesResult.h
	include/alibabacloud/adb/model/UntagResourcesRequest.h
	include/alibabacloud/adb/model/UntagResourcesResult.h )

set(adb_src 
	src/AdbClient.cc
	src/model/AllocateClusterPublicConnectionRequest.cc
	src/model/AllocateClusterPublicConnectionResult.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateDBClusterRequest.cc
	src/model/CreateDBClusterResult.cc
	src/model/DeleteAccountRequest.cc
	src/model/DeleteAccountResult.cc
	src/model/DeleteDBClusterRequest.cc
	src/model/DeleteDBClusterResult.cc
	src/model/DescribeAccountsRequest.cc
	src/model/DescribeAccountsResult.cc
	src/model/DescribeAllDataSourceRequest.cc
	src/model/DescribeAllDataSourceResult.cc
	src/model/DescribeAutoRenewAttributeRequest.cc
	src/model/DescribeAutoRenewAttributeResult.cc
	src/model/DescribeAvailableResourceRequest.cc
	src/model/DescribeAvailableResourceResult.cc
	src/model/DescribeBackupPolicyRequest.cc
	src/model/DescribeBackupPolicyResult.cc
	src/model/DescribeBackupsRequest.cc
	src/model/DescribeBackupsResult.cc
	src/model/DescribeColumnsRequest.cc
	src/model/DescribeColumnsResult.cc
	src/model/DescribeDBClusterAccessWhiteListRequest.cc
	src/model/DescribeDBClusterAccessWhiteListResult.cc
	src/model/DescribeDBClusterAttributeRequest.cc
	src/model/DescribeDBClusterAttributeResult.cc
	src/model/DescribeDBClusterNetInfoRequest.cc
	src/model/DescribeDBClusterNetInfoResult.cc
	src/model/DescribeDBClusterPerformanceRequest.cc
	src/model/DescribeDBClusterPerformanceResult.cc
	src/model/DescribeDBClustersRequest.cc
	src/model/DescribeDBClustersResult.cc
	src/model/DescribeInclinedTablesRequest.cc
	src/model/DescribeInclinedTablesResult.cc
	src/model/DescribeLogStoreKeysRequest.cc
	src/model/DescribeLogStoreKeysResult.cc
	src/model/DescribeLoghubDetailRequest.cc
	src/model/DescribeLoghubDetailResult.cc
	src/model/DescribeOperatorPermissionRequest.cc
	src/model/DescribeOperatorPermissionResult.cc
	src/model/DescribeProcessListRequest.cc
	src/model/DescribeProcessListResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeSchemasRequest.cc
	src/model/DescribeSchemasResult.cc
	src/model/DescribeSlowLogRecordsRequest.cc
	src/model/DescribeSlowLogRecordsResult.cc
	src/model/DescribeSlowLogTrendRequest.cc
	src/model/DescribeSlowLogTrendResult.cc
	src/model/DescribeTableDetailRequest.cc
	src/model/DescribeTableDetailResult.cc
	src/model/DescribeTablesRequest.cc
	src/model/DescribeTablesResult.cc
	src/model/DescribeTaskInfoRequest.cc
	src/model/DescribeTaskInfoResult.cc
	src/model/GrantOperatorPermissionRequest.cc
	src/model/GrantOperatorPermissionResult.cc
	src/model/KillProcessRequest.cc
	src/model/KillProcessResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyAccountDescriptionRequest.cc
	src/model/ModifyAccountDescriptionResult.cc
	src/model/ModifyAutoRenewAttributeRequest.cc
	src/model/ModifyAutoRenewAttributeResult.cc
	src/model/ModifyBackupPolicyRequest.cc
	src/model/ModifyBackupPolicyResult.cc
	src/model/ModifyClusterConnectionStringRequest.cc
	src/model/ModifyClusterConnectionStringResult.cc
	src/model/ModifyDBClusterRequest.cc
	src/model/ModifyDBClusterResult.cc
	src/model/ModifyDBClusterAccessWhiteListRequest.cc
	src/model/ModifyDBClusterAccessWhiteListResult.cc
	src/model/ModifyDBClusterDescriptionRequest.cc
	src/model/ModifyDBClusterDescriptionResult.cc
	src/model/ModifyDBClusterMaintainTimeRequest.cc
	src/model/ModifyDBClusterMaintainTimeResult.cc
	src/model/ModifyLogBackupPolicyRequest.cc
	src/model/ModifyLogBackupPolicyResult.cc
	src/model/ReleaseClusterPublicConnectionRequest.cc
	src/model/ReleaseClusterPublicConnectionResult.cc
	src/model/ResetAccountPasswordRequest.cc
	src/model/ResetAccountPasswordResult.cc
	src/model/RevokeOperatorPermissionRequest.cc
	src/model/RevokeOperatorPermissionResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(adb ${LIB_TYPE}
	${adb_public_header}
	${adb_public_header_model}
	${adb_src})

set_target_properties(adb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}adb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(adb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ADB_LIBRARY)
endif()

target_include_directories(adb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(adb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(adb
		jsoncpp)
	target_include_directories(adb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(adb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(adb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(adb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(adb
		jsoncpp)
endif()

install(FILES ${adb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/adb)
install(FILES ${adb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/adb/model)
install(TARGETS adb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)