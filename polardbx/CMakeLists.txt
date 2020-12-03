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
	include/alibabacloud/polardbx/model/AllocateInstancePublicConnectionRequest.h
	include/alibabacloud/polardbx/model/AllocateInstancePublicConnectionResult.h
	include/alibabacloud/polardbx/model/CancelPolarxOrderRequest.h
	include/alibabacloud/polardbx/model/CancelPolarxOrderResult.h
	include/alibabacloud/polardbx/model/CheckHealthRequest.h
	include/alibabacloud/polardbx/model/CheckHealthResult.h
	include/alibabacloud/polardbx/model/CreateAccountRequest.h
	include/alibabacloud/polardbx/model/CreateAccountResult.h
	include/alibabacloud/polardbx/model/CreateDBRequest.h
	include/alibabacloud/polardbx/model/CreateDBResult.h
	include/alibabacloud/polardbx/model/CreateDBInstanceRequest.h
	include/alibabacloud/polardbx/model/CreateDBInstanceResult.h
	include/alibabacloud/polardbx/model/CreatePolarxInstanceRequest.h
	include/alibabacloud/polardbx/model/CreatePolarxInstanceResult.h
	include/alibabacloud/polardbx/model/CreatePolarxOrderRequest.h
	include/alibabacloud/polardbx/model/CreatePolarxOrderResult.h
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
	include/alibabacloud/polardbx/model/DescribeCharacterSetRequest.h
	include/alibabacloud/polardbx/model/DescribeCharacterSetResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceAttributeRequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceAttributeResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceConfigRequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstanceConfigResult.h
	include/alibabacloud/polardbx/model/DescribeDBInstancesRequest.h
	include/alibabacloud/polardbx/model/DescribeDBInstancesResult.h
	include/alibabacloud/polardbx/model/DescribeDbListRequest.h
	include/alibabacloud/polardbx/model/DescribeDbListResult.h
	include/alibabacloud/polardbx/model/DescribeDistributeTableListRequest.h
	include/alibabacloud/polardbx/model/DescribeDistributeTableListResult.h
	include/alibabacloud/polardbx/model/DescribeInstanceDbPerformanceRequest.h
	include/alibabacloud/polardbx/model/DescribeInstanceDbPerformanceResult.h
	include/alibabacloud/polardbx/model/DescribeInstancePerformanceRequest.h
	include/alibabacloud/polardbx/model/DescribeInstancePerformanceResult.h
	include/alibabacloud/polardbx/model/DescribeInstanceStoragePerformanceRequest.h
	include/alibabacloud/polardbx/model/DescribeInstanceStoragePerformanceResult.h
	include/alibabacloud/polardbx/model/DescribeModifyParameterLogRequest.h
	include/alibabacloud/polardbx/model/DescribeModifyParameterLogResult.h
	include/alibabacloud/polardbx/model/DescribeParameterTemplatesRequest.h
	include/alibabacloud/polardbx/model/DescribeParameterTemplatesResult.h
	include/alibabacloud/polardbx/model/DescribeParametersRequest.h
	include/alibabacloud/polardbx/model/DescribeParametersResult.h
	include/alibabacloud/polardbx/model/DescribePolarxDbInstancesRequest.h
	include/alibabacloud/polardbx/model/DescribePolarxDbInstancesResult.h
	include/alibabacloud/polardbx/model/DescribeRegionsRequest.h
	include/alibabacloud/polardbx/model/DescribeRegionsResult.h
	include/alibabacloud/polardbx/model/DescribeScaleOutMigrateTaskListRequest.h
	include/alibabacloud/polardbx/model/DescribeScaleOutMigrateTaskListResult.h
	include/alibabacloud/polardbx/model/DescribeSecurityIpsRequest.h
	include/alibabacloud/polardbx/model/DescribeSecurityIpsResult.h
	include/alibabacloud/polardbx/model/DescribeSqlAuditInfoRequest.h
	include/alibabacloud/polardbx/model/DescribeSqlAuditInfoResult.h
	include/alibabacloud/polardbx/model/DescribeTableDetailRequest.h
	include/alibabacloud/polardbx/model/DescribeTableDetailResult.h
	include/alibabacloud/polardbx/model/DescribeTasksRequest.h
	include/alibabacloud/polardbx/model/DescribeTasksResult.h
	include/alibabacloud/polardbx/model/DisableSqlAuditRequest.h
	include/alibabacloud/polardbx/model/DisableSqlAuditResult.h
	include/alibabacloud/polardbx/model/EnableSqlAuditRequest.h
	include/alibabacloud/polardbx/model/EnableSqlAuditResult.h
	include/alibabacloud/polardbx/model/GetPolarXPriceRequest.h
	include/alibabacloud/polardbx/model/GetPolarXPriceResult.h
	include/alibabacloud/polardbx/model/GetPolarxCommodityRequest.h
	include/alibabacloud/polardbx/model/GetPolarxCommodityResult.h
	include/alibabacloud/polardbx/model/ModifyAccountDescriptionRequest.h
	include/alibabacloud/polardbx/model/ModifyAccountDescriptionResult.h
	include/alibabacloud/polardbx/model/ModifyAccountPrivilegeRequest.h
	include/alibabacloud/polardbx/model/ModifyAccountPrivilegeResult.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceClassRequest.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceClassResult.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceConfigRequest.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceConfigResult.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceDescriptionRequest.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceDescriptionResult.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceMaintainTimeRequest.h
	include/alibabacloud/polardbx/model/ModifyDBInstanceMaintainTimeResult.h
	include/alibabacloud/polardbx/model/ModifyDatabaseDescriptionRequest.h
	include/alibabacloud/polardbx/model/ModifyDatabaseDescriptionResult.h
	include/alibabacloud/polardbx/model/ModifyParameterRequest.h
	include/alibabacloud/polardbx/model/ModifyParameterResult.h
	include/alibabacloud/polardbx/model/ModifySecurityIpsRequest.h
	include/alibabacloud/polardbx/model/ModifySecurityIpsResult.h
	include/alibabacloud/polardbx/model/ReleaseInstancePublicConnectionRequest.h
	include/alibabacloud/polardbx/model/ReleaseInstancePublicConnectionResult.h
	include/alibabacloud/polardbx/model/ResetAccountPasswordRequest.h
	include/alibabacloud/polardbx/model/ResetAccountPasswordResult.h
	include/alibabacloud/polardbx/model/ResetPolarxPgAccountPasswordRequest.h
	include/alibabacloud/polardbx/model/ResetPolarxPgAccountPasswordResult.h
	include/alibabacloud/polardbx/model/RestartDBInstanceRequest.h
	include/alibabacloud/polardbx/model/RestartDBInstanceResult.h
	include/alibabacloud/polardbx/model/RetryPolarxOrderRequest.h
	include/alibabacloud/polardbx/model/RetryPolarxOrderResult.h
	include/alibabacloud/polardbx/model/UpdatePolarDBXInstanceNodeRequest.h
	include/alibabacloud/polardbx/model/UpdatePolarDBXInstanceNodeResult.h
	include/alibabacloud/polardbx/model/UpgradeDBInstanceKernelVersionRequest.h
	include/alibabacloud/polardbx/model/UpgradeDBInstanceKernelVersionResult.h )

