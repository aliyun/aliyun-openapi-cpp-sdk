/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ESS_ESSCLIENT_H_
#define ALIBABACLOUD_ESS_ESSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EssExport.h"
#include "model/AttachAlbServerGroupsRequest.h"
#include "model/AttachAlbServerGroupsResult.h"
#include "model/AttachDBInstancesRequest.h"
#include "model/AttachDBInstancesResult.h"
#include "model/AttachInstancesRequest.h"
#include "model/AttachInstancesResult.h"
#include "model/AttachLoadBalancersRequest.h"
#include "model/AttachLoadBalancersResult.h"
#include "model/AttachServerGroupsRequest.h"
#include "model/AttachServerGroupsResult.h"
#include "model/AttachVServerGroupsRequest.h"
#include "model/AttachVServerGroupsResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CompleteLifecycleActionRequest.h"
#include "model/CompleteLifecycleActionResult.h"
#include "model/CreateAlarmRequest.h"
#include "model/CreateAlarmResult.h"
#include "model/CreateEciScalingConfigurationRequest.h"
#include "model/CreateEciScalingConfigurationResult.h"
#include "model/CreateLifecycleHookRequest.h"
#include "model/CreateLifecycleHookResult.h"
#include "model/CreateNotificationConfigurationRequest.h"
#include "model/CreateNotificationConfigurationResult.h"
#include "model/CreateScalingConfigurationRequest.h"
#include "model/CreateScalingConfigurationResult.h"
#include "model/CreateScalingGroupRequest.h"
#include "model/CreateScalingGroupResult.h"
#include "model/CreateScalingRuleRequest.h"
#include "model/CreateScalingRuleResult.h"
#include "model/CreateScheduledTaskRequest.h"
#include "model/CreateScheduledTaskResult.h"
#include "model/DeactivateScalingConfigurationRequest.h"
#include "model/DeactivateScalingConfigurationResult.h"
#include "model/DeleteAlarmRequest.h"
#include "model/DeleteAlarmResult.h"
#include "model/DeleteEciScalingConfigurationRequest.h"
#include "model/DeleteEciScalingConfigurationResult.h"
#include "model/DeleteLifecycleHookRequest.h"
#include "model/DeleteLifecycleHookResult.h"
#include "model/DeleteNotificationConfigurationRequest.h"
#include "model/DeleteNotificationConfigurationResult.h"
#include "model/DeleteScalingConfigurationRequest.h"
#include "model/DeleteScalingConfigurationResult.h"
#include "model/DeleteScalingGroupRequest.h"
#include "model/DeleteScalingGroupResult.h"
#include "model/DeleteScalingRuleRequest.h"
#include "model/DeleteScalingRuleResult.h"
#include "model/DeleteScheduledTaskRequest.h"
#include "model/DeleteScheduledTaskResult.h"
#include "model/DescribeAlarmsRequest.h"
#include "model/DescribeAlarmsResult.h"
#include "model/DescribeEciScalingConfigurationsRequest.h"
#include "model/DescribeEciScalingConfigurationsResult.h"
#include "model/DescribeElasticStrengthRequest.h"
#include "model/DescribeElasticStrengthResult.h"
#include "model/DescribeLifecycleActionsRequest.h"
#include "model/DescribeLifecycleActionsResult.h"
#include "model/DescribeLifecycleHooksRequest.h"
#include "model/DescribeLifecycleHooksResult.h"
#include "model/DescribeLimitationRequest.h"
#include "model/DescribeLimitationResult.h"
#include "model/DescribeNotificationConfigurationsRequest.h"
#include "model/DescribeNotificationConfigurationsResult.h"
#include "model/DescribeNotificationTypesRequest.h"
#include "model/DescribeNotificationTypesResult.h"
#include "model/DescribePatternTypesRequest.h"
#include "model/DescribePatternTypesResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeScalingActivitiesRequest.h"
#include "model/DescribeScalingActivitiesResult.h"
#include "model/DescribeScalingActivityDetailRequest.h"
#include "model/DescribeScalingActivityDetailResult.h"
#include "model/DescribeScalingConfigurationsRequest.h"
#include "model/DescribeScalingConfigurationsResult.h"
#include "model/DescribeScalingGroupsRequest.h"
#include "model/DescribeScalingGroupsResult.h"
#include "model/DescribeScalingInstancesRequest.h"
#include "model/DescribeScalingInstancesResult.h"
#include "model/DescribeScalingRulesRequest.h"
#include "model/DescribeScalingRulesResult.h"
#include "model/DescribeScheduledTasksRequest.h"
#include "model/DescribeScheduledTasksResult.h"
#include "model/DetachAlbServerGroupsRequest.h"
#include "model/DetachAlbServerGroupsResult.h"
#include "model/DetachDBInstancesRequest.h"
#include "model/DetachDBInstancesResult.h"
#include "model/DetachInstancesRequest.h"
#include "model/DetachInstancesResult.h"
#include "model/DetachLoadBalancersRequest.h"
#include "model/DetachLoadBalancersResult.h"
#include "model/DetachServerGroupsRequest.h"
#include "model/DetachServerGroupsResult.h"
#include "model/DetachVServerGroupsRequest.h"
#include "model/DetachVServerGroupsResult.h"
#include "model/DisableAlarmRequest.h"
#include "model/DisableAlarmResult.h"
#include "model/DisableScalingGroupRequest.h"
#include "model/DisableScalingGroupResult.h"
#include "model/EnableAlarmRequest.h"
#include "model/EnableAlarmResult.h"
#include "model/EnableScalingGroupRequest.h"
#include "model/EnableScalingGroupResult.h"
#include "model/EnterStandbyRequest.h"
#include "model/EnterStandbyResult.h"
#include "model/ExecuteScalingRuleRequest.h"
#include "model/ExecuteScalingRuleResult.h"
#include "model/ExitStandbyRequest.h"
#include "model/ExitStandbyResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/ModifyAlarmRequest.h"
#include "model/ModifyAlarmResult.h"
#include "model/ModifyEciScalingConfigurationRequest.h"
#include "model/ModifyEciScalingConfigurationResult.h"
#include "model/ModifyInstanceAttributeRequest.h"
#include "model/ModifyInstanceAttributeResult.h"
#include "model/ModifyLifecycleHookRequest.h"
#include "model/ModifyLifecycleHookResult.h"
#include "model/ModifyNotificationConfigurationRequest.h"
#include "model/ModifyNotificationConfigurationResult.h"
#include "model/ModifyScalingConfigurationRequest.h"
#include "model/ModifyScalingConfigurationResult.h"
#include "model/ModifyScalingGroupRequest.h"
#include "model/ModifyScalingGroupResult.h"
#include "model/ModifyScalingRuleRequest.h"
#include "model/ModifyScalingRuleResult.h"
#include "model/ModifyScheduledTaskRequest.h"
#include "model/ModifyScheduledTaskResult.h"
#include "model/RebalanceInstancesRequest.h"
#include "model/RebalanceInstancesResult.h"
#include "model/RecordLifecycleActionHeartbeatRequest.h"
#include "model/RecordLifecycleActionHeartbeatResult.h"
#include "model/RemoveInstancesRequest.h"
#include "model/RemoveInstancesResult.h"
#include "model/ResumeProcessesRequest.h"
#include "model/ResumeProcessesResult.h"
#include "model/ScaleWithAdjustmentRequest.h"
#include "model/ScaleWithAdjustmentResult.h"
#include "model/SetGroupDeletionProtectionRequest.h"
#include "model/SetGroupDeletionProtectionResult.h"
#include "model/SetInstanceHealthRequest.h"
#include "model/SetInstanceHealthResult.h"
#include "model/SetInstancesProtectionRequest.h"
#include "model/SetInstancesProtectionResult.h"
#include "model/SuspendProcessesRequest.h"
#include "model/SuspendProcessesResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/VerifyAuthenticationRequest.h"
#include "model/VerifyAuthenticationResult.h"
#include "model/VerifyUserRequest.h"
#include "model/VerifyUserResult.h"


