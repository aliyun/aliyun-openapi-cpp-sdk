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

set(foas_public_header 
	include/alibabacloud/foas/FoasClient.h
	include/alibabacloud/foas/FoasExport.h )

set(foas_public_header_model 
	include/alibabacloud/foas/model/BatchGetInstanceRunSummaryRequest.h
	include/alibabacloud/foas/model/BatchGetInstanceRunSummaryResult.h
	include/alibabacloud/foas/model/BindQueueRequest.h
	include/alibabacloud/foas/model/BindQueueResult.h
	include/alibabacloud/foas/model/CalcPlanJsonResourceRequest.h
	include/alibabacloud/foas/model/CalcPlanJsonResourceResult.h
	include/alibabacloud/foas/model/CheckRawPlanJsonRequest.h
	include/alibabacloud/foas/model/CheckRawPlanJsonResult.h
	include/alibabacloud/foas/model/CommitJobRequest.h
	include/alibabacloud/foas/model/CommitJobResult.h
	include/alibabacloud/foas/model/CreateCellClusterOrderRequest.h
	include/alibabacloud/foas/model/CreateCellClusterOrderResult.h
	include/alibabacloud/foas/model/CreateClusterRequest.h
	include/alibabacloud/foas/model/CreateClusterResult.h
	include/alibabacloud/foas/model/CreateFolderRequest.h
	include/alibabacloud/foas/model/CreateFolderResult.h
	include/alibabacloud/foas/model/CreateJobRequest.h
	include/alibabacloud/foas/model/CreateJobResult.h
	include/alibabacloud/foas/model/CreatePackageRequest.h
	include/alibabacloud/foas/model/CreatePackageResult.h
	include/alibabacloud/foas/model/CreateProjectRequest.h
	include/alibabacloud/foas/model/CreateProjectResult.h
	include/alibabacloud/foas/model/CreateQueueRequest.h
	include/alibabacloud/foas/model/CreateQueueResult.h
	include/alibabacloud/foas/model/DeleteFolderRequest.h
	include/alibabacloud/foas/model/DeleteFolderResult.h
	include/alibabacloud/foas/model/DeleteJobRequest.h
	include/alibabacloud/foas/model/DeleteJobResult.h
	include/alibabacloud/foas/model/DeletePackageRequest.h
	include/alibabacloud/foas/model/DeletePackageResult.h
	include/alibabacloud/foas/model/DeleteProjectRequest.h
	include/alibabacloud/foas/model/DeleteProjectResult.h
	include/alibabacloud/foas/model/DeleteQueueRequest.h
	include/alibabacloud/foas/model/DeleteQueueResult.h
	include/alibabacloud/foas/model/DestroyClusterRequest.h
	include/alibabacloud/foas/model/DestroyClusterResult.h
	include/alibabacloud/foas/model/ExpandClusterRequest.h
	include/alibabacloud/foas/model/ExpandClusterResult.h
	include/alibabacloud/foas/model/GetClusterDetailsRequest.h
	include/alibabacloud/foas/model/GetClusterDetailsResult.h
	include/alibabacloud/foas/model/GetClusterEngineVersionsRequest.h
	include/alibabacloud/foas/model/GetClusterEngineVersionsResult.h
	include/alibabacloud/foas/model/GetClusterMetricsRequest.h
	include/alibabacloud/foas/model/GetClusterMetricsResult.h
	include/alibabacloud/foas/model/GetClusterQueueInfoRequest.h
	include/alibabacloud/foas/model/GetClusterQueueInfoResult.h
	include/alibabacloud/foas/model/GetClusterResourceRequest.h
	include/alibabacloud/foas/model/GetClusterResourceResult.h
	include/alibabacloud/foas/model/GetFolderRequest.h
	include/alibabacloud/foas/model/GetFolderResult.h
	include/alibabacloud/foas/model/GetInstanceRequest.h
	include/alibabacloud/foas/model/GetInstanceResult.h
	include/alibabacloud/foas/model/GetInstanceCheckpointRequest.h
	include/alibabacloud/foas/model/GetInstanceCheckpointResult.h
	include/alibabacloud/foas/model/GetInstanceConfigRequest.h
	include/alibabacloud/foas/model/GetInstanceConfigResult.h
	include/alibabacloud/foas/model/GetInstanceDetailRequest.h
	include/alibabacloud/foas/model/GetInstanceDetailResult.h
	include/alibabacloud/foas/model/GetInstanceExceptionsRequest.h
	include/alibabacloud/foas/model/GetInstanceExceptionsResult.h
	include/alibabacloud/foas/model/GetInstanceFinalStateRequest.h
	include/alibabacloud/foas/model/GetInstanceFinalStateResult.h
	include/alibabacloud/foas/model/GetInstanceHistoryAutoScalePlanContentRequest.h
	include/alibabacloud/foas/model/GetInstanceHistoryAutoScalePlanContentResult.h
	include/alibabacloud/foas/model/GetInstanceHistoryAutoScalePlanListRequest.h
	include/alibabacloud/foas/model/GetInstanceHistoryAutoScalePlanListResult.h
	include/alibabacloud/foas/model/GetInstanceMetricRequest.h
	include/alibabacloud/foas/model/GetInstanceMetricResult.h
	include/alibabacloud/foas/model/GetInstanceResourceRequest.h
	include/alibabacloud/foas/model/GetInstanceResourceResult.h
	include/alibabacloud/foas/model/GetInstanceRunSummaryRequest.h
	include/alibabacloud/foas/model/GetInstanceRunSummaryResult.h
	include/alibabacloud/foas/model/GetJobRequest.h
	include/alibabacloud/foas/model/GetJobResult.h
	include/alibabacloud/foas/model/GetJobLatestAutoScalePlanRequest.h
	include/alibabacloud/foas/model/GetJobLatestAutoScalePlanResult.h
	include/alibabacloud/foas/model/GetPackageRequest.h
	include/alibabacloud/foas/model/GetPackageResult.h
	include/alibabacloud/foas/model/GetProjectRequest.h
	include/alibabacloud/foas/model/GetProjectResult.h
	include/alibabacloud/foas/model/GetRawPlanJsonRequest.h
	include/alibabacloud/foas/model/GetRawPlanJsonResult.h
	include/alibabacloud/foas/model/GetRefPackageJobRequest.h
	include/alibabacloud/foas/model/GetRefPackageJobResult.h
	include/alibabacloud/foas/model/ListChildFolderRequest.h
	include/alibabacloud/foas/model/ListChildFolderResult.h
	include/alibabacloud/foas/model/ListClusterRequest.h
	include/alibabacloud/foas/model/ListClusterResult.h
	include/alibabacloud/foas/model/ListInstanceRequest.h
	include/alibabacloud/foas/model/ListInstanceResult.h
	include/alibabacloud/foas/model/ListJobRequest.h
	include/alibabacloud/foas/model/ListJobResult.h
	include/alibabacloud/foas/model/ListPackageRequest.h
	include/alibabacloud/foas/model/ListPackageResult.h
	include/alibabacloud/foas/model/ListProjectRequest.h
	include/alibabacloud/foas/model/ListProjectResult.h
	include/alibabacloud/foas/model/ListProjectBindQueueRequest.h
	include/alibabacloud/foas/model/ListProjectBindQueueResult.h
	include/alibabacloud/foas/model/ListProjectBindQueueResourceRequest.h
	include/alibabacloud/foas/model/ListProjectBindQueueResourceResult.h
	include/alibabacloud/foas/model/ListTagResourcesRequest.h
	include/alibabacloud/foas/model/ListTagResourcesResult.h
	include/alibabacloud/foas/model/MVFolderRequest.h
	include/alibabacloud/foas/model/MVFolderResult.h
	include/alibabacloud/foas/model/ModifyInstanceStateRequest.h
	include/alibabacloud/foas/model/ModifyInstanceStateResult.h
	include/alibabacloud/foas/model/ModifyMasterSpecRequest.h
	include/alibabacloud/foas/model/ModifyMasterSpecResult.h
	include/alibabacloud/foas/model/OfflineJobRequest.h
	include/alibabacloud/foas/model/OfflineJobResult.h
	include/alibabacloud/foas/model/ShrinkClusterRequest.h
	include/alibabacloud/foas/model/ShrinkClusterResult.h
	include/alibabacloud/foas/model/StartJobRequest.h
	include/alibabacloud/foas/model/StartJobResult.h
	include/alibabacloud/foas/model/TagResourcesRequest.h
	include/alibabacloud/foas/model/TagResourcesResult.h
	include/alibabacloud/foas/model/UnbindQueueRequest.h
	include/alibabacloud/foas/model/UnbindQueueResult.h
	include/alibabacloud/foas/model/UntagResourcesRequest.h
	include/alibabacloud/foas/model/UntagResourcesResult.h
	include/alibabacloud/foas/model/UpdateAutoScaleConfigRequest.h
	include/alibabacloud/foas/model/UpdateAutoScaleConfigResult.h
	include/alibabacloud/foas/model/UpdateJobRequest.h
	include/alibabacloud/foas/model/UpdateJobResult.h
	include/alibabacloud/foas/model/UpdatePackageRequest.h
	include/alibabacloud/foas/model/UpdatePackageResult.h
	include/alibabacloud/foas/model/UpdateProjectRequest.h
	include/alibabacloud/foas/model/UpdateProjectResult.h
	include/alibabacloud/foas/model/UpdateProjectConfigRequest.h
	include/alibabacloud/foas/model/UpdateProjectConfigResult.h
	include/alibabacloud/foas/model/UpdateQueueRequest.h
	include/alibabacloud/foas/model/UpdateQueueResult.h
	include/alibabacloud/foas/model/ValidateJobRequest.h
	include/alibabacloud/foas/model/ValidateJobResult.h )

