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

set(polardbx_public_header 
	include/alibabacloud/polardbx/PolardbxClient.h
	include/alibabacloud/polardbx/PolardbxExport.h )

set(polardbx_public_header_model 
	include/alibabacloud/polardbx/model/AlignStoragePrimaryAzoneRequest.h
	include/alibabacloud/polardbx/model/AlignStoragePrimaryAzoneResult.h
	include/alibabacloud/polardbx/model/AllocateColdDataVolumeRequest.h
	include/alibabacloud/polardbx/model/AllocateColdDataVolumeResult.h
	include/alibabacloud/polardbx/model/AllocateInstancePublicConnectionRequest.h
	include/alibabacloud/polardbx/model/AllocateInstancePublicConnectionResult.h
	include/alibabacloud/polardbx/model/CancelActiveOperationTasksRequest.h
	include/alibabacloud/polardbx/model/CancelActiveOperationTasksResult.h
	include/alibabacloud/polardbx/model/ChangeResourceGroupRequest.h
	include/alibabacloud/polardbx/model/ChangeResourceGroupResult.h
	include/alibabacloud/polardbx/model/CheckCloudResourceAuthorizedRequest.h
	include/alibabacloud/polardbx/model/CheckCloudResourceAuthorizedResult.h
	include/alibabacloud/polardbx/model/CreateAccountRequest.h
	include/alibabacloud/polardbx/model/CreateAccountResult.h
	include/alibabacloud/polardbx/model/CreateBackupRequest.h
	include/alibabacloud/polardbx/model/CreateBackupResult.h
	include/alibabacloud/polardbx/model/CreateDBRequest.h
	include/alibabacloud/polardbx/model/CreateDBResult.h
	include/alibabacloud/polardbx/model/CreateDBInstanceRequest.h
	include/alibabacloud/polardbx/model/CreateDBInstanceResult.h
	include/alibabacloud/polardbx/model/CreateSuperAccountRequest.h
	include/alibabacloud/polardbx/model/CreateSuperAccountResult.h
	include/alibabacloud/polardbx/model/DeleteAccountRequest.h
	include/alibabacloud/polardbx/model/DeleteAccountResult.h
	include/alibabacloud/polardbx/model/DeleteDBRequest.h
	include/alibabacloud/polardbx/model/DeleteDBResult.h
	include/alibabacloud/polardbx/model/DeleteDBInstanceRequest.h
	include/alibabacloud/polardbx/model/DeleteDBInstanceResult.h
	include/alibabacloud/polardbx/model/DescribeAccountListRequest.h
	include/alibabacloud/polardbx/model/DescribeAccountListResult.h
	include/alibabacloud/polardbx/model/DescribeActiveOperationMaintainConfRequest.h
	include/alibabacloud/polardbx/model/DescribeActiveOperationMaintainConfResult.h
	include/alibabacloud/polardbx/model/DescribeActiveOperationTaskCountRequest.h
	include/alibabacloud/polardbx/model/DescribeActiveOperationTaskCountResult.h
	include/alibabacloud/polardbx/model/DescribeActiveOperationTasksRequest.h
	include/alibabacloud/polardbx/model/DescribeActiveOperationTasksResult.h
	include/alibabacloud/polardbx/model/DescribeArchiveTableListRequest.h
	include/alibabacloud/polardbx/model/DescribeArchiveTableListResult.h
	include/alibabacloud/polardbx/model/DescribeBackupPolicyRequest.h
	include/alibabacloud/polardbx/model/DescribeBackupPolicyResult.h
	include/alibabacloud/polardbx/model/DescribeBackupSetRequest.h
	include/alibabacloud/polardbx/model/DescribeBackupSetResult.h
	include/alibabacloud/polardbx/model/DescribeBackupSetListRequest.h
	include/alibabacloud/polardbx/model/DescribeBackupSetListResult.h
	include/alibabacloud/polardbx/model/DescribeBinaryLogListRequest.h
	include/alibabacloud/polardbx/model/DescribeBinaryLogListResult.h
	include/alibabacloud/polardbx/model/DescribeCharacterSetRequest.h
	include/alibabacloud/polardbx/model/DescribeCharacterSetResult.h
	include/alibabacloud/polardbx/model/DescribeColdDataBasicInfoRequest.h
	include/alibabacloud/polardbx/model/DescribeColdDataBasicInfoResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceAttributeRequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceAttributeResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceConfigRequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceConfigResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceHARequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceHAResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceSSLRequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceSSLResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceTDERequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceTDEResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceTopologyRequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceTopologyResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceViaEndpointRequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceViaEndpointResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstancesRequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstancesResult.h
	include/alibabacloud/polardbx/model/DescribeDBNodePerformanceRequest.h
	include/alibabacloud/polardbx/model/DescribeDBNodePerformanceResult.h
	include/alibabacloud/polardbx/model/DescribeDbListRequest.h
	include/alibabacloud/polardbx/model/DescribeDbListResult.h
	include/alibabacloud/polardbx/model/DescribeDistributeTableListRequest.h
	include/alibabacloud/polardbx/model/DescribeDistributeTableListResult.h
	include/alibabacloud/polardbx/model/DescribeEventsRequest.h
	include/alibabacloud/polardbx/model/DescribeEventsResult.h
	include/alibabacloud/polardbx/model/DescribeParameterTemplatesRequest.h
	include/alibabacloud/polardbx/model/DescribeParameterTemplatesResult.h
	include/alibabacloud/polardbx/model/DescribeParametersRequest.h
	include/alibabacloud/polardbx/model/DescribeParametersResult.h
	include/alibabacloud/polardbx/model/DescribeRegionsRequest.h
	include/alibabacloud/polardbx/model/DescribeRegionsResult.h
	include/alibabacloud/polardbx/model/DescribeScaleOutMigrateTaskListRequest.h
	include/alibabacloud/polardbx/model/DescribeScaleOutMigrateTaskListResult.h
	include/alibabacloud/polardbx/model/DescribeSecurityIpsRequest.h
	include/alibabacloud/polardbx/model/DescribeSecurityIpsResult.h
	include/alibabacloud/polardbx/model/DescribeTagsRequest.h
	include/alibabacloud/polardbx/model/DescribeTagsResult.h
	include/alibabacloud/polardbx/model/DescribeTasksRequest.h
	include/alibabacloud/polardbx/model/DescribeTasksResult.h
	include/alibabacloud/polardbx/model/DescribeUserEncryptionKeyListRequest.h
	include/alibabacloud/polardbx/model/DescribeUserEncryptionKeyListResult.h
	include/alibabacloud/polardbx/model/DisableRightsSeparationRequest.h
	include/alibabacloud/polardbx/model/DisableRightsSeparationResult.h
	include/alibabacloud/polardbx/model/EnableRightsSeparationRequest.h
	include/alibabacloud/polardbx/model/EnableRightsSeparationResult.h
	include/alibabacloud/polardbx/model/ListTagResourcesRequest.h
	include/alibabacloud/polardbx/model/ListTagResourcesResult.h
	include/alibabacloud/polardbx/model/ModifyAccountDescriptionRequest.h
	include/alibabacloud/polardbx/model/ModifyAccountDescriptionResult.h
	include/alibabacloud/polardbx/model/ModifyAccountPrivilegeRequest.h
	include/alibabacloud/polardbx/model/ModifyAccountPrivilegeResult.h
	include/alibabacloud/polardbx/model/ModifyActiveOperationMaintainConfRequest.h
	include/alibabacloud/polardbx/model/ModifyActiveOperationMaintainConfResult.h
	include/alibabacloud/polardbx/model/ModifyActiveOperationTasksRequest.h
	include/alibabacloud/polardbx/model/ModifyActiveOperationTasksResult.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceClassRequest.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceClassResult.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceConfigRequest.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceConfigResult.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceConnectionStringRequest.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceConnectionStringResult.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceDescriptionRequest.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceDescriptionResult.h
	include/alibabacloud/polardbx/model/ModifyDatabaseDescriptionRequest.h
	include/alibabacloud/polardbx/model/ModifyDatabaseDescriptionResult.h
	include/alibabacloud/polardbx/model/ModifyParameterRequest.h
	include/alibabacloud/polardbx/model/ModifyParameterResult.h
	include/alibabacloud/polardbx/model/ModifySecurityIpsRequest.h
	include/alibabacloud/polardbx/model/ModifySecurityIpsResult.h
	include/alibabacloud/polardbx/model/ReleaseColdDataVolumeRequest.h
	include/alibabacloud/polardbx/model/ReleaseColdDataVolumeResult.h
	include/alibabacloud/polardbx/model/ReleaseInstancePublicConnectionRequest.h
	include/alibabacloud/polardbx/model/ReleaseInstancePublicConnectionResult.h
	include/alibabacloud/polardbx/model/ResetAccountPasswordRequest.h
	include/alibabacloud/polardbx/model/ResetAccountPasswordResult.h
	include/alibabacloud/polardbx/model/RestartDBInstanceRequest.h
	include/alibabacloud/polardbx/model/RestartDBInstanceResult.h
	include/alibabacloud/polardbx/model/SwitchDBInstanceHARequest.h
	include/alibabacloud/polardbx/model/SwitchDBInstanceHAResult.h
	include/alibabacloud/polardbx/model/TagResourcesRequest.h
	include/alibabacloud/polardbx/model/TagResourcesResult.h
	include/alibabacloud/polardbx/model/UntagResourcesRequest.h
	include/alibabacloud/polardbx/model/UntagResourcesResult.h
	include/alibabacloud/polardbx/model/UpdateBackupPolicyRequest.h
	include/alibabacloud/polardbx/model/UpdateBackupPolicyResult.h
	include/alibabacloud/polardbx/model/UpdateDBInstanceSSLRequest.h
	include/alibabacloud/polardbx/model/UpdateDBInstanceSSLResult.h
	include/alibabacloud/polardbx/model/UpdateDBInstanceTDERequest.h
	include/alibabacloud/polardbx/model/UpdateDBInstanceTDEResult.h
	include/alibabacloud/polardbx/model/UpdatePolarDBXInstanceNodeRequest.h
	include/alibabacloud/polardbx/model/UpdatePolarDBXInstanceNodeResult.h
	include/alibabacloud/polardbx/model/UpgradeDBInstanceKernelVersionRequest.h
	include/alibabacloud/polardbx/model/UpgradeDBInstanceKernelVersionResult.h )

