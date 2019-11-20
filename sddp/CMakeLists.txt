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

set(sddp_public_header 
	include/alibabacloud/sddp/SddpClient.h
	include/alibabacloud/sddp/SddpExport.h )

set(sddp_public_header_model 
	include/alibabacloud/sddp/model/CreateConfigRequest.h
	include/alibabacloud/sddp/model/CreateConfigResult.h
	include/alibabacloud/sddp/model/CreateDataLimitRequest.h
	include/alibabacloud/sddp/model/CreateDataLimitResult.h
	include/alibabacloud/sddp/model/CreateRuleRequest.h
	include/alibabacloud/sddp/model/CreateRuleResult.h
	include/alibabacloud/sddp/model/CreateUserAuthRequest.h
	include/alibabacloud/sddp/model/CreateUserAuthResult.h
	include/alibabacloud/sddp/model/DeleteDataLimitRequest.h
	include/alibabacloud/sddp/model/DeleteDataLimitResult.h
	include/alibabacloud/sddp/model/DeleteRuleRequest.h
	include/alibabacloud/sddp/model/DeleteRuleResult.h
	include/alibabacloud/sddp/model/DescribeAccountDetailRequest.h
	include/alibabacloud/sddp/model/DescribeAccountDetailResult.h
	include/alibabacloud/sddp/model/DescribeAccountsRequest.h
	include/alibabacloud/sddp/model/DescribeAccountsResult.h
	include/alibabacloud/sddp/model/DescribeAuditLogsRequest.h
	include/alibabacloud/sddp/model/DescribeAuditLogsResult.h
	include/alibabacloud/sddp/model/DescribeAuthAccountsRequest.h
	include/alibabacloud/sddp/model/DescribeAuthAccountsResult.h
	include/alibabacloud/sddp/model/DescribeCloudDatabasesRequest.h
	include/alibabacloud/sddp/model/DescribeCloudDatabasesResult.h
	include/alibabacloud/sddp/model/DescribeCloudInstancesRequest.h
	include/alibabacloud/sddp/model/DescribeCloudInstancesResult.h
	include/alibabacloud/sddp/model/DescribeColumnsRequest.h
	include/alibabacloud/sddp/model/DescribeColumnsResult.h
	include/alibabacloud/sddp/model/DescribeConfigsRequest.h
	include/alibabacloud/sddp/model/DescribeConfigsResult.h
	include/alibabacloud/sddp/model/DescribeDataAssetsRequest.h
	include/alibabacloud/sddp/model/DescribeDataAssetsResult.h
	include/alibabacloud/sddp/model/DescribeDataHubConnectorsRequest.h
	include/alibabacloud/sddp/model/DescribeDataHubConnectorsResult.h
	include/alibabacloud/sddp/model/DescribeDataHubProjectsRequest.h
	include/alibabacloud/sddp/model/DescribeDataHubProjectsResult.h
	include/alibabacloud/sddp/model/DescribeDataHubSubscriptionsRequest.h
	include/alibabacloud/sddp/model/DescribeDataHubSubscriptionsResult.h
	include/alibabacloud/sddp/model/DescribeDataHubTopicsRequest.h
	include/alibabacloud/sddp/model/DescribeDataHubTopicsResult.h
	include/alibabacloud/sddp/model/DescribeDataLimitDetailRequest.h
	include/alibabacloud/sddp/model/DescribeDataLimitDetailResult.h
	include/alibabacloud/sddp/model/DescribeDataLimitsRequest.h
	include/alibabacloud/sddp/model/DescribeDataLimitsResult.h
	include/alibabacloud/sddp/model/DescribeDepartsRequest.h
	include/alibabacloud/sddp/model/DescribeDepartsResult.h
	include/alibabacloud/sddp/model/DescribeEventDetailRequest.h
	include/alibabacloud/sddp/model/DescribeEventDetailResult.h
	include/alibabacloud/sddp/model/DescribeEventTypesRequest.h
	include/alibabacloud/sddp/model/DescribeEventTypesResult.h
	include/alibabacloud/sddp/model/DescribeEventsRequest.h
	include/alibabacloud/sddp/model/DescribeEventsResult.h
	include/alibabacloud/sddp/model/DescribeInstancesRequest.h
	include/alibabacloud/sddp/model/DescribeInstancesResult.h
	include/alibabacloud/sddp/model/DescribeOriginalLogsRequest.h
	include/alibabacloud/sddp/model/DescribeOriginalLogsResult.h
	include/alibabacloud/sddp/model/DescribeOssObjectDetailRequest.h
	include/alibabacloud/sddp/model/DescribeOssObjectDetailResult.h
	include/alibabacloud/sddp/model/DescribeOssObjectsRequest.h
	include/alibabacloud/sddp/model/DescribeOssObjectsResult.h
	include/alibabacloud/sddp/model/DescribePackagesRequest.h
	include/alibabacloud/sddp/model/DescribePackagesResult.h
	include/alibabacloud/sddp/model/DescribePrivilegesRequest.h
	include/alibabacloud/sddp/model/DescribePrivilegesResult.h
	include/alibabacloud/sddp/model/DescribeRulesRequest.h
	include/alibabacloud/sddp/model/DescribeRulesResult.h
	include/alibabacloud/sddp/model/DescribeTablesRequest.h
	include/alibabacloud/sddp/model/DescribeTablesResult.h
	include/alibabacloud/sddp/model/DescribeUseFlowRequest.h
	include/alibabacloud/sddp/model/DescribeUseFlowResult.h
	include/alibabacloud/sddp/model/DescribeUserStatusRequest.h
	include/alibabacloud/sddp/model/DescribeUserStatusResult.h
	include/alibabacloud/sddp/model/ModifyDataLimitRequest.h
	include/alibabacloud/sddp/model/ModifyDataLimitResult.h
	include/alibabacloud/sddp/model/ModifyDefaultLevelRequest.h
	include/alibabacloud/sddp/model/ModifyDefaultLevelResult.h
	include/alibabacloud/sddp/model/ModifyEventStatusRequest.h
	include/alibabacloud/sddp/model/ModifyEventStatusResult.h
	include/alibabacloud/sddp/model/ModifyEventTypeStatusRequest.h
	include/alibabacloud/sddp/model/ModifyEventTypeStatusResult.h
	include/alibabacloud/sddp/model/ModifyRuleRequest.h
	include/alibabacloud/sddp/model/ModifyRuleResult.h
	include/alibabacloud/sddp/model/ModifyRuleStatusRequest.h
	include/alibabacloud/sddp/model/ModifyRuleStatusResult.h
	include/alibabacloud/sddp/model/ValidateConnectorRequest.h
	include/alibabacloud/sddp/model/ValidateConnectorResult.h )

