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
#include "model/AttachIndexVersionRequest.h"
#include "model/AttachIndexVersionResult.h"
#include "model/CheckRankingModelReachableRequest.h"
#include "model/CheckRankingModelReachableResult.h"
#include "model/CloneExperimentRequest.h"
#include "model/CloneExperimentResult.h"
#include "model/CreateFilteringAlgorithmRequest.h"
#include "model/CreateFilteringAlgorithmResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateRankingModelRequest.h"
#include "model/CreateRankingModelResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/CreateSceneRequest.h"
#include "model/CreateSceneResult.h"
#include "model/DecribeRankingModelRequest.h"
#include "model/DecribeRankingModelResult.h"
#include "model/DeleteDataSetRequest.h"
#include "model/DeleteDataSetResult.h"
#include "model/DeleteExperimentRequest.h"
#include "model/DeleteExperimentResult.h"
#include "model/DeleteFilteringAlgorithmRequest.h"
#include "model/DeleteFilteringAlgorithmResult.h"
#include "model/DeleteRankingModelRequest.h"
#include "model/DeleteRankingModelResult.h"
#include "model/DeleteSceneRequest.h"
#include "model/DeleteSceneResult.h"
#include "model/DescribeBaseExperimentRequest.h"
#include "model/DescribeBaseExperimentResult.h"
#include "model/DescribeDataSetMessageRequest.h"
#include "model/DescribeDataSetMessageResult.h"
#include "model/DescribeDefaultAlgorithmsRequest.h"
#include "model/DescribeDefaultAlgorithmsResult.h"
#include "model/DescribeExperimentRequest.h"
#include "model/DescribeExperimentResult.h"
#include "model/DescribeExperimentEnvRequest.h"
#include "model/DescribeExperimentEnvResult.h"
#include "model/DescribeExperimentEnvProgressRequest.h"
#include "model/DescribeExperimentEnvProgressResult.h"
#include "model/DescribeFilteringAlgorithmRequest.h"
#include "model/DescribeFilteringAlgorithmResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeLatestTaskRequest.h"
#include "model/DescribeLatestTaskResult.h"
#include "model/DescribeQuotaRequest.h"
#include "model/DescribeQuotaResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRuleRequest.h"
#include "model/DescribeRuleResult.h"
#include "model/DescribeSceneRequest.h"
#include "model/DescribeSceneResult.h"
#include "model/DescribeSceneBucketRequest.h"
#include "model/DescribeSceneBucketResult.h"
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
#include "model/EnableExperimentRequest.h"
#include "model/EnableExperimentResult.h"
#include "model/ListDashboardDetailsRequest.h"
#include "model/ListDashboardDetailsResult.h"
#include "model/ListDashboardDetailsFlowsRequest.h"
#include "model/ListDashboardDetailsFlowsResult.h"
#include "model/ListDashboardMetricsRequest.h"
#include "model/ListDashboardMetricsResult.h"
#include "model/ListDashboardMetricsFlowsRequest.h"
#include "model/ListDashboardMetricsFlowsResult.h"
#include "model/ListDataSetRequest.h"
#include "model/ListDataSetResult.h"
#include "model/ListDataSourceRequest.h"
#include "model/ListDataSourceResult.h"
#include "model/ListExperimentsRequest.h"
#include "model/ListExperimentsResult.h"
#include "model/ListFilteringAlgorithmsRequest.h"
#include "model/ListFilteringAlgorithmsResult.h"
#include "model/ListIndexVersionsRequest.h"
#include "model/ListIndexVersionsResult.h"
#include "model/ListInstanceRequest.h"
#include "model/ListInstanceResult.h"
#include "model/ListInstanceTaskRequest.h"
#include "model/ListInstanceTaskResult.h"
#include "model/ListItemsRequest.h"
#include "model/ListItemsResult.h"
#include "model/ListLogsRequest.h"
#include "model/ListLogsResult.h"
#include "model/ListMixCategoriesRequest.h"
#include "model/ListMixCategoriesResult.h"
#include "model/ListRankingModelsRequest.h"
#include "model/ListRankingModelsResult.h"
#include "model/ListRuleConditionsRequest.h"
#include "model/ListRuleConditionsResult.h"
#include "model/ListRuleTasksRequest.h"
#include "model/ListRuleTasksResult.h"
#include "model/ListRulesRequest.h"
#include "model/ListRulesResult.h"
#include "model/ListSceneItemsRequest.h"
#include "model/ListSceneItemsResult.h"
#include "model/ListSceneParametersRequest.h"
#include "model/ListSceneParametersResult.h"
#include "model/ListScenesRequest.h"
#include "model/ListScenesResult.h"
#include "model/ListUmengAppkeysRequest.h"
#include "model/ListUmengAppkeysResult.h"
#include "model/ListUserClustersRequest.h"
#include "model/ListUserClustersResult.h"
#include "model/ModifyDataSourceRequest.h"
#include "model/ModifyDataSourceResult.h"
#include "model/ModifyFilteringAlgorithmMetaRequest.h"
#include "model/ModifyFilteringAlgorithmMetaResult.h"
#include "model/ModifyInstanceRequest.h"
#include "model/ModifyInstanceResult.h"
#include "model/ModifyItemsRequest.h"
#include "model/ModifyItemsResult.h"
#include "model/ModifyRankingModelRequest.h"
#include "model/ModifyRankingModelResult.h"
#include "model/ModifyRuleRequest.h"
#include "model/ModifyRuleResult.h"
#include "model/ModifySceneRequest.h"
#include "model/ModifySceneResult.h"
#include "model/OfflineFilteringAlgorithmRequest.h"
#include "model/OfflineFilteringAlgorithmResult.h"
#include "model/PublishRuleRequest.h"
#include "model/PublishRuleResult.h"
#include "model/PushDocumentRequest.h"
#include "model/PushDocumentResult.h"
#include "model/PushInterventionRequest.h"
#include "model/PushInterventionResult.h"
#include "model/QueryDataMessageRequest.h"
#include "model/QueryDataMessageResult.h"
#include "model/QueryDataMessageStatisticsRequest.h"
#include "model/QueryDataMessageStatisticsResult.h"
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
#include "model/RebuildIndexRequest.h"
#include "model/RebuildIndexResult.h"
#include "model/RecommendRequest.h"
#include "model/RecommendResult.h"
#include "model/RunInstanceRequest.h"
#include "model/RunInstanceResult.h"
#include "model/StopDataSetRequest.h"
#include "model/StopDataSetResult.h"
#include "model/UnLockIndexVersionRequest.h"
#include "model/UnLockIndexVersionResult.h"
#include "model/UpdateExperimentBasicInfoRequest.h"
#include "model/UpdateExperimentBasicInfoResult.h"
#include "model/UpdateExperimentConfigRequest.h"
#include "model/UpdateExperimentConfigResult.h"
#include "model/UpdateExperimentStatusRequest.h"
#include "model/UpdateExperimentStatusResult.h"
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
			typedef Outcome<Error, Model::AttachIndexVersionResult> AttachIndexVersionOutcome;
			typedef std::future<AttachIndexVersionOutcome> AttachIndexVersionOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::AttachIndexVersionRequest&, const AttachIndexVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachIndexVersionAsyncHandler;
			typedef Outcome<Error, Model::CheckRankingModelReachableResult> CheckRankingModelReachableOutcome;
			typedef std::future<CheckRankingModelReachableOutcome> CheckRankingModelReachableOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CheckRankingModelReachableRequest&, const CheckRankingModelReachableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckRankingModelReachableAsyncHandler;
			typedef Outcome<Error, Model::CloneExperimentResult> CloneExperimentOutcome;
			typedef std::future<CloneExperimentOutcome> CloneExperimentOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CloneExperimentRequest&, const CloneExperimentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneExperimentAsyncHandler;
			typedef Outcome<Error, Model::CreateFilteringAlgorithmResult> CreateFilteringAlgorithmOutcome;
			typedef std::future<CreateFilteringAlgorithmOutcome> CreateFilteringAlgorithmOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CreateFilteringAlgorithmRequest&, const CreateFilteringAlgorithmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFilteringAlgorithmAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateRankingModelResult> CreateRankingModelOutcome;
			typedef std::future<CreateRankingModelOutcome> CreateRankingModelOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CreateRankingModelRequest&, const CreateRankingModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRankingModelAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleResult> CreateRuleOutcome;
			typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CreateRuleRequest&, const CreateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateSceneResult> CreateSceneOutcome;
			typedef std::future<CreateSceneOutcome> CreateSceneOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::CreateSceneRequest&, const CreateSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSceneAsyncHandler;
			typedef Outcome<Error, Model::DecribeRankingModelResult> DecribeRankingModelOutcome;
			typedef std::future<DecribeRankingModelOutcome> DecribeRankingModelOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DecribeRankingModelRequest&, const DecribeRankingModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecribeRankingModelAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataSetResult> DeleteDataSetOutcome;
			typedef std::future<DeleteDataSetOutcome> DeleteDataSetOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DeleteDataSetRequest&, const DeleteDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteExperimentResult> DeleteExperimentOutcome;
			typedef std::future<DeleteExperimentOutcome> DeleteExperimentOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DeleteExperimentRequest&, const DeleteExperimentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExperimentAsyncHandler;
			typedef Outcome<Error, Model::DeleteFilteringAlgorithmResult> DeleteFilteringAlgorithmOutcome;
			typedef std::future<DeleteFilteringAlgorithmOutcome> DeleteFilteringAlgorithmOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DeleteFilteringAlgorithmRequest&, const DeleteFilteringAlgorithmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFilteringAlgorithmAsyncHandler;
			typedef Outcome<Error, Model::DeleteRankingModelResult> DeleteRankingModelOutcome;
			typedef std::future<DeleteRankingModelOutcome> DeleteRankingModelOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DeleteRankingModelRequest&, const DeleteRankingModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRankingModelAsyncHandler;
			typedef Outcome<Error, Model::DeleteSceneResult> DeleteSceneOutcome;
			typedef std::future<DeleteSceneOutcome> DeleteSceneOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DeleteSceneRequest&, const DeleteSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSceneAsyncHandler;
			typedef Outcome<Error, Model::DescribeBaseExperimentResult> DescribeBaseExperimentOutcome;
			typedef std::future<DescribeBaseExperimentOutcome> DescribeBaseExperimentOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeBaseExperimentRequest&, const DescribeBaseExperimentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseExperimentAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSetMessageResult> DescribeDataSetMessageOutcome;
			typedef std::future<DescribeDataSetMessageOutcome> DescribeDataSetMessageOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeDataSetMessageRequest&, const DescribeDataSetMessageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSetMessageAsyncHandler;
			typedef Outcome<Error, Model::DescribeDefaultAlgorithmsResult> DescribeDefaultAlgorithmsOutcome;
			typedef std::future<DescribeDefaultAlgorithmsOutcome> DescribeDefaultAlgorithmsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeDefaultAlgorithmsRequest&, const DescribeDefaultAlgorithmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultAlgorithmsAsyncHandler;
			typedef Outcome<Error, Model::DescribeExperimentResult> DescribeExperimentOutcome;
			typedef std::future<DescribeExperimentOutcome> DescribeExperimentOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeExperimentRequest&, const DescribeExperimentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExperimentAsyncHandler;
			typedef Outcome<Error, Model::DescribeExperimentEnvResult> DescribeExperimentEnvOutcome;
			typedef std::future<DescribeExperimentEnvOutcome> DescribeExperimentEnvOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeExperimentEnvRequest&, const DescribeExperimentEnvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExperimentEnvAsyncHandler;
			typedef Outcome<Error, Model::DescribeExperimentEnvProgressResult> DescribeExperimentEnvProgressOutcome;
			typedef std::future<DescribeExperimentEnvProgressOutcome> DescribeExperimentEnvProgressOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeExperimentEnvProgressRequest&, const DescribeExperimentEnvProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExperimentEnvProgressAsyncHandler;
			typedef Outcome<Error, Model::DescribeFilteringAlgorithmResult> DescribeFilteringAlgorithmOutcome;
			typedef std::future<DescribeFilteringAlgorithmOutcome> DescribeFilteringAlgorithmOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeFilteringAlgorithmRequest&, const DescribeFilteringAlgorithmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilteringAlgorithmAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeLatestTaskResult> DescribeLatestTaskOutcome;
			typedef std::future<DescribeLatestTaskOutcome> DescribeLatestTaskOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeLatestTaskRequest&, const DescribeLatestTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLatestTaskAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeSceneBucketResult> DescribeSceneBucketOutcome;
			typedef std::future<DescribeSceneBucketOutcome> DescribeSceneBucketOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::DescribeSceneBucketRequest&, const DescribeSceneBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSceneBucketAsyncHandler;
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
			typedef Outcome<Error, Model::EnableExperimentResult> EnableExperimentOutcome;
			typedef std::future<EnableExperimentOutcome> EnableExperimentOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::EnableExperimentRequest&, const EnableExperimentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableExperimentAsyncHandler;
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
			typedef Outcome<Error, Model::ListDataSetResult> ListDataSetOutcome;
			typedef std::future<ListDataSetOutcome> ListDataSetOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDataSetRequest&, const ListDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSetAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceResult> ListDataSourceOutcome;
			typedef std::future<ListDataSourceOutcome> ListDataSourceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListDataSourceRequest&, const ListDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ListExperimentsResult> ListExperimentsOutcome;
			typedef std::future<ListExperimentsOutcome> ListExperimentsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListExperimentsRequest&, const ListExperimentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExperimentsAsyncHandler;
			typedef Outcome<Error, Model::ListFilteringAlgorithmsResult> ListFilteringAlgorithmsOutcome;
			typedef std::future<ListFilteringAlgorithmsOutcome> ListFilteringAlgorithmsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListFilteringAlgorithmsRequest&, const ListFilteringAlgorithmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFilteringAlgorithmsAsyncHandler;
			typedef Outcome<Error, Model::ListIndexVersionsResult> ListIndexVersionsOutcome;
			typedef std::future<ListIndexVersionsOutcome> ListIndexVersionsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListIndexVersionsRequest&, const ListIndexVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIndexVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceResult> ListInstanceOutcome;
			typedef std::future<ListInstanceOutcome> ListInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListInstanceRequest&, const ListInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceTaskResult> ListInstanceTaskOutcome;
			typedef std::future<ListInstanceTaskOutcome> ListInstanceTaskOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListInstanceTaskRequest&, const ListInstanceTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceTaskAsyncHandler;
			typedef Outcome<Error, Model::ListItemsResult> ListItemsOutcome;
			typedef std::future<ListItemsOutcome> ListItemsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListItemsRequest&, const ListItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListItemsAsyncHandler;
			typedef Outcome<Error, Model::ListLogsResult> ListLogsOutcome;
			typedef std::future<ListLogsOutcome> ListLogsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListLogsRequest&, const ListLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogsAsyncHandler;
			typedef Outcome<Error, Model::ListMixCategoriesResult> ListMixCategoriesOutcome;
			typedef std::future<ListMixCategoriesOutcome> ListMixCategoriesOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListMixCategoriesRequest&, const ListMixCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMixCategoriesAsyncHandler;
			typedef Outcome<Error, Model::ListRankingModelsResult> ListRankingModelsOutcome;
			typedef std::future<ListRankingModelsOutcome> ListRankingModelsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListRankingModelsRequest&, const ListRankingModelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRankingModelsAsyncHandler;
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
			typedef Outcome<Error, Model::ListSceneParametersResult> ListSceneParametersOutcome;
			typedef std::future<ListSceneParametersOutcome> ListSceneParametersOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListSceneParametersRequest&, const ListSceneParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSceneParametersAsyncHandler;
			typedef Outcome<Error, Model::ListScenesResult> ListScenesOutcome;
			typedef std::future<ListScenesOutcome> ListScenesOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListScenesRequest&, const ListScenesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScenesAsyncHandler;
			typedef Outcome<Error, Model::ListUmengAppkeysResult> ListUmengAppkeysOutcome;
			typedef std::future<ListUmengAppkeysOutcome> ListUmengAppkeysOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListUmengAppkeysRequest&, const ListUmengAppkeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUmengAppkeysAsyncHandler;
			typedef Outcome<Error, Model::ListUserClustersResult> ListUserClustersOutcome;
			typedef std::future<ListUserClustersOutcome> ListUserClustersOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ListUserClustersRequest&, const ListUserClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserClustersAsyncHandler;
			typedef Outcome<Error, Model::ModifyDataSourceResult> ModifyDataSourceOutcome;
			typedef std::future<ModifyDataSourceOutcome> ModifyDataSourceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyDataSourceRequest&, const ModifyDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ModifyFilteringAlgorithmMetaResult> ModifyFilteringAlgorithmMetaOutcome;
			typedef std::future<ModifyFilteringAlgorithmMetaOutcome> ModifyFilteringAlgorithmMetaOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyFilteringAlgorithmMetaRequest&, const ModifyFilteringAlgorithmMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFilteringAlgorithmMetaAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceResult> ModifyInstanceOutcome;
			typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyInstanceRequest&, const ModifyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyItemsResult> ModifyItemsOutcome;
			typedef std::future<ModifyItemsOutcome> ModifyItemsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyItemsRequest&, const ModifyItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyItemsAsyncHandler;
			typedef Outcome<Error, Model::ModifyRankingModelResult> ModifyRankingModelOutcome;
			typedef std::future<ModifyRankingModelOutcome> ModifyRankingModelOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyRankingModelRequest&, const ModifyRankingModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRankingModelAsyncHandler;
			typedef Outcome<Error, Model::ModifyRuleResult> ModifyRuleOutcome;
			typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifyRuleRequest&, const ModifyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifySceneResult> ModifySceneOutcome;
			typedef std::future<ModifySceneOutcome> ModifySceneOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::ModifySceneRequest&, const ModifySceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySceneAsyncHandler;
			typedef Outcome<Error, Model::OfflineFilteringAlgorithmResult> OfflineFilteringAlgorithmOutcome;
			typedef std::future<OfflineFilteringAlgorithmOutcome> OfflineFilteringAlgorithmOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::OfflineFilteringAlgorithmRequest&, const OfflineFilteringAlgorithmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OfflineFilteringAlgorithmAsyncHandler;
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
			typedef Outcome<Error, Model::QueryDataMessageStatisticsResult> QueryDataMessageStatisticsOutcome;
			typedef std::future<QueryDataMessageStatisticsOutcome> QueryDataMessageStatisticsOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::QueryDataMessageStatisticsRequest&, const QueryDataMessageStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDataMessageStatisticsAsyncHandler;
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
			typedef Outcome<Error, Model::RebuildIndexResult> RebuildIndexOutcome;
			typedef std::future<RebuildIndexOutcome> RebuildIndexOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::RebuildIndexRequest&, const RebuildIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebuildIndexAsyncHandler;
			typedef Outcome<Error, Model::RecommendResult> RecommendOutcome;
			typedef std::future<RecommendOutcome> RecommendOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::RecommendRequest&, const RecommendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecommendAsyncHandler;
			typedef Outcome<Error, Model::RunInstanceResult> RunInstanceOutcome;
			typedef std::future<RunInstanceOutcome> RunInstanceOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::RunInstanceRequest&, const RunInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopDataSetResult> StopDataSetOutcome;
			typedef std::future<StopDataSetOutcome> StopDataSetOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::StopDataSetRequest&, const StopDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDataSetAsyncHandler;
			typedef Outcome<Error, Model::UnLockIndexVersionResult> UnLockIndexVersionOutcome;
			typedef std::future<UnLockIndexVersionOutcome> UnLockIndexVersionOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::UnLockIndexVersionRequest&, const UnLockIndexVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnLockIndexVersionAsyncHandler;
			typedef Outcome<Error, Model::UpdateExperimentBasicInfoResult> UpdateExperimentBasicInfoOutcome;
			typedef std::future<UpdateExperimentBasicInfoOutcome> UpdateExperimentBasicInfoOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::UpdateExperimentBasicInfoRequest&, const UpdateExperimentBasicInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExperimentBasicInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateExperimentConfigResult> UpdateExperimentConfigOutcome;
			typedef std::future<UpdateExperimentConfigOutcome> UpdateExperimentConfigOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::UpdateExperimentConfigRequest&, const UpdateExperimentConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExperimentConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateExperimentStatusResult> UpdateExperimentStatusOutcome;
			typedef std::future<UpdateExperimentStatusOutcome> UpdateExperimentStatusOutcomeCallable;
			typedef std::function<void(const AirecClient*, const Model::UpdateExperimentStatusRequest&, const UpdateExperimentStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExperimentStatusAsyncHandler;
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
			AttachIndexVersionOutcome attachIndexVersion(const Model::AttachIndexVersionRequest &request)const;
			void attachIndexVersionAsync(const Model::AttachIndexVersionRequest& request, const AttachIndexVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachIndexVersionOutcomeCallable attachIndexVersionCallable(const Model::AttachIndexVersionRequest& request) const;
			CheckRankingModelReachableOutcome checkRankingModelReachable(const Model::CheckRankingModelReachableRequest &request)const;
			void checkRankingModelReachableAsync(const Model::CheckRankingModelReachableRequest& request, const CheckRankingModelReachableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckRankingModelReachableOutcomeCallable checkRankingModelReachableCallable(const Model::CheckRankingModelReachableRequest& request) const;
			CloneExperimentOutcome cloneExperiment(const Model::CloneExperimentRequest &request)const;
			void cloneExperimentAsync(const Model::CloneExperimentRequest& request, const CloneExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneExperimentOutcomeCallable cloneExperimentCallable(const Model::CloneExperimentRequest& request) const;
			CreateFilteringAlgorithmOutcome createFilteringAlgorithm(const Model::CreateFilteringAlgorithmRequest &request)const;
			void createFilteringAlgorithmAsync(const Model::CreateFilteringAlgorithmRequest& request, const CreateFilteringAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFilteringAlgorithmOutcomeCallable createFilteringAlgorithmCallable(const Model::CreateFilteringAlgorithmRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateRankingModelOutcome createRankingModel(const Model::CreateRankingModelRequest &request)const;
			void createRankingModelAsync(const Model::CreateRankingModelRequest& request, const CreateRankingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRankingModelOutcomeCallable createRankingModelCallable(const Model::CreateRankingModelRequest& request) const;
			CreateRuleOutcome createRule(const Model::CreateRuleRequest &request)const;
			void createRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleOutcomeCallable createRuleCallable(const Model::CreateRuleRequest& request) const;
			CreateSceneOutcome createScene(const Model::CreateSceneRequest &request)const;
			void createSceneAsync(const Model::CreateSceneRequest& request, const CreateSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSceneOutcomeCallable createSceneCallable(const Model::CreateSceneRequest& request) const;
			DecribeRankingModelOutcome decribeRankingModel(const Model::DecribeRankingModelRequest &request)const;
			void decribeRankingModelAsync(const Model::DecribeRankingModelRequest& request, const DecribeRankingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecribeRankingModelOutcomeCallable decribeRankingModelCallable(const Model::DecribeRankingModelRequest& request) const;
			DeleteDataSetOutcome deleteDataSet(const Model::DeleteDataSetRequest &request)const;
			void deleteDataSetAsync(const Model::DeleteDataSetRequest& request, const DeleteDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataSetOutcomeCallable deleteDataSetCallable(const Model::DeleteDataSetRequest& request) const;
			DeleteExperimentOutcome deleteExperiment(const Model::DeleteExperimentRequest &request)const;
			void deleteExperimentAsync(const Model::DeleteExperimentRequest& request, const DeleteExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExperimentOutcomeCallable deleteExperimentCallable(const Model::DeleteExperimentRequest& request) const;
			DeleteFilteringAlgorithmOutcome deleteFilteringAlgorithm(const Model::DeleteFilteringAlgorithmRequest &request)const;
			void deleteFilteringAlgorithmAsync(const Model::DeleteFilteringAlgorithmRequest& request, const DeleteFilteringAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFilteringAlgorithmOutcomeCallable deleteFilteringAlgorithmCallable(const Model::DeleteFilteringAlgorithmRequest& request) const;
			DeleteRankingModelOutcome deleteRankingModel(const Model::DeleteRankingModelRequest &request)const;
			void deleteRankingModelAsync(const Model::DeleteRankingModelRequest& request, const DeleteRankingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRankingModelOutcomeCallable deleteRankingModelCallable(const Model::DeleteRankingModelRequest& request) const;
			DeleteSceneOutcome deleteScene(const Model::DeleteSceneRequest &request)const;
			void deleteSceneAsync(const Model::DeleteSceneRequest& request, const DeleteSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSceneOutcomeCallable deleteSceneCallable(const Model::DeleteSceneRequest& request) const;
			DescribeBaseExperimentOutcome describeBaseExperiment(const Model::DescribeBaseExperimentRequest &request)const;
			void describeBaseExperimentAsync(const Model::DescribeBaseExperimentRequest& request, const DescribeBaseExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBaseExperimentOutcomeCallable describeBaseExperimentCallable(const Model::DescribeBaseExperimentRequest& request) const;
			DescribeDataSetMessageOutcome describeDataSetMessage(const Model::DescribeDataSetMessageRequest &request)const;
			void describeDataSetMessageAsync(const Model::DescribeDataSetMessageRequest& request, const DescribeDataSetMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSetMessageOutcomeCallable describeDataSetMessageCallable(const Model::DescribeDataSetMessageRequest& request) const;
			DescribeDefaultAlgorithmsOutcome describeDefaultAlgorithms(const Model::DescribeDefaultAlgorithmsRequest &request)const;
			void describeDefaultAlgorithmsAsync(const Model::DescribeDefaultAlgorithmsRequest& request, const DescribeDefaultAlgorithmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDefaultAlgorithmsOutcomeCallable describeDefaultAlgorithmsCallable(const Model::DescribeDefaultAlgorithmsRequest& request) const;
			DescribeExperimentOutcome describeExperiment(const Model::DescribeExperimentRequest &request)const;
			void describeExperimentAsync(const Model::DescribeExperimentRequest& request, const DescribeExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExperimentOutcomeCallable describeExperimentCallable(const Model::DescribeExperimentRequest& request) const;
			DescribeExperimentEnvOutcome describeExperimentEnv(const Model::DescribeExperimentEnvRequest &request)const;
			void describeExperimentEnvAsync(const Model::DescribeExperimentEnvRequest& request, const DescribeExperimentEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExperimentEnvOutcomeCallable describeExperimentEnvCallable(const Model::DescribeExperimentEnvRequest& request) const;
			DescribeExperimentEnvProgressOutcome describeExperimentEnvProgress(const Model::DescribeExperimentEnvProgressRequest &request)const;
			void describeExperimentEnvProgressAsync(const Model::DescribeExperimentEnvProgressRequest& request, const DescribeExperimentEnvProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExperimentEnvProgressOutcomeCallable describeExperimentEnvProgressCallable(const Model::DescribeExperimentEnvProgressRequest& request) const;
			DescribeFilteringAlgorithmOutcome describeFilteringAlgorithm(const Model::DescribeFilteringAlgorithmRequest &request)const;
			void describeFilteringAlgorithmAsync(const Model::DescribeFilteringAlgorithmRequest& request, const DescribeFilteringAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFilteringAlgorithmOutcomeCallable describeFilteringAlgorithmCallable(const Model::DescribeFilteringAlgorithmRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeLatestTaskOutcome describeLatestTask(const Model::DescribeLatestTaskRequest &request)const;
			void describeLatestTaskAsync(const Model::DescribeLatestTaskRequest& request, const DescribeLatestTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLatestTaskOutcomeCallable describeLatestTaskCallable(const Model::DescribeLatestTaskRequest& request) const;
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
			DescribeSceneBucketOutcome describeSceneBucket(const Model::DescribeSceneBucketRequest &request)const;
			void describeSceneBucketAsync(const Model::DescribeSceneBucketRequest& request, const DescribeSceneBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSceneBucketOutcomeCallable describeSceneBucketCallable(const Model::DescribeSceneBucketRequest& request) const;
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
			EnableExperimentOutcome enableExperiment(const Model::EnableExperimentRequest &request)const;
			void enableExperimentAsync(const Model::EnableExperimentRequest& request, const EnableExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableExperimentOutcomeCallable enableExperimentCallable(const Model::EnableExperimentRequest& request) const;
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
			ListDataSetOutcome listDataSet(const Model::ListDataSetRequest &request)const;
			void listDataSetAsync(const Model::ListDataSetRequest& request, const ListDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSetOutcomeCallable listDataSetCallable(const Model::ListDataSetRequest& request) const;
			ListDataSourceOutcome listDataSource(const Model::ListDataSourceRequest &request)const;
			void listDataSourceAsync(const Model::ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceOutcomeCallable listDataSourceCallable(const Model::ListDataSourceRequest& request) const;
			ListExperimentsOutcome listExperiments(const Model::ListExperimentsRequest &request)const;
			void listExperimentsAsync(const Model::ListExperimentsRequest& request, const ListExperimentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExperimentsOutcomeCallable listExperimentsCallable(const Model::ListExperimentsRequest& request) const;
			ListFilteringAlgorithmsOutcome listFilteringAlgorithms(const Model::ListFilteringAlgorithmsRequest &request)const;
			void listFilteringAlgorithmsAsync(const Model::ListFilteringAlgorithmsRequest& request, const ListFilteringAlgorithmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFilteringAlgorithmsOutcomeCallable listFilteringAlgorithmsCallable(const Model::ListFilteringAlgorithmsRequest& request) const;
			ListIndexVersionsOutcome listIndexVersions(const Model::ListIndexVersionsRequest &request)const;
			void listIndexVersionsAsync(const Model::ListIndexVersionsRequest& request, const ListIndexVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIndexVersionsOutcomeCallable listIndexVersionsCallable(const Model::ListIndexVersionsRequest& request) const;
			ListInstanceOutcome listInstance(const Model::ListInstanceRequest &request)const;
			void listInstanceAsync(const Model::ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceOutcomeCallable listInstanceCallable(const Model::ListInstanceRequest& request) const;
			ListInstanceTaskOutcome listInstanceTask(const Model::ListInstanceTaskRequest &request)const;
			void listInstanceTaskAsync(const Model::ListInstanceTaskRequest& request, const ListInstanceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceTaskOutcomeCallable listInstanceTaskCallable(const Model::ListInstanceTaskRequest& request) const;
			ListItemsOutcome listItems(const Model::ListItemsRequest &request)const;
			void listItemsAsync(const Model::ListItemsRequest& request, const ListItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListItemsOutcomeCallable listItemsCallable(const Model::ListItemsRequest& request) const;
			ListLogsOutcome listLogs(const Model::ListLogsRequest &request)const;
			void listLogsAsync(const Model::ListLogsRequest& request, const ListLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogsOutcomeCallable listLogsCallable(const Model::ListLogsRequest& request) const;
			ListMixCategoriesOutcome listMixCategories(const Model::ListMixCategoriesRequest &request)const;
			void listMixCategoriesAsync(const Model::ListMixCategoriesRequest& request, const ListMixCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMixCategoriesOutcomeCallable listMixCategoriesCallable(const Model::ListMixCategoriesRequest& request) const;
			ListRankingModelsOutcome listRankingModels(const Model::ListRankingModelsRequest &request)const;
			void listRankingModelsAsync(const Model::ListRankingModelsRequest& request, const ListRankingModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRankingModelsOutcomeCallable listRankingModelsCallable(const Model::ListRankingModelsRequest& request) const;
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
			ListSceneParametersOutcome listSceneParameters(const Model::ListSceneParametersRequest &request)const;
			void listSceneParametersAsync(const Model::ListSceneParametersRequest& request, const ListSceneParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSceneParametersOutcomeCallable listSceneParametersCallable(const Model::ListSceneParametersRequest& request) const;
			ListScenesOutcome listScenes(const Model::ListScenesRequest &request)const;
			void listScenesAsync(const Model::ListScenesRequest& request, const ListScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScenesOutcomeCallable listScenesCallable(const Model::ListScenesRequest& request) const;
			ListUmengAppkeysOutcome listUmengAppkeys(const Model::ListUmengAppkeysRequest &request)const;
			void listUmengAppkeysAsync(const Model::ListUmengAppkeysRequest& request, const ListUmengAppkeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUmengAppkeysOutcomeCallable listUmengAppkeysCallable(const Model::ListUmengAppkeysRequest& request) const;
			ListUserClustersOutcome listUserClusters(const Model::ListUserClustersRequest &request)const;
			void listUserClustersAsync(const Model::ListUserClustersRequest& request, const ListUserClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserClustersOutcomeCallable listUserClustersCallable(const Model::ListUserClustersRequest& request) const;
			ModifyDataSourceOutcome modifyDataSource(const Model::ModifyDataSourceRequest &request)const;
			void modifyDataSourceAsync(const Model::ModifyDataSourceRequest& request, const ModifyDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDataSourceOutcomeCallable modifyDataSourceCallable(const Model::ModifyDataSourceRequest& request) const;
			ModifyFilteringAlgorithmMetaOutcome modifyFilteringAlgorithmMeta(const Model::ModifyFilteringAlgorithmMetaRequest &request)const;
			void modifyFilteringAlgorithmMetaAsync(const Model::ModifyFilteringAlgorithmMetaRequest& request, const ModifyFilteringAlgorithmMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFilteringAlgorithmMetaOutcomeCallable modifyFilteringAlgorithmMetaCallable(const Model::ModifyFilteringAlgorithmMetaRequest& request) const;
			ModifyInstanceOutcome modifyInstance(const Model::ModifyInstanceRequest &request)const;
			void modifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceOutcomeCallable modifyInstanceCallable(const Model::ModifyInstanceRequest& request) const;
			ModifyItemsOutcome modifyItems(const Model::ModifyItemsRequest &request)const;
			void modifyItemsAsync(const Model::ModifyItemsRequest& request, const ModifyItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyItemsOutcomeCallable modifyItemsCallable(const Model::ModifyItemsRequest& request) const;
			ModifyRankingModelOutcome modifyRankingModel(const Model::ModifyRankingModelRequest &request)const;
			void modifyRankingModelAsync(const Model::ModifyRankingModelRequest& request, const ModifyRankingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRankingModelOutcomeCallable modifyRankingModelCallable(const Model::ModifyRankingModelRequest& request) const;
			ModifyRuleOutcome modifyRule(const Model::ModifyRuleRequest &request)const;
			void modifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRuleOutcomeCallable modifyRuleCallable(const Model::ModifyRuleRequest& request) const;
			ModifySceneOutcome modifyScene(const Model::ModifySceneRequest &request)const;
			void modifySceneAsync(const Model::ModifySceneRequest& request, const ModifySceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySceneOutcomeCallable modifySceneCallable(const Model::ModifySceneRequest& request) const;
			OfflineFilteringAlgorithmOutcome offlineFilteringAlgorithm(const Model::OfflineFilteringAlgorithmRequest &request)const;
			void offlineFilteringAlgorithmAsync(const Model::OfflineFilteringAlgorithmRequest& request, const OfflineFilteringAlgorithmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OfflineFilteringAlgorithmOutcomeCallable offlineFilteringAlgorithmCallable(const Model::OfflineFilteringAlgorithmRequest& request) const;
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
			QueryDataMessageStatisticsOutcome queryDataMessageStatistics(const Model::QueryDataMessageStatisticsRequest &request)const;
			void queryDataMessageStatisticsAsync(const Model::QueryDataMessageStatisticsRequest& request, const QueryDataMessageStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDataMessageStatisticsOutcomeCallable queryDataMessageStatisticsCallable(const Model::QueryDataMessageStatisticsRequest& request) const;
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
			RebuildIndexOutcome rebuildIndex(const Model::RebuildIndexRequest &request)const;
			void rebuildIndexAsync(const Model::RebuildIndexRequest& request, const RebuildIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebuildIndexOutcomeCallable rebuildIndexCallable(const Model::RebuildIndexRequest& request) const;
			RecommendOutcome recommend(const Model::RecommendRequest &request)const;
			void recommendAsync(const Model::RecommendRequest& request, const RecommendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecommendOutcomeCallable recommendCallable(const Model::RecommendRequest& request) const;
			RunInstanceOutcome runInstance(const Model::RunInstanceRequest &request)const;
			void runInstanceAsync(const Model::RunInstanceRequest& request, const RunInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunInstanceOutcomeCallable runInstanceCallable(const Model::RunInstanceRequest& request) const;
			StopDataSetOutcome stopDataSet(const Model::StopDataSetRequest &request)const;
			void stopDataSetAsync(const Model::StopDataSetRequest& request, const StopDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDataSetOutcomeCallable stopDataSetCallable(const Model::StopDataSetRequest& request) const;
			UnLockIndexVersionOutcome unLockIndexVersion(const Model::UnLockIndexVersionRequest &request)const;
			void unLockIndexVersionAsync(const Model::UnLockIndexVersionRequest& request, const UnLockIndexVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnLockIndexVersionOutcomeCallable unLockIndexVersionCallable(const Model::UnLockIndexVersionRequest& request) const;
			UpdateExperimentBasicInfoOutcome updateExperimentBasicInfo(const Model::UpdateExperimentBasicInfoRequest &request)const;
			void updateExperimentBasicInfoAsync(const Model::UpdateExperimentBasicInfoRequest& request, const UpdateExperimentBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateExperimentBasicInfoOutcomeCallable updateExperimentBasicInfoCallable(const Model::UpdateExperimentBasicInfoRequest& request) const;
			UpdateExperimentConfigOutcome updateExperimentConfig(const Model::UpdateExperimentConfigRequest &request)const;
			void updateExperimentConfigAsync(const Model::UpdateExperimentConfigRequest& request, const UpdateExperimentConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateExperimentConfigOutcomeCallable updateExperimentConfigCallable(const Model::UpdateExperimentConfigRequest& request) const;
			UpdateExperimentStatusOutcome updateExperimentStatus(const Model::UpdateExperimentStatusRequest &request)const;
			void updateExperimentStatusAsync(const Model::UpdateExperimentStatusRequest& request, const UpdateExperimentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateExperimentStatusOutcomeCallable updateExperimentStatusCallable(const Model::UpdateExperimentStatusRequest& request) const;
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
