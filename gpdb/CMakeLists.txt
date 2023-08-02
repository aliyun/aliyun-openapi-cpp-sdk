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

set(gpdb_public_header 
	include/alibabacloud/gpdb/GpdbClient.h
	include/alibabacloud/gpdb/GpdbExport.h )

set(gpdb_public_header_model 
	include/alibabacloud/gpdb/model/AllocateInstancePublicConnectionRequest.h
	include/alibabacloud/gpdb/model/AllocateInstancePublicConnectionResult.h
	include/alibabacloud/gpdb/model/CheckServiceLinkedRoleRequest.h
	include/alibabacloud/gpdb/model/CheckServiceLinkedRoleResult.h
	include/alibabacloud/gpdb/model/CreateAccountRequest.h
	include/alibabacloud/gpdb/model/CreateAccountResult.h
	include/alibabacloud/gpdb/model/CreateCollectionRequest.h
	include/alibabacloud/gpdb/model/CreateCollectionResult.h
	include/alibabacloud/gpdb/model/CreateDBInstanceRequest.h
	include/alibabacloud/gpdb/model/CreateDBInstanceResult.h
	include/alibabacloud/gpdb/model/CreateDBInstancePlanRequest.h
	include/alibabacloud/gpdb/model/CreateDBInstancePlanResult.h
	include/alibabacloud/gpdb/model/CreateNamespaceRequest.h
	include/alibabacloud/gpdb/model/CreateNamespaceResult.h
	include/alibabacloud/gpdb/model/CreateSampleDataRequest.h
	include/alibabacloud/gpdb/model/CreateSampleDataResult.h
	include/alibabacloud/gpdb/model/CreateServiceLinkedRoleRequest.h
	include/alibabacloud/gpdb/model/CreateServiceLinkedRoleResult.h
	include/alibabacloud/gpdb/model/CreateVectorIndexRequest.h
	include/alibabacloud/gpdb/model/CreateVectorIndexResult.h
	include/alibabacloud/gpdb/model/DeleteCollectionRequest.h
	include/alibabacloud/gpdb/model/DeleteCollectionResult.h
	include/alibabacloud/gpdb/model/DeleteCollectionDataRequest.h
	include/alibabacloud/gpdb/model/DeleteCollectionDataResult.h
	include/alibabacloud/gpdb/model/DeleteDBInstanceRequest.h
	include/alibabacloud/gpdb/model/DeleteDBInstanceResult.h
	include/alibabacloud/gpdb/model/DeleteDBInstancePlanRequest.h
	include/alibabacloud/gpdb/model/DeleteDBInstancePlanResult.h
	include/alibabacloud/gpdb/model/DeleteNamespaceRequest.h
	include/alibabacloud/gpdb/model/DeleteNamespaceResult.h
	include/alibabacloud/gpdb/model/DeleteVectorIndexRequest.h
	include/alibabacloud/gpdb/model/DeleteVectorIndexResult.h
	include/alibabacloud/gpdb/model/DescribeAccountsRequest.h
	include/alibabacloud/gpdb/model/DescribeAccountsResult.h
	include/alibabacloud/gpdb/model/DescribeAvailableResourcesRequest.h
	include/alibabacloud/gpdb/model/DescribeAvailableResourcesResult.h
	include/alibabacloud/gpdb/model/DescribeBackupPolicyRequest.h
	include/alibabacloud/gpdb/model/DescribeBackupPolicyResult.h
	include/alibabacloud/gpdb/model/DescribeCollectionRequest.h
	include/alibabacloud/gpdb/model/DescribeCollectionResult.h
	include/alibabacloud/gpdb/model/DescribeDBClusterNodeRequest.h
	include/alibabacloud/gpdb/model/DescribeDBClusterNodeResult.h
	include/alibabacloud/gpdb/model/DescribeDBClusterPerformanceRequest.h
	include/alibabacloud/gpdb/model/DescribeDBClusterPerformanceResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceAttributeRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceAttributeResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceDataBloatRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceDataBloatResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceDataSkewRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceDataSkewResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceDiagnosisSummaryRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceDiagnosisSummaryResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceErrorLogRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceErrorLogResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceIPArrayListRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceIPArrayListResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceIndexUsageRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceIndexUsageResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceNetInfoRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceNetInfoResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstancePerformanceRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstancePerformanceResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstancePlansRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstancePlansResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceSSLRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstanceSSLResult.h
	include/alibabacloud/gpdb/model/DescribeDBInstancesRequest.h
	include/alibabacloud/gpdb/model/DescribeDBInstancesResult.h
	include/alibabacloud/gpdb/model/DescribeDataBackupsRequest.h
	include/alibabacloud/gpdb/model/DescribeDataBackupsResult.h
	include/alibabacloud/gpdb/model/DescribeDataReDistributeInfoRequest.h
	include/alibabacloud/gpdb/model/DescribeDataReDistributeInfoResult.h
	include/alibabacloud/gpdb/model/DescribeDataShareInstancesRequest.h
	include/alibabacloud/gpdb/model/DescribeDataShareInstancesResult.h
	include/alibabacloud/gpdb/model/DescribeDataSharePerformanceRequest.h
	include/alibabacloud/gpdb/model/DescribeDataSharePerformanceResult.h
	include/alibabacloud/gpdb/model/DescribeDiagnosisDimensionsRequest.h
	include/alibabacloud/gpdb/model/DescribeDiagnosisDimensionsResult.h
	include/alibabacloud/gpdb/model/DescribeDiagnosisMonitorPerformanceRequest.h
	include/alibabacloud/gpdb/model/DescribeDiagnosisMonitorPerformanceResult.h
	include/alibabacloud/gpdb/model/DescribeDiagnosisRecordsRequest.h
	include/alibabacloud/gpdb/model/DescribeDiagnosisRecordsResult.h
	include/alibabacloud/gpdb/model/DescribeDiagnosisSQLInfoRequest.h
	include/alibabacloud/gpdb/model/DescribeDiagnosisSQLInfoResult.h
	include/alibabacloud/gpdb/model/DescribeDownloadRecordsRequest.h
	include/alibabacloud/gpdb/model/DescribeDownloadRecordsResult.h
	include/alibabacloud/gpdb/model/DescribeDownloadSQLLogsRequest.h
	include/alibabacloud/gpdb/model/DescribeDownloadSQLLogsResult.h
	include/alibabacloud/gpdb/model/DescribeHealthStatusRequest.h
	include/alibabacloud/gpdb/model/DescribeHealthStatusResult.h
	include/alibabacloud/gpdb/model/DescribeLogBackupsRequest.h
	include/alibabacloud/gpdb/model/DescribeLogBackupsResult.h
	include/alibabacloud/gpdb/model/DescribeModifyParameterLogRequest.h
	include/alibabacloud/gpdb/model/DescribeModifyParameterLogResult.h
	include/alibabacloud/gpdb/model/DescribeNamespaceRequest.h
	include/alibabacloud/gpdb/model/DescribeNamespaceResult.h
	include/alibabacloud/gpdb/model/DescribeParametersRequest.h
	include/alibabacloud/gpdb/model/DescribeParametersResult.h
	include/alibabacloud/gpdb/model/DescribeRdsVSwitchsRequest.h
	include/alibabacloud/gpdb/model/DescribeRdsVSwitchsResult.h
	include/alibabacloud/gpdb/model/DescribeRdsVpcsRequest.h
	include/alibabacloud/gpdb/model/DescribeRdsVpcsResult.h
	include/alibabacloud/gpdb/model/DescribeRegionsRequest.h
	include/alibabacloud/gpdb/model/DescribeRegionsResult.h
	include/alibabacloud/gpdb/model/DescribeSQLLogCountRequest.h
	include/alibabacloud/gpdb/model/DescribeSQLLogCountResult.h
	include/alibabacloud/gpdb/model/DescribeSQLLogsV2Request.h
	include/alibabacloud/gpdb/model/DescribeSQLLogsV2Result.h
	include/alibabacloud/gpdb/model/DescribeSampleDataRequest.h
	include/alibabacloud/gpdb/model/DescribeSampleDataResult.h
	include/alibabacloud/gpdb/model/DescribeSupportFeaturesRequest.h
	include/alibabacloud/gpdb/model/DescribeSupportFeaturesResult.h
	include/alibabacloud/gpdb/model/DescribeTagsRequest.h
	include/alibabacloud/gpdb/model/DescribeTagsResult.h
	include/alibabacloud/gpdb/model/DescribeUserEncryptionKeyListRequest.h
	include/alibabacloud/gpdb/model/DescribeUserEncryptionKeyListResult.h
	include/alibabacloud/gpdb/model/DescribeWaitingSQLInfoRequest.h
	include/alibabacloud/gpdb/model/DescribeWaitingSQLInfoResult.h
	include/alibabacloud/gpdb/model/DescribeWaitingSQLRecordsRequest.h
	include/alibabacloud/gpdb/model/DescribeWaitingSQLRecordsResult.h
	include/alibabacloud/gpdb/model/DownloadDiagnosisRecordsRequest.h
	include/alibabacloud/gpdb/model/DownloadDiagnosisRecordsResult.h
	include/alibabacloud/gpdb/model/DownloadSQLLogsRecordsRequest.h
	include/alibabacloud/gpdb/model/DownloadSQLLogsRecordsResult.h
	include/alibabacloud/gpdb/model/GrantCollectionRequest.h
	include/alibabacloud/gpdb/model/GrantCollectionResult.h
	include/alibabacloud/gpdb/model/InitVectorDatabaseRequest.h
	include/alibabacloud/gpdb/model/InitVectorDatabaseResult.h
	include/alibabacloud/gpdb/model/ListCollectionsRequest.h
	include/alibabacloud/gpdb/model/ListCollectionsResult.h
	include/alibabacloud/gpdb/model/ListNamespacesRequest.h
	include/alibabacloud/gpdb/model/ListNamespacesResult.h
	include/alibabacloud/gpdb/model/ListTagResourcesRequest.h
	include/alibabacloud/gpdb/model/ListTagResourcesResult.h
	include/alibabacloud/gpdb/model/ModifyAccountDescriptionRequest.h
	include/alibabacloud/gpdb/model/ModifyAccountDescriptionResult.h
	include/alibabacloud/gpdb/model/ModifyBackupPolicyRequest.h
	include/alibabacloud/gpdb/model/ModifyBackupPolicyResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceConfigRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceConfigResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceConnectionStringRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceConnectionStringResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceDescriptionRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceDescriptionResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceMaintainTimeRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceMaintainTimeResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceResourceGroupRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceResourceGroupResult.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceSSLRequest.h
	include/alibabacloud/gpdb/model/ModifyDBInstanceSSLResult.h
	include/alibabacloud/gpdb/model/ModifyParametersRequest.h
	include/alibabacloud/gpdb/model/ModifyParametersResult.h
	include/alibabacloud/gpdb/model/ModifySQLCollectorPolicyRequest.h
	include/alibabacloud/gpdb/model/ModifySQLCollectorPolicyResult.h
	include/alibabacloud/gpdb/model/ModifySecurityIpsRequest.h
	include/alibabacloud/gpdb/model/ModifySecurityIpsResult.h
	include/alibabacloud/gpdb/model/ModifyVectorConfigurationRequest.h
	include/alibabacloud/gpdb/model/ModifyVectorConfigurationResult.h
	include/alibabacloud/gpdb/model/PauseInstanceRequest.h
	include/alibabacloud/gpdb/model/PauseInstanceResult.h
	include/alibabacloud/gpdb/model/QueryCollectionDataRequest.h
	include/alibabacloud/gpdb/model/QueryCollectionDataResult.h
	include/alibabacloud/gpdb/model/RebalanceDBInstanceRequest.h
	include/alibabacloud/gpdb/model/RebalanceDBInstanceResult.h
	include/alibabacloud/gpdb/model/ReleaseInstancePublicConnectionRequest.h
	include/alibabacloud/gpdb/model/ReleaseInstancePublicConnectionResult.h
	include/alibabacloud/gpdb/model/ResetAccountPasswordRequest.h
	include/alibabacloud/gpdb/model/ResetAccountPasswordResult.h
	include/alibabacloud/gpdb/model/RestartDBInstanceRequest.h
	include/alibabacloud/gpdb/model/RestartDBInstanceResult.h
	include/alibabacloud/gpdb/model/ResumeInstanceRequest.h
	include/alibabacloud/gpdb/model/ResumeInstanceResult.h
	include/alibabacloud/gpdb/model/SetDBInstancePlanStatusRequest.h
	include/alibabacloud/gpdb/model/SetDBInstancePlanStatusResult.h
	include/alibabacloud/gpdb/model/SetDataShareInstanceRequest.h
	include/alibabacloud/gpdb/model/SetDataShareInstanceResult.h
	include/alibabacloud/gpdb/model/SwitchDBInstanceNetTypeRequest.h
	include/alibabacloud/gpdb/model/SwitchDBInstanceNetTypeResult.h
	include/alibabacloud/gpdb/model/TagResourcesRequest.h
	include/alibabacloud/gpdb/model/TagResourcesResult.h
	include/alibabacloud/gpdb/model/UnloadSampleDataRequest.h
	include/alibabacloud/gpdb/model/UnloadSampleDataResult.h
	include/alibabacloud/gpdb/model/UntagResourcesRequest.h
	include/alibabacloud/gpdb/model/UntagResourcesResult.h
	include/alibabacloud/gpdb/model/UpdateDBInstancePlanRequest.h
	include/alibabacloud/gpdb/model/UpdateDBInstancePlanResult.h
	include/alibabacloud/gpdb/model/UpgradeDBInstanceRequest.h
	include/alibabacloud/gpdb/model/UpgradeDBInstanceResult.h
	include/alibabacloud/gpdb/model/UpgradeDBVersionRequest.h
	include/alibabacloud/gpdb/model/UpgradeDBVersionResult.h
	include/alibabacloud/gpdb/model/UpsertCollectionDataRequest.h
	include/alibabacloud/gpdb/model/UpsertCollectionDataResult.h )

