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

set(devops-rdc_public_header 
	include/alibabacloud/devops-rdc/Devops_rdcClient.h
	include/alibabacloud/devops-rdc/Devops_rdcExport.h )

set(devops-rdc_public_header_model 
	include/alibabacloud/devops-rdc/model/AddCodeupSourceToPipelineRequest.h
	include/alibabacloud/devops-rdc/model/AddCodeupSourceToPipelineResult.h
	include/alibabacloud/devops-rdc/model/BatchInsertMembersRequest.h
	include/alibabacloud/devops-rdc/model/BatchInsertMembersResult.h
	include/alibabacloud/devops-rdc/model/CancelPipelineRequest.h
	include/alibabacloud/devops-rdc/model/CancelPipelineResult.h
	include/alibabacloud/devops-rdc/model/CheckAliyunAccountExistsRequest.h
	include/alibabacloud/devops-rdc/model/CheckAliyunAccountExistsResult.h
	include/alibabacloud/devops-rdc/model/CreateCommonGroupRequest.h
	include/alibabacloud/devops-rdc/model/CreateCommonGroupResult.h
	include/alibabacloud/devops-rdc/model/CreateCredentialRequest.h
	include/alibabacloud/devops-rdc/model/CreateCredentialResult.h
	include/alibabacloud/devops-rdc/model/CreateDevopsOrganizationRequest.h
	include/alibabacloud/devops-rdc/model/CreateDevopsOrganizationResult.h
	include/alibabacloud/devops-rdc/model/CreateDevopsProjectRequest.h
	include/alibabacloud/devops-rdc/model/CreateDevopsProjectResult.h
	include/alibabacloud/devops-rdc/model/CreateDevopsProjectSprintRequest.h
	include/alibabacloud/devops-rdc/model/CreateDevopsProjectSprintResult.h
	include/alibabacloud/devops-rdc/model/CreateDevopsProjectTaskRequest.h
	include/alibabacloud/devops-rdc/model/CreateDevopsProjectTaskResult.h
	include/alibabacloud/devops-rdc/model/CreatePipelineRequest.h
	include/alibabacloud/devops-rdc/model/CreatePipelineResult.h
	include/alibabacloud/devops-rdc/model/CreatePipelineFromTemplateRequest.h
	include/alibabacloud/devops-rdc/model/CreatePipelineFromTemplateResult.h
	include/alibabacloud/devops-rdc/model/CreateServiceConnectionRequest.h
	include/alibabacloud/devops-rdc/model/CreateServiceConnectionResult.h
	include/alibabacloud/devops-rdc/model/DeleteCommonGroupRequest.h
	include/alibabacloud/devops-rdc/model/DeleteCommonGroupResult.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsOrganizationRequest.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsOrganizationResult.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsOrganizationMembersRequest.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsOrganizationMembersResult.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsProjectRequest.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsProjectResult.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsProjectMembersRequest.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsProjectMembersResult.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsProjectSprintRequest.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsProjectSprintResult.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsProjectTaskRequest.h
	include/alibabacloud/devops-rdc/model/DeleteDevopsProjectTaskResult.h
	include/alibabacloud/devops-rdc/model/DeletePipelineMemberRequest.h
	include/alibabacloud/devops-rdc/model/DeletePipelineMemberResult.h
	include/alibabacloud/devops-rdc/model/ExecutePipelineRequest.h
	include/alibabacloud/devops-rdc/model/ExecutePipelineResult.h
	include/alibabacloud/devops-rdc/model/GetDevopsOrganizationMembersRequest.h
	include/alibabacloud/devops-rdc/model/GetDevopsOrganizationMembersResult.h
	include/alibabacloud/devops-rdc/model/GetDevopsProjectInfoRequest.h
	include/alibabacloud/devops-rdc/model/GetDevopsProjectInfoResult.h
	include/alibabacloud/devops-rdc/model/GetDevopsProjectMembersRequest.h
	include/alibabacloud/devops-rdc/model/GetDevopsProjectMembersResult.h
	include/alibabacloud/devops-rdc/model/GetDevopsProjectSprintInfoRequest.h
	include/alibabacloud/devops-rdc/model/GetDevopsProjectSprintInfoResult.h
	include/alibabacloud/devops-rdc/model/GetDevopsProjectTaskInfoRequest.h
	include/alibabacloud/devops-rdc/model/GetDevopsProjectTaskInfoResult.h
	include/alibabacloud/devops-rdc/model/GetLastWorkspaceRequest.h
	include/alibabacloud/devops-rdc/model/GetLastWorkspaceResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstHistoryRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstHistoryResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceBuildNumberStatusRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceBuildNumberStatusResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceGroupStatusRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceGroupStatusResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceInfoRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceInfoResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceStatusRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineInstanceStatusResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineLogRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineLogResult.h
	include/alibabacloud/devops-rdc/model/GetPipelineStepLogRequest.h
	include/alibabacloud/devops-rdc/model/GetPipelineStepLogResult.h
	include/alibabacloud/devops-rdc/model/GetPipleineLatestInstanceStatusRequest.h
	include/alibabacloud/devops-rdc/model/GetPipleineLatestInstanceStatusResult.h
	include/alibabacloud/devops-rdc/model/GetProjectOptionRequest.h
	include/alibabacloud/devops-rdc/model/GetProjectOptionResult.h
	include/alibabacloud/devops-rdc/model/GetTaskDetailActivityRequest.h
	include/alibabacloud/devops-rdc/model/GetTaskDetailActivityResult.h
	include/alibabacloud/devops-rdc/model/GetTaskDetailBaseRequest.h
	include/alibabacloud/devops-rdc/model/GetTaskDetailBaseResult.h
	include/alibabacloud/devops-rdc/model/GetTaskListFilterRequest.h
	include/alibabacloud/devops-rdc/model/GetTaskListFilterResult.h
	include/alibabacloud/devops-rdc/model/GetUserByAliyunUidRequest.h
	include/alibabacloud/devops-rdc/model/GetUserByAliyunUidResult.h
	include/alibabacloud/devops-rdc/model/GetUserNameRequest.h
	include/alibabacloud/devops-rdc/model/GetUserNameResult.h
	include/alibabacloud/devops-rdc/model/InsertDevopsUserRequest.h
	include/alibabacloud/devops-rdc/model/InsertDevopsUserResult.h
	include/alibabacloud/devops-rdc/model/InsertPipelineMemberRequest.h
	include/alibabacloud/devops-rdc/model/InsertPipelineMemberResult.h
	include/alibabacloud/devops-rdc/model/InsertProjectMembersRequest.h
	include/alibabacloud/devops-rdc/model/InsertProjectMembersResult.h
	include/alibabacloud/devops-rdc/model/ListCommonGroupRequest.h
	include/alibabacloud/devops-rdc/model/ListCommonGroupResult.h
	include/alibabacloud/devops-rdc/model/ListCredentialsRequest.h
	include/alibabacloud/devops-rdc/model/ListCredentialsResult.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectSprintsRequest.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectSprintsResult.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectTaskFlowRequest.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectTaskFlowResult.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectTaskFlowStatusRequest.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectTaskFlowStatusResult.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectTaskListRequest.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectTaskListResult.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectTasksRequest.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectTasksResult.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectsRequest.h
	include/alibabacloud/devops-rdc/model/ListDevopsProjectsResult.h
	include/alibabacloud/devops-rdc/model/ListDevopsScenarioFieldConfigRequest.h
	include/alibabacloud/devops-rdc/model/ListDevopsScenarioFieldConfigResult.h
	include/alibabacloud/devops-rdc/model/ListPipelineTemplatesRequest.h
	include/alibabacloud/devops-rdc/model/ListPipelineTemplatesResult.h
	include/alibabacloud/devops-rdc/model/ListPipelinesRequest.h
	include/alibabacloud/devops-rdc/model/ListPipelinesResult.h
	include/alibabacloud/devops-rdc/model/ListProjectCustomFieldsRequest.h
	include/alibabacloud/devops-rdc/model/ListProjectCustomFieldsResult.h
	include/alibabacloud/devops-rdc/model/ListServiceConnectionsRequest.h
	include/alibabacloud/devops-rdc/model/ListServiceConnectionsResult.h
	include/alibabacloud/devops-rdc/model/ListSmartGroupRequest.h
	include/alibabacloud/devops-rdc/model/ListSmartGroupResult.h
	include/alibabacloud/devops-rdc/model/ListUserOrganizationRequest.h
	include/alibabacloud/devops-rdc/model/ListUserOrganizationResult.h
	include/alibabacloud/devops-rdc/model/TransferPipelineOwnerRequest.h
	include/alibabacloud/devops-rdc/model/TransferPipelineOwnerResult.h
	include/alibabacloud/devops-rdc/model/UpdateCommonGroupRequest.h
	include/alibabacloud/devops-rdc/model/UpdateCommonGroupResult.h
	include/alibabacloud/devops-rdc/model/UpdateDevopsProjectRequest.h
	include/alibabacloud/devops-rdc/model/UpdateDevopsProjectResult.h
	include/alibabacloud/devops-rdc/model/UpdateDevopsProjectSprintRequest.h
	include/alibabacloud/devops-rdc/model/UpdateDevopsProjectSprintResult.h
	include/alibabacloud/devops-rdc/model/UpdateDevopsProjectTaskRequest.h
	include/alibabacloud/devops-rdc/model/UpdateDevopsProjectTaskResult.h
	include/alibabacloud/devops-rdc/model/UpdatePipelineEnvVarsRequest.h
	include/alibabacloud/devops-rdc/model/UpdatePipelineEnvVarsResult.h
	include/alibabacloud/devops-rdc/model/UpdatePipelineMemberRequest.h
	include/alibabacloud/devops-rdc/model/UpdatePipelineMemberResult.h
	include/alibabacloud/devops-rdc/model/UpdateTaskDetailRequest.h
	include/alibabacloud/devops-rdc/model/UpdateTaskDetailResult.h )

