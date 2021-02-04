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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_OUTBOUNDBOTCLIENT_H_
#define ALIBABACLOUD_OUTBOUNDBOT_OUTBOUNDBOTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OutboundBotExport.h"
#include "model/AssignJobsRequest.h"
#include "model/AssignJobsResult.h"
#include "model/CancelJobsRequest.h"
#include "model/CancelJobsResult.h"
#include "model/CreateBatchJobsRequest.h"
#include "model/CreateBatchJobsResult.h"
#include "model/CreateDialogueFlowRequest.h"
#include "model/CreateDialogueFlowResult.h"
#include "model/CreateGlobalQuestionRequest.h"
#include "model/CreateGlobalQuestionResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateIntentRequest.h"
#include "model/CreateIntentResult.h"
#include "model/CreateJobGroupRequest.h"
#include "model/CreateJobGroupResult.h"
#include "model/CreateOutboundCallNumberRequest.h"
#include "model/CreateOutboundCallNumberResult.h"
#include "model/CreateScriptRequest.h"
#include "model/CreateScriptResult.h"
#include "model/CreateScriptWaveformRequest.h"
#include "model/CreateScriptWaveformResult.h"
#include "model/CreateTagRequest.h"
#include "model/CreateTagResult.h"
#include "model/DeleteDialogueFlowRequest.h"
#include "model/DeleteDialogueFlowResult.h"
#include "model/DeleteGlobalQuestionRequest.h"
#include "model/DeleteGlobalQuestionResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteIntentRequest.h"
#include "model/DeleteIntentResult.h"
#include "model/DeleteJobGroupRequest.h"
#include "model/DeleteJobGroupResult.h"
#include "model/DeleteOutboundCallNumberRequest.h"
#include "model/DeleteOutboundCallNumberResult.h"
#include "model/DeleteScriptRequest.h"
#include "model/DeleteScriptResult.h"
#include "model/DeleteScriptWaveformRequest.h"
#include "model/DeleteScriptWaveformResult.h"
#include "model/DescribeGlobalQuestionRequest.h"
#include "model/DescribeGlobalQuestionResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeIntentRequest.h"
#include "model/DescribeIntentResult.h"
#include "model/DescribeJobRequest.h"
#include "model/DescribeJobResult.h"
#include "model/DescribeJobGroupRequest.h"
#include "model/DescribeJobGroupResult.h"
#include "model/DescribeScriptRequest.h"
#include "model/DescribeScriptResult.h"
#include "model/DescribeScriptVoiceConfigRequest.h"
#include "model/DescribeScriptVoiceConfigResult.h"
#include "model/DescribeTTSConfigRequest.h"
#include "model/DescribeTTSConfigResult.h"
#include "model/DescribeTTSDemoRequest.h"
#include "model/DescribeTTSDemoResult.h"
#include "model/DescribeTagHitsSummaryRequest.h"
#include "model/DescribeTagHitsSummaryResult.h"
#include "model/DialogueRequest.h"
#include "model/DialogueResult.h"
#include "model/DownloadRecordingRequest.h"
#include "model/DownloadRecordingResult.h"
#include "model/DuplicateScriptRequest.h"
#include "model/DuplicateScriptResult.h"
#include "model/ExportScriptRequest.h"
#include "model/ExportScriptResult.h"
#include "model/ImportScriptRequest.h"
#include "model/ImportScriptResult.h"
#include "model/InflightTaskTimeoutRequest.h"
#include "model/InflightTaskTimeoutResult.h"
#include "model/ListDialogueFlowsRequest.h"
#include "model/ListDialogueFlowsResult.h"
#include "model/ListGlobalQuestionsRequest.h"
#include "model/ListGlobalQuestionsResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListIntentsRequest.h"
#include "model/ListIntentsResult.h"
#include "model/ListJobGroupsRequest.h"
#include "model/ListJobGroupsResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/ListJobsByGroupRequest.h"
#include "model/ListJobsByGroupResult.h"
#include "model/ListMediaRequest.h"
#include "model/ListMediaResult.h"
#include "model/ListOutboundCallNumbersRequest.h"
#include "model/ListOutboundCallNumbersResult.h"
#include "model/ListSchedulerInstancesRequest.h"
#include "model/ListSchedulerInstancesResult.h"
#include "model/ListScriptPublishHistoriesRequest.h"
#include "model/ListScriptPublishHistoriesResult.h"
#include "model/ListScriptVoiceConfigsRequest.h"
#include "model/ListScriptVoiceConfigsResult.h"
#include "model/ListScriptsRequest.h"
#include "model/ListScriptsResult.h"
#include "model/ListTagsRequest.h"
#include "model/ListTagsResult.h"
#include "model/ModifyBatchJobsRequest.h"
#include "model/ModifyBatchJobsResult.h"
#include "model/ModifyDialogueFlowRequest.h"
#include "model/ModifyDialogueFlowResult.h"
#include "model/ModifyGlobalQuestionRequest.h"
#include "model/ModifyGlobalQuestionResult.h"
#include "model/ModifyInstanceRequest.h"
#include "model/ModifyInstanceResult.h"
#include "model/ModifyIntentRequest.h"
#include "model/ModifyIntentResult.h"
#include "model/ModifyJobGroupRequest.h"
#include "model/ModifyJobGroupResult.h"
#include "model/ModifyOutboundCallNumberRequest.h"
#include "model/ModifyOutboundCallNumberResult.h"
#include "model/ModifyScriptRequest.h"
#include "model/ModifyScriptResult.h"
#include "model/ModifyScriptVoiceConfigRequest.h"
#include "model/ModifyScriptVoiceConfigResult.h"
#include "model/ModifyTTSConfigRequest.h"
#include "model/ModifyTTSConfigResult.h"
#include "model/ModifyTagGroupsRequest.h"
#include "model/ModifyTagGroupsResult.h"
#include "model/PublishScriptRequest.h"
#include "model/PublishScriptResult.h"
#include "model/PublishScriptForDebugRequest.h"
#include "model/PublishScriptForDebugResult.h"
#include "model/QueryJobsRequest.h"
#include "model/QueryJobsResult.h"
#include "model/QueryScriptWaveformsRequest.h"
#include "model/QueryScriptWaveformsResult.h"
#include "model/QueryScriptsByStatusRequest.h"
#include "model/QueryScriptsByStatusResult.h"
#include "model/RecordFailureRequest.h"
#include "model/RecordFailureResult.h"
#include "model/ResumeJobsRequest.h"
#include "model/ResumeJobsResult.h"
#include "model/RollbackScriptRequest.h"
#include "model/RollbackScriptResult.h"
#include "model/StartJobRequest.h"
#include "model/StartJobResult.h"
#include "model/SubmitBatchJobsRequest.h"
#include "model/SubmitBatchJobsResult.h"
#include "model/SubmitRecordingRequest.h"
#include "model/SubmitRecordingResult.h"
#include "model/SubmitScriptReviewRequest.h"
#include "model/SubmitScriptReviewResult.h"
#include "model/SuspendJobsRequest.h"
#include "model/SuspendJobsResult.h"
#include "model/TaskPreparingRequest.h"
#include "model/TaskPreparingResult.h"
#include "model/WithdrawScriptReviewRequest.h"
#include "model/WithdrawScriptReviewResult.h"


