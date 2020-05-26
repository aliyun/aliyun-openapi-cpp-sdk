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

set(sas_public_header 
	include/alibabacloud/sas/SasClient.h
	include/alibabacloud/sas/SasExport.h )

set(sas_public_header_model 
	include/alibabacloud/sas/model/CreateAntiBruteForceRuleRequest.h
	include/alibabacloud/sas/model/CreateAntiBruteForceRuleResult.h
	include/alibabacloud/sas/model/CreateOrUpdateAssetGroupRequest.h
	include/alibabacloud/sas/model/CreateOrUpdateAssetGroupResult.h
	include/alibabacloud/sas/model/CreateSimilarSecurityEventsQueryTaskRequest.h
	include/alibabacloud/sas/model/CreateSimilarSecurityEventsQueryTaskResult.h
	include/alibabacloud/sas/model/DeleteGroupRequest.h
	include/alibabacloud/sas/model/DeleteGroupResult.h
	include/alibabacloud/sas/model/DeleteLoginBaseConfigRequest.h
	include/alibabacloud/sas/model/DeleteLoginBaseConfigResult.h
	include/alibabacloud/sas/model/DeleteTagWithUuidRequest.h
	include/alibabacloud/sas/model/DeleteTagWithUuidResult.h
	include/alibabacloud/sas/model/DescribeAlarmEventDetailRequest.h
	include/alibabacloud/sas/model/DescribeAlarmEventDetailResult.h
	include/alibabacloud/sas/model/DescribeAlarmEventListRequest.h
	include/alibabacloud/sas/model/DescribeAlarmEventListResult.h
	include/alibabacloud/sas/model/DescribeAllEntityRequest.h
	include/alibabacloud/sas/model/DescribeAllEntityResult.h
	include/alibabacloud/sas/model/DescribeAllGroupsRequest.h
	include/alibabacloud/sas/model/DescribeAllGroupsResult.h
	include/alibabacloud/sas/model/DescribeAllRegionsStatisticsRequest.h
	include/alibabacloud/sas/model/DescribeAllRegionsStatisticsResult.h
	include/alibabacloud/sas/model/DescribeAssetDetailByUuidRequest.h
	include/alibabacloud/sas/model/DescribeAssetDetailByUuidResult.h
	include/alibabacloud/sas/model/DescribeAssetDetailByUuidsRequest.h
	include/alibabacloud/sas/model/DescribeAssetDetailByUuidsResult.h
	include/alibabacloud/sas/model/DescribeAutoDelConfigRequest.h
	include/alibabacloud/sas/model/DescribeAutoDelConfigResult.h
	include/alibabacloud/sas/model/DescribeCheckWarningDetailRequest.h
	include/alibabacloud/sas/model/DescribeCheckWarningDetailResult.h
	include/alibabacloud/sas/model/DescribeCheckWarningSummaryRequest.h
	include/alibabacloud/sas/model/DescribeCheckWarningSummaryResult.h
	include/alibabacloud/sas/model/DescribeCheckWarningsRequest.h
	include/alibabacloud/sas/model/DescribeCheckWarningsResult.h
	include/alibabacloud/sas/model/DescribeCloudCenterInstancesRequest.h
	include/alibabacloud/sas/model/DescribeCloudCenterInstancesResult.h
	include/alibabacloud/sas/model/DescribeCloudProductFieldStatisticsRequest.h
	include/alibabacloud/sas/model/DescribeCloudProductFieldStatisticsResult.h
	include/alibabacloud/sas/model/DescribeConcernNecessityRequest.h
	include/alibabacloud/sas/model/DescribeConcernNecessityResult.h
	include/alibabacloud/sas/model/DescribeCriteriaRequest.h
	include/alibabacloud/sas/model/DescribeCriteriaResult.h
	include/alibabacloud/sas/model/DescribeDialogMessagesRequest.h
	include/alibabacloud/sas/model/DescribeDialogMessagesResult.h
	include/alibabacloud/sas/model/DescribeDingTalkRequest.h
	include/alibabacloud/sas/model/DescribeDingTalkResult.h
	include/alibabacloud/sas/model/DescribeDomainCountRequest.h
	include/alibabacloud/sas/model/DescribeDomainCountResult.h
	include/alibabacloud/sas/model/DescribeDomainDetailRequest.h
	include/alibabacloud/sas/model/DescribeDomainDetailResult.h
	include/alibabacloud/sas/model/DescribeDomainListRequest.h
	include/alibabacloud/sas/model/DescribeDomainListResult.h
	include/alibabacloud/sas/model/DescribeEmgVulGroupRequest.h
	include/alibabacloud/sas/model/DescribeEmgVulGroupResult.h
	include/alibabacloud/sas/model/DescribeExportInfoRequest.h
	include/alibabacloud/sas/model/DescribeExportInfoResult.h
	include/alibabacloud/sas/model/DescribeFieldStatisticsRequest.h
	include/alibabacloud/sas/model/DescribeFieldStatisticsResult.h
	include/alibabacloud/sas/model/DescribeGraph4InvestigationOnlineRequest.h
	include/alibabacloud/sas/model/DescribeGraph4InvestigationOnlineResult.h
	include/alibabacloud/sas/model/DescribeGroupedTagsRequest.h
	include/alibabacloud/sas/model/DescribeGroupedTagsResult.h
	include/alibabacloud/sas/model/DescribeGroupedVulRequest.h
	include/alibabacloud/sas/model/DescribeGroupedVulResult.h
	include/alibabacloud/sas/model/DescribeInstanceStatisticsRequest.h
	include/alibabacloud/sas/model/DescribeInstanceStatisticsResult.h
	include/alibabacloud/sas/model/DescribeIpInfoRequest.h
	include/alibabacloud/sas/model/DescribeIpInfoResult.h
	include/alibabacloud/sas/model/DescribeModuleConfigRequest.h
	include/alibabacloud/sas/model/DescribeModuleConfigResult.h
	include/alibabacloud/sas/model/DescribeNoticeConfigRequest.h
	include/alibabacloud/sas/model/DescribeNoticeConfigResult.h
	include/alibabacloud/sas/model/DescribePropertyCountRequest.h
	include/alibabacloud/sas/model/DescribePropertyCountResult.h
	include/alibabacloud/sas/model/DescribePropertyPortDetailRequest.h
	include/alibabacloud/sas/model/DescribePropertyPortDetailResult.h
	include/alibabacloud/sas/model/DescribePropertyPortItemRequest.h
	include/alibabacloud/sas/model/DescribePropertyPortItemResult.h
	include/alibabacloud/sas/model/DescribePropertyProcDetailRequest.h
	include/alibabacloud/sas/model/DescribePropertyProcDetailResult.h
	include/alibabacloud/sas/model/DescribePropertyProcItemRequest.h
	include/alibabacloud/sas/model/DescribePropertyProcItemResult.h
	include/alibabacloud/sas/model/DescribePropertySoftwareDetailRequest.h
	include/alibabacloud/sas/model/DescribePropertySoftwareDetailResult.h
	include/alibabacloud/sas/model/DescribePropertySoftwareItemRequest.h
	include/alibabacloud/sas/model/DescribePropertySoftwareItemResult.h
	include/alibabacloud/sas/model/DescribePropertyUsageNewestRequest.h
	include/alibabacloud/sas/model/DescribePropertyUsageNewestResult.h
	include/alibabacloud/sas/model/DescribePropertyUserDetailRequest.h
	include/alibabacloud/sas/model/DescribePropertyUserDetailResult.h
	include/alibabacloud/sas/model/DescribePropertyUserItemRequest.h
	include/alibabacloud/sas/model/DescribePropertyUserItemResult.h
	include/alibabacloud/sas/model/DescribeRiskCheckItemResultRequest.h
	include/alibabacloud/sas/model/DescribeRiskCheckItemResultResult.h
	include/alibabacloud/sas/model/DescribeRiskCheckResultRequest.h
	include/alibabacloud/sas/model/DescribeRiskCheckResultResult.h
	include/alibabacloud/sas/model/DescribeRiskCheckSummaryRequest.h
	include/alibabacloud/sas/model/DescribeRiskCheckSummaryResult.h
	include/alibabacloud/sas/model/DescribeRiskItemTypeRequest.h
	include/alibabacloud/sas/model/DescribeRiskItemTypeResult.h
	include/alibabacloud/sas/model/DescribeSasAssetStatisticsColumnRequest.h
	include/alibabacloud/sas/model/DescribeSasAssetStatisticsColumnResult.h
	include/alibabacloud/sas/model/DescribeSearchConditionRequest.h
	include/alibabacloud/sas/model/DescribeSearchConditionResult.h
	include/alibabacloud/sas/model/DescribeSecureSuggestionRequest.h
	include/alibabacloud/sas/model/DescribeSecureSuggestionResult.h
	include/alibabacloud/sas/model/DescribeSecurityCheckScheduleConfigRequest.h
	include/alibabacloud/sas/model/DescribeSecurityCheckScheduleConfigResult.h
	include/alibabacloud/sas/model/DescribeSecurityEventOperationsRequest.h
	include/alibabacloud/sas/model/DescribeSecurityEventOperationsResult.h
	include/alibabacloud/sas/model/DescribeSecurityStatInfoRequest.h
	include/alibabacloud/sas/model/DescribeSecurityStatInfoResult.h
	include/alibabacloud/sas/model/DescribeSimilarSecurityEventsRequest.h
	include/alibabacloud/sas/model/DescribeSimilarSecurityEventsResult.h
	include/alibabacloud/sas/model/DescribeStrategyExecDetailRequest.h
	include/alibabacloud/sas/model/DescribeStrategyExecDetailResult.h
	include/alibabacloud/sas/model/DescribeStratetyRequest.h
	include/alibabacloud/sas/model/DescribeStratetyResult.h
	include/alibabacloud/sas/model/DescribeSummaryInfoRequest.h
	include/alibabacloud/sas/model/DescribeSummaryInfoResult.h
	include/alibabacloud/sas/model/DescribeSuspEventDetailRequest.h
	include/alibabacloud/sas/model/DescribeSuspEventDetailResult.h
	include/alibabacloud/sas/model/DescribeSuspEventsRequest.h
	include/alibabacloud/sas/model/DescribeSuspEventsResult.h
	include/alibabacloud/sas/model/DescribeUserBaselineAuthorizationRequest.h
	include/alibabacloud/sas/model/DescribeUserBaselineAuthorizationResult.h
	include/alibabacloud/sas/model/DescribeUserLayoutAuthorizationRequest.h
	include/alibabacloud/sas/model/DescribeUserLayoutAuthorizationResult.h
	include/alibabacloud/sas/model/DescribeVolDingdingMessageRequest.h
	include/alibabacloud/sas/model/DescribeVolDingdingMessageResult.h
	include/alibabacloud/sas/model/DescribeVpcListRequest.h
	include/alibabacloud/sas/model/DescribeVpcListResult.h
	include/alibabacloud/sas/model/DescribeVulDetailsRequest.h
	include/alibabacloud/sas/model/DescribeVulDetailsResult.h
	include/alibabacloud/sas/model/DescribeVulListRequest.h
	include/alibabacloud/sas/model/DescribeVulListResult.h
	include/alibabacloud/sas/model/DescribeVulWhitelistRequest.h
	include/alibabacloud/sas/model/DescribeVulWhitelistResult.h
	include/alibabacloud/sas/model/DescribeWarningMachinesRequest.h
	include/alibabacloud/sas/model/DescribeWarningMachinesResult.h
	include/alibabacloud/sas/model/ExportRecordRequest.h
	include/alibabacloud/sas/model/ExportRecordResult.h
	include/alibabacloud/sas/model/FixCheckWarningsRequest.h
	include/alibabacloud/sas/model/FixCheckWarningsResult.h
	include/alibabacloud/sas/model/GetIOCsRequest.h
	include/alibabacloud/sas/model/GetIOCsResult.h
	include/alibabacloud/sas/model/GetIncIOCsRequest.h
	include/alibabacloud/sas/model/GetIncIOCsResult.h
	include/alibabacloud/sas/model/HandleSimilarSecurityEventsRequest.h
	include/alibabacloud/sas/model/HandleSimilarSecurityEventsResult.h
	include/alibabacloud/sas/model/ModifyAntiBruteForceRuleRequest.h
	include/alibabacloud/sas/model/ModifyAntiBruteForceRuleResult.h
	include/alibabacloud/sas/model/ModifyCreateVulWhitelistRequest.h
	include/alibabacloud/sas/model/ModifyCreateVulWhitelistResult.h
	include/alibabacloud/sas/model/ModifyEmgVulSubmitRequest.h
	include/alibabacloud/sas/model/ModifyEmgVulSubmitResult.h
	include/alibabacloud/sas/model/ModifyGroupPropertyRequest.h
	include/alibabacloud/sas/model/ModifyGroupPropertyResult.h
	include/alibabacloud/sas/model/ModifyLoginBaseConfigRequest.h
	include/alibabacloud/sas/model/ModifyLoginBaseConfigResult.h
	include/alibabacloud/sas/model/ModifyLoginSwitchConfigRequest.h
	include/alibabacloud/sas/model/ModifyLoginSwitchConfigResult.h
	include/alibabacloud/sas/model/ModifyNoticeConfigRequest.h
	include/alibabacloud/sas/model/ModifyNoticeConfigResult.h
	include/alibabacloud/sas/model/ModifyOperateVulRequest.h
	include/alibabacloud/sas/model/ModifyOperateVulResult.h
	include/alibabacloud/sas/model/ModifyPushAllTaskRequest.h
	include/alibabacloud/sas/model/ModifyPushAllTaskResult.h
	include/alibabacloud/sas/model/ModifyRiskCheckStatusRequest.h
	include/alibabacloud/sas/model/ModifyRiskCheckStatusResult.h
	include/alibabacloud/sas/model/ModifyRiskSingleResultStatusRequest.h
	include/alibabacloud/sas/model/ModifyRiskSingleResultStatusResult.h
	include/alibabacloud/sas/model/ModifySecurityCheckScheduleConfigRequest.h
	include/alibabacloud/sas/model/ModifySecurityCheckScheduleConfigResult.h
	include/alibabacloud/sas/model/ModifyStartVulScanRequest.h
	include/alibabacloud/sas/model/ModifyStartVulScanResult.h
	include/alibabacloud/sas/model/ModifyTagWithUuidRequest.h
	include/alibabacloud/sas/model/ModifyTagWithUuidResult.h
	include/alibabacloud/sas/model/ModifyVulTargetConfigRequest.h
	include/alibabacloud/sas/model/ModifyVulTargetConfigResult.h
	include/alibabacloud/sas/model/OperateSuspiciousTargetConfigRequest.h
	include/alibabacloud/sas/model/OperateSuspiciousTargetConfigResult.h
	include/alibabacloud/sas/model/OperationSuspEventsRequest.h
	include/alibabacloud/sas/model/OperationSuspEventsResult.h
	include/alibabacloud/sas/model/PauseClientRequest.h
	include/alibabacloud/sas/model/PauseClientResult.h
	include/alibabacloud/sas/model/SasInstallCodeRequest.h
	include/alibabacloud/sas/model/SasInstallCodeResult.h
	include/alibabacloud/sas/model/StartBaselineSecurityCheckRequest.h
	include/alibabacloud/sas/model/StartBaselineSecurityCheckResult.h
	include/alibabacloud/sas/model/ValidateHcWarningsRequest.h
	include/alibabacloud/sas/model/ValidateHcWarningsResult.h )

