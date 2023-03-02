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

set(swas-open_public_header 
	include/alibabacloud/swas-open/SWAS_OPENClient.h
	include/alibabacloud/swas-open/SWAS_OPENExport.h )

set(swas-open_public_header_model 
	include/alibabacloud/swas-open/model/AllocatePublicConnectionRequest.h
	include/alibabacloud/swas-open/model/AllocatePublicConnectionResult.h
	include/alibabacloud/swas-open/model/CreateCustomImageRequest.h
	include/alibabacloud/swas-open/model/CreateCustomImageResult.h
	include/alibabacloud/swas-open/model/CreateFirewallRuleRequest.h
	include/alibabacloud/swas-open/model/CreateFirewallRuleResult.h
	include/alibabacloud/swas-open/model/CreateInstancesRequest.h
	include/alibabacloud/swas-open/model/CreateInstancesResult.h
	include/alibabacloud/swas-open/model/CreateSnapshotRequest.h
	include/alibabacloud/swas-open/model/CreateSnapshotResult.h
	include/alibabacloud/swas-open/model/DeleteCustomImageRequest.h
	include/alibabacloud/swas-open/model/DeleteCustomImageResult.h
	include/alibabacloud/swas-open/model/DeleteFirewallRuleRequest.h
	include/alibabacloud/swas-open/model/DeleteFirewallRuleResult.h
	include/alibabacloud/swas-open/model/DeleteSnapshotRequest.h
	include/alibabacloud/swas-open/model/DeleteSnapshotResult.h
	include/alibabacloud/swas-open/model/DescribeCloudAssistantStatusRequest.h
	include/alibabacloud/swas-open/model/DescribeCloudAssistantStatusResult.h
	include/alibabacloud/swas-open/model/DescribeDatabaseErrorLogsRequest.h
	include/alibabacloud/swas-open/model/DescribeDatabaseErrorLogsResult.h
	include/alibabacloud/swas-open/model/DescribeDatabaseInstanceMetricDataRequest.h
	include/alibabacloud/swas-open/model/DescribeDatabaseInstanceMetricDataResult.h
	include/alibabacloud/swas-open/model/DescribeDatabaseInstanceParametersRequest.h
	include/alibabacloud/swas-open/model/DescribeDatabaseInstanceParametersResult.h
	include/alibabacloud/swas-open/model/DescribeDatabaseInstancesRequest.h
	include/alibabacloud/swas-open/model/DescribeDatabaseInstancesResult.h
	include/alibabacloud/swas-open/model/DescribeDatabaseSlowLogRecordsRequest.h
	include/alibabacloud/swas-open/model/DescribeDatabaseSlowLogRecordsResult.h
	include/alibabacloud/swas-open/model/DescribeInvocationResultRequest.h
	include/alibabacloud/swas-open/model/DescribeInvocationResultResult.h
	include/alibabacloud/swas-open/model/DescribeInvocationsRequest.h
	include/alibabacloud/swas-open/model/DescribeInvocationsResult.h
	include/alibabacloud/swas-open/model/InstallCloudAssistantRequest.h
	include/alibabacloud/swas-open/model/InstallCloudAssistantResult.h
	include/alibabacloud/swas-open/model/ListDisksRequest.h
	include/alibabacloud/swas-open/model/ListDisksResult.h
	include/alibabacloud/swas-open/model/ListFirewallRulesRequest.h
	include/alibabacloud/swas-open/model/ListFirewallRulesResult.h
	include/alibabacloud/swas-open/model/ListImagesRequest.h
	include/alibabacloud/swas-open/model/ListImagesResult.h
	include/alibabacloud/swas-open/model/ListInstancePlansModificationRequest.h
	include/alibabacloud/swas-open/model/ListInstancePlansModificationResult.h
	include/alibabacloud/swas-open/model/ListInstancesRequest.h
	include/alibabacloud/swas-open/model/ListInstancesResult.h
	include/alibabacloud/swas-open/model/ListInstancesTrafficPackagesRequest.h
	include/alibabacloud/swas-open/model/ListInstancesTrafficPackagesResult.h
	include/alibabacloud/swas-open/model/ListPlansRequest.h
	include/alibabacloud/swas-open/model/ListPlansResult.h
	include/alibabacloud/swas-open/model/ListRegionsRequest.h
	include/alibabacloud/swas-open/model/ListRegionsResult.h
	include/alibabacloud/swas-open/model/ListSnapshotsRequest.h
	include/alibabacloud/swas-open/model/ListSnapshotsResult.h
	include/alibabacloud/swas-open/model/LoginInstanceRequest.h
	include/alibabacloud/swas-open/model/LoginInstanceResult.h
	include/alibabacloud/swas-open/model/ModifyDatabaseInstanceDescriptionRequest.h
	include/alibabacloud/swas-open/model/ModifyDatabaseInstanceDescriptionResult.h
	include/alibabacloud/swas-open/model/ModifyDatabaseInstanceParameterRequest.h
	include/alibabacloud/swas-open/model/ModifyDatabaseInstanceParameterResult.h
	include/alibabacloud/swas-open/model/ModifyImageShareStatusRequest.h
	include/alibabacloud/swas-open/model/ModifyImageShareStatusResult.h
	include/alibabacloud/swas-open/model/RebootInstanceRequest.h
	include/alibabacloud/swas-open/model/RebootInstanceResult.h
	include/alibabacloud/swas-open/model/ReleasePublicConnectionRequest.h
	include/alibabacloud/swas-open/model/ReleasePublicConnectionResult.h
	include/alibabacloud/swas-open/model/RenewInstanceRequest.h
	include/alibabacloud/swas-open/model/RenewInstanceResult.h
	include/alibabacloud/swas-open/model/ResetDatabaseAccountPasswordRequest.h
	include/alibabacloud/swas-open/model/ResetDatabaseAccountPasswordResult.h
	include/alibabacloud/swas-open/model/ResetDiskRequest.h
	include/alibabacloud/swas-open/model/ResetDiskResult.h
	include/alibabacloud/swas-open/model/ResetSystemRequest.h
	include/alibabacloud/swas-open/model/ResetSystemResult.h
	include/alibabacloud/swas-open/model/RestartDatabaseInstanceRequest.h
	include/alibabacloud/swas-open/model/RestartDatabaseInstanceResult.h
	include/alibabacloud/swas-open/model/RunCommandRequest.h
	include/alibabacloud/swas-open/model/RunCommandResult.h
	include/alibabacloud/swas-open/model/StartDatabaseInstanceRequest.h
	include/alibabacloud/swas-open/model/StartDatabaseInstanceResult.h
	include/alibabacloud/swas-open/model/StartInstanceRequest.h
	include/alibabacloud/swas-open/model/StartInstanceResult.h
	include/alibabacloud/swas-open/model/StopDatabaseInstanceRequest.h
	include/alibabacloud/swas-open/model/StopDatabaseInstanceResult.h
	include/alibabacloud/swas-open/model/StopInstanceRequest.h
	include/alibabacloud/swas-open/model/StopInstanceResult.h
	include/alibabacloud/swas-open/model/UpdateInstanceAttributeRequest.h
	include/alibabacloud/swas-open/model/UpdateInstanceAttributeResult.h
	include/alibabacloud/swas-open/model/UpgradeInstanceRequest.h
	include/alibabacloud/swas-open/model/UpgradeInstanceResult.h )

