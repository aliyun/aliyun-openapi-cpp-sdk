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

set(schedulerx2_public_header 
	include/alibabacloud/schedulerx2/Schedulerx2Client.h
	include/alibabacloud/schedulerx2/Schedulerx2Export.h )

set(schedulerx2_public_header_model 
	include/alibabacloud/schedulerx2/model/BatchDeleteJobsRequest.h
	include/alibabacloud/schedulerx2/model/BatchDeleteJobsResult.h
	include/alibabacloud/schedulerx2/model/BatchDeleteRouteStrategyRequest.h
	include/alibabacloud/schedulerx2/model/BatchDeleteRouteStrategyResult.h
	include/alibabacloud/schedulerx2/model/BatchDisableJobsRequest.h
	include/alibabacloud/schedulerx2/model/BatchDisableJobsResult.h
	include/alibabacloud/schedulerx2/model/BatchEnableJobsRequest.h
	include/alibabacloud/schedulerx2/model/BatchEnableJobsResult.h
	include/alibabacloud/schedulerx2/model/CreateAppGroupRequest.h
	include/alibabacloud/schedulerx2/model/CreateAppGroupResult.h
	include/alibabacloud/schedulerx2/model/CreateJobRequest.h
	include/alibabacloud/schedulerx2/model/CreateJobResult.h
	include/alibabacloud/schedulerx2/model/CreateNamespaceRequest.h
	include/alibabacloud/schedulerx2/model/CreateNamespaceResult.h
	include/alibabacloud/schedulerx2/model/CreateRouteStrategyRequest.h
	include/alibabacloud/schedulerx2/model/CreateRouteStrategyResult.h
	include/alibabacloud/schedulerx2/model/CreateWorkflowRequest.h
	include/alibabacloud/schedulerx2/model/CreateWorkflowResult.h
	include/alibabacloud/schedulerx2/model/DeleteAppGroupRequest.h
	include/alibabacloud/schedulerx2/model/DeleteAppGroupResult.h
	include/alibabacloud/schedulerx2/model/DeleteJobRequest.h
	include/alibabacloud/schedulerx2/model/DeleteJobResult.h
	include/alibabacloud/schedulerx2/model/DeleteNamespaceRequest.h
	include/alibabacloud/schedulerx2/model/DeleteNamespaceResult.h
	include/alibabacloud/schedulerx2/model/DeleteRouteStrategyRequest.h
	include/alibabacloud/schedulerx2/model/DeleteRouteStrategyResult.h
	include/alibabacloud/schedulerx2/model/DeleteWorkflowRequest.h
	include/alibabacloud/schedulerx2/model/DeleteWorkflowResult.h
	include/alibabacloud/schedulerx2/model/DescribeRegionsRequest.h
	include/alibabacloud/schedulerx2/model/DescribeRegionsResult.h
	include/alibabacloud/schedulerx2/model/DesignateWorkersRequest.h
	include/alibabacloud/schedulerx2/model/DesignateWorkersResult.h
	include/alibabacloud/schedulerx2/model/DisableJobRequest.h
	include/alibabacloud/schedulerx2/model/DisableJobResult.h
	include/alibabacloud/schedulerx2/model/DisableWorkflowRequest.h
	include/alibabacloud/schedulerx2/model/DisableWorkflowResult.h
	include/alibabacloud/schedulerx2/model/EnableJobRequest.h
	include/alibabacloud/schedulerx2/model/EnableJobResult.h
	include/alibabacloud/schedulerx2/model/EnableWorkflowRequest.h
	include/alibabacloud/schedulerx2/model/EnableWorkflowResult.h
	include/alibabacloud/schedulerx2/model/ExecuteJobRequest.h
	include/alibabacloud/schedulerx2/model/ExecuteJobResult.h
	include/alibabacloud/schedulerx2/model/ExecuteWorkflowRequest.h
	include/alibabacloud/schedulerx2/model/ExecuteWorkflowResult.h
	include/alibabacloud/schedulerx2/model/GetAppGroupRequest.h
	include/alibabacloud/schedulerx2/model/GetAppGroupResult.h
	include/alibabacloud/schedulerx2/model/GetJobInfoRequest.h
	include/alibabacloud/schedulerx2/model/GetJobInfoResult.h
	include/alibabacloud/schedulerx2/model/GetJobInstanceRequest.h
	include/alibabacloud/schedulerx2/model/GetJobInstanceResult.h
	include/alibabacloud/schedulerx2/model/GetJobInstanceListRequest.h
	include/alibabacloud/schedulerx2/model/GetJobInstanceListResult.h
	include/alibabacloud/schedulerx2/model/GetLogRequest.h
	include/alibabacloud/schedulerx2/model/GetLogResult.h
	include/alibabacloud/schedulerx2/model/GetOverviewRequest.h
	include/alibabacloud/schedulerx2/model/GetOverviewResult.h
	include/alibabacloud/schedulerx2/model/GetWorkFlowRequest.h
	include/alibabacloud/schedulerx2/model/GetWorkFlowResult.h
	include/alibabacloud/schedulerx2/model/GetWorkerListRequest.h
	include/alibabacloud/schedulerx2/model/GetWorkerListResult.h
	include/alibabacloud/schedulerx2/model/GetWorkflowInstanceRequest.h
	include/alibabacloud/schedulerx2/model/GetWorkflowInstanceResult.h
	include/alibabacloud/schedulerx2/model/GrantPermissionRequest.h
	include/alibabacloud/schedulerx2/model/GrantPermissionResult.h
	include/alibabacloud/schedulerx2/model/ListGroupsRequest.h
	include/alibabacloud/schedulerx2/model/ListGroupsResult.h
	include/alibabacloud/schedulerx2/model/ListJobScriptHistoryRequest.h
	include/alibabacloud/schedulerx2/model/ListJobScriptHistoryResult.h
	include/alibabacloud/schedulerx2/model/ListJobsRequest.h
	include/alibabacloud/schedulerx2/model/ListJobsResult.h
	include/alibabacloud/schedulerx2/model/ListNamespacesRequest.h
	include/alibabacloud/schedulerx2/model/ListNamespacesResult.h
	include/alibabacloud/schedulerx2/model/ListWorkflowInstanceRequest.h
	include/alibabacloud/schedulerx2/model/ListWorkflowInstanceResult.h
	include/alibabacloud/schedulerx2/model/ReadSchedulerxDesignateDetailRequest.h
	include/alibabacloud/schedulerx2/model/ReadSchedulerxDesignateDetailResult.h
	include/alibabacloud/schedulerx2/model/ReadSchedulerxDesignateInfoRequest.h
	include/alibabacloud/schedulerx2/model/ReadSchedulerxDesignateInfoResult.h
	include/alibabacloud/schedulerx2/model/RerunJobRequest.h
	include/alibabacloud/schedulerx2/model/RerunJobResult.h
	include/alibabacloud/schedulerx2/model/RetryJobInstanceRequest.h
	include/alibabacloud/schedulerx2/model/RetryJobInstanceResult.h
	include/alibabacloud/schedulerx2/model/RevokePermissionRequest.h
	include/alibabacloud/schedulerx2/model/RevokePermissionResult.h
	include/alibabacloud/schedulerx2/model/SetJobInstanceSuccessRequest.h
	include/alibabacloud/schedulerx2/model/SetJobInstanceSuccessResult.h
	include/alibabacloud/schedulerx2/model/SetWfInstanceSuccessRequest.h
	include/alibabacloud/schedulerx2/model/SetWfInstanceSuccessResult.h
	include/alibabacloud/schedulerx2/model/StopInstanceRequest.h
	include/alibabacloud/schedulerx2/model/StopInstanceResult.h
	include/alibabacloud/schedulerx2/model/UpdateAppGroupRequest.h
	include/alibabacloud/schedulerx2/model/UpdateAppGroupResult.h
	include/alibabacloud/schedulerx2/model/UpdateJobRequest.h
	include/alibabacloud/schedulerx2/model/UpdateJobResult.h
	include/alibabacloud/schedulerx2/model/UpdateJobScriptRequest.h
	include/alibabacloud/schedulerx2/model/UpdateJobScriptResult.h
	include/alibabacloud/schedulerx2/model/UpdateNamespaceRequest.h
	include/alibabacloud/schedulerx2/model/UpdateNamespaceResult.h
	include/alibabacloud/schedulerx2/model/UpdateWorkflowRequest.h
	include/alibabacloud/schedulerx2/model/UpdateWorkflowResult.h
	include/alibabacloud/schedulerx2/model/UpdateWorkflowDagRequest.h
	include/alibabacloud/schedulerx2/model/UpdateWorkflowDagResult.h )

