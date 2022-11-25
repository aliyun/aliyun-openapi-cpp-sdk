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

set(viapi-regen_public_header 
	include/alibabacloud/viapi-regen/Viapi_regenClient.h
	include/alibabacloud/viapi-regen/Viapi_regenExport.h )

set(viapi-regen_public_header_model 
	include/alibabacloud/viapi-regen/model/CheckDatasetOssBucketCORSRequest.h
	include/alibabacloud/viapi-regen/model/CheckDatasetOssBucketCORSResult.h
	include/alibabacloud/viapi-regen/model/CreateDatasetRequest.h
	include/alibabacloud/viapi-regen/model/CreateDatasetResult.h
	include/alibabacloud/viapi-regen/model/CreateLabelsetRequest.h
	include/alibabacloud/viapi-regen/model/CreateLabelsetResult.h
	include/alibabacloud/viapi-regen/model/CreateServiceRequest.h
	include/alibabacloud/viapi-regen/model/CreateServiceResult.h
	include/alibabacloud/viapi-regen/model/CreateTagTaskRequest.h
	include/alibabacloud/viapi-regen/model/CreateTagTaskResult.h
	include/alibabacloud/viapi-regen/model/CreateTrainTaskRequest.h
	include/alibabacloud/viapi-regen/model/CreateTrainTaskResult.h
	include/alibabacloud/viapi-regen/model/CreateWorkspaceRequest.h
	include/alibabacloud/viapi-regen/model/CreateWorkspaceResult.h
	include/alibabacloud/viapi-regen/model/CustomizeClassifyImageRequest.h
	include/alibabacloud/viapi-regen/model/CustomizeClassifyImageResult.h
	include/alibabacloud/viapi-regen/model/CustomizeDetectImageRequest.h
	include/alibabacloud/viapi-regen/model/CustomizeDetectImageResult.h
	include/alibabacloud/viapi-regen/model/CustomizeInstanceSegmentImageRequest.h
	include/alibabacloud/viapi-regen/model/CustomizeInstanceSegmentImageResult.h
	include/alibabacloud/viapi-regen/model/DebugServiceRequest.h
	include/alibabacloud/viapi-regen/model/DebugServiceResult.h
	include/alibabacloud/viapi-regen/model/DeleteDataReflowDataRequest.h
	include/alibabacloud/viapi-regen/model/DeleteDataReflowDataResult.h
	include/alibabacloud/viapi-regen/model/DeleteDatasetRequest.h
	include/alibabacloud/viapi-regen/model/DeleteDatasetResult.h
	include/alibabacloud/viapi-regen/model/DeleteLabelsetRequest.h
	include/alibabacloud/viapi-regen/model/DeleteLabelsetResult.h
	include/alibabacloud/viapi-regen/model/DeleteLabelsetDataRequest.h
	include/alibabacloud/viapi-regen/model/DeleteLabelsetDataResult.h
	include/alibabacloud/viapi-regen/model/DeleteServiceRequest.h
	include/alibabacloud/viapi-regen/model/DeleteServiceResult.h
	include/alibabacloud/viapi-regen/model/DeleteTrainTaskRequest.h
	include/alibabacloud/viapi-regen/model/DeleteTrainTaskResult.h
	include/alibabacloud/viapi-regen/model/DeleteWorkspaceRequest.h
	include/alibabacloud/viapi-regen/model/DeleteWorkspaceResult.h
	include/alibabacloud/viapi-regen/model/DisableDataReflowRequest.h
	include/alibabacloud/viapi-regen/model/DisableDataReflowResult.h
	include/alibabacloud/viapi-regen/model/DownloadDatasetRequest.h
	include/alibabacloud/viapi-regen/model/DownloadDatasetResult.h
	include/alibabacloud/viapi-regen/model/DownloadFileNameListRequest.h
	include/alibabacloud/viapi-regen/model/DownloadFileNameListResult.h
	include/alibabacloud/viapi-regen/model/DownloadLabelFileRequest.h
	include/alibabacloud/viapi-regen/model/DownloadLabelFileResult.h
	include/alibabacloud/viapi-regen/model/EnableDataReflowRequest.h
	include/alibabacloud/viapi-regen/model/EnableDataReflowResult.h
	include/alibabacloud/viapi-regen/model/ExportDataReflowDataListRequest.h
	include/alibabacloud/viapi-regen/model/ExportDataReflowDataListResult.h
	include/alibabacloud/viapi-regen/model/GetDatasetRequest.h
	include/alibabacloud/viapi-regen/model/GetDatasetResult.h
	include/alibabacloud/viapi-regen/model/GetDiffCountLabelsetAndDatasetRequest.h
	include/alibabacloud/viapi-regen/model/GetDiffCountLabelsetAndDatasetResult.h
	include/alibabacloud/viapi-regen/model/GetLabelDetailRequest.h
	include/alibabacloud/viapi-regen/model/GetLabelDetailResult.h
	include/alibabacloud/viapi-regen/model/GetLabelsetRequest.h
	include/alibabacloud/viapi-regen/model/GetLabelsetResult.h
	include/alibabacloud/viapi-regen/model/GetServiceRequest.h
	include/alibabacloud/viapi-regen/model/GetServiceResult.h
	include/alibabacloud/viapi-regen/model/GetServiceInvokeRequest.h
	include/alibabacloud/viapi-regen/model/GetServiceInvokeResult.h
	include/alibabacloud/viapi-regen/model/GetServiceQpsRequest.h
	include/alibabacloud/viapi-regen/model/GetServiceQpsResult.h
	include/alibabacloud/viapi-regen/model/GetTrainModelRequest.h
	include/alibabacloud/viapi-regen/model/GetTrainModelResult.h
	include/alibabacloud/viapi-regen/model/GetTrainTaskRequest.h
	include/alibabacloud/viapi-regen/model/GetTrainTaskResult.h
	include/alibabacloud/viapi-regen/model/GetTrainTaskEstimatedTimeRequest.h
	include/alibabacloud/viapi-regen/model/GetTrainTaskEstimatedTimeResult.h
	include/alibabacloud/viapi-regen/model/GetUploadPolicyRequest.h
	include/alibabacloud/viapi-regen/model/GetUploadPolicyResult.h
	include/alibabacloud/viapi-regen/model/GetUserInfoRequest.h
	include/alibabacloud/viapi-regen/model/GetUserInfoResult.h
	include/alibabacloud/viapi-regen/model/GetWorkspaceRequest.h
	include/alibabacloud/viapi-regen/model/GetWorkspaceResult.h
	include/alibabacloud/viapi-regen/model/ListDataReflowDatasRequest.h
	include/alibabacloud/viapi-regen/model/ListDataReflowDatasResult.h
	include/alibabacloud/viapi-regen/model/ListDatasetDatasRequest.h
	include/alibabacloud/viapi-regen/model/ListDatasetDatasResult.h
	include/alibabacloud/viapi-regen/model/ListDatasetsRequest.h
	include/alibabacloud/viapi-regen/model/ListDatasetsResult.h
	include/alibabacloud/viapi-regen/model/ListLabelsetDatasRequest.h
	include/alibabacloud/viapi-regen/model/ListLabelsetDatasResult.h
	include/alibabacloud/viapi-regen/model/ListLabelsetsRequest.h
	include/alibabacloud/viapi-regen/model/ListLabelsetsResult.h
	include/alibabacloud/viapi-regen/model/ListServicesRequest.h
	include/alibabacloud/viapi-regen/model/ListServicesResult.h
	include/alibabacloud/viapi-regen/model/ListTrainTasksRequest.h
	include/alibabacloud/viapi-regen/model/ListTrainTasksResult.h
	include/alibabacloud/viapi-regen/model/ListWorkspacesRequest.h
	include/alibabacloud/viapi-regen/model/ListWorkspacesResult.h
	include/alibabacloud/viapi-regen/model/SetDatasetUserOssPathRequest.h
	include/alibabacloud/viapi-regen/model/SetDatasetUserOssPathResult.h
	include/alibabacloud/viapi-regen/model/StartServiceRequest.h
	include/alibabacloud/viapi-regen/model/StartServiceResult.h
	include/alibabacloud/viapi-regen/model/StartTrainTaskRequest.h
	include/alibabacloud/viapi-regen/model/StartTrainTaskResult.h
	include/alibabacloud/viapi-regen/model/StopServiceRequest.h
	include/alibabacloud/viapi-regen/model/StopServiceResult.h
	include/alibabacloud/viapi-regen/model/StopTrainTaskRequest.h
	include/alibabacloud/viapi-regen/model/StopTrainTaskResult.h
	include/alibabacloud/viapi-regen/model/UpdateDatasetRequest.h
	include/alibabacloud/viapi-regen/model/UpdateDatasetResult.h
	include/alibabacloud/viapi-regen/model/UpdateLabelsetRequest.h
	include/alibabacloud/viapi-regen/model/UpdateLabelsetResult.h
	include/alibabacloud/viapi-regen/model/UpdateServiceRequest.h
	include/alibabacloud/viapi-regen/model/UpdateServiceResult.h
	include/alibabacloud/viapi-regen/model/UpdateTrainTaskRequest.h
	include/alibabacloud/viapi-regen/model/UpdateTrainTaskResult.h
	include/alibabacloud/viapi-regen/model/UpdateWorkspaceRequest.h
	include/alibabacloud/viapi-regen/model/UpdateWorkspaceResult.h )

