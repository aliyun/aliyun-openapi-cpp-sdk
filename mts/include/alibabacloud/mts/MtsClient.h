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

#ifndef ALIBABACLOUD_MTS_MTSCLIENT_H_
#define ALIBABACLOUD_MTS_MTSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "MtsExport.h"
#include "model/ActivateMediaWorkflowRequest.h"
#include "model/ActivateMediaWorkflowResult.h"
#include "model/AddAsrPipelineRequest.h"
#include "model/AddAsrPipelineResult.h"
#include "model/AddCategoryRequest.h"
#include "model/AddCategoryResult.h"
#include "model/AddCensorPipelineRequest.h"
#include "model/AddCensorPipelineResult.h"
#include "model/AddCoverPipelineRequest.h"
#include "model/AddCoverPipelineResult.h"
#include "model/AddMCTemplateRequest.h"
#include "model/AddMCTemplateResult.h"
#include "model/AddMediaRequest.h"
#include "model/AddMediaResult.h"
#include "model/AddMediaTagRequest.h"
#include "model/AddMediaTagResult.h"
#include "model/AddMediaWorkflowRequest.h"
#include "model/AddMediaWorkflowResult.h"
#include "model/AddPipelineRequest.h"
#include "model/AddPipelineResult.h"
#include "model/AddPornPipelineRequest.h"
#include "model/AddPornPipelineResult.h"
#include "model/AddTemplateRequest.h"
#include "model/AddTemplateResult.h"
#include "model/AddTerrorismPipelineRequest.h"
#include "model/AddTerrorismPipelineResult.h"
#include "model/AddWaterMarkTemplateRequest.h"
#include "model/AddWaterMarkTemplateResult.h"
#include "model/BindInputBucketRequest.h"
#include "model/BindInputBucketResult.h"
#include "model/BindOutputBucketRequest.h"
#include "model/BindOutputBucketResult.h"
#include "model/CancelJobRequest.h"
#include "model/CancelJobResult.h"
#include "model/CategoryTreeRequest.h"
#include "model/CategoryTreeResult.h"
#include "model/CheckResourceRequest.h"
#include "model/CheckResourceResult.h"
#include "model/CreateMcuTemplateRequest.h"
#include "model/CreateMcuTemplateResult.h"
#include "model/CreateSessionRequest.h"
#include "model/CreateSessionResult.h"
#include "model/DeactivateMediaWorkflowRequest.h"
#include "model/DeactivateMediaWorkflowResult.h"
#include "model/DecryptKeyRequest.h"
#include "model/DecryptKeyResult.h"
#include "model/DeleteCategoryRequest.h"
#include "model/DeleteCategoryResult.h"
#include "model/DeleteMCTemplateRequest.h"
#include "model/DeleteMCTemplateResult.h"
#include "model/DeleteMcuJobRequest.h"
#include "model/DeleteMcuJobResult.h"
#include "model/DeleteMcuTemplateRequest.h"
#include "model/DeleteMcuTemplateResult.h"
#include "model/DeleteMediaRequest.h"
#include "model/DeleteMediaResult.h"
#include "model/DeleteMediaTagRequest.h"
#include "model/DeleteMediaTagResult.h"
#include "model/DeleteMediaWorkflowRequest.h"
#include "model/DeleteMediaWorkflowResult.h"
#include "model/DeletePipelineRequest.h"
#include "model/DeletePipelineResult.h"
#include "model/DeleteTemplateRequest.h"
#include "model/DeleteTemplateResult.h"
#include "model/DeleteWaterMarkTemplateRequest.h"
#include "model/DeleteWaterMarkTemplateResult.h"
#include "model/DescribeMtsUserResourcePackageRequest.h"
#include "model/DescribeMtsUserResourcePackageResult.h"
#include "model/GetLicenseRequest.h"
#include "model/GetLicenseResult.h"
#include "model/GetPackageRequest.h"
#include "model/GetPackageResult.h"
#include "model/ListAllCategoryRequest.h"
#include "model/ListAllCategoryResult.h"
#include "model/ListAllMediaBucketRequest.h"
#include "model/ListAllMediaBucketResult.h"
#include "model/ListAsrPipelineRequest.h"
#include "model/ListAsrPipelineResult.h"
#include "model/ListCensorPipelineRequest.h"
#include "model/ListCensorPipelineResult.h"
#include "model/ListCoverPipelineRequest.h"
#include "model/ListCoverPipelineResult.h"
#include "model/ListJobRequest.h"
#include "model/ListJobResult.h"
#include "model/ListMediaRequest.h"
#include "model/ListMediaResult.h"
#include "model/ListMediaWorkflowExecutionsRequest.h"
#include "model/ListMediaWorkflowExecutionsResult.h"
#include "model/ListPornPipelineRequest.h"
#include "model/ListPornPipelineResult.h"
#include "model/ListTerrorismPipelineRequest.h"
#include "model/ListTerrorismPipelineResult.h"
#include "model/LogicalDeleteResourceRequest.h"
#include "model/LogicalDeleteResourceResult.h"
#include "model/PhysicalDeleteResourceRequest.h"
#include "model/PhysicalDeleteResourceResult.h"
#include "model/PlayInfoRequest.h"
#include "model/PlayInfoResult.h"
#include "model/PlayerAuthRequest.h"
#include "model/PlayerAuthResult.h"
#include "model/QueryAnalysisJobListRequest.h"
#include "model/QueryAnalysisJobListResult.h"
#include "model/QueryAnnotationJobListRequest.h"
#include "model/QueryAnnotationJobListResult.h"
#include "model/QueryAsrJobListRequest.h"
#include "model/QueryAsrJobListResult.h"
#include "model/QueryAsrPipelineListRequest.h"
#include "model/QueryAsrPipelineListResult.h"
#include "model/QueryAuthConfigRequest.h"
#include "model/QueryAuthConfigResult.h"
#include "model/QueryCensorJobListRequest.h"
#include "model/QueryCensorJobListResult.h"
#include "model/QueryCensorPipelineListRequest.h"
#include "model/QueryCensorPipelineListResult.h"
#include "model/QueryComplexJobListRequest.h"
#include "model/QueryComplexJobListResult.h"
#include "model/QueryCoverJobListRequest.h"
#include "model/QueryCoverJobListResult.h"
#include "model/QueryCoverPipelineListRequest.h"
#include "model/QueryCoverPipelineListResult.h"
#include "model/QueryEditingJobListRequest.h"
#include "model/QueryEditingJobListResult.h"
#include "model/QueryFacerecogJobListRequest.h"
#include "model/QueryFacerecogJobListResult.h"
#include "model/QueryFpCompareJobListRequest.h"
#include "model/QueryFpCompareJobListResult.h"
#include "model/QueryFpImportResultRequest.h"
#include "model/QueryFpImportResultResult.h"
#include "model/QueryFpShotJobListRequest.h"
#include "model/QueryFpShotJobListResult.h"
#include "model/QueryImageSearchJobListRequest.h"
#include "model/QueryImageSearchJobListResult.h"
#include "model/QueryJobListRequest.h"
#include "model/QueryJobListResult.h"
#include "model/QueryMCJobListRequest.h"
#include "model/QueryMCJobListResult.h"
#include "model/QueryMCTemplateListRequest.h"
#include "model/QueryMCTemplateListResult.h"
#include "model/QueryMcuJobRequest.h"
#include "model/QueryMcuJobResult.h"
#include "model/QueryMcuTemplateRequest.h"
#include "model/QueryMcuTemplateResult.h"
#include "model/QueryMediaCensorJobDetailRequest.h"
#include "model/QueryMediaCensorJobDetailResult.h"
#include "model/QueryMediaCensorJobListRequest.h"
#include "model/QueryMediaCensorJobListResult.h"
#include "model/QueryMediaDetailJobListRequest.h"
#include "model/QueryMediaDetailJobListResult.h"
#include "model/QueryMediaFpDeleteJobListRequest.h"
#include "model/QueryMediaFpDeleteJobListResult.h"
#include "model/QueryMediaInfoJobListRequest.h"
#include "model/QueryMediaInfoJobListResult.h"
#include "model/QueryMediaListRequest.h"
#include "model/QueryMediaListResult.h"
#include "model/QueryMediaListByURLRequest.h"
#include "model/QueryMediaListByURLResult.h"
#include "model/QueryMediaWorkflowExecutionListRequest.h"
#include "model/QueryMediaWorkflowExecutionListResult.h"
#include "model/QueryMediaWorkflowListRequest.h"
#include "model/QueryMediaWorkflowListResult.h"
#include "model/QueryPipelineListRequest.h"
#include "model/QueryPipelineListResult.h"
#include "model/QueryPornJobListRequest.h"
#include "model/QueryPornJobListResult.h"
#include "model/QueryPornPipelineListRequest.h"
#include "model/QueryPornPipelineListResult.h"
#include "model/QuerySnapshotJobListRequest.h"
#include "model/QuerySnapshotJobListResult.h"
#include "model/QuerySubtitleJobListRequest.h"
#include "model/QuerySubtitleJobListResult.h"
#include "model/QueryTagJobListRequest.h"
#include "model/QueryTagJobListResult.h"
#include "model/QueryTemplateListRequest.h"
#include "model/QueryTemplateListResult.h"
#include "model/QueryTerrorismJobListRequest.h"
#include "model/QueryTerrorismJobListResult.h"
#include "model/QueryTerrorismPipelineListRequest.h"
#include "model/QueryTerrorismPipelineListResult.h"
#include "model/QueryVideoGifJobListRequest.h"
#include "model/QueryVideoGifJobListResult.h"
#include "model/QueryVideoPoseJobListRequest.h"
#include "model/QueryVideoPoseJobListResult.h"
#include "model/QueryVideoSplitJobListRequest.h"
#include "model/QueryVideoSplitJobListResult.h"
#include "model/QueryVideoSummaryJobListRequest.h"
#include "model/QueryVideoSummaryJobListResult.h"
#include "model/QueryWaterMarkTemplateListRequest.h"
#include "model/QueryWaterMarkTemplateListResult.h"
#include "model/RefreshCdnDomainConfigsCacheRequest.h"
#include "model/RefreshCdnDomainConfigsCacheResult.h"
#include "model/RegisterMediaDetailPersonRequest.h"
#include "model/RegisterMediaDetailPersonResult.h"
#include "model/RegisterMediaDetailScenarioRequest.h"
#include "model/RegisterMediaDetailScenarioResult.h"
#include "model/ReportAnnotationJobResultRequest.h"
#include "model/ReportAnnotationJobResultResult.h"
#include "model/ReportCensorJobResultRequest.h"
#include "model/ReportCensorJobResultResult.h"
#include "model/ReportCoverJobResultRequest.h"
#include "model/ReportCoverJobResultResult.h"
#include "model/ReportFacerecogJobResultRequest.h"
#include "model/ReportFacerecogJobResultResult.h"
#include "model/ReportFpShotJobResultRequest.h"
#include "model/ReportFpShotJobResultResult.h"
#include "model/ReportMediaDetailJobResultRequest.h"
#include "model/ReportMediaDetailJobResultResult.h"
#include "model/ReportPornJobResultRequest.h"
#include "model/ReportPornJobResultResult.h"
#include "model/ReportTagJobResultRequest.h"
#include "model/ReportTagJobResultResult.h"
#include "model/ReportTerrorismJobResultRequest.h"
#include "model/ReportTerrorismJobResultResult.h"
#include "model/ReportVideoSplitJobResultRequest.h"
#include "model/ReportVideoSplitJobResultResult.h"
#include "model/SearchMediaRequest.h"
#include "model/SearchMediaResult.h"
#include "model/SearchMediaWorkflowRequest.h"
#include "model/SearchMediaWorkflowResult.h"
#include "model/SearchPipelineRequest.h"
#include "model/SearchPipelineResult.h"
#include "model/SearchTemplateRequest.h"
#include "model/SearchTemplateResult.h"
#include "model/SearchWaterMarkTemplateRequest.h"
#include "model/SearchWaterMarkTemplateResult.h"
#include "model/SetAuthConfigRequest.h"
#include "model/SetAuthConfigResult.h"
#include "model/SubmitAnalysisJobRequest.h"
#include "model/SubmitAnalysisJobResult.h"
#include "model/SubmitAnnotationJobRequest.h"
#include "model/SubmitAnnotationJobResult.h"
#include "model/SubmitAsrJobRequest.h"
#include "model/SubmitAsrJobResult.h"
#include "model/SubmitBeautifyJobsRequest.h"
#include "model/SubmitBeautifyJobsResult.h"
#include "model/SubmitComplexJobRequest.h"
#include "model/SubmitComplexJobResult.h"
#include "model/SubmitCoverJobRequest.h"
#include "model/SubmitCoverJobResult.h"
#include "model/SubmitEditingJobsRequest.h"
#include "model/SubmitEditingJobsResult.h"
#include "model/SubmitFacerecogJobRequest.h"
#include "model/SubmitFacerecogJobResult.h"
#include "model/SubmitFpCompareJobRequest.h"
#include "model/SubmitFpCompareJobResult.h"
#include "model/SubmitFpShotJobRequest.h"
#include "model/SubmitFpShotJobResult.h"
#include "model/SubmitImageQualityJobRequest.h"
#include "model/SubmitImageQualityJobResult.h"
#include "model/SubmitImageSearchJobRequest.h"
#include "model/SubmitImageSearchJobResult.h"
#include "model/SubmitJobsRequest.h"
#include "model/SubmitJobsResult.h"
#include "model/SubmitMCJobRequest.h"
#include "model/SubmitMCJobResult.h"
#include "model/SubmitMcuJobRequest.h"
#include "model/SubmitMcuJobResult.h"
#include "model/SubmitMediaCensorJobRequest.h"
#include "model/SubmitMediaCensorJobResult.h"
#include "model/SubmitMediaDetailJobRequest.h"
#include "model/SubmitMediaDetailJobResult.h"
#include "model/SubmitMediaFpDeleteJobRequest.h"
#include "model/SubmitMediaFpDeleteJobResult.h"
#include "model/SubmitMediaInfoJobRequest.h"
#include "model/SubmitMediaInfoJobResult.h"
#include "model/SubmitPornJobRequest.h"
#include "model/SubmitPornJobResult.h"
#include "model/SubmitSnapshotJobRequest.h"
#include "model/SubmitSnapshotJobResult.h"
#include "model/SubmitSubtitleJobRequest.h"
#include "model/SubmitSubtitleJobResult.h"
#include "model/SubmitTagJobRequest.h"
#include "model/SubmitTagJobResult.h"
#include "model/SubmitTerrorismJobRequest.h"
#include "model/SubmitTerrorismJobResult.h"
#include "model/SubmitVideoGifJobRequest.h"
#include "model/SubmitVideoGifJobResult.h"
#include "model/SubmitVideoPoseJobRequest.h"
#include "model/SubmitVideoPoseJobResult.h"
#include "model/SubmitVideoSplitJobRequest.h"
#include "model/SubmitVideoSplitJobResult.h"
#include "model/SubmitVideoSummaryJobRequest.h"
#include "model/SubmitVideoSummaryJobResult.h"
#include "model/UnbindInputBucketRequest.h"
#include "model/UnbindInputBucketResult.h"
#include "model/UnbindOutputBucketRequest.h"
#include "model/UnbindOutputBucketResult.h"
#include "model/UpdateAsrPipelineRequest.h"
#include "model/UpdateAsrPipelineResult.h"
#include "model/UpdateCategoryNameRequest.h"
#include "model/UpdateCategoryNameResult.h"
#include "model/UpdateCensorPipelineRequest.h"
#include "model/UpdateCensorPipelineResult.h"
#include "model/UpdateCoverPipelineRequest.h"
#include "model/UpdateCoverPipelineResult.h"
#include "model/UpdateMCTemplateRequest.h"
#include "model/UpdateMCTemplateResult.h"
#include "model/UpdateMcuTemplateRequest.h"
#include "model/UpdateMcuTemplateResult.h"
#include "model/UpdateMediaRequest.h"
#include "model/UpdateMediaResult.h"
#include "model/UpdateMediaCategoryRequest.h"
#include "model/UpdateMediaCategoryResult.h"
#include "model/UpdateMediaCoverRequest.h"
#include "model/UpdateMediaCoverResult.h"
#include "model/UpdateMediaPublishStateRequest.h"
#include "model/UpdateMediaPublishStateResult.h"
#include "model/UpdateMediaWorkflowRequest.h"
#include "model/UpdateMediaWorkflowResult.h"
#include "model/UpdateMediaWorkflowTriggerModeRequest.h"
#include "model/UpdateMediaWorkflowTriggerModeResult.h"
#include "model/UpdatePipelineRequest.h"
#include "model/UpdatePipelineResult.h"
#include "model/UpdatePornPipelineRequest.h"
#include "model/UpdatePornPipelineResult.h"
#include "model/UpdateTemplateRequest.h"
#include "model/UpdateTemplateResult.h"
#include "model/UpdateTerrorismPipelineRequest.h"
#include "model/UpdateTerrorismPipelineResult.h"
#include "model/UpdateWaterMarkTemplateRequest.h"
#include "model/UpdateWaterMarkTemplateResult.h"


