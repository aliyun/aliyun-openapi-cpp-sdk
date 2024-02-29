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

#ifndef ALIBABACLOUD_SDDP_SDDPCLIENT_H_
#define ALIBABACLOUD_SDDP_SDDPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SddpExport.h"
#include "model/CreateConfigRequest.h"
#include "model/CreateConfigResult.h"
#include "model/CreateDataLimitRequest.h"
#include "model/CreateDataLimitResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/CreateScanTaskRequest.h"
#include "model/CreateScanTaskResult.h"
#include "model/CreateSlrRoleRequest.h"
#include "model/CreateSlrRoleResult.h"
#include "model/DeleteDataLimitRequest.h"
#include "model/DeleteDataLimitResult.h"
#include "model/DeleteRuleRequest.h"
#include "model/DeleteRuleResult.h"
#include "model/DescribeCategoryTemplateListRequest.h"
#include "model/DescribeCategoryTemplateListResult.h"
#include "model/DescribeCategoryTemplateRuleListRequest.h"
#include "model/DescribeCategoryTemplateRuleListResult.h"
#include "model/DescribeColumnsRequest.h"
#include "model/DescribeColumnsResult.h"
#include "model/DescribeColumnsV2Request.h"
#include "model/DescribeColumnsV2Result.h"
#include "model/DescribeConfigsRequest.h"
#include "model/DescribeConfigsResult.h"
#include "model/DescribeDataAssetsRequest.h"
#include "model/DescribeDataAssetsResult.h"
#include "model/DescribeDataLimitDetailRequest.h"
#include "model/DescribeDataLimitDetailResult.h"
#include "model/DescribeDataLimitSetRequest.h"
#include "model/DescribeDataLimitSetResult.h"
#include "model/DescribeDataLimitsRequest.h"
#include "model/DescribeDataLimitsResult.h"
#include "model/DescribeDataMaskingRunHistoryRequest.h"
#include "model/DescribeDataMaskingRunHistoryResult.h"
#include "model/DescribeDataMaskingTasksRequest.h"
#include "model/DescribeDataMaskingTasksResult.h"
#include "model/DescribeDataObjectColumnDetailRequest.h"
#include "model/DescribeDataObjectColumnDetailResult.h"
#include "model/DescribeDataObjectColumnDetailV2Request.h"
#include "model/DescribeDataObjectColumnDetailV2Result.h"
#include "model/DescribeDataObjectsRequest.h"
#include "model/DescribeDataObjectsResult.h"
#include "model/DescribeDocTypesRequest.h"
#include "model/DescribeDocTypesResult.h"
#include "model/DescribeEventDetailRequest.h"
#include "model/DescribeEventDetailResult.h"
#include "model/DescribeEventTypesRequest.h"
#include "model/DescribeEventTypesResult.h"
#include "model/DescribeEventsRequest.h"
#include "model/DescribeEventsResult.h"
#include "model/DescribeInstanceSourcesRequest.h"
#include "model/DescribeInstanceSourcesResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeOssObjectDetailRequest.h"
#include "model/DescribeOssObjectDetailResult.h"
#include "model/DescribeOssObjectDetailV2Request.h"
#include "model/DescribeOssObjectDetailV2Result.h"
#include "model/DescribeOssObjectsRequest.h"
#include "model/DescribeOssObjectsResult.h"
#include "model/DescribePackagesRequest.h"
#include "model/DescribePackagesResult.h"
#include "model/DescribeParentInstanceRequest.h"
#include "model/DescribeParentInstanceResult.h"
#include "model/DescribeRiskLevelsRequest.h"
#include "model/DescribeRiskLevelsResult.h"
#include "model/DescribeRulesRequest.h"
#include "model/DescribeRulesResult.h"
#include "model/DescribeTablesRequest.h"
#include "model/DescribeTablesResult.h"
#include "model/DescribeTemplateAllRulesRequest.h"
#include "model/DescribeTemplateAllRulesResult.h"
#include "model/DescribeUserStatusRequest.h"
#include "model/DescribeUserStatusResult.h"
#include "model/DisableUserConfigRequest.h"
#include "model/DisableUserConfigResult.h"
#include "model/ExecDatamaskRequest.h"
#include "model/ExecDatamaskResult.h"
#include "model/ManualTriggerMaskingProcessRequest.h"
#include "model/ManualTriggerMaskingProcessResult.h"
#include "model/ModifyDataLimitRequest.h"
#include "model/ModifyDataLimitResult.h"
#include "model/ModifyDefaultLevelRequest.h"
#include "model/ModifyDefaultLevelResult.h"
#include "model/ModifyEventStatusRequest.h"
#include "model/ModifyEventStatusResult.h"
#include "model/ModifyEventTypeStatusRequest.h"
#include "model/ModifyEventTypeStatusResult.h"
#include "model/ModifyReportTaskStatusRequest.h"
#include "model/ModifyReportTaskStatusResult.h"
#include "model/ModifyRuleRequest.h"
#include "model/ModifyRuleResult.h"
#include "model/ModifyRuleStatusRequest.h"
#include "model/ModifyRuleStatusResult.h"
#include "model/StopMaskingProcessRequest.h"
#include "model/StopMaskingProcessResult.h"