set(devops-rdc_src 
	src/Devops-rdcClient.cc
	src/model/AddCodeupSourceToPipelineRequest.cc
	src/model/AddCodeupSourceToPipelineResult.cc
	src/model/BatchInsertMembersRequest.cc
	src/model/BatchInsertMembersResult.cc
	src/model/CancelPipelineRequest.cc
	src/model/CancelPipelineResult.cc
	src/model/CheckAliyunAccountExistsRequest.cc
	src/model/CheckAliyunAccountExistsResult.cc
	src/model/CreateCommonGroupRequest.cc
	src/model/CreateCommonGroupResult.cc
	src/model/CreateCredentialRequest.cc
	src/model/CreateCredentialResult.cc
	src/model/CreateDevopsOrganizationRequest.cc
	src/model/CreateDevopsOrganizationResult.cc
	src/model/CreateDevopsProjectRequest.cc
	src/model/CreateDevopsProjectResult.cc
	src/model/CreateDevopsProjectSprintRequest.cc
	src/model/CreateDevopsProjectSprintResult.cc
	src/model/CreateDevopsProjectTaskRequest.cc
	src/model/CreateDevopsProjectTaskResult.cc
	src/model/CreatePipelineRequest.cc
	src/model/CreatePipelineResult.cc
	src/model/CreatePipelineFromTemplateRequest.cc
	src/model/CreatePipelineFromTemplateResult.cc
	src/model/CreateServiceConnectionRequest.cc
	src/model/CreateServiceConnectionResult.cc
	src/model/DeleteCommonGroupRequest.cc
	src/model/DeleteCommonGroupResult.cc
	src/model/DeleteDevopsOrganizationRequest.cc
	src/model/DeleteDevopsOrganizationResult.cc
	src/model/DeleteDevopsOrganizationMembersRequest.cc
	src/model/DeleteDevopsOrganizationMembersResult.cc
	src/model/DeleteDevopsProjectRequest.cc
	src/model/DeleteDevopsProjectResult.cc
	src/model/DeleteDevopsProjectMembersRequest.cc
	src/model/DeleteDevopsProjectMembersResult.cc
	src/model/DeleteDevopsProjectSprintRequest.cc
	src/model/DeleteDevopsProjectSprintResult.cc
	src/model/DeleteDevopsProjectTaskRequest.cc
	src/model/DeleteDevopsProjectTaskResult.cc
	src/model/DeletePipelineMemberRequest.cc
	src/model/DeletePipelineMemberResult.cc
	src/model/ExecutePipelineRequest.cc
	src/model/ExecutePipelineResult.cc
	src/model/GetDevopsOrganizationMembersRequest.cc
	src/model/GetDevopsOrganizationMembersResult.cc
	src/model/GetDevopsProjectInfoRequest.cc
	src/model/GetDevopsProjectInfoResult.cc
	src/model/GetDevopsProjectMembersRequest.cc
	src/model/GetDevopsProjectMembersResult.cc
	src/model/GetDevopsProjectSprintInfoRequest.cc
	src/model/GetDevopsProjectSprintInfoResult.cc
	src/model/GetDevopsProjectTaskInfoRequest.cc
	src/model/GetDevopsProjectTaskInfoResult.cc
	src/model/GetLastWorkspaceRequest.cc
	src/model/GetLastWorkspaceResult.cc
	src/model/GetPipelineInstHistoryRequest.cc
	src/model/GetPipelineInstHistoryResult.cc
	src/model/GetPipelineInstanceBuildNumberStatusRequest.cc
	src/model/GetPipelineInstanceBuildNumberStatusResult.cc
	src/model/GetPipelineInstanceGroupStatusRequest.cc
	src/model/GetPipelineInstanceGroupStatusResult.cc
	src/model/GetPipelineInstanceInfoRequest.cc
	src/model/GetPipelineInstanceInfoResult.cc
	src/model/GetPipelineInstanceStatusRequest.cc
	src/model/GetPipelineInstanceStatusResult.cc
	src/model/GetPipelineLogRequest.cc
	src/model/GetPipelineLogResult.cc
	src/model/GetPipelineStepLogRequest.cc
	src/model/GetPipelineStepLogResult.cc
	src/model/GetPipleineLatestInstanceStatusRequest.cc
	src/model/GetPipleineLatestInstanceStatusResult.cc
	src/model/GetProjectOptionRequest.cc
	src/model/GetProjectOptionResult.cc
	src/model/GetTaskDetailActivityRequest.cc
	src/model/GetTaskDetailActivityResult.cc
	src/model/GetTaskDetailBaseRequest.cc
	src/model/GetTaskDetailBaseResult.cc
	src/model/GetTaskListFilterRequest.cc
	src/model/GetTaskListFilterResult.cc
	src/model/GetUserByAliyunUidRequest.cc
	src/model/GetUserByAliyunUidResult.cc
	src/model/GetUserNameRequest.cc
	src/model/GetUserNameResult.cc
	src/model/InsertDevopsUserRequest.cc
	src/model/InsertDevopsUserResult.cc
	src/model/InsertPipelineMemberRequest.cc
	src/model/InsertPipelineMemberResult.cc
	src/model/InsertProjectMembersRequest.cc
	src/model/InsertProjectMembersResult.cc
	src/model/ListCommonGroupRequest.cc
	src/model/ListCommonGroupResult.cc
	src/model/ListCredentialsRequest.cc
	src/model/ListCredentialsResult.cc
	src/model/ListDevopsProjectSprintsRequest.cc
	src/model/ListDevopsProjectSprintsResult.cc
	src/model/ListDevopsProjectTaskFlowRequest.cc
	src/model/ListDevopsProjectTaskFlowResult.cc
	src/model/ListDevopsProjectTaskFlowStatusRequest.cc
	src/model/ListDevopsProjectTaskFlowStatusResult.cc
	src/model/ListDevopsProjectTaskListRequest.cc
	src/model/ListDevopsProjectTaskListResult.cc
	src/model/ListDevopsProjectTasksRequest.cc
	src/model/ListDevopsProjectTasksResult.cc
	src/model/ListDevopsProjectsRequest.cc
	src/model/ListDevopsProjectsResult.cc
	src/model/ListDevopsScenarioFieldConfigRequest.cc
	src/model/ListDevopsScenarioFieldConfigResult.cc
	src/model/ListPipelineTemplatesRequest.cc
	src/model/ListPipelineTemplatesResult.cc
	src/model/ListPipelinesRequest.cc
	src/model/ListPipelinesResult.cc
	src/model/ListProjectCustomFieldsRequest.cc
	src/model/ListProjectCustomFieldsResult.cc
	src/model/ListServiceConnectionsRequest.cc
	src/model/ListServiceConnectionsResult.cc
	src/model/ListSmartGroupRequest.cc
	src/model/ListSmartGroupResult.cc
	src/model/ListUserOrganizationRequest.cc
	src/model/ListUserOrganizationResult.cc
	src/model/TransferPipelineOwnerRequest.cc
	src/model/TransferPipelineOwnerResult.cc
	src/model/UpdateCommonGroupRequest.cc
	src/model/UpdateCommonGroupResult.cc
	src/model/UpdateDevopsProjectRequest.cc
	src/model/UpdateDevopsProjectResult.cc
	src/model/UpdateDevopsProjectSprintRequest.cc
	src/model/UpdateDevopsProjectSprintResult.cc
	src/model/UpdateDevopsProjectTaskRequest.cc
	src/model/UpdateDevopsProjectTaskResult.cc
	src/model/UpdatePipelineEnvVarsRequest.cc
	src/model/UpdatePipelineEnvVarsResult.cc
	src/model/UpdatePipelineMemberRequest.cc
	src/model/UpdatePipelineMemberResult.cc
	src/model/UpdateTaskDetailRequest.cc
	src/model/UpdateTaskDetailResult.cc )

add_library(devops-rdc ${LIB_TYPE}
	${devops-rdc_public_header}
	${devops-rdc_public_header_model}
	${devops-rdc_src})

set_target_properties(devops-rdc
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}devops-rdc
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(devops-rdc
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DEVOPS_RDC_LIBRARY)
endif()

target_include_directories(devops-rdc
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(devops-rdc
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(devops-rdc
		jsoncpp)
	target_include_directories(devops-rdc
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(devops-rdc
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(devops-rdc
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(devops-rdc
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(devops-rdc
		jsoncpp)
endif()

install(FILES ${devops-rdc_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/devops-rdc)
install(FILES ${devops-rdc_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/devops-rdc/model)
install(TARGETS devops-rdc
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)