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

#ifndef ALIBABACLOUD_OOS_OOSCLIENT_H_
#define ALIBABACLOUD_OOS_OOSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OosExport.h"
#include "model/CancelExecutionRequest.h"
#include "model/CancelExecutionResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/ContinueDeployApplicationGroupRequest.h"
#include "model/ContinueDeployApplicationGroupResult.h"
#include "model/CreateApplicationRequest.h"
#include "model/CreateApplicationResult.h"
#include "model/CreateApplicationGroupRequest.h"
#include "model/CreateApplicationGroupResult.h"
#include "model/CreateOpsItemRequest.h"
#include "model/CreateOpsItemResult.h"
#include "model/CreateParameterRequest.h"
#include "model/CreateParameterResult.h"
#include "model/CreatePatchBaselineRequest.h"
#include "model/CreatePatchBaselineResult.h"
#include "model/CreateSecretParameterRequest.h"
#include "model/CreateSecretParameterResult.h"
#include "model/CreateStateConfigurationRequest.h"
#include "model/CreateStateConfigurationResult.h"
#include "model/CreateTemplateRequest.h"
#include "model/CreateTemplateResult.h"
#include "model/DeleteApplicationRequest.h"
#include "model/DeleteApplicationResult.h"
#include "model/DeleteApplicationGroupRequest.h"
#include "model/DeleteApplicationGroupResult.h"
#include "model/DeleteExecutionsRequest.h"
#include "model/DeleteExecutionsResult.h"
#include "model/DeleteParameterRequest.h"
#include "model/DeleteParameterResult.h"
#include "model/DeletePatchBaselineRequest.h"
#include "model/DeletePatchBaselineResult.h"
#include "model/DeleteSecretParameterRequest.h"
#include "model/DeleteSecretParameterResult.h"
#include "model/DeleteStateConfigurationsRequest.h"
#include "model/DeleteStateConfigurationsResult.h"
#include "model/DeleteTemplateRequest.h"
#include "model/DeleteTemplateResult.h"
#include "model/DeleteTemplatesRequest.h"
#include "model/DeleteTemplatesResult.h"
#include "model/DeployApplicationGroupRequest.h"
#include "model/DeployApplicationGroupResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/GenerateExecutionPolicyRequest.h"
#include "model/GenerateExecutionPolicyResult.h"
#include "model/GetApplicationRequest.h"
#include "model/GetApplicationResult.h"
#include "model/GetApplicationGroupRequest.h"
#include "model/GetApplicationGroupResult.h"
#include "model/GetExecutionTemplateRequest.h"
#include "model/GetExecutionTemplateResult.h"
#include "model/GetInventorySchemaRequest.h"
#include "model/GetInventorySchemaResult.h"
#include "model/GetOpsItemRequest.h"
#include "model/GetOpsItemResult.h"
#include "model/GetParameterRequest.h"
#include "model/GetParameterResult.h"
#include "model/GetParametersRequest.h"
#include "model/GetParametersResult.h"
#include "model/GetParametersByPathRequest.h"
#include "model/GetParametersByPathResult.h"
#include "model/GetPatchBaselineRequest.h"
#include "model/GetPatchBaselineResult.h"
#include "model/GetSecretParameterRequest.h"
#include "model/GetSecretParameterResult.h"
#include "model/GetSecretParametersRequest.h"
#include "model/GetSecretParametersResult.h"
#include "model/GetSecretParametersByPathRequest.h"
#include "model/GetSecretParametersByPathResult.h"
#include "model/GetServiceSettingsRequest.h"
#include "model/GetServiceSettingsResult.h"
#include "model/GetTemplateRequest.h"
#include "model/GetTemplateResult.h"
#include "model/ListActionsRequest.h"
#include "model/ListActionsResult.h"
#include "model/ListApplicationGroupsRequest.h"
#include "model/ListApplicationGroupsResult.h"
#include "model/ListApplicationsRequest.h"
#include "model/ListApplicationsResult.h"
#include "model/ListExecutionLogsRequest.h"
#include "model/ListExecutionLogsResult.h"
#include "model/ListExecutionRiskyTasksRequest.h"
#include "model/ListExecutionRiskyTasksResult.h"
#include "model/ListExecutionsRequest.h"
#include "model/ListExecutionsResult.h"
#include "model/ListInstancePatchStatesRequest.h"
#include "model/ListInstancePatchStatesResult.h"
#include "model/ListInstancePatchesRequest.h"
#include "model/ListInstancePatchesResult.h"
#include "model/ListInventoryEntriesRequest.h"
#include "model/ListInventoryEntriesResult.h"
#include "model/ListOpsItemsRequest.h"
#include "model/ListOpsItemsResult.h"
#include "model/ListParameterVersionsRequest.h"
#include "model/ListParameterVersionsResult.h"
#include "model/ListParametersRequest.h"
#include "model/ListParametersResult.h"
#include "model/ListPatchBaselinesRequest.h"
#include "model/ListPatchBaselinesResult.h"
#include "model/ListResourceExecutionStatusRequest.h"
#include "model/ListResourceExecutionStatusResult.h"
#include "model/ListSecretParameterVersionsRequest.h"
#include "model/ListSecretParameterVersionsResult.h"
#include "model/ListSecretParametersRequest.h"
#include "model/ListSecretParametersResult.h"
#include "model/ListStateConfigurationsRequest.h"
#include "model/ListStateConfigurationsResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/ListTaskExecutionsRequest.h"
#include "model/ListTaskExecutionsResult.h"
#include "model/ListTemplateVersionsRequest.h"
#include "model/ListTemplateVersionsResult.h"
#include "model/ListTemplatesRequest.h"
#include "model/ListTemplatesResult.h"
#include "model/NotifyExecutionRequest.h"
#include "model/NotifyExecutionResult.h"
#include "model/RegisterDefaultPatchBaselineRequest.h"
#include "model/RegisterDefaultPatchBaselineResult.h"
#include "model/SearchInventoryRequest.h"
#include "model/SearchInventoryResult.h"
#include "model/SetServiceSettingsRequest.h"
#include "model/SetServiceSettingsResult.h"
#include "model/StartExecutionRequest.h"
#include "model/StartExecutionResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TriggerExecutionRequest.h"
#include "model/TriggerExecutionResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateApplicationRequest.h"
#include "model/UpdateApplicationResult.h"
#include "model/UpdateApplicationGroupRequest.h"
#include "model/UpdateApplicationGroupResult.h"
#include "model/UpdateExecutionRequest.h"
#include "model/UpdateExecutionResult.h"
#include "model/UpdateOpsItemRequest.h"
#include "model/UpdateOpsItemResult.h"
#include "model/UpdateParameterRequest.h"
#include "model/UpdateParameterResult.h"
#include "model/UpdatePatchBaselineRequest.h"
#include "model/UpdatePatchBaselineResult.h"
#include "model/UpdateSecretParameterRequest.h"
#include "model/UpdateSecretParameterResult.h"
#include "model/UpdateStateConfigurationRequest.h"
#include "model/UpdateStateConfigurationResult.h"
#include "model/UpdateTemplateRequest.h"
#include "model/UpdateTemplateResult.h"
#include "model/ValidateTemplateContentRequest.h"
#include "model/ValidateTemplateContentResult.h"


