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

set(cs_public_header 
	include/alibabacloud/cs/CSClient.h
	include/alibabacloud/cs/CSExport.h )

set(cs_public_header_model 
	include/alibabacloud/cs/model/AttachInstancesRequest.h
	include/alibabacloud/cs/model/AttachInstancesResult.h
	include/alibabacloud/cs/model/CancelClusterUpgradeRequest.h
	include/alibabacloud/cs/model/CancelClusterUpgradeResult.h
	include/alibabacloud/cs/model/CancelComponentUpgradeRequest.h
	include/alibabacloud/cs/model/CancelComponentUpgradeResult.h
	include/alibabacloud/cs/model/CancelWorkflowRequest.h
	include/alibabacloud/cs/model/CancelWorkflowResult.h
	include/alibabacloud/cs/model/CreateClusterRequest.h
	include/alibabacloud/cs/model/CreateClusterResult.h
	include/alibabacloud/cs/model/CreateKubernetesTriggerRequest.h
	include/alibabacloud/cs/model/CreateKubernetesTriggerResult.h
	include/alibabacloud/cs/model/CreateTemplateRequest.h
	include/alibabacloud/cs/model/CreateTemplateResult.h
	include/alibabacloud/cs/model/DeleteClusterRequest.h
	include/alibabacloud/cs/model/DeleteClusterResult.h
	include/alibabacloud/cs/model/DeleteClusterNodesRequest.h
	include/alibabacloud/cs/model/DeleteClusterNodesResult.h
	include/alibabacloud/cs/model/DeleteKubernetesTriggerRequest.h
	include/alibabacloud/cs/model/DeleteKubernetesTriggerResult.h
	include/alibabacloud/cs/model/DeleteTemplateRequest.h
	include/alibabacloud/cs/model/DeleteTemplateResult.h
	include/alibabacloud/cs/model/DescirbeWorkflowRequest.h
	include/alibabacloud/cs/model/DescirbeWorkflowResult.h
	include/alibabacloud/cs/model/DescribeAddonsRequest.h
	include/alibabacloud/cs/model/DescribeAddonsResult.h
	include/alibabacloud/cs/model/DescribeClusterAddonUpgradeStatusRequest.h
	include/alibabacloud/cs/model/DescribeClusterAddonUpgradeStatusResult.h
	include/alibabacloud/cs/model/DescribeClusterAddonsUpgradeStatusRequest.h
	include/alibabacloud/cs/model/DescribeClusterAddonsUpgradeStatusResult.h
	include/alibabacloud/cs/model/DescribeClusterAddonsVersionRequest.h
	include/alibabacloud/cs/model/DescribeClusterAddonsVersionResult.h
	include/alibabacloud/cs/model/DescribeClusterAttachScriptsRequest.h
	include/alibabacloud/cs/model/DescribeClusterAttachScriptsResult.h
	include/alibabacloud/cs/model/DescribeClusterDetailRequest.h
	include/alibabacloud/cs/model/DescribeClusterDetailResult.h
	include/alibabacloud/cs/model/DescribeClusterLogsRequest.h
	include/alibabacloud/cs/model/DescribeClusterLogsResult.h
	include/alibabacloud/cs/model/DescribeClusterNodesRequest.h
	include/alibabacloud/cs/model/DescribeClusterNodesResult.h
	include/alibabacloud/cs/model/DescribeClusterResourcesRequest.h
	include/alibabacloud/cs/model/DescribeClusterResourcesResult.h
	include/alibabacloud/cs/model/DescribeClusterUserKubeconfigRequest.h
	include/alibabacloud/cs/model/DescribeClusterUserKubeconfigResult.h
	include/alibabacloud/cs/model/DescribeClusterV2UserKubeconfigRequest.h
	include/alibabacloud/cs/model/DescribeClusterV2UserKubeconfigResult.h
	include/alibabacloud/cs/model/DescribeClustersRequest.h
	include/alibabacloud/cs/model/DescribeClustersResult.h
	include/alibabacloud/cs/model/DescribeClustersV1Request.h
	include/alibabacloud/cs/model/DescribeClustersV1Result.h
	include/alibabacloud/cs/model/DescribeExternalAgentRequest.h
	include/alibabacloud/cs/model/DescribeExternalAgentResult.h
	include/alibabacloud/cs/model/DescribeTemplatesRequest.h
	include/alibabacloud/cs/model/DescribeTemplatesResult.h
	include/alibabacloud/cs/model/DescribeUserQuotaRequest.h
	include/alibabacloud/cs/model/DescribeUserQuotaResult.h
	include/alibabacloud/cs/model/DescribeWorkflowsRequest.h
	include/alibabacloud/cs/model/DescribeWorkflowsResult.h
	include/alibabacloud/cs/model/GetKubernetesTriggerRequest.h
	include/alibabacloud/cs/model/GetKubernetesTriggerResult.h
	include/alibabacloud/cs/model/GetUpgradeStatusRequest.h
	include/alibabacloud/cs/model/GetUpgradeStatusResult.h
	include/alibabacloud/cs/model/InstallClusterAddonsRequest.h
	include/alibabacloud/cs/model/InstallClusterAddonsResult.h
	include/alibabacloud/cs/model/ListTagResourcesRequest.h
	include/alibabacloud/cs/model/ListTagResourcesResult.h
	include/alibabacloud/cs/model/ModifyClusterRequest.h
	include/alibabacloud/cs/model/ModifyClusterResult.h
	include/alibabacloud/cs/model/ModifyClusterConfigurationRequest.h
	include/alibabacloud/cs/model/ModifyClusterConfigurationResult.h
	include/alibabacloud/cs/model/ModifyClusterTagsRequest.h
	include/alibabacloud/cs/model/ModifyClusterTagsResult.h
	include/alibabacloud/cs/model/PauseClusterUpgradeRequest.h
	include/alibabacloud/cs/model/PauseClusterUpgradeResult.h
	include/alibabacloud/cs/model/PauseComponentUpgradeRequest.h
	include/alibabacloud/cs/model/PauseComponentUpgradeResult.h
	include/alibabacloud/cs/model/RemoveClusterNodesRequest.h
	include/alibabacloud/cs/model/RemoveClusterNodesResult.h
	include/alibabacloud/cs/model/RemoveWorkflowRequest.h
	include/alibabacloud/cs/model/RemoveWorkflowResult.h
	include/alibabacloud/cs/model/ResumeComponentUpgradeRequest.h
	include/alibabacloud/cs/model/ResumeComponentUpgradeResult.h
	include/alibabacloud/cs/model/ResumeUpgradeClusterRequest.h
	include/alibabacloud/cs/model/ResumeUpgradeClusterResult.h
	include/alibabacloud/cs/model/ScaleClusterRequest.h
	include/alibabacloud/cs/model/ScaleClusterResult.h
	include/alibabacloud/cs/model/ScaleOutClusterRequest.h
	include/alibabacloud/cs/model/ScaleOutClusterResult.h
	include/alibabacloud/cs/model/StartWorkflowRequest.h
	include/alibabacloud/cs/model/StartWorkflowResult.h
	include/alibabacloud/cs/model/UnInstallClusterAddonsRequest.h
	include/alibabacloud/cs/model/UnInstallClusterAddonsResult.h
	include/alibabacloud/cs/model/UpdateK8sClusterUserConfigExpireRequest.h
	include/alibabacloud/cs/model/UpdateK8sClusterUserConfigExpireResult.h
	include/alibabacloud/cs/model/UpdateTemplateRequest.h
	include/alibabacloud/cs/model/UpdateTemplateResult.h
	include/alibabacloud/cs/model/UpgradeClusterRequest.h
	include/alibabacloud/cs/model/UpgradeClusterResult.h
	include/alibabacloud/cs/model/UpgradeClusterAddonsRequest.h
	include/alibabacloud/cs/model/UpgradeClusterAddonsResult.h )

