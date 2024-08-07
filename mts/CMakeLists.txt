#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(mts_public_header 
	include/alibabacloud/mts/MtsClient.h
	include/alibabacloud/mts/MtsExport.h )

set(mts_public_header_model 
	include/alibabacloud/mts/model/ActivateMediaWorkflowRequest.h
	include/alibabacloud/mts/model/ActivateMediaWorkflowResult.h
	include/alibabacloud/mts/model/AddMediaRequest.h
	include/alibabacloud/mts/model/AddMediaResult.h
	include/alibabacloud/mts/model/AddMediaTagRequest.h
	include/alibabacloud/mts/model/AddMediaTagResult.h
	include/alibabacloud/mts/model/AddMediaWorkflowRequest.h
	include/alibabacloud/mts/model/AddMediaWorkflowResult.h
	include/alibabacloud/mts/model/AddPipelineRequest.h
	include/alibabacloud/mts/model/AddPipelineResult.h
	include/alibabacloud/mts/model/AddSmarttagTemplateRequest.h
	include/alibabacloud/mts/model/AddSmarttagTemplateResult.h
	include/alibabacloud/mts/model/AddTemplateRequest.h
	include/alibabacloud/mts/model/AddTemplateResult.h
	include/alibabacloud/mts/model/AddWaterMarkTemplateRequest.h
	include/alibabacloud/mts/model/AddWaterMarkTemplateResult.h
	include/alibabacloud/mts/model/BindInputBucketRequest.h
	include/alibabacloud/mts/model/BindInputBucketResult.h
	include/alibabacloud/mts/model/BindOutputBucketRequest.h
	include/alibabacloud/mts/model/BindOutputBucketResult.h
	include/alibabacloud/mts/model/CancelJobRequest.h
	include/alibabacloud/mts/model/CancelJobResult.h
	include/alibabacloud/mts/model/CreateCustomEntityRequest.h
	include/alibabacloud/mts/model/CreateCustomEntityResult.h
	include/alibabacloud/mts/model/CreateCustomGroupRequest.h
	include/alibabacloud/mts/model/CreateCustomGroupResult.h
	include/alibabacloud/mts/model/CreateFpShotDBRequest.h
	include/alibabacloud/mts/model/CreateFpShotDBResult.h
	include/alibabacloud/mts/model/DeactivateMediaWorkflowRequest.h
	include/alibabacloud/mts/model/DeactivateMediaWorkflowResult.h
	include/alibabacloud/mts/model/DeleteCustomEntityRequest.h
	include/alibabacloud/mts/model/DeleteCustomEntityResult.h
	include/alibabacloud/mts/model/DeleteCustomGroupRequest.h
	include/alibabacloud/mts/model/DeleteCustomGroupResult.h
	include/alibabacloud/mts/model/DeleteCustomViewRequest.h
	include/alibabacloud/mts/model/DeleteCustomViewResult.h
	include/alibabacloud/mts/model/DeleteMediaRequest.h
	include/alibabacloud/mts/model/DeleteMediaResult.h
	include/alibabacloud/mts/model/DeleteMediaTagRequest.h
	include/alibabacloud/mts/model/DeleteMediaTagResult.h
	include/alibabacloud/mts/model/DeleteMediaWorkflowRequest.h
	include/alibabacloud/mts/model/DeleteMediaWorkflowResult.h
	include/alibabacloud/mts/model/DeletePipelineRequest.h
	include/alibabacloud/mts/model/DeletePipelineResult.h
	include/alibabacloud/mts/model/DeleteSmarttagTemplateRequest.h
	include/alibabacloud/mts/model/DeleteSmarttagTemplateResult.h
	include/alibabacloud/mts/model/DeleteTemplateRequest.h
	include/alibabacloud/mts/model/DeleteTemplateResult.h
	include/alibabacloud/mts/model/DeleteWaterMarkTemplateRequest.h
	include/alibabacloud/mts/model/DeleteWaterMarkTemplateResult.h
	include/alibabacloud/mts/model/ImAuditRequest.h
	include/alibabacloud/mts/model/ImAuditResult.h
	include/alibabacloud/mts/model/ImportFpShotJobRequest.h
	include/alibabacloud/mts/model/ImportFpShotJobResult.h
	include/alibabacloud/mts/model/ListAllMediaBucketRequest.h
	include/alibabacloud/mts/model/ListAllMediaBucketResult.h
	include/alibabacloud/mts/model/ListCustomEntitiesRequest.h
	include/alibabacloud/mts/model/ListCustomEntitiesResult.h
	include/alibabacloud/mts/model/ListCustomGroupsRequest.h
	include/alibabacloud/mts/model/ListCustomGroupsResult.h
	include/alibabacloud/mts/model/ListCustomPersonsRequest.h
	include/alibabacloud/mts/model/ListCustomPersonsResult.h
	include/alibabacloud/mts/model/ListCustomViewsRequest.h
	include/alibabacloud/mts/model/ListCustomViewsResult.h
	include/alibabacloud/mts/model/ListFpShotDBRequest.h
	include/alibabacloud/mts/model/ListFpShotDBResult.h
	include/alibabacloud/mts/model/ListFpShotFilesRequest.h
	include/alibabacloud/mts/model/ListFpShotFilesResult.h
	include/alibabacloud/mts/model/ListFpShotImportJobRequest.h
	include/alibabacloud/mts/model/ListFpShotImportJobResult.h
	include/alibabacloud/mts/model/ListJobRequest.h
	include/alibabacloud/mts/model/ListJobResult.h
	include/alibabacloud/mts/model/ListMediaWorkflowExecutionsRequest.h
	include/alibabacloud/mts/model/ListMediaWorkflowExecutionsResult.h
	include/alibabacloud/mts/model/QueryAnalysisJobListRequest.h
	include/alibabacloud/mts/model/QueryAnalysisJobListResult.h
	include/alibabacloud/mts/model/QueryCopyrightExtractJobRequest.h
	include/alibabacloud/mts/model/QueryCopyrightExtractJobResult.h
	include/alibabacloud/mts/model/QueryCopyrightJobRequest.h
	include/alibabacloud/mts/model/QueryCopyrightJobResult.h
	include/alibabacloud/mts/model/QueryFpDBDeleteJobListRequest.h
	include/alibabacloud/mts/model/QueryFpDBDeleteJobListResult.h
	include/alibabacloud/mts/model/QueryFpFileDeleteJobListRequest.h
	include/alibabacloud/mts/model/QueryFpFileDeleteJobListResult.h
	include/alibabacloud/mts/model/QueryFpShotJobListRequest.h
	include/alibabacloud/mts/model/QueryFpShotJobListResult.h
	include/alibabacloud/mts/model/QueryIProductionJobRequest.h
	include/alibabacloud/mts/model/QueryIProductionJobResult.h
	include/alibabacloud/mts/model/QueryJobListRequest.h
	include/alibabacloud/mts/model/QueryJobListResult.h
	include/alibabacloud/mts/model/QueryMediaCensorJobDetailRequest.h
	include/alibabacloud/mts/model/QueryMediaCensorJobDetailResult.h
	include/alibabacloud/mts/model/QueryMediaCensorJobListRequest.h
	include/alibabacloud/mts/model/QueryMediaCensorJobListResult.h
	include/alibabacloud/mts/model/QueryMediaInfoJobListRequest.h
	include/alibabacloud/mts/model/QueryMediaInfoJobListResult.h
	include/alibabacloud/mts/model/QueryMediaListRequest.h
	include/alibabacloud/mts/model/QueryMediaListResult.h
	include/alibabacloud/mts/model/QueryMediaListByURLRequest.h
	include/alibabacloud/mts/model/QueryMediaListByURLResult.h
	include/alibabacloud/mts/model/QueryMediaWorkflowExecutionListRequest.h
	include/alibabacloud/mts/model/QueryMediaWorkflowExecutionListResult.h
	include/alibabacloud/mts/model/QueryMediaWorkflowListRequest.h
	include/alibabacloud/mts/model/QueryMediaWorkflowListResult.h
	include/alibabacloud/mts/model/QueryPipelineListRequest.h
	include/alibabacloud/mts/model/QueryPipelineListResult.h
	include/alibabacloud/mts/model/QuerySmarttagJobRequest.h
	include/alibabacloud/mts/model/QuerySmarttagJobResult.h
	include/alibabacloud/mts/model/QuerySmarttagTemplateListRequest.h
	include/alibabacloud/mts/model/QuerySmarttagTemplateListResult.h
	include/alibabacloud/mts/model/QuerySnapshotJobListRequest.h
	include/alibabacloud/mts/model/QuerySnapshotJobListResult.h
	include/alibabacloud/mts/model/QueryTemplateListRequest.h
	include/alibabacloud/mts/model/QueryTemplateListResult.h
	include/alibabacloud/mts/model/QueryTraceAbJobRequest.h
	include/alibabacloud/mts/model/QueryTraceAbJobResult.h
	include/alibabacloud/mts/model/QueryTraceExtractJobRequest.h
	include/alibabacloud/mts/model/QueryTraceExtractJobResult.h
	include/alibabacloud/mts/model/QueryTraceM3u8JobRequest.h
	include/alibabacloud/mts/model/QueryTraceM3u8JobResult.h
	include/alibabacloud/mts/model/QueryWaterMarkTemplateListRequest.h
	include/alibabacloud/mts/model/QueryWaterMarkTemplateListResult.h
	include/alibabacloud/mts/model/RegisterCustomFaceRequest.h
	include/alibabacloud/mts/model/RegisterCustomFaceResult.h
	include/alibabacloud/mts/model/RegisterCustomViewRequest.h
	include/alibabacloud/mts/model/RegisterCustomViewResult.h
	include/alibabacloud/mts/model/SearchMediaWorkflowRequest.h
	include/alibabacloud/mts/model/SearchMediaWorkflowResult.h
	include/alibabacloud/mts/model/SearchPipelineRequest.h
	include/alibabacloud/mts/model/SearchPipelineResult.h
	include/alibabacloud/mts/model/SearchTemplateRequest.h
	include/alibabacloud/mts/model/SearchTemplateResult.h
	include/alibabacloud/mts/model/SearchWaterMarkTemplateRequest.h
	include/alibabacloud/mts/model/SearchWaterMarkTemplateResult.h
	include/alibabacloud/mts/model/SubmitAnalysisJobRequest.h
	include/alibabacloud/mts/model/SubmitAnalysisJobResult.h
	include/alibabacloud/mts/model/SubmitCopyrightExtractJobRequest.h
	include/alibabacloud/mts/model/SubmitCopyrightExtractJobResult.h
	include/alibabacloud/mts/model/SubmitCopyrightJobRequest.h
	include/alibabacloud/mts/model/SubmitCopyrightJobResult.h
	include/alibabacloud/mts/model/SubmitFpDBDeleteJobRequest.h
	include/alibabacloud/mts/model/SubmitFpDBDeleteJobResult.h
	include/alibabacloud/mts/model/SubmitFpFileDeleteJobRequest.h
	include/alibabacloud/mts/model/SubmitFpFileDeleteJobResult.h
	include/alibabacloud/mts/model/SubmitFpShotJobRequest.h
	include/alibabacloud/mts/model/SubmitFpShotJobResult.h
	include/alibabacloud/mts/model/SubmitIProductionJobRequest.h
	include/alibabacloud/mts/model/SubmitIProductionJobResult.h
	include/alibabacloud/mts/model/SubmitImageCopyrightRequest.h
	include/alibabacloud/mts/model/SubmitImageCopyrightResult.h
	include/alibabacloud/mts/model/SubmitJobsRequest.h
	include/alibabacloud/mts/model/SubmitJobsResult.h
	include/alibabacloud/mts/model/SubmitMediaCensorJobRequest.h
	include/alibabacloud/mts/model/SubmitMediaCensorJobResult.h
	include/alibabacloud/mts/model/SubmitMediaInfoJobRequest.h
	include/alibabacloud/mts/model/SubmitMediaInfoJobResult.h
	include/alibabacloud/mts/model/SubmitSmarttagJobRequest.h
	include/alibabacloud/mts/model/SubmitSmarttagJobResult.h
	include/alibabacloud/mts/model/SubmitSnapshotJobRequest.h
	include/alibabacloud/mts/model/SubmitSnapshotJobResult.h
	include/alibabacloud/mts/model/SubmitTraceAbJobRequest.h
	include/alibabacloud/mts/model/SubmitTraceAbJobResult.h
	include/alibabacloud/mts/model/SubmitTraceExtractJobRequest.h
	include/alibabacloud/mts/model/SubmitTraceExtractJobResult.h
	include/alibabacloud/mts/model/SubmitTraceM3u8JobRequest.h
	include/alibabacloud/mts/model/SubmitTraceM3u8JobResult.h
	include/alibabacloud/mts/model/TagCustomPersonRequest.h
	include/alibabacloud/mts/model/TagCustomPersonResult.h
	include/alibabacloud/mts/model/UnbindInputBucketRequest.h
	include/alibabacloud/mts/model/UnbindInputBucketResult.h
	include/alibabacloud/mts/model/UnbindOutputBucketRequest.h
	include/alibabacloud/mts/model/UnbindOutputBucketResult.h
	include/alibabacloud/mts/model/UnregisterCustomFaceRequest.h
	include/alibabacloud/mts/model/UnregisterCustomFaceResult.h
	include/alibabacloud/mts/model/UpdateMediaRequest.h
	include/alibabacloud/mts/model/UpdateMediaResult.h
	include/alibabacloud/mts/model/UpdateMediaCategoryRequest.h
	include/alibabacloud/mts/model/UpdateMediaCategoryResult.h
	include/alibabacloud/mts/model/UpdateMediaCoverRequest.h
	include/alibabacloud/mts/model/UpdateMediaCoverResult.h
	include/alibabacloud/mts/model/UpdateMediaPublishStateRequest.h
	include/alibabacloud/mts/model/UpdateMediaPublishStateResult.h
	include/alibabacloud/mts/model/UpdateMediaWorkflowRequest.h
	include/alibabacloud/mts/model/UpdateMediaWorkflowResult.h
	include/alibabacloud/mts/model/UpdateMediaWorkflowTriggerModeRequest.h
	include/alibabacloud/mts/model/UpdateMediaWorkflowTriggerModeResult.h
	include/alibabacloud/mts/model/UpdatePipelineRequest.h
	include/alibabacloud/mts/model/UpdatePipelineResult.h
	include/alibabacloud/mts/model/UpdateSmarttagTemplateRequest.h
	include/alibabacloud/mts/model/UpdateSmarttagTemplateResult.h
	include/alibabacloud/mts/model/UpdateTemplateRequest.h
	include/alibabacloud/mts/model/UpdateTemplateResult.h
	include/alibabacloud/mts/model/UpdateWaterMarkTemplateRequest.h
	include/alibabacloud/mts/model/UpdateWaterMarkTemplateResult.h )