set(sas_src 
	src/SasClient.cc
	src/model/CreateAntiBruteForceRuleRequest.cc
	src/model/CreateAntiBruteForceRuleResult.cc
	src/model/CreateOrUpdateAssetGroupRequest.cc
	src/model/CreateOrUpdateAssetGroupResult.cc
	src/model/CreateSimilarSecurityEventsQueryTaskRequest.cc
	src/model/CreateSimilarSecurityEventsQueryTaskResult.cc
	src/model/DeleteGroupRequest.cc
	src/model/DeleteGroupResult.cc
	src/model/DeleteLoginBaseConfigRequest.cc
	src/model/DeleteLoginBaseConfigResult.cc
	src/model/DeleteTagWithUuidRequest.cc
	src/model/DeleteTagWithUuidResult.cc
	src/model/DescribeAlarmEventDetailRequest.cc
	src/model/DescribeAlarmEventDetailResult.cc
	src/model/DescribeAlarmEventListRequest.cc
	src/model/DescribeAlarmEventListResult.cc
	src/model/DescribeAllEntityRequest.cc
	src/model/DescribeAllEntityResult.cc
	src/model/DescribeAllGroupsRequest.cc
	src/model/DescribeAllGroupsResult.cc
	src/model/DescribeAllRegionsStatisticsRequest.cc
	src/model/DescribeAllRegionsStatisticsResult.cc
	src/model/DescribeAssetDetailByUuidRequest.cc
	src/model/DescribeAssetDetailByUuidResult.cc
	src/model/DescribeAssetDetailByUuidsRequest.cc
	src/model/DescribeAssetDetailByUuidsResult.cc
	src/model/DescribeAutoDelConfigRequest.cc
	src/model/DescribeAutoDelConfigResult.cc
	src/model/DescribeCheckWarningDetailRequest.cc
	src/model/DescribeCheckWarningDetailResult.cc
	src/model/DescribeCheckWarningSummaryRequest.cc
	src/model/DescribeCheckWarningSummaryResult.cc
	src/model/DescribeCheckWarningsRequest.cc
	src/model/DescribeCheckWarningsResult.cc
	src/model/DescribeCloudCenterInstancesRequest.cc
	src/model/DescribeCloudCenterInstancesResult.cc
	src/model/DescribeCloudProductFieldStatisticsRequest.cc
	src/model/DescribeCloudProductFieldStatisticsResult.cc
	src/model/DescribeConcernNecessityRequest.cc
	src/model/DescribeConcernNecessityResult.cc
	src/model/DescribeCriteriaRequest.cc
	src/model/DescribeCriteriaResult.cc
	src/model/DescribeDialogMessagesRequest.cc
	src/model/DescribeDialogMessagesResult.cc
	src/model/DescribeDingTalkRequest.cc
	src/model/DescribeDingTalkResult.cc
	src/model/DescribeDomainCountRequest.cc
	src/model/DescribeDomainCountResult.cc
	src/model/DescribeDomainDetailRequest.cc
	src/model/DescribeDomainDetailResult.cc
	src/model/DescribeDomainListRequest.cc
	src/model/DescribeDomainListResult.cc
	src/model/DescribeEmgVulGroupRequest.cc
	src/model/DescribeEmgVulGroupResult.cc
	src/model/DescribeExportInfoRequest.cc
	src/model/DescribeExportInfoResult.cc
	src/model/DescribeFieldStatisticsRequest.cc
	src/model/DescribeFieldStatisticsResult.cc
	src/model/DescribeGraph4InvestigationOnlineRequest.cc
	src/model/DescribeGraph4InvestigationOnlineResult.cc
	src/model/DescribeGroupedTagsRequest.cc
	src/model/DescribeGroupedTagsResult.cc
	src/model/DescribeGroupedVulRequest.cc
	src/model/DescribeGroupedVulResult.cc
	src/model/DescribeInstanceStatisticsRequest.cc
	src/model/DescribeInstanceStatisticsResult.cc
	src/model/DescribeIpInfoRequest.cc
	src/model/DescribeIpInfoResult.cc
	src/model/DescribeModuleConfigRequest.cc
	src/model/DescribeModuleConfigResult.cc
	src/model/DescribeNoticeConfigRequest.cc
	src/model/DescribeNoticeConfigResult.cc
	src/model/DescribePropertyCountRequest.cc
	src/model/DescribePropertyCountResult.cc
	src/model/DescribePropertyPortDetailRequest.cc
	src/model/DescribePropertyPortDetailResult.cc
	src/model/DescribePropertyPortItemRequest.cc
	src/model/DescribePropertyPortItemResult.cc
	src/model/DescribePropertyProcDetailRequest.cc
	src/model/DescribePropertyProcDetailResult.cc
	src/model/DescribePropertyProcItemRequest.cc
	src/model/DescribePropertyProcItemResult.cc
	src/model/DescribePropertySoftwareDetailRequest.cc
	src/model/DescribePropertySoftwareDetailResult.cc
	src/model/DescribePropertySoftwareItemRequest.cc
	src/model/DescribePropertySoftwareItemResult.cc
	src/model/DescribePropertyUsageNewestRequest.cc
	src/model/DescribePropertyUsageNewestResult.cc
	src/model/DescribePropertyUserDetailRequest.cc
	src/model/DescribePropertyUserDetailResult.cc
	src/model/DescribePropertyUserItemRequest.cc
	src/model/DescribePropertyUserItemResult.cc
	src/model/DescribeRiskCheckItemResultRequest.cc
	src/model/DescribeRiskCheckItemResultResult.cc
	src/model/DescribeRiskCheckResultRequest.cc
	src/model/DescribeRiskCheckResultResult.cc
	src/model/DescribeRiskCheckSummaryRequest.cc
	src/model/DescribeRiskCheckSummaryResult.cc
	src/model/DescribeRiskItemTypeRequest.cc
	src/model/DescribeRiskItemTypeResult.cc
	src/model/DescribeSasAssetStatisticsColumnRequest.cc
	src/model/DescribeSasAssetStatisticsColumnResult.cc
	src/model/DescribeSearchConditionRequest.cc
	src/model/DescribeSearchConditionResult.cc
	src/model/DescribeSecureSuggestionRequest.cc
	src/model/DescribeSecureSuggestionResult.cc
	src/model/DescribeSecurityCheckScheduleConfigRequest.cc
	src/model/DescribeSecurityCheckScheduleConfigResult.cc
	src/model/DescribeSecurityEventOperationsRequest.cc
	src/model/DescribeSecurityEventOperationsResult.cc
	src/model/DescribeSecurityStatInfoRequest.cc
	src/model/DescribeSecurityStatInfoResult.cc
	src/model/DescribeSimilarSecurityEventsRequest.cc
	src/model/DescribeSimilarSecurityEventsResult.cc
	src/model/DescribeStrategyExecDetailRequest.cc
	src/model/DescribeStrategyExecDetailResult.cc
	src/model/DescribeStratetyRequest.cc
	src/model/DescribeStratetyResult.cc
	src/model/DescribeSummaryInfoRequest.cc
	src/model/DescribeSummaryInfoResult.cc
	src/model/DescribeSuspEventDetailRequest.cc
	src/model/DescribeSuspEventDetailResult.cc
	src/model/DescribeSuspEventsRequest.cc
	src/model/DescribeSuspEventsResult.cc
	src/model/DescribeUserBaselineAuthorizationRequest.cc
	src/model/DescribeUserBaselineAuthorizationResult.cc
	src/model/DescribeUserLayoutAuthorizationRequest.cc
	src/model/DescribeUserLayoutAuthorizationResult.cc
	src/model/DescribeVolDingdingMessageRequest.cc
	src/model/DescribeVolDingdingMessageResult.cc
	src/model/DescribeVpcListRequest.cc
	src/model/DescribeVpcListResult.cc
	src/model/DescribeVulDetailsRequest.cc
	src/model/DescribeVulDetailsResult.cc
	src/model/DescribeVulListRequest.cc
	src/model/DescribeVulListResult.cc
	src/model/DescribeVulWhitelistRequest.cc
	src/model/DescribeVulWhitelistResult.cc
	src/model/DescribeWarningMachinesRequest.cc
	src/model/DescribeWarningMachinesResult.cc
	src/model/ExportRecordRequest.cc
	src/model/ExportRecordResult.cc
	src/model/FixCheckWarningsRequest.cc
	src/model/FixCheckWarningsResult.cc
	src/model/GetIOCsRequest.cc
	src/model/GetIOCsResult.cc
	src/model/GetIncIOCsRequest.cc
	src/model/GetIncIOCsResult.cc
	src/model/HandleSimilarSecurityEventsRequest.cc
	src/model/HandleSimilarSecurityEventsResult.cc
	src/model/ModifyAntiBruteForceRuleRequest.cc
	src/model/ModifyAntiBruteForceRuleResult.cc
	src/model/ModifyCreateVulWhitelistRequest.cc
	src/model/ModifyCreateVulWhitelistResult.cc
	src/model/ModifyEmgVulSubmitRequest.cc
	src/model/ModifyEmgVulSubmitResult.cc
	src/model/ModifyGroupPropertyRequest.cc
	src/model/ModifyGroupPropertyResult.cc
	src/model/ModifyLoginBaseConfigRequest.cc
	src/model/ModifyLoginBaseConfigResult.cc
	src/model/ModifyLoginSwitchConfigRequest.cc
	src/model/ModifyLoginSwitchConfigResult.cc
	src/model/ModifyNoticeConfigRequest.cc
	src/model/ModifyNoticeConfigResult.cc
	src/model/ModifyOperateVulRequest.cc
	src/model/ModifyOperateVulResult.cc
	src/model/ModifyPushAllTaskRequest.cc
	src/model/ModifyPushAllTaskResult.cc
	src/model/ModifyRiskCheckStatusRequest.cc
	src/model/ModifyRiskCheckStatusResult.cc
	src/model/ModifyRiskSingleResultStatusRequest.cc
	src/model/ModifyRiskSingleResultStatusResult.cc
	src/model/ModifySecurityCheckScheduleConfigRequest.cc
	src/model/ModifySecurityCheckScheduleConfigResult.cc
	src/model/ModifyStartVulScanRequest.cc
	src/model/ModifyStartVulScanResult.cc
	src/model/ModifyTagWithUuidRequest.cc
	src/model/ModifyTagWithUuidResult.cc
	src/model/ModifyVulTargetConfigRequest.cc
	src/model/ModifyVulTargetConfigResult.cc
	src/model/OperateSuspiciousTargetConfigRequest.cc
	src/model/OperateSuspiciousTargetConfigResult.cc
	src/model/OperationSuspEventsRequest.cc
	src/model/OperationSuspEventsResult.cc
	src/model/PauseClientRequest.cc
	src/model/PauseClientResult.cc
	src/model/SasInstallCodeRequest.cc
	src/model/SasInstallCodeResult.cc
	src/model/StartBaselineSecurityCheckRequest.cc
	src/model/StartBaselineSecurityCheckResult.cc
	src/model/ValidateHcWarningsRequest.cc
	src/model/ValidateHcWarningsResult.cc )

add_library(sas ${LIB_TYPE}
	${sas_public_header}
	${sas_public_header_model}
	${sas_src})

set_target_properties(sas
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sas
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sas
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SAS_LIBRARY)
endif()

target_include_directories(sas
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sas
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sas
		jsoncpp)
	target_include_directories(sas
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sas
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sas
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sas
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sas
		jsoncpp)
endif()

install(FILES ${sas_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sas)
install(FILES ${sas_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sas/model)
install(TARGETS sas
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)