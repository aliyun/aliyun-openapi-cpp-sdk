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

set(selectdb_public_header 
	include/alibabacloud/selectdb/SelectdbClient.h
	include/alibabacloud/selectdb/SelectdbExport.h )

set(selectdb_public_header_model 
	include/alibabacloud/selectdb/model/AllocateInstancePublicConnectionRequest.h
	include/alibabacloud/selectdb/model/AllocateInstancePublicConnectionResult.h
	include/alibabacloud/selectdb/model/CheckCreateDBInstanceRequest.h
	include/alibabacloud/selectdb/model/CheckCreateDBInstanceResult.h
	include/alibabacloud/selectdb/model/CheckServiceLinkedRoleRequest.h
	include/alibabacloud/selectdb/model/CheckServiceLinkedRoleResult.h
	include/alibabacloud/selectdb/model/CreateDBClusterRequest.h
	include/alibabacloud/selectdb/model/CreateDBClusterResult.h
	include/alibabacloud/selectdb/model/CreateDBInstanceRequest.h
	include/alibabacloud/selectdb/model/CreateDBInstanceResult.h
	include/alibabacloud/selectdb/model/CreateElasticRuleRequest.h
	include/alibabacloud/selectdb/model/CreateElasticRuleResult.h
	include/alibabacloud/selectdb/model/CreateServiceLinkedRoleForSelectDBRequest.h
	include/alibabacloud/selectdb/model/CreateServiceLinkedRoleForSelectDBResult.h
	include/alibabacloud/selectdb/model/DeleteDBClusterRequest.h
	include/alibabacloud/selectdb/model/DeleteDBClusterResult.h
	include/alibabacloud/selectdb/model/DeleteDBInstanceRequest.h
	include/alibabacloud/selectdb/model/DeleteDBInstanceResult.h
	include/alibabacloud/selectdb/model/DeleteElasticRuleRequest.h
	include/alibabacloud/selectdb/model/DeleteElasticRuleResult.h
	include/alibabacloud/selectdb/model/DescribeAllDBInstanceClassRequest.h
	include/alibabacloud/selectdb/model/DescribeAllDBInstanceClassResult.h
	include/alibabacloud/selectdb/model/DescribeDBClusterConfigRequest.h
	include/alibabacloud/selectdb/model/DescribeDBClusterConfigResult.h
	include/alibabacloud/selectdb/model/DescribeDBClusterConfigChangeLogsRequest.h
	include/alibabacloud/selectdb/model/DescribeDBClusterConfigChangeLogsResult.h
	include/alibabacloud/selectdb/model/DescribeDBInstanceAttributeRequest.h
	include/alibabacloud/selectdb/model/DescribeDBInstanceAttributeResult.h
	include/alibabacloud/selectdb/model/DescribeDBInstanceNetInfoRequest.h
	include/alibabacloud/selectdb/model/DescribeDBInstanceNetInfoResult.h
	include/alibabacloud/selectdb/model/DescribeDBInstancesRequest.h
	include/alibabacloud/selectdb/model/DescribeDBInstancesResult.h
	include/alibabacloud/selectdb/model/DescribeElasticRulesRequest.h
	include/alibabacloud/selectdb/model/DescribeElasticRulesResult.h
	include/alibabacloud/selectdb/model/DescribeSecurityIPListRequest.h
	include/alibabacloud/selectdb/model/DescribeSecurityIPListResult.h
	include/alibabacloud/selectdb/model/EnDisableScalingRulesRequest.h
	include/alibabacloud/selectdb/model/EnDisableScalingRulesResult.h
	include/alibabacloud/selectdb/model/GetCreateBEClusterInquiryRequest.h
	include/alibabacloud/selectdb/model/GetCreateBEClusterInquiryResult.h
	include/alibabacloud/selectdb/model/GetModifyBEClusterInquiryRequest.h
	include/alibabacloud/selectdb/model/GetModifyBEClusterInquiryResult.h
	include/alibabacloud/selectdb/model/ModifyBEClusterAttributeRequest.h
	include/alibabacloud/selectdb/model/ModifyBEClusterAttributeResult.h
	include/alibabacloud/selectdb/model/ModifyDBClusterRequest.h
	include/alibabacloud/selectdb/model/ModifyDBClusterResult.h
	include/alibabacloud/selectdb/model/ModifyDBClusterConfigRequest.h
	include/alibabacloud/selectdb/model/ModifyDBClusterConfigResult.h
	include/alibabacloud/selectdb/model/ModifyDBInstanceAttributeRequest.h
	include/alibabacloud/selectdb/model/ModifyDBInstanceAttributeResult.h
	include/alibabacloud/selectdb/model/ModifyElasticRuleRequest.h
	include/alibabacloud/selectdb/model/ModifyElasticRuleResult.h
	include/alibabacloud/selectdb/model/ModifySecurityIPListRequest.h
	include/alibabacloud/selectdb/model/ModifySecurityIPListResult.h
	include/alibabacloud/selectdb/model/ReleaseInstancePublicConnectionRequest.h
	include/alibabacloud/selectdb/model/ReleaseInstancePublicConnectionResult.h
	include/alibabacloud/selectdb/model/ResetAccountPasswordRequest.h
	include/alibabacloud/selectdb/model/ResetAccountPasswordResult.h
	include/alibabacloud/selectdb/model/RestartDBClusterRequest.h
	include/alibabacloud/selectdb/model/RestartDBClusterResult.h
	include/alibabacloud/selectdb/model/StartBEClusterRequest.h
	include/alibabacloud/selectdb/model/StartBEClusterResult.h
	include/alibabacloud/selectdb/model/StopBEClusterRequest.h
	include/alibabacloud/selectdb/model/StopBEClusterResult.h
	include/alibabacloud/selectdb/model/UpgradeDBInstanceEngineVersionRequest.h
	include/alibabacloud/selectdb/model/UpgradeDBInstanceEngineVersionResult.h )

