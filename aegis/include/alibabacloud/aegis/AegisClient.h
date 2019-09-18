/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_AEGIS_AEGISCLIENT_H_
#define ALIBABACLOUD_AEGIS_AEGISCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AegisExport.h"
#include "model/AddEventProcessRequest.h"
#include "model/AddEventProcessResult.h"
#include "model/AutoUpgradeSasRequest.h"
#include "model/AutoUpgradeSasResult.h"
#include "model/AutoUpgradeToSasAdvancedVersionRequest.h"
#include "model/AutoUpgradeToSasAdvancedVersionResult.h"
#include "model/BatchDeleteWhiteListRequest.h"
#include "model/BatchDeleteWhiteListResult.h"
#include "model/CanTrySasRequest.h"
#include "model/CanTrySasResult.h"
#include "model/CopyCustomizeReportConfigRequest.h"
#include "model/CopyCustomizeReportConfigResult.h"
#include "model/CreatScreenSettingRequest.h"
#include "model/CreatScreenSettingResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateLogQueryRequest.h"
#include "model/CreateLogQueryResult.h"
#include "model/CreateOrUpdateDataSourceRequest.h"
#include "model/CreateOrUpdateDataSourceResult.h"
#include "model/CreateOrUpdateDingTalkRequest.h"
#include "model/CreateOrUpdateDingTalkResult.h"
#include "model/CreateOrUpdateGroupRequest.h"
#include "model/CreateOrUpdateGroupResult.h"
#include "model/CreateOrUpdateJoinRuleRequest.h"
#include "model/CreateOrUpdateJoinRuleResult.h"
#include "model/CreateOrUpdateRuleRequest.h"
#include "model/CreateOrUpdateRuleResult.h"
#include "model/CreateScreenSettingRequest.h"
#include "model/CreateScreenSettingResult.h"
#include "model/CreateSuspEventNoteRequest.h"
#include "model/CreateSuspEventNoteResult.h"
#include "model/CreateSuspiciousExportRequest.h"
#include "model/CreateSuspiciousExportResult.h"
#include "model/CreateUserSettingRequest.h"
#include "model/CreateUserSettingResult.h"
#include "model/CreateUserWhiteListRequest.h"
#include "model/CreateUserWhiteListResult.h"
#include "model/CreateVulWhitelistRequest.h"
#include "model/CreateVulWhitelistResult.h"
#include "model/DeleteCustomizeReportRequest.h"
#include "model/DeleteCustomizeReportResult.h"
#include "model/DeleteDingTalkRequest.h"
#include "model/DeleteDingTalkResult.h"
#include "model/DeleteJoinRuleRequest.h"
#include "model/DeleteJoinRuleResult.h"
#include "model/DeleteLogQueryRequest.h"
#include "model/DeleteLogQueryResult.h"
#include "model/DeleteRuleRequest.h"
#include "model/DeleteRuleResult.h"
#include "model/DeleteRuleGroupRequest.h"
#include "model/DeleteRuleGroupResult.h"
#include "model/DeleteScreenSettingRequest.h"
#include "model/DeleteScreenSettingResult.h"
#include "model/DeleteSearchConditionRequest.h"
#include "model/DeleteSearchConditionResult.h"
#include "model/DeleteStrategyRequest.h"
#include "model/DeleteStrategyResult.h"
#include "model/DeleteSuspEventNodeRequest.h"
#include "model/DeleteSuspEventNodeResult.h"
#include "model/DeleteVulBatchRequest.h"
#include "model/DeleteVulBatchResult.h"
#include "model/DeleteVulWhitelistRequest.h"
#include "model/DeleteVulWhitelistResult.h"
#include "model/DescribeAccessKeyLeakDetailRequest.h"
#include "model/DescribeAccessKeyLeakDetailResult.h"
#include "model/DescribeAccesskeyLeakListRequest.h"
#include "model/DescribeAccesskeyLeakListResult.h"
#include "model/DescribeAccesskeyRunInfoRequest.h"
#include "model/DescribeAccesskeyRunInfoResult.h"
#include "model/DescribeAgentInstallStatusRequest.h"
#include "model/DescribeAgentInstallStatusResult.h"
#include "model/DescribeAlarmEventDetailRequest.h"
#include "model/DescribeAlarmEventDetailResult.h"
#include "model/DescribeAlarmEventListRequest.h"
#include "model/DescribeAlarmEventListResult.h"
#include "model/DescribeAllRegionsStatisticsRequest.h"
#include "model/DescribeAllRegionsStatisticsResult.h"
#include "model/DescribeAnalysisCurveRequest.h"
#include "model/DescribeAnalysisCurveResult.h"
#include "model/DescribeAnalysisHistogramsRequest.h"
#include "model/DescribeAnalysisHistogramsResult.h"
#include "model/DescribeAnalysisLogsRequest.h"
#include "model/DescribeAnalysisLogsResult.h"
#include "model/DescribeAnalysisShipperStatusRequest.h"
#include "model/DescribeAnalysisShipperStatusResult.h"
#include "model/DescribeAnalysisSlsIndexRequest.h"
#include "model/DescribeAnalysisSlsIndexResult.h"
#include "model/DescribeAnalysisStatisticsRequest.h"
#include "model/DescribeAnalysisStatisticsResult.h"
#include "model/DescribeApiBuySummaryRequest.h"
#include "model/DescribeApiBuySummaryResult.h"
#include "model/DescribeAssetDetailByUuidRequest.h"
#include "model/DescribeAssetDetailByUuidResult.h"
#include "model/DescribeAssetListRequest.h"
#include "model/DescribeAssetListResult.h"
#include "model/DescribeAssetSummaryRequest.h"
#include "model/DescribeAssetSummaryResult.h"
#include "model/DescribeAttackAnalysisDataRequest.h"
#include "model/DescribeAttackAnalysisDataResult.h"
#include "model/DescribeAutoDelConfigRequest.h"
#include "model/DescribeAutoDelConfigResult.h"
#include "model/DescribeBizStatSimpleQueryResultRequest.h"
#include "model/DescribeBizStatSimpleQueryResultResult.h"
#include "model/DescribeBuySummaryRequest.h"
#include "model/DescribeBuySummaryResult.h"
#include "model/DescribeCanTrySasRequest.h"
#include "model/DescribeCanTrySasResult.h"
#include "model/DescribeCanUpgradeSasRequest.h"
#include "model/DescribeCanUpgradeSasResult.h"
#include "model/DescribeChartDataRequest.h"
#include "model/DescribeChartDataResult.h"
#include "model/DescribeChartListRequest.h"
#include "model/DescribeChartListResult.h"
#include "model/DescribeCheckWarningCountRequest.h"
#include "model/DescribeCheckWarningCountResult.h"
#include "model/DescribeCheckWarningDetailRequest.h"
#include "model/DescribeCheckWarningDetailResult.h"
#include "model/DescribeCheckWarningSummaryRequest.h"
#include "model/DescribeCheckWarningSummaryResult.h"
#include "model/DescribeCheckWarningsRequest.h"
#include "model/DescribeCheckWarningsResult.h"
#include "model/DescribeConcernNecessityRequest.h"
#include "model/DescribeConcernNecessityResult.h"
#include "model/DescribeCustomizeReportChartDataRequest.h"
#include "model/DescribeCustomizeReportChartDataResult.h"
#include "model/DescribeCustomizeReportChartListRequest.h"
#include "model/DescribeCustomizeReportChartListResult.h"
#include "model/DescribeCustomizeReportConfigDetailRequest.h"
#include "model/DescribeCustomizeReportConfigDetailResult.h"
#include "model/DescribeCustomizeReportListRequest.h"
#include "model/DescribeCustomizeReportListResult.h"
#include "model/DescribeDataSourceRequest.h"
#include "model/DescribeDataSourceResult.h"
#include "model/DescribeDefenceThreadRequest.h"
#include "model/DescribeDefenceThreadResult.h"
#include "model/DescribeDingTalkRequest.h"
#include "model/DescribeDingTalkResult.h"
#include "model/DescribeEcsStsStatusRequest.h"
#include "model/DescribeEcsStsStatusResult.h"
#include "model/DescribeEmgNoticeRequest.h"
#include "model/DescribeEmgNoticeResult.h"
#include "model/DescribeEmgUserAgreementRequest.h"
#include "model/DescribeEmgUserAgreementResult.h"
#include "model/DescribeEmgVulGroupRequest.h"
#include "model/DescribeEmgVulGroupResult.h"
#include "model/DescribeEntityListRequest.h"
#include "model/DescribeEntityListResult.h"
#include "model/DescribeEventCountCurveRequest.h"
#include "model/DescribeEventCountCurveResult.h"
#include "model/DescribeEventLevelCountRequest.h"
#include "model/DescribeEventLevelCountResult.h"
#include "model/DescribeExportInfoRequest.h"
#include "model/DescribeExportInfoResult.h"
#include "model/DescribeFilterFieldsRequest.h"
#include "model/DescribeFilterFieldsResult.h"
#include "model/DescribeGrayFuncRequest.h"
#include "model/DescribeGrayFuncResult.h"
#include "model/DescribeGroupListRequest.h"
#include "model/DescribeGroupListResult.h"
#include "model/DescribeGroupStructRequest.h"
#include "model/DescribeGroupStructResult.h"
#include "model/DescribeGroupedVulRequest.h"
#include "model/DescribeGroupedVulResult.h"
#include "model/DescribeHistogramRequest.h"
#include "model/DescribeHistogramResult.h"
#include "model/DescribeHostStatisticsRequest.h"
#include "model/DescribeHostStatisticsResult.h"
#include "model/DescribeInstanceStatisticsRequest.h"
#include "model/DescribeInstanceStatisticsResult.h"
#include "model/DescribeJoinRuleListRequest.h"
#include "model/DescribeJoinRuleListResult.h"
#include "model/DescribeLatestActionsRequest.h"
#include "model/DescribeLatestActionsResult.h"
#include "model/DescribeListAccessKeyIdAuthRequest.h"
#include "model/DescribeListAccessKeyIdAuthResult.h"
#include "model/DescribeLogInfoRequest.h"
#include "model/DescribeLogInfoResult.h"
#include "model/DescribeLogItemsRequest.h"
#include "model/DescribeLogItemsResult.h"
#include "model/DescribeLogMetaRequest.h"
#include "model/DescribeLogMetaResult.h"
#include "model/DescribeLogQueryRequest.h"
#include "model/DescribeLogQueryResult.h"
#include "model/DescribeLogShipperStatusRequest.h"
#include "model/DescribeLogShipperStatusResult.h"
#include "model/DescribeLoginLogsRequest.h"
#include "model/DescribeLoginLogsResult.h"
#include "model/DescribeLogstoreStorageRequest.h"
#include "model/DescribeLogstoreStorageResult.h"
#include "model/DescribeMacConfigRequest.h"
#include "model/DescribeMacConfigResult.h"
#include "model/DescribeMachineConfigRequest.h"
#include "model/DescribeMachineConfigResult.h"
#include "model/DescribeMetaDataRequest.h"
#include "model/DescribeMetaDataResult.h"
#include "model/DescribeNsasSuspEventTypeRequest.h"
#include "model/DescribeNsasSuspEventTypeResult.h"
#include "model/DescribeOperateInfoRequest.h"
#include "model/DescribeOperateInfoResult.h"
#include "model/DescribeQuaraFileRequest.h"
#include "model/DescribeQuaraFileResult.h"
#include "model/DescribeResultListRequest.h"
#include "model/DescribeResultListResult.h"
#include "model/DescribeRiskTypeRequest.h"
#include "model/DescribeRiskTypeResult.h"
#include "model/DescribeRiskWhiteListRequest.h"
#include "model/DescribeRiskWhiteListResult.h"
#include "model/DescribeRisksRequest.h"
#include "model/DescribeRisksResult.h"
#include "model/DescribeRuleListRequest.h"
#include "model/DescribeRuleListResult.h"
#include "model/DescribeSasAssetStatisticsRequest.h"
#include "model/DescribeSasAssetStatisticsResult.h"
#include "model/DescribeSasAssetStatisticsColumnRequest.h"
#include "model/DescribeSasAssetStatisticsColumnResult.h"
#include "model/DescribeSasLeftConditionRequest.h"
#include "model/DescribeSasLeftConditionResult.h"
#include "model/DescribeScreenAlarmEventListRequest.h"
#include "model/DescribeScreenAlarmEventListResult.h"
#include "model/DescribeScreenAttackAnalysisDataRequest.h"
#include "model/DescribeScreenAttackAnalysisDataResult.h"
#include "model/DescribeScreenBizStatSimpleQueryResultRequest.h"
#include "model/DescribeScreenBizStatSimpleQueryResultResult.h"
#include "model/DescribeScreenCityMonitorDataRequest.h"
#include "model/DescribeScreenCityMonitorDataResult.h"
#include "model/DescribeScreenCloudHcRiskRequest.h"
#include "model/DescribeScreenCloudHcRiskResult.h"
#include "model/DescribeScreenDataMapRequest.h"
#include "model/DescribeScreenDataMapResult.h"
#include "model/DescribeScreenEmerRiskRequest.h"
#include "model/DescribeScreenEmerRiskResult.h"
#include "model/DescribeScreenFlowRequestCountRequest.h"
#include "model/DescribeScreenFlowRequestCountResult.h"
#include "model/DescribeScreenHostStatisticsRequest.h"
#include "model/DescribeScreenHostStatisticsResult.h"
#include "model/DescribeScreenOperateInfoRequest.h"
#include "model/DescribeScreenOperateInfoResult.h"
#include "model/DescribeScreenOssUploadInfoRequest.h"
#include "model/DescribeScreenOssUploadInfoResult.h"
#include "model/DescribeScreenRequestTopTypeRequest.h"
#include "model/DescribeScreenRequestTopTypeResult.h"
#include "model/DescribeScreenScoreThreadRequest.h"
#include "model/DescribeScreenScoreThreadResult.h"
#include "model/DescribeScreenSecurityStatInfoRequest.h"
#include "model/DescribeScreenSecurityStatInfoResult.h"
#include "model/DescribeScreenSettingRequest.h"
#include "model/DescribeScreenSettingResult.h"
#include "model/DescribeScreenSettingsRequest.h"
#include "model/DescribeScreenSettingsResult.h"
#include "model/DescribeScreenSummaryInfoRequest.h"
#include "model/DescribeScreenSummaryInfoResult.h"
#include "model/DescribeScreenTitlesRequest.h"
#include "model/DescribeScreenTitlesResult.h"
#include "model/DescribeScreenTopRequestAndFlowRequest.h"
#include "model/DescribeScreenTopRequestAndFlowResult.h"
#include "model/DescribeScreenVersionConfigRequest.h"
#include "model/DescribeScreenVersionConfigResult.h"
#include "model/DescribeSearchConditionRequest.h"
#include "model/DescribeSearchConditionResult.h"
#include "model/DescribeSecureSuggestionRequest.h"
#include "model/DescribeSecureSuggestionResult.h"
#include "model/DescribeSecurityStatInfoRequest.h"
#include "model/DescribeSecurityStatInfoResult.h"
#include "model/DescribeSlsProjectRequest.h"
#include "model/DescribeSlsProjectResult.h"
#include "model/DescribeStatisticsRequest.h"
#include "model/DescribeStatisticsResult.h"
#include "model/DescribeStrategyExecDetailRequest.h"
#include "model/DescribeStrategyExecDetailResult.h"
#include "model/DescribeStrategyProcessRequest.h"
#include "model/DescribeStrategyProcessResult.h"
#include "model/DescribeStrategyTargetRequest.h"
#include "model/DescribeStrategyTargetResult.h"
#include "model/DescribeStratetyRequest.h"
#include "model/DescribeStratetyResult.h"
#include "model/DescribeStratetyDetailRequest.h"
#include "model/DescribeStratetyDetailResult.h"
#include "model/DescribeSummaryInfoRequest.h"
#include "model/DescribeSummaryInfoResult.h"
#include "model/DescribeSupervisonInfoRequest.h"
#include "model/DescribeSupervisonInfoResult.h"
#include "model/DescribeSuspEventDetailRequest.h"
#include "model/DescribeSuspEventDetailResult.h"
#include "model/DescribeSuspEventExportInfoRequest.h"
#include "model/DescribeSuspEventExportInfoResult.h"
#include "model/DescribeSuspEventQuaraFilesRequest.h"
#include "model/DescribeSuspEventQuaraFilesResult.h"
#include "model/DescribeSuspEventTypesRequest.h"
#include "model/DescribeSuspEventTypesResult.h"
#include "model/DescribeSuspEventUserSettingRequest.h"
#include "model/DescribeSuspEventUserSettingResult.h"
#include "model/DescribeSuspEventsRequest.h"
#include "model/DescribeSuspEventsResult.h"
#include "model/DescribeSuspTrendStatisticsRequest.h"
#include "model/DescribeSuspTrendStatisticsResult.h"
#include "model/DescribeSuspiciousEventsRequest.h"
#include "model/DescribeSuspiciousEventsResult.h"
#include "model/DescribeSuspiciousExportInfoRequest.h"
#include "model/DescribeSuspiciousExportInfoResult.h"
#include "model/DescribeSuspiciousOverallConfigRequest.h"
#include "model/DescribeSuspiciousOverallConfigResult.h"
#include "model/DescribeSuspiciousUUIDConfigRequest.h"
#include "model/DescribeSuspiciousUUIDConfigResult.h"
#include "model/DescribeTargetRequest.h"
#include "model/DescribeTargetResult.h"
#include "model/DescribeTargetConfigRequest.h"
#include "model/DescribeTargetConfigResult.h"
#include "model/DescribeTopRiskyAssetsRequest.h"
#include "model/DescribeTopRiskyAssetsResult.h"
#include "model/DescribeTopicListRequest.h"
#include "model/DescribeTopicListResult.h"
#include "model/DescribeTotalStatisticsRequest.h"
#include "model/DescribeTotalStatisticsResult.h"
#include "model/DescribeTraceInfoDetailRequest.h"
#include "model/DescribeTraceInfoDetailResult.h"
#include "model/DescribeTraceInfoNodeRequest.h"
#include "model/DescribeTraceInfoNodeResult.h"
#include "model/DescribeTraceInfoNodeListRequest.h"
#include "model/DescribeTraceInfoNodeListResult.h"
#include "model/DescribeUserSettingRequest.h"
#include "model/DescribeUserSettingResult.h"
#include "model/DescribeUuidConfigRequest.h"
#include "model/DescribeUuidConfigResult.h"
#include "model/DescribeVersionConfigRequest.h"
#include "model/DescribeVersionConfigResult.h"
#include "model/DescribeVulBatchRequest.h"
#include "model/DescribeVulBatchResult.h"
#include "model/DescribeVulConfigRequest.h"
#include "model/DescribeVulConfigResult.h"
#include "model/DescribeVulDetailsRequest.h"
#include "model/DescribeVulDetailsResult.h"
#include "model/DescribeVulExportInfoRequest.h"
#include "model/DescribeVulExportInfoResult.h"
#include "model/DescribeVulLevelRequest.h"
#include "model/DescribeVulLevelResult.h"
#include "model/DescribeVulLevelStatisticsRequest.h"
#include "model/DescribeVulLevelStatisticsResult.h"
#include "model/DescribeVulListRequest.h"
#include "model/DescribeVulListResult.h"
#include "model/DescribeVulMachineListRequest.h"
#include "model/DescribeVulMachineListResult.h"
#include "model/DescribeVulNumStatisticsRequest.h"
#include "model/DescribeVulNumStatisticsResult.h"
#include "model/DescribeVulRelatedProcessRequest.h"
#include "model/DescribeVulRelatedProcessResult.h"
#include "model/DescribeVulStatisticsRequest.h"
#include "model/DescribeVulStatisticsResult.h"
#include "model/DescribeVulTargetStatisticsRequest.h"
#include "model/DescribeVulTargetStatisticsResult.h"
#include "model/DescribeVulWhitelistRequest.h"
#include "model/DescribeVulWhitelistResult.h"
#include "model/DescribeVulnerabilitySummaryRequest.h"
#include "model/DescribeVulnerabilitySummaryResult.h"
#include "model/DescribeWarningRequest.h"
#include "model/DescribeWarningResult.h"
#include "model/DescribeWarningMachinesRequest.h"
#include "model/DescribeWarningMachinesResult.h"
#include "model/DescribeWebLockBindListRequest.h"
#include "model/DescribeWebLockBindListResult.h"
#include "model/DescribeWebLockConfigListRequest.h"
#include "model/DescribeWebLockConfigListResult.h"
#include "model/DescribeWebLockEventsRequest.h"
#include "model/DescribeWebLockEventsResult.h"
#include "model/DescribeWebLockMachineListRequest.h"
#include "model/DescribeWebLockMachineListResult.h"
#include "model/DescribeWebLockStatusRequest.h"
#include "model/DescribeWebLockStatusResult.h"
#include "model/DescribeWebshellRequest.h"
#include "model/DescribeWebshellResult.h"
#include "model/DescribeWebshellListRequest.h"
#include "model/DescribeWebshellListResult.h"
#include "model/DescribeWhiteListAssetRequest.h"
#include "model/DescribeWhiteListAssetResult.h"
#include "model/DescribeWhiteListAuthorizeRequest.h"
#include "model/DescribeWhiteListAuthorizeResult.h"
#include "model/DescribeWhiteListEffectiveAssetsRequest.h"
#include "model/DescribeWhiteListEffectiveAssetsResult.h"
#include "model/DescribeWhiteListProcessRequest.h"
#include "model/DescribeWhiteListProcessResult.h"
#include "model/DescribeWhiteListStrategyCountRequest.h"
#include "model/DescribeWhiteListStrategyCountResult.h"
#include "model/DescribeWhiteListStrategyListRequest.h"
#include "model/DescribeWhiteListStrategyListResult.h"
#include "model/DescribeWhiteListStrategyStatisticsRequest.h"
#include "model/DescribeWhiteListStrategyStatisticsResult.h"
#include "model/DescribeWhiteListStrategyUuidCountRequest.h"
#include "model/DescribeWhiteListStrategyUuidCountResult.h"
#include "model/DescribeYesterdayStatisticsRequest.h"
#include "model/DescribeYesterdayStatisticsResult.h"
#include "model/DescribesummaryRequest.h"
#include "model/DescribesummaryResult.h"
#include "model/DownloadLogRequest.h"
#include "model/DownloadLogResult.h"
#include "model/ExecStrategyRequest.h"
#include "model/ExecStrategyResult.h"
#include "model/ExecuteRuleEngineActualTimeRequest.h"
#include "model/ExecuteRuleEngineActualTimeResult.h"
#include "model/ExportSuspEventsRequest.h"
#include "model/ExportSuspEventsResult.h"
#include "model/ExportVulRequest.h"
#include "model/ExportVulResult.h"
#include "model/ExportWarningRequest.h"
#include "model/ExportWarningResult.h"
#include "model/GetAccountStatisticsRequest.h"
#include "model/GetAccountStatisticsResult.h"
#include "model/GetCrackStatisticsRequest.h"
#include "model/GetCrackStatisticsResult.h"
#include "model/GetEntityListRequest.h"
#include "model/GetEntityListResult.h"
#include "model/GetStatisticsRequest.h"
#include "model/GetStatisticsResult.h"
#include "model/GetStatisticsByUuidRequest.h"
#include "model/GetStatisticsByUuidResult.h"
#include "model/IgnoreHcCheckWarningsRequest.h"
#include "model/IgnoreHcCheckWarningsResult.h"
#include "model/ModifyAccessKeyLeakDealRequest.h"
#include "model/ModifyAccessKeyLeakDealResult.h"
#include "model/ModifyAccessKeyLeakInstRunRequest.h"
#include "model/ModifyAccessKeyLeakInstRunResult.h"
#include "model/ModifyAssetGroupRequest.h"
#include "model/ModifyAssetGroupResult.h"
#include "model/ModifyAutoDelConfigRequest.h"
#include "model/ModifyAutoDelConfigResult.h"
#include "model/ModifyBatchIgnoreVulRequest.h"
#include "model/ModifyBatchIgnoreVulResult.h"
#include "model/ModifyClearLogstoreStorageRequest.h"
#include "model/ModifyClearLogstoreStorageResult.h"
#include "model/ModifyConcernNecessityRequest.h"
#include "model/ModifyConcernNecessityResult.h"
#include "model/ModifyEmgVulSubmitRequest.h"
#include "model/ModifyEmgVulSubmitResult.h"
#include "model/ModifyLogMetaStatusRequest.h"
#include "model/ModifyLogMetaStatusResult.h"
#include "model/ModifyMachineConfigRequest.h"
#include "model/ModifyMachineConfigResult.h"
#include "model/ModifyOpenLogShipperRequest.h"
#include "model/ModifyOpenLogShipperResult.h"
#include "model/ModifyRefreshProcessInfoRequest.h"
#include "model/ModifyRefreshProcessInfoResult.h"
#include "model/ModifySasAssetStatisticsColumnRequest.h"
#include "model/ModifySasAssetStatisticsColumnResult.h"
#include "model/ModifySaveVulBatchRequest.h"
#include "model/ModifySaveVulBatchResult.h"
#include "model/ModifyScreenSettingRequest.h"
#include "model/ModifyScreenSettingResult.h"
#include "model/ModifySearchConditionRequest.h"
#include "model/ModifySearchConditionResult.h"
#include "model/ModifyStrategyRequest.h"
#include "model/ModifyStrategyResult.h"
#include "model/ModifyStrategyTargetRequest.h"
#include "model/ModifyStrategyTargetResult.h"
#include "model/ModifyTargetConfigRequest.h"
#include "model/ModifyTargetConfigResult.h"
#include "model/ModifyVulConfigRequest.h"
#include "model/ModifyVulConfigResult.h"
#include "model/ModifyVulLevelRequest.h"
#include "model/ModifyVulLevelResult.h"
#include "model/ModifyVulTargetRequest.h"
#include "model/ModifyVulTargetResult.h"
#include "model/ModifyWebLockCreateConfigRequest.h"
#include "model/ModifyWebLockCreateConfigResult.h"
#include "model/ModifyWebLockDeleteConfigRequest.h"
#include "model/ModifyWebLockDeleteConfigResult.h"
#include "model/ModifyWebLockMachineListRequest.h"
#include "model/ModifyWebLockMachineListResult.h"
#include "model/ModifyWebLockOperateEventsRequest.h"
#include "model/ModifyWebLockOperateEventsResult.h"
#include "model/ModifyWebLockRefreshRequest.h"
#include "model/ModifyWebLockRefreshResult.h"
#include "model/ModifyWebLockStatusRequest.h"
#include "model/ModifyWebLockStatusResult.h"
#include "model/ModifyWebLockUpdateConfigRequest.h"
#include "model/ModifyWebLockUpdateConfigResult.h"
#include "model/OpenSasTrialRequest.h"
#include "model/OpenSasTrialResult.h"
#include "model/OperateAgentClientInstallRequest.h"
#include "model/OperateAgentClientInstallResult.h"
#include "model/OperateResultRequest.h"
#include "model/OperateResultResult.h"
#include "model/OperateSuspiciousEventRequest.h"
#include "model/OperateSuspiciousEventResult.h"
#include "model/OperateSuspiciousOverallConfigRequest.h"
#include "model/OperateSuspiciousOverallConfigResult.h"
#include "model/OperateSuspiciousTargetConfigRequest.h"
#include "model/OperateSuspiciousTargetConfigResult.h"
#include "model/OperateVulRequest.h"
#include "model/OperateVulResult.h"
#include "model/OperateWarningRequest.h"
#include "model/OperateWarningResult.h"
#include "model/OperationCustomizeReportChartRequest.h"
#include "model/OperationCustomizeReportChartResult.h"
#include "model/OperationSuspEventsRequest.h"
#include "model/OperationSuspEventsResult.h"
#include "model/QueryCrackEventRequest.h"
#include "model/QueryCrackEventResult.h"
#include "model/QueryLoginEventRequest.h"
#include "model/QueryLoginEventResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/RollbackQuaraFileRequest.h"
#include "model/RollbackQuaraFileResult.h"
#include "model/RollbackSuspEventQuaraFileRequest.h"
#include "model/RollbackSuspEventQuaraFileResult.h"
#include "model/SaveCustomizeReportConfigRequest.h"
#include "model/SaveCustomizeReportConfigResult.h"
#include "model/SaveSuspEventUserSettingRequest.h"
#include "model/SaveSuspEventUserSettingResult.h"
#include "model/SaveWhiteListStrategyRequest.h"
#include "model/SaveWhiteListStrategyResult.h"
#include "model/SaveWhiteListStrategyAssetsRequest.h"
#include "model/SaveWhiteListStrategyAssetsResult.h"
#include "model/SendCustomizeReportRequest.h"
#include "model/SendCustomizeReportResult.h"
#include "model/SetDatasourceStatusRequest.h"
#include "model/SetDatasourceStatusResult.h"
#include "model/TransformLeakageRequest.h"
#include "model/TransformLeakageResult.h"
#include "model/UpdateCustomizeReportStatusRequest.h"
#include "model/UpdateCustomizeReportStatusResult.h"
#include "model/UpdateWhiteListProcessStatusRequest.h"
#include "model/UpdateWhiteListProcessStatusResult.h"
#include "model/UpdateWhiteListStrategyRelationRequest.h"
#include "model/UpdateWhiteListStrategyRelationResult.h"
#include "model/UpdateWhiteListStrategyStatusRequest.h"
#include "model/UpdateWhiteListStrategyStatusResult.h"
#include "model/UpgradeInstanceRequest.h"
#include "model/UpgradeInstanceResult.h"
#include "model/ValidateHcWarningsRequest.h"
#include "model/ValidateHcWarningsResult.h"