set(polardbx_src 
	src/PolardbxClient.cc
	src/model/AlignStoragePrimaryAzoneRequest.cc
	src/model/AlignStoragePrimaryAzoneResult.cc
	src/model/AllocateColdDataVolumeRequest.cc
	src/model/AllocateColdDataVolumeResult.cc
	src/model/AllocateInstancePublicConnectionRequest.cc
	src/model/AllocateInstancePublicConnectionResult.cc
	src/model/CancelActiveOperationTasksRequest.cc
	src/model/CancelActiveOperationTasksResult.cc
	src/model/ChangeResourceGroupRequest.cc
	src/model/ChangeResourceGroupResult.cc
	src/model/CheckCloudResourceAuthorizedRequest.cc
	src/model/CheckCloudResourceAuthorizedResult.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateBackupRequest.cc
	src/model/CreateBackupResult.cc
	src/model/CreateDBRequest.cc
	src/model/CreateDBResult.cc
	src/model/CreateDBInstanceRequest.cc
	src/model/CreateDBInstanceResult.cc
	src/model/CreateSuperAccountRequest.cc
	src/model/CreateSuperAccountResult.cc
	src/model/DeleteAccountRequest.cc
	src/model/DeleteAccountResult.cc
	src/model/DeleteDBRequest.cc
	src/model/DeleteDBResult.cc
	src/model/DeleteDBInstanceRequest.cc
	src/model/DeleteDBInstanceResult.cc
	src/model/DescribeAccountListRequest.cc
	src/model/DescribeAccountListResult.cc
	src/model/DescribeActiveOperationMaintainConfRequest.cc
	src/model/DescribeActiveOperationMaintainConfResult.cc
	src/model/DescribeActiveOperationTaskCountRequest.cc
	src/model/DescribeActiveOperationTaskCountResult.cc
	src/model/DescribeActiveOperationTasksRequest.cc
	src/model/DescribeActiveOperationTasksResult.cc
	src/model/DescribeArchiveTableListRequest.cc
	src/model/DescribeArchiveTableListResult.cc
	src/model/DescribeBackupPolicyRequest.cc
	src/model/DescribeBackupPolicyResult.cc
	src/model/DescribeBackupSetRequest.cc
	src/model/DescribeBackupSetResult.cc
	src/model/DescribeBackupSetListRequest.cc
	src/model/DescribeBackupSetListResult.cc
	src/model/DescribeBinaryLogListRequest.cc
	src/model/DescribeBinaryLogListResult.cc
	src/model/DescribeCharacterSetRequest.cc
	src/model/DescribeCharacterSetResult.cc
	src/model/DescribeColdDataBasicInfoRequest.cc
	src/model/DescribeColdDataBasicInfoResult.cc
	src/model/DescribeDBInstanceAttributeRequest.cc
	src/model/DescribeDBInstanceAttributeResult.cc
	src/model/DescribeDBInstanceConfigRequest.cc
	src/model/DescribeDBInstanceConfigResult.cc
	src/model/DescribeDBInstanceHARequest.cc
	src/model/DescribeDBInstanceHAResult.cc
	src/model/DescribeDBInstanceSSLRequest.cc
	src/model/DescribeDBInstanceSSLResult.cc
	src/model/DescribeDBInstanceTDERequest.cc
	src/model/DescribeDBInstanceTDEResult.cc
	src/model/DescribeDBInstanceTopologyRequest.cc
	src/model/DescribeDBInstanceTopologyResult.cc
	src/model/DescribeDBInstanceViaEndpointRequest.cc
	src/model/DescribeDBInstanceViaEndpointResult.cc
	src/model/DescribeDBInstancesRequest.cc
	src/model/DescribeDBInstancesResult.cc
	src/model/DescribeDBNodePerformanceRequest.cc
	src/model/DescribeDBNodePerformanceResult.cc
	src/model/DescribeDbListRequest.cc
	src/model/DescribeDbListResult.cc
	src/model/DescribeDistributeTableListRequest.cc
	src/model/DescribeDistributeTableListResult.cc
	src/model/DescribeEventsRequest.cc
	src/model/DescribeEventsResult.cc
	src/model/DescribeParameterTemplatesRequest.cc
	src/model/DescribeParameterTemplatesResult.cc
	src/model/DescribeParametersRequest.cc
	src/model/DescribeParametersResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeScaleOutMigrateTaskListRequest.cc
	src/model/DescribeScaleOutMigrateTaskListResult.cc
	src/model/DescribeSecurityIpsRequest.cc
	src/model/DescribeSecurityIpsResult.cc
	src/model/DescribeTagsRequest.cc
	src/model/DescribeTagsResult.cc
	src/model/DescribeTasksRequest.cc
	src/model/DescribeTasksResult.cc
	src/model/DescribeUserEncryptionKeyListRequest.cc
	src/model/DescribeUserEncryptionKeyListResult.cc
	src/model/DisableRightsSeparationRequest.cc
	src/model/DisableRightsSeparationResult.cc
	src/model/EnableRightsSeparationRequest.cc
	src/model/EnableRightsSeparationResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyAccountDescriptionRequest.cc
	src/model/ModifyAccountDescriptionResult.cc
	src/model/ModifyAccountPrivilegeRequest.cc
	src/model/ModifyAccountPrivilegeResult.cc
	src/model/ModifyActiveOperationMaintainConfRequest.cc
	src/model/ModifyActiveOperationMaintainConfResult.cc
	src/model/ModifyActiveOperationTasksRequest.cc
	src/model/ModifyActiveOperationTasksResult.cc
	src/model/ModifyDBInstanceClassRequest.cc
	src/model/ModifyDBInstanceClassResult.cc
	src/model/ModifyDBInstanceConfigRequest.cc
	src/model/ModifyDBInstanceConfigResult.cc
	src/model/ModifyDBInstanceConnectionStringRequest.cc
	src/model/ModifyDBInstanceConnectionStringResult.cc
	src/model/ModifyDBInstanceDescriptionRequest.cc
	src/model/ModifyDBInstanceDescriptionResult.cc
	src/model/ModifyDatabaseDescriptionRequest.cc
	src/model/ModifyDatabaseDescriptionResult.cc
	src/model/ModifyParameterRequest.cc
	src/model/ModifyParameterResult.cc
	src/model/ModifySecurityIpsRequest.cc
	src/model/ModifySecurityIpsResult.cc
	src/model/ReleaseColdDataVolumeRequest.cc
	src/model/ReleaseColdDataVolumeResult.cc
	src/model/ReleaseInstancePublicConnectionRequest.cc
	src/model/ReleaseInstancePublicConnectionResult.cc
	src/model/ResetAccountPasswordRequest.cc
	src/model/ResetAccountPasswordResult.cc
	src/model/RestartDBInstanceRequest.cc
	src/model/RestartDBInstanceResult.cc
	src/model/SwitchDBInstanceHARequest.cc
	src/model/SwitchDBInstanceHAResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateBackupPolicyRequest.cc
	src/model/UpdateBackupPolicyResult.cc
	src/model/UpdateDBInstanceSSLRequest.cc
	src/model/UpdateDBInstanceSSLResult.cc
	src/model/UpdateDBInstanceTDERequest.cc
	src/model/UpdateDBInstanceTDEResult.cc
	src/model/UpdatePolarDBXInstanceNodeRequest.cc
	src/model/UpdatePolarDBXInstanceNodeResult.cc
	src/model/UpgradeDBInstanceKernelVersionRequest.cc
	src/model/UpgradeDBInstanceKernelVersionResult.cc )

add_library(polardbx ${LIB_TYPE}
	${polardbx_public_header}
	${polardbx_public_header_model}
	${polardbx_src})

set_target_properties(polardbx
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}polardbx
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(polardbx
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_POLARDBX_LIBRARY)
endif()

target_include_directories(polardbx
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(polardbx
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(polardbx
		jsoncpp)
	target_include_directories(polardbx
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(polardbx
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(polardbx
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(polardbx
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(polardbx
		jsoncpp)
endif()

install(FILES ${polardbx_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/polardbx)
install(FILES ${polardbx_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/polardbx/model)
install(TARGETS polardbx
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)