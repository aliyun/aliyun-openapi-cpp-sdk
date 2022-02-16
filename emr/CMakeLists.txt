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

set(emr_public_header 
	include/alibabacloud/emr/EmrClient.h
	include/alibabacloud/emr/EmrExport.h )

set(emr_public_header_model 
	include/alibabacloud/emr/model/AddApplicationRequest.h
	include/alibabacloud/emr/model/AddApplicationResult.h
	include/alibabacloud/emr/model/AddApplicationsRequest.h
	include/alibabacloud/emr/model/AddApplicationsResult.h
	include/alibabacloud/emr/model/CancelOperationOrdersRequest.h
	include/alibabacloud/emr/model/CancelOperationOrdersResult.h
	include/alibabacloud/emr/model/CreateAutoScalingPolicyRequest.h
	include/alibabacloud/emr/model/CreateAutoScalingPolicyResult.h
	include/alibabacloud/emr/model/CreateAutoScalingRuleRequest.h
	include/alibabacloud/emr/model/CreateAutoScalingRuleResult.h
	include/alibabacloud/emr/model/CreateClusterRequest.h
	include/alibabacloud/emr/model/CreateClusterResult.h
	include/alibabacloud/emr/model/CreateClusterScriptRequest.h
	include/alibabacloud/emr/model/CreateClusterScriptResult.h
	include/alibabacloud/emr/model/CreateNodeGroupRequest.h
	include/alibabacloud/emr/model/CreateNodeGroupResult.h
	include/alibabacloud/emr/model/CreateOnAckClusterRequest.h
	include/alibabacloud/emr/model/CreateOnAckClusterResult.h
	include/alibabacloud/emr/model/CreateOnKubeClusterRequest.h
	include/alibabacloud/emr/model/CreateOnKubeClusterResult.h
	include/alibabacloud/emr/model/CreateScalingGroupRequest.h
	include/alibabacloud/emr/model/CreateScalingGroupResult.h
	include/alibabacloud/emr/model/DecreaseNodesRequest.h
	include/alibabacloud/emr/model/DecreaseNodesResult.h
	include/alibabacloud/emr/model/DeleteAutoScalingPolicyRequest.h
	include/alibabacloud/emr/model/DeleteAutoScalingPolicyResult.h
	include/alibabacloud/emr/model/DeleteAutoScalingRuleRequest.h
	include/alibabacloud/emr/model/DeleteAutoScalingRuleResult.h
	include/alibabacloud/emr/model/DeleteClusterRequest.h
	include/alibabacloud/emr/model/DeleteClusterResult.h
	include/alibabacloud/emr/model/DeleteClusterScriptRequest.h
	include/alibabacloud/emr/model/DeleteClusterScriptResult.h
	include/alibabacloud/emr/model/DeleteNodeGroupRequest.h
	include/alibabacloud/emr/model/DeleteNodeGroupResult.h
	include/alibabacloud/emr/model/DeleteOnAckClusterRequest.h
	include/alibabacloud/emr/model/DeleteOnAckClusterResult.h
	include/alibabacloud/emr/model/DeleteScalingGroupRequest.h
	include/alibabacloud/emr/model/DeleteScalingGroupResult.h
	include/alibabacloud/emr/model/DisableAutoScalingPolicyRequest.h
	include/alibabacloud/emr/model/DisableAutoScalingPolicyResult.h
	include/alibabacloud/emr/model/EnableAutoScalingPolicyRequest.h
	include/alibabacloud/emr/model/EnableAutoScalingPolicyResult.h
	include/alibabacloud/emr/model/GetApplicationRequest.h
	include/alibabacloud/emr/model/GetApplicationResult.h
	include/alibabacloud/emr/model/GetClusterRequest.h
	include/alibabacloud/emr/model/GetClusterResult.h
	include/alibabacloud/emr/model/GetClusterScriptExecutionResultRequest.h
	include/alibabacloud/emr/model/GetClusterScriptExecutionResultResult.h
	include/alibabacloud/emr/model/GetNodeGroupRequest.h
	include/alibabacloud/emr/model/GetNodeGroupResult.h
	include/alibabacloud/emr/model/GetOnAckClusterRequest.h
	include/alibabacloud/emr/model/GetOnAckClusterResult.h
	include/alibabacloud/emr/model/GetOnKubeClusterRequest.h
	include/alibabacloud/emr/model/GetOnKubeClusterResult.h
	include/alibabacloud/emr/model/GetOnKubeClusterResourceQuotaRequest.h
	include/alibabacloud/emr/model/GetOnKubeClusterResourceQuotaResult.h
	include/alibabacloud/emr/model/GetOnKubeClusterResourceUsageRequest.h
	include/alibabacloud/emr/model/GetOnKubeClusterResourceUsageResult.h
	include/alibabacloud/emr/model/GetOperationRequest.h
	include/alibabacloud/emr/model/GetOperationResult.h
	include/alibabacloud/emr/model/GetScalingGroupRequest.h
	include/alibabacloud/emr/model/GetScalingGroupResult.h
	include/alibabacloud/emr/model/IncreaseClusterDiskRequest.h
	include/alibabacloud/emr/model/IncreaseClusterDiskResult.h
	include/alibabacloud/emr/model/IncreaseNodesRequest.h
	include/alibabacloud/emr/model/IncreaseNodesResult.h
	include/alibabacloud/emr/model/JoinResourceGroupRequest.h
	include/alibabacloud/emr/model/JoinResourceGroupResult.h
	include/alibabacloud/emr/model/ListApplicationConfigFilesRequest.h
	include/alibabacloud/emr/model/ListApplicationConfigFilesResult.h
	include/alibabacloud/emr/model/ListApplicationConfigHistoryRequest.h
	include/alibabacloud/emr/model/ListApplicationConfigHistoryResult.h
	include/alibabacloud/emr/model/ListApplicationConfigsRequest.h
	include/alibabacloud/emr/model/ListApplicationConfigsResult.h
	include/alibabacloud/emr/model/ListApplicationsRequest.h
	include/alibabacloud/emr/model/ListApplicationsResult.h
	include/alibabacloud/emr/model/ListAutoScalingActivitiesRequest.h
	include/alibabacloud/emr/model/ListAutoScalingActivitiesResult.h
	include/alibabacloud/emr/model/ListAutoScalingMetricsRequest.h
	include/alibabacloud/emr/model/ListAutoScalingMetricsResult.h
	include/alibabacloud/emr/model/ListAutoScalingPoliciesRequest.h
	include/alibabacloud/emr/model/ListAutoScalingPoliciesResult.h
	include/alibabacloud/emr/model/ListAutoScalingRulesRequest.h
	include/alibabacloud/emr/model/ListAutoScalingRulesResult.h
	include/alibabacloud/emr/model/ListClusterScriptsRequest.h
	include/alibabacloud/emr/model/ListClusterScriptsResult.h
	include/alibabacloud/emr/model/ListClustersRequest.h
	include/alibabacloud/emr/model/ListClustersResult.h
	include/alibabacloud/emr/model/ListClusters2Request.h
	include/alibabacloud/emr/model/ListClusters2Result.h
	include/alibabacloud/emr/model/ListComponentHealthRequest.h
	include/alibabacloud/emr/model/ListComponentHealthResult.h
	include/alibabacloud/emr/model/ListComponentInstancesRequest.h
	include/alibabacloud/emr/model/ListComponentInstancesResult.h
	include/alibabacloud/emr/model/ListComponentsRequest.h
	include/alibabacloud/emr/model/ListComponentsResult.h
	include/alibabacloud/emr/model/ListNodeGroupsRequest.h
	include/alibabacloud/emr/model/ListNodeGroupsResult.h
	include/alibabacloud/emr/model/ListNodesRequest.h
	include/alibabacloud/emr/model/ListNodesResult.h
	include/alibabacloud/emr/model/ListNodesv3Request.h
	include/alibabacloud/emr/model/ListNodesv3Result.h
	include/alibabacloud/emr/model/ListOnAckClustersRequest.h
	include/alibabacloud/emr/model/ListOnAckClustersResult.h
	include/alibabacloud/emr/model/ListOnAckComponentsRequest.h
	include/alibabacloud/emr/model/ListOnAckComponentsResult.h
	include/alibabacloud/emr/model/ListOnKubeClusterDedicatedNodesRequest.h
	include/alibabacloud/emr/model/ListOnKubeClusterDedicatedNodesResult.h
	include/alibabacloud/emr/model/ListOnKubeClusterInspectionResultsRequest.h
	include/alibabacloud/emr/model/ListOnKubeClusterInspectionResultsResult.h
	include/alibabacloud/emr/model/ListOnKubeClustersRequest.h
	include/alibabacloud/emr/model/ListOnKubeClustersResult.h
	include/alibabacloud/emr/model/ListOnKubeComponentsRequest.h
	include/alibabacloud/emr/model/ListOnKubeComponentsResult.h
	include/alibabacloud/emr/model/ListResourceHealthInspectionRequest.h
	include/alibabacloud/emr/model/ListResourceHealthInspectionResult.h
	include/alibabacloud/emr/model/ListScalingActivitiesRequest.h
	include/alibabacloud/emr/model/ListScalingActivitiesResult.h
	include/alibabacloud/emr/model/ListScalingGroupsRequest.h
	include/alibabacloud/emr/model/ListScalingGroupsResult.h
	include/alibabacloud/emr/model/ListScalingMetricsRequest.h
	include/alibabacloud/emr/model/ListScalingMetricsResult.h
	include/alibabacloud/emr/model/ListTagResourcesRequest.h
	include/alibabacloud/emr/model/ListTagResourcesResult.h
	include/alibabacloud/emr/model/ReleaseOnKubeClusterRequest.h
	include/alibabacloud/emr/model/ReleaseOnKubeClusterResult.h
	include/alibabacloud/emr/model/RunApplicationActionRequest.h
	include/alibabacloud/emr/model/RunApplicationActionResult.h
	include/alibabacloud/emr/model/RunScalingActionRequest.h
	include/alibabacloud/emr/model/RunScalingActionResult.h
	include/alibabacloud/emr/model/TagResourcesRequest.h
	include/alibabacloud/emr/model/TagResourcesResult.h
	include/alibabacloud/emr/model/TagResourcesSystemTagsRequest.h
	include/alibabacloud/emr/model/TagResourcesSystemTagsResult.h
	include/alibabacloud/emr/model/TerminateOperationRequest.h
	include/alibabacloud/emr/model/TerminateOperationResult.h
	include/alibabacloud/emr/model/UntagResourcesRequest.h
	include/alibabacloud/emr/model/UntagResourcesResult.h
	include/alibabacloud/emr/model/UntagResourcesSystemTagsRequest.h
	include/alibabacloud/emr/model/UntagResourcesSystemTagsResult.h
	include/alibabacloud/emr/model/UpdateAckClusterNodePoolsRequest.h
	include/alibabacloud/emr/model/UpdateAckClusterNodePoolsResult.h
	include/alibabacloud/emr/model/UpdateAckClusterNodesRequest.h
	include/alibabacloud/emr/model/UpdateAckClusterNodesResult.h
	include/alibabacloud/emr/model/UpdateApplicationConfigsRequest.h
	include/alibabacloud/emr/model/UpdateApplicationConfigsResult.h
	include/alibabacloud/emr/model/UpdateAutoScalingRuleRequest.h
	include/alibabacloud/emr/model/UpdateAutoScalingRuleResult.h
	include/alibabacloud/emr/model/UpdateClusterAttributeRequest.h
	include/alibabacloud/emr/model/UpdateClusterAttributeResult.h
	include/alibabacloud/emr/model/UpdateClusterScriptRequest.h
	include/alibabacloud/emr/model/UpdateClusterScriptResult.h
	include/alibabacloud/emr/model/UpdateOnKubeClusterDedicatedNodePoolsRequest.h
	include/alibabacloud/emr/model/UpdateOnKubeClusterDedicatedNodePoolsResult.h
	include/alibabacloud/emr/model/UpdateOnKubeClusterDedicatedNodesRequest.h
	include/alibabacloud/emr/model/UpdateOnKubeClusterDedicatedNodesResult.h
	include/alibabacloud/emr/model/UpdateScalingGroupRequest.h
	include/alibabacloud/emr/model/UpdateScalingGroupResult.h )