set(schedulerx2_src 
	src/Schedulerx2Client.cc
	src/model/BatchDeleteJobsRequest.cc
	src/model/BatchDeleteJobsResult.cc
	src/model/BatchDeleteRouteStrategyRequest.cc
	src/model/BatchDeleteRouteStrategyResult.cc
	src/model/BatchDisableJobsRequest.cc
	src/model/BatchDisableJobsResult.cc
	src/model/BatchEnableJobsRequest.cc
	src/model/BatchEnableJobsResult.cc
	src/model/CreateAppGroupRequest.cc
	src/model/CreateAppGroupResult.cc
	src/model/CreateJobRequest.cc
	src/model/CreateJobResult.cc
	src/model/CreateNamespaceRequest.cc
	src/model/CreateNamespaceResult.cc
	src/model/CreateRouteStrategyRequest.cc
	src/model/CreateRouteStrategyResult.cc
	src/model/CreateWorkflowRequest.cc
	src/model/CreateWorkflowResult.cc
	src/model/DeleteAppGroupRequest.cc
	src/model/DeleteAppGroupResult.cc
	src/model/DeleteJobRequest.cc
	src/model/DeleteJobResult.cc
	src/model/DeleteNamespaceRequest.cc
	src/model/DeleteNamespaceResult.cc
	src/model/DeleteRouteStrategyRequest.cc
	src/model/DeleteRouteStrategyResult.cc
	src/model/DeleteWorkflowRequest.cc
	src/model/DeleteWorkflowResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DesignateWorkersRequest.cc
	src/model/DesignateWorkersResult.cc
	src/model/DisableJobRequest.cc
	src/model/DisableJobResult.cc
	src/model/DisableWorkflowRequest.cc
	src/model/DisableWorkflowResult.cc
	src/model/EnableJobRequest.cc
	src/model/EnableJobResult.cc
	src/model/EnableWorkflowRequest.cc
	src/model/EnableWorkflowResult.cc
	src/model/ExecuteJobRequest.cc
	src/model/ExecuteJobResult.cc
	src/model/ExecuteWorkflowRequest.cc
	src/model/ExecuteWorkflowResult.cc
	src/model/GetAppGroupRequest.cc
	src/model/GetAppGroupResult.cc
	src/model/GetJobInfoRequest.cc
	src/model/GetJobInfoResult.cc
	src/model/GetJobInstanceRequest.cc
	src/model/GetJobInstanceResult.cc
	src/model/GetJobInstanceListRequest.cc
	src/model/GetJobInstanceListResult.cc
	src/model/GetLogRequest.cc
	src/model/GetLogResult.cc
	src/model/GetOverviewRequest.cc
	src/model/GetOverviewResult.cc
	src/model/GetWorkFlowRequest.cc
	src/model/GetWorkFlowResult.cc
	src/model/GetWorkerListRequest.cc
	src/model/GetWorkerListResult.cc
	src/model/GetWorkflowInstanceRequest.cc
	src/model/GetWorkflowInstanceResult.cc
	src/model/GrantPermissionRequest.cc
	src/model/GrantPermissionResult.cc
	src/model/ListGroupsRequest.cc
	src/model/ListGroupsResult.cc
	src/model/ListJobScriptHistoryRequest.cc
	src/model/ListJobScriptHistoryResult.cc
	src/model/ListJobsRequest.cc
	src/model/ListJobsResult.cc
	src/model/ListNamespacesRequest.cc
	src/model/ListNamespacesResult.cc
	src/model/ListWorkflowInstanceRequest.cc
	src/model/ListWorkflowInstanceResult.cc
	src/model/ReadSchedulerxDesignateDetailRequest.cc
	src/model/ReadSchedulerxDesignateDetailResult.cc
	src/model/ReadSchedulerxDesignateInfoRequest.cc
	src/model/ReadSchedulerxDesignateInfoResult.cc
	src/model/RerunJobRequest.cc
	src/model/RerunJobResult.cc
	src/model/RetryJobInstanceRequest.cc
	src/model/RetryJobInstanceResult.cc
	src/model/RevokePermissionRequest.cc
	src/model/RevokePermissionResult.cc
	src/model/SetJobInstanceSuccessRequest.cc
	src/model/SetJobInstanceSuccessResult.cc
	src/model/SetWfInstanceSuccessRequest.cc
	src/model/SetWfInstanceSuccessResult.cc
	src/model/StopInstanceRequest.cc
	src/model/StopInstanceResult.cc
	src/model/UpdateAppGroupRequest.cc
	src/model/UpdateAppGroupResult.cc
	src/model/UpdateJobRequest.cc
	src/model/UpdateJobResult.cc
	src/model/UpdateJobScriptRequest.cc
	src/model/UpdateJobScriptResult.cc
	src/model/UpdateNamespaceRequest.cc
	src/model/UpdateNamespaceResult.cc
	src/model/UpdateWorkflowRequest.cc
	src/model/UpdateWorkflowResult.cc
	src/model/UpdateWorkflowDagRequest.cc
	src/model/UpdateWorkflowDagResult.cc )

add_library(schedulerx2 ${LIB_TYPE}
	${schedulerx2_public_header}
	${schedulerx2_public_header_model}
	${schedulerx2_src})

set_target_properties(schedulerx2
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}schedulerx2
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(schedulerx2
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SCHEDULERX2_LIBRARY)
endif()

target_include_directories(schedulerx2
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(schedulerx2
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(schedulerx2
		jsoncpp)
	target_include_directories(schedulerx2
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(schedulerx2
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(schedulerx2
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(schedulerx2
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(schedulerx2
		jsoncpp)
endif()

install(FILES ${schedulerx2_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/schedulerx2)
install(FILES ${schedulerx2_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/schedulerx2/model)
install(TARGETS schedulerx2
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)