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

set(ess_public_header 
	include/alibabacloud/ess/EssClient.h
	include/alibabacloud/ess/EssExport.h )

set(ess_public_header_model 
	include/alibabacloud/ess/model/AttachAlbServerGroupsRequest.h
	include/alibabacloud/ess/model/AttachAlbServerGroupsResult.h
	include/alibabacloud/ess/model/AttachDBInstancesRequest.h
	include/alibabacloud/ess/model/AttachDBInstancesResult.h
	include/alibabacloud/ess/model/AttachInstancesRequest.h
	include/alibabacloud/ess/model/AttachInstancesResult.h
	include/alibabacloud/ess/model/AttachLoadBalancersRequest.h
	include/alibabacloud/ess/model/AttachLoadBalancersResult.h
	include/alibabacloud/ess/model/AttachServerGroupsRequest.h
	include/alibabacloud/ess/model/AttachServerGroupsResult.h
	include/alibabacloud/ess/model/AttachVServerGroupsRequest.h
	include/alibabacloud/ess/model/AttachVServerGroupsResult.h
	include/alibabacloud/ess/model/ChangeResourceGroupRequest.h
	include/alibabacloud/ess/model/ChangeResourceGroupResult.h
	include/alibabacloud/ess/model/CompleteLifecycleActionRequest.h
	include/alibabacloud/ess/model/CompleteLifecycleActionResult.h
	include/alibabacloud/ess/model/CreateAlarmRequest.h
	include/alibabacloud/ess/model/CreateAlarmResult.h
	include/alibabacloud/ess/model/CreateEciScalingConfigurationRequest.h
	include/alibabacloud/ess/model/CreateEciScalingConfigurationResult.h
	include/alibabacloud/ess/model/CreateLifecycleHookRequest.h
	include/alibabacloud/ess/model/CreateLifecycleHookResult.h
	include/alibabacloud/ess/model/CreateNotificationConfigurationRequest.h
	include/alibabacloud/ess/model/CreateNotificationConfigurationResult.h
	include/alibabacloud/ess/model/CreateScalingConfigurationRequest.h
	include/alibabacloud/ess/model/CreateScalingConfigurationResult.h
	include/alibabacloud/ess/model/CreateScalingGroupRequest.h
	include/alibabacloud/ess/model/CreateScalingGroupResult.h
	include/alibabacloud/ess/model/CreateScalingRuleRequest.h
	include/alibabacloud/ess/model/CreateScalingRuleResult.h
	include/alibabacloud/ess/model/CreateScheduledTaskRequest.h
	include/alibabacloud/ess/model/CreateScheduledTaskResult.h
	include/alibabacloud/ess/model/DeactivateScalingConfigurationRequest.h
	include/alibabacloud/ess/model/DeactivateScalingConfigurationResult.h
	include/alibabacloud/ess/model/DeleteAlarmRequest.h
	include/alibabacloud/ess/model/DeleteAlarmResult.h
	include/alibabacloud/ess/model/DeleteEciScalingConfigurationRequest.h
	include/alibabacloud/ess/model/DeleteEciScalingConfigurationResult.h
	include/alibabacloud/ess/model/DeleteLifecycleHookRequest.h
	include/alibabacloud/ess/model/DeleteLifecycleHookResult.h
	include/alibabacloud/ess/model/DeleteNotificationConfigurationRequest.h
	include/alibabacloud/ess/model/DeleteNotificationConfigurationResult.h
	include/alibabacloud/ess/model/DeleteScalingConfigurationRequest.h
	include/alibabacloud/ess/model/DeleteScalingConfigurationResult.h
	include/alibabacloud/ess/model/DeleteScalingGroupRequest.h
	include/alibabacloud/ess/model/DeleteScalingGroupResult.h
	include/alibabacloud/ess/model/DeleteScalingRuleRequest.h
	include/alibabacloud/ess/model/DeleteScalingRuleResult.h
	include/alibabacloud/ess/model/DeleteScheduledTaskRequest.h
	include/alibabacloud/ess/model/DeleteScheduledTaskResult.h
	include/alibabacloud/ess/model/DescribeAlarmsRequest.h
	include/alibabacloud/ess/model/DescribeAlarmsResult.h
	include/alibabacloud/ess/model/DescribeEciScalingConfigurationsRequest.h
	include/alibabacloud/ess/model/DescribeEciScalingConfigurationsResult.h
	include/alibabacloud/ess/model/DescribeElasticStrengthRequest.h
	include/alibabacloud/ess/model/DescribeElasticStrengthResult.h
	include/alibabacloud/ess/model/DescribeLifecycleActionsRequest.h
	include/alibabacloud/ess/model/DescribeLifecycleActionsResult.h
	include/alibabacloud/ess/model/DescribeLifecycleHooksRequest.h
	include/alibabacloud/ess/model/DescribeLifecycleHooksResult.h
	include/alibabacloud/ess/model/DescribeLimitationRequest.h
	include/alibabacloud/ess/model/DescribeLimitationResult.h
	include/alibabacloud/ess/model/DescribeNotificationConfigurationsRequest.h
	include/alibabacloud/ess/model/DescribeNotificationConfigurationsResult.h
	include/alibabacloud/ess/model/DescribeNotificationTypesRequest.h
	include/alibabacloud/ess/model/DescribeNotificationTypesResult.h
	include/alibabacloud/ess/model/DescribePatternTypesRequest.h
	include/alibabacloud/ess/model/DescribePatternTypesResult.h
	include/alibabacloud/ess/model/DescribeRegionsRequest.h
	include/alibabacloud/ess/model/DescribeRegionsResult.h
	include/alibabacloud/ess/model/DescribeScalingActivitiesRequest.h
	include/alibabacloud/ess/model/DescribeScalingActivitiesResult.h
	include/alibabacloud/ess/model/DescribeScalingActivityDetailRequest.h
	include/alibabacloud/ess/model/DescribeScalingActivityDetailResult.h
	include/alibabacloud/ess/model/DescribeScalingConfigurationsRequest.h
	include/alibabacloud/ess/model/DescribeScalingConfigurationsResult.h
	include/alibabacloud/ess/model/DescribeScalingGroupsRequest.h
	include/alibabacloud/ess/model/DescribeScalingGroupsResult.h
	include/alibabacloud/ess/model/DescribeScalingInstancesRequest.h
	include/alibabacloud/ess/model/DescribeScalingInstancesResult.h
	include/alibabacloud/ess/model/DescribeScalingRulesRequest.h
	include/alibabacloud/ess/model/DescribeScalingRulesResult.h
	include/alibabacloud/ess/model/DescribeScheduledTasksRequest.h
	include/alibabacloud/ess/model/DescribeScheduledTasksResult.h
	include/alibabacloud/ess/model/DetachAlbServerGroupsRequest.h
	include/alibabacloud/ess/model/DetachAlbServerGroupsResult.h
	include/alibabacloud/ess/model/DetachDBInstancesRequest.h
	include/alibabacloud/ess/model/DetachDBInstancesResult.h
	include/alibabacloud/ess/model/DetachInstancesRequest.h
	include/alibabacloud/ess/model/DetachInstancesResult.h
	include/alibabacloud/ess/model/DetachLoadBalancersRequest.h
	include/alibabacloud/ess/model/DetachLoadBalancersResult.h
	include/alibabacloud/ess/model/DetachServerGroupsRequest.h
	include/alibabacloud/ess/model/DetachServerGroupsResult.h
	include/alibabacloud/ess/model/DetachVServerGroupsRequest.h
	include/alibabacloud/ess/model/DetachVServerGroupsResult.h
	include/alibabacloud/ess/model/DisableAlarmRequest.h
	include/alibabacloud/ess/model/DisableAlarmResult.h
	include/alibabacloud/ess/model/DisableScalingGroupRequest.h
	include/alibabacloud/ess/model/DisableScalingGroupResult.h
	include/alibabacloud/ess/model/EnableAlarmRequest.h
	include/alibabacloud/ess/model/EnableAlarmResult.h
	include/alibabacloud/ess/model/EnableScalingGroupRequest.h
	include/alibabacloud/ess/model/EnableScalingGroupResult.h
	include/alibabacloud/ess/model/EnterStandbyRequest.h
	include/alibabacloud/ess/model/EnterStandbyResult.h
	include/alibabacloud/ess/model/ExecuteScalingRuleRequest.h
	include/alibabacloud/ess/model/ExecuteScalingRuleResult.h
	include/alibabacloud/ess/model/ExitStandbyRequest.h
	include/alibabacloud/ess/model/ExitStandbyResult.h
	include/alibabacloud/ess/model/ListTagKeysRequest.h
	include/alibabacloud/ess/model/ListTagKeysResult.h
	include/alibabacloud/ess/model/ListTagResourcesRequest.h
	include/alibabacloud/ess/model/ListTagResourcesResult.h
	include/alibabacloud/ess/model/ListTagValuesRequest.h
	include/alibabacloud/ess/model/ListTagValuesResult.h
	include/alibabacloud/ess/model/ModifyAlarmRequest.h
	include/alibabacloud/ess/model/ModifyAlarmResult.h
	include/alibabacloud/ess/model/ModifyEciScalingConfigurationRequest.h
	include/alibabacloud/ess/model/ModifyEciScalingConfigurationResult.h
	include/alibabacloud/ess/model/ModifyInstanceAttributeRequest.h
	include/alibabacloud/ess/model/ModifyInstanceAttributeResult.h
	include/alibabacloud/ess/model/ModifyLifecycleHookRequest.h
	include/alibabacloud/ess/model/ModifyLifecycleHookResult.h
	include/alibabacloud/ess/model/ModifyNotificationConfigurationRequest.h
	include/alibabacloud/ess/model/ModifyNotificationConfigurationResult.h
	include/alibabacloud/ess/model/ModifyScalingConfigurationRequest.h
	include/alibabacloud/ess/model/ModifyScalingConfigurationResult.h
	include/alibabacloud/ess/model/ModifyScalingGroupRequest.h
	include/alibabacloud/ess/model/ModifyScalingGroupResult.h
	include/alibabacloud/ess/model/ModifyScalingRuleRequest.h
	include/alibabacloud/ess/model/ModifyScalingRuleResult.h
	include/alibabacloud/ess/model/ModifyScheduledTaskRequest.h
	include/alibabacloud/ess/model/ModifyScheduledTaskResult.h
	include/alibabacloud/ess/model/RebalanceInstancesRequest.h
	include/alibabacloud/ess/model/RebalanceInstancesResult.h
	include/alibabacloud/ess/model/RecordLifecycleActionHeartbeatRequest.h
	include/alibabacloud/ess/model/RecordLifecycleActionHeartbeatResult.h
	include/alibabacloud/ess/model/RemoveInstancesRequest.h
	include/alibabacloud/ess/model/RemoveInstancesResult.h
	include/alibabacloud/ess/model/ResumeProcessesRequest.h
	include/alibabacloud/ess/model/ResumeProcessesResult.h
	include/alibabacloud/ess/model/ScaleWithAdjustmentRequest.h
	include/alibabacloud/ess/model/ScaleWithAdjustmentResult.h
	include/alibabacloud/ess/model/SetGroupDeletionProtectionRequest.h
	include/alibabacloud/ess/model/SetGroupDeletionProtectionResult.h
	include/alibabacloud/ess/model/SetInstanceHealthRequest.h
	include/alibabacloud/ess/model/SetInstanceHealthResult.h
	include/alibabacloud/ess/model/SetInstancesProtectionRequest.h
	include/alibabacloud/ess/model/SetInstancesProtectionResult.h
	include/alibabacloud/ess/model/SuspendProcessesRequest.h
	include/alibabacloud/ess/model/SuspendProcessesResult.h
	include/alibabacloud/ess/model/TagResourcesRequest.h
	include/alibabacloud/ess/model/TagResourcesResult.h
	include/alibabacloud/ess/model/UntagResourcesRequest.h
	include/alibabacloud/ess/model/UntagResourcesResult.h
	include/alibabacloud/ess/model/VerifyAuthenticationRequest.h
	include/alibabacloud/ess/model/VerifyAuthenticationResult.h
	include/alibabacloud/ess/model/VerifyUserRequest.h
	include/alibabacloud/ess/model/VerifyUserResult.h )