set(foas_src 
	src/FoasClient.cc
	src/model/BatchGetInstanceRunSummaryRequest.cc
	src/model/BatchGetInstanceRunSummaryResult.cc
	src/model/BindQueueRequest.cc
	src/model/BindQueueResult.cc
	src/model/CalcPlanJsonResourceRequest.cc
	src/model/CalcPlanJsonResourceResult.cc
	src/model/CheckRawPlanJsonRequest.cc
	src/model/CheckRawPlanJsonResult.cc
	src/model/CommitJobRequest.cc
	src/model/CommitJobResult.cc
	src/model/CreateCellClusterOrderRequest.cc
	src/model/CreateCellClusterOrderResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/CreateFolderRequest.cc
	src/model/CreateFolderResult.cc
	src/model/CreateJobRequest.cc
	src/model/CreateJobResult.cc
	src/model/CreatePackageRequest.cc
	src/model/CreatePackageResult.cc
	src/model/CreateProjectRequest.cc
	src/model/CreateProjectResult.cc
	src/model/CreateQueueRequest.cc
	src/model/CreateQueueResult.cc
	src/model/DeleteFolderRequest.cc
	src/model/DeleteFolderResult.cc
	src/model/DeleteJobRequest.cc
	src/model/DeleteJobResult.cc
	src/model/DeletePackageRequest.cc
	src/model/DeletePackageResult.cc
	src/model/DeleteProjectRequest.cc
	src/model/DeleteProjectResult.cc
	src/model/DeleteQueueRequest.cc
	src/model/DeleteQueueResult.cc
	src/model/DestroyClusterRequest.cc
	src/model/DestroyClusterResult.cc
	src/model/ExpandClusterRequest.cc
	src/model/ExpandClusterResult.cc
	src/model/GetClusterDetailsRequest.cc
	src/model/GetClusterDetailsResult.cc
	src/model/GetClusterEngineVersionsRequest.cc
	src/model/GetClusterEngineVersionsResult.cc
	src/model/GetClusterMetricsRequest.cc
	src/model/GetClusterMetricsResult.cc
	src/model/GetClusterQueueInfoRequest.cc
	src/model/GetClusterQueueInfoResult.cc
	src/model/GetClusterResourceRequest.cc
	src/model/GetClusterResourceResult.cc
	src/model/GetFolderRequest.cc
	src/model/GetFolderResult.cc
	src/model/GetInstanceRequest.cc
	src/model/GetInstanceResult.cc
	src/model/GetInstanceCheckpointRequest.cc
	src/model/GetInstanceCheckpointResult.cc
	src/model/GetInstanceConfigRequest.cc
	src/model/GetInstanceConfigResult.cc
	src/model/GetInstanceDetailRequest.cc
	src/model/GetInstanceDetailResult.cc
	src/model/GetInstanceExceptionsRequest.cc
	src/model/GetInstanceExceptionsResult.cc
	src/model/GetInstanceFinalStateRequest.cc
	src/model/GetInstanceFinalStateResult.cc
	src/model/GetInstanceHistoryAutoScalePlanContentRequest.cc
	src/model/GetInstanceHistoryAutoScalePlanContentResult.cc
	src/model/GetInstanceHistoryAutoScalePlanListRequest.cc
	src/model/GetInstanceHistoryAutoScalePlanListResult.cc
	src/model/GetInstanceMetricRequest.cc
	src/model/GetInstanceMetricResult.cc
	src/model/GetInstanceResourceRequest.cc
	src/model/GetInstanceResourceResult.cc
	src/model/GetInstanceRunSummaryRequest.cc
	src/model/GetInstanceRunSummaryResult.cc
	src/model/GetJobRequest.cc
	src/model/GetJobResult.cc
	src/model/GetJobLatestAutoScalePlanRequest.cc
	src/model/GetJobLatestAutoScalePlanResult.cc
	src/model/GetPackageRequest.cc
	src/model/GetPackageResult.cc
	src/model/GetProjectRequest.cc
	src/model/GetProjectResult.cc
	src/model/GetRawPlanJsonRequest.cc
	src/model/GetRawPlanJsonResult.cc
	src/model/GetRefPackageJobRequest.cc
	src/model/GetRefPackageJobResult.cc
	src/model/ListChildFolderRequest.cc
	src/model/ListChildFolderResult.cc
	src/model/ListClusterRequest.cc
	src/model/ListClusterResult.cc
	src/model/ListInstanceRequest.cc
	src/model/ListInstanceResult.cc
	src/model/ListJobRequest.cc
	src/model/ListJobResult.cc
	src/model/ListPackageRequest.cc
	src/model/ListPackageResult.cc
	src/model/ListProjectRequest.cc
	src/model/ListProjectResult.cc
	src/model/ListProjectBindQueueRequest.cc
	src/model/ListProjectBindQueueResult.cc
	src/model/ListProjectBindQueueResourceRequest.cc
	src/model/ListProjectBindQueueResourceResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/MVFolderRequest.cc
	src/model/MVFolderResult.cc
	src/model/ModifyInstanceStateRequest.cc
	src/model/ModifyInstanceStateResult.cc
	src/model/ModifyMasterSpecRequest.cc
	src/model/ModifyMasterSpecResult.cc
	src/model/OfflineJobRequest.cc
	src/model/OfflineJobResult.cc
	src/model/ShrinkClusterRequest.cc
	src/model/ShrinkClusterResult.cc
	src/model/StartJobRequest.cc
	src/model/StartJobResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UnbindQueueRequest.cc
	src/model/UnbindQueueResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateAutoScaleConfigRequest.cc
	src/model/UpdateAutoScaleConfigResult.cc
	src/model/UpdateJobRequest.cc
	src/model/UpdateJobResult.cc
	src/model/UpdatePackageRequest.cc
	src/model/UpdatePackageResult.cc
	src/model/UpdateProjectRequest.cc
	src/model/UpdateProjectResult.cc
	src/model/UpdateProjectConfigRequest.cc
	src/model/UpdateProjectConfigResult.cc
	src/model/UpdateQueueRequest.cc
	src/model/UpdateQueueResult.cc
	src/model/ValidateJobRequest.cc
	src/model/ValidateJobResult.cc )

add_library(foas ${LIB_TYPE}
	${foas_public_header}
	${foas_public_header_model}
	${foas_src})

set_target_properties(foas
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}foas
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(foas
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_FOAS_LIBRARY)
endif()

target_include_directories(foas
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(foas
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(foas
		jsoncpp)
	target_include_directories(foas
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(foas
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(foas
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(foas
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(foas
		jsoncpp)
endif()

install(FILES ${foas_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/foas)
install(FILES ${foas_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/foas/model)
install(TARGETS foas
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)