namespace AlibabaCloud
{
	namespace OutboundBot
	{
		class ALIBABACLOUD_OUTBOUNDBOT_EXPORT OutboundBotClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AssignJobsResult> AssignJobsOutcome;
			typedef std::future<AssignJobsOutcome> AssignJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::AssignJobsRequest&, const AssignJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignJobsAsyncHandler;
			typedef Outcome<Error, Model::CancelJobsResult> CancelJobsOutcome;
			typedef std::future<CancelJobsOutcome> CancelJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CancelJobsRequest&, const CancelJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelJobsAsyncHandler;
			typedef Outcome<Error, Model::CreateBatchJobsResult> CreateBatchJobsOutcome;
			typedef std::future<CreateBatchJobsOutcome> CreateBatchJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateBatchJobsRequest&, const CreateBatchJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchJobsAsyncHandler;
			typedef Outcome<Error, Model::CreateDialogueFlowResult> CreateDialogueFlowOutcome;
			typedef std::future<CreateDialogueFlowOutcome> CreateDialogueFlowOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateDialogueFlowRequest&, const CreateDialogueFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDialogueFlowAsyncHandler;
			typedef Outcome<Error, Model::CreateGlobalQuestionResult> CreateGlobalQuestionOutcome;
			typedef std::future<CreateGlobalQuestionOutcome> CreateGlobalQuestionOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateGlobalQuestionRequest&, const CreateGlobalQuestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalQuestionAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateIntentResult> CreateIntentOutcome;
			typedef std::future<CreateIntentOutcome> CreateIntentOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateIntentRequest&, const CreateIntentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntentAsyncHandler;
			typedef Outcome<Error, Model::CreateJobGroupResult> CreateJobGroupOutcome;
			typedef std::future<CreateJobGroupOutcome> CreateJobGroupOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateJobGroupRequest&, const CreateJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateOutboundCallNumberResult> CreateOutboundCallNumberOutcome;
			typedef std::future<CreateOutboundCallNumberOutcome> CreateOutboundCallNumberOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateOutboundCallNumberRequest&, const CreateOutboundCallNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOutboundCallNumberAsyncHandler;
			typedef Outcome<Error, Model::CreateScriptResult> CreateScriptOutcome;
			typedef std::future<CreateScriptOutcome> CreateScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateScriptRequest&, const CreateScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScriptAsyncHandler;
			typedef Outcome<Error, Model::CreateScriptWaveformResult> CreateScriptWaveformOutcome;
			typedef std::future<CreateScriptWaveformOutcome> CreateScriptWaveformOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateScriptWaveformRequest&, const CreateScriptWaveformOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScriptWaveformAsyncHandler;
			typedef Outcome<Error, Model::CreateTagResult> CreateTagOutcome;
			typedef std::future<CreateTagOutcome> CreateTagOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateTagRequest&, const CreateTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteDialogueFlowResult> DeleteDialogueFlowOutcome;
			typedef std::future<DeleteDialogueFlowOutcome> DeleteDialogueFlowOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteDialogueFlowRequest&, const DeleteDialogueFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDialogueFlowAsyncHandler;
			typedef Outcome<Error, Model::DeleteGlobalQuestionResult> DeleteGlobalQuestionOutcome;
			typedef std::future<DeleteGlobalQuestionOutcome> DeleteGlobalQuestionOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteGlobalQuestionRequest&, const DeleteGlobalQuestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalQuestionAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteIntentResult> DeleteIntentOutcome;
			typedef std::future<DeleteIntentOutcome> DeleteIntentOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteIntentRequest&, const DeleteIntentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntentAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobGroupResult> DeleteJobGroupOutcome;
			typedef std::future<DeleteJobGroupOutcome> DeleteJobGroupOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteJobGroupRequest&, const DeleteJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteOutboundCallNumberResult> DeleteOutboundCallNumberOutcome;
			typedef std::future<DeleteOutboundCallNumberOutcome> DeleteOutboundCallNumberOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteOutboundCallNumberRequest&, const DeleteOutboundCallNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOutboundCallNumberAsyncHandler;
			typedef Outcome<Error, Model::DeleteScriptResult> DeleteScriptOutcome;
			typedef std::future<DeleteScriptOutcome> DeleteScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteScriptRequest&, const DeleteScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScriptAsyncHandler;
			typedef Outcome<Error, Model::DeleteScriptWaveformResult> DeleteScriptWaveformOutcome;
			typedef std::future<DeleteScriptWaveformOutcome> DeleteScriptWaveformOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteScriptWaveformRequest&, const DeleteScriptWaveformOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScriptWaveformAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalQuestionResult> DescribeGlobalQuestionOutcome;
			typedef std::future<DescribeGlobalQuestionOutcome> DescribeGlobalQuestionOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeGlobalQuestionRequest&, const DescribeGlobalQuestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalQuestionAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeIntentResult> DescribeIntentOutcome;
			typedef std::future<DescribeIntentOutcome> DescribeIntentOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeIntentRequest&, const DescribeIntentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntentAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobResult> DescribeJobOutcome;
			typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeJobRequest&, const DescribeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobGroupResult> DescribeJobGroupOutcome;
			typedef std::future<DescribeJobGroupOutcome> DescribeJobGroupOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeJobGroupRequest&, const DescribeJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeScriptResult> DescribeScriptOutcome;
			typedef std::future<DescribeScriptOutcome> DescribeScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeScriptRequest&, const DescribeScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScriptAsyncHandler;
			typedef Outcome<Error, Model::DescribeScriptVoiceConfigResult> DescribeScriptVoiceConfigOutcome;
			typedef std::future<DescribeScriptVoiceConfigOutcome> DescribeScriptVoiceConfigOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeScriptVoiceConfigRequest&, const DescribeScriptVoiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScriptVoiceConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeTTSConfigResult> DescribeTTSConfigOutcome;
			typedef std::future<DescribeTTSConfigOutcome> DescribeTTSConfigOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeTTSConfigRequest&, const DescribeTTSConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTTSConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeTTSDemoResult> DescribeTTSDemoOutcome;
			typedef std::future<DescribeTTSDemoOutcome> DescribeTTSDemoOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeTTSDemoRequest&, const DescribeTTSDemoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTTSDemoAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagHitsSummaryResult> DescribeTagHitsSummaryOutcome;
			typedef std::future<DescribeTagHitsSummaryOutcome> DescribeTagHitsSummaryOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeTagHitsSummaryRequest&, const DescribeTagHitsSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagHitsSummaryAsyncHandler;
			typedef Outcome<Error, Model::DialogueResult> DialogueOutcome;
			typedef std::future<DialogueOutcome> DialogueOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DialogueRequest&, const DialogueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DialogueAsyncHandler;
			typedef Outcome<Error, Model::DownloadRecordingResult> DownloadRecordingOutcome;
			typedef std::future<DownloadRecordingOutcome> DownloadRecordingOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DownloadRecordingRequest&, const DownloadRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadRecordingAsyncHandler;
			typedef Outcome<Error, Model::DuplicateScriptResult> DuplicateScriptOutcome;
			typedef std::future<DuplicateScriptOutcome> DuplicateScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DuplicateScriptRequest&, const DuplicateScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DuplicateScriptAsyncHandler;
			typedef Outcome<Error, Model::ExportScriptResult> ExportScriptOutcome;
			typedef std::future<ExportScriptOutcome> ExportScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ExportScriptRequest&, const ExportScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportScriptAsyncHandler;
			typedef Outcome<Error, Model::ImportScriptResult> ImportScriptOutcome;
			typedef std::future<ImportScriptOutcome> ImportScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ImportScriptRequest&, const ImportScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportScriptAsyncHandler;
			typedef Outcome<Error, Model::InflightTaskTimeoutResult> InflightTaskTimeoutOutcome;
			typedef std::future<InflightTaskTimeoutOutcome> InflightTaskTimeoutOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::InflightTaskTimeoutRequest&, const InflightTaskTimeoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InflightTaskTimeoutAsyncHandler;
			typedef Outcome<Error, Model::ListDialogueFlowsResult> ListDialogueFlowsOutcome;
			typedef std::future<ListDialogueFlowsOutcome> ListDialogueFlowsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListDialogueFlowsRequest&, const ListDialogueFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDialogueFlowsAsyncHandler;
			typedef Outcome<Error, Model::ListGlobalQuestionsResult> ListGlobalQuestionsOutcome;
			typedef std::future<ListGlobalQuestionsOutcome> ListGlobalQuestionsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListGlobalQuestionsRequest&, const ListGlobalQuestionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGlobalQuestionsAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListIntentsResult> ListIntentsOutcome;
			typedef std::future<ListIntentsOutcome> ListIntentsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListIntentsRequest&, const ListIntentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIntentsAsyncHandler;
			typedef Outcome<Error, Model::ListJobGroupsResult> ListJobGroupsOutcome;
			typedef std::future<ListJobGroupsOutcome> ListJobGroupsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListJobGroupsRequest&, const ListJobGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::ListJobsByGroupResult> ListJobsByGroupOutcome;
			typedef std::future<ListJobsByGroupOutcome> ListJobsByGroupOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListJobsByGroupRequest&, const ListJobsByGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsByGroupAsyncHandler;
			typedef Outcome<Error, Model::ListMediaResult> ListMediaOutcome;
			typedef std::future<ListMediaOutcome> ListMediaOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListMediaRequest&, const ListMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMediaAsyncHandler;
			typedef Outcome<Error, Model::ListOutboundCallNumbersResult> ListOutboundCallNumbersOutcome;
			typedef std::future<ListOutboundCallNumbersOutcome> ListOutboundCallNumbersOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListOutboundCallNumbersRequest&, const ListOutboundCallNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOutboundCallNumbersAsyncHandler;
			typedef Outcome<Error, Model::ListSchedulerInstancesResult> ListSchedulerInstancesOutcome;
			typedef std::future<ListSchedulerInstancesOutcome> ListSchedulerInstancesOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListSchedulerInstancesRequest&, const ListSchedulerInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSchedulerInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListScriptPublishHistoriesResult> ListScriptPublishHistoriesOutcome;
			typedef std::future<ListScriptPublishHistoriesOutcome> ListScriptPublishHistoriesOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListScriptPublishHistoriesRequest&, const ListScriptPublishHistoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScriptPublishHistoriesAsyncHandler;
			typedef Outcome<Error, Model::ListScriptVoiceConfigsResult> ListScriptVoiceConfigsOutcome;
			typedef std::future<ListScriptVoiceConfigsOutcome> ListScriptVoiceConfigsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListScriptVoiceConfigsRequest&, const ListScriptVoiceConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScriptVoiceConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListScriptsResult> ListScriptsOutcome;
			typedef std::future<ListScriptsOutcome> ListScriptsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListScriptsRequest&, const ListScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScriptsAsyncHandler;
			typedef Outcome<Error, Model::ListTagsResult> ListTagsOutcome;
			typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListTagsRequest&, const ListTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsAsyncHandler;
			typedef Outcome<Error, Model::ModifyBatchJobsResult> ModifyBatchJobsOutcome;
			typedef std::future<ModifyBatchJobsOutcome> ModifyBatchJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyBatchJobsRequest&, const ModifyBatchJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBatchJobsAsyncHandler;
			typedef Outcome<Error, Model::ModifyDialogueFlowResult> ModifyDialogueFlowOutcome;
			typedef std::future<ModifyDialogueFlowOutcome> ModifyDialogueFlowOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyDialogueFlowRequest&, const ModifyDialogueFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDialogueFlowAsyncHandler;
			typedef Outcome<Error, Model::ModifyGlobalQuestionResult> ModifyGlobalQuestionOutcome;
			typedef std::future<ModifyGlobalQuestionOutcome> ModifyGlobalQuestionOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyGlobalQuestionRequest&, const ModifyGlobalQuestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalQuestionAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceResult> ModifyInstanceOutcome;
			typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyInstanceRequest&, const ModifyInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyIntentResult> ModifyIntentOutcome;
			typedef std::future<ModifyIntentOutcome> ModifyIntentOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyIntentRequest&, const ModifyIntentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntentAsyncHandler;
			typedef Outcome<Error, Model::ModifyJobGroupResult> ModifyJobGroupOutcome;
			typedef std::future<ModifyJobGroupOutcome> ModifyJobGroupOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyJobGroupRequest&, const ModifyJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJobGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyOutboundCallNumberResult> ModifyOutboundCallNumberOutcome;
			typedef std::future<ModifyOutboundCallNumberOutcome> ModifyOutboundCallNumberOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyOutboundCallNumberRequest&, const ModifyOutboundCallNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOutboundCallNumberAsyncHandler;
			typedef Outcome<Error, Model::ModifyScriptResult> ModifyScriptOutcome;
			typedef std::future<ModifyScriptOutcome> ModifyScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyScriptRequest&, const ModifyScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScriptAsyncHandler;
			typedef Outcome<Error, Model::ModifyScriptVoiceConfigResult> ModifyScriptVoiceConfigOutcome;
			typedef std::future<ModifyScriptVoiceConfigOutcome> ModifyScriptVoiceConfigOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyScriptVoiceConfigRequest&, const ModifyScriptVoiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScriptVoiceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyTTSConfigResult> ModifyTTSConfigOutcome;
			typedef std::future<ModifyTTSConfigOutcome> ModifyTTSConfigOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyTTSConfigRequest&, const ModifyTTSConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTTSConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyTagGroupsResult> ModifyTagGroupsOutcome;
			typedef std::future<ModifyTagGroupsOutcome> ModifyTagGroupsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyTagGroupsRequest&, const ModifyTagGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTagGroupsAsyncHandler;
			typedef Outcome<Error, Model::PublishScriptResult> PublishScriptOutcome;
			typedef std::future<PublishScriptOutcome> PublishScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::PublishScriptRequest&, const PublishScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishScriptAsyncHandler;
			typedef Outcome<Error, Model::PublishScriptForDebugResult> PublishScriptForDebugOutcome;
			typedef std::future<PublishScriptForDebugOutcome> PublishScriptForDebugOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::PublishScriptForDebugRequest&, const PublishScriptForDebugOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishScriptForDebugAsyncHandler;
			typedef Outcome<Error, Model::QueryJobsResult> QueryJobsOutcome;
			typedef std::future<QueryJobsOutcome> QueryJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::QueryJobsRequest&, const QueryJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryJobsAsyncHandler;
			typedef Outcome<Error, Model::QueryScriptWaveformsResult> QueryScriptWaveformsOutcome;
			typedef std::future<QueryScriptWaveformsOutcome> QueryScriptWaveformsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::QueryScriptWaveformsRequest&, const QueryScriptWaveformsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryScriptWaveformsAsyncHandler;
			typedef Outcome<Error, Model::QueryScriptsByStatusResult> QueryScriptsByStatusOutcome;
			typedef std::future<QueryScriptsByStatusOutcome> QueryScriptsByStatusOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::QueryScriptsByStatusRequest&, const QueryScriptsByStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryScriptsByStatusAsyncHandler;
			typedef Outcome<Error, Model::RecordFailureResult> RecordFailureOutcome;
			typedef std::future<RecordFailureOutcome> RecordFailureOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::RecordFailureRequest&, const RecordFailureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecordFailureAsyncHandler;
			typedef Outcome<Error, Model::ResumeJobsResult> ResumeJobsOutcome;
			typedef std::future<ResumeJobsOutcome> ResumeJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ResumeJobsRequest&, const ResumeJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeJobsAsyncHandler;
			typedef Outcome<Error, Model::RollbackScriptResult> RollbackScriptOutcome;
			typedef std::future<RollbackScriptOutcome> RollbackScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::RollbackScriptRequest&, const RollbackScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackScriptAsyncHandler;
			typedef Outcome<Error, Model::StartJobResult> StartJobOutcome;
			typedef std::future<StartJobOutcome> StartJobOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::StartJobRequest&, const StartJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitBatchJobsResult> SubmitBatchJobsOutcome;
			typedef std::future<SubmitBatchJobsOutcome> SubmitBatchJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SubmitBatchJobsRequest&, const SubmitBatchJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitBatchJobsAsyncHandler;
			typedef Outcome<Error, Model::SubmitRecordingResult> SubmitRecordingOutcome;
			typedef std::future<SubmitRecordingOutcome> SubmitRecordingOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SubmitRecordingRequest&, const SubmitRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitRecordingAsyncHandler;
			typedef Outcome<Error, Model::SubmitScriptReviewResult> SubmitScriptReviewOutcome;
			typedef std::future<SubmitScriptReviewOutcome> SubmitScriptReviewOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SubmitScriptReviewRequest&, const SubmitScriptReviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitScriptReviewAsyncHandler;
			typedef Outcome<Error, Model::SuspendJobsResult> SuspendJobsOutcome;
			typedef std::future<SuspendJobsOutcome> SuspendJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SuspendJobsRequest&, const SuspendJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendJobsAsyncHandler;
			typedef Outcome<Error, Model::TaskPreparingResult> TaskPreparingOutcome;
			typedef std::future<TaskPreparingOutcome> TaskPreparingOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::TaskPreparingRequest&, const TaskPreparingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaskPreparingAsyncHandler;
			typedef Outcome<Error, Model::WithdrawScriptReviewResult> WithdrawScriptReviewOutcome;
			typedef std::future<WithdrawScriptReviewOutcome> WithdrawScriptReviewOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::WithdrawScriptReviewRequest&, const WithdrawScriptReviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawScriptReviewAsyncHandler;

			OutboundBotClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OutboundBotClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OutboundBotClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OutboundBotClient();
			AssignJobsOutcome assignJobs(const Model::AssignJobsRequest &request)const;
			void assignJobsAsync(const Model::AssignJobsRequest& request, const AssignJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignJobsOutcomeCallable assignJobsCallable(const Model::AssignJobsRequest& request) const;
			CancelJobsOutcome cancelJobs(const Model::CancelJobsRequest &request)const;
			void cancelJobsAsync(const Model::CancelJobsRequest& request, const CancelJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelJobsOutcomeCallable cancelJobsCallable(const Model::CancelJobsRequest& request) const;
			CreateBatchJobsOutcome createBatchJobs(const Model::CreateBatchJobsRequest &request)const;
			void createBatchJobsAsync(const Model::CreateBatchJobsRequest& request, const CreateBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBatchJobsOutcomeCallable createBatchJobsCallable(const Model::CreateBatchJobsRequest& request) const;
			CreateDialogueFlowOutcome createDialogueFlow(const Model::CreateDialogueFlowRequest &request)const;
			void createDialogueFlowAsync(const Model::CreateDialogueFlowRequest& request, const CreateDialogueFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDialogueFlowOutcomeCallable createDialogueFlowCallable(const Model::CreateDialogueFlowRequest& request) const;
			CreateGlobalQuestionOutcome createGlobalQuestion(const Model::CreateGlobalQuestionRequest &request)const;
			void createGlobalQuestionAsync(const Model::CreateGlobalQuestionRequest& request, const CreateGlobalQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGlobalQuestionOutcomeCallable createGlobalQuestionCallable(const Model::CreateGlobalQuestionRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateIntentOutcome createIntent(const Model::CreateIntentRequest &request)const;
			void createIntentAsync(const Model::CreateIntentRequest& request, const CreateIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIntentOutcomeCallable createIntentCallable(const Model::CreateIntentRequest& request) const;
			CreateJobGroupOutcome createJobGroup(const Model::CreateJobGroupRequest &request)const;
			void createJobGroupAsync(const Model::CreateJobGroupRequest& request, const CreateJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobGroupOutcomeCallable createJobGroupCallable(const Model::CreateJobGroupRequest& request) const;
			CreateOutboundCallNumberOutcome createOutboundCallNumber(const Model::CreateOutboundCallNumberRequest &request)const;
			void createOutboundCallNumberAsync(const Model::CreateOutboundCallNumberRequest& request, const CreateOutboundCallNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOutboundCallNumberOutcomeCallable createOutboundCallNumberCallable(const Model::CreateOutboundCallNumberRequest& request) const;
			CreateScriptOutcome createScript(const Model::CreateScriptRequest &request)const;
			void createScriptAsync(const Model::CreateScriptRequest& request, const CreateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScriptOutcomeCallable createScriptCallable(const Model::CreateScriptRequest& request) const;
			CreateScriptWaveformOutcome createScriptWaveform(const Model::CreateScriptWaveformRequest &request)const;
			void createScriptWaveformAsync(const Model::CreateScriptWaveformRequest& request, const CreateScriptWaveformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScriptWaveformOutcomeCallable createScriptWaveformCallable(const Model::CreateScriptWaveformRequest& request) const;
			CreateTagOutcome createTag(const Model::CreateTagRequest &request)const;
			void createTagAsync(const Model::CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagOutcomeCallable createTagCallable(const Model::CreateTagRequest& request) const;
			DeleteDialogueFlowOutcome deleteDialogueFlow(const Model::DeleteDialogueFlowRequest &request)const;
			void deleteDialogueFlowAsync(const Model::DeleteDialogueFlowRequest& request, const DeleteDialogueFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDialogueFlowOutcomeCallable deleteDialogueFlowCallable(const Model::DeleteDialogueFlowRequest& request) const;
			DeleteGlobalQuestionOutcome deleteGlobalQuestion(const Model::DeleteGlobalQuestionRequest &request)const;
			void deleteGlobalQuestionAsync(const Model::DeleteGlobalQuestionRequest& request, const DeleteGlobalQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGlobalQuestionOutcomeCallable deleteGlobalQuestionCallable(const Model::DeleteGlobalQuestionRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteIntentOutcome deleteIntent(const Model::DeleteIntentRequest &request)const;
			void deleteIntentAsync(const Model::DeleteIntentRequest& request, const DeleteIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIntentOutcomeCallable deleteIntentCallable(const Model::DeleteIntentRequest& request) const;
			DeleteJobGroupOutcome deleteJobGroup(const Model::DeleteJobGroupRequest &request)const;
			void deleteJobGroupAsync(const Model::DeleteJobGroupRequest& request, const DeleteJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobGroupOutcomeCallable deleteJobGroupCallable(const Model::DeleteJobGroupRequest& request) const;
			DeleteOutboundCallNumberOutcome deleteOutboundCallNumber(const Model::DeleteOutboundCallNumberRequest &request)const;
			void deleteOutboundCallNumberAsync(const Model::DeleteOutboundCallNumberRequest& request, const DeleteOutboundCallNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOutboundCallNumberOutcomeCallable deleteOutboundCallNumberCallable(const Model::DeleteOutboundCallNumberRequest& request) const;
			DeleteScriptOutcome deleteScript(const Model::DeleteScriptRequest &request)const;
			void deleteScriptAsync(const Model::DeleteScriptRequest& request, const DeleteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScriptOutcomeCallable deleteScriptCallable(const Model::DeleteScriptRequest& request) const;
			DeleteScriptWaveformOutcome deleteScriptWaveform(const Model::DeleteScriptWaveformRequest &request)const;
			void deleteScriptWaveformAsync(const Model::DeleteScriptWaveformRequest& request, const DeleteScriptWaveformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScriptWaveformOutcomeCallable deleteScriptWaveformCallable(const Model::DeleteScriptWaveformRequest& request) const;
			DescribeGlobalQuestionOutcome describeGlobalQuestion(const Model::DescribeGlobalQuestionRequest &request)const;
			void describeGlobalQuestionAsync(const Model::DescribeGlobalQuestionRequest& request, const DescribeGlobalQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalQuestionOutcomeCallable describeGlobalQuestionCallable(const Model::DescribeGlobalQuestionRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeIntentOutcome describeIntent(const Model::DescribeIntentRequest &request)const;
			void describeIntentAsync(const Model::DescribeIntentRequest& request, const DescribeIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIntentOutcomeCallable describeIntentCallable(const Model::DescribeIntentRequest& request) const;
			DescribeJobOutcome describeJob(const Model::DescribeJobRequest &request)const;
			void describeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobOutcomeCallable describeJobCallable(const Model::DescribeJobRequest& request) const;
			DescribeJobGroupOutcome describeJobGroup(const Model::DescribeJobGroupRequest &request)const;
			void describeJobGroupAsync(const Model::DescribeJobGroupRequest& request, const DescribeJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobGroupOutcomeCallable describeJobGroupCallable(const Model::DescribeJobGroupRequest& request) const;
			DescribeScriptOutcome describeScript(const Model::DescribeScriptRequest &request)const;
			void describeScriptAsync(const Model::DescribeScriptRequest& request, const DescribeScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScriptOutcomeCallable describeScriptCallable(const Model::DescribeScriptRequest& request) const;
			DescribeScriptVoiceConfigOutcome describeScriptVoiceConfig(const Model::DescribeScriptVoiceConfigRequest &request)const;
			void describeScriptVoiceConfigAsync(const Model::DescribeScriptVoiceConfigRequest& request, const DescribeScriptVoiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScriptVoiceConfigOutcomeCallable describeScriptVoiceConfigCallable(const Model::DescribeScriptVoiceConfigRequest& request) const;
			DescribeTTSConfigOutcome describeTTSConfig(const Model::DescribeTTSConfigRequest &request)const;
			void describeTTSConfigAsync(const Model::DescribeTTSConfigRequest& request, const DescribeTTSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTTSConfigOutcomeCallable describeTTSConfigCallable(const Model::DescribeTTSConfigRequest& request) const;
			DescribeTTSDemoOutcome describeTTSDemo(const Model::DescribeTTSDemoRequest &request)const;
			void describeTTSDemoAsync(const Model::DescribeTTSDemoRequest& request, const DescribeTTSDemoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTTSDemoOutcomeCallable describeTTSDemoCallable(const Model::DescribeTTSDemoRequest& request) const;
			DescribeTagHitsSummaryOutcome describeTagHitsSummary(const Model::DescribeTagHitsSummaryRequest &request)const;
			void describeTagHitsSummaryAsync(const Model::DescribeTagHitsSummaryRequest& request, const DescribeTagHitsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagHitsSummaryOutcomeCallable describeTagHitsSummaryCallable(const Model::DescribeTagHitsSummaryRequest& request) const;
			DialogueOutcome dialogue(const Model::DialogueRequest &request)const;
			void dialogueAsync(const Model::DialogueRequest& request, const DialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DialogueOutcomeCallable dialogueCallable(const Model::DialogueRequest& request) const;
			DownloadRecordingOutcome downloadRecording(const Model::DownloadRecordingRequest &request)const;
			void downloadRecordingAsync(const Model::DownloadRecordingRequest& request, const DownloadRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadRecordingOutcomeCallable downloadRecordingCallable(const Model::DownloadRecordingRequest& request) const;
			DuplicateScriptOutcome duplicateScript(const Model::DuplicateScriptRequest &request)const;
			void duplicateScriptAsync(const Model::DuplicateScriptRequest& request, const DuplicateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DuplicateScriptOutcomeCallable duplicateScriptCallable(const Model::DuplicateScriptRequest& request) const;
			ExportScriptOutcome exportScript(const Model::ExportScriptRequest &request)const;
			void exportScriptAsync(const Model::ExportScriptRequest& request, const ExportScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportScriptOutcomeCallable exportScriptCallable(const Model::ExportScriptRequest& request) const;
			ImportScriptOutcome importScript(const Model::ImportScriptRequest &request)const;
			void importScriptAsync(const Model::ImportScriptRequest& request, const ImportScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportScriptOutcomeCallable importScriptCallable(const Model::ImportScriptRequest& request) const;
			InflightTaskTimeoutOutcome inflightTaskTimeout(const Model::InflightTaskTimeoutRequest &request)const;
			void inflightTaskTimeoutAsync(const Model::InflightTaskTimeoutRequest& request, const InflightTaskTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InflightTaskTimeoutOutcomeCallable inflightTaskTimeoutCallable(const Model::InflightTaskTimeoutRequest& request) const;
			ListDialogueFlowsOutcome listDialogueFlows(const Model::ListDialogueFlowsRequest &request)const;
			void listDialogueFlowsAsync(const Model::ListDialogueFlowsRequest& request, const ListDialogueFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDialogueFlowsOutcomeCallable listDialogueFlowsCallable(const Model::ListDialogueFlowsRequest& request) const;
			ListGlobalQuestionsOutcome listGlobalQuestions(const Model::ListGlobalQuestionsRequest &request)const;
			void listGlobalQuestionsAsync(const Model::ListGlobalQuestionsRequest& request, const ListGlobalQuestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGlobalQuestionsOutcomeCallable listGlobalQuestionsCallable(const Model::ListGlobalQuestionsRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListIntentsOutcome listIntents(const Model::ListIntentsRequest &request)const;
			void listIntentsAsync(const Model::ListIntentsRequest& request, const ListIntentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIntentsOutcomeCallable listIntentsCallable(const Model::ListIntentsRequest& request) const;
			ListJobGroupsOutcome listJobGroups(const Model::ListJobGroupsRequest &request)const;
			void listJobGroupsAsync(const Model::ListJobGroupsRequest& request, const ListJobGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobGroupsOutcomeCallable listJobGroupsCallable(const Model::ListJobGroupsRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			ListJobsByGroupOutcome listJobsByGroup(const Model::ListJobsByGroupRequest &request)const;
			void listJobsByGroupAsync(const Model::ListJobsByGroupRequest& request, const ListJobsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsByGroupOutcomeCallable listJobsByGroupCallable(const Model::ListJobsByGroupRequest& request) const;
			ListMediaOutcome listMedia(const Model::ListMediaRequest &request)const;
			void listMediaAsync(const Model::ListMediaRequest& request, const ListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMediaOutcomeCallable listMediaCallable(const Model::ListMediaRequest& request) const;
			ListOutboundCallNumbersOutcome listOutboundCallNumbers(const Model::ListOutboundCallNumbersRequest &request)const;
			void listOutboundCallNumbersAsync(const Model::ListOutboundCallNumbersRequest& request, const ListOutboundCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOutboundCallNumbersOutcomeCallable listOutboundCallNumbersCallable(const Model::ListOutboundCallNumbersRequest& request) const;
			ListSchedulerInstancesOutcome listSchedulerInstances(const Model::ListSchedulerInstancesRequest &request)const;
			void listSchedulerInstancesAsync(const Model::ListSchedulerInstancesRequest& request, const ListSchedulerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSchedulerInstancesOutcomeCallable listSchedulerInstancesCallable(const Model::ListSchedulerInstancesRequest& request) const;
			ListScriptPublishHistoriesOutcome listScriptPublishHistories(const Model::ListScriptPublishHistoriesRequest &request)const;
			void listScriptPublishHistoriesAsync(const Model::ListScriptPublishHistoriesRequest& request, const ListScriptPublishHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScriptPublishHistoriesOutcomeCallable listScriptPublishHistoriesCallable(const Model::ListScriptPublishHistoriesRequest& request) const;
			ListScriptVoiceConfigsOutcome listScriptVoiceConfigs(const Model::ListScriptVoiceConfigsRequest &request)const;
			void listScriptVoiceConfigsAsync(const Model::ListScriptVoiceConfigsRequest& request, const ListScriptVoiceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScriptVoiceConfigsOutcomeCallable listScriptVoiceConfigsCallable(const Model::ListScriptVoiceConfigsRequest& request) const;
			ListScriptsOutcome listScripts(const Model::ListScriptsRequest &request)const;
			void listScriptsAsync(const Model::ListScriptsRequest& request, const ListScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScriptsOutcomeCallable listScriptsCallable(const Model::ListScriptsRequest& request) const;
			ListTagsOutcome listTags(const Model::ListTagsRequest &request)const;
			void listTagsAsync(const Model::ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsOutcomeCallable listTagsCallable(const Model::ListTagsRequest& request) const;
			ModifyBatchJobsOutcome modifyBatchJobs(const Model::ModifyBatchJobsRequest &request)const;
			void modifyBatchJobsAsync(const Model::ModifyBatchJobsRequest& request, const ModifyBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBatchJobsOutcomeCallable modifyBatchJobsCallable(const Model::ModifyBatchJobsRequest& request) const;
			ModifyDialogueFlowOutcome modifyDialogueFlow(const Model::ModifyDialogueFlowRequest &request)const;
			void modifyDialogueFlowAsync(const Model::ModifyDialogueFlowRequest& request, const ModifyDialogueFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDialogueFlowOutcomeCallable modifyDialogueFlowCallable(const Model::ModifyDialogueFlowRequest& request) const;
			ModifyGlobalQuestionOutcome modifyGlobalQuestion(const Model::ModifyGlobalQuestionRequest &request)const;
			void modifyGlobalQuestionAsync(const Model::ModifyGlobalQuestionRequest& request, const ModifyGlobalQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGlobalQuestionOutcomeCallable modifyGlobalQuestionCallable(const Model::ModifyGlobalQuestionRequest& request) const;
			ModifyInstanceOutcome modifyInstance(const Model::ModifyInstanceRequest &request)const;
			void modifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceOutcomeCallable modifyInstanceCallable(const Model::ModifyInstanceRequest& request) const;
			ModifyIntentOutcome modifyIntent(const Model::ModifyIntentRequest &request)const;
			void modifyIntentAsync(const Model::ModifyIntentRequest& request, const ModifyIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIntentOutcomeCallable modifyIntentCallable(const Model::ModifyIntentRequest& request) const;
			ModifyJobGroupOutcome modifyJobGroup(const Model::ModifyJobGroupRequest &request)const;
			void modifyJobGroupAsync(const Model::ModifyJobGroupRequest& request, const ModifyJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyJobGroupOutcomeCallable modifyJobGroupCallable(const Model::ModifyJobGroupRequest& request) const;
			ModifyOutboundCallNumberOutcome modifyOutboundCallNumber(const Model::ModifyOutboundCallNumberRequest &request)const;
			void modifyOutboundCallNumberAsync(const Model::ModifyOutboundCallNumberRequest& request, const ModifyOutboundCallNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOutboundCallNumberOutcomeCallable modifyOutboundCallNumberCallable(const Model::ModifyOutboundCallNumberRequest& request) const;
			ModifyScriptOutcome modifyScript(const Model::ModifyScriptRequest &request)const;
			void modifyScriptAsync(const Model::ModifyScriptRequest& request, const ModifyScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScriptOutcomeCallable modifyScriptCallable(const Model::ModifyScriptRequest& request) const;
			ModifyScriptVoiceConfigOutcome modifyScriptVoiceConfig(const Model::ModifyScriptVoiceConfigRequest &request)const;
			void modifyScriptVoiceConfigAsync(const Model::ModifyScriptVoiceConfigRequest& request, const ModifyScriptVoiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScriptVoiceConfigOutcomeCallable modifyScriptVoiceConfigCallable(const Model::ModifyScriptVoiceConfigRequest& request) const;
			ModifyTTSConfigOutcome modifyTTSConfig(const Model::ModifyTTSConfigRequest &request)const;
			void modifyTTSConfigAsync(const Model::ModifyTTSConfigRequest& request, const ModifyTTSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTTSConfigOutcomeCallable modifyTTSConfigCallable(const Model::ModifyTTSConfigRequest& request) const;
			ModifyTagGroupsOutcome modifyTagGroups(const Model::ModifyTagGroupsRequest &request)const;
			void modifyTagGroupsAsync(const Model::ModifyTagGroupsRequest& request, const ModifyTagGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTagGroupsOutcomeCallable modifyTagGroupsCallable(const Model::ModifyTagGroupsRequest& request) const;
			PublishScriptOutcome publishScript(const Model::PublishScriptRequest &request)const;
			void publishScriptAsync(const Model::PublishScriptRequest& request, const PublishScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishScriptOutcomeCallable publishScriptCallable(const Model::PublishScriptRequest& request) const;
			PublishScriptForDebugOutcome publishScriptForDebug(const Model::PublishScriptForDebugRequest &request)const;
			void publishScriptForDebugAsync(const Model::PublishScriptForDebugRequest& request, const PublishScriptForDebugAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishScriptForDebugOutcomeCallable publishScriptForDebugCallable(const Model::PublishScriptForDebugRequest& request) const;
			QueryJobsOutcome queryJobs(const Model::QueryJobsRequest &request)const;
			void queryJobsAsync(const Model::QueryJobsRequest& request, const QueryJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryJobsOutcomeCallable queryJobsCallable(const Model::QueryJobsRequest& request) const;
			QueryScriptWaveformsOutcome queryScriptWaveforms(const Model::QueryScriptWaveformsRequest &request)const;
			void queryScriptWaveformsAsync(const Model::QueryScriptWaveformsRequest& request, const QueryScriptWaveformsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryScriptWaveformsOutcomeCallable queryScriptWaveformsCallable(const Model::QueryScriptWaveformsRequest& request) const;
			QueryScriptsByStatusOutcome queryScriptsByStatus(const Model::QueryScriptsByStatusRequest &request)const;
			void queryScriptsByStatusAsync(const Model::QueryScriptsByStatusRequest& request, const QueryScriptsByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryScriptsByStatusOutcomeCallable queryScriptsByStatusCallable(const Model::QueryScriptsByStatusRequest& request) const;
			RecordFailureOutcome recordFailure(const Model::RecordFailureRequest &request)const;
			void recordFailureAsync(const Model::RecordFailureRequest& request, const RecordFailureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecordFailureOutcomeCallable recordFailureCallable(const Model::RecordFailureRequest& request) const;
			ResumeJobsOutcome resumeJobs(const Model::ResumeJobsRequest &request)const;
			void resumeJobsAsync(const Model::ResumeJobsRequest& request, const ResumeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeJobsOutcomeCallable resumeJobsCallable(const Model::ResumeJobsRequest& request) const;
			RollbackScriptOutcome rollbackScript(const Model::RollbackScriptRequest &request)const;
			void rollbackScriptAsync(const Model::RollbackScriptRequest& request, const RollbackScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackScriptOutcomeCallable rollbackScriptCallable(const Model::RollbackScriptRequest& request) const;
			StartJobOutcome startJob(const Model::StartJobRequest &request)const;
			void startJobAsync(const Model::StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartJobOutcomeCallable startJobCallable(const Model::StartJobRequest& request) const;
			SubmitBatchJobsOutcome submitBatchJobs(const Model::SubmitBatchJobsRequest &request)const;
			void submitBatchJobsAsync(const Model::SubmitBatchJobsRequest& request, const SubmitBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitBatchJobsOutcomeCallable submitBatchJobsCallable(const Model::SubmitBatchJobsRequest& request) const;
			SubmitRecordingOutcome submitRecording(const Model::SubmitRecordingRequest &request)const;
			void submitRecordingAsync(const Model::SubmitRecordingRequest& request, const SubmitRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitRecordingOutcomeCallable submitRecordingCallable(const Model::SubmitRecordingRequest& request) const;
			SubmitScriptReviewOutcome submitScriptReview(const Model::SubmitScriptReviewRequest &request)const;
			void submitScriptReviewAsync(const Model::SubmitScriptReviewRequest& request, const SubmitScriptReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitScriptReviewOutcomeCallable submitScriptReviewCallable(const Model::SubmitScriptReviewRequest& request) const;
			SuspendJobsOutcome suspendJobs(const Model::SuspendJobsRequest &request)const;
			void suspendJobsAsync(const Model::SuspendJobsRequest& request, const SuspendJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendJobsOutcomeCallable suspendJobsCallable(const Model::SuspendJobsRequest& request) const;
			TaskPreparingOutcome taskPreparing(const Model::TaskPreparingRequest &request)const;
			void taskPreparingAsync(const Model::TaskPreparingRequest& request, const TaskPreparingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaskPreparingOutcomeCallable taskPreparingCallable(const Model::TaskPreparingRequest& request) const;
			WithdrawScriptReviewOutcome withdrawScriptReview(const Model::WithdrawScriptReviewRequest &request)const;
			void withdrawScriptReviewAsync(const Model::WithdrawScriptReviewRequest& request, const WithdrawScriptReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WithdrawScriptReviewOutcomeCallable withdrawScriptReviewCallable(const Model::WithdrawScriptReviewRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OUTBOUNDBOT_OUTBOUNDBOTCLIENT_H_
