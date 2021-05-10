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

#ifndef ALIBABACLOUD_OPENSEARCH_OPENSEARCHCLIENT_H_
#define ALIBABACLOUD_OPENSEARCH_OPENSEARCHCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "OpenSearchExport.h"
#include "model/CompileSortScriptRequest.h"
#include "model/CompileSortScriptResult.h"
#include "model/CreateABTestExperimentRequest.h"
#include "model/CreateABTestExperimentResult.h"
#include "model/CreateABTestGroupRequest.h"
#include "model/CreateABTestGroupResult.h"
#include "model/CreateABTestSceneRequest.h"
#include "model/CreateABTestSceneResult.h"
#include "model/CreateAppRequest.h"
#include "model/CreateAppResult.h"
#include "model/CreateAppGroupRequest.h"
#include "model/CreateAppGroupResult.h"
#include "model/CreateDataCollectionRequest.h"
#include "model/CreateDataCollectionResult.h"
#include "model/CreateFirstRankRequest.h"
#include "model/CreateFirstRankResult.h"
#include "model/CreateInterventionDictionaryRequest.h"
#include "model/CreateInterventionDictionaryResult.h"
#include "model/CreateModelRequest.h"
#include "model/CreateModelResult.h"
#include "model/CreateQueryProcessorRequest.h"
#include "model/CreateQueryProcessorResult.h"
#include "model/CreateScheduledTaskRequest.h"
#include "model/CreateScheduledTaskResult.h"
#include "model/CreateSecondRankRequest.h"
#include "model/CreateSecondRankResult.h"
#include "model/CreateSortScriptRequest.h"
#include "model/CreateSortScriptResult.h"
#include "model/CreateUserAnalyzerRequest.h"
#include "model/CreateUserAnalyzerResult.h"
#include "model/DeleteABTestExperimentRequest.h"
#include "model/DeleteABTestExperimentResult.h"
#include "model/DeleteABTestGroupRequest.h"
#include "model/DeleteABTestGroupResult.h"
#include "model/DeleteABTestSceneRequest.h"
#include "model/DeleteABTestSceneResult.h"
#include "model/DeleteModelRequest.h"
#include "model/DeleteModelResult.h"
#include "model/DeleteSortScriptRequest.h"
#include "model/DeleteSortScriptResult.h"
#include "model/DeleteSortScriptFileRequest.h"
#include "model/DeleteSortScriptFileResult.h"
#include "model/DescribeABTestExperimentRequest.h"
#include "model/DescribeABTestExperimentResult.h"
#include "model/DescribeABTestGroupRequest.h"
#include "model/DescribeABTestGroupResult.h"
#include "model/DescribeABTestSceneRequest.h"
#include "model/DescribeABTestSceneResult.h"
#include "model/DescribeAppRequest.h"
#include "model/DescribeAppResult.h"
#include "model/DescribeAppGroupRequest.h"
#include "model/DescribeAppGroupResult.h"
#include "model/DescribeAppGroupDataReportRequest.h"
#include "model/DescribeAppGroupDataReportResult.h"
#include "model/DescribeAppStatisticsRequest.h"
#include "model/DescribeAppStatisticsResult.h"
#include "model/DescribeAppsRequest.h"
#include "model/DescribeAppsResult.h"
#include "model/DescribeDataCollctionRequest.h"
#include "model/DescribeDataCollctionResult.h"
#include "model/DescribeFirstRankRequest.h"
#include "model/DescribeFirstRankResult.h"
#include "model/DescribeInterventionDictionaryRequest.h"
#include "model/DescribeInterventionDictionaryResult.h"
#include "model/DescribeModelRequest.h"
#include "model/DescribeModelResult.h"
#include "model/DescribeQueryProcessorRequest.h"
#include "model/DescribeQueryProcessorResult.h"
#include "model/DescribeRegionRequest.h"
#include "model/DescribeRegionResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeScheduledTaskRequest.h"
#include "model/DescribeScheduledTaskResult.h"
#include "model/DescribeSecondRankRequest.h"
#include "model/DescribeSecondRankResult.h"
#include "model/DescribeSlowQueryStatusRequest.h"
#include "model/DescribeSlowQueryStatusResult.h"
#include "model/DescribeUserAnalyzerRequest.h"
#include "model/DescribeUserAnalyzerResult.h"
#include "model/DisableSlowQueryRequest.h"
#include "model/DisableSlowQueryResult.h"
#include "model/EnableSlowQueryRequest.h"
#include "model/EnableSlowQueryResult.h"
#include "model/GenerateMergedTableRequest.h"
#include "model/GenerateMergedTableResult.h"
#include "model/GetDomainRequest.h"
#include "model/GetDomainResult.h"
#include "model/GetModelProgressRequest.h"
#include "model/GetModelProgressResult.h"
#include "model/GetModelReportRequest.h"
#include "model/GetModelReportResult.h"
#include "model/GetScriptFileNamesRequest.h"
#include "model/GetScriptFileNamesResult.h"
#include "model/GetSortScriptRequest.h"
#include "model/GetSortScriptResult.h"
#include "model/GetSortScriptFileRequest.h"
#include "model/GetSortScriptFileResult.h"
#include "model/GetValidationErrorRequest.h"
#include "model/GetValidationErrorResult.h"
#include "model/GetValidationReportRequest.h"
#include "model/GetValidationReportResult.h"
#include "model/ListABTestExperimentsRequest.h"
#include "model/ListABTestExperimentsResult.h"
#include "model/ListABTestFixedFlowDividersRequest.h"
#include "model/ListABTestFixedFlowDividersResult.h"
#include "model/ListABTestGroupsRequest.h"
#include "model/ListABTestGroupsResult.h"
#include "model/ListABTestMetricsRequest.h"
#include "model/ListABTestMetricsResult.h"
#include "model/ListABTestScenesRequest.h"
#include "model/ListABTestScenesResult.h"
#include "model/ListAppGroupErrorsRequest.h"
#include "model/ListAppGroupErrorsResult.h"
#include "model/ListAppGroupMetricsRequest.h"
#include "model/ListAppGroupMetricsResult.h"
#include "model/ListAppGroupsRequest.h"
#include "model/ListAppGroupsResult.h"
#include "model/ListAppsRequest.h"
#include "model/ListAppsResult.h"
#include "model/ListDataCollectionsRequest.h"
#include "model/ListDataCollectionsResult.h"
#include "model/ListDataSourceTableFieldsRequest.h"
#include "model/ListDataSourceTableFieldsResult.h"
#include "model/ListDataSourceTablesRequest.h"
#include "model/ListDataSourceTablesResult.h"
#include "model/ListDeployedAlgorithmModelsRequest.h"
#include "model/ListDeployedAlgorithmModelsResult.h"
#include "model/ListFirstRanksRequest.h"
#include "model/ListFirstRanksResult.h"
#include "model/ListInterventionDictionariesRequest.h"
#include "model/ListInterventionDictionariesResult.h"
#include "model/ListInterventionDictionaryEntriesRequest.h"
#include "model/ListInterventionDictionaryEntriesResult.h"
#include "model/ListInterventionDictionaryNerResultsRequest.h"
#include "model/ListInterventionDictionaryNerResultsResult.h"
#include "model/ListInterventionDictionaryRelatedEntitiesRequest.h"
#include "model/ListInterventionDictionaryRelatedEntitiesResult.h"
#include "model/ListModelsRequest.h"
#include "model/ListModelsResult.h"
#include "model/ListQueryProcessorNersRequest.h"
#include "model/ListQueryProcessorNersResult.h"
#include "model/ListQueryProcessorsRequest.h"
#include "model/ListQueryProcessorsResult.h"
#include "model/ListRamRolesRequest.h"
#include "model/ListRamRolesResult.h"
#include "model/ListScheduledTasksRequest.h"
#include "model/ListScheduledTasksResult.h"
#include "model/ListSecondRanksRequest.h"
#include "model/ListSecondRanksResult.h"
#include "model/ListSlowQueryCategoriesRequest.h"
#include "model/ListSlowQueryCategoriesResult.h"
#include "model/ListSlowQueryQueriesRequest.h"
#include "model/ListSlowQueryQueriesResult.h"
#include "model/ListSortExpressionsRequest.h"
#include "model/ListSortExpressionsResult.h"
#include "model/ListSortScriptsRequest.h"
#include "model/ListSortScriptsResult.h"
#include "model/ListStatisticLogsRequest.h"
#include "model/ListStatisticLogsResult.h"
#include "model/ListStatisticReportRequest.h"
#include "model/ListStatisticReportResult.h"
#include "model/ListUserAnalyzerEntriesRequest.h"
#include "model/ListUserAnalyzerEntriesResult.h"
#include "model/ListUserAnalyzersRequest.h"
#include "model/ListUserAnalyzersResult.h"
#include "model/ModifyAppGroupRequest.h"
#include "model/ModifyAppGroupResult.h"
#include "model/ModifyAppGroupQuotaRequest.h"
#include "model/ModifyAppGroupQuotaResult.h"
#include "model/ModifyFirstRankRequest.h"
#include "model/ModifyFirstRankResult.h"
#include "model/ModifyModelRequest.h"
#include "model/ModifyModelResult.h"
#include "model/ModifyQueryProcessorRequest.h"
#include "model/ModifyQueryProcessorResult.h"
#include "model/ModifyScheduledTaskRequest.h"
#include "model/ModifyScheduledTaskResult.h"
#include "model/ModifySecondRankRequest.h"
#include "model/ModifySecondRankResult.h"
#include "model/PreviewModelRequest.h"
#include "model/PreviewModelResult.h"
#include "model/PushInterventionDictionaryEntriesRequest.h"
#include "model/PushInterventionDictionaryEntriesResult.h"
#include "model/PushUserAnalyzerEntriesRequest.h"
#include "model/PushUserAnalyzerEntriesResult.h"
#include "model/RankPreviewQueryRequest.h"
#include "model/RankPreviewQueryResult.h"
#include "model/ReleaseSortScriptRequest.h"
#include "model/ReleaseSortScriptResult.h"
#include "model/RemoveAppRequest.h"
#include "model/RemoveAppResult.h"
#include "model/RemoveAppGroupRequest.h"
#include "model/RemoveAppGroupResult.h"
#include "model/RemoveDataCollectionRequest.h"
#include "model/RemoveDataCollectionResult.h"
#include "model/RemoveFirstRankRequest.h"
#include "model/RemoveFirstRankResult.h"
#include "model/RemoveInterventionDictionaryRequest.h"
#include "model/RemoveInterventionDictionaryResult.h"
#include "model/RemoveQueryProcessorRequest.h"
#include "model/RemoveQueryProcessorResult.h"
#include "model/RemoveScheduledTaskRequest.h"
#include "model/RemoveScheduledTaskResult.h"
#include "model/RemoveSecondRankRequest.h"
#include "model/RemoveSecondRankResult.h"
#include "model/RemoveUserAnalyzerRequest.h"
#include "model/RemoveUserAnalyzerResult.h"
#include "model/RenewAppGroupRequest.h"
#include "model/RenewAppGroupResult.h"
#include "model/ReplaceAppGroupCommodityCodeRequest.h"
#include "model/ReplaceAppGroupCommodityCodeResult.h"
#include "model/SaveSortScriptFileRequest.h"
#include "model/SaveSortScriptFileResult.h"
#include "model/StartSlowQueryAnalyzerRequest.h"
#include "model/StartSlowQueryAnalyzerResult.h"
#include "model/TrainModelRequest.h"
#include "model/TrainModelResult.h"
#include "model/UpdateABTestExperimentRequest.h"
#include "model/UpdateABTestExperimentResult.h"
#include "model/UpdateABTestFixedFlowDividersRequest.h"
#include "model/UpdateABTestFixedFlowDividersResult.h"
#include "model/UpdateABTestGroupRequest.h"
#include "model/UpdateABTestGroupResult.h"
#include "model/UpdateABTestSceneRequest.h"
#include "model/UpdateABTestSceneResult.h"
#include "model/UpdateFetchFieldsRequest.h"
#include "model/UpdateFetchFieldsResult.h"
#include "model/UpdateSummariesRequest.h"
#include "model/UpdateSummariesResult.h"


