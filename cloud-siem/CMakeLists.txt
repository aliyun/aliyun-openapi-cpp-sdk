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

set(cloud-siem_public_header 
	include/alibabacloud/cloud-siem/Cloud_siemClient.h
	include/alibabacloud/cloud-siem/Cloud_siemExport.h )

set(cloud-siem_public_header_model 
	include/alibabacloud/cloud-siem/model/AddDataSourceRequest.h
	include/alibabacloud/cloud-siem/model/AddDataSourceResult.h
	include/alibabacloud/cloud-siem/model/AddDataSourceLogRequest.h
	include/alibabacloud/cloud-siem/model/AddDataSourceLogResult.h
	include/alibabacloud/cloud-siem/model/AddUserSourceLogConfigRequest.h
	include/alibabacloud/cloud-siem/model/AddUserSourceLogConfigResult.h
	include/alibabacloud/cloud-siem/model/BindAccountRequest.h
	include/alibabacloud/cloud-siem/model/BindAccountResult.h
	include/alibabacloud/cloud-siem/model/CloseDeliveryRequest.h
	include/alibabacloud/cloud-siem/model/CloseDeliveryResult.h
	include/alibabacloud/cloud-siem/model/DeleteAutomateResponseConfigRequest.h
	include/alibabacloud/cloud-siem/model/DeleteAutomateResponseConfigResult.h
	include/alibabacloud/cloud-siem/model/DeleteBindAccountRequest.h
	include/alibabacloud/cloud-siem/model/DeleteBindAccountResult.h
	include/alibabacloud/cloud-siem/model/DeleteCustomizeRuleRequest.h
	include/alibabacloud/cloud-siem/model/DeleteCustomizeRuleResult.h
	include/alibabacloud/cloud-siem/model/DeleteDataSourceRequest.h
	include/alibabacloud/cloud-siem/model/DeleteDataSourceResult.h
	include/alibabacloud/cloud-siem/model/DeleteDataSourceLogRequest.h
	include/alibabacloud/cloud-siem/model/DeleteDataSourceLogResult.h
	include/alibabacloud/cloud-siem/model/DeleteWhiteRuleListRequest.h
	include/alibabacloud/cloud-siem/model/DeleteWhiteRuleListResult.h
	include/alibabacloud/cloud-siem/model/DescribeAggregateFunctionRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAggregateFunctionResult.h
	include/alibabacloud/cloud-siem/model/DescribeAlertSceneRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAlertSceneResult.h
	include/alibabacloud/cloud-siem/model/DescribeAlertSceneByEventRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAlertSceneByEventResult.h
	include/alibabacloud/cloud-siem/model/DescribeAlertSourceRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAlertSourceResult.h
	include/alibabacloud/cloud-siem/model/DescribeAlertSourceWithEventRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAlertSourceWithEventResult.h
	include/alibabacloud/cloud-siem/model/DescribeAlertTypeRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAlertTypeResult.h
	include/alibabacloud/cloud-siem/model/DescribeAlertsRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAlertsResult.h
	include/alibabacloud/cloud-siem/model/DescribeAlertsCountRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAlertsCountResult.h
	include/alibabacloud/cloud-siem/model/DescribeAlertsWithEntityRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAlertsWithEntityResult.h
	include/alibabacloud/cloud-siem/model/DescribeAlertsWithEventRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAlertsWithEventResult.h
	include/alibabacloud/cloud-siem/model/DescribeAuthRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAuthResult.h
	include/alibabacloud/cloud-siem/model/DescribeAutomateResponseConfigCounterRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAutomateResponseConfigCounterResult.h
	include/alibabacloud/cloud-siem/model/DescribeAutomateResponseConfigFeatureRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAutomateResponseConfigFeatureResult.h
	include/alibabacloud/cloud-siem/model/DescribeAutomateResponseConfigPlayBooksRequest.h
	include/alibabacloud/cloud-siem/model/DescribeAutomateResponseConfigPlayBooksResult.h
	include/alibabacloud/cloud-siem/model/DescribeCloudSiemAssetsRequest.h
	include/alibabacloud/cloud-siem/model/DescribeCloudSiemAssetsResult.h
	include/alibabacloud/cloud-siem/model/DescribeCloudSiemAssetsCounterRequest.h
	include/alibabacloud/cloud-siem/model/DescribeCloudSiemAssetsCounterResult.h
	include/alibabacloud/cloud-siem/model/DescribeCloudSiemEventDetailRequest.h
	include/alibabacloud/cloud-siem/model/DescribeCloudSiemEventDetailResult.h
	include/alibabacloud/cloud-siem/model/DescribeCloudSiemEventsRequest.h
	include/alibabacloud/cloud-siem/model/DescribeCloudSiemEventsResult.h
	include/alibabacloud/cloud-siem/model/DescribeCustomizeRuleCountRequest.h
	include/alibabacloud/cloud-siem/model/DescribeCustomizeRuleCountResult.h
	include/alibabacloud/cloud-siem/model/DescribeCustomizeRuleTestRequest.h
	include/alibabacloud/cloud-siem/model/DescribeCustomizeRuleTestResult.h
	include/alibabacloud/cloud-siem/model/DescribeCustomizeRuleTestHistogramRequest.h
	include/alibabacloud/cloud-siem/model/DescribeCustomizeRuleTestHistogramResult.h
	include/alibabacloud/cloud-siem/model/DescribeDataSourceInstanceRequest.h
	include/alibabacloud/cloud-siem/model/DescribeDataSourceInstanceResult.h
	include/alibabacloud/cloud-siem/model/DescribeDataSourceParametersRequest.h
	include/alibabacloud/cloud-siem/model/DescribeDataSourceParametersResult.h
	include/alibabacloud/cloud-siem/model/DescribeDisposeAndPlaybookRequest.h
	include/alibabacloud/cloud-siem/model/DescribeDisposeAndPlaybookResult.h
	include/alibabacloud/cloud-siem/model/DescribeDisposeStrategyPlaybookRequest.h
	include/alibabacloud/cloud-siem/model/DescribeDisposeStrategyPlaybookResult.h
	include/alibabacloud/cloud-siem/model/DescribeEntityInfoRequest.h
	include/alibabacloud/cloud-siem/model/DescribeEntityInfoResult.h
	include/alibabacloud/cloud-siem/model/DescribeEventCountByThreatLevelRequest.h
	include/alibabacloud/cloud-siem/model/DescribeEventCountByThreatLevelResult.h
	include/alibabacloud/cloud-siem/model/DescribeEventDisposeRequest.h
	include/alibabacloud/cloud-siem/model/DescribeEventDisposeResult.h
	include/alibabacloud/cloud-siem/model/DescribeImportedLogCountRequest.h
	include/alibabacloud/cloud-siem/model/DescribeImportedLogCountResult.h
	include/alibabacloud/cloud-siem/model/DescribeLogFieldsRequest.h
	include/alibabacloud/cloud-siem/model/DescribeLogFieldsResult.h
	include/alibabacloud/cloud-siem/model/DescribeLogSourceRequest.h
	include/alibabacloud/cloud-siem/model/DescribeLogSourceResult.h
	include/alibabacloud/cloud-siem/model/DescribeLogTypeRequest.h
	include/alibabacloud/cloud-siem/model/DescribeLogTypeResult.h
	include/alibabacloud/cloud-siem/model/DescribeOperatorsRequest.h
	include/alibabacloud/cloud-siem/model/DescribeOperatorsResult.h
	include/alibabacloud/cloud-siem/model/DescribeProdCountRequest.h
	include/alibabacloud/cloud-siem/model/DescribeProdCountResult.h
	include/alibabacloud/cloud-siem/model/DescribeScopeUsersRequest.h
	include/alibabacloud/cloud-siem/model/DescribeScopeUsersResult.h
	include/alibabacloud/cloud-siem/model/DescribeServiceStatusRequest.h
	include/alibabacloud/cloud-siem/model/DescribeServiceStatusResult.h
	include/alibabacloud/cloud-siem/model/DescribeStorageRequest.h
	include/alibabacloud/cloud-siem/model/DescribeStorageResult.h
	include/alibabacloud/cloud-siem/model/DescribeUserBuyStatusRequest.h
	include/alibabacloud/cloud-siem/model/DescribeUserBuyStatusResult.h
	include/alibabacloud/cloud-siem/model/DescribeWafScopeRequest.h
	include/alibabacloud/cloud-siem/model/DescribeWafScopeResult.h
	include/alibabacloud/cloud-siem/model/DescribeWhiteRuleListRequest.h
	include/alibabacloud/cloud-siem/model/DescribeWhiteRuleListResult.h
	include/alibabacloud/cloud-siem/model/EnableAccessForCloudSiemRequest.h
	include/alibabacloud/cloud-siem/model/EnableAccessForCloudSiemResult.h
	include/alibabacloud/cloud-siem/model/EnableServiceForCloudSiemRequest.h
	include/alibabacloud/cloud-siem/model/EnableServiceForCloudSiemResult.h
	include/alibabacloud/cloud-siem/model/GetCapacityRequest.h
	include/alibabacloud/cloud-siem/model/GetCapacityResult.h
	include/alibabacloud/cloud-siem/model/GetStorageRequest.h
	include/alibabacloud/cloud-siem/model/GetStorageResult.h
	include/alibabacloud/cloud-siem/model/ListAccountAccessIdRequest.h
	include/alibabacloud/cloud-siem/model/ListAccountAccessIdResult.h
	include/alibabacloud/cloud-siem/model/ListAccountsByLogRequest.h
	include/alibabacloud/cloud-siem/model/ListAccountsByLogResult.h
	include/alibabacloud/cloud-siem/model/ListAllProdsRequest.h
	include/alibabacloud/cloud-siem/model/ListAllProdsResult.h
	include/alibabacloud/cloud-siem/model/ListAutomateResponseConfigsRequest.h
	include/alibabacloud/cloud-siem/model/ListAutomateResponseConfigsResult.h
	include/alibabacloud/cloud-siem/model/ListBindAccountRequest.h
	include/alibabacloud/cloud-siem/model/ListBindAccountResult.h
	include/alibabacloud/cloud-siem/model/ListBindDataSourcesRequest.h
	include/alibabacloud/cloud-siem/model/ListBindDataSourcesResult.h
	include/alibabacloud/cloud-siem/model/ListCloudSiemCustomizeRulesRequest.h
	include/alibabacloud/cloud-siem/model/ListCloudSiemCustomizeRulesResult.h
	include/alibabacloud/cloud-siem/model/ListCloudSiemPredefinedRulesRequest.h
	include/alibabacloud/cloud-siem/model/ListCloudSiemPredefinedRulesResult.h
	include/alibabacloud/cloud-siem/model/ListCustomizeRuleTestResultRequest.h
	include/alibabacloud/cloud-siem/model/ListCustomizeRuleTestResultResult.h
	include/alibabacloud/cloud-siem/model/ListDataSourceLogsRequest.h
	include/alibabacloud/cloud-siem/model/ListDataSourceLogsResult.h
	include/alibabacloud/cloud-siem/model/ListDataSourceTypesRequest.h
	include/alibabacloud/cloud-siem/model/ListDataSourceTypesResult.h
	include/alibabacloud/cloud-siem/model/ListDeliveryRequest.h
	include/alibabacloud/cloud-siem/model/ListDeliveryResult.h
	include/alibabacloud/cloud-siem/model/ListDisposeStrategyRequest.h
	include/alibabacloud/cloud-siem/model/ListDisposeStrategyResult.h
	include/alibabacloud/cloud-siem/model/ListEntitiesRequest.h
	include/alibabacloud/cloud-siem/model/ListEntitiesResult.h
	include/alibabacloud/cloud-siem/model/ListImportedLogsByProdRequest.h
	include/alibabacloud/cloud-siem/model/ListImportedLogsByProdResult.h
	include/alibabacloud/cloud-siem/model/ListProjectLogStoresRequest.h
	include/alibabacloud/cloud-siem/model/ListProjectLogStoresResult.h
	include/alibabacloud/cloud-siem/model/ListRdUsersRequest.h
	include/alibabacloud/cloud-siem/model/ListRdUsersResult.h
	include/alibabacloud/cloud-siem/model/ModifyBindAccountRequest.h
	include/alibabacloud/cloud-siem/model/ModifyBindAccountResult.h
	include/alibabacloud/cloud-siem/model/ModifyDataSourceRequest.h
	include/alibabacloud/cloud-siem/model/ModifyDataSourceResult.h
	include/alibabacloud/cloud-siem/model/ModifyDataSourceLogRequest.h
	include/alibabacloud/cloud-siem/model/ModifyDataSourceLogResult.h
	include/alibabacloud/cloud-siem/model/OpenDeliveryRequest.h
	include/alibabacloud/cloud-siem/model/OpenDeliveryResult.h
	include/alibabacloud/cloud-siem/model/PostAutomateResponseConfigRequest.h
	include/alibabacloud/cloud-siem/model/PostAutomateResponseConfigResult.h
	include/alibabacloud/cloud-siem/model/PostCustomizeRuleRequest.h
	include/alibabacloud/cloud-siem/model/PostCustomizeRuleResult.h
	include/alibabacloud/cloud-siem/model/PostCustomizeRuleTestRequest.h
	include/alibabacloud/cloud-siem/model/PostCustomizeRuleTestResult.h
	include/alibabacloud/cloud-siem/model/PostEventDisposeAndWhiteruleListRequest.h
	include/alibabacloud/cloud-siem/model/PostEventDisposeAndWhiteruleListResult.h
	include/alibabacloud/cloud-siem/model/PostEventWhiteruleListRequest.h
	include/alibabacloud/cloud-siem/model/PostEventWhiteruleListResult.h
	include/alibabacloud/cloud-siem/model/PostFinishCustomizeRuleTestRequest.h
	include/alibabacloud/cloud-siem/model/PostFinishCustomizeRuleTestResult.h
	include/alibabacloud/cloud-siem/model/PostRuleStatusChangeRequest.h
	include/alibabacloud/cloud-siem/model/PostRuleStatusChangeResult.h
	include/alibabacloud/cloud-siem/model/RestoreCapacityRequest.h
	include/alibabacloud/cloud-siem/model/RestoreCapacityResult.h
	include/alibabacloud/cloud-siem/model/SetStorageRequest.h
	include/alibabacloud/cloud-siem/model/SetStorageResult.h
	include/alibabacloud/cloud-siem/model/SubmitImportLogTasksRequest.h
	include/alibabacloud/cloud-siem/model/SubmitImportLogTasksResult.h
	include/alibabacloud/cloud-siem/model/UpdateAutomateResponseConfigStatusRequest.h
	include/alibabacloud/cloud-siem/model/UpdateAutomateResponseConfigStatusResult.h
	include/alibabacloud/cloud-siem/model/UpdateWhiteRuleListRequest.h
	include/alibabacloud/cloud-siem/model/UpdateWhiteRuleListResult.h )