namespace AlibabaCloud
{
	namespace Sddp
	{
		class ALIBABACLOUD_SDDP_EXPORT SddpClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateConfigResult> CreateConfigOutcome;
			typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::CreateConfigRequest&, const CreateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateDataLimitResult> CreateDataLimitOutcome;
			typedef std::future<CreateDataLimitOutcome> CreateDataLimitOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::CreateDataLimitRequest&, const CreateDataLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataLimitAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleResult> CreateRuleOutcome;
			typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::CreateRuleRequest&, const CreateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateScanTaskResult> CreateScanTaskOutcome;
			typedef std::future<CreateScanTaskOutcome> CreateScanTaskOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::CreateScanTaskRequest&, const CreateScanTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScanTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateSlrRoleResult> CreateSlrRoleOutcome;
			typedef std::future<CreateSlrRoleOutcome> CreateSlrRoleOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::CreateSlrRoleRequest&, const CreateSlrRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSlrRoleAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataLimitResult> DeleteDataLimitOutcome;
			typedef std::future<DeleteDataLimitOutcome> DeleteDataLimitOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DeleteDataLimitRequest&, const DeleteDataLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataLimitAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleResult> DeleteRuleOutcome;
			typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DeleteRuleRequest&, const DeleteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeCategoryTemplateListResult> DescribeCategoryTemplateListOutcome;
			typedef std::future<DescribeCategoryTemplateListOutcome> DescribeCategoryTemplateListOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeCategoryTemplateListRequest&, const DescribeCategoryTemplateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCategoryTemplateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCategoryTemplateRuleListResult> DescribeCategoryTemplateRuleListOutcome;
			typedef std::future<DescribeCategoryTemplateRuleListOutcome> DescribeCategoryTemplateRuleListOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeCategoryTemplateRuleListRequest&, const DescribeCategoryTemplateRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCategoryTemplateRuleListAsyncHandler;
			typedef Outcome<Error, Model::DescribeColumnsResult> DescribeColumnsOutcome;
			typedef std::future<DescribeColumnsOutcome> DescribeColumnsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeColumnsRequest&, const DescribeColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnsAsyncHandler;
			typedef Outcome<Error, Model::DescribeColumnsV2Result> DescribeColumnsV2Outcome;
			typedef std::future<DescribeColumnsV2Outcome> DescribeColumnsV2OutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeColumnsV2Request&, const DescribeColumnsV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnsV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigsResult> DescribeConfigsOutcome;
			typedef std::future<DescribeConfigsOutcome> DescribeConfigsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeConfigsRequest&, const DescribeConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataAssetsResult> DescribeDataAssetsOutcome;
			typedef std::future<DescribeDataAssetsOutcome> DescribeDataAssetsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataAssetsRequest&, const DescribeDataAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataAssetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataLimitDetailResult> DescribeDataLimitDetailOutcome;
			typedef std::future<DescribeDataLimitDetailOutcome> DescribeDataLimitDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataLimitDetailRequest&, const DescribeDataLimitDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLimitDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataLimitSetResult> DescribeDataLimitSetOutcome;
			typedef std::future<DescribeDataLimitSetOutcome> DescribeDataLimitSetOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataLimitSetRequest&, const DescribeDataLimitSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLimitSetAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataLimitsResult> DescribeDataLimitsOutcome;
			typedef std::future<DescribeDataLimitsOutcome> DescribeDataLimitsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataLimitsRequest&, const DescribeDataLimitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLimitsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataMaskingRunHistoryResult> DescribeDataMaskingRunHistoryOutcome;
			typedef std::future<DescribeDataMaskingRunHistoryOutcome> DescribeDataMaskingRunHistoryOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataMaskingRunHistoryRequest&, const DescribeDataMaskingRunHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataMaskingRunHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataMaskingTasksResult> DescribeDataMaskingTasksOutcome;
			typedef std::future<DescribeDataMaskingTasksOutcome> DescribeDataMaskingTasksOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataMaskingTasksRequest&, const DescribeDataMaskingTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataMaskingTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataObjectColumnDetailResult> DescribeDataObjectColumnDetailOutcome;
			typedef std::future<DescribeDataObjectColumnDetailOutcome> DescribeDataObjectColumnDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataObjectColumnDetailRequest&, const DescribeDataObjectColumnDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataObjectColumnDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataObjectColumnDetailV2Result> DescribeDataObjectColumnDetailV2Outcome;
			typedef std::future<DescribeDataObjectColumnDetailV2Outcome> DescribeDataObjectColumnDetailV2OutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataObjectColumnDetailV2Request&, const DescribeDataObjectColumnDetailV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataObjectColumnDetailV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeDataObjectsResult> DescribeDataObjectsOutcome;
			typedef std::future<DescribeDataObjectsOutcome> DescribeDataObjectsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataObjectsRequest&, const DescribeDataObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataObjectsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDocTypesResult> DescribeDocTypesOutcome;
			typedef std::future<DescribeDocTypesOutcome> DescribeDocTypesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDocTypesRequest&, const DescribeDocTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventDetailResult> DescribeEventDetailOutcome;
			typedef std::future<DescribeEventDetailOutcome> DescribeEventDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventDetailRequest&, const DescribeEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventTypesResult> DescribeEventTypesOutcome;
			typedef std::future<DescribeEventTypesOutcome> DescribeEventTypesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventTypesRequest&, const DescribeEventTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventsResult> DescribeEventsOutcome;
			typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventsRequest&, const DescribeEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSourcesResult> DescribeInstanceSourcesOutcome;
			typedef std::future<DescribeInstanceSourcesOutcome> DescribeInstanceSourcesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeInstanceSourcesRequest&, const DescribeInstanceSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssObjectDetailResult> DescribeOssObjectDetailOutcome;
			typedef std::future<DescribeOssObjectDetailOutcome> DescribeOssObjectDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeOssObjectDetailRequest&, const DescribeOssObjectDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssObjectDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssObjectDetailV2Result> DescribeOssObjectDetailV2Outcome;
			typedef std::future<DescribeOssObjectDetailV2Outcome> DescribeOssObjectDetailV2OutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeOssObjectDetailV2Request&, const DescribeOssObjectDetailV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssObjectDetailV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeOssObjectsResult> DescribeOssObjectsOutcome;
			typedef std::future<DescribeOssObjectsOutcome> DescribeOssObjectsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeOssObjectsRequest&, const DescribeOssObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssObjectsAsyncHandler;
			typedef Outcome<Error, Model::DescribePackagesResult> DescribePackagesOutcome;
			typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribePackagesRequest&, const DescribePackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeParentInstanceResult> DescribeParentInstanceOutcome;
			typedef std::future<DescribeParentInstanceOutcome> DescribeParentInstanceOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeParentInstanceRequest&, const DescribeParentInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParentInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskLevelsResult> DescribeRiskLevelsOutcome;
			typedef std::future<DescribeRiskLevelsOutcome> DescribeRiskLevelsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeRiskLevelsRequest&, const DescribeRiskLevelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskLevelsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRulesResult> DescribeRulesOutcome;
			typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeRulesRequest&, const DescribeRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTablesResult> DescribeTablesOutcome;
			typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeTablesRequest&, const DescribeTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTemplateAllRulesResult> DescribeTemplateAllRulesOutcome;
			typedef std::future<DescribeTemplateAllRulesOutcome> DescribeTemplateAllRulesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeTemplateAllRulesRequest&, const DescribeTemplateAllRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateAllRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserStatusResult> DescribeUserStatusOutcome;
			typedef std::future<DescribeUserStatusOutcome> DescribeUserStatusOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeUserStatusRequest&, const DescribeUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserStatusAsyncHandler;
			typedef Outcome<Error, Model::DisableUserConfigResult> DisableUserConfigOutcome;
			typedef std::future<DisableUserConfigOutcome> DisableUserConfigOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DisableUserConfigRequest&, const DisableUserConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableUserConfigAsyncHandler;
			typedef Outcome<Error, Model::ExecDatamaskResult> ExecDatamaskOutcome;
			typedef std::future<ExecDatamaskOutcome> ExecDatamaskOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ExecDatamaskRequest&, const ExecDatamaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecDatamaskAsyncHandler;
			typedef Outcome<Error, Model::ManualTriggerMaskingProcessResult> ManualTriggerMaskingProcessOutcome;
			typedef std::future<ManualTriggerMaskingProcessOutcome> ManualTriggerMaskingProcessOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ManualTriggerMaskingProcessRequest&, const ManualTriggerMaskingProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManualTriggerMaskingProcessAsyncHandler;
			typedef Outcome<Error, Model::ModifyDataLimitResult> ModifyDataLimitOutcome;
			typedef std::future<ModifyDataLimitOutcome> ModifyDataLimitOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyDataLimitRequest&, const ModifyDataLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataLimitAsyncHandler;
			typedef Outcome<Error, Model::ModifyDefaultLevelResult> ModifyDefaultLevelOutcome;
			typedef std::future<ModifyDefaultLevelOutcome> ModifyDefaultLevelOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyDefaultLevelRequest&, const ModifyDefaultLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultLevelAsyncHandler;
			typedef Outcome<Error, Model::ModifyEventStatusResult> ModifyEventStatusOutcome;
			typedef std::future<ModifyEventStatusOutcome> ModifyEventStatusOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyEventStatusRequest&, const ModifyEventStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyEventTypeStatusResult> ModifyEventTypeStatusOutcome;
			typedef std::future<ModifyEventTypeStatusOutcome> ModifyEventTypeStatusOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyEventTypeStatusRequest&, const ModifyEventTypeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventTypeStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyReportTaskStatusResult> ModifyReportTaskStatusOutcome;
			typedef std::future<ModifyReportTaskStatusOutcome> ModifyReportTaskStatusOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyReportTaskStatusRequest&, const ModifyReportTaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReportTaskStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyRuleResult> ModifyRuleOutcome;
			typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyRuleRequest&, const ModifyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyRuleStatusResult> ModifyRuleStatusOutcome;
			typedef std::future<ModifyRuleStatusOutcome> ModifyRuleStatusOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyRuleStatusRequest&, const ModifyRuleStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleStatusAsyncHandler;
			typedef Outcome<Error, Model::StopMaskingProcessResult> StopMaskingProcessOutcome;
			typedef std::future<StopMaskingProcessOutcome> StopMaskingProcessOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::StopMaskingProcessRequest&, const StopMaskingProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMaskingProcessAsyncHandler;

			SddpClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SddpClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SddpClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SddpClient();
			CreateConfigOutcome createConfig(const Model::CreateConfigRequest &request)const;
			void createConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConfigOutcomeCallable createConfigCallable(const Model::CreateConfigRequest& request) const;
			CreateDataLimitOutcome createDataLimit(const Model::CreateDataLimitRequest &request)const;
			void createDataLimitAsync(const Model::CreateDataLimitRequest& request, const CreateDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataLimitOutcomeCallable createDataLimitCallable(const Model::CreateDataLimitRequest& request) const;
			CreateRuleOutcome createRule(const Model::CreateRuleRequest &request)const;
			void createRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleOutcomeCallable createRuleCallable(const Model::CreateRuleRequest& request) const;
			CreateScanTaskOutcome createScanTask(const Model::CreateScanTaskRequest &request)const;
			void createScanTaskAsync(const Model::CreateScanTaskRequest& request, const CreateScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScanTaskOutcomeCallable createScanTaskCallable(const Model::CreateScanTaskRequest& request) const;
			CreateSlrRoleOutcome createSlrRole(const Model::CreateSlrRoleRequest &request)const;
			void createSlrRoleAsync(const Model::CreateSlrRoleRequest& request, const CreateSlrRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSlrRoleOutcomeCallable createSlrRoleCallable(const Model::CreateSlrRoleRequest& request) const;
			DeleteDataLimitOutcome deleteDataLimit(const Model::DeleteDataLimitRequest &request)const;
			void deleteDataLimitAsync(const Model::DeleteDataLimitRequest& request, const DeleteDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataLimitOutcomeCallable deleteDataLimitCallable(const Model::DeleteDataLimitRequest& request) const;
			DeleteRuleOutcome deleteRule(const Model::DeleteRuleRequest &request)const;
			void deleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleOutcomeCallable deleteRuleCallable(const Model::DeleteRuleRequest& request) const;
			DescribeCategoryTemplateListOutcome describeCategoryTemplateList(const Model::DescribeCategoryTemplateListRequest &request)const;
			void describeCategoryTemplateListAsync(const Model::DescribeCategoryTemplateListRequest& request, const DescribeCategoryTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCategoryTemplateListOutcomeCallable describeCategoryTemplateListCallable(const Model::DescribeCategoryTemplateListRequest& request) const;
			DescribeCategoryTemplateRuleListOutcome describeCategoryTemplateRuleList(const Model::DescribeCategoryTemplateRuleListRequest &request)const;
			void describeCategoryTemplateRuleListAsync(const Model::DescribeCategoryTemplateRuleListRequest& request, const DescribeCategoryTemplateRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCategoryTemplateRuleListOutcomeCallable describeCategoryTemplateRuleListCallable(const Model::DescribeCategoryTemplateRuleListRequest& request) const;
			DescribeColumnsOutcome describeColumns(const Model::DescribeColumnsRequest &request)const;
			void describeColumnsAsync(const Model::DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeColumnsOutcomeCallable describeColumnsCallable(const Model::DescribeColumnsRequest& request) const;
			DescribeColumnsV2Outcome describeColumnsV2(const Model::DescribeColumnsV2Request &request)const;
			void describeColumnsV2Async(const Model::DescribeColumnsV2Request& request, const DescribeColumnsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeColumnsV2OutcomeCallable describeColumnsV2Callable(const Model::DescribeColumnsV2Request& request) const;
			DescribeConfigsOutcome describeConfigs(const Model::DescribeConfigsRequest &request)const;
			void describeConfigsAsync(const Model::DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigsOutcomeCallable describeConfigsCallable(const Model::DescribeConfigsRequest& request) const;
			DescribeDataAssetsOutcome describeDataAssets(const Model::DescribeDataAssetsRequest &request)const;
			void describeDataAssetsAsync(const Model::DescribeDataAssetsRequest& request, const DescribeDataAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataAssetsOutcomeCallable describeDataAssetsCallable(const Model::DescribeDataAssetsRequest& request) const;
			DescribeDataLimitDetailOutcome describeDataLimitDetail(const Model::DescribeDataLimitDetailRequest &request)const;
			void describeDataLimitDetailAsync(const Model::DescribeDataLimitDetailRequest& request, const DescribeDataLimitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataLimitDetailOutcomeCallable describeDataLimitDetailCallable(const Model::DescribeDataLimitDetailRequest& request) const;
			DescribeDataLimitSetOutcome describeDataLimitSet(const Model::DescribeDataLimitSetRequest &request)const;
			void describeDataLimitSetAsync(const Model::DescribeDataLimitSetRequest& request, const DescribeDataLimitSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataLimitSetOutcomeCallable describeDataLimitSetCallable(const Model::DescribeDataLimitSetRequest& request) const;
			DescribeDataLimitsOutcome describeDataLimits(const Model::DescribeDataLimitsRequest &request)const;
			void describeDataLimitsAsync(const Model::DescribeDataLimitsRequest& request, const DescribeDataLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataLimitsOutcomeCallable describeDataLimitsCallable(const Model::DescribeDataLimitsRequest& request) const;
			DescribeDataMaskingRunHistoryOutcome describeDataMaskingRunHistory(const Model::DescribeDataMaskingRunHistoryRequest &request)const;
			void describeDataMaskingRunHistoryAsync(const Model::DescribeDataMaskingRunHistoryRequest& request, const DescribeDataMaskingRunHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataMaskingRunHistoryOutcomeCallable describeDataMaskingRunHistoryCallable(const Model::DescribeDataMaskingRunHistoryRequest& request) const;
			DescribeDataMaskingTasksOutcome describeDataMaskingTasks(const Model::DescribeDataMaskingTasksRequest &request)const;
			void describeDataMaskingTasksAsync(const Model::DescribeDataMaskingTasksRequest& request, const DescribeDataMaskingTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataMaskingTasksOutcomeCallable describeDataMaskingTasksCallable(const Model::DescribeDataMaskingTasksRequest& request) const;
			DescribeDataObjectColumnDetailOutcome describeDataObjectColumnDetail(const Model::DescribeDataObjectColumnDetailRequest &request)const;
			void describeDataObjectColumnDetailAsync(const Model::DescribeDataObjectColumnDetailRequest& request, const DescribeDataObjectColumnDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataObjectColumnDetailOutcomeCallable describeDataObjectColumnDetailCallable(const Model::DescribeDataObjectColumnDetailRequest& request) const;
			DescribeDataObjectColumnDetailV2Outcome describeDataObjectColumnDetailV2(const Model::DescribeDataObjectColumnDetailV2Request &request)const;
			void describeDataObjectColumnDetailV2Async(const Model::DescribeDataObjectColumnDetailV2Request& request, const DescribeDataObjectColumnDetailV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataObjectColumnDetailV2OutcomeCallable describeDataObjectColumnDetailV2Callable(const Model::DescribeDataObjectColumnDetailV2Request& request) const;
			DescribeDataObjectsOutcome describeDataObjects(const Model::DescribeDataObjectsRequest &request)const;
			void describeDataObjectsAsync(const Model::DescribeDataObjectsRequest& request, const DescribeDataObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataObjectsOutcomeCallable describeDataObjectsCallable(const Model::DescribeDataObjectsRequest& request) const;
			DescribeDocTypesOutcome describeDocTypes(const Model::DescribeDocTypesRequest &request)const;
			void describeDocTypesAsync(const Model::DescribeDocTypesRequest& request, const DescribeDocTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDocTypesOutcomeCallable describeDocTypesCallable(const Model::DescribeDocTypesRequest& request) const;
			DescribeEventDetailOutcome describeEventDetail(const Model::DescribeEventDetailRequest &request)const;
			void describeEventDetailAsync(const Model::DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventDetailOutcomeCallable describeEventDetailCallable(const Model::DescribeEventDetailRequest& request) const;
			DescribeEventTypesOutcome describeEventTypes(const Model::DescribeEventTypesRequest &request)const;
			void describeEventTypesAsync(const Model::DescribeEventTypesRequest& request, const DescribeEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventTypesOutcomeCallable describeEventTypesCallable(const Model::DescribeEventTypesRequest& request) const;
			DescribeEventsOutcome describeEvents(const Model::DescribeEventsRequest &request)const;
			void describeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventsOutcomeCallable describeEventsCallable(const Model::DescribeEventsRequest& request) const;
			DescribeInstanceSourcesOutcome describeInstanceSources(const Model::DescribeInstanceSourcesRequest &request)const;
			void describeInstanceSourcesAsync(const Model::DescribeInstanceSourcesRequest& request, const DescribeInstanceSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSourcesOutcomeCallable describeInstanceSourcesCallable(const Model::DescribeInstanceSourcesRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeOssObjectDetailOutcome describeOssObjectDetail(const Model::DescribeOssObjectDetailRequest &request)const;
			void describeOssObjectDetailAsync(const Model::DescribeOssObjectDetailRequest& request, const DescribeOssObjectDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssObjectDetailOutcomeCallable describeOssObjectDetailCallable(const Model::DescribeOssObjectDetailRequest& request) const;
			DescribeOssObjectDetailV2Outcome describeOssObjectDetailV2(const Model::DescribeOssObjectDetailV2Request &request)const;
			void describeOssObjectDetailV2Async(const Model::DescribeOssObjectDetailV2Request& request, const DescribeOssObjectDetailV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssObjectDetailV2OutcomeCallable describeOssObjectDetailV2Callable(const Model::DescribeOssObjectDetailV2Request& request) const;
			DescribeOssObjectsOutcome describeOssObjects(const Model::DescribeOssObjectsRequest &request)const;
			void describeOssObjectsAsync(const Model::DescribeOssObjectsRequest& request, const DescribeOssObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssObjectsOutcomeCallable describeOssObjectsCallable(const Model::DescribeOssObjectsRequest& request) const;
			DescribePackagesOutcome describePackages(const Model::DescribePackagesRequest &request)const;
			void describePackagesAsync(const Model::DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePackagesOutcomeCallable describePackagesCallable(const Model::DescribePackagesRequest& request) const;
			DescribeParentInstanceOutcome describeParentInstance(const Model::DescribeParentInstanceRequest &request)const;
			void describeParentInstanceAsync(const Model::DescribeParentInstanceRequest& request, const DescribeParentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParentInstanceOutcomeCallable describeParentInstanceCallable(const Model::DescribeParentInstanceRequest& request) const;
			DescribeRiskLevelsOutcome describeRiskLevels(const Model::DescribeRiskLevelsRequest &request)const;
			void describeRiskLevelsAsync(const Model::DescribeRiskLevelsRequest& request, const DescribeRiskLevelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskLevelsOutcomeCallable describeRiskLevelsCallable(const Model::DescribeRiskLevelsRequest& request) const;
			DescribeRulesOutcome describeRules(const Model::DescribeRulesRequest &request)const;
			void describeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRulesOutcomeCallable describeRulesCallable(const Model::DescribeRulesRequest& request) const;
			DescribeTablesOutcome describeTables(const Model::DescribeTablesRequest &request)const;
			void describeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTablesOutcomeCallable describeTablesCallable(const Model::DescribeTablesRequest& request) const;
			DescribeTemplateAllRulesOutcome describeTemplateAllRules(const Model::DescribeTemplateAllRulesRequest &request)const;
			void describeTemplateAllRulesAsync(const Model::DescribeTemplateAllRulesRequest& request, const DescribeTemplateAllRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTemplateAllRulesOutcomeCallable describeTemplateAllRulesCallable(const Model::DescribeTemplateAllRulesRequest& request) const;
			DescribeUserStatusOutcome describeUserStatus(const Model::DescribeUserStatusRequest &request)const;
			void describeUserStatusAsync(const Model::DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserStatusOutcomeCallable describeUserStatusCallable(const Model::DescribeUserStatusRequest& request) const;
			DisableUserConfigOutcome disableUserConfig(const Model::DisableUserConfigRequest &request)const;
			void disableUserConfigAsync(const Model::DisableUserConfigRequest& request, const DisableUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableUserConfigOutcomeCallable disableUserConfigCallable(const Model::DisableUserConfigRequest& request) const;
			ExecDatamaskOutcome execDatamask(const Model::ExecDatamaskRequest &request)const;
			void execDatamaskAsync(const Model::ExecDatamaskRequest& request, const ExecDatamaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecDatamaskOutcomeCallable execDatamaskCallable(const Model::ExecDatamaskRequest& request) const;
			ManualTriggerMaskingProcessOutcome manualTriggerMaskingProcess(const Model::ManualTriggerMaskingProcessRequest &request)const;
			void manualTriggerMaskingProcessAsync(const Model::ManualTriggerMaskingProcessRequest& request, const ManualTriggerMaskingProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManualTriggerMaskingProcessOutcomeCallable manualTriggerMaskingProcessCallable(const Model::ManualTriggerMaskingProcessRequest& request) const;
			ModifyDataLimitOutcome modifyDataLimit(const Model::ModifyDataLimitRequest &request)const;
			void modifyDataLimitAsync(const Model::ModifyDataLimitRequest& request, const ModifyDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDataLimitOutcomeCallable modifyDataLimitCallable(const Model::ModifyDataLimitRequest& request) const;
			ModifyDefaultLevelOutcome modifyDefaultLevel(const Model::ModifyDefaultLevelRequest &request)const;
			void modifyDefaultLevelAsync(const Model::ModifyDefaultLevelRequest& request, const ModifyDefaultLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDefaultLevelOutcomeCallable modifyDefaultLevelCallable(const Model::ModifyDefaultLevelRequest& request) const;
			ModifyEventStatusOutcome modifyEventStatus(const Model::ModifyEventStatusRequest &request)const;
			void modifyEventStatusAsync(const Model::ModifyEventStatusRequest& request, const ModifyEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEventStatusOutcomeCallable modifyEventStatusCallable(const Model::ModifyEventStatusRequest& request) const;
			ModifyEventTypeStatusOutcome modifyEventTypeStatus(const Model::ModifyEventTypeStatusRequest &request)const;
			void modifyEventTypeStatusAsync(const Model::ModifyEventTypeStatusRequest& request, const ModifyEventTypeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEventTypeStatusOutcomeCallable modifyEventTypeStatusCallable(const Model::ModifyEventTypeStatusRequest& request) const;
			ModifyReportTaskStatusOutcome modifyReportTaskStatus(const Model::ModifyReportTaskStatusRequest &request)const;
			void modifyReportTaskStatusAsync(const Model::ModifyReportTaskStatusRequest& request, const ModifyReportTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyReportTaskStatusOutcomeCallable modifyReportTaskStatusCallable(const Model::ModifyReportTaskStatusRequest& request) const;
			ModifyRuleOutcome modifyRule(const Model::ModifyRuleRequest &request)const;
			void modifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRuleOutcomeCallable modifyRuleCallable(const Model::ModifyRuleRequest& request) const;
			ModifyRuleStatusOutcome modifyRuleStatus(const Model::ModifyRuleStatusRequest &request)const;
			void modifyRuleStatusAsync(const Model::ModifyRuleStatusRequest& request, const ModifyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRuleStatusOutcomeCallable modifyRuleStatusCallable(const Model::ModifyRuleStatusRequest& request) const;
			StopMaskingProcessOutcome stopMaskingProcess(const Model::StopMaskingProcessRequest &request)const;
			void stopMaskingProcessAsync(const Model::StopMaskingProcessRequest& request, const StopMaskingProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMaskingProcessOutcomeCallable stopMaskingProcessCallable(const Model::StopMaskingProcessRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SDDP_SDDPCLIENT_H_
