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

#ifndef ALIBABACLOUD_CLOUD_SIEM_CLOUD_SIEMCLIENT_H_
#define ALIBABACLOUD_CLOUD_SIEM_CLOUD_SIEMCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Cloud_siemExport.h"
#include "model/BatchJobCheckRequest.h"
#include "model/BatchJobCheckResult.h"
#include "model/BatchJobSubmitRequest.h"
#include "model/BatchJobSubmitResult.h"
#include "model/CloseDeliveryRequest.h"
#include "model/CloseDeliveryResult.h"
#include "model/DeleteAutomateResponseConfigRequest.h"
#include "model/DeleteAutomateResponseConfigResult.h"
#include "model/DeleteCustomizeRuleRequest.h"
#include "model/DeleteCustomizeRuleResult.h"
#include "model/DeleteQuickQueryRequest.h"
#include "model/DeleteQuickQueryResult.h"
#include "model/DeleteWhiteRuleListRequest.h"
#include "model/DeleteWhiteRuleListResult.h"
#include "model/DescribeAggregateFunctionRequest.h"
#include "model/DescribeAggregateFunctionResult.h"
#include "model/DescribeAlertSceneByEventRequest.h"
#include "model/DescribeAlertSceneByEventResult.h"
#include "model/DescribeAlertSourceRequest.h"
#include "model/DescribeAlertSourceResult.h"
#include "model/DescribeAlertSourceWithEventRequest.h"
#include "model/DescribeAlertSourceWithEventResult.h"
#include "model/DescribeAlertTypeRequest.h"
#include "model/DescribeAlertTypeResult.h"
#include "model/DescribeAlertsCountRequest.h"
#include "model/DescribeAlertsCountResult.h"
#include "model/DescribeAttackTimeLineRequest.h"
#include "model/DescribeAttackTimeLineResult.h"
#include "model/DescribeAutomateResponseConfigCounterRequest.h"
#include "model/DescribeAutomateResponseConfigCounterResult.h"
#include "model/DescribeAutomateResponseConfigFeatureRequest.h"
#include "model/DescribeAutomateResponseConfigFeatureResult.h"
#include "model/DescribeAutomateResponseConfigPlayBooksRequest.h"
#include "model/DescribeAutomateResponseConfigPlayBooksResult.h"
#include "model/DescribeCloudSiemAssetsRequest.h"
#include "model/DescribeCloudSiemAssetsResult.h"
#include "model/DescribeCloudSiemAssetsCounterRequest.h"
#include "model/DescribeCloudSiemAssetsCounterResult.h"
#include "model/DescribeCloudSiemEventDetailRequest.h"
#include "model/DescribeCloudSiemEventDetailResult.h"
#include "model/DescribeCloudSiemEventsRequest.h"
#include "model/DescribeCloudSiemEventsResult.h"
#include "model/DescribeCustomizeRuleRequest.h"
#include "model/DescribeCustomizeRuleResult.h"
#include "model/DescribeCustomizeRuleCountRequest.h"
#include "model/DescribeCustomizeRuleCountResult.h"
#include "model/DescribeCustomizeRuleTestRequest.h"
#include "model/DescribeCustomizeRuleTestResult.h"
#include "model/DescribeCustomizeRuleTestHistogramRequest.h"
#include "model/DescribeCustomizeRuleTestHistogramResult.h"
#include "model/DescribeDisposeAndPlaybookRequest.h"
#include "model/DescribeDisposeAndPlaybookResult.h"
#include "model/DescribeDisposeStrategyPlaybookRequest.h"
#include "model/DescribeDisposeStrategyPlaybookResult.h"
#include "model/DescribeEntityInfoRequest.h"
#include "model/DescribeEntityInfoResult.h"
#include "model/DescribeEventCountByThreatLevelRequest.h"
#include "model/DescribeEventCountByThreatLevelResult.h"
#include "model/DescribeEventDisposeRequest.h"
#include "model/DescribeEventDisposeResult.h"
#include "model/DescribeJobStatusRequest.h"
#include "model/DescribeJobStatusResult.h"
#include "model/DescribeLogFieldsRequest.h"
#include "model/DescribeLogFieldsResult.h"
#include "model/DescribeLogSourceRequest.h"
#include "model/DescribeLogSourceResult.h"
#include "model/DescribeLogStoreRequest.h"
#include "model/DescribeLogStoreResult.h"
#include "model/DescribeLogTypeRequest.h"
#include "model/DescribeLogTypeResult.h"
#include "model/DescribeOperatorsRequest.h"
#include "model/DescribeOperatorsResult.h"
#include "model/DescribeScopeUsersRequest.h"
#include "model/DescribeScopeUsersResult.h"
#include "model/DescribeStorageRequest.h"
#include "model/DescribeStorageResult.h"
#include "model/DescribeWafScopeRequest.h"
#include "model/DescribeWafScopeResult.h"
#include "model/DoQuickFieldRequest.h"
#include "model/DoQuickFieldResult.h"
#include "model/DoSelfDelegateRequest.h"
#include "model/DoSelfDelegateResult.h"
#include "model/GetCapacityRequest.h"
#include "model/GetCapacityResult.h"
#include "model/GetHistogramsRequest.h"
#include "model/GetHistogramsResult.h"
#include "model/GetLogsRequest.h"
#include "model/GetLogsResult.h"
#include "model/GetQuickQueryRequest.h"
#include "model/GetQuickQueryResult.h"
#include "model/GetStorageRequest.h"
#include "model/GetStorageResult.h"
#include "model/ListAutomateResponseConfigsRequest.h"
#include "model/ListAutomateResponseConfigsResult.h"
#include "model/ListCloudSiemCustomizeRulesRequest.h"
#include "model/ListCloudSiemCustomizeRulesResult.h"
#include "model/ListCloudSiemPredefinedRulesRequest.h"
#include "model/ListCloudSiemPredefinedRulesResult.h"
#include "model/ListCustomizeRuleTestResultRequest.h"
#include "model/ListCustomizeRuleTestResultResult.h"
#include "model/ListDeliveryRequest.h"
#include "model/ListDeliveryResult.h"
#include "model/ListDisposeStrategyRequest.h"
#include "model/ListDisposeStrategyResult.h"
#include "model/ListOperationRequest.h"
#include "model/ListOperationResult.h"
#include "model/ListQuickQueryRequest.h"
#include "model/ListQuickQueryResult.h"
#include "model/OpenDeliveryRequest.h"
#include "model/OpenDeliveryResult.h"
#include "model/PostAutomateResponseConfigRequest.h"
#include "model/PostAutomateResponseConfigResult.h"
#include "model/PostCustomizeRuleRequest.h"
#include "model/PostCustomizeRuleResult.h"
#include "model/PostCustomizeRuleTestRequest.h"
#include "model/PostCustomizeRuleTestResult.h"
#include "model/PostEventDisposeAndWhiteruleListRequest.h"
#include "model/PostEventDisposeAndWhiteruleListResult.h"
#include "model/PostEventWhiteruleListRequest.h"
#include "model/PostEventWhiteruleListResult.h"
#include "model/PostFinishCustomizeRuleTestRequest.h"
#include "model/PostFinishCustomizeRuleTestResult.h"
#include "model/PostRuleStatusChangeRequest.h"
#include "model/PostRuleStatusChangeResult.h"
#include "model/RestoreCapacityRequest.h"
#include "model/RestoreCapacityResult.h"
#include "model/SaveQuickQueryRequest.h"
#include "model/SaveQuickQueryResult.h"
#include "model/SetStorageRequest.h"
#include "model/SetStorageResult.h"
#include "model/ShowQuickAnalysisRequest.h"
#include "model/ShowQuickAnalysisResult.h"
#include "model/UpdateAutomateResponseConfigStatusRequest.h"
#include "model/UpdateAutomateResponseConfigStatusResult.h"
#include "model/UpdateWhiteRuleListRequest.h"
#include "model/UpdateWhiteRuleListResult.h"


