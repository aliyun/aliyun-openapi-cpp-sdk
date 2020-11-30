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

set(arms_public_header 
	include/alibabacloud/arms/ARMSClient.h
	include/alibabacloud/arms/ARMSExport.h )

set(arms_public_header_model 
	include/alibabacloud/arms/model/AddGrafanaRequest.h
	include/alibabacloud/arms/model/AddGrafanaResult.h
	include/alibabacloud/arms/model/AddIntegrationRequest.h
	include/alibabacloud/arms/model/AddIntegrationResult.h
	include/alibabacloud/arms/model/CheckDataConsistencyRequest.h
	include/alibabacloud/arms/model/CheckDataConsistencyResult.h
	include/alibabacloud/arms/model/CheckServiceLinkedRoleForDeletingRequest.h
	include/alibabacloud/arms/model/CheckServiceLinkedRoleForDeletingResult.h
	include/alibabacloud/arms/model/ConfigAppRequest.h
	include/alibabacloud/arms/model/ConfigAppResult.h
	include/alibabacloud/arms/model/CreateAlertContactRequest.h
	include/alibabacloud/arms/model/CreateAlertContactResult.h
	include/alibabacloud/arms/model/CreateAlertContactGroupRequest.h
	include/alibabacloud/arms/model/CreateAlertContactGroupResult.h
	include/alibabacloud/arms/model/CreateRetcodeAppRequest.h
	include/alibabacloud/arms/model/CreateRetcodeAppResult.h
	include/alibabacloud/arms/model/CreateWehookRequest.h
	include/alibabacloud/arms/model/CreateWehookResult.h
	include/alibabacloud/arms/model/DeleteAlertContactRequest.h
	include/alibabacloud/arms/model/DeleteAlertContactResult.h
	include/alibabacloud/arms/model/DeleteAlertContactGroupRequest.h
	include/alibabacloud/arms/model/DeleteAlertContactGroupResult.h
	include/alibabacloud/arms/model/DeleteAlertRulesRequest.h
	include/alibabacloud/arms/model/DeleteAlertRulesResult.h
	include/alibabacloud/arms/model/DeleteRetcodeAppRequest.h
	include/alibabacloud/arms/model/DeleteRetcodeAppResult.h
	include/alibabacloud/arms/model/DeleteTraceAppRequest.h
	include/alibabacloud/arms/model/DeleteTraceAppResult.h
	include/alibabacloud/arms/model/DescribeDispatchRuleRequest.h
	include/alibabacloud/arms/model/DescribeDispatchRuleResult.h
	include/alibabacloud/arms/model/DescribeTraceLicenseKeyRequest.h
	include/alibabacloud/arms/model/DescribeTraceLicenseKeyResult.h
	include/alibabacloud/arms/model/DescribeTraceLocationRequest.h
	include/alibabacloud/arms/model/DescribeTraceLocationResult.h
	include/alibabacloud/arms/model/ExportPrometheusRulesRequest.h
	include/alibabacloud/arms/model/ExportPrometheusRulesResult.h
	include/alibabacloud/arms/model/GetAppApiByPageRequest.h
	include/alibabacloud/arms/model/GetAppApiByPageResult.h
	include/alibabacloud/arms/model/GetConsistencySnapshotRequest.h
	include/alibabacloud/arms/model/GetConsistencySnapshotResult.h
	include/alibabacloud/arms/model/GetIntegrationTokenRequest.h
	include/alibabacloud/arms/model/GetIntegrationTokenResult.h
	include/alibabacloud/arms/model/GetMultipleTraceRequest.h
	include/alibabacloud/arms/model/GetMultipleTraceResult.h
	include/alibabacloud/arms/model/GetPrometheusApiTokenRequest.h
	include/alibabacloud/arms/model/GetPrometheusApiTokenResult.h
	include/alibabacloud/arms/model/GetRetcodeShareUrlRequest.h
	include/alibabacloud/arms/model/GetRetcodeShareUrlResult.h
	include/alibabacloud/arms/model/GetStackRequest.h
	include/alibabacloud/arms/model/GetStackResult.h
	include/alibabacloud/arms/model/GetTraceRequest.h
	include/alibabacloud/arms/model/GetTraceResult.h
	include/alibabacloud/arms/model/GetTraceAppRequest.h
	include/alibabacloud/arms/model/GetTraceAppResult.h
	include/alibabacloud/arms/model/ImportAppAlertRulesRequest.h
	include/alibabacloud/arms/model/ImportAppAlertRulesResult.h
	include/alibabacloud/arms/model/ImportCustomAlertRulesRequest.h
	include/alibabacloud/arms/model/ImportCustomAlertRulesResult.h
	include/alibabacloud/arms/model/ImportPrometheusRulesRequest.h
	include/alibabacloud/arms/model/ImportPrometheusRulesResult.h
	include/alibabacloud/arms/model/ListClusterFromGrafanaRequest.h
	include/alibabacloud/arms/model/ListClusterFromGrafanaResult.h
	include/alibabacloud/arms/model/ListDashboardsRequest.h
	include/alibabacloud/arms/model/ListDashboardsResult.h
	include/alibabacloud/arms/model/ListPromClustersRequest.h
	include/alibabacloud/arms/model/ListPromClustersResult.h
	include/alibabacloud/arms/model/ListRetcodeAppsRequest.h
	include/alibabacloud/arms/model/ListRetcodeAppsResult.h
	include/alibabacloud/arms/model/ListTraceAppsRequest.h
	include/alibabacloud/arms/model/ListTraceAppsResult.h
	include/alibabacloud/arms/model/QueryDatasetRequest.h
	include/alibabacloud/arms/model/QueryDatasetResult.h
	include/alibabacloud/arms/model/QueryMetricRequest.h
	include/alibabacloud/arms/model/QueryMetricResult.h
	include/alibabacloud/arms/model/QueryMetricByPageRequest.h
	include/alibabacloud/arms/model/QueryMetricByPageResult.h
	include/alibabacloud/arms/model/SaveTraceAppConfigRequest.h
	include/alibabacloud/arms/model/SaveTraceAppConfigResult.h
	include/alibabacloud/arms/model/SearchAlertContactRequest.h
	include/alibabacloud/arms/model/SearchAlertContactResult.h
	include/alibabacloud/arms/model/SearchAlertContactGroupRequest.h
	include/alibabacloud/arms/model/SearchAlertContactGroupResult.h
	include/alibabacloud/arms/model/SearchAlertHistoriesRequest.h
	include/alibabacloud/arms/model/SearchAlertHistoriesResult.h
	include/alibabacloud/arms/model/SearchAlertRulesRequest.h
	include/alibabacloud/arms/model/SearchAlertRulesResult.h
	include/alibabacloud/arms/model/SearchEventsRequest.h
	include/alibabacloud/arms/model/SearchEventsResult.h
	include/alibabacloud/arms/model/SearchRetcodeAppByPageRequest.h
	include/alibabacloud/arms/model/SearchRetcodeAppByPageResult.h
	include/alibabacloud/arms/model/SearchTraceAppByNameRequest.h
	include/alibabacloud/arms/model/SearchTraceAppByNameResult.h
	include/alibabacloud/arms/model/SearchTraceAppByPageRequest.h
	include/alibabacloud/arms/model/SearchTraceAppByPageResult.h
	include/alibabacloud/arms/model/SearchTracesRequest.h
	include/alibabacloud/arms/model/SearchTracesResult.h
	include/alibabacloud/arms/model/SearchTracesByPageRequest.h
	include/alibabacloud/arms/model/SearchTracesByPageResult.h
	include/alibabacloud/arms/model/SendCustomIncidentsRequest.h
	include/alibabacloud/arms/model/SendCustomIncidentsResult.h
	include/alibabacloud/arms/model/SendMseIncidentRequest.h
	include/alibabacloud/arms/model/SendMseIncidentResult.h
	include/alibabacloud/arms/model/SetRetcodeShareStatusRequest.h
	include/alibabacloud/arms/model/SetRetcodeShareStatusResult.h
	include/alibabacloud/arms/model/StartAlertRequest.h
	include/alibabacloud/arms/model/StartAlertResult.h
	include/alibabacloud/arms/model/StopAlertRequest.h
	include/alibabacloud/arms/model/StopAlertResult.h
	include/alibabacloud/arms/model/UpdateAlertContactRequest.h
	include/alibabacloud/arms/model/UpdateAlertContactResult.h
	include/alibabacloud/arms/model/UpdateAlertContactGroupRequest.h
	include/alibabacloud/arms/model/UpdateAlertContactGroupResult.h
	include/alibabacloud/arms/model/UpdateAlertRuleRequest.h
	include/alibabacloud/arms/model/UpdateAlertRuleResult.h
	include/alibabacloud/arms/model/UpdateWebhookRequest.h
	include/alibabacloud/arms/model/UpdateWebhookResult.h )