set(polardbx_src 
	src/PolardbxClient.cc
	src/model/AllocateInstancePublicConnectionRequest.cc
	src/model/AllocateInstancePublicConnectionResult.cc
	src/model/CancelPolarxOrderRequest.cc
	src/model/CancelPolarxOrderResult.cc
	src/model/CheckHealthRequest.cc
	src/model/CheckHealthResult.cc
	src/model/CreateAccountRequest.cc
	src/model/CreateAccountResult.cc
	src/model/CreateDBRequest.cc
	src/model/CreateDBResult.cc
	src/model/CreateDBInstanceRequest.cc
	src/model/CreateDBInstanceResult.cc
	src/model/CreatePolarxInstanceRequest.cc
	src/model/CreatePolarxInstanceResult.cc
	src/model/CreatePolarxOrderRequest.cc
	src/model/CreatePolarxOrderResult.cc
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
	src/model/DescribeCharacterSetRequest.cc
	src/model/DescribeCharacterSetResult.cc
	src/model/DescribeDBInstanceAttributeRequest.cc
	src/model/DescribeDBInstanceAttributeResult.cc
	src/model/DescribeDBInstanceConfigRequest.cc
	src/model/DescribeDBInstanceConfigResult.cc
	src/model/DescribeDBInstancesRequest.cc
	src/model/DescribeDBInstancesResult.cc
	src/model/DescribeDbListRequest.cc
	src/model/DescribeDbListResult.cc
	src/model/DescribeDistributeTableListRequest.cc
	src/model/DescribeDistributeTableListResult.cc
	src/model/DescribeInstanceDbPerformanceRequest.cc
	src/model/DescribeInstanceDbPerformanceResult.cc
	src/model/DescribeInstancePerformanceRequest.cc
	src/model/DescribeInstancePerformanceResult.cc
	src/model/DescribeInstanceStoragePerformanceRequest.cc
	src/model/DescribeInstanceStoragePerformanceResult.cc
	src/model/DescribeModifyParameterLogRequest.cc
	src/model/DescribeModifyParameterLogResult.cc
	src/model/DescribeParameterTemplatesRequest.cc
	src/model/DescribeParameterTemplatesResult.cc
	src/model/DescribeParametersRequest.cc
	src/model/DescribeParametersResult.cc
	src/model/DescribePolarxDbInstancesRequest.cc
	src/model/DescribePolarxDbInstancesResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeScaleOutMigrateTaskListRequest.cc
	src/model/DescribeScaleOutMigrateTaskListResult.cc
	src/model/DescribeSecurityIpsRequest.cc
	src/model/DescribeSecurityIpsResult.cc
	src/model/DescribeSqlAuditInfoRequest.cc
	src/model/DescribeSqlAuditInfoResult.cc
	src/model/DescribeTableDetailRequest.cc
	src/model/DescribeTableDetailResult.cc
	src/model/DescribeTasksRequest.cc
	src/model/DescribeTasksResult.cc
	src/model/DisableSqlAuditRequest.cc
	src/model/DisableSqlAuditResult.cc
	src/model/EnableSqlAuditRequest.cc
	src/model/EnableSqlAuditResult.cc
	src/model/GetPolarXPriceRequest.cc
	src/model/GetPolarXPriceResult.cc
	src/model/GetPolarxCommodityRequest.cc
	src/model/GetPolarxCommodityResult.cc
	src/model/ModifyAccountDescriptionRequest.cc
	src/model/ModifyAccountDescriptionResult.cc
	src/model/ModifyAccountPrivilegeRequest.cc
	src/model/ModifyAccountPrivilegeResult.cc
	src/model/ModifyDBInstanceClassRequest.cc
	src/model/ModifyDBInstanceClassResult.cc
	src/model/ModifyDBInstanceConfigRequest.cc
	src/model/ModifyDBInstanceConfigResult.cc
	src/model/ModifyDBInstanceDescriptionRequest.cc
	src/model/ModifyDBInstanceDescriptionResult.cc
	src/model/ModifyDBInstanceMaintainTimeRequest.cc
	src/model/ModifyDBInstanceMaintainTimeResult.cc
	src/model/ModifyDatabaseDescriptionRequest.cc
	src/model/ModifyDatabaseDescriptionResult.cc
	src/model/ModifyParameterRequest.cc
	src/model/ModifyParameterResult.cc
	src/model/ModifySecurityIpsRequest.cc
	src/model/ModifySecurityIpsResult.cc
	src/model/ReleaseInstancePublicConnectionRequest.cc
	src/model/ReleaseInstancePublicConnectionResult.cc
	src/model/ResetAccountPasswordRequest.cc
	src/model/ResetAccountPasswordResult.cc
	src/model/ResetPolarxPgAccountPasswordRequest.cc
	src/model/ResetPolarxPgAccountPasswordResult.cc
	src/model/RestartDBInstanceRequest.cc
	src/model/RestartDBInstanceResult.cc
	src/model/RetryPolarxOrderRequest.cc
	src/model/RetryPolarxOrderResult.cc
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