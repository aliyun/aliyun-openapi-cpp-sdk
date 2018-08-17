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

set(vod_public_header 
	include/alibabacloud/vod/VodClient.h
	include/alibabacloud/vod/VodExport.h )

set(vod_public_header_model 
	include/alibabacloud/vod/model/DescribePlayUserTotalRequest.h
	include/alibabacloud/vod/model/DescribePlayUserTotalResult.h
	include/alibabacloud/vod/model/DeleteImageRequest.h
	include/alibabacloud/vod/model/DeleteImageResult.h
	include/alibabacloud/vod/model/DeleteCategoryRequest.h
	include/alibabacloud/vod/model/DeleteCategoryResult.h
	include/alibabacloud/vod/model/ListAIVideoSummaryJobRequest.h
	include/alibabacloud/vod/model/ListAIVideoSummaryJobResult.h
	include/alibabacloud/vod/model/ListSnapshotsRequest.h
	include/alibabacloud/vod/model/ListSnapshotsResult.h
	include/alibabacloud/vod/model/UpdateVideoInfosRequest.h
	include/alibabacloud/vod/model/UpdateVideoInfosResult.h
	include/alibabacloud/vod/model/GetVideoListRequest.h
	include/alibabacloud/vod/model/GetVideoListResult.h
	include/alibabacloud/vod/model/ListAIVideoTerrorismRecogJobRequest.h
	include/alibabacloud/vod/model/ListAIVideoTerrorismRecogJobResult.h
	include/alibabacloud/vod/model/UpdateEditingProjectRequest.h
	include/alibabacloud/vod/model/UpdateEditingProjectResult.h
	include/alibabacloud/vod/model/RefreshObjectCachesRequest.h
	include/alibabacloud/vod/model/RefreshObjectCachesResult.h
	include/alibabacloud/vod/model/DescribeDomainBpsDataRequest.h
	include/alibabacloud/vod/model/DescribeDomainBpsDataResult.h
	include/alibabacloud/vod/model/ListAuditSecurityIpRequest.h
	include/alibabacloud/vod/model/ListAuditSecurityIpResult.h
	include/alibabacloud/vod/model/GetAuditHistoryRequest.h
	include/alibabacloud/vod/model/GetAuditHistoryResult.h
	include/alibabacloud/vod/model/GetVideoInfoRequest.h
	include/alibabacloud/vod/model/GetVideoInfoResult.h
	include/alibabacloud/vod/model/SetMessageCallbackRequest.h
	include/alibabacloud/vod/model/SetMessageCallbackResult.h
	include/alibabacloud/vod/model/GetVideoInfosRequest.h
	include/alibabacloud/vod/model/GetVideoInfosResult.h
	include/alibabacloud/vod/model/GetEditingProjectMaterialsRequest.h
	include/alibabacloud/vod/model/GetEditingProjectMaterialsResult.h
	include/alibabacloud/vod/model/OpenVodServiceRequest.h
	include/alibabacloud/vod/model/OpenVodServiceResult.h
	include/alibabacloud/vod/model/SubmitAIVideoCategoryJobRequest.h
	include/alibabacloud/vod/model/SubmitAIVideoCategoryJobResult.h
	include/alibabacloud/vod/model/DescribeRefreshTasksRequest.h
	include/alibabacloud/vod/model/DescribeRefreshTasksResult.h
	include/alibabacloud/vod/model/UpdateCategoryRequest.h
	include/alibabacloud/vod/model/UpdateCategoryResult.h
	include/alibabacloud/vod/model/ListAIASRJobRequest.h
	include/alibabacloud/vod/model/ListAIASRJobResult.h
	include/alibabacloud/vod/model/ListAIVideoCensorJobRequest.h
	include/alibabacloud/vod/model/ListAIVideoCensorJobResult.h
	include/alibabacloud/vod/model/DescribeRefreshQuotaRequest.h
	include/alibabacloud/vod/model/DescribeRefreshQuotaResult.h
	include/alibabacloud/vod/model/ProduceEditingProjectVideoRequest.h
	include/alibabacloud/vod/model/ProduceEditingProjectVideoResult.h
	include/alibabacloud/vod/model/GetCDNStatisSumRequest.h
	include/alibabacloud/vod/model/GetCDNStatisSumResult.h
	include/alibabacloud/vod/model/GetVideoPlayAuthRequest.h
	include/alibabacloud/vod/model/GetVideoPlayAuthResult.h
	include/alibabacloud/vod/model/GetAuditResultRequest.h
	include/alibabacloud/vod/model/GetAuditResultResult.h
	include/alibabacloud/vod/model/SubmitPreprocessJobsRequest.h
	include/alibabacloud/vod/model/SubmitPreprocessJobsResult.h
	include/alibabacloud/vod/model/GetVideoPlayInfoRequest.h
	include/alibabacloud/vod/model/GetVideoPlayInfoResult.h
	include/alibabacloud/vod/model/ListAIJobRequest.h
	include/alibabacloud/vod/model/ListAIJobResult.h
	include/alibabacloud/vod/model/GetVideoConfigRequest.h
	include/alibabacloud/vod/model/GetVideoConfigResult.h
	include/alibabacloud/vod/model/CreateUploadImageRequest.h
	include/alibabacloud/vod/model/CreateUploadImageResult.h
	include/alibabacloud/vod/model/UpdateVideoInfoRequest.h
	include/alibabacloud/vod/model/UpdateVideoInfoResult.h
	include/alibabacloud/vod/model/SearchMediaRequest.h
	include/alibabacloud/vod/model/SearchMediaResult.h
	include/alibabacloud/vod/model/DescribePlayTopVideosRequest.h
	include/alibabacloud/vod/model/DescribePlayTopVideosResult.h
	include/alibabacloud/vod/model/PushObjectCacheRequest.h
	include/alibabacloud/vod/model/PushObjectCacheResult.h
	include/alibabacloud/vod/model/AddCategoryRequest.h
	include/alibabacloud/vod/model/AddCategoryResult.h
	include/alibabacloud/vod/model/SubmitSnapshotJobRequest.h
	include/alibabacloud/vod/model/SubmitSnapshotJobResult.h
	include/alibabacloud/vod/model/RefreshUploadVideoRequest.h
	include/alibabacloud/vod/model/RefreshUploadVideoResult.h
	include/alibabacloud/vod/model/ListAIVideoPornRecogJobRequest.h
	include/alibabacloud/vod/model/ListAIVideoPornRecogJobResult.h
	include/alibabacloud/vod/model/GetEditingProjectRequest.h
	include/alibabacloud/vod/model/GetEditingProjectResult.h
	include/alibabacloud/vod/model/SubmitAIVideoCensorJobRequest.h
	include/alibabacloud/vod/model/SubmitAIVideoCensorJobResult.h
	include/alibabacloud/vod/model/DeleteEditingProjectRequest.h
	include/alibabacloud/vod/model/DeleteEditingProjectResult.h
	include/alibabacloud/vod/model/CreateAuditRequest.h
	include/alibabacloud/vod/model/CreateAuditResult.h
	include/alibabacloud/vod/model/SubmitAIVideoTerrorismRecogJobRequest.h
	include/alibabacloud/vod/model/SubmitAIVideoTerrorismRecogJobResult.h
	include/alibabacloud/vod/model/SearchEditingProjectRequest.h
	include/alibabacloud/vod/model/SearchEditingProjectResult.h
	include/alibabacloud/vod/model/GetImageInfoRequest.h
	include/alibabacloud/vod/model/GetImageInfoResult.h
	include/alibabacloud/vod/model/GetMessageCallbackRequest.h
	include/alibabacloud/vod/model/GetMessageCallbackResult.h
	include/alibabacloud/vod/model/ListLiveRecordVideoRequest.h
	include/alibabacloud/vod/model/ListLiveRecordVideoResult.h
	include/alibabacloud/vod/model/ListAIVideoCategoryJobRequest.h
	include/alibabacloud/vod/model/ListAIVideoCategoryJobResult.h
	include/alibabacloud/vod/model/GetCategoriesRequest.h
	include/alibabacloud/vod/model/GetCategoriesResult.h
	include/alibabacloud/vod/model/DescribePlayVideoStatisRequest.h
	include/alibabacloud/vod/model/DescribePlayVideoStatisResult.h
	include/alibabacloud/vod/model/DeleteStreamRequest.h
	include/alibabacloud/vod/model/DeleteStreamResult.h
	include/alibabacloud/vod/model/UploadMediaByURLRequest.h
	include/alibabacloud/vod/model/UploadMediaByURLResult.h
	include/alibabacloud/vod/model/SubmitAIJobRequest.h
	include/alibabacloud/vod/model/SubmitAIJobResult.h
	include/alibabacloud/vod/model/ListAIVideoCoverJobRequest.h
	include/alibabacloud/vod/model/ListAIVideoCoverJobResult.h
	include/alibabacloud/vod/model/SubmitAIASRJobRequest.h
	include/alibabacloud/vod/model/SubmitAIASRJobResult.h
	include/alibabacloud/vod/model/GetPlayInfoRequest.h
	include/alibabacloud/vod/model/GetPlayInfoResult.h
	include/alibabacloud/vod/model/SubmitTranscodeJobsRequest.h
	include/alibabacloud/vod/model/SubmitTranscodeJobsResult.h
	include/alibabacloud/vod/model/CreateUploadVideoRequest.h
	include/alibabacloud/vod/model/CreateUploadVideoResult.h
	include/alibabacloud/vod/model/GetOSSStatisRequest.h
	include/alibabacloud/vod/model/GetOSSStatisResult.h
	include/alibabacloud/vod/model/SetAuditSecurityIpRequest.h
	include/alibabacloud/vod/model/SetAuditSecurityIpResult.h
	include/alibabacloud/vod/model/AddEditingProjectRequest.h
	include/alibabacloud/vod/model/AddEditingProjectResult.h
	include/alibabacloud/vod/model/SubmitAIVideoSummaryJobRequest.h
	include/alibabacloud/vod/model/SubmitAIVideoSummaryJobResult.h
	include/alibabacloud/vod/model/DescribeCdnDomainLogsRequest.h
	include/alibabacloud/vod/model/DescribeCdnDomainLogsResult.h
	include/alibabacloud/vod/model/DescribeDomainFlowDataRequest.h
	include/alibabacloud/vod/model/DescribeDomainFlowDataResult.h
	include/alibabacloud/vod/model/SubmitAIVideoPornRecogJobRequest.h
	include/alibabacloud/vod/model/SubmitAIVideoPornRecogJobResult.h
	include/alibabacloud/vod/model/SetEditingProjectMaterialsRequest.h
	include/alibabacloud/vod/model/SetEditingProjectMaterialsResult.h
	include/alibabacloud/vod/model/GetMezzanineInfoRequest.h
	include/alibabacloud/vod/model/GetMezzanineInfoResult.h
	include/alibabacloud/vod/model/DeleteVideoRequest.h
	include/alibabacloud/vod/model/DeleteVideoResult.h
	include/alibabacloud/vod/model/SubmitAIVideoCoverJobRequest.h
	include/alibabacloud/vod/model/SubmitAIVideoCoverJobResult.h
	include/alibabacloud/vod/model/DescribePlayUserAvgRequest.h
	include/alibabacloud/vod/model/DescribePlayUserAvgResult.h )

