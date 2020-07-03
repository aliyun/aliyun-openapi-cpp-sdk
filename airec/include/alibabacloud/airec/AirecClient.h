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

#ifndef ALIBABACLOUD_AIREC_AIRECCLIENT_H_
#define ALIBABACLOUD_AIREC_AIRECCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "AirecExport.h"
#include "model/AttachDatasetRequest.h"
#include "model/AttachDatasetResult.h"
#include "model/CreateDiversifyRequest.h"
#include "model/CreateDiversifyResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateMixRequest.h"
#include "model/CreateMixResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/CreateSceneRequest.h"
#include "model/CreateSceneResult.h"
#include "model/DeleteDataSetRequest.h"
#include "model/DeleteDataSetResult.h"
#include "model/DeleteDiversifyRequest.h"
#include "model/DeleteDiversifyResult.h"
#include "model/DeleteMixRequest.h"
#include "model/DeleteMixResult.h"
#include "model/DeleteSceneRequest.h"
#include "model/DeleteSceneResult.h"
#include "model/DescribeDataSetMessageRequest.h"
#include "model/DescribeDataSetMessageResult.h"
#include "model/DescribeDataSetReportRequest.h"
#include "model/DescribeDataSetReportResult.h"
#include "model/DescribeDiversifyRequest.h"
#include "model/DescribeDiversifyResult.h"
#include "model/DescribeExposureSettingsRequest.h"
#include "model/DescribeExposureSettingsResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeMixRequest.h"
#include "model/DescribeMixResult.h"
#include "model/DescribeQuotaRequest.h"
#include "model/DescribeQuotaResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRuleRequest.h"
#include "model/DescribeRuleResult.h"
#include "model/DescribeSceneRequest.h"
#include "model/DescribeSceneResult.h"
#include "model/DescribeSceneThroughputRequest.h"
#include "model/DescribeSceneThroughputResult.h"
#include "model/DescribeSyncReportDetailRequest.h"
#include "model/DescribeSyncReportDetailResult.h"
#include "model/DescribeSyncReportOutliersRequest.h"
#include "model/DescribeSyncReportOutliersResult.h"
#include "model/DescribeUserMetricsRequest.h"
#include "model/DescribeUserMetricsResult.h"
#include "model/DowngradeInstanceRequest.h"
#include "model/DowngradeInstanceResult.h"
#include "model/ListDashboardRequest.h"
#include "model/ListDashboardResult.h"
#include "model/ListDashboardDetailsRequest.h"
#include "model/ListDashboardDetailsResult.h"
#include "model/ListDashboardDetailsFlowsRequest.h"
#include "model/ListDashboardDetailsFlowsResult.h"
#include "model/ListDashboardMetricsRequest.h"
#include "model/ListDashboardMetricsResult.h"
#include "model/ListDashboardMetricsFlowsRequest.h"
#include "model/ListDashboardMetricsFlowsResult.h"
#include "model/ListDashboardParametersRequest.h"
#include "model/ListDashboardParametersResult.h"
#include "model/ListDashboardUidRequest.h"
#include "model/ListDashboardUidResult.h"
#include "model/ListDataSetRequest.h"
#include "model/ListDataSetResult.h"
#include "model/ListDataSourceRequest.h"
#include "model/ListDataSourceResult.h"
#include "model/ListDiversifyRequest.h"
#include "model/ListDiversifyResult.h"
#include "model/ListInstanceRequest.h"
#include "model/ListInstanceResult.h"
#include "model/ListInstanceTaskRequest.h"
#include "model/ListInstanceTaskResult.h"
#include "model/ListMixRequest.h"
#include "model/ListMixResult.h"
#include "model/ListRuleConditionsRequest.h"
#include "model/ListRuleConditionsResult.h"
#include "model/ListRuleTasksRequest.h"
#include "model/ListRuleTasksResult.h"
#include "model/ListRulesRequest.h"
#include "model/ListRulesResult.h"
#include "model/ListSceneItemsRequest.h"
#include "model/ListSceneItemsResult.h"
#include "model/ListScenesRequest.h"
#include "model/ListScenesResult.h"
#include "model/ListUmengAppkeysRequest.h"
#include "model/ListUmengAppkeysResult.h"
#include "model/ModifyDataSourceRequest.h"
#include "model/ModifyDataSourceResult.h"
#include "model/ModifyDiversifyRequest.h"
#include "model/ModifyDiversifyResult.h"
#include "model/ModifyExposureSettingsRequest.h"
#include "model/ModifyExposureSettingsResult.h"
#include "model/ModifyInstanceRequest.h"
#include "model/ModifyInstanceResult.h"
#include "model/ModifyMixRequest.h"
#include "model/ModifyMixResult.h"
#include "model/ModifyRuleRequest.h"
#include "model/ModifyRuleResult.h"
#include "model/ModifySceneRequest.h"
#include "model/ModifySceneResult.h"
#include "model/PublishRuleRequest.h"
#include "model/PublishRuleResult.h"
#include "model/PushDocumentRequest.h"
#include "model/PushDocumentResult.h"
#include "model/PushInterventionRequest.h"
#include "model/PushInterventionResult.h"
#include "model/QueryDataMessageRequest.h"
#include "model/QueryDataMessageResult.h"
#include "model/QueryExceptionHistoryRequest.h"
#include "model/QueryExceptionHistoryResult.h"
#include "model/QueryRawDataRequest.h"
#include "model/QueryRawDataResult.h"
#include "model/QuerySingleAggregationReportRequest.h"
#include "model/QuerySingleAggregationReportResult.h"
#include "model/QuerySingleReportRequest.h"
#include "model/QuerySingleReportResult.h"
#include "model/QuerySyncReportAggregationRequest.h"
#include "model/QuerySyncReportAggregationResult.h"
#include "model/RecommendRequest.h"
#include "model/RecommendResult.h"
#include "model/RunInstanceRequest.h"
#include "model/RunInstanceResult.h"
#include "model/StopDataSetRequest.h"
#include "model/StopDataSetResult.h"
#include "model/UpgradeInstanceRequest.h"
#include "model/UpgradeInstanceResult.h"
#include "model/ValidateInstanceRequest.h"
#include "model/ValidateInstanceResult.h"


