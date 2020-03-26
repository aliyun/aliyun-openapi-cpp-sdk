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

#ifndef ALIBABACLOUD_SAS_SASCLIENT_H_
#define ALIBABACLOUD_SAS_SASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SasExport.h"
#include "model/CreateAntiBruteForceRuleRequest.h"
#include "model/CreateAntiBruteForceRuleResult.h"
#include "model/CreateOrUpdateAssetGroupRequest.h"
#include "model/CreateOrUpdateAssetGroupResult.h"
#include "model/CreateSimilarSecurityEventsQueryTaskRequest.h"
#include "model/CreateSimilarSecurityEventsQueryTaskResult.h"
#include "model/DeleteGroupRequest.h"
#include "model/DeleteGroupResult.h"
#include "model/DeleteLoginBaseConfigRequest.h"
#include "model/DeleteLoginBaseConfigResult.h"
#include "model/DeleteTagWithUuidRequest.h"
#include "model/DeleteTagWithUuidResult.h"
#include "model/DescribeAlarmEventDetailRequest.h"
#include "model/DescribeAlarmEventDetailResult.h"
#include "model/DescribeAlarmEventListRequest.h"
#include "model/DescribeAlarmEventListResult.h"
#include "model/DescribeAllEntityRequest.h"
#include "model/DescribeAllEntityResult.h"
#include "model/DescribeAllGroupsRequest.h"
#include "model/DescribeAllGroupsResult.h"
#include "model/DescribeAllRegionsStatisticsRequest.h"
#include "model/DescribeAllRegionsStatisticsResult.h"
#include "model/DescribeAssetDetailByUuidRequest.h"
#include "model/DescribeAssetDetailByUuidResult.h"
#include "model/DescribeAssetDetailByUuidsRequest.h"
#include "model/DescribeAssetDetailByUuidsResult.h"
#include "model/DescribeAutoDelConfigRequest.h"
#include "model/DescribeAutoDelConfigResult.h"
#include "model/DescribeCheckWarningDetailRequest.h"
#include "model/DescribeCheckWarningDetailResult.h"
#include "model/DescribeCheckWarningSummaryRequest.h"
#include "model/DescribeCheckWarningSummaryResult.h"
#include "model/DescribeCheckWarningsRequest.h"
#include "model/DescribeCheckWarningsResult.h"
#include "model/DescribeCloudCenterInstancesRequest.h"
#include "model/DescribeCloudCenterInstancesResult.h"
#include "model/DescribeCloudProductFieldStatisticsRequest.h"
#include "model/DescribeCloudProductFieldStatisticsResult.h"
#include "model/DescribeConcernNecessityRequest.h"
#include "model/DescribeConcernNecessityResult.h"
#include "model/DescribeCriteriaRequest.h"
#include "model/DescribeCriteriaResult.h"
#include "model/DescribeDialogMessagesRequest.h"
#include "model/DescribeDialogMessagesResult.h"
#include "model/DescribeDingTalkRequest.h"
#include "model/DescribeDingTalkResult.h"
#include "model/DescribeDomainCountRequest.h"
#include "model/DescribeDomainCountResult.h"
#include "model/DescribeDomainDetailRequest.h"
#include "model/DescribeDomainDetailResult.h"
#include "model/DescribeDomainListRequest.h"
#include "model/DescribeDomainListResult.h"
#include "model/DescribeEmgVulGroupRequest.h"
#include "model/DescribeEmgVulGroupResult.h"
#include "model/DescribeExportInfoRequest.h"
#include "model/DescribeExportInfoResult.h"
#include "model/DescribeFieldStatisticsRequest.h"
#include "model/DescribeFieldStatisticsResult.h"
#include "model/DescribeGraph4InvestigationOnlineRequest.h"
#include "model/DescribeGraph4InvestigationOnlineResult.h"
#include "model/DescribeGroupedTagsRequest.h"
#include "model/DescribeGroupedTagsResult.h"
#include "model/DescribeGroupedVulRequest.h"
#include "model/DescribeGroupedVulResult.h"
#include "model/DescribeInstanceStatisticsRequest.h"
#include "model/DescribeInstanceStatisticsResult.h"
#include "model/DescribeIpInfoRequest.h"
#include "model/DescribeIpInfoResult.h"
#include "model/DescribeModuleConfigRequest.h"
#include "model/DescribeModuleConfigResult.h"
#include "model/DescribeNoticeConfigRequest.h"
#include "model/DescribeNoticeConfigResult.h"
#include "model/DescribePropertyCountRequest.h"
#include "model/DescribePropertyCountResult.h"
#include "model/DescribePropertyPortDetailRequest.h"
#include "model/DescribePropertyPortDetailResult.h"
#include "model/DescribePropertyPortItemRequest.h"
#include "model/DescribePropertyPortItemResult.h"
#include "model/DescribePropertyProcDetailRequest.h"
#include "model/DescribePropertyProcDetailResult.h"
#include "model/DescribePropertyProcItemRequest.h"
#include "model/DescribePropertyProcItemResult.h"
#include "model/DescribePropertySoftwareDetailRequest.h"
#include "model/DescribePropertySoftwareDetailResult.h"
#include "model/DescribePropertySoftwareItemRequest.h"
#include "model/DescribePropertySoftwareItemResult.h"
#include "model/DescribePropertyUsageNewestRequest.h"
#include "model/DescribePropertyUsageNewestResult.h"
#include "model/DescribePropertyUserDetailRequest.h"
#include "model/DescribePropertyUserDetailResult.h"
#include "model/DescribePropertyUserItemRequest.h"
#include "model/DescribePropertyUserItemResult.h"
#include "model/DescribeRiskCheckItemResultRequest.h"
#include "model/DescribeRiskCheckItemResultResult.h"
#include "model/DescribeRiskCheckResultRequest.h"
#include "model/DescribeRiskCheckResultResult.h"
#include "model/DescribeRiskCheckSummaryRequest.h"
#include "model/DescribeRiskCheckSummaryResult.h"
#include "model/DescribeRiskItemTypeRequest.h"
#include "model/DescribeRiskItemTypeResult.h"
#include "model/DescribeSasAssetStatisticsColumnRequest.h"
#include "model/DescribeSasAssetStatisticsColumnResult.h"
#include "model/DescribeSearchConditionRequest.h"
#include "model/DescribeSearchConditionResult.h"
#include "model/DescribeSecureSuggestionRequest.h"
#include "model/DescribeSecureSuggestionResult.h"
#include "model/DescribeSecurityCheckScheduleConfigRequest.h"
#include "model/DescribeSecurityCheckScheduleConfigResult.h"
#include "model/DescribeSecurityEventOperationsRequest.h"
#include "model/DescribeSecurityEventOperationsResult.h"
#include "model/DescribeSecurityStatInfoRequest.h"
#include "model/DescribeSecurityStatInfoResult.h"
#include "model/DescribeSimilarSecurityEventsRequest.h"
#include "model/DescribeSimilarSecurityEventsResult.h"
#include "model/DescribeStrategyExecDetailRequest.h"
#include "model/DescribeStrategyExecDetailResult.h"
#include "model/DescribeStratetyRequest.h"
#include "model/DescribeStratetyResult.h"
#include "model/DescribeSummaryInfoRequest.h"
#include "model/DescribeSummaryInfoResult.h"
#include "model/DescribeSuspEventDetailRequest.h"
#include "model/DescribeSuspEventDetailResult.h"
#include "model/DescribeSuspEventsRequest.h"
#include "model/DescribeSuspEventsResult.h"
#include "model/DescribeUserBaselineAuthorizationRequest.h"
#include "model/DescribeUserBaselineAuthorizationResult.h"
#include "model/DescribeUserLayoutAuthorizationRequest.h"
#include "model/DescribeUserLayoutAuthorizationResult.h"
#include "model/DescribeVolDingdingMessageRequest.h"
#include "model/DescribeVolDingdingMessageResult.h"
#include "model/DescribeVpcListRequest.h"
#include "model/DescribeVpcListResult.h"
#include "model/DescribeVulDetailsRequest.h"
#include "model/DescribeVulDetailsResult.h"
#include "model/DescribeVulListRequest.h"
#include "model/DescribeVulListResult.h"
#include "model/DescribeVulWhitelistRequest.h"
#include "model/DescribeVulWhitelistResult.h"
#include "model/DescribeWarningMachinesRequest.h"
#include "model/DescribeWarningMachinesResult.h"
#include "model/ExportRecordRequest.h"
#include "model/ExportRecordResult.h"
#include "model/GetIOCsRequest.h"
#include "model/GetIOCsResult.h"
#include "model/GetIncIOCsRequest.h"
#include "model/GetIncIOCsResult.h"
#include "model/HandleSimilarSecurityEventsRequest.h"
#include "model/HandleSimilarSecurityEventsResult.h"
#include "model/ModifyAntiBruteForceRuleRequest.h"
#include "model/ModifyAntiBruteForceRuleResult.h"
#include "model/ModifyAutoDelConfigRequest.h"
#include "model/ModifyAutoDelConfigResult.h"
#include "model/ModifyConcernNecessityRequest.h"
#include "model/ModifyConcernNecessityResult.h"
#include "model/ModifyCreateVulWhitelistRequest.h"
#include "model/ModifyCreateVulWhitelistResult.h"
#include "model/ModifyDeleteVulWhitelistRequest.h"
#include "model/ModifyDeleteVulWhitelistResult.h"
#include "model/ModifyEmgVulSubmitRequest.h"
#include "model/ModifyEmgVulSubmitResult.h"
#include "model/ModifyGroupPropertyRequest.h"
#include "model/ModifyGroupPropertyResult.h"
#include "model/ModifyLoginBaseConfigRequest.h"
#include "model/ModifyLoginBaseConfigResult.h"
#include "model/ModifyLoginSwitchConfigRequest.h"
#include "model/ModifyLoginSwitchConfigResult.h"
#include "model/ModifyNoticeConfigRequest.h"
#include "model/ModifyNoticeConfigResult.h"
#include "model/ModifyOperateVulRequest.h"
#include "model/ModifyOperateVulResult.h"
#include "model/ModifyPushAllTaskRequest.h"
#include "model/ModifyPushAllTaskResult.h"
#include "model/ModifyRiskCheckStatusRequest.h"
#include "model/ModifyRiskCheckStatusResult.h"
#include "model/ModifyRiskSingleResultStatusRequest.h"
#include "model/ModifyRiskSingleResultStatusResult.h"
#include "model/ModifySecurityCheckScheduleConfigRequest.h"
#include "model/ModifySecurityCheckScheduleConfigResult.h"
#include "model/ModifyStartVulScanRequest.h"
#include "model/ModifyStartVulScanResult.h"
#include "model/ModifyTagWithUuidRequest.h"
#include "model/ModifyTagWithUuidResult.h"
#include "model/ModifyVulTargetConfigRequest.h"
#include "model/ModifyVulTargetConfigResult.h"
#include "model/OperateSuspiciousTargetConfigRequest.h"
#include "model/OperateSuspiciousTargetConfigResult.h"
#include "model/OperationSuspEventsRequest.h"
#include "model/OperationSuspEventsResult.h"
#include "model/PauseClientRequest.h"
#include "model/PauseClientResult.h"
#include "model/SasInstallCodeRequest.h"
#include "model/SasInstallCodeResult.h"
#include "model/StartBaselineSecurityCheckRequest.h"
#include "model/StartBaselineSecurityCheckResult.h"


