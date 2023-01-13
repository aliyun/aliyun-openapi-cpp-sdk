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
#include "model/ApplyNumberDistrictInfoParsingResultRequest.h"
#include "model/ApplyNumberDistrictInfoParsingResultResult.h"
#include "model/AssignJobsRequest.h"
#include "model/AssignJobsResult.h"
#include "model/CancelJobsRequest.h"
#include "model/CancelJobsResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CreateBatchJobsRequest.h"
#include "model/CreateBatchJobsResult.h"
#include "model/CreateBatchRepeatJobRequest.h"
#include "model/CreateBatchRepeatJobResult.h"
#include "model/CreateDialogueFlowRequest.h"
#include "model/CreateDialogueFlowResult.h"
#include "model/CreateDownloadUrlRequest.h"
#include "model/CreateDownloadUrlResult.h"
#include "model/CreateGlobalQuestionRequest.h"
#include "model/CreateGlobalQuestionResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateInstanceBindNumberRequest.h"
#include "model/CreateInstanceBindNumberResult.h"
#include "model/CreateIntentRequest.h"
#include "model/CreateIntentResult.h"
#include "model/CreateJobDataParsingTaskRequest.h"
#include "model/CreateJobDataParsingTaskResult.h"
#include "model/CreateJobGroupRequest.h"
#include "model/CreateJobGroupResult.h"
#include "model/CreateJobGroupExportTaskRequest.h"
#include "model/CreateJobGroupExportTaskResult.h"
#include "model/CreateNumberDistrictInfoDownloadUrlRequest.h"
#include "model/CreateNumberDistrictInfoDownloadUrlResult.h"
#include "model/CreateNumberDistrictInfoParsingTaskRequest.h"
#include "model/CreateNumberDistrictInfoParsingTaskResult.h"
#include "model/CreateOutboundCallNumberRequest.h"
#include "model/CreateOutboundCallNumberResult.h"
#include "model/CreateScriptRequest.h"
#include "model/CreateScriptResult.h"
#include "model/CreateScriptWaveformRequest.h"
#include "model/CreateScriptWaveformResult.h"
#include "model/CreateTagRequest.h"
#include "model/CreateTagResult.h"
#include "model/CreateTaskExportTaskRequest.h"
#include "model/CreateTaskExportTaskResult.h"
#include "model/DeleteAllNumberDistrictInfoRequest.h"
#include "model/DeleteAllNumberDistrictInfoResult.h"
#include "model/DeleteContactBlockListRequest.h"
#include "model/DeleteContactBlockListResult.h"
#include "model/DeleteContactWhiteListRequest.h"
#include "model/DeleteContactWhiteListResult.h"
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
#include "model/DeleteScriptRecordingRequest.h"
#include "model/DeleteScriptRecordingResult.h"
#include "model/DeleteScriptWaveformRequest.h"
#include "model/DeleteScriptWaveformResult.h"
#include "model/DescribeDialogueNodeStatisticsRequest.h"
#include "model/DescribeDialogueNodeStatisticsResult.h"
#include "model/DescribeDsReportsRequest.h"
#include "model/DescribeDsReportsResult.h"
#include "model/DescribeGlobalQuestionRequest.h"
#include "model/DescribeGlobalQuestionResult.h"
#include "model/DescribeGroupExecutingInfoRequest.h"
#include "model/DescribeGroupExecutingInfoResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeIntentRequest.h"
#include "model/DescribeIntentResult.h"
#include "model/DescribeIntentStatisticsRequest.h"
#include "model/DescribeIntentStatisticsResult.h"
#include "model/DescribeJobRequest.h"
#include "model/DescribeJobResult.h"
#include "model/DescribeJobDataParsingTaskProgressRequest.h"
#include "model/DescribeJobDataParsingTaskProgressResult.h"
#include "model/DescribeJobGroupRequest.h"
#include "model/DescribeJobGroupResult.h"
#include "model/DescribeJobGroupExportTaskProgressRequest.h"
#include "model/DescribeJobGroupExportTaskProgressResult.h"
#include "model/DescribeNumberDistrictInfoStatusRequest.h"
#include "model/DescribeNumberDistrictInfoStatusResult.h"
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
#include "model/DescribeTenantBindNumberRequest.h"
#include "model/DescribeTenantBindNumberResult.h"
#include "model/DialogueRequest.h"
#include "model/DialogueResult.h"
#include "model/DismissNumberDistrictInfoParsingResultRequest.h"
#include "model/DismissNumberDistrictInfoParsingResultResult.h"
#include "model/DownloadRecordingRequest.h"
#include "model/DownloadRecordingResult.h"
#include "model/DownloadScriptRecordingRequest.h"
#include "model/DownloadScriptRecordingResult.h"
#include "model/DuplicateScriptRequest.h"
#include "model/DuplicateScriptResult.h"
#include "model/ExportScriptRequest.h"
#include "model/ExportScriptResult.h"
#include "model/GenerateUploadUrlRequest.h"
#include "model/GenerateUploadUrlResult.h"
#include "model/GetAfterAnswerDelayPlaybackRequest.h"
#include "model/GetAfterAnswerDelayPlaybackResult.h"
#include "model/GetAsrServerInfoRequest.h"
#include "model/GetAsrServerInfoResult.h"
#include "model/GetBaseStrategyPeriodRequest.h"
#include "model/GetBaseStrategyPeriodResult.h"
#include "model/GetConcurrentConversationQuotaRequest.h"
#include "model/GetConcurrentConversationQuotaResult.h"
#include "model/GetContactBlockListRequest.h"
#include "model/GetContactBlockListResult.h"
#include "model/GetContactWhiteListRequest.h"
#include "model/GetContactWhiteListResult.h"
#include "model/GetCurrentConcurrencyRequest.h"
#include "model/GetCurrentConcurrencyResult.h"
#include "model/GetEffectiveDaysRequest.h"
#include "model/GetEffectiveDaysResult.h"
#include "model/GetEmptyNumberNoMoreCallsInfoRequest.h"
#include "model/GetEmptyNumberNoMoreCallsInfoResult.h"
#include "model/GetMaxAttemptsPerDayRequest.h"
#include "model/GetMaxAttemptsPerDayResult.h"
#include "model/GetNumberDistrictInfoTemplateDownloadUrlRequest.h"
#include "model/GetNumberDistrictInfoTemplateDownloadUrlResult.h"
#include "model/GetSummaryInfoRequest.h"
#include "model/GetSummaryInfoResult.h"
#include "model/GetTaskByUuidRequest.h"
#include "model/GetTaskByUuidResult.h"
#include "model/GetVersionRequest.h"
#include "model/GetVersionResult.h"
#include "model/ImportScriptRequest.h"
#include "model/ImportScriptResult.h"
#include "model/InflightTaskTimeoutRequest.h"
#include "model/InflightTaskTimeoutResult.h"
#include "model/ListAllTenantBindNumberBindingRequest.h"
#include "model/ListAllTenantBindNumberBindingResult.h"
#include "model/ListChatbotInstancesRequest.h"
#include "model/ListChatbotInstancesResult.h"
#include "model/ListDialogueFlowsRequest.h"
#include "model/ListDialogueFlowsResult.h"
#include "model/ListDownloadTasksRequest.h"
#include "model/ListDownloadTasksResult.h"
#include "model/ListGlobalQuestionsRequest.h"
#include "model/ListGlobalQuestionsResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListIntentsRequest.h"
#include "model/ListIntentsResult.h"
#include "model/ListJobGroupsRequest.h"
#include "model/ListJobGroupsResult.h"
#include "model/ListJobGroupsAsyncRequest.h"
#include "model/ListJobGroupsAsyncResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/ListJobsByGroupRequest.h"
#include "model/ListJobsByGroupResult.h"
#include "model/ListOutboundCallNumbersRequest.h"
#include "model/ListOutboundCallNumbersResult.h"
#include "model/ListResourceTagsRequest.h"
#include "model/ListResourceTagsResult.h"
#include "model/ListSchedulerInstancesRequest.h"
#include "model/ListSchedulerInstancesResult.h"
#include "model/ListScriptPublishHistoriesRequest.h"
#include "model/ListScriptPublishHistoriesResult.h"
#include "model/ListScriptRecordingRequest.h"
#include "model/ListScriptRecordingResult.h"
#include "model/ListScriptVoiceConfigsRequest.h"
#include "model/ListScriptVoiceConfigsResult.h"
#include "model/ListScriptsRequest.h"
#include "model/ListScriptsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagsRequest.h"
#include "model/ListTagsResult.h"
#include "model/ModifyBatchJobsRequest.h"
#include "model/ModifyBatchJobsResult.h"
#include "model/ModifyDialogueFlowRequest.h"
#include "model/ModifyDialogueFlowResult.h"
#include "model/ModifyEmptyNumberNoMoreCallsInfoRequest.h"
#include "model/ModifyEmptyNumberNoMoreCallsInfoResult.h"
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
#include "model/QueryJobsWithResultRequest.h"
#include "model/QueryJobsWithResultResult.h"
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
#include "model/SaveAfterAnswerDelayPlaybackRequest.h"
#include "model/SaveAfterAnswerDelayPlaybackResult.h"
#include "model/SaveBaseStrategyPeriodRequest.h"
#include "model/SaveBaseStrategyPeriodResult.h"
#include "model/SaveContactBlockListRequest.h"
#include "model/SaveContactBlockListResult.h"
#include "model/SaveContactWhiteListRequest.h"
#include "model/SaveContactWhiteListResult.h"
#include "model/SaveEffectiveDaysRequest.h"
#include "model/SaveEffectiveDaysResult.h"
#include "model/SaveMaxAttemptsPerDayRequest.h"
#include "model/SaveMaxAttemptsPerDayResult.h"
#include "model/SearchTaskRequest.h"
#include "model/SearchTaskResult.h"
#include "model/StartJobRequest.h"
#include "model/StartJobResult.h"
#include "model/SubmitBatchJobsRequest.h"
#include "model/SubmitBatchJobsResult.h"
#include "model/SubmitRecordingRequest.h"
#include "model/SubmitRecordingResult.h"
#include "model/SubmitScriptReviewRequest.h"
#include "model/SubmitScriptReviewResult.h"
#include "model/SuspendCallRequest.h"
#include "model/SuspendCallResult.h"
#include "model/SuspendCallWithFileRequest.h"
#include "model/SuspendCallWithFileResult.h"
#include "model/SuspendJobsRequest.h"
#include "model/SuspendJobsResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TaskPreparingRequest.h"
#include "model/TaskPreparingResult.h"
#include "model/TerminateCallRequest.h"
#include "model/TerminateCallResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UploadScriptRecordingRequest.h"
#include "model/UploadScriptRecordingResult.h"
#include "model/WithdrawScriptReviewRequest.h"
#include "model/WithdrawScriptReviewResult.h"


