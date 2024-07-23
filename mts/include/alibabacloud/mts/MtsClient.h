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
#include "model/AddMediaRequest.h"
#include "model/AddMediaResult.h"
#include "model/AddMediaTagRequest.h"
#include "model/AddMediaTagResult.h"
#include "model/AddMediaWorkflowRequest.h"
#include "model/AddMediaWorkflowResult.h"
#include "model/AddPipelineRequest.h"
#include "model/AddPipelineResult.h"
#include "model/AddSmarttagTemplateRequest.h"
#include "model/AddSmarttagTemplateResult.h"
#include "model/AddTemplateRequest.h"
#include "model/AddTemplateResult.h"
#include "model/AddWaterMarkTemplateRequest.h"
#include "model/AddWaterMarkTemplateResult.h"
#include "model/BindInputBucketRequest.h"
#include "model/BindInputBucketResult.h"
#include "model/BindOutputBucketRequest.h"
#include "model/BindOutputBucketResult.h"
#include "model/CancelJobRequest.h"
#include "model/CancelJobResult.h"
#include "model/CreateCustomEntityRequest.h"
#include "model/CreateCustomEntityResult.h"
#include "model/CreateCustomGroupRequest.h"
#include "model/CreateCustomGroupResult.h"
#include "model/CreateFpShotDBRequest.h"
#include "model/CreateFpShotDBResult.h"
#include "model/DeactivateMediaWorkflowRequest.h"
#include "model/DeactivateMediaWorkflowResult.h"
#include "model/DeleteCustomEntityRequest.h"
#include "model/DeleteCustomEntityResult.h"
#include "model/DeleteCustomGroupRequest.h"
#include "model/DeleteCustomGroupResult.h"
#include "model/DeleteCustomViewRequest.h"
#include "model/DeleteCustomViewResult.h"
#include "model/DeleteMediaRequest.h"
#include "model/DeleteMediaResult.h"
#include "model/DeleteMediaTagRequest.h"
#include "model/DeleteMediaTagResult.h"
#include "model/DeleteMediaWorkflowRequest.h"
#include "model/DeleteMediaWorkflowResult.h"
#include "model/DeletePipelineRequest.h"
#include "model/DeletePipelineResult.h"
#include "model/DeleteSmarttagTemplateRequest.h"
#include "model/DeleteSmarttagTemplateResult.h"
#include "model/DeleteTemplateRequest.h"
#include "model/DeleteTemplateResult.h"
#include "model/DeleteWaterMarkTemplateRequest.h"
#include "model/DeleteWaterMarkTemplateResult.h"
#include "model/ImAuditRequest.h"
#include "model/ImAuditResult.h"
#include "model/ImportFpShotJobRequest.h"
#include "model/ImportFpShotJobResult.h"
#include "model/ListAllMediaBucketRequest.h"
#include "model/ListAllMediaBucketResult.h"
#include "model/ListCustomEntitiesRequest.h"
#include "model/ListCustomEntitiesResult.h"
#include "model/ListCustomGroupsRequest.h"
#include "model/ListCustomGroupsResult.h"
#include "model/ListCustomPersonsRequest.h"
#include "model/ListCustomPersonsResult.h"
#include "model/ListCustomViewsRequest.h"
#include "model/ListCustomViewsResult.h"
#include "model/ListFpShotDBRequest.h"
#include "model/ListFpShotDBResult.h"
#include "model/ListFpShotFilesRequest.h"
#include "model/ListFpShotFilesResult.h"
#include "model/ListFpShotImportJobRequest.h"
#include "model/ListFpShotImportJobResult.h"
#include "model/ListJobRequest.h"
#include "model/ListJobResult.h"
#include "model/ListMediaWorkflowExecutionsRequest.h"
#include "model/ListMediaWorkflowExecutionsResult.h"
#include "model/QueryAnalysisJobListRequest.h"
#include "model/QueryAnalysisJobListResult.h"
#include "model/QueryCopyrightExtractJobRequest.h"
#include "model/QueryCopyrightExtractJobResult.h"
#include "model/QueryCopyrightJobRequest.h"
#include "model/QueryCopyrightJobResult.h"
#include "model/QueryFpDBDeleteJobListRequest.h"
#include "model/QueryFpDBDeleteJobListResult.h"
#include "model/QueryFpFileDeleteJobListRequest.h"
#include "model/QueryFpFileDeleteJobListResult.h"
#include "model/QueryFpShotJobListRequest.h"
#include "model/QueryFpShotJobListResult.h"
#include "model/QueryIProductionJobRequest.h"
#include "model/QueryIProductionJobResult.h"
#include "model/QueryJobListRequest.h"
#include "model/QueryJobListResult.h"
#include "model/QueryMediaCensorJobDetailRequest.h"
#include "model/QueryMediaCensorJobDetailResult.h"
#include "model/QueryMediaCensorJobListRequest.h"
#include "model/QueryMediaCensorJobListResult.h"
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
#include "model/QuerySmarttagJobRequest.h"
#include "model/QuerySmarttagJobResult.h"
#include "model/QuerySmarttagTemplateListRequest.h"
#include "model/QuerySmarttagTemplateListResult.h"
#include "model/QuerySnapshotJobListRequest.h"
#include "model/QuerySnapshotJobListResult.h"
#include "model/QueryTemplateListRequest.h"
#include "model/QueryTemplateListResult.h"
#include "model/QueryTraceAbJobRequest.h"
#include "model/QueryTraceAbJobResult.h"
#include "model/QueryTraceExtractJobRequest.h"
#include "model/QueryTraceExtractJobResult.h"
#include "model/QueryTraceM3u8JobRequest.h"
#include "model/QueryTraceM3u8JobResult.h"
#include "model/QueryWaterMarkTemplateListRequest.h"
#include "model/QueryWaterMarkTemplateListResult.h"
#include "model/RegisterCustomFaceRequest.h"
#include "model/RegisterCustomFaceResult.h"
#include "model/RegisterCustomViewRequest.h"
#include "model/RegisterCustomViewResult.h"
#include "model/SearchMediaWorkflowRequest.h"
#include "model/SearchMediaWorkflowResult.h"
#include "model/SearchPipelineRequest.h"
#include "model/SearchPipelineResult.h"
#include "model/SearchTemplateRequest.h"
#include "model/SearchTemplateResult.h"
#include "model/SearchWaterMarkTemplateRequest.h"
#include "model/SearchWaterMarkTemplateResult.h"
#include "model/SubmitAnalysisJobRequest.h"
#include "model/SubmitAnalysisJobResult.h"
#include "model/SubmitCopyrightExtractJobRequest.h"
#include "model/SubmitCopyrightExtractJobResult.h"
#include "model/SubmitCopyrightJobRequest.h"
#include "model/SubmitCopyrightJobResult.h"
#include "model/SubmitFpDBDeleteJobRequest.h"
#include "model/SubmitFpDBDeleteJobResult.h"
#include "model/SubmitFpFileDeleteJobRequest.h"
#include "model/SubmitFpFileDeleteJobResult.h"
#include "model/SubmitFpShotJobRequest.h"
#include "model/SubmitFpShotJobResult.h"
#include "model/SubmitIProductionJobRequest.h"
#include "model/SubmitIProductionJobResult.h"
#include "model/SubmitImageCopyrightRequest.h"
#include "model/SubmitImageCopyrightResult.h"
#include "model/SubmitJobsRequest.h"
#include "model/SubmitJobsResult.h"
#include "model/SubmitMediaCensorJobRequest.h"
#include "model/SubmitMediaCensorJobResult.h"
#include "model/SubmitMediaInfoJobRequest.h"
#include "model/SubmitMediaInfoJobResult.h"
#include "model/SubmitSmarttagJobRequest.h"
#include "model/SubmitSmarttagJobResult.h"
#include "model/SubmitSnapshotJobRequest.h"
#include "model/SubmitSnapshotJobResult.h"
#include "model/SubmitTraceAbJobRequest.h"
#include "model/SubmitTraceAbJobResult.h"
#include "model/SubmitTraceExtractJobRequest.h"
#include "model/SubmitTraceExtractJobResult.h"
#include "model/SubmitTraceM3u8JobRequest.h"
#include "model/SubmitTraceM3u8JobResult.h"
#include "model/TagCustomPersonRequest.h"
#include "model/TagCustomPersonResult.h"
#include "model/UnbindInputBucketRequest.h"
#include "model/UnbindInputBucketResult.h"
#include "model/UnbindOutputBucketRequest.h"
#include "model/UnbindOutputBucketResult.h"
#include "model/UnregisterCustomFaceRequest.h"
#include "model/UnregisterCustomFaceResult.h"
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
#include "model/UpdateSmarttagTemplateRequest.h"
#include "model/UpdateSmarttagTemplateResult.h"
#include "model/UpdateTemplateRequest.h"
#include "model/UpdateTemplateResult.h"
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
			typedef Outcome<Error, Model::AddSmarttagTemplateResult> AddSmarttagTemplateOutcome;
			typedef std::future<AddSmarttagTemplateOutcome> AddSmarttagTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddSmarttagTemplateRequest&, const AddSmarttagTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSmarttagTemplateAsyncHandler;
			typedef Outcome<Error, Model::AddTemplateResult> AddTemplateOutcome;
			typedef std::future<AddTemplateOutcome> AddTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::AddTemplateRequest&, const AddTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTemplateAsyncHandler;
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
			typedef Outcome<Error, Model::CreateCustomEntityResult> CreateCustomEntityOutcome;
			typedef std::future<CreateCustomEntityOutcome> CreateCustomEntityOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::CreateCustomEntityRequest&, const CreateCustomEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomEntityAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomGroupResult> CreateCustomGroupOutcome;
			typedef std::future<CreateCustomGroupOutcome> CreateCustomGroupOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::CreateCustomGroupRequest&, const CreateCustomGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateFpShotDBResult> CreateFpShotDBOutcome;
			typedef std::future<CreateFpShotDBOutcome> CreateFpShotDBOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::CreateFpShotDBRequest&, const CreateFpShotDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFpShotDBAsyncHandler;
			typedef Outcome<Error, Model::DeactivateMediaWorkflowResult> DeactivateMediaWorkflowOutcome;
			typedef std::future<DeactivateMediaWorkflowOutcome> DeactivateMediaWorkflowOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeactivateMediaWorkflowRequest&, const DeactivateMediaWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateMediaWorkflowAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomEntityResult> DeleteCustomEntityOutcome;
			typedef std::future<DeleteCustomEntityOutcome> DeleteCustomEntityOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteCustomEntityRequest&, const DeleteCustomEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomEntityAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomGroupResult> DeleteCustomGroupOutcome;
			typedef std::future<DeleteCustomGroupOutcome> DeleteCustomGroupOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteCustomGroupRequest&, const DeleteCustomGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomViewResult> DeleteCustomViewOutcome;
			typedef std::future<DeleteCustomViewOutcome> DeleteCustomViewOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteCustomViewRequest&, const DeleteCustomViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomViewAsyncHandler;
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
			typedef Outcome<Error, Model::DeleteSmarttagTemplateResult> DeleteSmarttagTemplateOutcome;
			typedef std::future<DeleteSmarttagTemplateOutcome> DeleteSmarttagTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteSmarttagTemplateRequest&, const DeleteSmarttagTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmarttagTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplateResult> DeleteTemplateOutcome;
			typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteTemplateRequest&, const DeleteTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteWaterMarkTemplateResult> DeleteWaterMarkTemplateOutcome;
			typedef std::future<DeleteWaterMarkTemplateOutcome> DeleteWaterMarkTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::DeleteWaterMarkTemplateRequest&, const DeleteWaterMarkTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWaterMarkTemplateAsyncHandler;
			typedef Outcome<Error, Model::ImAuditResult> ImAuditOutcome;
			typedef std::future<ImAuditOutcome> ImAuditOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ImAuditRequest&, const ImAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImAuditAsyncHandler;
			typedef Outcome<Error, Model::ImportFpShotJobResult> ImportFpShotJobOutcome;
			typedef std::future<ImportFpShotJobOutcome> ImportFpShotJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ImportFpShotJobRequest&, const ImportFpShotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportFpShotJobAsyncHandler;
			typedef Outcome<Error, Model::ListAllMediaBucketResult> ListAllMediaBucketOutcome;
			typedef std::future<ListAllMediaBucketOutcome> ListAllMediaBucketOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListAllMediaBucketRequest&, const ListAllMediaBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAllMediaBucketAsyncHandler;
			typedef Outcome<Error, Model::ListCustomEntitiesResult> ListCustomEntitiesOutcome;
			typedef std::future<ListCustomEntitiesOutcome> ListCustomEntitiesOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListCustomEntitiesRequest&, const ListCustomEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomEntitiesAsyncHandler;
			typedef Outcome<Error, Model::ListCustomGroupsResult> ListCustomGroupsOutcome;
			typedef std::future<ListCustomGroupsOutcome> ListCustomGroupsOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListCustomGroupsRequest&, const ListCustomGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListCustomPersonsResult> ListCustomPersonsOutcome;
			typedef std::future<ListCustomPersonsOutcome> ListCustomPersonsOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListCustomPersonsRequest&, const ListCustomPersonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomPersonsAsyncHandler;
			typedef Outcome<Error, Model::ListCustomViewsResult> ListCustomViewsOutcome;
			typedef std::future<ListCustomViewsOutcome> ListCustomViewsOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListCustomViewsRequest&, const ListCustomViewsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomViewsAsyncHandler;
			typedef Outcome<Error, Model::ListFpShotDBResult> ListFpShotDBOutcome;
			typedef std::future<ListFpShotDBOutcome> ListFpShotDBOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListFpShotDBRequest&, const ListFpShotDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFpShotDBAsyncHandler;
			typedef Outcome<Error, Model::ListFpShotFilesResult> ListFpShotFilesOutcome;
			typedef std::future<ListFpShotFilesOutcome> ListFpShotFilesOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListFpShotFilesRequest&, const ListFpShotFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFpShotFilesAsyncHandler;
			typedef Outcome<Error, Model::ListFpShotImportJobResult> ListFpShotImportJobOutcome;
			typedef std::future<ListFpShotImportJobOutcome> ListFpShotImportJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListFpShotImportJobRequest&, const ListFpShotImportJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFpShotImportJobAsyncHandler;
			typedef Outcome<Error, Model::ListJobResult> ListJobOutcome;
			typedef std::future<ListJobOutcome> ListJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListJobRequest&, const ListJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobAsyncHandler;
			typedef Outcome<Error, Model::ListMediaWorkflowExecutionsResult> ListMediaWorkflowExecutionsOutcome;
			typedef std::future<ListMediaWorkflowExecutionsOutcome> ListMediaWorkflowExecutionsOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::ListMediaWorkflowExecutionsRequest&, const ListMediaWorkflowExecutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMediaWorkflowExecutionsAsyncHandler;
			typedef Outcome<Error, Model::QueryAnalysisJobListResult> QueryAnalysisJobListOutcome;
			typedef std::future<QueryAnalysisJobListOutcome> QueryAnalysisJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryAnalysisJobListRequest&, const QueryAnalysisJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAnalysisJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryCopyrightExtractJobResult> QueryCopyrightExtractJobOutcome;
			typedef std::future<QueryCopyrightExtractJobOutcome> QueryCopyrightExtractJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryCopyrightExtractJobRequest&, const QueryCopyrightExtractJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCopyrightExtractJobAsyncHandler;
			typedef Outcome<Error, Model::QueryCopyrightJobResult> QueryCopyrightJobOutcome;
			typedef std::future<QueryCopyrightJobOutcome> QueryCopyrightJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryCopyrightJobRequest&, const QueryCopyrightJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCopyrightJobAsyncHandler;
			typedef Outcome<Error, Model::QueryFpDBDeleteJobListResult> QueryFpDBDeleteJobListOutcome;
			typedef std::future<QueryFpDBDeleteJobListOutcome> QueryFpDBDeleteJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryFpDBDeleteJobListRequest&, const QueryFpDBDeleteJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFpDBDeleteJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryFpFileDeleteJobListResult> QueryFpFileDeleteJobListOutcome;
			typedef std::future<QueryFpFileDeleteJobListOutcome> QueryFpFileDeleteJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryFpFileDeleteJobListRequest&, const QueryFpFileDeleteJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFpFileDeleteJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryFpShotJobListResult> QueryFpShotJobListOutcome;
			typedef std::future<QueryFpShotJobListOutcome> QueryFpShotJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryFpShotJobListRequest&, const QueryFpShotJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryFpShotJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryIProductionJobResult> QueryIProductionJobOutcome;
			typedef std::future<QueryIProductionJobOutcome> QueryIProductionJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryIProductionJobRequest&, const QueryIProductionJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIProductionJobAsyncHandler;
			typedef Outcome<Error, Model::QueryJobListResult> QueryJobListOutcome;
			typedef std::future<QueryJobListOutcome> QueryJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryJobListRequest&, const QueryJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaCensorJobDetailResult> QueryMediaCensorJobDetailOutcome;
			typedef std::future<QueryMediaCensorJobDetailOutcome> QueryMediaCensorJobDetailOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaCensorJobDetailRequest&, const QueryMediaCensorJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaCensorJobDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryMediaCensorJobListResult> QueryMediaCensorJobListOutcome;
			typedef std::future<QueryMediaCensorJobListOutcome> QueryMediaCensorJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryMediaCensorJobListRequest&, const QueryMediaCensorJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMediaCensorJobListAsyncHandler;
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
			typedef Outcome<Error, Model::QuerySmarttagJobResult> QuerySmarttagJobOutcome;
			typedef std::future<QuerySmarttagJobOutcome> QuerySmarttagJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QuerySmarttagJobRequest&, const QuerySmarttagJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmarttagJobAsyncHandler;
			typedef Outcome<Error, Model::QuerySmarttagTemplateListResult> QuerySmarttagTemplateListOutcome;
			typedef std::future<QuerySmarttagTemplateListOutcome> QuerySmarttagTemplateListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QuerySmarttagTemplateListRequest&, const QuerySmarttagTemplateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmarttagTemplateListAsyncHandler;
			typedef Outcome<Error, Model::QuerySnapshotJobListResult> QuerySnapshotJobListOutcome;
			typedef std::future<QuerySnapshotJobListOutcome> QuerySnapshotJobListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QuerySnapshotJobListRequest&, const QuerySnapshotJobListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySnapshotJobListAsyncHandler;
			typedef Outcome<Error, Model::QueryTemplateListResult> QueryTemplateListOutcome;
			typedef std::future<QueryTemplateListOutcome> QueryTemplateListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryTemplateListRequest&, const QueryTemplateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTemplateListAsyncHandler;
			typedef Outcome<Error, Model::QueryTraceAbJobResult> QueryTraceAbJobOutcome;
			typedef std::future<QueryTraceAbJobOutcome> QueryTraceAbJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryTraceAbJobRequest&, const QueryTraceAbJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTraceAbJobAsyncHandler;
			typedef Outcome<Error, Model::QueryTraceExtractJobResult> QueryTraceExtractJobOutcome;
			typedef std::future<QueryTraceExtractJobOutcome> QueryTraceExtractJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryTraceExtractJobRequest&, const QueryTraceExtractJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTraceExtractJobAsyncHandler;
			typedef Outcome<Error, Model::QueryTraceM3u8JobResult> QueryTraceM3u8JobOutcome;
			typedef std::future<QueryTraceM3u8JobOutcome> QueryTraceM3u8JobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryTraceM3u8JobRequest&, const QueryTraceM3u8JobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTraceM3u8JobAsyncHandler;
			typedef Outcome<Error, Model::QueryWaterMarkTemplateListResult> QueryWaterMarkTemplateListOutcome;
			typedef std::future<QueryWaterMarkTemplateListOutcome> QueryWaterMarkTemplateListOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::QueryWaterMarkTemplateListRequest&, const QueryWaterMarkTemplateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryWaterMarkTemplateListAsyncHandler;
			typedef Outcome<Error, Model::RegisterCustomFaceResult> RegisterCustomFaceOutcome;
			typedef std::future<RegisterCustomFaceOutcome> RegisterCustomFaceOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::RegisterCustomFaceRequest&, const RegisterCustomFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterCustomFaceAsyncHandler;
			typedef Outcome<Error, Model::RegisterCustomViewResult> RegisterCustomViewOutcome;
			typedef std::future<RegisterCustomViewOutcome> RegisterCustomViewOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::RegisterCustomViewRequest&, const RegisterCustomViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterCustomViewAsyncHandler;
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
			typedef Outcome<Error, Model::SubmitAnalysisJobResult> SubmitAnalysisJobOutcome;
			typedef std::future<SubmitAnalysisJobOutcome> SubmitAnalysisJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitAnalysisJobRequest&, const SubmitAnalysisJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAnalysisJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitCopyrightExtractJobResult> SubmitCopyrightExtractJobOutcome;
			typedef std::future<SubmitCopyrightExtractJobOutcome> SubmitCopyrightExtractJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitCopyrightExtractJobRequest&, const SubmitCopyrightExtractJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCopyrightExtractJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitCopyrightJobResult> SubmitCopyrightJobOutcome;
			typedef std::future<SubmitCopyrightJobOutcome> SubmitCopyrightJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitCopyrightJobRequest&, const SubmitCopyrightJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCopyrightJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitFpDBDeleteJobResult> SubmitFpDBDeleteJobOutcome;
			typedef std::future<SubmitFpDBDeleteJobOutcome> SubmitFpDBDeleteJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitFpDBDeleteJobRequest&, const SubmitFpDBDeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFpDBDeleteJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitFpFileDeleteJobResult> SubmitFpFileDeleteJobOutcome;
			typedef std::future<SubmitFpFileDeleteJobOutcome> SubmitFpFileDeleteJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitFpFileDeleteJobRequest&, const SubmitFpFileDeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFpFileDeleteJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitFpShotJobResult> SubmitFpShotJobOutcome;
			typedef std::future<SubmitFpShotJobOutcome> SubmitFpShotJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitFpShotJobRequest&, const SubmitFpShotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFpShotJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitIProductionJobResult> SubmitIProductionJobOutcome;
			typedef std::future<SubmitIProductionJobOutcome> SubmitIProductionJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitIProductionJobRequest&, const SubmitIProductionJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitIProductionJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitImageCopyrightResult> SubmitImageCopyrightOutcome;
			typedef std::future<SubmitImageCopyrightOutcome> SubmitImageCopyrightOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitImageCopyrightRequest&, const SubmitImageCopyrightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitImageCopyrightAsyncHandler;
			typedef Outcome<Error, Model::SubmitJobsResult> SubmitJobsOutcome;
			typedef std::future<SubmitJobsOutcome> SubmitJobsOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitJobsRequest&, const SubmitJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitJobsAsyncHandler;
			typedef Outcome<Error, Model::SubmitMediaCensorJobResult> SubmitMediaCensorJobOutcome;
			typedef std::future<SubmitMediaCensorJobOutcome> SubmitMediaCensorJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitMediaCensorJobRequest&, const SubmitMediaCensorJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMediaCensorJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitMediaInfoJobResult> SubmitMediaInfoJobOutcome;
			typedef std::future<SubmitMediaInfoJobOutcome> SubmitMediaInfoJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitMediaInfoJobRequest&, const SubmitMediaInfoJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMediaInfoJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitSmarttagJobResult> SubmitSmarttagJobOutcome;
			typedef std::future<SubmitSmarttagJobOutcome> SubmitSmarttagJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitSmarttagJobRequest&, const SubmitSmarttagJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSmarttagJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitSnapshotJobResult> SubmitSnapshotJobOutcome;
			typedef std::future<SubmitSnapshotJobOutcome> SubmitSnapshotJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitSnapshotJobRequest&, const SubmitSnapshotJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSnapshotJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitTraceAbJobResult> SubmitTraceAbJobOutcome;
			typedef std::future<SubmitTraceAbJobOutcome> SubmitTraceAbJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitTraceAbJobRequest&, const SubmitTraceAbJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTraceAbJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitTraceExtractJobResult> SubmitTraceExtractJobOutcome;
			typedef std::future<SubmitTraceExtractJobOutcome> SubmitTraceExtractJobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitTraceExtractJobRequest&, const SubmitTraceExtractJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTraceExtractJobAsyncHandler;
			typedef Outcome<Error, Model::SubmitTraceM3u8JobResult> SubmitTraceM3u8JobOutcome;
			typedef std::future<SubmitTraceM3u8JobOutcome> SubmitTraceM3u8JobOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::SubmitTraceM3u8JobRequest&, const SubmitTraceM3u8JobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTraceM3u8JobAsyncHandler;
			typedef Outcome<Error, Model::TagCustomPersonResult> TagCustomPersonOutcome;
			typedef std::future<TagCustomPersonOutcome> TagCustomPersonOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::TagCustomPersonRequest&, const TagCustomPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagCustomPersonAsyncHandler;
			typedef Outcome<Error, Model::UnbindInputBucketResult> UnbindInputBucketOutcome;
			typedef std::future<UnbindInputBucketOutcome> UnbindInputBucketOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UnbindInputBucketRequest&, const UnbindInputBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindInputBucketAsyncHandler;
			typedef Outcome<Error, Model::UnbindOutputBucketResult> UnbindOutputBucketOutcome;
			typedef std::future<UnbindOutputBucketOutcome> UnbindOutputBucketOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UnbindOutputBucketRequest&, const UnbindOutputBucketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindOutputBucketAsyncHandler;
			typedef Outcome<Error, Model::UnregisterCustomFaceResult> UnregisterCustomFaceOutcome;
			typedef std::future<UnregisterCustomFaceOutcome> UnregisterCustomFaceOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UnregisterCustomFaceRequest&, const UnregisterCustomFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnregisterCustomFaceAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateSmarttagTemplateResult> UpdateSmarttagTemplateOutcome;
			typedef std::future<UpdateSmarttagTemplateOutcome> UpdateSmarttagTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateSmarttagTemplateRequest&, const UpdateSmarttagTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSmarttagTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateTemplateResult> UpdateTemplateOutcome;
			typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
			typedef std::function<void(const MtsClient*, const Model::UpdateTemplateRequest&, const UpdateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTemplateAsyncHandler;
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
			AddSmarttagTemplateOutcome addSmarttagTemplate(const Model::AddSmarttagTemplateRequest &request)const;
			void addSmarttagTemplateAsync(const Model::AddSmarttagTemplateRequest& request, const AddSmarttagTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSmarttagTemplateOutcomeCallable addSmarttagTemplateCallable(const Model::AddSmarttagTemplateRequest& request) const;
			AddTemplateOutcome addTemplate(const Model::AddTemplateRequest &request)const;
			void addTemplateAsync(const Model::AddTemplateRequest& request, const AddTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTemplateOutcomeCallable addTemplateCallable(const Model::AddTemplateRequest& request) const;
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
			CreateCustomEntityOutcome createCustomEntity(const Model::CreateCustomEntityRequest &request)const;
			void createCustomEntityAsync(const Model::CreateCustomEntityRequest& request, const CreateCustomEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomEntityOutcomeCallable createCustomEntityCallable(const Model::CreateCustomEntityRequest& request) const;
			CreateCustomGroupOutcome createCustomGroup(const Model::CreateCustomGroupRequest &request)const;
			void createCustomGroupAsync(const Model::CreateCustomGroupRequest& request, const CreateCustomGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomGroupOutcomeCallable createCustomGroupCallable(const Model::CreateCustomGroupRequest& request) const;
			CreateFpShotDBOutcome createFpShotDB(const Model::CreateFpShotDBRequest &request)const;
			void createFpShotDBAsync(const Model::CreateFpShotDBRequest& request, const CreateFpShotDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFpShotDBOutcomeCallable createFpShotDBCallable(const Model::CreateFpShotDBRequest& request) const;
			DeactivateMediaWorkflowOutcome deactivateMediaWorkflow(const Model::DeactivateMediaWorkflowRequest &request)const;
			void deactivateMediaWorkflowAsync(const Model::DeactivateMediaWorkflowRequest& request, const DeactivateMediaWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactivateMediaWorkflowOutcomeCallable deactivateMediaWorkflowCallable(const Model::DeactivateMediaWorkflowRequest& request) const;
			DeleteCustomEntityOutcome deleteCustomEntity(const Model::DeleteCustomEntityRequest &request)const;
			void deleteCustomEntityAsync(const Model::DeleteCustomEntityRequest& request, const DeleteCustomEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomEntityOutcomeCallable deleteCustomEntityCallable(const Model::DeleteCustomEntityRequest& request) const;
			DeleteCustomGroupOutcome deleteCustomGroup(const Model::DeleteCustomGroupRequest &request)const;
			void deleteCustomGroupAsync(const Model::DeleteCustomGroupRequest& request, const DeleteCustomGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomGroupOutcomeCallable deleteCustomGroupCallable(const Model::DeleteCustomGroupRequest& request) const;
			DeleteCustomViewOutcome deleteCustomView(const Model::DeleteCustomViewRequest &request)const;
			void deleteCustomViewAsync(const Model::DeleteCustomViewRequest& request, const DeleteCustomViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomViewOutcomeCallable deleteCustomViewCallable(const Model::DeleteCustomViewRequest& request) const;
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
			DeleteSmarttagTemplateOutcome deleteSmarttagTemplate(const Model::DeleteSmarttagTemplateRequest &request)const;
			void deleteSmarttagTemplateAsync(const Model::DeleteSmarttagTemplateRequest& request, const DeleteSmarttagTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSmarttagTemplateOutcomeCallable deleteSmarttagTemplateCallable(const Model::DeleteSmarttagTemplateRequest& request) const;
			DeleteTemplateOutcome deleteTemplate(const Model::DeleteTemplateRequest &request)const;
			void deleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplateOutcomeCallable deleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;
			DeleteWaterMarkTemplateOutcome deleteWaterMarkTemplate(const Model::DeleteWaterMarkTemplateRequest &request)const;
			void deleteWaterMarkTemplateAsync(const Model::DeleteWaterMarkTemplateRequest& request, const DeleteWaterMarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWaterMarkTemplateOutcomeCallable deleteWaterMarkTemplateCallable(const Model::DeleteWaterMarkTemplateRequest& request) const;
			ImAuditOutcome imAudit(const Model::ImAuditRequest &request)const;
			void imAuditAsync(const Model::ImAuditRequest& request, const ImAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImAuditOutcomeCallable imAuditCallable(const Model::ImAuditRequest& request) const;
			ImportFpShotJobOutcome importFpShotJob(const Model::ImportFpShotJobRequest &request)const;
			void importFpShotJobAsync(const Model::ImportFpShotJobRequest& request, const ImportFpShotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportFpShotJobOutcomeCallable importFpShotJobCallable(const Model::ImportFpShotJobRequest& request) const;
			ListAllMediaBucketOutcome listAllMediaBucket(const Model::ListAllMediaBucketRequest &request)const;
			void listAllMediaBucketAsync(const Model::ListAllMediaBucketRequest& request, const ListAllMediaBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAllMediaBucketOutcomeCallable listAllMediaBucketCallable(const Model::ListAllMediaBucketRequest& request) const;
			ListCustomEntitiesOutcome listCustomEntities(const Model::ListCustomEntitiesRequest &request)const;
			void listCustomEntitiesAsync(const Model::ListCustomEntitiesRequest& request, const ListCustomEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomEntitiesOutcomeCallable listCustomEntitiesCallable(const Model::ListCustomEntitiesRequest& request) const;
			ListCustomGroupsOutcome listCustomGroups(const Model::ListCustomGroupsRequest &request)const;
			void listCustomGroupsAsync(const Model::ListCustomGroupsRequest& request, const ListCustomGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomGroupsOutcomeCallable listCustomGroupsCallable(const Model::ListCustomGroupsRequest& request) const;
			ListCustomPersonsOutcome listCustomPersons(const Model::ListCustomPersonsRequest &request)const;
			void listCustomPersonsAsync(const Model::ListCustomPersonsRequest& request, const ListCustomPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomPersonsOutcomeCallable listCustomPersonsCallable(const Model::ListCustomPersonsRequest& request) const;
			ListCustomViewsOutcome listCustomViews(const Model::ListCustomViewsRequest &request)const;
			void listCustomViewsAsync(const Model::ListCustomViewsRequest& request, const ListCustomViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomViewsOutcomeCallable listCustomViewsCallable(const Model::ListCustomViewsRequest& request) const;
			ListFpShotDBOutcome listFpShotDB(const Model::ListFpShotDBRequest &request)const;
			void listFpShotDBAsync(const Model::ListFpShotDBRequest& request, const ListFpShotDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFpShotDBOutcomeCallable listFpShotDBCallable(const Model::ListFpShotDBRequest& request) const;
			ListFpShotFilesOutcome listFpShotFiles(const Model::ListFpShotFilesRequest &request)const;
			void listFpShotFilesAsync(const Model::ListFpShotFilesRequest& request, const ListFpShotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFpShotFilesOutcomeCallable listFpShotFilesCallable(const Model::ListFpShotFilesRequest& request) const;
			ListFpShotImportJobOutcome listFpShotImportJob(const Model::ListFpShotImportJobRequest &request)const;
			void listFpShotImportJobAsync(const Model::ListFpShotImportJobRequest& request, const ListFpShotImportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFpShotImportJobOutcomeCallable listFpShotImportJobCallable(const Model::ListFpShotImportJobRequest& request) const;
			ListJobOutcome listJob(const Model::ListJobRequest &request)const;
			void listJobAsync(const Model::ListJobRequest& request, const ListJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobOutcomeCallable listJobCallable(const Model::ListJobRequest& request) const;
			ListMediaWorkflowExecutionsOutcome listMediaWorkflowExecutions(const Model::ListMediaWorkflowExecutionsRequest &request)const;
			void listMediaWorkflowExecutionsAsync(const Model::ListMediaWorkflowExecutionsRequest& request, const ListMediaWorkflowExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMediaWorkflowExecutionsOutcomeCallable listMediaWorkflowExecutionsCallable(const Model::ListMediaWorkflowExecutionsRequest& request) const;
			QueryAnalysisJobListOutcome queryAnalysisJobList(const Model::QueryAnalysisJobListRequest &request)const;
			void queryAnalysisJobListAsync(const Model::QueryAnalysisJobListRequest& request, const QueryAnalysisJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAnalysisJobListOutcomeCallable queryAnalysisJobListCallable(const Model::QueryAnalysisJobListRequest& request) const;
			QueryCopyrightExtractJobOutcome queryCopyrightExtractJob(const Model::QueryCopyrightExtractJobRequest &request)const;
			void queryCopyrightExtractJobAsync(const Model::QueryCopyrightExtractJobRequest& request, const QueryCopyrightExtractJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCopyrightExtractJobOutcomeCallable queryCopyrightExtractJobCallable(const Model::QueryCopyrightExtractJobRequest& request) const;
			QueryCopyrightJobOutcome queryCopyrightJob(const Model::QueryCopyrightJobRequest &request)const;
			void queryCopyrightJobAsync(const Model::QueryCopyrightJobRequest& request, const QueryCopyrightJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCopyrightJobOutcomeCallable queryCopyrightJobCallable(const Model::QueryCopyrightJobRequest& request) const;
			QueryFpDBDeleteJobListOutcome queryFpDBDeleteJobList(const Model::QueryFpDBDeleteJobListRequest &request)const;
			void queryFpDBDeleteJobListAsync(const Model::QueryFpDBDeleteJobListRequest& request, const QueryFpDBDeleteJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFpDBDeleteJobListOutcomeCallable queryFpDBDeleteJobListCallable(const Model::QueryFpDBDeleteJobListRequest& request) const;
			QueryFpFileDeleteJobListOutcome queryFpFileDeleteJobList(const Model::QueryFpFileDeleteJobListRequest &request)const;
			void queryFpFileDeleteJobListAsync(const Model::QueryFpFileDeleteJobListRequest& request, const QueryFpFileDeleteJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFpFileDeleteJobListOutcomeCallable queryFpFileDeleteJobListCallable(const Model::QueryFpFileDeleteJobListRequest& request) const;
			QueryFpShotJobListOutcome queryFpShotJobList(const Model::QueryFpShotJobListRequest &request)const;
			void queryFpShotJobListAsync(const Model::QueryFpShotJobListRequest& request, const QueryFpShotJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryFpShotJobListOutcomeCallable queryFpShotJobListCallable(const Model::QueryFpShotJobListRequest& request) const;
			QueryIProductionJobOutcome queryIProductionJob(const Model::QueryIProductionJobRequest &request)const;
			void queryIProductionJobAsync(const Model::QueryIProductionJobRequest& request, const QueryIProductionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIProductionJobOutcomeCallable queryIProductionJobCallable(const Model::QueryIProductionJobRequest& request) const;
			QueryJobListOutcome queryJobList(const Model::QueryJobListRequest &request)const;
			void queryJobListAsync(const Model::QueryJobListRequest& request, const QueryJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryJobListOutcomeCallable queryJobListCallable(const Model::QueryJobListRequest& request) const;
			QueryMediaCensorJobDetailOutcome queryMediaCensorJobDetail(const Model::QueryMediaCensorJobDetailRequest &request)const;
			void queryMediaCensorJobDetailAsync(const Model::QueryMediaCensorJobDetailRequest& request, const QueryMediaCensorJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaCensorJobDetailOutcomeCallable queryMediaCensorJobDetailCallable(const Model::QueryMediaCensorJobDetailRequest& request) const;
			QueryMediaCensorJobListOutcome queryMediaCensorJobList(const Model::QueryMediaCensorJobListRequest &request)const;
			void queryMediaCensorJobListAsync(const Model::QueryMediaCensorJobListRequest& request, const QueryMediaCensorJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMediaCensorJobListOutcomeCallable queryMediaCensorJobListCallable(const Model::QueryMediaCensorJobListRequest& request) const;
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
			QuerySmarttagJobOutcome querySmarttagJob(const Model::QuerySmarttagJobRequest &request)const;
			void querySmarttagJobAsync(const Model::QuerySmarttagJobRequest& request, const QuerySmarttagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySmarttagJobOutcomeCallable querySmarttagJobCallable(const Model::QuerySmarttagJobRequest& request) const;
			QuerySmarttagTemplateListOutcome querySmarttagTemplateList(const Model::QuerySmarttagTemplateListRequest &request)const;
			void querySmarttagTemplateListAsync(const Model::QuerySmarttagTemplateListRequest& request, const QuerySmarttagTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySmarttagTemplateListOutcomeCallable querySmarttagTemplateListCallable(const Model::QuerySmarttagTemplateListRequest& request) const;
			QuerySnapshotJobListOutcome querySnapshotJobList(const Model::QuerySnapshotJobListRequest &request)const;
			void querySnapshotJobListAsync(const Model::QuerySnapshotJobListRequest& request, const QuerySnapshotJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySnapshotJobListOutcomeCallable querySnapshotJobListCallable(const Model::QuerySnapshotJobListRequest& request) const;
			QueryTemplateListOutcome queryTemplateList(const Model::QueryTemplateListRequest &request)const;
			void queryTemplateListAsync(const Model::QueryTemplateListRequest& request, const QueryTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTemplateListOutcomeCallable queryTemplateListCallable(const Model::QueryTemplateListRequest& request) const;
			QueryTraceAbJobOutcome queryTraceAbJob(const Model::QueryTraceAbJobRequest &request)const;
			void queryTraceAbJobAsync(const Model::QueryTraceAbJobRequest& request, const QueryTraceAbJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTraceAbJobOutcomeCallable queryTraceAbJobCallable(const Model::QueryTraceAbJobRequest& request) const;
			QueryTraceExtractJobOutcome queryTraceExtractJob(const Model::QueryTraceExtractJobRequest &request)const;
			void queryTraceExtractJobAsync(const Model::QueryTraceExtractJobRequest& request, const QueryTraceExtractJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTraceExtractJobOutcomeCallable queryTraceExtractJobCallable(const Model::QueryTraceExtractJobRequest& request) const;
			QueryTraceM3u8JobOutcome queryTraceM3u8Job(const Model::QueryTraceM3u8JobRequest &request)const;
			void queryTraceM3u8JobAsync(const Model::QueryTraceM3u8JobRequest& request, const QueryTraceM3u8JobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTraceM3u8JobOutcomeCallable queryTraceM3u8JobCallable(const Model::QueryTraceM3u8JobRequest& request) const;
			QueryWaterMarkTemplateListOutcome queryWaterMarkTemplateList(const Model::QueryWaterMarkTemplateListRequest &request)const;
			void queryWaterMarkTemplateListAsync(const Model::QueryWaterMarkTemplateListRequest& request, const QueryWaterMarkTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryWaterMarkTemplateListOutcomeCallable queryWaterMarkTemplateListCallable(const Model::QueryWaterMarkTemplateListRequest& request) const;
			RegisterCustomFaceOutcome registerCustomFace(const Model::RegisterCustomFaceRequest &request)const;
			void registerCustomFaceAsync(const Model::RegisterCustomFaceRequest& request, const RegisterCustomFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterCustomFaceOutcomeCallable registerCustomFaceCallable(const Model::RegisterCustomFaceRequest& request) const;
			RegisterCustomViewOutcome registerCustomView(const Model::RegisterCustomViewRequest &request)const;
			void registerCustomViewAsync(const Model::RegisterCustomViewRequest& request, const RegisterCustomViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterCustomViewOutcomeCallable registerCustomViewCallable(const Model::RegisterCustomViewRequest& request) const;
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
			SubmitAnalysisJobOutcome submitAnalysisJob(const Model::SubmitAnalysisJobRequest &request)const;
			void submitAnalysisJobAsync(const Model::SubmitAnalysisJobRequest& request, const SubmitAnalysisJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitAnalysisJobOutcomeCallable submitAnalysisJobCallable(const Model::SubmitAnalysisJobRequest& request) const;
			SubmitCopyrightExtractJobOutcome submitCopyrightExtractJob(const Model::SubmitCopyrightExtractJobRequest &request)const;
			void submitCopyrightExtractJobAsync(const Model::SubmitCopyrightExtractJobRequest& request, const SubmitCopyrightExtractJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCopyrightExtractJobOutcomeCallable submitCopyrightExtractJobCallable(const Model::SubmitCopyrightExtractJobRequest& request) const;
			SubmitCopyrightJobOutcome submitCopyrightJob(const Model::SubmitCopyrightJobRequest &request)const;
			void submitCopyrightJobAsync(const Model::SubmitCopyrightJobRequest& request, const SubmitCopyrightJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitCopyrightJobOutcomeCallable submitCopyrightJobCallable(const Model::SubmitCopyrightJobRequest& request) const;
			SubmitFpDBDeleteJobOutcome submitFpDBDeleteJob(const Model::SubmitFpDBDeleteJobRequest &request)const;
			void submitFpDBDeleteJobAsync(const Model::SubmitFpDBDeleteJobRequest& request, const SubmitFpDBDeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFpDBDeleteJobOutcomeCallable submitFpDBDeleteJobCallable(const Model::SubmitFpDBDeleteJobRequest& request) const;
			SubmitFpFileDeleteJobOutcome submitFpFileDeleteJob(const Model::SubmitFpFileDeleteJobRequest &request)const;
			void submitFpFileDeleteJobAsync(const Model::SubmitFpFileDeleteJobRequest& request, const SubmitFpFileDeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFpFileDeleteJobOutcomeCallable submitFpFileDeleteJobCallable(const Model::SubmitFpFileDeleteJobRequest& request) const;
			SubmitFpShotJobOutcome submitFpShotJob(const Model::SubmitFpShotJobRequest &request)const;
			void submitFpShotJobAsync(const Model::SubmitFpShotJobRequest& request, const SubmitFpShotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFpShotJobOutcomeCallable submitFpShotJobCallable(const Model::SubmitFpShotJobRequest& request) const;
			SubmitIProductionJobOutcome submitIProductionJob(const Model::SubmitIProductionJobRequest &request)const;
			void submitIProductionJobAsync(const Model::SubmitIProductionJobRequest& request, const SubmitIProductionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitIProductionJobOutcomeCallable submitIProductionJobCallable(const Model::SubmitIProductionJobRequest& request) const;
			SubmitImageCopyrightOutcome submitImageCopyright(const Model::SubmitImageCopyrightRequest &request)const;
			void submitImageCopyrightAsync(const Model::SubmitImageCopyrightRequest& request, const SubmitImageCopyrightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitImageCopyrightOutcomeCallable submitImageCopyrightCallable(const Model::SubmitImageCopyrightRequest& request) const;
			SubmitJobsOutcome submitJobs(const Model::SubmitJobsRequest &request)const;
			void submitJobsAsync(const Model::SubmitJobsRequest& request, const SubmitJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitJobsOutcomeCallable submitJobsCallable(const Model::SubmitJobsRequest& request) const;
			SubmitMediaCensorJobOutcome submitMediaCensorJob(const Model::SubmitMediaCensorJobRequest &request)const;
			void submitMediaCensorJobAsync(const Model::SubmitMediaCensorJobRequest& request, const SubmitMediaCensorJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMediaCensorJobOutcomeCallable submitMediaCensorJobCallable(const Model::SubmitMediaCensorJobRequest& request) const;
			SubmitMediaInfoJobOutcome submitMediaInfoJob(const Model::SubmitMediaInfoJobRequest &request)const;
			void submitMediaInfoJobAsync(const Model::SubmitMediaInfoJobRequest& request, const SubmitMediaInfoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitMediaInfoJobOutcomeCallable submitMediaInfoJobCallable(const Model::SubmitMediaInfoJobRequest& request) const;
			SubmitSmarttagJobOutcome submitSmarttagJob(const Model::SubmitSmarttagJobRequest &request)const;
			void submitSmarttagJobAsync(const Model::SubmitSmarttagJobRequest& request, const SubmitSmarttagJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSmarttagJobOutcomeCallable submitSmarttagJobCallable(const Model::SubmitSmarttagJobRequest& request) const;
			SubmitSnapshotJobOutcome submitSnapshotJob(const Model::SubmitSnapshotJobRequest &request)const;
			void submitSnapshotJobAsync(const Model::SubmitSnapshotJobRequest& request, const SubmitSnapshotJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSnapshotJobOutcomeCallable submitSnapshotJobCallable(const Model::SubmitSnapshotJobRequest& request) const;
			SubmitTraceAbJobOutcome submitTraceAbJob(const Model::SubmitTraceAbJobRequest &request)const;
			void submitTraceAbJobAsync(const Model::SubmitTraceAbJobRequest& request, const SubmitTraceAbJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTraceAbJobOutcomeCallable submitTraceAbJobCallable(const Model::SubmitTraceAbJobRequest& request) const;
			SubmitTraceExtractJobOutcome submitTraceExtractJob(const Model::SubmitTraceExtractJobRequest &request)const;
			void submitTraceExtractJobAsync(const Model::SubmitTraceExtractJobRequest& request, const SubmitTraceExtractJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTraceExtractJobOutcomeCallable submitTraceExtractJobCallable(const Model::SubmitTraceExtractJobRequest& request) const;
			SubmitTraceM3u8JobOutcome submitTraceM3u8Job(const Model::SubmitTraceM3u8JobRequest &request)const;
			void submitTraceM3u8JobAsync(const Model::SubmitTraceM3u8JobRequest& request, const SubmitTraceM3u8JobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitTraceM3u8JobOutcomeCallable submitTraceM3u8JobCallable(const Model::SubmitTraceM3u8JobRequest& request) const;
			TagCustomPersonOutcome tagCustomPerson(const Model::TagCustomPersonRequest &request)const;
			void tagCustomPersonAsync(const Model::TagCustomPersonRequest& request, const TagCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagCustomPersonOutcomeCallable tagCustomPersonCallable(const Model::TagCustomPersonRequest& request) const;
			UnbindInputBucketOutcome unbindInputBucket(const Model::UnbindInputBucketRequest &request)const;
			void unbindInputBucketAsync(const Model::UnbindInputBucketRequest& request, const UnbindInputBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindInputBucketOutcomeCallable unbindInputBucketCallable(const Model::UnbindInputBucketRequest& request) const;
			UnbindOutputBucketOutcome unbindOutputBucket(const Model::UnbindOutputBucketRequest &request)const;
			void unbindOutputBucketAsync(const Model::UnbindOutputBucketRequest& request, const UnbindOutputBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindOutputBucketOutcomeCallable unbindOutputBucketCallable(const Model::UnbindOutputBucketRequest& request) const;
			UnregisterCustomFaceOutcome unregisterCustomFace(const Model::UnregisterCustomFaceRequest &request)const;
			void unregisterCustomFaceAsync(const Model::UnregisterCustomFaceRequest& request, const UnregisterCustomFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnregisterCustomFaceOutcomeCallable unregisterCustomFaceCallable(const Model::UnregisterCustomFaceRequest& request) const;
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
			UpdateSmarttagTemplateOutcome updateSmarttagTemplate(const Model::UpdateSmarttagTemplateRequest &request)const;
			void updateSmarttagTemplateAsync(const Model::UpdateSmarttagTemplateRequest& request, const UpdateSmarttagTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSmarttagTemplateOutcomeCallable updateSmarttagTemplateCallable(const Model::UpdateSmarttagTemplateRequest& request) const;
			UpdateTemplateOutcome updateTemplate(const Model::UpdateTemplateRequest &request)const;
			void updateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTemplateOutcomeCallable updateTemplateCallable(const Model::UpdateTemplateRequest& request) const;
			UpdateWaterMarkTemplateOutcome updateWaterMarkTemplate(const Model::UpdateWaterMarkTemplateRequest &request)const;
			void updateWaterMarkTemplateAsync(const Model::UpdateWaterMarkTemplateRequest& request, const UpdateWaterMarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWaterMarkTemplateOutcomeCallable updateWaterMarkTemplateCallable(const Model::UpdateWaterMarkTemplateRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_MTS_MTSCLIENT_H_