namespace AlibabaCloud
{
	namespace Sas
	{
		class ALIBABACLOUD_SAS_EXPORT SasClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAntiBruteForceRuleResult> CreateAntiBruteForceRuleOutcome;
			typedef std::future<CreateAntiBruteForceRuleOutcome> CreateAntiBruteForceRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateAntiBruteForceRuleRequest&, const CreateAntiBruteForceRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAntiBruteForceRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateAssetGroupResult> CreateOrUpdateAssetGroupOutcome;
			typedef std::future<CreateOrUpdateAssetGroupOutcome> CreateOrUpdateAssetGroupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateOrUpdateAssetGroupRequest&, const CreateOrUpdateAssetGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateAssetGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateSimilarSecurityEventsQueryTaskResult> CreateSimilarSecurityEventsQueryTaskOutcome;
			typedef std::future<CreateSimilarSecurityEventsQueryTaskOutcome> CreateSimilarSecurityEventsQueryTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::CreateSimilarSecurityEventsQueryTaskRequest&, const CreateSimilarSecurityEventsQueryTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSimilarSecurityEventsQueryTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupResult> DeleteGroupOutcome;
			typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteGroupRequest&, const DeleteGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteLoginBaseConfigResult> DeleteLoginBaseConfigOutcome;
			typedef std::future<DeleteLoginBaseConfigOutcome> DeleteLoginBaseConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteLoginBaseConfigRequest&, const DeleteLoginBaseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginBaseConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagWithUuidResult> DeleteTagWithUuidOutcome;
			typedef std::future<DeleteTagWithUuidOutcome> DeleteTagWithUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DeleteTagWithUuidRequest&, const DeleteTagWithUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagWithUuidAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventDetailResult> DescribeAlarmEventDetailOutcome;
			typedef std::future<DescribeAlarmEventDetailOutcome> DescribeAlarmEventDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAlarmEventDetailRequest&, const DescribeAlarmEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventListResult> DescribeAlarmEventListOutcome;
			typedef std::future<DescribeAlarmEventListOutcome> DescribeAlarmEventListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAlarmEventListRequest&, const DescribeAlarmEventListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllEntityResult> DescribeAllEntityOutcome;
			typedef std::future<DescribeAllEntityOutcome> DescribeAllEntityOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAllEntityRequest&, const DescribeAllEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllEntityAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllGroupsResult> DescribeAllGroupsOutcome;
			typedef std::future<DescribeAllGroupsOutcome> DescribeAllGroupsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAllGroupsRequest&, const DescribeAllGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAllRegionsStatisticsResult> DescribeAllRegionsStatisticsOutcome;
			typedef std::future<DescribeAllRegionsStatisticsOutcome> DescribeAllRegionsStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAllRegionsStatisticsRequest&, const DescribeAllRegionsStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllRegionsStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetDetailByUuidResult> DescribeAssetDetailByUuidOutcome;
			typedef std::future<DescribeAssetDetailByUuidOutcome> DescribeAssetDetailByUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAssetDetailByUuidRequest&, const DescribeAssetDetailByUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailByUuidAsyncHandler;
			typedef Outcome<Error, Model::DescribeAssetDetailByUuidsResult> DescribeAssetDetailByUuidsOutcome;
			typedef std::future<DescribeAssetDetailByUuidsOutcome> DescribeAssetDetailByUuidsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAssetDetailByUuidsRequest&, const DescribeAssetDetailByUuidsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailByUuidsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoDelConfigResult> DescribeAutoDelConfigOutcome;
			typedef std::future<DescribeAutoDelConfigOutcome> DescribeAutoDelConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAutoDelConfigRequest&, const DescribeAutoDelConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoDelConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningDetailResult> DescribeCheckWarningDetailOutcome;
			typedef std::future<DescribeCheckWarningDetailOutcome> DescribeCheckWarningDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningDetailRequest&, const DescribeCheckWarningDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningSummaryResult> DescribeCheckWarningSummaryOutcome;
			typedef std::future<DescribeCheckWarningSummaryOutcome> DescribeCheckWarningSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningSummaryRequest&, const DescribeCheckWarningSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningsResult> DescribeCheckWarningsOutcome;
			typedef std::future<DescribeCheckWarningsOutcome> DescribeCheckWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningsRequest&, const DescribeCheckWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudCenterInstancesResult> DescribeCloudCenterInstancesOutcome;
			typedef std::future<DescribeCloudCenterInstancesOutcome> DescribeCloudCenterInstancesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCloudCenterInstancesRequest&, const DescribeCloudCenterInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudCenterInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudProductFieldStatisticsResult> DescribeCloudProductFieldStatisticsOutcome;
			typedef std::future<DescribeCloudProductFieldStatisticsOutcome> DescribeCloudProductFieldStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCloudProductFieldStatisticsRequest&, const DescribeCloudProductFieldStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudProductFieldStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeConcernNecessityResult> DescribeConcernNecessityOutcome;
			typedef std::future<DescribeConcernNecessityOutcome> DescribeConcernNecessityOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeConcernNecessityRequest&, const DescribeConcernNecessityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcernNecessityAsyncHandler;
			typedef Outcome<Error, Model::DescribeCriteriaResult> DescribeCriteriaOutcome;
			typedef std::future<DescribeCriteriaOutcome> DescribeCriteriaOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCriteriaRequest&, const DescribeCriteriaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCriteriaAsyncHandler;
			typedef Outcome<Error, Model::DescribeDialogMessagesResult> DescribeDialogMessagesOutcome;
			typedef std::future<DescribeDialogMessagesOutcome> DescribeDialogMessagesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeDialogMessagesRequest&, const DescribeDialogMessagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDialogMessagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDingTalkResult> DescribeDingTalkOutcome;
			typedef std::future<DescribeDingTalkOutcome> DescribeDingTalkOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeDingTalkRequest&, const DescribeDingTalkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDingTalkAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainCountResult> DescribeDomainCountOutcome;
			typedef std::future<DescribeDomainCountOutcome> DescribeDomainCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeDomainCountRequest&, const DescribeDomainCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainDetailResult> DescribeDomainDetailOutcome;
			typedef std::future<DescribeDomainDetailOutcome> DescribeDomainDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeDomainDetailRequest&, const DescribeDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainListResult> DescribeDomainListOutcome;
			typedef std::future<DescribeDomainListOutcome> DescribeDomainListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeDomainListRequest&, const DescribeDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainListAsyncHandler;
			typedef Outcome<Error, Model::DescribeEmgVulGroupResult> DescribeEmgVulGroupOutcome;
			typedef std::future<DescribeEmgVulGroupOutcome> DescribeEmgVulGroupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeEmgVulGroupRequest&, const DescribeEmgVulGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmgVulGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeExportInfoResult> DescribeExportInfoOutcome;
			typedef std::future<DescribeExportInfoOutcome> DescribeExportInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeExportInfoRequest&, const DescribeExportInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeFieldStatisticsResult> DescribeFieldStatisticsOutcome;
			typedef std::future<DescribeFieldStatisticsOutcome> DescribeFieldStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeFieldStatisticsRequest&, const DescribeFieldStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFieldStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGraph4InvestigationOnlineResult> DescribeGraph4InvestigationOnlineOutcome;
			typedef std::future<DescribeGraph4InvestigationOnlineOutcome> DescribeGraph4InvestigationOnlineOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeGraph4InvestigationOnlineRequest&, const DescribeGraph4InvestigationOnlineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGraph4InvestigationOnlineAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupedTagsResult> DescribeGroupedTagsOutcome;
			typedef std::future<DescribeGroupedTagsOutcome> DescribeGroupedTagsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeGroupedTagsRequest&, const DescribeGroupedTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupedTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupedVulResult> DescribeGroupedVulOutcome;
			typedef std::future<DescribeGroupedVulOutcome> DescribeGroupedVulOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeGroupedVulRequest&, const DescribeGroupedVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupedVulAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceStatisticsResult> DescribeInstanceStatisticsOutcome;
			typedef std::future<DescribeInstanceStatisticsOutcome> DescribeInstanceStatisticsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeInstanceStatisticsRequest&, const DescribeInstanceStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpInfoResult> DescribeIpInfoOutcome;
			typedef std::future<DescribeIpInfoOutcome> DescribeIpInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeIpInfoRequest&, const DescribeIpInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeModuleConfigResult> DescribeModuleConfigOutcome;
			typedef std::future<DescribeModuleConfigOutcome> DescribeModuleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeModuleConfigRequest&, const DescribeModuleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeNoticeConfigResult> DescribeNoticeConfigOutcome;
			typedef std::future<DescribeNoticeConfigOutcome> DescribeNoticeConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeNoticeConfigRequest&, const DescribeNoticeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNoticeConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyCountResult> DescribePropertyCountOutcome;
			typedef std::future<DescribePropertyCountOutcome> DescribePropertyCountOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyCountRequest&, const DescribePropertyCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyCountAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyPortDetailResult> DescribePropertyPortDetailOutcome;
			typedef std::future<DescribePropertyPortDetailOutcome> DescribePropertyPortDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyPortDetailRequest&, const DescribePropertyPortDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyPortDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyPortItemResult> DescribePropertyPortItemOutcome;
			typedef std::future<DescribePropertyPortItemOutcome> DescribePropertyPortItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyPortItemRequest&, const DescribePropertyPortItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyPortItemAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyProcDetailResult> DescribePropertyProcDetailOutcome;
			typedef std::future<DescribePropertyProcDetailOutcome> DescribePropertyProcDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyProcDetailRequest&, const DescribePropertyProcDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyProcDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyProcItemResult> DescribePropertyProcItemOutcome;
			typedef std::future<DescribePropertyProcItemOutcome> DescribePropertyProcItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyProcItemRequest&, const DescribePropertyProcItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyProcItemAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertySoftwareDetailResult> DescribePropertySoftwareDetailOutcome;
			typedef std::future<DescribePropertySoftwareDetailOutcome> DescribePropertySoftwareDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertySoftwareDetailRequest&, const DescribePropertySoftwareDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertySoftwareDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertySoftwareItemResult> DescribePropertySoftwareItemOutcome;
			typedef std::future<DescribePropertySoftwareItemOutcome> DescribePropertySoftwareItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertySoftwareItemRequest&, const DescribePropertySoftwareItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertySoftwareItemAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyUsageNewestResult> DescribePropertyUsageNewestOutcome;
			typedef std::future<DescribePropertyUsageNewestOutcome> DescribePropertyUsageNewestOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyUsageNewestRequest&, const DescribePropertyUsageNewestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyUsageNewestAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyUserDetailResult> DescribePropertyUserDetailOutcome;
			typedef std::future<DescribePropertyUserDetailOutcome> DescribePropertyUserDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyUserDetailRequest&, const DescribePropertyUserDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyUserDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribePropertyUserItemResult> DescribePropertyUserItemOutcome;
			typedef std::future<DescribePropertyUserItemOutcome> DescribePropertyUserItemOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribePropertyUserItemRequest&, const DescribePropertyUserItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePropertyUserItemAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskCheckItemResultResult> DescribeRiskCheckItemResultOutcome;
			typedef std::future<DescribeRiskCheckItemResultOutcome> DescribeRiskCheckItemResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskCheckItemResultRequest&, const DescribeRiskCheckItemResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCheckItemResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskCheckResultResult> DescribeRiskCheckResultOutcome;
			typedef std::future<DescribeRiskCheckResultOutcome> DescribeRiskCheckResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskCheckResultRequest&, const DescribeRiskCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskCheckSummaryResult> DescribeRiskCheckSummaryOutcome;
			typedef std::future<DescribeRiskCheckSummaryOutcome> DescribeRiskCheckSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskCheckSummaryRequest&, const DescribeRiskCheckSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCheckSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskItemTypeResult> DescribeRiskItemTypeOutcome;
			typedef std::future<DescribeRiskItemTypeOutcome> DescribeRiskItemTypeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskItemTypeRequest&, const DescribeRiskItemTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskItemTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeSasAssetStatisticsColumnResult> DescribeSasAssetStatisticsColumnOutcome;
			typedef std::future<DescribeSasAssetStatisticsColumnOutcome> DescribeSasAssetStatisticsColumnOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSasAssetStatisticsColumnRequest&, const DescribeSasAssetStatisticsColumnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSasAssetStatisticsColumnAsyncHandler;
			typedef Outcome<Error, Model::DescribeSearchConditionResult> DescribeSearchConditionOutcome;
			typedef std::future<DescribeSearchConditionOutcome> DescribeSearchConditionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSearchConditionRequest&, const DescribeSearchConditionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchConditionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecureSuggestionResult> DescribeSecureSuggestionOutcome;
			typedef std::future<DescribeSecureSuggestionOutcome> DescribeSecureSuggestionOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecureSuggestionRequest&, const DescribeSecureSuggestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecureSuggestionAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityCheckScheduleConfigResult> DescribeSecurityCheckScheduleConfigOutcome;
			typedef std::future<DescribeSecurityCheckScheduleConfigOutcome> DescribeSecurityCheckScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecurityCheckScheduleConfigRequest&, const DescribeSecurityCheckScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityCheckScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityEventOperationsResult> DescribeSecurityEventOperationsOutcome;
			typedef std::future<DescribeSecurityEventOperationsOutcome> DescribeSecurityEventOperationsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecurityEventOperationsRequest&, const DescribeSecurityEventOperationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityEventOperationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityStatInfoResult> DescribeSecurityStatInfoOutcome;
			typedef std::future<DescribeSecurityStatInfoOutcome> DescribeSecurityStatInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecurityStatInfoRequest&, const DescribeSecurityStatInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityStatInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSimilarSecurityEventsResult> DescribeSimilarSecurityEventsOutcome;
			typedef std::future<DescribeSimilarSecurityEventsOutcome> DescribeSimilarSecurityEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSimilarSecurityEventsRequest&, const DescribeSimilarSecurityEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimilarSecurityEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyExecDetailResult> DescribeStrategyExecDetailOutcome;
			typedef std::future<DescribeStrategyExecDetailOutcome> DescribeStrategyExecDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeStrategyExecDetailRequest&, const DescribeStrategyExecDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyExecDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeStratetyResult> DescribeStratetyOutcome;
			typedef std::future<DescribeStratetyOutcome> DescribeStratetyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeStratetyRequest&, const DescribeStratetyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStratetyAsyncHandler;
			typedef Outcome<Error, Model::DescribeSummaryInfoResult> DescribeSummaryInfoOutcome;
			typedef std::future<DescribeSummaryInfoOutcome> DescribeSummaryInfoOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSummaryInfoRequest&, const DescribeSummaryInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSummaryInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventDetailResult> DescribeSuspEventDetailOutcome;
			typedef std::future<DescribeSuspEventDetailOutcome> DescribeSuspEventDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventDetailRequest&, const DescribeSuspEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventsResult> DescribeSuspEventsOutcome;
			typedef std::future<DescribeSuspEventsOutcome> DescribeSuspEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventsRequest&, const DescribeSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserBaselineAuthorizationResult> DescribeUserBaselineAuthorizationOutcome;
			typedef std::future<DescribeUserBaselineAuthorizationOutcome> DescribeUserBaselineAuthorizationOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUserBaselineAuthorizationRequest&, const DescribeUserBaselineAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBaselineAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserLayoutAuthorizationResult> DescribeUserLayoutAuthorizationOutcome;
			typedef std::future<DescribeUserLayoutAuthorizationOutcome> DescribeUserLayoutAuthorizationOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUserLayoutAuthorizationRequest&, const DescribeUserLayoutAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserLayoutAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::DescribeVolDingdingMessageResult> DescribeVolDingdingMessageOutcome;
			typedef std::future<DescribeVolDingdingMessageOutcome> DescribeVolDingdingMessageOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVolDingdingMessageRequest&, const DescribeVolDingdingMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVolDingdingMessageAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcListResult> DescribeVpcListOutcome;
			typedef std::future<DescribeVpcListOutcome> DescribeVpcListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVpcListRequest&, const DescribeVpcListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulDetailsResult> DescribeVulDetailsOutcome;
			typedef std::future<DescribeVulDetailsOutcome> DescribeVulDetailsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulDetailsRequest&, const DescribeVulDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulListResult> DescribeVulListOutcome;
			typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulListRequest&, const DescribeVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulWhitelistResult> DescribeVulWhitelistOutcome;
			typedef std::future<DescribeVulWhitelistOutcome> DescribeVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulWhitelistRequest&, const DescribeVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeWarningMachinesResult> DescribeWarningMachinesOutcome;
			typedef std::future<DescribeWarningMachinesOutcome> DescribeWarningMachinesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWarningMachinesRequest&, const DescribeWarningMachinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningMachinesAsyncHandler;
			typedef Outcome<Error, Model::ExportRecordResult> ExportRecordOutcome;
			typedef std::future<ExportRecordOutcome> ExportRecordOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ExportRecordRequest&, const ExportRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportRecordAsyncHandler;
			typedef Outcome<Error, Model::GetIOCsResult> GetIOCsOutcome;
			typedef std::future<GetIOCsOutcome> GetIOCsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetIOCsRequest&, const GetIOCsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIOCsAsyncHandler;
			typedef Outcome<Error, Model::GetIncIOCsResult> GetIncIOCsOutcome;
			typedef std::future<GetIncIOCsOutcome> GetIncIOCsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::GetIncIOCsRequest&, const GetIncIOCsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIncIOCsAsyncHandler;
			typedef Outcome<Error, Model::HandleSimilarSecurityEventsResult> HandleSimilarSecurityEventsOutcome;
			typedef std::future<HandleSimilarSecurityEventsOutcome> HandleSimilarSecurityEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::HandleSimilarSecurityEventsRequest&, const HandleSimilarSecurityEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HandleSimilarSecurityEventsAsyncHandler;
			typedef Outcome<Error, Model::ModifyAntiBruteForceRuleResult> ModifyAntiBruteForceRuleOutcome;
			typedef std::future<ModifyAntiBruteForceRuleOutcome> ModifyAntiBruteForceRuleOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAntiBruteForceRuleRequest&, const ModifyAntiBruteForceRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiBruteForceRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoDelConfigResult> ModifyAutoDelConfigOutcome;
			typedef std::future<ModifyAutoDelConfigOutcome> ModifyAutoDelConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAutoDelConfigRequest&, const ModifyAutoDelConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoDelConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyConcernNecessityResult> ModifyConcernNecessityOutcome;
			typedef std::future<ModifyConcernNecessityOutcome> ModifyConcernNecessityOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyConcernNecessityRequest&, const ModifyConcernNecessityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConcernNecessityAsyncHandler;
			typedef Outcome<Error, Model::ModifyCreateVulWhitelistResult> ModifyCreateVulWhitelistOutcome;
			typedef std::future<ModifyCreateVulWhitelistOutcome> ModifyCreateVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyCreateVulWhitelistRequest&, const ModifyCreateVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCreateVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeleteVulWhitelistResult> ModifyDeleteVulWhitelistOutcome;
			typedef std::future<ModifyDeleteVulWhitelistOutcome> ModifyDeleteVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyDeleteVulWhitelistRequest&, const ModifyDeleteVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeleteVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyEmgVulSubmitResult> ModifyEmgVulSubmitOutcome;
			typedef std::future<ModifyEmgVulSubmitOutcome> ModifyEmgVulSubmitOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyEmgVulSubmitRequest&, const ModifyEmgVulSubmitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEmgVulSubmitAsyncHandler;
			typedef Outcome<Error, Model::ModifyGroupPropertyResult> ModifyGroupPropertyOutcome;
			typedef std::future<ModifyGroupPropertyOutcome> ModifyGroupPropertyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyGroupPropertyRequest&, const ModifyGroupPropertyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupPropertyAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoginBaseConfigResult> ModifyLoginBaseConfigOutcome;
			typedef std::future<ModifyLoginBaseConfigOutcome> ModifyLoginBaseConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyLoginBaseConfigRequest&, const ModifyLoginBaseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginBaseConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyLoginSwitchConfigResult> ModifyLoginSwitchConfigOutcome;
			typedef std::future<ModifyLoginSwitchConfigOutcome> ModifyLoginSwitchConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyLoginSwitchConfigRequest&, const ModifyLoginSwitchConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginSwitchConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyNoticeConfigResult> ModifyNoticeConfigOutcome;
			typedef std::future<ModifyNoticeConfigOutcome> ModifyNoticeConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyNoticeConfigRequest&, const ModifyNoticeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNoticeConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyOperateVulResult> ModifyOperateVulOutcome;
			typedef std::future<ModifyOperateVulOutcome> ModifyOperateVulOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyOperateVulRequest&, const ModifyOperateVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOperateVulAsyncHandler;
			typedef Outcome<Error, Model::ModifyPushAllTaskResult> ModifyPushAllTaskOutcome;
			typedef std::future<ModifyPushAllTaskOutcome> ModifyPushAllTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyPushAllTaskRequest&, const ModifyPushAllTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPushAllTaskAsyncHandler;
			typedef Outcome<Error, Model::ModifyRiskCheckStatusResult> ModifyRiskCheckStatusOutcome;
			typedef std::future<ModifyRiskCheckStatusOutcome> ModifyRiskCheckStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyRiskCheckStatusRequest&, const ModifyRiskCheckStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCheckStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyRiskSingleResultStatusResult> ModifyRiskSingleResultStatusOutcome;
			typedef std::future<ModifyRiskSingleResultStatusOutcome> ModifyRiskSingleResultStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyRiskSingleResultStatusRequest&, const ModifyRiskSingleResultStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskSingleResultStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityCheckScheduleConfigResult> ModifySecurityCheckScheduleConfigOutcome;
			typedef std::future<ModifySecurityCheckScheduleConfigOutcome> ModifySecurityCheckScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifySecurityCheckScheduleConfigRequest&, const ModifySecurityCheckScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityCheckScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyStartVulScanResult> ModifyStartVulScanOutcome;
			typedef std::future<ModifyStartVulScanOutcome> ModifyStartVulScanOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyStartVulScanRequest&, const ModifyStartVulScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStartVulScanAsyncHandler;
			typedef Outcome<Error, Model::ModifyTagWithUuidResult> ModifyTagWithUuidOutcome;
			typedef std::future<ModifyTagWithUuidOutcome> ModifyTagWithUuidOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyTagWithUuidRequest&, const ModifyTagWithUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTagWithUuidAsyncHandler;
			typedef Outcome<Error, Model::ModifyVulTargetConfigResult> ModifyVulTargetConfigOutcome;
			typedef std::future<ModifyVulTargetConfigOutcome> ModifyVulTargetConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyVulTargetConfigRequest&, const ModifyVulTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::OperateSuspiciousTargetConfigResult> OperateSuspiciousTargetConfigOutcome;
			typedef std::future<OperateSuspiciousTargetConfigOutcome> OperateSuspiciousTargetConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperateSuspiciousTargetConfigRequest&, const OperateSuspiciousTargetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateSuspiciousTargetConfigAsyncHandler;
			typedef Outcome<Error, Model::OperationSuspEventsResult> OperationSuspEventsOutcome;
			typedef std::future<OperationSuspEventsOutcome> OperationSuspEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::OperationSuspEventsRequest&, const OperationSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperationSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::PauseClientResult> PauseClientOutcome;
			typedef std::future<PauseClientOutcome> PauseClientOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::PauseClientRequest&, const PauseClientOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PauseClientAsyncHandler;
			typedef Outcome<Error, Model::SasInstallCodeResult> SasInstallCodeOutcome;
			typedef std::future<SasInstallCodeOutcome> SasInstallCodeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::SasInstallCodeRequest&, const SasInstallCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SasInstallCodeAsyncHandler;
			typedef Outcome<Error, Model::StartBaselineSecurityCheckResult> StartBaselineSecurityCheckOutcome;
			typedef std::future<StartBaselineSecurityCheckOutcome> StartBaselineSecurityCheckOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::StartBaselineSecurityCheckRequest&, const StartBaselineSecurityCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBaselineSecurityCheckAsyncHandler;

			SasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SasClient();
			CreateAntiBruteForceRuleOutcome createAntiBruteForceRule(const Model::CreateAntiBruteForceRuleRequest &request)const;
			void createAntiBruteForceRuleAsync(const Model::CreateAntiBruteForceRuleRequest& request, const CreateAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAntiBruteForceRuleOutcomeCallable createAntiBruteForceRuleCallable(const Model::CreateAntiBruteForceRuleRequest& request) const;
			CreateOrUpdateAssetGroupOutcome createOrUpdateAssetGroup(const Model::CreateOrUpdateAssetGroupRequest &request)const;
			void createOrUpdateAssetGroupAsync(const Model::CreateOrUpdateAssetGroupRequest& request, const CreateOrUpdateAssetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateAssetGroupOutcomeCallable createOrUpdateAssetGroupCallable(const Model::CreateOrUpdateAssetGroupRequest& request) const;
			CreateSimilarSecurityEventsQueryTaskOutcome createSimilarSecurityEventsQueryTask(const Model::CreateSimilarSecurityEventsQueryTaskRequest &request)const;
			void createSimilarSecurityEventsQueryTaskAsync(const Model::CreateSimilarSecurityEventsQueryTaskRequest& request, const CreateSimilarSecurityEventsQueryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSimilarSecurityEventsQueryTaskOutcomeCallable createSimilarSecurityEventsQueryTaskCallable(const Model::CreateSimilarSecurityEventsQueryTaskRequest& request) const;
			DeleteGroupOutcome deleteGroup(const Model::DeleteGroupRequest &request)const;
			void deleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupOutcomeCallable deleteGroupCallable(const Model::DeleteGroupRequest& request) const;
			DeleteLoginBaseConfigOutcome deleteLoginBaseConfig(const Model::DeleteLoginBaseConfigRequest &request)const;
			void deleteLoginBaseConfigAsync(const Model::DeleteLoginBaseConfigRequest& request, const DeleteLoginBaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLoginBaseConfigOutcomeCallable deleteLoginBaseConfigCallable(const Model::DeleteLoginBaseConfigRequest& request) const;
			DeleteTagWithUuidOutcome deleteTagWithUuid(const Model::DeleteTagWithUuidRequest &request)const;
			void deleteTagWithUuidAsync(const Model::DeleteTagWithUuidRequest& request, const DeleteTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagWithUuidOutcomeCallable deleteTagWithUuidCallable(const Model::DeleteTagWithUuidRequest& request) const;
			DescribeAlarmEventDetailOutcome describeAlarmEventDetail(const Model::DescribeAlarmEventDetailRequest &request)const;
			void describeAlarmEventDetailAsync(const Model::DescribeAlarmEventDetailRequest& request, const DescribeAlarmEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventDetailOutcomeCallable describeAlarmEventDetailCallable(const Model::DescribeAlarmEventDetailRequest& request) const;
			DescribeAlarmEventListOutcome describeAlarmEventList(const Model::DescribeAlarmEventListRequest &request)const;
			void describeAlarmEventListAsync(const Model::DescribeAlarmEventListRequest& request, const DescribeAlarmEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventListOutcomeCallable describeAlarmEventListCallable(const Model::DescribeAlarmEventListRequest& request) const;
			DescribeAllEntityOutcome describeAllEntity(const Model::DescribeAllEntityRequest &request)const;
			void describeAllEntityAsync(const Model::DescribeAllEntityRequest& request, const DescribeAllEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllEntityOutcomeCallable describeAllEntityCallable(const Model::DescribeAllEntityRequest& request) const;
			DescribeAllGroupsOutcome describeAllGroups(const Model::DescribeAllGroupsRequest &request)const;
			void describeAllGroupsAsync(const Model::DescribeAllGroupsRequest& request, const DescribeAllGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllGroupsOutcomeCallable describeAllGroupsCallable(const Model::DescribeAllGroupsRequest& request) const;
			DescribeAllRegionsStatisticsOutcome describeAllRegionsStatistics(const Model::DescribeAllRegionsStatisticsRequest &request)const;
			void describeAllRegionsStatisticsAsync(const Model::DescribeAllRegionsStatisticsRequest& request, const DescribeAllRegionsStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAllRegionsStatisticsOutcomeCallable describeAllRegionsStatisticsCallable(const Model::DescribeAllRegionsStatisticsRequest& request) const;
			DescribeAssetDetailByUuidOutcome describeAssetDetailByUuid(const Model::DescribeAssetDetailByUuidRequest &request)const;
			void describeAssetDetailByUuidAsync(const Model::DescribeAssetDetailByUuidRequest& request, const DescribeAssetDetailByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetDetailByUuidOutcomeCallable describeAssetDetailByUuidCallable(const Model::DescribeAssetDetailByUuidRequest& request) const;
			DescribeAssetDetailByUuidsOutcome describeAssetDetailByUuids(const Model::DescribeAssetDetailByUuidsRequest &request)const;
			void describeAssetDetailByUuidsAsync(const Model::DescribeAssetDetailByUuidsRequest& request, const DescribeAssetDetailByUuidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAssetDetailByUuidsOutcomeCallable describeAssetDetailByUuidsCallable(const Model::DescribeAssetDetailByUuidsRequest& request) const;
			DescribeAutoDelConfigOutcome describeAutoDelConfig(const Model::DescribeAutoDelConfigRequest &request)const;
			void describeAutoDelConfigAsync(const Model::DescribeAutoDelConfigRequest& request, const DescribeAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoDelConfigOutcomeCallable describeAutoDelConfigCallable(const Model::DescribeAutoDelConfigRequest& request) const;
			DescribeCheckWarningDetailOutcome describeCheckWarningDetail(const Model::DescribeCheckWarningDetailRequest &request)const;
			void describeCheckWarningDetailAsync(const Model::DescribeCheckWarningDetailRequest& request, const DescribeCheckWarningDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningDetailOutcomeCallable describeCheckWarningDetailCallable(const Model::DescribeCheckWarningDetailRequest& request) const;
			DescribeCheckWarningSummaryOutcome describeCheckWarningSummary(const Model::DescribeCheckWarningSummaryRequest &request)const;
			void describeCheckWarningSummaryAsync(const Model::DescribeCheckWarningSummaryRequest& request, const DescribeCheckWarningSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningSummaryOutcomeCallable describeCheckWarningSummaryCallable(const Model::DescribeCheckWarningSummaryRequest& request) const;
			DescribeCheckWarningsOutcome describeCheckWarnings(const Model::DescribeCheckWarningsRequest &request)const;
			void describeCheckWarningsAsync(const Model::DescribeCheckWarningsRequest& request, const DescribeCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningsOutcomeCallable describeCheckWarningsCallable(const Model::DescribeCheckWarningsRequest& request) const;
			DescribeCloudCenterInstancesOutcome describeCloudCenterInstances(const Model::DescribeCloudCenterInstancesRequest &request)const;
			void describeCloudCenterInstancesAsync(const Model::DescribeCloudCenterInstancesRequest& request, const DescribeCloudCenterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudCenterInstancesOutcomeCallable describeCloudCenterInstancesCallable(const Model::DescribeCloudCenterInstancesRequest& request) const;
			DescribeCloudProductFieldStatisticsOutcome describeCloudProductFieldStatistics(const Model::DescribeCloudProductFieldStatisticsRequest &request)const;
			void describeCloudProductFieldStatisticsAsync(const Model::DescribeCloudProductFieldStatisticsRequest& request, const DescribeCloudProductFieldStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudProductFieldStatisticsOutcomeCallable describeCloudProductFieldStatisticsCallable(const Model::DescribeCloudProductFieldStatisticsRequest& request) const;
			DescribeConcernNecessityOutcome describeConcernNecessity(const Model::DescribeConcernNecessityRequest &request)const;
			void describeConcernNecessityAsync(const Model::DescribeConcernNecessityRequest& request, const DescribeConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConcernNecessityOutcomeCallable describeConcernNecessityCallable(const Model::DescribeConcernNecessityRequest& request) const;
			DescribeCriteriaOutcome describeCriteria(const Model::DescribeCriteriaRequest &request)const;
			void describeCriteriaAsync(const Model::DescribeCriteriaRequest& request, const DescribeCriteriaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCriteriaOutcomeCallable describeCriteriaCallable(const Model::DescribeCriteriaRequest& request) const;
			DescribeDialogMessagesOutcome describeDialogMessages(const Model::DescribeDialogMessagesRequest &request)const;
			void describeDialogMessagesAsync(const Model::DescribeDialogMessagesRequest& request, const DescribeDialogMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDialogMessagesOutcomeCallable describeDialogMessagesCallable(const Model::DescribeDialogMessagesRequest& request) const;
			DescribeDingTalkOutcome describeDingTalk(const Model::DescribeDingTalkRequest &request)const;
			void describeDingTalkAsync(const Model::DescribeDingTalkRequest& request, const DescribeDingTalkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDingTalkOutcomeCallable describeDingTalkCallable(const Model::DescribeDingTalkRequest& request) const;
			DescribeDomainCountOutcome describeDomainCount(const Model::DescribeDomainCountRequest &request)const;
			void describeDomainCountAsync(const Model::DescribeDomainCountRequest& request, const DescribeDomainCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainCountOutcomeCallable describeDomainCountCallable(const Model::DescribeDomainCountRequest& request) const;
			DescribeDomainDetailOutcome describeDomainDetail(const Model::DescribeDomainDetailRequest &request)const;
			void describeDomainDetailAsync(const Model::DescribeDomainDetailRequest& request, const DescribeDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainDetailOutcomeCallable describeDomainDetailCallable(const Model::DescribeDomainDetailRequest& request) const;
			DescribeDomainListOutcome describeDomainList(const Model::DescribeDomainListRequest &request)const;
			void describeDomainListAsync(const Model::DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainListOutcomeCallable describeDomainListCallable(const Model::DescribeDomainListRequest& request) const;
			DescribeEmgVulGroupOutcome describeEmgVulGroup(const Model::DescribeEmgVulGroupRequest &request)const;
			void describeEmgVulGroupAsync(const Model::DescribeEmgVulGroupRequest& request, const DescribeEmgVulGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmgVulGroupOutcomeCallable describeEmgVulGroupCallable(const Model::DescribeEmgVulGroupRequest& request) const;
			DescribeExportInfoOutcome describeExportInfo(const Model::DescribeExportInfoRequest &request)const;
			void describeExportInfoAsync(const Model::DescribeExportInfoRequest& request, const DescribeExportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExportInfoOutcomeCallable describeExportInfoCallable(const Model::DescribeExportInfoRequest& request) const;
			DescribeFieldStatisticsOutcome describeFieldStatistics(const Model::DescribeFieldStatisticsRequest &request)const;
			void describeFieldStatisticsAsync(const Model::DescribeFieldStatisticsRequest& request, const DescribeFieldStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFieldStatisticsOutcomeCallable describeFieldStatisticsCallable(const Model::DescribeFieldStatisticsRequest& request) const;
			DescribeGraph4InvestigationOnlineOutcome describeGraph4InvestigationOnline(const Model::DescribeGraph4InvestigationOnlineRequest &request)const;
			void describeGraph4InvestigationOnlineAsync(const Model::DescribeGraph4InvestigationOnlineRequest& request, const DescribeGraph4InvestigationOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGraph4InvestigationOnlineOutcomeCallable describeGraph4InvestigationOnlineCallable(const Model::DescribeGraph4InvestigationOnlineRequest& request) const;
			DescribeGroupedTagsOutcome describeGroupedTags(const Model::DescribeGroupedTagsRequest &request)const;
			void describeGroupedTagsAsync(const Model::DescribeGroupedTagsRequest& request, const DescribeGroupedTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupedTagsOutcomeCallable describeGroupedTagsCallable(const Model::DescribeGroupedTagsRequest& request) const;
			DescribeGroupedVulOutcome describeGroupedVul(const Model::DescribeGroupedVulRequest &request)const;
			void describeGroupedVulAsync(const Model::DescribeGroupedVulRequest& request, const DescribeGroupedVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupedVulOutcomeCallable describeGroupedVulCallable(const Model::DescribeGroupedVulRequest& request) const;
			DescribeInstanceStatisticsOutcome describeInstanceStatistics(const Model::DescribeInstanceStatisticsRequest &request)const;
			void describeInstanceStatisticsAsync(const Model::DescribeInstanceStatisticsRequest& request, const DescribeInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceStatisticsOutcomeCallable describeInstanceStatisticsCallable(const Model::DescribeInstanceStatisticsRequest& request) const;
			DescribeIpInfoOutcome describeIpInfo(const Model::DescribeIpInfoRequest &request)const;
			void describeIpInfoAsync(const Model::DescribeIpInfoRequest& request, const DescribeIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpInfoOutcomeCallable describeIpInfoCallable(const Model::DescribeIpInfoRequest& request) const;
			DescribeModuleConfigOutcome describeModuleConfig(const Model::DescribeModuleConfigRequest &request)const;
			void describeModuleConfigAsync(const Model::DescribeModuleConfigRequest& request, const DescribeModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModuleConfigOutcomeCallable describeModuleConfigCallable(const Model::DescribeModuleConfigRequest& request) const;
			DescribeNoticeConfigOutcome describeNoticeConfig(const Model::DescribeNoticeConfigRequest &request)const;
			void describeNoticeConfigAsync(const Model::DescribeNoticeConfigRequest& request, const DescribeNoticeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNoticeConfigOutcomeCallable describeNoticeConfigCallable(const Model::DescribeNoticeConfigRequest& request) const;
			DescribePropertyCountOutcome describePropertyCount(const Model::DescribePropertyCountRequest &request)const;
			void describePropertyCountAsync(const Model::DescribePropertyCountRequest& request, const DescribePropertyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyCountOutcomeCallable describePropertyCountCallable(const Model::DescribePropertyCountRequest& request) const;
			DescribePropertyPortDetailOutcome describePropertyPortDetail(const Model::DescribePropertyPortDetailRequest &request)const;
			void describePropertyPortDetailAsync(const Model::DescribePropertyPortDetailRequest& request, const DescribePropertyPortDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyPortDetailOutcomeCallable describePropertyPortDetailCallable(const Model::DescribePropertyPortDetailRequest& request) const;
			DescribePropertyPortItemOutcome describePropertyPortItem(const Model::DescribePropertyPortItemRequest &request)const;
			void describePropertyPortItemAsync(const Model::DescribePropertyPortItemRequest& request, const DescribePropertyPortItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyPortItemOutcomeCallable describePropertyPortItemCallable(const Model::DescribePropertyPortItemRequest& request) const;
			DescribePropertyProcDetailOutcome describePropertyProcDetail(const Model::DescribePropertyProcDetailRequest &request)const;
			void describePropertyProcDetailAsync(const Model::DescribePropertyProcDetailRequest& request, const DescribePropertyProcDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyProcDetailOutcomeCallable describePropertyProcDetailCallable(const Model::DescribePropertyProcDetailRequest& request) const;
			DescribePropertyProcItemOutcome describePropertyProcItem(const Model::DescribePropertyProcItemRequest &request)const;
			void describePropertyProcItemAsync(const Model::DescribePropertyProcItemRequest& request, const DescribePropertyProcItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyProcItemOutcomeCallable describePropertyProcItemCallable(const Model::DescribePropertyProcItemRequest& request) const;
			DescribePropertySoftwareDetailOutcome describePropertySoftwareDetail(const Model::DescribePropertySoftwareDetailRequest &request)const;
			void describePropertySoftwareDetailAsync(const Model::DescribePropertySoftwareDetailRequest& request, const DescribePropertySoftwareDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertySoftwareDetailOutcomeCallable describePropertySoftwareDetailCallable(const Model::DescribePropertySoftwareDetailRequest& request) const;
			DescribePropertySoftwareItemOutcome describePropertySoftwareItem(const Model::DescribePropertySoftwareItemRequest &request)const;
			void describePropertySoftwareItemAsync(const Model::DescribePropertySoftwareItemRequest& request, const DescribePropertySoftwareItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertySoftwareItemOutcomeCallable describePropertySoftwareItemCallable(const Model::DescribePropertySoftwareItemRequest& request) const;
			DescribePropertyUsageNewestOutcome describePropertyUsageNewest(const Model::DescribePropertyUsageNewestRequest &request)const;
			void describePropertyUsageNewestAsync(const Model::DescribePropertyUsageNewestRequest& request, const DescribePropertyUsageNewestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyUsageNewestOutcomeCallable describePropertyUsageNewestCallable(const Model::DescribePropertyUsageNewestRequest& request) const;
			DescribePropertyUserDetailOutcome describePropertyUserDetail(const Model::DescribePropertyUserDetailRequest &request)const;
			void describePropertyUserDetailAsync(const Model::DescribePropertyUserDetailRequest& request, const DescribePropertyUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyUserDetailOutcomeCallable describePropertyUserDetailCallable(const Model::DescribePropertyUserDetailRequest& request) const;
			DescribePropertyUserItemOutcome describePropertyUserItem(const Model::DescribePropertyUserItemRequest &request)const;
			void describePropertyUserItemAsync(const Model::DescribePropertyUserItemRequest& request, const DescribePropertyUserItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePropertyUserItemOutcomeCallable describePropertyUserItemCallable(const Model::DescribePropertyUserItemRequest& request) const;
			DescribeRiskCheckItemResultOutcome describeRiskCheckItemResult(const Model::DescribeRiskCheckItemResultRequest &request)const;
			void describeRiskCheckItemResultAsync(const Model::DescribeRiskCheckItemResultRequest& request, const DescribeRiskCheckItemResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskCheckItemResultOutcomeCallable describeRiskCheckItemResultCallable(const Model::DescribeRiskCheckItemResultRequest& request) const;
			DescribeRiskCheckResultOutcome describeRiskCheckResult(const Model::DescribeRiskCheckResultRequest &request)const;
			void describeRiskCheckResultAsync(const Model::DescribeRiskCheckResultRequest& request, const DescribeRiskCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskCheckResultOutcomeCallable describeRiskCheckResultCallable(const Model::DescribeRiskCheckResultRequest& request) const;
			DescribeRiskCheckSummaryOutcome describeRiskCheckSummary(const Model::DescribeRiskCheckSummaryRequest &request)const;
			void describeRiskCheckSummaryAsync(const Model::DescribeRiskCheckSummaryRequest& request, const DescribeRiskCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskCheckSummaryOutcomeCallable describeRiskCheckSummaryCallable(const Model::DescribeRiskCheckSummaryRequest& request) const;
			DescribeRiskItemTypeOutcome describeRiskItemType(const Model::DescribeRiskItemTypeRequest &request)const;
			void describeRiskItemTypeAsync(const Model::DescribeRiskItemTypeRequest& request, const DescribeRiskItemTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskItemTypeOutcomeCallable describeRiskItemTypeCallable(const Model::DescribeRiskItemTypeRequest& request) const;
			DescribeSasAssetStatisticsColumnOutcome describeSasAssetStatisticsColumn(const Model::DescribeSasAssetStatisticsColumnRequest &request)const;
			void describeSasAssetStatisticsColumnAsync(const Model::DescribeSasAssetStatisticsColumnRequest& request, const DescribeSasAssetStatisticsColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSasAssetStatisticsColumnOutcomeCallable describeSasAssetStatisticsColumnCallable(const Model::DescribeSasAssetStatisticsColumnRequest& request) const;
			DescribeSearchConditionOutcome describeSearchCondition(const Model::DescribeSearchConditionRequest &request)const;
			void describeSearchConditionAsync(const Model::DescribeSearchConditionRequest& request, const DescribeSearchConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSearchConditionOutcomeCallable describeSearchConditionCallable(const Model::DescribeSearchConditionRequest& request) const;
			DescribeSecureSuggestionOutcome describeSecureSuggestion(const Model::DescribeSecureSuggestionRequest &request)const;
			void describeSecureSuggestionAsync(const Model::DescribeSecureSuggestionRequest& request, const DescribeSecureSuggestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecureSuggestionOutcomeCallable describeSecureSuggestionCallable(const Model::DescribeSecureSuggestionRequest& request) const;
			DescribeSecurityCheckScheduleConfigOutcome describeSecurityCheckScheduleConfig(const Model::DescribeSecurityCheckScheduleConfigRequest &request)const;
			void describeSecurityCheckScheduleConfigAsync(const Model::DescribeSecurityCheckScheduleConfigRequest& request, const DescribeSecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityCheckScheduleConfigOutcomeCallable describeSecurityCheckScheduleConfigCallable(const Model::DescribeSecurityCheckScheduleConfigRequest& request) const;
			DescribeSecurityEventOperationsOutcome describeSecurityEventOperations(const Model::DescribeSecurityEventOperationsRequest &request)const;
			void describeSecurityEventOperationsAsync(const Model::DescribeSecurityEventOperationsRequest& request, const DescribeSecurityEventOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityEventOperationsOutcomeCallable describeSecurityEventOperationsCallable(const Model::DescribeSecurityEventOperationsRequest& request) const;
			DescribeSecurityStatInfoOutcome describeSecurityStatInfo(const Model::DescribeSecurityStatInfoRequest &request)const;
			void describeSecurityStatInfoAsync(const Model::DescribeSecurityStatInfoRequest& request, const DescribeSecurityStatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityStatInfoOutcomeCallable describeSecurityStatInfoCallable(const Model::DescribeSecurityStatInfoRequest& request) const;
			DescribeSimilarSecurityEventsOutcome describeSimilarSecurityEvents(const Model::DescribeSimilarSecurityEventsRequest &request)const;
			void describeSimilarSecurityEventsAsync(const Model::DescribeSimilarSecurityEventsRequest& request, const DescribeSimilarSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSimilarSecurityEventsOutcomeCallable describeSimilarSecurityEventsCallable(const Model::DescribeSimilarSecurityEventsRequest& request) const;
			DescribeStrategyExecDetailOutcome describeStrategyExecDetail(const Model::DescribeStrategyExecDetailRequest &request)const;
			void describeStrategyExecDetailAsync(const Model::DescribeStrategyExecDetailRequest& request, const DescribeStrategyExecDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStrategyExecDetailOutcomeCallable describeStrategyExecDetailCallable(const Model::DescribeStrategyExecDetailRequest& request) const;
			DescribeStratetyOutcome describeStratety(const Model::DescribeStratetyRequest &request)const;
			void describeStratetyAsync(const Model::DescribeStratetyRequest& request, const DescribeStratetyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStratetyOutcomeCallable describeStratetyCallable(const Model::DescribeStratetyRequest& request) const;
			DescribeSummaryInfoOutcome describeSummaryInfo(const Model::DescribeSummaryInfoRequest &request)const;
			void describeSummaryInfoAsync(const Model::DescribeSummaryInfoRequest& request, const DescribeSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSummaryInfoOutcomeCallable describeSummaryInfoCallable(const Model::DescribeSummaryInfoRequest& request) const;
			DescribeSuspEventDetailOutcome describeSuspEventDetail(const Model::DescribeSuspEventDetailRequest &request)const;
			void describeSuspEventDetailAsync(const Model::DescribeSuspEventDetailRequest& request, const DescribeSuspEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventDetailOutcomeCallable describeSuspEventDetailCallable(const Model::DescribeSuspEventDetailRequest& request) const;
			DescribeSuspEventsOutcome describeSuspEvents(const Model::DescribeSuspEventsRequest &request)const;
			void describeSuspEventsAsync(const Model::DescribeSuspEventsRequest& request, const DescribeSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventsOutcomeCallable describeSuspEventsCallable(const Model::DescribeSuspEventsRequest& request) const;
			DescribeUserBaselineAuthorizationOutcome describeUserBaselineAuthorization(const Model::DescribeUserBaselineAuthorizationRequest &request)const;
			void describeUserBaselineAuthorizationAsync(const Model::DescribeUserBaselineAuthorizationRequest& request, const DescribeUserBaselineAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserBaselineAuthorizationOutcomeCallable describeUserBaselineAuthorizationCallable(const Model::DescribeUserBaselineAuthorizationRequest& request) const;
			DescribeUserLayoutAuthorizationOutcome describeUserLayoutAuthorization(const Model::DescribeUserLayoutAuthorizationRequest &request)const;
			void describeUserLayoutAuthorizationAsync(const Model::DescribeUserLayoutAuthorizationRequest& request, const DescribeUserLayoutAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserLayoutAuthorizationOutcomeCallable describeUserLayoutAuthorizationCallable(const Model::DescribeUserLayoutAuthorizationRequest& request) const;
			DescribeVolDingdingMessageOutcome describeVolDingdingMessage(const Model::DescribeVolDingdingMessageRequest &request)const;
			void describeVolDingdingMessageAsync(const Model::DescribeVolDingdingMessageRequest& request, const DescribeVolDingdingMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVolDingdingMessageOutcomeCallable describeVolDingdingMessageCallable(const Model::DescribeVolDingdingMessageRequest& request) const;
			DescribeVpcListOutcome describeVpcList(const Model::DescribeVpcListRequest &request)const;
			void describeVpcListAsync(const Model::DescribeVpcListRequest& request, const DescribeVpcListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpcListOutcomeCallable describeVpcListCallable(const Model::DescribeVpcListRequest& request) const;
			DescribeVulDetailsOutcome describeVulDetails(const Model::DescribeVulDetailsRequest &request)const;
			void describeVulDetailsAsync(const Model::DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulDetailsOutcomeCallable describeVulDetailsCallable(const Model::DescribeVulDetailsRequest& request) const;
			DescribeVulListOutcome describeVulList(const Model::DescribeVulListRequest &request)const;
			void describeVulListAsync(const Model::DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulListOutcomeCallable describeVulListCallable(const Model::DescribeVulListRequest& request) const;
			DescribeVulWhitelistOutcome describeVulWhitelist(const Model::DescribeVulWhitelistRequest &request)const;
			void describeVulWhitelistAsync(const Model::DescribeVulWhitelistRequest& request, const DescribeVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulWhitelistOutcomeCallable describeVulWhitelistCallable(const Model::DescribeVulWhitelistRequest& request) const;
			DescribeWarningMachinesOutcome describeWarningMachines(const Model::DescribeWarningMachinesRequest &request)const;
			void describeWarningMachinesAsync(const Model::DescribeWarningMachinesRequest& request, const DescribeWarningMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWarningMachinesOutcomeCallable describeWarningMachinesCallable(const Model::DescribeWarningMachinesRequest& request) const;
			ExportRecordOutcome exportRecord(const Model::ExportRecordRequest &request)const;
			void exportRecordAsync(const Model::ExportRecordRequest& request, const ExportRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportRecordOutcomeCallable exportRecordCallable(const Model::ExportRecordRequest& request) const;
			GetIOCsOutcome getIOCs(const Model::GetIOCsRequest &request)const;
			void getIOCsAsync(const Model::GetIOCsRequest& request, const GetIOCsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIOCsOutcomeCallable getIOCsCallable(const Model::GetIOCsRequest& request) const;
			GetIncIOCsOutcome getIncIOCs(const Model::GetIncIOCsRequest &request)const;
			void getIncIOCsAsync(const Model::GetIncIOCsRequest& request, const GetIncIOCsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIncIOCsOutcomeCallable getIncIOCsCallable(const Model::GetIncIOCsRequest& request) const;
			HandleSimilarSecurityEventsOutcome handleSimilarSecurityEvents(const Model::HandleSimilarSecurityEventsRequest &request)const;
			void handleSimilarSecurityEventsAsync(const Model::HandleSimilarSecurityEventsRequest& request, const HandleSimilarSecurityEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HandleSimilarSecurityEventsOutcomeCallable handleSimilarSecurityEventsCallable(const Model::HandleSimilarSecurityEventsRequest& request) const;
			ModifyAntiBruteForceRuleOutcome modifyAntiBruteForceRule(const Model::ModifyAntiBruteForceRuleRequest &request)const;
			void modifyAntiBruteForceRuleAsync(const Model::ModifyAntiBruteForceRuleRequest& request, const ModifyAntiBruteForceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAntiBruteForceRuleOutcomeCallable modifyAntiBruteForceRuleCallable(const Model::ModifyAntiBruteForceRuleRequest& request) const;
			ModifyAutoDelConfigOutcome modifyAutoDelConfig(const Model::ModifyAutoDelConfigRequest &request)const;
			void modifyAutoDelConfigAsync(const Model::ModifyAutoDelConfigRequest& request, const ModifyAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoDelConfigOutcomeCallable modifyAutoDelConfigCallable(const Model::ModifyAutoDelConfigRequest& request) const;
			ModifyConcernNecessityOutcome modifyConcernNecessity(const Model::ModifyConcernNecessityRequest &request)const;
			void modifyConcernNecessityAsync(const Model::ModifyConcernNecessityRequest& request, const ModifyConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConcernNecessityOutcomeCallable modifyConcernNecessityCallable(const Model::ModifyConcernNecessityRequest& request) const;
			ModifyCreateVulWhitelistOutcome modifyCreateVulWhitelist(const Model::ModifyCreateVulWhitelistRequest &request)const;
			void modifyCreateVulWhitelistAsync(const Model::ModifyCreateVulWhitelistRequest& request, const ModifyCreateVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCreateVulWhitelistOutcomeCallable modifyCreateVulWhitelistCallable(const Model::ModifyCreateVulWhitelistRequest& request) const;
			ModifyDeleteVulWhitelistOutcome modifyDeleteVulWhitelist(const Model::ModifyDeleteVulWhitelistRequest &request)const;
			void modifyDeleteVulWhitelistAsync(const Model::ModifyDeleteVulWhitelistRequest& request, const ModifyDeleteVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeleteVulWhitelistOutcomeCallable modifyDeleteVulWhitelistCallable(const Model::ModifyDeleteVulWhitelistRequest& request) const;
			ModifyEmgVulSubmitOutcome modifyEmgVulSubmit(const Model::ModifyEmgVulSubmitRequest &request)const;
			void modifyEmgVulSubmitAsync(const Model::ModifyEmgVulSubmitRequest& request, const ModifyEmgVulSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEmgVulSubmitOutcomeCallable modifyEmgVulSubmitCallable(const Model::ModifyEmgVulSubmitRequest& request) const;
			ModifyGroupPropertyOutcome modifyGroupProperty(const Model::ModifyGroupPropertyRequest &request)const;
			void modifyGroupPropertyAsync(const Model::ModifyGroupPropertyRequest& request, const ModifyGroupPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGroupPropertyOutcomeCallable modifyGroupPropertyCallable(const Model::ModifyGroupPropertyRequest& request) const;
			ModifyLoginBaseConfigOutcome modifyLoginBaseConfig(const Model::ModifyLoginBaseConfigRequest &request)const;
			void modifyLoginBaseConfigAsync(const Model::ModifyLoginBaseConfigRequest& request, const ModifyLoginBaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoginBaseConfigOutcomeCallable modifyLoginBaseConfigCallable(const Model::ModifyLoginBaseConfigRequest& request) const;
			ModifyLoginSwitchConfigOutcome modifyLoginSwitchConfig(const Model::ModifyLoginSwitchConfigRequest &request)const;
			void modifyLoginSwitchConfigAsync(const Model::ModifyLoginSwitchConfigRequest& request, const ModifyLoginSwitchConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLoginSwitchConfigOutcomeCallable modifyLoginSwitchConfigCallable(const Model::ModifyLoginSwitchConfigRequest& request) const;
			ModifyNoticeConfigOutcome modifyNoticeConfig(const Model::ModifyNoticeConfigRequest &request)const;
			void modifyNoticeConfigAsync(const Model::ModifyNoticeConfigRequest& request, const ModifyNoticeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNoticeConfigOutcomeCallable modifyNoticeConfigCallable(const Model::ModifyNoticeConfigRequest& request) const;
			ModifyOperateVulOutcome modifyOperateVul(const Model::ModifyOperateVulRequest &request)const;
			void modifyOperateVulAsync(const Model::ModifyOperateVulRequest& request, const ModifyOperateVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOperateVulOutcomeCallable modifyOperateVulCallable(const Model::ModifyOperateVulRequest& request) const;
			ModifyPushAllTaskOutcome modifyPushAllTask(const Model::ModifyPushAllTaskRequest &request)const;
			void modifyPushAllTaskAsync(const Model::ModifyPushAllTaskRequest& request, const ModifyPushAllTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPushAllTaskOutcomeCallable modifyPushAllTaskCallable(const Model::ModifyPushAllTaskRequest& request) const;
			ModifyRiskCheckStatusOutcome modifyRiskCheckStatus(const Model::ModifyRiskCheckStatusRequest &request)const;
			void modifyRiskCheckStatusAsync(const Model::ModifyRiskCheckStatusRequest& request, const ModifyRiskCheckStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRiskCheckStatusOutcomeCallable modifyRiskCheckStatusCallable(const Model::ModifyRiskCheckStatusRequest& request) const;
			ModifyRiskSingleResultStatusOutcome modifyRiskSingleResultStatus(const Model::ModifyRiskSingleResultStatusRequest &request)const;
			void modifyRiskSingleResultStatusAsync(const Model::ModifyRiskSingleResultStatusRequest& request, const ModifyRiskSingleResultStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRiskSingleResultStatusOutcomeCallable modifyRiskSingleResultStatusCallable(const Model::ModifyRiskSingleResultStatusRequest& request) const;
			ModifySecurityCheckScheduleConfigOutcome modifySecurityCheckScheduleConfig(const Model::ModifySecurityCheckScheduleConfigRequest &request)const;
			void modifySecurityCheckScheduleConfigAsync(const Model::ModifySecurityCheckScheduleConfigRequest& request, const ModifySecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityCheckScheduleConfigOutcomeCallable modifySecurityCheckScheduleConfigCallable(const Model::ModifySecurityCheckScheduleConfigRequest& request) const;
			ModifyStartVulScanOutcome modifyStartVulScan(const Model::ModifyStartVulScanRequest &request)const;
			void modifyStartVulScanAsync(const Model::ModifyStartVulScanRequest& request, const ModifyStartVulScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStartVulScanOutcomeCallable modifyStartVulScanCallable(const Model::ModifyStartVulScanRequest& request) const;
			ModifyTagWithUuidOutcome modifyTagWithUuid(const Model::ModifyTagWithUuidRequest &request)const;
			void modifyTagWithUuidAsync(const Model::ModifyTagWithUuidRequest& request, const ModifyTagWithUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTagWithUuidOutcomeCallable modifyTagWithUuidCallable(const Model::ModifyTagWithUuidRequest& request) const;
			ModifyVulTargetConfigOutcome modifyVulTargetConfig(const Model::ModifyVulTargetConfigRequest &request)const;
			void modifyVulTargetConfigAsync(const Model::ModifyVulTargetConfigRequest& request, const ModifyVulTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVulTargetConfigOutcomeCallable modifyVulTargetConfigCallable(const Model::ModifyVulTargetConfigRequest& request) const;
			OperateSuspiciousTargetConfigOutcome operateSuspiciousTargetConfig(const Model::OperateSuspiciousTargetConfigRequest &request)const;
			void operateSuspiciousTargetConfigAsync(const Model::OperateSuspiciousTargetConfigRequest& request, const OperateSuspiciousTargetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateSuspiciousTargetConfigOutcomeCallable operateSuspiciousTargetConfigCallable(const Model::OperateSuspiciousTargetConfigRequest& request) const;
			OperationSuspEventsOutcome operationSuspEvents(const Model::OperationSuspEventsRequest &request)const;
			void operationSuspEventsAsync(const Model::OperationSuspEventsRequest& request, const OperationSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperationSuspEventsOutcomeCallable operationSuspEventsCallable(const Model::OperationSuspEventsRequest& request) const;
			PauseClientOutcome pauseClient(const Model::PauseClientRequest &request)const;
			void pauseClientAsync(const Model::PauseClientRequest& request, const PauseClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PauseClientOutcomeCallable pauseClientCallable(const Model::PauseClientRequest& request) const;
			SasInstallCodeOutcome sasInstallCode(const Model::SasInstallCodeRequest &request)const;
			void sasInstallCodeAsync(const Model::SasInstallCodeRequest& request, const SasInstallCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SasInstallCodeOutcomeCallable sasInstallCodeCallable(const Model::SasInstallCodeRequest& request) const;
			StartBaselineSecurityCheckOutcome startBaselineSecurityCheck(const Model::StartBaselineSecurityCheckRequest &request)const;
			void startBaselineSecurityCheckAsync(const Model::StartBaselineSecurityCheckRequest& request, const StartBaselineSecurityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBaselineSecurityCheckOutcomeCallable startBaselineSecurityCheckCallable(const Model::StartBaselineSecurityCheckRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SAS_SASCLIENT_H_