namespace AlibabaCloud
{
	namespace Mts
	{
		class ALIBABACLOUD_MTS_EXPORT MtsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateMediaWorkflowResult> ActivateMediaWorkflowOutcome;
			typedef std::future<ActivateMediaWorkflowOutcome> ActivateMediaWorkflowOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ActivateMediaWorkflowRequest&, const ActivateMediaWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateMediaWorkflowAsyncHandler;
			typedef Outcome<Error, Model::AddAsrPipelineResult> AddAsrPipelineOutcome;
			typedef std::future<AddAsrPipelineOutcome> AddAsrPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddAsrPipelineRequest&, const AddAsrPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAsrPipelineAsyncHandler;
			typedef Outcome<Error, Model::AddCategoryResult> AddCategoryOutcome;
			typedef std::future<AddCategoryOutcome> AddCategoryOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddCategoryRequest&, const AddCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCategoryAsyncHandler;
			typedef Outcome<Error, Model::AddCensorPipelineResult> AddCensorPipelineOutcome;
			typedef std::future<AddCensorPipelineOutcome> AddCensorPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddCensorPipelineRequest&, const AddCensorPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCensorPipelineAsyncHandler;
			typedef Outcome<Error, Model::AddCoverPipelineResult> AddCoverPipelineOutcome;
			typedef std::future<AddCoverPipelineOutcome> AddCoverPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddCoverPipelineRequest&, const AddCoverPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCoverPipelineAsyncHandler;
			typedef Outcome<Error, Model::AddMCTemplateResult> AddMCTemplateOutcome;
			typedef std::future<AddMCTemplateOutcome> AddMCTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddMCTemplateRequest&, const AddMCTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMCTemplateAsyncHandler;
			typedef Outcome<Error, Model::AddMediaResult> AddMediaOutcome;
			typedef std::future<AddMediaOutcome> AddMediaOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddMediaRequest&, const AddMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMediaAsyncHandler;
			typedef Outcome<Error, Model::AddMediaTagResult> AddMediaTagOutcome;
			typedef std::future<AddMediaTagOutcome> AddMediaTagOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddMediaTagRequest&, const AddMediaTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMediaTagAsyncHandler;
			typedef Outcome<Error, Model::AddMediaWorkflowResult> AddMediaWorkflowOutcome;
			typedef std::future<AddMediaWorkflowOutcome> AddMediaWorkflowOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddMediaWorkflowRequest&, const AddMediaWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMediaWorkflowAsyncHandler;
			typedef Outcome<Error, Model::AddPipelineResult> AddPipelineOutcome;
			typedef std::future<AddPipelineOutcome> AddPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddPipelineRequest&, const AddPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPipelineAsyncHandler;
			typedef Outcome<Error, Model::AddPornPipelineResult> AddPornPipelineOutcome;
			typedef std::future<AddPornPipelineOutcome> AddPornPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddPornPipelineRequest&, const AddPornPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPornPipelineAsyncHandler;
			typedef Outcome<Error, Model::AddTemplateResult> AddTemplateOutcome;
			typedef std::future<AddTemplateOutcome> AddTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddTemplateRequest&, const AddTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTemplateAsyncHandler;
			typedef Outcome<Error, Model::AddTerrorismPipelineResult> AddTerrorismPipelineOutcome;
			typedef std::future<AddTerrorismPipelineOutcome> AddTerrorismPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddTerrorismPipelineRequest&, const AddTerrorismPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTerrorismPipelineAsyncHandler;
			typedef Outcome<Error, Model::AddWaterMarkTemplateResult> AddWaterMarkTemplateOutcome;
			typedef std::future<AddWaterMarkTemplateOutcome> AddWaterMarkTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddWaterMarkTemplateRequest&, const AddWaterMarkTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddWaterMarkTemplateAsyncHandler;
			typedef Outcome<Error, Model::BindInputBucketResult> BindInputBucketOutcome;
			typedef std::future<BindInputBucketOutcome> BindInputBucketOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::BindInputBucketRequest&, const BindInputBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindInputBucketAsyncHandler;
			typedef Outcome<Error, Model::BindOutputBucketResult> BindOutputBucketOutcome;
			typedef std::future<BindOutputBucketOutcome> BindOutputBucketOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::BindOutputBucketRequest&, const BindOutputBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindOutputBucketAsyncHandler;
			typedef Outcome<Error, Model::CancelJobResult> CancelJobOutcome;
			typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::CancelJobRequest&, const CancelJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelJobAsyncHandler;
			typedef Outcome<Error, Model::CategoryTreeResult> CategoryTreeOutcome;
			typedef std::future<CategoryTreeOutcome> CategoryTreeOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::CategoryTreeRequest&, const CategoryTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CategoryTreeAsyncHandler;
			typedef Outcome<Error, Model::CheckResourceResult> CheckResourceOutcome;
			typedef std::future<CheckResourceOutcome> CheckResourceOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::CheckResourceRequest&, const CheckResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckResourceAsyncHandler;
			typedef Outcome<Error, Model::CreateMcuTemplateResult> CreateMcuTemplateOutcome;
			typedef std::future<CreateMcuTemplateOutcome> CreateMcuTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::CreateMcuTemplateRequest&, const CreateMcuTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMcuTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateSessionResult> CreateSessionOutcome;
			typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::CreateSessionRequest&, const CreateSessionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionAsyncHandler;
			typedef Outcome<Error, Model::DeactivateMediaWorkflowResult> DeactivateMediaWorkflowOutcome;
			typedef std::future<DeactivateMediaWorkflowOutcome> DeactivateMediaWorkflowOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeactivateMediaWorkflowRequest&, const DeactivateMediaWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateMediaWorkflowAsyncHandler;
			typedef Outcome<Error, Model::DecryptKeyResult> DecryptKeyOutcome;
			typedef std::future<DecryptKeyOutcome> DecryptKeyOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DecryptKeyRequest&, const DecryptKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecryptKeyAsyncHandler;
			typedef Outcome<Error, Model::DeleteCategoryResult> DeleteCategoryOutcome;
			typedef std::future<DeleteCategoryOutcome> DeleteCategoryOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteCategoryRequest&, const DeleteCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteMCTemplateResult> DeleteMCTemplateOutcome;
			typedef std::future<DeleteMCTemplateOutcome> DeleteMCTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteMCTemplateRequest&, const DeleteMCTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMCTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteMcuJobResult> DeleteMcuJobOutcome;
			typedef std::future<DeleteMcuJobOutcome> DeleteMcuJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteMcuJobRequest&, const DeleteMcuJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMcuJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteMcuTemplateResult> DeleteMcuTemplateOutcome;
			typedef std::future<DeleteMcuTemplateOutcome> DeleteMcuTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteMcuTemplateRequest&, const DeleteMcuTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMcuTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteMediaResult> DeleteMediaOutcome;
			typedef std::future<DeleteMediaOutcome> DeleteMediaOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteMediaRequest&, const DeleteMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaAsyncHandler;
			typedef Outcome<Error, Model::DeleteMediaTagResult> DeleteMediaTagOutcome;
			typedef std::future<DeleteMediaTagOutcome> DeleteMediaTagOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteMediaTagRequest&, const DeleteMediaTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteMediaWorkflowResult> DeleteMediaWorkflowOutcome;
			typedef std::future<DeleteMediaWorkflowOutcome> DeleteMediaWorkflowOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteMediaWorkflowRequest&, const DeleteMediaWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaWorkflowAsyncHandler;
			typedef Outcome<Error, Model::DeletePipelineResult> DeletePipelineOutcome;
			typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeletePipelineRequest&, const DeletePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePipelineAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplateResult> DeleteTemplateOutcome;
			typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteTemplateRequest&, const DeleteTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteWaterMarkTemplateResult> DeleteWaterMarkTemplateOutcome;
			typedef std::future<DeleteWaterMarkTemplateOutcome> DeleteWaterMarkTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteWaterMarkTemplateRequest&, const DeleteWaterMarkTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWaterMarkTemplateAsyncHandler;
			typedef Outcome<Error, Model::DescribeMtsUserResourcePackageResult> DescribeMtsUserResourcePackageOutcome;
			typedef std::future<DescribeMtsUserResourcePackageOutcome> DescribeMtsUserResourcePackageOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DescribeMtsUserResourcePackageRequest&, const DescribeMtsUserResourcePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMtsUserResourcePackageAsyncHandler;
			typedef Outcome<Error, Model::GetLicenseResult> GetLicenseOutcome;
			typedef std::future<GetLicenseOutcome> GetLicenseOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::GetLicenseRequest&, const GetLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLicenseAsyncHandler;
			typedef Outcome<Error, Model::GetPackageResult> GetPackageOutcome;
			typedef std::future<GetPackageOutcome> GetPackageOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::GetPackageRequest&, const GetPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPackageAsyncHandler;
			typedef Outcome<Error, Model::ListAllCategoryResult> ListAllCategoryOutcome;
			typedef std::future<ListAllCategoryOutcome> ListAllCategoryOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListAllCategoryRequest&, const ListAllCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllCategoryAsyncHandler;
			typedef Outcome<Error, Model::ListAllMediaBucketResult> ListAllMediaBucketOutcome;
			typedef std::future<ListAllMediaBucketOutcome> ListAllMediaBucketOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListAllMediaBucketRequest&, const ListAllMediaBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllMediaBucketAsyncHandler;
			typedef Outcome<Error, Model::ListAsrPipelineResult> ListAsrPipelineOutcome;
			typedef std::future<ListAsrPipelineOutcome> ListAsrPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListAsrPipelineRequest&, const ListAsrPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAsrPipelineAsyncHandler;
			typedef Outcome<Error, Model::ListCensorPipelineResult> ListCensorPipelineOutcome;
			typedef std::future<ListCensorPipelineOutcome> ListCensorPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListCensorPipelineRequest&, const ListCensorPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCensorPipelineAsyncHandler;
			typedef Outcome<Error, Model::ListCoverPipelineResult> ListCoverPipelineOutcome;
			typedef std::future<ListCoverPipelineOutcome> ListCoverPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListCoverPipelineRequest&, const ListCoverPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCoverPipelineAsyncHandler;
			typedef Outcome<Error, Model::ListJobResult> ListJobOutcome;
			typedef std::future<ListJobOutcome> ListJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListJobRequest&, const ListJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobAsyncHandler;
			typedef Outcome<Error, Model::ListMediaResult> ListMediaOutcome;
			typedef std::future<ListMediaOutcome> ListMediaOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListMediaRequest&, const ListMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMediaAsyncHandler;
			typedef Outcome<Error, Model::ListMediaWorkflowExecutionsResult> ListMediaWorkflowExecutionsOutcome;
			typedef std::future<ListMediaWorkflowExecutionsOutcome> ListMediaWorkflowExecutionsOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListMediaWorkflowExecutionsRequest&, const ListMediaWorkflowExecutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMediaWorkflowExecutionsAsyncHandler;
			typedef Outcome<Error, Model::ListPornPipelineResult> ListPornPipelineOutcome;
			typedef std::future<ListPornPipelineOutcome> ListPornPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListPornPipelineRequest&, const ListPornPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPornPipelineAsyncHandler;
			typedef Outcome<Error, Model::ListTerrorismPipelineResult> ListTerrorismPipelineOutcome;
			typedef std::future<ListTerrorismPipelineOutcome> ListTerrorismPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListTerrorismPipelineRequest&, const ListTerrorismPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTerrorismPipelineAsyncHandler;
			typedef Outcome<Error, Model::LogicalDeleteResourceResult> LogicalDeleteResourceOutcome;
			typedef std::future<LogicalDeleteResourceOutcome> LogicalDeleteResourceOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::LogicalDeleteResourceRequest&, const LogicalDeleteResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LogicalDeleteResourceAsyncHandler;
			typedef Outcome<Error, Model::PhysicalDeleteResourceResult> PhysicalDeleteResourceOutcome;
			typedef std::future<PhysicalDeleteResourceOutcome> PhysicalDeleteResourceOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::PhysicalDeleteResourceRequest&, const PhysicalDeleteResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PhysicalDeleteResourceAsyncHandler;
			typedef Outcome<Error, Model::PlayInfoResult> PlayInfoOutcome;
			typedef std::future<PlayInfoOutcome> PlayInfoOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::PlayInfoRequest&, const PlayInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PlayInfoAsyncHandler;
			typedef Outcome<Error, Model::PlayerAuthResult> PlayerAuthOutcome;
			typedef std::future<PlayerAuthOutcome> PlayerAuthOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::PlayerAuthRequest&, const PlayerAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PlayerAuthAsyncHandler;
			typedef Outcome<Error, Model::QueryAnalysisJobListResult> QueryAnalysisJobListOutcome;
			typedef std::future<QueryAnalysisJobListOutcome> QueryAnalysisJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryAnalysisJobListRequest&, const QueryAnalysisJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAnalysisJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryAnnotationJobListResult> QueryAnnotationJobListOutcome;
			typedef std::future<QueryAnnotationJobListOutcome> QueryAnnotationJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryAnnotationJobListRequest&, const QueryAnnotationJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAnnotationJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryAsrJobListResult> QueryAsrJobListOutcome;
			typedef std::future<QueryAsrJobListOutcome> QueryAsrJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryAsrJobListRequest&, const QueryAsrJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAsrJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryAsrPipelineListResult> QueryAsrPipelineListOutcome;
			typedef std::future<QueryAsrPipelineListOutcome> QueryAsrPipelineListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryAsrPipelineListRequest&, const QueryAsrPipelineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAsrPipelineListAsyncHandler;
			typedef Outcome<Error, Model::QueryAuthConfigResult> QueryAuthConfigOutcome;
			typedef std::future<QueryAuthConfigOutcome> QueryAuthConfigOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryAuthConfigRequest&, const QueryAuthConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAuthConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryCensorJobListResult> QueryCensorJobListOutcome;
			typedef std::future<QueryCensorJobListOutcome> QueryCensorJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryCensorJobListRequest&, const QueryCensorJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCensorJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryCensorPipelineListResult> QueryCensorPipelineListOutcome;
			typedef std::future<QueryCensorPipelineListOutcome> QueryCensorPipelineListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryCensorPipelineListRequest&, const QueryCensorPipelineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCensorPipelineListAsyncHandler;
			typedef Outcome<Error, Model::QueryComplexJobListResult> QueryComplexJobListOutcome;
			typedef std::future<QueryComplexJobListOutcome> QueryComplexJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryComplexJobListRequest&, const QueryComplexJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryComplexJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryCoverJobListResult> QueryCoverJobListOutcome;
			typedef std::future<QueryCoverJobListOutcome> QueryCoverJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryCoverJobListRequest&, const QueryCoverJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCoverJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryCoverPipelineListResult> QueryCoverPipelineListOutcome;
			typedef std::future<QueryCoverPipelineListOutcome> QueryCoverPipelineListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryCoverPipelineListRequest&, const QueryCoverPipelineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCoverPipelineListAsyncHandler;
			typedef Outcome<Error, Model::QueryEditingJobListResult> QueryEditingJobListOutcome;
			typedef std::future<QueryEditingJobListOutcome> QueryEditingJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryEditingJobListRequest&, const QueryEditingJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEditingJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryFacerecogJobListResult> QueryFacerecogJobListOutcome;
			typedef std::future<QueryFacerecogJobListOutcome> QueryFacerecogJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryFacerecogJobListRequest&, const QueryFacerecogJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFacerecogJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryFpCompareJobListResult> QueryFpCompareJobListOutcome;
			typedef std::future<QueryFpCompareJobListOutcome> QueryFpCompareJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryFpCompareJobListRequest&, const QueryFpCompareJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFpCompareJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryFpImportResultResult> QueryFpImportResultOutcome;
			typedef std::future<QueryFpImportResultOutcome> QueryFpImportResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryFpImportResultRequest&, const QueryFpImportResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFpImportResultAsyncHandler;
			typedef Outcome<Error, Model::QueryFpShotJobListResult> QueryFpShotJobListOutcome;
			typedef std::future<QueryFpShotJobListOutcome> QueryFpShotJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryFpShotJobListRequest&, const QueryFpShotJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFpShotJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryImageSearchJobListResult> QueryImageSearchJobListOutcome;
			typedef std::future<QueryImageSearchJobListOutcome> QueryImageSearchJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryImageSearchJobListRequest&, const QueryImageSearchJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryImageSearchJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryJobListResult> QueryJobListOutcome;
			typedef std::future<QueryJobListOutcome> QueryJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryJobListRequest&, const QueryJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryMCJobListResult> QueryMCJobListOutcome;
			typedef std::future<QueryMCJobListOutcome> QueryMCJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMCJobListRequest&, const QueryMCJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMCJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryMCTemplateListResult> QueryMCTemplateListOutcome;
			typedef std::future<QueryMCTemplateListOutcome> QueryMCTemplateListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMCTemplateListRequest&, const QueryMCTemplateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMCTemplateListAsyncHandler;
			typedef Outcome<Error, Model::QueryMcuJobResult> QueryMcuJobOutcome;
			typedef std::future<QueryMcuJobOutcome> QueryMcuJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMcuJobRequest&, const QueryMcuJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMcuJobAsyncHandler;
			typedef Outcome<Error, Model::QueryMcuTemplateResult> QueryMcuTemplateOutcome;
			typedef std::future<QueryMcuTemplateOutcome> QueryMcuTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMcuTemplateRequest&, const QueryMcuTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMcuTemplateAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaCensorJobDetailResult> QueryMediaCensorJobDetailOutcome;
			typedef std::future<QueryMediaCensorJobDetailOutcome> QueryMediaCensorJobDetailOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaCensorJobDetailRequest&, const QueryMediaCensorJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaCensorJobDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaCensorJobListResult> QueryMediaCensorJobListOutcome;
			typedef std::future<QueryMediaCensorJobListOutcome> QueryMediaCensorJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaCensorJobListRequest&, const QueryMediaCensorJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaCensorJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaDetailJobListResult> QueryMediaDetailJobListOutcome;
			typedef std::future<QueryMediaDetailJobListOutcome> QueryMediaDetailJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaDetailJobListRequest&, const QueryMediaDetailJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaDetailJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaFpDeleteJobListResult> QueryMediaFpDeleteJobListOutcome;
			typedef std::future<QueryMediaFpDeleteJobListOutcome> QueryMediaFpDeleteJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaFpDeleteJobListRequest&, const QueryMediaFpDeleteJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaFpDeleteJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaInfoJobListResult> QueryMediaInfoJobListOutcome;
			typedef std::future<QueryMediaInfoJobListOutcome> QueryMediaInfoJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaInfoJobListRequest&, const QueryMediaInfoJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaInfoJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaListResult> QueryMediaListOutcome;
			typedef std::future<QueryMediaListOutcome> QueryMediaListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaListRequest&, const QueryMediaListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaListAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaListByURLResult> QueryMediaListByURLOutcome;
			typedef std::future<QueryMediaListByURLOutcome> QueryMediaListByURLOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaListByURLRequest&, const QueryMediaListByURLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaListByURLAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaWorkflowExecutionListResult> QueryMediaWorkflowExecutionListOutcome;
			typedef std::future<QueryMediaWorkflowExecutionListOutcome> QueryMediaWorkflowExecutionListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaWorkflowExecutionListRequest&, const QueryMediaWorkflowExecutionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaWorkflowExecutionListAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaWorkflowListResult> QueryMediaWorkflowListOutcome;
			typedef std::future<QueryMediaWorkflowListOutcome> QueryMediaWorkflowListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaWorkflowListRequest&, const QueryMediaWorkflowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaWorkflowListAsyncHandler;
			typedef Outcome<Error, Model::QueryPipelineListResult> QueryPipelineListOutcome;
			typedef std::future<QueryPipelineListOutcome> QueryPipelineListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryPipelineListRequest&, const QueryPipelineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPipelineListAsyncHandler;
			typedef Outcome<Error, Model::QueryPornJobListResult> QueryPornJobListOutcome;
			typedef std::future<QueryPornJobListOutcome> QueryPornJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryPornJobListRequest&, const QueryPornJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPornJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryPornPipelineListResult> QueryPornPipelineListOutcome;
			typedef std::future<QueryPornPipelineListOutcome> QueryPornPipelineListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryPornPipelineListRequest&, const QueryPornPipelineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPornPipelineListAsyncHandler;
			typedef Outcome<Error, Model::QuerySnapshotJobListResult> QuerySnapshotJobListOutcome;
			typedef std::future<QuerySnapshotJobListOutcome> QuerySnapshotJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QuerySnapshotJobListRequest&, const QuerySnapshotJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySnapshotJobListAsyncHandler;
			typedef Outcome<Error, Model::QuerySubtitleJobListResult> QuerySubtitleJobListOutcome;
			typedef std::future<QuerySubtitleJobListOutcome> QuerySubtitleJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QuerySubtitleJobListRequest&, const QuerySubtitleJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySubtitleJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryTagJobListResult> QueryTagJobListOutcome;
			typedef std::future<QueryTagJobListOutcome> QueryTagJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryTagJobListRequest&, const QueryTagJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTagJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryTemplateListResult> QueryTemplateListOutcome;
			typedef std::future<QueryTemplateListOutcome> QueryTemplateListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryTemplateListRequest&, const QueryTemplateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTemplateListAsyncHandler;
			typedef Outcome<Error, Model::QueryTerrorismJobListResult> QueryTerrorismJobListOutcome;
			typedef std::future<QueryTerrorismJobListOutcome> QueryTerrorismJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryTerrorismJobListRequest&, const QueryTerrorismJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTerrorismJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryTerrorismPipelineListResult> QueryTerrorismPipelineListOutcome;
			typedef std::future<QueryTerrorismPipelineListOutcome> QueryTerrorismPipelineListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryTerrorismPipelineListRequest&, const QueryTerrorismPipelineListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTerrorismPipelineListAsyncHandler;
			typedef Outcome<Error, Model::QueryVideoGifJobListResult> QueryVideoGifJobListOutcome;
			typedef std::future<QueryVideoGifJobListOutcome> QueryVideoGifJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryVideoGifJobListRequest&, const QueryVideoGifJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryVideoGifJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryVideoPoseJobListResult> QueryVideoPoseJobListOutcome;
			typedef std::future<QueryVideoPoseJobListOutcome> QueryVideoPoseJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryVideoPoseJobListRequest&, const QueryVideoPoseJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryVideoPoseJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryVideoSplitJobListResult> QueryVideoSplitJobListOutcome;
			typedef std::future<QueryVideoSplitJobListOutcome> QueryVideoSplitJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryVideoSplitJobListRequest&, const QueryVideoSplitJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryVideoSplitJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryVideoSummaryJobListResult> QueryVideoSummaryJobListOutcome;
			typedef std::future<QueryVideoSummaryJobListOutcome> QueryVideoSummaryJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryVideoSummaryJobListRequest&, const QueryVideoSummaryJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryVideoSummaryJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryWaterMarkTemplateListResult> QueryWaterMarkTemplateListOutcome;
			typedef std::future<QueryWaterMarkTemplateListOutcome> QueryWaterMarkTemplateListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryWaterMarkTemplateListRequest&, const QueryWaterMarkTemplateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryWaterMarkTemplateListAsyncHandler;
			typedef Outcome<Error, Model::RefreshCdnDomainConfigsCacheResult> RefreshCdnDomainConfigsCacheOutcome;
			typedef std::future<RefreshCdnDomainConfigsCacheOutcome> RefreshCdnDomainConfigsCacheOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::RefreshCdnDomainConfigsCacheRequest&, const RefreshCdnDomainConfigsCacheOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshCdnDomainConfigsCacheAsyncHandler;
			typedef Outcome<Error, Model::RegisterMediaDetailPersonResult> RegisterMediaDetailPersonOutcome;
			typedef std::future<RegisterMediaDetailPersonOutcome> RegisterMediaDetailPersonOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::RegisterMediaDetailPersonRequest&, const RegisterMediaDetailPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterMediaDetailPersonAsyncHandler;
			typedef Outcome<Error, Model::RegisterMediaDetailScenarioResult> RegisterMediaDetailScenarioOutcome;
			typedef std::future<RegisterMediaDetailScenarioOutcome> RegisterMediaDetailScenarioOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::RegisterMediaDetailScenarioRequest&, const RegisterMediaDetailScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterMediaDetailScenarioAsyncHandler;
			typedef Outcome<Error, Model::ReportAnnotationJobResultResult> ReportAnnotationJobResultOutcome;
			typedef std::future<ReportAnnotationJobResultOutcome> ReportAnnotationJobResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ReportAnnotationJobResultRequest&, const ReportAnnotationJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportAnnotationJobResultAsyncHandler;
			typedef Outcome<Error, Model::ReportCensorJobResultResult> ReportCensorJobResultOutcome;
			typedef std::future<ReportCensorJobResultOutcome> ReportCensorJobResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ReportCensorJobResultRequest&, const ReportCensorJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportCensorJobResultAsyncHandler;
			typedef Outcome<Error, Model::ReportCoverJobResultResult> ReportCoverJobResultOutcome;
			typedef std::future<ReportCoverJobResultOutcome> ReportCoverJobResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ReportCoverJobResultRequest&, const ReportCoverJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportCoverJobResultAsyncHandler;
			typedef Outcome<Error, Model::ReportFacerecogJobResultResult> ReportFacerecogJobResultOutcome;
			typedef std::future<ReportFacerecogJobResultOutcome> ReportFacerecogJobResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ReportFacerecogJobResultRequest&, const ReportFacerecogJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportFacerecogJobResultAsyncHandler;
			typedef Outcome<Error, Model::ReportFpShotJobResultResult> ReportFpShotJobResultOutcome;
			typedef std::future<ReportFpShotJobResultOutcome> ReportFpShotJobResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ReportFpShotJobResultRequest&, const ReportFpShotJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportFpShotJobResultAsyncHandler;
			typedef Outcome<Error, Model::ReportMediaDetailJobResultResult> ReportMediaDetailJobResultOutcome;
			typedef std::future<ReportMediaDetailJobResultOutcome> ReportMediaDetailJobResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ReportMediaDetailJobResultRequest&, const ReportMediaDetailJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportMediaDetailJobResultAsyncHandler;
			typedef Outcome<Error, Model::ReportPornJobResultResult> ReportPornJobResultOutcome;
			typedef std::future<ReportPornJobResultOutcome> ReportPornJobResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ReportPornJobResultRequest&, const ReportPornJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportPornJobResultAsyncHandler;
			typedef Outcome<Error, Model::ReportTagJobResultResult> ReportTagJobResultOutcome;
			typedef std::future<ReportTagJobResultOutcome> ReportTagJobResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ReportTagJobResultRequest&, const ReportTagJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportTagJobResultAsyncHandler;
			typedef Outcome<Error, Model::ReportTerrorismJobResultResult> ReportTerrorismJobResultOutcome;
			typedef std::future<ReportTerrorismJobResultOutcome> ReportTerrorismJobResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ReportTerrorismJobResultRequest&, const ReportTerrorismJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportTerrorismJobResultAsyncHandler;
			typedef Outcome<Error, Model::ReportVideoSplitJobResultResult> ReportVideoSplitJobResultOutcome;
			typedef std::future<ReportVideoSplitJobResultOutcome> ReportVideoSplitJobResultOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ReportVideoSplitJobResultRequest&, const ReportVideoSplitJobResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportVideoSplitJobResultAsyncHandler;
			typedef Outcome<Error, Model::SearchMediaResult> SearchMediaOutcome;
			typedef std::future<SearchMediaOutcome> SearchMediaOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SearchMediaRequest&, const SearchMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaAsyncHandler;
			typedef Outcome<Error, Model::SearchMediaWorkflowResult> SearchMediaWorkflowOutcome;
			typedef std::future<SearchMediaWorkflowOutcome> SearchMediaWorkflowOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SearchMediaWorkflowRequest&, const SearchMediaWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchMediaWorkflowAsyncHandler;
			typedef Outcome<Error, Model::SearchPipelineResult> SearchPipelineOutcome;
			typedef std::future<SearchPipelineOutcome> SearchPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SearchPipelineRequest&, const SearchPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchPipelineAsyncHandler;
			typedef Outcome<Error, Model::SearchTemplateResult> SearchTemplateOutcome;
			typedef std::future<SearchTemplateOutcome> SearchTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SearchTemplateRequest&, const SearchTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTemplateAsyncHandler;
			typedef Outcome<Error, Model::SearchWaterMarkTemplateResult> SearchWaterMarkTemplateOutcome;
			typedef std::future<SearchWaterMarkTemplateOutcome> SearchWaterMarkTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SearchWaterMarkTemplateRequest&, const SearchWaterMarkTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchWaterMarkTemplateAsyncHandler;
			typedef Outcome<Error, Model::SetAuthConfigResult> SetAuthConfigOutcome;
			typedef std::future<SetAuthConfigOutcome> SetAuthConfigOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SetAuthConfigRequest&, const SetAuthConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAuthConfigAsyncHandler;
			typedef Outcome<Error, Model::SubmitAnalysisJobResult> SubmitAnalysisJobOutcome;
			typedef std::future<SubmitAnalysisJobOutcome> SubmitAnalysisJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitAnalysisJobRequest&, const SubmitAnalysisJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAnalysisJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitAnnotationJobResult> SubmitAnnotationJobOutcome;
			typedef std::future<SubmitAnnotationJobOutcome> SubmitAnnotationJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitAnnotationJobRequest&, const SubmitAnnotationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAnnotationJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitAsrJobResult> SubmitAsrJobOutcome;
			typedef std::future<SubmitAsrJobOutcome> SubmitAsrJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitAsrJobRequest&, const SubmitAsrJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAsrJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitBeautifyJobsResult> SubmitBeautifyJobsOutcome;
			typedef std::future<SubmitBeautifyJobsOutcome> SubmitBeautifyJobsOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitBeautifyJobsRequest&, const SubmitBeautifyJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitBeautifyJobsAsyncHandler;
			typedef Outcome<Error, Model::SubmitComplexJobResult> SubmitComplexJobOutcome;
			typedef std::future<SubmitComplexJobOutcome> SubmitComplexJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitComplexJobRequest&, const SubmitComplexJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitComplexJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitCoverJobResult> SubmitCoverJobOutcome;
			typedef std::future<SubmitCoverJobOutcome> SubmitCoverJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitCoverJobRequest&, const SubmitCoverJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCoverJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitEditingJobsResult> SubmitEditingJobsOutcome;
			typedef std::future<SubmitEditingJobsOutcome> SubmitEditingJobsOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitEditingJobsRequest&, const SubmitEditingJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitEditingJobsAsyncHandler;
			typedef Outcome<Error, Model::SubmitFacerecogJobResult> SubmitFacerecogJobOutcome;
			typedef std::future<SubmitFacerecogJobOutcome> SubmitFacerecogJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitFacerecogJobRequest&, const SubmitFacerecogJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFacerecogJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitFpCompareJobResult> SubmitFpCompareJobOutcome;
			typedef std::future<SubmitFpCompareJobOutcome> SubmitFpCompareJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitFpCompareJobRequest&, const SubmitFpCompareJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFpCompareJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitFpShotJobResult> SubmitFpShotJobOutcome;
			typedef std::future<SubmitFpShotJobOutcome> SubmitFpShotJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitFpShotJobRequest&, const SubmitFpShotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFpShotJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitImageQualityJobResult> SubmitImageQualityJobOutcome;
			typedef std::future<SubmitImageQualityJobOutcome> SubmitImageQualityJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitImageQualityJobRequest&, const SubmitImageQualityJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageQualityJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitImageSearchJobResult> SubmitImageSearchJobOutcome;
			typedef std::future<SubmitImageSearchJobOutcome> SubmitImageSearchJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitImageSearchJobRequest&, const SubmitImageSearchJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageSearchJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitJobsResult> SubmitJobsOutcome;
			typedef std::future<SubmitJobsOutcome> SubmitJobsOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitJobsRequest&, const SubmitJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitJobsAsyncHandler;
			typedef Outcome<Error, Model::SubmitMCJobResult> SubmitMCJobOutcome;
			typedef std::future<SubmitMCJobOutcome> SubmitMCJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitMCJobRequest&, const SubmitMCJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMCJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitMcuJobResult> SubmitMcuJobOutcome;
			typedef std::future<SubmitMcuJobOutcome> SubmitMcuJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitMcuJobRequest&, const SubmitMcuJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMcuJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitMediaCensorJobResult> SubmitMediaCensorJobOutcome;
			typedef std::future<SubmitMediaCensorJobOutcome> SubmitMediaCensorJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitMediaCensorJobRequest&, const SubmitMediaCensorJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMediaCensorJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitMediaDetailJobResult> SubmitMediaDetailJobOutcome;
			typedef std::future<SubmitMediaDetailJobOutcome> SubmitMediaDetailJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitMediaDetailJobRequest&, const SubmitMediaDetailJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMediaDetailJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitMediaFpDeleteJobResult> SubmitMediaFpDeleteJobOutcome;
			typedef std::future<SubmitMediaFpDeleteJobOutcome> SubmitMediaFpDeleteJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitMediaFpDeleteJobRequest&, const SubmitMediaFpDeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMediaFpDeleteJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitMediaInfoJobResult> SubmitMediaInfoJobOutcome;
			typedef std::future<SubmitMediaInfoJobOutcome> SubmitMediaInfoJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitMediaInfoJobRequest&, const SubmitMediaInfoJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMediaInfoJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitPornJobResult> SubmitPornJobOutcome;
			typedef std::future<SubmitPornJobOutcome> SubmitPornJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitPornJobRequest&, const SubmitPornJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitPornJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitSnapshotJobResult> SubmitSnapshotJobOutcome;
			typedef std::future<SubmitSnapshotJobOutcome> SubmitSnapshotJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitSnapshotJobRequest&, const SubmitSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitSubtitleJobResult> SubmitSubtitleJobOutcome;
			typedef std::future<SubmitSubtitleJobOutcome> SubmitSubtitleJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitSubtitleJobRequest&, const SubmitSubtitleJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSubtitleJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitTagJobResult> SubmitTagJobOutcome;
			typedef std::future<SubmitTagJobOutcome> SubmitTagJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitTagJobRequest&, const SubmitTagJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTagJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitTerrorismJobResult> SubmitTerrorismJobOutcome;
			typedef std::future<SubmitTerrorismJobOutcome> SubmitTerrorismJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitTerrorismJobRequest&, const SubmitTerrorismJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTerrorismJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitVideoGifJobResult> SubmitVideoGifJobOutcome;
			typedef std::future<SubmitVideoGifJobOutcome> SubmitVideoGifJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitVideoGifJobRequest&, const SubmitVideoGifJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoGifJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitVideoPoseJobResult> SubmitVideoPoseJobOutcome;
			typedef std::future<SubmitVideoPoseJobOutcome> SubmitVideoPoseJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitVideoPoseJobRequest&, const SubmitVideoPoseJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoPoseJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitVideoSplitJobResult> SubmitVideoSplitJobOutcome;
			typedef std::future<SubmitVideoSplitJobOutcome> SubmitVideoSplitJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitVideoSplitJobRequest&, const SubmitVideoSplitJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoSplitJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitVideoSummaryJobResult> SubmitVideoSummaryJobOutcome;
			typedef std::future<SubmitVideoSummaryJobOutcome> SubmitVideoSummaryJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitVideoSummaryJobRequest&, const SubmitVideoSummaryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitVideoSummaryJobAsyncHandler;
			typedef Outcome<Error, Model::UnbindInputBucketResult> UnbindInputBucketOutcome;
			typedef std::future<UnbindInputBucketOutcome> UnbindInputBucketOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UnbindInputBucketRequest&, const UnbindInputBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindInputBucketAsyncHandler;
			typedef Outcome<Error, Model::UnbindOutputBucketResult> UnbindOutputBucketOutcome;
			typedef std::future<UnbindOutputBucketOutcome> UnbindOutputBucketOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UnbindOutputBucketRequest&, const UnbindOutputBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindOutputBucketAsyncHandler;
			typedef Outcome<Error, Model::UpdateAsrPipelineResult> UpdateAsrPipelineOutcome;
			typedef std::future<UpdateAsrPipelineOutcome> UpdateAsrPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateAsrPipelineRequest&, const UpdateAsrPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAsrPipelineAsyncHandler;
			typedef Outcome<Error, Model::UpdateCategoryNameResult> UpdateCategoryNameOutcome;
			typedef std::future<UpdateCategoryNameOutcome> UpdateCategoryNameOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateCategoryNameRequest&, const UpdateCategoryNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCategoryNameAsyncHandler;
			typedef Outcome<Error, Model::UpdateCensorPipelineResult> UpdateCensorPipelineOutcome;
			typedef std::future<UpdateCensorPipelineOutcome> UpdateCensorPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateCensorPipelineRequest&, const UpdateCensorPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCensorPipelineAsyncHandler;
			typedef Outcome<Error, Model::UpdateCoverPipelineResult> UpdateCoverPipelineOutcome;
			typedef std::future<UpdateCoverPipelineOutcome> UpdateCoverPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateCoverPipelineRequest&, const UpdateCoverPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCoverPipelineAsyncHandler;
			typedef Outcome<Error, Model::UpdateMCTemplateResult> UpdateMCTemplateOutcome;
			typedef std::future<UpdateMCTemplateOutcome> UpdateMCTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateMCTemplateRequest&, const UpdateMCTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMCTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateMcuTemplateResult> UpdateMcuTemplateOutcome;
			typedef std::future<UpdateMcuTemplateOutcome> UpdateMcuTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateMcuTemplateRequest&, const UpdateMcuTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMcuTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateMediaResult> UpdateMediaOutcome;
			typedef std::future<UpdateMediaOutcome> UpdateMediaOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateMediaRequest&, const UpdateMediaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMediaAsyncHandler;
			typedef Outcome<Error, Model::UpdateMediaCategoryResult> UpdateMediaCategoryOutcome;
			typedef std::future<UpdateMediaCategoryOutcome> UpdateMediaCategoryOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateMediaCategoryRequest&, const UpdateMediaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMediaCategoryAsyncHandler;
			typedef Outcome<Error, Model::UpdateMediaCoverResult> UpdateMediaCoverOutcome;
			typedef std::future<UpdateMediaCoverOutcome> UpdateMediaCoverOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateMediaCoverRequest&, const UpdateMediaCoverOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMediaCoverAsyncHandler;
			typedef Outcome<Error, Model::UpdateMediaPublishStateResult> UpdateMediaPublishStateOutcome;
			typedef std::future<UpdateMediaPublishStateOutcome> UpdateMediaPublishStateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateMediaPublishStateRequest&, const UpdateMediaPublishStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMediaPublishStateAsyncHandler;
			typedef Outcome<Error, Model::UpdateMediaWorkflowResult> UpdateMediaWorkflowOutcome;
			typedef std::future<UpdateMediaWorkflowOutcome> UpdateMediaWorkflowOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateMediaWorkflowRequest&, const UpdateMediaWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMediaWorkflowAsyncHandler;
			typedef Outcome<Error, Model::UpdateMediaWorkflowTriggerModeResult> UpdateMediaWorkflowTriggerModeOutcome;
			typedef std::future<UpdateMediaWorkflowTriggerModeOutcome> UpdateMediaWorkflowTriggerModeOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateMediaWorkflowTriggerModeRequest&, const UpdateMediaWorkflowTriggerModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMediaWorkflowTriggerModeAsyncHandler;
			typedef Outcome<Error, Model::UpdatePipelineResult> UpdatePipelineOutcome;
			typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdatePipelineRequest&, const UpdatePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePipelineAsyncHandler;
			typedef Outcome<Error, Model::UpdatePornPipelineResult> UpdatePornPipelineOutcome;
			typedef std::future<UpdatePornPipelineOutcome> UpdatePornPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdatePornPipelineRequest&, const UpdatePornPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePornPipelineAsyncHandler;
			typedef Outcome<Error, Model::UpdateTemplateResult> UpdateTemplateOutcome;
			typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateTemplateRequest&, const UpdateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateTerrorismPipelineResult> UpdateTerrorismPipelineOutcome;
			typedef std::future<UpdateTerrorismPipelineOutcome> UpdateTerrorismPipelineOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateTerrorismPipelineRequest&, const UpdateTerrorismPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTerrorismPipelineAsyncHandler;
			typedef Outcome<Error, Model::UpdateWaterMarkTemplateResult> UpdateWaterMarkTemplateOutcome;
			typedef std::future<UpdateWaterMarkTemplateOutcome> UpdateWaterMarkTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateWaterMarkTemplateRequest&, const UpdateWaterMarkTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWaterMarkTemplateAsyncHandler;

			MtsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			MtsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			MtsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~MtsClient();
			ActivateMediaWorkflowOutcome activateMediaWorkflow(const Model::ActivateMediaWorkflowRequest &request)const;
			void activateMediaWorkflowAsync(const Model::ActivateMediaWorkflowRequest& request, const ActivateMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateMediaWorkflowOutcomeCallable activateMediaWorkflowCallable(const Model::ActivateMediaWorkflowRequest& request) const;
			AddAsrPipelineOutcome addAsrPipeline(const Model::AddAsrPipelineRequest &request)const;
			void addAsrPipelineAsync(const Model::AddAsrPipelineRequest& request, const AddAsrPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAsrPipelineOutcomeCallable addAsrPipelineCallable(const Model::AddAsrPipelineRequest& request) const;
			AddCategoryOutcome addCategory(const Model::AddCategoryRequest &request)const;
			void addCategoryAsync(const Model::AddCategoryRequest& request, const AddCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCategoryOutcomeCallable addCategoryCallable(const Model::AddCategoryRequest& request) const;
			AddCensorPipelineOutcome addCensorPipeline(const Model::AddCensorPipelineRequest &request)const;
			void addCensorPipelineAsync(const Model::AddCensorPipelineRequest& request, const AddCensorPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCensorPipelineOutcomeCallable addCensorPipelineCallable(const Model::AddCensorPipelineRequest& request) const;
			AddCoverPipelineOutcome addCoverPipeline(const Model::AddCoverPipelineRequest &request)const;
			void addCoverPipelineAsync(const Model::AddCoverPipelineRequest& request, const AddCoverPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCoverPipelineOutcomeCallable addCoverPipelineCallable(const Model::AddCoverPipelineRequest& request) const;
			AddMCTemplateOutcome addMCTemplate(const Model::AddMCTemplateRequest &request)const;
			void addMCTemplateAsync(const Model::AddMCTemplateRequest& request, const AddMCTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMCTemplateOutcomeCallable addMCTemplateCallable(const Model::AddMCTemplateRequest& request) const;
			AddMediaOutcome addMedia(const Model::AddMediaRequest &request)const;
			void addMediaAsync(const Model::AddMediaRequest& request, const AddMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMediaOutcomeCallable addMediaCallable(const Model::AddMediaRequest& request) const;
			AddMediaTagOutcome addMediaTag(const Model::AddMediaTagRequest &request)const;
			void addMediaTagAsync(const Model::AddMediaTagRequest& request, const AddMediaTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMediaTagOutcomeCallable addMediaTagCallable(const Model::AddMediaTagRequest& request) const;
			AddMediaWorkflowOutcome addMediaWorkflow(const Model::AddMediaWorkflowRequest &request)const;
			void addMediaWorkflowAsync(const Model::AddMediaWorkflowRequest& request, const AddMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMediaWorkflowOutcomeCallable addMediaWorkflowCallable(const Model::AddMediaWorkflowRequest& request) const;
			AddPipelineOutcome addPipeline(const Model::AddPipelineRequest &request)const;
			void addPipelineAsync(const Model::AddPipelineRequest& request, const AddPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPipelineOutcomeCallable addPipelineCallable(const Model::AddPipelineRequest& request) const;
			AddPornPipelineOutcome addPornPipeline(const Model::AddPornPipelineRequest &request)const;
			void addPornPipelineAsync(const Model::AddPornPipelineRequest& request, const AddPornPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPornPipelineOutcomeCallable addPornPipelineCallable(const Model::AddPornPipelineRequest& request) const;
			AddTemplateOutcome addTemplate(const Model::AddTemplateRequest &request)const;
			void addTemplateAsync(const Model::AddTemplateRequest& request, const AddTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTemplateOutcomeCallable addTemplateCallable(const Model::AddTemplateRequest& request) const;
			AddTerrorismPipelineOutcome addTerrorismPipeline(const Model::AddTerrorismPipelineRequest &request)const;
			void addTerrorismPipelineAsync(const Model::AddTerrorismPipelineRequest& request, const AddTerrorismPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTerrorismPipelineOutcomeCallable addTerrorismPipelineCallable(const Model::AddTerrorismPipelineRequest& request) const;
			AddWaterMarkTemplateOutcome addWaterMarkTemplate(const Model::AddWaterMarkTemplateRequest &request)const;
			void addWaterMarkTemplateAsync(const Model::AddWaterMarkTemplateRequest& request, const AddWaterMarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddWaterMarkTemplateOutcomeCallable addWaterMarkTemplateCallable(const Model::AddWaterMarkTemplateRequest& request) const;
			BindInputBucketOutcome bindInputBucket(const Model::BindInputBucketRequest &request)const;
			void bindInputBucketAsync(const Model::BindInputBucketRequest& request, const BindInputBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindInputBucketOutcomeCallable bindInputBucketCallable(const Model::BindInputBucketRequest& request) const;
			BindOutputBucketOutcome bindOutputBucket(const Model::BindOutputBucketRequest &request)const;
			void bindOutputBucketAsync(const Model::BindOutputBucketRequest& request, const BindOutputBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindOutputBucketOutcomeCallable bindOutputBucketCallable(const Model::BindOutputBucketRequest& request) const;
			CancelJobOutcome cancelJob(const Model::CancelJobRequest &request)const;
			void cancelJobAsync(const Model::CancelJobRequest& request, const CancelJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelJobOutcomeCallable cancelJobCallable(const Model::CancelJobRequest& request) const;
			CategoryTreeOutcome categoryTree(const Model::CategoryTreeRequest &request)const;
			void categoryTreeAsync(const Model::CategoryTreeRequest& request, const CategoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CategoryTreeOutcomeCallable categoryTreeCallable(const Model::CategoryTreeRequest& request) const;
			CheckResourceOutcome checkResource(const Model::CheckResourceRequest &request)const;
			void checkResourceAsync(const Model::CheckResourceRequest& request, const CheckResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckResourceOutcomeCallable checkResourceCallable(const Model::CheckResourceRequest& request) const;
			CreateMcuTemplateOutcome createMcuTemplate(const Model::CreateMcuTemplateRequest &request)const;
			void createMcuTemplateAsync(const Model::CreateMcuTemplateRequest& request, const CreateMcuTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMcuTemplateOutcomeCallable createMcuTemplateCallable(const Model::CreateMcuTemplateRequest& request) const;
			CreateSessionOutcome createSession(const Model::CreateSessionRequest &request)const;
			void createSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSessionOutcomeCallable createSessionCallable(const Model::CreateSessionRequest& request) const;
			DeactivateMediaWorkflowOutcome deactivateMediaWorkflow(const Model::DeactivateMediaWorkflowRequest &request)const;
			void deactivateMediaWorkflowAsync(const Model::DeactivateMediaWorkflowRequest& request, const DeactivateMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactivateMediaWorkflowOutcomeCallable deactivateMediaWorkflowCallable(const Model::DeactivateMediaWorkflowRequest& request) const;
			DecryptKeyOutcome decryptKey(const Model::DecryptKeyRequest &request)const;
			void decryptKeyAsync(const Model::DecryptKeyRequest& request, const DecryptKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecryptKeyOutcomeCallable decryptKeyCallable(const Model::DecryptKeyRequest& request) const;
			DeleteCategoryOutcome deleteCategory(const Model::DeleteCategoryRequest &request)const;
			void deleteCategoryAsync(const Model::DeleteCategoryRequest& request, const DeleteCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCategoryOutcomeCallable deleteCategoryCallable(const Model::DeleteCategoryRequest& request) const;
			DeleteMCTemplateOutcome deleteMCTemplate(const Model::DeleteMCTemplateRequest &request)const;
			void deleteMCTemplateAsync(const Model::DeleteMCTemplateRequest& request, const DeleteMCTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMCTemplateOutcomeCallable deleteMCTemplateCallable(const Model::DeleteMCTemplateRequest& request) const;
			DeleteMcuJobOutcome deleteMcuJob(const Model::DeleteMcuJobRequest &request)const;
			void deleteMcuJobAsync(const Model::DeleteMcuJobRequest& request, const DeleteMcuJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMcuJobOutcomeCallable deleteMcuJobCallable(const Model::DeleteMcuJobRequest& request) const;
			DeleteMcuTemplateOutcome deleteMcuTemplate(const Model::DeleteMcuTemplateRequest &request)const;
			void deleteMcuTemplateAsync(const Model::DeleteMcuTemplateRequest& request, const DeleteMcuTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMcuTemplateOutcomeCallable deleteMcuTemplateCallable(const Model::DeleteMcuTemplateRequest& request) const;
			DeleteMediaOutcome deleteMedia(const Model::DeleteMediaRequest &request)const;
			void deleteMediaAsync(const Model::DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMediaOutcomeCallable deleteMediaCallable(const Model::DeleteMediaRequest& request) const;
			DeleteMediaTagOutcome deleteMediaTag(const Model::DeleteMediaTagRequest &request)const;
			void deleteMediaTagAsync(const Model::DeleteMediaTagRequest& request, const DeleteMediaTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMediaTagOutcomeCallable deleteMediaTagCallable(const Model::DeleteMediaTagRequest& request) const;
			DeleteMediaWorkflowOutcome deleteMediaWorkflow(const Model::DeleteMediaWorkflowRequest &request)const;
			void deleteMediaWorkflowAsync(const Model::DeleteMediaWorkflowRequest& request, const DeleteMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMediaWorkflowOutcomeCallable deleteMediaWorkflowCallable(const Model::DeleteMediaWorkflowRequest& request) const;
			DeletePipelineOutcome deletePipeline(const Model::DeletePipelineRequest &request)const;
			void deletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePipelineOutcomeCallable deletePipelineCallable(const Model::DeletePipelineRequest& request) const;
			DeleteTemplateOutcome deleteTemplate(const Model::DeleteTemplateRequest &request)const;
			void deleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplateOutcomeCallable deleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;
			DeleteWaterMarkTemplateOutcome deleteWaterMarkTemplate(const Model::DeleteWaterMarkTemplateRequest &request)const;
			void deleteWaterMarkTemplateAsync(const Model::DeleteWaterMarkTemplateRequest& request, const DeleteWaterMarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWaterMarkTemplateOutcomeCallable deleteWaterMarkTemplateCallable(const Model::DeleteWaterMarkTemplateRequest& request) const;
			DescribeMtsUserResourcePackageOutcome describeMtsUserResourcePackage(const Model::DescribeMtsUserResourcePackageRequest &request)const;
			void describeMtsUserResourcePackageAsync(const Model::DescribeMtsUserResourcePackageRequest& request, const DescribeMtsUserResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMtsUserResourcePackageOutcomeCallable describeMtsUserResourcePackageCallable(const Model::DescribeMtsUserResourcePackageRequest& request) const;
			GetLicenseOutcome getLicense(const Model::GetLicenseRequest &request)const;
			void getLicenseAsync(const Model::GetLicenseRequest& request, const GetLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLicenseOutcomeCallable getLicenseCallable(const Model::GetLicenseRequest& request) const;
			GetPackageOutcome getPackage(const Model::GetPackageRequest &request)const;
			void getPackageAsync(const Model::GetPackageRequest& request, const GetPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPackageOutcomeCallable getPackageCallable(const Model::GetPackageRequest& request) const;
			ListAllCategoryOutcome listAllCategory(const Model::ListAllCategoryRequest &request)const;
			void listAllCategoryAsync(const Model::ListAllCategoryRequest& request, const ListAllCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllCategoryOutcomeCallable listAllCategoryCallable(const Model::ListAllCategoryRequest& request) const;
			ListAllMediaBucketOutcome listAllMediaBucket(const Model::ListAllMediaBucketRequest &request)const;
			void listAllMediaBucketAsync(const Model::ListAllMediaBucketRequest& request, const ListAllMediaBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllMediaBucketOutcomeCallable listAllMediaBucketCallable(const Model::ListAllMediaBucketRequest& request) const;
			ListAsrPipelineOutcome listAsrPipeline(const Model::ListAsrPipelineRequest &request)const;
			void listAsrPipelineAsync(const Model::ListAsrPipelineRequest& request, const ListAsrPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAsrPipelineOutcomeCallable listAsrPipelineCallable(const Model::ListAsrPipelineRequest& request) const;
			ListCensorPipelineOutcome listCensorPipeline(const Model::ListCensorPipelineRequest &request)const;
			void listCensorPipelineAsync(const Model::ListCensorPipelineRequest& request, const ListCensorPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCensorPipelineOutcomeCallable listCensorPipelineCallable(const Model::ListCensorPipelineRequest& request) const;
			ListCoverPipelineOutcome listCoverPipeline(const Model::ListCoverPipelineRequest &request)const;
			void listCoverPipelineAsync(const Model::ListCoverPipelineRequest& request, const ListCoverPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCoverPipelineOutcomeCallable listCoverPipelineCallable(const Model::ListCoverPipelineRequest& request) const;
			ListJobOutcome listJob(const Model::ListJobRequest &request)const;
			void listJobAsync(const Model::ListJobRequest& request, const ListJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobOutcomeCallable listJobCallable(const Model::ListJobRequest& request) const;
			ListMediaOutcome listMedia(const Model::ListMediaRequest &request)const;
			void listMediaAsync(const Model::ListMediaRequest& request, const ListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMediaOutcomeCallable listMediaCallable(const Model::ListMediaRequest& request) const;
			ListMediaWorkflowExecutionsOutcome listMediaWorkflowExecutions(const Model::ListMediaWorkflowExecutionsRequest &request)const;
			void listMediaWorkflowExecutionsAsync(const Model::ListMediaWorkflowExecutionsRequest& request, const ListMediaWorkflowExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMediaWorkflowExecutionsOutcomeCallable listMediaWorkflowExecutionsCallable(const Model::ListMediaWorkflowExecutionsRequest& request) const;
			ListPornPipelineOutcome listPornPipeline(const Model::ListPornPipelineRequest &request)const;
			void listPornPipelineAsync(const Model::ListPornPipelineRequest& request, const ListPornPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPornPipelineOutcomeCallable listPornPipelineCallable(const Model::ListPornPipelineRequest& request) const;
			ListTerrorismPipelineOutcome listTerrorismPipeline(const Model::ListTerrorismPipelineRequest &request)const;
			void listTerrorismPipelineAsync(const Model::ListTerrorismPipelineRequest& request, const ListTerrorismPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTerrorismPipelineOutcomeCallable listTerrorismPipelineCallable(const Model::ListTerrorismPipelineRequest& request) const;
			LogicalDeleteResourceOutcome logicalDeleteResource(const Model::LogicalDeleteResourceRequest &request)const;
			void logicalDeleteResourceAsync(const Model::LogicalDeleteResourceRequest& request, const LogicalDeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LogicalDeleteResourceOutcomeCallable logicalDeleteResourceCallable(const Model::LogicalDeleteResourceRequest& request) const;
			PhysicalDeleteResourceOutcome physicalDeleteResource(const Model::PhysicalDeleteResourceRequest &request)const;
			void physicalDeleteResourceAsync(const Model::PhysicalDeleteResourceRequest& request, const PhysicalDeleteResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PhysicalDeleteResourceOutcomeCallable physicalDeleteResourceCallable(const Model::PhysicalDeleteResourceRequest& request) const;
			PlayInfoOutcome playInfo(const Model::PlayInfoRequest &request)const;
			void playInfoAsync(const Model::PlayInfoRequest& request, const PlayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PlayInfoOutcomeCallable playInfoCallable(const Model::PlayInfoRequest& request) const;
			PlayerAuthOutcome playerAuth(const Model::PlayerAuthRequest &request)const;
			void playerAuthAsync(const Model::PlayerAuthRequest& request, const PlayerAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PlayerAuthOutcomeCallable playerAuthCallable(const Model::PlayerAuthRequest& request) const;
			QueryAnalysisJobListOutcome queryAnalysisJobList(const Model::QueryAnalysisJobListRequest &request)const;
			void queryAnalysisJobListAsync(const Model::QueryAnalysisJobListRequest& request, const QueryAnalysisJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAnalysisJobListOutcomeCallable queryAnalysisJobListCallable(const Model::QueryAnalysisJobListRequest& request) const;
			QueryAnnotationJobListOutcome queryAnnotationJobList(const Model::QueryAnnotationJobListRequest &request)const;
			void queryAnnotationJobListAsync(const Model::QueryAnnotationJobListRequest& request, const QueryAnnotationJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAnnotationJobListOutcomeCallable queryAnnotationJobListCallable(const Model::QueryAnnotationJobListRequest& request) const;
			QueryAsrJobListOutcome queryAsrJobList(const Model::QueryAsrJobListRequest &request)const;
			void queryAsrJobListAsync(const Model::QueryAsrJobListRequest& request, const QueryAsrJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAsrJobListOutcomeCallable queryAsrJobListCallable(const Model::QueryAsrJobListRequest& request) const;
			QueryAsrPipelineListOutcome queryAsrPipelineList(const Model::QueryAsrPipelineListRequest &request)const;
			void queryAsrPipelineListAsync(const Model::QueryAsrPipelineListRequest& request, const QueryAsrPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAsrPipelineListOutcomeCallable queryAsrPipelineListCallable(const Model::QueryAsrPipelineListRequest& request) const;
			QueryAuthConfigOutcome queryAuthConfig(const Model::QueryAuthConfigRequest &request)const;
			void queryAuthConfigAsync(const Model::QueryAuthConfigRequest& request, const QueryAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAuthConfigOutcomeCallable queryAuthConfigCallable(const Model::QueryAuthConfigRequest& request) const;
			QueryCensorJobListOutcome queryCensorJobList(const Model::QueryCensorJobListRequest &request)const;
			void queryCensorJobListAsync(const Model::QueryCensorJobListRequest& request, const QueryCensorJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCensorJobListOutcomeCallable queryCensorJobListCallable(const Model::QueryCensorJobListRequest& request) const;
			QueryCensorPipelineListOutcome queryCensorPipelineList(const Model::QueryCensorPipelineListRequest &request)const;
			void queryCensorPipelineListAsync(const Model::QueryCensorPipelineListRequest& request, const QueryCensorPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCensorPipelineListOutcomeCallable queryCensorPipelineListCallable(const Model::QueryCensorPipelineListRequest& request) const;
			QueryComplexJobListOutcome queryComplexJobList(const Model::QueryComplexJobListRequest &request)const;
			void queryComplexJobListAsync(const Model::QueryComplexJobListRequest& request, const QueryComplexJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryComplexJobListOutcomeCallable queryComplexJobListCallable(const Model::QueryComplexJobListRequest& request) const;
			QueryCoverJobListOutcome queryCoverJobList(const Model::QueryCoverJobListRequest &request)const;
			void queryCoverJobListAsync(const Model::QueryCoverJobListRequest& request, const QueryCoverJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCoverJobListOutcomeCallable queryCoverJobListCallable(const Model::QueryCoverJobListRequest& request) const;
			QueryCoverPipelineListOutcome queryCoverPipelineList(const Model::QueryCoverPipelineListRequest &request)const;
			void queryCoverPipelineListAsync(const Model::QueryCoverPipelineListRequest& request, const QueryCoverPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCoverPipelineListOutcomeCallable queryCoverPipelineListCallable(const Model::QueryCoverPipelineListRequest& request) const;
			QueryEditingJobListOutcome queryEditingJobList(const Model::QueryEditingJobListRequest &request)const;
			void queryEditingJobListAsync(const Model::QueryEditingJobListRequest& request, const QueryEditingJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEditingJobListOutcomeCallable queryEditingJobListCallable(const Model::QueryEditingJobListRequest& request) const;
			QueryFacerecogJobListOutcome queryFacerecogJobList(const Model::QueryFacerecogJobListRequest &request)const;
			void queryFacerecogJobListAsync(const Model::QueryFacerecogJobListRequest& request, const QueryFacerecogJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFacerecogJobListOutcomeCallable queryFacerecogJobListCallable(const Model::QueryFacerecogJobListRequest& request) const;
			QueryFpCompareJobListOutcome queryFpCompareJobList(const Model::QueryFpCompareJobListRequest &request)const;
			void queryFpCompareJobListAsync(const Model::QueryFpCompareJobListRequest& request, const QueryFpCompareJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFpCompareJobListOutcomeCallable queryFpCompareJobListCallable(const Model::QueryFpCompareJobListRequest& request) const;
			QueryFpImportResultOutcome queryFpImportResult(const Model::QueryFpImportResultRequest &request)const;
			void queryFpImportResultAsync(const Model::QueryFpImportResultRequest& request, const QueryFpImportResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFpImportResultOutcomeCallable queryFpImportResultCallable(const Model::QueryFpImportResultRequest& request) const;
			QueryFpShotJobListOutcome queryFpShotJobList(const Model::QueryFpShotJobListRequest &request)const;
			void queryFpShotJobListAsync(const Model::QueryFpShotJobListRequest& request, const QueryFpShotJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFpShotJobListOutcomeCallable queryFpShotJobListCallable(const Model::QueryFpShotJobListRequest& request) const;
			QueryImageSearchJobListOutcome queryImageSearchJobList(const Model::QueryImageSearchJobListRequest &request)const;
			void queryImageSearchJobListAsync(const Model::QueryImageSearchJobListRequest& request, const QueryImageSearchJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryImageSearchJobListOutcomeCallable queryImageSearchJobListCallable(const Model::QueryImageSearchJobListRequest& request) const;
			QueryJobListOutcome queryJobList(const Model::QueryJobListRequest &request)const;
			void queryJobListAsync(const Model::QueryJobListRequest& request, const QueryJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryJobListOutcomeCallable queryJobListCallable(const Model::QueryJobListRequest& request) const;
			QueryMCJobListOutcome queryMCJobList(const Model::QueryMCJobListRequest &request)const;
			void queryMCJobListAsync(const Model::QueryMCJobListRequest& request, const QueryMCJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMCJobListOutcomeCallable queryMCJobListCallable(const Model::QueryMCJobListRequest& request) const;
			QueryMCTemplateListOutcome queryMCTemplateList(const Model::QueryMCTemplateListRequest &request)const;
			void queryMCTemplateListAsync(const Model::QueryMCTemplateListRequest& request, const QueryMCTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMCTemplateListOutcomeCallable queryMCTemplateListCallable(const Model::QueryMCTemplateListRequest& request) const;
			QueryMcuJobOutcome queryMcuJob(const Model::QueryMcuJobRequest &request)const;
			void queryMcuJobAsync(const Model::QueryMcuJobRequest& request, const QueryMcuJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMcuJobOutcomeCallable queryMcuJobCallable(const Model::QueryMcuJobRequest& request) const;
			QueryMcuTemplateOutcome queryMcuTemplate(const Model::QueryMcuTemplateRequest &request)const;
			void queryMcuTemplateAsync(const Model::QueryMcuTemplateRequest& request, const QueryMcuTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMcuTemplateOutcomeCallable queryMcuTemplateCallable(const Model::QueryMcuTemplateRequest& request) const;
			QueryMediaCensorJobDetailOutcome queryMediaCensorJobDetail(const Model::QueryMediaCensorJobDetailRequest &request)const;
			void queryMediaCensorJobDetailAsync(const Model::QueryMediaCensorJobDetailRequest& request, const QueryMediaCensorJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaCensorJobDetailOutcomeCallable queryMediaCensorJobDetailCallable(const Model::QueryMediaCensorJobDetailRequest& request) const;
			QueryMediaCensorJobListOutcome queryMediaCensorJobList(const Model::QueryMediaCensorJobListRequest &request)const;
			void queryMediaCensorJobListAsync(const Model::QueryMediaCensorJobListRequest& request, const QueryMediaCensorJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaCensorJobListOutcomeCallable queryMediaCensorJobListCallable(const Model::QueryMediaCensorJobListRequest& request) const;
			QueryMediaDetailJobListOutcome queryMediaDetailJobList(const Model::QueryMediaDetailJobListRequest &request)const;
			void queryMediaDetailJobListAsync(const Model::QueryMediaDetailJobListRequest& request, const QueryMediaDetailJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaDetailJobListOutcomeCallable queryMediaDetailJobListCallable(const Model::QueryMediaDetailJobListRequest& request) const;
			QueryMediaFpDeleteJobListOutcome queryMediaFpDeleteJobList(const Model::QueryMediaFpDeleteJobListRequest &request)const;
			void queryMediaFpDeleteJobListAsync(const Model::QueryMediaFpDeleteJobListRequest& request, const QueryMediaFpDeleteJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaFpDeleteJobListOutcomeCallable queryMediaFpDeleteJobListCallable(const Model::QueryMediaFpDeleteJobListRequest& request) const;
			QueryMediaInfoJobListOutcome queryMediaInfoJobList(const Model::QueryMediaInfoJobListRequest &request)const;
			void queryMediaInfoJobListAsync(const Model::QueryMediaInfoJobListRequest& request, const QueryMediaInfoJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaInfoJobListOutcomeCallable queryMediaInfoJobListCallable(const Model::QueryMediaInfoJobListRequest& request) const;
			QueryMediaListOutcome queryMediaList(const Model::QueryMediaListRequest &request)const;
			void queryMediaListAsync(const Model::QueryMediaListRequest& request, const QueryMediaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaListOutcomeCallable queryMediaListCallable(const Model::QueryMediaListRequest& request) const;
			QueryMediaListByURLOutcome queryMediaListByURL(const Model::QueryMediaListByURLRequest &request)const;
			void queryMediaListByURLAsync(const Model::QueryMediaListByURLRequest& request, const QueryMediaListByURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaListByURLOutcomeCallable queryMediaListByURLCallable(const Model::QueryMediaListByURLRequest& request) const;
			QueryMediaWorkflowExecutionListOutcome queryMediaWorkflowExecutionList(const Model::QueryMediaWorkflowExecutionListRequest &request)const;
			void queryMediaWorkflowExecutionListAsync(const Model::QueryMediaWorkflowExecutionListRequest& request, const QueryMediaWorkflowExecutionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaWorkflowExecutionListOutcomeCallable queryMediaWorkflowExecutionListCallable(const Model::QueryMediaWorkflowExecutionListRequest& request) const;
			QueryMediaWorkflowListOutcome queryMediaWorkflowList(const Model::QueryMediaWorkflowListRequest &request)const;
			void queryMediaWorkflowListAsync(const Model::QueryMediaWorkflowListRequest& request, const QueryMediaWorkflowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaWorkflowListOutcomeCallable queryMediaWorkflowListCallable(const Model::QueryMediaWorkflowListRequest& request) const;
			QueryPipelineListOutcome queryPipelineList(const Model::QueryPipelineListRequest &request)const;
			void queryPipelineListAsync(const Model::QueryPipelineListRequest& request, const QueryPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPipelineListOutcomeCallable queryPipelineListCallable(const Model::QueryPipelineListRequest& request) const;
			QueryPornJobListOutcome queryPornJobList(const Model::QueryPornJobListRequest &request)const;
			void queryPornJobListAsync(const Model::QueryPornJobListRequest& request, const QueryPornJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPornJobListOutcomeCallable queryPornJobListCallable(const Model::QueryPornJobListRequest& request) const;
			QueryPornPipelineListOutcome queryPornPipelineList(const Model::QueryPornPipelineListRequest &request)const;
			void queryPornPipelineListAsync(const Model::QueryPornPipelineListRequest& request, const QueryPornPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPornPipelineListOutcomeCallable queryPornPipelineListCallable(const Model::QueryPornPipelineListRequest& request) const;
			QuerySnapshotJobListOutcome querySnapshotJobList(const Model::QuerySnapshotJobListRequest &request)const;
			void querySnapshotJobListAsync(const Model::QuerySnapshotJobListRequest& request, const QuerySnapshotJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySnapshotJobListOutcomeCallable querySnapshotJobListCallable(const Model::QuerySnapshotJobListRequest& request) const;
			QuerySubtitleJobListOutcome querySubtitleJobList(const Model::QuerySubtitleJobListRequest &request)const;
			void querySubtitleJobListAsync(const Model::QuerySubtitleJobListRequest& request, const QuerySubtitleJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySubtitleJobListOutcomeCallable querySubtitleJobListCallable(const Model::QuerySubtitleJobListRequest& request) const;
			QueryTagJobListOutcome queryTagJobList(const Model::QueryTagJobListRequest &request)const;
			void queryTagJobListAsync(const Model::QueryTagJobListRequest& request, const QueryTagJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTagJobListOutcomeCallable queryTagJobListCallable(const Model::QueryTagJobListRequest& request) const;
			QueryTemplateListOutcome queryTemplateList(const Model::QueryTemplateListRequest &request)const;
			void queryTemplateListAsync(const Model::QueryTemplateListRequest& request, const QueryTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTemplateListOutcomeCallable queryTemplateListCallable(const Model::QueryTemplateListRequest& request) const;
			QueryTerrorismJobListOutcome queryTerrorismJobList(const Model::QueryTerrorismJobListRequest &request)const;
			void queryTerrorismJobListAsync(const Model::QueryTerrorismJobListRequest& request, const QueryTerrorismJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTerrorismJobListOutcomeCallable queryTerrorismJobListCallable(const Model::QueryTerrorismJobListRequest& request) const;
			QueryTerrorismPipelineListOutcome queryTerrorismPipelineList(const Model::QueryTerrorismPipelineListRequest &request)const;
			void queryTerrorismPipelineListAsync(const Model::QueryTerrorismPipelineListRequest& request, const QueryTerrorismPipelineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTerrorismPipelineListOutcomeCallable queryTerrorismPipelineListCallable(const Model::QueryTerrorismPipelineListRequest& request) const;
			QueryVideoGifJobListOutcome queryVideoGifJobList(const Model::QueryVideoGifJobListRequest &request)const;
			void queryVideoGifJobListAsync(const Model::QueryVideoGifJobListRequest& request, const QueryVideoGifJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryVideoGifJobListOutcomeCallable queryVideoGifJobListCallable(const Model::QueryVideoGifJobListRequest& request) const;
			QueryVideoPoseJobListOutcome queryVideoPoseJobList(const Model::QueryVideoPoseJobListRequest &request)const;
			void queryVideoPoseJobListAsync(const Model::QueryVideoPoseJobListRequest& request, const QueryVideoPoseJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryVideoPoseJobListOutcomeCallable queryVideoPoseJobListCallable(const Model::QueryVideoPoseJobListRequest& request) const;
			QueryVideoSplitJobListOutcome queryVideoSplitJobList(const Model::QueryVideoSplitJobListRequest &request)const;
			void queryVideoSplitJobListAsync(const Model::QueryVideoSplitJobListRequest& request, const QueryVideoSplitJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryVideoSplitJobListOutcomeCallable queryVideoSplitJobListCallable(const Model::QueryVideoSplitJobListRequest& request) const;
			QueryVideoSummaryJobListOutcome queryVideoSummaryJobList(const Model::QueryVideoSummaryJobListRequest &request)const;
			void queryVideoSummaryJobListAsync(const Model::QueryVideoSummaryJobListRequest& request, const QueryVideoSummaryJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryVideoSummaryJobListOutcomeCallable queryVideoSummaryJobListCallable(const Model::QueryVideoSummaryJobListRequest& request) const;
			QueryWaterMarkTemplateListOutcome queryWaterMarkTemplateList(const Model::QueryWaterMarkTemplateListRequest &request)const;
			void queryWaterMarkTemplateListAsync(const Model::QueryWaterMarkTemplateListRequest& request, const QueryWaterMarkTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryWaterMarkTemplateListOutcomeCallable queryWaterMarkTemplateListCallable(const Model::QueryWaterMarkTemplateListRequest& request) const;
			RefreshCdnDomainConfigsCacheOutcome refreshCdnDomainConfigsCache(const Model::RefreshCdnDomainConfigsCacheRequest &request)const;
			void refreshCdnDomainConfigsCacheAsync(const Model::RefreshCdnDomainConfigsCacheRequest& request, const RefreshCdnDomainConfigsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshCdnDomainConfigsCacheOutcomeCallable refreshCdnDomainConfigsCacheCallable(const Model::RefreshCdnDomainConfigsCacheRequest& request) const;
			RegisterMediaDetailPersonOutcome registerMediaDetailPerson(const Model::RegisterMediaDetailPersonRequest &request)const;
			void registerMediaDetailPersonAsync(const Model::RegisterMediaDetailPersonRequest& request, const RegisterMediaDetailPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterMediaDetailPersonOutcomeCallable registerMediaDetailPersonCallable(const Model::RegisterMediaDetailPersonRequest& request) const;
			RegisterMediaDetailScenarioOutcome registerMediaDetailScenario(const Model::RegisterMediaDetailScenarioRequest &request)const;
			void registerMediaDetailScenarioAsync(const Model::RegisterMediaDetailScenarioRequest& request, const RegisterMediaDetailScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterMediaDetailScenarioOutcomeCallable registerMediaDetailScenarioCallable(const Model::RegisterMediaDetailScenarioRequest& request) const;
			ReportAnnotationJobResultOutcome reportAnnotationJobResult(const Model::ReportAnnotationJobResultRequest &request)const;
			void reportAnnotationJobResultAsync(const Model::ReportAnnotationJobResultRequest& request, const ReportAnnotationJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportAnnotationJobResultOutcomeCallable reportAnnotationJobResultCallable(const Model::ReportAnnotationJobResultRequest& request) const;
			ReportCensorJobResultOutcome reportCensorJobResult(const Model::ReportCensorJobResultRequest &request)const;
			void reportCensorJobResultAsync(const Model::ReportCensorJobResultRequest& request, const ReportCensorJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportCensorJobResultOutcomeCallable reportCensorJobResultCallable(const Model::ReportCensorJobResultRequest& request) const;
			ReportCoverJobResultOutcome reportCoverJobResult(const Model::ReportCoverJobResultRequest &request)const;
			void reportCoverJobResultAsync(const Model::ReportCoverJobResultRequest& request, const ReportCoverJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportCoverJobResultOutcomeCallable reportCoverJobResultCallable(const Model::ReportCoverJobResultRequest& request) const;
			ReportFacerecogJobResultOutcome reportFacerecogJobResult(const Model::ReportFacerecogJobResultRequest &request)const;
			void reportFacerecogJobResultAsync(const Model::ReportFacerecogJobResultRequest& request, const ReportFacerecogJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportFacerecogJobResultOutcomeCallable reportFacerecogJobResultCallable(const Model::ReportFacerecogJobResultRequest& request) const;
			ReportFpShotJobResultOutcome reportFpShotJobResult(const Model::ReportFpShotJobResultRequest &request)const;
			void reportFpShotJobResultAsync(const Model::ReportFpShotJobResultRequest& request, const ReportFpShotJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportFpShotJobResultOutcomeCallable reportFpShotJobResultCallable(const Model::ReportFpShotJobResultRequest& request) const;
			ReportMediaDetailJobResultOutcome reportMediaDetailJobResult(const Model::ReportMediaDetailJobResultRequest &request)const;
			void reportMediaDetailJobResultAsync(const Model::ReportMediaDetailJobResultRequest& request, const ReportMediaDetailJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportMediaDetailJobResultOutcomeCallable reportMediaDetailJobResultCallable(const Model::ReportMediaDetailJobResultRequest& request) const;
			ReportPornJobResultOutcome reportPornJobResult(const Model::ReportPornJobResultRequest &request)const;
			void reportPornJobResultAsync(const Model::ReportPornJobResultRequest& request, const ReportPornJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportPornJobResultOutcomeCallable reportPornJobResultCallable(const Model::ReportPornJobResultRequest& request) const;
			ReportTagJobResultOutcome reportTagJobResult(const Model::ReportTagJobResultRequest &request)const;
			void reportTagJobResultAsync(const Model::ReportTagJobResultRequest& request, const ReportTagJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportTagJobResultOutcomeCallable reportTagJobResultCallable(const Model::ReportTagJobResultRequest& request) const;
			ReportTerrorismJobResultOutcome reportTerrorismJobResult(const Model::ReportTerrorismJobResultRequest &request)const;
			void reportTerrorismJobResultAsync(const Model::ReportTerrorismJobResultRequest& request, const ReportTerrorismJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportTerrorismJobResultOutcomeCallable reportTerrorismJobResultCallable(const Model::ReportTerrorismJobResultRequest& request) const;
			ReportVideoSplitJobResultOutcome reportVideoSplitJobResult(const Model::ReportVideoSplitJobResultRequest &request)const;
			void reportVideoSplitJobResultAsync(const Model::ReportVideoSplitJobResultRequest& request, const ReportVideoSplitJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportVideoSplitJobResultOutcomeCallable reportVideoSplitJobResultCallable(const Model::ReportVideoSplitJobResultRequest& request) const;
			SearchMediaOutcome searchMedia(const Model::SearchMediaRequest &request)const;
			void searchMediaAsync(const Model::SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchMediaOutcomeCallable searchMediaCallable(const Model::SearchMediaRequest& request) const;
			SearchMediaWorkflowOutcome searchMediaWorkflow(const Model::SearchMediaWorkflowRequest &request)const;
			void searchMediaWorkflowAsync(const Model::SearchMediaWorkflowRequest& request, const SearchMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchMediaWorkflowOutcomeCallable searchMediaWorkflowCallable(const Model::SearchMediaWorkflowRequest& request) const;
			SearchPipelineOutcome searchPipeline(const Model::SearchPipelineRequest &request)const;
			void searchPipelineAsync(const Model::SearchPipelineRequest& request, const SearchPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchPipelineOutcomeCallable searchPipelineCallable(const Model::SearchPipelineRequest& request) const;
			SearchTemplateOutcome searchTemplate(const Model::SearchTemplateRequest &request)const;
			void searchTemplateAsync(const Model::SearchTemplateRequest& request, const SearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTemplateOutcomeCallable searchTemplateCallable(const Model::SearchTemplateRequest& request) const;
			SearchWaterMarkTemplateOutcome searchWaterMarkTemplate(const Model::SearchWaterMarkTemplateRequest &request)const;
			void searchWaterMarkTemplateAsync(const Model::SearchWaterMarkTemplateRequest& request, const SearchWaterMarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchWaterMarkTemplateOutcomeCallable searchWaterMarkTemplateCallable(const Model::SearchWaterMarkTemplateRequest& request) const;
			SetAuthConfigOutcome setAuthConfig(const Model::SetAuthConfigRequest &request)const;
			void setAuthConfigAsync(const Model::SetAuthConfigRequest& request, const SetAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAuthConfigOutcomeCallable setAuthConfigCallable(const Model::SetAuthConfigRequest& request) const;
			SubmitAnalysisJobOutcome submitAnalysisJob(const Model::SubmitAnalysisJobRequest &request)const;
			void submitAnalysisJobAsync(const Model::SubmitAnalysisJobRequest& request, const SubmitAnalysisJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAnalysisJobOutcomeCallable submitAnalysisJobCallable(const Model::SubmitAnalysisJobRequest& request) const;
			SubmitAnnotationJobOutcome submitAnnotationJob(const Model::SubmitAnnotationJobRequest &request)const;
			void submitAnnotationJobAsync(const Model::SubmitAnnotationJobRequest& request, const SubmitAnnotationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAnnotationJobOutcomeCallable submitAnnotationJobCallable(const Model::SubmitAnnotationJobRequest& request) const;
			SubmitAsrJobOutcome submitAsrJob(const Model::SubmitAsrJobRequest &request)const;
			void submitAsrJobAsync(const Model::SubmitAsrJobRequest& request, const SubmitAsrJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAsrJobOutcomeCallable submitAsrJobCallable(const Model::SubmitAsrJobRequest& request) const;
			SubmitBeautifyJobsOutcome submitBeautifyJobs(const Model::SubmitBeautifyJobsRequest &request)const;
			void submitBeautifyJobsAsync(const Model::SubmitBeautifyJobsRequest& request, const SubmitBeautifyJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitBeautifyJobsOutcomeCallable submitBeautifyJobsCallable(const Model::SubmitBeautifyJobsRequest& request) const;
			SubmitComplexJobOutcome submitComplexJob(const Model::SubmitComplexJobRequest &request)const;
			void submitComplexJobAsync(const Model::SubmitComplexJobRequest& request, const SubmitComplexJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitComplexJobOutcomeCallable submitComplexJobCallable(const Model::SubmitComplexJobRequest& request) const;
			SubmitCoverJobOutcome submitCoverJob(const Model::SubmitCoverJobRequest &request)const;
			void submitCoverJobAsync(const Model::SubmitCoverJobRequest& request, const SubmitCoverJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCoverJobOutcomeCallable submitCoverJobCallable(const Model::SubmitCoverJobRequest& request) const;
			SubmitEditingJobsOutcome submitEditingJobs(const Model::SubmitEditingJobsRequest &request)const;
			void submitEditingJobsAsync(const Model::SubmitEditingJobsRequest& request, const SubmitEditingJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitEditingJobsOutcomeCallable submitEditingJobsCallable(const Model::SubmitEditingJobsRequest& request) const;
			SubmitFacerecogJobOutcome submitFacerecogJob(const Model::SubmitFacerecogJobRequest &request)const;
			void submitFacerecogJobAsync(const Model::SubmitFacerecogJobRequest& request, const SubmitFacerecogJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFacerecogJobOutcomeCallable submitFacerecogJobCallable(const Model::SubmitFacerecogJobRequest& request) const;
			SubmitFpCompareJobOutcome submitFpCompareJob(const Model::SubmitFpCompareJobRequest &request)const;
			void submitFpCompareJobAsync(const Model::SubmitFpCompareJobRequest& request, const SubmitFpCompareJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFpCompareJobOutcomeCallable submitFpCompareJobCallable(const Model::SubmitFpCompareJobRequest& request) const;
			SubmitFpShotJobOutcome submitFpShotJob(const Model::SubmitFpShotJobRequest &request)const;
			void submitFpShotJobAsync(const Model::SubmitFpShotJobRequest& request, const SubmitFpShotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFpShotJobOutcomeCallable submitFpShotJobCallable(const Model::SubmitFpShotJobRequest& request) const;
			SubmitImageQualityJobOutcome submitImageQualityJob(const Model::SubmitImageQualityJobRequest &request)const;
			void submitImageQualityJobAsync(const Model::SubmitImageQualityJobRequest& request, const SubmitImageQualityJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitImageQualityJobOutcomeCallable submitImageQualityJobCallable(const Model::SubmitImageQualityJobRequest& request) const;
			SubmitImageSearchJobOutcome submitImageSearchJob(const Model::SubmitImageSearchJobRequest &request)const;
			void submitImageSearchJobAsync(const Model::SubmitImageSearchJobRequest& request, const SubmitImageSearchJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitImageSearchJobOutcomeCallable submitImageSearchJobCallable(const Model::SubmitImageSearchJobRequest& request) const;
			SubmitJobsOutcome submitJobs(const Model::SubmitJobsRequest &request)const;
			void submitJobsAsync(const Model::SubmitJobsRequest& request, const SubmitJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitJobsOutcomeCallable submitJobsCallable(const Model::SubmitJobsRequest& request) const;
			SubmitMCJobOutcome submitMCJob(const Model::SubmitMCJobRequest &request)const;
			void submitMCJobAsync(const Model::SubmitMCJobRequest& request, const SubmitMCJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMCJobOutcomeCallable submitMCJobCallable(const Model::SubmitMCJobRequest& request) const;
			SubmitMcuJobOutcome submitMcuJob(const Model::SubmitMcuJobRequest &request)const;
			void submitMcuJobAsync(const Model::SubmitMcuJobRequest& request, const SubmitMcuJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMcuJobOutcomeCallable submitMcuJobCallable(const Model::SubmitMcuJobRequest& request) const;
			SubmitMediaCensorJobOutcome submitMediaCensorJob(const Model::SubmitMediaCensorJobRequest &request)const;
			void submitMediaCensorJobAsync(const Model::SubmitMediaCensorJobRequest& request, const SubmitMediaCensorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMediaCensorJobOutcomeCallable submitMediaCensorJobCallable(const Model::SubmitMediaCensorJobRequest& request) const;
			SubmitMediaDetailJobOutcome submitMediaDetailJob(const Model::SubmitMediaDetailJobRequest &request)const;
			void submitMediaDetailJobAsync(const Model::SubmitMediaDetailJobRequest& request, const SubmitMediaDetailJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMediaDetailJobOutcomeCallable submitMediaDetailJobCallable(const Model::SubmitMediaDetailJobRequest& request) const;
			SubmitMediaFpDeleteJobOutcome submitMediaFpDeleteJob(const Model::SubmitMediaFpDeleteJobRequest &request)const;
			void submitMediaFpDeleteJobAsync(const Model::SubmitMediaFpDeleteJobRequest& request, const SubmitMediaFpDeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMediaFpDeleteJobOutcomeCallable submitMediaFpDeleteJobCallable(const Model::SubmitMediaFpDeleteJobRequest& request) const;
			SubmitMediaInfoJobOutcome submitMediaInfoJob(const Model::SubmitMediaInfoJobRequest &request)const;
			void submitMediaInfoJobAsync(const Model::SubmitMediaInfoJobRequest& request, const SubmitMediaInfoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMediaInfoJobOutcomeCallable submitMediaInfoJobCallable(const Model::SubmitMediaInfoJobRequest& request) const;
			SubmitPornJobOutcome submitPornJob(const Model::SubmitPornJobRequest &request)const;
			void submitPornJobAsync(const Model::SubmitPornJobRequest& request, const SubmitPornJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitPornJobOutcomeCallable submitPornJobCallable(const Model::SubmitPornJobRequest& request) const;
			SubmitSnapshotJobOutcome submitSnapshotJob(const Model::SubmitSnapshotJobRequest &request)const;
			void submitSnapshotJobAsync(const Model::SubmitSnapshotJobRequest& request, const SubmitSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSnapshotJobOutcomeCallable submitSnapshotJobCallable(const Model::SubmitSnapshotJobRequest& request) const;
			SubmitSubtitleJobOutcome submitSubtitleJob(const Model::SubmitSubtitleJobRequest &request)const;
			void submitSubtitleJobAsync(const Model::SubmitSubtitleJobRequest& request, const SubmitSubtitleJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSubtitleJobOutcomeCallable submitSubtitleJobCallable(const Model::SubmitSubtitleJobRequest& request) const;
			SubmitTagJobOutcome submitTagJob(const Model::SubmitTagJobRequest &request)const;
			void submitTagJobAsync(const Model::SubmitTagJobRequest& request, const SubmitTagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTagJobOutcomeCallable submitTagJobCallable(const Model::SubmitTagJobRequest& request) const;
			SubmitTerrorismJobOutcome submitTerrorismJob(const Model::SubmitTerrorismJobRequest &request)const;
			void submitTerrorismJobAsync(const Model::SubmitTerrorismJobRequest& request, const SubmitTerrorismJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTerrorismJobOutcomeCallable submitTerrorismJobCallable(const Model::SubmitTerrorismJobRequest& request) const;
			SubmitVideoGifJobOutcome submitVideoGifJob(const Model::SubmitVideoGifJobRequest &request)const;
			void submitVideoGifJobAsync(const Model::SubmitVideoGifJobRequest& request, const SubmitVideoGifJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitVideoGifJobOutcomeCallable submitVideoGifJobCallable(const Model::SubmitVideoGifJobRequest& request) const;
			SubmitVideoPoseJobOutcome submitVideoPoseJob(const Model::SubmitVideoPoseJobRequest &request)const;
			void submitVideoPoseJobAsync(const Model::SubmitVideoPoseJobRequest& request, const SubmitVideoPoseJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitVideoPoseJobOutcomeCallable submitVideoPoseJobCallable(const Model::SubmitVideoPoseJobRequest& request) const;
			SubmitVideoSplitJobOutcome submitVideoSplitJob(const Model::SubmitVideoSplitJobRequest &request)const;
			void submitVideoSplitJobAsync(const Model::SubmitVideoSplitJobRequest& request, const SubmitVideoSplitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitVideoSplitJobOutcomeCallable submitVideoSplitJobCallable(const Model::SubmitVideoSplitJobRequest& request) const;
			SubmitVideoSummaryJobOutcome submitVideoSummaryJob(const Model::SubmitVideoSummaryJobRequest &request)const;
			void submitVideoSummaryJobAsync(const Model::SubmitVideoSummaryJobRequest& request, const SubmitVideoSummaryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitVideoSummaryJobOutcomeCallable submitVideoSummaryJobCallable(const Model::SubmitVideoSummaryJobRequest& request) const;
			UnbindInputBucketOutcome unbindInputBucket(const Model::UnbindInputBucketRequest &request)const;
			void unbindInputBucketAsync(const Model::UnbindInputBucketRequest& request, const UnbindInputBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindInputBucketOutcomeCallable unbindInputBucketCallable(const Model::UnbindInputBucketRequest& request) const;
			UnbindOutputBucketOutcome unbindOutputBucket(const Model::UnbindOutputBucketRequest &request)const;
			void unbindOutputBucketAsync(const Model::UnbindOutputBucketRequest& request, const UnbindOutputBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindOutputBucketOutcomeCallable unbindOutputBucketCallable(const Model::UnbindOutputBucketRequest& request) const;
			UpdateAsrPipelineOutcome updateAsrPipeline(const Model::UpdateAsrPipelineRequest &request)const;
			void updateAsrPipelineAsync(const Model::UpdateAsrPipelineRequest& request, const UpdateAsrPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAsrPipelineOutcomeCallable updateAsrPipelineCallable(const Model::UpdateAsrPipelineRequest& request) const;
			UpdateCategoryNameOutcome updateCategoryName(const Model::UpdateCategoryNameRequest &request)const;
			void updateCategoryNameAsync(const Model::UpdateCategoryNameRequest& request, const UpdateCategoryNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCategoryNameOutcomeCallable updateCategoryNameCallable(const Model::UpdateCategoryNameRequest& request) const;
			UpdateCensorPipelineOutcome updateCensorPipeline(const Model::UpdateCensorPipelineRequest &request)const;
			void updateCensorPipelineAsync(const Model::UpdateCensorPipelineRequest& request, const UpdateCensorPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCensorPipelineOutcomeCallable updateCensorPipelineCallable(const Model::UpdateCensorPipelineRequest& request) const;
			UpdateCoverPipelineOutcome updateCoverPipeline(const Model::UpdateCoverPipelineRequest &request)const;
			void updateCoverPipelineAsync(const Model::UpdateCoverPipelineRequest& request, const UpdateCoverPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCoverPipelineOutcomeCallable updateCoverPipelineCallable(const Model::UpdateCoverPipelineRequest& request) const;
			UpdateMCTemplateOutcome updateMCTemplate(const Model::UpdateMCTemplateRequest &request)const;
			void updateMCTemplateAsync(const Model::UpdateMCTemplateRequest& request, const UpdateMCTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMCTemplateOutcomeCallable updateMCTemplateCallable(const Model::UpdateMCTemplateRequest& request) const;
			UpdateMcuTemplateOutcome updateMcuTemplate(const Model::UpdateMcuTemplateRequest &request)const;
			void updateMcuTemplateAsync(const Model::UpdateMcuTemplateRequest& request, const UpdateMcuTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMcuTemplateOutcomeCallable updateMcuTemplateCallable(const Model::UpdateMcuTemplateRequest& request) const;
			UpdateMediaOutcome updateMedia(const Model::UpdateMediaRequest &request)const;
			void updateMediaAsync(const Model::UpdateMediaRequest& request, const UpdateMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMediaOutcomeCallable updateMediaCallable(const Model::UpdateMediaRequest& request) const;
			UpdateMediaCategoryOutcome updateMediaCategory(const Model::UpdateMediaCategoryRequest &request)const;
			void updateMediaCategoryAsync(const Model::UpdateMediaCategoryRequest& request, const UpdateMediaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMediaCategoryOutcomeCallable updateMediaCategoryCallable(const Model::UpdateMediaCategoryRequest& request) const;
			UpdateMediaCoverOutcome updateMediaCover(const Model::UpdateMediaCoverRequest &request)const;
			void updateMediaCoverAsync(const Model::UpdateMediaCoverRequest& request, const UpdateMediaCoverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMediaCoverOutcomeCallable updateMediaCoverCallable(const Model::UpdateMediaCoverRequest& request) const;
			UpdateMediaPublishStateOutcome updateMediaPublishState(const Model::UpdateMediaPublishStateRequest &request)const;
			void updateMediaPublishStateAsync(const Model::UpdateMediaPublishStateRequest& request, const UpdateMediaPublishStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMediaPublishStateOutcomeCallable updateMediaPublishStateCallable(const Model::UpdateMediaPublishStateRequest& request) const;
			UpdateMediaWorkflowOutcome updateMediaWorkflow(const Model::UpdateMediaWorkflowRequest &request)const;
			void updateMediaWorkflowAsync(const Model::UpdateMediaWorkflowRequest& request, const UpdateMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMediaWorkflowOutcomeCallable updateMediaWorkflowCallable(const Model::UpdateMediaWorkflowRequest& request) const;
			UpdateMediaWorkflowTriggerModeOutcome updateMediaWorkflowTriggerMode(const Model::UpdateMediaWorkflowTriggerModeRequest &request)const;
			void updateMediaWorkflowTriggerModeAsync(const Model::UpdateMediaWorkflowTriggerModeRequest& request, const UpdateMediaWorkflowTriggerModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMediaWorkflowTriggerModeOutcomeCallable updateMediaWorkflowTriggerModeCallable(const Model::UpdateMediaWorkflowTriggerModeRequest& request) const;
			UpdatePipelineOutcome updatePipeline(const Model::UpdatePipelineRequest &request)const;
			void updatePipelineAsync(const Model::UpdatePipelineRequest& request, const UpdatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePipelineOutcomeCallable updatePipelineCallable(const Model::UpdatePipelineRequest& request) const;
			UpdatePornPipelineOutcome updatePornPipeline(const Model::UpdatePornPipelineRequest &request)const;
			void updatePornPipelineAsync(const Model::UpdatePornPipelineRequest& request, const UpdatePornPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePornPipelineOutcomeCallable updatePornPipelineCallable(const Model::UpdatePornPipelineRequest& request) const;
			UpdateTemplateOutcome updateTemplate(const Model::UpdateTemplateRequest &request)const;
			void updateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTemplateOutcomeCallable updateTemplateCallable(const Model::UpdateTemplateRequest& request) const;
			UpdateTerrorismPipelineOutcome updateTerrorismPipeline(const Model::UpdateTerrorismPipelineRequest &request)const;
			void updateTerrorismPipelineAsync(const Model::UpdateTerrorismPipelineRequest& request, const UpdateTerrorismPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTerrorismPipelineOutcomeCallable updateTerrorismPipelineCallable(const Model::UpdateTerrorismPipelineRequest& request) const;
			UpdateWaterMarkTemplateOutcome updateWaterMarkTemplate(const Model::UpdateWaterMarkTemplateRequest &request)const;
			void updateWaterMarkTemplateAsync(const Model::UpdateWaterMarkTemplateRequest& request, const UpdateWaterMarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWaterMarkTemplateOutcomeCallable updateWaterMarkTemplateCallable(const Model::UpdateWaterMarkTemplateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_MTS_MTSCLIENT_H_