set(cs_src 
	src/CSClient.cc
	src/model/AttachInstancesRequest.cc
	src/model/AttachInstancesResult.cc
	src/model/CancelClusterUpgradeRequest.cc
	src/model/CancelClusterUpgradeResult.cc
	src/model/CancelComponentUpgradeRequest.cc
	src/model/CancelComponentUpgradeResult.cc
	src/model/CancelWorkflowRequest.cc
	src/model/CancelWorkflowResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/CreateKubernetesTriggerRequest.cc
	src/model/CreateKubernetesTriggerResult.cc
	src/model/CreateTemplateRequest.cc
	src/model/CreateTemplateResult.cc
	src/model/DeleteClusterRequest.cc
	src/model/DeleteClusterResult.cc
	src/model/DeleteClusterNodesRequest.cc
	src/model/DeleteClusterNodesResult.cc
	src/model/DeleteKubernetesTriggerRequest.cc
	src/model/DeleteKubernetesTriggerResult.cc
	src/model/DeleteTemplateRequest.cc
	src/model/DeleteTemplateResult.cc
	src/model/DescirbeWorkflowRequest.cc
	src/model/DescirbeWorkflowResult.cc
	src/model/DescribeAddonsRequest.cc
	src/model/DescribeAddonsResult.cc
	src/model/DescribeClusterAddonUpgradeStatusRequest.cc
	src/model/DescribeClusterAddonUpgradeStatusResult.cc
	src/model/DescribeClusterAddonsUpgradeStatusRequest.cc
	src/model/DescribeClusterAddonsUpgradeStatusResult.cc
	src/model/DescribeClusterAddonsVersionRequest.cc
	src/model/DescribeClusterAddonsVersionResult.cc
	src/model/DescribeClusterAttachScriptsRequest.cc
	src/model/DescribeClusterAttachScriptsResult.cc
	src/model/DescribeClusterDetailRequest.cc
	src/model/DescribeClusterDetailResult.cc
	src/model/DescribeClusterLogsRequest.cc
	src/model/DescribeClusterLogsResult.cc
	src/model/DescribeClusterNodesRequest.cc
	src/model/DescribeClusterNodesResult.cc
	src/model/DescribeClusterResourcesRequest.cc
	src/model/DescribeClusterResourcesResult.cc
	src/model/DescribeClusterUserKubeconfigRequest.cc
	src/model/DescribeClusterUserKubeconfigResult.cc
	src/model/DescribeClusterV2UserKubeconfigRequest.cc
	src/model/DescribeClusterV2UserKubeconfigResult.cc
	src/model/DescribeClustersRequest.cc
	src/model/DescribeClustersResult.cc
	src/model/DescribeClustersV1Request.cc
	src/model/DescribeClustersV1Result.cc
	src/model/DescribeExternalAgentRequest.cc
	src/model/DescribeExternalAgentResult.cc
	src/model/DescribeTemplatesRequest.cc
	src/model/DescribeTemplatesResult.cc
	src/model/DescribeUserQuotaRequest.cc
	src/model/DescribeUserQuotaResult.cc
	src/model/DescribeWorkflowsRequest.cc
	src/model/DescribeWorkflowsResult.cc
	src/model/GetKubernetesTriggerRequest.cc
	src/model/GetKubernetesTriggerResult.cc
	src/model/GetUpgradeStatusRequest.cc
	src/model/GetUpgradeStatusResult.cc
	src/model/InstallClusterAddonsRequest.cc
	src/model/InstallClusterAddonsResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ModifyClusterRequest.cc
	src/model/ModifyClusterResult.cc
	src/model/ModifyClusterConfigurationRequest.cc
	src/model/ModifyClusterConfigurationResult.cc
	src/model/ModifyClusterTagsRequest.cc
	src/model/ModifyClusterTagsResult.cc
	src/model/PauseClusterUpgradeRequest.cc
	src/model/PauseClusterUpgradeResult.cc
	src/model/PauseComponentUpgradeRequest.cc
	src/model/PauseComponentUpgradeResult.cc
	src/model/RemoveClusterNodesRequest.cc
	src/model/RemoveClusterNodesResult.cc
	src/model/RemoveWorkflowRequest.cc
	src/model/RemoveWorkflowResult.cc
	src/model/ResumeComponentUpgradeRequest.cc
	src/model/ResumeComponentUpgradeResult.cc
	src/model/ResumeUpgradeClusterRequest.cc
	src/model/ResumeUpgradeClusterResult.cc
	src/model/ScaleClusterRequest.cc
	src/model/ScaleClusterResult.cc
	src/model/ScaleOutClusterRequest.cc
	src/model/ScaleOutClusterResult.cc
	src/model/StartWorkflowRequest.cc
	src/model/StartWorkflowResult.cc
	src/model/UnInstallClusterAddonsRequest.cc
	src/model/UnInstallClusterAddonsResult.cc
	src/model/UpdateK8sClusterUserConfigExpireRequest.cc
	src/model/UpdateK8sClusterUserConfigExpireResult.cc
	src/model/UpdateTemplateRequest.cc
	src/model/UpdateTemplateResult.cc
	src/model/UpgradeClusterRequest.cc
	src/model/UpgradeClusterResult.cc
	src/model/UpgradeClusterAddonsRequest.cc
	src/model/UpgradeClusterAddonsResult.cc )

add_library(cs ${LIB_TYPE}
	${cs_public_header}
	${cs_public_header_model}
	${cs_src})

set_target_properties(cs
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cs
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cs
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CS_LIBRARY)
endif()

target_include_directories(cs
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cs
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cs
		jsoncpp)
	target_include_directories(cs
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cs
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cs
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cs
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cs
		jsoncpp)
endif()

install(FILES ${cs_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cs)
install(FILES ${cs_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cs/model)
install(TARGETS cs
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)