namespace AlibabaCloud
{
	namespace Oos
	{
		class ALIBABACLOUD_OOS_EXPORT OosClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CancelExecutionResult> CancelExecutionOutcome;
			typedef std::future<CancelExecutionOutcome> CancelExecutionOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CancelExecutionRequest&, const CancelExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelExecutionAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ContinueDeployApplicationGroupResult> ContinueDeployApplicationGroupOutcome;
			typedef std::future<ContinueDeployApplicationGroupOutcome> ContinueDeployApplicationGroupOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ContinueDeployApplicationGroupRequest&, const ContinueDeployApplicationGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContinueDeployApplicationGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationResult> CreateApplicationOutcome;
			typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreateApplicationRequest&, const CreateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationGroupResult> CreateApplicationGroupOutcome;
			typedef std::future<CreateApplicationGroupOutcome> CreateApplicationGroupOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreateApplicationGroupRequest&, const CreateApplicationGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateOpsItemResult> CreateOpsItemOutcome;
			typedef std::future<CreateOpsItemOutcome> CreateOpsItemOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreateOpsItemRequest&, const CreateOpsItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOpsItemAsyncHandler;
			typedef Outcome<Error, Model::CreateParameterResult> CreateParameterOutcome;
			typedef std::future<CreateParameterOutcome> CreateParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreateParameterRequest&, const CreateParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateParameterAsyncHandler;
			typedef Outcome<Error, Model::CreatePatchBaselineResult> CreatePatchBaselineOutcome;
			typedef std::future<CreatePatchBaselineOutcome> CreatePatchBaselineOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreatePatchBaselineRequest&, const CreatePatchBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePatchBaselineAsyncHandler;
			typedef Outcome<Error, Model::CreateSecretParameterResult> CreateSecretParameterOutcome;
			typedef std::future<CreateSecretParameterOutcome> CreateSecretParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreateSecretParameterRequest&, const CreateSecretParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecretParameterAsyncHandler;
			typedef Outcome<Error, Model::CreateStateConfigurationResult> CreateStateConfigurationOutcome;
			typedef std::future<CreateStateConfigurationOutcome> CreateStateConfigurationOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreateStateConfigurationRequest&, const CreateStateConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStateConfigurationAsyncHandler;
			typedef Outcome<Error, Model::CreateTemplateResult> CreateTemplateOutcome;
			typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::CreateTemplateRequest&, const CreateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationResult> DeleteApplicationOutcome;
			typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteApplicationRequest&, const DeleteApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationGroupResult> DeleteApplicationGroupOutcome;
			typedef std::future<DeleteApplicationGroupOutcome> DeleteApplicationGroupOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteApplicationGroupRequest&, const DeleteApplicationGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteExecutionsResult> DeleteExecutionsOutcome;
			typedef std::future<DeleteExecutionsOutcome> DeleteExecutionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteExecutionsRequest&, const DeleteExecutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExecutionsAsyncHandler;
			typedef Outcome<Error, Model::DeleteParameterResult> DeleteParameterOutcome;
			typedef std::future<DeleteParameterOutcome> DeleteParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteParameterRequest&, const DeleteParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParameterAsyncHandler;
			typedef Outcome<Error, Model::DeletePatchBaselineResult> DeletePatchBaselineOutcome;
			typedef std::future<DeletePatchBaselineOutcome> DeletePatchBaselineOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeletePatchBaselineRequest&, const DeletePatchBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePatchBaselineAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecretParameterResult> DeleteSecretParameterOutcome;
			typedef std::future<DeleteSecretParameterOutcome> DeleteSecretParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteSecretParameterRequest&, const DeleteSecretParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretParameterAsyncHandler;
			typedef Outcome<Error, Model::DeleteStateConfigurationsResult> DeleteStateConfigurationsOutcome;
			typedef std::future<DeleteStateConfigurationsOutcome> DeleteStateConfigurationsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteStateConfigurationsRequest&, const DeleteStateConfigurationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStateConfigurationsAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplateResult> DeleteTemplateOutcome;
			typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteTemplateRequest&, const DeleteTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplatesResult> DeleteTemplatesOutcome;
			typedef std::future<DeleteTemplatesOutcome> DeleteTemplatesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeleteTemplatesRequest&, const DeleteTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DeployApplicationGroupResult> DeployApplicationGroupOutcome;
			typedef std::future<DeployApplicationGroupOutcome> DeployApplicationGroupOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DeployApplicationGroupRequest&, const DeployApplicationGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployApplicationGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::GenerateExecutionPolicyResult> GenerateExecutionPolicyOutcome;
			typedef std::future<GenerateExecutionPolicyOutcome> GenerateExecutionPolicyOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GenerateExecutionPolicyRequest&, const GenerateExecutionPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateExecutionPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationResult> GetApplicationOutcome;
			typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetApplicationRequest&, const GetApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationGroupResult> GetApplicationGroupOutcome;
			typedef std::future<GetApplicationGroupOutcome> GetApplicationGroupOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetApplicationGroupRequest&, const GetApplicationGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationGroupAsyncHandler;
			typedef Outcome<Error, Model::GetExecutionTemplateResult> GetExecutionTemplateOutcome;
			typedef std::future<GetExecutionTemplateOutcome> GetExecutionTemplateOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetExecutionTemplateRequest&, const GetExecutionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetExecutionTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetInventorySchemaResult> GetInventorySchemaOutcome;
			typedef std::future<GetInventorySchemaOutcome> GetInventorySchemaOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetInventorySchemaRequest&, const GetInventorySchemaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInventorySchemaAsyncHandler;
			typedef Outcome<Error, Model::GetOpsItemResult> GetOpsItemOutcome;
			typedef std::future<GetOpsItemOutcome> GetOpsItemOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetOpsItemRequest&, const GetOpsItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpsItemAsyncHandler;
			typedef Outcome<Error, Model::GetParameterResult> GetParameterOutcome;
			typedef std::future<GetParameterOutcome> GetParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetParameterRequest&, const GetParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetParameterAsyncHandler;
			typedef Outcome<Error, Model::GetParametersResult> GetParametersOutcome;
			typedef std::future<GetParametersOutcome> GetParametersOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetParametersRequest&, const GetParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetParametersAsyncHandler;
			typedef Outcome<Error, Model::GetParametersByPathResult> GetParametersByPathOutcome;
			typedef std::future<GetParametersByPathOutcome> GetParametersByPathOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetParametersByPathRequest&, const GetParametersByPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetParametersByPathAsyncHandler;
			typedef Outcome<Error, Model::GetPatchBaselineResult> GetPatchBaselineOutcome;
			typedef std::future<GetPatchBaselineOutcome> GetPatchBaselineOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetPatchBaselineRequest&, const GetPatchBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPatchBaselineAsyncHandler;
			typedef Outcome<Error, Model::GetSecretParameterResult> GetSecretParameterOutcome;
			typedef std::future<GetSecretParameterOutcome> GetSecretParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetSecretParameterRequest&, const GetSecretParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretParameterAsyncHandler;
			typedef Outcome<Error, Model::GetSecretParametersResult> GetSecretParametersOutcome;
			typedef std::future<GetSecretParametersOutcome> GetSecretParametersOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetSecretParametersRequest&, const GetSecretParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretParametersAsyncHandler;
			typedef Outcome<Error, Model::GetSecretParametersByPathResult> GetSecretParametersByPathOutcome;
			typedef std::future<GetSecretParametersByPathOutcome> GetSecretParametersByPathOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetSecretParametersByPathRequest&, const GetSecretParametersByPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretParametersByPathAsyncHandler;
			typedef Outcome<Error, Model::GetServiceSettingsResult> GetServiceSettingsOutcome;
			typedef std::future<GetServiceSettingsOutcome> GetServiceSettingsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetServiceSettingsRequest&, const GetServiceSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceSettingsAsyncHandler;
			typedef Outcome<Error, Model::GetTemplateResult> GetTemplateOutcome;
			typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::GetTemplateRequest&, const GetTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListActionsResult> ListActionsOutcome;
			typedef std::future<ListActionsOutcome> ListActionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListActionsRequest&, const ListActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListActionsAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationGroupsResult> ListApplicationGroupsOutcome;
			typedef std::future<ListApplicationGroupsOutcome> ListApplicationGroupsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListApplicationGroupsRequest&, const ListApplicationGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsResult> ListApplicationsOutcome;
			typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListApplicationsRequest&, const ListApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionLogsResult> ListExecutionLogsOutcome;
			typedef std::future<ListExecutionLogsOutcome> ListExecutionLogsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListExecutionLogsRequest&, const ListExecutionLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionLogsAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionRiskyTasksResult> ListExecutionRiskyTasksOutcome;
			typedef std::future<ListExecutionRiskyTasksOutcome> ListExecutionRiskyTasksOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListExecutionRiskyTasksRequest&, const ListExecutionRiskyTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionRiskyTasksAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionsResult> ListExecutionsOutcome;
			typedef std::future<ListExecutionsOutcome> ListExecutionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListExecutionsRequest&, const ListExecutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionsAsyncHandler;
			typedef Outcome<Error, Model::ListInstancePatchStatesResult> ListInstancePatchStatesOutcome;
			typedef std::future<ListInstancePatchStatesOutcome> ListInstancePatchStatesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListInstancePatchStatesRequest&, const ListInstancePatchStatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancePatchStatesAsyncHandler;
			typedef Outcome<Error, Model::ListInstancePatchesResult> ListInstancePatchesOutcome;
			typedef std::future<ListInstancePatchesOutcome> ListInstancePatchesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListInstancePatchesRequest&, const ListInstancePatchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancePatchesAsyncHandler;
			typedef Outcome<Error, Model::ListInventoryEntriesResult> ListInventoryEntriesOutcome;
			typedef std::future<ListInventoryEntriesOutcome> ListInventoryEntriesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListInventoryEntriesRequest&, const ListInventoryEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInventoryEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListOpsItemsResult> ListOpsItemsOutcome;
			typedef std::future<ListOpsItemsOutcome> ListOpsItemsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListOpsItemsRequest&, const ListOpsItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOpsItemsAsyncHandler;
			typedef Outcome<Error, Model::ListParameterVersionsResult> ListParameterVersionsOutcome;
			typedef std::future<ListParameterVersionsOutcome> ListParameterVersionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListParameterVersionsRequest&, const ListParameterVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListParameterVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListParametersResult> ListParametersOutcome;
			typedef std::future<ListParametersOutcome> ListParametersOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListParametersRequest&, const ListParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListParametersAsyncHandler;
			typedef Outcome<Error, Model::ListPatchBaselinesResult> ListPatchBaselinesOutcome;
			typedef std::future<ListPatchBaselinesOutcome> ListPatchBaselinesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListPatchBaselinesRequest&, const ListPatchBaselinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPatchBaselinesAsyncHandler;
			typedef Outcome<Error, Model::ListResourceExecutionStatusResult> ListResourceExecutionStatusOutcome;
			typedef std::future<ListResourceExecutionStatusOutcome> ListResourceExecutionStatusOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListResourceExecutionStatusRequest&, const ListResourceExecutionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceExecutionStatusAsyncHandler;
			typedef Outcome<Error, Model::ListSecretParameterVersionsResult> ListSecretParameterVersionsOutcome;
			typedef std::future<ListSecretParameterVersionsOutcome> ListSecretParameterVersionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListSecretParameterVersionsRequest&, const ListSecretParameterVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretParameterVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListSecretParametersResult> ListSecretParametersOutcome;
			typedef std::future<ListSecretParametersOutcome> ListSecretParametersOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListSecretParametersRequest&, const ListSecretParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretParametersAsyncHandler;
			typedef Outcome<Error, Model::ListStateConfigurationsResult> ListStateConfigurationsOutcome;
			typedef std::future<ListStateConfigurationsOutcome> ListStateConfigurationsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListStateConfigurationsRequest&, const ListStateConfigurationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStateConfigurationsAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListTagValuesResult> ListTagValuesOutcome;
			typedef std::future<ListTagValuesOutcome> ListTagValuesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTagValuesRequest&, const ListTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagValuesAsyncHandler;
			typedef Outcome<Error, Model::ListTaskExecutionsResult> ListTaskExecutionsOutcome;
			typedef std::future<ListTaskExecutionsOutcome> ListTaskExecutionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTaskExecutionsRequest&, const ListTaskExecutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskExecutionsAsyncHandler;
			typedef Outcome<Error, Model::ListTemplateVersionsResult> ListTemplateVersionsOutcome;
			typedef std::future<ListTemplateVersionsOutcome> ListTemplateVersionsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTemplateVersionsRequest&, const ListTemplateVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTemplateVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListTemplatesResult> ListTemplatesOutcome;
			typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ListTemplatesRequest&, const ListTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTemplatesAsyncHandler;
			typedef Outcome<Error, Model::NotifyExecutionResult> NotifyExecutionOutcome;
			typedef std::future<NotifyExecutionOutcome> NotifyExecutionOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::NotifyExecutionRequest&, const NotifyExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NotifyExecutionAsyncHandler;
			typedef Outcome<Error, Model::RegisterDefaultPatchBaselineResult> RegisterDefaultPatchBaselineOutcome;
			typedef std::future<RegisterDefaultPatchBaselineOutcome> RegisterDefaultPatchBaselineOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::RegisterDefaultPatchBaselineRequest&, const RegisterDefaultPatchBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDefaultPatchBaselineAsyncHandler;
			typedef Outcome<Error, Model::SearchInventoryResult> SearchInventoryOutcome;
			typedef std::future<SearchInventoryOutcome> SearchInventoryOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::SearchInventoryRequest&, const SearchInventoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchInventoryAsyncHandler;
			typedef Outcome<Error, Model::SetServiceSettingsResult> SetServiceSettingsOutcome;
			typedef std::future<SetServiceSettingsOutcome> SetServiceSettingsOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::SetServiceSettingsRequest&, const SetServiceSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetServiceSettingsAsyncHandler;
			typedef Outcome<Error, Model::StartExecutionResult> StartExecutionOutcome;
			typedef std::future<StartExecutionOutcome> StartExecutionOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::StartExecutionRequest&, const StartExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartExecutionAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TriggerExecutionResult> TriggerExecutionOutcome;
			typedef std::future<TriggerExecutionOutcome> TriggerExecutionOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::TriggerExecutionRequest&, const TriggerExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerExecutionAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationResult> UpdateApplicationOutcome;
			typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateApplicationRequest&, const UpdateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationGroupResult> UpdateApplicationGroupOutcome;
			typedef std::future<UpdateApplicationGroupOutcome> UpdateApplicationGroupOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateApplicationGroupRequest&, const UpdateApplicationGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateExecutionResult> UpdateExecutionOutcome;
			typedef std::future<UpdateExecutionOutcome> UpdateExecutionOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateExecutionRequest&, const UpdateExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExecutionAsyncHandler;
			typedef Outcome<Error, Model::UpdateOpsItemResult> UpdateOpsItemOutcome;
			typedef std::future<UpdateOpsItemOutcome> UpdateOpsItemOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateOpsItemRequest&, const UpdateOpsItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOpsItemAsyncHandler;
			typedef Outcome<Error, Model::UpdateParameterResult> UpdateParameterOutcome;
			typedef std::future<UpdateParameterOutcome> UpdateParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateParameterRequest&, const UpdateParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateParameterAsyncHandler;
			typedef Outcome<Error, Model::UpdatePatchBaselineResult> UpdatePatchBaselineOutcome;
			typedef std::future<UpdatePatchBaselineOutcome> UpdatePatchBaselineOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdatePatchBaselineRequest&, const UpdatePatchBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePatchBaselineAsyncHandler;
			typedef Outcome<Error, Model::UpdateSecretParameterResult> UpdateSecretParameterOutcome;
			typedef std::future<UpdateSecretParameterOutcome> UpdateSecretParameterOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateSecretParameterRequest&, const UpdateSecretParameterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecretParameterAsyncHandler;
			typedef Outcome<Error, Model::UpdateStateConfigurationResult> UpdateStateConfigurationOutcome;
			typedef std::future<UpdateStateConfigurationOutcome> UpdateStateConfigurationOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateStateConfigurationRequest&, const UpdateStateConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStateConfigurationAsyncHandler;
			typedef Outcome<Error, Model::UpdateTemplateResult> UpdateTemplateOutcome;
			typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::UpdateTemplateRequest&, const UpdateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTemplateAsyncHandler;
			typedef Outcome<Error, Model::ValidateTemplateContentResult> ValidateTemplateContentOutcome;
			typedef std::future<ValidateTemplateContentOutcome> ValidateTemplateContentOutcomeCallable;
			typedef std::function<void(const OosClient*, const Model::ValidateTemplateContentRequest&, const ValidateTemplateContentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateTemplateContentAsyncHandler;

			OosClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OosClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OosClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OosClient();
			CancelExecutionOutcome cancelExecution(const Model::CancelExecutionRequest &request)const;
			void cancelExecutionAsync(const Model::CancelExecutionRequest& request, const CancelExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelExecutionOutcomeCallable cancelExecutionCallable(const Model::CancelExecutionRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			ContinueDeployApplicationGroupOutcome continueDeployApplicationGroup(const Model::ContinueDeployApplicationGroupRequest &request)const;
			void continueDeployApplicationGroupAsync(const Model::ContinueDeployApplicationGroupRequest& request, const ContinueDeployApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContinueDeployApplicationGroupOutcomeCallable continueDeployApplicationGroupCallable(const Model::ContinueDeployApplicationGroupRequest& request) const;
			CreateApplicationOutcome createApplication(const Model::CreateApplicationRequest &request)const;
			void createApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationOutcomeCallable createApplicationCallable(const Model::CreateApplicationRequest& request) const;
			CreateApplicationGroupOutcome createApplicationGroup(const Model::CreateApplicationGroupRequest &request)const;
			void createApplicationGroupAsync(const Model::CreateApplicationGroupRequest& request, const CreateApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationGroupOutcomeCallable createApplicationGroupCallable(const Model::CreateApplicationGroupRequest& request) const;
			CreateOpsItemOutcome createOpsItem(const Model::CreateOpsItemRequest &request)const;
			void createOpsItemAsync(const Model::CreateOpsItemRequest& request, const CreateOpsItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOpsItemOutcomeCallable createOpsItemCallable(const Model::CreateOpsItemRequest& request) const;
			CreateParameterOutcome createParameter(const Model::CreateParameterRequest &request)const;
			void createParameterAsync(const Model::CreateParameterRequest& request, const CreateParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateParameterOutcomeCallable createParameterCallable(const Model::CreateParameterRequest& request) const;
			CreatePatchBaselineOutcome createPatchBaseline(const Model::CreatePatchBaselineRequest &request)const;
			void createPatchBaselineAsync(const Model::CreatePatchBaselineRequest& request, const CreatePatchBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePatchBaselineOutcomeCallable createPatchBaselineCallable(const Model::CreatePatchBaselineRequest& request) const;
			CreateSecretParameterOutcome createSecretParameter(const Model::CreateSecretParameterRequest &request)const;
			void createSecretParameterAsync(const Model::CreateSecretParameterRequest& request, const CreateSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecretParameterOutcomeCallable createSecretParameterCallable(const Model::CreateSecretParameterRequest& request) const;
			CreateStateConfigurationOutcome createStateConfiguration(const Model::CreateStateConfigurationRequest &request)const;
			void createStateConfigurationAsync(const Model::CreateStateConfigurationRequest& request, const CreateStateConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStateConfigurationOutcomeCallable createStateConfigurationCallable(const Model::CreateStateConfigurationRequest& request) const;
			CreateTemplateOutcome createTemplate(const Model::CreateTemplateRequest &request)const;
			void createTemplateAsync(const Model::CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTemplateOutcomeCallable createTemplateCallable(const Model::CreateTemplateRequest& request) const;
			DeleteApplicationOutcome deleteApplication(const Model::DeleteApplicationRequest &request)const;
			void deleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationOutcomeCallable deleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;
			DeleteApplicationGroupOutcome deleteApplicationGroup(const Model::DeleteApplicationGroupRequest &request)const;
			void deleteApplicationGroupAsync(const Model::DeleteApplicationGroupRequest& request, const DeleteApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationGroupOutcomeCallable deleteApplicationGroupCallable(const Model::DeleteApplicationGroupRequest& request) const;
			DeleteExecutionsOutcome deleteExecutions(const Model::DeleteExecutionsRequest &request)const;
			void deleteExecutionsAsync(const Model::DeleteExecutionsRequest& request, const DeleteExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExecutionsOutcomeCallable deleteExecutionsCallable(const Model::DeleteExecutionsRequest& request) const;
			DeleteParameterOutcome deleteParameter(const Model::DeleteParameterRequest &request)const;
			void deleteParameterAsync(const Model::DeleteParameterRequest& request, const DeleteParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteParameterOutcomeCallable deleteParameterCallable(const Model::DeleteParameterRequest& request) const;
			DeletePatchBaselineOutcome deletePatchBaseline(const Model::DeletePatchBaselineRequest &request)const;
			void deletePatchBaselineAsync(const Model::DeletePatchBaselineRequest& request, const DeletePatchBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePatchBaselineOutcomeCallable deletePatchBaselineCallable(const Model::DeletePatchBaselineRequest& request) const;
			DeleteSecretParameterOutcome deleteSecretParameter(const Model::DeleteSecretParameterRequest &request)const;
			void deleteSecretParameterAsync(const Model::DeleteSecretParameterRequest& request, const DeleteSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecretParameterOutcomeCallable deleteSecretParameterCallable(const Model::DeleteSecretParameterRequest& request) const;
			DeleteStateConfigurationsOutcome deleteStateConfigurations(const Model::DeleteStateConfigurationsRequest &request)const;
			void deleteStateConfigurationsAsync(const Model::DeleteStateConfigurationsRequest& request, const DeleteStateConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStateConfigurationsOutcomeCallable deleteStateConfigurationsCallable(const Model::DeleteStateConfigurationsRequest& request) const;
			DeleteTemplateOutcome deleteTemplate(const Model::DeleteTemplateRequest &request)const;
			void deleteTemplateAsync(const Model::DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplateOutcomeCallable deleteTemplateCallable(const Model::DeleteTemplateRequest& request) const;
			DeleteTemplatesOutcome deleteTemplates(const Model::DeleteTemplatesRequest &request)const;
			void deleteTemplatesAsync(const Model::DeleteTemplatesRequest& request, const DeleteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplatesOutcomeCallable deleteTemplatesCallable(const Model::DeleteTemplatesRequest& request) const;
			DeployApplicationGroupOutcome deployApplicationGroup(const Model::DeployApplicationGroupRequest &request)const;
			void deployApplicationGroupAsync(const Model::DeployApplicationGroupRequest& request, const DeployApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployApplicationGroupOutcomeCallable deployApplicationGroupCallable(const Model::DeployApplicationGroupRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			GenerateExecutionPolicyOutcome generateExecutionPolicy(const Model::GenerateExecutionPolicyRequest &request)const;
			void generateExecutionPolicyAsync(const Model::GenerateExecutionPolicyRequest& request, const GenerateExecutionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateExecutionPolicyOutcomeCallable generateExecutionPolicyCallable(const Model::GenerateExecutionPolicyRequest& request) const;
			GetApplicationOutcome getApplication(const Model::GetApplicationRequest &request)const;
			void getApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationOutcomeCallable getApplicationCallable(const Model::GetApplicationRequest& request) const;
			GetApplicationGroupOutcome getApplicationGroup(const Model::GetApplicationGroupRequest &request)const;
			void getApplicationGroupAsync(const Model::GetApplicationGroupRequest& request, const GetApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationGroupOutcomeCallable getApplicationGroupCallable(const Model::GetApplicationGroupRequest& request) const;
			GetExecutionTemplateOutcome getExecutionTemplate(const Model::GetExecutionTemplateRequest &request)const;
			void getExecutionTemplateAsync(const Model::GetExecutionTemplateRequest& request, const GetExecutionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetExecutionTemplateOutcomeCallable getExecutionTemplateCallable(const Model::GetExecutionTemplateRequest& request) const;
			GetInventorySchemaOutcome getInventorySchema(const Model::GetInventorySchemaRequest &request)const;
			void getInventorySchemaAsync(const Model::GetInventorySchemaRequest& request, const GetInventorySchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInventorySchemaOutcomeCallable getInventorySchemaCallable(const Model::GetInventorySchemaRequest& request) const;
			GetOpsItemOutcome getOpsItem(const Model::GetOpsItemRequest &request)const;
			void getOpsItemAsync(const Model::GetOpsItemRequest& request, const GetOpsItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpsItemOutcomeCallable getOpsItemCallable(const Model::GetOpsItemRequest& request) const;
			GetParameterOutcome getParameter(const Model::GetParameterRequest &request)const;
			void getParameterAsync(const Model::GetParameterRequest& request, const GetParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetParameterOutcomeCallable getParameterCallable(const Model::GetParameterRequest& request) const;
			GetParametersOutcome getParameters(const Model::GetParametersRequest &request)const;
			void getParametersAsync(const Model::GetParametersRequest& request, const GetParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetParametersOutcomeCallable getParametersCallable(const Model::GetParametersRequest& request) const;
			GetParametersByPathOutcome getParametersByPath(const Model::GetParametersByPathRequest &request)const;
			void getParametersByPathAsync(const Model::GetParametersByPathRequest& request, const GetParametersByPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetParametersByPathOutcomeCallable getParametersByPathCallable(const Model::GetParametersByPathRequest& request) const;
			GetPatchBaselineOutcome getPatchBaseline(const Model::GetPatchBaselineRequest &request)const;
			void getPatchBaselineAsync(const Model::GetPatchBaselineRequest& request, const GetPatchBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPatchBaselineOutcomeCallable getPatchBaselineCallable(const Model::GetPatchBaselineRequest& request) const;
			GetSecretParameterOutcome getSecretParameter(const Model::GetSecretParameterRequest &request)const;
			void getSecretParameterAsync(const Model::GetSecretParameterRequest& request, const GetSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecretParameterOutcomeCallable getSecretParameterCallable(const Model::GetSecretParameterRequest& request) const;
			GetSecretParametersOutcome getSecretParameters(const Model::GetSecretParametersRequest &request)const;
			void getSecretParametersAsync(const Model::GetSecretParametersRequest& request, const GetSecretParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecretParametersOutcomeCallable getSecretParametersCallable(const Model::GetSecretParametersRequest& request) const;
			GetSecretParametersByPathOutcome getSecretParametersByPath(const Model::GetSecretParametersByPathRequest &request)const;
			void getSecretParametersByPathAsync(const Model::GetSecretParametersByPathRequest& request, const GetSecretParametersByPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecretParametersByPathOutcomeCallable getSecretParametersByPathCallable(const Model::GetSecretParametersByPathRequest& request) const;
			GetServiceSettingsOutcome getServiceSettings(const Model::GetServiceSettingsRequest &request)const;
			void getServiceSettingsAsync(const Model::GetServiceSettingsRequest& request, const GetServiceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceSettingsOutcomeCallable getServiceSettingsCallable(const Model::GetServiceSettingsRequest& request) const;
			GetTemplateOutcome getTemplate(const Model::GetTemplateRequest &request)const;
			void getTemplateAsync(const Model::GetTemplateRequest& request, const GetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTemplateOutcomeCallable getTemplateCallable(const Model::GetTemplateRequest& request) const;
			ListActionsOutcome listActions(const Model::ListActionsRequest &request)const;
			void listActionsAsync(const Model::ListActionsRequest& request, const ListActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListActionsOutcomeCallable listActionsCallable(const Model::ListActionsRequest& request) const;
			ListApplicationGroupsOutcome listApplicationGroups(const Model::ListApplicationGroupsRequest &request)const;
			void listApplicationGroupsAsync(const Model::ListApplicationGroupsRequest& request, const ListApplicationGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationGroupsOutcomeCallable listApplicationGroupsCallable(const Model::ListApplicationGroupsRequest& request) const;
			ListApplicationsOutcome listApplications(const Model::ListApplicationsRequest &request)const;
			void listApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsOutcomeCallable listApplicationsCallable(const Model::ListApplicationsRequest& request) const;
			ListExecutionLogsOutcome listExecutionLogs(const Model::ListExecutionLogsRequest &request)const;
			void listExecutionLogsAsync(const Model::ListExecutionLogsRequest& request, const ListExecutionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionLogsOutcomeCallable listExecutionLogsCallable(const Model::ListExecutionLogsRequest& request) const;
			ListExecutionRiskyTasksOutcome listExecutionRiskyTasks(const Model::ListExecutionRiskyTasksRequest &request)const;
			void listExecutionRiskyTasksAsync(const Model::ListExecutionRiskyTasksRequest& request, const ListExecutionRiskyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionRiskyTasksOutcomeCallable listExecutionRiskyTasksCallable(const Model::ListExecutionRiskyTasksRequest& request) const;
			ListExecutionsOutcome listExecutions(const Model::ListExecutionsRequest &request)const;
			void listExecutionsAsync(const Model::ListExecutionsRequest& request, const ListExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionsOutcomeCallable listExecutionsCallable(const Model::ListExecutionsRequest& request) const;
			ListInstancePatchStatesOutcome listInstancePatchStates(const Model::ListInstancePatchStatesRequest &request)const;
			void listInstancePatchStatesAsync(const Model::ListInstancePatchStatesRequest& request, const ListInstancePatchStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancePatchStatesOutcomeCallable listInstancePatchStatesCallable(const Model::ListInstancePatchStatesRequest& request) const;
			ListInstancePatchesOutcome listInstancePatches(const Model::ListInstancePatchesRequest &request)const;
			void listInstancePatchesAsync(const Model::ListInstancePatchesRequest& request, const ListInstancePatchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancePatchesOutcomeCallable listInstancePatchesCallable(const Model::ListInstancePatchesRequest& request) const;
			ListInventoryEntriesOutcome listInventoryEntries(const Model::ListInventoryEntriesRequest &request)const;
			void listInventoryEntriesAsync(const Model::ListInventoryEntriesRequest& request, const ListInventoryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInventoryEntriesOutcomeCallable listInventoryEntriesCallable(const Model::ListInventoryEntriesRequest& request) const;
			ListOpsItemsOutcome listOpsItems(const Model::ListOpsItemsRequest &request)const;
			void listOpsItemsAsync(const Model::ListOpsItemsRequest& request, const ListOpsItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOpsItemsOutcomeCallable listOpsItemsCallable(const Model::ListOpsItemsRequest& request) const;
			ListParameterVersionsOutcome listParameterVersions(const Model::ListParameterVersionsRequest &request)const;
			void listParameterVersionsAsync(const Model::ListParameterVersionsRequest& request, const ListParameterVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListParameterVersionsOutcomeCallable listParameterVersionsCallable(const Model::ListParameterVersionsRequest& request) const;
			ListParametersOutcome listParameters(const Model::ListParametersRequest &request)const;
			void listParametersAsync(const Model::ListParametersRequest& request, const ListParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListParametersOutcomeCallable listParametersCallable(const Model::ListParametersRequest& request) const;
			ListPatchBaselinesOutcome listPatchBaselines(const Model::ListPatchBaselinesRequest &request)const;
			void listPatchBaselinesAsync(const Model::ListPatchBaselinesRequest& request, const ListPatchBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPatchBaselinesOutcomeCallable listPatchBaselinesCallable(const Model::ListPatchBaselinesRequest& request) const;
			ListResourceExecutionStatusOutcome listResourceExecutionStatus(const Model::ListResourceExecutionStatusRequest &request)const;
			void listResourceExecutionStatusAsync(const Model::ListResourceExecutionStatusRequest& request, const ListResourceExecutionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceExecutionStatusOutcomeCallable listResourceExecutionStatusCallable(const Model::ListResourceExecutionStatusRequest& request) const;
			ListSecretParameterVersionsOutcome listSecretParameterVersions(const Model::ListSecretParameterVersionsRequest &request)const;
			void listSecretParameterVersionsAsync(const Model::ListSecretParameterVersionsRequest& request, const ListSecretParameterVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecretParameterVersionsOutcomeCallable listSecretParameterVersionsCallable(const Model::ListSecretParameterVersionsRequest& request) const;
			ListSecretParametersOutcome listSecretParameters(const Model::ListSecretParametersRequest &request)const;
			void listSecretParametersAsync(const Model::ListSecretParametersRequest& request, const ListSecretParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecretParametersOutcomeCallable listSecretParametersCallable(const Model::ListSecretParametersRequest& request) const;
			ListStateConfigurationsOutcome listStateConfigurations(const Model::ListStateConfigurationsRequest &request)const;
			void listStateConfigurationsAsync(const Model::ListStateConfigurationsRequest& request, const ListStateConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStateConfigurationsOutcomeCallable listStateConfigurationsCallable(const Model::ListStateConfigurationsRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListTagValuesOutcome listTagValues(const Model::ListTagValuesRequest &request)const;
			void listTagValuesAsync(const Model::ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagValuesOutcomeCallable listTagValuesCallable(const Model::ListTagValuesRequest& request) const;
			ListTaskExecutionsOutcome listTaskExecutions(const Model::ListTaskExecutionsRequest &request)const;
			void listTaskExecutionsAsync(const Model::ListTaskExecutionsRequest& request, const ListTaskExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTaskExecutionsOutcomeCallable listTaskExecutionsCallable(const Model::ListTaskExecutionsRequest& request) const;
			ListTemplateVersionsOutcome listTemplateVersions(const Model::ListTemplateVersionsRequest &request)const;
			void listTemplateVersionsAsync(const Model::ListTemplateVersionsRequest& request, const ListTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTemplateVersionsOutcomeCallable listTemplateVersionsCallable(const Model::ListTemplateVersionsRequest& request) const;
			ListTemplatesOutcome listTemplates(const Model::ListTemplatesRequest &request)const;
			void listTemplatesAsync(const Model::ListTemplatesRequest& request, const ListTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTemplatesOutcomeCallable listTemplatesCallable(const Model::ListTemplatesRequest& request) const;
			NotifyExecutionOutcome notifyExecution(const Model::NotifyExecutionRequest &request)const;
			void notifyExecutionAsync(const Model::NotifyExecutionRequest& request, const NotifyExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NotifyExecutionOutcomeCallable notifyExecutionCallable(const Model::NotifyExecutionRequest& request) const;
			RegisterDefaultPatchBaselineOutcome registerDefaultPatchBaseline(const Model::RegisterDefaultPatchBaselineRequest &request)const;
			void registerDefaultPatchBaselineAsync(const Model::RegisterDefaultPatchBaselineRequest& request, const RegisterDefaultPatchBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDefaultPatchBaselineOutcomeCallable registerDefaultPatchBaselineCallable(const Model::RegisterDefaultPatchBaselineRequest& request) const;
			SearchInventoryOutcome searchInventory(const Model::SearchInventoryRequest &request)const;
			void searchInventoryAsync(const Model::SearchInventoryRequest& request, const SearchInventoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchInventoryOutcomeCallable searchInventoryCallable(const Model::SearchInventoryRequest& request) const;
			SetServiceSettingsOutcome setServiceSettings(const Model::SetServiceSettingsRequest &request)const;
			void setServiceSettingsAsync(const Model::SetServiceSettingsRequest& request, const SetServiceSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetServiceSettingsOutcomeCallable setServiceSettingsCallable(const Model::SetServiceSettingsRequest& request) const;
			StartExecutionOutcome startExecution(const Model::StartExecutionRequest &request)const;
			void startExecutionAsync(const Model::StartExecutionRequest& request, const StartExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartExecutionOutcomeCallable startExecutionCallable(const Model::StartExecutionRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TriggerExecutionOutcome triggerExecution(const Model::TriggerExecutionRequest &request)const;
			void triggerExecutionAsync(const Model::TriggerExecutionRequest& request, const TriggerExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerExecutionOutcomeCallable triggerExecutionCallable(const Model::TriggerExecutionRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateApplicationOutcome updateApplication(const Model::UpdateApplicationRequest &request)const;
			void updateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationOutcomeCallable updateApplicationCallable(const Model::UpdateApplicationRequest& request) const;
			UpdateApplicationGroupOutcome updateApplicationGroup(const Model::UpdateApplicationGroupRequest &request)const;
			void updateApplicationGroupAsync(const Model::UpdateApplicationGroupRequest& request, const UpdateApplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationGroupOutcomeCallable updateApplicationGroupCallable(const Model::UpdateApplicationGroupRequest& request) const;
			UpdateExecutionOutcome updateExecution(const Model::UpdateExecutionRequest &request)const;
			void updateExecutionAsync(const Model::UpdateExecutionRequest& request, const UpdateExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateExecutionOutcomeCallable updateExecutionCallable(const Model::UpdateExecutionRequest& request) const;
			UpdateOpsItemOutcome updateOpsItem(const Model::UpdateOpsItemRequest &request)const;
			void updateOpsItemAsync(const Model::UpdateOpsItemRequest& request, const UpdateOpsItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateOpsItemOutcomeCallable updateOpsItemCallable(const Model::UpdateOpsItemRequest& request) const;
			UpdateParameterOutcome updateParameter(const Model::UpdateParameterRequest &request)const;
			void updateParameterAsync(const Model::UpdateParameterRequest& request, const UpdateParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateParameterOutcomeCallable updateParameterCallable(const Model::UpdateParameterRequest& request) const;
			UpdatePatchBaselineOutcome updatePatchBaseline(const Model::UpdatePatchBaselineRequest &request)const;
			void updatePatchBaselineAsync(const Model::UpdatePatchBaselineRequest& request, const UpdatePatchBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePatchBaselineOutcomeCallable updatePatchBaselineCallable(const Model::UpdatePatchBaselineRequest& request) const;
			UpdateSecretParameterOutcome updateSecretParameter(const Model::UpdateSecretParameterRequest &request)const;
			void updateSecretParameterAsync(const Model::UpdateSecretParameterRequest& request, const UpdateSecretParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSecretParameterOutcomeCallable updateSecretParameterCallable(const Model::UpdateSecretParameterRequest& request) const;
			UpdateStateConfigurationOutcome updateStateConfiguration(const Model::UpdateStateConfigurationRequest &request)const;
			void updateStateConfigurationAsync(const Model::UpdateStateConfigurationRequest& request, const UpdateStateConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStateConfigurationOutcomeCallable updateStateConfigurationCallable(const Model::UpdateStateConfigurationRequest& request) const;
			UpdateTemplateOutcome updateTemplate(const Model::UpdateTemplateRequest &request)const;
			void updateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTemplateOutcomeCallable updateTemplateCallable(const Model::UpdateTemplateRequest& request) const;
			ValidateTemplateContentOutcome validateTemplateContent(const Model::ValidateTemplateContentRequest &request)const;
			void validateTemplateContentAsync(const Model::ValidateTemplateContentRequest& request, const ValidateTemplateContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateTemplateContentOutcomeCallable validateTemplateContentCallable(const Model::ValidateTemplateContentRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OOS_OOSCLIENT_H_
