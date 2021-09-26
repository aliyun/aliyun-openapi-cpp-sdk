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
#include "model/BatchDeleteDataLimitRequest.h"
#include "model/BatchDeleteDataLimitResult.h"
#include "model/CreateConfigRequest.h"
#include "model/CreateConfigResult.h"
#include "model/CreateDataLimitRequest.h"
#include "model/CreateDataLimitResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/CreateScanTaskRequest.h"
#include "model/CreateScanTaskResult.h"
#include "model/DeleteDataLimitRequest.h"
#include "model/DeleteDataLimitResult.h"
#include "model/DeleteRuleRequest.h"
#include "model/DeleteRuleResult.h"
#include "model/DescribeAccountDetailRequest.h"
#include "model/DescribeAccountDetailResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeColumnsRequest.h"
#include "model/DescribeColumnsResult.h"
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
#include "model/DescribeDataLimitsInstanceDimRequest.h"
#include "model/DescribeDataLimitsInstanceDimResult.h"
#include "model/DescribeDataMaskingRunHistoryRequest.h"
#include "model/DescribeDataMaskingRunHistoryResult.h"
#include "model/DescribeDataMaskingTasksRequest.h"
#include "model/DescribeDataMaskingTasksResult.h"
#include "model/DescribeDataTotalCountRequest.h"
#include "model/DescribeDataTotalCountResult.h"
#include "model/DescribeEventDetailRequest.h"
#include "model/DescribeEventDetailResult.h"
#include "model/DescribeEventTopRequest.h"
#include "model/DescribeEventTopResult.h"
#include "model/DescribeEventTypesRequest.h"
#include "model/DescribeEventTypesResult.h"
#include "model/DescribeEventTypesDetailRequest.h"
#include "model/DescribeEventTypesDetailResult.h"
#include "model/DescribeEventsRequest.h"
#include "model/DescribeEventsResult.h"
#include "model/DescribeInstancePortraitRequest.h"
#include "model/DescribeInstancePortraitResult.h"
#include "model/DescribeInstanceSourcesRequest.h"
#include "model/DescribeInstanceSourcesResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeOssObjectDetailRequest.h"
#include "model/DescribeOssObjectDetailResult.h"
#include "model/DescribeOssObjectsRequest.h"
#include "model/DescribeOssObjectsResult.h"
#include "model/DescribePackagesRequest.h"
#include "model/DescribePackagesResult.h"
#include "model/DescribeRiskLevelsRequest.h"
#include "model/DescribeRiskLevelsResult.h"
#include "model/DescribeRuleCategoryRequest.h"
#include "model/DescribeRuleCategoryResult.h"
#include "model/DescribeRulesRequest.h"
#include "model/DescribeRulesResult.h"
#include "model/DescribeTablesRequest.h"
#include "model/DescribeTablesResult.h"
#include "model/DescribeUserCountRequest.h"
#include "model/DescribeUserCountResult.h"
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
			typedef Outcome<Error, Model::BatchDeleteDataLimitResult> BatchDeleteDataLimitOutcome;
			typedef std::future<BatchDeleteDataLimitOutcome> BatchDeleteDataLimitOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::BatchDeleteDataLimitRequest&, const BatchDeleteDataLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDataLimitAsyncHandler;
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
			typedef Outcome<Error, Model::DeleteDataLimitResult> DeleteDataLimitOutcome;
			typedef std::future<DeleteDataLimitOutcome> DeleteDataLimitOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DeleteDataLimitRequest&, const DeleteDataLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataLimitAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleResult> DeleteRuleOutcome;
			typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DeleteRuleRequest&, const DeleteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountDetailResult> DescribeAccountDetailOutcome;
			typedef std::future<DescribeAccountDetailOutcome> DescribeAccountDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeAccountDetailRequest&, const DescribeAccountDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeColumnsResult> DescribeColumnsOutcome;
			typedef std::future<DescribeColumnsOutcome> DescribeColumnsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeColumnsRequest&, const DescribeColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnsAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeDataLimitsInstanceDimResult> DescribeDataLimitsInstanceDimOutcome;
			typedef std::future<DescribeDataLimitsInstanceDimOutcome> DescribeDataLimitsInstanceDimOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataLimitsInstanceDimRequest&, const DescribeDataLimitsInstanceDimOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLimitsInstanceDimAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataMaskingRunHistoryResult> DescribeDataMaskingRunHistoryOutcome;
			typedef std::future<DescribeDataMaskingRunHistoryOutcome> DescribeDataMaskingRunHistoryOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataMaskingRunHistoryRequest&, const DescribeDataMaskingRunHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataMaskingRunHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataMaskingTasksResult> DescribeDataMaskingTasksOutcome;
			typedef std::future<DescribeDataMaskingTasksOutcome> DescribeDataMaskingTasksOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataMaskingTasksRequest&, const DescribeDataMaskingTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataMaskingTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataTotalCountResult> DescribeDataTotalCountOutcome;
			typedef std::future<DescribeDataTotalCountOutcome> DescribeDataTotalCountOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataTotalCountRequest&, const DescribeDataTotalCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataTotalCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventDetailResult> DescribeEventDetailOutcome;
			typedef std::future<DescribeEventDetailOutcome> DescribeEventDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventDetailRequest&, const DescribeEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventTopResult> DescribeEventTopOutcome;
			typedef std::future<DescribeEventTopOutcome> DescribeEventTopOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventTopRequest&, const DescribeEventTopOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventTopAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventTypesResult> DescribeEventTypesOutcome;
			typedef std::future<DescribeEventTypesOutcome> DescribeEventTypesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventTypesRequest&, const DescribeEventTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventTypesDetailResult> DescribeEventTypesDetailOutcome;
			typedef std::future<DescribeEventTypesDetailOutcome> DescribeEventTypesDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventTypesDetailRequest&, const DescribeEventTypesDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventTypesDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventsResult> DescribeEventsOutcome;
			typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventsRequest&, const DescribeEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancePortraitResult> DescribeInstancePortraitOutcome;
			typedef std::future<DescribeInstancePortraitOutcome> DescribeInstancePortraitOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeInstancePortraitRequest&, const DescribeInstancePortraitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancePortraitAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSourcesResult> DescribeInstanceSourcesOutcome;
			typedef std::future<DescribeInstanceSourcesOutcome> DescribeInstanceSourcesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeInstanceSourcesRequest&, const DescribeInstanceSourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssObjectDetailResult> DescribeOssObjectDetailOutcome;
			typedef std::future<DescribeOssObjectDetailOutcome> DescribeOssObjectDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeOssObjectDetailRequest&, const DescribeOssObjectDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssObjectDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssObjectsResult> DescribeOssObjectsOutcome;
			typedef std::future<DescribeOssObjectsOutcome> DescribeOssObjectsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeOssObjectsRequest&, const DescribeOssObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssObjectsAsyncHandler;
			typedef Outcome<Error, Model::DescribePackagesResult> DescribePackagesOutcome;
			typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribePackagesRequest&, const DescribePackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskLevelsResult> DescribeRiskLevelsOutcome;
			typedef std::future<DescribeRiskLevelsOutcome> DescribeRiskLevelsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeRiskLevelsRequest&, const DescribeRiskLevelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskLevelsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRuleCategoryResult> DescribeRuleCategoryOutcome;
			typedef std::future<DescribeRuleCategoryOutcome> DescribeRuleCategoryOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeRuleCategoryRequest&, const DescribeRuleCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleCategoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeRulesResult> DescribeRulesOutcome;
			typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeRulesRequest&, const DescribeRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTablesResult> DescribeTablesOutcome;
			typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeTablesRequest&, const DescribeTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserCountResult> DescribeUserCountOutcome;
			typedef std::future<DescribeUserCountOutcome> DescribeUserCountOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeUserCountRequest&, const DescribeUserCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCountAsyncHandler;
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
			BatchDeleteDataLimitOutcome batchDeleteDataLimit(const Model::BatchDeleteDataLimitRequest &request)const;
			void batchDeleteDataLimitAsync(const Model::BatchDeleteDataLimitRequest& request, const BatchDeleteDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteDataLimitOutcomeCallable batchDeleteDataLimitCallable(const Model::BatchDeleteDataLimitRequest& request) const;
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
			DeleteDataLimitOutcome deleteDataLimit(const Model::DeleteDataLimitRequest &request)const;
			void deleteDataLimitAsync(const Model::DeleteDataLimitRequest& request, const DeleteDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataLimitOutcomeCallable deleteDataLimitCallable(const Model::DeleteDataLimitRequest& request) const;
			DeleteRuleOutcome deleteRule(const Model::DeleteRuleRequest &request)const;
			void deleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleOutcomeCallable deleteRuleCallable(const Model::DeleteRuleRequest& request) const;
			DescribeAccountDetailOutcome describeAccountDetail(const Model::DescribeAccountDetailRequest &request)const;
			void describeAccountDetailAsync(const Model::DescribeAccountDetailRequest& request, const DescribeAccountDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountDetailOutcomeCallable describeAccountDetailCallable(const Model::DescribeAccountDetailRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeColumnsOutcome describeColumns(const Model::DescribeColumnsRequest &request)const;
			void describeColumnsAsync(const Model::DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeColumnsOutcomeCallable describeColumnsCallable(const Model::DescribeColumnsRequest& request) const;
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
			DescribeDataLimitsInstanceDimOutcome describeDataLimitsInstanceDim(const Model::DescribeDataLimitsInstanceDimRequest &request)const;
			void describeDataLimitsInstanceDimAsync(const Model::DescribeDataLimitsInstanceDimRequest& request, const DescribeDataLimitsInstanceDimAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataLimitsInstanceDimOutcomeCallable describeDataLimitsInstanceDimCallable(const Model::DescribeDataLimitsInstanceDimRequest& request) const;
			DescribeDataMaskingRunHistoryOutcome describeDataMaskingRunHistory(const Model::DescribeDataMaskingRunHistoryRequest &request)const;
			void describeDataMaskingRunHistoryAsync(const Model::DescribeDataMaskingRunHistoryRequest& request, const DescribeDataMaskingRunHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataMaskingRunHistoryOutcomeCallable describeDataMaskingRunHistoryCallable(const Model::DescribeDataMaskingRunHistoryRequest& request) const;
			DescribeDataMaskingTasksOutcome describeDataMaskingTasks(const Model::DescribeDataMaskingTasksRequest &request)const;
			void describeDataMaskingTasksAsync(const Model::DescribeDataMaskingTasksRequest& request, const DescribeDataMaskingTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataMaskingTasksOutcomeCallable describeDataMaskingTasksCallable(const Model::DescribeDataMaskingTasksRequest& request) const;
			DescribeDataTotalCountOutcome describeDataTotalCount(const Model::DescribeDataTotalCountRequest &request)const;
			void describeDataTotalCountAsync(const Model::DescribeDataTotalCountRequest& request, const DescribeDataTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataTotalCountOutcomeCallable describeDataTotalCountCallable(const Model::DescribeDataTotalCountRequest& request) const;
			DescribeEventDetailOutcome describeEventDetail(const Model::DescribeEventDetailRequest &request)const;
			void describeEventDetailAsync(const Model::DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventDetailOutcomeCallable describeEventDetailCallable(const Model::DescribeEventDetailRequest& request) const;
			DescribeEventTopOutcome describeEventTop(const Model::DescribeEventTopRequest &request)const;
			void describeEventTopAsync(const Model::DescribeEventTopRequest& request, const DescribeEventTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventTopOutcomeCallable describeEventTopCallable(const Model::DescribeEventTopRequest& request) const;
			DescribeEventTypesOutcome describeEventTypes(const Model::DescribeEventTypesRequest &request)const;
			void describeEventTypesAsync(const Model::DescribeEventTypesRequest& request, const DescribeEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventTypesOutcomeCallable describeEventTypesCallable(const Model::DescribeEventTypesRequest& request) const;
			DescribeEventTypesDetailOutcome describeEventTypesDetail(const Model::DescribeEventTypesDetailRequest &request)const;
			void describeEventTypesDetailAsync(const Model::DescribeEventTypesDetailRequest& request, const DescribeEventTypesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventTypesDetailOutcomeCallable describeEventTypesDetailCallable(const Model::DescribeEventTypesDetailRequest& request) const;
			DescribeEventsOutcome describeEvents(const Model::DescribeEventsRequest &request)const;
			void describeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventsOutcomeCallable describeEventsCallable(const Model::DescribeEventsRequest& request) const;
			DescribeInstancePortraitOutcome describeInstancePortrait(const Model::DescribeInstancePortraitRequest &request)const;
			void describeInstancePortraitAsync(const Model::DescribeInstancePortraitRequest& request, const DescribeInstancePortraitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancePortraitOutcomeCallable describeInstancePortraitCallable(const Model::DescribeInstancePortraitRequest& request) const;
			DescribeInstanceSourcesOutcome describeInstanceSources(const Model::DescribeInstanceSourcesRequest &request)const;
			void describeInstanceSourcesAsync(const Model::DescribeInstanceSourcesRequest& request, const DescribeInstanceSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSourcesOutcomeCallable describeInstanceSourcesCallable(const Model::DescribeInstanceSourcesRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeOssObjectDetailOutcome describeOssObjectDetail(const Model::DescribeOssObjectDetailRequest &request)const;
			void describeOssObjectDetailAsync(const Model::DescribeOssObjectDetailRequest& request, const DescribeOssObjectDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssObjectDetailOutcomeCallable describeOssObjectDetailCallable(const Model::DescribeOssObjectDetailRequest& request) const;
			DescribeOssObjectsOutcome describeOssObjects(const Model::DescribeOssObjectsRequest &request)const;
			void describeOssObjectsAsync(const Model::DescribeOssObjectsRequest& request, const DescribeOssObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssObjectsOutcomeCallable describeOssObjectsCallable(const Model::DescribeOssObjectsRequest& request) const;
			DescribePackagesOutcome describePackages(const Model::DescribePackagesRequest &request)const;
			void describePackagesAsync(const Model::DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePackagesOutcomeCallable describePackagesCallable(const Model::DescribePackagesRequest& request) const;
			DescribeRiskLevelsOutcome describeRiskLevels(const Model::DescribeRiskLevelsRequest &request)const;
			void describeRiskLevelsAsync(const Model::DescribeRiskLevelsRequest& request, const DescribeRiskLevelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskLevelsOutcomeCallable describeRiskLevelsCallable(const Model::DescribeRiskLevelsRequest& request) const;
			DescribeRuleCategoryOutcome describeRuleCategory(const Model::DescribeRuleCategoryRequest &request)const;
			void describeRuleCategoryAsync(const Model::DescribeRuleCategoryRequest& request, const DescribeRuleCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRuleCategoryOutcomeCallable describeRuleCategoryCallable(const Model::DescribeRuleCategoryRequest& request) const;
			DescribeRulesOutcome describeRules(const Model::DescribeRulesRequest &request)const;
			void describeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRulesOutcomeCallable describeRulesCallable(const Model::DescribeRulesRequest& request) const;
			DescribeTablesOutcome describeTables(const Model::DescribeTablesRequest &request)const;
			void describeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTablesOutcomeCallable describeTablesCallable(const Model::DescribeTablesRequest& request) const;
			DescribeUserCountOutcome describeUserCount(const Model::DescribeUserCountRequest &request)const;
			void describeUserCountAsync(const Model::DescribeUserCountRequest& request, const DescribeUserCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserCountOutcomeCallable describeUserCountCallable(const Model::DescribeUserCountRequest& request) const;
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