set(viapi-regen_src 
	src/Viapi-regenClient.cc
	src/model/CheckDatasetOssBucketCORSRequest.cc
	src/model/CheckDatasetOssBucketCORSResult.cc
	src/model/CreateDatasetRequest.cc
	src/model/CreateDatasetResult.cc
	src/model/CreateLabelsetRequest.cc
	src/model/CreateLabelsetResult.cc
	src/model/CreateServiceRequest.cc
	src/model/CreateServiceResult.cc
	src/model/CreateTagTaskRequest.cc
	src/model/CreateTagTaskResult.cc
	src/model/CreateTrainTaskRequest.cc
	src/model/CreateTrainTaskResult.cc
	src/model/CreateWorkspaceRequest.cc
	src/model/CreateWorkspaceResult.cc
	src/model/CustomizeClassifyImageRequest.cc
	src/model/CustomizeClassifyImageResult.cc
	src/model/CustomizeDetectImageRequest.cc
	src/model/CustomizeDetectImageResult.cc
	src/model/CustomizeInstanceSegmentImageRequest.cc
	src/model/CustomizeInstanceSegmentImageResult.cc
	src/model/DebugServiceRequest.cc
	src/model/DebugServiceResult.cc
	src/model/DeleteDataReflowDataRequest.cc
	src/model/DeleteDataReflowDataResult.cc
	src/model/DeleteDatasetRequest.cc
	src/model/DeleteDatasetResult.cc
	src/model/DeleteLabelsetRequest.cc
	src/model/DeleteLabelsetResult.cc
	src/model/DeleteLabelsetDataRequest.cc
	src/model/DeleteLabelsetDataResult.cc
	src/model/DeleteServiceRequest.cc
	src/model/DeleteServiceResult.cc
	src/model/DeleteTrainTaskRequest.cc
	src/model/DeleteTrainTaskResult.cc
	src/model/DeleteWorkspaceRequest.cc
	src/model/DeleteWorkspaceResult.cc
	src/model/DisableDataReflowRequest.cc
	src/model/DisableDataReflowResult.cc
	src/model/DownloadDatasetRequest.cc
	src/model/DownloadDatasetResult.cc
	src/model/DownloadFileNameListRequest.cc
	src/model/DownloadFileNameListResult.cc
	src/model/DownloadLabelFileRequest.cc
	src/model/DownloadLabelFileResult.cc
	src/model/EnableDataReflowRequest.cc
	src/model/EnableDataReflowResult.cc
	src/model/ExportDataReflowDataListRequest.cc
	src/model/ExportDataReflowDataListResult.cc
	src/model/GetDatasetRequest.cc
	src/model/GetDatasetResult.cc
	src/model/GetDiffCountLabelsetAndDatasetRequest.cc
	src/model/GetDiffCountLabelsetAndDatasetResult.cc
	src/model/GetLabelDetailRequest.cc
	src/model/GetLabelDetailResult.cc
	src/model/GetLabelsetRequest.cc
	src/model/GetLabelsetResult.cc
	src/model/GetServiceRequest.cc
	src/model/GetServiceResult.cc
	src/model/GetServiceInvokeRequest.cc
	src/model/GetServiceInvokeResult.cc
	src/model/GetServiceQpsRequest.cc
	src/model/GetServiceQpsResult.cc
	src/model/GetTrainModelRequest.cc
	src/model/GetTrainModelResult.cc
	src/model/GetTrainTaskRequest.cc
	src/model/GetTrainTaskResult.cc
	src/model/GetTrainTaskEstimatedTimeRequest.cc
	src/model/GetTrainTaskEstimatedTimeResult.cc
	src/model/GetUploadPolicyRequest.cc
	src/model/GetUploadPolicyResult.cc
	src/model/GetUserInfoRequest.cc
	src/model/GetUserInfoResult.cc
	src/model/GetWorkspaceRequest.cc
	src/model/GetWorkspaceResult.cc
	src/model/ListDataReflowDatasRequest.cc
	src/model/ListDataReflowDatasResult.cc
	src/model/ListDatasetDatasRequest.cc
	src/model/ListDatasetDatasResult.cc
	src/model/ListDatasetsRequest.cc
	src/model/ListDatasetsResult.cc
	src/model/ListLabelsetDatasRequest.cc
	src/model/ListLabelsetDatasResult.cc
	src/model/ListLabelsetsRequest.cc
	src/model/ListLabelsetsResult.cc
	src/model/ListServicesRequest.cc
	src/model/ListServicesResult.cc
	src/model/ListTrainTasksRequest.cc
	src/model/ListTrainTasksResult.cc
	src/model/ListWorkspacesRequest.cc
	src/model/ListWorkspacesResult.cc
	src/model/SetDatasetUserOssPathRequest.cc
	src/model/SetDatasetUserOssPathResult.cc
	src/model/StartServiceRequest.cc
	src/model/StartServiceResult.cc
	src/model/StartTrainTaskRequest.cc
	src/model/StartTrainTaskResult.cc
	src/model/StopServiceRequest.cc
	src/model/StopServiceResult.cc
	src/model/StopTrainTaskRequest.cc
	src/model/StopTrainTaskResult.cc
	src/model/UpdateDatasetRequest.cc
	src/model/UpdateDatasetResult.cc
	src/model/UpdateLabelsetRequest.cc
	src/model/UpdateLabelsetResult.cc
	src/model/UpdateServiceRequest.cc
	src/model/UpdateServiceResult.cc
	src/model/UpdateTrainTaskRequest.cc
	src/model/UpdateTrainTaskResult.cc
	src/model/UpdateWorkspaceRequest.cc
	src/model/UpdateWorkspaceResult.cc )

add_library(viapi-regen ${LIB_TYPE}
	${viapi-regen_public_header}
	${viapi-regen_public_header_model}
	${viapi-regen_src})

set_target_properties(viapi-regen
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}viapi-regen
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(viapi-regen
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_VIAPI_REGEN_LIBRARY)
endif()

target_include_directories(viapi-regen
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(viapi-regen
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(viapi-regen
		jsoncpp)
	target_include_directories(viapi-regen
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(viapi-regen
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(viapi-regen
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(viapi-regen
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(viapi-regen
		jsoncpp)
endif()

install(FILES ${viapi-regen_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/viapi-regen)
install(FILES ${viapi-regen_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/viapi-regen/model)
install(TARGETS viapi-regen
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)