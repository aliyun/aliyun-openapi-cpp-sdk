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

#ifndef ALIBABACLOUD_SOPHONSOAR_SOPHONSOARCLIENT_H_
#define ALIBABACLOUD_SOPHONSOAR_SOPHONSOARCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SophonsoarExport.h"
#include "model/BatchModifyInstanceStatusRequest.h"
#include "model/BatchModifyInstanceStatusResult.h"
#include "model/ComparePlaybooksRequest.h"
#include "model/ComparePlaybooksResult.h"
#include "model/ConvertPlaybookRequest.h"
#include "model/ConvertPlaybookResult.h"
#include "model/CreatePlaybookRequest.h"
#include "model/CreatePlaybookResult.h"
#include "model/DebugPlaybookRequest.h"
#include "model/DebugPlaybookResult.h"
#include "model/DeleteComponentAssetRequest.h"
#include "model/DeleteComponentAssetResult.h"
#include "model/DeletePlaybookRequest.h"
#include "model/DeletePlaybookResult.h"
#include "model/DescribeComponentAssetFormRequest.h"
#include "model/DescribeComponentAssetFormResult.h"
#include "model/DescribeComponentAssetsRequest.h"
#include "model/DescribeComponentAssetsResult.h"
#include "model/DescribeComponentListRequest.h"
#include "model/DescribeComponentListResult.h"
#include "model/DescribeComponentPlaybookRequest.h"
#include "model/DescribeComponentPlaybookResult.h"
#include "model/DescribeComponentsJsRequest.h"
#include "model/DescribeComponentsJsResult.h"
#include "model/DescribeDistinctReleasesRequest.h"
#include "model/DescribeDistinctReleasesResult.h"
#include "model/DescribeEnumItemsRequest.h"
#include "model/DescribeEnumItemsResult.h"
#include "model/DescribeExecutePlaybooksRequest.h"
#include "model/DescribeExecutePlaybooksResult.h"
#include "model/DescribeFieldRequest.h"
#include "model/DescribeFieldResult.h"
#include "model/DescribeLatestRecordSchemaRequest.h"
#include "model/DescribeLatestRecordSchemaResult.h"
#include "model/DescribeNodeParamTagsRequest.h"
#include "model/DescribeNodeParamTagsResult.h"
#include "model/DescribeNodeUsedInfosRequest.h"
#include "model/DescribeNodeUsedInfosResult.h"
#include "model/DescribePlaybookRequest.h"
#include "model/DescribePlaybookResult.h"
#include "model/DescribePlaybookInputOutputRequest.h"
#include "model/DescribePlaybookInputOutputResult.h"
#include "model/DescribePlaybookMetricsRequest.h"
#include "model/DescribePlaybookMetricsResult.h"
#include "model/DescribePlaybookNodesOutputRequest.h"
#include "model/DescribePlaybookNodesOutputResult.h"
#include "model/DescribePlaybookNumberMetricsRequest.h"
#include "model/DescribePlaybookNumberMetricsResult.h"
#include "model/DescribePlaybookReleasesRequest.h"
#include "model/DescribePlaybookReleasesResult.h"
#include "model/DescribePlaybooksRequest.h"
#include "model/DescribePlaybooksResult.h"
#include "model/DescribePopApiRequest.h"
#include "model/DescribePopApiResult.h"
#include "model/DescribeProcessTaskCountRequest.h"
#include "model/DescribeProcessTaskCountResult.h"
#include "model/DescribeProcessTasksRequest.h"
#include "model/DescribeProcessTasksResult.h"
#include "model/DescribeSoarRecordActionOutputListRequest.h"
#include "model/DescribeSoarRecordActionOutputListResult.h"
#include "model/DescribeSoarRecordInOutputRequest.h"
#include "model/DescribeSoarRecordInOutputResult.h"
#include "model/DescribeSoarRecordsRequest.h"
#include "model/DescribeSoarRecordsResult.h"
#include "model/DescribeSoarTaskAndActionsRequest.h"
#include "model/DescribeSoarTaskAndActionsResult.h"
#include "model/DescribeSophonCommandsRequest.h"
#include "model/DescribeSophonCommandsResult.h"
#include "model/DescriberPython3ScriptLogsRequest.h"
#include "model/DescriberPython3ScriptLogsResult.h"
#include "model/ModifyComponentAssetRequest.h"
#include "model/ModifyComponentAssetResult.h"
#include "model/ModifyPlaybookRequest.h"
#include "model/ModifyPlaybookResult.h"
#include "model/ModifyPlaybookInputOutputRequest.h"
#include "model/ModifyPlaybookInputOutputResult.h"
#include "model/ModifyPlaybookInstanceStatusRequest.h"
#include "model/ModifyPlaybookInstanceStatusResult.h"
#include "model/PublishPlaybookRequest.h"
#include "model/PublishPlaybookResult.h"
#include "model/QueryTreeDataRequest.h"
#include "model/QueryTreeDataResult.h"
#include "model/RenamePlaybookNodeRequest.h"
#include "model/RenamePlaybookNodeResult.h"
#include "model/RevertPlaybookReleaseRequest.h"
#include "model/RevertPlaybookReleaseResult.h"
#include "model/RunPython3ScriptRequest.h"
#include "model/RunPython3ScriptResult.h"
#include "model/TriggerPlaybookRequest.h"
#include "model/TriggerPlaybookResult.h"
#include "model/TriggerProcessTaskRequest.h"
#include "model/TriggerProcessTaskResult.h"
#include "model/TriggerSophonPlaybookRequest.h"
#include "model/TriggerSophonPlaybookResult.h"
#include "model/VerifyPlaybookRequest.h"
#include "model/VerifyPlaybookResult.h"
#include "model/VerifyPythonFileRequest.h"
#include "model/VerifyPythonFileResult.h"