namespace AlibabaCloud
{
	namespace OpenSearch
	{
		class ALIBABACLOUD_OPENSEARCH_EXPORT OpenSearchClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CompileSortScriptResult> CompileSortScriptOutcome;
			typedef std::future<CompileSortScriptOutcome> CompileSortScriptOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CompileSortScriptRequest&, const CompileSortScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompileSortScriptAsyncHandler;
			typedef Outcome<Error, Model::CreateABTestExperimentResult> CreateABTestExperimentOutcome;
			typedef std::future<CreateABTestExperimentOutcome> CreateABTestExperimentOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateABTestExperimentRequest&, const CreateABTestExperimentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateABTestExperimentAsyncHandler;
			typedef Outcome<Error, Model::CreateABTestGroupResult> CreateABTestGroupOutcome;
			typedef std::future<CreateABTestGroupOutcome> CreateABTestGroupOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateABTestGroupRequest&, const CreateABTestGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateABTestGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateABTestSceneResult> CreateABTestSceneOutcome;
			typedef std::future<CreateABTestSceneOutcome> CreateABTestSceneOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateABTestSceneRequest&, const CreateABTestSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateABTestSceneAsyncHandler;
			typedef Outcome<Error, Model::CreateAppResult> CreateAppOutcome;
			typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateAppRequest&, const CreateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
			typedef Outcome<Error, Model::CreateAppGroupResult> CreateAppGroupOutcome;
			typedef std::future<CreateAppGroupOutcome> CreateAppGroupOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateAppGroupRequest&, const CreateAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateDataCollectionResult> CreateDataCollectionOutcome;
			typedef std::future<CreateDataCollectionOutcome> CreateDataCollectionOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateDataCollectionRequest&, const CreateDataCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataCollectionAsyncHandler;
			typedef Outcome<Error, Model::CreateFirstRankResult> CreateFirstRankOutcome;
			typedef std::future<CreateFirstRankOutcome> CreateFirstRankOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateFirstRankRequest&, const CreateFirstRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFirstRankAsyncHandler;
			typedef Outcome<Error, Model::CreateInterventionDictionaryResult> CreateInterventionDictionaryOutcome;
			typedef std::future<CreateInterventionDictionaryOutcome> CreateInterventionDictionaryOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateInterventionDictionaryRequest&, const CreateInterventionDictionaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInterventionDictionaryAsyncHandler;
			typedef Outcome<Error, Model::CreateModelResult> CreateModelOutcome;
			typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateModelRequest&, const CreateModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelAsyncHandler;
			typedef Outcome<Error, Model::CreateQueryProcessorResult> CreateQueryProcessorOutcome;
			typedef std::future<CreateQueryProcessorOutcome> CreateQueryProcessorOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateQueryProcessorRequest&, const CreateQueryProcessorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQueryProcessorAsyncHandler;
			typedef Outcome<Error, Model::CreateScheduledTaskResult> CreateScheduledTaskOutcome;
			typedef std::future<CreateScheduledTaskOutcome> CreateScheduledTaskOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateScheduledTaskRequest&, const CreateScheduledTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateSecondRankResult> CreateSecondRankOutcome;
			typedef std::future<CreateSecondRankOutcome> CreateSecondRankOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateSecondRankRequest&, const CreateSecondRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecondRankAsyncHandler;
			typedef Outcome<Error, Model::CreateSortScriptResult> CreateSortScriptOutcome;
			typedef std::future<CreateSortScriptOutcome> CreateSortScriptOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateSortScriptRequest&, const CreateSortScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSortScriptAsyncHandler;
			typedef Outcome<Error, Model::CreateUserAnalyzerResult> CreateUserAnalyzerOutcome;
			typedef std::future<CreateUserAnalyzerOutcome> CreateUserAnalyzerOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::CreateUserAnalyzerRequest&, const CreateUserAnalyzerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAnalyzerAsyncHandler;
			typedef Outcome<Error, Model::DeleteABTestExperimentResult> DeleteABTestExperimentOutcome;
			typedef std::future<DeleteABTestExperimentOutcome> DeleteABTestExperimentOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DeleteABTestExperimentRequest&, const DeleteABTestExperimentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteABTestExperimentAsyncHandler;
			typedef Outcome<Error, Model::DeleteABTestGroupResult> DeleteABTestGroupOutcome;
			typedef std::future<DeleteABTestGroupOutcome> DeleteABTestGroupOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DeleteABTestGroupRequest&, const DeleteABTestGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteABTestGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteABTestSceneResult> DeleteABTestSceneOutcome;
			typedef std::future<DeleteABTestSceneOutcome> DeleteABTestSceneOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DeleteABTestSceneRequest&, const DeleteABTestSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteABTestSceneAsyncHandler;
			typedef Outcome<Error, Model::DeleteModelResult> DeleteModelOutcome;
			typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DeleteModelRequest&, const DeleteModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelAsyncHandler;
			typedef Outcome<Error, Model::DeleteSortScriptResult> DeleteSortScriptOutcome;
			typedef std::future<DeleteSortScriptOutcome> DeleteSortScriptOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DeleteSortScriptRequest&, const DeleteSortScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSortScriptAsyncHandler;
			typedef Outcome<Error, Model::DeleteSortScriptFileResult> DeleteSortScriptFileOutcome;
			typedef std::future<DeleteSortScriptFileOutcome> DeleteSortScriptFileOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DeleteSortScriptFileRequest&, const DeleteSortScriptFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSortScriptFileAsyncHandler;
			typedef Outcome<Error, Model::DescribeABTestExperimentResult> DescribeABTestExperimentOutcome;
			typedef std::future<DescribeABTestExperimentOutcome> DescribeABTestExperimentOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeABTestExperimentRequest&, const DescribeABTestExperimentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeABTestExperimentAsyncHandler;
			typedef Outcome<Error, Model::DescribeABTestGroupResult> DescribeABTestGroupOutcome;
			typedef std::future<DescribeABTestGroupOutcome> DescribeABTestGroupOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeABTestGroupRequest&, const DescribeABTestGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeABTestGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeABTestSceneResult> DescribeABTestSceneOutcome;
			typedef std::future<DescribeABTestSceneOutcome> DescribeABTestSceneOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeABTestSceneRequest&, const DescribeABTestSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeABTestSceneAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppResult> DescribeAppOutcome;
			typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeAppRequest&, const DescribeAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppGroupResult> DescribeAppGroupOutcome;
			typedef std::future<DescribeAppGroupOutcome> DescribeAppGroupOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeAppGroupRequest&, const DescribeAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppGroupDataReportResult> DescribeAppGroupDataReportOutcome;
			typedef std::future<DescribeAppGroupDataReportOutcome> DescribeAppGroupDataReportOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeAppGroupDataReportRequest&, const DescribeAppGroupDataReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppGroupDataReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppStatisticsResult> DescribeAppStatisticsOutcome;
			typedef std::future<DescribeAppStatisticsOutcome> DescribeAppStatisticsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeAppStatisticsRequest&, const DescribeAppStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppsResult> DescribeAppsOutcome;
			typedef std::future<DescribeAppsOutcome> DescribeAppsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeAppsRequest&, const DescribeAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataCollctionResult> DescribeDataCollctionOutcome;
			typedef std::future<DescribeDataCollctionOutcome> DescribeDataCollctionOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeDataCollctionRequest&, const DescribeDataCollctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCollctionAsyncHandler;
			typedef Outcome<Error, Model::DescribeFirstRankResult> DescribeFirstRankOutcome;
			typedef std::future<DescribeFirstRankOutcome> DescribeFirstRankOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeFirstRankRequest&, const DescribeFirstRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirstRankAsyncHandler;
			typedef Outcome<Error, Model::DescribeInterventionDictionaryResult> DescribeInterventionDictionaryOutcome;
			typedef std::future<DescribeInterventionDictionaryOutcome> DescribeInterventionDictionaryOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeInterventionDictionaryRequest&, const DescribeInterventionDictionaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInterventionDictionaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeModelResult> DescribeModelOutcome;
			typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeModelRequest&, const DescribeModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAsyncHandler;
			typedef Outcome<Error, Model::DescribeQueryProcessorResult> DescribeQueryProcessorOutcome;
			typedef std::future<DescribeQueryProcessorOutcome> DescribeQueryProcessorOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeQueryProcessorRequest&, const DescribeQueryProcessorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQueryProcessorAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionResult> DescribeRegionOutcome;
			typedef std::future<DescribeRegionOutcome> DescribeRegionOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeRegionRequest&, const DescribeRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScheduledTaskResult> DescribeScheduledTaskOutcome;
			typedef std::future<DescribeScheduledTaskOutcome> DescribeScheduledTaskOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeScheduledTaskRequest&, const DescribeScheduledTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecondRankResult> DescribeSecondRankOutcome;
			typedef std::future<DescribeSecondRankOutcome> DescribeSecondRankOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeSecondRankRequest&, const DescribeSecondRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecondRankAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlowQueryStatusResult> DescribeSlowQueryStatusOutcome;
			typedef std::future<DescribeSlowQueryStatusOutcome> DescribeSlowQueryStatusOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeSlowQueryStatusRequest&, const DescribeSlowQueryStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowQueryStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserAnalyzerResult> DescribeUserAnalyzerOutcome;
			typedef std::future<DescribeUserAnalyzerOutcome> DescribeUserAnalyzerOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DescribeUserAnalyzerRequest&, const DescribeUserAnalyzerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAnalyzerAsyncHandler;
			typedef Outcome<Error, Model::DisableSlowQueryResult> DisableSlowQueryOutcome;
			typedef std::future<DisableSlowQueryOutcome> DisableSlowQueryOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::DisableSlowQueryRequest&, const DisableSlowQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSlowQueryAsyncHandler;
			typedef Outcome<Error, Model::EnableSlowQueryResult> EnableSlowQueryOutcome;
			typedef std::future<EnableSlowQueryOutcome> EnableSlowQueryOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::EnableSlowQueryRequest&, const EnableSlowQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSlowQueryAsyncHandler;
			typedef Outcome<Error, Model::GenerateMergedTableResult> GenerateMergedTableOutcome;
			typedef std::future<GenerateMergedTableOutcome> GenerateMergedTableOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::GenerateMergedTableRequest&, const GenerateMergedTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateMergedTableAsyncHandler;
			typedef Outcome<Error, Model::GetDomainResult> GetDomainOutcome;
			typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::GetDomainRequest&, const GetDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDomainAsyncHandler;
			typedef Outcome<Error, Model::GetModelProgressResult> GetModelProgressOutcome;
			typedef std::future<GetModelProgressOutcome> GetModelProgressOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::GetModelProgressRequest&, const GetModelProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModelProgressAsyncHandler;
			typedef Outcome<Error, Model::GetModelReportResult> GetModelReportOutcome;
			typedef std::future<GetModelReportOutcome> GetModelReportOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::GetModelReportRequest&, const GetModelReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModelReportAsyncHandler;
			typedef Outcome<Error, Model::GetScriptFileNamesResult> GetScriptFileNamesOutcome;
			typedef std::future<GetScriptFileNamesOutcome> GetScriptFileNamesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::GetScriptFileNamesRequest&, const GetScriptFileNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetScriptFileNamesAsyncHandler;
			typedef Outcome<Error, Model::GetSortScriptResult> GetSortScriptOutcome;
			typedef std::future<GetSortScriptOutcome> GetSortScriptOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::GetSortScriptRequest&, const GetSortScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSortScriptAsyncHandler;
			typedef Outcome<Error, Model::GetSortScriptFileResult> GetSortScriptFileOutcome;
			typedef std::future<GetSortScriptFileOutcome> GetSortScriptFileOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::GetSortScriptFileRequest&, const GetSortScriptFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSortScriptFileAsyncHandler;
			typedef Outcome<Error, Model::GetValidationErrorResult> GetValidationErrorOutcome;
			typedef std::future<GetValidationErrorOutcome> GetValidationErrorOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::GetValidationErrorRequest&, const GetValidationErrorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetValidationErrorAsyncHandler;
			typedef Outcome<Error, Model::GetValidationReportResult> GetValidationReportOutcome;
			typedef std::future<GetValidationReportOutcome> GetValidationReportOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::GetValidationReportRequest&, const GetValidationReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetValidationReportAsyncHandler;
			typedef Outcome<Error, Model::ListABTestExperimentsResult> ListABTestExperimentsOutcome;
			typedef std::future<ListABTestExperimentsOutcome> ListABTestExperimentsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListABTestExperimentsRequest&, const ListABTestExperimentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListABTestExperimentsAsyncHandler;
			typedef Outcome<Error, Model::ListABTestFixedFlowDividersResult> ListABTestFixedFlowDividersOutcome;
			typedef std::future<ListABTestFixedFlowDividersOutcome> ListABTestFixedFlowDividersOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListABTestFixedFlowDividersRequest&, const ListABTestFixedFlowDividersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListABTestFixedFlowDividersAsyncHandler;
			typedef Outcome<Error, Model::ListABTestGroupsResult> ListABTestGroupsOutcome;
			typedef std::future<ListABTestGroupsOutcome> ListABTestGroupsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListABTestGroupsRequest&, const ListABTestGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListABTestGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListABTestMetricsResult> ListABTestMetricsOutcome;
			typedef std::future<ListABTestMetricsOutcome> ListABTestMetricsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListABTestMetricsRequest&, const ListABTestMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListABTestMetricsAsyncHandler;
			typedef Outcome<Error, Model::ListABTestScenesResult> ListABTestScenesOutcome;
			typedef std::future<ListABTestScenesOutcome> ListABTestScenesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListABTestScenesRequest&, const ListABTestScenesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListABTestScenesAsyncHandler;
			typedef Outcome<Error, Model::ListAppGroupErrorsResult> ListAppGroupErrorsOutcome;
			typedef std::future<ListAppGroupErrorsOutcome> ListAppGroupErrorsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListAppGroupErrorsRequest&, const ListAppGroupErrorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppGroupErrorsAsyncHandler;
			typedef Outcome<Error, Model::ListAppGroupMetricsResult> ListAppGroupMetricsOutcome;
			typedef std::future<ListAppGroupMetricsOutcome> ListAppGroupMetricsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListAppGroupMetricsRequest&, const ListAppGroupMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppGroupMetricsAsyncHandler;
			typedef Outcome<Error, Model::ListAppGroupsResult> ListAppGroupsOutcome;
			typedef std::future<ListAppGroupsOutcome> ListAppGroupsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListAppGroupsRequest&, const ListAppGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListAppsResult> ListAppsOutcome;
			typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListAppsRequest&, const ListAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppsAsyncHandler;
			typedef Outcome<Error, Model::ListDataCollectionsResult> ListDataCollectionsOutcome;
			typedef std::future<ListDataCollectionsOutcome> ListDataCollectionsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListDataCollectionsRequest&, const ListDataCollectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataCollectionsAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceTableFieldsResult> ListDataSourceTableFieldsOutcome;
			typedef std::future<ListDataSourceTableFieldsOutcome> ListDataSourceTableFieldsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListDataSourceTableFieldsRequest&, const ListDataSourceTableFieldsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceTableFieldsAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceTablesResult> ListDataSourceTablesOutcome;
			typedef std::future<ListDataSourceTablesOutcome> ListDataSourceTablesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListDataSourceTablesRequest&, const ListDataSourceTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceTablesAsyncHandler;
			typedef Outcome<Error, Model::ListDeployedAlgorithmModelsResult> ListDeployedAlgorithmModelsOutcome;
			typedef std::future<ListDeployedAlgorithmModelsOutcome> ListDeployedAlgorithmModelsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListDeployedAlgorithmModelsRequest&, const ListDeployedAlgorithmModelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeployedAlgorithmModelsAsyncHandler;
			typedef Outcome<Error, Model::ListFirstRanksResult> ListFirstRanksOutcome;
			typedef std::future<ListFirstRanksOutcome> ListFirstRanksOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListFirstRanksRequest&, const ListFirstRanksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFirstRanksAsyncHandler;
			typedef Outcome<Error, Model::ListInterventionDictionariesResult> ListInterventionDictionariesOutcome;
			typedef std::future<ListInterventionDictionariesOutcome> ListInterventionDictionariesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListInterventionDictionariesRequest&, const ListInterventionDictionariesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInterventionDictionariesAsyncHandler;
			typedef Outcome<Error, Model::ListInterventionDictionaryEntriesResult> ListInterventionDictionaryEntriesOutcome;
			typedef std::future<ListInterventionDictionaryEntriesOutcome> ListInterventionDictionaryEntriesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListInterventionDictionaryEntriesRequest&, const ListInterventionDictionaryEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInterventionDictionaryEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListInterventionDictionaryNerResultsResult> ListInterventionDictionaryNerResultsOutcome;
			typedef std::future<ListInterventionDictionaryNerResultsOutcome> ListInterventionDictionaryNerResultsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListInterventionDictionaryNerResultsRequest&, const ListInterventionDictionaryNerResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInterventionDictionaryNerResultsAsyncHandler;
			typedef Outcome<Error, Model::ListInterventionDictionaryRelatedEntitiesResult> ListInterventionDictionaryRelatedEntitiesOutcome;
			typedef std::future<ListInterventionDictionaryRelatedEntitiesOutcome> ListInterventionDictionaryRelatedEntitiesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListInterventionDictionaryRelatedEntitiesRequest&, const ListInterventionDictionaryRelatedEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInterventionDictionaryRelatedEntitiesAsyncHandler;
			typedef Outcome<Error, Model::ListModelsResult> ListModelsOutcome;
			typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListModelsRequest&, const ListModelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListModelsAsyncHandler;
			typedef Outcome<Error, Model::ListQueryProcessorNersResult> ListQueryProcessorNersOutcome;
			typedef std::future<ListQueryProcessorNersOutcome> ListQueryProcessorNersOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListQueryProcessorNersRequest&, const ListQueryProcessorNersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQueryProcessorNersAsyncHandler;
			typedef Outcome<Error, Model::ListQueryProcessorsResult> ListQueryProcessorsOutcome;
			typedef std::future<ListQueryProcessorsOutcome> ListQueryProcessorsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListQueryProcessorsRequest&, const ListQueryProcessorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQueryProcessorsAsyncHandler;
			typedef Outcome<Error, Model::ListRamRolesResult> ListRamRolesOutcome;
			typedef std::future<ListRamRolesOutcome> ListRamRolesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListRamRolesRequest&, const ListRamRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRamRolesAsyncHandler;
			typedef Outcome<Error, Model::ListScheduledTasksResult> ListScheduledTasksOutcome;
			typedef std::future<ListScheduledTasksOutcome> ListScheduledTasksOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListScheduledTasksRequest&, const ListScheduledTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScheduledTasksAsyncHandler;
			typedef Outcome<Error, Model::ListSecondRanksResult> ListSecondRanksOutcome;
			typedef std::future<ListSecondRanksOutcome> ListSecondRanksOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListSecondRanksRequest&, const ListSecondRanksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecondRanksAsyncHandler;
			typedef Outcome<Error, Model::ListSlowQueryCategoriesResult> ListSlowQueryCategoriesOutcome;
			typedef std::future<ListSlowQueryCategoriesOutcome> ListSlowQueryCategoriesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListSlowQueryCategoriesRequest&, const ListSlowQueryCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSlowQueryCategoriesAsyncHandler;
			typedef Outcome<Error, Model::ListSlowQueryQueriesResult> ListSlowQueryQueriesOutcome;
			typedef std::future<ListSlowQueryQueriesOutcome> ListSlowQueryQueriesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListSlowQueryQueriesRequest&, const ListSlowQueryQueriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSlowQueryQueriesAsyncHandler;
			typedef Outcome<Error, Model::ListSortExpressionsResult> ListSortExpressionsOutcome;
			typedef std::future<ListSortExpressionsOutcome> ListSortExpressionsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListSortExpressionsRequest&, const ListSortExpressionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSortExpressionsAsyncHandler;
			typedef Outcome<Error, Model::ListSortScriptsResult> ListSortScriptsOutcome;
			typedef std::future<ListSortScriptsOutcome> ListSortScriptsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListSortScriptsRequest&, const ListSortScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSortScriptsAsyncHandler;
			typedef Outcome<Error, Model::ListStatisticLogsResult> ListStatisticLogsOutcome;
			typedef std::future<ListStatisticLogsOutcome> ListStatisticLogsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListStatisticLogsRequest&, const ListStatisticLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStatisticLogsAsyncHandler;
			typedef Outcome<Error, Model::ListStatisticReportResult> ListStatisticReportOutcome;
			typedef std::future<ListStatisticReportOutcome> ListStatisticReportOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListStatisticReportRequest&, const ListStatisticReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStatisticReportAsyncHandler;
			typedef Outcome<Error, Model::ListUserAnalyzerEntriesResult> ListUserAnalyzerEntriesOutcome;
			typedef std::future<ListUserAnalyzerEntriesOutcome> ListUserAnalyzerEntriesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListUserAnalyzerEntriesRequest&, const ListUserAnalyzerEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserAnalyzerEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListUserAnalyzersResult> ListUserAnalyzersOutcome;
			typedef std::future<ListUserAnalyzersOutcome> ListUserAnalyzersOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ListUserAnalyzersRequest&, const ListUserAnalyzersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserAnalyzersAsyncHandler;
			typedef Outcome<Error, Model::ModifyAppGroupResult> ModifyAppGroupOutcome;
			typedef std::future<ModifyAppGroupOutcome> ModifyAppGroupOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ModifyAppGroupRequest&, const ModifyAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyAppGroupQuotaResult> ModifyAppGroupQuotaOutcome;
			typedef std::future<ModifyAppGroupQuotaOutcome> ModifyAppGroupQuotaOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ModifyAppGroupQuotaRequest&, const ModifyAppGroupQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppGroupQuotaAsyncHandler;
			typedef Outcome<Error, Model::ModifyFirstRankResult> ModifyFirstRankOutcome;
			typedef std::future<ModifyFirstRankOutcome> ModifyFirstRankOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ModifyFirstRankRequest&, const ModifyFirstRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFirstRankAsyncHandler;
			typedef Outcome<Error, Model::ModifyModelResult> ModifyModelOutcome;
			typedef std::future<ModifyModelOutcome> ModifyModelOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ModifyModelRequest&, const ModifyModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelAsyncHandler;
			typedef Outcome<Error, Model::ModifyQueryProcessorResult> ModifyQueryProcessorOutcome;
			typedef std::future<ModifyQueryProcessorOutcome> ModifyQueryProcessorOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ModifyQueryProcessorRequest&, const ModifyQueryProcessorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQueryProcessorAsyncHandler;
			typedef Outcome<Error, Model::ModifyScheduledTaskResult> ModifyScheduledTaskOutcome;
			typedef std::future<ModifyScheduledTaskOutcome> ModifyScheduledTaskOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ModifyScheduledTaskRequest&, const ModifyScheduledTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledTaskAsyncHandler;
			typedef Outcome<Error, Model::ModifySecondRankResult> ModifySecondRankOutcome;
			typedef std::future<ModifySecondRankOutcome> ModifySecondRankOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ModifySecondRankRequest&, const ModifySecondRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecondRankAsyncHandler;
			typedef Outcome<Error, Model::PreviewModelResult> PreviewModelOutcome;
			typedef std::future<PreviewModelOutcome> PreviewModelOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::PreviewModelRequest&, const PreviewModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreviewModelAsyncHandler;
			typedef Outcome<Error, Model::PushInterventionDictionaryEntriesResult> PushInterventionDictionaryEntriesOutcome;
			typedef std::future<PushInterventionDictionaryEntriesOutcome> PushInterventionDictionaryEntriesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::PushInterventionDictionaryEntriesRequest&, const PushInterventionDictionaryEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushInterventionDictionaryEntriesAsyncHandler;
			typedef Outcome<Error, Model::PushUserAnalyzerEntriesResult> PushUserAnalyzerEntriesOutcome;
			typedef std::future<PushUserAnalyzerEntriesOutcome> PushUserAnalyzerEntriesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::PushUserAnalyzerEntriesRequest&, const PushUserAnalyzerEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushUserAnalyzerEntriesAsyncHandler;
			typedef Outcome<Error, Model::RankPreviewQueryResult> RankPreviewQueryOutcome;
			typedef std::future<RankPreviewQueryOutcome> RankPreviewQueryOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RankPreviewQueryRequest&, const RankPreviewQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RankPreviewQueryAsyncHandler;
			typedef Outcome<Error, Model::ReleaseSortScriptResult> ReleaseSortScriptOutcome;
			typedef std::future<ReleaseSortScriptOutcome> ReleaseSortScriptOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ReleaseSortScriptRequest&, const ReleaseSortScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseSortScriptAsyncHandler;
			typedef Outcome<Error, Model::RemoveAppResult> RemoveAppOutcome;
			typedef std::future<RemoveAppOutcome> RemoveAppOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RemoveAppRequest&, const RemoveAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAppAsyncHandler;
			typedef Outcome<Error, Model::RemoveAppGroupResult> RemoveAppGroupOutcome;
			typedef std::future<RemoveAppGroupOutcome> RemoveAppGroupOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RemoveAppGroupRequest&, const RemoveAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAppGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveDataCollectionResult> RemoveDataCollectionOutcome;
			typedef std::future<RemoveDataCollectionOutcome> RemoveDataCollectionOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RemoveDataCollectionRequest&, const RemoveDataCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveDataCollectionAsyncHandler;
			typedef Outcome<Error, Model::RemoveFirstRankResult> RemoveFirstRankOutcome;
			typedef std::future<RemoveFirstRankOutcome> RemoveFirstRankOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RemoveFirstRankRequest&, const RemoveFirstRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveFirstRankAsyncHandler;
			typedef Outcome<Error, Model::RemoveInterventionDictionaryResult> RemoveInterventionDictionaryOutcome;
			typedef std::future<RemoveInterventionDictionaryOutcome> RemoveInterventionDictionaryOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RemoveInterventionDictionaryRequest&, const RemoveInterventionDictionaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInterventionDictionaryAsyncHandler;
			typedef Outcome<Error, Model::RemoveQueryProcessorResult> RemoveQueryProcessorOutcome;
			typedef std::future<RemoveQueryProcessorOutcome> RemoveQueryProcessorOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RemoveQueryProcessorRequest&, const RemoveQueryProcessorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveQueryProcessorAsyncHandler;
			typedef Outcome<Error, Model::RemoveScheduledTaskResult> RemoveScheduledTaskOutcome;
			typedef std::future<RemoveScheduledTaskOutcome> RemoveScheduledTaskOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RemoveScheduledTaskRequest&, const RemoveScheduledTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveScheduledTaskAsyncHandler;
			typedef Outcome<Error, Model::RemoveSecondRankResult> RemoveSecondRankOutcome;
			typedef std::future<RemoveSecondRankOutcome> RemoveSecondRankOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RemoveSecondRankRequest&, const RemoveSecondRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveSecondRankAsyncHandler;
			typedef Outcome<Error, Model::RemoveUserAnalyzerResult> RemoveUserAnalyzerOutcome;
			typedef std::future<RemoveUserAnalyzerOutcome> RemoveUserAnalyzerOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RemoveUserAnalyzerRequest&, const RemoveUserAnalyzerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserAnalyzerAsyncHandler;
			typedef Outcome<Error, Model::RenewAppGroupResult> RenewAppGroupOutcome;
			typedef std::future<RenewAppGroupOutcome> RenewAppGroupOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::RenewAppGroupRequest&, const RenewAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewAppGroupAsyncHandler;
			typedef Outcome<Error, Model::ReplaceAppGroupCommodityCodeResult> ReplaceAppGroupCommodityCodeOutcome;
			typedef std::future<ReplaceAppGroupCommodityCodeOutcome> ReplaceAppGroupCommodityCodeOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::ReplaceAppGroupCommodityCodeRequest&, const ReplaceAppGroupCommodityCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceAppGroupCommodityCodeAsyncHandler;
			typedef Outcome<Error, Model::SaveSortScriptFileResult> SaveSortScriptFileOutcome;
			typedef std::future<SaveSortScriptFileOutcome> SaveSortScriptFileOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::SaveSortScriptFileRequest&, const SaveSortScriptFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveSortScriptFileAsyncHandler;
			typedef Outcome<Error, Model::StartSlowQueryAnalyzerResult> StartSlowQueryAnalyzerOutcome;
			typedef std::future<StartSlowQueryAnalyzerOutcome> StartSlowQueryAnalyzerOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::StartSlowQueryAnalyzerRequest&, const StartSlowQueryAnalyzerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartSlowQueryAnalyzerAsyncHandler;
			typedef Outcome<Error, Model::TrainModelResult> TrainModelOutcome;
			typedef std::future<TrainModelOutcome> TrainModelOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::TrainModelRequest&, const TrainModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TrainModelAsyncHandler;
			typedef Outcome<Error, Model::UpdateABTestExperimentResult> UpdateABTestExperimentOutcome;
			typedef std::future<UpdateABTestExperimentOutcome> UpdateABTestExperimentOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::UpdateABTestExperimentRequest&, const UpdateABTestExperimentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateABTestExperimentAsyncHandler;
			typedef Outcome<Error, Model::UpdateABTestFixedFlowDividersResult> UpdateABTestFixedFlowDividersOutcome;
			typedef std::future<UpdateABTestFixedFlowDividersOutcome> UpdateABTestFixedFlowDividersOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::UpdateABTestFixedFlowDividersRequest&, const UpdateABTestFixedFlowDividersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateABTestFixedFlowDividersAsyncHandler;
			typedef Outcome<Error, Model::UpdateABTestGroupResult> UpdateABTestGroupOutcome;
			typedef std::future<UpdateABTestGroupOutcome> UpdateABTestGroupOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::UpdateABTestGroupRequest&, const UpdateABTestGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateABTestGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateABTestSceneResult> UpdateABTestSceneOutcome;
			typedef std::future<UpdateABTestSceneOutcome> UpdateABTestSceneOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::UpdateABTestSceneRequest&, const UpdateABTestSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateABTestSceneAsyncHandler;
			typedef Outcome<Error, Model::UpdateFetchFieldsResult> UpdateFetchFieldsOutcome;
			typedef std::future<UpdateFetchFieldsOutcome> UpdateFetchFieldsOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::UpdateFetchFieldsRequest&, const UpdateFetchFieldsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFetchFieldsAsyncHandler;
			typedef Outcome<Error, Model::UpdateSummariesResult> UpdateSummariesOutcome;
			typedef std::future<UpdateSummariesOutcome> UpdateSummariesOutcomeCallable;
			typedef std::function<void(const OpenSearchClient*, const Model::UpdateSummariesRequest&, const UpdateSummariesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSummariesAsyncHandler;

			OpenSearchClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OpenSearchClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OpenSearchClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OpenSearchClient();
			CompileSortScriptOutcome compileSortScript(const Model::CompileSortScriptRequest &request)const;
			void compileSortScriptAsync(const Model::CompileSortScriptRequest& request, const CompileSortScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompileSortScriptOutcomeCallable compileSortScriptCallable(const Model::CompileSortScriptRequest& request) const;
			CreateABTestExperimentOutcome createABTestExperiment(const Model::CreateABTestExperimentRequest &request)const;
			void createABTestExperimentAsync(const Model::CreateABTestExperimentRequest& request, const CreateABTestExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateABTestExperimentOutcomeCallable createABTestExperimentCallable(const Model::CreateABTestExperimentRequest& request) const;
			CreateABTestGroupOutcome createABTestGroup(const Model::CreateABTestGroupRequest &request)const;
			void createABTestGroupAsync(const Model::CreateABTestGroupRequest& request, const CreateABTestGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateABTestGroupOutcomeCallable createABTestGroupCallable(const Model::CreateABTestGroupRequest& request) const;
			CreateABTestSceneOutcome createABTestScene(const Model::CreateABTestSceneRequest &request)const;
			void createABTestSceneAsync(const Model::CreateABTestSceneRequest& request, const CreateABTestSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateABTestSceneOutcomeCallable createABTestSceneCallable(const Model::CreateABTestSceneRequest& request) const;
			CreateAppOutcome createApp(const Model::CreateAppRequest &request)const;
			void createAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppOutcomeCallable createAppCallable(const Model::CreateAppRequest& request) const;
			CreateAppGroupOutcome createAppGroup(const Model::CreateAppGroupRequest &request)const;
			void createAppGroupAsync(const Model::CreateAppGroupRequest& request, const CreateAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppGroupOutcomeCallable createAppGroupCallable(const Model::CreateAppGroupRequest& request) const;
			CreateDataCollectionOutcome createDataCollection(const Model::CreateDataCollectionRequest &request)const;
			void createDataCollectionAsync(const Model::CreateDataCollectionRequest& request, const CreateDataCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataCollectionOutcomeCallable createDataCollectionCallable(const Model::CreateDataCollectionRequest& request) const;
			CreateFirstRankOutcome createFirstRank(const Model::CreateFirstRankRequest &request)const;
			void createFirstRankAsync(const Model::CreateFirstRankRequest& request, const CreateFirstRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFirstRankOutcomeCallable createFirstRankCallable(const Model::CreateFirstRankRequest& request) const;
			CreateInterventionDictionaryOutcome createInterventionDictionary(const Model::CreateInterventionDictionaryRequest &request)const;
			void createInterventionDictionaryAsync(const Model::CreateInterventionDictionaryRequest& request, const CreateInterventionDictionaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInterventionDictionaryOutcomeCallable createInterventionDictionaryCallable(const Model::CreateInterventionDictionaryRequest& request) const;
			CreateModelOutcome createModel(const Model::CreateModelRequest &request)const;
			void createModelAsync(const Model::CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateModelOutcomeCallable createModelCallable(const Model::CreateModelRequest& request) const;
			CreateQueryProcessorOutcome createQueryProcessor(const Model::CreateQueryProcessorRequest &request)const;
			void createQueryProcessorAsync(const Model::CreateQueryProcessorRequest& request, const CreateQueryProcessorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQueryProcessorOutcomeCallable createQueryProcessorCallable(const Model::CreateQueryProcessorRequest& request) const;
			CreateScheduledTaskOutcome createScheduledTask(const Model::CreateScheduledTaskRequest &request)const;
			void createScheduledTaskAsync(const Model::CreateScheduledTaskRequest& request, const CreateScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScheduledTaskOutcomeCallable createScheduledTaskCallable(const Model::CreateScheduledTaskRequest& request) const;
			CreateSecondRankOutcome createSecondRank(const Model::CreateSecondRankRequest &request)const;
			void createSecondRankAsync(const Model::CreateSecondRankRequest& request, const CreateSecondRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecondRankOutcomeCallable createSecondRankCallable(const Model::CreateSecondRankRequest& request) const;
			CreateSortScriptOutcome createSortScript(const Model::CreateSortScriptRequest &request)const;
			void createSortScriptAsync(const Model::CreateSortScriptRequest& request, const CreateSortScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSortScriptOutcomeCallable createSortScriptCallable(const Model::CreateSortScriptRequest& request) const;
			CreateUserAnalyzerOutcome createUserAnalyzer(const Model::CreateUserAnalyzerRequest &request)const;
			void createUserAnalyzerAsync(const Model::CreateUserAnalyzerRequest& request, const CreateUserAnalyzerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserAnalyzerOutcomeCallable createUserAnalyzerCallable(const Model::CreateUserAnalyzerRequest& request) const;
			DeleteABTestExperimentOutcome deleteABTestExperiment(const Model::DeleteABTestExperimentRequest &request)const;
			void deleteABTestExperimentAsync(const Model::DeleteABTestExperimentRequest& request, const DeleteABTestExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteABTestExperimentOutcomeCallable deleteABTestExperimentCallable(const Model::DeleteABTestExperimentRequest& request) const;
			DeleteABTestGroupOutcome deleteABTestGroup(const Model::DeleteABTestGroupRequest &request)const;
			void deleteABTestGroupAsync(const Model::DeleteABTestGroupRequest& request, const DeleteABTestGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteABTestGroupOutcomeCallable deleteABTestGroupCallable(const Model::DeleteABTestGroupRequest& request) const;
			DeleteABTestSceneOutcome deleteABTestScene(const Model::DeleteABTestSceneRequest &request)const;
			void deleteABTestSceneAsync(const Model::DeleteABTestSceneRequest& request, const DeleteABTestSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteABTestSceneOutcomeCallable deleteABTestSceneCallable(const Model::DeleteABTestSceneRequest& request) const;
			DeleteModelOutcome deleteModel(const Model::DeleteModelRequest &request)const;
			void deleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteModelOutcomeCallable deleteModelCallable(const Model::DeleteModelRequest& request) const;
			DeleteSortScriptOutcome deleteSortScript(const Model::DeleteSortScriptRequest &request)const;
			void deleteSortScriptAsync(const Model::DeleteSortScriptRequest& request, const DeleteSortScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSortScriptOutcomeCallable deleteSortScriptCallable(const Model::DeleteSortScriptRequest& request) const;
			DeleteSortScriptFileOutcome deleteSortScriptFile(const Model::DeleteSortScriptFileRequest &request)const;
			void deleteSortScriptFileAsync(const Model::DeleteSortScriptFileRequest& request, const DeleteSortScriptFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSortScriptFileOutcomeCallable deleteSortScriptFileCallable(const Model::DeleteSortScriptFileRequest& request) const;
			DescribeABTestExperimentOutcome describeABTestExperiment(const Model::DescribeABTestExperimentRequest &request)const;
			void describeABTestExperimentAsync(const Model::DescribeABTestExperimentRequest& request, const DescribeABTestExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeABTestExperimentOutcomeCallable describeABTestExperimentCallable(const Model::DescribeABTestExperimentRequest& request) const;
			DescribeABTestGroupOutcome describeABTestGroup(const Model::DescribeABTestGroupRequest &request)const;
			void describeABTestGroupAsync(const Model::DescribeABTestGroupRequest& request, const DescribeABTestGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeABTestGroupOutcomeCallable describeABTestGroupCallable(const Model::DescribeABTestGroupRequest& request) const;
			DescribeABTestSceneOutcome describeABTestScene(const Model::DescribeABTestSceneRequest &request)const;
			void describeABTestSceneAsync(const Model::DescribeABTestSceneRequest& request, const DescribeABTestSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeABTestSceneOutcomeCallable describeABTestSceneCallable(const Model::DescribeABTestSceneRequest& request) const;
			DescribeAppOutcome describeApp(const Model::DescribeAppRequest &request)const;
			void describeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppOutcomeCallable describeAppCallable(const Model::DescribeAppRequest& request) const;
			DescribeAppGroupOutcome describeAppGroup(const Model::DescribeAppGroupRequest &request)const;
			void describeAppGroupAsync(const Model::DescribeAppGroupRequest& request, const DescribeAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppGroupOutcomeCallable describeAppGroupCallable(const Model::DescribeAppGroupRequest& request) const;
			DescribeAppGroupDataReportOutcome describeAppGroupDataReport(const Model::DescribeAppGroupDataReportRequest &request)const;
			void describeAppGroupDataReportAsync(const Model::DescribeAppGroupDataReportRequest& request, const DescribeAppGroupDataReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppGroupDataReportOutcomeCallable describeAppGroupDataReportCallable(const Model::DescribeAppGroupDataReportRequest& request) const;
			DescribeAppStatisticsOutcome describeAppStatistics(const Model::DescribeAppStatisticsRequest &request)const;
			void describeAppStatisticsAsync(const Model::DescribeAppStatisticsRequest& request, const DescribeAppStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppStatisticsOutcomeCallable describeAppStatisticsCallable(const Model::DescribeAppStatisticsRequest& request) const;
			DescribeAppsOutcome describeApps(const Model::DescribeAppsRequest &request)const;
			void describeAppsAsync(const Model::DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppsOutcomeCallable describeAppsCallable(const Model::DescribeAppsRequest& request) const;
			DescribeDataCollctionOutcome describeDataCollction(const Model::DescribeDataCollctionRequest &request)const;
			void describeDataCollctionAsync(const Model::DescribeDataCollctionRequest& request, const DescribeDataCollctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataCollctionOutcomeCallable describeDataCollctionCallable(const Model::DescribeDataCollctionRequest& request) const;
			DescribeFirstRankOutcome describeFirstRank(const Model::DescribeFirstRankRequest &request)const;
			void describeFirstRankAsync(const Model::DescribeFirstRankRequest& request, const DescribeFirstRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFirstRankOutcomeCallable describeFirstRankCallable(const Model::DescribeFirstRankRequest& request) const;
			DescribeInterventionDictionaryOutcome describeInterventionDictionary(const Model::DescribeInterventionDictionaryRequest &request)const;
			void describeInterventionDictionaryAsync(const Model::DescribeInterventionDictionaryRequest& request, const DescribeInterventionDictionaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInterventionDictionaryOutcomeCallable describeInterventionDictionaryCallable(const Model::DescribeInterventionDictionaryRequest& request) const;
			DescribeModelOutcome describeModel(const Model::DescribeModelRequest &request)const;
			void describeModelAsync(const Model::DescribeModelRequest& request, const DescribeModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModelOutcomeCallable describeModelCallable(const Model::DescribeModelRequest& request) const;
			DescribeQueryProcessorOutcome describeQueryProcessor(const Model::DescribeQueryProcessorRequest &request)const;
			void describeQueryProcessorAsync(const Model::DescribeQueryProcessorRequest& request, const DescribeQueryProcessorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQueryProcessorOutcomeCallable describeQueryProcessorCallable(const Model::DescribeQueryProcessorRequest& request) const;
			DescribeRegionOutcome describeRegion(const Model::DescribeRegionRequest &request)const;
			void describeRegionAsync(const Model::DescribeRegionRequest& request, const DescribeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionOutcomeCallable describeRegionCallable(const Model::DescribeRegionRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeScheduledTaskOutcome describeScheduledTask(const Model::DescribeScheduledTaskRequest &request)const;
			void describeScheduledTaskAsync(const Model::DescribeScheduledTaskRequest& request, const DescribeScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScheduledTaskOutcomeCallable describeScheduledTaskCallable(const Model::DescribeScheduledTaskRequest& request) const;
			DescribeSecondRankOutcome describeSecondRank(const Model::DescribeSecondRankRequest &request)const;
			void describeSecondRankAsync(const Model::DescribeSecondRankRequest& request, const DescribeSecondRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecondRankOutcomeCallable describeSecondRankCallable(const Model::DescribeSecondRankRequest& request) const;
			DescribeSlowQueryStatusOutcome describeSlowQueryStatus(const Model::DescribeSlowQueryStatusRequest &request)const;
			void describeSlowQueryStatusAsync(const Model::DescribeSlowQueryStatusRequest& request, const DescribeSlowQueryStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlowQueryStatusOutcomeCallable describeSlowQueryStatusCallable(const Model::DescribeSlowQueryStatusRequest& request) const;
			DescribeUserAnalyzerOutcome describeUserAnalyzer(const Model::DescribeUserAnalyzerRequest &request)const;
			void describeUserAnalyzerAsync(const Model::DescribeUserAnalyzerRequest& request, const DescribeUserAnalyzerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserAnalyzerOutcomeCallable describeUserAnalyzerCallable(const Model::DescribeUserAnalyzerRequest& request) const;
			DisableSlowQueryOutcome disableSlowQuery(const Model::DisableSlowQueryRequest &request)const;
			void disableSlowQueryAsync(const Model::DisableSlowQueryRequest& request, const DisableSlowQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSlowQueryOutcomeCallable disableSlowQueryCallable(const Model::DisableSlowQueryRequest& request) const;
			EnableSlowQueryOutcome enableSlowQuery(const Model::EnableSlowQueryRequest &request)const;
			void enableSlowQueryAsync(const Model::EnableSlowQueryRequest& request, const EnableSlowQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSlowQueryOutcomeCallable enableSlowQueryCallable(const Model::EnableSlowQueryRequest& request) const;
			GenerateMergedTableOutcome generateMergedTable(const Model::GenerateMergedTableRequest &request)const;
			void generateMergedTableAsync(const Model::GenerateMergedTableRequest& request, const GenerateMergedTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateMergedTableOutcomeCallable generateMergedTableCallable(const Model::GenerateMergedTableRequest& request) const;
			GetDomainOutcome getDomain(const Model::GetDomainRequest &request)const;
			void getDomainAsync(const Model::GetDomainRequest& request, const GetDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDomainOutcomeCallable getDomainCallable(const Model::GetDomainRequest& request) const;
			GetModelProgressOutcome getModelProgress(const Model::GetModelProgressRequest &request)const;
			void getModelProgressAsync(const Model::GetModelProgressRequest& request, const GetModelProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModelProgressOutcomeCallable getModelProgressCallable(const Model::GetModelProgressRequest& request) const;
			GetModelReportOutcome getModelReport(const Model::GetModelReportRequest &request)const;
			void getModelReportAsync(const Model::GetModelReportRequest& request, const GetModelReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModelReportOutcomeCallable getModelReportCallable(const Model::GetModelReportRequest& request) const;
			GetScriptFileNamesOutcome getScriptFileNames(const Model::GetScriptFileNamesRequest &request)const;
			void getScriptFileNamesAsync(const Model::GetScriptFileNamesRequest& request, const GetScriptFileNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetScriptFileNamesOutcomeCallable getScriptFileNamesCallable(const Model::GetScriptFileNamesRequest& request) const;
			GetSortScriptOutcome getSortScript(const Model::GetSortScriptRequest &request)const;
			void getSortScriptAsync(const Model::GetSortScriptRequest& request, const GetSortScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSortScriptOutcomeCallable getSortScriptCallable(const Model::GetSortScriptRequest& request) const;
			GetSortScriptFileOutcome getSortScriptFile(const Model::GetSortScriptFileRequest &request)const;
			void getSortScriptFileAsync(const Model::GetSortScriptFileRequest& request, const GetSortScriptFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSortScriptFileOutcomeCallable getSortScriptFileCallable(const Model::GetSortScriptFileRequest& request) const;
			GetValidationErrorOutcome getValidationError(const Model::GetValidationErrorRequest &request)const;
			void getValidationErrorAsync(const Model::GetValidationErrorRequest& request, const GetValidationErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetValidationErrorOutcomeCallable getValidationErrorCallable(const Model::GetValidationErrorRequest& request) const;
			GetValidationReportOutcome getValidationReport(const Model::GetValidationReportRequest &request)const;
			void getValidationReportAsync(const Model::GetValidationReportRequest& request, const GetValidationReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetValidationReportOutcomeCallable getValidationReportCallable(const Model::GetValidationReportRequest& request) const;
			ListABTestExperimentsOutcome listABTestExperiments(const Model::ListABTestExperimentsRequest &request)const;
			void listABTestExperimentsAsync(const Model::ListABTestExperimentsRequest& request, const ListABTestExperimentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListABTestExperimentsOutcomeCallable listABTestExperimentsCallable(const Model::ListABTestExperimentsRequest& request) const;
			ListABTestFixedFlowDividersOutcome listABTestFixedFlowDividers(const Model::ListABTestFixedFlowDividersRequest &request)const;
			void listABTestFixedFlowDividersAsync(const Model::ListABTestFixedFlowDividersRequest& request, const ListABTestFixedFlowDividersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListABTestFixedFlowDividersOutcomeCallable listABTestFixedFlowDividersCallable(const Model::ListABTestFixedFlowDividersRequest& request) const;
			ListABTestGroupsOutcome listABTestGroups(const Model::ListABTestGroupsRequest &request)const;
			void listABTestGroupsAsync(const Model::ListABTestGroupsRequest& request, const ListABTestGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListABTestGroupsOutcomeCallable listABTestGroupsCallable(const Model::ListABTestGroupsRequest& request) const;
			ListABTestMetricsOutcome listABTestMetrics(const Model::ListABTestMetricsRequest &request)const;
			void listABTestMetricsAsync(const Model::ListABTestMetricsRequest& request, const ListABTestMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListABTestMetricsOutcomeCallable listABTestMetricsCallable(const Model::ListABTestMetricsRequest& request) const;
			ListABTestScenesOutcome listABTestScenes(const Model::ListABTestScenesRequest &request)const;
			void listABTestScenesAsync(const Model::ListABTestScenesRequest& request, const ListABTestScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListABTestScenesOutcomeCallable listABTestScenesCallable(const Model::ListABTestScenesRequest& request) const;
			ListAppGroupErrorsOutcome listAppGroupErrors(const Model::ListAppGroupErrorsRequest &request)const;
			void listAppGroupErrorsAsync(const Model::ListAppGroupErrorsRequest& request, const ListAppGroupErrorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppGroupErrorsOutcomeCallable listAppGroupErrorsCallable(const Model::ListAppGroupErrorsRequest& request) const;
			ListAppGroupMetricsOutcome listAppGroupMetrics(const Model::ListAppGroupMetricsRequest &request)const;
			void listAppGroupMetricsAsync(const Model::ListAppGroupMetricsRequest& request, const ListAppGroupMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppGroupMetricsOutcomeCallable listAppGroupMetricsCallable(const Model::ListAppGroupMetricsRequest& request) const;
			ListAppGroupsOutcome listAppGroups(const Model::ListAppGroupsRequest &request)const;
			void listAppGroupsAsync(const Model::ListAppGroupsRequest& request, const ListAppGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppGroupsOutcomeCallable listAppGroupsCallable(const Model::ListAppGroupsRequest& request) const;
			ListAppsOutcome listApps(const Model::ListAppsRequest &request)const;
			void listAppsAsync(const Model::ListAppsRequest& request, const ListAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppsOutcomeCallable listAppsCallable(const Model::ListAppsRequest& request) const;
			ListDataCollectionsOutcome listDataCollections(const Model::ListDataCollectionsRequest &request)const;
			void listDataCollectionsAsync(const Model::ListDataCollectionsRequest& request, const ListDataCollectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataCollectionsOutcomeCallable listDataCollectionsCallable(const Model::ListDataCollectionsRequest& request) const;
			ListDataSourceTableFieldsOutcome listDataSourceTableFields(const Model::ListDataSourceTableFieldsRequest &request)const;
			void listDataSourceTableFieldsAsync(const Model::ListDataSourceTableFieldsRequest& request, const ListDataSourceTableFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceTableFieldsOutcomeCallable listDataSourceTableFieldsCallable(const Model::ListDataSourceTableFieldsRequest& request) const;
			ListDataSourceTablesOutcome listDataSourceTables(const Model::ListDataSourceTablesRequest &request)const;
			void listDataSourceTablesAsync(const Model::ListDataSourceTablesRequest& request, const ListDataSourceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceTablesOutcomeCallable listDataSourceTablesCallable(const Model::ListDataSourceTablesRequest& request) const;
			ListDeployedAlgorithmModelsOutcome listDeployedAlgorithmModels(const Model::ListDeployedAlgorithmModelsRequest &request)const;
			void listDeployedAlgorithmModelsAsync(const Model::ListDeployedAlgorithmModelsRequest& request, const ListDeployedAlgorithmModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeployedAlgorithmModelsOutcomeCallable listDeployedAlgorithmModelsCallable(const Model::ListDeployedAlgorithmModelsRequest& request) const;
			ListFirstRanksOutcome listFirstRanks(const Model::ListFirstRanksRequest &request)const;
			void listFirstRanksAsync(const Model::ListFirstRanksRequest& request, const ListFirstRanksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFirstRanksOutcomeCallable listFirstRanksCallable(const Model::ListFirstRanksRequest& request) const;
			ListInterventionDictionariesOutcome listInterventionDictionaries(const Model::ListInterventionDictionariesRequest &request)const;
			void listInterventionDictionariesAsync(const Model::ListInterventionDictionariesRequest& request, const ListInterventionDictionariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInterventionDictionariesOutcomeCallable listInterventionDictionariesCallable(const Model::ListInterventionDictionariesRequest& request) const;
			ListInterventionDictionaryEntriesOutcome listInterventionDictionaryEntries(const Model::ListInterventionDictionaryEntriesRequest &request)const;
			void listInterventionDictionaryEntriesAsync(const Model::ListInterventionDictionaryEntriesRequest& request, const ListInterventionDictionaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInterventionDictionaryEntriesOutcomeCallable listInterventionDictionaryEntriesCallable(const Model::ListInterventionDictionaryEntriesRequest& request) const;
			ListInterventionDictionaryNerResultsOutcome listInterventionDictionaryNerResults(const Model::ListInterventionDictionaryNerResultsRequest &request)const;
			void listInterventionDictionaryNerResultsAsync(const Model::ListInterventionDictionaryNerResultsRequest& request, const ListInterventionDictionaryNerResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInterventionDictionaryNerResultsOutcomeCallable listInterventionDictionaryNerResultsCallable(const Model::ListInterventionDictionaryNerResultsRequest& request) const;
			ListInterventionDictionaryRelatedEntitiesOutcome listInterventionDictionaryRelatedEntities(const Model::ListInterventionDictionaryRelatedEntitiesRequest &request)const;
			void listInterventionDictionaryRelatedEntitiesAsync(const Model::ListInterventionDictionaryRelatedEntitiesRequest& request, const ListInterventionDictionaryRelatedEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInterventionDictionaryRelatedEntitiesOutcomeCallable listInterventionDictionaryRelatedEntitiesCallable(const Model::ListInterventionDictionaryRelatedEntitiesRequest& request) const;
			ListModelsOutcome listModels(const Model::ListModelsRequest &request)const;
			void listModelsAsync(const Model::ListModelsRequest& request, const ListModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListModelsOutcomeCallable listModelsCallable(const Model::ListModelsRequest& request) const;
			ListQueryProcessorNersOutcome listQueryProcessorNers(const Model::ListQueryProcessorNersRequest &request)const;
			void listQueryProcessorNersAsync(const Model::ListQueryProcessorNersRequest& request, const ListQueryProcessorNersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQueryProcessorNersOutcomeCallable listQueryProcessorNersCallable(const Model::ListQueryProcessorNersRequest& request) const;
			ListQueryProcessorsOutcome listQueryProcessors(const Model::ListQueryProcessorsRequest &request)const;
			void listQueryProcessorsAsync(const Model::ListQueryProcessorsRequest& request, const ListQueryProcessorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQueryProcessorsOutcomeCallable listQueryProcessorsCallable(const Model::ListQueryProcessorsRequest& request) const;
			ListRamRolesOutcome listRamRoles(const Model::ListRamRolesRequest &request)const;
			void listRamRolesAsync(const Model::ListRamRolesRequest& request, const ListRamRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRamRolesOutcomeCallable listRamRolesCallable(const Model::ListRamRolesRequest& request) const;
			ListScheduledTasksOutcome listScheduledTasks(const Model::ListScheduledTasksRequest &request)const;
			void listScheduledTasksAsync(const Model::ListScheduledTasksRequest& request, const ListScheduledTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScheduledTasksOutcomeCallable listScheduledTasksCallable(const Model::ListScheduledTasksRequest& request) const;
			ListSecondRanksOutcome listSecondRanks(const Model::ListSecondRanksRequest &request)const;
			void listSecondRanksAsync(const Model::ListSecondRanksRequest& request, const ListSecondRanksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecondRanksOutcomeCallable listSecondRanksCallable(const Model::ListSecondRanksRequest& request) const;
			ListSlowQueryCategoriesOutcome listSlowQueryCategories(const Model::ListSlowQueryCategoriesRequest &request)const;
			void listSlowQueryCategoriesAsync(const Model::ListSlowQueryCategoriesRequest& request, const ListSlowQueryCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSlowQueryCategoriesOutcomeCallable listSlowQueryCategoriesCallable(const Model::ListSlowQueryCategoriesRequest& request) const;
			ListSlowQueryQueriesOutcome listSlowQueryQueries(const Model::ListSlowQueryQueriesRequest &request)const;
			void listSlowQueryQueriesAsync(const Model::ListSlowQueryQueriesRequest& request, const ListSlowQueryQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSlowQueryQueriesOutcomeCallable listSlowQueryQueriesCallable(const Model::ListSlowQueryQueriesRequest& request) const;
			ListSortExpressionsOutcome listSortExpressions(const Model::ListSortExpressionsRequest &request)const;
			void listSortExpressionsAsync(const Model::ListSortExpressionsRequest& request, const ListSortExpressionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSortExpressionsOutcomeCallable listSortExpressionsCallable(const Model::ListSortExpressionsRequest& request) const;
			ListSortScriptsOutcome listSortScripts(const Model::ListSortScriptsRequest &request)const;
			void listSortScriptsAsync(const Model::ListSortScriptsRequest& request, const ListSortScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSortScriptsOutcomeCallable listSortScriptsCallable(const Model::ListSortScriptsRequest& request) const;
			ListStatisticLogsOutcome listStatisticLogs(const Model::ListStatisticLogsRequest &request)const;
			void listStatisticLogsAsync(const Model::ListStatisticLogsRequest& request, const ListStatisticLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStatisticLogsOutcomeCallable listStatisticLogsCallable(const Model::ListStatisticLogsRequest& request) const;
			ListStatisticReportOutcome listStatisticReport(const Model::ListStatisticReportRequest &request)const;
			void listStatisticReportAsync(const Model::ListStatisticReportRequest& request, const ListStatisticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStatisticReportOutcomeCallable listStatisticReportCallable(const Model::ListStatisticReportRequest& request) const;
			ListUserAnalyzerEntriesOutcome listUserAnalyzerEntries(const Model::ListUserAnalyzerEntriesRequest &request)const;
			void listUserAnalyzerEntriesAsync(const Model::ListUserAnalyzerEntriesRequest& request, const ListUserAnalyzerEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserAnalyzerEntriesOutcomeCallable listUserAnalyzerEntriesCallable(const Model::ListUserAnalyzerEntriesRequest& request) const;
			ListUserAnalyzersOutcome listUserAnalyzers(const Model::ListUserAnalyzersRequest &request)const;
			void listUserAnalyzersAsync(const Model::ListUserAnalyzersRequest& request, const ListUserAnalyzersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserAnalyzersOutcomeCallable listUserAnalyzersCallable(const Model::ListUserAnalyzersRequest& request) const;
			ModifyAppGroupOutcome modifyAppGroup(const Model::ModifyAppGroupRequest &request)const;
			void modifyAppGroupAsync(const Model::ModifyAppGroupRequest& request, const ModifyAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAppGroupOutcomeCallable modifyAppGroupCallable(const Model::ModifyAppGroupRequest& request) const;
			ModifyAppGroupQuotaOutcome modifyAppGroupQuota(const Model::ModifyAppGroupQuotaRequest &request)const;
			void modifyAppGroupQuotaAsync(const Model::ModifyAppGroupQuotaRequest& request, const ModifyAppGroupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAppGroupQuotaOutcomeCallable modifyAppGroupQuotaCallable(const Model::ModifyAppGroupQuotaRequest& request) const;
			ModifyFirstRankOutcome modifyFirstRank(const Model::ModifyFirstRankRequest &request)const;
			void modifyFirstRankAsync(const Model::ModifyFirstRankRequest& request, const ModifyFirstRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFirstRankOutcomeCallable modifyFirstRankCallable(const Model::ModifyFirstRankRequest& request) const;
			ModifyModelOutcome modifyModel(const Model::ModifyModelRequest &request)const;
			void modifyModelAsync(const Model::ModifyModelRequest& request, const ModifyModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyModelOutcomeCallable modifyModelCallable(const Model::ModifyModelRequest& request) const;
			ModifyQueryProcessorOutcome modifyQueryProcessor(const Model::ModifyQueryProcessorRequest &request)const;
			void modifyQueryProcessorAsync(const Model::ModifyQueryProcessorRequest& request, const ModifyQueryProcessorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyQueryProcessorOutcomeCallable modifyQueryProcessorCallable(const Model::ModifyQueryProcessorRequest& request) const;
			ModifyScheduledTaskOutcome modifyScheduledTask(const Model::ModifyScheduledTaskRequest &request)const;
			void modifyScheduledTaskAsync(const Model::ModifyScheduledTaskRequest& request, const ModifyScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScheduledTaskOutcomeCallable modifyScheduledTaskCallable(const Model::ModifyScheduledTaskRequest& request) const;
			ModifySecondRankOutcome modifySecondRank(const Model::ModifySecondRankRequest &request)const;
			void modifySecondRankAsync(const Model::ModifySecondRankRequest& request, const ModifySecondRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecondRankOutcomeCallable modifySecondRankCallable(const Model::ModifySecondRankRequest& request) const;
			PreviewModelOutcome previewModel(const Model::PreviewModelRequest &request)const;
			void previewModelAsync(const Model::PreviewModelRequest& request, const PreviewModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreviewModelOutcomeCallable previewModelCallable(const Model::PreviewModelRequest& request) const;
			PushInterventionDictionaryEntriesOutcome pushInterventionDictionaryEntries(const Model::PushInterventionDictionaryEntriesRequest &request)const;
			void pushInterventionDictionaryEntriesAsync(const Model::PushInterventionDictionaryEntriesRequest& request, const PushInterventionDictionaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushInterventionDictionaryEntriesOutcomeCallable pushInterventionDictionaryEntriesCallable(const Model::PushInterventionDictionaryEntriesRequest& request) const;
			PushUserAnalyzerEntriesOutcome pushUserAnalyzerEntries(const Model::PushUserAnalyzerEntriesRequest &request)const;
			void pushUserAnalyzerEntriesAsync(const Model::PushUserAnalyzerEntriesRequest& request, const PushUserAnalyzerEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushUserAnalyzerEntriesOutcomeCallable pushUserAnalyzerEntriesCallable(const Model::PushUserAnalyzerEntriesRequest& request) const;
			RankPreviewQueryOutcome rankPreviewQuery(const Model::RankPreviewQueryRequest &request)const;
			void rankPreviewQueryAsync(const Model::RankPreviewQueryRequest& request, const RankPreviewQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RankPreviewQueryOutcomeCallable rankPreviewQueryCallable(const Model::RankPreviewQueryRequest& request) const;
			ReleaseSortScriptOutcome releaseSortScript(const Model::ReleaseSortScriptRequest &request)const;
			void releaseSortScriptAsync(const Model::ReleaseSortScriptRequest& request, const ReleaseSortScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseSortScriptOutcomeCallable releaseSortScriptCallable(const Model::ReleaseSortScriptRequest& request) const;
			RemoveAppOutcome removeApp(const Model::RemoveAppRequest &request)const;
			void removeAppAsync(const Model::RemoveAppRequest& request, const RemoveAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveAppOutcomeCallable removeAppCallable(const Model::RemoveAppRequest& request) const;
			RemoveAppGroupOutcome removeAppGroup(const Model::RemoveAppGroupRequest &request)const;
			void removeAppGroupAsync(const Model::RemoveAppGroupRequest& request, const RemoveAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveAppGroupOutcomeCallable removeAppGroupCallable(const Model::RemoveAppGroupRequest& request) const;
			RemoveDataCollectionOutcome removeDataCollection(const Model::RemoveDataCollectionRequest &request)const;
			void removeDataCollectionAsync(const Model::RemoveDataCollectionRequest& request, const RemoveDataCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveDataCollectionOutcomeCallable removeDataCollectionCallable(const Model::RemoveDataCollectionRequest& request) const;
			RemoveFirstRankOutcome removeFirstRank(const Model::RemoveFirstRankRequest &request)const;
			void removeFirstRankAsync(const Model::RemoveFirstRankRequest& request, const RemoveFirstRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveFirstRankOutcomeCallable removeFirstRankCallable(const Model::RemoveFirstRankRequest& request) const;
			RemoveInterventionDictionaryOutcome removeInterventionDictionary(const Model::RemoveInterventionDictionaryRequest &request)const;
			void removeInterventionDictionaryAsync(const Model::RemoveInterventionDictionaryRequest& request, const RemoveInterventionDictionaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveInterventionDictionaryOutcomeCallable removeInterventionDictionaryCallable(const Model::RemoveInterventionDictionaryRequest& request) const;
			RemoveQueryProcessorOutcome removeQueryProcessor(const Model::RemoveQueryProcessorRequest &request)const;
			void removeQueryProcessorAsync(const Model::RemoveQueryProcessorRequest& request, const RemoveQueryProcessorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveQueryProcessorOutcomeCallable removeQueryProcessorCallable(const Model::RemoveQueryProcessorRequest& request) const;
			RemoveScheduledTaskOutcome removeScheduledTask(const Model::RemoveScheduledTaskRequest &request)const;
			void removeScheduledTaskAsync(const Model::RemoveScheduledTaskRequest& request, const RemoveScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveScheduledTaskOutcomeCallable removeScheduledTaskCallable(const Model::RemoveScheduledTaskRequest& request) const;
			RemoveSecondRankOutcome removeSecondRank(const Model::RemoveSecondRankRequest &request)const;
			void removeSecondRankAsync(const Model::RemoveSecondRankRequest& request, const RemoveSecondRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveSecondRankOutcomeCallable removeSecondRankCallable(const Model::RemoveSecondRankRequest& request) const;
			RemoveUserAnalyzerOutcome removeUserAnalyzer(const Model::RemoveUserAnalyzerRequest &request)const;
			void removeUserAnalyzerAsync(const Model::RemoveUserAnalyzerRequest& request, const RemoveUserAnalyzerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUserAnalyzerOutcomeCallable removeUserAnalyzerCallable(const Model::RemoveUserAnalyzerRequest& request) const;
			RenewAppGroupOutcome renewAppGroup(const Model::RenewAppGroupRequest &request)const;
			void renewAppGroupAsync(const Model::RenewAppGroupRequest& request, const RenewAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewAppGroupOutcomeCallable renewAppGroupCallable(const Model::RenewAppGroupRequest& request) const;
			ReplaceAppGroupCommodityCodeOutcome replaceAppGroupCommodityCode(const Model::ReplaceAppGroupCommodityCodeRequest &request)const;
			void replaceAppGroupCommodityCodeAsync(const Model::ReplaceAppGroupCommodityCodeRequest& request, const ReplaceAppGroupCommodityCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceAppGroupCommodityCodeOutcomeCallable replaceAppGroupCommodityCodeCallable(const Model::ReplaceAppGroupCommodityCodeRequest& request) const;
			SaveSortScriptFileOutcome saveSortScriptFile(const Model::SaveSortScriptFileRequest &request)const;
			void saveSortScriptFileAsync(const Model::SaveSortScriptFileRequest& request, const SaveSortScriptFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveSortScriptFileOutcomeCallable saveSortScriptFileCallable(const Model::SaveSortScriptFileRequest& request) const;
			StartSlowQueryAnalyzerOutcome startSlowQueryAnalyzer(const Model::StartSlowQueryAnalyzerRequest &request)const;
			void startSlowQueryAnalyzerAsync(const Model::StartSlowQueryAnalyzerRequest& request, const StartSlowQueryAnalyzerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartSlowQueryAnalyzerOutcomeCallable startSlowQueryAnalyzerCallable(const Model::StartSlowQueryAnalyzerRequest& request) const;
			TrainModelOutcome trainModel(const Model::TrainModelRequest &request)const;
			void trainModelAsync(const Model::TrainModelRequest& request, const TrainModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TrainModelOutcomeCallable trainModelCallable(const Model::TrainModelRequest& request) const;
			UpdateABTestExperimentOutcome updateABTestExperiment(const Model::UpdateABTestExperimentRequest &request)const;
			void updateABTestExperimentAsync(const Model::UpdateABTestExperimentRequest& request, const UpdateABTestExperimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateABTestExperimentOutcomeCallable updateABTestExperimentCallable(const Model::UpdateABTestExperimentRequest& request) const;
			UpdateABTestFixedFlowDividersOutcome updateABTestFixedFlowDividers(const Model::UpdateABTestFixedFlowDividersRequest &request)const;
			void updateABTestFixedFlowDividersAsync(const Model::UpdateABTestFixedFlowDividersRequest& request, const UpdateABTestFixedFlowDividersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateABTestFixedFlowDividersOutcomeCallable updateABTestFixedFlowDividersCallable(const Model::UpdateABTestFixedFlowDividersRequest& request) const;
			UpdateABTestGroupOutcome updateABTestGroup(const Model::UpdateABTestGroupRequest &request)const;
			void updateABTestGroupAsync(const Model::UpdateABTestGroupRequest& request, const UpdateABTestGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateABTestGroupOutcomeCallable updateABTestGroupCallable(const Model::UpdateABTestGroupRequest& request) const;
			UpdateABTestSceneOutcome updateABTestScene(const Model::UpdateABTestSceneRequest &request)const;
			void updateABTestSceneAsync(const Model::UpdateABTestSceneRequest& request, const UpdateABTestSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateABTestSceneOutcomeCallable updateABTestSceneCallable(const Model::UpdateABTestSceneRequest& request) const;
			UpdateFetchFieldsOutcome updateFetchFields(const Model::UpdateFetchFieldsRequest &request)const;
			void updateFetchFieldsAsync(const Model::UpdateFetchFieldsRequest& request, const UpdateFetchFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFetchFieldsOutcomeCallable updateFetchFieldsCallable(const Model::UpdateFetchFieldsRequest& request) const;
			UpdateSummariesOutcome updateSummaries(const Model::UpdateSummariesRequest &request)const;
			void updateSummariesAsync(const Model::UpdateSummariesRequest& request, const UpdateSummariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSummariesOutcomeCallable updateSummariesCallable(const Model::UpdateSummariesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OPENSEARCH_OPENSEARCHCLIENT_H_