set(ess_src 
	src/EssClient.cc
	src/model/AttachAlbServerGroupsRequest.cc
	src/model/AttachAlbServerGroupsResult.cc
	src/model/AttachDBInstancesRequest.cc
	src/model/AttachDBInstancesResult.cc
	src/model/AttachInstancesRequest.cc
	src/model/AttachInstancesResult.cc
	src/model/AttachLoadBalancersRequest.cc
	src/model/AttachLoadBalancersResult.cc
	src/model/AttachServerGroupsRequest.cc
	src/model/AttachServerGroupsResult.cc
	src/model/AttachVServerGroupsRequest.cc
	src/model/AttachVServerGroupsResult.cc
	src/model/ChangeResourceGroupRequest.cc
	src/model/ChangeResourceGroupResult.cc
	src/model/CompleteLifecycleActionRequest.cc
	src/model/CompleteLifecycleActionResult.cc
	src/model/CreateAlarmRequest.cc
	src/model/CreateAlarmResult.cc
	src/model/CreateEciScalingConfigurationRequest.cc
	src/model/CreateEciScalingConfigurationResult.cc
	src/model/CreateLifecycleHookRequest.cc
	src/model/CreateLifecycleHookResult.cc
	src/model/CreateNotificationConfigurationRequest.cc
	src/model/CreateNotificationConfigurationResult.cc
	src/model/CreateScalingConfigurationRequest.cc
	src/model/CreateScalingConfigurationResult.cc
	src/model/CreateScalingGroupRequest.cc
	src/model/CreateScalingGroupResult.cc
	src/model/CreateScalingRuleRequest.cc
	src/model/CreateScalingRuleResult.cc
	src/model/CreateScheduledTaskRequest.cc
	src/model/CreateScheduledTaskResult.cc
	src/model/DeactivateScalingConfigurationRequest.cc
	src/model/DeactivateScalingConfigurationResult.cc
	src/model/DeleteAlarmRequest.cc
	src/model/DeleteAlarmResult.cc
	src/model/DeleteEciScalingConfigurationRequest.cc
	src/model/DeleteEciScalingConfigurationResult.cc
	src/model/DeleteLifecycleHookRequest.cc
	src/model/DeleteLifecycleHookResult.cc
	src/model/DeleteNotificationConfigurationRequest.cc
	src/model/DeleteNotificationConfigurationResult.cc
	src/model/DeleteScalingConfigurationRequest.cc
	src/model/DeleteScalingConfigurationResult.cc
	src/model/DeleteScalingGroupRequest.cc
	src/model/DeleteScalingGroupResult.cc
	src/model/DeleteScalingRuleRequest.cc
	src/model/DeleteScalingRuleResult.cc
	src/model/DeleteScheduledTaskRequest.cc
	src/model/DeleteScheduledTaskResult.cc
	src/model/DescribeAlarmsRequest.cc
	src/model/DescribeAlarmsResult.cc
	src/model/DescribeEciScalingConfigurationsRequest.cc
	src/model/DescribeEciScalingConfigurationsResult.cc
	src/model/DescribeElasticStrengthRequest.cc
	src/model/DescribeElasticStrengthResult.cc
	src/model/DescribeLifecycleActionsRequest.cc
	src/model/DescribeLifecycleActionsResult.cc
	src/model/DescribeLifecycleHooksRequest.cc
	src/model/DescribeLifecycleHooksResult.cc
	src/model/DescribeLimitationRequest.cc
	src/model/DescribeLimitationResult.cc
	src/model/DescribeNotificationConfigurationsRequest.cc
	src/model/DescribeNotificationConfigurationsResult.cc
	src/model/DescribeNotificationTypesRequest.cc
	src/model/DescribeNotificationTypesResult.cc
	src/model/DescribePatternTypesRequest.cc
	src/model/DescribePatternTypesResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeScalingActivitiesRequest.cc
	src/model/DescribeScalingActivitiesResult.cc
	src/model/DescribeScalingActivityDetailRequest.cc
	src/model/DescribeScalingActivityDetailResult.cc
	src/model/DescribeScalingConfigurationsRequest.cc
	src/model/DescribeScalingConfigurationsResult.cc
	src/model/DescribeScalingGroupsRequest.cc
	src/model/DescribeScalingGroupsResult.cc
	src/model/DescribeScalingInstancesRequest.cc
	src/model/DescribeScalingInstancesResult.cc
	src/model/DescribeScalingRulesRequest.cc
	src/model/DescribeScalingRulesResult.cc
	src/model/DescribeScheduledTasksRequest.cc
	src/model/DescribeScheduledTasksResult.cc
	src/model/DetachAlbServerGroupsRequest.cc
	src/model/DetachAlbServerGroupsResult.cc
	src/model/DetachDBInstancesRequest.cc
	src/model/DetachDBInstancesResult.cc
	src/model/DetachInstancesRequest.cc
	src/model/DetachInstancesResult.cc
	src/model/DetachLoadBalancersRequest.cc
	src/model/DetachLoadBalancersResult.cc
	src/model/DetachServerGroupsRequest.cc
	src/model/DetachServerGroupsResult.cc
	src/model/DetachVServerGroupsRequest.cc
	src/model/DetachVServerGroupsResult.cc
	src/model/DisableAlarmRequest.cc
	src/model/DisableAlarmResult.cc
	src/model/DisableScalingGroupRequest.cc
	src/model/DisableScalingGroupResult.cc
	src/model/EnableAlarmRequest.cc
	src/model/EnableAlarmResult.cc
	src/model/EnableScalingGroupRequest.cc
	src/model/EnableScalingGroupResult.cc
	src/model/EnterStandbyRequest.cc
	src/model/EnterStandbyResult.cc
	src/model/ExecuteScalingRuleRequest.cc
	src/model/ExecuteScalingRuleResult.cc
	src/model/ExitStandbyRequest.cc
	src/model/ExitStandbyResult.cc
	src/model/ListTagKeysRequest.cc
	src/model/ListTagKeysResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/ListTagValuesRequest.cc
	src/model/ListTagValuesResult.cc
	src/model/ModifyAlarmRequest.cc
	src/model/ModifyAlarmResult.cc
	src/model/ModifyEciScalingConfigurationRequest.cc
	src/model/ModifyEciScalingConfigurationResult.cc
	src/model/ModifyInstanceAttributeRequest.cc
	src/model/ModifyInstanceAttributeResult.cc
	src/model/ModifyLifecycleHookRequest.cc
	src/model/ModifyLifecycleHookResult.cc
	src/model/ModifyNotificationConfigurationRequest.cc
	src/model/ModifyNotificationConfigurationResult.cc
	src/model/ModifyScalingConfigurationRequest.cc
	src/model/ModifyScalingConfigurationResult.cc
	src/model/ModifyScalingGroupRequest.cc
	src/model/ModifyScalingGroupResult.cc
	src/model/ModifyScalingRuleRequest.cc
	src/model/ModifyScalingRuleResult.cc
	src/model/ModifyScheduledTaskRequest.cc
	src/model/ModifyScheduledTaskResult.cc
	src/model/RebalanceInstancesRequest.cc
	src/model/RebalanceInstancesResult.cc
	src/model/RecordLifecycleActionHeartbeatRequest.cc
	src/model/RecordLifecycleActionHeartbeatResult.cc
	src/model/RemoveInstancesRequest.cc
	src/model/RemoveInstancesResult.cc
	src/model/ResumeProcessesRequest.cc
	src/model/ResumeProcessesResult.cc
	src/model/ScaleWithAdjustmentRequest.cc
	src/model/ScaleWithAdjustmentResult.cc
	src/model/SetGroupDeletionProtectionRequest.cc
	src/model/SetGroupDeletionProtectionResult.cc
	src/model/SetInstanceHealthRequest.cc
	src/model/SetInstanceHealthResult.cc
	src/model/SetInstancesProtectionRequest.cc
	src/model/SetInstancesProtectionResult.cc
	src/model/SuspendProcessesRequest.cc
	src/model/SuspendProcessesResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/VerifyAuthenticationRequest.cc
	src/model/VerifyAuthenticationResult.cc
	src/model/VerifyUserRequest.cc
	src/model/VerifyUserResult.cc )

add_library(ess ${LIB_TYPE}
	${ess_public_header}
	${ess_public_header_model}
	${ess_src})

set_target_properties(ess
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ess
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ess
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ESS_LIBRARY)
endif()

target_include_directories(ess
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ess
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ess
		jsoncpp)
	target_include_directories(ess
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ess
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ess
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ess
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ess
		jsoncpp)
endif()

install(FILES ${ess_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ess)
install(FILES ${ess_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ess/model)
install(TARGETS ess
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)