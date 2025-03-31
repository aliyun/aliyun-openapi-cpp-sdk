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
#include "model/AddDataSourceRequest.h"
#include "model/AddDataSourceResult.h"
#include "model/AddDataSourceLogRequest.h"
#include "model/AddDataSourceLogResult.h"
#include "model/AddUserSourceLogConfigRequest.h"
#include "model/AddUserSourceLogConfigResult.h"
#include "model/BindAccountRequest.h"
#include "model/BindAccountResult.h"
#include "model/CloseDeliveryRequest.h"
#include "model/CloseDeliveryResult.h"
#include "model/DeleteAutomateResponseConfigRequest.h"
#include "model/DeleteAutomateResponseConfigResult.h"
#include "model/DeleteBindAccountRequest.h"
#include "model/DeleteBindAccountResult.h"
#include "model/DeleteCustomizeRuleRequest.h"
#include "model/DeleteCustomizeRuleResult.h"
#include "model/DeleteDataSourceRequest.h"
#include "model/DeleteDataSourceResult.h"
#include "model/DeleteDataSourceLogRequest.h"
#include "model/DeleteDataSourceLogResult.h"
#include "model/DeleteWhiteRuleListRequest.h"
#include "model/DeleteWhiteRuleListResult.h"
#include "model/DescribeAggregateFunctionRequest.h"
#include "model/DescribeAggregateFunctionResult.h"
#include "model/DescribeAlertSceneRequest.h"
#include "model/DescribeAlertSceneResult.h"
#include "model/DescribeAlertSceneByEventRequest.h"
#include "model/DescribeAlertSceneByEventResult.h"
#include "model/DescribeAlertSourceRequest.h"
#include "model/DescribeAlertSourceResult.h"
#include "model/DescribeAlertSourceWithEventRequest.h"
#include "model/DescribeAlertSourceWithEventResult.h"
#include "model/DescribeAlertTypeRequest.h"
#include "model/DescribeAlertTypeResult.h"
#include "model/DescribeAlertsRequest.h"
#include "model/DescribeAlertsResult.h"
#include "model/DescribeAlertsCountRequest.h"
#include "model/DescribeAlertsCountResult.h"
#include "model/DescribeAlertsWithEntityRequest.h"
#include "model/DescribeAlertsWithEntityResult.h"
#include "model/DescribeAlertsWithEventRequest.h"
#include "model/DescribeAlertsWithEventResult.h"
#include "model/DescribeAuthRequest.h"
#include "model/DescribeAuthResult.h"
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
#include "model/DescribeCustomizeRuleCountRequest.h"
#include "model/DescribeCustomizeRuleCountResult.h"
#include "model/DescribeCustomizeRuleTestRequest.h"
#include "model/DescribeCustomizeRuleTestResult.h"
#include "model/DescribeCustomizeRuleTestHistogramRequest.h"
#include "model/DescribeCustomizeRuleTestHistogramResult.h"
#include "model/DescribeDataSourceInstanceRequest.h"
#include "model/DescribeDataSourceInstanceResult.h"
#include "model/DescribeDataSourceParametersRequest.h"
#include "model/DescribeDataSourceParametersResult.h"
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
#include "model/DescribeImportedLogCountRequest.h"
#include "model/DescribeImportedLogCountResult.h"
#include "model/DescribeLogFieldsRequest.h"
#include "model/DescribeLogFieldsResult.h"
#include "model/DescribeLogSourceRequest.h"
#include "model/DescribeLogSourceResult.h"
#include "model/DescribeLogTypeRequest.h"
#include "model/DescribeLogTypeResult.h"
#include "model/DescribeOperatorsRequest.h"
#include "model/DescribeOperatorsResult.h"
#include "model/DescribeProdCountRequest.h"
#include "model/DescribeProdCountResult.h"
#include "model/DescribeScopeUsersRequest.h"
#include "model/DescribeScopeUsersResult.h"
#include "model/DescribeServiceStatusRequest.h"
#include "model/DescribeServiceStatusResult.h"
#include "model/DescribeStorageRequest.h"
#include "model/DescribeStorageResult.h"
#include "model/DescribeUserBuyStatusRequest.h"
#include "model/DescribeUserBuyStatusResult.h"
#include "model/DescribeWafScopeRequest.h"
#include "model/DescribeWafScopeResult.h"
#include "model/DescribeWhiteRuleListRequest.h"
#include "model/DescribeWhiteRuleListResult.h"
#include "model/EnableAccessForCloudSiemRequest.h"
#include "model/EnableAccessForCloudSiemResult.h"
#include "model/EnableServiceForCloudSiemRequest.h"
#include "model/EnableServiceForCloudSiemResult.h"
#include "model/GetCapacityRequest.h"
#include "model/GetCapacityResult.h"
#include "model/GetStorageRequest.h"
#include "model/GetStorageResult.h"
#include "model/ListAccountAccessIdRequest.h"
#include "model/ListAccountAccessIdResult.h"
#include "model/ListAccountsByLogRequest.h"
#include "model/ListAccountsByLogResult.h"
#include "model/ListAllProdsRequest.h"
#include "model/ListAllProdsResult.h"
#include "model/ListAutomateResponseConfigsRequest.h"
#include "model/ListAutomateResponseConfigsResult.h"
#include "model/ListBindAccountRequest.h"
#include "model/ListBindAccountResult.h"
#include "model/ListBindDataSourcesRequest.h"
#include "model/ListBindDataSourcesResult.h"
#include "model/ListCloudSiemCustomizeRulesRequest.h"
#include "model/ListCloudSiemCustomizeRulesResult.h"
#include "model/ListCloudSiemPredefinedRulesRequest.h"
#include "model/ListCloudSiemPredefinedRulesResult.h"
#include "model/ListCustomizeRuleTestResultRequest.h"
#include "model/ListCustomizeRuleTestResultResult.h"
#include "model/ListDataSourceLogsRequest.h"
#include "model/ListDataSourceLogsResult.h"
#include "model/ListDataSourceTypesRequest.h"
#include "model/ListDataSourceTypesResult.h"
#include "model/ListDeliveryRequest.h"
#include "model/ListDeliveryResult.h"
#include "model/ListDisposeStrategyRequest.h"
#include "model/ListDisposeStrategyResult.h"
#include "model/ListEntitiesRequest.h"
#include "model/ListEntitiesResult.h"
#include "model/ListImportedLogsByProdRequest.h"
#include "model/ListImportedLogsByProdResult.h"
#include "model/ListProjectLogStoresRequest.h"
#include "model/ListProjectLogStoresResult.h"
#include "model/ListRdUsersRequest.h"
#include "model/ListRdUsersResult.h"
#include "model/ModifyBindAccountRequest.h"
#include "model/ModifyBindAccountResult.h"
#include "model/ModifyDataSourceRequest.h"
#include "model/ModifyDataSourceResult.h"
#include "model/ModifyDataSourceLogRequest.h"
#include "model/ModifyDataSourceLogResult.h"
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
#include "model/SetStorageRequest.h"
#include "model/SetStorageResult.h"
#include "model/SubmitImportLogTasksRequest.h"
#include "model/SubmitImportLogTasksResult.h"
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
			typedef Outcome<Error, Model::AddDataSourceResult> AddDataSourceOutcome;
			typedef std::future<AddDataSourceOutcome> AddDataSourceOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::AddDataSourceRequest&, const AddDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDataSourceAsyncHandler;
			typedef Outcome<Error, Model::AddDataSourceLogResult> AddDataSourceLogOutcome;
			typedef std::future<AddDataSourceLogOutcome> AddDataSourceLogOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::AddDataSourceLogRequest&, const AddDataSourceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDataSourceLogAsyncHandler;
			typedef Outcome<Error, Model::AddUserSourceLogConfigResult> AddUserSourceLogConfigOutcome;
			typedef std::future<AddUserSourceLogConfigOutcome> AddUserSourceLogConfigOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::AddUserSourceLogConfigRequest&, const AddUserSourceLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserSourceLogConfigAsyncHandler;
			typedef Outcome<Error, Model::BindAccountResult> BindAccountOutcome;
			typedef std::future<BindAccountOutcome> BindAccountOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::BindAccountRequest&, const BindAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindAccountAsyncHandler;
			typedef Outcome<Error, Model::CloseDeliveryResult> CloseDeliveryOutcome;
			typedef std::future<CloseDeliveryOutcome> CloseDeliveryOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::CloseDeliveryRequest&, const CloseDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseDeliveryAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutomateResponseConfigResult> DeleteAutomateResponseConfigOutcome;
			typedef std::future<DeleteAutomateResponseConfigOutcome> DeleteAutomateResponseConfigOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DeleteAutomateResponseConfigRequest&, const DeleteAutomateResponseConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutomateResponseConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteBindAccountResult> DeleteBindAccountOutcome;
			typedef std::future<DeleteBindAccountOutcome> DeleteBindAccountOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DeleteBindAccountRequest&, const DeleteBindAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBindAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomizeRuleResult> DeleteCustomizeRuleOutcome;
			typedef std::future<DeleteCustomizeRuleOutcome> DeleteCustomizeRuleOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DeleteCustomizeRuleRequest&, const DeleteCustomizeRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomizeRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataSourceResult> DeleteDataSourceOutcome;
			typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DeleteDataSourceRequest&, const DeleteDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataSourceLogResult> DeleteDataSourceLogOutcome;
			typedef std::future<DeleteDataSourceLogOutcome> DeleteDataSourceLogOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DeleteDataSourceLogRequest&, const DeleteDataSourceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourceLogAsyncHandler;
			typedef Outcome<Error, Model::DeleteWhiteRuleListResult> DeleteWhiteRuleListOutcome;
			typedef std::future<DeleteWhiteRuleListOutcome> DeleteWhiteRuleListOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DeleteWhiteRuleListRequest&, const DeleteWhiteRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWhiteRuleListAsyncHandler;
			typedef Outcome<Error, Model::DescribeAggregateFunctionResult> DescribeAggregateFunctionOutcome;
			typedef std::future<DescribeAggregateFunctionOutcome> DescribeAggregateFunctionOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAggregateFunctionRequest&, const DescribeAggregateFunctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAggregateFunctionAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertSceneResult> DescribeAlertSceneOutcome;
			typedef std::future<DescribeAlertSceneOutcome> DescribeAlertSceneOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAlertSceneRequest&, const DescribeAlertSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertSceneAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeAlertsResult> DescribeAlertsOutcome;
			typedef std::future<DescribeAlertsOutcome> DescribeAlertsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAlertsRequest&, const DescribeAlertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertsCountResult> DescribeAlertsCountOutcome;
			typedef std::future<DescribeAlertsCountOutcome> DescribeAlertsCountOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAlertsCountRequest&, const DescribeAlertsCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertsCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertsWithEntityResult> DescribeAlertsWithEntityOutcome;
			typedef std::future<DescribeAlertsWithEntityOutcome> DescribeAlertsWithEntityOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAlertsWithEntityRequest&, const DescribeAlertsWithEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertsWithEntityAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertsWithEventResult> DescribeAlertsWithEventOutcome;
			typedef std::future<DescribeAlertsWithEventOutcome> DescribeAlertsWithEventOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAlertsWithEventRequest&, const DescribeAlertsWithEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertsWithEventAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuthResult> DescribeAuthOutcome;
			typedef std::future<DescribeAuthOutcome> DescribeAuthOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeAuthRequest&, const DescribeAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeCustomizeRuleCountResult> DescribeCustomizeRuleCountOutcome;
			typedef std::future<DescribeCustomizeRuleCountOutcome> DescribeCustomizeRuleCountOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCustomizeRuleCountRequest&, const DescribeCustomizeRuleCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeRuleCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizeRuleTestResult> DescribeCustomizeRuleTestOutcome;
			typedef std::future<DescribeCustomizeRuleTestOutcome> DescribeCustomizeRuleTestOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCustomizeRuleTestRequest&, const DescribeCustomizeRuleTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeRuleTestAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomizeRuleTestHistogramResult> DescribeCustomizeRuleTestHistogramOutcome;
			typedef std::future<DescribeCustomizeRuleTestHistogramOutcome> DescribeCustomizeRuleTestHistogramOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeCustomizeRuleTestHistogramRequest&, const DescribeCustomizeRuleTestHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeRuleTestHistogramAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSourceInstanceResult> DescribeDataSourceInstanceOutcome;
			typedef std::future<DescribeDataSourceInstanceOutcome> DescribeDataSourceInstanceOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeDataSourceInstanceRequest&, const DescribeDataSourceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSourceParametersResult> DescribeDataSourceParametersOutcome;
			typedef std::future<DescribeDataSourceParametersOutcome> DescribeDataSourceParametersOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeDataSourceParametersRequest&, const DescribeDataSourceParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceParametersAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeImportedLogCountResult> DescribeImportedLogCountOutcome;
			typedef std::future<DescribeImportedLogCountOutcome> DescribeImportedLogCountOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeImportedLogCountRequest&, const DescribeImportedLogCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImportedLogCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogFieldsResult> DescribeLogFieldsOutcome;
			typedef std::future<DescribeLogFieldsOutcome> DescribeLogFieldsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeLogFieldsRequest&, const DescribeLogFieldsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogFieldsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogSourceResult> DescribeLogSourceOutcome;
			typedef std::future<DescribeLogSourceOutcome> DescribeLogSourceOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeLogSourceRequest&, const DescribeLogSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogSourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogTypeResult> DescribeLogTypeOutcome;
			typedef std::future<DescribeLogTypeOutcome> DescribeLogTypeOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeLogTypeRequest&, const DescribeLogTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeOperatorsResult> DescribeOperatorsOutcome;
			typedef std::future<DescribeOperatorsOutcome> DescribeOperatorsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeOperatorsRequest&, const DescribeOperatorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOperatorsAsyncHandler;
			typedef Outcome<Error, Model::DescribeProdCountResult> DescribeProdCountOutcome;
			typedef std::future<DescribeProdCountOutcome> DescribeProdCountOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeProdCountRequest&, const DescribeProdCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProdCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeScopeUsersResult> DescribeScopeUsersOutcome;
			typedef std::future<DescribeScopeUsersOutcome> DescribeScopeUsersOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeScopeUsersRequest&, const DescribeScopeUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScopeUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceStatusResult> DescribeServiceStatusOutcome;
			typedef std::future<DescribeServiceStatusOutcome> DescribeServiceStatusOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeServiceStatusRequest&, const DescribeServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeStorageResult> DescribeStorageOutcome;
			typedef std::future<DescribeStorageOutcome> DescribeStorageOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeStorageRequest&, const DescribeStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserBuyStatusResult> DescribeUserBuyStatusOutcome;
			typedef std::future<DescribeUserBuyStatusOutcome> DescribeUserBuyStatusOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeUserBuyStatusRequest&, const DescribeUserBuyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBuyStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeWafScopeResult> DescribeWafScopeOutcome;
			typedef std::future<DescribeWafScopeOutcome> DescribeWafScopeOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeWafScopeRequest&, const DescribeWafScopeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafScopeAsyncHandler;
			typedef Outcome<Error, Model::DescribeWhiteRuleListResult> DescribeWhiteRuleListOutcome;
			typedef std::future<DescribeWhiteRuleListOutcome> DescribeWhiteRuleListOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::DescribeWhiteRuleListRequest&, const DescribeWhiteRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteRuleListAsyncHandler;
			typedef Outcome<Error, Model::EnableAccessForCloudSiemResult> EnableAccessForCloudSiemOutcome;
			typedef std::future<EnableAccessForCloudSiemOutcome> EnableAccessForCloudSiemOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::EnableAccessForCloudSiemRequest&, const EnableAccessForCloudSiemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAccessForCloudSiemAsyncHandler;
			typedef Outcome<Error, Model::EnableServiceForCloudSiemResult> EnableServiceForCloudSiemOutcome;
			typedef std::future<EnableServiceForCloudSiemOutcome> EnableServiceForCloudSiemOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::EnableServiceForCloudSiemRequest&, const EnableServiceForCloudSiemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableServiceForCloudSiemAsyncHandler;
			typedef Outcome<Error, Model::GetCapacityResult> GetCapacityOutcome;
			typedef std::future<GetCapacityOutcome> GetCapacityOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::GetCapacityRequest&, const GetCapacityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCapacityAsyncHandler;
			typedef Outcome<Error, Model::GetStorageResult> GetStorageOutcome;
			typedef std::future<GetStorageOutcome> GetStorageOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::GetStorageRequest&, const GetStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStorageAsyncHandler;
			typedef Outcome<Error, Model::ListAccountAccessIdResult> ListAccountAccessIdOutcome;
			typedef std::future<ListAccountAccessIdOutcome> ListAccountAccessIdOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListAccountAccessIdRequest&, const ListAccountAccessIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccountAccessIdAsyncHandler;
			typedef Outcome<Error, Model::ListAccountsByLogResult> ListAccountsByLogOutcome;
			typedef std::future<ListAccountsByLogOutcome> ListAccountsByLogOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListAccountsByLogRequest&, const ListAccountsByLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccountsByLogAsyncHandler;
			typedef Outcome<Error, Model::ListAllProdsResult> ListAllProdsOutcome;
			typedef std::future<ListAllProdsOutcome> ListAllProdsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListAllProdsRequest&, const ListAllProdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllProdsAsyncHandler;
			typedef Outcome<Error, Model::ListAutomateResponseConfigsResult> ListAutomateResponseConfigsOutcome;
			typedef std::future<ListAutomateResponseConfigsOutcome> ListAutomateResponseConfigsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListAutomateResponseConfigsRequest&, const ListAutomateResponseConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAutomateResponseConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListBindAccountResult> ListBindAccountOutcome;
			typedef std::future<ListBindAccountOutcome> ListBindAccountOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListBindAccountRequest&, const ListBindAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBindAccountAsyncHandler;
			typedef Outcome<Error, Model::ListBindDataSourcesResult> ListBindDataSourcesOutcome;
			typedef std::future<ListBindDataSourcesOutcome> ListBindDataSourcesOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListBindDataSourcesRequest&, const ListBindDataSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBindDataSourcesAsyncHandler;
			typedef Outcome<Error, Model::ListCloudSiemCustomizeRulesResult> ListCloudSiemCustomizeRulesOutcome;
			typedef std::future<ListCloudSiemCustomizeRulesOutcome> ListCloudSiemCustomizeRulesOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListCloudSiemCustomizeRulesRequest&, const ListCloudSiemCustomizeRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCloudSiemCustomizeRulesAsyncHandler;
			typedef Outcome<Error, Model::ListCloudSiemPredefinedRulesResult> ListCloudSiemPredefinedRulesOutcome;
			typedef std::future<ListCloudSiemPredefinedRulesOutcome> ListCloudSiemPredefinedRulesOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListCloudSiemPredefinedRulesRequest&, const ListCloudSiemPredefinedRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCloudSiemPredefinedRulesAsyncHandler;
			typedef Outcome<Error, Model::ListCustomizeRuleTestResultResult> ListCustomizeRuleTestResultOutcome;
			typedef std::future<ListCustomizeRuleTestResultOutcome> ListCustomizeRuleTestResultOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListCustomizeRuleTestResultRequest&, const ListCustomizeRuleTestResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomizeRuleTestResultAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceLogsResult> ListDataSourceLogsOutcome;
			typedef std::future<ListDataSourceLogsOutcome> ListDataSourceLogsOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListDataSourceLogsRequest&, const ListDataSourceLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceLogsAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceTypesResult> ListDataSourceTypesOutcome;
			typedef std::future<ListDataSourceTypesOutcome> ListDataSourceTypesOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListDataSourceTypesRequest&, const ListDataSourceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceTypesAsyncHandler;
			typedef Outcome<Error, Model::ListDeliveryResult> ListDeliveryOutcome;
			typedef std::future<ListDeliveryOutcome> ListDeliveryOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListDeliveryRequest&, const ListDeliveryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeliveryAsyncHandler;
			typedef Outcome<Error, Model::ListDisposeStrategyResult> ListDisposeStrategyOutcome;
			typedef std::future<ListDisposeStrategyOutcome> ListDisposeStrategyOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListDisposeStrategyRequest&, const ListDisposeStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDisposeStrategyAsyncHandler;
			typedef Outcome<Error, Model::ListEntitiesResult> ListEntitiesOutcome;
			typedef std::future<ListEntitiesOutcome> ListEntitiesOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListEntitiesRequest&, const ListEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEntitiesAsyncHandler;
			typedef Outcome<Error, Model::ListImportedLogsByProdResult> ListImportedLogsByProdOutcome;
			typedef std::future<ListImportedLogsByProdOutcome> ListImportedLogsByProdOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListImportedLogsByProdRequest&, const ListImportedLogsByProdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImportedLogsByProdAsyncHandler;
			typedef Outcome<Error, Model::ListProjectLogStoresResult> ListProjectLogStoresOutcome;
			typedef std::future<ListProjectLogStoresOutcome> ListProjectLogStoresOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListProjectLogStoresRequest&, const ListProjectLogStoresOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectLogStoresAsyncHandler;
			typedef Outcome<Error, Model::ListRdUsersResult> ListRdUsersOutcome;
			typedef std::future<ListRdUsersOutcome> ListRdUsersOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ListRdUsersRequest&, const ListRdUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRdUsersAsyncHandler;
			typedef Outcome<Error, Model::ModifyBindAccountResult> ModifyBindAccountOutcome;
			typedef std::future<ModifyBindAccountOutcome> ModifyBindAccountOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ModifyBindAccountRequest&, const ModifyBindAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBindAccountAsyncHandler;
			typedef Outcome<Error, Model::ModifyDataSourceResult> ModifyDataSourceOutcome;
			typedef std::future<ModifyDataSourceOutcome> ModifyDataSourceOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ModifyDataSourceRequest&, const ModifyDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ModifyDataSourceLogResult> ModifyDataSourceLogOutcome;
			typedef std::future<ModifyDataSourceLogOutcome> ModifyDataSourceLogOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::ModifyDataSourceLogRequest&, const ModifyDataSourceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataSourceLogAsyncHandler;
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
			typedef Outcome<Error, Model::SetStorageResult> SetStorageOutcome;
			typedef std::future<SetStorageOutcome> SetStorageOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::SetStorageRequest&, const SetStorageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetStorageAsyncHandler;
			typedef Outcome<Error, Model::SubmitImportLogTasksResult> SubmitImportLogTasksOutcome;
			typedef std::future<SubmitImportLogTasksOutcome> SubmitImportLogTasksOutcomeCallable;
			typedef std::function<void(const Cloud_siemClient*, const Model::SubmitImportLogTasksRequest&, const SubmitImportLogTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImportLogTasksAsyncHandler;
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
			AddDataSourceOutcome addDataSource(const Model::AddDataSourceRequest &request)const;
			void addDataSourceAsync(const Model::AddDataSourceRequest& request, const AddDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDataSourceOutcomeCallable addDataSourceCallable(const Model::AddDataSourceRequest& request) const;
			AddDataSourceLogOutcome addDataSourceLog(const Model::AddDataSourceLogRequest &request)const;
			void addDataSourceLogAsync(const Model::AddDataSourceLogRequest& request, const AddDataSourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDataSourceLogOutcomeCallable addDataSourceLogCallable(const Model::AddDataSourceLogRequest& request) const;
			AddUserSourceLogConfigOutcome addUserSourceLogConfig(const Model::AddUserSourceLogConfigRequest &request)const;
			void addUserSourceLogConfigAsync(const Model::AddUserSourceLogConfigRequest& request, const AddUserSourceLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserSourceLogConfigOutcomeCallable addUserSourceLogConfigCallable(const Model::AddUserSourceLogConfigRequest& request) const;
			BindAccountOutcome bindAccount(const Model::BindAccountRequest &request)const;
			void bindAccountAsync(const Model::BindAccountRequest& request, const BindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindAccountOutcomeCallable bindAccountCallable(const Model::BindAccountRequest& request) const;
			CloseDeliveryOutcome closeDelivery(const Model::CloseDeliveryRequest &request)const;
			void closeDeliveryAsync(const Model::CloseDeliveryRequest& request, const CloseDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseDeliveryOutcomeCallable closeDeliveryCallable(const Model::CloseDeliveryRequest& request) const;
			DeleteAutomateResponseConfigOutcome deleteAutomateResponseConfig(const Model::DeleteAutomateResponseConfigRequest &request)const;
			void deleteAutomateResponseConfigAsync(const Model::DeleteAutomateResponseConfigRequest& request, const DeleteAutomateResponseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutomateResponseConfigOutcomeCallable deleteAutomateResponseConfigCallable(const Model::DeleteAutomateResponseConfigRequest& request) const;
			DeleteBindAccountOutcome deleteBindAccount(const Model::DeleteBindAccountRequest &request)const;
			void deleteBindAccountAsync(const Model::DeleteBindAccountRequest& request, const DeleteBindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBindAccountOutcomeCallable deleteBindAccountCallable(const Model::DeleteBindAccountRequest& request) const;
			DeleteCustomizeRuleOutcome deleteCustomizeRule(const Model::DeleteCustomizeRuleRequest &request)const;
			void deleteCustomizeRuleAsync(const Model::DeleteCustomizeRuleRequest& request, const DeleteCustomizeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomizeRuleOutcomeCallable deleteCustomizeRuleCallable(const Model::DeleteCustomizeRuleRequest& request) const;
			DeleteDataSourceOutcome deleteDataSource(const Model::DeleteDataSourceRequest &request)const;
			void deleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataSourceOutcomeCallable deleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;
			DeleteDataSourceLogOutcome deleteDataSourceLog(const Model::DeleteDataSourceLogRequest &request)const;
			void deleteDataSourceLogAsync(const Model::DeleteDataSourceLogRequest& request, const DeleteDataSourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataSourceLogOutcomeCallable deleteDataSourceLogCallable(const Model::DeleteDataSourceLogRequest& request) const;
			DeleteWhiteRuleListOutcome deleteWhiteRuleList(const Model::DeleteWhiteRuleListRequest &request)const;
			void deleteWhiteRuleListAsync(const Model::DeleteWhiteRuleListRequest& request, const DeleteWhiteRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWhiteRuleListOutcomeCallable deleteWhiteRuleListCallable(const Model::DeleteWhiteRuleListRequest& request) const;
			DescribeAggregateFunctionOutcome describeAggregateFunction(const Model::DescribeAggregateFunctionRequest &request)const;
			void describeAggregateFunctionAsync(const Model::DescribeAggregateFunctionRequest& request, const DescribeAggregateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAggregateFunctionOutcomeCallable describeAggregateFunctionCallable(const Model::DescribeAggregateFunctionRequest& request) const;
			DescribeAlertSceneOutcome describeAlertScene(const Model::DescribeAlertSceneRequest &request)const;
			void describeAlertSceneAsync(const Model::DescribeAlertSceneRequest& request, const DescribeAlertSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertSceneOutcomeCallable describeAlertSceneCallable(const Model::DescribeAlertSceneRequest& request) const;
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
			DescribeAlertsOutcome describeAlerts(const Model::DescribeAlertsRequest &request)const;
			void describeAlertsAsync(const Model::DescribeAlertsRequest& request, const DescribeAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertsOutcomeCallable describeAlertsCallable(const Model::DescribeAlertsRequest& request) const;
			DescribeAlertsCountOutcome describeAlertsCount(const Model::DescribeAlertsCountRequest &request)const;
			void describeAlertsCountAsync(const Model::DescribeAlertsCountRequest& request, const DescribeAlertsCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertsCountOutcomeCallable describeAlertsCountCallable(const Model::DescribeAlertsCountRequest& request) const;
			DescribeAlertsWithEntityOutcome describeAlertsWithEntity(const Model::DescribeAlertsWithEntityRequest &request)const;
			void describeAlertsWithEntityAsync(const Model::DescribeAlertsWithEntityRequest& request, const DescribeAlertsWithEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertsWithEntityOutcomeCallable describeAlertsWithEntityCallable(const Model::DescribeAlertsWithEntityRequest& request) const;
			DescribeAlertsWithEventOutcome describeAlertsWithEvent(const Model::DescribeAlertsWithEventRequest &request)const;
			void describeAlertsWithEventAsync(const Model::DescribeAlertsWithEventRequest& request, const DescribeAlertsWithEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlertsWithEventOutcomeCallable describeAlertsWithEventCallable(const Model::DescribeAlertsWithEventRequest& request) const;
			DescribeAuthOutcome describeAuth(const Model::DescribeAuthRequest &request)const;
			void describeAuthAsync(const Model::DescribeAuthRequest& request, const DescribeAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuthOutcomeCallable describeAuthCallable(const Model::DescribeAuthRequest& request) const;
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
			DescribeCustomizeRuleCountOutcome describeCustomizeRuleCount(const Model::DescribeCustomizeRuleCountRequest &request)const;
			void describeCustomizeRuleCountAsync(const Model::DescribeCustomizeRuleCountRequest& request, const DescribeCustomizeRuleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeRuleCountOutcomeCallable describeCustomizeRuleCountCallable(const Model::DescribeCustomizeRuleCountRequest& request) const;
			DescribeCustomizeRuleTestOutcome describeCustomizeRuleTest(const Model::DescribeCustomizeRuleTestRequest &request)const;
			void describeCustomizeRuleTestAsync(const Model::DescribeCustomizeRuleTestRequest& request, const DescribeCustomizeRuleTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeRuleTestOutcomeCallable describeCustomizeRuleTestCallable(const Model::DescribeCustomizeRuleTestRequest& request) const;
			DescribeCustomizeRuleTestHistogramOutcome describeCustomizeRuleTestHistogram(const Model::DescribeCustomizeRuleTestHistogramRequest &request)const;
			void describeCustomizeRuleTestHistogramAsync(const Model::DescribeCustomizeRuleTestHistogramRequest& request, const DescribeCustomizeRuleTestHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomizeRuleTestHistogramOutcomeCallable describeCustomizeRuleTestHistogramCallable(const Model::DescribeCustomizeRuleTestHistogramRequest& request) const;
			DescribeDataSourceInstanceOutcome describeDataSourceInstance(const Model::DescribeDataSourceInstanceRequest &request)const;
			void describeDataSourceInstanceAsync(const Model::DescribeDataSourceInstanceRequest& request, const DescribeDataSourceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSourceInstanceOutcomeCallable describeDataSourceInstanceCallable(const Model::DescribeDataSourceInstanceRequest& request) const;
			DescribeDataSourceParametersOutcome describeDataSourceParameters(const Model::DescribeDataSourceParametersRequest &request)const;
			void describeDataSourceParametersAsync(const Model::DescribeDataSourceParametersRequest& request, const DescribeDataSourceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSourceParametersOutcomeCallable describeDataSourceParametersCallable(const Model::DescribeDataSourceParametersRequest& request) const;
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
			DescribeImportedLogCountOutcome describeImportedLogCount(const Model::DescribeImportedLogCountRequest &request)const;
			void describeImportedLogCountAsync(const Model::DescribeImportedLogCountRequest& request, const DescribeImportedLogCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImportedLogCountOutcomeCallable describeImportedLogCountCallable(const Model::DescribeImportedLogCountRequest& request) const;
			DescribeLogFieldsOutcome describeLogFields(const Model::DescribeLogFieldsRequest &request)const;
			void describeLogFieldsAsync(const Model::DescribeLogFieldsRequest& request, const DescribeLogFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogFieldsOutcomeCallable describeLogFieldsCallable(const Model::DescribeLogFieldsRequest& request) const;
			DescribeLogSourceOutcome describeLogSource(const Model::DescribeLogSourceRequest &request)const;
			void describeLogSourceAsync(const Model::DescribeLogSourceRequest& request, const DescribeLogSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogSourceOutcomeCallable describeLogSourceCallable(const Model::DescribeLogSourceRequest& request) const;
			DescribeLogTypeOutcome describeLogType(const Model::DescribeLogTypeRequest &request)const;
			void describeLogTypeAsync(const Model::DescribeLogTypeRequest& request, const DescribeLogTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogTypeOutcomeCallable describeLogTypeCallable(const Model::DescribeLogTypeRequest& request) const;
			DescribeOperatorsOutcome describeOperators(const Model::DescribeOperatorsRequest &request)const;
			void describeOperatorsAsync(const Model::DescribeOperatorsRequest& request, const DescribeOperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOperatorsOutcomeCallable describeOperatorsCallable(const Model::DescribeOperatorsRequest& request) const;
			DescribeProdCountOutcome describeProdCount(const Model::DescribeProdCountRequest &request)const;
			void describeProdCountAsync(const Model::DescribeProdCountRequest& request, const DescribeProdCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProdCountOutcomeCallable describeProdCountCallable(const Model::DescribeProdCountRequest& request) const;
			DescribeScopeUsersOutcome describeScopeUsers(const Model::DescribeScopeUsersRequest &request)const;
			void describeScopeUsersAsync(const Model::DescribeScopeUsersRequest& request, const DescribeScopeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScopeUsersOutcomeCallable describeScopeUsersCallable(const Model::DescribeScopeUsersRequest& request) const;
			DescribeServiceStatusOutcome describeServiceStatus(const Model::DescribeServiceStatusRequest &request)const;
			void describeServiceStatusAsync(const Model::DescribeServiceStatusRequest& request, const DescribeServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServiceStatusOutcomeCallable describeServiceStatusCallable(const Model::DescribeServiceStatusRequest& request) const;
			DescribeStorageOutcome describeStorage(const Model::DescribeStorageRequest &request)const;
			void describeStorageAsync(const Model::DescribeStorageRequest& request, const DescribeStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStorageOutcomeCallable describeStorageCallable(const Model::DescribeStorageRequest& request) const;
			DescribeUserBuyStatusOutcome describeUserBuyStatus(const Model::DescribeUserBuyStatusRequest &request)const;
			void describeUserBuyStatusAsync(const Model::DescribeUserBuyStatusRequest& request, const DescribeUserBuyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserBuyStatusOutcomeCallable describeUserBuyStatusCallable(const Model::DescribeUserBuyStatusRequest& request) const;
			DescribeWafScopeOutcome describeWafScope(const Model::DescribeWafScopeRequest &request)const;
			void describeWafScopeAsync(const Model::DescribeWafScopeRequest& request, const DescribeWafScopeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWafScopeOutcomeCallable describeWafScopeCallable(const Model::DescribeWafScopeRequest& request) const;
			DescribeWhiteRuleListOutcome describeWhiteRuleList(const Model::DescribeWhiteRuleListRequest &request)const;
			void describeWhiteRuleListAsync(const Model::DescribeWhiteRuleListRequest& request, const DescribeWhiteRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWhiteRuleListOutcomeCallable describeWhiteRuleListCallable(const Model::DescribeWhiteRuleListRequest& request) const;
			EnableAccessForCloudSiemOutcome enableAccessForCloudSiem(const Model::EnableAccessForCloudSiemRequest &request)const;
			void enableAccessForCloudSiemAsync(const Model::EnableAccessForCloudSiemRequest& request, const EnableAccessForCloudSiemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAccessForCloudSiemOutcomeCallable enableAccessForCloudSiemCallable(const Model::EnableAccessForCloudSiemRequest& request) const;
			EnableServiceForCloudSiemOutcome enableServiceForCloudSiem(const Model::EnableServiceForCloudSiemRequest &request)const;
			void enableServiceForCloudSiemAsync(const Model::EnableServiceForCloudSiemRequest& request, const EnableServiceForCloudSiemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableServiceForCloudSiemOutcomeCallable enableServiceForCloudSiemCallable(const Model::EnableServiceForCloudSiemRequest& request) const;
			GetCapacityOutcome getCapacity(const Model::GetCapacityRequest &request)const;
			void getCapacityAsync(const Model::GetCapacityRequest& request, const GetCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCapacityOutcomeCallable getCapacityCallable(const Model::GetCapacityRequest& request) const;
			GetStorageOutcome getStorage(const Model::GetStorageRequest &request)const;
			void getStorageAsync(const Model::GetStorageRequest& request, const GetStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStorageOutcomeCallable getStorageCallable(const Model::GetStorageRequest& request) const;
			ListAccountAccessIdOutcome listAccountAccessId(const Model::ListAccountAccessIdRequest &request)const;
			void listAccountAccessIdAsync(const Model::ListAccountAccessIdRequest& request, const ListAccountAccessIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccountAccessIdOutcomeCallable listAccountAccessIdCallable(const Model::ListAccountAccessIdRequest& request) const;
			ListAccountsByLogOutcome listAccountsByLog(const Model::ListAccountsByLogRequest &request)const;
			void listAccountsByLogAsync(const Model::ListAccountsByLogRequest& request, const ListAccountsByLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccountsByLogOutcomeCallable listAccountsByLogCallable(const Model::ListAccountsByLogRequest& request) const;
			ListAllProdsOutcome listAllProds(const Model::ListAllProdsRequest &request)const;
			void listAllProdsAsync(const Model::ListAllProdsRequest& request, const ListAllProdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllProdsOutcomeCallable listAllProdsCallable(const Model::ListAllProdsRequest& request) const;
			ListAutomateResponseConfigsOutcome listAutomateResponseConfigs(const Model::ListAutomateResponseConfigsRequest &request)const;
			void listAutomateResponseConfigsAsync(const Model::ListAutomateResponseConfigsRequest& request, const ListAutomateResponseConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAutomateResponseConfigsOutcomeCallable listAutomateResponseConfigsCallable(const Model::ListAutomateResponseConfigsRequest& request) const;
			ListBindAccountOutcome listBindAccount(const Model::ListBindAccountRequest &request)const;
			void listBindAccountAsync(const Model::ListBindAccountRequest& request, const ListBindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBindAccountOutcomeCallable listBindAccountCallable(const Model::ListBindAccountRequest& request) const;
			ListBindDataSourcesOutcome listBindDataSources(const Model::ListBindDataSourcesRequest &request)const;
			void listBindDataSourcesAsync(const Model::ListBindDataSourcesRequest& request, const ListBindDataSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBindDataSourcesOutcomeCallable listBindDataSourcesCallable(const Model::ListBindDataSourcesRequest& request) const;
			ListCloudSiemCustomizeRulesOutcome listCloudSiemCustomizeRules(const Model::ListCloudSiemCustomizeRulesRequest &request)const;
			void listCloudSiemCustomizeRulesAsync(const Model::ListCloudSiemCustomizeRulesRequest& request, const ListCloudSiemCustomizeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCloudSiemCustomizeRulesOutcomeCallable listCloudSiemCustomizeRulesCallable(const Model::ListCloudSiemCustomizeRulesRequest& request) const;
			ListCloudSiemPredefinedRulesOutcome listCloudSiemPredefinedRules(const Model::ListCloudSiemPredefinedRulesRequest &request)const;
			void listCloudSiemPredefinedRulesAsync(const Model::ListCloudSiemPredefinedRulesRequest& request, const ListCloudSiemPredefinedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCloudSiemPredefinedRulesOutcomeCallable listCloudSiemPredefinedRulesCallable(const Model::ListCloudSiemPredefinedRulesRequest& request) const;
			ListCustomizeRuleTestResultOutcome listCustomizeRuleTestResult(const Model::ListCustomizeRuleTestResultRequest &request)const;
			void listCustomizeRuleTestResultAsync(const Model::ListCustomizeRuleTestResultRequest& request, const ListCustomizeRuleTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomizeRuleTestResultOutcomeCallable listCustomizeRuleTestResultCallable(const Model::ListCustomizeRuleTestResultRequest& request) const;
			ListDataSourceLogsOutcome listDataSourceLogs(const Model::ListDataSourceLogsRequest &request)const;
			void listDataSourceLogsAsync(const Model::ListDataSourceLogsRequest& request, const ListDataSourceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceLogsOutcomeCallable listDataSourceLogsCallable(const Model::ListDataSourceLogsRequest& request) const;
			ListDataSourceTypesOutcome listDataSourceTypes(const Model::ListDataSourceTypesRequest &request)const;
			void listDataSourceTypesAsync(const Model::ListDataSourceTypesRequest& request, const ListDataSourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceTypesOutcomeCallable listDataSourceTypesCallable(const Model::ListDataSourceTypesRequest& request) const;
			ListDeliveryOutcome listDelivery(const Model::ListDeliveryRequest &request)const;
			void listDeliveryAsync(const Model::ListDeliveryRequest& request, const ListDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeliveryOutcomeCallable listDeliveryCallable(const Model::ListDeliveryRequest& request) const;
			ListDisposeStrategyOutcome listDisposeStrategy(const Model::ListDisposeStrategyRequest &request)const;
			void listDisposeStrategyAsync(const Model::ListDisposeStrategyRequest& request, const ListDisposeStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDisposeStrategyOutcomeCallable listDisposeStrategyCallable(const Model::ListDisposeStrategyRequest& request) const;
			ListEntitiesOutcome listEntities(const Model::ListEntitiesRequest &request)const;
			void listEntitiesAsync(const Model::ListEntitiesRequest& request, const ListEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEntitiesOutcomeCallable listEntitiesCallable(const Model::ListEntitiesRequest& request) const;
			ListImportedLogsByProdOutcome listImportedLogsByProd(const Model::ListImportedLogsByProdRequest &request)const;
			void listImportedLogsByProdAsync(const Model::ListImportedLogsByProdRequest& request, const ListImportedLogsByProdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImportedLogsByProdOutcomeCallable listImportedLogsByProdCallable(const Model::ListImportedLogsByProdRequest& request) const;
			ListProjectLogStoresOutcome listProjectLogStores(const Model::ListProjectLogStoresRequest &request)const;
			void listProjectLogStoresAsync(const Model::ListProjectLogStoresRequest& request, const ListProjectLogStoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectLogStoresOutcomeCallable listProjectLogStoresCallable(const Model::ListProjectLogStoresRequest& request) const;
			ListRdUsersOutcome listRdUsers(const Model::ListRdUsersRequest &request)const;
			void listRdUsersAsync(const Model::ListRdUsersRequest& request, const ListRdUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRdUsersOutcomeCallable listRdUsersCallable(const Model::ListRdUsersRequest& request) const;
			ModifyBindAccountOutcome modifyBindAccount(const Model::ModifyBindAccountRequest &request)const;
			void modifyBindAccountAsync(const Model::ModifyBindAccountRequest& request, const ModifyBindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBindAccountOutcomeCallable modifyBindAccountCallable(const Model::ModifyBindAccountRequest& request) const;
			ModifyDataSourceOutcome modifyDataSource(const Model::ModifyDataSourceRequest &request)const;
			void modifyDataSourceAsync(const Model::ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDataSourceOutcomeCallable modifyDataSourceCallable(const Model::ModifyDataSourceRequest& request) const;
			ModifyDataSourceLogOutcome modifyDataSourceLog(const Model::ModifyDataSourceLogRequest &request)const;
			void modifyDataSourceLogAsync(const Model::ModifyDataSourceLogRequest& request, const ModifyDataSourceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDataSourceLogOutcomeCallable modifyDataSourceLogCallable(const Model::ModifyDataSourceLogRequest& request) const;
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
			SetStorageOutcome setStorage(const Model::SetStorageRequest &request)const;
			void setStorageAsync(const Model::SetStorageRequest& request, const SetStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetStorageOutcomeCallable setStorageCallable(const Model::SetStorageRequest& request) const;
			SubmitImportLogTasksOutcome submitImportLogTasks(const Model::SubmitImportLogTasksRequest &request)const;
			void submitImportLogTasksAsync(const Model::SubmitImportLogTasksRequest& request, const SubmitImportLogTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitImportLogTasksOutcomeCallable submitImportLogTasksCallable(const Model::SubmitImportLogTasksRequest& request) const;
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