set(swas-open_src 
	src/SWAS-OPENClient.cc
	src/model/AllocatePublicConnectionRequest.cc
	src/model/AllocatePublicConnectionResult.cc
	src/model/CreateCustomImageRequest.cc
	src/model/CreateCustomImageResult.cc
	src/model/CreateFirewallRuleRequest.cc
	src/model/CreateFirewallRuleResult.cc
	src/model/CreateInstancesRequest.cc
	src/model/CreateInstancesResult.cc
	src/model/CreateSnapshotRequest.cc
	src/model/CreateSnapshotResult.cc
	src/model/DeleteCustomImageRequest.cc
	src/model/DeleteCustomImageResult.cc
	src/model/DeleteFirewallRuleRequest.cc
	src/model/DeleteFirewallRuleResult.cc
	src/model/DeleteSnapshotRequest.cc
	src/model/DeleteSnapshotResult.cc
	src/model/DescribeCloudAssistantStatusRequest.cc
	src/model/DescribeCloudAssistantStatusResult.cc
	src/model/DescribeDatabaseErrorLogsRequest.cc
	src/model/DescribeDatabaseErrorLogsResult.cc
	src/model/DescribeDatabaseInstanceMetricDataRequest.cc
	src/model/DescribeDatabaseInstanceMetricDataResult.cc
	src/model/DescribeDatabaseInstanceParametersRequest.cc
	src/model/DescribeDatabaseInstanceParametersResult.cc
	src/model/DescribeDatabaseInstancesRequest.cc
	src/model/DescribeDatabaseInstancesResult.cc
	src/model/DescribeDatabaseSlowLogRecordsRequest.cc
	src/model/DescribeDatabaseSlowLogRecordsResult.cc
	src/model/DescribeInvocationResultRequest.cc
	src/model/DescribeInvocationResultResult.cc
	src/model/DescribeInvocationsRequest.cc
	src/model/DescribeInvocationsResult.cc
	src/model/InstallCloudAssistantRequest.cc
	src/model/InstallCloudAssistantResult.cc
	src/model/ListDisksRequest.cc
	src/model/ListDisksResult.cc
	src/model/ListFirewallRulesRequest.cc
	src/model/ListFirewallRulesResult.cc
	src/model/ListImagesRequest.cc
	src/model/ListImagesResult.cc
	src/model/ListInstancePlansModificationRequest.cc
	src/model/ListInstancePlansModificationResult.cc
	src/model/ListInstancesRequest.cc
	src/model/ListInstancesResult.cc
	src/model/ListInstancesTrafficPackagesRequest.cc
	src/model/ListInstancesTrafficPackagesResult.cc
	src/model/ListPlansRequest.cc
	src/model/ListPlansResult.cc
	src/model/ListRegionsRequest.cc
	src/model/ListRegionsResult.cc
	src/model/ListSnapshotsRequest.cc
	src/model/ListSnapshotsResult.cc
	src/model/LoginInstanceRequest.cc
	src/model/LoginInstanceResult.cc
	src/model/ModifyDatabaseInstanceDescriptionRequest.cc
	src/model/ModifyDatabaseInstanceDescriptionResult.cc
	src/model/ModifyDatabaseInstanceParameterRequest.cc
	src/model/ModifyDatabaseInstanceParameterResult.cc
	src/model/ModifyImageShareStatusRequest.cc
	src/model/ModifyImageShareStatusResult.cc
	src/model/RebootInstanceRequest.cc
	src/model/RebootInstanceResult.cc
	src/model/ReleasePublicConnectionRequest.cc
	src/model/ReleasePublicConnectionResult.cc
	src/model/RenewInstanceRequest.cc
	src/model/RenewInstanceResult.cc
	src/model/ResetDatabaseAccountPasswordRequest.cc
	src/model/ResetDatabaseAccountPasswordResult.cc
	src/model/ResetDiskRequest.cc
	src/model/ResetDiskResult.cc
	src/model/ResetSystemRequest.cc
	src/model/ResetSystemResult.cc
	src/model/RestartDatabaseInstanceRequest.cc
	src/model/RestartDatabaseInstanceResult.cc
	src/model/RunCommandRequest.cc
	src/model/RunCommandResult.cc
	src/model/StartDatabaseInstanceRequest.cc
	src/model/StartDatabaseInstanceResult.cc
	src/model/StartInstanceRequest.cc
	src/model/StartInstanceResult.cc
	src/model/StopDatabaseInstanceRequest.cc
	src/model/StopDatabaseInstanceResult.cc
	src/model/StopInstanceRequest.cc
	src/model/StopInstanceResult.cc
	src/model/UpdateInstanceAttributeRequest.cc
	src/model/UpdateInstanceAttributeResult.cc
	src/model/UpgradeInstanceRequest.cc
	src/model/UpgradeInstanceResult.cc )

add_library(swas-open ${LIB_TYPE}
	${swas-open_public_header}
	${swas-open_public_header_model}
	${swas-open_src})

set_target_properties(swas-open
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}swas-open
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(swas-open
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SWAS_OPEN_LIBRARY)
endif()

target_include_directories(swas-open
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(swas-open
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(swas-open
		jsoncpp)
	target_include_directories(swas-open
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(swas-open
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(swas-open
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(swas-open
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(swas-open
		jsoncpp)
endif()

install(FILES ${swas-open_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/swas-open)
install(FILES ${swas-open_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/swas-open/model)
install(TARGETS swas-open
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)