set(cloud-siem_src 
	src/Cloud-siemClient.cc
	src/model/AddDataSourceRequest.cc
	src/model/AddDataSourceResult.cc
	src/model/AddDataSourceLogRequest.cc
	src/model/AddDataSourceLogResult.cc
	src/model/AddUserSourceLogConfigRequest.cc
	src/model/AddUserSourceLogConfigResult.cc
	src/model/BindAccountRequest.cc
	src/model/BindAccountResult.cc
	src/model/CloseDeliveryRequest.cc
	src/model/CloseDeliveryResult.cc
	src/model/DeleteAutomateResponseConfigRequest.cc
	src/model/DeleteAutomateResponseConfigResult.cc
	src/model/DeleteBindAccountRequest.cc
	src/model/DeleteBindAccountResult.cc
	src/model/DeleteCustomizeRuleRequest.cc
	src/model/DeleteCustomizeRuleResult.cc
	src/model/DeleteDataSourceRequest.cc
	src/model/DeleteDataSourceResult.cc
	src/model/DeleteDataSourceLogRequest.cc
	src/model/DeleteDataSourceLogResult.cc
	src/model/DeleteWhiteRuleListRequest.cc
	src/model/DeleteWhiteRuleListResult.cc
	src/model/DescribeAggregateFunctionRequest.cc
	src/model/DescribeAggregateFunctionResult.cc
	src/model/DescribeAlertSceneRequest.cc
	src/model/DescribeAlertSceneResult.cc
	src/model/DescribeAlertSceneByEventRequest.cc
	src/model/DescribeAlertSceneByEventResult.cc
	src/model/DescribeAlertSourceRequest.cc
	src/model/DescribeAlertSourceResult.cc
	src/model/DescribeAlertSourceWithEventRequest.cc
	src/model/DescribeAlertSourceWithEventResult.cc
	src/model/DescribeAlertTypeRequest.cc
	src/model/DescribeAlertTypeResult.cc
	src/model/DescribeAlertsRequest.cc
	src/model/DescribeAlertsResult.cc
	src/model/DescribeAlertsCountRequest.cc
	src/model/DescribeAlertsCountResult.cc
	src/model/DescribeAlertsWithEntityRequest.cc
	src/model/DescribeAlertsWithEntityResult.cc
	src/model/DescribeAlertsWithEventRequest.cc
	src/model/DescribeAlertsWithEventResult.cc
	src/model/DescribeAuthRequest.cc
	src/model/DescribeAuthResult.cc
	src/model/DescribeAutomateResponseConfigCounterRequest.cc
	src/model/DescribeAutomateResponseConfigCounterResult.cc
	src/model/DescribeAutomateResponseConfigFeatureRequest.cc
	src/model/DescribeAutomateResponseConfigFeatureResult.cc
	src/model/DescribeAutomateResponseConfigPlayBooksRequest.cc
	src/model/DescribeAutomateResponseConfigPlayBooksResult.cc
	src/model/DescribeCloudSiemAssetsRequest.cc
	src/model/DescribeCloudSiemAssetsResult.cc
	src/model/DescribeCloudSiemAssetsCounterRequest.cc
	src/model/DescribeCloudSiemAssetsCounterResult.cc
	src/model/DescribeCloudSiemEventDetailRequest.cc
	src/model/DescribeCloudSiemEventDetailResult.cc
	src/model/DescribeCloudSiemEventsRequest.cc
	src/model/DescribeCloudSiemEventsResult.cc
	src/model/DescribeCustomizeRuleCountRequest.cc
	src/model/DescribeCustomizeRuleCountResult.cc
	src/model/DescribeCustomizeRuleTestRequest.cc
	src/model/DescribeCustomizeRuleTestResult.cc
	src/model/DescribeCustomizeRuleTestHistogramRequest.cc
	src/model/DescribeCustomizeRuleTestHistogramResult.cc
	src/model/DescribeDataSourceInstanceRequest.cc
	src/model/DescribeDataSourceInstanceResult.cc
	src/model/DescribeDataSourceParametersRequest.cc
	src/model/DescribeDataSourceParametersResult.cc
	src/model/DescribeDisposeAndPlaybookRequest.cc
	src/model/DescribeDisposeAndPlaybookResult.cc
	src/model/DescribeDisposeStrategyPlaybookRequest.cc
	src/model/DescribeDisposeStrategyPlaybookResult.cc
	src/model/DescribeEntityInfoRequest.cc
	src/model/DescribeEntityInfoResult.cc
	src/model/DescribeEventCountByThreatLevelRequest.cc
	src/model/DescribeEventCountByThreatLevelResult.cc
	src/model/DescribeEventDisposeRequest.cc
	src/model/DescribeEventDisposeResult.cc
	src/model/DescribeImportedLogCountRequest.cc
	src/model/DescribeImportedLogCountResult.cc
	src/model/DescribeLogFieldsRequest.cc
	src/model/DescribeLogFieldsResult.cc
	src/model/DescribeLogSourceRequest.cc
	src/model/DescribeLogSourceResult.cc
	src/model/DescribeLogTypeRequest.cc
	src/model/DescribeLogTypeResult.cc
	src/model/DescribeOperatorsRequest.cc
	src/model/DescribeOperatorsResult.cc
	src/model/DescribeProdCountRequest.cc
	src/model/DescribeProdCountResult.cc
	src/model/DescribeScopeUsersRequest.cc
	src/model/DescribeScopeUsersResult.cc
	src/model/DescribeServiceStatusRequest.cc
	src/model/DescribeServiceStatusResult.cc
	src/model/DescribeStorageRequest.cc
	src/model/DescribeStorageResult.cc
	src/model/DescribeUserBuyStatusRequest.cc
	src/model/DescribeUserBuyStatusResult.cc
	src/model/DescribeWafScopeRequest.cc
	src/model/DescribeWafScopeResult.cc
	src/model/DescribeWhiteRuleListRequest.cc
	src/model/DescribeWhiteRuleListResult.cc
	src/model/EnableAccessForCloudSiemRequest.cc
	src/model/EnableAccessForCloudSiemResult.cc
	src/model/EnableServiceForCloudSiemRequest.cc
	src/model/EnableServiceForCloudSiemResult.cc
	src/model/GetCapacityRequest.cc
	src/model/GetCapacityResult.cc
	src/model/GetStorageRequest.cc
	src/model/GetStorageResult.cc
	src/model/ListAccountAccessIdRequest.cc
	src/model/ListAccountAccessIdResult.cc
	src/model/ListAccountsByLogRequest.cc
	src/model/ListAccountsByLogResult.cc
	src/model/ListAllProdsRequest.cc
	src/model/ListAllProdsResult.cc
	src/model/ListAutomateResponseConfigsRequest.cc
	src/model/ListAutomateResponseConfigsResult.cc
	src/model/ListBindAccountRequest.cc
	src/model/ListBindAccountResult.cc
	src/model/ListBindDataSourcesRequest.cc
	src/model/ListBindDataSourcesResult.cc
	src/model/ListCloudSiemCustomizeRulesRequest.cc
	src/model/ListCloudSiemCustomizeRulesResult.cc
	src/model/ListCloudSiemPredefinedRulesRequest.cc
	src/model/ListCloudSiemPredefinedRulesResult.cc
	src/model/ListCustomizeRuleTestResultRequest.cc
	src/model/ListCustomizeRuleTestResultResult.cc
	src/model/ListDataSourceLogsRequest.cc
	src/model/ListDataSourceLogsResult.cc
	src/model/ListDataSourceTypesRequest.cc
	src/model/ListDataSourceTypesResult.cc
	src/model/ListDeliveryRequest.cc
	src/model/ListDeliveryResult.cc
	src/model/ListDisposeStrategyRequest.cc
	src/model/ListDisposeStrategyResult.cc
	src/model/ListEntitiesRequest.cc
	src/model/ListEntitiesResult.cc
	src/model/ListImportedLogsByProdRequest.cc
	src/model/ListImportedLogsByProdResult.cc
	src/model/ListProjectLogStoresRequest.cc
	src/model/ListProjectLogStoresResult.cc
	src/model/ListRdUsersRequest.cc
	src/model/ListRdUsersResult.cc
	src/model/ModifyBindAccountRequest.cc
	src/model/ModifyBindAccountResult.cc
	src/model/ModifyDataSourceRequest.cc
	src/model/ModifyDataSourceResult.cc
	src/model/ModifyDataSourceLogRequest.cc
	src/model/ModifyDataSourceLogResult.cc
	src/model/OpenDeliveryRequest.cc
	src/model/OpenDeliveryResult.cc
	src/model/PostAutomateResponseConfigRequest.cc
	src/model/PostAutomateResponseConfigResult.cc
	src/model/PostCustomizeRuleRequest.cc
	src/model/PostCustomizeRuleResult.cc
	src/model/PostCustomizeRuleTestRequest.cc
	src/model/PostCustomizeRuleTestResult.cc
	src/model/PostEventDisposeAndWhiteruleListRequest.cc
	src/model/PostEventDisposeAndWhiteruleListResult.cc
	src/model/PostEventWhiteruleListRequest.cc
	src/model/PostEventWhiteruleListResult.cc
	src/model/PostFinishCustomizeRuleTestRequest.cc
	src/model/PostFinishCustomizeRuleTestResult.cc
	src/model/PostRuleStatusChangeRequest.cc
	src/model/PostRuleStatusChangeResult.cc
	src/model/RestoreCapacityRequest.cc
	src/model/RestoreCapacityResult.cc
	src/model/SetStorageRequest.cc
	src/model/SetStorageResult.cc
	src/model/SubmitImportLogTasksRequest.cc
	src/model/SubmitImportLogTasksResult.cc
	src/model/UpdateAutomateResponseConfigStatusRequest.cc
	src/model/UpdateAutomateResponseConfigStatusResult.cc
	src/model/UpdateWhiteRuleListRequest.cc
	src/model/UpdateWhiteRuleListResult.cc )

add_library(cloud-siem ${LIB_TYPE}
	${cloud-siem_public_header}
	${cloud-siem_public_header_model}
	${cloud-siem_src})

set_target_properties(cloud-siem
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloud-siem
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cloud-siem
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CLOUD_SIEM_LIBRARY)
endif()

target_include_directories(cloud-siem
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cloud-siem
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cloud-siem
		jsoncpp)
	target_include_directories(cloud-siem
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cloud-siem
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cloud-siem
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cloud-siem
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cloud-siem
		jsoncpp)
endif()

install(FILES ${cloud-siem_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloud-siem)
install(FILES ${cloud-siem_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloud-siem/model)
install(TARGETS cloud-siem
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)