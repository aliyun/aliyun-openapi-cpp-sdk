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

set(yundun-ds_public_header 
	include/alibabacloud/yundun-ds/Yundun_dsClient.h
	include/alibabacloud/yundun-ds/Yundun_dsExport.h )

set(yundun-ds_public_header_model 
	include/alibabacloud/yundun-ds/model/CreateConfigRequest.h
	include/alibabacloud/yundun-ds/model/CreateConfigResult.h
	include/alibabacloud/yundun-ds/model/CreateDataLimitRequest.h
	include/alibabacloud/yundun-ds/model/CreateDataLimitResult.h
	include/alibabacloud/yundun-ds/model/CreateRuleRequest.h
	include/alibabacloud/yundun-ds/model/CreateRuleResult.h
	include/alibabacloud/yundun-ds/model/CreateUserAuthRequest.h
	include/alibabacloud/yundun-ds/model/CreateUserAuthResult.h
	include/alibabacloud/yundun-ds/model/DeleteDataLimitRequest.h
	include/alibabacloud/yundun-ds/model/DeleteDataLimitResult.h
	include/alibabacloud/yundun-ds/model/DeleteRuleRequest.h
	include/alibabacloud/yundun-ds/model/DeleteRuleResult.h
	include/alibabacloud/yundun-ds/model/DescribeAccountDetailRequest.h
	include/alibabacloud/yundun-ds/model/DescribeAccountDetailResult.h
	include/alibabacloud/yundun-ds/model/DescribeAccountsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeAccountsResult.h
	include/alibabacloud/yundun-ds/model/DescribeAuthAccountsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeAuthAccountsResult.h
	include/alibabacloud/yundun-ds/model/DescribeColumnsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeColumnsResult.h
	include/alibabacloud/yundun-ds/model/DescribeConditionsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeConditionsResult.h
	include/alibabacloud/yundun-ds/model/DescribeConfigsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeConfigsResult.h
	include/alibabacloud/yundun-ds/model/DescribeDataAssetsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDataAssetsResult.h
	include/alibabacloud/yundun-ds/model/DescribeDataCountsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDataCountsResult.h
	include/alibabacloud/yundun-ds/model/DescribeDataHubConnectorsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDataHubConnectorsResult.h
	include/alibabacloud/yundun-ds/model/DescribeDataHubProjectsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDataHubProjectsResult.h
	include/alibabacloud/yundun-ds/model/DescribeDataHubSubscriptionsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDataHubSubscriptionsResult.h
	include/alibabacloud/yundun-ds/model/DescribeDataHubTopicsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDataHubTopicsResult.h
	include/alibabacloud/yundun-ds/model/DescribeDataLimitSetRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDataLimitSetResult.h
	include/alibabacloud/yundun-ds/model/DescribeDataTotalCountRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDataTotalCountResult.h
	include/alibabacloud/yundun-ds/model/DescribeDepartCountsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDepartCountsResult.h
	include/alibabacloud/yundun-ds/model/DescribeDepartTotalCountRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDepartTotalCountResult.h
	include/alibabacloud/yundun-ds/model/DescribeDepartsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeDepartsResult.h
	include/alibabacloud/yundun-ds/model/DescribeEventCountsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeEventCountsResult.h
	include/alibabacloud/yundun-ds/model/DescribeEventDetailRequest.h
	include/alibabacloud/yundun-ds/model/DescribeEventDetailResult.h
	include/alibabacloud/yundun-ds/model/DescribeEventTotalCountRequest.h
	include/alibabacloud/yundun-ds/model/DescribeEventTotalCountResult.h
	include/alibabacloud/yundun-ds/model/DescribeEventTypesRequest.h
	include/alibabacloud/yundun-ds/model/DescribeEventTypesResult.h
	include/alibabacloud/yundun-ds/model/DescribeEventsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeEventsResult.h
	include/alibabacloud/yundun-ds/model/DescribeFlowTotalCountRequest.h
	include/alibabacloud/yundun-ds/model/DescribeFlowTotalCountResult.h
	include/alibabacloud/yundun-ds/model/DescribeInstancesRequest.h
	include/alibabacloud/yundun-ds/model/DescribeInstancesResult.h
	include/alibabacloud/yundun-ds/model/DescribeOssObjectDetailRequest.h
	include/alibabacloud/yundun-ds/model/DescribeOssObjectDetailResult.h
	include/alibabacloud/yundun-ds/model/DescribeOssObjectsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeOssObjectsResult.h
	include/alibabacloud/yundun-ds/model/DescribePackagesRequest.h
	include/alibabacloud/yundun-ds/model/DescribePackagesResult.h
	include/alibabacloud/yundun-ds/model/DescribePrivilegesRequest.h
	include/alibabacloud/yundun-ds/model/DescribePrivilegesResult.h
	include/alibabacloud/yundun-ds/model/DescribeRuleTotalCountRequest.h
	include/alibabacloud/yundun-ds/model/DescribeRuleTotalCountResult.h
	include/alibabacloud/yundun-ds/model/DescribeRulesRequest.h
	include/alibabacloud/yundun-ds/model/DescribeRulesResult.h
	include/alibabacloud/yundun-ds/model/DescribeTablesRequest.h
	include/alibabacloud/yundun-ds/model/DescribeTablesResult.h
	include/alibabacloud/yundun-ds/model/DescribeTotalCountRequest.h
	include/alibabacloud/yundun-ds/model/DescribeTotalCountResult.h
	include/alibabacloud/yundun-ds/model/DescribeTransferEventCountsRequest.h
	include/alibabacloud/yundun-ds/model/DescribeTransferEventCountsResult.h
	include/alibabacloud/yundun-ds/model/DescribeUserStatusRequest.h
	include/alibabacloud/yundun-ds/model/DescribeUserStatusResult.h
	include/alibabacloud/yundun-ds/model/ModifyDefaultLevelRequest.h
	include/alibabacloud/yundun-ds/model/ModifyDefaultLevelResult.h
	include/alibabacloud/yundun-ds/model/ModifyEventStatusRequest.h
	include/alibabacloud/yundun-ds/model/ModifyEventStatusResult.h
	include/alibabacloud/yundun-ds/model/ModifyEventTypeStatusRequest.h
	include/alibabacloud/yundun-ds/model/ModifyEventTypeStatusResult.h
	include/alibabacloud/yundun-ds/model/ModifyRuleRequest.h
	include/alibabacloud/yundun-ds/model/ModifyRuleResult.h
	include/alibabacloud/yundun-ds/model/ModifyRuleStatusRequest.h
	include/alibabacloud/yundun-ds/model/ModifyRuleStatusResult.h
	include/alibabacloud/yundun-ds/model/ValidateConnectorRequest.h
	include/alibabacloud/yundun-ds/model/ValidateConnectorResult.h )