namespace AlibabaCloud
{
	namespace Ess
	{
		class ALIBABACLOUD_ESS_EXPORT EssClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachAlbServerGroupsResult> AttachAlbServerGroupsOutcome;
			typedef std::future<AttachAlbServerGroupsOutcome> AttachAlbServerGroupsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::AttachAlbServerGroupsRequest&, const AttachAlbServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachAlbServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::AttachDBInstancesResult> AttachDBInstancesOutcome;
			typedef std::future<AttachDBInstancesOutcome> AttachDBInstancesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::AttachDBInstancesRequest&, const AttachDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::AttachInstancesResult> AttachInstancesOutcome;
			typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::AttachInstancesRequest&, const AttachInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstancesAsyncHandler;
			typedef Outcome<Error, Model::AttachLoadBalancersResult> AttachLoadBalancersOutcome;
			typedef std::future<AttachLoadBalancersOutcome> AttachLoadBalancersOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::AttachLoadBalancersRequest&, const AttachLoadBalancersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachLoadBalancersAsyncHandler;
			typedef Outcome<Error, Model::AttachServerGroupsResult> AttachServerGroupsOutcome;
			typedef std::future<AttachServerGroupsOutcome> AttachServerGroupsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::AttachServerGroupsRequest&, const AttachServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::AttachVServerGroupsResult> AttachVServerGroupsOutcome;
			typedef std::future<AttachVServerGroupsOutcome> AttachVServerGroupsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::AttachVServerGroupsRequest&, const AttachVServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachVServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CompleteLifecycleActionResult> CompleteLifecycleActionOutcome;
			typedef std::future<CompleteLifecycleActionOutcome> CompleteLifecycleActionOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::CompleteLifecycleActionRequest&, const CompleteLifecycleActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompleteLifecycleActionAsyncHandler;
			typedef Outcome<Error, Model::CreateAlarmResult> CreateAlarmOutcome;
			typedef std::future<CreateAlarmOutcome> CreateAlarmOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::CreateAlarmRequest&, const CreateAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmAsyncHandler;
			typedef Outcome<Error, Model::CreateEciScalingConfigurationResult> CreateEciScalingConfigurationOutcome;
			typedef std::future<CreateEciScalingConfigurationOutcome> CreateEciScalingConfigurationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::CreateEciScalingConfigurationRequest&, const CreateEciScalingConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEciScalingConfigurationAsyncHandler;
			typedef Outcome<Error, Model::CreateLifecycleHookResult> CreateLifecycleHookOutcome;
			typedef std::future<CreateLifecycleHookOutcome> CreateLifecycleHookOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::CreateLifecycleHookRequest&, const CreateLifecycleHookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLifecycleHookAsyncHandler;
			typedef Outcome<Error, Model::CreateNotificationConfigurationResult> CreateNotificationConfigurationOutcome;
			typedef std::future<CreateNotificationConfigurationOutcome> CreateNotificationConfigurationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::CreateNotificationConfigurationRequest&, const CreateNotificationConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNotificationConfigurationAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingConfigurationResult> CreateScalingConfigurationOutcome;
			typedef std::future<CreateScalingConfigurationOutcome> CreateScalingConfigurationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::CreateScalingConfigurationRequest&, const CreateScalingConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingConfigurationAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingGroupResult> CreateScalingGroupOutcome;
			typedef std::future<CreateScalingGroupOutcome> CreateScalingGroupOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::CreateScalingGroupRequest&, const CreateScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingRuleResult> CreateScalingRuleOutcome;
			typedef std::future<CreateScalingRuleOutcome> CreateScalingRuleOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::CreateScalingRuleRequest&, const CreateScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateScheduledTaskResult> CreateScheduledTaskOutcome;
			typedef std::future<CreateScheduledTaskOutcome> CreateScheduledTaskOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::CreateScheduledTaskRequest&, const CreateScheduledTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledTaskAsyncHandler;
			typedef Outcome<Error, Model::DeactivateScalingConfigurationResult> DeactivateScalingConfigurationOutcome;
			typedef std::future<DeactivateScalingConfigurationOutcome> DeactivateScalingConfigurationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DeactivateScalingConfigurationRequest&, const DeactivateScalingConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateScalingConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlarmResult> DeleteAlarmOutcome;
			typedef std::future<DeleteAlarmOutcome> DeleteAlarmOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DeleteAlarmRequest&, const DeleteAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmAsyncHandler;
			typedef Outcome<Error, Model::DeleteEciScalingConfigurationResult> DeleteEciScalingConfigurationOutcome;
			typedef std::future<DeleteEciScalingConfigurationOutcome> DeleteEciScalingConfigurationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DeleteEciScalingConfigurationRequest&, const DeleteEciScalingConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEciScalingConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DeleteLifecycleHookResult> DeleteLifecycleHookOutcome;
			typedef std::future<DeleteLifecycleHookOutcome> DeleteLifecycleHookOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DeleteLifecycleHookRequest&, const DeleteLifecycleHookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLifecycleHookAsyncHandler;
			typedef Outcome<Error, Model::DeleteNotificationConfigurationResult> DeleteNotificationConfigurationOutcome;
			typedef std::future<DeleteNotificationConfigurationOutcome> DeleteNotificationConfigurationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DeleteNotificationConfigurationRequest&, const DeleteNotificationConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotificationConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DeleteScalingConfigurationResult> DeleteScalingConfigurationOutcome;
			typedef std::future<DeleteScalingConfigurationOutcome> DeleteScalingConfigurationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DeleteScalingConfigurationRequest&, const DeleteScalingConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DeleteScalingGroupResult> DeleteScalingGroupOutcome;
			typedef std::future<DeleteScalingGroupOutcome> DeleteScalingGroupOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DeleteScalingGroupRequest&, const DeleteScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteScalingRuleResult> DeleteScalingRuleOutcome;
			typedef std::future<DeleteScalingRuleOutcome> DeleteScalingRuleOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DeleteScalingRuleRequest&, const DeleteScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteScheduledTaskResult> DeleteScheduledTaskOutcome;
			typedef std::future<DeleteScheduledTaskOutcome> DeleteScheduledTaskOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DeleteScheduledTaskRequest&, const DeleteScheduledTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduledTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmsResult> DescribeAlarmsOutcome;
			typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeAlarmsRequest&, const DescribeAlarmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmsAsyncHandler;
			typedef Outcome<Error, Model::DescribeEciScalingConfigurationsResult> DescribeEciScalingConfigurationsOutcome;
			typedef std::future<DescribeEciScalingConfigurationsOutcome> DescribeEciScalingConfigurationsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeEciScalingConfigurationsRequest&, const DescribeEciScalingConfigurationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEciScalingConfigurationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeElasticStrengthResult> DescribeElasticStrengthOutcome;
			typedef std::future<DescribeElasticStrengthOutcome> DescribeElasticStrengthOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeElasticStrengthRequest&, const DescribeElasticStrengthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElasticStrengthAsyncHandler;
			typedef Outcome<Error, Model::DescribeLifecycleActionsResult> DescribeLifecycleActionsOutcome;
			typedef std::future<DescribeLifecycleActionsOutcome> DescribeLifecycleActionsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeLifecycleActionsRequest&, const DescribeLifecycleActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLifecycleActionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLifecycleHooksResult> DescribeLifecycleHooksOutcome;
			typedef std::future<DescribeLifecycleHooksOutcome> DescribeLifecycleHooksOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeLifecycleHooksRequest&, const DescribeLifecycleHooksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLifecycleHooksAsyncHandler;
			typedef Outcome<Error, Model::DescribeLimitationResult> DescribeLimitationOutcome;
			typedef std::future<DescribeLimitationOutcome> DescribeLimitationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeLimitationRequest&, const DescribeLimitationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLimitationAsyncHandler;
			typedef Outcome<Error, Model::DescribeNotificationConfigurationsResult> DescribeNotificationConfigurationsOutcome;
			typedef std::future<DescribeNotificationConfigurationsOutcome> DescribeNotificationConfigurationsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeNotificationConfigurationsRequest&, const DescribeNotificationConfigurationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotificationConfigurationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNotificationTypesResult> DescribeNotificationTypesOutcome;
			typedef std::future<DescribeNotificationTypesOutcome> DescribeNotificationTypesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeNotificationTypesRequest&, const DescribeNotificationTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotificationTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribePatternTypesResult> DescribePatternTypesOutcome;
			typedef std::future<DescribePatternTypesOutcome> DescribePatternTypesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribePatternTypesRequest&, const DescribePatternTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePatternTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingActivitiesResult> DescribeScalingActivitiesOutcome;
			typedef std::future<DescribeScalingActivitiesOutcome> DescribeScalingActivitiesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeScalingActivitiesRequest&, const DescribeScalingActivitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingActivitiesAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingActivityDetailResult> DescribeScalingActivityDetailOutcome;
			typedef std::future<DescribeScalingActivityDetailOutcome> DescribeScalingActivityDetailOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeScalingActivityDetailRequest&, const DescribeScalingActivityDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingActivityDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingConfigurationsResult> DescribeScalingConfigurationsOutcome;
			typedef std::future<DescribeScalingConfigurationsOutcome> DescribeScalingConfigurationsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeScalingConfigurationsRequest&, const DescribeScalingConfigurationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingConfigurationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingGroupsResult> DescribeScalingGroupsOutcome;
			typedef std::future<DescribeScalingGroupsOutcome> DescribeScalingGroupsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeScalingGroupsRequest&, const DescribeScalingGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingInstancesResult> DescribeScalingInstancesOutcome;
			typedef std::future<DescribeScalingInstancesOutcome> DescribeScalingInstancesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeScalingInstancesRequest&, const DescribeScalingInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingRulesResult> DescribeScalingRulesOutcome;
			typedef std::future<DescribeScalingRulesOutcome> DescribeScalingRulesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeScalingRulesRequest&, const DescribeScalingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeScheduledTasksResult> DescribeScheduledTasksOutcome;
			typedef std::future<DescribeScheduledTasksOutcome> DescribeScheduledTasksOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DescribeScheduledTasksRequest&, const DescribeScheduledTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledTasksAsyncHandler;
			typedef Outcome<Error, Model::DetachAlbServerGroupsResult> DetachAlbServerGroupsOutcome;
			typedef std::future<DetachAlbServerGroupsOutcome> DetachAlbServerGroupsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DetachAlbServerGroupsRequest&, const DetachAlbServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachAlbServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::DetachDBInstancesResult> DetachDBInstancesOutcome;
			typedef std::future<DetachDBInstancesOutcome> DetachDBInstancesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DetachDBInstancesRequest&, const DetachDBInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachDBInstancesAsyncHandler;
			typedef Outcome<Error, Model::DetachInstancesResult> DetachInstancesOutcome;
			typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DetachInstancesRequest&, const DetachInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachInstancesAsyncHandler;
			typedef Outcome<Error, Model::DetachLoadBalancersResult> DetachLoadBalancersOutcome;
			typedef std::future<DetachLoadBalancersOutcome> DetachLoadBalancersOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DetachLoadBalancersRequest&, const DetachLoadBalancersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachLoadBalancersAsyncHandler;
			typedef Outcome<Error, Model::DetachServerGroupsResult> DetachServerGroupsOutcome;
			typedef std::future<DetachServerGroupsOutcome> DetachServerGroupsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DetachServerGroupsRequest&, const DetachServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::DetachVServerGroupsResult> DetachVServerGroupsOutcome;
			typedef std::future<DetachVServerGroupsOutcome> DetachVServerGroupsOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DetachVServerGroupsRequest&, const DetachVServerGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachVServerGroupsAsyncHandler;
			typedef Outcome<Error, Model::DisableAlarmResult> DisableAlarmOutcome;
			typedef std::future<DisableAlarmOutcome> DisableAlarmOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DisableAlarmRequest&, const DisableAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableAlarmAsyncHandler;
			typedef Outcome<Error, Model::DisableScalingGroupResult> DisableScalingGroupOutcome;
			typedef std::future<DisableScalingGroupOutcome> DisableScalingGroupOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::DisableScalingGroupRequest&, const DisableScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::EnableAlarmResult> EnableAlarmOutcome;
			typedef std::future<EnableAlarmOutcome> EnableAlarmOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::EnableAlarmRequest&, const EnableAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableAlarmAsyncHandler;
			typedef Outcome<Error, Model::EnableScalingGroupResult> EnableScalingGroupOutcome;
			typedef std::future<EnableScalingGroupOutcome> EnableScalingGroupOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::EnableScalingGroupRequest&, const EnableScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::EnterStandbyResult> EnterStandbyOutcome;
			typedef std::future<EnterStandbyOutcome> EnterStandbyOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::EnterStandbyRequest&, const EnterStandbyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnterStandbyAsyncHandler;
			typedef Outcome<Error, Model::ExecuteScalingRuleResult> ExecuteScalingRuleOutcome;
			typedef std::future<ExecuteScalingRuleOutcome> ExecuteScalingRuleOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ExecuteScalingRuleRequest&, const ExecuteScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::ExitStandbyResult> ExitStandbyOutcome;
			typedef std::future<ExitStandbyOutcome> ExitStandbyOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ExitStandbyRequest&, const ExitStandbyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExitStandbyAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagValuesResult> ListTagValuesOutcome;
			typedef std::future<ListTagValuesOutcome> ListTagValuesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ListTagValuesRequest&, const ListTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagValuesAsyncHandler;
			typedef Outcome<Error, Model::ModifyAlarmResult> ModifyAlarmOutcome;
			typedef std::future<ModifyAlarmOutcome> ModifyAlarmOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ModifyAlarmRequest&, const ModifyAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmAsyncHandler;
			typedef Outcome<Error, Model::ModifyEciScalingConfigurationResult> ModifyEciScalingConfigurationOutcome;
			typedef std::future<ModifyEciScalingConfigurationOutcome> ModifyEciScalingConfigurationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ModifyEciScalingConfigurationRequest&, const ModifyEciScalingConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEciScalingConfigurationAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceAttributeResult> ModifyInstanceAttributeOutcome;
			typedef std::future<ModifyInstanceAttributeOutcome> ModifyInstanceAttributeOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ModifyInstanceAttributeRequest&, const ModifyInstanceAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyLifecycleHookResult> ModifyLifecycleHookOutcome;
			typedef std::future<ModifyLifecycleHookOutcome> ModifyLifecycleHookOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ModifyLifecycleHookRequest&, const ModifyLifecycleHookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLifecycleHookAsyncHandler;
			typedef Outcome<Error, Model::ModifyNotificationConfigurationResult> ModifyNotificationConfigurationOutcome;
			typedef std::future<ModifyNotificationConfigurationOutcome> ModifyNotificationConfigurationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ModifyNotificationConfigurationRequest&, const ModifyNotificationConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotificationConfigurationAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingConfigurationResult> ModifyScalingConfigurationOutcome;
			typedef std::future<ModifyScalingConfigurationOutcome> ModifyScalingConfigurationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ModifyScalingConfigurationRequest&, const ModifyScalingConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingConfigurationAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingGroupResult> ModifyScalingGroupOutcome;
			typedef std::future<ModifyScalingGroupOutcome> ModifyScalingGroupOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ModifyScalingGroupRequest&, const ModifyScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingRuleResult> ModifyScalingRuleOutcome;
			typedef std::future<ModifyScalingRuleOutcome> ModifyScalingRuleOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ModifyScalingRuleRequest&, const ModifyScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyScheduledTaskResult> ModifyScheduledTaskOutcome;
			typedef std::future<ModifyScheduledTaskOutcome> ModifyScheduledTaskOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ModifyScheduledTaskRequest&, const ModifyScheduledTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledTaskAsyncHandler;
			typedef Outcome<Error, Model::RebalanceInstancesResult> RebalanceInstancesOutcome;
			typedef std::future<RebalanceInstancesOutcome> RebalanceInstancesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::RebalanceInstancesRequest&, const RebalanceInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebalanceInstancesAsyncHandler;
			typedef Outcome<Error, Model::RecordLifecycleActionHeartbeatResult> RecordLifecycleActionHeartbeatOutcome;
			typedef std::future<RecordLifecycleActionHeartbeatOutcome> RecordLifecycleActionHeartbeatOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::RecordLifecycleActionHeartbeatRequest&, const RecordLifecycleActionHeartbeatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecordLifecycleActionHeartbeatAsyncHandler;
			typedef Outcome<Error, Model::RemoveInstancesResult> RemoveInstancesOutcome;
			typedef std::future<RemoveInstancesOutcome> RemoveInstancesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::RemoveInstancesRequest&, const RemoveInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstancesAsyncHandler;
			typedef Outcome<Error, Model::ResumeProcessesResult> ResumeProcessesOutcome;
			typedef std::future<ResumeProcessesOutcome> ResumeProcessesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ResumeProcessesRequest&, const ResumeProcessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeProcessesAsyncHandler;
			typedef Outcome<Error, Model::ScaleWithAdjustmentResult> ScaleWithAdjustmentOutcome;
			typedef std::future<ScaleWithAdjustmentOutcome> ScaleWithAdjustmentOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::ScaleWithAdjustmentRequest&, const ScaleWithAdjustmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleWithAdjustmentAsyncHandler;
			typedef Outcome<Error, Model::SetGroupDeletionProtectionResult> SetGroupDeletionProtectionOutcome;
			typedef std::future<SetGroupDeletionProtectionOutcome> SetGroupDeletionProtectionOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::SetGroupDeletionProtectionRequest&, const SetGroupDeletionProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetGroupDeletionProtectionAsyncHandler;
			typedef Outcome<Error, Model::SetInstanceHealthResult> SetInstanceHealthOutcome;
			typedef std::future<SetInstanceHealthOutcome> SetInstanceHealthOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::SetInstanceHealthRequest&, const SetInstanceHealthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetInstanceHealthAsyncHandler;
			typedef Outcome<Error, Model::SetInstancesProtectionResult> SetInstancesProtectionOutcome;
			typedef std::future<SetInstancesProtectionOutcome> SetInstancesProtectionOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::SetInstancesProtectionRequest&, const SetInstancesProtectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetInstancesProtectionAsyncHandler;
			typedef Outcome<Error, Model::SuspendProcessesResult> SuspendProcessesOutcome;
			typedef std::future<SuspendProcessesOutcome> SuspendProcessesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::SuspendProcessesRequest&, const SuspendProcessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendProcessesAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::VerifyAuthenticationResult> VerifyAuthenticationOutcome;
			typedef std::future<VerifyAuthenticationOutcome> VerifyAuthenticationOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::VerifyAuthenticationRequest&, const VerifyAuthenticationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyAuthenticationAsyncHandler;
			typedef Outcome<Error, Model::VerifyUserResult> VerifyUserOutcome;
			typedef std::future<VerifyUserOutcome> VerifyUserOutcomeCallable;
			typedef std::function<void(const EssClient*, const Model::VerifyUserRequest&, const VerifyUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyUserAsyncHandler;

			EssClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EssClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EssClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EssClient();
			AttachAlbServerGroupsOutcome attachAlbServerGroups(const Model::AttachAlbServerGroupsRequest &request)const;
			void attachAlbServerGroupsAsync(const Model::AttachAlbServerGroupsRequest& request, const AttachAlbServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachAlbServerGroupsOutcomeCallable attachAlbServerGroupsCallable(const Model::AttachAlbServerGroupsRequest& request) const;
			AttachDBInstancesOutcome attachDBInstances(const Model::AttachDBInstancesRequest &request)const;
			void attachDBInstancesAsync(const Model::AttachDBInstancesRequest& request, const AttachDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDBInstancesOutcomeCallable attachDBInstancesCallable(const Model::AttachDBInstancesRequest& request) const;
			AttachInstancesOutcome attachInstances(const Model::AttachInstancesRequest &request)const;
			void attachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachInstancesOutcomeCallable attachInstancesCallable(const Model::AttachInstancesRequest& request) const;
			AttachLoadBalancersOutcome attachLoadBalancers(const Model::AttachLoadBalancersRequest &request)const;
			void attachLoadBalancersAsync(const Model::AttachLoadBalancersRequest& request, const AttachLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachLoadBalancersOutcomeCallable attachLoadBalancersCallable(const Model::AttachLoadBalancersRequest& request) const;
			AttachServerGroupsOutcome attachServerGroups(const Model::AttachServerGroupsRequest &request)const;
			void attachServerGroupsAsync(const Model::AttachServerGroupsRequest& request, const AttachServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachServerGroupsOutcomeCallable attachServerGroupsCallable(const Model::AttachServerGroupsRequest& request) const;
			AttachVServerGroupsOutcome attachVServerGroups(const Model::AttachVServerGroupsRequest &request)const;
			void attachVServerGroupsAsync(const Model::AttachVServerGroupsRequest& request, const AttachVServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachVServerGroupsOutcomeCallable attachVServerGroupsCallable(const Model::AttachVServerGroupsRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CompleteLifecycleActionOutcome completeLifecycleAction(const Model::CompleteLifecycleActionRequest &request)const;
			void completeLifecycleActionAsync(const Model::CompleteLifecycleActionRequest& request, const CompleteLifecycleActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompleteLifecycleActionOutcomeCallable completeLifecycleActionCallable(const Model::CompleteLifecycleActionRequest& request) const;
			CreateAlarmOutcome createAlarm(const Model::CreateAlarmRequest &request)const;
			void createAlarmAsync(const Model::CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlarmOutcomeCallable createAlarmCallable(const Model::CreateAlarmRequest& request) const;
			CreateEciScalingConfigurationOutcome createEciScalingConfiguration(const Model::CreateEciScalingConfigurationRequest &request)const;
			void createEciScalingConfigurationAsync(const Model::CreateEciScalingConfigurationRequest& request, const CreateEciScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEciScalingConfigurationOutcomeCallable createEciScalingConfigurationCallable(const Model::CreateEciScalingConfigurationRequest& request) const;
			CreateLifecycleHookOutcome createLifecycleHook(const Model::CreateLifecycleHookRequest &request)const;
			void createLifecycleHookAsync(const Model::CreateLifecycleHookRequest& request, const CreateLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLifecycleHookOutcomeCallable createLifecycleHookCallable(const Model::CreateLifecycleHookRequest& request) const;
			CreateNotificationConfigurationOutcome createNotificationConfiguration(const Model::CreateNotificationConfigurationRequest &request)const;
			void createNotificationConfigurationAsync(const Model::CreateNotificationConfigurationRequest& request, const CreateNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNotificationConfigurationOutcomeCallable createNotificationConfigurationCallable(const Model::CreateNotificationConfigurationRequest& request) const;
			CreateScalingConfigurationOutcome createScalingConfiguration(const Model::CreateScalingConfigurationRequest &request)const;
			void createScalingConfigurationAsync(const Model::CreateScalingConfigurationRequest& request, const CreateScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScalingConfigurationOutcomeCallable createScalingConfigurationCallable(const Model::CreateScalingConfigurationRequest& request) const;
			CreateScalingGroupOutcome createScalingGroup(const Model::CreateScalingGroupRequest &request)const;
			void createScalingGroupAsync(const Model::CreateScalingGroupRequest& request, const CreateScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScalingGroupOutcomeCallable createScalingGroupCallable(const Model::CreateScalingGroupRequest& request) const;
			CreateScalingRuleOutcome createScalingRule(const Model::CreateScalingRuleRequest &request)const;
			void createScalingRuleAsync(const Model::CreateScalingRuleRequest& request, const CreateScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScalingRuleOutcomeCallable createScalingRuleCallable(const Model::CreateScalingRuleRequest& request) const;
			CreateScheduledTaskOutcome createScheduledTask(const Model::CreateScheduledTaskRequest &request)const;
			void createScheduledTaskAsync(const Model::CreateScheduledTaskRequest& request, const CreateScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScheduledTaskOutcomeCallable createScheduledTaskCallable(const Model::CreateScheduledTaskRequest& request) const;
			DeactivateScalingConfigurationOutcome deactivateScalingConfiguration(const Model::DeactivateScalingConfigurationRequest &request)const;
			void deactivateScalingConfigurationAsync(const Model::DeactivateScalingConfigurationRequest& request, const DeactivateScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactivateScalingConfigurationOutcomeCallable deactivateScalingConfigurationCallable(const Model::DeactivateScalingConfigurationRequest& request) const;
			DeleteAlarmOutcome deleteAlarm(const Model::DeleteAlarmRequest &request)const;
			void deleteAlarmAsync(const Model::DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlarmOutcomeCallable deleteAlarmCallable(const Model::DeleteAlarmRequest& request) const;
			DeleteEciScalingConfigurationOutcome deleteEciScalingConfiguration(const Model::DeleteEciScalingConfigurationRequest &request)const;
			void deleteEciScalingConfigurationAsync(const Model::DeleteEciScalingConfigurationRequest& request, const DeleteEciScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEciScalingConfigurationOutcomeCallable deleteEciScalingConfigurationCallable(const Model::DeleteEciScalingConfigurationRequest& request) const;
			DeleteLifecycleHookOutcome deleteLifecycleHook(const Model::DeleteLifecycleHookRequest &request)const;
			void deleteLifecycleHookAsync(const Model::DeleteLifecycleHookRequest& request, const DeleteLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLifecycleHookOutcomeCallable deleteLifecycleHookCallable(const Model::DeleteLifecycleHookRequest& request) const;
			DeleteNotificationConfigurationOutcome deleteNotificationConfiguration(const Model::DeleteNotificationConfigurationRequest &request)const;
			void deleteNotificationConfigurationAsync(const Model::DeleteNotificationConfigurationRequest& request, const DeleteNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNotificationConfigurationOutcomeCallable deleteNotificationConfigurationCallable(const Model::DeleteNotificationConfigurationRequest& request) const;
			DeleteScalingConfigurationOutcome deleteScalingConfiguration(const Model::DeleteScalingConfigurationRequest &request)const;
			void deleteScalingConfigurationAsync(const Model::DeleteScalingConfigurationRequest& request, const DeleteScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScalingConfigurationOutcomeCallable deleteScalingConfigurationCallable(const Model::DeleteScalingConfigurationRequest& request) const;
			DeleteScalingGroupOutcome deleteScalingGroup(const Model::DeleteScalingGroupRequest &request)const;
			void deleteScalingGroupAsync(const Model::DeleteScalingGroupRequest& request, const DeleteScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScalingGroupOutcomeCallable deleteScalingGroupCallable(const Model::DeleteScalingGroupRequest& request) const;
			DeleteScalingRuleOutcome deleteScalingRule(const Model::DeleteScalingRuleRequest &request)const;
			void deleteScalingRuleAsync(const Model::DeleteScalingRuleRequest& request, const DeleteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScalingRuleOutcomeCallable deleteScalingRuleCallable(const Model::DeleteScalingRuleRequest& request) const;
			DeleteScheduledTaskOutcome deleteScheduledTask(const Model::DeleteScheduledTaskRequest &request)const;
			void deleteScheduledTaskAsync(const Model::DeleteScheduledTaskRequest& request, const DeleteScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScheduledTaskOutcomeCallable deleteScheduledTaskCallable(const Model::DeleteScheduledTaskRequest& request) const;
			DescribeAlarmsOutcome describeAlarms(const Model::DescribeAlarmsRequest &request)const;
			void describeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmsOutcomeCallable describeAlarmsCallable(const Model::DescribeAlarmsRequest& request) const;
			DescribeEciScalingConfigurationsOutcome describeEciScalingConfigurations(const Model::DescribeEciScalingConfigurationsRequest &request)const;
			void describeEciScalingConfigurationsAsync(const Model::DescribeEciScalingConfigurationsRequest& request, const DescribeEciScalingConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEciScalingConfigurationsOutcomeCallable describeEciScalingConfigurationsCallable(const Model::DescribeEciScalingConfigurationsRequest& request) const;
			DescribeElasticStrengthOutcome describeElasticStrength(const Model::DescribeElasticStrengthRequest &request)const;
			void describeElasticStrengthAsync(const Model::DescribeElasticStrengthRequest& request, const DescribeElasticStrengthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElasticStrengthOutcomeCallable describeElasticStrengthCallable(const Model::DescribeElasticStrengthRequest& request) const;
			DescribeLifecycleActionsOutcome describeLifecycleActions(const Model::DescribeLifecycleActionsRequest &request)const;
			void describeLifecycleActionsAsync(const Model::DescribeLifecycleActionsRequest& request, const DescribeLifecycleActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLifecycleActionsOutcomeCallable describeLifecycleActionsCallable(const Model::DescribeLifecycleActionsRequest& request) const;
			DescribeLifecycleHooksOutcome describeLifecycleHooks(const Model::DescribeLifecycleHooksRequest &request)const;
			void describeLifecycleHooksAsync(const Model::DescribeLifecycleHooksRequest& request, const DescribeLifecycleHooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLifecycleHooksOutcomeCallable describeLifecycleHooksCallable(const Model::DescribeLifecycleHooksRequest& request) const;
			DescribeLimitationOutcome describeLimitation(const Model::DescribeLimitationRequest &request)const;
			void describeLimitationAsync(const Model::DescribeLimitationRequest& request, const DescribeLimitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLimitationOutcomeCallable describeLimitationCallable(const Model::DescribeLimitationRequest& request) const;
			DescribeNotificationConfigurationsOutcome describeNotificationConfigurations(const Model::DescribeNotificationConfigurationsRequest &request)const;
			void describeNotificationConfigurationsAsync(const Model::DescribeNotificationConfigurationsRequest& request, const DescribeNotificationConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNotificationConfigurationsOutcomeCallable describeNotificationConfigurationsCallable(const Model::DescribeNotificationConfigurationsRequest& request) const;
			DescribeNotificationTypesOutcome describeNotificationTypes(const Model::DescribeNotificationTypesRequest &request)const;
			void describeNotificationTypesAsync(const Model::DescribeNotificationTypesRequest& request, const DescribeNotificationTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNotificationTypesOutcomeCallable describeNotificationTypesCallable(const Model::DescribeNotificationTypesRequest& request) const;
			DescribePatternTypesOutcome describePatternTypes(const Model::DescribePatternTypesRequest &request)const;
			void describePatternTypesAsync(const Model::DescribePatternTypesRequest& request, const DescribePatternTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePatternTypesOutcomeCallable describePatternTypesCallable(const Model::DescribePatternTypesRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeScalingActivitiesOutcome describeScalingActivities(const Model::DescribeScalingActivitiesRequest &request)const;
			void describeScalingActivitiesAsync(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingActivitiesOutcomeCallable describeScalingActivitiesCallable(const Model::DescribeScalingActivitiesRequest& request) const;
			DescribeScalingActivityDetailOutcome describeScalingActivityDetail(const Model::DescribeScalingActivityDetailRequest &request)const;
			void describeScalingActivityDetailAsync(const Model::DescribeScalingActivityDetailRequest& request, const DescribeScalingActivityDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingActivityDetailOutcomeCallable describeScalingActivityDetailCallable(const Model::DescribeScalingActivityDetailRequest& request) const;
			DescribeScalingConfigurationsOutcome describeScalingConfigurations(const Model::DescribeScalingConfigurationsRequest &request)const;
			void describeScalingConfigurationsAsync(const Model::DescribeScalingConfigurationsRequest& request, const DescribeScalingConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingConfigurationsOutcomeCallable describeScalingConfigurationsCallable(const Model::DescribeScalingConfigurationsRequest& request) const;
			DescribeScalingGroupsOutcome describeScalingGroups(const Model::DescribeScalingGroupsRequest &request)const;
			void describeScalingGroupsAsync(const Model::DescribeScalingGroupsRequest& request, const DescribeScalingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingGroupsOutcomeCallable describeScalingGroupsCallable(const Model::DescribeScalingGroupsRequest& request) const;
			DescribeScalingInstancesOutcome describeScalingInstances(const Model::DescribeScalingInstancesRequest &request)const;
			void describeScalingInstancesAsync(const Model::DescribeScalingInstancesRequest& request, const DescribeScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingInstancesOutcomeCallable describeScalingInstancesCallable(const Model::DescribeScalingInstancesRequest& request) const;
			DescribeScalingRulesOutcome describeScalingRules(const Model::DescribeScalingRulesRequest &request)const;
			void describeScalingRulesAsync(const Model::DescribeScalingRulesRequest& request, const DescribeScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingRulesOutcomeCallable describeScalingRulesCallable(const Model::DescribeScalingRulesRequest& request) const;
			DescribeScheduledTasksOutcome describeScheduledTasks(const Model::DescribeScheduledTasksRequest &request)const;
			void describeScheduledTasksAsync(const Model::DescribeScheduledTasksRequest& request, const DescribeScheduledTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScheduledTasksOutcomeCallable describeScheduledTasksCallable(const Model::DescribeScheduledTasksRequest& request) const;
			DetachAlbServerGroupsOutcome detachAlbServerGroups(const Model::DetachAlbServerGroupsRequest &request)const;
			void detachAlbServerGroupsAsync(const Model::DetachAlbServerGroupsRequest& request, const DetachAlbServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachAlbServerGroupsOutcomeCallable detachAlbServerGroupsCallable(const Model::DetachAlbServerGroupsRequest& request) const;
			DetachDBInstancesOutcome detachDBInstances(const Model::DetachDBInstancesRequest &request)const;
			void detachDBInstancesAsync(const Model::DetachDBInstancesRequest& request, const DetachDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachDBInstancesOutcomeCallable detachDBInstancesCallable(const Model::DetachDBInstancesRequest& request) const;
			DetachInstancesOutcome detachInstances(const Model::DetachInstancesRequest &request)const;
			void detachInstancesAsync(const Model::DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachInstancesOutcomeCallable detachInstancesCallable(const Model::DetachInstancesRequest& request) const;
			DetachLoadBalancersOutcome detachLoadBalancers(const Model::DetachLoadBalancersRequest &request)const;
			void detachLoadBalancersAsync(const Model::DetachLoadBalancersRequest& request, const DetachLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachLoadBalancersOutcomeCallable detachLoadBalancersCallable(const Model::DetachLoadBalancersRequest& request) const;
			DetachServerGroupsOutcome detachServerGroups(const Model::DetachServerGroupsRequest &request)const;
			void detachServerGroupsAsync(const Model::DetachServerGroupsRequest& request, const DetachServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachServerGroupsOutcomeCallable detachServerGroupsCallable(const Model::DetachServerGroupsRequest& request) const;
			DetachVServerGroupsOutcome detachVServerGroups(const Model::DetachVServerGroupsRequest &request)const;
			void detachVServerGroupsAsync(const Model::DetachVServerGroupsRequest& request, const DetachVServerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachVServerGroupsOutcomeCallable detachVServerGroupsCallable(const Model::DetachVServerGroupsRequest& request) const;
			DisableAlarmOutcome disableAlarm(const Model::DisableAlarmRequest &request)const;
			void disableAlarmAsync(const Model::DisableAlarmRequest& request, const DisableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableAlarmOutcomeCallable disableAlarmCallable(const Model::DisableAlarmRequest& request) const;
			DisableScalingGroupOutcome disableScalingGroup(const Model::DisableScalingGroupRequest &request)const;
			void disableScalingGroupAsync(const Model::DisableScalingGroupRequest& request, const DisableScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableScalingGroupOutcomeCallable disableScalingGroupCallable(const Model::DisableScalingGroupRequest& request) const;
			EnableAlarmOutcome enableAlarm(const Model::EnableAlarmRequest &request)const;
			void enableAlarmAsync(const Model::EnableAlarmRequest& request, const EnableAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableAlarmOutcomeCallable enableAlarmCallable(const Model::EnableAlarmRequest& request) const;
			EnableScalingGroupOutcome enableScalingGroup(const Model::EnableScalingGroupRequest &request)const;
			void enableScalingGroupAsync(const Model::EnableScalingGroupRequest& request, const EnableScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableScalingGroupOutcomeCallable enableScalingGroupCallable(const Model::EnableScalingGroupRequest& request) const;
			EnterStandbyOutcome enterStandby(const Model::EnterStandbyRequest &request)const;
			void enterStandbyAsync(const Model::EnterStandbyRequest& request, const EnterStandbyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnterStandbyOutcomeCallable enterStandbyCallable(const Model::EnterStandbyRequest& request) const;
			ExecuteScalingRuleOutcome executeScalingRule(const Model::ExecuteScalingRuleRequest &request)const;
			void executeScalingRuleAsync(const Model::ExecuteScalingRuleRequest& request, const ExecuteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteScalingRuleOutcomeCallable executeScalingRuleCallable(const Model::ExecuteScalingRuleRequest& request) const;
			ExitStandbyOutcome exitStandby(const Model::ExitStandbyRequest &request)const;
			void exitStandbyAsync(const Model::ExitStandbyRequest& request, const ExitStandbyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExitStandbyOutcomeCallable exitStandbyCallable(const Model::ExitStandbyRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagValuesOutcome listTagValues(const Model::ListTagValuesRequest &request)const;
			void listTagValuesAsync(const Model::ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagValuesOutcomeCallable listTagValuesCallable(const Model::ListTagValuesRequest& request) const;
			ModifyAlarmOutcome modifyAlarm(const Model::ModifyAlarmRequest &request)const;
			void modifyAlarmAsync(const Model::ModifyAlarmRequest& request, const ModifyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAlarmOutcomeCallable modifyAlarmCallable(const Model::ModifyAlarmRequest& request) const;
			ModifyEciScalingConfigurationOutcome modifyEciScalingConfiguration(const Model::ModifyEciScalingConfigurationRequest &request)const;
			void modifyEciScalingConfigurationAsync(const Model::ModifyEciScalingConfigurationRequest& request, const ModifyEciScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEciScalingConfigurationOutcomeCallable modifyEciScalingConfigurationCallable(const Model::ModifyEciScalingConfigurationRequest& request) const;
			ModifyInstanceAttributeOutcome modifyInstanceAttribute(const Model::ModifyInstanceAttributeRequest &request)const;
			void modifyInstanceAttributeAsync(const Model::ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceAttributeOutcomeCallable modifyInstanceAttributeCallable(const Model::ModifyInstanceAttributeRequest& request) const;
			ModifyLifecycleHookOutcome modifyLifecycleHook(const Model::ModifyLifecycleHookRequest &request)const;
			void modifyLifecycleHookAsync(const Model::ModifyLifecycleHookRequest& request, const ModifyLifecycleHookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLifecycleHookOutcomeCallable modifyLifecycleHookCallable(const Model::ModifyLifecycleHookRequest& request) const;
			ModifyNotificationConfigurationOutcome modifyNotificationConfiguration(const Model::ModifyNotificationConfigurationRequest &request)const;
			void modifyNotificationConfigurationAsync(const Model::ModifyNotificationConfigurationRequest& request, const ModifyNotificationConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNotificationConfigurationOutcomeCallable modifyNotificationConfigurationCallable(const Model::ModifyNotificationConfigurationRequest& request) const;
			ModifyScalingConfigurationOutcome modifyScalingConfiguration(const Model::ModifyScalingConfigurationRequest &request)const;
			void modifyScalingConfigurationAsync(const Model::ModifyScalingConfigurationRequest& request, const ModifyScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingConfigurationOutcomeCallable modifyScalingConfigurationCallable(const Model::ModifyScalingConfigurationRequest& request) const;
			ModifyScalingGroupOutcome modifyScalingGroup(const Model::ModifyScalingGroupRequest &request)const;
			void modifyScalingGroupAsync(const Model::ModifyScalingGroupRequest& request, const ModifyScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingGroupOutcomeCallable modifyScalingGroupCallable(const Model::ModifyScalingGroupRequest& request) const;
			ModifyScalingRuleOutcome modifyScalingRule(const Model::ModifyScalingRuleRequest &request)const;
			void modifyScalingRuleAsync(const Model::ModifyScalingRuleRequest& request, const ModifyScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingRuleOutcomeCallable modifyScalingRuleCallable(const Model::ModifyScalingRuleRequest& request) const;
			ModifyScheduledTaskOutcome modifyScheduledTask(const Model::ModifyScheduledTaskRequest &request)const;
			void modifyScheduledTaskAsync(const Model::ModifyScheduledTaskRequest& request, const ModifyScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScheduledTaskOutcomeCallable modifyScheduledTaskCallable(const Model::ModifyScheduledTaskRequest& request) const;
			RebalanceInstancesOutcome rebalanceInstances(const Model::RebalanceInstancesRequest &request)const;
			void rebalanceInstancesAsync(const Model::RebalanceInstancesRequest& request, const RebalanceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebalanceInstancesOutcomeCallable rebalanceInstancesCallable(const Model::RebalanceInstancesRequest& request) const;
			RecordLifecycleActionHeartbeatOutcome recordLifecycleActionHeartbeat(const Model::RecordLifecycleActionHeartbeatRequest &request)const;
			void recordLifecycleActionHeartbeatAsync(const Model::RecordLifecycleActionHeartbeatRequest& request, const RecordLifecycleActionHeartbeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecordLifecycleActionHeartbeatOutcomeCallable recordLifecycleActionHeartbeatCallable(const Model::RecordLifecycleActionHeartbeatRequest& request) const;
			RemoveInstancesOutcome removeInstances(const Model::RemoveInstancesRequest &request)const;
			void removeInstancesAsync(const Model::RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveInstancesOutcomeCallable removeInstancesCallable(const Model::RemoveInstancesRequest& request) const;
			ResumeProcessesOutcome resumeProcesses(const Model::ResumeProcessesRequest &request)const;
			void resumeProcessesAsync(const Model::ResumeProcessesRequest& request, const ResumeProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeProcessesOutcomeCallable resumeProcessesCallable(const Model::ResumeProcessesRequest& request) const;
			ScaleWithAdjustmentOutcome scaleWithAdjustment(const Model::ScaleWithAdjustmentRequest &request)const;
			void scaleWithAdjustmentAsync(const Model::ScaleWithAdjustmentRequest& request, const ScaleWithAdjustmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleWithAdjustmentOutcomeCallable scaleWithAdjustmentCallable(const Model::ScaleWithAdjustmentRequest& request) const;
			SetGroupDeletionProtectionOutcome setGroupDeletionProtection(const Model::SetGroupDeletionProtectionRequest &request)const;
			void setGroupDeletionProtectionAsync(const Model::SetGroupDeletionProtectionRequest& request, const SetGroupDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetGroupDeletionProtectionOutcomeCallable setGroupDeletionProtectionCallable(const Model::SetGroupDeletionProtectionRequest& request) const;
			SetInstanceHealthOutcome setInstanceHealth(const Model::SetInstanceHealthRequest &request)const;
			void setInstanceHealthAsync(const Model::SetInstanceHealthRequest& request, const SetInstanceHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetInstanceHealthOutcomeCallable setInstanceHealthCallable(const Model::SetInstanceHealthRequest& request) const;
			SetInstancesProtectionOutcome setInstancesProtection(const Model::SetInstancesProtectionRequest &request)const;
			void setInstancesProtectionAsync(const Model::SetInstancesProtectionRequest& request, const SetInstancesProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetInstancesProtectionOutcomeCallable setInstancesProtectionCallable(const Model::SetInstancesProtectionRequest& request) const;
			SuspendProcessesOutcome suspendProcesses(const Model::SuspendProcessesRequest &request)const;
			void suspendProcessesAsync(const Model::SuspendProcessesRequest& request, const SuspendProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendProcessesOutcomeCallable suspendProcessesCallable(const Model::SuspendProcessesRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			VerifyAuthenticationOutcome verifyAuthentication(const Model::VerifyAuthenticationRequest &request)const;
			void verifyAuthenticationAsync(const Model::VerifyAuthenticationRequest& request, const VerifyAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyAuthenticationOutcomeCallable verifyAuthenticationCallable(const Model::VerifyAuthenticationRequest& request) const;
			VerifyUserOutcome verifyUser(const Model::VerifyUserRequest &request)const;
			void verifyUserAsync(const Model::VerifyUserRequest& request, const VerifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyUserOutcomeCallable verifyUserCallable(const Model::VerifyUserRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ESS_ESSCLIENT_H_