namespace AlibabaCloud
{
	namespace Aegis
	{
		class ALIBABACLOUD_AEGIS_EXPORT AegisClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddEventProcessResult> AddEventProcessOutcome;
			typedef std::future<AddEventProcessOutcome> AddEventProcessOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::AddEventProcessRequest&, const AddEventProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEventProcessAsyncHandler;
			typedef Outcome<Error, Model::AutoUpgradeSasResult> AutoUpgradeSasOutcome;
			typedef std::future<AutoUpgradeSasOutcome> AutoUpgradeSasOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::AutoUpgradeSasRequest&, const AutoUpgradeSasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AutoUpgradeSasAsyncHandler;
			typedef Outcome<Error, Model::AutoUpgradeToSasAdvancedVersionResult> AutoUpgradeToSasAdvancedVersionOutcome;
			typedef std::future<AutoUpgradeToSasAdvancedVersionOutcome> AutoUpgradeToSasAdvancedVersionOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::AutoUpgradeToSasAdvancedVersionRequest&, const AutoUpgradeToSasAdvancedVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AutoUpgradeToSasAdvancedVersionAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteWhiteListResult> BatchDeleteWhiteListOutcome;
			typedef std::future<BatchDeleteWhiteListOutcome> BatchDeleteWhiteListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::BatchDeleteWhiteListRequest&, const BatchDeleteWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteWhiteListAsyncHandler;
			typedef Outcome<Error, Model::CanTrySasResult> CanTrySasOutcome;
			typedef std::future<CanTrySasOutcome> CanTrySasOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CanTrySasRequest&, const CanTrySasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CanTrySasAsyncHandler;
			typedef Outcome<Error, Model::CopyCustomizeReportConfigResult> CopyCustomizeReportConfigOutcome;
			typedef std::future<CopyCustomizeReportConfigOutcome> CopyCustomizeReportConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CopyCustomizeReportConfigRequest&, const CopyCustomizeReportConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CopyCustomizeReportConfigAsyncHandler;
			typedef Outcome<Error, Model::CreatScreenSettingResult> CreatScreenSettingOutcome;
			typedef std::future<CreatScreenSettingOutcome> CreatScreenSettingOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreatScreenSettingRequest&, const CreatScreenSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatScreenSettingAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateLogQueryResult> CreateLogQueryOutcome;
			typedef std::future<CreateLogQueryOutcome> CreateLogQueryOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateLogQueryRequest&, const CreateLogQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogQueryAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateDataSourceResult> CreateOrUpdateDataSourceOutcome;
			typedef std::future<CreateOrUpdateDataSourceOutcome> CreateOrUpdateDataSourceOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateOrUpdateDataSourceRequest&, const CreateOrUpdateDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateDataSourceAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateDingTalkResult> CreateOrUpdateDingTalkOutcome;
			typedef std::future<CreateOrUpdateDingTalkOutcome> CreateOrUpdateDingTalkOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateOrUpdateDingTalkRequest&, const CreateOrUpdateDingTalkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateDingTalkAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateGroupResult> CreateOrUpdateGroupOutcome;
			typedef std::future<CreateOrUpdateGroupOutcome> CreateOrUpdateGroupOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateOrUpdateGroupRequest&, const CreateOrUpdateGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateJoinRuleResult> CreateOrUpdateJoinRuleOutcome;
			typedef std::future<CreateOrUpdateJoinRuleOutcome> CreateOrUpdateJoinRuleOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateOrUpdateJoinRuleRequest&, const CreateOrUpdateJoinRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateJoinRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateRuleResult> CreateOrUpdateRuleOutcome;
			typedef std::future<CreateOrUpdateRuleOutcome> CreateOrUpdateRuleOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateOrUpdateRuleRequest&, const CreateOrUpdateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateScreenSettingResult> CreateScreenSettingOutcome;
			typedef std::future<CreateScreenSettingOutcome> CreateScreenSettingOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateScreenSettingRequest&, const CreateScreenSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScreenSettingAsyncHandler;
			typedef Outcome<Error, Model::CreateSuspEventNoteResult> CreateSuspEventNoteOutcome;
			typedef std::future<CreateSuspEventNoteOutcome> CreateSuspEventNoteOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateSuspEventNoteRequest&, const CreateSuspEventNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSuspEventNoteAsyncHandler;
			typedef Outcome<Error, Model::CreateSuspiciousExportResult> CreateSuspiciousExportOutcome;
			typedef std::future<CreateSuspiciousExportOutcome> CreateSuspiciousExportOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateSuspiciousExportRequest&, const CreateSuspiciousExportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSuspiciousExportAsyncHandler;
			typedef Outcome<Error, Model::CreateUserSettingResult> CreateUserSettingOutcome;
			typedef std::future<CreateUserSettingOutcome> CreateUserSettingOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateUserSettingRequest&, const CreateUserSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserSettingAsyncHandler;
			typedef Outcome<Error, Model::CreateUserWhiteListResult> CreateUserWhiteListOutcome;
			typedef std::future<CreateUserWhiteListOutcome> CreateUserWhiteListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateUserWhiteListRequest&, const CreateUserWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserWhiteListAsyncHandler;
			typedef Outcome<Error, Model::CreateVulWhitelistResult> CreateVulWhitelistOutcome;
			typedef std::future<CreateVulWhitelistOutcome> CreateVulWhitelistOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::CreateVulWhitelistRequest&, const CreateVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomizeReportResult> DeleteCustomizeReportOutcome;
			typedef std::future<DeleteCustomizeReportOutcome> DeleteCustomizeReportOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteCustomizeReportRequest&, const DeleteCustomizeReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomizeReportAsyncHandler;
			typedef Outcome<Error, Model::DeleteDingTalkResult> DeleteDingTalkOutcome;
			typedef std::future<DeleteDingTalkOutcome> DeleteDingTalkOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteDingTalkRequest&, const DeleteDingTalkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDingTalkAsyncHandler;
			typedef Outcome<Error, Model::DeleteJoinRuleResult> DeleteJoinRuleOutcome;
			typedef std::future<DeleteJoinRuleOutcome> DeleteJoinRuleOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteJoinRuleRequest&, const DeleteJoinRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJoinRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteLogQueryResult> DeleteLogQueryOutcome;
			typedef std::future<DeleteLogQueryOutcome> DeleteLogQueryOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteLogQueryRequest&, const DeleteLogQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogQueryAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleResult> DeleteRuleOutcome;
			typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteRuleRequest&, const DeleteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleGroupResult> DeleteRuleGroupOutcome;
			typedef std::future<DeleteRuleGroupOutcome> DeleteRuleGroupOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteRuleGroupRequest&, const DeleteRuleGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteScreenSettingResult> DeleteScreenSettingOutcome;
			typedef std::future<DeleteScreenSettingOutcome> DeleteScreenSettingOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteScreenSettingRequest&, const DeleteScreenSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScreenSettingAsyncHandler;
			typedef Outcome<Error, Model::DeleteSearchConditionResult> DeleteSearchConditionOutcome;
			typedef std::future<DeleteSearchConditionOutcome> DeleteSearchConditionOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteSearchConditionRequest&, const DeleteSearchConditionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSearchConditionAsyncHandler;
			typedef Outcome<Error, Model::DeleteStrategyResult> DeleteStrategyOutcome;
			typedef std::future<DeleteStrategyOutcome> DeleteStrategyOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteStrategyRequest&, const DeleteStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStrategyAsyncHandler;
			typedef Outcome<Error, Model::DeleteSuspEventNodeResult> DeleteSuspEventNodeOutcome;
			typedef std::future<DeleteSuspEventNodeOutcome> DeleteSuspEventNodeOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteSuspEventNodeRequest&, const DeleteSuspEventNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSuspEventNodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteVulBatchResult> DeleteVulBatchOutcome;
			typedef std::future<DeleteVulBatchOutcome> DeleteVulBatchOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteVulBatchRequest&, const DeleteVulBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVulBatchAsyncHandler;
			typedef Outcome<Error, Model::DeleteVulWhitelistResult> DeleteVulWhitelistOutcome;
			typedef std::future<DeleteVulWhitelistOutcome> DeleteVulWhitelistOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DeleteVulWhitelistRequest&, const DeleteVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessKeyLeakDetailResult> DescribeAccessKeyLeakDetailOutcome;
			typedef std::future<DescribeAccessKeyLeakDetailOutcome> DescribeAccessKeyLeakDetailOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAccessKeyLeakDetailRequest&, const DescribeAccessKeyLeakDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyLeakDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccesskeyLeakListResult> DescribeAccesskeyLeakListOutcome;
			typedef std::future<DescribeAccesskeyLeakListOutcome> DescribeAccesskeyLeakListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAccesskeyLeakListRequest&, const DescribeAccesskeyLeakListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccesskeyLeakListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccesskeyRunInfoResult> DescribeAccesskeyRunInfoOutcome;
			typedef std::future<DescribeAccesskeyRunInfoOutcome> DescribeAccesskeyRunInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAccesskeyRunInfoRequest&, const DescribeAccesskeyRunInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccesskeyRunInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeAgentInstallStatusResult> DescribeAgentInstallStatusOutcome;
			typedef std::future<DescribeAgentInstallStatusOutcome> DescribeAgentInstallStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAgentInstallStatusRequest&, const DescribeAgentInstallStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentInstallStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventDetailResult> DescribeAlarmEventDetailOutcome;
			typedef std::future<DescribeAlarmEventDetailOutcome> DescribeAlarmEventDetailOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAlarmEventDetailRequest&, const DescribeAlarmEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventListResult> DescribeAlarmEventListOutcome;
			typedef std::future<DescribeAlarmEventListOutcome> DescribeAlarmEventListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAlarmEventListRequest&, const DescribeAlarmEventListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllRegionsStatisticsResult> DescribeAllRegionsStatisticsOutcome;
			typedef std::future<DescribeAllRegionsStatisticsOutcome> DescribeAllRegionsStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAllRegionsStatisticsRequest&, const DescribeAllRegionsStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllRegionsStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnalysisCurveResult> DescribeAnalysisCurveOutcome;
			typedef std::future<DescribeAnalysisCurveOutcome> DescribeAnalysisCurveOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAnalysisCurveRequest&, const DescribeAnalysisCurveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnalysisCurveAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnalysisHistogramsResult> DescribeAnalysisHistogramsOutcome;
			typedef std::future<DescribeAnalysisHistogramsOutcome> DescribeAnalysisHistogramsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAnalysisHistogramsRequest&, const DescribeAnalysisHistogramsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnalysisHistogramsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnalysisLogsResult> DescribeAnalysisLogsOutcome;
			typedef std::future<DescribeAnalysisLogsOutcome> DescribeAnalysisLogsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAnalysisLogsRequest&, const DescribeAnalysisLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnalysisLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnalysisShipperStatusResult> DescribeAnalysisShipperStatusOutcome;
			typedef std::future<DescribeAnalysisShipperStatusOutcome> DescribeAnalysisShipperStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAnalysisShipperStatusRequest&, const DescribeAnalysisShipperStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnalysisShipperStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnalysisSlsIndexResult> DescribeAnalysisSlsIndexOutcome;
			typedef std::future<DescribeAnalysisSlsIndexOutcome> DescribeAnalysisSlsIndexOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAnalysisSlsIndexRequest&, const DescribeAnalysisSlsIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnalysisSlsIndexAsyncHandler;
			typedef Outcome<Error, Model::DescribeAnalysisStatisticsResult> DescribeAnalysisStatisticsOutcome;
			typedef std::future<DescribeAnalysisStatisticsOutcome> DescribeAnalysisStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAnalysisStatisticsRequest&, const DescribeAnalysisStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAnalysisStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiBuySummaryResult> DescribeApiBuySummaryOutcome;
			typedef std::future<DescribeApiBuySummaryOutcome> DescribeApiBuySummaryOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeApiBuySummaryRequest&, const DescribeApiBuySummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiBuySummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetDetailByUuidResult> DescribeAssetDetailByUuidOutcome;
			typedef std::future<DescribeAssetDetailByUuidOutcome> DescribeAssetDetailByUuidOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAssetDetailByUuidRequest&, const DescribeAssetDetailByUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailByUuidAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetListResult> DescribeAssetListOutcome;
			typedef std::future<DescribeAssetListOutcome> DescribeAssetListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAssetListRequest&, const DescribeAssetListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetSummaryResult> DescribeAssetSummaryOutcome;
			typedef std::future<DescribeAssetSummaryOutcome> DescribeAssetSummaryOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAssetSummaryRequest&, const DescribeAssetSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeAttackAnalysisDataResult> DescribeAttackAnalysisDataOutcome;
			typedef std::future<DescribeAttackAnalysisDataOutcome> DescribeAttackAnalysisDataOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAttackAnalysisDataRequest&, const DescribeAttackAnalysisDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackAnalysisDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoDelConfigResult> DescribeAutoDelConfigOutcome;
			typedef std::future<DescribeAutoDelConfigOutcome> DescribeAutoDelConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeAutoDelConfigRequest&, const DescribeAutoDelConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoDelConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeBizStatSimpleQueryResultResult> DescribeBizStatSimpleQueryResultOutcome;
			typedef std::future<DescribeBizStatSimpleQueryResultOutcome> DescribeBizStatSimpleQueryResultOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeBizStatSimpleQueryResultRequest&, const DescribeBizStatSimpleQueryResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizStatSimpleQueryResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeBuySummaryResult> DescribeBuySummaryOutcome;
			typedef std::future<DescribeBuySummaryOutcome> DescribeBuySummaryOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeBuySummaryRequest&, const DescribeBuySummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBuySummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeCanTrySasResult> DescribeCanTrySasOutcome;
			typedef std::future<DescribeCanTrySasOutcome> DescribeCanTrySasOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeCanTrySasRequest&, const DescribeCanTrySasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCanTrySasAsyncHandler;
			typedef Outcome<Error, Model::DescribeCanUpgradeSasResult> DescribeCanUpgradeSasOutcome;
			typedef std::future<DescribeCanUpgradeSasOutcome> DescribeCanUpgradeSasOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeCanUpgradeSasRequest&, const DescribeCanUpgradeSasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCanUpgradeSasAsyncHandler;
			typedef Outcome<Error, Model::DescribeChartDataResult> DescribeChartDataOutcome;
			typedef std::future<DescribeChartDataOutcome> DescribeChartDataOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeChartDataRequest&, const DescribeChartDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChartDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeChartListResult> DescribeChartListOutcome;
			typedef std::future<DescribeChartListOutcome> DescribeChartListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeChartListRequest&, const DescribeChartListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChartListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningCountResult> DescribeCheckWarningCountOutcome;
			typedef std::future<DescribeCheckWarningCountOutcome> DescribeCheckWarningCountOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeCheckWarningCountRequest&, const DescribeCheckWarningCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningDetailResult> DescribeCheckWarningDetailOutcome;
			typedef std::future<DescribeCheckWarningDetailOutcome> DescribeCheckWarningDetailOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeCheckWarningDetailRequest&, const DescribeCheckWarningDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningSummaryResult> DescribeCheckWarningSummaryOutcome;
			typedef std::future<DescribeCheckWarningSummaryOutcome> DescribeCheckWarningSummaryOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeCheckWarningSummaryRequest&, const DescribeCheckWarningSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningsResult> DescribeCheckWarningsOutcome;
			typedef std::future<DescribeCheckWarningsOutcome> DescribeCheckWarningsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeCheckWarningsRequest&, const DescribeCheckWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningsAsyncHandler;
			typedef Outcome<Error, Model::DescribeConcernNecessityResult> DescribeConcernNecessityOutcome;
			typedef std::future<DescribeConcernNecessityOutcome> DescribeConcernNecessityOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeConcernNecessityRequest&, const DescribeConcernNecessityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcernNecessityAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizeReportChartDataResult> DescribeCustomizeReportChartDataOutcome;
			typedef std::future<DescribeCustomizeReportChartDataOutcome> DescribeCustomizeReportChartDataOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeCustomizeReportChartDataRequest&, const DescribeCustomizeReportChartDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeReportChartDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizeReportChartListResult> DescribeCustomizeReportChartListOutcome;
			typedef std::future<DescribeCustomizeReportChartListOutcome> DescribeCustomizeReportChartListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeCustomizeReportChartListRequest&, const DescribeCustomizeReportChartListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeReportChartListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizeReportConfigDetailResult> DescribeCustomizeReportConfigDetailOutcome;
			typedef std::future<DescribeCustomizeReportConfigDetailOutcome> DescribeCustomizeReportConfigDetailOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeCustomizeReportConfigDetailRequest&, const DescribeCustomizeReportConfigDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeReportConfigDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizeReportListResult> DescribeCustomizeReportListOutcome;
			typedef std::future<DescribeCustomizeReportListOutcome> DescribeCustomizeReportListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeCustomizeReportListRequest&, const DescribeCustomizeReportListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeReportListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSourceResult> DescribeDataSourceOutcome;
			typedef std::future<DescribeDataSourceOutcome> DescribeDataSourceOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeDataSourceRequest&, const DescribeDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDefenceThreadResult> DescribeDefenceThreadOutcome;
			typedef std::future<DescribeDefenceThreadOutcome> DescribeDefenceThreadOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeDefenceThreadRequest&, const DescribeDefenceThreadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefenceThreadAsyncHandler;
			typedef Outcome<Error, Model::DescribeDingTalkResult> DescribeDingTalkOutcome;
			typedef std::future<DescribeDingTalkOutcome> DescribeDingTalkOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeDingTalkRequest&, const DescribeDingTalkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDingTalkAsyncHandler;
			typedef Outcome<Error, Model::DescribeEcsStsStatusResult> DescribeEcsStsStatusOutcome;
			typedef std::future<DescribeEcsStsStatusOutcome> DescribeEcsStsStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeEcsStsStatusRequest&, const DescribeEcsStsStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcsStsStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeEmgNoticeResult> DescribeEmgNoticeOutcome;
			typedef std::future<DescribeEmgNoticeOutcome> DescribeEmgNoticeOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeEmgNoticeRequest&, const DescribeEmgNoticeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmgNoticeAsyncHandler;
			typedef Outcome<Error, Model::DescribeEmgUserAgreementResult> DescribeEmgUserAgreementOutcome;
			typedef std::future<DescribeEmgUserAgreementOutcome> DescribeEmgUserAgreementOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeEmgUserAgreementRequest&, const DescribeEmgUserAgreementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmgUserAgreementAsyncHandler;
			typedef Outcome<Error, Model::DescribeEmgVulGroupResult> DescribeEmgVulGroupOutcome;
			typedef std::future<DescribeEmgVulGroupOutcome> DescribeEmgVulGroupOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeEmgVulGroupRequest&, const DescribeEmgVulGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmgVulGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeEntityListResult> DescribeEntityListOutcome;
			typedef std::future<DescribeEntityListOutcome> DescribeEntityListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeEntityListRequest&, const DescribeEntityListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEntityListAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventCountCurveResult> DescribeEventCountCurveOutcome;
			typedef std::future<DescribeEventCountCurveOutcome> DescribeEventCountCurveOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeEventCountCurveRequest&, const DescribeEventCountCurveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventCountCurveAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventLevelCountResult> DescribeEventLevelCountOutcome;
			typedef std::future<DescribeEventLevelCountOutcome> DescribeEventLevelCountOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeEventLevelCountRequest&, const DescribeEventLevelCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventLevelCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeExportInfoResult> DescribeExportInfoOutcome;
			typedef std::future<DescribeExportInfoOutcome> DescribeExportInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeExportInfoRequest&, const DescribeExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeFilterFieldsResult> DescribeFilterFieldsOutcome;
			typedef std::future<DescribeFilterFieldsOutcome> DescribeFilterFieldsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeFilterFieldsRequest&, const DescribeFilterFieldsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilterFieldsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGrayFuncResult> DescribeGrayFuncOutcome;
			typedef std::future<DescribeGrayFuncOutcome> DescribeGrayFuncOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeGrayFuncRequest&, const DescribeGrayFuncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrayFuncAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupListResult> DescribeGroupListOutcome;
			typedef std::future<DescribeGroupListOutcome> DescribeGroupListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeGroupListRequest&, const DescribeGroupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupListAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupStructResult> DescribeGroupStructOutcome;
			typedef std::future<DescribeGroupStructOutcome> DescribeGroupStructOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeGroupStructRequest&, const DescribeGroupStructOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupStructAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupedVulResult> DescribeGroupedVulOutcome;
			typedef std::future<DescribeGroupedVulOutcome> DescribeGroupedVulOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeGroupedVulRequest&, const DescribeGroupedVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupedVulAsyncHandler;
			typedef Outcome<Error, Model::DescribeHistogramResult> DescribeHistogramOutcome;
			typedef std::future<DescribeHistogramOutcome> DescribeHistogramOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeHistogramRequest&, const DescribeHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistogramAsyncHandler;
			typedef Outcome<Error, Model::DescribeHostStatisticsResult> DescribeHostStatisticsOutcome;
			typedef std::future<DescribeHostStatisticsOutcome> DescribeHostStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeHostStatisticsRequest&, const DescribeHostStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceStatisticsResult> DescribeInstanceStatisticsOutcome;
			typedef std::future<DescribeInstanceStatisticsOutcome> DescribeInstanceStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeInstanceStatisticsRequest&, const DescribeInstanceStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeJoinRuleListResult> DescribeJoinRuleListOutcome;
			typedef std::future<DescribeJoinRuleListOutcome> DescribeJoinRuleListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeJoinRuleListRequest&, const DescribeJoinRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJoinRuleListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLatestActionsResult> DescribeLatestActionsOutcome;
			typedef std::future<DescribeLatestActionsOutcome> DescribeLatestActionsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeLatestActionsRequest&, const DescribeLatestActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLatestActionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeListAccessKeyIdAuthResult> DescribeListAccessKeyIdAuthOutcome;
			typedef std::future<DescribeListAccessKeyIdAuthOutcome> DescribeListAccessKeyIdAuthOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeListAccessKeyIdAuthRequest&, const DescribeListAccessKeyIdAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListAccessKeyIdAuthAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogInfoResult> DescribeLogInfoOutcome;
			typedef std::future<DescribeLogInfoOutcome> DescribeLogInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeLogInfoRequest&, const DescribeLogInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogItemsResult> DescribeLogItemsOutcome;
			typedef std::future<DescribeLogItemsOutcome> DescribeLogItemsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeLogItemsRequest&, const DescribeLogItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogItemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogMetaResult> DescribeLogMetaOutcome;
			typedef std::future<DescribeLogMetaOutcome> DescribeLogMetaOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeLogMetaRequest&, const DescribeLogMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogMetaAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogQueryResult> DescribeLogQueryOutcome;
			typedef std::future<DescribeLogQueryOutcome> DescribeLogQueryOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeLogQueryRequest&, const DescribeLogQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogQueryAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogShipperStatusResult> DescribeLogShipperStatusOutcome;
			typedef std::future<DescribeLogShipperStatusOutcome> DescribeLogShipperStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeLogShipperStatusRequest&, const DescribeLogShipperStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogShipperStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoginLogsResult> DescribeLoginLogsOutcome;
			typedef std::future<DescribeLoginLogsOutcome> DescribeLoginLogsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeLoginLogsRequest&, const DescribeLoginLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogstoreStorageResult> DescribeLogstoreStorageOutcome;
			typedef std::future<DescribeLogstoreStorageOutcome> DescribeLogstoreStorageOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeLogstoreStorageRequest&, const DescribeLogstoreStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogstoreStorageAsyncHandler;
			typedef Outcome<Error, Model::DescribeMacConfigResult> DescribeMacConfigOutcome;
			typedef std::future<DescribeMacConfigOutcome> DescribeMacConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeMacConfigRequest&, const DescribeMacConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMacConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeMachineConfigResult> DescribeMachineConfigOutcome;
			typedef std::future<DescribeMachineConfigOutcome> DescribeMachineConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeMachineConfigRequest&, const DescribeMachineConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetaDataResult> DescribeMetaDataOutcome;
			typedef std::future<DescribeMetaDataOutcome> DescribeMetaDataOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeMetaDataRequest&, const DescribeMetaDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetaDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeNsasSuspEventTypeResult> DescribeNsasSuspEventTypeOutcome;
			typedef std::future<DescribeNsasSuspEventTypeOutcome> DescribeNsasSuspEventTypeOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeNsasSuspEventTypeRequest&, const DescribeNsasSuspEventTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNsasSuspEventTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeOperateInfoResult> DescribeOperateInfoOutcome;
			typedef std::future<DescribeOperateInfoOutcome> DescribeOperateInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeOperateInfoRequest&, const DescribeOperateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperateInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeQuaraFileResult> DescribeQuaraFileOutcome;
			typedef std::future<DescribeQuaraFileOutcome> DescribeQuaraFileOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeQuaraFileRequest&, const DescribeQuaraFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuaraFileAsyncHandler;
			typedef Outcome<Error, Model::DescribeResultListResult> DescribeResultListOutcome;
			typedef std::future<DescribeResultListOutcome> DescribeResultListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeResultListRequest&, const DescribeResultListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResultListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskTypeResult> DescribeRiskTypeOutcome;
			typedef std::future<DescribeRiskTypeOutcome> DescribeRiskTypeOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeRiskTypeRequest&, const DescribeRiskTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskWhiteListResult> DescribeRiskWhiteListOutcome;
			typedef std::future<DescribeRiskWhiteListOutcome> DescribeRiskWhiteListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeRiskWhiteListRequest&, const DescribeRiskWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskWhiteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRisksResult> DescribeRisksOutcome;
			typedef std::future<DescribeRisksOutcome> DescribeRisksOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeRisksRequest&, const DescribeRisksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRisksAsyncHandler;
			typedef Outcome<Error, Model::DescribeRuleListResult> DescribeRuleListOutcome;
			typedef std::future<DescribeRuleListOutcome> DescribeRuleListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeRuleListRequest&, const DescribeRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSasAssetStatisticsResult> DescribeSasAssetStatisticsOutcome;
			typedef std::future<DescribeSasAssetStatisticsOutcome> DescribeSasAssetStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSasAssetStatisticsRequest&, const DescribeSasAssetStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSasAssetStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSasAssetStatisticsColumnResult> DescribeSasAssetStatisticsColumnOutcome;
			typedef std::future<DescribeSasAssetStatisticsColumnOutcome> DescribeSasAssetStatisticsColumnOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSasAssetStatisticsColumnRequest&, const DescribeSasAssetStatisticsColumnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSasAssetStatisticsColumnAsyncHandler;
			typedef Outcome<Error, Model::DescribeSasLeftConditionResult> DescribeSasLeftConditionOutcome;
			typedef std::future<DescribeSasLeftConditionOutcome> DescribeSasLeftConditionOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSasLeftConditionRequest&, const DescribeSasLeftConditionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSasLeftConditionAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenAlarmEventListResult> DescribeScreenAlarmEventListOutcome;
			typedef std::future<DescribeScreenAlarmEventListOutcome> DescribeScreenAlarmEventListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenAlarmEventListRequest&, const DescribeScreenAlarmEventListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenAlarmEventListAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenAttackAnalysisDataResult> DescribeScreenAttackAnalysisDataOutcome;
			typedef std::future<DescribeScreenAttackAnalysisDataOutcome> DescribeScreenAttackAnalysisDataOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenAttackAnalysisDataRequest&, const DescribeScreenAttackAnalysisDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenAttackAnalysisDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenBizStatSimpleQueryResultResult> DescribeScreenBizStatSimpleQueryResultOutcome;
			typedef std::future<DescribeScreenBizStatSimpleQueryResultOutcome> DescribeScreenBizStatSimpleQueryResultOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenBizStatSimpleQueryResultRequest&, const DescribeScreenBizStatSimpleQueryResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenBizStatSimpleQueryResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenCityMonitorDataResult> DescribeScreenCityMonitorDataOutcome;
			typedef std::future<DescribeScreenCityMonitorDataOutcome> DescribeScreenCityMonitorDataOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenCityMonitorDataRequest&, const DescribeScreenCityMonitorDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenCityMonitorDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenCloudHcRiskResult> DescribeScreenCloudHcRiskOutcome;
			typedef std::future<DescribeScreenCloudHcRiskOutcome> DescribeScreenCloudHcRiskOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenCloudHcRiskRequest&, const DescribeScreenCloudHcRiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenCloudHcRiskAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenDataMapResult> DescribeScreenDataMapOutcome;
			typedef std::future<DescribeScreenDataMapOutcome> DescribeScreenDataMapOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenDataMapRequest&, const DescribeScreenDataMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenDataMapAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenEmerRiskResult> DescribeScreenEmerRiskOutcome;
			typedef std::future<DescribeScreenEmerRiskOutcome> DescribeScreenEmerRiskOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenEmerRiskRequest&, const DescribeScreenEmerRiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenEmerRiskAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenFlowRequestCountResult> DescribeScreenFlowRequestCountOutcome;
			typedef std::future<DescribeScreenFlowRequestCountOutcome> DescribeScreenFlowRequestCountOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenFlowRequestCountRequest&, const DescribeScreenFlowRequestCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenFlowRequestCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenHostStatisticsResult> DescribeScreenHostStatisticsOutcome;
			typedef std::future<DescribeScreenHostStatisticsOutcome> DescribeScreenHostStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenHostStatisticsRequest&, const DescribeScreenHostStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenHostStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenOperateInfoResult> DescribeScreenOperateInfoOutcome;
			typedef std::future<DescribeScreenOperateInfoOutcome> DescribeScreenOperateInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenOperateInfoRequest&, const DescribeScreenOperateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenOperateInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenOssUploadInfoResult> DescribeScreenOssUploadInfoOutcome;
			typedef std::future<DescribeScreenOssUploadInfoOutcome> DescribeScreenOssUploadInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenOssUploadInfoRequest&, const DescribeScreenOssUploadInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenOssUploadInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenRequestTopTypeResult> DescribeScreenRequestTopTypeOutcome;
			typedef std::future<DescribeScreenRequestTopTypeOutcome> DescribeScreenRequestTopTypeOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenRequestTopTypeRequest&, const DescribeScreenRequestTopTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenRequestTopTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenScoreThreadResult> DescribeScreenScoreThreadOutcome;
			typedef std::future<DescribeScreenScoreThreadOutcome> DescribeScreenScoreThreadOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenScoreThreadRequest&, const DescribeScreenScoreThreadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenScoreThreadAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenSecurityStatInfoResult> DescribeScreenSecurityStatInfoOutcome;
			typedef std::future<DescribeScreenSecurityStatInfoOutcome> DescribeScreenSecurityStatInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenSecurityStatInfoRequest&, const DescribeScreenSecurityStatInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenSecurityStatInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenSettingResult> DescribeScreenSettingOutcome;
			typedef std::future<DescribeScreenSettingOutcome> DescribeScreenSettingOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenSettingRequest&, const DescribeScreenSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenSettingsResult> DescribeScreenSettingsOutcome;
			typedef std::future<DescribeScreenSettingsOutcome> DescribeScreenSettingsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenSettingsRequest&, const DescribeScreenSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenSettingsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenSummaryInfoResult> DescribeScreenSummaryInfoOutcome;
			typedef std::future<DescribeScreenSummaryInfoOutcome> DescribeScreenSummaryInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenSummaryInfoRequest&, const DescribeScreenSummaryInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenSummaryInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenTitlesResult> DescribeScreenTitlesOutcome;
			typedef std::future<DescribeScreenTitlesOutcome> DescribeScreenTitlesOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenTitlesRequest&, const DescribeScreenTitlesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenTitlesAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenTopRequestAndFlowResult> DescribeScreenTopRequestAndFlowOutcome;
			typedef std::future<DescribeScreenTopRequestAndFlowOutcome> DescribeScreenTopRequestAndFlowOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenTopRequestAndFlowRequest&, const DescribeScreenTopRequestAndFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenTopRequestAndFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeScreenVersionConfigResult> DescribeScreenVersionConfigOutcome;
			typedef std::future<DescribeScreenVersionConfigOutcome> DescribeScreenVersionConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeScreenVersionConfigRequest&, const DescribeScreenVersionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenVersionConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeSearchConditionResult> DescribeSearchConditionOutcome;
			typedef std::future<DescribeSearchConditionOutcome> DescribeSearchConditionOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSearchConditionRequest&, const DescribeSearchConditionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchConditionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecureSuggestionResult> DescribeSecureSuggestionOutcome;
			typedef std::future<DescribeSecureSuggestionOutcome> DescribeSecureSuggestionOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSecureSuggestionRequest&, const DescribeSecureSuggestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecureSuggestionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityStatInfoResult> DescribeSecurityStatInfoOutcome;
			typedef std::future<DescribeSecurityStatInfoOutcome> DescribeSecurityStatInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSecurityStatInfoRequest&, const DescribeSecurityStatInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityStatInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlsProjectResult> DescribeSlsProjectOutcome;
			typedef std::future<DescribeSlsProjectOutcome> DescribeSlsProjectOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSlsProjectRequest&, const DescribeSlsProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlsProjectAsyncHandler;
			typedef Outcome<Error, Model::DescribeStatisticsResult> DescribeStatisticsOutcome;
			typedef std::future<DescribeStatisticsOutcome> DescribeStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeStatisticsRequest&, const DescribeStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyExecDetailResult> DescribeStrategyExecDetailOutcome;
			typedef std::future<DescribeStrategyExecDetailOutcome> DescribeStrategyExecDetailOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeStrategyExecDetailRequest&, const DescribeStrategyExecDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyExecDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyProcessResult> DescribeStrategyProcessOutcome;
			typedef std::future<DescribeStrategyProcessOutcome> DescribeStrategyProcessOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeStrategyProcessRequest&, const DescribeStrategyProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyProcessAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyTargetResult> DescribeStrategyTargetOutcome;
			typedef std::future<DescribeStrategyTargetOutcome> DescribeStrategyTargetOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeStrategyTargetRequest&, const DescribeStrategyTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyTargetAsyncHandler;
			typedef Outcome<Error, Model::DescribeStratetyResult> DescribeStratetyOutcome;
			typedef std::future<DescribeStratetyOutcome> DescribeStratetyOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeStratetyRequest&, const DescribeStratetyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStratetyAsyncHandler;
			typedef Outcome<Error, Model::DescribeStratetyDetailResult> DescribeStratetyDetailOutcome;
			typedef std::future<DescribeStratetyDetailOutcome> DescribeStratetyDetailOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeStratetyDetailRequest&, const DescribeStratetyDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStratetyDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeSummaryInfoResult> DescribeSummaryInfoOutcome;
			typedef std::future<DescribeSummaryInfoOutcome> DescribeSummaryInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSummaryInfoRequest&, const DescribeSummaryInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSummaryInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSupervisonInfoResult> DescribeSupervisonInfoOutcome;
			typedef std::future<DescribeSupervisonInfoOutcome> DescribeSupervisonInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSupervisonInfoRequest&, const DescribeSupervisonInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupervisonInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventDetailResult> DescribeSuspEventDetailOutcome;
			typedef std::future<DescribeSuspEventDetailOutcome> DescribeSuspEventDetailOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspEventDetailRequest&, const DescribeSuspEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventExportInfoResult> DescribeSuspEventExportInfoOutcome;
			typedef std::future<DescribeSuspEventExportInfoOutcome> DescribeSuspEventExportInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspEventExportInfoRequest&, const DescribeSuspEventExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventQuaraFilesResult> DescribeSuspEventQuaraFilesOutcome;
			typedef std::future<DescribeSuspEventQuaraFilesOutcome> DescribeSuspEventQuaraFilesOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspEventQuaraFilesRequest&, const DescribeSuspEventQuaraFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventQuaraFilesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventTypesResult> DescribeSuspEventTypesOutcome;
			typedef std::future<DescribeSuspEventTypesOutcome> DescribeSuspEventTypesOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspEventTypesRequest&, const DescribeSuspEventTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventUserSettingResult> DescribeSuspEventUserSettingOutcome;
			typedef std::future<DescribeSuspEventUserSettingOutcome> DescribeSuspEventUserSettingOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspEventUserSettingRequest&, const DescribeSuspEventUserSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventUserSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventsResult> DescribeSuspEventsOutcome;
			typedef std::future<DescribeSuspEventsOutcome> DescribeSuspEventsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspEventsRequest&, const DescribeSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspTrendStatisticsResult> DescribeSuspTrendStatisticsOutcome;
			typedef std::future<DescribeSuspTrendStatisticsOutcome> DescribeSuspTrendStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspTrendStatisticsRequest&, const DescribeSuspTrendStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspTrendStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspiciousEventsResult> DescribeSuspiciousEventsOutcome;
			typedef std::future<DescribeSuspiciousEventsOutcome> DescribeSuspiciousEventsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspiciousEventsRequest&, const DescribeSuspiciousEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspiciousEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspiciousExportInfoResult> DescribeSuspiciousExportInfoOutcome;
			typedef std::future<DescribeSuspiciousExportInfoOutcome> DescribeSuspiciousExportInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspiciousExportInfoRequest&, const DescribeSuspiciousExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspiciousExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspiciousOverallConfigResult> DescribeSuspiciousOverallConfigOutcome;
			typedef std::future<DescribeSuspiciousOverallConfigOutcome> DescribeSuspiciousOverallConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspiciousOverallConfigRequest&, const DescribeSuspiciousOverallConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspiciousOverallConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspiciousUUIDConfigResult> DescribeSuspiciousUUIDConfigOutcome;
			typedef std::future<DescribeSuspiciousUUIDConfigOutcome> DescribeSuspiciousUUIDConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspiciousUUIDConfigRequest&, const DescribeSuspiciousUUIDConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspiciousUUIDConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeTargetResult> DescribeTargetOutcome;
			typedef std::future<DescribeTargetOutcome> DescribeTargetOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeTargetRequest&, const DescribeTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetAsyncHandler;
			typedef Outcome<Error, Model::DescribeTargetConfigResult> DescribeTargetConfigOutcome;
			typedef std::future<DescribeTargetConfigOutcome> DescribeTargetConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeTargetConfigRequest&, const DescribeTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeTopRiskyAssetsResult> DescribeTopRiskyAssetsOutcome;
			typedef std::future<DescribeTopRiskyAssetsOutcome> DescribeTopRiskyAssetsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeTopRiskyAssetsRequest&, const DescribeTopRiskyAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopRiskyAssetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTopicListResult> DescribeTopicListOutcome;
			typedef std::future<DescribeTopicListOutcome> DescribeTopicListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeTopicListRequest&, const DescribeTopicListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicListAsyncHandler;
			typedef Outcome<Error, Model::DescribeTotalStatisticsResult> DescribeTotalStatisticsOutcome;
			typedef std::future<DescribeTotalStatisticsOutcome> DescribeTotalStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeTotalStatisticsRequest&, const DescribeTotalStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTotalStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTraceInfoDetailResult> DescribeTraceInfoDetailOutcome;
			typedef std::future<DescribeTraceInfoDetailOutcome> DescribeTraceInfoDetailOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeTraceInfoDetailRequest&, const DescribeTraceInfoDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceInfoDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeTraceInfoNodeResult> DescribeTraceInfoNodeOutcome;
			typedef std::future<DescribeTraceInfoNodeOutcome> DescribeTraceInfoNodeOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeTraceInfoNodeRequest&, const DescribeTraceInfoNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceInfoNodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeTraceInfoNodeListResult> DescribeTraceInfoNodeListOutcome;
			typedef std::future<DescribeTraceInfoNodeListOutcome> DescribeTraceInfoNodeListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeTraceInfoNodeListRequest&, const DescribeTraceInfoNodeListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceInfoNodeListAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserSettingResult> DescribeUserSettingOutcome;
			typedef std::future<DescribeUserSettingOutcome> DescribeUserSettingOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeUserSettingRequest&, const DescribeUserSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeUuidConfigResult> DescribeUuidConfigOutcome;
			typedef std::future<DescribeUuidConfigOutcome> DescribeUuidConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeUuidConfigRequest&, const DescribeUuidConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUuidConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeVersionConfigResult> DescribeVersionConfigOutcome;
			typedef std::future<DescribeVersionConfigOutcome> DescribeVersionConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVersionConfigRequest&, const DescribeVersionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVersionConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulBatchResult> DescribeVulBatchOutcome;
			typedef std::future<DescribeVulBatchOutcome> DescribeVulBatchOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulBatchRequest&, const DescribeVulBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulBatchAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulConfigResult> DescribeVulConfigOutcome;
			typedef std::future<DescribeVulConfigOutcome> DescribeVulConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulConfigRequest&, const DescribeVulConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulDetailsResult> DescribeVulDetailsOutcome;
			typedef std::future<DescribeVulDetailsOutcome> DescribeVulDetailsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulDetailsRequest&, const DescribeVulDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulExportInfoResult> DescribeVulExportInfoOutcome;
			typedef std::future<DescribeVulExportInfoOutcome> DescribeVulExportInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulExportInfoRequest&, const DescribeVulExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulLevelResult> DescribeVulLevelOutcome;
			typedef std::future<DescribeVulLevelOutcome> DescribeVulLevelOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulLevelRequest&, const DescribeVulLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLevelAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulLevelStatisticsResult> DescribeVulLevelStatisticsOutcome;
			typedef std::future<DescribeVulLevelStatisticsOutcome> DescribeVulLevelStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulLevelStatisticsRequest&, const DescribeVulLevelStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLevelStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulListResult> DescribeVulListOutcome;
			typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulListRequest&, const DescribeVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulMachineListResult> DescribeVulMachineListOutcome;
			typedef std::future<DescribeVulMachineListOutcome> DescribeVulMachineListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulMachineListRequest&, const DescribeVulMachineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulMachineListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulNumStatisticsResult> DescribeVulNumStatisticsOutcome;
			typedef std::future<DescribeVulNumStatisticsOutcome> DescribeVulNumStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulNumStatisticsRequest&, const DescribeVulNumStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulNumStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulRelatedProcessResult> DescribeVulRelatedProcessOutcome;
			typedef std::future<DescribeVulRelatedProcessOutcome> DescribeVulRelatedProcessOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulRelatedProcessRequest&, const DescribeVulRelatedProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulRelatedProcessAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulStatisticsResult> DescribeVulStatisticsOutcome;
			typedef std::future<DescribeVulStatisticsOutcome> DescribeVulStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulStatisticsRequest&, const DescribeVulStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulTargetStatisticsResult> DescribeVulTargetStatisticsOutcome;
			typedef std::future<DescribeVulTargetStatisticsOutcome> DescribeVulTargetStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulTargetStatisticsRequest&, const DescribeVulTargetStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulTargetStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulWhitelistResult> DescribeVulWhitelistOutcome;
			typedef std::future<DescribeVulWhitelistOutcome> DescribeVulWhitelistOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulWhitelistRequest&, const DescribeVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulnerabilitySummaryResult> DescribeVulnerabilitySummaryOutcome;
			typedef std::future<DescribeVulnerabilitySummaryOutcome> DescribeVulnerabilitySummaryOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeVulnerabilitySummaryRequest&, const DescribeVulnerabilitySummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulnerabilitySummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeWarningResult> DescribeWarningOutcome;
			typedef std::future<DescribeWarningOutcome> DescribeWarningOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWarningRequest&, const DescribeWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningAsyncHandler;
			typedef Outcome<Error, Model::DescribeWarningMachinesResult> DescribeWarningMachinesOutcome;
			typedef std::future<DescribeWarningMachinesOutcome> DescribeWarningMachinesOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWarningMachinesRequest&, const DescribeWarningMachinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningMachinesAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockBindListResult> DescribeWebLockBindListOutcome;
			typedef std::future<DescribeWebLockBindListOutcome> DescribeWebLockBindListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWebLockBindListRequest&, const DescribeWebLockBindListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockBindListAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockConfigListResult> DescribeWebLockConfigListOutcome;
			typedef std::future<DescribeWebLockConfigListOutcome> DescribeWebLockConfigListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWebLockConfigListRequest&, const DescribeWebLockConfigListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockConfigListAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockEventsResult> DescribeWebLockEventsOutcome;
			typedef std::future<DescribeWebLockEventsOutcome> DescribeWebLockEventsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWebLockEventsRequest&, const DescribeWebLockEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockMachineListResult> DescribeWebLockMachineListOutcome;
			typedef std::future<DescribeWebLockMachineListOutcome> DescribeWebLockMachineListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWebLockMachineListRequest&, const DescribeWebLockMachineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockMachineListAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebLockStatusResult> DescribeWebLockStatusOutcome;
			typedef std::future<DescribeWebLockStatusOutcome> DescribeWebLockStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWebLockStatusRequest&, const DescribeWebLockStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebLockStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebshellResult> DescribeWebshellOutcome;
			typedef std::future<DescribeWebshellOutcome> DescribeWebshellOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWebshellRequest&, const DescribeWebshellOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebshellAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebshellListResult> DescribeWebshellListOutcome;
			typedef std::future<DescribeWebshellListOutcome> DescribeWebshellListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWebshellListRequest&, const DescribeWebshellListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebshellListAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhiteListAssetResult> DescribeWhiteListAssetOutcome;
			typedef std::future<DescribeWhiteListAssetOutcome> DescribeWhiteListAssetOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWhiteListAssetRequest&, const DescribeWhiteListAssetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteListAssetAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhiteListAuthorizeResult> DescribeWhiteListAuthorizeOutcome;
			typedef std::future<DescribeWhiteListAuthorizeOutcome> DescribeWhiteListAuthorizeOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWhiteListAuthorizeRequest&, const DescribeWhiteListAuthorizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteListAuthorizeAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhiteListEffectiveAssetsResult> DescribeWhiteListEffectiveAssetsOutcome;
			typedef std::future<DescribeWhiteListEffectiveAssetsOutcome> DescribeWhiteListEffectiveAssetsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWhiteListEffectiveAssetsRequest&, const DescribeWhiteListEffectiveAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteListEffectiveAssetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhiteListProcessResult> DescribeWhiteListProcessOutcome;
			typedef std::future<DescribeWhiteListProcessOutcome> DescribeWhiteListProcessOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWhiteListProcessRequest&, const DescribeWhiteListProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteListProcessAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhiteListStrategyCountResult> DescribeWhiteListStrategyCountOutcome;
			typedef std::future<DescribeWhiteListStrategyCountOutcome> DescribeWhiteListStrategyCountOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWhiteListStrategyCountRequest&, const DescribeWhiteListStrategyCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteListStrategyCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhiteListStrategyListResult> DescribeWhiteListStrategyListOutcome;
			typedef std::future<DescribeWhiteListStrategyListOutcome> DescribeWhiteListStrategyListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWhiteListStrategyListRequest&, const DescribeWhiteListStrategyListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteListStrategyListAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhiteListStrategyStatisticsResult> DescribeWhiteListStrategyStatisticsOutcome;
			typedef std::future<DescribeWhiteListStrategyStatisticsOutcome> DescribeWhiteListStrategyStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWhiteListStrategyStatisticsRequest&, const DescribeWhiteListStrategyStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteListStrategyStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhiteListStrategyUuidCountResult> DescribeWhiteListStrategyUuidCountOutcome;
			typedef std::future<DescribeWhiteListStrategyUuidCountOutcome> DescribeWhiteListStrategyUuidCountOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeWhiteListStrategyUuidCountRequest&, const DescribeWhiteListStrategyUuidCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteListStrategyUuidCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeYesterdayStatisticsResult> DescribeYesterdayStatisticsOutcome;
			typedef std::future<DescribeYesterdayStatisticsOutcome> DescribeYesterdayStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribeYesterdayStatisticsRequest&, const DescribeYesterdayStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeYesterdayStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribesummaryResult> DescribesummaryOutcome;
			typedef std::future<DescribesummaryOutcome> DescribesummaryOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DescribesummaryRequest&, const DescribesummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribesummaryAsyncHandler;
			typedef Outcome<Error, Model::DownloadLogResult> DownloadLogOutcome;
			typedef std::future<DownloadLogOutcome> DownloadLogOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::DownloadLogRequest&, const DownloadLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadLogAsyncHandler;
			typedef Outcome<Error, Model::ExecStrategyResult> ExecStrategyOutcome;
			typedef std::future<ExecStrategyOutcome> ExecStrategyOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ExecStrategyRequest&, const ExecStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecStrategyAsyncHandler;
			typedef Outcome<Error, Model::ExecuteRuleEngineActualTimeResult> ExecuteRuleEngineActualTimeOutcome;
			typedef std::future<ExecuteRuleEngineActualTimeOutcome> ExecuteRuleEngineActualTimeOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ExecuteRuleEngineActualTimeRequest&, const ExecuteRuleEngineActualTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteRuleEngineActualTimeAsyncHandler;
			typedef Outcome<Error, Model::ExportSuspEventsResult> ExportSuspEventsOutcome;
			typedef std::future<ExportSuspEventsOutcome> ExportSuspEventsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ExportSuspEventsRequest&, const ExportSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::ExportVulResult> ExportVulOutcome;
			typedef std::future<ExportVulOutcome> ExportVulOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ExportVulRequest&, const ExportVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulAsyncHandler;
			typedef Outcome<Error, Model::ExportWarningResult> ExportWarningOutcome;
			typedef std::future<ExportWarningOutcome> ExportWarningOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ExportWarningRequest&, const ExportWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportWarningAsyncHandler;
			typedef Outcome<Error, Model::GetAccountStatisticsResult> GetAccountStatisticsOutcome;
			typedef std::future<GetAccountStatisticsOutcome> GetAccountStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::GetAccountStatisticsRequest&, const GetAccountStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetCrackStatisticsResult> GetCrackStatisticsOutcome;
			typedef std::future<GetCrackStatisticsOutcome> GetCrackStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::GetCrackStatisticsRequest&, const GetCrackStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCrackStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetEntityListResult> GetEntityListOutcome;
			typedef std::future<GetEntityListOutcome> GetEntityListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::GetEntityListRequest&, const GetEntityListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEntityListAsyncHandler;
			typedef Outcome<Error, Model::GetStatisticsResult> GetStatisticsOutcome;
			typedef std::future<GetStatisticsOutcome> GetStatisticsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::GetStatisticsRequest&, const GetStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetStatisticsByUuidResult> GetStatisticsByUuidOutcome;
			typedef std::future<GetStatisticsByUuidOutcome> GetStatisticsByUuidOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::GetStatisticsByUuidRequest&, const GetStatisticsByUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStatisticsByUuidAsyncHandler;
			typedef Outcome<Error, Model::IgnoreHcCheckWarningsResult> IgnoreHcCheckWarningsOutcome;
			typedef std::future<IgnoreHcCheckWarningsOutcome> IgnoreHcCheckWarningsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::IgnoreHcCheckWarningsRequest&, const IgnoreHcCheckWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreHcCheckWarningsAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccessKeyLeakDealResult> ModifyAccessKeyLeakDealOutcome;
			typedef std::future<ModifyAccessKeyLeakDealOutcome> ModifyAccessKeyLeakDealOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyAccessKeyLeakDealRequest&, const ModifyAccessKeyLeakDealOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessKeyLeakDealAsyncHandler;
			typedef Outcome<Error, Model::ModifyAccessKeyLeakInstRunResult> ModifyAccessKeyLeakInstRunOutcome;
			typedef std::future<ModifyAccessKeyLeakInstRunOutcome> ModifyAccessKeyLeakInstRunOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyAccessKeyLeakInstRunRequest&, const ModifyAccessKeyLeakInstRunOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccessKeyLeakInstRunAsyncHandler;
			typedef Outcome<Error, Model::ModifyAssetGroupResult> ModifyAssetGroupOutcome;
			typedef std::future<ModifyAssetGroupOutcome> ModifyAssetGroupOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyAssetGroupRequest&, const ModifyAssetGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoDelConfigResult> ModifyAutoDelConfigOutcome;
			typedef std::future<ModifyAutoDelConfigOutcome> ModifyAutoDelConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyAutoDelConfigRequest&, const ModifyAutoDelConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoDelConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyBatchIgnoreVulResult> ModifyBatchIgnoreVulOutcome;
			typedef std::future<ModifyBatchIgnoreVulOutcome> ModifyBatchIgnoreVulOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyBatchIgnoreVulRequest&, const ModifyBatchIgnoreVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBatchIgnoreVulAsyncHandler;
			typedef Outcome<Error, Model::ModifyClearLogstoreStorageResult> ModifyClearLogstoreStorageOutcome;
			typedef std::future<ModifyClearLogstoreStorageOutcome> ModifyClearLogstoreStorageOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyClearLogstoreStorageRequest&, const ModifyClearLogstoreStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClearLogstoreStorageAsyncHandler;
			typedef Outcome<Error, Model::ModifyConcernNecessityResult> ModifyConcernNecessityOutcome;
			typedef std::future<ModifyConcernNecessityOutcome> ModifyConcernNecessityOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyConcernNecessityRequest&, const ModifyConcernNecessityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConcernNecessityAsyncHandler;
			typedef Outcome<Error, Model::ModifyEmgVulSubmitResult> ModifyEmgVulSubmitOutcome;
			typedef std::future<ModifyEmgVulSubmitOutcome> ModifyEmgVulSubmitOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyEmgVulSubmitRequest&, const ModifyEmgVulSubmitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEmgVulSubmitAsyncHandler;
			typedef Outcome<Error, Model::ModifyLogMetaStatusResult> ModifyLogMetaStatusOutcome;
			typedef std::future<ModifyLogMetaStatusOutcome> ModifyLogMetaStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyLogMetaStatusRequest&, const ModifyLogMetaStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogMetaStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyMachineConfigResult> ModifyMachineConfigOutcome;
			typedef std::future<ModifyMachineConfigOutcome> ModifyMachineConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyMachineConfigRequest&, const ModifyMachineConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyOpenLogShipperResult> ModifyOpenLogShipperOutcome;
			typedef std::future<ModifyOpenLogShipperOutcome> ModifyOpenLogShipperOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyOpenLogShipperRequest&, const ModifyOpenLogShipperOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOpenLogShipperAsyncHandler;
			typedef Outcome<Error, Model::ModifyRefreshProcessInfoResult> ModifyRefreshProcessInfoOutcome;
			typedef std::future<ModifyRefreshProcessInfoOutcome> ModifyRefreshProcessInfoOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyRefreshProcessInfoRequest&, const ModifyRefreshProcessInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRefreshProcessInfoAsyncHandler;
			typedef Outcome<Error, Model::ModifySasAssetStatisticsColumnResult> ModifySasAssetStatisticsColumnOutcome;
			typedef std::future<ModifySasAssetStatisticsColumnOutcome> ModifySasAssetStatisticsColumnOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifySasAssetStatisticsColumnRequest&, const ModifySasAssetStatisticsColumnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySasAssetStatisticsColumnAsyncHandler;
			typedef Outcome<Error, Model::ModifySaveVulBatchResult> ModifySaveVulBatchOutcome;
			typedef std::future<ModifySaveVulBatchOutcome> ModifySaveVulBatchOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifySaveVulBatchRequest&, const ModifySaveVulBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySaveVulBatchAsyncHandler;
			typedef Outcome<Error, Model::ModifyScreenSettingResult> ModifyScreenSettingOutcome;
			typedef std::future<ModifyScreenSettingOutcome> ModifyScreenSettingOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyScreenSettingRequest&, const ModifyScreenSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScreenSettingAsyncHandler;
			typedef Outcome<Error, Model::ModifySearchConditionResult> ModifySearchConditionOutcome;
			typedef std::future<ModifySearchConditionOutcome> ModifySearchConditionOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifySearchConditionRequest&, const ModifySearchConditionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySearchConditionAsyncHandler;
			typedef Outcome<Error, Model::ModifyStrategyResult> ModifyStrategyOutcome;
			typedef std::future<ModifyStrategyOutcome> ModifyStrategyOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyStrategyRequest&, const ModifyStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStrategyAsyncHandler;
			typedef Outcome<Error, Model::ModifyStrategyTargetResult> ModifyStrategyTargetOutcome;
			typedef std::future<ModifyStrategyTargetOutcome> ModifyStrategyTargetOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyStrategyTargetRequest&, const ModifyStrategyTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStrategyTargetAsyncHandler;
			typedef Outcome<Error, Model::ModifyTargetConfigResult> ModifyTargetConfigOutcome;
			typedef std::future<ModifyTargetConfigOutcome> ModifyTargetConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyTargetConfigRequest&, const ModifyTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyVulConfigResult> ModifyVulConfigOutcome;
			typedef std::future<ModifyVulConfigOutcome> ModifyVulConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyVulConfigRequest&, const ModifyVulConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyVulLevelResult> ModifyVulLevelOutcome;
			typedef std::future<ModifyVulLevelOutcome> ModifyVulLevelOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyVulLevelRequest&, const ModifyVulLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulLevelAsyncHandler;
			typedef Outcome<Error, Model::ModifyVulTargetResult> ModifyVulTargetOutcome;
			typedef std::future<ModifyVulTargetOutcome> ModifyVulTargetOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyVulTargetRequest&, const ModifyVulTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulTargetAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockCreateConfigResult> ModifyWebLockCreateConfigOutcome;
			typedef std::future<ModifyWebLockCreateConfigOutcome> ModifyWebLockCreateConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyWebLockCreateConfigRequest&, const ModifyWebLockCreateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockCreateConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockDeleteConfigResult> ModifyWebLockDeleteConfigOutcome;
			typedef std::future<ModifyWebLockDeleteConfigOutcome> ModifyWebLockDeleteConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyWebLockDeleteConfigRequest&, const ModifyWebLockDeleteConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockDeleteConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockMachineListResult> ModifyWebLockMachineListOutcome;
			typedef std::future<ModifyWebLockMachineListOutcome> ModifyWebLockMachineListOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyWebLockMachineListRequest&, const ModifyWebLockMachineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockMachineListAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockOperateEventsResult> ModifyWebLockOperateEventsOutcome;
			typedef std::future<ModifyWebLockOperateEventsOutcome> ModifyWebLockOperateEventsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyWebLockOperateEventsRequest&, const ModifyWebLockOperateEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockOperateEventsAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockRefreshResult> ModifyWebLockRefreshOutcome;
			typedef std::future<ModifyWebLockRefreshOutcome> ModifyWebLockRefreshOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyWebLockRefreshRequest&, const ModifyWebLockRefreshOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockRefreshAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockStatusResult> ModifyWebLockStatusOutcome;
			typedef std::future<ModifyWebLockStatusOutcome> ModifyWebLockStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyWebLockStatusRequest&, const ModifyWebLockStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebLockUpdateConfigResult> ModifyWebLockUpdateConfigOutcome;
			typedef std::future<ModifyWebLockUpdateConfigOutcome> ModifyWebLockUpdateConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ModifyWebLockUpdateConfigRequest&, const ModifyWebLockUpdateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebLockUpdateConfigAsyncHandler;
			typedef Outcome<Error, Model::OpenSasTrialResult> OpenSasTrialOutcome;
			typedef std::future<OpenSasTrialOutcome> OpenSasTrialOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::OpenSasTrialRequest&, const OpenSasTrialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenSasTrialAsyncHandler;
			typedef Outcome<Error, Model::OperateAgentClientInstallResult> OperateAgentClientInstallOutcome;
			typedef std::future<OperateAgentClientInstallOutcome> OperateAgentClientInstallOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::OperateAgentClientInstallRequest&, const OperateAgentClientInstallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateAgentClientInstallAsyncHandler;
			typedef Outcome<Error, Model::OperateResultResult> OperateResultOutcome;
			typedef std::future<OperateResultOutcome> OperateResultOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::OperateResultRequest&, const OperateResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateResultAsyncHandler;
			typedef Outcome<Error, Model::OperateSuspiciousEventResult> OperateSuspiciousEventOutcome;
			typedef std::future<OperateSuspiciousEventOutcome> OperateSuspiciousEventOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::OperateSuspiciousEventRequest&, const OperateSuspiciousEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateSuspiciousEventAsyncHandler;
			typedef Outcome<Error, Model::OperateSuspiciousOverallConfigResult> OperateSuspiciousOverallConfigOutcome;
			typedef std::future<OperateSuspiciousOverallConfigOutcome> OperateSuspiciousOverallConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::OperateSuspiciousOverallConfigRequest&, const OperateSuspiciousOverallConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateSuspiciousOverallConfigAsyncHandler;
			typedef Outcome<Error, Model::OperateSuspiciousTargetConfigResult> OperateSuspiciousTargetConfigOutcome;
			typedef std::future<OperateSuspiciousTargetConfigOutcome> OperateSuspiciousTargetConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::OperateSuspiciousTargetConfigRequest&, const OperateSuspiciousTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateSuspiciousTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::OperateVulResult> OperateVulOutcome;
			typedef std::future<OperateVulOutcome> OperateVulOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::OperateVulRequest&, const OperateVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateVulAsyncHandler;
			typedef Outcome<Error, Model::OperateWarningResult> OperateWarningOutcome;
			typedef std::future<OperateWarningOutcome> OperateWarningOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::OperateWarningRequest&, const OperateWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateWarningAsyncHandler;
			typedef Outcome<Error, Model::OperationCustomizeReportChartResult> OperationCustomizeReportChartOutcome;
			typedef std::future<OperationCustomizeReportChartOutcome> OperationCustomizeReportChartOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::OperationCustomizeReportChartRequest&, const OperationCustomizeReportChartOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperationCustomizeReportChartAsyncHandler;
			typedef Outcome<Error, Model::OperationSuspEventsResult> OperationSuspEventsOutcome;
			typedef std::future<OperationSuspEventsOutcome> OperationSuspEventsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::OperationSuspEventsRequest&, const OperationSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperationSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::QueryCrackEventResult> QueryCrackEventOutcome;
			typedef std::future<QueryCrackEventOutcome> QueryCrackEventOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::QueryCrackEventRequest&, const QueryCrackEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCrackEventAsyncHandler;
			typedef Outcome<Error, Model::QueryLoginEventResult> QueryLoginEventOutcome;
			typedef std::future<QueryLoginEventOutcome> QueryLoginEventOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::QueryLoginEventRequest&, const QueryLoginEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryLoginEventAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::RollbackQuaraFileResult> RollbackQuaraFileOutcome;
			typedef std::future<RollbackQuaraFileOutcome> RollbackQuaraFileOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::RollbackQuaraFileRequest&, const RollbackQuaraFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackQuaraFileAsyncHandler;
			typedef Outcome<Error, Model::RollbackSuspEventQuaraFileResult> RollbackSuspEventQuaraFileOutcome;
			typedef std::future<RollbackSuspEventQuaraFileOutcome> RollbackSuspEventQuaraFileOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::RollbackSuspEventQuaraFileRequest&, const RollbackSuspEventQuaraFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackSuspEventQuaraFileAsyncHandler;
			typedef Outcome<Error, Model::SaveCustomizeReportConfigResult> SaveCustomizeReportConfigOutcome;
			typedef std::future<SaveCustomizeReportConfigOutcome> SaveCustomizeReportConfigOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::SaveCustomizeReportConfigRequest&, const SaveCustomizeReportConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveCustomizeReportConfigAsyncHandler;
			typedef Outcome<Error, Model::SaveSuspEventUserSettingResult> SaveSuspEventUserSettingOutcome;
			typedef std::future<SaveSuspEventUserSettingOutcome> SaveSuspEventUserSettingOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::SaveSuspEventUserSettingRequest&, const SaveSuspEventUserSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSuspEventUserSettingAsyncHandler;
			typedef Outcome<Error, Model::SaveWhiteListStrategyResult> SaveWhiteListStrategyOutcome;
			typedef std::future<SaveWhiteListStrategyOutcome> SaveWhiteListStrategyOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::SaveWhiteListStrategyRequest&, const SaveWhiteListStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveWhiteListStrategyAsyncHandler;
			typedef Outcome<Error, Model::SaveWhiteListStrategyAssetsResult> SaveWhiteListStrategyAssetsOutcome;
			typedef std::future<SaveWhiteListStrategyAssetsOutcome> SaveWhiteListStrategyAssetsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::SaveWhiteListStrategyAssetsRequest&, const SaveWhiteListStrategyAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveWhiteListStrategyAssetsAsyncHandler;
			typedef Outcome<Error, Model::SendCustomizeReportResult> SendCustomizeReportOutcome;
			typedef std::future<SendCustomizeReportOutcome> SendCustomizeReportOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::SendCustomizeReportRequest&, const SendCustomizeReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendCustomizeReportAsyncHandler;
			typedef Outcome<Error, Model::SetDatasourceStatusResult> SetDatasourceStatusOutcome;
			typedef std::future<SetDatasourceStatusOutcome> SetDatasourceStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::SetDatasourceStatusRequest&, const SetDatasourceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDatasourceStatusAsyncHandler;
			typedef Outcome<Error, Model::TransformLeakageResult> TransformLeakageOutcome;
			typedef std::future<TransformLeakageOutcome> TransformLeakageOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::TransformLeakageRequest&, const TransformLeakageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformLeakageAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomizeReportStatusResult> UpdateCustomizeReportStatusOutcome;
			typedef std::future<UpdateCustomizeReportStatusOutcome> UpdateCustomizeReportStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::UpdateCustomizeReportStatusRequest&, const UpdateCustomizeReportStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomizeReportStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateWhiteListProcessStatusResult> UpdateWhiteListProcessStatusOutcome;
			typedef std::future<UpdateWhiteListProcessStatusOutcome> UpdateWhiteListProcessStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::UpdateWhiteListProcessStatusRequest&, const UpdateWhiteListProcessStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWhiteListProcessStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateWhiteListStrategyRelationResult> UpdateWhiteListStrategyRelationOutcome;
			typedef std::future<UpdateWhiteListStrategyRelationOutcome> UpdateWhiteListStrategyRelationOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::UpdateWhiteListStrategyRelationRequest&, const UpdateWhiteListStrategyRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWhiteListStrategyRelationAsyncHandler;
			typedef Outcome<Error, Model::UpdateWhiteListStrategyStatusResult> UpdateWhiteListStrategyStatusOutcome;
			typedef std::future<UpdateWhiteListStrategyStatusOutcome> UpdateWhiteListStrategyStatusOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::UpdateWhiteListStrategyStatusRequest&, const UpdateWhiteListStrategyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWhiteListStrategyStatusAsyncHandler;
			typedef Outcome<Error, Model::UpgradeInstanceResult> UpgradeInstanceOutcome;
			typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::UpgradeInstanceRequest&, const UpgradeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;
			typedef Outcome<Error, Model::ValidateHcWarningsResult> ValidateHcWarningsOutcome;
			typedef std::future<ValidateHcWarningsOutcome> ValidateHcWarningsOutcomeCallable;
			typedef std::function<void(const AegisClient*, const Model::ValidateHcWarningsRequest&, const ValidateHcWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateHcWarningsAsyncHandler;

			AegisClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AegisClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AegisClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AegisClient();
			AddEventProcessOutcome addEventProcess(const Model::AddEventProcessRequest &request)const;
			void addEventProcessAsync(const Model::AddEventProcessRequest& request, const AddEventProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEventProcessOutcomeCallable addEventProcessCallable(const Model::AddEventProcessRequest& request) const;
			AutoUpgradeSasOutcome autoUpgradeSas(const Model::AutoUpgradeSasRequest &request)const;
			void autoUpgradeSasAsync(const Model::AutoUpgradeSasRequest& request, const AutoUpgradeSasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AutoUpgradeSasOutcomeCallable autoUpgradeSasCallable(const Model::AutoUpgradeSasRequest& request) const;
			AutoUpgradeToSasAdvancedVersionOutcome autoUpgradeToSasAdvancedVersion(const Model::AutoUpgradeToSasAdvancedVersionRequest &request)const;
			void autoUpgradeToSasAdvancedVersionAsync(const Model::AutoUpgradeToSasAdvancedVersionRequest& request, const AutoUpgradeToSasAdvancedVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AutoUpgradeToSasAdvancedVersionOutcomeCallable autoUpgradeToSasAdvancedVersionCallable(const Model::AutoUpgradeToSasAdvancedVersionRequest& request) const;
			BatchDeleteWhiteListOutcome batchDeleteWhiteList(const Model::BatchDeleteWhiteListRequest &request)const;
			void batchDeleteWhiteListAsync(const Model::BatchDeleteWhiteListRequest& request, const BatchDeleteWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteWhiteListOutcomeCallable batchDeleteWhiteListCallable(const Model::BatchDeleteWhiteListRequest& request) const;
			CanTrySasOutcome canTrySas(const Model::CanTrySasRequest &request)const;
			void canTrySasAsync(const Model::CanTrySasRequest& request, const CanTrySasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CanTrySasOutcomeCallable canTrySasCallable(const Model::CanTrySasRequest& request) const;
			CopyCustomizeReportConfigOutcome copyCustomizeReportConfig(const Model::CopyCustomizeReportConfigRequest &request)const;
			void copyCustomizeReportConfigAsync(const Model::CopyCustomizeReportConfigRequest& request, const CopyCustomizeReportConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CopyCustomizeReportConfigOutcomeCallable copyCustomizeReportConfigCallable(const Model::CopyCustomizeReportConfigRequest& request) const;
			CreatScreenSettingOutcome creatScreenSetting(const Model::CreatScreenSettingRequest &request)const;
			void creatScreenSettingAsync(const Model::CreatScreenSettingRequest& request, const CreatScreenSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatScreenSettingOutcomeCallable creatScreenSettingCallable(const Model::CreatScreenSettingRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateLogQueryOutcome createLogQuery(const Model::CreateLogQueryRequest &request)const;
			void createLogQueryAsync(const Model::CreateLogQueryRequest& request, const CreateLogQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLogQueryOutcomeCallable createLogQueryCallable(const Model::CreateLogQueryRequest& request) const;
			CreateOrUpdateDataSourceOutcome createOrUpdateDataSource(const Model::CreateOrUpdateDataSourceRequest &request)const;
			void createOrUpdateDataSourceAsync(const Model::CreateOrUpdateDataSourceRequest& request, const CreateOrUpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateDataSourceOutcomeCallable createOrUpdateDataSourceCallable(const Model::CreateOrUpdateDataSourceRequest& request) const;
			CreateOrUpdateDingTalkOutcome createOrUpdateDingTalk(const Model::CreateOrUpdateDingTalkRequest &request)const;
			void createOrUpdateDingTalkAsync(const Model::CreateOrUpdateDingTalkRequest& request, const CreateOrUpdateDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateDingTalkOutcomeCallable createOrUpdateDingTalkCallable(const Model::CreateOrUpdateDingTalkRequest& request) const;
			CreateOrUpdateGroupOutcome createOrUpdateGroup(const Model::CreateOrUpdateGroupRequest &request)const;
			void createOrUpdateGroupAsync(const Model::CreateOrUpdateGroupRequest& request, const CreateOrUpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateGroupOutcomeCallable createOrUpdateGroupCallable(const Model::CreateOrUpdateGroupRequest& request) const;
			CreateOrUpdateJoinRuleOutcome createOrUpdateJoinRule(const Model::CreateOrUpdateJoinRuleRequest &request)const;
			void createOrUpdateJoinRuleAsync(const Model::CreateOrUpdateJoinRuleRequest& request, const CreateOrUpdateJoinRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateJoinRuleOutcomeCallable createOrUpdateJoinRuleCallable(const Model::CreateOrUpdateJoinRuleRequest& request) const;
			CreateOrUpdateRuleOutcome createOrUpdateRule(const Model::CreateOrUpdateRuleRequest &request)const;
			void createOrUpdateRuleAsync(const Model::CreateOrUpdateRuleRequest& request, const CreateOrUpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateRuleOutcomeCallable createOrUpdateRuleCallable(const Model::CreateOrUpdateRuleRequest& request) const;
			CreateScreenSettingOutcome createScreenSetting(const Model::CreateScreenSettingRequest &request)const;
			void createScreenSettingAsync(const Model::CreateScreenSettingRequest& request, const CreateScreenSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScreenSettingOutcomeCallable createScreenSettingCallable(const Model::CreateScreenSettingRequest& request) const;
			CreateSuspEventNoteOutcome createSuspEventNote(const Model::CreateSuspEventNoteRequest &request)const;
			void createSuspEventNoteAsync(const Model::CreateSuspEventNoteRequest& request, const CreateSuspEventNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSuspEventNoteOutcomeCallable createSuspEventNoteCallable(const Model::CreateSuspEventNoteRequest& request) const;
			CreateSuspiciousExportOutcome createSuspiciousExport(const Model::CreateSuspiciousExportRequest &request)const;
			void createSuspiciousExportAsync(const Model::CreateSuspiciousExportRequest& request, const CreateSuspiciousExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSuspiciousExportOutcomeCallable createSuspiciousExportCallable(const Model::CreateSuspiciousExportRequest& request) const;
			CreateUserSettingOutcome createUserSetting(const Model::CreateUserSettingRequest &request)const;
			void createUserSettingAsync(const Model::CreateUserSettingRequest& request, const CreateUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserSettingOutcomeCallable createUserSettingCallable(const Model::CreateUserSettingRequest& request) const;
			CreateUserWhiteListOutcome createUserWhiteList(const Model::CreateUserWhiteListRequest &request)const;
			void createUserWhiteListAsync(const Model::CreateUserWhiteListRequest& request, const CreateUserWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserWhiteListOutcomeCallable createUserWhiteListCallable(const Model::CreateUserWhiteListRequest& request) const;
			CreateVulWhitelistOutcome createVulWhitelist(const Model::CreateVulWhitelistRequest &request)const;
			void createVulWhitelistAsync(const Model::CreateVulWhitelistRequest& request, const CreateVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVulWhitelistOutcomeCallable createVulWhitelistCallable(const Model::CreateVulWhitelistRequest& request) const;
			DeleteCustomizeReportOutcome deleteCustomizeReport(const Model::DeleteCustomizeReportRequest &request)const;
			void deleteCustomizeReportAsync(const Model::DeleteCustomizeReportRequest& request, const DeleteCustomizeReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomizeReportOutcomeCallable deleteCustomizeReportCallable(const Model::DeleteCustomizeReportRequest& request) const;
			DeleteDingTalkOutcome deleteDingTalk(const Model::DeleteDingTalkRequest &request)const;
			void deleteDingTalkAsync(const Model::DeleteDingTalkRequest& request, const DeleteDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDingTalkOutcomeCallable deleteDingTalkCallable(const Model::DeleteDingTalkRequest& request) const;
			DeleteJoinRuleOutcome deleteJoinRule(const Model::DeleteJoinRuleRequest &request)const;
			void deleteJoinRuleAsync(const Model::DeleteJoinRuleRequest& request, const DeleteJoinRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJoinRuleOutcomeCallable deleteJoinRuleCallable(const Model::DeleteJoinRuleRequest& request) const;
			DeleteLogQueryOutcome deleteLogQuery(const Model::DeleteLogQueryRequest &request)const;
			void deleteLogQueryAsync(const Model::DeleteLogQueryRequest& request, const DeleteLogQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLogQueryOutcomeCallable deleteLogQueryCallable(const Model::DeleteLogQueryRequest& request) const;
			DeleteRuleOutcome deleteRule(const Model::DeleteRuleRequest &request)const;
			void deleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleOutcomeCallable deleteRuleCallable(const Model::DeleteRuleRequest& request) const;
			DeleteRuleGroupOutcome deleteRuleGroup(const Model::DeleteRuleGroupRequest &request)const;
			void deleteRuleGroupAsync(const Model::DeleteRuleGroupRequest& request, const DeleteRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleGroupOutcomeCallable deleteRuleGroupCallable(const Model::DeleteRuleGroupRequest& request) const;
			DeleteScreenSettingOutcome deleteScreenSetting(const Model::DeleteScreenSettingRequest &request)const;
			void deleteScreenSettingAsync(const Model::DeleteScreenSettingRequest& request, const DeleteScreenSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScreenSettingOutcomeCallable deleteScreenSettingCallable(const Model::DeleteScreenSettingRequest& request) const;
			DeleteSearchConditionOutcome deleteSearchCondition(const Model::DeleteSearchConditionRequest &request)const;
			void deleteSearchConditionAsync(const Model::DeleteSearchConditionRequest& request, const DeleteSearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSearchConditionOutcomeCallable deleteSearchConditionCallable(const Model::DeleteSearchConditionRequest& request) const;
			DeleteStrategyOutcome deleteStrategy(const Model::DeleteStrategyRequest &request)const;
			void deleteStrategyAsync(const Model::DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStrategyOutcomeCallable deleteStrategyCallable(const Model::DeleteStrategyRequest& request) const;
			DeleteSuspEventNodeOutcome deleteSuspEventNode(const Model::DeleteSuspEventNodeRequest &request)const;
			void deleteSuspEventNodeAsync(const Model::DeleteSuspEventNodeRequest& request, const DeleteSuspEventNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSuspEventNodeOutcomeCallable deleteSuspEventNodeCallable(const Model::DeleteSuspEventNodeRequest& request) const;
			DeleteVulBatchOutcome deleteVulBatch(const Model::DeleteVulBatchRequest &request)const;
			void deleteVulBatchAsync(const Model::DeleteVulBatchRequest& request, const DeleteVulBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVulBatchOutcomeCallable deleteVulBatchCallable(const Model::DeleteVulBatchRequest& request) const;
			DeleteVulWhitelistOutcome deleteVulWhitelist(const Model::DeleteVulWhitelistRequest &request)const;
			void deleteVulWhitelistAsync(const Model::DeleteVulWhitelistRequest& request, const DeleteVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVulWhitelistOutcomeCallable deleteVulWhitelistCallable(const Model::DeleteVulWhitelistRequest& request) const;
			DescribeAccessKeyLeakDetailOutcome describeAccessKeyLeakDetail(const Model::DescribeAccessKeyLeakDetailRequest &request)const;
			void describeAccessKeyLeakDetailAsync(const Model::DescribeAccessKeyLeakDetailRequest& request, const DescribeAccessKeyLeakDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessKeyLeakDetailOutcomeCallable describeAccessKeyLeakDetailCallable(const Model::DescribeAccessKeyLeakDetailRequest& request) const;
			DescribeAccesskeyLeakListOutcome describeAccesskeyLeakList(const Model::DescribeAccesskeyLeakListRequest &request)const;
			void describeAccesskeyLeakListAsync(const Model::DescribeAccesskeyLeakListRequest& request, const DescribeAccesskeyLeakListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccesskeyLeakListOutcomeCallable describeAccesskeyLeakListCallable(const Model::DescribeAccesskeyLeakListRequest& request) const;
			DescribeAccesskeyRunInfoOutcome describeAccesskeyRunInfo(const Model::DescribeAccesskeyRunInfoRequest &request)const;
			void describeAccesskeyRunInfoAsync(const Model::DescribeAccesskeyRunInfoRequest& request, const DescribeAccesskeyRunInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccesskeyRunInfoOutcomeCallable describeAccesskeyRunInfoCallable(const Model::DescribeAccesskeyRunInfoRequest& request) const;
			DescribeAgentInstallStatusOutcome describeAgentInstallStatus(const Model::DescribeAgentInstallStatusRequest &request)const;
			void describeAgentInstallStatusAsync(const Model::DescribeAgentInstallStatusRequest& request, const DescribeAgentInstallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAgentInstallStatusOutcomeCallable describeAgentInstallStatusCallable(const Model::DescribeAgentInstallStatusRequest& request) const;
			DescribeAlarmEventDetailOutcome describeAlarmEventDetail(const Model::DescribeAlarmEventDetailRequest &request)const;
			void describeAlarmEventDetailAsync(const Model::DescribeAlarmEventDetailRequest& request, const DescribeAlarmEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventDetailOutcomeCallable describeAlarmEventDetailCallable(const Model::DescribeAlarmEventDetailRequest& request) const;
			DescribeAlarmEventListOutcome describeAlarmEventList(const Model::DescribeAlarmEventListRequest &request)const;
			void describeAlarmEventListAsync(const Model::DescribeAlarmEventListRequest& request, const DescribeAlarmEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventListOutcomeCallable describeAlarmEventListCallable(const Model::DescribeAlarmEventListRequest& request) const;
			DescribeAllRegionsStatisticsOutcome describeAllRegionsStatistics(const Model::DescribeAllRegionsStatisticsRequest &request)const;
			void describeAllRegionsStatisticsAsync(const Model::DescribeAllRegionsStatisticsRequest& request, const DescribeAllRegionsStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllRegionsStatisticsOutcomeCallable describeAllRegionsStatisticsCallable(const Model::DescribeAllRegionsStatisticsRequest& request) const;
			DescribeAnalysisCurveOutcome describeAnalysisCurve(const Model::DescribeAnalysisCurveRequest &request)const;
			void describeAnalysisCurveAsync(const Model::DescribeAnalysisCurveRequest& request, const DescribeAnalysisCurveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnalysisCurveOutcomeCallable describeAnalysisCurveCallable(const Model::DescribeAnalysisCurveRequest& request) const;
			DescribeAnalysisHistogramsOutcome describeAnalysisHistograms(const Model::DescribeAnalysisHistogramsRequest &request)const;
			void describeAnalysisHistogramsAsync(const Model::DescribeAnalysisHistogramsRequest& request, const DescribeAnalysisHistogramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnalysisHistogramsOutcomeCallable describeAnalysisHistogramsCallable(const Model::DescribeAnalysisHistogramsRequest& request) const;
			DescribeAnalysisLogsOutcome describeAnalysisLogs(const Model::DescribeAnalysisLogsRequest &request)const;
			void describeAnalysisLogsAsync(const Model::DescribeAnalysisLogsRequest& request, const DescribeAnalysisLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnalysisLogsOutcomeCallable describeAnalysisLogsCallable(const Model::DescribeAnalysisLogsRequest& request) const;
			DescribeAnalysisShipperStatusOutcome describeAnalysisShipperStatus(const Model::DescribeAnalysisShipperStatusRequest &request)const;
			void describeAnalysisShipperStatusAsync(const Model::DescribeAnalysisShipperStatusRequest& request, const DescribeAnalysisShipperStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnalysisShipperStatusOutcomeCallable describeAnalysisShipperStatusCallable(const Model::DescribeAnalysisShipperStatusRequest& request) const;
			DescribeAnalysisSlsIndexOutcome describeAnalysisSlsIndex(const Model::DescribeAnalysisSlsIndexRequest &request)const;
			void describeAnalysisSlsIndexAsync(const Model::DescribeAnalysisSlsIndexRequest& request, const DescribeAnalysisSlsIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnalysisSlsIndexOutcomeCallable describeAnalysisSlsIndexCallable(const Model::DescribeAnalysisSlsIndexRequest& request) const;
			DescribeAnalysisStatisticsOutcome describeAnalysisStatistics(const Model::DescribeAnalysisStatisticsRequest &request)const;
			void describeAnalysisStatisticsAsync(const Model::DescribeAnalysisStatisticsRequest& request, const DescribeAnalysisStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAnalysisStatisticsOutcomeCallable describeAnalysisStatisticsCallable(const Model::DescribeAnalysisStatisticsRequest& request) const;
			DescribeApiBuySummaryOutcome describeApiBuySummary(const Model::DescribeApiBuySummaryRequest &request)const;
			void describeApiBuySummaryAsync(const Model::DescribeApiBuySummaryRequest& request, const DescribeApiBuySummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiBuySummaryOutcomeCallable describeApiBuySummaryCallable(const Model::DescribeApiBuySummaryRequest& request) const;
			DescribeAssetDetailByUuidOutcome describeAssetDetailByUuid(const Model::DescribeAssetDetailByUuidRequest &request)const;
			void describeAssetDetailByUuidAsync(const Model::DescribeAssetDetailByUuidRequest& request, const DescribeAssetDetailByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetDetailByUuidOutcomeCallable describeAssetDetailByUuidCallable(const Model::DescribeAssetDetailByUuidRequest& request) const;
			DescribeAssetListOutcome describeAssetList(const Model::DescribeAssetListRequest &request)const;
			void describeAssetListAsync(const Model::DescribeAssetListRequest& request, const DescribeAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetListOutcomeCallable describeAssetListCallable(const Model::DescribeAssetListRequest& request) const;
			DescribeAssetSummaryOutcome describeAssetSummary(const Model::DescribeAssetSummaryRequest &request)const;
			void describeAssetSummaryAsync(const Model::DescribeAssetSummaryRequest& request, const DescribeAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetSummaryOutcomeCallable describeAssetSummaryCallable(const Model::DescribeAssetSummaryRequest& request) const;
			DescribeAttackAnalysisDataOutcome describeAttackAnalysisData(const Model::DescribeAttackAnalysisDataRequest &request)const;
			void describeAttackAnalysisDataAsync(const Model::DescribeAttackAnalysisDataRequest& request, const DescribeAttackAnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAttackAnalysisDataOutcomeCallable describeAttackAnalysisDataCallable(const Model::DescribeAttackAnalysisDataRequest& request) const;
			DescribeAutoDelConfigOutcome describeAutoDelConfig(const Model::DescribeAutoDelConfigRequest &request)const;
			void describeAutoDelConfigAsync(const Model::DescribeAutoDelConfigRequest& request, const DescribeAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoDelConfigOutcomeCallable describeAutoDelConfigCallable(const Model::DescribeAutoDelConfigRequest& request) const;
			DescribeBizStatSimpleQueryResultOutcome describeBizStatSimpleQueryResult(const Model::DescribeBizStatSimpleQueryResultRequest &request)const;
			void describeBizStatSimpleQueryResultAsync(const Model::DescribeBizStatSimpleQueryResultRequest& request, const DescribeBizStatSimpleQueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBizStatSimpleQueryResultOutcomeCallable describeBizStatSimpleQueryResultCallable(const Model::DescribeBizStatSimpleQueryResultRequest& request) const;
			DescribeBuySummaryOutcome describeBuySummary(const Model::DescribeBuySummaryRequest &request)const;
			void describeBuySummaryAsync(const Model::DescribeBuySummaryRequest& request, const DescribeBuySummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBuySummaryOutcomeCallable describeBuySummaryCallable(const Model::DescribeBuySummaryRequest& request) const;
			DescribeCanTrySasOutcome describeCanTrySas(const Model::DescribeCanTrySasRequest &request)const;
			void describeCanTrySasAsync(const Model::DescribeCanTrySasRequest& request, const DescribeCanTrySasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCanTrySasOutcomeCallable describeCanTrySasCallable(const Model::DescribeCanTrySasRequest& request) const;
			DescribeCanUpgradeSasOutcome describeCanUpgradeSas(const Model::DescribeCanUpgradeSasRequest &request)const;
			void describeCanUpgradeSasAsync(const Model::DescribeCanUpgradeSasRequest& request, const DescribeCanUpgradeSasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCanUpgradeSasOutcomeCallable describeCanUpgradeSasCallable(const Model::DescribeCanUpgradeSasRequest& request) const;
			DescribeChartDataOutcome describeChartData(const Model::DescribeChartDataRequest &request)const;
			void describeChartDataAsync(const Model::DescribeChartDataRequest& request, const DescribeChartDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChartDataOutcomeCallable describeChartDataCallable(const Model::DescribeChartDataRequest& request) const;
			DescribeChartListOutcome describeChartList(const Model::DescribeChartListRequest &request)const;
			void describeChartListAsync(const Model::DescribeChartListRequest& request, const DescribeChartListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChartListOutcomeCallable describeChartListCallable(const Model::DescribeChartListRequest& request) const;
			DescribeCheckWarningCountOutcome describeCheckWarningCount(const Model::DescribeCheckWarningCountRequest &request)const;
			void describeCheckWarningCountAsync(const Model::DescribeCheckWarningCountRequest& request, const DescribeCheckWarningCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningCountOutcomeCallable describeCheckWarningCountCallable(const Model::DescribeCheckWarningCountRequest& request) const;
			DescribeCheckWarningDetailOutcome describeCheckWarningDetail(const Model::DescribeCheckWarningDetailRequest &request)const;
			void describeCheckWarningDetailAsync(const Model::DescribeCheckWarningDetailRequest& request, const DescribeCheckWarningDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningDetailOutcomeCallable describeCheckWarningDetailCallable(const Model::DescribeCheckWarningDetailRequest& request) const;
			DescribeCheckWarningSummaryOutcome describeCheckWarningSummary(const Model::DescribeCheckWarningSummaryRequest &request)const;
			void describeCheckWarningSummaryAsync(const Model::DescribeCheckWarningSummaryRequest& request, const DescribeCheckWarningSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningSummaryOutcomeCallable describeCheckWarningSummaryCallable(const Model::DescribeCheckWarningSummaryRequest& request) const;
			DescribeCheckWarningsOutcome describeCheckWarnings(const Model::DescribeCheckWarningsRequest &request)const;
			void describeCheckWarningsAsync(const Model::DescribeCheckWarningsRequest& request, const DescribeCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningsOutcomeCallable describeCheckWarningsCallable(const Model::DescribeCheckWarningsRequest& request) const;
			DescribeConcernNecessityOutcome describeConcernNecessity(const Model::DescribeConcernNecessityRequest &request)const;
			void describeConcernNecessityAsync(const Model::DescribeConcernNecessityRequest& request, const DescribeConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConcernNecessityOutcomeCallable describeConcernNecessityCallable(const Model::DescribeConcernNecessityRequest& request) const;
			DescribeCustomizeReportChartDataOutcome describeCustomizeReportChartData(const Model::DescribeCustomizeReportChartDataRequest &request)const;
			void describeCustomizeReportChartDataAsync(const Model::DescribeCustomizeReportChartDataRequest& request, const DescribeCustomizeReportChartDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeReportChartDataOutcomeCallable describeCustomizeReportChartDataCallable(const Model::DescribeCustomizeReportChartDataRequest& request) const;
			DescribeCustomizeReportChartListOutcome describeCustomizeReportChartList(const Model::DescribeCustomizeReportChartListRequest &request)const;
			void describeCustomizeReportChartListAsync(const Model::DescribeCustomizeReportChartListRequest& request, const DescribeCustomizeReportChartListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeReportChartListOutcomeCallable describeCustomizeReportChartListCallable(const Model::DescribeCustomizeReportChartListRequest& request) const;
			DescribeCustomizeReportConfigDetailOutcome describeCustomizeReportConfigDetail(const Model::DescribeCustomizeReportConfigDetailRequest &request)const;
			void describeCustomizeReportConfigDetailAsync(const Model::DescribeCustomizeReportConfigDetailRequest& request, const DescribeCustomizeReportConfigDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeReportConfigDetailOutcomeCallable describeCustomizeReportConfigDetailCallable(const Model::DescribeCustomizeReportConfigDetailRequest& request) const;
			DescribeCustomizeReportListOutcome describeCustomizeReportList(const Model::DescribeCustomizeReportListRequest &request)const;
			void describeCustomizeReportListAsync(const Model::DescribeCustomizeReportListRequest& request, const DescribeCustomizeReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeReportListOutcomeCallable describeCustomizeReportListCallable(const Model::DescribeCustomizeReportListRequest& request) const;
			DescribeDataSourceOutcome describeDataSource(const Model::DescribeDataSourceRequest &request)const;
			void describeDataSourceAsync(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSourceOutcomeCallable describeDataSourceCallable(const Model::DescribeDataSourceRequest& request) const;
			DescribeDefenceThreadOutcome describeDefenceThread(const Model::DescribeDefenceThreadRequest &request)const;
			void describeDefenceThreadAsync(const Model::DescribeDefenceThreadRequest& request, const DescribeDefenceThreadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDefenceThreadOutcomeCallable describeDefenceThreadCallable(const Model::DescribeDefenceThreadRequest& request) const;
			DescribeDingTalkOutcome describeDingTalk(const Model::DescribeDingTalkRequest &request)const;
			void describeDingTalkAsync(const Model::DescribeDingTalkRequest& request, const DescribeDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDingTalkOutcomeCallable describeDingTalkCallable(const Model::DescribeDingTalkRequest& request) const;
			DescribeEcsStsStatusOutcome describeEcsStsStatus(const Model::DescribeEcsStsStatusRequest &request)const;
			void describeEcsStsStatusAsync(const Model::DescribeEcsStsStatusRequest& request, const DescribeEcsStsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEcsStsStatusOutcomeCallable describeEcsStsStatusCallable(const Model::DescribeEcsStsStatusRequest& request) const;
			DescribeEmgNoticeOutcome describeEmgNotice(const Model::DescribeEmgNoticeRequest &request)const;
			void describeEmgNoticeAsync(const Model::DescribeEmgNoticeRequest& request, const DescribeEmgNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmgNoticeOutcomeCallable describeEmgNoticeCallable(const Model::DescribeEmgNoticeRequest& request) const;
			DescribeEmgUserAgreementOutcome describeEmgUserAgreement(const Model::DescribeEmgUserAgreementRequest &request)const;
			void describeEmgUserAgreementAsync(const Model::DescribeEmgUserAgreementRequest& request, const DescribeEmgUserAgreementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmgUserAgreementOutcomeCallable describeEmgUserAgreementCallable(const Model::DescribeEmgUserAgreementRequest& request) const;
			DescribeEmgVulGroupOutcome describeEmgVulGroup(const Model::DescribeEmgVulGroupRequest &request)const;
			void describeEmgVulGroupAsync(const Model::DescribeEmgVulGroupRequest& request, const DescribeEmgVulGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmgVulGroupOutcomeCallable describeEmgVulGroupCallable(const Model::DescribeEmgVulGroupRequest& request) const;
			DescribeEntityListOutcome describeEntityList(const Model::DescribeEntityListRequest &request)const;
			void describeEntityListAsync(const Model::DescribeEntityListRequest& request, const DescribeEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEntityListOutcomeCallable describeEntityListCallable(const Model::DescribeEntityListRequest& request) const;
			DescribeEventCountCurveOutcome describeEventCountCurve(const Model::DescribeEventCountCurveRequest &request)const;
			void describeEventCountCurveAsync(const Model::DescribeEventCountCurveRequest& request, const DescribeEventCountCurveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventCountCurveOutcomeCallable describeEventCountCurveCallable(const Model::DescribeEventCountCurveRequest& request) const;
			DescribeEventLevelCountOutcome describeEventLevelCount(const Model::DescribeEventLevelCountRequest &request)const;
			void describeEventLevelCountAsync(const Model::DescribeEventLevelCountRequest& request, const DescribeEventLevelCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventLevelCountOutcomeCallable describeEventLevelCountCallable(const Model::DescribeEventLevelCountRequest& request) const;
			DescribeExportInfoOutcome describeExportInfo(const Model::DescribeExportInfoRequest &request)const;
			void describeExportInfoAsync(const Model::DescribeExportInfoRequest& request, const DescribeExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExportInfoOutcomeCallable describeExportInfoCallable(const Model::DescribeExportInfoRequest& request) const;
			DescribeFilterFieldsOutcome describeFilterFields(const Model::DescribeFilterFieldsRequest &request)const;
			void describeFilterFieldsAsync(const Model::DescribeFilterFieldsRequest& request, const DescribeFilterFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFilterFieldsOutcomeCallable describeFilterFieldsCallable(const Model::DescribeFilterFieldsRequest& request) const;
			DescribeGrayFuncOutcome describeGrayFunc(const Model::DescribeGrayFuncRequest &request)const;
			void describeGrayFuncAsync(const Model::DescribeGrayFuncRequest& request, const DescribeGrayFuncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGrayFuncOutcomeCallable describeGrayFuncCallable(const Model::DescribeGrayFuncRequest& request) const;
			DescribeGroupListOutcome describeGroupList(const Model::DescribeGroupListRequest &request)const;
			void describeGroupListAsync(const Model::DescribeGroupListRequest& request, const DescribeGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupListOutcomeCallable describeGroupListCallable(const Model::DescribeGroupListRequest& request) const;
			DescribeGroupStructOutcome describeGroupStruct(const Model::DescribeGroupStructRequest &request)const;
			void describeGroupStructAsync(const Model::DescribeGroupStructRequest& request, const DescribeGroupStructAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupStructOutcomeCallable describeGroupStructCallable(const Model::DescribeGroupStructRequest& request) const;
			DescribeGroupedVulOutcome describeGroupedVul(const Model::DescribeGroupedVulRequest &request)const;
			void describeGroupedVulAsync(const Model::DescribeGroupedVulRequest& request, const DescribeGroupedVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupedVulOutcomeCallable describeGroupedVulCallable(const Model::DescribeGroupedVulRequest& request) const;
			DescribeHistogramOutcome describeHistogram(const Model::DescribeHistogramRequest &request)const;
			void describeHistogramAsync(const Model::DescribeHistogramRequest& request, const DescribeHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHistogramOutcomeCallable describeHistogramCallable(const Model::DescribeHistogramRequest& request) const;
			DescribeHostStatisticsOutcome describeHostStatistics(const Model::DescribeHostStatisticsRequest &request)const;
			void describeHostStatisticsAsync(const Model::DescribeHostStatisticsRequest& request, const DescribeHostStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHostStatisticsOutcomeCallable describeHostStatisticsCallable(const Model::DescribeHostStatisticsRequest& request) const;
			DescribeInstanceStatisticsOutcome describeInstanceStatistics(const Model::DescribeInstanceStatisticsRequest &request)const;
			void describeInstanceStatisticsAsync(const Model::DescribeInstanceStatisticsRequest& request, const DescribeInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceStatisticsOutcomeCallable describeInstanceStatisticsCallable(const Model::DescribeInstanceStatisticsRequest& request) const;
			DescribeJoinRuleListOutcome describeJoinRuleList(const Model::DescribeJoinRuleListRequest &request)const;
			void describeJoinRuleListAsync(const Model::DescribeJoinRuleListRequest& request, const DescribeJoinRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJoinRuleListOutcomeCallable describeJoinRuleListCallable(const Model::DescribeJoinRuleListRequest& request) const;
			DescribeLatestActionsOutcome describeLatestActions(const Model::DescribeLatestActionsRequest &request)const;
			void describeLatestActionsAsync(const Model::DescribeLatestActionsRequest& request, const DescribeLatestActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLatestActionsOutcomeCallable describeLatestActionsCallable(const Model::DescribeLatestActionsRequest& request) const;
			DescribeListAccessKeyIdAuthOutcome describeListAccessKeyIdAuth(const Model::DescribeListAccessKeyIdAuthRequest &request)const;
			void describeListAccessKeyIdAuthAsync(const Model::DescribeListAccessKeyIdAuthRequest& request, const DescribeListAccessKeyIdAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeListAccessKeyIdAuthOutcomeCallable describeListAccessKeyIdAuthCallable(const Model::DescribeListAccessKeyIdAuthRequest& request) const;
			DescribeLogInfoOutcome describeLogInfo(const Model::DescribeLogInfoRequest &request)const;
			void describeLogInfoAsync(const Model::DescribeLogInfoRequest& request, const DescribeLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogInfoOutcomeCallable describeLogInfoCallable(const Model::DescribeLogInfoRequest& request) const;
			DescribeLogItemsOutcome describeLogItems(const Model::DescribeLogItemsRequest &request)const;
			void describeLogItemsAsync(const Model::DescribeLogItemsRequest& request, const DescribeLogItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogItemsOutcomeCallable describeLogItemsCallable(const Model::DescribeLogItemsRequest& request) const;
			DescribeLogMetaOutcome describeLogMeta(const Model::DescribeLogMetaRequest &request)const;
			void describeLogMetaAsync(const Model::DescribeLogMetaRequest& request, const DescribeLogMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogMetaOutcomeCallable describeLogMetaCallable(const Model::DescribeLogMetaRequest& request) const;
			DescribeLogQueryOutcome describeLogQuery(const Model::DescribeLogQueryRequest &request)const;
			void describeLogQueryAsync(const Model::DescribeLogQueryRequest& request, const DescribeLogQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogQueryOutcomeCallable describeLogQueryCallable(const Model::DescribeLogQueryRequest& request) const;
			DescribeLogShipperStatusOutcome describeLogShipperStatus(const Model::DescribeLogShipperStatusRequest &request)const;
			void describeLogShipperStatusAsync(const Model::DescribeLogShipperStatusRequest& request, const DescribeLogShipperStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogShipperStatusOutcomeCallable describeLogShipperStatusCallable(const Model::DescribeLogShipperStatusRequest& request) const;
			DescribeLoginLogsOutcome describeLoginLogs(const Model::DescribeLoginLogsRequest &request)const;
			void describeLoginLogsAsync(const Model::DescribeLoginLogsRequest& request, const DescribeLoginLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLoginLogsOutcomeCallable describeLoginLogsCallable(const Model::DescribeLoginLogsRequest& request) const;
			DescribeLogstoreStorageOutcome describeLogstoreStorage(const Model::DescribeLogstoreStorageRequest &request)const;
			void describeLogstoreStorageAsync(const Model::DescribeLogstoreStorageRequest& request, const DescribeLogstoreStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogstoreStorageOutcomeCallable describeLogstoreStorageCallable(const Model::DescribeLogstoreStorageRequest& request) const;
			DescribeMacConfigOutcome describeMacConfig(const Model::DescribeMacConfigRequest &request)const;
			void describeMacConfigAsync(const Model::DescribeMacConfigRequest& request, const DescribeMacConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMacConfigOutcomeCallable describeMacConfigCallable(const Model::DescribeMacConfigRequest& request) const;
			DescribeMachineConfigOutcome describeMachineConfig(const Model::DescribeMachineConfigRequest &request)const;
			void describeMachineConfigAsync(const Model::DescribeMachineConfigRequest& request, const DescribeMachineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMachineConfigOutcomeCallable describeMachineConfigCallable(const Model::DescribeMachineConfigRequest& request) const;
			DescribeMetaDataOutcome describeMetaData(const Model::DescribeMetaDataRequest &request)const;
			void describeMetaDataAsync(const Model::DescribeMetaDataRequest& request, const DescribeMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetaDataOutcomeCallable describeMetaDataCallable(const Model::DescribeMetaDataRequest& request) const;
			DescribeNsasSuspEventTypeOutcome describeNsasSuspEventType(const Model::DescribeNsasSuspEventTypeRequest &request)const;
			void describeNsasSuspEventTypeAsync(const Model::DescribeNsasSuspEventTypeRequest& request, const DescribeNsasSuspEventTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNsasSuspEventTypeOutcomeCallable describeNsasSuspEventTypeCallable(const Model::DescribeNsasSuspEventTypeRequest& request) const;
			DescribeOperateInfoOutcome describeOperateInfo(const Model::DescribeOperateInfoRequest &request)const;
			void describeOperateInfoAsync(const Model::DescribeOperateInfoRequest& request, const DescribeOperateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOperateInfoOutcomeCallable describeOperateInfoCallable(const Model::DescribeOperateInfoRequest& request) const;
			DescribeQuaraFileOutcome describeQuaraFile(const Model::DescribeQuaraFileRequest &request)const;
			void describeQuaraFileAsync(const Model::DescribeQuaraFileRequest& request, const DescribeQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQuaraFileOutcomeCallable describeQuaraFileCallable(const Model::DescribeQuaraFileRequest& request) const;
			DescribeResultListOutcome describeResultList(const Model::DescribeResultListRequest &request)const;
			void describeResultListAsync(const Model::DescribeResultListRequest& request, const DescribeResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResultListOutcomeCallable describeResultListCallable(const Model::DescribeResultListRequest& request) const;
			DescribeRiskTypeOutcome describeRiskType(const Model::DescribeRiskTypeRequest &request)const;
			void describeRiskTypeAsync(const Model::DescribeRiskTypeRequest& request, const DescribeRiskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskTypeOutcomeCallable describeRiskTypeCallable(const Model::DescribeRiskTypeRequest& request) const;
			DescribeRiskWhiteListOutcome describeRiskWhiteList(const Model::DescribeRiskWhiteListRequest &request)const;
			void describeRiskWhiteListAsync(const Model::DescribeRiskWhiteListRequest& request, const DescribeRiskWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskWhiteListOutcomeCallable describeRiskWhiteListCallable(const Model::DescribeRiskWhiteListRequest& request) const;
			DescribeRisksOutcome describeRisks(const Model::DescribeRisksRequest &request)const;
			void describeRisksAsync(const Model::DescribeRisksRequest& request, const DescribeRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRisksOutcomeCallable describeRisksCallable(const Model::DescribeRisksRequest& request) const;
			DescribeRuleListOutcome describeRuleList(const Model::DescribeRuleListRequest &request)const;
			void describeRuleListAsync(const Model::DescribeRuleListRequest& request, const DescribeRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRuleListOutcomeCallable describeRuleListCallable(const Model::DescribeRuleListRequest& request) const;
			DescribeSasAssetStatisticsOutcome describeSasAssetStatistics(const Model::DescribeSasAssetStatisticsRequest &request)const;
			void describeSasAssetStatisticsAsync(const Model::DescribeSasAssetStatisticsRequest& request, const DescribeSasAssetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSasAssetStatisticsOutcomeCallable describeSasAssetStatisticsCallable(const Model::DescribeSasAssetStatisticsRequest& request) const;
			DescribeSasAssetStatisticsColumnOutcome describeSasAssetStatisticsColumn(const Model::DescribeSasAssetStatisticsColumnRequest &request)const;
			void describeSasAssetStatisticsColumnAsync(const Model::DescribeSasAssetStatisticsColumnRequest& request, const DescribeSasAssetStatisticsColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSasAssetStatisticsColumnOutcomeCallable describeSasAssetStatisticsColumnCallable(const Model::DescribeSasAssetStatisticsColumnRequest& request) const;
			DescribeSasLeftConditionOutcome describeSasLeftCondition(const Model::DescribeSasLeftConditionRequest &request)const;
			void describeSasLeftConditionAsync(const Model::DescribeSasLeftConditionRequest& request, const DescribeSasLeftConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSasLeftConditionOutcomeCallable describeSasLeftConditionCallable(const Model::DescribeSasLeftConditionRequest& request) const;
			DescribeScreenAlarmEventListOutcome describeScreenAlarmEventList(const Model::DescribeScreenAlarmEventListRequest &request)const;
			void describeScreenAlarmEventListAsync(const Model::DescribeScreenAlarmEventListRequest& request, const DescribeScreenAlarmEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenAlarmEventListOutcomeCallable describeScreenAlarmEventListCallable(const Model::DescribeScreenAlarmEventListRequest& request) const;
			DescribeScreenAttackAnalysisDataOutcome describeScreenAttackAnalysisData(const Model::DescribeScreenAttackAnalysisDataRequest &request)const;
			void describeScreenAttackAnalysisDataAsync(const Model::DescribeScreenAttackAnalysisDataRequest& request, const DescribeScreenAttackAnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenAttackAnalysisDataOutcomeCallable describeScreenAttackAnalysisDataCallable(const Model::DescribeScreenAttackAnalysisDataRequest& request) const;
			DescribeScreenBizStatSimpleQueryResultOutcome describeScreenBizStatSimpleQueryResult(const Model::DescribeScreenBizStatSimpleQueryResultRequest &request)const;
			void describeScreenBizStatSimpleQueryResultAsync(const Model::DescribeScreenBizStatSimpleQueryResultRequest& request, const DescribeScreenBizStatSimpleQueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenBizStatSimpleQueryResultOutcomeCallable describeScreenBizStatSimpleQueryResultCallable(const Model::DescribeScreenBizStatSimpleQueryResultRequest& request) const;
			DescribeScreenCityMonitorDataOutcome describeScreenCityMonitorData(const Model::DescribeScreenCityMonitorDataRequest &request)const;
			void describeScreenCityMonitorDataAsync(const Model::DescribeScreenCityMonitorDataRequest& request, const DescribeScreenCityMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenCityMonitorDataOutcomeCallable describeScreenCityMonitorDataCallable(const Model::DescribeScreenCityMonitorDataRequest& request) const;
			DescribeScreenCloudHcRiskOutcome describeScreenCloudHcRisk(const Model::DescribeScreenCloudHcRiskRequest &request)const;
			void describeScreenCloudHcRiskAsync(const Model::DescribeScreenCloudHcRiskRequest& request, const DescribeScreenCloudHcRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenCloudHcRiskOutcomeCallable describeScreenCloudHcRiskCallable(const Model::DescribeScreenCloudHcRiskRequest& request) const;
			DescribeScreenDataMapOutcome describeScreenDataMap(const Model::DescribeScreenDataMapRequest &request)const;
			void describeScreenDataMapAsync(const Model::DescribeScreenDataMapRequest& request, const DescribeScreenDataMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenDataMapOutcomeCallable describeScreenDataMapCallable(const Model::DescribeScreenDataMapRequest& request) const;
			DescribeScreenEmerRiskOutcome describeScreenEmerRisk(const Model::DescribeScreenEmerRiskRequest &request)const;
			void describeScreenEmerRiskAsync(const Model::DescribeScreenEmerRiskRequest& request, const DescribeScreenEmerRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenEmerRiskOutcomeCallable describeScreenEmerRiskCallable(const Model::DescribeScreenEmerRiskRequest& request) const;
			DescribeScreenFlowRequestCountOutcome describeScreenFlowRequestCount(const Model::DescribeScreenFlowRequestCountRequest &request)const;
			void describeScreenFlowRequestCountAsync(const Model::DescribeScreenFlowRequestCountRequest& request, const DescribeScreenFlowRequestCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenFlowRequestCountOutcomeCallable describeScreenFlowRequestCountCallable(const Model::DescribeScreenFlowRequestCountRequest& request) const;
			DescribeScreenHostStatisticsOutcome describeScreenHostStatistics(const Model::DescribeScreenHostStatisticsRequest &request)const;
			void describeScreenHostStatisticsAsync(const Model::DescribeScreenHostStatisticsRequest& request, const DescribeScreenHostStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenHostStatisticsOutcomeCallable describeScreenHostStatisticsCallable(const Model::DescribeScreenHostStatisticsRequest& request) const;
			DescribeScreenOperateInfoOutcome describeScreenOperateInfo(const Model::DescribeScreenOperateInfoRequest &request)const;
			void describeScreenOperateInfoAsync(const Model::DescribeScreenOperateInfoRequest& request, const DescribeScreenOperateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenOperateInfoOutcomeCallable describeScreenOperateInfoCallable(const Model::DescribeScreenOperateInfoRequest& request) const;
			DescribeScreenOssUploadInfoOutcome describeScreenOssUploadInfo(const Model::DescribeScreenOssUploadInfoRequest &request)const;
			void describeScreenOssUploadInfoAsync(const Model::DescribeScreenOssUploadInfoRequest& request, const DescribeScreenOssUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenOssUploadInfoOutcomeCallable describeScreenOssUploadInfoCallable(const Model::DescribeScreenOssUploadInfoRequest& request) const;
			DescribeScreenRequestTopTypeOutcome describeScreenRequestTopType(const Model::DescribeScreenRequestTopTypeRequest &request)const;
			void describeScreenRequestTopTypeAsync(const Model::DescribeScreenRequestTopTypeRequest& request, const DescribeScreenRequestTopTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenRequestTopTypeOutcomeCallable describeScreenRequestTopTypeCallable(const Model::DescribeScreenRequestTopTypeRequest& request) const;
			DescribeScreenScoreThreadOutcome describeScreenScoreThread(const Model::DescribeScreenScoreThreadRequest &request)const;
			void describeScreenScoreThreadAsync(const Model::DescribeScreenScoreThreadRequest& request, const DescribeScreenScoreThreadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenScoreThreadOutcomeCallable describeScreenScoreThreadCallable(const Model::DescribeScreenScoreThreadRequest& request) const;
			DescribeScreenSecurityStatInfoOutcome describeScreenSecurityStatInfo(const Model::DescribeScreenSecurityStatInfoRequest &request)const;
			void describeScreenSecurityStatInfoAsync(const Model::DescribeScreenSecurityStatInfoRequest& request, const DescribeScreenSecurityStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenSecurityStatInfoOutcomeCallable describeScreenSecurityStatInfoCallable(const Model::DescribeScreenSecurityStatInfoRequest& request) const;
			DescribeScreenSettingOutcome describeScreenSetting(const Model::DescribeScreenSettingRequest &request)const;
			void describeScreenSettingAsync(const Model::DescribeScreenSettingRequest& request, const DescribeScreenSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenSettingOutcomeCallable describeScreenSettingCallable(const Model::DescribeScreenSettingRequest& request) const;
			DescribeScreenSettingsOutcome describeScreenSettings(const Model::DescribeScreenSettingsRequest &request)const;
			void describeScreenSettingsAsync(const Model::DescribeScreenSettingsRequest& request, const DescribeScreenSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenSettingsOutcomeCallable describeScreenSettingsCallable(const Model::DescribeScreenSettingsRequest& request) const;
			DescribeScreenSummaryInfoOutcome describeScreenSummaryInfo(const Model::DescribeScreenSummaryInfoRequest &request)const;
			void describeScreenSummaryInfoAsync(const Model::DescribeScreenSummaryInfoRequest& request, const DescribeScreenSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenSummaryInfoOutcomeCallable describeScreenSummaryInfoCallable(const Model::DescribeScreenSummaryInfoRequest& request) const;
			DescribeScreenTitlesOutcome describeScreenTitles(const Model::DescribeScreenTitlesRequest &request)const;
			void describeScreenTitlesAsync(const Model::DescribeScreenTitlesRequest& request, const DescribeScreenTitlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenTitlesOutcomeCallable describeScreenTitlesCallable(const Model::DescribeScreenTitlesRequest& request) const;
			DescribeScreenTopRequestAndFlowOutcome describeScreenTopRequestAndFlow(const Model::DescribeScreenTopRequestAndFlowRequest &request)const;
			void describeScreenTopRequestAndFlowAsync(const Model::DescribeScreenTopRequestAndFlowRequest& request, const DescribeScreenTopRequestAndFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenTopRequestAndFlowOutcomeCallable describeScreenTopRequestAndFlowCallable(const Model::DescribeScreenTopRequestAndFlowRequest& request) const;
			DescribeScreenVersionConfigOutcome describeScreenVersionConfig(const Model::DescribeScreenVersionConfigRequest &request)const;
			void describeScreenVersionConfigAsync(const Model::DescribeScreenVersionConfigRequest& request, const DescribeScreenVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScreenVersionConfigOutcomeCallable describeScreenVersionConfigCallable(const Model::DescribeScreenVersionConfigRequest& request) const;
			DescribeSearchConditionOutcome describeSearchCondition(const Model::DescribeSearchConditionRequest &request)const;
			void describeSearchConditionAsync(const Model::DescribeSearchConditionRequest& request, const DescribeSearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSearchConditionOutcomeCallable describeSearchConditionCallable(const Model::DescribeSearchConditionRequest& request) const;
			DescribeSecureSuggestionOutcome describeSecureSuggestion(const Model::DescribeSecureSuggestionRequest &request)const;
			void describeSecureSuggestionAsync(const Model::DescribeSecureSuggestionRequest& request, const DescribeSecureSuggestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecureSuggestionOutcomeCallable describeSecureSuggestionCallable(const Model::DescribeSecureSuggestionRequest& request) const;
			DescribeSecurityStatInfoOutcome describeSecurityStatInfo(const Model::DescribeSecurityStatInfoRequest &request)const;
			void describeSecurityStatInfoAsync(const Model::DescribeSecurityStatInfoRequest& request, const DescribeSecurityStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityStatInfoOutcomeCallable describeSecurityStatInfoCallable(const Model::DescribeSecurityStatInfoRequest& request) const;
			DescribeSlsProjectOutcome describeSlsProject(const Model::DescribeSlsProjectRequest &request)const;
			void describeSlsProjectAsync(const Model::DescribeSlsProjectRequest& request, const DescribeSlsProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlsProjectOutcomeCallable describeSlsProjectCallable(const Model::DescribeSlsProjectRequest& request) const;
			DescribeStatisticsOutcome describeStatistics(const Model::DescribeStatisticsRequest &request)const;
			void describeStatisticsAsync(const Model::DescribeStatisticsRequest& request, const DescribeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStatisticsOutcomeCallable describeStatisticsCallable(const Model::DescribeStatisticsRequest& request) const;
			DescribeStrategyExecDetailOutcome describeStrategyExecDetail(const Model::DescribeStrategyExecDetailRequest &request)const;
			void describeStrategyExecDetailAsync(const Model::DescribeStrategyExecDetailRequest& request, const DescribeStrategyExecDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStrategyExecDetailOutcomeCallable describeStrategyExecDetailCallable(const Model::DescribeStrategyExecDetailRequest& request) const;
			DescribeStrategyProcessOutcome describeStrategyProcess(const Model::DescribeStrategyProcessRequest &request)const;
			void describeStrategyProcessAsync(const Model::DescribeStrategyProcessRequest& request, const DescribeStrategyProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStrategyProcessOutcomeCallable describeStrategyProcessCallable(const Model::DescribeStrategyProcessRequest& request) const;
			DescribeStrategyTargetOutcome describeStrategyTarget(const Model::DescribeStrategyTargetRequest &request)const;
			void describeStrategyTargetAsync(const Model::DescribeStrategyTargetRequest& request, const DescribeStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStrategyTargetOutcomeCallable describeStrategyTargetCallable(const Model::DescribeStrategyTargetRequest& request) const;
			DescribeStratetyOutcome describeStratety(const Model::DescribeStratetyRequest &request)const;
			void describeStratetyAsync(const Model::DescribeStratetyRequest& request, const DescribeStratetyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStratetyOutcomeCallable describeStratetyCallable(const Model::DescribeStratetyRequest& request) const;
			DescribeStratetyDetailOutcome describeStratetyDetail(const Model::DescribeStratetyDetailRequest &request)const;
			void describeStratetyDetailAsync(const Model::DescribeStratetyDetailRequest& request, const DescribeStratetyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStratetyDetailOutcomeCallable describeStratetyDetailCallable(const Model::DescribeStratetyDetailRequest& request) const;
			DescribeSummaryInfoOutcome describeSummaryInfo(const Model::DescribeSummaryInfoRequest &request)const;
			void describeSummaryInfoAsync(const Model::DescribeSummaryInfoRequest& request, const DescribeSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSummaryInfoOutcomeCallable describeSummaryInfoCallable(const Model::DescribeSummaryInfoRequest& request) const;
			DescribeSupervisonInfoOutcome describeSupervisonInfo(const Model::DescribeSupervisonInfoRequest &request)const;
			void describeSupervisonInfoAsync(const Model::DescribeSupervisonInfoRequest& request, const DescribeSupervisonInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSupervisonInfoOutcomeCallable describeSupervisonInfoCallable(const Model::DescribeSupervisonInfoRequest& request) const;
			DescribeSuspEventDetailOutcome describeSuspEventDetail(const Model::DescribeSuspEventDetailRequest &request)const;
			void describeSuspEventDetailAsync(const Model::DescribeSuspEventDetailRequest& request, const DescribeSuspEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventDetailOutcomeCallable describeSuspEventDetailCallable(const Model::DescribeSuspEventDetailRequest& request) const;
			DescribeSuspEventExportInfoOutcome describeSuspEventExportInfo(const Model::DescribeSuspEventExportInfoRequest &request)const;
			void describeSuspEventExportInfoAsync(const Model::DescribeSuspEventExportInfoRequest& request, const DescribeSuspEventExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventExportInfoOutcomeCallable describeSuspEventExportInfoCallable(const Model::DescribeSuspEventExportInfoRequest& request) const;
			DescribeSuspEventQuaraFilesOutcome describeSuspEventQuaraFiles(const Model::DescribeSuspEventQuaraFilesRequest &request)const;
			void describeSuspEventQuaraFilesAsync(const Model::DescribeSuspEventQuaraFilesRequest& request, const DescribeSuspEventQuaraFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventQuaraFilesOutcomeCallable describeSuspEventQuaraFilesCallable(const Model::DescribeSuspEventQuaraFilesRequest& request) const;
			DescribeSuspEventTypesOutcome describeSuspEventTypes(const Model::DescribeSuspEventTypesRequest &request)const;
			void describeSuspEventTypesAsync(const Model::DescribeSuspEventTypesRequest& request, const DescribeSuspEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventTypesOutcomeCallable describeSuspEventTypesCallable(const Model::DescribeSuspEventTypesRequest& request) const;
			DescribeSuspEventUserSettingOutcome describeSuspEventUserSetting(const Model::DescribeSuspEventUserSettingRequest &request)const;
			void describeSuspEventUserSettingAsync(const Model::DescribeSuspEventUserSettingRequest& request, const DescribeSuspEventUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventUserSettingOutcomeCallable describeSuspEventUserSettingCallable(const Model::DescribeSuspEventUserSettingRequest& request) const;
			DescribeSuspEventsOutcome describeSuspEvents(const Model::DescribeSuspEventsRequest &request)const;
			void describeSuspEventsAsync(const Model::DescribeSuspEventsRequest& request, const DescribeSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventsOutcomeCallable describeSuspEventsCallable(const Model::DescribeSuspEventsRequest& request) const;
			DescribeSuspTrendStatisticsOutcome describeSuspTrendStatistics(const Model::DescribeSuspTrendStatisticsRequest &request)const;
			void describeSuspTrendStatisticsAsync(const Model::DescribeSuspTrendStatisticsRequest& request, const DescribeSuspTrendStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspTrendStatisticsOutcomeCallable describeSuspTrendStatisticsCallable(const Model::DescribeSuspTrendStatisticsRequest& request) const;
			DescribeSuspiciousEventsOutcome describeSuspiciousEvents(const Model::DescribeSuspiciousEventsRequest &request)const;
			void describeSuspiciousEventsAsync(const Model::DescribeSuspiciousEventsRequest& request, const DescribeSuspiciousEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspiciousEventsOutcomeCallable describeSuspiciousEventsCallable(const Model::DescribeSuspiciousEventsRequest& request) const;
			DescribeSuspiciousExportInfoOutcome describeSuspiciousExportInfo(const Model::DescribeSuspiciousExportInfoRequest &request)const;
			void describeSuspiciousExportInfoAsync(const Model::DescribeSuspiciousExportInfoRequest& request, const DescribeSuspiciousExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspiciousExportInfoOutcomeCallable describeSuspiciousExportInfoCallable(const Model::DescribeSuspiciousExportInfoRequest& request) const;
			DescribeSuspiciousOverallConfigOutcome describeSuspiciousOverallConfig(const Model::DescribeSuspiciousOverallConfigRequest &request)const;
			void describeSuspiciousOverallConfigAsync(const Model::DescribeSuspiciousOverallConfigRequest& request, const DescribeSuspiciousOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspiciousOverallConfigOutcomeCallable describeSuspiciousOverallConfigCallable(const Model::DescribeSuspiciousOverallConfigRequest& request) const;
			DescribeSuspiciousUUIDConfigOutcome describeSuspiciousUUIDConfig(const Model::DescribeSuspiciousUUIDConfigRequest &request)const;
			void describeSuspiciousUUIDConfigAsync(const Model::DescribeSuspiciousUUIDConfigRequest& request, const DescribeSuspiciousUUIDConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspiciousUUIDConfigOutcomeCallable describeSuspiciousUUIDConfigCallable(const Model::DescribeSuspiciousUUIDConfigRequest& request) const;
			DescribeTargetOutcome describeTarget(const Model::DescribeTargetRequest &request)const;
			void describeTargetAsync(const Model::DescribeTargetRequest& request, const DescribeTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTargetOutcomeCallable describeTargetCallable(const Model::DescribeTargetRequest& request) const;
			DescribeTargetConfigOutcome describeTargetConfig(const Model::DescribeTargetConfigRequest &request)const;
			void describeTargetConfigAsync(const Model::DescribeTargetConfigRequest& request, const DescribeTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTargetConfigOutcomeCallable describeTargetConfigCallable(const Model::DescribeTargetConfigRequest& request) const;
			DescribeTopRiskyAssetsOutcome describeTopRiskyAssets(const Model::DescribeTopRiskyAssetsRequest &request)const;
			void describeTopRiskyAssetsAsync(const Model::DescribeTopRiskyAssetsRequest& request, const DescribeTopRiskyAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTopRiskyAssetsOutcomeCallable describeTopRiskyAssetsCallable(const Model::DescribeTopRiskyAssetsRequest& request) const;
			DescribeTopicListOutcome describeTopicList(const Model::DescribeTopicListRequest &request)const;
			void describeTopicListAsync(const Model::DescribeTopicListRequest& request, const DescribeTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTopicListOutcomeCallable describeTopicListCallable(const Model::DescribeTopicListRequest& request) const;
			DescribeTotalStatisticsOutcome describeTotalStatistics(const Model::DescribeTotalStatisticsRequest &request)const;
			void describeTotalStatisticsAsync(const Model::DescribeTotalStatisticsRequest& request, const DescribeTotalStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTotalStatisticsOutcomeCallable describeTotalStatisticsCallable(const Model::DescribeTotalStatisticsRequest& request) const;
			DescribeTraceInfoDetailOutcome describeTraceInfoDetail(const Model::DescribeTraceInfoDetailRequest &request)const;
			void describeTraceInfoDetailAsync(const Model::DescribeTraceInfoDetailRequest& request, const DescribeTraceInfoDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTraceInfoDetailOutcomeCallable describeTraceInfoDetailCallable(const Model::DescribeTraceInfoDetailRequest& request) const;
			DescribeTraceInfoNodeOutcome describeTraceInfoNode(const Model::DescribeTraceInfoNodeRequest &request)const;
			void describeTraceInfoNodeAsync(const Model::DescribeTraceInfoNodeRequest& request, const DescribeTraceInfoNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTraceInfoNodeOutcomeCallable describeTraceInfoNodeCallable(const Model::DescribeTraceInfoNodeRequest& request) const;
			DescribeTraceInfoNodeListOutcome describeTraceInfoNodeList(const Model::DescribeTraceInfoNodeListRequest &request)const;
			void describeTraceInfoNodeListAsync(const Model::DescribeTraceInfoNodeListRequest& request, const DescribeTraceInfoNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTraceInfoNodeListOutcomeCallable describeTraceInfoNodeListCallable(const Model::DescribeTraceInfoNodeListRequest& request) const;
			DescribeUserSettingOutcome describeUserSetting(const Model::DescribeUserSettingRequest &request)const;
			void describeUserSettingAsync(const Model::DescribeUserSettingRequest& request, const DescribeUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserSettingOutcomeCallable describeUserSettingCallable(const Model::DescribeUserSettingRequest& request) const;
			DescribeUuidConfigOutcome describeUuidConfig(const Model::DescribeUuidConfigRequest &request)const;
			void describeUuidConfigAsync(const Model::DescribeUuidConfigRequest& request, const DescribeUuidConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUuidConfigOutcomeCallable describeUuidConfigCallable(const Model::DescribeUuidConfigRequest& request) const;
			DescribeVersionConfigOutcome describeVersionConfig(const Model::DescribeVersionConfigRequest &request)const;
			void describeVersionConfigAsync(const Model::DescribeVersionConfigRequest& request, const DescribeVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVersionConfigOutcomeCallable describeVersionConfigCallable(const Model::DescribeVersionConfigRequest& request) const;
			DescribeVulBatchOutcome describeVulBatch(const Model::DescribeVulBatchRequest &request)const;
			void describeVulBatchAsync(const Model::DescribeVulBatchRequest& request, const DescribeVulBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulBatchOutcomeCallable describeVulBatchCallable(const Model::DescribeVulBatchRequest& request) const;
			DescribeVulConfigOutcome describeVulConfig(const Model::DescribeVulConfigRequest &request)const;
			void describeVulConfigAsync(const Model::DescribeVulConfigRequest& request, const DescribeVulConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulConfigOutcomeCallable describeVulConfigCallable(const Model::DescribeVulConfigRequest& request) const;
			DescribeVulDetailsOutcome describeVulDetails(const Model::DescribeVulDetailsRequest &request)const;
			void describeVulDetailsAsync(const Model::DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulDetailsOutcomeCallable describeVulDetailsCallable(const Model::DescribeVulDetailsRequest& request) const;
			DescribeVulExportInfoOutcome describeVulExportInfo(const Model::DescribeVulExportInfoRequest &request)const;
			void describeVulExportInfoAsync(const Model::DescribeVulExportInfoRequest& request, const DescribeVulExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulExportInfoOutcomeCallable describeVulExportInfoCallable(const Model::DescribeVulExportInfoRequest& request) const;
			DescribeVulLevelOutcome describeVulLevel(const Model::DescribeVulLevelRequest &request)const;
			void describeVulLevelAsync(const Model::DescribeVulLevelRequest& request, const DescribeVulLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulLevelOutcomeCallable describeVulLevelCallable(const Model::DescribeVulLevelRequest& request) const;
			DescribeVulLevelStatisticsOutcome describeVulLevelStatistics(const Model::DescribeVulLevelStatisticsRequest &request)const;
			void describeVulLevelStatisticsAsync(const Model::DescribeVulLevelStatisticsRequest& request, const DescribeVulLevelStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulLevelStatisticsOutcomeCallable describeVulLevelStatisticsCallable(const Model::DescribeVulLevelStatisticsRequest& request) const;
			DescribeVulListOutcome describeVulList(const Model::DescribeVulListRequest &request)const;
			void describeVulListAsync(const Model::DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulListOutcomeCallable describeVulListCallable(const Model::DescribeVulListRequest& request) const;
			DescribeVulMachineListOutcome describeVulMachineList(const Model::DescribeVulMachineListRequest &request)const;
			void describeVulMachineListAsync(const Model::DescribeVulMachineListRequest& request, const DescribeVulMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulMachineListOutcomeCallable describeVulMachineListCallable(const Model::DescribeVulMachineListRequest& request) const;
			DescribeVulNumStatisticsOutcome describeVulNumStatistics(const Model::DescribeVulNumStatisticsRequest &request)const;
			void describeVulNumStatisticsAsync(const Model::DescribeVulNumStatisticsRequest& request, const DescribeVulNumStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulNumStatisticsOutcomeCallable describeVulNumStatisticsCallable(const Model::DescribeVulNumStatisticsRequest& request) const;
			DescribeVulRelatedProcessOutcome describeVulRelatedProcess(const Model::DescribeVulRelatedProcessRequest &request)const;
			void describeVulRelatedProcessAsync(const Model::DescribeVulRelatedProcessRequest& request, const DescribeVulRelatedProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulRelatedProcessOutcomeCallable describeVulRelatedProcessCallable(const Model::DescribeVulRelatedProcessRequest& request) const;
			DescribeVulStatisticsOutcome describeVulStatistics(const Model::DescribeVulStatisticsRequest &request)const;
			void describeVulStatisticsAsync(const Model::DescribeVulStatisticsRequest& request, const DescribeVulStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulStatisticsOutcomeCallable describeVulStatisticsCallable(const Model::DescribeVulStatisticsRequest& request) const;
			DescribeVulTargetStatisticsOutcome describeVulTargetStatistics(const Model::DescribeVulTargetStatisticsRequest &request)const;
			void describeVulTargetStatisticsAsync(const Model::DescribeVulTargetStatisticsRequest& request, const DescribeVulTargetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulTargetStatisticsOutcomeCallable describeVulTargetStatisticsCallable(const Model::DescribeVulTargetStatisticsRequest& request) const;
			DescribeVulWhitelistOutcome describeVulWhitelist(const Model::DescribeVulWhitelistRequest &request)const;
			void describeVulWhitelistAsync(const Model::DescribeVulWhitelistRequest& request, const DescribeVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulWhitelistOutcomeCallable describeVulWhitelistCallable(const Model::DescribeVulWhitelistRequest& request) const;
			DescribeVulnerabilitySummaryOutcome describeVulnerabilitySummary(const Model::DescribeVulnerabilitySummaryRequest &request)const;
			void describeVulnerabilitySummaryAsync(const Model::DescribeVulnerabilitySummaryRequest& request, const DescribeVulnerabilitySummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulnerabilitySummaryOutcomeCallable describeVulnerabilitySummaryCallable(const Model::DescribeVulnerabilitySummaryRequest& request) const;
			DescribeWarningOutcome describeWarning(const Model::DescribeWarningRequest &request)const;
			void describeWarningAsync(const Model::DescribeWarningRequest& request, const DescribeWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWarningOutcomeCallable describeWarningCallable(const Model::DescribeWarningRequest& request) const;
			DescribeWarningMachinesOutcome describeWarningMachines(const Model::DescribeWarningMachinesRequest &request)const;
			void describeWarningMachinesAsync(const Model::DescribeWarningMachinesRequest& request, const DescribeWarningMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWarningMachinesOutcomeCallable describeWarningMachinesCallable(const Model::DescribeWarningMachinesRequest& request) const;
			DescribeWebLockBindListOutcome describeWebLockBindList(const Model::DescribeWebLockBindListRequest &request)const;
			void describeWebLockBindListAsync(const Model::DescribeWebLockBindListRequest& request, const DescribeWebLockBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockBindListOutcomeCallable describeWebLockBindListCallable(const Model::DescribeWebLockBindListRequest& request) const;
			DescribeWebLockConfigListOutcome describeWebLockConfigList(const Model::DescribeWebLockConfigListRequest &request)const;
			void describeWebLockConfigListAsync(const Model::DescribeWebLockConfigListRequest& request, const DescribeWebLockConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockConfigListOutcomeCallable describeWebLockConfigListCallable(const Model::DescribeWebLockConfigListRequest& request) const;
			DescribeWebLockEventsOutcome describeWebLockEvents(const Model::DescribeWebLockEventsRequest &request)const;
			void describeWebLockEventsAsync(const Model::DescribeWebLockEventsRequest& request, const DescribeWebLockEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockEventsOutcomeCallable describeWebLockEventsCallable(const Model::DescribeWebLockEventsRequest& request) const;
			DescribeWebLockMachineListOutcome describeWebLockMachineList(const Model::DescribeWebLockMachineListRequest &request)const;
			void describeWebLockMachineListAsync(const Model::DescribeWebLockMachineListRequest& request, const DescribeWebLockMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockMachineListOutcomeCallable describeWebLockMachineListCallable(const Model::DescribeWebLockMachineListRequest& request) const;
			DescribeWebLockStatusOutcome describeWebLockStatus(const Model::DescribeWebLockStatusRequest &request)const;
			void describeWebLockStatusAsync(const Model::DescribeWebLockStatusRequest& request, const DescribeWebLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebLockStatusOutcomeCallable describeWebLockStatusCallable(const Model::DescribeWebLockStatusRequest& request) const;
			DescribeWebshellOutcome describeWebshell(const Model::DescribeWebshellRequest &request)const;
			void describeWebshellAsync(const Model::DescribeWebshellRequest& request, const DescribeWebshellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebshellOutcomeCallable describeWebshellCallable(const Model::DescribeWebshellRequest& request) const;
			DescribeWebshellListOutcome describeWebshellList(const Model::DescribeWebshellListRequest &request)const;
			void describeWebshellListAsync(const Model::DescribeWebshellListRequest& request, const DescribeWebshellListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebshellListOutcomeCallable describeWebshellListCallable(const Model::DescribeWebshellListRequest& request) const;
			DescribeWhiteListAssetOutcome describeWhiteListAsset(const Model::DescribeWhiteListAssetRequest &request)const;
			void describeWhiteListAssetAsync(const Model::DescribeWhiteListAssetRequest& request, const DescribeWhiteListAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhiteListAssetOutcomeCallable describeWhiteListAssetCallable(const Model::DescribeWhiteListAssetRequest& request) const;
			DescribeWhiteListAuthorizeOutcome describeWhiteListAuthorize(const Model::DescribeWhiteListAuthorizeRequest &request)const;
			void describeWhiteListAuthorizeAsync(const Model::DescribeWhiteListAuthorizeRequest& request, const DescribeWhiteListAuthorizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhiteListAuthorizeOutcomeCallable describeWhiteListAuthorizeCallable(const Model::DescribeWhiteListAuthorizeRequest& request) const;
			DescribeWhiteListEffectiveAssetsOutcome describeWhiteListEffectiveAssets(const Model::DescribeWhiteListEffectiveAssetsRequest &request)const;
			void describeWhiteListEffectiveAssetsAsync(const Model::DescribeWhiteListEffectiveAssetsRequest& request, const DescribeWhiteListEffectiveAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhiteListEffectiveAssetsOutcomeCallable describeWhiteListEffectiveAssetsCallable(const Model::DescribeWhiteListEffectiveAssetsRequest& request) const;
			DescribeWhiteListProcessOutcome describeWhiteListProcess(const Model::DescribeWhiteListProcessRequest &request)const;
			void describeWhiteListProcessAsync(const Model::DescribeWhiteListProcessRequest& request, const DescribeWhiteListProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhiteListProcessOutcomeCallable describeWhiteListProcessCallable(const Model::DescribeWhiteListProcessRequest& request) const;
			DescribeWhiteListStrategyCountOutcome describeWhiteListStrategyCount(const Model::DescribeWhiteListStrategyCountRequest &request)const;
			void describeWhiteListStrategyCountAsync(const Model::DescribeWhiteListStrategyCountRequest& request, const DescribeWhiteListStrategyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhiteListStrategyCountOutcomeCallable describeWhiteListStrategyCountCallable(const Model::DescribeWhiteListStrategyCountRequest& request) const;
			DescribeWhiteListStrategyListOutcome describeWhiteListStrategyList(const Model::DescribeWhiteListStrategyListRequest &request)const;
			void describeWhiteListStrategyListAsync(const Model::DescribeWhiteListStrategyListRequest& request, const DescribeWhiteListStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhiteListStrategyListOutcomeCallable describeWhiteListStrategyListCallable(const Model::DescribeWhiteListStrategyListRequest& request) const;
			DescribeWhiteListStrategyStatisticsOutcome describeWhiteListStrategyStatistics(const Model::DescribeWhiteListStrategyStatisticsRequest &request)const;
			void describeWhiteListStrategyStatisticsAsync(const Model::DescribeWhiteListStrategyStatisticsRequest& request, const DescribeWhiteListStrategyStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhiteListStrategyStatisticsOutcomeCallable describeWhiteListStrategyStatisticsCallable(const Model::DescribeWhiteListStrategyStatisticsRequest& request) const;
			DescribeWhiteListStrategyUuidCountOutcome describeWhiteListStrategyUuidCount(const Model::DescribeWhiteListStrategyUuidCountRequest &request)const;
			void describeWhiteListStrategyUuidCountAsync(const Model::DescribeWhiteListStrategyUuidCountRequest& request, const DescribeWhiteListStrategyUuidCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhiteListStrategyUuidCountOutcomeCallable describeWhiteListStrategyUuidCountCallable(const Model::DescribeWhiteListStrategyUuidCountRequest& request) const;
			DescribeYesterdayStatisticsOutcome describeYesterdayStatistics(const Model::DescribeYesterdayStatisticsRequest &request)const;
			void describeYesterdayStatisticsAsync(const Model::DescribeYesterdayStatisticsRequest& request, const DescribeYesterdayStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeYesterdayStatisticsOutcomeCallable describeYesterdayStatisticsCallable(const Model::DescribeYesterdayStatisticsRequest& request) const;
			DescribesummaryOutcome describesummary(const Model::DescribesummaryRequest &request)const;
			void describesummaryAsync(const Model::DescribesummaryRequest& request, const DescribesummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribesummaryOutcomeCallable describesummaryCallable(const Model::DescribesummaryRequest& request) const;
			DownloadLogOutcome downloadLog(const Model::DownloadLogRequest &request)const;
			void downloadLogAsync(const Model::DownloadLogRequest& request, const DownloadLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadLogOutcomeCallable downloadLogCallable(const Model::DownloadLogRequest& request) const;
			ExecStrategyOutcome execStrategy(const Model::ExecStrategyRequest &request)const;
			void execStrategyAsync(const Model::ExecStrategyRequest& request, const ExecStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecStrategyOutcomeCallable execStrategyCallable(const Model::ExecStrategyRequest& request) const;
			ExecuteRuleEngineActualTimeOutcome executeRuleEngineActualTime(const Model::ExecuteRuleEngineActualTimeRequest &request)const;
			void executeRuleEngineActualTimeAsync(const Model::ExecuteRuleEngineActualTimeRequest& request, const ExecuteRuleEngineActualTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteRuleEngineActualTimeOutcomeCallable executeRuleEngineActualTimeCallable(const Model::ExecuteRuleEngineActualTimeRequest& request) const;
			ExportSuspEventsOutcome exportSuspEvents(const Model::ExportSuspEventsRequest &request)const;
			void exportSuspEventsAsync(const Model::ExportSuspEventsRequest& request, const ExportSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportSuspEventsOutcomeCallable exportSuspEventsCallable(const Model::ExportSuspEventsRequest& request) const;
			ExportVulOutcome exportVul(const Model::ExportVulRequest &request)const;
			void exportVulAsync(const Model::ExportVulRequest& request, const ExportVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportVulOutcomeCallable exportVulCallable(const Model::ExportVulRequest& request) const;
			ExportWarningOutcome exportWarning(const Model::ExportWarningRequest &request)const;
			void exportWarningAsync(const Model::ExportWarningRequest& request, const ExportWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportWarningOutcomeCallable exportWarningCallable(const Model::ExportWarningRequest& request) const;
			GetAccountStatisticsOutcome getAccountStatistics(const Model::GetAccountStatisticsRequest &request)const;
			void getAccountStatisticsAsync(const Model::GetAccountStatisticsRequest& request, const GetAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountStatisticsOutcomeCallable getAccountStatisticsCallable(const Model::GetAccountStatisticsRequest& request) const;
			GetCrackStatisticsOutcome getCrackStatistics(const Model::GetCrackStatisticsRequest &request)const;
			void getCrackStatisticsAsync(const Model::GetCrackStatisticsRequest& request, const GetCrackStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCrackStatisticsOutcomeCallable getCrackStatisticsCallable(const Model::GetCrackStatisticsRequest& request) const;
			GetEntityListOutcome getEntityList(const Model::GetEntityListRequest &request)const;
			void getEntityListAsync(const Model::GetEntityListRequest& request, const GetEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEntityListOutcomeCallable getEntityListCallable(const Model::GetEntityListRequest& request) const;
			GetStatisticsOutcome getStatistics(const Model::GetStatisticsRequest &request)const;
			void getStatisticsAsync(const Model::GetStatisticsRequest& request, const GetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStatisticsOutcomeCallable getStatisticsCallable(const Model::GetStatisticsRequest& request) const;
			GetStatisticsByUuidOutcome getStatisticsByUuid(const Model::GetStatisticsByUuidRequest &request)const;
			void getStatisticsByUuidAsync(const Model::GetStatisticsByUuidRequest& request, const GetStatisticsByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStatisticsByUuidOutcomeCallable getStatisticsByUuidCallable(const Model::GetStatisticsByUuidRequest& request) const;
			IgnoreHcCheckWarningsOutcome ignoreHcCheckWarnings(const Model::IgnoreHcCheckWarningsRequest &request)const;
			void ignoreHcCheckWarningsAsync(const Model::IgnoreHcCheckWarningsRequest& request, const IgnoreHcCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IgnoreHcCheckWarningsOutcomeCallable ignoreHcCheckWarningsCallable(const Model::IgnoreHcCheckWarningsRequest& request) const;
			ModifyAccessKeyLeakDealOutcome modifyAccessKeyLeakDeal(const Model::ModifyAccessKeyLeakDealRequest &request)const;
			void modifyAccessKeyLeakDealAsync(const Model::ModifyAccessKeyLeakDealRequest& request, const ModifyAccessKeyLeakDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccessKeyLeakDealOutcomeCallable modifyAccessKeyLeakDealCallable(const Model::ModifyAccessKeyLeakDealRequest& request) const;
			ModifyAccessKeyLeakInstRunOutcome modifyAccessKeyLeakInstRun(const Model::ModifyAccessKeyLeakInstRunRequest &request)const;
			void modifyAccessKeyLeakInstRunAsync(const Model::ModifyAccessKeyLeakInstRunRequest& request, const ModifyAccessKeyLeakInstRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAccessKeyLeakInstRunOutcomeCallable modifyAccessKeyLeakInstRunCallable(const Model::ModifyAccessKeyLeakInstRunRequest& request) const;
			ModifyAssetGroupOutcome modifyAssetGroup(const Model::ModifyAssetGroupRequest &request)const;
			void modifyAssetGroupAsync(const Model::ModifyAssetGroupRequest& request, const ModifyAssetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAssetGroupOutcomeCallable modifyAssetGroupCallable(const Model::ModifyAssetGroupRequest& request) const;
			ModifyAutoDelConfigOutcome modifyAutoDelConfig(const Model::ModifyAutoDelConfigRequest &request)const;
			void modifyAutoDelConfigAsync(const Model::ModifyAutoDelConfigRequest& request, const ModifyAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoDelConfigOutcomeCallable modifyAutoDelConfigCallable(const Model::ModifyAutoDelConfigRequest& request) const;
			ModifyBatchIgnoreVulOutcome modifyBatchIgnoreVul(const Model::ModifyBatchIgnoreVulRequest &request)const;
			void modifyBatchIgnoreVulAsync(const Model::ModifyBatchIgnoreVulRequest& request, const ModifyBatchIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBatchIgnoreVulOutcomeCallable modifyBatchIgnoreVulCallable(const Model::ModifyBatchIgnoreVulRequest& request) const;
			ModifyClearLogstoreStorageOutcome modifyClearLogstoreStorage(const Model::ModifyClearLogstoreStorageRequest &request)const;
			void modifyClearLogstoreStorageAsync(const Model::ModifyClearLogstoreStorageRequest& request, const ModifyClearLogstoreStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClearLogstoreStorageOutcomeCallable modifyClearLogstoreStorageCallable(const Model::ModifyClearLogstoreStorageRequest& request) const;
			ModifyConcernNecessityOutcome modifyConcernNecessity(const Model::ModifyConcernNecessityRequest &request)const;
			void modifyConcernNecessityAsync(const Model::ModifyConcernNecessityRequest& request, const ModifyConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConcernNecessityOutcomeCallable modifyConcernNecessityCallable(const Model::ModifyConcernNecessityRequest& request) const;
			ModifyEmgVulSubmitOutcome modifyEmgVulSubmit(const Model::ModifyEmgVulSubmitRequest &request)const;
			void modifyEmgVulSubmitAsync(const Model::ModifyEmgVulSubmitRequest& request, const ModifyEmgVulSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEmgVulSubmitOutcomeCallable modifyEmgVulSubmitCallable(const Model::ModifyEmgVulSubmitRequest& request) const;
			ModifyLogMetaStatusOutcome modifyLogMetaStatus(const Model::ModifyLogMetaStatusRequest &request)const;
			void modifyLogMetaStatusAsync(const Model::ModifyLogMetaStatusRequest& request, const ModifyLogMetaStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLogMetaStatusOutcomeCallable modifyLogMetaStatusCallable(const Model::ModifyLogMetaStatusRequest& request) const;
			ModifyMachineConfigOutcome modifyMachineConfig(const Model::ModifyMachineConfigRequest &request)const;
			void modifyMachineConfigAsync(const Model::ModifyMachineConfigRequest& request, const ModifyMachineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMachineConfigOutcomeCallable modifyMachineConfigCallable(const Model::ModifyMachineConfigRequest& request) const;
			ModifyOpenLogShipperOutcome modifyOpenLogShipper(const Model::ModifyOpenLogShipperRequest &request)const;
			void modifyOpenLogShipperAsync(const Model::ModifyOpenLogShipperRequest& request, const ModifyOpenLogShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOpenLogShipperOutcomeCallable modifyOpenLogShipperCallable(const Model::ModifyOpenLogShipperRequest& request) const;
			ModifyRefreshProcessInfoOutcome modifyRefreshProcessInfo(const Model::ModifyRefreshProcessInfoRequest &request)const;
			void modifyRefreshProcessInfoAsync(const Model::ModifyRefreshProcessInfoRequest& request, const ModifyRefreshProcessInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRefreshProcessInfoOutcomeCallable modifyRefreshProcessInfoCallable(const Model::ModifyRefreshProcessInfoRequest& request) const;
			ModifySasAssetStatisticsColumnOutcome modifySasAssetStatisticsColumn(const Model::ModifySasAssetStatisticsColumnRequest &request)const;
			void modifySasAssetStatisticsColumnAsync(const Model::ModifySasAssetStatisticsColumnRequest& request, const ModifySasAssetStatisticsColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySasAssetStatisticsColumnOutcomeCallable modifySasAssetStatisticsColumnCallable(const Model::ModifySasAssetStatisticsColumnRequest& request) const;
			ModifySaveVulBatchOutcome modifySaveVulBatch(const Model::ModifySaveVulBatchRequest &request)const;
			void modifySaveVulBatchAsync(const Model::ModifySaveVulBatchRequest& request, const ModifySaveVulBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySaveVulBatchOutcomeCallable modifySaveVulBatchCallable(const Model::ModifySaveVulBatchRequest& request) const;
			ModifyScreenSettingOutcome modifyScreenSetting(const Model::ModifyScreenSettingRequest &request)const;
			void modifyScreenSettingAsync(const Model::ModifyScreenSettingRequest& request, const ModifyScreenSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScreenSettingOutcomeCallable modifyScreenSettingCallable(const Model::ModifyScreenSettingRequest& request) const;
			ModifySearchConditionOutcome modifySearchCondition(const Model::ModifySearchConditionRequest &request)const;
			void modifySearchConditionAsync(const Model::ModifySearchConditionRequest& request, const ModifySearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySearchConditionOutcomeCallable modifySearchConditionCallable(const Model::ModifySearchConditionRequest& request) const;
			ModifyStrategyOutcome modifyStrategy(const Model::ModifyStrategyRequest &request)const;
			void modifyStrategyAsync(const Model::ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStrategyOutcomeCallable modifyStrategyCallable(const Model::ModifyStrategyRequest& request) const;
			ModifyStrategyTargetOutcome modifyStrategyTarget(const Model::ModifyStrategyTargetRequest &request)const;
			void modifyStrategyTargetAsync(const Model::ModifyStrategyTargetRequest& request, const ModifyStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStrategyTargetOutcomeCallable modifyStrategyTargetCallable(const Model::ModifyStrategyTargetRequest& request) const;
			ModifyTargetConfigOutcome modifyTargetConfig(const Model::ModifyTargetConfigRequest &request)const;
			void modifyTargetConfigAsync(const Model::ModifyTargetConfigRequest& request, const ModifyTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTargetConfigOutcomeCallable modifyTargetConfigCallable(const Model::ModifyTargetConfigRequest& request) const;
			ModifyVulConfigOutcome modifyVulConfig(const Model::ModifyVulConfigRequest &request)const;
			void modifyVulConfigAsync(const Model::ModifyVulConfigRequest& request, const ModifyVulConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVulConfigOutcomeCallable modifyVulConfigCallable(const Model::ModifyVulConfigRequest& request) const;
			ModifyVulLevelOutcome modifyVulLevel(const Model::ModifyVulLevelRequest &request)const;
			void modifyVulLevelAsync(const Model::ModifyVulLevelRequest& request, const ModifyVulLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVulLevelOutcomeCallable modifyVulLevelCallable(const Model::ModifyVulLevelRequest& request) const;
			ModifyVulTargetOutcome modifyVulTarget(const Model::ModifyVulTargetRequest &request)const;
			void modifyVulTargetAsync(const Model::ModifyVulTargetRequest& request, const ModifyVulTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVulTargetOutcomeCallable modifyVulTargetCallable(const Model::ModifyVulTargetRequest& request) const;
			ModifyWebLockCreateConfigOutcome modifyWebLockCreateConfig(const Model::ModifyWebLockCreateConfigRequest &request)const;
			void modifyWebLockCreateConfigAsync(const Model::ModifyWebLockCreateConfigRequest& request, const ModifyWebLockCreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockCreateConfigOutcomeCallable modifyWebLockCreateConfigCallable(const Model::ModifyWebLockCreateConfigRequest& request) const;
			ModifyWebLockDeleteConfigOutcome modifyWebLockDeleteConfig(const Model::ModifyWebLockDeleteConfigRequest &request)const;
			void modifyWebLockDeleteConfigAsync(const Model::ModifyWebLockDeleteConfigRequest& request, const ModifyWebLockDeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockDeleteConfigOutcomeCallable modifyWebLockDeleteConfigCallable(const Model::ModifyWebLockDeleteConfigRequest& request) const;
			ModifyWebLockMachineListOutcome modifyWebLockMachineList(const Model::ModifyWebLockMachineListRequest &request)const;
			void modifyWebLockMachineListAsync(const Model::ModifyWebLockMachineListRequest& request, const ModifyWebLockMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockMachineListOutcomeCallable modifyWebLockMachineListCallable(const Model::ModifyWebLockMachineListRequest& request) const;
			ModifyWebLockOperateEventsOutcome modifyWebLockOperateEvents(const Model::ModifyWebLockOperateEventsRequest &request)const;
			void modifyWebLockOperateEventsAsync(const Model::ModifyWebLockOperateEventsRequest& request, const ModifyWebLockOperateEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockOperateEventsOutcomeCallable modifyWebLockOperateEventsCallable(const Model::ModifyWebLockOperateEventsRequest& request) const;
			ModifyWebLockRefreshOutcome modifyWebLockRefresh(const Model::ModifyWebLockRefreshRequest &request)const;
			void modifyWebLockRefreshAsync(const Model::ModifyWebLockRefreshRequest& request, const ModifyWebLockRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockRefreshOutcomeCallable modifyWebLockRefreshCallable(const Model::ModifyWebLockRefreshRequest& request) const;
			ModifyWebLockStatusOutcome modifyWebLockStatus(const Model::ModifyWebLockStatusRequest &request)const;
			void modifyWebLockStatusAsync(const Model::ModifyWebLockStatusRequest& request, const ModifyWebLockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockStatusOutcomeCallable modifyWebLockStatusCallable(const Model::ModifyWebLockStatusRequest& request) const;
			ModifyWebLockUpdateConfigOutcome modifyWebLockUpdateConfig(const Model::ModifyWebLockUpdateConfigRequest &request)const;
			void modifyWebLockUpdateConfigAsync(const Model::ModifyWebLockUpdateConfigRequest& request, const ModifyWebLockUpdateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebLockUpdateConfigOutcomeCallable modifyWebLockUpdateConfigCallable(const Model::ModifyWebLockUpdateConfigRequest& request) const;
			OpenSasTrialOutcome openSasTrial(const Model::OpenSasTrialRequest &request)const;
			void openSasTrialAsync(const Model::OpenSasTrialRequest& request, const OpenSasTrialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenSasTrialOutcomeCallable openSasTrialCallable(const Model::OpenSasTrialRequest& request) const;
			OperateAgentClientInstallOutcome operateAgentClientInstall(const Model::OperateAgentClientInstallRequest &request)const;
			void operateAgentClientInstallAsync(const Model::OperateAgentClientInstallRequest& request, const OperateAgentClientInstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateAgentClientInstallOutcomeCallable operateAgentClientInstallCallable(const Model::OperateAgentClientInstallRequest& request) const;
			OperateResultOutcome operateResult(const Model::OperateResultRequest &request)const;
			void operateResultAsync(const Model::OperateResultRequest& request, const OperateResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateResultOutcomeCallable operateResultCallable(const Model::OperateResultRequest& request) const;
			OperateSuspiciousEventOutcome operateSuspiciousEvent(const Model::OperateSuspiciousEventRequest &request)const;
			void operateSuspiciousEventAsync(const Model::OperateSuspiciousEventRequest& request, const OperateSuspiciousEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateSuspiciousEventOutcomeCallable operateSuspiciousEventCallable(const Model::OperateSuspiciousEventRequest& request) const;
			OperateSuspiciousOverallConfigOutcome operateSuspiciousOverallConfig(const Model::OperateSuspiciousOverallConfigRequest &request)const;
			void operateSuspiciousOverallConfigAsync(const Model::OperateSuspiciousOverallConfigRequest& request, const OperateSuspiciousOverallConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateSuspiciousOverallConfigOutcomeCallable operateSuspiciousOverallConfigCallable(const Model::OperateSuspiciousOverallConfigRequest& request) const;
			OperateSuspiciousTargetConfigOutcome operateSuspiciousTargetConfig(const Model::OperateSuspiciousTargetConfigRequest &request)const;
			void operateSuspiciousTargetConfigAsync(const Model::OperateSuspiciousTargetConfigRequest& request, const OperateSuspiciousTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateSuspiciousTargetConfigOutcomeCallable operateSuspiciousTargetConfigCallable(const Model::OperateSuspiciousTargetConfigRequest& request) const;
			OperateVulOutcome operateVul(const Model::OperateVulRequest &request)const;
			void operateVulAsync(const Model::OperateVulRequest& request, const OperateVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateVulOutcomeCallable operateVulCallable(const Model::OperateVulRequest& request) const;
			OperateWarningOutcome operateWarning(const Model::OperateWarningRequest &request)const;
			void operateWarningAsync(const Model::OperateWarningRequest& request, const OperateWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateWarningOutcomeCallable operateWarningCallable(const Model::OperateWarningRequest& request) const;
			OperationCustomizeReportChartOutcome operationCustomizeReportChart(const Model::OperationCustomizeReportChartRequest &request)const;
			void operationCustomizeReportChartAsync(const Model::OperationCustomizeReportChartRequest& request, const OperationCustomizeReportChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperationCustomizeReportChartOutcomeCallable operationCustomizeReportChartCallable(const Model::OperationCustomizeReportChartRequest& request) const;
			OperationSuspEventsOutcome operationSuspEvents(const Model::OperationSuspEventsRequest &request)const;
			void operationSuspEventsAsync(const Model::OperationSuspEventsRequest& request, const OperationSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperationSuspEventsOutcomeCallable operationSuspEventsCallable(const Model::OperationSuspEventsRequest& request) const;
			QueryCrackEventOutcome queryCrackEvent(const Model::QueryCrackEventRequest &request)const;
			void queryCrackEventAsync(const Model::QueryCrackEventRequest& request, const QueryCrackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCrackEventOutcomeCallable queryCrackEventCallable(const Model::QueryCrackEventRequest& request) const;
			QueryLoginEventOutcome queryLoginEvent(const Model::QueryLoginEventRequest &request)const;
			void queryLoginEventAsync(const Model::QueryLoginEventRequest& request, const QueryLoginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryLoginEventOutcomeCallable queryLoginEventCallable(const Model::QueryLoginEventRequest& request) const;
			ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
			void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			RollbackQuaraFileOutcome rollbackQuaraFile(const Model::RollbackQuaraFileRequest &request)const;
			void rollbackQuaraFileAsync(const Model::RollbackQuaraFileRequest& request, const RollbackQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackQuaraFileOutcomeCallable rollbackQuaraFileCallable(const Model::RollbackQuaraFileRequest& request) const;
			RollbackSuspEventQuaraFileOutcome rollbackSuspEventQuaraFile(const Model::RollbackSuspEventQuaraFileRequest &request)const;
			void rollbackSuspEventQuaraFileAsync(const Model::RollbackSuspEventQuaraFileRequest& request, const RollbackSuspEventQuaraFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackSuspEventQuaraFileOutcomeCallable rollbackSuspEventQuaraFileCallable(const Model::RollbackSuspEventQuaraFileRequest& request) const;
			SaveCustomizeReportConfigOutcome saveCustomizeReportConfig(const Model::SaveCustomizeReportConfigRequest &request)const;
			void saveCustomizeReportConfigAsync(const Model::SaveCustomizeReportConfigRequest& request, const SaveCustomizeReportConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveCustomizeReportConfigOutcomeCallable saveCustomizeReportConfigCallable(const Model::SaveCustomizeReportConfigRequest& request) const;
			SaveSuspEventUserSettingOutcome saveSuspEventUserSetting(const Model::SaveSuspEventUserSettingRequest &request)const;
			void saveSuspEventUserSettingAsync(const Model::SaveSuspEventUserSettingRequest& request, const SaveSuspEventUserSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSuspEventUserSettingOutcomeCallable saveSuspEventUserSettingCallable(const Model::SaveSuspEventUserSettingRequest& request) const;
			SaveWhiteListStrategyOutcome saveWhiteListStrategy(const Model::SaveWhiteListStrategyRequest &request)const;
			void saveWhiteListStrategyAsync(const Model::SaveWhiteListStrategyRequest& request, const SaveWhiteListStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveWhiteListStrategyOutcomeCallable saveWhiteListStrategyCallable(const Model::SaveWhiteListStrategyRequest& request) const;
			SaveWhiteListStrategyAssetsOutcome saveWhiteListStrategyAssets(const Model::SaveWhiteListStrategyAssetsRequest &request)const;
			void saveWhiteListStrategyAssetsAsync(const Model::SaveWhiteListStrategyAssetsRequest& request, const SaveWhiteListStrategyAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveWhiteListStrategyAssetsOutcomeCallable saveWhiteListStrategyAssetsCallable(const Model::SaveWhiteListStrategyAssetsRequest& request) const;
			SendCustomizeReportOutcome sendCustomizeReport(const Model::SendCustomizeReportRequest &request)const;
			void sendCustomizeReportAsync(const Model::SendCustomizeReportRequest& request, const SendCustomizeReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendCustomizeReportOutcomeCallable sendCustomizeReportCallable(const Model::SendCustomizeReportRequest& request) const;
			SetDatasourceStatusOutcome setDatasourceStatus(const Model::SetDatasourceStatusRequest &request)const;
			void setDatasourceStatusAsync(const Model::SetDatasourceStatusRequest& request, const SetDatasourceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDatasourceStatusOutcomeCallable setDatasourceStatusCallable(const Model::SetDatasourceStatusRequest& request) const;
			TransformLeakageOutcome transformLeakage(const Model::TransformLeakageRequest &request)const;
			void transformLeakageAsync(const Model::TransformLeakageRequest& request, const TransformLeakageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransformLeakageOutcomeCallable transformLeakageCallable(const Model::TransformLeakageRequest& request) const;
			UpdateCustomizeReportStatusOutcome updateCustomizeReportStatus(const Model::UpdateCustomizeReportStatusRequest &request)const;
			void updateCustomizeReportStatusAsync(const Model::UpdateCustomizeReportStatusRequest& request, const UpdateCustomizeReportStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomizeReportStatusOutcomeCallable updateCustomizeReportStatusCallable(const Model::UpdateCustomizeReportStatusRequest& request) const;
			UpdateWhiteListProcessStatusOutcome updateWhiteListProcessStatus(const Model::UpdateWhiteListProcessStatusRequest &request)const;
			void updateWhiteListProcessStatusAsync(const Model::UpdateWhiteListProcessStatusRequest& request, const UpdateWhiteListProcessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWhiteListProcessStatusOutcomeCallable updateWhiteListProcessStatusCallable(const Model::UpdateWhiteListProcessStatusRequest& request) const;
			UpdateWhiteListStrategyRelationOutcome updateWhiteListStrategyRelation(const Model::UpdateWhiteListStrategyRelationRequest &request)const;
			void updateWhiteListStrategyRelationAsync(const Model::UpdateWhiteListStrategyRelationRequest& request, const UpdateWhiteListStrategyRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWhiteListStrategyRelationOutcomeCallable updateWhiteListStrategyRelationCallable(const Model::UpdateWhiteListStrategyRelationRequest& request) const;
			UpdateWhiteListStrategyStatusOutcome updateWhiteListStrategyStatus(const Model::UpdateWhiteListStrategyStatusRequest &request)const;
			void updateWhiteListStrategyStatusAsync(const Model::UpdateWhiteListStrategyStatusRequest& request, const UpdateWhiteListStrategyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWhiteListStrategyStatusOutcomeCallable updateWhiteListStrategyStatusCallable(const Model::UpdateWhiteListStrategyStatusRequest& request) const;
			UpgradeInstanceOutcome upgradeInstance(const Model::UpgradeInstanceRequest &request)const;
			void upgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeInstanceOutcomeCallable upgradeInstanceCallable(const Model::UpgradeInstanceRequest& request) const;
			ValidateHcWarningsOutcome validateHcWarnings(const Model::ValidateHcWarningsRequest &request)const;
			void validateHcWarningsAsync(const Model::ValidateHcWarningsRequest& request, const ValidateHcWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateHcWarningsOutcomeCallable validateHcWarningsCallable(const Model::ValidateHcWarningsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AEGIS_AEGISCLIENT_H_
