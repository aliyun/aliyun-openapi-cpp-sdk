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

set(oos_public_header 
	include/alibabacloud/oos/OosClient.h
	include/alibabacloud/oos/OosExport.h )

set(oos_public_header_model 
	include/alibabacloud/oos/model/CancelExecutionRequest.h
	include/alibabacloud/oos/model/CancelExecutionResult.h
	include/alibabacloud/oos/model/ChangeResourceGroupRequest.h
	include/alibabacloud/oos/model/ChangeResourceGroupResult.h
	include/alibabacloud/oos/model/ContinueDeployApplicationGroupRequest.h
	include/alibabacloud/oos/model/ContinueDeployApplicationGroupResult.h
	include/alibabacloud/oos/model/CreateApplicationRequest.h
	include/alibabacloud/oos/model/CreateApplicationResult.h
	include/alibabacloud/oos/model/CreateApplicationGroupRequest.h
	include/alibabacloud/oos/model/CreateApplicationGroupResult.h
	include/alibabacloud/oos/model/CreateOpsItemRequest.h
	include/alibabacloud/oos/model/CreateOpsItemResult.h
	include/alibabacloud/oos/model/CreateParameterRequest.h
	include/alibabacloud/oos/model/CreateParameterResult.h
	include/alibabacloud/oos/model/CreatePatchBaselineRequest.h
	include/alibabacloud/oos/model/CreatePatchBaselineResult.h
	include/alibabacloud/oos/model/CreateSecretParameterRequest.h
	include/alibabacloud/oos/model/CreateSecretParameterResult.h
	include/alibabacloud/oos/model/CreateStateConfigurationRequest.h
	include/alibabacloud/oos/model/CreateStateConfigurationResult.h
	include/alibabacloud/oos/model/CreateTemplateRequest.h
	include/alibabacloud/oos/model/CreateTemplateResult.h
	include/alibabacloud/oos/model/DeleteApplicationRequest.h
	include/alibabacloud/oos/model/DeleteApplicationResult.h
	include/alibabacloud/oos/model/DeleteApplicationGroupRequest.h
	include/alibabacloud/oos/model/DeleteApplicationGroupResult.h
	include/alibabacloud/oos/model/DeleteExecutionsRequest.h
	include/alibabacloud/oos/model/DeleteExecutionsResult.h
	include/alibabacloud/oos/model/DeleteParameterRequest.h
	include/alibabacloud/oos/model/DeleteParameterResult.h
	include/alibabacloud/oos/model/DeletePatchBaselineRequest.h
	include/alibabacloud/oos/model/DeletePatchBaselineResult.h
	include/alibabacloud/oos/model/DeleteSecretParameterRequest.h
	include/alibabacloud/oos/model/DeleteSecretParameterResult.h
	include/alibabacloud/oos/model/DeleteStateConfigurationsRequest.h
	include/alibabacloud/oos/model/DeleteStateConfigurationsResult.h
	include/alibabacloud/oos/model/DeleteTemplateRequest.h
	include/alibabacloud/oos/model/DeleteTemplateResult.h
	include/alibabacloud/oos/model/DeleteTemplatesRequest.h
	include/alibabacloud/oos/model/DeleteTemplatesResult.h
	include/alibabacloud/oos/model/DeployApplicationGroupRequest.h
	include/alibabacloud/oos/model/DeployApplicationGroupResult.h
	include/alibabacloud/oos/model/DescribeRegionsRequest.h
	include/alibabacloud/oos/model/DescribeRegionsResult.h
	include/alibabacloud/oos/model/GenerateExecutionPolicyRequest.h
	include/alibabacloud/oos/model/GenerateExecutionPolicyResult.h
	include/alibabacloud/oos/model/GetApplicationRequest.h
	include/alibabacloud/oos/model/GetApplicationResult.h
	include/alibabacloud/oos/model/GetApplicationGroupRequest.h
	include/alibabacloud/oos/model/GetApplicationGroupResult.h
	include/alibabacloud/oos/model/GetExecutionTemplateRequest.h
	include/alibabacloud/oos/model/GetExecutionTemplateResult.h
	include/alibabacloud/oos/model/GetInventorySchemaRequest.h
	include/alibabacloud/oos/model/GetInventorySchemaResult.h
	include/alibabacloud/oos/model/GetOpsItemRequest.h
	include/alibabacloud/oos/model/GetOpsItemResult.h
	include/alibabacloud/oos/model/GetParameterRequest.h
	include/alibabacloud/oos/model/GetParameterResult.h
	include/alibabacloud/oos/model/GetParametersRequest.h
	include/alibabacloud/oos/model/GetParametersResult.h
	include/alibabacloud/oos/model/GetParametersByPathRequest.h
	include/alibabacloud/oos/model/GetParametersByPathResult.h
	include/alibabacloud/oos/model/GetPatchBaselineRequest.h
	include/alibabacloud/oos/model/GetPatchBaselineResult.h
	include/alibabacloud/oos/model/GetSecretParameterRequest.h
	include/alibabacloud/oos/model/GetSecretParameterResult.h
	include/alibabacloud/oos/model/GetSecretParametersRequest.h
	include/alibabacloud/oos/model/GetSecretParametersResult.h
	include/alibabacloud/oos/model/GetSecretParametersByPathRequest.h
	include/alibabacloud/oos/model/GetSecretParametersByPathResult.h
	include/alibabacloud/oos/model/GetServiceSettingsRequest.h
	include/alibabacloud/oos/model/GetServiceSettingsResult.h
	include/alibabacloud/oos/model/GetTemplateRequest.h
	include/alibabacloud/oos/model/GetTemplateResult.h
	include/alibabacloud/oos/model/ListActionsRequest.h
	include/alibabacloud/oos/model/ListActionsResult.h
	include/alibabacloud/oos/model/ListApplicationGroupsRequest.h
	include/alibabacloud/oos/model/ListApplicationGroupsResult.h
	include/alibabacloud/oos/model/ListApplicationsRequest.h
	include/alibabacloud/oos/model/ListApplicationsResult.h
	include/alibabacloud/oos/model/ListExecutionLogsRequest.h
	include/alibabacloud/oos/model/ListExecutionLogsResult.h
	include/alibabacloud/oos/model/ListExecutionRiskyTasksRequest.h
	include/alibabacloud/oos/model/ListExecutionRiskyTasksResult.h
	include/alibabacloud/oos/model/ListExecutionsRequest.h
	include/alibabacloud/oos/model/ListExecutionsResult.h
	include/alibabacloud/oos/model/ListInstancePatchStatesRequest.h
	include/alibabacloud/oos/model/ListInstancePatchStatesResult.h
	include/alibabacloud/oos/model/ListInstancePatchesRequest.h
	include/alibabacloud/oos/model/ListInstancePatchesResult.h
	include/alibabacloud/oos/model/ListInventoryEntriesRequest.h
	include/alibabacloud/oos/model/ListInventoryEntriesResult.h
	include/alibabacloud/oos/model/ListOpsItemsRequest.h
	include/alibabacloud/oos/model/ListOpsItemsResult.h
	include/alibabacloud/oos/model/ListParameterVersionsRequest.h
	include/alibabacloud/oos/model/ListParameterVersionsResult.h
	include/alibabacloud/oos/model/ListParametersRequest.h
	include/alibabacloud/oos/model/ListParametersResult.h
	include/alibabacloud/oos/model/ListPatchBaselinesRequest.h
	include/alibabacloud/oos/model/ListPatchBaselinesResult.h
	include/alibabacloud/oos/model/ListResourceExecutionStatusRequest.h
	include/alibabacloud/oos/model/ListResourceExecutionStatusResult.h
	include/alibabacloud/oos/model/ListSecretParameterVersionsRequest.h
	include/alibabacloud/oos/model/ListSecretParameterVersionsResult.h
	include/alibabacloud/oos/model/ListSecretParametersRequest.h
	include/alibabacloud/oos/model/ListSecretParametersResult.h
	include/alibabacloud/oos/model/ListStateConfigurationsRequest.h
	include/alibabacloud/oos/model/ListStateConfigurationsResult.h
	include/alibabacloud/oos/model/ListTagKeysRequest.h
	include/alibabacloud/oos/model/ListTagKeysResult.h
	include/alibabacloud/oos/model/ListTagResourcesRequest.h
	include/alibabacloud/oos/model/ListTagResourcesResult.h
	include/alibabacloud/oos/model/ListTagValuesRequest.h
	include/alibabacloud/oos/model/ListTagValuesResult.h
	include/alibabacloud/oos/model/ListTaskExecutionsRequest.h
	include/alibabacloud/oos/model/ListTaskExecutionsResult.h
	include/alibabacloud/oos/model/ListTemplateVersionsRequest.h
	include/alibabacloud/oos/model/ListTemplateVersionsResult.h
	include/alibabacloud/oos/model/ListTemplatesRequest.h
	include/alibabacloud/oos/model/ListTemplatesResult.h
	include/alibabacloud/oos/model/NotifyExecutionRequest.h
	include/alibabacloud/oos/model/NotifyExecutionResult.h
	include/alibabacloud/oos/model/RegisterDefaultPatchBaselineRequest.h
	include/alibabacloud/oos/model/RegisterDefaultPatchBaselineResult.h
	include/alibabacloud/oos/model/SearchInventoryRequest.h
	include/alibabacloud/oos/model/SearchInventoryResult.h
	include/alibabacloud/oos/model/SetServiceSettingsRequest.h
	include/alibabacloud/oos/model/SetServiceSettingsResult.h
	include/alibabacloud/oos/model/StartExecutionRequest.h
	include/alibabacloud/oos/model/StartExecutionResult.h
	include/alibabacloud/oos/model/TagResourcesRequest.h
	include/alibabacloud/oos/model/TagResourcesResult.h
	include/alibabacloud/oos/model/TriggerExecutionRequest.h
	include/alibabacloud/oos/model/TriggerExecutionResult.h
	include/alibabacloud/oos/model/UntagResourcesRequest.h
	include/alibabacloud/oos/model/UntagResourcesResult.h
	include/alibabacloud/oos/model/UpdateApplicationRequest.h
	include/alibabacloud/oos/model/UpdateApplicationResult.h
	include/alibabacloud/oos/model/UpdateApplicationGroupRequest.h
	include/alibabacloud/oos/model/UpdateApplicationGroupResult.h
	include/alibabacloud/oos/model/UpdateExecutionRequest.h
	include/alibabacloud/oos/model/UpdateExecutionResult.h
	include/alibabacloud/oos/model/UpdateOpsItemRequest.h
	include/alibabacloud/oos/model/UpdateOpsItemResult.h
	include/alibabacloud/oos/model/UpdateParameterRequest.h
	include/alibabacloud/oos/model/UpdateParameterResult.h
	include/alibabacloud/oos/model/UpdatePatchBaselineRequest.h
	include/alibabacloud/oos/model/UpdatePatchBaselineResult.h
	include/alibabacloud/oos/model/UpdateSecretParameterRequest.h
	include/alibabacloud/oos/model/UpdateSecretParameterResult.h
	include/alibabacloud/oos/model/UpdateStateConfigurationRequest.h
	include/alibabacloud/oos/model/UpdateStateConfigurationResult.h
	include/alibabacloud/oos/model/UpdateTemplateRequest.h
	include/alibabacloud/oos/model/UpdateTemplateResult.h
	include/alibabacloud/oos/model/ValidateTemplateContentRequest.h
	include/alibabacloud/oos/model/ValidateTemplateContentResult.h )