namespace AlibabaCloud
{
	namespace Cloud_siem
	{
		class ALIBABACLOUD_CLOUD_SIEM_EXPORT Cloud_siemClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchJobCheckResult> BatchJobCheckOutcome;
			typedef std::future<BatchJobCheckOutcome> BatchJobCheckOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::BatchJobCheckRequest&, const BatchJobCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchJobCheckAsyncHandler;
			typedef Outcome<Error, Model::BatchJobSubmitResult> BatchJobSubmitOutcome;
			typedef std::future<BatchJobSubmitOutcome> BatchJobSubmitOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::BatchJobSubmitRequest&, const BatchJobSubmitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchJobSubmitAsyncHandler;
			typedef Outcome<Error, Model::CloseDeliveryResult> CloseDeliveryOutcome;
			typedef std::future<CloseDeliveryOutcome> CloseDeliveryOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::CloseDeliveryRequest&, const CloseDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutomateResponseConfigResult> DeleteAutomateResponseConfigOutcome;
			typedef std::future<DeleteAutomateResponseConfigOutcome> DeleteAutomateResponseConfigOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DeleteAutomateResponseConfigRequest&, const DeleteAutomateResponseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutomateResponseConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomizeRuleResult> DeleteCustomizeRuleOutcome;
			typedef std::future<DeleteCustomizeRuleOutcome> DeleteCustomizeRuleOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DeleteCustomizeRuleRequest&, const DeleteCustomizeRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomizeRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteQuickQueryResult> DeleteQuickQueryOutcome;
			typedef std::future<DeleteQuickQueryOutcome> DeleteQuickQueryOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DeleteQuickQueryRequest&, const DeleteQuickQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQuickQueryAsyncHandler;
			typedef Outcome<Error, Model::DeleteWhiteRuleListResult> DeleteWhiteRuleListOutcome;
			typedef std::future<DeleteWhiteRuleListOutcome> DeleteWhiteRuleListOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DeleteWhiteRuleListRequest&, const DeleteWhiteRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWhiteRuleListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAggregateFunctionResult> DescribeAggregateFunctionOutcome;
			typedef std::future<DescribeAggregateFunctionOutcome> DescribeAggregateFunctionOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAggregateFunctionRequest&, const DescribeAggregateFunctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAggregateFunctionAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertSceneByEventResult> DescribeAlertSceneByEventOutcome;
			typedef std::future<DescribeAlertSceneByEventOutcome> DescribeAlertSceneByEventOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAlertSceneByEventRequest&, const DescribeAlertSceneByEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertSceneByEventAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertSourceResult> DescribeAlertSourceOutcome;
			typedef std::future<DescribeAlertSourceOutcome> DescribeAlertSourceOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAlertSourceRequest&, const DescribeAlertSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertSourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertSourceWithEventResult> DescribeAlertSourceWithEventOutcome;
			typedef std::future<DescribeAlertSourceWithEventOutcome> DescribeAlertSourceWithEventOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAlertSourceWithEventRequest&, const DescribeAlertSourceWithEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertSourceWithEventAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertTypeResult> DescribeAlertTypeOutcome;
			typedef std::future<DescribeAlertTypeOutcome> DescribeAlertTypeOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAlertTypeRequest&, const DescribeAlertTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertsCountResult> DescribeAlertsCountOutcome;
			typedef std::future<DescribeAlertsCountOutcome> DescribeAlertsCountOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAlertsCountRequest&, const DescribeAlertsCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertsCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeAttackTimeLineResult> DescribeAttackTimeLineOutcome;
			typedef std::future<DescribeAttackTimeLineOutcome> DescribeAttackTimeLineOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAttackTimeLineRequest&, const DescribeAttackTimeLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackTimeLineAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutomateResponseConfigCounterResult> DescribeAutomateResponseConfigCounterOutcome;
			typedef std::future<DescribeAutomateResponseConfigCounterOutcome> DescribeAutomateResponseConfigCounterOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAutomateResponseConfigCounterRequest&, const DescribeAutomateResponseConfigCounterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutomateResponseConfigCounterAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutomateResponseConfigFeatureResult> DescribeAutomateResponseConfigFeatureOutcome;
			typedef std::future<DescribeAutomateResponseConfigFeatureOutcome> DescribeAutomateResponseConfigFeatureOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAutomateResponseConfigFeatureRequest&, const DescribeAutomateResponseConfigFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutomateResponseConfigFeatureAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutomateResponseConfigPlayBooksResult> DescribeAutomateResponseConfigPlayBooksOutcome;
			typedef std::future<DescribeAutomateResponseConfigPlayBooksOutcome> DescribeAutomateResponseConfigPlayBooksOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAutomateResponseConfigPlayBooksRequest&, const DescribeAutomateResponseConfigPlayBooksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutomateResponseConfigPlayBooksAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudSiemAssetsResult> DescribeCloudSiemAssetsOutcome;
			typedef std::future<DescribeCloudSiemAssetsOutcome> DescribeCloudSiemAssetsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCloudSiemAssetsRequest&, const DescribeCloudSiemAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudSiemAssetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudSiemAssetsCounterResult> DescribeCloudSiemAssetsCounterOutcome;
			typedef std::future<DescribeCloudSiemAssetsCounterOutcome> DescribeCloudSiemAssetsCounterOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCloudSiemAssetsCounterRequest&, const DescribeCloudSiemAssetsCounterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudSiemAssetsCounterAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudSiemEventDetailResult> DescribeCloudSiemEventDetailOutcome;
			typedef std::future<DescribeCloudSiemEventDetailOutcome> DescribeCloudSiemEventDetailOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCloudSiemEventDetailRequest&, const DescribeCloudSiemEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudSiemEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudSiemEventsResult> DescribeCloudSiemEventsOutcome;
			typedef std::future<DescribeCloudSiemEventsOutcome> DescribeCloudSiemEventsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCloudSiemEventsRequest&, const DescribeCloudSiemEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudSiemEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizeRuleResult> DescribeCustomizeRuleOutcome;
			typedef std::future<DescribeCustomizeRuleOutcome> DescribeCustomizeRuleOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCustomizeRuleRequest&, const DescribeCustomizeRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizeRuleCountResult> DescribeCustomizeRuleCountOutcome;
			typedef std::future<DescribeCustomizeRuleCountOutcome> DescribeCustomizeRuleCountOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCustomizeRuleCountRequest&, const DescribeCustomizeRuleCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeRuleCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizeRuleTestResult> DescribeCustomizeRuleTestOutcome;
			typedef std::future<DescribeCustomizeRuleTestOutcome> DescribeCustomizeRuleTestOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCustomizeRuleTestRequest&, const DescribeCustomizeRuleTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeRuleTestAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizeRuleTestHistogramResult> DescribeCustomizeRuleTestHistogramOutcome;
			typedef std::future<DescribeCustomizeRuleTestHistogramOutcome> DescribeCustomizeRuleTestHistogramOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCustomizeRuleTestHistogramRequest&, const DescribeCustomizeRuleTestHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeRuleTestHistogramAsyncHandler;
			typedef Outcome<Error, Model::DescribeDisposeAndPlaybookResult> DescribeDisposeAndPlaybookOutcome;
			typedef std::future<DescribeDisposeAndPlaybookOutcome> DescribeDisposeAndPlaybookOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeDisposeAndPlaybookRequest&, const DescribeDisposeAndPlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisposeAndPlaybookAsyncHandler;
			typedef Outcome<Error, Model::DescribeDisposeStrategyPlaybookResult> DescribeDisposeStrategyPlaybookOutcome;
			typedef std::future<DescribeDisposeStrategyPlaybookOutcome> DescribeDisposeStrategyPlaybookOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeDisposeStrategyPlaybookRequest&, const DescribeDisposeStrategyPlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisposeStrategyPlaybookAsyncHandler;
			typedef Outcome<Error, Model::DescribeEntityInfoResult> DescribeEntityInfoOutcome;
			typedef std::future<DescribeEntityInfoOutcome> DescribeEntityInfoOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeEntityInfoRequest&, const DescribeEntityInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEntityInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventCountByThreatLevelResult> DescribeEventCountByThreatLevelOutcome;
			typedef std::future<DescribeEventCountByThreatLevelOutcome> DescribeEventCountByThreatLevelOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeEventCountByThreatLevelRequest&, const DescribeEventCountByThreatLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventCountByThreatLevelAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventDisposeResult> DescribeEventDisposeOutcome;
			typedef std::future<DescribeEventDisposeOutcome> DescribeEventDisposeOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeEventDisposeRequest&, const DescribeEventDisposeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventDisposeAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobStatusResult> DescribeJobStatusOutcome;
			typedef std::future<DescribeJobStatusOutcome> DescribeJobStatusOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeJobStatusRequest&, const DescribeJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogFieldsResult> DescribeLogFieldsOutcome;
			typedef std::future<DescribeLogFieldsOutcome> DescribeLogFieldsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeLogFieldsRequest&, const DescribeLogFieldsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogFieldsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogSourceResult> DescribeLogSourceOutcome;
			typedef std::future<DescribeLogSourceOutcome> DescribeLogSourceOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeLogSourceRequest&, const DescribeLogSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogSourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogStoreResult> DescribeLogStoreOutcome;
			typedef std::future<DescribeLogStoreOutcome> DescribeLogStoreOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeLogStoreRequest&, const DescribeLogStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStoreAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogTypeResult> DescribeLogTypeOutcome;
			typedef std::future<DescribeLogTypeOutcome> DescribeLogTypeOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeLogTypeRequest&, const DescribeLogTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeOperatorsResult> DescribeOperatorsOutcome;
			typedef std::future<DescribeOperatorsOutcome> DescribeOperatorsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeOperatorsRequest&, const DescribeOperatorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperatorsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScopeUsersResult> DescribeScopeUsersOutcome;
			typedef std::future<DescribeScopeUsersOutcome> DescribeScopeUsersOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeScopeUsersRequest&, const DescribeScopeUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScopeUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeStorageResult> DescribeStorageOutcome;
			typedef std::future<DescribeStorageOutcome> DescribeStorageOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeStorageRequest&, const DescribeStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageAsyncHandler;
			typedef Outcome<Error, Model::DescribeWafScopeResult> DescribeWafScopeOutcome;
			typedef std::future<DescribeWafScopeOutcome> DescribeWafScopeOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeWafScopeRequest&, const DescribeWafScopeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafScopeAsyncHandler;
			typedef Outcome<Error, Model::DoQuickFieldResult> DoQuickFieldOutcome;
			typedef std::future<DoQuickFieldOutcome> DoQuickFieldOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DoQuickFieldRequest&, const DoQuickFieldOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DoQuickFieldAsyncHandler;
			typedef Outcome<Error, Model::DoSelfDelegateResult> DoSelfDelegateOutcome;
			typedef std::future<DoSelfDelegateOutcome> DoSelfDelegateOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DoSelfDelegateRequest&, const DoSelfDelegateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DoSelfDelegateAsyncHandler;
			typedef Outcome<Error, Model::GetCapacityResult> GetCapacityOutcome;
			typedef std::future<GetCapacityOutcome> GetCapacityOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::GetCapacityRequest&, const GetCapacityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCapacityAsyncHandler;
			typedef Outcome<Error, Model::GetHistogramsResult> GetHistogramsOutcome;
			typedef std::future<GetHistogramsOutcome> GetHistogramsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::GetHistogramsRequest&, const GetHistogramsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHistogramsAsyncHandler;
			typedef Outcome<Error, Model::GetLogsResult> GetLogsOutcome;
			typedef std::future<GetLogsOutcome> GetLogsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::GetLogsRequest&, const GetLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLogsAsyncHandler;
			typedef Outcome<Error, Model::GetQuickQueryResult> GetQuickQueryOutcome;
			typedef std::future<GetQuickQueryOutcome> GetQuickQueryOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::GetQuickQueryRequest&, const GetQuickQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQuickQueryAsyncHandler;
			typedef Outcome<Error, Model::GetStorageResult> GetStorageOutcome;
			typedef std::future<GetStorageOutcome> GetStorageOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::GetStorageRequest&, const GetStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStorageAsyncHandler;
			typedef Outcome<Error, Model::ListAutomateResponseConfigsResult> ListAutomateResponseConfigsOutcome;
			typedef std::future<ListAutomateResponseConfigsOutcome> ListAutomateResponseConfigsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListAutomateResponseConfigsRequest&, const ListAutomateResponseConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAutomateResponseConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListCloudSiemCustomizeRulesResult> ListCloudSiemCustomizeRulesOutcome;
			typedef std::future<ListCloudSiemCustomizeRulesOutcome> ListCloudSiemCustomizeRulesOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListCloudSiemCustomizeRulesRequest&, const ListCloudSiemCustomizeRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCloudSiemCustomizeRulesAsyncHandler;
			typedef Outcome<Error, Model::ListCloudSiemPredefinedRulesResult> ListCloudSiemPredefinedRulesOutcome;
			typedef std::future<ListCloudSiemPredefinedRulesOutcome> ListCloudSiemPredefinedRulesOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListCloudSiemPredefinedRulesRequest&, const ListCloudSiemPredefinedRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCloudSiemPredefinedRulesAsyncHandler;
			typedef Outcome<Error, Model::ListCustomizeRuleTestResultResult> ListCustomizeRuleTestResultOutcome;
			typedef std::future<ListCustomizeRuleTestResultOutcome> ListCustomizeRuleTestResultOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListCustomizeRuleTestResultRequest&, const ListCustomizeRuleTestResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomizeRuleTestResultAsyncHandler;
			typedef Outcome<Error, Model::ListDeliveryResult> ListDeliveryOutcome;
			typedef std::future<ListDeliveryOutcome> ListDeliveryOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListDeliveryRequest&, const ListDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeliveryAsyncHandler;
			typedef Outcome<Error, Model::ListDisposeStrategyResult> ListDisposeStrategyOutcome;
			typedef std::future<ListDisposeStrategyOutcome> ListDisposeStrategyOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListDisposeStrategyRequest&, const ListDisposeStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDisposeStrategyAsyncHandler;
			typedef Outcome<Error, Model::ListOperationResult> ListOperationOutcome;
			typedef std::future<ListOperationOutcome> ListOperationOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListOperationRequest&, const ListOperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOperationAsyncHandler;
			typedef Outcome<Error, Model::ListQuickQueryResult> ListQuickQueryOutcome;
			typedef std::future<ListQuickQueryOutcome> ListQuickQueryOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListQuickQueryRequest&, const ListQuickQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQuickQueryAsyncHandler;
			typedef Outcome<Error, Model::OpenDeliveryResult> OpenDeliveryOutcome;
			typedef std::future<OpenDeliveryOutcome> OpenDeliveryOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::OpenDeliveryRequest&, const OpenDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenDeliveryAsyncHandler;
			typedef Outcome<Error, Model::PostAutomateResponseConfigResult> PostAutomateResponseConfigOutcome;
			typedef std::future<PostAutomateResponseConfigOutcome> PostAutomateResponseConfigOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::PostAutomateResponseConfigRequest&, const PostAutomateResponseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PostAutomateResponseConfigAsyncHandler;
			typedef Outcome<Error, Model::PostCustomizeRuleResult> PostCustomizeRuleOutcome;
			typedef std::future<PostCustomizeRuleOutcome> PostCustomizeRuleOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::PostCustomizeRuleRequest&, const PostCustomizeRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PostCustomizeRuleAsyncHandler;
			typedef Outcome<Error, Model::PostCustomizeRuleTestResult> PostCustomizeRuleTestOutcome;
			typedef std::future<PostCustomizeRuleTestOutcome> PostCustomizeRuleTestOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::PostCustomizeRuleTestRequest&, const PostCustomizeRuleTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PostCustomizeRuleTestAsyncHandler;
			typedef Outcome<Error, Model::PostEventDisposeAndWhiteruleListResult> PostEventDisposeAndWhiteruleListOutcome;
			typedef std::future<PostEventDisposeAndWhiteruleListOutcome> PostEventDisposeAndWhiteruleListOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::PostEventDisposeAndWhiteruleListRequest&, const PostEventDisposeAndWhiteruleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PostEventDisposeAndWhiteruleListAsyncHandler;
			typedef Outcome<Error, Model::PostEventWhiteruleListResult> PostEventWhiteruleListOutcome;
			typedef std::future<PostEventWhiteruleListOutcome> PostEventWhiteruleListOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::PostEventWhiteruleListRequest&, const PostEventWhiteruleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PostEventWhiteruleListAsyncHandler;
			typedef Outcome<Error, Model::PostFinishCustomizeRuleTestResult> PostFinishCustomizeRuleTestOutcome;
			typedef std::future<PostFinishCustomizeRuleTestOutcome> PostFinishCustomizeRuleTestOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::PostFinishCustomizeRuleTestRequest&, const PostFinishCustomizeRuleTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PostFinishCustomizeRuleTestAsyncHandler;
			typedef Outcome<Error, Model::PostRuleStatusChangeResult> PostRuleStatusChangeOutcome;
			typedef std::future<PostRuleStatusChangeOutcome> PostRuleStatusChangeOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::PostRuleStatusChangeRequest&, const PostRuleStatusChangeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PostRuleStatusChangeAsyncHandler;
			typedef Outcome<Error, Model::RestoreCapacityResult> RestoreCapacityOutcome;
			typedef std::future<RestoreCapacityOutcome> RestoreCapacityOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::RestoreCapacityRequest&, const RestoreCapacityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestoreCapacityAsyncHandler;
			typedef Outcome<Error, Model::SaveQuickQueryResult> SaveQuickQueryOutcome;
			typedef std::future<SaveQuickQueryOutcome> SaveQuickQueryOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::SaveQuickQueryRequest&, const SaveQuickQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveQuickQueryAsyncHandler;
			typedef Outcome<Error, Model::SetStorageResult> SetStorageOutcome;
			typedef std::future<SetStorageOutcome> SetStorageOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::SetStorageRequest&, const SetStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetStorageAsyncHandler;
			typedef Outcome<Error, Model::ShowQuickAnalysisResult> ShowQuickAnalysisOutcome;
			typedef std::future<ShowQuickAnalysisOutcome> ShowQuickAnalysisOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ShowQuickAnalysisRequest&, const ShowQuickAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShowQuickAnalysisAsyncHandler;
			typedef Outcome<Error, Model::UpdateAutomateResponseConfigStatusResult> UpdateAutomateResponseConfigStatusOutcome;
			typedef std::future<UpdateAutomateResponseConfigStatusOutcome> UpdateAutomateResponseConfigStatusOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::UpdateAutomateResponseConfigStatusRequest&, const UpdateAutomateResponseConfigStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAutomateResponseConfigStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateWhiteRuleListResult> UpdateWhiteRuleListOutcome;
			typedef std::future<UpdateWhiteRuleListOutcome> UpdateWhiteRuleListOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::UpdateWhiteRuleListRequest&, const UpdateWhiteRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWhiteRuleListAsyncHandler;

			Cloud_siemClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Cloud_siemClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Cloud_siemClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Cloud_siemClient();
			BatchJobCheckOutcome batchJobCheck(const Model::BatchJobCheckRequest &request)const;
			void batchJobCheckAsync(const Model::BatchJobCheckRequest& request, const BatchJobCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchJobCheckOutcomeCallable batchJobCheckCallable(const Model::BatchJobCheckRequest& request) const;
			BatchJobSubmitOutcome batchJobSubmit(const Model::BatchJobSubmitRequest &request)const;
			void batchJobSubmitAsync(const Model::BatchJobSubmitRequest& request, const BatchJobSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchJobSubmitOutcomeCallable batchJobSubmitCallable(const Model::BatchJobSubmitRequest& request) const;
			CloseDeliveryOutcome closeDelivery(const Model::CloseDeliveryRequest &request)const;
			void closeDeliveryAsync(const Model::CloseDeliveryRequest& request, const CloseDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseDeliveryOutcomeCallable closeDeliveryCallable(const Model::CloseDeliveryRequest& request) const;
			DeleteAutomateResponseConfigOutcome deleteAutomateResponseConfig(const Model::DeleteAutomateResponseConfigRequest &request)const;
			void deleteAutomateResponseConfigAsync(const Model::DeleteAutomateResponseConfigRequest& request, const DeleteAutomateResponseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutomateResponseConfigOutcomeCallable deleteAutomateResponseConfigCallable(const Model::DeleteAutomateResponseConfigRequest& request) const;
			DeleteCustomizeRuleOutcome deleteCustomizeRule(const Model::DeleteCustomizeRuleRequest &request)const;
			void deleteCustomizeRuleAsync(const Model::DeleteCustomizeRuleRequest& request, const DeleteCustomizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomizeRuleOutcomeCallable deleteCustomizeRuleCallable(const Model::DeleteCustomizeRuleRequest& request) const;
			DeleteQuickQueryOutcome deleteQuickQuery(const Model::DeleteQuickQueryRequest &request)const;
			void deleteQuickQueryAsync(const Model::DeleteQuickQueryRequest& request, const DeleteQuickQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQuickQueryOutcomeCallable deleteQuickQueryCallable(const Model::DeleteQuickQueryRequest& request) const;
			DeleteWhiteRuleListOutcome deleteWhiteRuleList(const Model::DeleteWhiteRuleListRequest &request)const;
			void deleteWhiteRuleListAsync(const Model::DeleteWhiteRuleListRequest& request, const DeleteWhiteRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWhiteRuleListOutcomeCallable deleteWhiteRuleListCallable(const Model::DeleteWhiteRuleListRequest& request) const;
			DescribeAggregateFunctionOutcome describeAggregateFunction(const Model::DescribeAggregateFunctionRequest &request)const;
			void describeAggregateFunctionAsync(const Model::DescribeAggregateFunctionRequest& request, const DescribeAggregateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAggregateFunctionOutcomeCallable describeAggregateFunctionCallable(const Model::DescribeAggregateFunctionRequest& request) const;
			DescribeAlertSceneByEventOutcome describeAlertSceneByEvent(const Model::DescribeAlertSceneByEventRequest &request)const;
			void describeAlertSceneByEventAsync(const Model::DescribeAlertSceneByEventRequest& request, const DescribeAlertSceneByEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertSceneByEventOutcomeCallable describeAlertSceneByEventCallable(const Model::DescribeAlertSceneByEventRequest& request) const;
			DescribeAlertSourceOutcome describeAlertSource(const Model::DescribeAlertSourceRequest &request)const;
			void describeAlertSourceAsync(const Model::DescribeAlertSourceRequest& request, const DescribeAlertSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertSourceOutcomeCallable describeAlertSourceCallable(const Model::DescribeAlertSourceRequest& request) const;
			DescribeAlertSourceWithEventOutcome describeAlertSourceWithEvent(const Model::DescribeAlertSourceWithEventRequest &request)const;
			void describeAlertSourceWithEventAsync(const Model::DescribeAlertSourceWithEventRequest& request, const DescribeAlertSourceWithEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertSourceWithEventOutcomeCallable describeAlertSourceWithEventCallable(const Model::DescribeAlertSourceWithEventRequest& request) const;
			DescribeAlertTypeOutcome describeAlertType(const Model::DescribeAlertTypeRequest &request)const;
			void describeAlertTypeAsync(const Model::DescribeAlertTypeRequest& request, const DescribeAlertTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertTypeOutcomeCallable describeAlertTypeCallable(const Model::DescribeAlertTypeRequest& request) const;
			DescribeAlertsCountOutcome describeAlertsCount(const Model::DescribeAlertsCountRequest &request)const;
			void describeAlertsCountAsync(const Model::DescribeAlertsCountRequest& request, const DescribeAlertsCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertsCountOutcomeCallable describeAlertsCountCallable(const Model::DescribeAlertsCountRequest& request) const;
			DescribeAttackTimeLineOutcome describeAttackTimeLine(const Model::DescribeAttackTimeLineRequest &request)const;
			void describeAttackTimeLineAsync(const Model::DescribeAttackTimeLineRequest& request, const DescribeAttackTimeLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAttackTimeLineOutcomeCallable describeAttackTimeLineCallable(const Model::DescribeAttackTimeLineRequest& request) const;
			DescribeAutomateResponseConfigCounterOutcome describeAutomateResponseConfigCounter(const Model::DescribeAutomateResponseConfigCounterRequest &request)const;
			void describeAutomateResponseConfigCounterAsync(const Model::DescribeAutomateResponseConfigCounterRequest& request, const DescribeAutomateResponseConfigCounterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutomateResponseConfigCounterOutcomeCallable describeAutomateResponseConfigCounterCallable(const Model::DescribeAutomateResponseConfigCounterRequest& request) const;
			DescribeAutomateResponseConfigFeatureOutcome describeAutomateResponseConfigFeature(const Model::DescribeAutomateResponseConfigFeatureRequest &request)const;
			void describeAutomateResponseConfigFeatureAsync(const Model::DescribeAutomateResponseConfigFeatureRequest& request, const DescribeAutomateResponseConfigFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutomateResponseConfigFeatureOutcomeCallable describeAutomateResponseConfigFeatureCallable(const Model::DescribeAutomateResponseConfigFeatureRequest& request) const;
			DescribeAutomateResponseConfigPlayBooksOutcome describeAutomateResponseConfigPlayBooks(const Model::DescribeAutomateResponseConfigPlayBooksRequest &request)const;
			void describeAutomateResponseConfigPlayBooksAsync(const Model::DescribeAutomateResponseConfigPlayBooksRequest& request, const DescribeAutomateResponseConfigPlayBooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutomateResponseConfigPlayBooksOutcomeCallable describeAutomateResponseConfigPlayBooksCallable(const Model::DescribeAutomateResponseConfigPlayBooksRequest& request) const;
			DescribeCloudSiemAssetsOutcome describeCloudSiemAssets(const Model::DescribeCloudSiemAssetsRequest &request)const;
			void describeCloudSiemAssetsAsync(const Model::DescribeCloudSiemAssetsRequest& request, const DescribeCloudSiemAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudSiemAssetsOutcomeCallable describeCloudSiemAssetsCallable(const Model::DescribeCloudSiemAssetsRequest& request) const;
			DescribeCloudSiemAssetsCounterOutcome describeCloudSiemAssetsCounter(const Model::DescribeCloudSiemAssetsCounterRequest &request)const;
			void describeCloudSiemAssetsCounterAsync(const Model::DescribeCloudSiemAssetsCounterRequest& request, const DescribeCloudSiemAssetsCounterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudSiemAssetsCounterOutcomeCallable describeCloudSiemAssetsCounterCallable(const Model::DescribeCloudSiemAssetsCounterRequest& request) const;
			DescribeCloudSiemEventDetailOutcome describeCloudSiemEventDetail(const Model::DescribeCloudSiemEventDetailRequest &request)const;
			void describeCloudSiemEventDetailAsync(const Model::DescribeCloudSiemEventDetailRequest& request, const DescribeCloudSiemEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudSiemEventDetailOutcomeCallable describeCloudSiemEventDetailCallable(const Model::DescribeCloudSiemEventDetailRequest& request) const;
			DescribeCloudSiemEventsOutcome describeCloudSiemEvents(const Model::DescribeCloudSiemEventsRequest &request)const;
			void describeCloudSiemEventsAsync(const Model::DescribeCloudSiemEventsRequest& request, const DescribeCloudSiemEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudSiemEventsOutcomeCallable describeCloudSiemEventsCallable(const Model::DescribeCloudSiemEventsRequest& request) const;
			DescribeCustomizeRuleOutcome describeCustomizeRule(const Model::DescribeCustomizeRuleRequest &request)const;
			void describeCustomizeRuleAsync(const Model::DescribeCustomizeRuleRequest& request, const DescribeCustomizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeRuleOutcomeCallable describeCustomizeRuleCallable(const Model::DescribeCustomizeRuleRequest& request) const;
			DescribeCustomizeRuleCountOutcome describeCustomizeRuleCount(const Model::DescribeCustomizeRuleCountRequest &request)const;
			void describeCustomizeRuleCountAsync(const Model::DescribeCustomizeRuleCountRequest& request, const DescribeCustomizeRuleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeRuleCountOutcomeCallable describeCustomizeRuleCountCallable(const Model::DescribeCustomizeRuleCountRequest& request) const;
			DescribeCustomizeRuleTestOutcome describeCustomizeRuleTest(const Model::DescribeCustomizeRuleTestRequest &request)const;
			void describeCustomizeRuleTestAsync(const Model::DescribeCustomizeRuleTestRequest& request, const DescribeCustomizeRuleTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeRuleTestOutcomeCallable describeCustomizeRuleTestCallable(const Model::DescribeCustomizeRuleTestRequest& request) const;
			DescribeCustomizeRuleTestHistogramOutcome describeCustomizeRuleTestHistogram(const Model::DescribeCustomizeRuleTestHistogramRequest &request)const;
			void describeCustomizeRuleTestHistogramAsync(const Model::DescribeCustomizeRuleTestHistogramRequest& request, const DescribeCustomizeRuleTestHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeRuleTestHistogramOutcomeCallable describeCustomizeRuleTestHistogramCallable(const Model::DescribeCustomizeRuleTestHistogramRequest& request) const;
			DescribeDisposeAndPlaybookOutcome describeDisposeAndPlaybook(const Model::DescribeDisposeAndPlaybookRequest &request)const;
			void describeDisposeAndPlaybookAsync(const Model::DescribeDisposeAndPlaybookRequest& request, const DescribeDisposeAndPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDisposeAndPlaybookOutcomeCallable describeDisposeAndPlaybookCallable(const Model::DescribeDisposeAndPlaybookRequest& request) const;
			DescribeDisposeStrategyPlaybookOutcome describeDisposeStrategyPlaybook(const Model::DescribeDisposeStrategyPlaybookRequest &request)const;
			void describeDisposeStrategyPlaybookAsync(const Model::DescribeDisposeStrategyPlaybookRequest& request, const DescribeDisposeStrategyPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDisposeStrategyPlaybookOutcomeCallable describeDisposeStrategyPlaybookCallable(const Model::DescribeDisposeStrategyPlaybookRequest& request) const;
			DescribeEntityInfoOutcome describeEntityInfo(const Model::DescribeEntityInfoRequest &request)const;
			void describeEntityInfoAsync(const Model::DescribeEntityInfoRequest& request, const DescribeEntityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEntityInfoOutcomeCallable describeEntityInfoCallable(const Model::DescribeEntityInfoRequest& request) const;
			DescribeEventCountByThreatLevelOutcome describeEventCountByThreatLevel(const Model::DescribeEventCountByThreatLevelRequest &request)const;
			void describeEventCountByThreatLevelAsync(const Model::DescribeEventCountByThreatLevelRequest& request, const DescribeEventCountByThreatLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventCountByThreatLevelOutcomeCallable describeEventCountByThreatLevelCallable(const Model::DescribeEventCountByThreatLevelRequest& request) const;
			DescribeEventDisposeOutcome describeEventDispose(const Model::DescribeEventDisposeRequest &request)const;
			void describeEventDisposeAsync(const Model::DescribeEventDisposeRequest& request, const DescribeEventDisposeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventDisposeOutcomeCallable describeEventDisposeCallable(const Model::DescribeEventDisposeRequest& request) const;
			DescribeJobStatusOutcome describeJobStatus(const Model::DescribeJobStatusRequest &request)const;
			void describeJobStatusAsync(const Model::DescribeJobStatusRequest& request, const DescribeJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobStatusOutcomeCallable describeJobStatusCallable(const Model::DescribeJobStatusRequest& request) const;
			DescribeLogFieldsOutcome describeLogFields(const Model::DescribeLogFieldsRequest &request)const;
			void describeLogFieldsAsync(const Model::DescribeLogFieldsRequest& request, const DescribeLogFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogFieldsOutcomeCallable describeLogFieldsCallable(const Model::DescribeLogFieldsRequest& request) const;
			DescribeLogSourceOutcome describeLogSource(const Model::DescribeLogSourceRequest &request)const;
			void describeLogSourceAsync(const Model::DescribeLogSourceRequest& request, const DescribeLogSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogSourceOutcomeCallable describeLogSourceCallable(const Model::DescribeLogSourceRequest& request) const;
			DescribeLogStoreOutcome describeLogStore(const Model::DescribeLogStoreRequest &request)const;
			void describeLogStoreAsync(const Model::DescribeLogStoreRequest& request, const DescribeLogStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogStoreOutcomeCallable describeLogStoreCallable(const Model::DescribeLogStoreRequest& request) const;
			DescribeLogTypeOutcome describeLogType(const Model::DescribeLogTypeRequest &request)const;
			void describeLogTypeAsync(const Model::DescribeLogTypeRequest& request, const DescribeLogTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogTypeOutcomeCallable describeLogTypeCallable(const Model::DescribeLogTypeRequest& request) const;
			DescribeOperatorsOutcome describeOperators(const Model::DescribeOperatorsRequest &request)const;
			void describeOperatorsAsync(const Model::DescribeOperatorsRequest& request, const DescribeOperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOperatorsOutcomeCallable describeOperatorsCallable(const Model::DescribeOperatorsRequest& request) const;
			DescribeScopeUsersOutcome describeScopeUsers(const Model::DescribeScopeUsersRequest &request)const;
			void describeScopeUsersAsync(const Model::DescribeScopeUsersRequest& request, const DescribeScopeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScopeUsersOutcomeCallable describeScopeUsersCallable(const Model::DescribeScopeUsersRequest& request) const;
			DescribeStorageOutcome describeStorage(const Model::DescribeStorageRequest &request)const;
			void describeStorageAsync(const Model::DescribeStorageRequest& request, const DescribeStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStorageOutcomeCallable describeStorageCallable(const Model::DescribeStorageRequest& request) const;
			DescribeWafScopeOutcome describeWafScope(const Model::DescribeWafScopeRequest &request)const;
			void describeWafScopeAsync(const Model::DescribeWafScopeRequest& request, const DescribeWafScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWafScopeOutcomeCallable describeWafScopeCallable(const Model::DescribeWafScopeRequest& request) const;
			DoQuickFieldOutcome doQuickField(const Model::DoQuickFieldRequest &request)const;
			void doQuickFieldAsync(const Model::DoQuickFieldRequest& request, const DoQuickFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DoQuickFieldOutcomeCallable doQuickFieldCallable(const Model::DoQuickFieldRequest& request) const;
			DoSelfDelegateOutcome doSelfDelegate(const Model::DoSelfDelegateRequest &request)const;
			void doSelfDelegateAsync(const Model::DoSelfDelegateRequest& request, const DoSelfDelegateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DoSelfDelegateOutcomeCallable doSelfDelegateCallable(const Model::DoSelfDelegateRequest& request) const;
			GetCapacityOutcome getCapacity(const Model::GetCapacityRequest &request)const;
			void getCapacityAsync(const Model::GetCapacityRequest& request, const GetCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCapacityOutcomeCallable getCapacityCallable(const Model::GetCapacityRequest& request) const;
			GetHistogramsOutcome getHistograms(const Model::GetHistogramsRequest &request)const;
			void getHistogramsAsync(const Model::GetHistogramsRequest& request, const GetHistogramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHistogramsOutcomeCallable getHistogramsCallable(const Model::GetHistogramsRequest& request) const;
			GetLogsOutcome getLogs(const Model::GetLogsRequest &request)const;
			void getLogsAsync(const Model::GetLogsRequest& request, const GetLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLogsOutcomeCallable getLogsCallable(const Model::GetLogsRequest& request) const;
			GetQuickQueryOutcome getQuickQuery(const Model::GetQuickQueryRequest &request)const;
			void getQuickQueryAsync(const Model::GetQuickQueryRequest& request, const GetQuickQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQuickQueryOutcomeCallable getQuickQueryCallable(const Model::GetQuickQueryRequest& request) const;
			GetStorageOutcome getStorage(const Model::GetStorageRequest &request)const;
			void getStorageAsync(const Model::GetStorageRequest& request, const GetStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStorageOutcomeCallable getStorageCallable(const Model::GetStorageRequest& request) const;
			ListAutomateResponseConfigsOutcome listAutomateResponseConfigs(const Model::ListAutomateResponseConfigsRequest &request)const;
			void listAutomateResponseConfigsAsync(const Model::ListAutomateResponseConfigsRequest& request, const ListAutomateResponseConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAutomateResponseConfigsOutcomeCallable listAutomateResponseConfigsCallable(const Model::ListAutomateResponseConfigsRequest& request) const;
			ListCloudSiemCustomizeRulesOutcome listCloudSiemCustomizeRules(const Model::ListCloudSiemCustomizeRulesRequest &request)const;
			void listCloudSiemCustomizeRulesAsync(const Model::ListCloudSiemCustomizeRulesRequest& request, const ListCloudSiemCustomizeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCloudSiemCustomizeRulesOutcomeCallable listCloudSiemCustomizeRulesCallable(const Model::ListCloudSiemCustomizeRulesRequest& request) const;
			ListCloudSiemPredefinedRulesOutcome listCloudSiemPredefinedRules(const Model::ListCloudSiemPredefinedRulesRequest &request)const;
			void listCloudSiemPredefinedRulesAsync(const Model::ListCloudSiemPredefinedRulesRequest& request, const ListCloudSiemPredefinedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCloudSiemPredefinedRulesOutcomeCallable listCloudSiemPredefinedRulesCallable(const Model::ListCloudSiemPredefinedRulesRequest& request) const;
			ListCustomizeRuleTestResultOutcome listCustomizeRuleTestResult(const Model::ListCustomizeRuleTestResultRequest &request)const;
			void listCustomizeRuleTestResultAsync(const Model::ListCustomizeRuleTestResultRequest& request, const ListCustomizeRuleTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomizeRuleTestResultOutcomeCallable listCustomizeRuleTestResultCallable(const Model::ListCustomizeRuleTestResultRequest& request) const;
			ListDeliveryOutcome listDelivery(const Model::ListDeliveryRequest &request)const;
			void listDeliveryAsync(const Model::ListDeliveryRequest& request, const ListDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeliveryOutcomeCallable listDeliveryCallable(const Model::ListDeliveryRequest& request) const;
			ListDisposeStrategyOutcome listDisposeStrategy(const Model::ListDisposeStrategyRequest &request)const;
			void listDisposeStrategyAsync(const Model::ListDisposeStrategyRequest& request, const ListDisposeStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDisposeStrategyOutcomeCallable listDisposeStrategyCallable(const Model::ListDisposeStrategyRequest& request) const;
			ListOperationOutcome listOperation(const Model::ListOperationRequest &request)const;
			void listOperationAsync(const Model::ListOperationRequest& request, const ListOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOperationOutcomeCallable listOperationCallable(const Model::ListOperationRequest& request) const;
			ListQuickQueryOutcome listQuickQuery(const Model::ListQuickQueryRequest &request)const;
			void listQuickQueryAsync(const Model::ListQuickQueryRequest& request, const ListQuickQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQuickQueryOutcomeCallable listQuickQueryCallable(const Model::ListQuickQueryRequest& request) const;
			OpenDeliveryOutcome openDelivery(const Model::OpenDeliveryRequest &request)const;
			void openDeliveryAsync(const Model::OpenDeliveryRequest& request, const OpenDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenDeliveryOutcomeCallable openDeliveryCallable(const Model::OpenDeliveryRequest& request) const;
			PostAutomateResponseConfigOutcome postAutomateResponseConfig(const Model::PostAutomateResponseConfigRequest &request)const;
			void postAutomateResponseConfigAsync(const Model::PostAutomateResponseConfigRequest& request, const PostAutomateResponseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PostAutomateResponseConfigOutcomeCallable postAutomateResponseConfigCallable(const Model::PostAutomateResponseConfigRequest& request) const;
			PostCustomizeRuleOutcome postCustomizeRule(const Model::PostCustomizeRuleRequest &request)const;
			void postCustomizeRuleAsync(const Model::PostCustomizeRuleRequest& request, const PostCustomizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PostCustomizeRuleOutcomeCallable postCustomizeRuleCallable(const Model::PostCustomizeRuleRequest& request) const;
			PostCustomizeRuleTestOutcome postCustomizeRuleTest(const Model::PostCustomizeRuleTestRequest &request)const;
			void postCustomizeRuleTestAsync(const Model::PostCustomizeRuleTestRequest& request, const PostCustomizeRuleTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PostCustomizeRuleTestOutcomeCallable postCustomizeRuleTestCallable(const Model::PostCustomizeRuleTestRequest& request) const;
			PostEventDisposeAndWhiteruleListOutcome postEventDisposeAndWhiteruleList(const Model::PostEventDisposeAndWhiteruleListRequest &request)const;
			void postEventDisposeAndWhiteruleListAsync(const Model::PostEventDisposeAndWhiteruleListRequest& request, const PostEventDisposeAndWhiteruleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PostEventDisposeAndWhiteruleListOutcomeCallable postEventDisposeAndWhiteruleListCallable(const Model::PostEventDisposeAndWhiteruleListRequest& request) const;
			PostEventWhiteruleListOutcome postEventWhiteruleList(const Model::PostEventWhiteruleListRequest &request)const;
			void postEventWhiteruleListAsync(const Model::PostEventWhiteruleListRequest& request, const PostEventWhiteruleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PostEventWhiteruleListOutcomeCallable postEventWhiteruleListCallable(const Model::PostEventWhiteruleListRequest& request) const;
			PostFinishCustomizeRuleTestOutcome postFinishCustomizeRuleTest(const Model::PostFinishCustomizeRuleTestRequest &request)const;
			void postFinishCustomizeRuleTestAsync(const Model::PostFinishCustomizeRuleTestRequest& request, const PostFinishCustomizeRuleTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PostFinishCustomizeRuleTestOutcomeCallable postFinishCustomizeRuleTestCallable(const Model::PostFinishCustomizeRuleTestRequest& request) const;
			PostRuleStatusChangeOutcome postRuleStatusChange(const Model::PostRuleStatusChangeRequest &request)const;
			void postRuleStatusChangeAsync(const Model::PostRuleStatusChangeRequest& request, const PostRuleStatusChangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PostRuleStatusChangeOutcomeCallable postRuleStatusChangeCallable(const Model::PostRuleStatusChangeRequest& request) const;
			RestoreCapacityOutcome restoreCapacity(const Model::RestoreCapacityRequest &request)const;
			void restoreCapacityAsync(const Model::RestoreCapacityRequest& request, const RestoreCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestoreCapacityOutcomeCallable restoreCapacityCallable(const Model::RestoreCapacityRequest& request) const;
			SaveQuickQueryOutcome saveQuickQuery(const Model::SaveQuickQueryRequest &request)const;
			void saveQuickQueryAsync(const Model::SaveQuickQueryRequest& request, const SaveQuickQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveQuickQueryOutcomeCallable saveQuickQueryCallable(const Model::SaveQuickQueryRequest& request) const;
			SetStorageOutcome setStorage(const Model::SetStorageRequest &request)const;
			void setStorageAsync(const Model::SetStorageRequest& request, const SetStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetStorageOutcomeCallable setStorageCallable(const Model::SetStorageRequest& request) const;
			ShowQuickAnalysisOutcome showQuickAnalysis(const Model::ShowQuickAnalysisRequest &request)const;
			void showQuickAnalysisAsync(const Model::ShowQuickAnalysisRequest& request, const ShowQuickAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShowQuickAnalysisOutcomeCallable showQuickAnalysisCallable(const Model::ShowQuickAnalysisRequest& request) const;
			UpdateAutomateResponseConfigStatusOutcome updateAutomateResponseConfigStatus(const Model::UpdateAutomateResponseConfigStatusRequest &request)const;
			void updateAutomateResponseConfigStatusAsync(const Model::UpdateAutomateResponseConfigStatusRequest& request, const UpdateAutomateResponseConfigStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAutomateResponseConfigStatusOutcomeCallable updateAutomateResponseConfigStatusCallable(const Model::UpdateAutomateResponseConfigStatusRequest& request) const;
			UpdateWhiteRuleListOutcome updateWhiteRuleList(const Model::UpdateWhiteRuleListRequest &request)const;
			void updateWhiteRuleListAsync(const Model::UpdateWhiteRuleListRequest& request, const UpdateWhiteRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWhiteRuleListOutcomeCallable updateWhiteRuleListCallable(const Model::UpdateWhiteRuleListRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUD_SIEM_CLOUD_SIEMCLIENT_H_