set(arms_src 
	src/ARMSClient.cc
	src/model/AddGrafanaRequest.cc
	src/model/AddGrafanaResult.cc
	src/model/AddIntegrationRequest.cc
	src/model/AddIntegrationResult.cc
	src/model/CheckDataConsistencyRequest.cc
	src/model/CheckDataConsistencyResult.cc
	src/model/CheckServiceLinkedRoleForDeletingRequest.cc
	src/model/CheckServiceLinkedRoleForDeletingResult.cc
	src/model/ConfigAppRequest.cc
	src/model/ConfigAppResult.cc
	src/model/CreateAlertContactRequest.cc
	src/model/CreateAlertContactResult.cc
	src/model/CreateAlertContactGroupRequest.cc
	src/model/CreateAlertContactGroupResult.cc
	src/model/CreateRetcodeAppRequest.cc
	src/model/CreateRetcodeAppResult.cc
	src/model/CreateWehookRequest.cc
	src/model/CreateWehookResult.cc
	src/model/DeleteAlertContactRequest.cc
	src/model/DeleteAlertContactResult.cc
	src/model/DeleteAlertContactGroupRequest.cc
	src/model/DeleteAlertContactGroupResult.cc
	src/model/DeleteAlertRulesRequest.cc
	src/model/DeleteAlertRulesResult.cc
	src/model/DeleteRetcodeAppRequest.cc
	src/model/DeleteRetcodeAppResult.cc
	src/model/DeleteTraceAppRequest.cc
	src/model/DeleteTraceAppResult.cc
	src/model/DescribeDispatchRuleRequest.cc
	src/model/DescribeDispatchRuleResult.cc
	src/model/DescribeTraceLicenseKeyRequest.cc
	src/model/DescribeTraceLicenseKeyResult.cc
	src/model/DescribeTraceLocationRequest.cc
	src/model/DescribeTraceLocationResult.cc
	src/model/ExportPrometheusRulesRequest.cc
	src/model/ExportPrometheusRulesResult.cc
	src/model/GetAppApiByPageRequest.cc
	src/model/GetAppApiByPageResult.cc
	src/model/GetConsistencySnapshotRequest.cc
	src/model/GetConsistencySnapshotResult.cc
	src/model/GetIntegrationTokenRequest.cc
	src/model/GetIntegrationTokenResult.cc
	src/model/GetMultipleTraceRequest.cc
	src/model/GetMultipleTraceResult.cc
	src/model/GetPrometheusApiTokenRequest.cc
	src/model/GetPrometheusApiTokenResult.cc
	src/model/GetRetcodeShareUrlRequest.cc
	src/model/GetRetcodeShareUrlResult.cc
	src/model/GetStackRequest.cc
	src/model/GetStackResult.cc
	src/model/GetTraceRequest.cc
	src/model/GetTraceResult.cc
	src/model/GetTraceAppRequest.cc
	src/model/GetTraceAppResult.cc
	src/model/ImportAppAlertRulesRequest.cc
	src/model/ImportAppAlertRulesResult.cc
	src/model/ImportCustomAlertRulesRequest.cc
	src/model/ImportCustomAlertRulesResult.cc
	src/model/ImportPrometheusRulesRequest.cc
	src/model/ImportPrometheusRulesResult.cc
	src/model/ListClusterFromGrafanaRequest.cc
	src/model/ListClusterFromGrafanaResult.cc
	src/model/ListDashboardsRequest.cc
	src/model/ListDashboardsResult.cc
	src/model/ListPromClustersRequest.cc
	src/model/ListPromClustersResult.cc
	src/model/ListRetcodeAppsRequest.cc
	src/model/ListRetcodeAppsResult.cc
	src/model/ListTraceAppsRequest.cc
	src/model/ListTraceAppsResult.cc
	src/model/QueryDatasetRequest.cc
	src/model/QueryDatasetResult.cc
	src/model/QueryMetricRequest.cc
	src/model/QueryMetricResult.cc
	src/model/QueryMetricByPageRequest.cc
	src/model/QueryMetricByPageResult.cc
	src/model/SaveTraceAppConfigRequest.cc
	src/model/SaveTraceAppConfigResult.cc
	src/model/SearchAlertContactRequest.cc
	src/model/SearchAlertContactResult.cc
	src/model/SearchAlertContactGroupRequest.cc
	src/model/SearchAlertContactGroupResult.cc
	src/model/SearchAlertHistoriesRequest.cc
	src/model/SearchAlertHistoriesResult.cc
	src/model/SearchAlertRulesRequest.cc
	src/model/SearchAlertRulesResult.cc
	src/model/SearchEventsRequest.cc
	src/model/SearchEventsResult.cc
	src/model/SearchRetcodeAppByPageRequest.cc
	src/model/SearchRetcodeAppByPageResult.cc
	src/model/SearchTraceAppByNameRequest.cc
	src/model/SearchTraceAppByNameResult.cc
	src/model/SearchTraceAppByPageRequest.cc
	src/model/SearchTraceAppByPageResult.cc
	src/model/SearchTracesRequest.cc
	src/model/SearchTracesResult.cc
	src/model/SearchTracesByPageRequest.cc
	src/model/SearchTracesByPageResult.cc
	src/model/SendCustomIncidentsRequest.cc
	src/model/SendCustomIncidentsResult.cc
	src/model/SendMseIncidentRequest.cc
	src/model/SendMseIncidentResult.cc
	src/model/SetRetcodeShareStatusRequest.cc
	src/model/SetRetcodeShareStatusResult.cc
	src/model/StartAlertRequest.cc
	src/model/StartAlertResult.cc
	src/model/StopAlertRequest.cc
	src/model/StopAlertResult.cc
	src/model/UpdateAlertContactRequest.cc
	src/model/UpdateAlertContactResult.cc
	src/model/UpdateAlertContactGroupRequest.cc
	src/model/UpdateAlertContactGroupResult.cc
	src/model/UpdateAlertRuleRequest.cc
	src/model/UpdateAlertRuleResult.cc
	src/model/UpdateWebhookRequest.cc
	src/model/UpdateWebhookResult.cc )

add_library(arms ${LIB_TYPE}
	${arms_public_header}
	${arms_public_header_model}
	${arms_src})

set_target_properties(arms
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}arms
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(arms
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ARMS_LIBRARY)
endif()

target_include_directories(arms
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(arms
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(arms
		jsoncpp)
	target_include_directories(arms
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(arms
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(arms
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(arms
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(arms
		jsoncpp)
endif()

install(FILES ${arms_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/arms)
install(FILES ${arms_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/arms/model)
install(TARGETS arms
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)