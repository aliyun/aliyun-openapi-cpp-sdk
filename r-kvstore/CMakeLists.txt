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

set(r-kvstore_public_header 
	include/alibabacloud/r-kvstore/R_kvstoreClient.h
	include/alibabacloud/r-kvstore/R_kvstoreExport.h )

set(r-kvstore_public_header_model 
	include/alibabacloud/r-kvstore/model/AllocateInstancePublicConnectionRequest.h
	include/alibabacloud/r-kvstore/model/AllocateInstancePublicConnectionResult.h
	include/alibabacloud/r-kvstore/model/CreateAccountRequest.h
	include/alibabacloud/r-kvstore/model/CreateAccountResult.h
	include/alibabacloud/r-kvstore/model/CreateBackupRequest.h
	include/alibabacloud/r-kvstore/model/CreateBackupResult.h
	include/alibabacloud/r-kvstore/model/CreateCacheAnalysisTaskRequest.h
	include/alibabacloud/r-kvstore/model/CreateCacheAnalysisTaskResult.h
	include/alibabacloud/r-kvstore/model/CreateInstanceRequest.h
	include/alibabacloud/r-kvstore/model/CreateInstanceResult.h
	include/alibabacloud/r-kvstore/model/DeleteAccountRequest.h
	include/alibabacloud/r-kvstore/model/DeleteAccountResult.h
	include/alibabacloud/r-kvstore/model/DeleteInstanceRequest.h
	include/alibabacloud/r-kvstore/model/DeleteInstanceResult.h
	include/alibabacloud/r-kvstore/model/DescribeAccountsRequest.h
	include/alibabacloud/r-kvstore/model/DescribeAccountsResult.h
	include/alibabacloud/r-kvstore/model/DescribeAuditRecordsRequest.h
	include/alibabacloud/r-kvstore/model/DescribeAuditRecordsResult.h
	include/alibabacloud/r-kvstore/model/DescribeAvailableResourceRequest.h
	include/alibabacloud/r-kvstore/model/DescribeAvailableResourceResult.h
	include/alibabacloud/r-kvstore/model/DescribeBackupPolicyRequest.h
	include/alibabacloud/r-kvstore/model/DescribeBackupPolicyResult.h
	include/alibabacloud/r-kvstore/model/DescribeBackupsRequest.h
	include/alibabacloud/r-kvstore/model/DescribeBackupsResult.h
	include/alibabacloud/r-kvstore/model/DescribeCacheAnalysisReportRequest.h
	include/alibabacloud/r-kvstore/model/DescribeCacheAnalysisReportResult.h
	include/alibabacloud/r-kvstore/model/DescribeCacheAnalysisReportListRequest.h
	include/alibabacloud/r-kvstore/model/DescribeCacheAnalysisReportListResult.h
	include/alibabacloud/r-kvstore/model/DescribeDBInstanceNetInfoRequest.h
	include/alibabacloud/r-kvstore/model/DescribeDBInstanceNetInfoResult.h
	include/alibabacloud/r-kvstore/model/DescribeHistoryMonitorValuesRequest.h
	include/alibabacloud/r-kvstore/model/DescribeHistoryMonitorValuesResult.h
	include/alibabacloud/r-kvstore/model/DescribeInstanceAttributeRequest.h
	include/alibabacloud/r-kvstore/model/DescribeInstanceAttributeResult.h
	include/alibabacloud/r-kvstore/model/DescribeInstanceAutoRenewalAttributeRequest.h
	include/alibabacloud/r-kvstore/model/DescribeInstanceAutoRenewalAttributeResult.h
	include/alibabacloud/r-kvstore/model/DescribeInstanceSSLRequest.h
	include/alibabacloud/r-kvstore/model/DescribeInstanceSSLResult.h
	include/alibabacloud/r-kvstore/model/DescribeInstancesRequest.h
	include/alibabacloud/r-kvstore/model/DescribeInstancesResult.h
	include/alibabacloud/r-kvstore/model/DescribeIntranetAttributeRequest.h
	include/alibabacloud/r-kvstore/model/DescribeIntranetAttributeResult.h
	include/alibabacloud/r-kvstore/model/DescribeLogicInstanceTopologyRequest.h
	include/alibabacloud/r-kvstore/model/DescribeLogicInstanceTopologyResult.h
	include/alibabacloud/r-kvstore/model/DescribeMonitorItemsRequest.h
	include/alibabacloud/r-kvstore/model/DescribeMonitorItemsResult.h
	include/alibabacloud/r-kvstore/model/DescribeParametersRequest.h
	include/alibabacloud/r-kvstore/model/DescribeParametersResult.h
	include/alibabacloud/r-kvstore/model/DescribeRegionsRequest.h
	include/alibabacloud/r-kvstore/model/DescribeRegionsResult.h
	include/alibabacloud/r-kvstore/model/DescribeRunningLogRecordsRequest.h
	include/alibabacloud/r-kvstore/model/DescribeRunningLogRecordsResult.h
	include/alibabacloud/r-kvstore/model/DescribeSecurityIpsRequest.h
	include/alibabacloud/r-kvstore/model/DescribeSecurityIpsResult.h
	include/alibabacloud/r-kvstore/model/DescribeSlowLogRecordsRequest.h
	include/alibabacloud/r-kvstore/model/DescribeSlowLogRecordsResult.h
	include/alibabacloud/r-kvstore/model/DescribeZonesRequest.h
	include/alibabacloud/r-kvstore/model/DescribeZonesResult.h
	include/alibabacloud/r-kvstore/model/FlushExpireKeysRequest.h
	include/alibabacloud/r-kvstore/model/FlushExpireKeysResult.h
	include/alibabacloud/r-kvstore/model/FlushInstanceRequest.h
	include/alibabacloud/r-kvstore/model/FlushInstanceResult.h
	include/alibabacloud/r-kvstore/model/GrantAccountPrivilegeRequest.h
	include/alibabacloud/r-kvstore/model/GrantAccountPrivilegeResult.h
	include/alibabacloud/r-kvstore/model/ListTagResourcesRequest.h
	include/alibabacloud/r-kvstore/model/ListTagResourcesResult.h
	include/alibabacloud/r-kvstore/model/MigrateToOtherZoneRequest.h
	include/alibabacloud/r-kvstore/model/MigrateToOtherZoneResult.h
	include/alibabacloud/r-kvstore/model/ModifyAccountDescriptionRequest.h
	include/alibabacloud/r-kvstore/model/ModifyAccountDescriptionResult.h
	include/alibabacloud/r-kvstore/model/ModifyAuditLogConfigRequest.h
	include/alibabacloud/r-kvstore/model/ModifyAuditLogConfigResult.h
	include/alibabacloud/r-kvstore/model/ModifyBackupPolicyRequest.h
	include/alibabacloud/r-kvstore/model/ModifyBackupPolicyResult.h
	include/alibabacloud/r-kvstore/model/ModifyDBInstanceConnectionStringRequest.h
	include/alibabacloud/r-kvstore/model/ModifyDBInstanceConnectionStringResult.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceAttributeRequest.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceAttributeResult.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceAutoRenewalAttributeRequest.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceAutoRenewalAttributeResult.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceConfigRequest.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceConfigResult.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceMaintainTimeRequest.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceMaintainTimeResult.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceMajorVersionRequest.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceMajorVersionResult.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceMinorVersionRequest.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceMinorVersionResult.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceNetExpireTimeRequest.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceNetExpireTimeResult.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceSSLRequest.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceSSLResult.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceSpecRequest.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceSpecResult.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceVpcAuthModeRequest.h
	include/alibabacloud/r-kvstore/model/ModifyInstanceVpcAuthModeResult.h
	include/alibabacloud/r-kvstore/model/ModifyIntranetAttributeRequest.h
	include/alibabacloud/r-kvstore/model/ModifyIntranetAttributeResult.h
	include/alibabacloud/r-kvstore/model/ModifySecurityIpsRequest.h
	include/alibabacloud/r-kvstore/model/ModifySecurityIpsResult.h
	include/alibabacloud/r-kvstore/model/ReleaseInstancePublicConnectionRequest.h
	include/alibabacloud/r-kvstore/model/ReleaseInstancePublicConnectionResult.h
	include/alibabacloud/r-kvstore/model/RenewInstanceRequest.h
	include/alibabacloud/r-kvstore/model/RenewInstanceResult.h
	include/alibabacloud/r-kvstore/model/ResetAccountPasswordRequest.h
	include/alibabacloud/r-kvstore/model/ResetAccountPasswordResult.h
	include/alibabacloud/r-kvstore/model/RestartInstanceRequest.h
	include/alibabacloud/r-kvstore/model/RestartInstanceResult.h
	include/alibabacloud/r-kvstore/model/RestoreInstanceRequest.h
	include/alibabacloud/r-kvstore/model/RestoreInstanceResult.h
	include/alibabacloud/r-kvstore/model/SwitchNetworkRequest.h
	include/alibabacloud/r-kvstore/model/SwitchNetworkResult.h
	include/alibabacloud/r-kvstore/model/TagResourcesRequest.h
	include/alibabacloud/r-kvstore/model/TagResourcesResult.h
	include/alibabacloud/r-kvstore/model/TransformToPrePaidRequest.h
	include/alibabacloud/r-kvstore/model/TransformToPrePaidResult.h
	include/alibabacloud/r-kvstore/model/UntagResourcesRequest.h
	include/alibabacloud/r-kvstore/model/UntagResourcesResult.h )

