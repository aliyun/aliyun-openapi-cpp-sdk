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
#include "model/AttachInstancesRequest.h"
#include "model/AttachInstancesResult.h"
#include "model/DescribeScalingGroupsRequest.h"
#include "model/DescribeScalingGroupsResult.h"
#include "model/DescribeScalingActivitiesRequest.h"
#include "model/DescribeScalingActivitiesResult.h"
#include "model/DescribeScalingRulesRequest.h"
#include "model/DescribeScalingRulesResult.h"
#include "model/ModifyScalingGroupRequest.h"
#include "model/ModifyScalingGroupResult.h"
#include "model/EnableScalingGroupRequest.h"
#include "model/EnableScalingGroupResult.h"
#include "model/DeactivateScalingConfigurationRequest.h"
#include "model/DeactivateScalingConfigurationResult.h"
#include "model/VerifyAuthenticationRequest.h"
#include "model/VerifyAuthenticationResult.h"
#include "model/CreateScheduledTaskRequest.h"
#include "model/CreateScheduledTaskResult.h"
#include "model/DeleteScheduledTaskRequest.h"
#include "model/DeleteScheduledTaskResult.h"
#include "model/CreateScalingRuleRequest.h"
#include "model/CreateScalingRuleResult.h"
#include "model/DescribeScalingConfigurationsRequest.h"
#include "model/DescribeScalingConfigurationsResult.h"
#include "model/ModifyScheduledTaskRequest.h"
#include "model/ModifyScheduledTaskResult.h"
#include "model/RemoveInstancesRequest.h"
#include "model/RemoveInstancesResult.h"
#include "model/ExecuteScalingRuleRequest.h"
#include "model/ExecuteScalingRuleResult.h"
#include "model/DeleteScalingGroupRequest.h"
#include "model/DeleteScalingGroupResult.h"
#include "model/DescribeScalingInstancesRequest.h"
#include "model/DescribeScalingInstancesResult.h"
#include "model/CreateScalingConfigurationRequest.h"
#include "model/CreateScalingConfigurationResult.h"
#include "model/DescribeCapacityHistoryRequest.h"
#include "model/DescribeCapacityHistoryResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeScheduledTasksRequest.h"
#include "model/DescribeScheduledTasksResult.h"
#include "model/DescribeAccountAttributesRequest.h"
#include "model/DescribeAccountAttributesResult.h"
#include "model/DetachInstancesRequest.h"
#include "model/DetachInstancesResult.h"
#include "model/DescribeLimitationRequest.h"
#include "model/DescribeLimitationResult.h"
#include "model/DescribeScalingActivityDetailRequest.h"
#include "model/DescribeScalingActivityDetailResult.h"
#include "model/DescribeAlertConfigRequest.h"
#include "model/DescribeAlertConfigResult.h"
#include "model/CreateScalingGroupRequest.h"
#include "model/CreateScalingGroupResult.h"
#include "model/DeleteScalingConfigurationRequest.h"
#include "model/DeleteScalingConfigurationResult.h"
#include "model/DisableScalingGroupRequest.h"
#include "model/DisableScalingGroupResult.h"
#include "model/ModifyScalingRuleRequest.h"
#include "model/ModifyScalingRuleResult.h"
#include "model/DeleteScalingRuleRequest.h"
#include "model/DeleteScalingRuleResult.h"
#include "model/VerifyUserRequest.h"
#include "model/VerifyUserResult.h"
#include "model/ModifyAlertConfigRequest.h"
#include "model/ModifyAlertConfigResult.h"


