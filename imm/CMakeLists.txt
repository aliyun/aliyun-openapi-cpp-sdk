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

set(imm_public_header 
	include/alibabacloud/imm/ImmClient.h
	include/alibabacloud/imm/ImmExport.h )

set(imm_public_header_model 
	include/alibabacloud/imm/model/AddImageMosaicRequest.h
	include/alibabacloud/imm/model/AddImageMosaicResult.h
	include/alibabacloud/imm/model/AddStoryFilesRequest.h
	include/alibabacloud/imm/model/AddStoryFilesResult.h
	include/alibabacloud/imm/model/AttachOSSBucketRequest.h
	include/alibabacloud/imm/model/AttachOSSBucketResult.h
	include/alibabacloud/imm/model/BatchDeleteFileMetaRequest.h
	include/alibabacloud/imm/model/BatchDeleteFileMetaResult.h
	include/alibabacloud/imm/model/BatchGetFigureClusterRequest.h
	include/alibabacloud/imm/model/BatchGetFigureClusterResult.h
	include/alibabacloud/imm/model/BatchGetFileMetaRequest.h
	include/alibabacloud/imm/model/BatchGetFileMetaResult.h
	include/alibabacloud/imm/model/BatchIndexFileMetaRequest.h
	include/alibabacloud/imm/model/BatchIndexFileMetaResult.h
	include/alibabacloud/imm/model/BatchUpdateFileMetaRequest.h
	include/alibabacloud/imm/model/BatchUpdateFileMetaResult.h
	include/alibabacloud/imm/model/CompareImageFacesRequest.h
	include/alibabacloud/imm/model/CompareImageFacesResult.h
	include/alibabacloud/imm/model/CreateArchiveFileInspectionTaskRequest.h
	include/alibabacloud/imm/model/CreateArchiveFileInspectionTaskResult.h
	include/alibabacloud/imm/model/CreateBatchRequest.h
	include/alibabacloud/imm/model/CreateBatchResult.h
	include/alibabacloud/imm/model/CreateBindingRequest.h
	include/alibabacloud/imm/model/CreateBindingResult.h
	include/alibabacloud/imm/model/CreateCompressPointCloudTaskRequest.h
	include/alibabacloud/imm/model/CreateCompressPointCloudTaskResult.h
	include/alibabacloud/imm/model/CreateCustomizedStoryRequest.h
	include/alibabacloud/imm/model/CreateCustomizedStoryResult.h
	include/alibabacloud/imm/model/CreateDatasetRequest.h
	include/alibabacloud/imm/model/CreateDatasetResult.h
	include/alibabacloud/imm/model/CreateFacesSearchingTaskRequest.h
	include/alibabacloud/imm/model/CreateFacesSearchingTaskResult.h
	include/alibabacloud/imm/model/CreateFigureClusteringTaskRequest.h
	include/alibabacloud/imm/model/CreateFigureClusteringTaskResult.h
	include/alibabacloud/imm/model/CreateFigureClustersMergingTaskRequest.h
	include/alibabacloud/imm/model/CreateFigureClustersMergingTaskResult.h
	include/alibabacloud/imm/model/CreateFileCompressionTaskRequest.h
	include/alibabacloud/imm/model/CreateFileCompressionTaskResult.h
	include/alibabacloud/imm/model/CreateFileUncompressionTaskRequest.h
	include/alibabacloud/imm/model/CreateFileUncompressionTaskResult.h
	include/alibabacloud/imm/model/CreateImageModerationTaskRequest.h
	include/alibabacloud/imm/model/CreateImageModerationTaskResult.h
	include/alibabacloud/imm/model/CreateImageSplicingTaskRequest.h
	include/alibabacloud/imm/model/CreateImageSplicingTaskResult.h
	include/alibabacloud/imm/model/CreateImageToPDFTaskRequest.h
	include/alibabacloud/imm/model/CreateImageToPDFTaskResult.h
	include/alibabacloud/imm/model/CreateLocationDateClusteringTaskRequest.h
	include/alibabacloud/imm/model/CreateLocationDateClusteringTaskResult.h
	include/alibabacloud/imm/model/CreateMediaConvertTaskRequest.h
	include/alibabacloud/imm/model/CreateMediaConvertTaskResult.h
	include/alibabacloud/imm/model/CreateOfficeConversionTaskRequest.h
	include/alibabacloud/imm/model/CreateOfficeConversionTaskResult.h
	include/alibabacloud/imm/model/CreateProjectRequest.h
	include/alibabacloud/imm/model/CreateProjectResult.h
	include/alibabacloud/imm/model/CreateSimilarImageClusteringTaskRequest.h
	include/alibabacloud/imm/model/CreateSimilarImageClusteringTaskResult.h
	include/alibabacloud/imm/model/CreateStoryRequest.h
	include/alibabacloud/imm/model/CreateStoryResult.h
	include/alibabacloud/imm/model/CreateTriggerRequest.h
	include/alibabacloud/imm/model/CreateTriggerResult.h
	include/alibabacloud/imm/model/CreateVideoLabelClassificationTaskRequest.h
	include/alibabacloud/imm/model/CreateVideoLabelClassificationTaskResult.h
	include/alibabacloud/imm/model/CreateVideoModerationTaskRequest.h
	include/alibabacloud/imm/model/CreateVideoModerationTaskResult.h
	include/alibabacloud/imm/model/DeleteBatchRequest.h
	include/alibabacloud/imm/model/DeleteBatchResult.h
	include/alibabacloud/imm/model/DeleteBindingRequest.h
	include/alibabacloud/imm/model/DeleteBindingResult.h
	include/alibabacloud/imm/model/DeleteDatasetRequest.h
	include/alibabacloud/imm/model/DeleteDatasetResult.h
	include/alibabacloud/imm/model/DeleteFileMetaRequest.h
	include/alibabacloud/imm/model/DeleteFileMetaResult.h
	include/alibabacloud/imm/model/DeleteLocationDateClusterRequest.h
	include/alibabacloud/imm/model/DeleteLocationDateClusterResult.h
	include/alibabacloud/imm/model/DeleteProjectRequest.h
	include/alibabacloud/imm/model/DeleteProjectResult.h
	include/alibabacloud/imm/model/DeleteStoryRequest.h
	include/alibabacloud/imm/model/DeleteStoryResult.h
	include/alibabacloud/imm/model/DeleteTriggerRequest.h
	include/alibabacloud/imm/model/DeleteTriggerResult.h
	include/alibabacloud/imm/model/DetachOSSBucketRequest.h
	include/alibabacloud/imm/model/DetachOSSBucketResult.h
	include/alibabacloud/imm/model/DetectImageBodiesRequest.h
	include/alibabacloud/imm/model/DetectImageBodiesResult.h
	include/alibabacloud/imm/model/DetectImageCarsRequest.h
	include/alibabacloud/imm/model/DetectImageCarsResult.h
	include/alibabacloud/imm/model/DetectImageCodesRequest.h
	include/alibabacloud/imm/model/DetectImageCodesResult.h
	include/alibabacloud/imm/model/DetectImageCroppingRequest.h
	include/alibabacloud/imm/model/DetectImageCroppingResult.h
	include/alibabacloud/imm/model/DetectImageFacesRequest.h
	include/alibabacloud/imm/model/DetectImageFacesResult.h
	include/alibabacloud/imm/model/DetectImageLabelsRequest.h
	include/alibabacloud/imm/model/DetectImageLabelsResult.h
	include/alibabacloud/imm/model/DetectImageScoreRequest.h
	include/alibabacloud/imm/model/DetectImageScoreResult.h
	include/alibabacloud/imm/model/DetectMediaMetaRequest.h
	include/alibabacloud/imm/model/DetectMediaMetaResult.h
	include/alibabacloud/imm/model/DetectTextAnomalyRequest.h
	include/alibabacloud/imm/model/DetectTextAnomalyResult.h
	include/alibabacloud/imm/model/ExtractDocumentTextRequest.h
	include/alibabacloud/imm/model/ExtractDocumentTextResult.h
	include/alibabacloud/imm/model/FuzzyQueryRequest.h
	include/alibabacloud/imm/model/FuzzyQueryResult.h
	include/alibabacloud/imm/model/GenerateWebofficeTokenRequest.h
	include/alibabacloud/imm/model/GenerateWebofficeTokenResult.h
	include/alibabacloud/imm/model/GetBatchRequest.h
	include/alibabacloud/imm/model/GetBatchResult.h
	include/alibabacloud/imm/model/GetBindingRequest.h
	include/alibabacloud/imm/model/GetBindingResult.h
	include/alibabacloud/imm/model/GetDatasetRequest.h
	include/alibabacloud/imm/model/GetDatasetResult.h
	include/alibabacloud/imm/model/GetFigureClusterRequest.h
	include/alibabacloud/imm/model/GetFigureClusterResult.h
	include/alibabacloud/imm/model/GetFileMetaRequest.h
	include/alibabacloud/imm/model/GetFileMetaResult.h
	include/alibabacloud/imm/model/GetImageModerationResultRequest.h
	include/alibabacloud/imm/model/GetImageModerationResultResult.h
	include/alibabacloud/imm/model/GetOSSBucketAttachmentRequest.h
	include/alibabacloud/imm/model/GetOSSBucketAttachmentResult.h
	include/alibabacloud/imm/model/GetProjectRequest.h
	include/alibabacloud/imm/model/GetProjectResult.h
	include/alibabacloud/imm/model/GetStoryRequest.h
	include/alibabacloud/imm/model/GetStoryResult.h
	include/alibabacloud/imm/model/GetTaskRequest.h
	include/alibabacloud/imm/model/GetTaskResult.h
	include/alibabacloud/imm/model/GetTriggerRequest.h
	include/alibabacloud/imm/model/GetTriggerResult.h
	include/alibabacloud/imm/model/GetVideoLabelClassificationResultRequest.h
	include/alibabacloud/imm/model/GetVideoLabelClassificationResultResult.h
	include/alibabacloud/imm/model/GetVideoModerationResultRequest.h
	include/alibabacloud/imm/model/GetVideoModerationResultResult.h
	include/alibabacloud/imm/model/IndexFileMetaRequest.h
	include/alibabacloud/imm/model/IndexFileMetaResult.h
	include/alibabacloud/imm/model/ListBatchesRequest.h
	include/alibabacloud/imm/model/ListBatchesResult.h
	include/alibabacloud/imm/model/ListBindingsRequest.h
	include/alibabacloud/imm/model/ListBindingsResult.h
	include/alibabacloud/imm/model/ListDatasetsRequest.h
	include/alibabacloud/imm/model/ListDatasetsResult.h
	include/alibabacloud/imm/model/ListProjectsRequest.h
	include/alibabacloud/imm/model/ListProjectsResult.h
	include/alibabacloud/imm/model/ListRegionsRequest.h
	include/alibabacloud/imm/model/ListRegionsResult.h
	include/alibabacloud/imm/model/ListTasksRequest.h
	include/alibabacloud/imm/model/ListTasksResult.h
	include/alibabacloud/imm/model/ListTriggersRequest.h
	include/alibabacloud/imm/model/ListTriggersResult.h
	include/alibabacloud/imm/model/QueryFigureClustersRequest.h
	include/alibabacloud/imm/model/QueryFigureClustersResult.h
	include/alibabacloud/imm/model/QueryLocationDateClustersRequest.h
	include/alibabacloud/imm/model/QueryLocationDateClustersResult.h
	include/alibabacloud/imm/model/QuerySimilarImageClustersRequest.h
	include/alibabacloud/imm/model/QuerySimilarImageClustersResult.h
	include/alibabacloud/imm/model/QueryStoriesRequest.h
	include/alibabacloud/imm/model/QueryStoriesResult.h
	include/alibabacloud/imm/model/RefreshWebofficeTokenRequest.h
	include/alibabacloud/imm/model/RefreshWebofficeTokenResult.h
	include/alibabacloud/imm/model/RemoveStoryFilesRequest.h
	include/alibabacloud/imm/model/RemoveStoryFilesResult.h
	include/alibabacloud/imm/model/ResumeBatchRequest.h
	include/alibabacloud/imm/model/ResumeBatchResult.h
	include/alibabacloud/imm/model/ResumeTriggerRequest.h
	include/alibabacloud/imm/model/ResumeTriggerResult.h
	include/alibabacloud/imm/model/SearchImageFigureClusterRequest.h
	include/alibabacloud/imm/model/SearchImageFigureClusterResult.h
	include/alibabacloud/imm/model/SemanticQueryRequest.h
	include/alibabacloud/imm/model/SemanticQueryResult.h
	include/alibabacloud/imm/model/SimpleQueryRequest.h
	include/alibabacloud/imm/model/SimpleQueryResult.h
	include/alibabacloud/imm/model/SuspendBatchRequest.h
	include/alibabacloud/imm/model/SuspendBatchResult.h
	include/alibabacloud/imm/model/SuspendTriggerRequest.h
	include/alibabacloud/imm/model/SuspendTriggerResult.h
	include/alibabacloud/imm/model/UpdateBatchRequest.h
	include/alibabacloud/imm/model/UpdateBatchResult.h
	include/alibabacloud/imm/model/UpdateDatasetRequest.h
	include/alibabacloud/imm/model/UpdateDatasetResult.h
	include/alibabacloud/imm/model/UpdateFigureClusterRequest.h
	include/alibabacloud/imm/model/UpdateFigureClusterResult.h
	include/alibabacloud/imm/model/UpdateFileMetaRequest.h
	include/alibabacloud/imm/model/UpdateFileMetaResult.h
	include/alibabacloud/imm/model/UpdateLocationDateClusterRequest.h
	include/alibabacloud/imm/model/UpdateLocationDateClusterResult.h
	include/alibabacloud/imm/model/UpdateProjectRequest.h
	include/alibabacloud/imm/model/UpdateProjectResult.h
	include/alibabacloud/imm/model/UpdateStoryRequest.h
	include/alibabacloud/imm/model/UpdateStoryResult.h
	include/alibabacloud/imm/model/UpdateTriggerRequest.h
	include/alibabacloud/imm/model/UpdateTriggerResult.h )