set(sddp_src 
	src/SddpClient.cc
	src/model/CreateConfigRequest.cc
	src/model/CreateConfigResult.cc
	src/model/CreateDataLimitRequest.cc
	src/model/CreateDataLimitResult.cc
	src/model/CreateRuleRequest.cc
	src/model/CreateRuleResult.cc
	src/model/CreateUserAuthRequest.cc
	src/model/CreateUserAuthResult.cc
	src/model/DeleteDataLimitRequest.cc
	src/model/DeleteDataLimitResult.cc
	src/model/DeleteRuleRequest.cc
	src/model/DeleteRuleResult.cc
	src/model/DescribeAccountDetailRequest.cc
	src/model/DescribeAccountDetailResult.cc
	src/model/DescribeAccountsRequest.cc
	src/model/DescribeAccountsResult.cc
	src/model/DescribeAuditLogsRequest.cc
	src/model/DescribeAuditLogsResult.cc
	src/model/DescribeAuthAccountsRequest.cc
	src/model/DescribeAuthAccountsResult.cc
	src/model/DescribeCloudDatabasesRequest.cc
	src/model/DescribeCloudDatabasesResult.cc
	src/model/DescribeCloudInstancesRequest.cc
	src/model/DescribeCloudInstancesResult.cc
	src/model/DescribeColumnsRequest.cc
	src/model/DescribeColumnsResult.cc
	src/model/DescribeConfigsRequest.cc
	src/model/DescribeConfigsResult.cc
	src/model/DescribeDataAssetsRequest.cc
	src/model/DescribeDataAssetsResult.cc
	src/model/DescribeDataHubConnectorsRequest.cc
	src/model/DescribeDataHubConnectorsResult.cc
	src/model/DescribeDataHubProjectsRequest.cc
	src/model/DescribeDataHubProjectsResult.cc
	src/model/DescribeDataHubSubscriptionsRequest.cc
	src/model/DescribeDataHubSubscriptionsResult.cc
	src/model/DescribeDataHubTopicsRequest.cc
	src/model/DescribeDataHubTopicsResult.cc
	src/model/DescribeDataLimitDetailRequest.cc
	src/model/DescribeDataLimitDetailResult.cc
	src/model/DescribeDataLimitsRequest.cc
	src/model/DescribeDataLimitsResult.cc
	src/model/DescribeDepartsRequest.cc
	src/model/DescribeDepartsResult.cc
	src/model/DescribeEventDetailRequest.cc
	src/model/DescribeEventDetailResult.cc
	src/model/DescribeEventTypesRequest.cc
	src/model/DescribeEventTypesResult.cc
	src/model/DescribeEventsRequest.cc
	src/model/DescribeEventsResult.cc
	src/model/DescribeInstancesRequest.cc
	src/model/DescribeInstancesResult.cc
	src/model/DescribeOriginalLogsRequest.cc
	src/model/DescribeOriginalLogsResult.cc
	src/model/DescribeOssObjectDetailRequest.cc
	src/model/DescribeOssObjectDetailResult.cc
	src/model/DescribeOssObjectsRequest.cc
	src/model/DescribeOssObjectsResult.cc
	src/model/DescribePackagesRequest.cc
	src/model/DescribePackagesResult.cc
	src/model/DescribePrivilegesRequest.cc
	src/model/DescribePrivilegesResult.cc
	src/model/DescribeRulesRequest.cc
	src/model/DescribeRulesResult.cc
	src/model/DescribeTablesRequest.cc
	src/model/DescribeTablesResult.cc
	src/model/DescribeUseFlowRequest.cc
	src/model/DescribeUseFlowResult.cc
	src/model/DescribeUserStatusRequest.cc
	src/model/DescribeUserStatusResult.cc
	src/model/ModifyDataLimitRequest.cc
	src/model/ModifyDataLimitResult.cc
	src/model/ModifyDefaultLevelRequest.cc
	src/model/ModifyDefaultLevelResult.cc
	src/model/ModifyEventStatusRequest.cc
	src/model/ModifyEventStatusResult.cc
	src/model/ModifyEventTypeStatusRequest.cc
	src/model/ModifyEventTypeStatusResult.cc
	src/model/ModifyRuleRequest.cc
	src/model/ModifyRuleResult.cc
	src/model/ModifyRuleStatusRequest.cc
	src/model/ModifyRuleStatusResult.cc
	src/model/ValidateConnectorRequest.cc
	src/model/ValidateConnectorResult.cc )

add_library(sddp ${LIB_TYPE}
	${sddp_public_header}
	${sddp_public_header_model}
	${sddp_src})

set_target_properties(sddp
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sddp
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sddp
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SDDP_LIBRARY)
endif()

target_include_directories(sddp
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sddp
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sddp
		jsoncpp)
	target_include_directories(sddp
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sddp
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sddp
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sddp
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sddp
		jsoncpp)
endif()

install(FILES ${sddp_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sddp)
install(FILES ${sddp_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sddp/model)
install(TARGETS sddp
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)