set(emr_src 
	src/EmrClient.cc
	src/model/AddApplicationRequest.cc
	src/model/AddApplicationResult.cc
	src/model/AddApplicationsRequest.cc
	src/model/AddApplicationsResult.cc
	src/model/CancelOperationOrdersRequest.cc
	src/model/CancelOperationOrdersResult.cc
	src/model/CreateAutoScalingPolicyRequest.cc
	src/model/CreateAutoScalingPolicyResult.cc
	src/model/CreateAutoScalingRuleRequest.cc
	src/model/CreateAutoScalingRuleResult.cc
	src/model/CreateClusterRequest.cc
	src/model/CreateClusterResult.cc
	src/model/CreateClusterScriptRequest.cc
	src/model/CreateClusterScriptResult.cc
	src/model/CreateNodeGroupRequest.cc
	src/model/CreateNodeGroupResult.cc
	src/model/CreateOnAckClusterRequest.cc
	src/model/CreateOnAckClusterResult.cc
	src/model/CreateOnKubeClusterRequest.cc
	src/model/CreateOnKubeClusterResult.cc
	src/model/CreateScalingGroupRequest.cc
	src/model/CreateScalingGroupResult.cc
	src/model/DecreaseNodesRequest.cc
	src/model/DecreaseNodesResult.cc
	src/model/DeleteAutoScalingPolicyRequest.cc
	src/model/DeleteAutoScalingPolicyResult.cc
	src/model/DeleteAutoScalingRuleRequest.cc
	src/model/DeleteAutoScalingRuleResult.cc
	src/model/DeleteClusterRequest.cc
	src/model/DeleteClusterResult.cc
	src/model/DeleteClusterScriptRequest.cc
	src/model/DeleteClusterScriptResult.cc
	src/model/DeleteNodeGroupRequest.cc
	src/model/DeleteNodeGroupResult.cc
	src/model/DeleteOnAckClusterRequest.cc
	src/model/DeleteOnAckClusterResult.cc
	src/model/DeleteScalingGroupRequest.cc
	src/model/DeleteScalingGroupResult.cc
	src/model/DisableAutoScalingPolicyRequest.cc
	src/model/DisableAutoScalingPolicyResult.cc
	src/model/EnableAutoScalingPolicyRequest.cc
	src/model/EnableAutoScalingPolicyResult.cc
	src/model/GetApplicationRequest.cc
	src/model/GetApplicationResult.cc
	src/model/GetClusterRequest.cc
	src/model/GetClusterResult.cc
	src/model/GetClusterScriptExecutionResultRequest.cc
	src/model/GetClusterScriptExecutionResultResult.cc
	src/model/GetNodeGroupRequest.cc
	src/model/GetNodeGroupResult.cc
	src/model/GetOnAckClusterRequest.cc
	src/model/GetOnAckClusterResult.cc
	src/model/GetOnKubeClusterRequest.cc
	src/model/GetOnKubeClusterResult.cc
	src/model/GetOnKubeClusterResourceQuotaRequest.cc
	src/model/GetOnKubeClusterResourceQuotaResult.cc
	src/model/GetOnKubeClusterResourceUsageRequest.cc
	src/model/GetOnKubeClusterResourceUsageResult.cc
	src/model/GetOperationRequest.cc
	src/model/GetOperationResult.cc
	src/model/GetScalingGroupRequest.cc
	src/model/GetScalingGroupResult.cc
	src/model/IncreaseClusterDiskRequest.cc
	src/model/IncreaseClusterDiskResult.cc
	src/model/IncreaseNodesRequest.cc
	src/model/IncreaseNodesResult.cc
	src/model/JoinResourceGroupRequest.cc
	src/model/JoinResourceGroupResult.cc
	src/model/ListApplicationConfigFilesRequest.cc
	src/model/ListApplicationConfigFilesResult.cc
	src/model/ListApplicationConfigHistoryRequest.cc
	src/model/ListApplicationConfigHistoryResult.cc
	src/model/ListApplicationConfigsRequest.cc
	src/model/ListApplicationConfigsResult.cc
	src/model/ListApplicationsRequest.cc
	src/model/ListApplicationsResult.cc
	src/model/ListAutoScalingActivitiesRequest.cc
	src/model/ListAutoScalingActivitiesResult.cc
	src/model/ListAutoScalingMetricsRequest.cc
	src/model/ListAutoScalingMetricsResult.cc
	src/model/ListAutoScalingPoliciesRequest.cc
	src/model/ListAutoScalingPoliciesResult.cc
	src/model/ListAutoScalingRulesRequest.cc
	src/model/ListAutoScalingRulesResult.cc
	src/model/ListClusterScriptsRequest.cc
	src/model/ListClusterScriptsResult.cc
	src/model/ListClustersRequest.cc
	src/model/ListClustersResult.cc
	src/model/ListClusters2Request.cc
	src/model/ListClusters2Result.cc
	src/model/ListComponentHealthRequest.cc
	src/model/ListComponentHealthResult.cc
	src/model/ListComponentInstancesRequest.cc
	src/model/ListComponentInstancesResult.cc
	src/model/ListComponentsRequest.cc
	src/model/ListComponentsResult.cc
	src/model/ListNodeGroupsRequest.cc
	src/model/ListNodeGroupsResult.cc
	src/model/ListNodesRequest.cc
	src/model/ListNodesResult.cc
	src/model/ListNodesv3Request.cc
	src/model/ListNodesv3Result.cc
	src/model/ListOnAckClustersRequest.cc
	src/model/ListOnAckClustersResult.cc
	src/model/ListOnAckComponentsRequest.cc
	src/model/ListOnAckComponentsResult.cc
	src/model/ListOnKubeClusterDedicatedNodesRequest.cc
	src/model/ListOnKubeClusterDedicatedNodesResult.cc
	src/model/ListOnKubeClusterInspectionResultsRequest.cc
	src/model/ListOnKubeClusterInspectionResultsResult.cc
	src/model/ListOnKubeClustersRequest.cc
	src/model/ListOnKubeClustersResult.cc
	src/model/ListOnKubeComponentsRequest.cc
	src/model/ListOnKubeComponentsResult.cc
	src/model/ListResourceHealthInspectionRequest.cc
	src/model/ListResourceHealthInspectionResult.cc
	src/model/ListScalingActivitiesRequest.cc
	src/model/ListScalingActivitiesResult.cc
	src/model/ListScalingGroupsRequest.cc
	src/model/ListScalingGroupsResult.cc
	src/model/ListScalingMetricsRequest.cc
	src/model/ListScalingMetricsResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ReleaseOnKubeClusterRequest.cc
	src/model/ReleaseOnKubeClusterResult.cc
	src/model/RunApplicationActionRequest.cc
	src/model/RunApplicationActionResult.cc
	src/model/RunScalingActionRequest.cc
	src/model/RunScalingActionResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/TagResourcesSystemTagsRequest.cc
	src/model/TagResourcesSystemTagsResult.cc
	src/model/TerminateOperationRequest.cc
	src/model/TerminateOperationResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UntagResourcesSystemTagsRequest.cc
	src/model/UntagResourcesSystemTagsResult.cc
	src/model/UpdateAckClusterNodePoolsRequest.cc
	src/model/UpdateAckClusterNodePoolsResult.cc
	src/model/UpdateAckClusterNodesRequest.cc
	src/model/UpdateAckClusterNodesResult.cc
	src/model/UpdateApplicationConfigsRequest.cc
	src/model/UpdateApplicationConfigsResult.cc
	src/model/UpdateAutoScalingRuleRequest.cc
	src/model/UpdateAutoScalingRuleResult.cc
	src/model/UpdateClusterAttributeRequest.cc
	src/model/UpdateClusterAttributeResult.cc
	src/model/UpdateClusterScriptRequest.cc
	src/model/UpdateClusterScriptResult.cc
	src/model/UpdateOnKubeClusterDedicatedNodePoolsRequest.cc
	src/model/UpdateOnKubeClusterDedicatedNodePoolsResult.cc
	src/model/UpdateOnKubeClusterDedicatedNodesRequest.cc
	src/model/UpdateOnKubeClusterDedicatedNodesResult.cc
	src/model/UpdateScalingGroupRequest.cc
	src/model/UpdateScalingGroupResult.cc )

add_library(emr ${LIB_TYPE}
	${emr_public_header}
	${emr_public_header_model}
	${emr_src})

set_target_properties(emr
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}emr
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(emr
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EMR_LIBRARY)
endif()

target_include_directories(emr
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(emr
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(emr
		jsoncpp)
	target_include_directories(emr
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(emr
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(emr
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(emr
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(emr
		jsoncpp)
endif()

install(FILES ${emr_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/emr)
install(FILES ${emr_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/emr/model)
install(TARGETS emr
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)