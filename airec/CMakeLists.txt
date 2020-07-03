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

set(airec_public_header 
	include/alibabacloud/airec/AirecClient.h
	include/alibabacloud/airec/AirecExport.h )

set(airec_public_header_model 
	include/alibabacloud/airec/model/AttachDatasetRequest.h
	include/alibabacloud/airec/model/AttachDatasetResult.h
	include/alibabacloud/airec/model/CreateDiversifyRequest.h
	include/alibabacloud/airec/model/CreateDiversifyResult.h
	include/alibabacloud/airec/model/CreateInstanceRequest.h
	include/alibabacloud/airec/model/CreateInstanceResult.h
	include/alibabacloud/airec/model/CreateMixRequest.h
	include/alibabacloud/airec/model/CreateMixResult.h
	include/alibabacloud/airec/model/CreateRuleRequest.h
	include/alibabacloud/airec/model/CreateRuleResult.h
	include/alibabacloud/airec/model/CreateSceneRequest.h
	include/alibabacloud/airec/model/CreateSceneResult.h
	include/alibabacloud/airec/model/DeleteDataSetRequest.h
	include/alibabacloud/airec/model/DeleteDataSetResult.h
	include/alibabacloud/airec/model/DeleteDiversifyRequest.h
	include/alibabacloud/airec/model/DeleteDiversifyResult.h
	include/alibabacloud/airec/model/DeleteMixRequest.h
	include/alibabacloud/airec/model/DeleteMixResult.h
	include/alibabacloud/airec/model/DeleteSceneRequest.h
	include/alibabacloud/airec/model/DeleteSceneResult.h
	include/alibabacloud/airec/model/DescribeDataSetMessageRequest.h
	include/alibabacloud/airec/model/DescribeDataSetMessageResult.h
	include/alibabacloud/airec/model/DescribeDataSetReportRequest.h
	include/alibabacloud/airec/model/DescribeDataSetReportResult.h
	include/alibabacloud/airec/model/DescribeDiversifyRequest.h
	include/alibabacloud/airec/model/DescribeDiversifyResult.h
	include/alibabacloud/airec/model/DescribeExposureSettingsRequest.h
	include/alibabacloud/airec/model/DescribeExposureSettingsResult.h
	include/alibabacloud/airec/model/DescribeInstanceRequest.h
	include/alibabacloud/airec/model/DescribeInstanceResult.h
	include/alibabacloud/airec/model/DescribeMixRequest.h
	include/alibabacloud/airec/model/DescribeMixResult.h
	include/alibabacloud/airec/model/DescribeQuotaRequest.h
	include/alibabacloud/airec/model/DescribeQuotaResult.h
	include/alibabacloud/airec/model/DescribeRegionsRequest.h
	include/alibabacloud/airec/model/DescribeRegionsResult.h
	include/alibabacloud/airec/model/DescribeRuleRequest.h
	include/alibabacloud/airec/model/DescribeRuleResult.h
	include/alibabacloud/airec/model/DescribeSceneRequest.h
	include/alibabacloud/airec/model/DescribeSceneResult.h
	include/alibabacloud/airec/model/DescribeSceneThroughputRequest.h
	include/alibabacloud/airec/model/DescribeSceneThroughputResult.h
	include/alibabacloud/airec/model/DescribeSyncReportDetailRequest.h
	include/alibabacloud/airec/model/DescribeSyncReportDetailResult.h
	include/alibabacloud/airec/model/DescribeSyncReportOutliersRequest.h
	include/alibabacloud/airec/model/DescribeSyncReportOutliersResult.h
	include/alibabacloud/airec/model/DescribeUserMetricsRequest.h
	include/alibabacloud/airec/model/DescribeUserMetricsResult.h
	include/alibabacloud/airec/model/DowngradeInstanceRequest.h
	include/alibabacloud/airec/model/DowngradeInstanceResult.h
	include/alibabacloud/airec/model/ListDashboardRequest.h
	include/alibabacloud/airec/model/ListDashboardResult.h
	include/alibabacloud/airec/model/ListDashboardDetailsRequest.h
	include/alibabacloud/airec/model/ListDashboardDetailsResult.h
	include/alibabacloud/airec/model/ListDashboardDetailsFlowsRequest.h
	include/alibabacloud/airec/model/ListDashboardDetailsFlowsResult.h
	include/alibabacloud/airec/model/ListDashboardMetricsRequest.h
	include/alibabacloud/airec/model/ListDashboardMetricsResult.h
	include/alibabacloud/airec/model/ListDashboardMetricsFlowsRequest.h
	include/alibabacloud/airec/model/ListDashboardMetricsFlowsResult.h
	include/alibabacloud/airec/model/ListDashboardParametersRequest.h
	include/alibabacloud/airec/model/ListDashboardParametersResult.h
	include/alibabacloud/airec/model/ListDashboardUidRequest.h
	include/alibabacloud/airec/model/ListDashboardUidResult.h
	include/alibabacloud/airec/model/ListDataSetRequest.h
	include/alibabacloud/airec/model/ListDataSetResult.h
	include/alibabacloud/airec/model/ListDataSourceRequest.h
	include/alibabacloud/airec/model/ListDataSourceResult.h
	include/alibabacloud/airec/model/ListDiversifyRequest.h
	include/alibabacloud/airec/model/ListDiversifyResult.h
	include/alibabacloud/airec/model/ListInstanceRequest.h
	include/alibabacloud/airec/model/ListInstanceResult.h
	include/alibabacloud/airec/model/ListInstanceTaskRequest.h
	include/alibabacloud/airec/model/ListInstanceTaskResult.h
	include/alibabacloud/airec/model/ListMixRequest.h
	include/alibabacloud/airec/model/ListMixResult.h
	include/alibabacloud/airec/model/ListRuleConditionsRequest.h
	include/alibabacloud/airec/model/ListRuleConditionsResult.h
	include/alibabacloud/airec/model/ListRuleTasksRequest.h
	include/alibabacloud/airec/model/ListRuleTasksResult.h
	include/alibabacloud/airec/model/ListRulesRequest.h
	include/alibabacloud/airec/model/ListRulesResult.h
	include/alibabacloud/airec/model/ListSceneItemsRequest.h
	include/alibabacloud/airec/model/ListSceneItemsResult.h
	include/alibabacloud/airec/model/ListScenesRequest.h
	include/alibabacloud/airec/model/ListScenesResult.h
	include/alibabacloud/airec/model/ListUmengAppkeysRequest.h
	include/alibabacloud/airec/model/ListUmengAppkeysResult.h
	include/alibabacloud/airec/model/ModifyDataSourceRequest.h
	include/alibabacloud/airec/model/ModifyDataSourceResult.h
	include/alibabacloud/airec/model/ModifyDiversifyRequest.h
	include/alibabacloud/airec/model/ModifyDiversifyResult.h
	include/alibabacloud/airec/model/ModifyExposureSettingsRequest.h
	include/alibabacloud/airec/model/ModifyExposureSettingsResult.h
	include/alibabacloud/airec/model/ModifyInstanceRequest.h
	include/alibabacloud/airec/model/ModifyInstanceResult.h
	include/alibabacloud/airec/model/ModifyMixRequest.h
	include/alibabacloud/airec/model/ModifyMixResult.h
	include/alibabacloud/airec/model/ModifyRuleRequest.h
	include/alibabacloud/airec/model/ModifyRuleResult.h
	include/alibabacloud/airec/model/ModifySceneRequest.h
	include/alibabacloud/airec/model/ModifySceneResult.h
	include/alibabacloud/airec/model/PublishRuleRequest.h
	include/alibabacloud/airec/model/PublishRuleResult.h
	include/alibabacloud/airec/model/PushDocumentRequest.h
	include/alibabacloud/airec/model/PushDocumentResult.h
	include/alibabacloud/airec/model/PushInterventionRequest.h
	include/alibabacloud/airec/model/PushInterventionResult.h
	include/alibabacloud/airec/model/QueryDataMessageRequest.h
	include/alibabacloud/airec/model/QueryDataMessageResult.h
	include/alibabacloud/airec/model/QueryExceptionHistoryRequest.h
	include/alibabacloud/airec/model/QueryExceptionHistoryResult.h
	include/alibabacloud/airec/model/QueryRawDataRequest.h
	include/alibabacloud/airec/model/QueryRawDataResult.h
	include/alibabacloud/airec/model/QuerySingleAggregationReportRequest.h
	include/alibabacloud/airec/model/QuerySingleAggregationReportResult.h
	include/alibabacloud/airec/model/QuerySingleReportRequest.h
	include/alibabacloud/airec/model/QuerySingleReportResult.h
	include/alibabacloud/airec/model/QuerySyncReportAggregationRequest.h
	include/alibabacloud/airec/model/QuerySyncReportAggregationResult.h
	include/alibabacloud/airec/model/RecommendRequest.h
	include/alibabacloud/airec/model/RecommendResult.h
	include/alibabacloud/airec/model/RunInstanceRequest.h
	include/alibabacloud/airec/model/RunInstanceResult.h
	include/alibabacloud/airec/model/StopDataSetRequest.h
	include/alibabacloud/airec/model/StopDataSetResult.h
	include/alibabacloud/airec/model/UpgradeInstanceRequest.h
	include/alibabacloud/airec/model/UpgradeInstanceResult.h
	include/alibabacloud/airec/model/ValidateInstanceRequest.h
	include/alibabacloud/airec/model/ValidateInstanceResult.h )