set(imm_src 
	src/ImmClient.cc
	src/model/AddImageMosaicRequest.cc
	src/model/AddImageMosaicResult.cc
	src/model/AddStoryFilesRequest.cc
	src/model/AddStoryFilesResult.cc
	src/model/AttachOSSBucketRequest.cc
	src/model/AttachOSSBucketResult.cc
	src/model/BatchDeleteFileMetaRequest.cc
	src/model/BatchDeleteFileMetaResult.cc
	src/model/BatchGetFigureClusterRequest.cc
	src/model/BatchGetFigureClusterResult.cc
	src/model/BatchGetFileMetaRequest.cc
	src/model/BatchGetFileMetaResult.cc
	src/model/BatchIndexFileMetaRequest.cc
	src/model/BatchIndexFileMetaResult.cc
	src/model/BatchUpdateFileMetaRequest.cc
	src/model/BatchUpdateFileMetaResult.cc
	src/model/CompareImageFacesRequest.cc
	src/model/CompareImageFacesResult.cc
	src/model/CreateArchiveFileInspectionTaskRequest.cc
	src/model/CreateArchiveFileInspectionTaskResult.cc
	src/model/CreateBatchRequest.cc
	src/model/CreateBatchResult.cc
	src/model/CreateBindingRequest.cc
	src/model/CreateBindingResult.cc
	src/model/CreateCompressPointCloudTaskRequest.cc
	src/model/CreateCompressPointCloudTaskResult.cc
	src/model/CreateCustomizedStoryRequest.cc
	src/model/CreateCustomizedStoryResult.cc
	src/model/CreateDatasetRequest.cc
	src/model/CreateDatasetResult.cc
	src/model/CreateFacesSearchingTaskRequest.cc
	src/model/CreateFacesSearchingTaskResult.cc
	src/model/CreateFigureClusteringTaskRequest.cc
	src/model/CreateFigureClusteringTaskResult.cc
	src/model/CreateFigureClustersMergingTaskRequest.cc
	src/model/CreateFigureClustersMergingTaskResult.cc
	src/model/CreateFileCompressionTaskRequest.cc
	src/model/CreateFileCompressionTaskResult.cc
	src/model/CreateFileUncompressionTaskRequest.cc
	src/model/CreateFileUncompressionTaskResult.cc
	src/model/CreateImageModerationTaskRequest.cc
	src/model/CreateImageModerationTaskResult.cc
	src/model/CreateImageSplicingTaskRequest.cc
	src/model/CreateImageSplicingTaskResult.cc
	src/model/CreateImageToPDFTaskRequest.cc
	src/model/CreateImageToPDFTaskResult.cc
	src/model/CreateLocationDateClusteringTaskRequest.cc
	src/model/CreateLocationDateClusteringTaskResult.cc
	src/model/CreateMediaConvertTaskRequest.cc
	src/model/CreateMediaConvertTaskResult.cc
	src/model/CreateOfficeConversionTaskRequest.cc
	src/model/CreateOfficeConversionTaskResult.cc
	src/model/CreateProjectRequest.cc
	src/model/CreateProjectResult.cc
	src/model/CreateSimilarImageClusteringTaskRequest.cc
	src/model/CreateSimilarImageClusteringTaskResult.cc
	src/model/CreateStoryRequest.cc
	src/model/CreateStoryResult.cc
	src/model/CreateTriggerRequest.cc
	src/model/CreateTriggerResult.cc
	src/model/CreateVideoLabelClassificationTaskRequest.cc
	src/model/CreateVideoLabelClassificationTaskResult.cc
	src/model/CreateVideoModerationTaskRequest.cc
	src/model/CreateVideoModerationTaskResult.cc
	src/model/DeleteBatchRequest.cc
	src/model/DeleteBatchResult.cc
	src/model/DeleteBindingRequest.cc
	src/model/DeleteBindingResult.cc
	src/model/DeleteDatasetRequest.cc
	src/model/DeleteDatasetResult.cc
	src/model/DeleteFileMetaRequest.cc
	src/model/DeleteFileMetaResult.cc
	src/model/DeleteLocationDateClusterRequest.cc
	src/model/DeleteLocationDateClusterResult.cc
	src/model/DeleteProjectRequest.cc
	src/model/DeleteProjectResult.cc
	src/model/DeleteStoryRequest.cc
	src/model/DeleteStoryResult.cc
	src/model/DeleteTriggerRequest.cc
	src/model/DeleteTriggerResult.cc
	src/model/DetachOSSBucketRequest.cc
	src/model/DetachOSSBucketResult.cc
	src/model/DetectImageBodiesRequest.cc
	src/model/DetectImageBodiesResult.cc
	src/model/DetectImageCarsRequest.cc
	src/model/DetectImageCarsResult.cc
	src/model/DetectImageCodesRequest.cc
	src/model/DetectImageCodesResult.cc
	src/model/DetectImageCroppingRequest.cc
	src/model/DetectImageCroppingResult.cc
	src/model/DetectImageFacesRequest.cc
	src/model/DetectImageFacesResult.cc
	src/model/DetectImageLabelsRequest.cc
	src/model/DetectImageLabelsResult.cc
	src/model/DetectImageScoreRequest.cc
	src/model/DetectImageScoreResult.cc
	src/model/DetectMediaMetaRequest.cc
	src/model/DetectMediaMetaResult.cc
	src/model/DetectTextAnomalyRequest.cc
	src/model/DetectTextAnomalyResult.cc
	src/model/ExtractDocumentTextRequest.cc
	src/model/ExtractDocumentTextResult.cc
	src/model/FuzzyQueryRequest.cc
	src/model/FuzzyQueryResult.cc
	src/model/GenerateWebofficeTokenRequest.cc
	src/model/GenerateWebofficeTokenResult.cc
	src/model/GetBatchRequest.cc
	src/model/GetBatchResult.cc
	src/model/GetBindingRequest.cc
	src/model/GetBindingResult.cc
	src/model/GetDatasetRequest.cc
	src/model/GetDatasetResult.cc
	src/model/GetFigureClusterRequest.cc
	src/model/GetFigureClusterResult.cc
	src/model/GetFileMetaRequest.cc
	src/model/GetFileMetaResult.cc
	src/model/GetImageModerationResultRequest.cc
	src/model/GetImageModerationResultResult.cc
	src/model/GetOSSBucketAttachmentRequest.cc
	src/model/GetOSSBucketAttachmentResult.cc
	src/model/GetProjectRequest.cc
	src/model/GetProjectResult.cc
	src/model/GetStoryRequest.cc
	src/model/GetStoryResult.cc
	src/model/GetTaskRequest.cc
	src/model/GetTaskResult.cc
	src/model/GetTriggerRequest.cc
	src/model/GetTriggerResult.cc
	src/model/GetVideoLabelClassificationResultRequest.cc
	src/model/GetVideoLabelClassificationResultResult.cc
	src/model/GetVideoModerationResultRequest.cc
	src/model/GetVideoModerationResultResult.cc
	src/model/IndexFileMetaRequest.cc
	src/model/IndexFileMetaResult.cc
	src/model/ListBatchesRequest.cc
	src/model/ListBatchesResult.cc
	src/model/ListBindingsRequest.cc
	src/model/ListBindingsResult.cc
	src/model/ListDatasetsRequest.cc
	src/model/ListDatasetsResult.cc
	src/model/ListProjectsRequest.cc
	src/model/ListProjectsResult.cc
	src/model/ListRegionsRequest.cc
	src/model/ListRegionsResult.cc
	src/model/ListTasksRequest.cc
	src/model/ListTasksResult.cc
	src/model/ListTriggersRequest.cc
	src/model/ListTriggersResult.cc
	src/model/QueryFigureClustersRequest.cc
	src/model/QueryFigureClustersResult.cc
	src/model/QueryLocationDateClustersRequest.cc
	src/model/QueryLocationDateClustersResult.cc
	src/model/QuerySimilarImageClustersRequest.cc
	src/model/QuerySimilarImageClustersResult.cc
	src/model/QueryStoriesRequest.cc
	src/model/QueryStoriesResult.cc
	src/model/RefreshWebofficeTokenRequest.cc
	src/model/RefreshWebofficeTokenResult.cc
	src/model/RemoveStoryFilesRequest.cc
	src/model/RemoveStoryFilesResult.cc
	src/model/ResumeBatchRequest.cc
	src/model/ResumeBatchResult.cc
	src/model/ResumeTriggerRequest.cc
	src/model/ResumeTriggerResult.cc
	src/model/SearchImageFigureClusterRequest.cc
	src/model/SearchImageFigureClusterResult.cc
	src/model/SemanticQueryRequest.cc
	src/model/SemanticQueryResult.cc
	src/model/SimpleQueryRequest.cc
	src/model/SimpleQueryResult.cc
	src/model/SuspendBatchRequest.cc
	src/model/SuspendBatchResult.cc
	src/model/SuspendTriggerRequest.cc
	src/model/SuspendTriggerResult.cc
	src/model/UpdateBatchRequest.cc
	src/model/UpdateBatchResult.cc
	src/model/UpdateDatasetRequest.cc
	src/model/UpdateDatasetResult.cc
	src/model/UpdateFigureClusterRequest.cc
	src/model/UpdateFigureClusterResult.cc
	src/model/UpdateFileMetaRequest.cc
	src/model/UpdateFileMetaResult.cc
	src/model/UpdateLocationDateClusterRequest.cc
	src/model/UpdateLocationDateClusterResult.cc
	src/model/UpdateProjectRequest.cc
	src/model/UpdateProjectResult.cc
	src/model/UpdateStoryRequest.cc
	src/model/UpdateStoryResult.cc
	src/model/UpdateTriggerRequest.cc
	src/model/UpdateTriggerResult.cc )

add_library(imm ${LIB_TYPE}
	${imm_public_header}
	${imm_public_header_model}
	${imm_src})

set_target_properties(imm
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}imm
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(imm
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_IMM_LIBRARY)
endif()

target_include_directories(imm
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(imm
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(imm
		jsoncpp)
	target_include_directories(imm
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(imm
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(imm
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(imm
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(imm
		jsoncpp)
endif()

install(FILES ${imm_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/imm)
install(FILES ${imm_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/imm/model)
install(TARGETS imm
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)