set(vod_src 
	src/VodClient.cc
	src/model/DescribePlayUserTotalRequest.cc
	src/model/DescribePlayUserTotalResult.cc
	src/model/DeleteImageRequest.cc
	src/model/DeleteImageResult.cc
	src/model/DeleteCategoryRequest.cc
	src/model/DeleteCategoryResult.cc
	src/model/ListAIVideoSummaryJobRequest.cc
	src/model/ListAIVideoSummaryJobResult.cc
	src/model/ListSnapshotsRequest.cc
	src/model/ListSnapshotsResult.cc
	src/model/UpdateVideoInfosRequest.cc
	src/model/UpdateVideoInfosResult.cc
	src/model/GetVideoListRequest.cc
	src/model/GetVideoListResult.cc
	src/model/ListAIVideoTerrorismRecogJobRequest.cc
	src/model/ListAIVideoTerrorismRecogJobResult.cc
	src/model/UpdateEditingProjectRequest.cc
	src/model/UpdateEditingProjectResult.cc
	src/model/RefreshObjectCachesRequest.cc
	src/model/RefreshObjectCachesResult.cc
	src/model/DescribeDomainBpsDataRequest.cc
	src/model/DescribeDomainBpsDataResult.cc
	src/model/ListAuditSecurityIpRequest.cc
	src/model/ListAuditSecurityIpResult.cc
	src/model/GetAuditHistoryRequest.cc
	src/model/GetAuditHistoryResult.cc
	src/model/GetVideoInfoRequest.cc
	src/model/GetVideoInfoResult.cc
	src/model/SetMessageCallbackRequest.cc
	src/model/SetMessageCallbackResult.cc
	src/model/GetVideoInfosRequest.cc
	src/model/GetVideoInfosResult.cc
	src/model/GetEditingProjectMaterialsRequest.cc
	src/model/GetEditingProjectMaterialsResult.cc
	src/model/OpenVodServiceRequest.cc
	src/model/OpenVodServiceResult.cc
	src/model/SubmitAIVideoCategoryJobRequest.cc
	src/model/SubmitAIVideoCategoryJobResult.cc
	src/model/DescribeRefreshTasksRequest.cc
	src/model/DescribeRefreshTasksResult.cc
	src/model/UpdateCategoryRequest.cc
	src/model/UpdateCategoryResult.cc
	src/model/ListAIASRJobRequest.cc
	src/model/ListAIASRJobResult.cc
	src/model/ListAIVideoCensorJobRequest.cc
	src/model/ListAIVideoCensorJobResult.cc
	src/model/DescribeRefreshQuotaRequest.cc
	src/model/DescribeRefreshQuotaResult.cc
	src/model/ProduceEditingProjectVideoRequest.cc
	src/model/ProduceEditingProjectVideoResult.cc
	src/model/GetCDNStatisSumRequest.cc
	src/model/GetCDNStatisSumResult.cc
	src/model/GetVideoPlayAuthRequest.cc
	src/model/GetVideoPlayAuthResult.cc
	src/model/GetAuditResultRequest.cc
	src/model/GetAuditResultResult.cc
	src/model/SubmitPreprocessJobsRequest.cc
	src/model/SubmitPreprocessJobsResult.cc
	src/model/GetVideoPlayInfoRequest.cc
	src/model/GetVideoPlayInfoResult.cc
	src/model/ListAIJobRequest.cc
	src/model/ListAIJobResult.cc
	src/model/GetVideoConfigRequest.cc
	src/model/GetVideoConfigResult.cc
	src/model/CreateUploadImageRequest.cc
	src/model/CreateUploadImageResult.cc
	src/model/UpdateVideoInfoRequest.cc
	src/model/UpdateVideoInfoResult.cc
	src/model/SearchMediaRequest.cc
	src/model/SearchMediaResult.cc
	src/model/DescribePlayTopVideosRequest.cc
	src/model/DescribePlayTopVideosResult.cc
	src/model/PushObjectCacheRequest.cc
	src/model/PushObjectCacheResult.cc
	src/model/AddCategoryRequest.cc
	src/model/AddCategoryResult.cc
	src/model/SubmitSnapshotJobRequest.cc
	src/model/SubmitSnapshotJobResult.cc
	src/model/RefreshUploadVideoRequest.cc
	src/model/RefreshUploadVideoResult.cc
	src/model/ListAIVideoPornRecogJobRequest.cc
	src/model/ListAIVideoPornRecogJobResult.cc
	src/model/GetEditingProjectRequest.cc
	src/model/GetEditingProjectResult.cc
	src/model/SubmitAIVideoCensorJobRequest.cc
	src/model/SubmitAIVideoCensorJobResult.cc
	src/model/DeleteEditingProjectRequest.cc
	src/model/DeleteEditingProjectResult.cc
	src/model/CreateAuditRequest.cc
	src/model/CreateAuditResult.cc
	src/model/SubmitAIVideoTerrorismRecogJobRequest.cc
	src/model/SubmitAIVideoTerrorismRecogJobResult.cc
	src/model/SearchEditingProjectRequest.cc
	src/model/SearchEditingProjectResult.cc
	src/model/GetImageInfoRequest.cc
	src/model/GetImageInfoResult.cc
	src/model/GetMessageCallbackRequest.cc
	src/model/GetMessageCallbackResult.cc
	src/model/ListLiveRecordVideoRequest.cc
	src/model/ListLiveRecordVideoResult.cc
	src/model/ListAIVideoCategoryJobRequest.cc
	src/model/ListAIVideoCategoryJobResult.cc
	src/model/GetCategoriesRequest.cc
	src/model/GetCategoriesResult.cc
	src/model/DescribePlayVideoStatisRequest.cc
	src/model/DescribePlayVideoStatisResult.cc
	src/model/DeleteStreamRequest.cc
	src/model/DeleteStreamResult.cc
	src/model/UploadMediaByURLRequest.cc
	src/model/UploadMediaByURLResult.cc
	src/model/SubmitAIJobRequest.cc
	src/model/SubmitAIJobResult.cc
	src/model/ListAIVideoCoverJobRequest.cc
	src/model/ListAIVideoCoverJobResult.cc
	src/model/SubmitAIASRJobRequest.cc
	src/model/SubmitAIASRJobResult.cc
	src/model/GetPlayInfoRequest.cc
	src/model/GetPlayInfoResult.cc
	src/model/SubmitTranscodeJobsRequest.cc
	src/model/SubmitTranscodeJobsResult.cc
	src/model/CreateUploadVideoRequest.cc
	src/model/CreateUploadVideoResult.cc
	src/model/GetOSSStatisRequest.cc
	src/model/GetOSSStatisResult.cc
	src/model/SetAuditSecurityIpRequest.cc
	src/model/SetAuditSecurityIpResult.cc
	src/model/AddEditingProjectRequest.cc
	src/model/AddEditingProjectResult.cc
	src/model/SubmitAIVideoSummaryJobRequest.cc
	src/model/SubmitAIVideoSummaryJobResult.cc
	src/model/DescribeCdnDomainLogsRequest.cc
	src/model/DescribeCdnDomainLogsResult.cc
	src/model/DescribeDomainFlowDataRequest.cc
	src/model/DescribeDomainFlowDataResult.cc
	src/model/SubmitAIVideoPornRecogJobRequest.cc
	src/model/SubmitAIVideoPornRecogJobResult.cc
	src/model/SetEditingProjectMaterialsRequest.cc
	src/model/SetEditingProjectMaterialsResult.cc
	src/model/GetMezzanineInfoRequest.cc
	src/model/GetMezzanineInfoResult.cc
	src/model/DeleteVideoRequest.cc
	src/model/DeleteVideoResult.cc
	src/model/SubmitAIVideoCoverJobRequest.cc
	src/model/SubmitAIVideoCoverJobResult.cc
	src/model/DescribePlayUserAvgRequest.cc
	src/model/DescribePlayUserAvgResult.cc )

add_library(vod ${LIB_TYPE}
	${vod_public_header}
	${vod_public_header_model}
	${vod_src})

set_target_properties(vod
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vod
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(vod
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_VOD_LIBRARY)
endif()

target_include_directories(vod
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(vod
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(vod
		jsoncpp)
	target_include_directories(vod
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(vod
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(vod
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(vod
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(vod
		jsoncpp)
endif()

install(FILES ${vod_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/vod)
install(FILES ${vod_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/vod/model)
install(TARGETS vod
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)