set(airec_src 
	src/AirecClient.cc
	src/model/AttachDatasetRequest.cc
	src/model/AttachDatasetResult.cc
	src/model/CreateDiversifyRequest.cc
	src/model/CreateDiversifyResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/CreateMixRequest.cc
	src/model/CreateMixResult.cc
	src/model/CreateRuleRequest.cc
	src/model/CreateRuleResult.cc
	src/model/CreateSceneRequest.cc
	src/model/CreateSceneResult.cc
	src/model/DeleteDataSetRequest.cc
	src/model/DeleteDataSetResult.cc
	src/model/DeleteDiversifyRequest.cc
	src/model/DeleteDiversifyResult.cc
	src/model/DeleteMixRequest.cc
	src/model/DeleteMixResult.cc
	src/model/DeleteSceneRequest.cc
	src/model/DeleteSceneResult.cc
	src/model/DescribeDataSetMessageRequest.cc
	src/model/DescribeDataSetMessageResult.cc
	src/model/DescribeDataSetReportRequest.cc
	src/model/DescribeDataSetReportResult.cc
	src/model/DescribeDiversifyRequest.cc
	src/model/DescribeDiversifyResult.cc
	src/model/DescribeExposureSettingsRequest.cc
	src/model/DescribeExposureSettingsResult.cc
	src/model/DescribeInstanceRequest.cc
	src/model/DescribeInstanceResult.cc
	src/model/DescribeMixRequest.cc
	src/model/DescribeMixResult.cc
	src/model/DescribeQuotaRequest.cc
	src/model/DescribeQuotaResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeRuleRequest.cc
	src/model/DescribeRuleResult.cc
	src/model/DescribeSceneRequest.cc
	src/model/DescribeSceneResult.cc
	src/model/DescribeSceneThroughputRequest.cc
	src/model/DescribeSceneThroughputResult.cc
	src/model/DescribeSyncReportDetailRequest.cc
	src/model/DescribeSyncReportDetailResult.cc
	src/model/DescribeSyncReportOutliersRequest.cc
	src/model/DescribeSyncReportOutliersResult.cc
	src/model/DescribeUserMetricsRequest.cc
	src/model/DescribeUserMetricsResult.cc
	src/model/DowngradeInstanceRequest.cc
	src/model/DowngradeInstanceResult.cc
	src/model/ListDashboardRequest.cc
	src/model/ListDashboardResult.cc
	src/model/ListDashboardDetailsRequest.cc
	src/model/ListDashboardDetailsResult.cc
	src/model/ListDashboardDetailsFlowsRequest.cc
	src/model/ListDashboardDetailsFlowsResult.cc
	src/model/ListDashboardMetricsRequest.cc
	src/model/ListDashboardMetricsResult.cc
	src/model/ListDashboardMetricsFlowsRequest.cc
	src/model/ListDashboardMetricsFlowsResult.cc
	src/model/ListDashboardParametersRequest.cc
	src/model/ListDashboardParametersResult.cc
	src/model/ListDashboardUidRequest.cc
	src/model/ListDashboardUidResult.cc
	src/model/ListDataSetRequest.cc
	src/model/ListDataSetResult.cc
	src/model/ListDataSourceRequest.cc
	src/model/ListDataSourceResult.cc
	src/model/ListDiversifyRequest.cc
	src/model/ListDiversifyResult.cc
	src/model/ListInstanceRequest.cc
	src/model/ListInstanceResult.cc
	src/model/ListInstanceTaskRequest.cc
	src/model/ListInstanceTaskResult.cc
	src/model/ListMixRequest.cc
	src/model/ListMixResult.cc
	src/model/ListRuleConditionsRequest.cc
	src/model/ListRuleConditionsResult.cc
	src/model/ListRuleTasksRequest.cc
	src/model/ListRuleTasksResult.cc
	src/model/ListRulesRequest.cc
	src/model/ListRulesResult.cc
	src/model/ListSceneItemsRequest.cc
	src/model/ListSceneItemsResult.cc
	src/model/ListScenesRequest.cc
	src/model/ListScenesResult.cc
	src/model/ListUmengAppkeysRequest.cc
	src/model/ListUmengAppkeysResult.cc
	src/model/ModifyDataSourceRequest.cc
	src/model/ModifyDataSourceResult.cc
	src/model/ModifyDiversifyRequest.cc
	src/model/ModifyDiversifyResult.cc
	src/model/ModifyExposureSettingsRequest.cc
	src/model/ModifyExposureSettingsResult.cc
	src/model/ModifyInstanceRequest.cc
	src/model/ModifyInstanceResult.cc
	src/model/ModifyMixRequest.cc
	src/model/ModifyMixResult.cc
	src/model/ModifyRuleRequest.cc
	src/model/ModifyRuleResult.cc
	src/model/ModifySceneRequest.cc
	src/model/ModifySceneResult.cc
	src/model/PublishRuleRequest.cc
	src/model/PublishRuleResult.cc
	src/model/PushDocumentRequest.cc
	src/model/PushDocumentResult.cc
	src/model/PushInterventionRequest.cc
	src/model/PushInterventionResult.cc
	src/model/QueryDataMessageRequest.cc
	src/model/QueryDataMessageResult.cc
	src/model/QueryExceptionHistoryRequest.cc
	src/model/QueryExceptionHistoryResult.cc
	src/model/QueryRawDataRequest.cc
	src/model/QueryRawDataResult.cc
	src/model/QuerySingleAggregationReportRequest.cc
	src/model/QuerySingleAggregationReportResult.cc
	src/model/QuerySingleReportRequest.cc
	src/model/QuerySingleReportResult.cc
	src/model/QuerySyncReportAggregationRequest.cc
	src/model/QuerySyncReportAggregationResult.cc
	src/model/RecommendRequest.cc
	src/model/RecommendResult.cc
	src/model/RunInstanceRequest.cc
	src/model/RunInstanceResult.cc
	src/model/StopDataSetRequest.cc
	src/model/StopDataSetResult.cc
	src/model/UpgradeInstanceRequest.cc
	src/model/UpgradeInstanceResult.cc
	src/model/ValidateInstanceRequest.cc
	src/model/ValidateInstanceResult.cc )

add_library(airec ${LIB_TYPE}
	${airec_public_header}
	${airec_public_header_model}
	${airec_src})

set_target_properties(airec
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}airec
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(airec
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_AIREC_LIBRARY)
endif()

target_include_directories(airec
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(airec
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(airec
		jsoncpp)
	target_include_directories(airec
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(airec
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(airec
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(airec
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(airec
		jsoncpp)
endif()

install(FILES ${airec_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/airec)
install(FILES ${airec_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/airec/model)
install(TARGETS airec
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)