namespace AlibabaCloud
{
	namespace Ess
	{
		class ALIBABACLOUD_ESS_EXPORT EssClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachInstancesResult> AttachInstancesOutcome;			
			typedef std::future<AttachInstancesOutcome> AttachInstancesOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::AttachInstancesRequest&, const AttachInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingGroupsResult> DescribeScalingGroupsOutcome;			
			typedef std::future<DescribeScalingGroupsOutcome> DescribeScalingGroupsOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeScalingGroupsRequest&, const DescribeScalingGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingActivitiesResult> DescribeScalingActivitiesOutcome;			
			typedef std::future<DescribeScalingActivitiesOutcome> DescribeScalingActivitiesOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeScalingActivitiesRequest&, const DescribeScalingActivitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingActivitiesAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingRulesResult> DescribeScalingRulesOutcome;			
			typedef std::future<DescribeScalingRulesOutcome> DescribeScalingRulesOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeScalingRulesRequest&, const DescribeScalingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingRulesAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingGroupResult> ModifyScalingGroupOutcome;			
			typedef std::future<ModifyScalingGroupOutcome> ModifyScalingGroupOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::ModifyScalingGroupRequest&, const ModifyScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::EnableScalingGroupResult> EnableScalingGroupOutcome;			
			typedef std::future<EnableScalingGroupOutcome> EnableScalingGroupOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::EnableScalingGroupRequest&, const EnableScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::DeactivateScalingConfigurationResult> DeactivateScalingConfigurationOutcome;			
			typedef std::future<DeactivateScalingConfigurationOutcome> DeactivateScalingConfigurationOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DeactivateScalingConfigurationRequest&, const DeactivateScalingConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateScalingConfigurationAsyncHandler;
			typedef Outcome<Error, Model::VerifyAuthenticationResult> VerifyAuthenticationOutcome;			
			typedef std::future<VerifyAuthenticationOutcome> VerifyAuthenticationOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::VerifyAuthenticationRequest&, const VerifyAuthenticationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyAuthenticationAsyncHandler;
			typedef Outcome<Error, Model::CreateScheduledTaskResult> CreateScheduledTaskOutcome;			
			typedef std::future<CreateScheduledTaskOutcome> CreateScheduledTaskOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::CreateScheduledTaskRequest&, const CreateScheduledTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteScheduledTaskResult> DeleteScheduledTaskOutcome;			
			typedef std::future<DeleteScheduledTaskOutcome> DeleteScheduledTaskOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DeleteScheduledTaskRequest&, const DeleteScheduledTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduledTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingRuleResult> CreateScalingRuleOutcome;			
			typedef std::future<CreateScalingRuleOutcome> CreateScalingRuleOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::CreateScalingRuleRequest&, const CreateScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingConfigurationsResult> DescribeScalingConfigurationsOutcome;			
			typedef std::future<DescribeScalingConfigurationsOutcome> DescribeScalingConfigurationsOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeScalingConfigurationsRequest&, const DescribeScalingConfigurationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingConfigurationsAsyncHandler;
			typedef Outcome<Error, Model::ModifyScheduledTaskResult> ModifyScheduledTaskOutcome;			
			typedef std::future<ModifyScheduledTaskOutcome> ModifyScheduledTaskOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::ModifyScheduledTaskRequest&, const ModifyScheduledTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledTaskAsyncHandler;
			typedef Outcome<Error, Model::RemoveInstancesResult> RemoveInstancesOutcome;			
			typedef std::future<RemoveInstancesOutcome> RemoveInstancesOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::RemoveInstancesRequest&, const RemoveInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstancesAsyncHandler;
			typedef Outcome<Error, Model::ExecuteScalingRuleResult> ExecuteScalingRuleOutcome;			
			typedef std::future<ExecuteScalingRuleOutcome> ExecuteScalingRuleOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::ExecuteScalingRuleRequest&, const ExecuteScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteScalingGroupResult> DeleteScalingGroupOutcome;			
			typedef std::future<DeleteScalingGroupOutcome> DeleteScalingGroupOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DeleteScalingGroupRequest&, const DeleteScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingInstancesResult> DescribeScalingInstancesOutcome;			
			typedef std::future<DescribeScalingInstancesOutcome> DescribeScalingInstancesOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeScalingInstancesRequest&, const DescribeScalingInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingInstancesAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingConfigurationResult> CreateScalingConfigurationOutcome;			
			typedef std::future<CreateScalingConfigurationOutcome> CreateScalingConfigurationOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::CreateScalingConfigurationRequest&, const CreateScalingConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeCapacityHistoryResult> DescribeCapacityHistoryOutcome;			
			typedef std::future<DescribeCapacityHistoryOutcome> DescribeCapacityHistoryOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeCapacityHistoryRequest&, const DescribeCapacityHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCapacityHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;			
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeScheduledTasksResult> DescribeScheduledTasksOutcome;			
			typedef std::future<DescribeScheduledTasksOutcome> DescribeScheduledTasksOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeScheduledTasksRequest&, const DescribeScheduledTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountAttributesResult> DescribeAccountAttributesOutcome;			
			typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeAccountAttributesRequest&, const DescribeAccountAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountAttributesAsyncHandler;
			typedef Outcome<Error, Model::DetachInstancesResult> DetachInstancesOutcome;			
			typedef std::future<DetachInstancesOutcome> DetachInstancesOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DetachInstancesRequest&, const DetachInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLimitationResult> DescribeLimitationOutcome;			
			typedef std::future<DescribeLimitationOutcome> DescribeLimitationOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeLimitationRequest&, const DescribeLimitationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLimitationAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingActivityDetailResult> DescribeScalingActivityDetailOutcome;			
			typedef std::future<DescribeScalingActivityDetailOutcome> DescribeScalingActivityDetailOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeScalingActivityDetailRequest&, const DescribeScalingActivityDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingActivityDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlertConfigResult> DescribeAlertConfigOutcome;			
			typedef std::future<DescribeAlertConfigOutcome> DescribeAlertConfigOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DescribeAlertConfigRequest&, const DescribeAlertConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingGroupResult> CreateScalingGroupOutcome;			
			typedef std::future<CreateScalingGroupOutcome> CreateScalingGroupOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::CreateScalingGroupRequest&, const CreateScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteScalingConfigurationResult> DeleteScalingConfigurationOutcome;			
			typedef std::future<DeleteScalingConfigurationOutcome> DeleteScalingConfigurationOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DeleteScalingConfigurationRequest&, const DeleteScalingConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DisableScalingGroupResult> DisableScalingGroupOutcome;			
			typedef std::future<DisableScalingGroupOutcome> DisableScalingGroupOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DisableScalingGroupRequest&, const DisableScalingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableScalingGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingRuleResult> ModifyScalingRuleOutcome;			
			typedef std::future<ModifyScalingRuleOutcome> ModifyScalingRuleOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::ModifyScalingRuleRequest&, const ModifyScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteScalingRuleResult> DeleteScalingRuleOutcome;			
			typedef std::future<DeleteScalingRuleOutcome> DeleteScalingRuleOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::DeleteScalingRuleRequest&, const DeleteScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::VerifyUserResult> VerifyUserOutcome;			
			typedef std::future<VerifyUserOutcome> VerifyUserOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::VerifyUserRequest&, const VerifyUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyUserAsyncHandler;
			typedef Outcome<Error, Model::ModifyAlertConfigResult> ModifyAlertConfigOutcome;			
			typedef std::future<ModifyAlertConfigOutcome> ModifyAlertConfigOutcomeCallable;			
			typedef std::function<void(const EssClient*, const Model::ModifyAlertConfigRequest&, const ModifyAlertConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlertConfigAsyncHandler;

			EssClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EssClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EssClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EssClient();
            AttachInstancesOutcome attachInstances(const Model::AttachInstancesRequest &request)const;
            void attachInstancesAsync(const Model::AttachInstancesRequest& request, const AttachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AttachInstancesOutcomeCallable attachInstancesCallable(const Model::AttachInstancesRequest& request) const;
            DescribeScalingGroupsOutcome describeScalingGroups(const Model::DescribeScalingGroupsRequest &request)const;
            void describeScalingGroupsAsync(const Model::DescribeScalingGroupsRequest& request, const DescribeScalingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeScalingGroupsOutcomeCallable describeScalingGroupsCallable(const Model::DescribeScalingGroupsRequest& request) const;
            DescribeScalingActivitiesOutcome describeScalingActivities(const Model::DescribeScalingActivitiesRequest &request)const;
            void describeScalingActivitiesAsync(const Model::DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeScalingActivitiesOutcomeCallable describeScalingActivitiesCallable(const Model::DescribeScalingActivitiesRequest& request) const;
            DescribeScalingRulesOutcome describeScalingRules(const Model::DescribeScalingRulesRequest &request)const;
            void describeScalingRulesAsync(const Model::DescribeScalingRulesRequest& request, const DescribeScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeScalingRulesOutcomeCallable describeScalingRulesCallable(const Model::DescribeScalingRulesRequest& request) const;
            ModifyScalingGroupOutcome modifyScalingGroup(const Model::ModifyScalingGroupRequest &request)const;
            void modifyScalingGroupAsync(const Model::ModifyScalingGroupRequest& request, const ModifyScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyScalingGroupOutcomeCallable modifyScalingGroupCallable(const Model::ModifyScalingGroupRequest& request) const;
            EnableScalingGroupOutcome enableScalingGroup(const Model::EnableScalingGroupRequest &request)const;
            void enableScalingGroupAsync(const Model::EnableScalingGroupRequest& request, const EnableScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            EnableScalingGroupOutcomeCallable enableScalingGroupCallable(const Model::EnableScalingGroupRequest& request) const;
            DeactivateScalingConfigurationOutcome deactivateScalingConfiguration(const Model::DeactivateScalingConfigurationRequest &request)const;
            void deactivateScalingConfigurationAsync(const Model::DeactivateScalingConfigurationRequest& request, const DeactivateScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeactivateScalingConfigurationOutcomeCallable deactivateScalingConfigurationCallable(const Model::DeactivateScalingConfigurationRequest& request) const;
            VerifyAuthenticationOutcome verifyAuthentication(const Model::VerifyAuthenticationRequest &request)const;
            void verifyAuthenticationAsync(const Model::VerifyAuthenticationRequest& request, const VerifyAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            VerifyAuthenticationOutcomeCallable verifyAuthenticationCallable(const Model::VerifyAuthenticationRequest& request) const;
            CreateScheduledTaskOutcome createScheduledTask(const Model::CreateScheduledTaskRequest &request)const;
            void createScheduledTaskAsync(const Model::CreateScheduledTaskRequest& request, const CreateScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateScheduledTaskOutcomeCallable createScheduledTaskCallable(const Model::CreateScheduledTaskRequest& request) const;
            DeleteScheduledTaskOutcome deleteScheduledTask(const Model::DeleteScheduledTaskRequest &request)const;
            void deleteScheduledTaskAsync(const Model::DeleteScheduledTaskRequest& request, const DeleteScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteScheduledTaskOutcomeCallable deleteScheduledTaskCallable(const Model::DeleteScheduledTaskRequest& request) const;
            CreateScalingRuleOutcome createScalingRule(const Model::CreateScalingRuleRequest &request)const;
            void createScalingRuleAsync(const Model::CreateScalingRuleRequest& request, const CreateScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateScalingRuleOutcomeCallable createScalingRuleCallable(const Model::CreateScalingRuleRequest& request) const;
            DescribeScalingConfigurationsOutcome describeScalingConfigurations(const Model::DescribeScalingConfigurationsRequest &request)const;
            void describeScalingConfigurationsAsync(const Model::DescribeScalingConfigurationsRequest& request, const DescribeScalingConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeScalingConfigurationsOutcomeCallable describeScalingConfigurationsCallable(const Model::DescribeScalingConfigurationsRequest& request) const;
            ModifyScheduledTaskOutcome modifyScheduledTask(const Model::ModifyScheduledTaskRequest &request)const;
            void modifyScheduledTaskAsync(const Model::ModifyScheduledTaskRequest& request, const ModifyScheduledTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyScheduledTaskOutcomeCallable modifyScheduledTaskCallable(const Model::ModifyScheduledTaskRequest& request) const;
            RemoveInstancesOutcome removeInstances(const Model::RemoveInstancesRequest &request)const;
            void removeInstancesAsync(const Model::RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RemoveInstancesOutcomeCallable removeInstancesCallable(const Model::RemoveInstancesRequest& request) const;
            ExecuteScalingRuleOutcome executeScalingRule(const Model::ExecuteScalingRuleRequest &request)const;
            void executeScalingRuleAsync(const Model::ExecuteScalingRuleRequest& request, const ExecuteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ExecuteScalingRuleOutcomeCallable executeScalingRuleCallable(const Model::ExecuteScalingRuleRequest& request) const;
            DeleteScalingGroupOutcome deleteScalingGroup(const Model::DeleteScalingGroupRequest &request)const;
            void deleteScalingGroupAsync(const Model::DeleteScalingGroupRequest& request, const DeleteScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteScalingGroupOutcomeCallable deleteScalingGroupCallable(const Model::DeleteScalingGroupRequest& request) const;
            DescribeScalingInstancesOutcome describeScalingInstances(const Model::DescribeScalingInstancesRequest &request)const;
            void describeScalingInstancesAsync(const Model::DescribeScalingInstancesRequest& request, const DescribeScalingInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeScalingInstancesOutcomeCallable describeScalingInstancesCallable(const Model::DescribeScalingInstancesRequest& request) const;
            CreateScalingConfigurationOutcome createScalingConfiguration(const Model::CreateScalingConfigurationRequest &request)const;
            void createScalingConfigurationAsync(const Model::CreateScalingConfigurationRequest& request, const CreateScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateScalingConfigurationOutcomeCallable createScalingConfigurationCallable(const Model::CreateScalingConfigurationRequest& request) const;
            DescribeCapacityHistoryOutcome describeCapacityHistory(const Model::DescribeCapacityHistoryRequest &request)const;
            void describeCapacityHistoryAsync(const Model::DescribeCapacityHistoryRequest& request, const DescribeCapacityHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeCapacityHistoryOutcomeCallable describeCapacityHistoryCallable(const Model::DescribeCapacityHistoryRequest& request) const;
            DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
            void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
            DescribeScheduledTasksOutcome describeScheduledTasks(const Model::DescribeScheduledTasksRequest &request)const;
            void describeScheduledTasksAsync(const Model::DescribeScheduledTasksRequest& request, const DescribeScheduledTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeScheduledTasksOutcomeCallable describeScheduledTasksCallable(const Model::DescribeScheduledTasksRequest& request) const;
            DescribeAccountAttributesOutcome describeAccountAttributes(const Model::DescribeAccountAttributesRequest &request)const;
            void describeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeAccountAttributesOutcomeCallable describeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;
            DetachInstancesOutcome detachInstances(const Model::DetachInstancesRequest &request)const;
            void detachInstancesAsync(const Model::DetachInstancesRequest& request, const DetachInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DetachInstancesOutcomeCallable detachInstancesCallable(const Model::DetachInstancesRequest& request) const;
            DescribeLimitationOutcome describeLimitation(const Model::DescribeLimitationRequest &request)const;
            void describeLimitationAsync(const Model::DescribeLimitationRequest& request, const DescribeLimitationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLimitationOutcomeCallable describeLimitationCallable(const Model::DescribeLimitationRequest& request) const;
            DescribeScalingActivityDetailOutcome describeScalingActivityDetail(const Model::DescribeScalingActivityDetailRequest &request)const;
            void describeScalingActivityDetailAsync(const Model::DescribeScalingActivityDetailRequest& request, const DescribeScalingActivityDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeScalingActivityDetailOutcomeCallable describeScalingActivityDetailCallable(const Model::DescribeScalingActivityDetailRequest& request) const;
            DescribeAlertConfigOutcome describeAlertConfig(const Model::DescribeAlertConfigRequest &request)const;
            void describeAlertConfigAsync(const Model::DescribeAlertConfigRequest& request, const DescribeAlertConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeAlertConfigOutcomeCallable describeAlertConfigCallable(const Model::DescribeAlertConfigRequest& request) const;
            CreateScalingGroupOutcome createScalingGroup(const Model::CreateScalingGroupRequest &request)const;
            void createScalingGroupAsync(const Model::CreateScalingGroupRequest& request, const CreateScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateScalingGroupOutcomeCallable createScalingGroupCallable(const Model::CreateScalingGroupRequest& request) const;
            DeleteScalingConfigurationOutcome deleteScalingConfiguration(const Model::DeleteScalingConfigurationRequest &request)const;
            void deleteScalingConfigurationAsync(const Model::DeleteScalingConfigurationRequest& request, const DeleteScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteScalingConfigurationOutcomeCallable deleteScalingConfigurationCallable(const Model::DeleteScalingConfigurationRequest& request) const;
            DisableScalingGroupOutcome disableScalingGroup(const Model::DisableScalingGroupRequest &request)const;
            void disableScalingGroupAsync(const Model::DisableScalingGroupRequest& request, const DisableScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DisableScalingGroupOutcomeCallable disableScalingGroupCallable(const Model::DisableScalingGroupRequest& request) const;
            ModifyScalingRuleOutcome modifyScalingRule(const Model::ModifyScalingRuleRequest &request)const;
            void modifyScalingRuleAsync(const Model::ModifyScalingRuleRequest& request, const ModifyScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyScalingRuleOutcomeCallable modifyScalingRuleCallable(const Model::ModifyScalingRuleRequest& request) const;
            DeleteScalingRuleOutcome deleteScalingRule(const Model::DeleteScalingRuleRequest &request)const;
            void deleteScalingRuleAsync(const Model::DeleteScalingRuleRequest& request, const DeleteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteScalingRuleOutcomeCallable deleteScalingRuleCallable(const Model::DeleteScalingRuleRequest& request) const;
            VerifyUserOutcome verifyUser(const Model::VerifyUserRequest &request)const;
            void verifyUserAsync(const Model::VerifyUserRequest& request, const VerifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            VerifyUserOutcomeCallable verifyUserCallable(const Model::VerifyUserRequest& request) const;
            ModifyAlertConfigOutcome modifyAlertConfig(const Model::ModifyAlertConfigRequest &request)const;
            void modifyAlertConfigAsync(const Model::ModifyAlertConfigRequest& request, const ModifyAlertConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyAlertConfigOutcomeCallable modifyAlertConfigCallable(const Model::ModifyAlertConfigRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ESS_ESSCLIENT_H_