namespace AlibabaCloud
{
	namespace Airec
	{
		class ALIBABACLOUD_AIREC_EXPORT AirecClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachDatasetResult> AttachDatasetOutcome;
			typedef std::future<AttachDatasetOutcome> AttachDatasetOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::AttachDatasetRequest&, const AttachDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDatasetAsyncHandler;
			typedef Outcome<Error, Model::CreateDiversifyResult> CreateDiversifyOutcome;
			typedef std::future<CreateDiversifyOutcome> CreateDiversifyOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CreateDiversifyRequest&, const CreateDiversifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiversifyAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateMixResult> CreateMixOutcome;
			typedef std::future<CreateMixOutcome> CreateMixOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CreateMixRequest&, const CreateMixOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMixAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleResult> CreateRuleOutcome;
			typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CreateRuleRequest&, const CreateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateSceneResult> CreateSceneOutcome;
			typedef std::future<CreateSceneOutcome> CreateSceneOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CreateSceneRequest&, const CreateSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSceneAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataSetResult> DeleteDataSetOutcome;
			typedef std::future<DeleteDataSetOutcome> DeleteDataSetOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DeleteDataSetRequest&, const DeleteDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteDiversifyResult> DeleteDiversifyOutcome;
			typedef std::future<DeleteDiversifyOutcome> DeleteDiversifyOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DeleteDiversifyRequest&, const DeleteDiversifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDiversifyAsyncHandler;
			typedef Outcome<Error, Model::DeleteMixResult> DeleteMixOutcome;
			typedef std::future<DeleteMixOutcome> DeleteMixOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DeleteMixRequest&, const DeleteMixOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMixAsyncHandler;
			typedef Outcome<Error, Model::DeleteSceneResult> DeleteSceneOutcome;
			typedef std::future<DeleteSceneOutcome> DeleteSceneOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DeleteSceneRequest&, const DeleteSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSceneAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSetMessageResult> DescribeDataSetMessageOutcome;
			typedef std::future<DescribeDataSetMessageOutcome> DescribeDataSetMessageOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeDataSetMessageRequest&, const DescribeDataSetMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSetMessageAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSetReportResult> DescribeDataSetReportOutcome;
			typedef std::future<DescribeDataSetReportOutcome> DescribeDataSetReportOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeDataSetReportRequest&, const DescribeDataSetReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSetReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeDiversifyResult> DescribeDiversifyOutcome;
			typedef std::future<DescribeDiversifyOutcome> DescribeDiversifyOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeDiversifyRequest&, const DescribeDiversifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiversifyAsyncHandler;
			typedef Outcome<Error, Model::DescribeExposureSettingsResult> DescribeExposureSettingsOutcome;
			typedef std::future<DescribeExposureSettingsOutcome> DescribeExposureSettingsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeExposureSettingsRequest&, const DescribeExposureSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposureSettingsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeMixResult> DescribeMixOutcome;
			typedef std::future<DescribeMixOutcome> DescribeMixOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeMixRequest&, const DescribeMixOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMixAsyncHandler;
			typedef Outcome<Error, Model::DescribeQuotaResult> DescribeQuotaOutcome;
			typedef std::future<DescribeQuotaOutcome> DescribeQuotaOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeQuotaRequest&, const DescribeQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRuleResult> DescribeRuleOutcome;
			typedef std::future<DescribeRuleOutcome> DescribeRuleOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeRuleRequest&, const DescribeRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeSceneResult> DescribeSceneOutcome;
			typedef std::future<DescribeSceneOutcome> DescribeSceneOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeSceneRequest&, const DescribeSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSceneAsyncHandler;
			typedef Outcome<Error, Model::DescribeSceneThroughputResult> DescribeSceneThroughputOutcome;
			typedef std::future<DescribeSceneThroughputOutcome> DescribeSceneThroughputOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeSceneThroughputRequest&, const DescribeSceneThroughputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSceneThroughputAsyncHandler;
			typedef Outcome<Error, Model::DescribeSyncReportDetailResult> DescribeSyncReportDetailOutcome;
			typedef std::future<DescribeSyncReportDetailOutcome> DescribeSyncReportDetailOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeSyncReportDetailRequest&, const DescribeSyncReportDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncReportDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeSyncReportOutliersResult> DescribeSyncReportOutliersOutcome;
			typedef std::future<DescribeSyncReportOutliersOutcome> DescribeSyncReportOutliersOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeSyncReportOutliersRequest&, const DescribeSyncReportOutliersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncReportOutliersAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserMetricsResult> DescribeUserMetricsOutcome;
			typedef std::future<DescribeUserMetricsOutcome> DescribeUserMetricsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeUserMetricsRequest&, const DescribeUserMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserMetricsAsyncHandler;
			typedef Outcome<Error, Model::DowngradeInstanceResult> DowngradeInstanceOutcome;
			typedef std::future<DowngradeInstanceOutcome> DowngradeInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DowngradeInstanceRequest&, const DowngradeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DowngradeInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListDashboardResult> ListDashboardOutcome;
			typedef std::future<ListDashboardOutcome> ListDashboardOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDashboardRequest&, const ListDashboardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDashboardAsyncHandler;
			typedef Outcome<Error, Model::ListDashboardDetailsResult> ListDashboardDetailsOutcome;
			typedef std::future<ListDashboardDetailsOutcome> ListDashboardDetailsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDashboardDetailsRequest&, const ListDashboardDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDashboardDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListDashboardDetailsFlowsResult> ListDashboardDetailsFlowsOutcome;
			typedef std::future<ListDashboardDetailsFlowsOutcome> ListDashboardDetailsFlowsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDashboardDetailsFlowsRequest&, const ListDashboardDetailsFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDashboardDetailsFlowsAsyncHandler;
			typedef Outcome<Error, Model::ListDashboardMetricsResult> ListDashboardMetricsOutcome;
			typedef std::future<ListDashboardMetricsOutcome> ListDashboardMetricsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDashboardMetricsRequest&, const ListDashboardMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDashboardMetricsAsyncHandler;
			typedef Outcome<Error, Model::ListDashboardMetricsFlowsResult> ListDashboardMetricsFlowsOutcome;
			typedef std::future<ListDashboardMetricsFlowsOutcome> ListDashboardMetricsFlowsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDashboardMetricsFlowsRequest&, const ListDashboardMetricsFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDashboardMetricsFlowsAsyncHandler;
			typedef Outcome<Error, Model::ListDashboardParametersResult> ListDashboardParametersOutcome;
			typedef std::future<ListDashboardParametersOutcome> ListDashboardParametersOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDashboardParametersRequest&, const ListDashboardParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDashboardParametersAsyncHandler;
			typedef Outcome<Error, Model::ListDashboardUidResult> ListDashboardUidOutcome;
			typedef std::future<ListDashboardUidOutcome> ListDashboardUidOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDashboardUidRequest&, const ListDashboardUidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDashboardUidAsyncHandler;
			typedef Outcome<Error, Model::ListDataSetResult> ListDataSetOutcome;
			typedef std::future<ListDataSetOutcome> ListDataSetOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDataSetRequest&, const ListDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSetAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceResult> ListDataSourceOutcome;
			typedef std::future<ListDataSourceOutcome> ListDataSourceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDataSourceRequest&, const ListDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ListDiversifyResult> ListDiversifyOutcome;
			typedef std::future<ListDiversifyOutcome> ListDiversifyOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDiversifyRequest&, const ListDiversifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDiversifyAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceResult> ListInstanceOutcome;
			typedef std::future<ListInstanceOutcome> ListInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListInstanceRequest&, const ListInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceTaskResult> ListInstanceTaskOutcome;
			typedef std::future<ListInstanceTaskOutcome> ListInstanceTaskOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListInstanceTaskRequest&, const ListInstanceTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceTaskAsyncHandler;
			typedef Outcome<Error, Model::ListMixResult> ListMixOutcome;
			typedef std::future<ListMixOutcome> ListMixOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListMixRequest&, const ListMixOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMixAsyncHandler;
			typedef Outcome<Error, Model::ListRuleConditionsResult> ListRuleConditionsOutcome;
			typedef std::future<ListRuleConditionsOutcome> ListRuleConditionsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListRuleConditionsRequest&, const ListRuleConditionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRuleConditionsAsyncHandler;
			typedef Outcome<Error, Model::ListRuleTasksResult> ListRuleTasksOutcome;
			typedef std::future<ListRuleTasksOutcome> ListRuleTasksOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListRuleTasksRequest&, const ListRuleTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRuleTasksAsyncHandler;
			typedef Outcome<Error, Model::ListRulesResult> ListRulesOutcome;
			typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListRulesRequest&, const ListRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRulesAsyncHandler;
			typedef Outcome<Error, Model::ListSceneItemsResult> ListSceneItemsOutcome;
			typedef std::future<ListSceneItemsOutcome> ListSceneItemsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListSceneItemsRequest&, const ListSceneItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSceneItemsAsyncHandler;
			typedef Outcome<Error, Model::ListScenesResult> ListScenesOutcome;
			typedef std::future<ListScenesOutcome> ListScenesOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListScenesRequest&, const ListScenesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScenesAsyncHandler;
			typedef Outcome<Error, Model::ListUmengAppkeysResult> ListUmengAppkeysOutcome;
			typedef std::future<ListUmengAppkeysOutcome> ListUmengAppkeysOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListUmengAppkeysRequest&, const ListUmengAppkeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUmengAppkeysAsyncHandler;
			typedef Outcome<Error, Model::ModifyDataSourceResult> ModifyDataSourceOutcome;
			typedef std::future<ModifyDataSourceOutcome> ModifyDataSourceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyDataSourceRequest&, const ModifyDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ModifyDiversifyResult> ModifyDiversifyOutcome;
			typedef std::future<ModifyDiversifyOutcome> ModifyDiversifyOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyDiversifyRequest&, const ModifyDiversifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiversifyAsyncHandler;
			typedef Outcome<Error, Model::ModifyExposureSettingsResult> ModifyExposureSettingsOutcome;
			typedef std::future<ModifyExposureSettingsOutcome> ModifyExposureSettingsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyExposureSettingsRequest&, const ModifyExposureSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExposureSettingsAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceResult> ModifyInstanceOutcome;
			typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyInstanceRequest&, const ModifyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyMixResult> ModifyMixOutcome;
			typedef std::future<ModifyMixOutcome> ModifyMixOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyMixRequest&, const ModifyMixOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMixAsyncHandler;
			typedef Outcome<Error, Model::ModifyRuleResult> ModifyRuleOutcome;
			typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyRuleRequest&, const ModifyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifySceneResult> ModifySceneOutcome;
			typedef std::future<ModifySceneOutcome> ModifySceneOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifySceneRequest&, const ModifySceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySceneAsyncHandler;
			typedef Outcome<Error, Model::PublishRuleResult> PublishRuleOutcome;
			typedef std::future<PublishRuleOutcome> PublishRuleOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::PublishRuleRequest&, const PublishRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishRuleAsyncHandler;
			typedef Outcome<Error, Model::PushDocumentResult> PushDocumentOutcome;
			typedef std::future<PushDocumentOutcome> PushDocumentOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::PushDocumentRequest&, const PushDocumentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushDocumentAsyncHandler;
			typedef Outcome<Error, Model::PushInterventionResult> PushInterventionOutcome;
			typedef std::future<PushInterventionOutcome> PushInterventionOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::PushInterventionRequest&, const PushInterventionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushInterventionAsyncHandler;
			typedef Outcome<Error, Model::QueryDataMessageResult> QueryDataMessageOutcome;
			typedef std::future<QueryDataMessageOutcome> QueryDataMessageOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::QueryDataMessageRequest&, const QueryDataMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDataMessageAsyncHandler;
			typedef Outcome<Error, Model::QueryExceptionHistoryResult> QueryExceptionHistoryOutcome;
			typedef std::future<QueryExceptionHistoryOutcome> QueryExceptionHistoryOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::QueryExceptionHistoryRequest&, const QueryExceptionHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryExceptionHistoryAsyncHandler;
			typedef Outcome<Error, Model::QueryRawDataResult> QueryRawDataOutcome;
			typedef std::future<QueryRawDataOutcome> QueryRawDataOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::QueryRawDataRequest&, const QueryRawDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRawDataAsyncHandler;
			typedef Outcome<Error, Model::QuerySingleAggregationReportResult> QuerySingleAggregationReportOutcome;
			typedef std::future<QuerySingleAggregationReportOutcome> QuerySingleAggregationReportOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::QuerySingleAggregationReportRequest&, const QuerySingleAggregationReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySingleAggregationReportAsyncHandler;
			typedef Outcome<Error, Model::QuerySingleReportResult> QuerySingleReportOutcome;
			typedef std::future<QuerySingleReportOutcome> QuerySingleReportOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::QuerySingleReportRequest&, const QuerySingleReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySingleReportAsyncHandler;
			typedef Outcome<Error, Model::QuerySyncReportAggregationResult> QuerySyncReportAggregationOutcome;
			typedef std::future<QuerySyncReportAggregationOutcome> QuerySyncReportAggregationOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::QuerySyncReportAggregationRequest&, const QuerySyncReportAggregationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySyncReportAggregationAsyncHandler;
			typedef Outcome<Error, Model::RecommendResult> RecommendOutcome;
			typedef std::future<RecommendOutcome> RecommendOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::RecommendRequest&, const RecommendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecommendAsyncHandler;
			typedef Outcome<Error, Model::RunInstanceResult> RunInstanceOutcome;
			typedef std::future<RunInstanceOutcome> RunInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::RunInstanceRequest&, const RunInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopDataSetResult> StopDataSetOutcome;
			typedef std::future<StopDataSetOutcome> StopDataSetOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::StopDataSetRequest&, const StopDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDataSetAsyncHandler;
			typedef Outcome<Error, Model::UpgradeInstanceResult> UpgradeInstanceOutcome;
			typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::UpgradeInstanceRequest&, const UpgradeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;
			typedef Outcome<Error, Model::ValidateInstanceResult> ValidateInstanceOutcome;
			typedef std::future<ValidateInstanceOutcome> ValidateInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ValidateInstanceRequest&, const ValidateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateInstanceAsyncHandler;

			AirecClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AirecClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AirecClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AirecClient();
			AttachDatasetOutcome attachDataset(const Model::AttachDatasetRequest &request)const;
			void attachDatasetAsync(const Model::AttachDatasetRequest& request, const AttachDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDatasetOutcomeCallable attachDatasetCallable(const Model::AttachDatasetRequest& request) const;
			CreateDiversifyOutcome createDiversify(const Model::CreateDiversifyRequest &request)const;
			void createDiversifyAsync(const Model::CreateDiversifyRequest& request, const CreateDiversifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDiversifyOutcomeCallable createDiversifyCallable(const Model::CreateDiversifyRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateMixOutcome createMix(const Model::CreateMixRequest &request)const;
			void createMixAsync(const Model::CreateMixRequest& request, const CreateMixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMixOutcomeCallable createMixCallable(const Model::CreateMixRequest& request) const;
			CreateRuleOutcome createRule(const Model::CreateRuleRequest &request)const;
			void createRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleOutcomeCallable createRuleCallable(const Model::CreateRuleRequest& request) const;
			CreateSceneOutcome createScene(const Model::CreateSceneRequest &request)const;
			void createSceneAsync(const Model::CreateSceneRequest& request, const CreateSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSceneOutcomeCallable createSceneCallable(const Model::CreateSceneRequest& request) const;
			DeleteDataSetOutcome deleteDataSet(const Model::DeleteDataSetRequest &request)const;
			void deleteDataSetAsync(const Model::DeleteDataSetRequest& request, const DeleteDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataSetOutcomeCallable deleteDataSetCallable(const Model::DeleteDataSetRequest& request) const;
			DeleteDiversifyOutcome deleteDiversify(const Model::DeleteDiversifyRequest &request)const;
			void deleteDiversifyAsync(const Model::DeleteDiversifyRequest& request, const DeleteDiversifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDiversifyOutcomeCallable deleteDiversifyCallable(const Model::DeleteDiversifyRequest& request) const;
			DeleteMixOutcome deleteMix(const Model::DeleteMixRequest &request)const;
			void deleteMixAsync(const Model::DeleteMixRequest& request, const DeleteMixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMixOutcomeCallable deleteMixCallable(const Model::DeleteMixRequest& request) const;
			DeleteSceneOutcome deleteScene(const Model::DeleteSceneRequest &request)const;
			void deleteSceneAsync(const Model::DeleteSceneRequest& request, const DeleteSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSceneOutcomeCallable deleteSceneCallable(const Model::DeleteSceneRequest& request) const;
			DescribeDataSetMessageOutcome describeDataSetMessage(const Model::DescribeDataSetMessageRequest &request)const;
			void describeDataSetMessageAsync(const Model::DescribeDataSetMessageRequest& request, const DescribeDataSetMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSetMessageOutcomeCallable describeDataSetMessageCallable(const Model::DescribeDataSetMessageRequest& request) const;
			DescribeDataSetReportOutcome describeDataSetReport(const Model::DescribeDataSetReportRequest &request)const;
			void describeDataSetReportAsync(const Model::DescribeDataSetReportRequest& request, const DescribeDataSetReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSetReportOutcomeCallable describeDataSetReportCallable(const Model::DescribeDataSetReportRequest& request) const;
			DescribeDiversifyOutcome describeDiversify(const Model::DescribeDiversifyRequest &request)const;
			void describeDiversifyAsync(const Model::DescribeDiversifyRequest& request, const DescribeDiversifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDiversifyOutcomeCallable describeDiversifyCallable(const Model::DescribeDiversifyRequest& request) const;
			DescribeExposureSettingsOutcome describeExposureSettings(const Model::DescribeExposureSettingsRequest &request)const;
			void describeExposureSettingsAsync(const Model::DescribeExposureSettingsRequest& request, const DescribeExposureSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExposureSettingsOutcomeCallable describeExposureSettingsCallable(const Model::DescribeExposureSettingsRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeMixOutcome describeMix(const Model::DescribeMixRequest &request)const;
			void describeMixAsync(const Model::DescribeMixRequest& request, const DescribeMixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMixOutcomeCallable describeMixCallable(const Model::DescribeMixRequest& request) const;
			DescribeQuotaOutcome describeQuota(const Model::DescribeQuotaRequest &request)const;
			void describeQuotaAsync(const Model::DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQuotaOutcomeCallable describeQuotaCallable(const Model::DescribeQuotaRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRuleOutcome describeRule(const Model::DescribeRuleRequest &request)const;
			void describeRuleAsync(const Model::DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRuleOutcomeCallable describeRuleCallable(const Model::DescribeRuleRequest& request) const;
			DescribeSceneOutcome describeScene(const Model::DescribeSceneRequest &request)const;
			void describeSceneAsync(const Model::DescribeSceneRequest& request, const DescribeSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSceneOutcomeCallable describeSceneCallable(const Model::DescribeSceneRequest& request) const;
			DescribeSceneThroughputOutcome describeSceneThroughput(const Model::DescribeSceneThroughputRequest &request)const;
			void describeSceneThroughputAsync(const Model::DescribeSceneThroughputRequest& request, const DescribeSceneThroughputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSceneThroughputOutcomeCallable describeSceneThroughputCallable(const Model::DescribeSceneThroughputRequest& request) const;
			DescribeSyncReportDetailOutcome describeSyncReportDetail(const Model::DescribeSyncReportDetailRequest &request)const;
			void describeSyncReportDetailAsync(const Model::DescribeSyncReportDetailRequest& request, const DescribeSyncReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSyncReportDetailOutcomeCallable describeSyncReportDetailCallable(const Model::DescribeSyncReportDetailRequest& request) const;
			DescribeSyncReportOutliersOutcome describeSyncReportOutliers(const Model::DescribeSyncReportOutliersRequest &request)const;
			void describeSyncReportOutliersAsync(const Model::DescribeSyncReportOutliersRequest& request, const DescribeSyncReportOutliersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSyncReportOutliersOutcomeCallable describeSyncReportOutliersCallable(const Model::DescribeSyncReportOutliersRequest& request) const;
			DescribeUserMetricsOutcome describeUserMetrics(const Model::DescribeUserMetricsRequest &request)const;
			void describeUserMetricsAsync(const Model::DescribeUserMetricsRequest& request, const DescribeUserMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserMetricsOutcomeCallable describeUserMetricsCallable(const Model::DescribeUserMetricsRequest& request) const;
			DowngradeInstanceOutcome downgradeInstance(const Model::DowngradeInstanceRequest &request)const;
			void downgradeInstanceAsync(const Model::DowngradeInstanceRequest& request, const DowngradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DowngradeInstanceOutcomeCallable downgradeInstanceCallable(const Model::DowngradeInstanceRequest& request) const;
			ListDashboardOutcome listDashboard(const Model::ListDashboardRequest &request)const;
			void listDashboardAsync(const Model::ListDashboardRequest& request, const ListDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDashboardOutcomeCallable listDashboardCallable(const Model::ListDashboardRequest& request) const;
			ListDashboardDetailsOutcome listDashboardDetails(const Model::ListDashboardDetailsRequest &request)const;
			void listDashboardDetailsAsync(const Model::ListDashboardDetailsRequest& request, const ListDashboardDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDashboardDetailsOutcomeCallable listDashboardDetailsCallable(const Model::ListDashboardDetailsRequest& request) const;
			ListDashboardDetailsFlowsOutcome listDashboardDetailsFlows(const Model::ListDashboardDetailsFlowsRequest &request)const;
			void listDashboardDetailsFlowsAsync(const Model::ListDashboardDetailsFlowsRequest& request, const ListDashboardDetailsFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDashboardDetailsFlowsOutcomeCallable listDashboardDetailsFlowsCallable(const Model::ListDashboardDetailsFlowsRequest& request) const;
			ListDashboardMetricsOutcome listDashboardMetrics(const Model::ListDashboardMetricsRequest &request)const;
			void listDashboardMetricsAsync(const Model::ListDashboardMetricsRequest& request, const ListDashboardMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDashboardMetricsOutcomeCallable listDashboardMetricsCallable(const Model::ListDashboardMetricsRequest& request) const;
			ListDashboardMetricsFlowsOutcome listDashboardMetricsFlows(const Model::ListDashboardMetricsFlowsRequest &request)const;
			void listDashboardMetricsFlowsAsync(const Model::ListDashboardMetricsFlowsRequest& request, const ListDashboardMetricsFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDashboardMetricsFlowsOutcomeCallable listDashboardMetricsFlowsCallable(const Model::ListDashboardMetricsFlowsRequest& request) const;
			ListDashboardParametersOutcome listDashboardParameters(const Model::ListDashboardParametersRequest &request)const;
			void listDashboardParametersAsync(const Model::ListDashboardParametersRequest& request, const ListDashboardParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDashboardParametersOutcomeCallable listDashboardParametersCallable(const Model::ListDashboardParametersRequest& request) const;
			ListDashboardUidOutcome listDashboardUid(const Model::ListDashboardUidRequest &request)const;
			void listDashboardUidAsync(const Model::ListDashboardUidRequest& request, const ListDashboardUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDashboardUidOutcomeCallable listDashboardUidCallable(const Model::ListDashboardUidRequest& request) const;
			ListDataSetOutcome listDataSet(const Model::ListDataSetRequest &request)const;
			void listDataSetAsync(const Model::ListDataSetRequest& request, const ListDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSetOutcomeCallable listDataSetCallable(const Model::ListDataSetRequest& request) const;
			ListDataSourceOutcome listDataSource(const Model::ListDataSourceRequest &request)const;
			void listDataSourceAsync(const Model::ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceOutcomeCallable listDataSourceCallable(const Model::ListDataSourceRequest& request) const;
			ListDiversifyOutcome listDiversify(const Model::ListDiversifyRequest &request)const;
			void listDiversifyAsync(const Model::ListDiversifyRequest& request, const ListDiversifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDiversifyOutcomeCallable listDiversifyCallable(const Model::ListDiversifyRequest& request) const;
			ListInstanceOutcome listInstance(const Model::ListInstanceRequest &request)const;
			void listInstanceAsync(const Model::ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceOutcomeCallable listInstanceCallable(const Model::ListInstanceRequest& request) const;
			ListInstanceTaskOutcome listInstanceTask(const Model::ListInstanceTaskRequest &request)const;
			void listInstanceTaskAsync(const Model::ListInstanceTaskRequest& request, const ListInstanceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceTaskOutcomeCallable listInstanceTaskCallable(const Model::ListInstanceTaskRequest& request) const;
			ListMixOutcome listMix(const Model::ListMixRequest &request)const;
			void listMixAsync(const Model::ListMixRequest& request, const ListMixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMixOutcomeCallable listMixCallable(const Model::ListMixRequest& request) const;
			ListRuleConditionsOutcome listRuleConditions(const Model::ListRuleConditionsRequest &request)const;
			void listRuleConditionsAsync(const Model::ListRuleConditionsRequest& request, const ListRuleConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRuleConditionsOutcomeCallable listRuleConditionsCallable(const Model::ListRuleConditionsRequest& request) const;
			ListRuleTasksOutcome listRuleTasks(const Model::ListRuleTasksRequest &request)const;
			void listRuleTasksAsync(const Model::ListRuleTasksRequest& request, const ListRuleTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRuleTasksOutcomeCallable listRuleTasksCallable(const Model::ListRuleTasksRequest& request) const;
			ListRulesOutcome listRules(const Model::ListRulesRequest &request)const;
			void listRulesAsync(const Model::ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRulesOutcomeCallable listRulesCallable(const Model::ListRulesRequest& request) const;
			ListSceneItemsOutcome listSceneItems(const Model::ListSceneItemsRequest &request)const;
			void listSceneItemsAsync(const Model::ListSceneItemsRequest& request, const ListSceneItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSceneItemsOutcomeCallable listSceneItemsCallable(const Model::ListSceneItemsRequest& request) const;
			ListScenesOutcome listScenes(const Model::ListScenesRequest &request)const;
			void listScenesAsync(const Model::ListScenesRequest& request, const ListScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScenesOutcomeCallable listScenesCallable(const Model::ListScenesRequest& request) const;
			ListUmengAppkeysOutcome listUmengAppkeys(const Model::ListUmengAppkeysRequest &request)const;
			void listUmengAppkeysAsync(const Model::ListUmengAppkeysRequest& request, const ListUmengAppkeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUmengAppkeysOutcomeCallable listUmengAppkeysCallable(const Model::ListUmengAppkeysRequest& request) const;
			ModifyDataSourceOutcome modifyDataSource(const Model::ModifyDataSourceRequest &request)const;
			void modifyDataSourceAsync(const Model::ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDataSourceOutcomeCallable modifyDataSourceCallable(const Model::ModifyDataSourceRequest& request) const;
			ModifyDiversifyOutcome modifyDiversify(const Model::ModifyDiversifyRequest &request)const;
			void modifyDiversifyAsync(const Model::ModifyDiversifyRequest& request, const ModifyDiversifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDiversifyOutcomeCallable modifyDiversifyCallable(const Model::ModifyDiversifyRequest& request) const;
			ModifyExposureSettingsOutcome modifyExposureSettings(const Model::ModifyExposureSettingsRequest &request)const;
			void modifyExposureSettingsAsync(const Model::ModifyExposureSettingsRequest& request, const ModifyExposureSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExposureSettingsOutcomeCallable modifyExposureSettingsCallable(const Model::ModifyExposureSettingsRequest& request) const;
			ModifyInstanceOutcome modifyInstance(const Model::ModifyInstanceRequest &request)const;
			void modifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceOutcomeCallable modifyInstanceCallable(const Model::ModifyInstanceRequest& request) const;
			ModifyMixOutcome modifyMix(const Model::ModifyMixRequest &request)const;
			void modifyMixAsync(const Model::ModifyMixRequest& request, const ModifyMixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMixOutcomeCallable modifyMixCallable(const Model::ModifyMixRequest& request) const;
			ModifyRuleOutcome modifyRule(const Model::ModifyRuleRequest &request)const;
			void modifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRuleOutcomeCallable modifyRuleCallable(const Model::ModifyRuleRequest& request) const;
			ModifySceneOutcome modifyScene(const Model::ModifySceneRequest &request)const;
			void modifySceneAsync(const Model::ModifySceneRequest& request, const ModifySceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySceneOutcomeCallable modifySceneCallable(const Model::ModifySceneRequest& request) const;
			PublishRuleOutcome publishRule(const Model::PublishRuleRequest &request)const;
			void publishRuleAsync(const Model::PublishRuleRequest& request, const PublishRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishRuleOutcomeCallable publishRuleCallable(const Model::PublishRuleRequest& request) const;
			PushDocumentOutcome pushDocument(const Model::PushDocumentRequest &request)const;
			void pushDocumentAsync(const Model::PushDocumentRequest& request, const PushDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushDocumentOutcomeCallable pushDocumentCallable(const Model::PushDocumentRequest& request) const;
			PushInterventionOutcome pushIntervention(const Model::PushInterventionRequest &request)const;
			void pushInterventionAsync(const Model::PushInterventionRequest& request, const PushInterventionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushInterventionOutcomeCallable pushInterventionCallable(const Model::PushInterventionRequest& request) const;
			QueryDataMessageOutcome queryDataMessage(const Model::QueryDataMessageRequest &request)const;
			void queryDataMessageAsync(const Model::QueryDataMessageRequest& request, const QueryDataMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDataMessageOutcomeCallable queryDataMessageCallable(const Model::QueryDataMessageRequest& request) const;
			QueryExceptionHistoryOutcome queryExceptionHistory(const Model::QueryExceptionHistoryRequest &request)const;
			void queryExceptionHistoryAsync(const Model::QueryExceptionHistoryRequest& request, const QueryExceptionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryExceptionHistoryOutcomeCallable queryExceptionHistoryCallable(const Model::QueryExceptionHistoryRequest& request) const;
			QueryRawDataOutcome queryRawData(const Model::QueryRawDataRequest &request)const;
			void queryRawDataAsync(const Model::QueryRawDataRequest& request, const QueryRawDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRawDataOutcomeCallable queryRawDataCallable(const Model::QueryRawDataRequest& request) const;
			QuerySingleAggregationReportOutcome querySingleAggregationReport(const Model::QuerySingleAggregationReportRequest &request)const;
			void querySingleAggregationReportAsync(const Model::QuerySingleAggregationReportRequest& request, const QuerySingleAggregationReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySingleAggregationReportOutcomeCallable querySingleAggregationReportCallable(const Model::QuerySingleAggregationReportRequest& request) const;
			QuerySingleReportOutcome querySingleReport(const Model::QuerySingleReportRequest &request)const;
			void querySingleReportAsync(const Model::QuerySingleReportRequest& request, const QuerySingleReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySingleReportOutcomeCallable querySingleReportCallable(const Model::QuerySingleReportRequest& request) const;
			QuerySyncReportAggregationOutcome querySyncReportAggregation(const Model::QuerySyncReportAggregationRequest &request)const;
			void querySyncReportAggregationAsync(const Model::QuerySyncReportAggregationRequest& request, const QuerySyncReportAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySyncReportAggregationOutcomeCallable querySyncReportAggregationCallable(const Model::QuerySyncReportAggregationRequest& request) const;
			RecommendOutcome recommend(const Model::RecommendRequest &request)const;
			void recommendAsync(const Model::RecommendRequest& request, const RecommendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecommendOutcomeCallable recommendCallable(const Model::RecommendRequest& request) const;
			RunInstanceOutcome runInstance(const Model::RunInstanceRequest &request)const;
			void runInstanceAsync(const Model::RunInstanceRequest& request, const RunInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunInstanceOutcomeCallable runInstanceCallable(const Model::RunInstanceRequest& request) const;
			StopDataSetOutcome stopDataSet(const Model::StopDataSetRequest &request)const;
			void stopDataSetAsync(const Model::StopDataSetRequest& request, const StopDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDataSetOutcomeCallable stopDataSetCallable(const Model::StopDataSetRequest& request) const;
			UpgradeInstanceOutcome upgradeInstance(const Model::UpgradeInstanceRequest &request)const;
			void upgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeInstanceOutcomeCallable upgradeInstanceCallable(const Model::UpgradeInstanceRequest& request) const;
			ValidateInstanceOutcome validateInstance(const Model::ValidateInstanceRequest &request)const;
			void validateInstanceAsync(const Model::ValidateInstanceRequest& request, const ValidateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateInstanceOutcomeCallable validateInstanceCallable(const Model::ValidateInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AIREC_AIRECCLIENT_H_