namespace AlibabaCloud
{
	namespace OutboundBot
	{
		class ALIBABACLOUD_OUTBOUNDBOT_EXPORT OutboundBotClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ApplyNumberDistrictInfoParsingResultResult> ApplyNumberDistrictInfoParsingResultOutcome;
			typedef std::future<ApplyNumberDistrictInfoParsingResultOutcome> ApplyNumberDistrictInfoParsingResultOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ApplyNumberDistrictInfoParsingResultRequest&, const ApplyNumberDistrictInfoParsingResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyNumberDistrictInfoParsingResultAsyncHandler;
			typedef Outcome<Error, Model::AssignJobsResult> AssignJobsOutcome;
			typedef std::future<AssignJobsOutcome> AssignJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::AssignJobsRequest&, const AssignJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignJobsAsyncHandler;
			typedef Outcome<Error, Model::CancelJobsResult> CancelJobsOutcome;
			typedef std::future<CancelJobsOutcome> CancelJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CancelJobsRequest&, const CancelJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelJobsAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateBatchJobsResult> CreateBatchJobsOutcome;
			typedef std::future<CreateBatchJobsOutcome> CreateBatchJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateBatchJobsRequest&, const CreateBatchJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchJobsAsyncHandler;
			typedef Outcome<Error, Model::CreateBatchRepeatJobResult> CreateBatchRepeatJobOutcome;
			typedef std::future<CreateBatchRepeatJobOutcome> CreateBatchRepeatJobOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateBatchRepeatJobRequest&, const CreateBatchRepeatJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchRepeatJobAsyncHandler;
			typedef Outcome<Error, Model::CreateDialogueFlowResult> CreateDialogueFlowOutcome;
			typedef std::future<CreateDialogueFlowOutcome> CreateDialogueFlowOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateDialogueFlowRequest&, const CreateDialogueFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDialogueFlowAsyncHandler;
			typedef Outcome<Error, Model::CreateDownloadUrlResult> CreateDownloadUrlOutcome;
			typedef std::future<CreateDownloadUrlOutcome> CreateDownloadUrlOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateDownloadUrlRequest&, const CreateDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::CreateGlobalQuestionResult> CreateGlobalQuestionOutcome;
			typedef std::future<CreateGlobalQuestionOutcome> CreateGlobalQuestionOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateGlobalQuestionRequest&, const CreateGlobalQuestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalQuestionAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceBindNumberResult> CreateInstanceBindNumberOutcome;
			typedef std::future<CreateInstanceBindNumberOutcome> CreateInstanceBindNumberOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateInstanceBindNumberRequest&, const CreateInstanceBindNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceBindNumberAsyncHandler;
			typedef Outcome<Error, Model::CreateIntentResult> CreateIntentOutcome;
			typedef std::future<CreateIntentOutcome> CreateIntentOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateIntentRequest&, const CreateIntentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntentAsyncHandler;
			typedef Outcome<Error, Model::CreateJobDataParsingTaskResult> CreateJobDataParsingTaskOutcome;
			typedef std::future<CreateJobDataParsingTaskOutcome> CreateJobDataParsingTaskOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateJobDataParsingTaskRequest&, const CreateJobDataParsingTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobDataParsingTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateJobGroupResult> CreateJobGroupOutcome;
			typedef std::future<CreateJobGroupOutcome> CreateJobGroupOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateJobGroupRequest&, const CreateJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateJobGroupExportTaskResult> CreateJobGroupExportTaskOutcome;
			typedef std::future<CreateJobGroupExportTaskOutcome> CreateJobGroupExportTaskOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateJobGroupExportTaskRequest&, const CreateJobGroupExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobGroupExportTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateNumberDistrictInfoDownloadUrlResult> CreateNumberDistrictInfoDownloadUrlOutcome;
			typedef std::future<CreateNumberDistrictInfoDownloadUrlOutcome> CreateNumberDistrictInfoDownloadUrlOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateNumberDistrictInfoDownloadUrlRequest&, const CreateNumberDistrictInfoDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNumberDistrictInfoDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::CreateNumberDistrictInfoParsingTaskResult> CreateNumberDistrictInfoParsingTaskOutcome;
			typedef std::future<CreateNumberDistrictInfoParsingTaskOutcome> CreateNumberDistrictInfoParsingTaskOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateNumberDistrictInfoParsingTaskRequest&, const CreateNumberDistrictInfoParsingTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNumberDistrictInfoParsingTaskAsyncHandler;
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
			typedef Outcome<Error, Model::CreateTaskExportTaskResult> CreateTaskExportTaskOutcome;
			typedef std::future<CreateTaskExportTaskOutcome> CreateTaskExportTaskOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::CreateTaskExportTaskRequest&, const CreateTaskExportTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskExportTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteAllNumberDistrictInfoResult> DeleteAllNumberDistrictInfoOutcome;
			typedef std::future<DeleteAllNumberDistrictInfoOutcome> DeleteAllNumberDistrictInfoOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteAllNumberDistrictInfoRequest&, const DeleteAllNumberDistrictInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllNumberDistrictInfoAsyncHandler;
			typedef Outcome<Error, Model::DeleteContactBlockListResult> DeleteContactBlockListOutcome;
			typedef std::future<DeleteContactBlockListOutcome> DeleteContactBlockListOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteContactBlockListRequest&, const DeleteContactBlockListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContactBlockListAsyncHandler;
			typedef Outcome<Error, Model::DeleteContactWhiteListResult> DeleteContactWhiteListOutcome;
			typedef std::future<DeleteContactWhiteListOutcome> DeleteContactWhiteListOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteContactWhiteListRequest&, const DeleteContactWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContactWhiteListAsyncHandler;
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
			typedef Outcome<Error, Model::DeleteScriptRecordingResult> DeleteScriptRecordingOutcome;
			typedef std::future<DeleteScriptRecordingOutcome> DeleteScriptRecordingOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteScriptRecordingRequest&, const DeleteScriptRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScriptRecordingAsyncHandler;
			typedef Outcome<Error, Model::DeleteScriptWaveformResult> DeleteScriptWaveformOutcome;
			typedef std::future<DeleteScriptWaveformOutcome> DeleteScriptWaveformOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DeleteScriptWaveformRequest&, const DeleteScriptWaveformOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScriptWaveformAsyncHandler;
			typedef Outcome<Error, Model::DescribeDialogueNodeStatisticsResult> DescribeDialogueNodeStatisticsOutcome;
			typedef std::future<DescribeDialogueNodeStatisticsOutcome> DescribeDialogueNodeStatisticsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeDialogueNodeStatisticsRequest&, const DescribeDialogueNodeStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDialogueNodeStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDsReportsResult> DescribeDsReportsOutcome;
			typedef std::future<DescribeDsReportsOutcome> DescribeDsReportsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeDsReportsRequest&, const DescribeDsReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDsReportsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGlobalQuestionResult> DescribeGlobalQuestionOutcome;
			typedef std::future<DescribeGlobalQuestionOutcome> DescribeGlobalQuestionOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeGlobalQuestionRequest&, const DescribeGlobalQuestionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalQuestionAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupExecutingInfoResult> DescribeGroupExecutingInfoOutcome;
			typedef std::future<DescribeGroupExecutingInfoOutcome> DescribeGroupExecutingInfoOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeGroupExecutingInfoRequest&, const DescribeGroupExecutingInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupExecutingInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeIntentResult> DescribeIntentOutcome;
			typedef std::future<DescribeIntentOutcome> DescribeIntentOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeIntentRequest&, const DescribeIntentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntentAsyncHandler;
			typedef Outcome<Error, Model::DescribeIntentStatisticsResult> DescribeIntentStatisticsOutcome;
			typedef std::future<DescribeIntentStatisticsOutcome> DescribeIntentStatisticsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeIntentStatisticsRequest&, const DescribeIntentStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntentStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobResult> DescribeJobOutcome;
			typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeJobRequest&, const DescribeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobDataParsingTaskProgressResult> DescribeJobDataParsingTaskProgressOutcome;
			typedef std::future<DescribeJobDataParsingTaskProgressOutcome> DescribeJobDataParsingTaskProgressOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeJobDataParsingTaskProgressRequest&, const DescribeJobDataParsingTaskProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobDataParsingTaskProgressAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobGroupResult> DescribeJobGroupOutcome;
			typedef std::future<DescribeJobGroupOutcome> DescribeJobGroupOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeJobGroupRequest&, const DescribeJobGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobGroupExportTaskProgressResult> DescribeJobGroupExportTaskProgressOutcome;
			typedef std::future<DescribeJobGroupExportTaskProgressOutcome> DescribeJobGroupExportTaskProgressOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeJobGroupExportTaskProgressRequest&, const DescribeJobGroupExportTaskProgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobGroupExportTaskProgressAsyncHandler;
			typedef Outcome<Error, Model::DescribeNumberDistrictInfoStatusResult> DescribeNumberDistrictInfoStatusOutcome;
			typedef std::future<DescribeNumberDistrictInfoStatusOutcome> DescribeNumberDistrictInfoStatusOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeNumberDistrictInfoStatusRequest&, const DescribeNumberDistrictInfoStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNumberDistrictInfoStatusAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeTenantBindNumberResult> DescribeTenantBindNumberOutcome;
			typedef std::future<DescribeTenantBindNumberOutcome> DescribeTenantBindNumberOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DescribeTenantBindNumberRequest&, const DescribeTenantBindNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTenantBindNumberAsyncHandler;
			typedef Outcome<Error, Model::DialogueResult> DialogueOutcome;
			typedef std::future<DialogueOutcome> DialogueOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DialogueRequest&, const DialogueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DialogueAsyncHandler;
			typedef Outcome<Error, Model::DismissNumberDistrictInfoParsingResultResult> DismissNumberDistrictInfoParsingResultOutcome;
			typedef std::future<DismissNumberDistrictInfoParsingResultOutcome> DismissNumberDistrictInfoParsingResultOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DismissNumberDistrictInfoParsingResultRequest&, const DismissNumberDistrictInfoParsingResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DismissNumberDistrictInfoParsingResultAsyncHandler;
			typedef Outcome<Error, Model::DownloadRecordingResult> DownloadRecordingOutcome;
			typedef std::future<DownloadRecordingOutcome> DownloadRecordingOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DownloadRecordingRequest&, const DownloadRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadRecordingAsyncHandler;
			typedef Outcome<Error, Model::DownloadScriptRecordingResult> DownloadScriptRecordingOutcome;
			typedef std::future<DownloadScriptRecordingOutcome> DownloadScriptRecordingOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DownloadScriptRecordingRequest&, const DownloadScriptRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadScriptRecordingAsyncHandler;
			typedef Outcome<Error, Model::DuplicateScriptResult> DuplicateScriptOutcome;
			typedef std::future<DuplicateScriptOutcome> DuplicateScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::DuplicateScriptRequest&, const DuplicateScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DuplicateScriptAsyncHandler;
			typedef Outcome<Error, Model::ExportScriptResult> ExportScriptOutcome;
			typedef std::future<ExportScriptOutcome> ExportScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ExportScriptRequest&, const ExportScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportScriptAsyncHandler;
			typedef Outcome<Error, Model::GenerateUploadUrlResult> GenerateUploadUrlOutcome;
			typedef std::future<GenerateUploadUrlOutcome> GenerateUploadUrlOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GenerateUploadUrlRequest&, const GenerateUploadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateUploadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetAfterAnswerDelayPlaybackResult> GetAfterAnswerDelayPlaybackOutcome;
			typedef std::future<GetAfterAnswerDelayPlaybackOutcome> GetAfterAnswerDelayPlaybackOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetAfterAnswerDelayPlaybackRequest&, const GetAfterAnswerDelayPlaybackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAfterAnswerDelayPlaybackAsyncHandler;
			typedef Outcome<Error, Model::GetAsrServerInfoResult> GetAsrServerInfoOutcome;
			typedef std::future<GetAsrServerInfoOutcome> GetAsrServerInfoOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetAsrServerInfoRequest&, const GetAsrServerInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAsrServerInfoAsyncHandler;
			typedef Outcome<Error, Model::GetBaseStrategyPeriodResult> GetBaseStrategyPeriodOutcome;
			typedef std::future<GetBaseStrategyPeriodOutcome> GetBaseStrategyPeriodOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetBaseStrategyPeriodRequest&, const GetBaseStrategyPeriodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBaseStrategyPeriodAsyncHandler;
			typedef Outcome<Error, Model::GetConcurrentConversationQuotaResult> GetConcurrentConversationQuotaOutcome;
			typedef std::future<GetConcurrentConversationQuotaOutcome> GetConcurrentConversationQuotaOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetConcurrentConversationQuotaRequest&, const GetConcurrentConversationQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConcurrentConversationQuotaAsyncHandler;
			typedef Outcome<Error, Model::GetContactBlockListResult> GetContactBlockListOutcome;
			typedef std::future<GetContactBlockListOutcome> GetContactBlockListOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetContactBlockListRequest&, const GetContactBlockListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetContactBlockListAsyncHandler;
			typedef Outcome<Error, Model::GetContactWhiteListResult> GetContactWhiteListOutcome;
			typedef std::future<GetContactWhiteListOutcome> GetContactWhiteListOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetContactWhiteListRequest&, const GetContactWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetContactWhiteListAsyncHandler;
			typedef Outcome<Error, Model::GetCurrentConcurrencyResult> GetCurrentConcurrencyOutcome;
			typedef std::future<GetCurrentConcurrencyOutcome> GetCurrentConcurrencyOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetCurrentConcurrencyRequest&, const GetCurrentConcurrencyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCurrentConcurrencyAsyncHandler;
			typedef Outcome<Error, Model::GetEffectiveDaysResult> GetEffectiveDaysOutcome;
			typedef std::future<GetEffectiveDaysOutcome> GetEffectiveDaysOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetEffectiveDaysRequest&, const GetEffectiveDaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEffectiveDaysAsyncHandler;
			typedef Outcome<Error, Model::GetEmptyNumberNoMoreCallsInfoResult> GetEmptyNumberNoMoreCallsInfoOutcome;
			typedef std::future<GetEmptyNumberNoMoreCallsInfoOutcome> GetEmptyNumberNoMoreCallsInfoOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetEmptyNumberNoMoreCallsInfoRequest&, const GetEmptyNumberNoMoreCallsInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEmptyNumberNoMoreCallsInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMaxAttemptsPerDayResult> GetMaxAttemptsPerDayOutcome;
			typedef std::future<GetMaxAttemptsPerDayOutcome> GetMaxAttemptsPerDayOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetMaxAttemptsPerDayRequest&, const GetMaxAttemptsPerDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMaxAttemptsPerDayAsyncHandler;
			typedef Outcome<Error, Model::GetNumberDistrictInfoTemplateDownloadUrlResult> GetNumberDistrictInfoTemplateDownloadUrlOutcome;
			typedef std::future<GetNumberDistrictInfoTemplateDownloadUrlOutcome> GetNumberDistrictInfoTemplateDownloadUrlOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetNumberDistrictInfoTemplateDownloadUrlRequest&, const GetNumberDistrictInfoTemplateDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNumberDistrictInfoTemplateDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetSummaryInfoResult> GetSummaryInfoOutcome;
			typedef std::future<GetSummaryInfoOutcome> GetSummaryInfoOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetSummaryInfoRequest&, const GetSummaryInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSummaryInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTaskByUuidResult> GetTaskByUuidOutcome;
			typedef std::future<GetTaskByUuidOutcome> GetTaskByUuidOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetTaskByUuidRequest&, const GetTaskByUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskByUuidAsyncHandler;
			typedef Outcome<Error, Model::GetVersionResult> GetVersionOutcome;
			typedef std::future<GetVersionOutcome> GetVersionOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::GetVersionRequest&, const GetVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVersionAsyncHandler;
			typedef Outcome<Error, Model::ImportScriptResult> ImportScriptOutcome;
			typedef std::future<ImportScriptOutcome> ImportScriptOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ImportScriptRequest&, const ImportScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportScriptAsyncHandler;
			typedef Outcome<Error, Model::InflightTaskTimeoutResult> InflightTaskTimeoutOutcome;
			typedef std::future<InflightTaskTimeoutOutcome> InflightTaskTimeoutOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::InflightTaskTimeoutRequest&, const InflightTaskTimeoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InflightTaskTimeoutAsyncHandler;
			typedef Outcome<Error, Model::ListAllTenantBindNumberBindingResult> ListAllTenantBindNumberBindingOutcome;
			typedef std::future<ListAllTenantBindNumberBindingOutcome> ListAllTenantBindNumberBindingOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListAllTenantBindNumberBindingRequest&, const ListAllTenantBindNumberBindingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllTenantBindNumberBindingAsyncHandler;
			typedef Outcome<Error, Model::ListChatbotInstancesResult> ListChatbotInstancesOutcome;
			typedef std::future<ListChatbotInstancesOutcome> ListChatbotInstancesOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListChatbotInstancesRequest&, const ListChatbotInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListChatbotInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListDialogueFlowsResult> ListDialogueFlowsOutcome;
			typedef std::future<ListDialogueFlowsOutcome> ListDialogueFlowsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListDialogueFlowsRequest&, const ListDialogueFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDialogueFlowsAsyncHandler;
			typedef Outcome<Error, Model::ListDownloadTasksResult> ListDownloadTasksOutcome;
			typedef std::future<ListDownloadTasksOutcome> ListDownloadTasksOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListDownloadTasksRequest&, const ListDownloadTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDownloadTasksAsyncHandler;
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
			typedef Outcome<Error, Model::ListJobGroupsAsyncResult> ListJobGroupsAsyncOutcome;
			typedef std::future<ListJobGroupsAsyncOutcome> ListJobGroupsAsyncOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListJobGroupsAsyncRequest&, const ListJobGroupsAsyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobGroupsAsyncAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::ListJobsByGroupResult> ListJobsByGroupOutcome;
			typedef std::future<ListJobsByGroupOutcome> ListJobsByGroupOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListJobsByGroupRequest&, const ListJobsByGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsByGroupAsyncHandler;
			typedef Outcome<Error, Model::ListOutboundCallNumbersResult> ListOutboundCallNumbersOutcome;
			typedef std::future<ListOutboundCallNumbersOutcome> ListOutboundCallNumbersOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListOutboundCallNumbersRequest&, const ListOutboundCallNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOutboundCallNumbersAsyncHandler;
			typedef Outcome<Error, Model::ListResourceTagsResult> ListResourceTagsOutcome;
			typedef std::future<ListResourceTagsOutcome> ListResourceTagsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListResourceTagsRequest&, const ListResourceTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceTagsAsyncHandler;
			typedef Outcome<Error, Model::ListSchedulerInstancesResult> ListSchedulerInstancesOutcome;
			typedef std::future<ListSchedulerInstancesOutcome> ListSchedulerInstancesOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListSchedulerInstancesRequest&, const ListSchedulerInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSchedulerInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListScriptPublishHistoriesResult> ListScriptPublishHistoriesOutcome;
			typedef std::future<ListScriptPublishHistoriesOutcome> ListScriptPublishHistoriesOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListScriptPublishHistoriesRequest&, const ListScriptPublishHistoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScriptPublishHistoriesAsyncHandler;
			typedef Outcome<Error, Model::ListScriptRecordingResult> ListScriptRecordingOutcome;
			typedef std::future<ListScriptRecordingOutcome> ListScriptRecordingOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListScriptRecordingRequest&, const ListScriptRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScriptRecordingAsyncHandler;
			typedef Outcome<Error, Model::ListScriptVoiceConfigsResult> ListScriptVoiceConfigsOutcome;
			typedef std::future<ListScriptVoiceConfigsOutcome> ListScriptVoiceConfigsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListScriptVoiceConfigsRequest&, const ListScriptVoiceConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScriptVoiceConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListScriptsResult> ListScriptsOutcome;
			typedef std::future<ListScriptsOutcome> ListScriptsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListScriptsRequest&, const ListScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScriptsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagsResult> ListTagsOutcome;
			typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ListTagsRequest&, const ListTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsAsyncHandler;
			typedef Outcome<Error, Model::ModifyBatchJobsResult> ModifyBatchJobsOutcome;
			typedef std::future<ModifyBatchJobsOutcome> ModifyBatchJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyBatchJobsRequest&, const ModifyBatchJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBatchJobsAsyncHandler;
			typedef Outcome<Error, Model::ModifyDialogueFlowResult> ModifyDialogueFlowOutcome;
			typedef std::future<ModifyDialogueFlowOutcome> ModifyDialogueFlowOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyDialogueFlowRequest&, const ModifyDialogueFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDialogueFlowAsyncHandler;
			typedef Outcome<Error, Model::ModifyEmptyNumberNoMoreCallsInfoResult> ModifyEmptyNumberNoMoreCallsInfoOutcome;
			typedef std::future<ModifyEmptyNumberNoMoreCallsInfoOutcome> ModifyEmptyNumberNoMoreCallsInfoOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::ModifyEmptyNumberNoMoreCallsInfoRequest&, const ModifyEmptyNumberNoMoreCallsInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEmptyNumberNoMoreCallsInfoAsyncHandler;
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
			typedef Outcome<Error, Model::QueryJobsWithResultResult> QueryJobsWithResultOutcome;
			typedef std::future<QueryJobsWithResultOutcome> QueryJobsWithResultOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::QueryJobsWithResultRequest&, const QueryJobsWithResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryJobsWithResultAsyncHandler;
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
			typedef Outcome<Error, Model::SaveAfterAnswerDelayPlaybackResult> SaveAfterAnswerDelayPlaybackOutcome;
			typedef std::future<SaveAfterAnswerDelayPlaybackOutcome> SaveAfterAnswerDelayPlaybackOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SaveAfterAnswerDelayPlaybackRequest&, const SaveAfterAnswerDelayPlaybackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveAfterAnswerDelayPlaybackAsyncHandler;
			typedef Outcome<Error, Model::SaveBaseStrategyPeriodResult> SaveBaseStrategyPeriodOutcome;
			typedef std::future<SaveBaseStrategyPeriodOutcome> SaveBaseStrategyPeriodOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SaveBaseStrategyPeriodRequest&, const SaveBaseStrategyPeriodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveBaseStrategyPeriodAsyncHandler;
			typedef Outcome<Error, Model::SaveContactBlockListResult> SaveContactBlockListOutcome;
			typedef std::future<SaveContactBlockListOutcome> SaveContactBlockListOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SaveContactBlockListRequest&, const SaveContactBlockListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveContactBlockListAsyncHandler;
			typedef Outcome<Error, Model::SaveContactWhiteListResult> SaveContactWhiteListOutcome;
			typedef std::future<SaveContactWhiteListOutcome> SaveContactWhiteListOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SaveContactWhiteListRequest&, const SaveContactWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveContactWhiteListAsyncHandler;
			typedef Outcome<Error, Model::SaveEffectiveDaysResult> SaveEffectiveDaysOutcome;
			typedef std::future<SaveEffectiveDaysOutcome> SaveEffectiveDaysOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SaveEffectiveDaysRequest&, const SaveEffectiveDaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveEffectiveDaysAsyncHandler;
			typedef Outcome<Error, Model::SaveMaxAttemptsPerDayResult> SaveMaxAttemptsPerDayOutcome;
			typedef std::future<SaveMaxAttemptsPerDayOutcome> SaveMaxAttemptsPerDayOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SaveMaxAttemptsPerDayRequest&, const SaveMaxAttemptsPerDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveMaxAttemptsPerDayAsyncHandler;
			typedef Outcome<Error, Model::SearchTaskResult> SearchTaskOutcome;
			typedef std::future<SearchTaskOutcome> SearchTaskOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SearchTaskRequest&, const SearchTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTaskAsyncHandler;
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
			typedef Outcome<Error, Model::SuspendCallResult> SuspendCallOutcome;
			typedef std::future<SuspendCallOutcome> SuspendCallOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SuspendCallRequest&, const SuspendCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendCallAsyncHandler;
			typedef Outcome<Error, Model::SuspendCallWithFileResult> SuspendCallWithFileOutcome;
			typedef std::future<SuspendCallWithFileOutcome> SuspendCallWithFileOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SuspendCallWithFileRequest&, const SuspendCallWithFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendCallWithFileAsyncHandler;
			typedef Outcome<Error, Model::SuspendJobsResult> SuspendJobsOutcome;
			typedef std::future<SuspendJobsOutcome> SuspendJobsOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::SuspendJobsRequest&, const SuspendJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendJobsAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TaskPreparingResult> TaskPreparingOutcome;
			typedef std::future<TaskPreparingOutcome> TaskPreparingOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::TaskPreparingRequest&, const TaskPreparingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaskPreparingAsyncHandler;
			typedef Outcome<Error, Model::TerminateCallResult> TerminateCallOutcome;
			typedef std::future<TerminateCallOutcome> TerminateCallOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::TerminateCallRequest&, const TerminateCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminateCallAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UploadScriptRecordingResult> UploadScriptRecordingOutcome;
			typedef std::future<UploadScriptRecordingOutcome> UploadScriptRecordingOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::UploadScriptRecordingRequest&, const UploadScriptRecordingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadScriptRecordingAsyncHandler;
			typedef Outcome<Error, Model::WithdrawScriptReviewResult> WithdrawScriptReviewOutcome;
			typedef std::future<WithdrawScriptReviewOutcome> WithdrawScriptReviewOutcomeCallable;
			typedef std::function<void(const OutboundBotClient*, const Model::WithdrawScriptReviewRequest&, const WithdrawScriptReviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawScriptReviewAsyncHandler;

			OutboundBotClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OutboundBotClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OutboundBotClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OutboundBotClient();
			ApplyNumberDistrictInfoParsingResultOutcome applyNumberDistrictInfoParsingResult(const Model::ApplyNumberDistrictInfoParsingResultRequest &request)const;
			void applyNumberDistrictInfoParsingResultAsync(const Model::ApplyNumberDistrictInfoParsingResultRequest& request, const ApplyNumberDistrictInfoParsingResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyNumberDistrictInfoParsingResultOutcomeCallable applyNumberDistrictInfoParsingResultCallable(const Model::ApplyNumberDistrictInfoParsingResultRequest& request) const;
			AssignJobsOutcome assignJobs(const Model::AssignJobsRequest &request)const;
			void assignJobsAsync(const Model::AssignJobsRequest& request, const AssignJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignJobsOutcomeCallable assignJobsCallable(const Model::AssignJobsRequest& request) const;
			CancelJobsOutcome cancelJobs(const Model::CancelJobsRequest &request)const;
			void cancelJobsAsync(const Model::CancelJobsRequest& request, const CancelJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelJobsOutcomeCallable cancelJobsCallable(const Model::CancelJobsRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CreateBatchJobsOutcome createBatchJobs(const Model::CreateBatchJobsRequest &request)const;
			void createBatchJobsAsync(const Model::CreateBatchJobsRequest& request, const CreateBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBatchJobsOutcomeCallable createBatchJobsCallable(const Model::CreateBatchJobsRequest& request) const;
			CreateBatchRepeatJobOutcome createBatchRepeatJob(const Model::CreateBatchRepeatJobRequest &request)const;
			void createBatchRepeatJobAsync(const Model::CreateBatchRepeatJobRequest& request, const CreateBatchRepeatJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBatchRepeatJobOutcomeCallable createBatchRepeatJobCallable(const Model::CreateBatchRepeatJobRequest& request) const;
			CreateDialogueFlowOutcome createDialogueFlow(const Model::CreateDialogueFlowRequest &request)const;
			void createDialogueFlowAsync(const Model::CreateDialogueFlowRequest& request, const CreateDialogueFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDialogueFlowOutcomeCallable createDialogueFlowCallable(const Model::CreateDialogueFlowRequest& request) const;
			CreateDownloadUrlOutcome createDownloadUrl(const Model::CreateDownloadUrlRequest &request)const;
			void createDownloadUrlAsync(const Model::CreateDownloadUrlRequest& request, const CreateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDownloadUrlOutcomeCallable createDownloadUrlCallable(const Model::CreateDownloadUrlRequest& request) const;
			CreateGlobalQuestionOutcome createGlobalQuestion(const Model::CreateGlobalQuestionRequest &request)const;
			void createGlobalQuestionAsync(const Model::CreateGlobalQuestionRequest& request, const CreateGlobalQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGlobalQuestionOutcomeCallable createGlobalQuestionCallable(const Model::CreateGlobalQuestionRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateInstanceBindNumberOutcome createInstanceBindNumber(const Model::CreateInstanceBindNumberRequest &request)const;
			void createInstanceBindNumberAsync(const Model::CreateInstanceBindNumberRequest& request, const CreateInstanceBindNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceBindNumberOutcomeCallable createInstanceBindNumberCallable(const Model::CreateInstanceBindNumberRequest& request) const;
			CreateIntentOutcome createIntent(const Model::CreateIntentRequest &request)const;
			void createIntentAsync(const Model::CreateIntentRequest& request, const CreateIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIntentOutcomeCallable createIntentCallable(const Model::CreateIntentRequest& request) const;
			CreateJobDataParsingTaskOutcome createJobDataParsingTask(const Model::CreateJobDataParsingTaskRequest &request)const;
			void createJobDataParsingTaskAsync(const Model::CreateJobDataParsingTaskRequest& request, const CreateJobDataParsingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobDataParsingTaskOutcomeCallable createJobDataParsingTaskCallable(const Model::CreateJobDataParsingTaskRequest& request) const;
			CreateJobGroupOutcome createJobGroup(const Model::CreateJobGroupRequest &request)const;
			void createJobGroupAsync(const Model::CreateJobGroupRequest& request, const CreateJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobGroupOutcomeCallable createJobGroupCallable(const Model::CreateJobGroupRequest& request) const;
			CreateJobGroupExportTaskOutcome createJobGroupExportTask(const Model::CreateJobGroupExportTaskRequest &request)const;
			void createJobGroupExportTaskAsync(const Model::CreateJobGroupExportTaskRequest& request, const CreateJobGroupExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobGroupExportTaskOutcomeCallable createJobGroupExportTaskCallable(const Model::CreateJobGroupExportTaskRequest& request) const;
			CreateNumberDistrictInfoDownloadUrlOutcome createNumberDistrictInfoDownloadUrl(const Model::CreateNumberDistrictInfoDownloadUrlRequest &request)const;
			void createNumberDistrictInfoDownloadUrlAsync(const Model::CreateNumberDistrictInfoDownloadUrlRequest& request, const CreateNumberDistrictInfoDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNumberDistrictInfoDownloadUrlOutcomeCallable createNumberDistrictInfoDownloadUrlCallable(const Model::CreateNumberDistrictInfoDownloadUrlRequest& request) const;
			CreateNumberDistrictInfoParsingTaskOutcome createNumberDistrictInfoParsingTask(const Model::CreateNumberDistrictInfoParsingTaskRequest &request)const;
			void createNumberDistrictInfoParsingTaskAsync(const Model::CreateNumberDistrictInfoParsingTaskRequest& request, const CreateNumberDistrictInfoParsingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNumberDistrictInfoParsingTaskOutcomeCallable createNumberDistrictInfoParsingTaskCallable(const Model::CreateNumberDistrictInfoParsingTaskRequest& request) const;
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
			CreateTaskExportTaskOutcome createTaskExportTask(const Model::CreateTaskExportTaskRequest &request)const;
			void createTaskExportTaskAsync(const Model::CreateTaskExportTaskRequest& request, const CreateTaskExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTaskExportTaskOutcomeCallable createTaskExportTaskCallable(const Model::CreateTaskExportTaskRequest& request) const;
			DeleteAllNumberDistrictInfoOutcome deleteAllNumberDistrictInfo(const Model::DeleteAllNumberDistrictInfoRequest &request)const;
			void deleteAllNumberDistrictInfoAsync(const Model::DeleteAllNumberDistrictInfoRequest& request, const DeleteAllNumberDistrictInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAllNumberDistrictInfoOutcomeCallable deleteAllNumberDistrictInfoCallable(const Model::DeleteAllNumberDistrictInfoRequest& request) const;
			DeleteContactBlockListOutcome deleteContactBlockList(const Model::DeleteContactBlockListRequest &request)const;
			void deleteContactBlockListAsync(const Model::DeleteContactBlockListRequest& request, const DeleteContactBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteContactBlockListOutcomeCallable deleteContactBlockListCallable(const Model::DeleteContactBlockListRequest& request) const;
			DeleteContactWhiteListOutcome deleteContactWhiteList(const Model::DeleteContactWhiteListRequest &request)const;
			void deleteContactWhiteListAsync(const Model::DeleteContactWhiteListRequest& request, const DeleteContactWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteContactWhiteListOutcomeCallable deleteContactWhiteListCallable(const Model::DeleteContactWhiteListRequest& request) const;
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
			DeleteScriptRecordingOutcome deleteScriptRecording(const Model::DeleteScriptRecordingRequest &request)const;
			void deleteScriptRecordingAsync(const Model::DeleteScriptRecordingRequest& request, const DeleteScriptRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScriptRecordingOutcomeCallable deleteScriptRecordingCallable(const Model::DeleteScriptRecordingRequest& request) const;
			DeleteScriptWaveformOutcome deleteScriptWaveform(const Model::DeleteScriptWaveformRequest &request)const;
			void deleteScriptWaveformAsync(const Model::DeleteScriptWaveformRequest& request, const DeleteScriptWaveformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScriptWaveformOutcomeCallable deleteScriptWaveformCallable(const Model::DeleteScriptWaveformRequest& request) const;
			DescribeDialogueNodeStatisticsOutcome describeDialogueNodeStatistics(const Model::DescribeDialogueNodeStatisticsRequest &request)const;
			void describeDialogueNodeStatisticsAsync(const Model::DescribeDialogueNodeStatisticsRequest& request, const DescribeDialogueNodeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDialogueNodeStatisticsOutcomeCallable describeDialogueNodeStatisticsCallable(const Model::DescribeDialogueNodeStatisticsRequest& request) const;
			DescribeDsReportsOutcome describeDsReports(const Model::DescribeDsReportsRequest &request)const;
			void describeDsReportsAsync(const Model::DescribeDsReportsRequest& request, const DescribeDsReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDsReportsOutcomeCallable describeDsReportsCallable(const Model::DescribeDsReportsRequest& request) const;
			DescribeGlobalQuestionOutcome describeGlobalQuestion(const Model::DescribeGlobalQuestionRequest &request)const;
			void describeGlobalQuestionAsync(const Model::DescribeGlobalQuestionRequest& request, const DescribeGlobalQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGlobalQuestionOutcomeCallable describeGlobalQuestionCallable(const Model::DescribeGlobalQuestionRequest& request) const;
			DescribeGroupExecutingInfoOutcome describeGroupExecutingInfo(const Model::DescribeGroupExecutingInfoRequest &request)const;
			void describeGroupExecutingInfoAsync(const Model::DescribeGroupExecutingInfoRequest& request, const DescribeGroupExecutingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupExecutingInfoOutcomeCallable describeGroupExecutingInfoCallable(const Model::DescribeGroupExecutingInfoRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeIntentOutcome describeIntent(const Model::DescribeIntentRequest &request)const;
			void describeIntentAsync(const Model::DescribeIntentRequest& request, const DescribeIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIntentOutcomeCallable describeIntentCallable(const Model::DescribeIntentRequest& request) const;
			DescribeIntentStatisticsOutcome describeIntentStatistics(const Model::DescribeIntentStatisticsRequest &request)const;
			void describeIntentStatisticsAsync(const Model::DescribeIntentStatisticsRequest& request, const DescribeIntentStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIntentStatisticsOutcomeCallable describeIntentStatisticsCallable(const Model::DescribeIntentStatisticsRequest& request) const;
			DescribeJobOutcome describeJob(const Model::DescribeJobRequest &request)const;
			void describeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobOutcomeCallable describeJobCallable(const Model::DescribeJobRequest& request) const;
			DescribeJobDataParsingTaskProgressOutcome describeJobDataParsingTaskProgress(const Model::DescribeJobDataParsingTaskProgressRequest &request)const;
			void describeJobDataParsingTaskProgressAsync(const Model::DescribeJobDataParsingTaskProgressRequest& request, const DescribeJobDataParsingTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobDataParsingTaskProgressOutcomeCallable describeJobDataParsingTaskProgressCallable(const Model::DescribeJobDataParsingTaskProgressRequest& request) const;
			DescribeJobGroupOutcome describeJobGroup(const Model::DescribeJobGroupRequest &request)const;
			void describeJobGroupAsync(const Model::DescribeJobGroupRequest& request, const DescribeJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobGroupOutcomeCallable describeJobGroupCallable(const Model::DescribeJobGroupRequest& request) const;
			DescribeJobGroupExportTaskProgressOutcome describeJobGroupExportTaskProgress(const Model::DescribeJobGroupExportTaskProgressRequest &request)const;
			void describeJobGroupExportTaskProgressAsync(const Model::DescribeJobGroupExportTaskProgressRequest& request, const DescribeJobGroupExportTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobGroupExportTaskProgressOutcomeCallable describeJobGroupExportTaskProgressCallable(const Model::DescribeJobGroupExportTaskProgressRequest& request) const;
			DescribeNumberDistrictInfoStatusOutcome describeNumberDistrictInfoStatus(const Model::DescribeNumberDistrictInfoStatusRequest &request)const;
			void describeNumberDistrictInfoStatusAsync(const Model::DescribeNumberDistrictInfoStatusRequest& request, const DescribeNumberDistrictInfoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNumberDistrictInfoStatusOutcomeCallable describeNumberDistrictInfoStatusCallable(const Model::DescribeNumberDistrictInfoStatusRequest& request) const;
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
			DescribeTenantBindNumberOutcome describeTenantBindNumber(const Model::DescribeTenantBindNumberRequest &request)const;
			void describeTenantBindNumberAsync(const Model::DescribeTenantBindNumberRequest& request, const DescribeTenantBindNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTenantBindNumberOutcomeCallable describeTenantBindNumberCallable(const Model::DescribeTenantBindNumberRequest& request) const;
			DialogueOutcome dialogue(const Model::DialogueRequest &request)const;
			void dialogueAsync(const Model::DialogueRequest& request, const DialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DialogueOutcomeCallable dialogueCallable(const Model::DialogueRequest& request) const;
			DismissNumberDistrictInfoParsingResultOutcome dismissNumberDistrictInfoParsingResult(const Model::DismissNumberDistrictInfoParsingResultRequest &request)const;
			void dismissNumberDistrictInfoParsingResultAsync(const Model::DismissNumberDistrictInfoParsingResultRequest& request, const DismissNumberDistrictInfoParsingResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DismissNumberDistrictInfoParsingResultOutcomeCallable dismissNumberDistrictInfoParsingResultCallable(const Model::DismissNumberDistrictInfoParsingResultRequest& request) const;
			DownloadRecordingOutcome downloadRecording(const Model::DownloadRecordingRequest &request)const;
			void downloadRecordingAsync(const Model::DownloadRecordingRequest& request, const DownloadRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadRecordingOutcomeCallable downloadRecordingCallable(const Model::DownloadRecordingRequest& request) const;
			DownloadScriptRecordingOutcome downloadScriptRecording(const Model::DownloadScriptRecordingRequest &request)const;
			void downloadScriptRecordingAsync(const Model::DownloadScriptRecordingRequest& request, const DownloadScriptRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadScriptRecordingOutcomeCallable downloadScriptRecordingCallable(const Model::DownloadScriptRecordingRequest& request) const;
			DuplicateScriptOutcome duplicateScript(const Model::DuplicateScriptRequest &request)const;
			void duplicateScriptAsync(const Model::DuplicateScriptRequest& request, const DuplicateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DuplicateScriptOutcomeCallable duplicateScriptCallable(const Model::DuplicateScriptRequest& request) const;
			ExportScriptOutcome exportScript(const Model::ExportScriptRequest &request)const;
			void exportScriptAsync(const Model::ExportScriptRequest& request, const ExportScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportScriptOutcomeCallable exportScriptCallable(const Model::ExportScriptRequest& request) const;
			GenerateUploadUrlOutcome generateUploadUrl(const Model::GenerateUploadUrlRequest &request)const;
			void generateUploadUrlAsync(const Model::GenerateUploadUrlRequest& request, const GenerateUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateUploadUrlOutcomeCallable generateUploadUrlCallable(const Model::GenerateUploadUrlRequest& request) const;
			GetAfterAnswerDelayPlaybackOutcome getAfterAnswerDelayPlayback(const Model::GetAfterAnswerDelayPlaybackRequest &request)const;
			void getAfterAnswerDelayPlaybackAsync(const Model::GetAfterAnswerDelayPlaybackRequest& request, const GetAfterAnswerDelayPlaybackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAfterAnswerDelayPlaybackOutcomeCallable getAfterAnswerDelayPlaybackCallable(const Model::GetAfterAnswerDelayPlaybackRequest& request) const;
			GetAsrServerInfoOutcome getAsrServerInfo(const Model::GetAsrServerInfoRequest &request)const;
			void getAsrServerInfoAsync(const Model::GetAsrServerInfoRequest& request, const GetAsrServerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAsrServerInfoOutcomeCallable getAsrServerInfoCallable(const Model::GetAsrServerInfoRequest& request) const;
			GetBaseStrategyPeriodOutcome getBaseStrategyPeriod(const Model::GetBaseStrategyPeriodRequest &request)const;
			void getBaseStrategyPeriodAsync(const Model::GetBaseStrategyPeriodRequest& request, const GetBaseStrategyPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBaseStrategyPeriodOutcomeCallable getBaseStrategyPeriodCallable(const Model::GetBaseStrategyPeriodRequest& request) const;
			GetConcurrentConversationQuotaOutcome getConcurrentConversationQuota(const Model::GetConcurrentConversationQuotaRequest &request)const;
			void getConcurrentConversationQuotaAsync(const Model::GetConcurrentConversationQuotaRequest& request, const GetConcurrentConversationQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConcurrentConversationQuotaOutcomeCallable getConcurrentConversationQuotaCallable(const Model::GetConcurrentConversationQuotaRequest& request) const;
			GetContactBlockListOutcome getContactBlockList(const Model::GetContactBlockListRequest &request)const;
			void getContactBlockListAsync(const Model::GetContactBlockListRequest& request, const GetContactBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetContactBlockListOutcomeCallable getContactBlockListCallable(const Model::GetContactBlockListRequest& request) const;
			GetContactWhiteListOutcome getContactWhiteList(const Model::GetContactWhiteListRequest &request)const;
			void getContactWhiteListAsync(const Model::GetContactWhiteListRequest& request, const GetContactWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetContactWhiteListOutcomeCallable getContactWhiteListCallable(const Model::GetContactWhiteListRequest& request) const;
			GetCurrentConcurrencyOutcome getCurrentConcurrency(const Model::GetCurrentConcurrencyRequest &request)const;
			void getCurrentConcurrencyAsync(const Model::GetCurrentConcurrencyRequest& request, const GetCurrentConcurrencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCurrentConcurrencyOutcomeCallable getCurrentConcurrencyCallable(const Model::GetCurrentConcurrencyRequest& request) const;
			GetEffectiveDaysOutcome getEffectiveDays(const Model::GetEffectiveDaysRequest &request)const;
			void getEffectiveDaysAsync(const Model::GetEffectiveDaysRequest& request, const GetEffectiveDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEffectiveDaysOutcomeCallable getEffectiveDaysCallable(const Model::GetEffectiveDaysRequest& request) const;
			GetEmptyNumberNoMoreCallsInfoOutcome getEmptyNumberNoMoreCallsInfo(const Model::GetEmptyNumberNoMoreCallsInfoRequest &request)const;
			void getEmptyNumberNoMoreCallsInfoAsync(const Model::GetEmptyNumberNoMoreCallsInfoRequest& request, const GetEmptyNumberNoMoreCallsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEmptyNumberNoMoreCallsInfoOutcomeCallable getEmptyNumberNoMoreCallsInfoCallable(const Model::GetEmptyNumberNoMoreCallsInfoRequest& request) const;
			GetMaxAttemptsPerDayOutcome getMaxAttemptsPerDay(const Model::GetMaxAttemptsPerDayRequest &request)const;
			void getMaxAttemptsPerDayAsync(const Model::GetMaxAttemptsPerDayRequest& request, const GetMaxAttemptsPerDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMaxAttemptsPerDayOutcomeCallable getMaxAttemptsPerDayCallable(const Model::GetMaxAttemptsPerDayRequest& request) const;
			GetNumberDistrictInfoTemplateDownloadUrlOutcome getNumberDistrictInfoTemplateDownloadUrl(const Model::GetNumberDistrictInfoTemplateDownloadUrlRequest &request)const;
			void getNumberDistrictInfoTemplateDownloadUrlAsync(const Model::GetNumberDistrictInfoTemplateDownloadUrlRequest& request, const GetNumberDistrictInfoTemplateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNumberDistrictInfoTemplateDownloadUrlOutcomeCallable getNumberDistrictInfoTemplateDownloadUrlCallable(const Model::GetNumberDistrictInfoTemplateDownloadUrlRequest& request) const;
			GetSummaryInfoOutcome getSummaryInfo(const Model::GetSummaryInfoRequest &request)const;
			void getSummaryInfoAsync(const Model::GetSummaryInfoRequest& request, const GetSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSummaryInfoOutcomeCallable getSummaryInfoCallable(const Model::GetSummaryInfoRequest& request) const;
			GetTaskByUuidOutcome getTaskByUuid(const Model::GetTaskByUuidRequest &request)const;
			void getTaskByUuidAsync(const Model::GetTaskByUuidRequest& request, const GetTaskByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskByUuidOutcomeCallable getTaskByUuidCallable(const Model::GetTaskByUuidRequest& request) const;
			GetVersionOutcome getVersion(const Model::GetVersionRequest &request)const;
			void getVersionAsync(const Model::GetVersionRequest& request, const GetVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVersionOutcomeCallable getVersionCallable(const Model::GetVersionRequest& request) const;
			ImportScriptOutcome importScript(const Model::ImportScriptRequest &request)const;
			void importScriptAsync(const Model::ImportScriptRequest& request, const ImportScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportScriptOutcomeCallable importScriptCallable(const Model::ImportScriptRequest& request) const;
			InflightTaskTimeoutOutcome inflightTaskTimeout(const Model::InflightTaskTimeoutRequest &request)const;
			void inflightTaskTimeoutAsync(const Model::InflightTaskTimeoutRequest& request, const InflightTaskTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InflightTaskTimeoutOutcomeCallable inflightTaskTimeoutCallable(const Model::InflightTaskTimeoutRequest& request) const;
			ListAllTenantBindNumberBindingOutcome listAllTenantBindNumberBinding(const Model::ListAllTenantBindNumberBindingRequest &request)const;
			void listAllTenantBindNumberBindingAsync(const Model::ListAllTenantBindNumberBindingRequest& request, const ListAllTenantBindNumberBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllTenantBindNumberBindingOutcomeCallable listAllTenantBindNumberBindingCallable(const Model::ListAllTenantBindNumberBindingRequest& request) const;
			ListChatbotInstancesOutcome listChatbotInstances(const Model::ListChatbotInstancesRequest &request)const;
			void listChatbotInstancesAsync(const Model::ListChatbotInstancesRequest& request, const ListChatbotInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListChatbotInstancesOutcomeCallable listChatbotInstancesCallable(const Model::ListChatbotInstancesRequest& request) const;
			ListDialogueFlowsOutcome listDialogueFlows(const Model::ListDialogueFlowsRequest &request)const;
			void listDialogueFlowsAsync(const Model::ListDialogueFlowsRequest& request, const ListDialogueFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDialogueFlowsOutcomeCallable listDialogueFlowsCallable(const Model::ListDialogueFlowsRequest& request) const;
			ListDownloadTasksOutcome listDownloadTasks(const Model::ListDownloadTasksRequest &request)const;
			void listDownloadTasksAsync(const Model::ListDownloadTasksRequest& request, const ListDownloadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDownloadTasksOutcomeCallable listDownloadTasksCallable(const Model::ListDownloadTasksRequest& request) const;
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
			ListJobGroupsAsyncOutcome listJobGroupsAsync(const Model::ListJobGroupsAsyncRequest &request)const;
			void listJobGroupsAsyncAsync(const Model::ListJobGroupsAsyncRequest& request, const ListJobGroupsAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobGroupsAsyncOutcomeCallable listJobGroupsAsyncCallable(const Model::ListJobGroupsAsyncRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			ListJobsByGroupOutcome listJobsByGroup(const Model::ListJobsByGroupRequest &request)const;
			void listJobsByGroupAsync(const Model::ListJobsByGroupRequest& request, const ListJobsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsByGroupOutcomeCallable listJobsByGroupCallable(const Model::ListJobsByGroupRequest& request) const;
			ListOutboundCallNumbersOutcome listOutboundCallNumbers(const Model::ListOutboundCallNumbersRequest &request)const;
			void listOutboundCallNumbersAsync(const Model::ListOutboundCallNumbersRequest& request, const ListOutboundCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOutboundCallNumbersOutcomeCallable listOutboundCallNumbersCallable(const Model::ListOutboundCallNumbersRequest& request) const;
			ListResourceTagsOutcome listResourceTags(const Model::ListResourceTagsRequest &request)const;
			void listResourceTagsAsync(const Model::ListResourceTagsRequest& request, const ListResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceTagsOutcomeCallable listResourceTagsCallable(const Model::ListResourceTagsRequest& request) const;
			ListSchedulerInstancesOutcome listSchedulerInstances(const Model::ListSchedulerInstancesRequest &request)const;
			void listSchedulerInstancesAsync(const Model::ListSchedulerInstancesRequest& request, const ListSchedulerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSchedulerInstancesOutcomeCallable listSchedulerInstancesCallable(const Model::ListSchedulerInstancesRequest& request) const;
			ListScriptPublishHistoriesOutcome listScriptPublishHistories(const Model::ListScriptPublishHistoriesRequest &request)const;
			void listScriptPublishHistoriesAsync(const Model::ListScriptPublishHistoriesRequest& request, const ListScriptPublishHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScriptPublishHistoriesOutcomeCallable listScriptPublishHistoriesCallable(const Model::ListScriptPublishHistoriesRequest& request) const;
			ListScriptRecordingOutcome listScriptRecording(const Model::ListScriptRecordingRequest &request)const;
			void listScriptRecordingAsync(const Model::ListScriptRecordingRequest& request, const ListScriptRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScriptRecordingOutcomeCallable listScriptRecordingCallable(const Model::ListScriptRecordingRequest& request) const;
			ListScriptVoiceConfigsOutcome listScriptVoiceConfigs(const Model::ListScriptVoiceConfigsRequest &request)const;
			void listScriptVoiceConfigsAsync(const Model::ListScriptVoiceConfigsRequest& request, const ListScriptVoiceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScriptVoiceConfigsOutcomeCallable listScriptVoiceConfigsCallable(const Model::ListScriptVoiceConfigsRequest& request) const;
			ListScriptsOutcome listScripts(const Model::ListScriptsRequest &request)const;
			void listScriptsAsync(const Model::ListScriptsRequest& request, const ListScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScriptsOutcomeCallable listScriptsCallable(const Model::ListScriptsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagsOutcome listTags(const Model::ListTagsRequest &request)const;
			void listTagsAsync(const Model::ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsOutcomeCallable listTagsCallable(const Model::ListTagsRequest& request) const;
			ModifyBatchJobsOutcome modifyBatchJobs(const Model::ModifyBatchJobsRequest &request)const;
			void modifyBatchJobsAsync(const Model::ModifyBatchJobsRequest& request, const ModifyBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBatchJobsOutcomeCallable modifyBatchJobsCallable(const Model::ModifyBatchJobsRequest& request) const;
			ModifyDialogueFlowOutcome modifyDialogueFlow(const Model::ModifyDialogueFlowRequest &request)const;
			void modifyDialogueFlowAsync(const Model::ModifyDialogueFlowRequest& request, const ModifyDialogueFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDialogueFlowOutcomeCallable modifyDialogueFlowCallable(const Model::ModifyDialogueFlowRequest& request) const;
			ModifyEmptyNumberNoMoreCallsInfoOutcome modifyEmptyNumberNoMoreCallsInfo(const Model::ModifyEmptyNumberNoMoreCallsInfoRequest &request)const;
			void modifyEmptyNumberNoMoreCallsInfoAsync(const Model::ModifyEmptyNumberNoMoreCallsInfoRequest& request, const ModifyEmptyNumberNoMoreCallsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEmptyNumberNoMoreCallsInfoOutcomeCallable modifyEmptyNumberNoMoreCallsInfoCallable(const Model::ModifyEmptyNumberNoMoreCallsInfoRequest& request) const;
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
			QueryJobsWithResultOutcome queryJobsWithResult(const Model::QueryJobsWithResultRequest &request)const;
			void queryJobsWithResultAsync(const Model::QueryJobsWithResultRequest& request, const QueryJobsWithResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryJobsWithResultOutcomeCallable queryJobsWithResultCallable(const Model::QueryJobsWithResultRequest& request) const;
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
			SaveAfterAnswerDelayPlaybackOutcome saveAfterAnswerDelayPlayback(const Model::SaveAfterAnswerDelayPlaybackRequest &request)const;
			void saveAfterAnswerDelayPlaybackAsync(const Model::SaveAfterAnswerDelayPlaybackRequest& request, const SaveAfterAnswerDelayPlaybackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveAfterAnswerDelayPlaybackOutcomeCallable saveAfterAnswerDelayPlaybackCallable(const Model::SaveAfterAnswerDelayPlaybackRequest& request) const;
			SaveBaseStrategyPeriodOutcome saveBaseStrategyPeriod(const Model::SaveBaseStrategyPeriodRequest &request)const;
			void saveBaseStrategyPeriodAsync(const Model::SaveBaseStrategyPeriodRequest& request, const SaveBaseStrategyPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveBaseStrategyPeriodOutcomeCallable saveBaseStrategyPeriodCallable(const Model::SaveBaseStrategyPeriodRequest& request) const;
			SaveContactBlockListOutcome saveContactBlockList(const Model::SaveContactBlockListRequest &request)const;
			void saveContactBlockListAsync(const Model::SaveContactBlockListRequest& request, const SaveContactBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveContactBlockListOutcomeCallable saveContactBlockListCallable(const Model::SaveContactBlockListRequest& request) const;
			SaveContactWhiteListOutcome saveContactWhiteList(const Model::SaveContactWhiteListRequest &request)const;
			void saveContactWhiteListAsync(const Model::SaveContactWhiteListRequest& request, const SaveContactWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveContactWhiteListOutcomeCallable saveContactWhiteListCallable(const Model::SaveContactWhiteListRequest& request) const;
			SaveEffectiveDaysOutcome saveEffectiveDays(const Model::SaveEffectiveDaysRequest &request)const;
			void saveEffectiveDaysAsync(const Model::SaveEffectiveDaysRequest& request, const SaveEffectiveDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveEffectiveDaysOutcomeCallable saveEffectiveDaysCallable(const Model::SaveEffectiveDaysRequest& request) const;
			SaveMaxAttemptsPerDayOutcome saveMaxAttemptsPerDay(const Model::SaveMaxAttemptsPerDayRequest &request)const;
			void saveMaxAttemptsPerDayAsync(const Model::SaveMaxAttemptsPerDayRequest& request, const SaveMaxAttemptsPerDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveMaxAttemptsPerDayOutcomeCallable saveMaxAttemptsPerDayCallable(const Model::SaveMaxAttemptsPerDayRequest& request) const;
			SearchTaskOutcome searchTask(const Model::SearchTaskRequest &request)const;
			void searchTaskAsync(const Model::SearchTaskRequest& request, const SearchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTaskOutcomeCallable searchTaskCallable(const Model::SearchTaskRequest& request) const;
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
			SuspendCallOutcome suspendCall(const Model::SuspendCallRequest &request)const;
			void suspendCallAsync(const Model::SuspendCallRequest& request, const SuspendCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendCallOutcomeCallable suspendCallCallable(const Model::SuspendCallRequest& request) const;
			SuspendCallWithFileOutcome suspendCallWithFile(const Model::SuspendCallWithFileRequest &request)const;
			void suspendCallWithFileAsync(const Model::SuspendCallWithFileRequest& request, const SuspendCallWithFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendCallWithFileOutcomeCallable suspendCallWithFileCallable(const Model::SuspendCallWithFileRequest& request) const;
			SuspendJobsOutcome suspendJobs(const Model::SuspendJobsRequest &request)const;
			void suspendJobsAsync(const Model::SuspendJobsRequest& request, const SuspendJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendJobsOutcomeCallable suspendJobsCallable(const Model::SuspendJobsRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TaskPreparingOutcome taskPreparing(const Model::TaskPreparingRequest &request)const;
			void taskPreparingAsync(const Model::TaskPreparingRequest& request, const TaskPreparingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaskPreparingOutcomeCallable taskPreparingCallable(const Model::TaskPreparingRequest& request) const;
			TerminateCallOutcome terminateCall(const Model::TerminateCallRequest &request)const;
			void terminateCallAsync(const Model::TerminateCallRequest& request, const TerminateCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TerminateCallOutcomeCallable terminateCallCallable(const Model::TerminateCallRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UploadScriptRecordingOutcome uploadScriptRecording(const Model::UploadScriptRecordingRequest &request)const;
			void uploadScriptRecordingAsync(const Model::UploadScriptRecordingRequest& request, const UploadScriptRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadScriptRecordingOutcomeCallable uploadScriptRecordingCallable(const Model::UploadScriptRecordingRequest& request) const;
			WithdrawScriptReviewOutcome withdrawScriptReview(const Model::WithdrawScriptReviewRequest &request)const;
			void withdrawScriptReviewAsync(const Model::WithdrawScriptReviewRequest& request, const WithdrawScriptReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WithdrawScriptReviewOutcomeCallable withdrawScriptReviewCallable(const Model::WithdrawScriptReviewRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OUTBOUNDBOT_OUTBOUNDBOTCLIENT_H_