set(oos_src 
	src/OosClient.cc
	src/model/CancelExecutionRequest.cc
	src/model/CancelExecutionResult.cc
	src/model/ChangeResourceGroupRequest.cc
	src/model/ChangeResourceGroupResult.cc
	src/model/ContinueDeployApplicationGroupRequest.cc
	src/model/ContinueDeployApplicationGroupResult.cc
	src/model/CreateApplicationRequest.cc
	src/model/CreateApplicationResult.cc
	src/model/CreateApplicationGroupRequest.cc
	src/model/CreateApplicationGroupResult.cc
	src/model/CreateOpsItemRequest.cc
	src/model/CreateOpsItemResult.cc
	src/model/CreateParameterRequest.cc
	src/model/CreateParameterResult.cc
	src/model/CreatePatchBaselineRequest.cc
	src/model/CreatePatchBaselineResult.cc
	src/model/CreateSecretParameterRequest.cc
	src/model/CreateSecretParameterResult.cc
	src/model/CreateStateConfigurationRequest.cc
	src/model/CreateStateConfigurationResult.cc
	src/model/CreateTemplateRequest.cc
	src/model/CreateTemplateResult.cc
	src/model/DeleteApplicationRequest.cc
	src/model/DeleteApplicationResult.cc
	src/model/DeleteApplicationGroupRequest.cc
	src/model/DeleteApplicationGroupResult.cc
	src/model/DeleteExecutionsRequest.cc
	src/model/DeleteExecutionsResult.cc
	src/model/DeleteParameterRequest.cc
	src/model/DeleteParameterResult.cc
	src/model/DeletePatchBaselineRequest.cc
	src/model/DeletePatchBaselineResult.cc
	src/model/DeleteSecretParameterRequest.cc
	src/model/DeleteSecretParameterResult.cc
	src/model/DeleteStateConfigurationsRequest.cc
	src/model/DeleteStateConfigurationsResult.cc
	src/model/DeleteTemplateRequest.cc
	src/model/DeleteTemplateResult.cc
	src/model/DeleteTemplatesRequest.cc
	src/model/DeleteTemplatesResult.cc
	src/model/DeployApplicationGroupRequest.cc
	src/model/DeployApplicationGroupResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/GenerateExecutionPolicyRequest.cc
	src/model/GenerateExecutionPolicyResult.cc
	src/model/GetApplicationRequest.cc
	src/model/GetApplicationResult.cc
	src/model/GetApplicationGroupRequest.cc
	src/model/GetApplicationGroupResult.cc
	src/model/GetExecutionTemplateRequest.cc
	src/model/GetExecutionTemplateResult.cc
	src/model/GetInventorySchemaRequest.cc
	src/model/GetInventorySchemaResult.cc
	src/model/GetOpsItemRequest.cc
	src/model/GetOpsItemResult.cc
	src/model/GetParameterRequest.cc
	src/model/GetParameterResult.cc
	src/model/GetParametersRequest.cc
	src/model/GetParametersResult.cc
	src/model/GetParametersByPathRequest.cc
	src/model/GetParametersByPathResult.cc
	src/model/GetPatchBaselineRequest.cc
	src/model/GetPatchBaselineResult.cc
	src/model/GetSecretParameterRequest.cc
	src/model/GetSecretParameterResult.cc
	src/model/GetSecretParametersRequest.cc
	src/model/GetSecretParametersResult.cc
	src/model/GetSecretParametersByPathRequest.cc
	src/model/GetSecretParametersByPathResult.cc
	src/model/GetServiceSettingsRequest.cc
	src/model/GetServiceSettingsResult.cc
	src/model/GetTemplateRequest.cc
	src/model/GetTemplateResult.cc
	src/model/ListActionsRequest.cc
	src/model/ListActionsResult.cc
	src/model/ListApplicationGroupsRequest.cc
	src/model/ListApplicationGroupsResult.cc
	src/model/ListApplicationsRequest.cc
	src/model/ListApplicationsResult.cc
	src/model/ListExecutionLogsRequest.cc
	src/model/ListExecutionLogsResult.cc
	src/model/ListExecutionRiskyTasksRequest.cc
	src/model/ListExecutionRiskyTasksResult.cc
	src/model/ListExecutionsRequest.cc
	src/model/ListExecutionsResult.cc
	src/model/ListInstancePatchStatesRequest.cc
	src/model/ListInstancePatchStatesResult.cc
	src/model/ListInstancePatchesRequest.cc
	src/model/ListInstancePatchesResult.cc
	src/model/ListInventoryEntriesRequest.cc
	src/model/ListInventoryEntriesResult.cc
	src/model/ListOpsItemsRequest.cc
	src/model/ListOpsItemsResult.cc
	src/model/ListParameterVersionsRequest.cc
	src/model/ListParameterVersionsResult.cc
	src/model/ListParametersRequest.cc
	src/model/ListParametersResult.cc
	src/model/ListPatchBaselinesRequest.cc
	src/model/ListPatchBaselinesResult.cc
	src/model/ListResourceExecutionStatusRequest.cc
	src/model/ListResourceExecutionStatusResult.cc
	src/model/ListSecretParameterVersionsRequest.cc
	src/model/ListSecretParameterVersionsResult.cc
	src/model/ListSecretParametersRequest.cc
	src/model/ListSecretParametersResult.cc
	src/model/ListStateConfigurationsRequest.cc
	src/model/ListStateConfigurationsResult.cc
	src/model/ListTagKeysRequest.cc
	src/model/ListTagKeysResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ListTagValuesRequest.cc
	src/model/ListTagValuesResult.cc
	src/model/ListTaskExecutionsRequest.cc
	src/model/ListTaskExecutionsResult.cc
	src/model/ListTemplateVersionsRequest.cc
	src/model/ListTemplateVersionsResult.cc
	src/model/ListTemplatesRequest.cc
	src/model/ListTemplatesResult.cc
	src/model/NotifyExecutionRequest.cc
	src/model/NotifyExecutionResult.cc
	src/model/RegisterDefaultPatchBaselineRequest.cc
	src/model/RegisterDefaultPatchBaselineResult.cc
	src/model/SearchInventoryRequest.cc
	src/model/SearchInventoryResult.cc
	src/model/SetServiceSettingsRequest.cc
	src/model/SetServiceSettingsResult.cc
	src/model/StartExecutionRequest.cc
	src/model/StartExecutionResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/TriggerExecutionRequest.cc
	src/model/TriggerExecutionResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpdateApplicationRequest.cc
	src/model/UpdateApplicationResult.cc
	src/model/UpdateApplicationGroupRequest.cc
	src/model/UpdateApplicationGroupResult.cc
	src/model/UpdateExecutionRequest.cc
	src/model/UpdateExecutionResult.cc
	src/model/UpdateOpsItemRequest.cc
	src/model/UpdateOpsItemResult.cc
	src/model/UpdateParameterRequest.cc
	src/model/UpdateParameterResult.cc
	src/model/UpdatePatchBaselineRequest.cc
	src/model/UpdatePatchBaselineResult.cc
	src/model/UpdateSecretParameterRequest.cc
	src/model/UpdateSecretParameterResult.cc
	src/model/UpdateStateConfigurationRequest.cc
	src/model/UpdateStateConfigurationResult.cc
	src/model/UpdateTemplateRequest.cc
	src/model/UpdateTemplateResult.cc
	src/model/ValidateTemplateContentRequest.cc
	src/model/ValidateTemplateContentResult.cc )

add_library(oos ${LIB_TYPE}
	${oos_public_header}
	${oos_public_header_model}
	${oos_src})

set_target_properties(oos
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}oos
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(oos
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_OOS_LIBRARY)
endif()

target_include_directories(oos
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(oos
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(oos
		jsoncpp)
	target_include_directories(oos
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(oos
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(oos
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(oos
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(oos
		jsoncpp)
endif()

install(FILES ${oos_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/oos)
install(FILES ${oos_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/oos/model)
install(TARGETS oos
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)