set(yundun-ds_src 
	src/Yundun-dsClient.cc
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
	src/model/DescribeAuthAccountsRequest.cc
	src/model/DescribeAuthAccountsResult.cc
	src/model/DescribeColumnsRequest.cc
	src/model/DescribeColumnsResult.cc
	src/model/DescribeConditionsRequest.cc
	src/model/DescribeConditionsResult.cc
	src/model/DescribeConfigsRequest.cc
	src/model/DescribeConfigsResult.cc
	src/model/DescribeDataAssetsRequest.cc
	src/model/DescribeDataAssetsResult.cc
	src/model/DescribeDataCountsRequest.cc
	src/model/DescribeDataCountsResult.cc
	src/model/DescribeDataHubConnectorsRequest.cc
	src/model/DescribeDataHubConnectorsResult.cc
	src/model/DescribeDataHubProjectsRequest.cc
	src/model/DescribeDataHubProjectsResult.cc
	src/model/DescribeDataHubSubscriptionsRequest.cc
	src/model/DescribeDataHubSubscriptionsResult.cc
	src/model/DescribeDataHubTopicsRequest.cc
	src/model/DescribeDataHubTopicsResult.cc
	src/model/DescribeDataLimitSetRequest.cc
	src/model/DescribeDataLimitSetResult.cc
	src/model/DescribeDataTotalCountRequest.cc
	src/model/DescribeDataTotalCountResult.cc
	src/model/DescribeDepartCountsRequest.cc
	src/model/DescribeDepartCountsResult.cc
	src/model/DescribeDepartTotalCountRequest.cc
	src/model/DescribeDepartTotalCountResult.cc
	src/model/DescribeDepartsRequest.cc
	src/model/DescribeDepartsResult.cc
	src/model/DescribeEventCountsRequest.cc
	src/model/DescribeEventCountsResult.cc
	src/model/DescribeEventDetailRequest.cc
	src/model/DescribeEventDetailResult.cc
	src/model/DescribeEventTotalCountRequest.cc
	src/model/DescribeEventTotalCountResult.cc
	src/model/DescribeEventTypesRequest.cc
	src/model/DescribeEventTypesResult.cc
	src/model/DescribeEventsRequest.cc
	src/model/DescribeEventsResult.cc
	src/model/DescribeFlowTotalCountRequest.cc
	src/model/DescribeFlowTotalCountResult.cc
	src/model/DescribeInstancesRequest.cc
	src/model/DescribeInstancesResult.cc
	src/model/DescribeOssObjectDetailRequest.cc
	src/model/DescribeOssObjectDetailResult.cc
	src/model/DescribeOssObjectsRequest.cc
	src/model/DescribeOssObjectsResult.cc
	src/model/DescribePackagesRequest.cc
	src/model/DescribePackagesResult.cc
	src/model/DescribePrivilegesRequest.cc
	src/model/DescribePrivilegesResult.cc
	src/model/DescribeRuleTotalCountRequest.cc
	src/model/DescribeRuleTotalCountResult.cc
	src/model/DescribeRulesRequest.cc
	src/model/DescribeRulesResult.cc
	src/model/DescribeTablesRequest.cc
	src/model/DescribeTablesResult.cc
	src/model/DescribeTotalCountRequest.cc
	src/model/DescribeTotalCountResult.cc
	src/model/DescribeTransferEventCountsRequest.cc
	src/model/DescribeTransferEventCountsResult.cc
	src/model/DescribeUserStatusRequest.cc
	src/model/DescribeUserStatusResult.cc
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

add_library(yundun-ds ${LIB_TYPE}
	${yundun-ds_public_header}
	${yundun-ds_public_header_model}
	${yundun-ds_src})

set_target_properties(yundun-ds
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}yundun-ds
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(yundun-ds
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_YUNDUN_DS_LIBRARY)
endif()

target_include_directories(yundun-ds
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(yundun-ds
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(yundun-ds
		jsoncpp)
	target_include_directories(yundun-ds
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(yundun-ds
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(yundun-ds
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(yundun-ds
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(yundun-ds
		jsoncpp)
endif()

install(FILES ${yundun-ds_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/yundun-ds)
install(FILES ${yundun-ds_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/yundun-ds/model)
install(TARGETS yundun-ds
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)