set(r-kvstore_src 
	src/R-kvstoreClient.cc
	src/model/AllocateInstancePublicConnectionRequest.cc
	src/model/AllocateInstancePublicConnectionResult.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateBackupRequest.cc
	src/model/CreateBackupResult.cc
	src/model/CreateCacheAnalysisTaskRequest.cc
	src/model/CreateCacheAnalysisTaskResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/DeleteAccountRequest.cc
	src/model/DeleteAccountResult.cc
	src/model/DeleteInstanceRequest.cc
	src/model/DeleteInstanceResult.cc
	src/model/DescribeAccountsRequest.cc
	src/model/DescribeAccountsResult.cc
	src/model/DescribeAuditRecordsRequest.cc
	src/model/DescribeAuditRecordsResult.cc
	src/model/DescribeAvailableResourceRequest.cc
	src/model/DescribeAvailableResourceResult.cc
	src/model/DescribeBackupPolicyRequest.cc
	src/model/DescribeBackupPolicyResult.cc
	src/model/DescribeBackupsRequest.cc
	src/model/DescribeBackupsResult.cc
	src/model/DescribeCacheAnalysisReportRequest.cc
	src/model/DescribeCacheAnalysisReportResult.cc
	src/model/DescribeCacheAnalysisReportListRequest.cc
	src/model/DescribeCacheAnalysisReportListResult.cc
	src/model/DescribeDBInstanceNetInfoRequest.cc
	src/model/DescribeDBInstanceNetInfoResult.cc
	src/model/DescribeHistoryMonitorValuesRequest.cc
	src/model/DescribeHistoryMonitorValuesResult.cc
	src/model/DescribeInstanceAttributeRequest.cc
	src/model/DescribeInstanceAttributeResult.cc
	src/model/DescribeInstanceAutoRenewalAttributeRequest.cc
	src/model/DescribeInstanceAutoRenewalAttributeResult.cc
	src/model/DescribeInstanceSSLRequest.cc
	src/model/DescribeInstanceSSLResult.cc
	src/model/DescribeInstancesRequest.cc
	src/model/DescribeInstancesResult.cc
	src/model/DescribeIntranetAttributeRequest.cc
	src/model/DescribeIntranetAttributeResult.cc
	src/model/DescribeLogicInstanceTopologyRequest.cc
	src/model/DescribeLogicInstanceTopologyResult.cc
	src/model/DescribeMonitorItemsRequest.cc
	src/model/DescribeMonitorItemsResult.cc
	src/model/DescribeParametersRequest.cc
	src/model/DescribeParametersResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeRunningLogRecordsRequest.cc
	src/model/DescribeRunningLogRecordsResult.cc
	src/model/DescribeSecurityIpsRequest.cc
	src/model/DescribeSecurityIpsResult.cc
	src/model/DescribeSlowLogRecordsRequest.cc
	src/model/DescribeSlowLogRecordsResult.cc
	src/model/DescribeZonesRequest.cc
	src/model/DescribeZonesResult.cc
	src/model/FlushExpireKeysRequest.cc
	src/model/FlushExpireKeysResult.cc
	src/model/FlushInstanceRequest.cc
	src/model/FlushInstanceResult.cc
	src/model/GrantAccountPrivilegeRequest.cc
	src/model/GrantAccountPrivilegeResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/MigrateToOtherZoneRequest.cc
	src/model/MigrateToOtherZoneResult.cc
	src/model/ModifyAccountDescriptionRequest.cc
	src/model/ModifyAccountDescriptionResult.cc
	src/model/ModifyAuditLogConfigRequest.cc
	src/model/ModifyAuditLogConfigResult.cc
	src/model/ModifyBackupPolicyRequest.cc
	src/model/ModifyBackupPolicyResult.cc
	src/model/ModifyDBInstanceConnectionStringRequest.cc
	src/model/ModifyDBInstanceConnectionStringResult.cc
	src/model/ModifyInstanceAttributeRequest.cc
	src/model/ModifyInstanceAttributeResult.cc
	src/model/ModifyInstanceAutoRenewalAttributeRequest.cc
	src/model/ModifyInstanceAutoRenewalAttributeResult.cc
	src/model/ModifyInstanceConfigRequest.cc
	src/model/ModifyInstanceConfigResult.cc
	src/model/ModifyInstanceMaintainTimeRequest.cc
	src/model/ModifyInstanceMaintainTimeResult.cc
	src/model/ModifyInstanceMajorVersionRequest.cc
	src/model/ModifyInstanceMajorVersionResult.cc
	src/model/ModifyInstanceMinorVersionRequest.cc
	src/model/ModifyInstanceMinorVersionResult.cc
	src/model/ModifyInstanceNetExpireTimeRequest.cc
	src/model/ModifyInstanceNetExpireTimeResult.cc
	src/model/ModifyInstanceSSLRequest.cc
	src/model/ModifyInstanceSSLResult.cc
	src/model/ModifyInstanceSpecRequest.cc
	src/model/ModifyInstanceSpecResult.cc
	src/model/ModifyInstanceVpcAuthModeRequest.cc
	src/model/ModifyInstanceVpcAuthModeResult.cc
	src/model/ModifyIntranetAttributeRequest.cc
	src/model/ModifyIntranetAttributeResult.cc
	src/model/ModifySecurityIpsRequest.cc
	src/model/ModifySecurityIpsResult.cc
	src/model/ReleaseInstancePublicConnectionRequest.cc
	src/model/ReleaseInstancePublicConnectionResult.cc
	src/model/RenewInstanceRequest.cc
	src/model/RenewInstanceResult.cc
	src/model/ResetAccountPasswordRequest.cc
	src/model/ResetAccountPasswordResult.cc
	src/model/RestartInstanceRequest.cc
	src/model/RestartInstanceResult.cc
	src/model/RestoreInstanceRequest.cc
	src/model/RestoreInstanceResult.cc
	src/model/SwitchNetworkRequest.cc
	src/model/SwitchNetworkResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/TransformToPrePaidRequest.cc
	src/model/TransformToPrePaidResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(r-kvstore ${LIB_TYPE}
	${r-kvstore_public_header}
	${r-kvstore_public_header_model}
	${r-kvstore_src})

set_target_properties(r-kvstore
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}r-kvstore
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(r-kvstore
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_R_KVSTORE_LIBRARY)
endif()

target_include_directories(r-kvstore
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(r-kvstore
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(r-kvstore
		jsoncpp)
	target_include_directories(r-kvstore
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(r-kvstore
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(r-kvstore
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(r-kvstore
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(r-kvstore
		jsoncpp)
endif()

install(FILES ${r-kvstore_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/r-kvstore)
install(FILES ${r-kvstore_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/r-kvstore/model)
install(TARGETS r-kvstore
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)