set(selectdb_src 
	src/SelectdbClient.cc
	src/model/AllocateInstancePublicConnectionRequest.cc
	src/model/AllocateInstancePublicConnectionResult.cc
	src/model/CheckCreateDBInstanceRequest.cc
	src/model/CheckCreateDBInstanceResult.cc
	src/model/CheckServiceLinkedRoleRequest.cc
	src/model/CheckServiceLinkedRoleResult.cc
	src/model/CreateDBClusterRequest.cc
	src/model/CreateDBClusterResult.cc
	src/model/CreateDBInstanceRequest.cc
	src/model/CreateDBInstanceResult.cc
	src/model/CreateElasticRuleRequest.cc
	src/model/CreateElasticRuleResult.cc
	src/model/CreateServiceLinkedRoleForSelectDBRequest.cc
	src/model/CreateServiceLinkedRoleForSelectDBResult.cc
	src/model/DeleteDBClusterRequest.cc
	src/model/DeleteDBClusterResult.cc
	src/model/DeleteDBInstanceRequest.cc
	src/model/DeleteDBInstanceResult.cc
	src/model/DeleteElasticRuleRequest.cc
	src/model/DeleteElasticRuleResult.cc
	src/model/DescribeAllDBInstanceClassRequest.cc
	src/model/DescribeAllDBInstanceClassResult.cc
	src/model/DescribeDBClusterConfigRequest.cc
	src/model/DescribeDBClusterConfigResult.cc
	src/model/DescribeDBClusterConfigChangeLogsRequest.cc
	src/model/DescribeDBClusterConfigChangeLogsResult.cc
	src/model/DescribeDBInstanceAttributeRequest.cc
	src/model/DescribeDBInstanceAttributeResult.cc
	src/model/DescribeDBInstanceNetInfoRequest.cc
	src/model/DescribeDBInstanceNetInfoResult.cc
	src/model/DescribeDBInstancesRequest.cc
	src/model/DescribeDBInstancesResult.cc
	src/model/DescribeElasticRulesRequest.cc
	src/model/DescribeElasticRulesResult.cc
	src/model/DescribeSecurityIPListRequest.cc
	src/model/DescribeSecurityIPListResult.cc
	src/model/EnDisableScalingRulesRequest.cc
	src/model/EnDisableScalingRulesResult.cc
	src/model/GetCreateBEClusterInquiryRequest.cc
	src/model/GetCreateBEClusterInquiryResult.cc
	src/model/GetModifyBEClusterInquiryRequest.cc
	src/model/GetModifyBEClusterInquiryResult.cc
	src/model/ModifyBEClusterAttributeRequest.cc
	src/model/ModifyBEClusterAttributeResult.cc
	src/model/ModifyDBClusterRequest.cc
	src/model/ModifyDBClusterResult.cc
	src/model/ModifyDBClusterConfigRequest.cc
	src/model/ModifyDBClusterConfigResult.cc
	src/model/ModifyDBInstanceAttributeRequest.cc
	src/model/ModifyDBInstanceAttributeResult.cc
	src/model/ModifyElasticRuleRequest.cc
	src/model/ModifyElasticRuleResult.cc
	src/model/ModifySecurityIPListRequest.cc
	src/model/ModifySecurityIPListResult.cc
	src/model/ReleaseInstancePublicConnectionRequest.cc
	src/model/ReleaseInstancePublicConnectionResult.cc
	src/model/ResetAccountPasswordRequest.cc
	src/model/ResetAccountPasswordResult.cc
	src/model/RestartDBClusterRequest.cc
	src/model/RestartDBClusterResult.cc
	src/model/StartBEClusterRequest.cc
	src/model/StartBEClusterResult.cc
	src/model/StopBEClusterRequest.cc
	src/model/StopBEClusterResult.cc
	src/model/UpgradeDBInstanceEngineVersionRequest.cc
	src/model/UpgradeDBInstanceEngineVersionResult.cc )

add_library(selectdb ${LIB_TYPE}
	${selectdb_public_header}
	${selectdb_public_header_model}
	${selectdb_src})

set_target_properties(selectdb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}selectdb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(selectdb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SELECTDB_LIBRARY)
endif()

target_include_directories(selectdb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(selectdb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(selectdb
		jsoncpp)
	target_include_directories(selectdb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(selectdb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(selectdb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(selectdb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(selectdb
		jsoncpp)
endif()

install(FILES ${selectdb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/selectdb)
install(FILES ${selectdb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/selectdb/model)
install(TARGETS selectdb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)