set(gpdb_src 
	src/GpdbClient.cc
	src/model/AllocateInstancePublicConnectionRequest.cc
	src/model/AllocateInstancePublicConnectionResult.cc
	src/model/CheckServiceLinkedRoleRequest.cc
	src/model/CheckServiceLinkedRoleResult.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateCollectionRequest.cc
	src/model/CreateCollectionResult.cc
	src/model/CreateDBInstanceRequest.cc
	src/model/CreateDBInstanceResult.cc
	src/model/CreateDBInstancePlanRequest.cc
	src/model/CreateDBInstancePlanResult.cc
	src/model/CreateNamespaceRequest.cc
	src/model/CreateNamespaceResult.cc
	src/model/CreateSampleDataRequest.cc
	src/model/CreateSampleDataResult.cc
	src/model/CreateServiceLinkedRoleRequest.cc
	src/model/CreateServiceLinkedRoleResult.cc
	src/model/CreateVectorIndexRequest.cc
	src/model/CreateVectorIndexResult.cc
	src/model/DeleteCollectionRequest.cc
	src/model/DeleteCollectionResult.cc
	src/model/DeleteCollectionDataRequest.cc
	src/model/DeleteCollectionDataResult.cc
	src/model/DeleteDBInstanceRequest.cc
	src/model/DeleteDBInstanceResult.cc
	src/model/DeleteDBInstancePlanRequest.cc
	src/model/DeleteDBInstancePlanResult.cc
	src/model/DeleteNamespaceRequest.cc
	src/model/DeleteNamespaceResult.cc
	src/model/DeleteVectorIndexRequest.cc
	src/model/DeleteVectorIndexResult.cc
	src/model/DescribeAccountsRequest.cc
	src/model/DescribeAccountsResult.cc
	src/model/DescribeAvailableResourcesRequest.cc
	src/model/DescribeAvailableResourcesResult.cc
	src/model/DescribeBackupPolicyRequest.cc
	src/model/DescribeBackupPolicyResult.cc
	src/model/DescribeCollectionRequest.cc
	src/model/DescribeCollectionResult.cc
	src/model/DescribeDBClusterNodeRequest.cc
	src/model/DescribeDBClusterNodeResult.cc
	src/model/DescribeDBClusterPerformanceRequest.cc
	src/model/DescribeDBClusterPerformanceResult.cc
	src/model/DescribeDBInstanceAttributeRequest.cc
	src/model/DescribeDBInstanceAttributeResult.cc
	src/model/DescribeDBInstanceDataBloatRequest.cc
	src/model/DescribeDBInstanceDataBloatResult.cc
	src/model/DescribeDBInstanceDataSkewRequest.cc
	src/model/DescribeDBInstanceDataSkewResult.cc
	src/model/DescribeDBInstanceDiagnosisSummaryRequest.cc
	src/model/DescribeDBInstanceDiagnosisSummaryResult.cc
	src/model/DescribeDBInstanceErrorLogRequest.cc
	src/model/DescribeDBInstanceErrorLogResult.cc
	src/model/DescribeDBInstanceIPArrayListRequest.cc
	src/model/DescribeDBInstanceIPArrayListResult.cc
	src/model/DescribeDBInstanceIndexUsageRequest.cc
	src/model/DescribeDBInstanceIndexUsageResult.cc
	src/model/DescribeDBInstanceNetInfoRequest.cc
	src/model/DescribeDBInstanceNetInfoResult.cc
	src/model/DescribeDBInstancePerformanceRequest.cc
	src/model/DescribeDBInstancePerformanceResult.cc
	src/model/DescribeDBInstancePlansRequest.cc
	src/model/DescribeDBInstancePlansResult.cc
	src/model/DescribeDBInstanceSSLRequest.cc
	src/model/DescribeDBInstanceSSLResult.cc
	src/model/DescribeDBInstancesRequest.cc
	src/model/DescribeDBInstancesResult.cc
	src/model/DescribeDataBackupsRequest.cc
	src/model/DescribeDataBackupsResult.cc
	src/model/DescribeDataReDistributeInfoRequest.cc
	src/model/DescribeDataReDistributeInfoResult.cc
	src/model/DescribeDataShareInstancesRequest.cc
	src/model/DescribeDataShareInstancesResult.cc
	src/model/DescribeDataSharePerformanceRequest.cc
	src/model/DescribeDataSharePerformanceResult.cc
	src/model/DescribeDiagnosisDimensionsRequest.cc
	src/model/DescribeDiagnosisDimensionsResult.cc
	src/model/DescribeDiagnosisMonitorPerformanceRequest.cc
	src/model/DescribeDiagnosisMonitorPerformanceResult.cc
	src/model/DescribeDiagnosisRecordsRequest.cc
	src/model/DescribeDiagnosisRecordsResult.cc
	src/model/DescribeDiagnosisSQLInfoRequest.cc
	src/model/DescribeDiagnosisSQLInfoResult.cc
	src/model/DescribeDownloadRecordsRequest.cc
	src/model/DescribeDownloadRecordsResult.cc
	src/model/DescribeDownloadSQLLogsRequest.cc
	src/model/DescribeDownloadSQLLogsResult.cc
	src/model/DescribeHealthStatusRequest.cc
	src/model/DescribeHealthStatusResult.cc
	src/model/DescribeLogBackupsRequest.cc
	src/model/DescribeLogBackupsResult.cc
	src/model/DescribeModifyParameterLogRequest.cc
	src/model/DescribeModifyParameterLogResult.cc
	src/model/DescribeNamespaceRequest.cc
	src/model/DescribeNamespaceResult.cc
	src/model/DescribeParametersRequest.cc
	src/model/DescribeParametersResult.cc
	src/model/DescribeRdsVSwitchsRequest.cc
	src/model/DescribeRdsVSwitchsResult.cc
	src/model/DescribeRdsVpcsRequest.cc
	src/model/DescribeRdsVpcsResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeSQLLogCountRequest.cc
	src/model/DescribeSQLLogCountResult.cc
	src/model/DescribeSQLLogsV2Request.cc
	src/model/DescribeSQLLogsV2Result.cc
	src/model/DescribeSampleDataRequest.cc
	src/model/DescribeSampleDataResult.cc
	src/model/DescribeSupportFeaturesRequest.cc
	src/model/DescribeSupportFeaturesResult.cc
	src/model/DescribeTagsRequest.cc
	src/model/DescribeTagsResult.cc
	src/model/DescribeUserEncryptionKeyListRequest.cc
	src/model/DescribeUserEncryptionKeyListResult.cc
	src/model/DescribeWaitingSQLInfoRequest.cc
	src/model/DescribeWaitingSQLInfoResult.cc
	src/model/DescribeWaitingSQLRecordsRequest.cc
	src/model/DescribeWaitingSQLRecordsResult.cc
	src/model/DownloadDiagnosisRecordsRequest.cc
	src/model/DownloadDiagnosisRecordsResult.cc
	src/model/DownloadSQLLogsRecordsRequest.cc
	src/model/DownloadSQLLogsRecordsResult.cc
	src/model/GrantCollectionRequest.cc
	src/model/GrantCollectionResult.cc
	src/model/InitVectorDatabaseRequest.cc
	src/model/InitVectorDatabaseResult.cc
	src/model/ListCollectionsRequest.cc
	src/model/ListCollectionsResult.cc
	src/model/ListNamespacesRequest.cc
	src/model/ListNamespacesResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyAccountDescriptionRequest.cc
	src/model/ModifyAccountDescriptionResult.cc
	src/model/ModifyBackupPolicyRequest.cc
	src/model/ModifyBackupPolicyResult.cc
	src/model/ModifyDBInstanceConfigRequest.cc
	src/model/ModifyDBInstanceConfigResult.cc
	src/model/ModifyDBInstanceConnectionStringRequest.cc
	src/model/ModifyDBInstanceConnectionStringResult.cc
	src/model/ModifyDBInstanceDescriptionRequest.cc
	src/model/ModifyDBInstanceDescriptionResult.cc
	src/model/ModifyDBInstanceMaintainTimeRequest.cc
	src/model/ModifyDBInstanceMaintainTimeResult.cc
	src/model/ModifyDBInstanceResourceGroupRequest.cc
	src/model/ModifyDBInstanceResourceGroupResult.cc
	src/model/ModifyDBInstanceSSLRequest.cc
	src/model/ModifyDBInstanceSSLResult.cc
	src/model/ModifyParametersRequest.cc
	src/model/ModifyParametersResult.cc
	src/model/ModifySQLCollectorPolicyRequest.cc
	src/model/ModifySQLCollectorPolicyResult.cc
	src/model/ModifySecurityIpsRequest.cc
	src/model/ModifySecurityIpsResult.cc
	src/model/ModifyVectorConfigurationRequest.cc
	src/model/ModifyVectorConfigurationResult.cc
	src/model/PauseInstanceRequest.cc
	src/model/PauseInstanceResult.cc
	src/model/QueryCollectionDataRequest.cc
	src/model/QueryCollectionDataResult.cc
	src/model/RebalanceDBInstanceRequest.cc
	src/model/RebalanceDBInstanceResult.cc
	src/model/ReleaseInstancePublicConnectionRequest.cc
	src/model/ReleaseInstancePublicConnectionResult.cc
	src/model/ResetAccountPasswordRequest.cc
	src/model/ResetAccountPasswordResult.cc
	src/model/RestartDBInstanceRequest.cc
	src/model/RestartDBInstanceResult.cc
	src/model/ResumeInstanceRequest.cc
	src/model/ResumeInstanceResult.cc
	src/model/SetDBInstancePlanStatusRequest.cc
	src/model/SetDBInstancePlanStatusResult.cc
	src/model/SetDataShareInstanceRequest.cc
	src/model/SetDataShareInstanceResult.cc
	src/model/SwitchDBInstanceNetTypeRequest.cc
	src/model/SwitchDBInstanceNetTypeResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UnloadSampleDataRequest.cc
	src/model/UnloadSampleDataResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateDBInstancePlanRequest.cc
	src/model/UpdateDBInstancePlanResult.cc
	src/model/UpgradeDBInstanceRequest.cc
	src/model/UpgradeDBInstanceResult.cc
	src/model/UpgradeDBVersionRequest.cc
	src/model/UpgradeDBVersionResult.cc
	src/model/UpsertCollectionDataRequest.cc
	src/model/UpsertCollectionDataResult.cc )

add_library(gpdb ${LIB_TYPE}
	${gpdb_public_header}
	${gpdb_public_header_model}
	${gpdb_src})

set_target_properties(gpdb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}gpdb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(gpdb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_GPDB_LIBRARY)
endif()

target_include_directories(gpdb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(gpdb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(gpdb
		jsoncpp)
	target_include_directories(gpdb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(gpdb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(gpdb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(gpdb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(gpdb
		jsoncpp)
endif()

install(FILES ${gpdb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/gpdb)
install(FILES ${gpdb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/gpdb/model)
install(TARGETS gpdb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)