namespace AlibabaCloud
{
	namespace Sophonsoar
	{
		class ALIBABACLOUD_SOPHONSOAR_EXPORT SophonsoarClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchModifyInstanceStatusResult> BatchModifyInstanceStatusOutcome;
			typedef std::future<BatchModifyInstanceStatusOutcome> BatchModifyInstanceStatusOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::BatchModifyInstanceStatusRequest&, const BatchModifyInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::ComparePlaybooksResult> ComparePlaybooksOutcome;
			typedef std::future<ComparePlaybooksOutcome> ComparePlaybooksOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::ComparePlaybooksRequest&, const ComparePlaybooksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ComparePlaybooksAsyncHandler;
			typedef Outcome<Error, Model::ConvertPlaybookResult> ConvertPlaybookOutcome;
			typedef std::future<ConvertPlaybookOutcome> ConvertPlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::ConvertPlaybookRequest&, const ConvertPlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertPlaybookAsyncHandler;
			typedef Outcome<Error, Model::CreatePlaybookResult> CreatePlaybookOutcome;
			typedef std::future<CreatePlaybookOutcome> CreatePlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::CreatePlaybookRequest&, const CreatePlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePlaybookAsyncHandler;
			typedef Outcome<Error, Model::DebugPlaybookResult> DebugPlaybookOutcome;
			typedef std::future<DebugPlaybookOutcome> DebugPlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DebugPlaybookRequest&, const DebugPlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DebugPlaybookAsyncHandler;
			typedef Outcome<Error, Model::DeleteComponentAssetResult> DeleteComponentAssetOutcome;
			typedef std::future<DeleteComponentAssetOutcome> DeleteComponentAssetOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DeleteComponentAssetRequest&, const DeleteComponentAssetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteComponentAssetAsyncHandler;
			typedef Outcome<Error, Model::DeletePlaybookResult> DeletePlaybookOutcome;
			typedef std::future<DeletePlaybookOutcome> DeletePlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DeletePlaybookRequest&, const DeletePlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePlaybookAsyncHandler;
			typedef Outcome<Error, Model::DescribeComponentAssetFormResult> DescribeComponentAssetFormOutcome;
			typedef std::future<DescribeComponentAssetFormOutcome> DescribeComponentAssetFormOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeComponentAssetFormRequest&, const DescribeComponentAssetFormOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentAssetFormAsyncHandler;
			typedef Outcome<Error, Model::DescribeComponentAssetsResult> DescribeComponentAssetsOutcome;
			typedef std::future<DescribeComponentAssetsOutcome> DescribeComponentAssetsOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeComponentAssetsRequest&, const DescribeComponentAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentAssetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeComponentListResult> DescribeComponentListOutcome;
			typedef std::future<DescribeComponentListOutcome> DescribeComponentListOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeComponentListRequest&, const DescribeComponentListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentListAsyncHandler;
			typedef Outcome<Error, Model::DescribeComponentPlaybookResult> DescribeComponentPlaybookOutcome;
			typedef std::future<DescribeComponentPlaybookOutcome> DescribeComponentPlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeComponentPlaybookRequest&, const DescribeComponentPlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentPlaybookAsyncHandler;
			typedef Outcome<Error, Model::DescribeComponentsJsResult> DescribeComponentsJsOutcome;
			typedef std::future<DescribeComponentsJsOutcome> DescribeComponentsJsOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeComponentsJsRequest&, const DescribeComponentsJsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentsJsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDistinctReleasesResult> DescribeDistinctReleasesOutcome;
			typedef std::future<DescribeDistinctReleasesOutcome> DescribeDistinctReleasesOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeDistinctReleasesRequest&, const DescribeDistinctReleasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDistinctReleasesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnumItemsResult> DescribeEnumItemsOutcome;
			typedef std::future<DescribeEnumItemsOutcome> DescribeEnumItemsOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeEnumItemsRequest&, const DescribeEnumItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnumItemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeExecutePlaybooksResult> DescribeExecutePlaybooksOutcome;
			typedef std::future<DescribeExecutePlaybooksOutcome> DescribeExecutePlaybooksOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeExecutePlaybooksRequest&, const DescribeExecutePlaybooksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExecutePlaybooksAsyncHandler;
			typedef Outcome<Error, Model::DescribeFieldResult> DescribeFieldOutcome;
			typedef std::future<DescribeFieldOutcome> DescribeFieldOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeFieldRequest&, const DescribeFieldOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFieldAsyncHandler;
			typedef Outcome<Error, Model::DescribeLatestRecordSchemaResult> DescribeLatestRecordSchemaOutcome;
			typedef std::future<DescribeLatestRecordSchemaOutcome> DescribeLatestRecordSchemaOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeLatestRecordSchemaRequest&, const DescribeLatestRecordSchemaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLatestRecordSchemaAsyncHandler;
			typedef Outcome<Error, Model::DescribeNodeParamTagsResult> DescribeNodeParamTagsOutcome;
			typedef std::future<DescribeNodeParamTagsOutcome> DescribeNodeParamTagsOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeNodeParamTagsRequest&, const DescribeNodeParamTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeParamTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNodeUsedInfosResult> DescribeNodeUsedInfosOutcome;
			typedef std::future<DescribeNodeUsedInfosOutcome> DescribeNodeUsedInfosOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeNodeUsedInfosRequest&, const DescribeNodeUsedInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeUsedInfosAsyncHandler;
			typedef Outcome<Error, Model::DescribePlaybookResult> DescribePlaybookOutcome;
			typedef std::future<DescribePlaybookOutcome> DescribePlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribePlaybookRequest&, const DescribePlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlaybookAsyncHandler;
			typedef Outcome<Error, Model::DescribePlaybookInputOutputResult> DescribePlaybookInputOutputOutcome;
			typedef std::future<DescribePlaybookInputOutputOutcome> DescribePlaybookInputOutputOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribePlaybookInputOutputRequest&, const DescribePlaybookInputOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlaybookInputOutputAsyncHandler;
			typedef Outcome<Error, Model::DescribePlaybookMetricsResult> DescribePlaybookMetricsOutcome;
			typedef std::future<DescribePlaybookMetricsOutcome> DescribePlaybookMetricsOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribePlaybookMetricsRequest&, const DescribePlaybookMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlaybookMetricsAsyncHandler;
			typedef Outcome<Error, Model::DescribePlaybookNodesOutputResult> DescribePlaybookNodesOutputOutcome;
			typedef std::future<DescribePlaybookNodesOutputOutcome> DescribePlaybookNodesOutputOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribePlaybookNodesOutputRequest&, const DescribePlaybookNodesOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlaybookNodesOutputAsyncHandler;
			typedef Outcome<Error, Model::DescribePlaybookNumberMetricsResult> DescribePlaybookNumberMetricsOutcome;
			typedef std::future<DescribePlaybookNumberMetricsOutcome> DescribePlaybookNumberMetricsOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribePlaybookNumberMetricsRequest&, const DescribePlaybookNumberMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlaybookNumberMetricsAsyncHandler;
			typedef Outcome<Error, Model::DescribePlaybookReleasesResult> DescribePlaybookReleasesOutcome;
			typedef std::future<DescribePlaybookReleasesOutcome> DescribePlaybookReleasesOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribePlaybookReleasesRequest&, const DescribePlaybookReleasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlaybookReleasesAsyncHandler;
			typedef Outcome<Error, Model::DescribePlaybooksResult> DescribePlaybooksOutcome;
			typedef std::future<DescribePlaybooksOutcome> DescribePlaybooksOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribePlaybooksRequest&, const DescribePlaybooksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlaybooksAsyncHandler;
			typedef Outcome<Error, Model::DescribePopApiResult> DescribePopApiOutcome;
			typedef std::future<DescribePopApiOutcome> DescribePopApiOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribePopApiRequest&, const DescribePopApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePopApiAsyncHandler;
			typedef Outcome<Error, Model::DescribeProcessTaskCountResult> DescribeProcessTaskCountOutcome;
			typedef std::future<DescribeProcessTaskCountOutcome> DescribeProcessTaskCountOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeProcessTaskCountRequest&, const DescribeProcessTaskCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessTaskCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeProcessTasksResult> DescribeProcessTasksOutcome;
			typedef std::future<DescribeProcessTasksOutcome> DescribeProcessTasksOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeProcessTasksRequest&, const DescribeProcessTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeSoarRecordActionOutputListResult> DescribeSoarRecordActionOutputListOutcome;
			typedef std::future<DescribeSoarRecordActionOutputListOutcome> DescribeSoarRecordActionOutputListOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeSoarRecordActionOutputListRequest&, const DescribeSoarRecordActionOutputListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSoarRecordActionOutputListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSoarRecordInOutputResult> DescribeSoarRecordInOutputOutcome;
			typedef std::future<DescribeSoarRecordInOutputOutcome> DescribeSoarRecordInOutputOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeSoarRecordInOutputRequest&, const DescribeSoarRecordInOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSoarRecordInOutputAsyncHandler;
			typedef Outcome<Error, Model::DescribeSoarRecordsResult> DescribeSoarRecordsOutcome;
			typedef std::future<DescribeSoarRecordsOutcome> DescribeSoarRecordsOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeSoarRecordsRequest&, const DescribeSoarRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSoarRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSoarTaskAndActionsResult> DescribeSoarTaskAndActionsOutcome;
			typedef std::future<DescribeSoarTaskAndActionsOutcome> DescribeSoarTaskAndActionsOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeSoarTaskAndActionsRequest&, const DescribeSoarTaskAndActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSoarTaskAndActionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSophonCommandsResult> DescribeSophonCommandsOutcome;
			typedef std::future<DescribeSophonCommandsOutcome> DescribeSophonCommandsOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescribeSophonCommandsRequest&, const DescribeSophonCommandsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSophonCommandsAsyncHandler;
			typedef Outcome<Error, Model::DescriberPython3ScriptLogsResult> DescriberPython3ScriptLogsOutcome;
			typedef std::future<DescriberPython3ScriptLogsOutcome> DescriberPython3ScriptLogsOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::DescriberPython3ScriptLogsRequest&, const DescriberPython3ScriptLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescriberPython3ScriptLogsAsyncHandler;
			typedef Outcome<Error, Model::ModifyComponentAssetResult> ModifyComponentAssetOutcome;
			typedef std::future<ModifyComponentAssetOutcome> ModifyComponentAssetOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::ModifyComponentAssetRequest&, const ModifyComponentAssetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyComponentAssetAsyncHandler;
			typedef Outcome<Error, Model::ModifyPlaybookResult> ModifyPlaybookOutcome;
			typedef std::future<ModifyPlaybookOutcome> ModifyPlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::ModifyPlaybookRequest&, const ModifyPlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPlaybookAsyncHandler;
			typedef Outcome<Error, Model::ModifyPlaybookInputOutputResult> ModifyPlaybookInputOutputOutcome;
			typedef std::future<ModifyPlaybookInputOutputOutcome> ModifyPlaybookInputOutputOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::ModifyPlaybookInputOutputRequest&, const ModifyPlaybookInputOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPlaybookInputOutputAsyncHandler;
			typedef Outcome<Error, Model::ModifyPlaybookInstanceStatusResult> ModifyPlaybookInstanceStatusOutcome;
			typedef std::future<ModifyPlaybookInstanceStatusOutcome> ModifyPlaybookInstanceStatusOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::ModifyPlaybookInstanceStatusRequest&, const ModifyPlaybookInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPlaybookInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::PublishPlaybookResult> PublishPlaybookOutcome;
			typedef std::future<PublishPlaybookOutcome> PublishPlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::PublishPlaybookRequest&, const PublishPlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishPlaybookAsyncHandler;
			typedef Outcome<Error, Model::QueryTreeDataResult> QueryTreeDataOutcome;
			typedef std::future<QueryTreeDataOutcome> QueryTreeDataOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::QueryTreeDataRequest&, const QueryTreeDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTreeDataAsyncHandler;
			typedef Outcome<Error, Model::RenamePlaybookNodeResult> RenamePlaybookNodeOutcome;
			typedef std::future<RenamePlaybookNodeOutcome> RenamePlaybookNodeOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::RenamePlaybookNodeRequest&, const RenamePlaybookNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenamePlaybookNodeAsyncHandler;
			typedef Outcome<Error, Model::RevertPlaybookReleaseResult> RevertPlaybookReleaseOutcome;
			typedef std::future<RevertPlaybookReleaseOutcome> RevertPlaybookReleaseOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::RevertPlaybookReleaseRequest&, const RevertPlaybookReleaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevertPlaybookReleaseAsyncHandler;
			typedef Outcome<Error, Model::RunPython3ScriptResult> RunPython3ScriptOutcome;
			typedef std::future<RunPython3ScriptOutcome> RunPython3ScriptOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::RunPython3ScriptRequest&, const RunPython3ScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunPython3ScriptAsyncHandler;
			typedef Outcome<Error, Model::TriggerPlaybookResult> TriggerPlaybookOutcome;
			typedef std::future<TriggerPlaybookOutcome> TriggerPlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::TriggerPlaybookRequest&, const TriggerPlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerPlaybookAsyncHandler;
			typedef Outcome<Error, Model::TriggerProcessTaskResult> TriggerProcessTaskOutcome;
			typedef std::future<TriggerProcessTaskOutcome> TriggerProcessTaskOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::TriggerProcessTaskRequest&, const TriggerProcessTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerProcessTaskAsyncHandler;
			typedef Outcome<Error, Model::TriggerSophonPlaybookResult> TriggerSophonPlaybookOutcome;
			typedef std::future<TriggerSophonPlaybookOutcome> TriggerSophonPlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::TriggerSophonPlaybookRequest&, const TriggerSophonPlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerSophonPlaybookAsyncHandler;
			typedef Outcome<Error, Model::VerifyPlaybookResult> VerifyPlaybookOutcome;
			typedef std::future<VerifyPlaybookOutcome> VerifyPlaybookOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::VerifyPlaybookRequest&, const VerifyPlaybookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPlaybookAsyncHandler;
			typedef Outcome<Error, Model::VerifyPythonFileResult> VerifyPythonFileOutcome;
			typedef std::future<VerifyPythonFileOutcome> VerifyPythonFileOutcomeCallable;
			typedef std::function<void(const SophonsoarClient*, const Model::VerifyPythonFileRequest&, const VerifyPythonFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPythonFileAsyncHandler;

			SophonsoarClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SophonsoarClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SophonsoarClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SophonsoarClient();
			BatchModifyInstanceStatusOutcome batchModifyInstanceStatus(const Model::BatchModifyInstanceStatusRequest &request)const;
			void batchModifyInstanceStatusAsync(const Model::BatchModifyInstanceStatusRequest& request, const BatchModifyInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchModifyInstanceStatusOutcomeCallable batchModifyInstanceStatusCallable(const Model::BatchModifyInstanceStatusRequest& request) const;
			ComparePlaybooksOutcome comparePlaybooks(const Model::ComparePlaybooksRequest &request)const;
			void comparePlaybooksAsync(const Model::ComparePlaybooksRequest& request, const ComparePlaybooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ComparePlaybooksOutcomeCallable comparePlaybooksCallable(const Model::ComparePlaybooksRequest& request) const;
			ConvertPlaybookOutcome convertPlaybook(const Model::ConvertPlaybookRequest &request)const;
			void convertPlaybookAsync(const Model::ConvertPlaybookRequest& request, const ConvertPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertPlaybookOutcomeCallable convertPlaybookCallable(const Model::ConvertPlaybookRequest& request) const;
			CreatePlaybookOutcome createPlaybook(const Model::CreatePlaybookRequest &request)const;
			void createPlaybookAsync(const Model::CreatePlaybookRequest& request, const CreatePlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePlaybookOutcomeCallable createPlaybookCallable(const Model::CreatePlaybookRequest& request) const;
			DebugPlaybookOutcome debugPlaybook(const Model::DebugPlaybookRequest &request)const;
			void debugPlaybookAsync(const Model::DebugPlaybookRequest& request, const DebugPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DebugPlaybookOutcomeCallable debugPlaybookCallable(const Model::DebugPlaybookRequest& request) const;
			DeleteComponentAssetOutcome deleteComponentAsset(const Model::DeleteComponentAssetRequest &request)const;
			void deleteComponentAssetAsync(const Model::DeleteComponentAssetRequest& request, const DeleteComponentAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteComponentAssetOutcomeCallable deleteComponentAssetCallable(const Model::DeleteComponentAssetRequest& request) const;
			DeletePlaybookOutcome deletePlaybook(const Model::DeletePlaybookRequest &request)const;
			void deletePlaybookAsync(const Model::DeletePlaybookRequest& request, const DeletePlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePlaybookOutcomeCallable deletePlaybookCallable(const Model::DeletePlaybookRequest& request) const;
			DescribeComponentAssetFormOutcome describeComponentAssetForm(const Model::DescribeComponentAssetFormRequest &request)const;
			void describeComponentAssetFormAsync(const Model::DescribeComponentAssetFormRequest& request, const DescribeComponentAssetFormAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeComponentAssetFormOutcomeCallable describeComponentAssetFormCallable(const Model::DescribeComponentAssetFormRequest& request) const;
			DescribeComponentAssetsOutcome describeComponentAssets(const Model::DescribeComponentAssetsRequest &request)const;
			void describeComponentAssetsAsync(const Model::DescribeComponentAssetsRequest& request, const DescribeComponentAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeComponentAssetsOutcomeCallable describeComponentAssetsCallable(const Model::DescribeComponentAssetsRequest& request) const;
			DescribeComponentListOutcome describeComponentList(const Model::DescribeComponentListRequest &request)const;
			void describeComponentListAsync(const Model::DescribeComponentListRequest& request, const DescribeComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeComponentListOutcomeCallable describeComponentListCallable(const Model::DescribeComponentListRequest& request) const;
			DescribeComponentPlaybookOutcome describeComponentPlaybook(const Model::DescribeComponentPlaybookRequest &request)const;
			void describeComponentPlaybookAsync(const Model::DescribeComponentPlaybookRequest& request, const DescribeComponentPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeComponentPlaybookOutcomeCallable describeComponentPlaybookCallable(const Model::DescribeComponentPlaybookRequest& request) const;
			DescribeComponentsJsOutcome describeComponentsJs(const Model::DescribeComponentsJsRequest &request)const;
			void describeComponentsJsAsync(const Model::DescribeComponentsJsRequest& request, const DescribeComponentsJsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeComponentsJsOutcomeCallable describeComponentsJsCallable(const Model::DescribeComponentsJsRequest& request) const;
			DescribeDistinctReleasesOutcome describeDistinctReleases(const Model::DescribeDistinctReleasesRequest &request)const;
			void describeDistinctReleasesAsync(const Model::DescribeDistinctReleasesRequest& request, const DescribeDistinctReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDistinctReleasesOutcomeCallable describeDistinctReleasesCallable(const Model::DescribeDistinctReleasesRequest& request) const;
			DescribeEnumItemsOutcome describeEnumItems(const Model::DescribeEnumItemsRequest &request)const;
			void describeEnumItemsAsync(const Model::DescribeEnumItemsRequest& request, const DescribeEnumItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnumItemsOutcomeCallable describeEnumItemsCallable(const Model::DescribeEnumItemsRequest& request) const;
			DescribeExecutePlaybooksOutcome describeExecutePlaybooks(const Model::DescribeExecutePlaybooksRequest &request)const;
			void describeExecutePlaybooksAsync(const Model::DescribeExecutePlaybooksRequest& request, const DescribeExecutePlaybooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExecutePlaybooksOutcomeCallable describeExecutePlaybooksCallable(const Model::DescribeExecutePlaybooksRequest& request) const;
			DescribeFieldOutcome describeField(const Model::DescribeFieldRequest &request)const;
			void describeFieldAsync(const Model::DescribeFieldRequest& request, const DescribeFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFieldOutcomeCallable describeFieldCallable(const Model::DescribeFieldRequest& request) const;
			DescribeLatestRecordSchemaOutcome describeLatestRecordSchema(const Model::DescribeLatestRecordSchemaRequest &request)const;
			void describeLatestRecordSchemaAsync(const Model::DescribeLatestRecordSchemaRequest& request, const DescribeLatestRecordSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLatestRecordSchemaOutcomeCallable describeLatestRecordSchemaCallable(const Model::DescribeLatestRecordSchemaRequest& request) const;
			DescribeNodeParamTagsOutcome describeNodeParamTags(const Model::DescribeNodeParamTagsRequest &request)const;
			void describeNodeParamTagsAsync(const Model::DescribeNodeParamTagsRequest& request, const DescribeNodeParamTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNodeParamTagsOutcomeCallable describeNodeParamTagsCallable(const Model::DescribeNodeParamTagsRequest& request) const;
			DescribeNodeUsedInfosOutcome describeNodeUsedInfos(const Model::DescribeNodeUsedInfosRequest &request)const;
			void describeNodeUsedInfosAsync(const Model::DescribeNodeUsedInfosRequest& request, const DescribeNodeUsedInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNodeUsedInfosOutcomeCallable describeNodeUsedInfosCallable(const Model::DescribeNodeUsedInfosRequest& request) const;
			DescribePlaybookOutcome describePlaybook(const Model::DescribePlaybookRequest &request)const;
			void describePlaybookAsync(const Model::DescribePlaybookRequest& request, const DescribePlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlaybookOutcomeCallable describePlaybookCallable(const Model::DescribePlaybookRequest& request) const;
			DescribePlaybookInputOutputOutcome describePlaybookInputOutput(const Model::DescribePlaybookInputOutputRequest &request)const;
			void describePlaybookInputOutputAsync(const Model::DescribePlaybookInputOutputRequest& request, const DescribePlaybookInputOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlaybookInputOutputOutcomeCallable describePlaybookInputOutputCallable(const Model::DescribePlaybookInputOutputRequest& request) const;
			DescribePlaybookMetricsOutcome describePlaybookMetrics(const Model::DescribePlaybookMetricsRequest &request)const;
			void describePlaybookMetricsAsync(const Model::DescribePlaybookMetricsRequest& request, const DescribePlaybookMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlaybookMetricsOutcomeCallable describePlaybookMetricsCallable(const Model::DescribePlaybookMetricsRequest& request) const;
			DescribePlaybookNodesOutputOutcome describePlaybookNodesOutput(const Model::DescribePlaybookNodesOutputRequest &request)const;
			void describePlaybookNodesOutputAsync(const Model::DescribePlaybookNodesOutputRequest& request, const DescribePlaybookNodesOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlaybookNodesOutputOutcomeCallable describePlaybookNodesOutputCallable(const Model::DescribePlaybookNodesOutputRequest& request) const;
			DescribePlaybookNumberMetricsOutcome describePlaybookNumberMetrics(const Model::DescribePlaybookNumberMetricsRequest &request)const;
			void describePlaybookNumberMetricsAsync(const Model::DescribePlaybookNumberMetricsRequest& request, const DescribePlaybookNumberMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlaybookNumberMetricsOutcomeCallable describePlaybookNumberMetricsCallable(const Model::DescribePlaybookNumberMetricsRequest& request) const;
			DescribePlaybookReleasesOutcome describePlaybookReleases(const Model::DescribePlaybookReleasesRequest &request)const;
			void describePlaybookReleasesAsync(const Model::DescribePlaybookReleasesRequest& request, const DescribePlaybookReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlaybookReleasesOutcomeCallable describePlaybookReleasesCallable(const Model::DescribePlaybookReleasesRequest& request) const;
			DescribePlaybooksOutcome describePlaybooks(const Model::DescribePlaybooksRequest &request)const;
			void describePlaybooksAsync(const Model::DescribePlaybooksRequest& request, const DescribePlaybooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePlaybooksOutcomeCallable describePlaybooksCallable(const Model::DescribePlaybooksRequest& request) const;
			DescribePopApiOutcome describePopApi(const Model::DescribePopApiRequest &request)const;
			void describePopApiAsync(const Model::DescribePopApiRequest& request, const DescribePopApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePopApiOutcomeCallable describePopApiCallable(const Model::DescribePopApiRequest& request) const;
			DescribeProcessTaskCountOutcome describeProcessTaskCount(const Model::DescribeProcessTaskCountRequest &request)const;
			void describeProcessTaskCountAsync(const Model::DescribeProcessTaskCountRequest& request, const DescribeProcessTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProcessTaskCountOutcomeCallable describeProcessTaskCountCallable(const Model::DescribeProcessTaskCountRequest& request) const;
			DescribeProcessTasksOutcome describeProcessTasks(const Model::DescribeProcessTasksRequest &request)const;
			void describeProcessTasksAsync(const Model::DescribeProcessTasksRequest& request, const DescribeProcessTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProcessTasksOutcomeCallable describeProcessTasksCallable(const Model::DescribeProcessTasksRequest& request) const;
			DescribeSoarRecordActionOutputListOutcome describeSoarRecordActionOutputList(const Model::DescribeSoarRecordActionOutputListRequest &request)const;
			void describeSoarRecordActionOutputListAsync(const Model::DescribeSoarRecordActionOutputListRequest& request, const DescribeSoarRecordActionOutputListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSoarRecordActionOutputListOutcomeCallable describeSoarRecordActionOutputListCallable(const Model::DescribeSoarRecordActionOutputListRequest& request) const;
			DescribeSoarRecordInOutputOutcome describeSoarRecordInOutput(const Model::DescribeSoarRecordInOutputRequest &request)const;
			void describeSoarRecordInOutputAsync(const Model::DescribeSoarRecordInOutputRequest& request, const DescribeSoarRecordInOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSoarRecordInOutputOutcomeCallable describeSoarRecordInOutputCallable(const Model::DescribeSoarRecordInOutputRequest& request) const;
			DescribeSoarRecordsOutcome describeSoarRecords(const Model::DescribeSoarRecordsRequest &request)const;
			void describeSoarRecordsAsync(const Model::DescribeSoarRecordsRequest& request, const DescribeSoarRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSoarRecordsOutcomeCallable describeSoarRecordsCallable(const Model::DescribeSoarRecordsRequest& request) const;
			DescribeSoarTaskAndActionsOutcome describeSoarTaskAndActions(const Model::DescribeSoarTaskAndActionsRequest &request)const;
			void describeSoarTaskAndActionsAsync(const Model::DescribeSoarTaskAndActionsRequest& request, const DescribeSoarTaskAndActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSoarTaskAndActionsOutcomeCallable describeSoarTaskAndActionsCallable(const Model::DescribeSoarTaskAndActionsRequest& request) const;
			DescribeSophonCommandsOutcome describeSophonCommands(const Model::DescribeSophonCommandsRequest &request)const;
			void describeSophonCommandsAsync(const Model::DescribeSophonCommandsRequest& request, const DescribeSophonCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSophonCommandsOutcomeCallable describeSophonCommandsCallable(const Model::DescribeSophonCommandsRequest& request) const;
			DescriberPython3ScriptLogsOutcome describerPython3ScriptLogs(const Model::DescriberPython3ScriptLogsRequest &request)const;
			void describerPython3ScriptLogsAsync(const Model::DescriberPython3ScriptLogsRequest& request, const DescriberPython3ScriptLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescriberPython3ScriptLogsOutcomeCallable describerPython3ScriptLogsCallable(const Model::DescriberPython3ScriptLogsRequest& request) const;
			ModifyComponentAssetOutcome modifyComponentAsset(const Model::ModifyComponentAssetRequest &request)const;
			void modifyComponentAssetAsync(const Model::ModifyComponentAssetRequest& request, const ModifyComponentAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyComponentAssetOutcomeCallable modifyComponentAssetCallable(const Model::ModifyComponentAssetRequest& request) const;
			ModifyPlaybookOutcome modifyPlaybook(const Model::ModifyPlaybookRequest &request)const;
			void modifyPlaybookAsync(const Model::ModifyPlaybookRequest& request, const ModifyPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPlaybookOutcomeCallable modifyPlaybookCallable(const Model::ModifyPlaybookRequest& request) const;
			ModifyPlaybookInputOutputOutcome modifyPlaybookInputOutput(const Model::ModifyPlaybookInputOutputRequest &request)const;
			void modifyPlaybookInputOutputAsync(const Model::ModifyPlaybookInputOutputRequest& request, const ModifyPlaybookInputOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPlaybookInputOutputOutcomeCallable modifyPlaybookInputOutputCallable(const Model::ModifyPlaybookInputOutputRequest& request) const;
			ModifyPlaybookInstanceStatusOutcome modifyPlaybookInstanceStatus(const Model::ModifyPlaybookInstanceStatusRequest &request)const;
			void modifyPlaybookInstanceStatusAsync(const Model::ModifyPlaybookInstanceStatusRequest& request, const ModifyPlaybookInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPlaybookInstanceStatusOutcomeCallable modifyPlaybookInstanceStatusCallable(const Model::ModifyPlaybookInstanceStatusRequest& request) const;
			PublishPlaybookOutcome publishPlaybook(const Model::PublishPlaybookRequest &request)const;
			void publishPlaybookAsync(const Model::PublishPlaybookRequest& request, const PublishPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishPlaybookOutcomeCallable publishPlaybookCallable(const Model::PublishPlaybookRequest& request) const;
			QueryTreeDataOutcome queryTreeData(const Model::QueryTreeDataRequest &request)const;
			void queryTreeDataAsync(const Model::QueryTreeDataRequest& request, const QueryTreeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTreeDataOutcomeCallable queryTreeDataCallable(const Model::QueryTreeDataRequest& request) const;
			RenamePlaybookNodeOutcome renamePlaybookNode(const Model::RenamePlaybookNodeRequest &request)const;
			void renamePlaybookNodeAsync(const Model::RenamePlaybookNodeRequest& request, const RenamePlaybookNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenamePlaybookNodeOutcomeCallable renamePlaybookNodeCallable(const Model::RenamePlaybookNodeRequest& request) const;
			RevertPlaybookReleaseOutcome revertPlaybookRelease(const Model::RevertPlaybookReleaseRequest &request)const;
			void revertPlaybookReleaseAsync(const Model::RevertPlaybookReleaseRequest& request, const RevertPlaybookReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevertPlaybookReleaseOutcomeCallable revertPlaybookReleaseCallable(const Model::RevertPlaybookReleaseRequest& request) const;
			RunPython3ScriptOutcome runPython3Script(const Model::RunPython3ScriptRequest &request)const;
			void runPython3ScriptAsync(const Model::RunPython3ScriptRequest& request, const RunPython3ScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunPython3ScriptOutcomeCallable runPython3ScriptCallable(const Model::RunPython3ScriptRequest& request) const;
			TriggerPlaybookOutcome triggerPlaybook(const Model::TriggerPlaybookRequest &request)const;
			void triggerPlaybookAsync(const Model::TriggerPlaybookRequest& request, const TriggerPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerPlaybookOutcomeCallable triggerPlaybookCallable(const Model::TriggerPlaybookRequest& request) const;
			TriggerProcessTaskOutcome triggerProcessTask(const Model::TriggerProcessTaskRequest &request)const;
			void triggerProcessTaskAsync(const Model::TriggerProcessTaskRequest& request, const TriggerProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerProcessTaskOutcomeCallable triggerProcessTaskCallable(const Model::TriggerProcessTaskRequest& request) const;
			TriggerSophonPlaybookOutcome triggerSophonPlaybook(const Model::TriggerSophonPlaybookRequest &request)const;
			void triggerSophonPlaybookAsync(const Model::TriggerSophonPlaybookRequest& request, const TriggerSophonPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerSophonPlaybookOutcomeCallable triggerSophonPlaybookCallable(const Model::TriggerSophonPlaybookRequest& request) const;
			VerifyPlaybookOutcome verifyPlaybook(const Model::VerifyPlaybookRequest &request)const;
			void verifyPlaybookAsync(const Model::VerifyPlaybookRequest& request, const VerifyPlaybookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyPlaybookOutcomeCallable verifyPlaybookCallable(const Model::VerifyPlaybookRequest& request) const;
			VerifyPythonFileOutcome verifyPythonFile(const Model::VerifyPythonFileRequest &request)const;
			void verifyPythonFileAsync(const Model::VerifyPythonFileRequest& request, const VerifyPythonFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyPythonFileOutcomeCallable verifyPythonFileCallable(const Model::VerifyPythonFileRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SOPHONSOAR_SOPHONSOARCLIENT_H_