set(mts_src 
	src/MtsClient.cc
	src/model/ActivateMediaWorkflowRequest.cc
	src/model/ActivateMediaWorkflowResult.cc
	src/model/AddMediaRequest.cc
	src/model/AddMediaResult.cc
	src/model/AddMediaTagRequest.cc
	src/model/AddMediaTagResult.cc
	src/model/AddMediaWorkflowRequest.cc
	src/model/AddMediaWorkflowResult.cc
	src/model/AddPipelineRequest.cc
	src/model/AddPipelineResult.cc
	src/model/AddSmarttagTemplateRequest.cc
	src/model/AddSmarttagTemplateResult.cc
	src/model/AddTemplateRequest.cc
	src/model/AddTemplateResult.cc
	src/model/AddWaterMarkTemplateRequest.cc
	src/model/AddWaterMarkTemplateResult.cc
	src/model/BindInputBucketRequest.cc
	src/model/BindInputBucketResult.cc
	src/model/BindOutputBucketRequest.cc
	src/model/BindOutputBucketResult.cc
	src/model/CancelJobRequest.cc
	src/model/CancelJobResult.cc
	src/model/CreateCustomEntityRequest.cc
	src/model/CreateCustomEntityResult.cc
	src/model/CreateCustomGroupRequest.cc
	src/model/CreateCustomGroupResult.cc
	src/model/CreateFpShotDBRequest.cc
	src/model/CreateFpShotDBResult.cc
	src/model/DeactivateMediaWorkflowRequest.cc
	src/model/DeactivateMediaWorkflowResult.cc
	src/model/DeleteCustomEntityRequest.cc
	src/model/DeleteCustomEntityResult.cc
	src/model/DeleteCustomGroupRequest.cc
	src/model/DeleteCustomGroupResult.cc
	src/model/DeleteCustomViewRequest.cc
	src/model/DeleteCustomViewResult.cc
	src/model/DeleteMediaRequest.cc
	src/model/DeleteMediaResult.cc
	src/model/DeleteMediaTagRequest.cc
	src/model/DeleteMediaTagResult.cc
	src/model/DeleteMediaWorkflowRequest.cc
	src/model/DeleteMediaWorkflowResult.cc
	src/model/DeletePipelineRequest.cc
	src/model/DeletePipelineResult.cc
	src/model/DeleteSmarttagTemplateRequest.cc
	src/model/DeleteSmarttagTemplateResult.cc
	src/model/DeleteTemplateRequest.cc
	src/model/DeleteTemplateResult.cc
	src/model/DeleteWaterMarkTemplateRequest.cc
	src/model/DeleteWaterMarkTemplateResult.cc
	src/model/ImAuditRequest.cc
	src/model/ImAuditResult.cc
	src/model/ImportFpShotJobRequest.cc
	src/model/ImportFpShotJobResult.cc
	src/model/ListAllMediaBucketRequest.cc
	src/model/ListAllMediaBucketResult.cc
	src/model/ListCustomEntitiesRequest.cc
	src/model/ListCustomEntitiesResult.cc
	src/model/ListCustomGroupsRequest.cc
	src/model/ListCustomGroupsResult.cc
	src/model/ListCustomPersonsRequest.cc
	src/model/ListCustomPersonsResult.cc
	src/model/ListCustomViewsRequest.cc
	src/model/ListCustomViewsResult.cc
	src/model/ListFpShotDBRequest.cc
	src/model/ListFpShotDBResult.cc
	src/model/ListFpShotFilesRequest.cc
	src/model/ListFpShotFilesResult.cc
	src/model/ListFpShotImportJobRequest.cc
	src/model/ListFpShotImportJobResult.cc
	src/model/ListJobRequest.cc
	src/model/ListJobResult.cc
	src/model/ListMediaWorkflowExecutionsRequest.cc
	src/model/ListMediaWorkflowExecutionsResult.cc
	src/model/QueryAnalysisJobListRequest.cc
	src/model/QueryAnalysisJobListResult.cc
	src/model/QueryCopyrightExtractJobRequest.cc
	src/model/QueryCopyrightExtractJobResult.cc
	src/model/QueryCopyrightJobRequest.cc
	src/model/QueryCopyrightJobResult.cc
	src/model/QueryFpDBDeleteJobListRequest.cc
	src/model/QueryFpDBDeleteJobListResult.cc
	src/model/QueryFpFileDeleteJobListRequest.cc
	src/model/QueryFpFileDeleteJobListResult.cc
	src/model/QueryFpShotJobListRequest.cc
	src/model/QueryFpShotJobListResult.cc
	src/model/QueryIProductionJobRequest.cc
	src/model/QueryIProductionJobResult.cc
	src/model/QueryJobListRequest.cc
	src/model/QueryJobListResult.cc
	src/model/QueryMediaCensorJobDetailRequest.cc
	src/model/QueryMediaCensorJobDetailResult.cc
	src/model/QueryMediaCensorJobListRequest.cc
	src/model/QueryMediaCensorJobListResult.cc
	src/model/QueryMediaInfoJobListRequest.cc
	src/model/QueryMediaInfoJobListResult.cc
	src/model/QueryMediaListRequest.cc
	src/model/QueryMediaListResult.cc
	src/model/QueryMediaListByURLRequest.cc
	src/model/QueryMediaListByURLResult.cc
	src/model/QueryMediaWorkflowExecutionListRequest.cc
	src/model/QueryMediaWorkflowExecutionListResult.cc
	src/model/QueryMediaWorkflowListRequest.cc
	src/model/QueryMediaWorkflowListResult.cc
	src/model/QueryPipelineListRequest.cc
	src/model/QueryPipelineListResult.cc
	src/model/QuerySmarttagJobRequest.cc
	src/model/QuerySmarttagJobResult.cc
	src/model/QuerySmarttagTemplateListRequest.cc
	src/model/QuerySmarttagTemplateListResult.cc
	src/model/QuerySnapshotJobListRequest.cc
	src/model/QuerySnapshotJobListResult.cc
	src/model/QueryTemplateListRequest.cc
	src/model/QueryTemplateListResult.cc
	src/model/QueryTraceAbJobRequest.cc
	src/model/QueryTraceAbJobResult.cc
	src/model/QueryTraceExtractJobRequest.cc
	src/model/QueryTraceExtractJobResult.cc
	src/model/QueryTraceM3u8JobRequest.cc
	src/model/QueryTraceM3u8JobResult.cc
	src/model/QueryWaterMarkTemplateListRequest.cc
	src/model/QueryWaterMarkTemplateListResult.cc
	src/model/RegisterCustomFaceRequest.cc
	src/model/RegisterCustomFaceResult.cc
	src/model/RegisterCustomViewRequest.cc
	src/model/RegisterCustomViewResult.cc
	src/model/SearchMediaWorkflowRequest.cc
	src/model/SearchMediaWorkflowResult.cc
	src/model/SearchPipelineRequest.cc
	src/model/SearchPipelineResult.cc
	src/model/SearchTemplateRequest.cc
	src/model/SearchTemplateResult.cc
	src/model/SearchWaterMarkTemplateRequest.cc
	src/model/SearchWaterMarkTemplateResult.cc
	src/model/SubmitAnalysisJobRequest.cc
	src/model/SubmitAnalysisJobResult.cc
	src/model/SubmitCopyrightExtractJobRequest.cc
	src/model/SubmitCopyrightExtractJobResult.cc
	src/model/SubmitCopyrightJobRequest.cc
	src/model/SubmitCopyrightJobResult.cc
	src/model/SubmitFpDBDeleteJobRequest.cc
	src/model/SubmitFpDBDeleteJobResult.cc
	src/model/SubmitFpFileDeleteJobRequest.cc
	src/model/SubmitFpFileDeleteJobResult.cc
	src/model/SubmitFpShotJobRequest.cc
	src/model/SubmitFpShotJobResult.cc
	src/model/SubmitIProductionJobRequest.cc
	src/model/SubmitIProductionJobResult.cc
	src/model/SubmitImageCopyrightRequest.cc
	src/model/SubmitImageCopyrightResult.cc
	src/model/SubmitJobsRequest.cc
	src/model/SubmitJobsResult.cc
	src/model/SubmitMediaCensorJobRequest.cc
	src/model/SubmitMediaCensorJobResult.cc
	src/model/SubmitMediaInfoJobRequest.cc
	src/model/SubmitMediaInfoJobResult.cc
	src/model/SubmitSmarttagJobRequest.cc
	src/model/SubmitSmarttagJobResult.cc
	src/model/SubmitSnapshotJobRequest.cc
	src/model/SubmitSnapshotJobResult.cc
	src/model/SubmitTraceAbJobRequest.cc
	src/model/SubmitTraceAbJobResult.cc
	src/model/SubmitTraceExtractJobRequest.cc
	src/model/SubmitTraceExtractJobResult.cc
	src/model/SubmitTraceM3u8JobRequest.cc
	src/model/SubmitTraceM3u8JobResult.cc
	src/model/TagCustomPersonRequest.cc
	src/model/TagCustomPersonResult.cc
	src/model/UnbindInputBucketRequest.cc
	src/model/UnbindInputBucketResult.cc
	src/model/UnbindOutputBucketRequest.cc
	src/model/UnbindOutputBucketResult.cc
	src/model/UnregisterCustomFaceRequest.cc
	src/model/UnregisterCustomFaceResult.cc
	src/model/UpdateMediaRequest.cc
	src/model/UpdateMediaResult.cc
	src/model/UpdateMediaCategoryRequest.cc
	src/model/UpdateMediaCategoryResult.cc
	src/model/UpdateMediaCoverRequest.cc
	src/model/UpdateMediaCoverResult.cc
	src/model/UpdateMediaPublishStateRequest.cc
	src/model/UpdateMediaPublishStateResult.cc
	src/model/UpdateMediaWorkflowRequest.cc
	src/model/UpdateMediaWorkflowResult.cc
	src/model/UpdateMediaWorkflowTriggerModeRequest.cc
	src/model/UpdateMediaWorkflowTriggerModeResult.cc
	src/model/UpdatePipelineRequest.cc
	src/model/UpdatePipelineResult.cc
	src/model/UpdateSmarttagTemplateRequest.cc
	src/model/UpdateSmarttagTemplateResult.cc
	src/model/UpdateTemplateRequest.cc
	src/model/UpdateTemplateResult.cc
	src/model/UpdateWaterMarkTemplateRequest.cc
	src/model/UpdateWaterMarkTemplateResult.cc )

add_library(mts ${LIB_TYPE}
	${mts_public_header}
	${mts_public_header_model}
	${mts_src})

set_target_properties(mts
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mts
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(mts
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_MTS_LIBRARY)
endif()

target_include_directories(mts
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(mts
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(mts
		jsoncpp)
	target_include_directories(mts
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(mts
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(mts
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(mts
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(mts
		jsoncpp)
endif()

install(FILES ${mts_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/mts)
install(FILES ${mts_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/mts/model)
install(TARGETS mts
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)