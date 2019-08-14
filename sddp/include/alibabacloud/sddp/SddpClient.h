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
#include "model/DescribeOssObjectDetailRequest.h"
#include "model/DescribeOssObjectDetailResult.h"
#include "model/CreateConfigRequest.h"
#include "model/CreateConfigResult.h"
#include "model/DescribeEventTypesRequest.h"
#include "model/DescribeEventTypesResult.h"
#include "model/ModifyEventStatusRequest.h"
#include "model/ModifyEventStatusResult.h"
#include "model/DescribePackagesRequest.h"
#include "model/DescribePackagesResult.h"
#include "model/DescribeConfigsRequest.h"
#include "model/DescribeConfigsResult.h"
#include "model/DescribeAuthAccountsRequest.h"
#include "model/DescribeAuthAccountsResult.h"
#include "model/ValidateConnectorRequest.h"
#include "model/ValidateConnectorResult.h"
#include "model/DescribeDataAssetsRequest.h"
#include "model/DescribeDataAssetsResult.h"
#include "model/DescribeCloudDatabasesRequest.h"
#include "model/DescribeCloudDatabasesResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/CreateUserAuthRequest.h"
#include "model/CreateUserAuthResult.h"
#include "model/DeleteRuleRequest.h"
#include "model/DeleteRuleResult.h"
#include "model/DescribeDataHubConnectorsRequest.h"
#include "model/DescribeDataHubConnectorsResult.h"
#include "model/DescribeColumnsRequest.h"
#include "model/DescribeColumnsResult.h"
#include "model/DescribeDataLimitDetailRequest.h"
#include "model/DescribeDataLimitDetailResult.h"
#include "model/DescribeRulesRequest.h"
#include "model/DescribeRulesResult.h"
#include "model/DeleteDataLimitRequest.h"
#include "model/DeleteDataLimitResult.h"
#include "model/ModifyRuleStatusRequest.h"
#include "model/ModifyRuleStatusResult.h"
#include "model/DescribeAccountDetailRequest.h"
#include "model/DescribeAccountDetailResult.h"
#include "model/DescribeDepartsRequest.h"
#include "model/DescribeDepartsResult.h"
#include "model/DescribeDataHubSubscriptionsRequest.h"
#include "model/DescribeDataHubSubscriptionsResult.h"
#include "model/DescribeDataHubTopicsRequest.h"
#include "model/DescribeDataHubTopicsResult.h"
#include "model/DescribeCloudInstancesRequest.h"
#include "model/DescribeCloudInstancesResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeOssObjectsRequest.h"
#include "model/DescribeOssObjectsResult.h"
#include "model/DescribeDataLimitsRequest.h"
#include "model/DescribeDataLimitsResult.h"
#include "model/DescribeEventsRequest.h"
#include "model/DescribeEventsResult.h"
#include "model/CreateDataLimitRequest.h"
#include "model/CreateDataLimitResult.h"
#include "model/ModifyRuleRequest.h"
#include "model/ModifyRuleResult.h"
#include "model/DescribeEventDetailRequest.h"
#include "model/DescribeEventDetailResult.h"
#include "model/ModifyDataLimitRequest.h"
#include "model/ModifyDataLimitResult.h"
#include "model/DescribeTablesRequest.h"
#include "model/DescribeTablesResult.h"
#include "model/DescribePrivilegesRequest.h"
#include "model/DescribePrivilegesResult.h"
#include "model/DescribeDataHubProjectsRequest.h"
#include "model/DescribeDataHubProjectsResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/ModifyEventTypeStatusRequest.h"
#include "model/ModifyEventTypeStatusResult.h"
#include "model/ModifyDefaultLevelRequest.h"
#include "model/ModifyDefaultLevelResult.h"
#include "model/DescribeUserStatusRequest.h"
#include "model/DescribeUserStatusResult.h"


namespace AlibabaCloud
{
	namespace Sddp
	{
		class ALIBABACLOUD_SDDP_EXPORT SddpClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeOssObjectDetailResult> DescribeOssObjectDetailOutcome;
			typedef std::future<DescribeOssObjectDetailOutcome> DescribeOssObjectDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeOssObjectDetailRequest&, const DescribeOssObjectDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssObjectDetailAsyncHandler;
			typedef Outcome<Error, Model::CreateConfigResult> CreateConfigOutcome;
			typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::CreateConfigRequest&, const CreateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventTypesResult> DescribeEventTypesOutcome;
			typedef std::future<DescribeEventTypesOutcome> DescribeEventTypesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventTypesRequest&, const DescribeEventTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventTypesAsyncHandler;
			typedef Outcome<Error, Model::ModifyEventStatusResult> ModifyEventStatusOutcome;
			typedef std::future<ModifyEventStatusOutcome> ModifyEventStatusOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyEventStatusRequest&, const ModifyEventStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribePackagesResult> DescribePackagesOutcome;
			typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribePackagesRequest&, const DescribePackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigsResult> DescribeConfigsOutcome;
			typedef std::future<DescribeConfigsOutcome> DescribeConfigsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeConfigsRequest&, const DescribeConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuthAccountsResult> DescribeAuthAccountsOutcome;
			typedef std::future<DescribeAuthAccountsOutcome> DescribeAuthAccountsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeAuthAccountsRequest&, const DescribeAuthAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthAccountsAsyncHandler;
			typedef Outcome<Error, Model::ValidateConnectorResult> ValidateConnectorOutcome;
			typedef std::future<ValidateConnectorOutcome> ValidateConnectorOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ValidateConnectorRequest&, const ValidateConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateConnectorAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataAssetsResult> DescribeDataAssetsOutcome;
			typedef std::future<DescribeDataAssetsOutcome> DescribeDataAssetsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataAssetsRequest&, const DescribeDataAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataAssetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudDatabasesResult> DescribeCloudDatabasesOutcome;
			typedef std::future<DescribeCloudDatabasesOutcome> DescribeCloudDatabasesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeCloudDatabasesRequest&, const DescribeCloudDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudDatabasesAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleResult> CreateRuleOutcome;
			typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::CreateRuleRequest&, const CreateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateUserAuthResult> CreateUserAuthOutcome;
			typedef std::future<CreateUserAuthOutcome> CreateUserAuthOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::CreateUserAuthRequest&, const CreateUserAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAuthAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleResult> DeleteRuleOutcome;
			typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DeleteRuleRequest&, const DeleteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataHubConnectorsResult> DescribeDataHubConnectorsOutcome;
			typedef std::future<DescribeDataHubConnectorsOutcome> DescribeDataHubConnectorsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataHubConnectorsRequest&, const DescribeDataHubConnectorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataHubConnectorsAsyncHandler;
			typedef Outcome<Error, Model::DescribeColumnsResult> DescribeColumnsOutcome;
			typedef std::future<DescribeColumnsOutcome> DescribeColumnsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeColumnsRequest&, const DescribeColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataLimitDetailResult> DescribeDataLimitDetailOutcome;
			typedef std::future<DescribeDataLimitDetailOutcome> DescribeDataLimitDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataLimitDetailRequest&, const DescribeDataLimitDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLimitDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeRulesResult> DescribeRulesOutcome;
			typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeRulesRequest&, const DescribeRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataLimitResult> DeleteDataLimitOutcome;
			typedef std::future<DeleteDataLimitOutcome> DeleteDataLimitOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DeleteDataLimitRequest&, const DeleteDataLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataLimitAsyncHandler;
			typedef Outcome<Error, Model::ModifyRuleStatusResult> ModifyRuleStatusOutcome;
			typedef std::future<ModifyRuleStatusOutcome> ModifyRuleStatusOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyRuleStatusRequest&, const ModifyRuleStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountDetailResult> DescribeAccountDetailOutcome;
			typedef std::future<DescribeAccountDetailOutcome> DescribeAccountDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeAccountDetailRequest&, const DescribeAccountDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDepartsResult> DescribeDepartsOutcome;
			typedef std::future<DescribeDepartsOutcome> DescribeDepartsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDepartsRequest&, const DescribeDepartsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDepartsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataHubSubscriptionsResult> DescribeDataHubSubscriptionsOutcome;
			typedef std::future<DescribeDataHubSubscriptionsOutcome> DescribeDataHubSubscriptionsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataHubSubscriptionsRequest&, const DescribeDataHubSubscriptionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataHubSubscriptionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataHubTopicsResult> DescribeDataHubTopicsOutcome;
			typedef std::future<DescribeDataHubTopicsOutcome> DescribeDataHubTopicsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataHubTopicsRequest&, const DescribeDataHubTopicsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataHubTopicsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudInstancesResult> DescribeCloudInstancesOutcome;
			typedef std::future<DescribeCloudInstancesOutcome> DescribeCloudInstancesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeCloudInstancesRequest&, const DescribeCloudInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssObjectsResult> DescribeOssObjectsOutcome;
			typedef std::future<DescribeOssObjectsOutcome> DescribeOssObjectsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeOssObjectsRequest&, const DescribeOssObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssObjectsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataLimitsResult> DescribeDataLimitsOutcome;
			typedef std::future<DescribeDataLimitsOutcome> DescribeDataLimitsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataLimitsRequest&, const DescribeDataLimitsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLimitsAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventsResult> DescribeEventsOutcome;
			typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventsRequest&, const DescribeEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
			typedef Outcome<Error, Model::CreateDataLimitResult> CreateDataLimitOutcome;
			typedef std::future<CreateDataLimitOutcome> CreateDataLimitOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::CreateDataLimitRequest&, const CreateDataLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataLimitAsyncHandler;
			typedef Outcome<Error, Model::ModifyRuleResult> ModifyRuleOutcome;
			typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyRuleRequest&, const ModifyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventDetailResult> DescribeEventDetailOutcome;
			typedef std::future<DescribeEventDetailOutcome> DescribeEventDetailOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeEventDetailRequest&, const DescribeEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventDetailAsyncHandler;
			typedef Outcome<Error, Model::ModifyDataLimitResult> ModifyDataLimitOutcome;
			typedef std::future<ModifyDataLimitOutcome> ModifyDataLimitOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyDataLimitRequest&, const ModifyDataLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDataLimitAsyncHandler;
			typedef Outcome<Error, Model::DescribeTablesResult> DescribeTablesOutcome;
			typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeTablesRequest&, const DescribeTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribePrivilegesResult> DescribePrivilegesOutcome;
			typedef std::future<DescribePrivilegesOutcome> DescribePrivilegesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribePrivilegesRequest&, const DescribePrivilegesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivilegesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataHubProjectsResult> DescribeDataHubProjectsOutcome;
			typedef std::future<DescribeDataHubProjectsOutcome> DescribeDataHubProjectsOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeDataHubProjectsRequest&, const DescribeDataHubProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataHubProjectsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::ModifyEventTypeStatusResult> ModifyEventTypeStatusOutcome;
			typedef std::future<ModifyEventTypeStatusOutcome> ModifyEventTypeStatusOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyEventTypeStatusRequest&, const ModifyEventTypeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventTypeStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyDefaultLevelResult> ModifyDefaultLevelOutcome;
			typedef std::future<ModifyDefaultLevelOutcome> ModifyDefaultLevelOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::ModifyDefaultLevelRequest&, const ModifyDefaultLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultLevelAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserStatusResult> DescribeUserStatusOutcome;
			typedef std::future<DescribeUserStatusOutcome> DescribeUserStatusOutcomeCallable;
			typedef std::function<void(const SddpClient*, const Model::DescribeUserStatusRequest&, const DescribeUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserStatusAsyncHandler;

			SddpClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SddpClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SddpClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SddpClient();
			DescribeOssObjectDetailOutcome describeOssObjectDetail(const Model::DescribeOssObjectDetailRequest &request)const;
			void describeOssObjectDetailAsync(const Model::DescribeOssObjectDetailRequest& request, const DescribeOssObjectDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssObjectDetailOutcomeCallable describeOssObjectDetailCallable(const Model::DescribeOssObjectDetailRequest& request) const;
			CreateConfigOutcome createConfig(const Model::CreateConfigRequest &request)const;
			void createConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConfigOutcomeCallable createConfigCallable(const Model::CreateConfigRequest& request) const;
			DescribeEventTypesOutcome describeEventTypes(const Model::DescribeEventTypesRequest &request)const;
			void describeEventTypesAsync(const Model::DescribeEventTypesRequest& request, const DescribeEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventTypesOutcomeCallable describeEventTypesCallable(const Model::DescribeEventTypesRequest& request) const;
			ModifyEventStatusOutcome modifyEventStatus(const Model::ModifyEventStatusRequest &request)const;
			void modifyEventStatusAsync(const Model::ModifyEventStatusRequest& request, const ModifyEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEventStatusOutcomeCallable modifyEventStatusCallable(const Model::ModifyEventStatusRequest& request) const;
			DescribePackagesOutcome describePackages(const Model::DescribePackagesRequest &request)const;
			void describePackagesAsync(const Model::DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePackagesOutcomeCallable describePackagesCallable(const Model::DescribePackagesRequest& request) const;
			DescribeConfigsOutcome describeConfigs(const Model::DescribeConfigsRequest &request)const;
			void describeConfigsAsync(const Model::DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigsOutcomeCallable describeConfigsCallable(const Model::DescribeConfigsRequest& request) const;
			DescribeAuthAccountsOutcome describeAuthAccounts(const Model::DescribeAuthAccountsRequest &request)const;
			void describeAuthAccountsAsync(const Model::DescribeAuthAccountsRequest& request, const DescribeAuthAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuthAccountsOutcomeCallable describeAuthAccountsCallable(const Model::DescribeAuthAccountsRequest& request) const;
			ValidateConnectorOutcome validateConnector(const Model::ValidateConnectorRequest &request)const;
			void validateConnectorAsync(const Model::ValidateConnectorRequest& request, const ValidateConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateConnectorOutcomeCallable validateConnectorCallable(const Model::ValidateConnectorRequest& request) const;
			DescribeDataAssetsOutcome describeDataAssets(const Model::DescribeDataAssetsRequest &request)const;
			void describeDataAssetsAsync(const Model::DescribeDataAssetsRequest& request, const DescribeDataAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataAssetsOutcomeCallable describeDataAssetsCallable(const Model::DescribeDataAssetsRequest& request) const;
			DescribeCloudDatabasesOutcome describeCloudDatabases(const Model::DescribeCloudDatabasesRequest &request)const;
			void describeCloudDatabasesAsync(const Model::DescribeCloudDatabasesRequest& request, const DescribeCloudDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudDatabasesOutcomeCallable describeCloudDatabasesCallable(const Model::DescribeCloudDatabasesRequest& request) const;
			CreateRuleOutcome createRule(const Model::CreateRuleRequest &request)const;
			void createRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleOutcomeCallable createRuleCallable(const Model::CreateRuleRequest& request) const;
			CreateUserAuthOutcome createUserAuth(const Model::CreateUserAuthRequest &request)const;
			void createUserAuthAsync(const Model::CreateUserAuthRequest& request, const CreateUserAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserAuthOutcomeCallable createUserAuthCallable(const Model::CreateUserAuthRequest& request) const;
			DeleteRuleOutcome deleteRule(const Model::DeleteRuleRequest &request)const;
			void deleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleOutcomeCallable deleteRuleCallable(const Model::DeleteRuleRequest& request) const;
			DescribeDataHubConnectorsOutcome describeDataHubConnectors(const Model::DescribeDataHubConnectorsRequest &request)const;
			void describeDataHubConnectorsAsync(const Model::DescribeDataHubConnectorsRequest& request, const DescribeDataHubConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataHubConnectorsOutcomeCallable describeDataHubConnectorsCallable(const Model::DescribeDataHubConnectorsRequest& request) const;
			DescribeColumnsOutcome describeColumns(const Model::DescribeColumnsRequest &request)const;
			void describeColumnsAsync(const Model::DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeColumnsOutcomeCallable describeColumnsCallable(const Model::DescribeColumnsRequest& request) const;
			DescribeDataLimitDetailOutcome describeDataLimitDetail(const Model::DescribeDataLimitDetailRequest &request)const;
			void describeDataLimitDetailAsync(const Model::DescribeDataLimitDetailRequest& request, const DescribeDataLimitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataLimitDetailOutcomeCallable describeDataLimitDetailCallable(const Model::DescribeDataLimitDetailRequest& request) const;
			DescribeRulesOutcome describeRules(const Model::DescribeRulesRequest &request)const;
			void describeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRulesOutcomeCallable describeRulesCallable(const Model::DescribeRulesRequest& request) const;
			DeleteDataLimitOutcome deleteDataLimit(const Model::DeleteDataLimitRequest &request)const;
			void deleteDataLimitAsync(const Model::DeleteDataLimitRequest& request, const DeleteDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataLimitOutcomeCallable deleteDataLimitCallable(const Model::DeleteDataLimitRequest& request) const;
			ModifyRuleStatusOutcome modifyRuleStatus(const Model::ModifyRuleStatusRequest &request)const;
			void modifyRuleStatusAsync(const Model::ModifyRuleStatusRequest& request, const ModifyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRuleStatusOutcomeCallable modifyRuleStatusCallable(const Model::ModifyRuleStatusRequest& request) const;
			DescribeAccountDetailOutcome describeAccountDetail(const Model::DescribeAccountDetailRequest &request)const;
			void describeAccountDetailAsync(const Model::DescribeAccountDetailRequest& request, const DescribeAccountDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountDetailOutcomeCallable describeAccountDetailCallable(const Model::DescribeAccountDetailRequest& request) const;
			DescribeDepartsOutcome describeDeparts(const Model::DescribeDepartsRequest &request)const;
			void describeDepartsAsync(const Model::DescribeDepartsRequest& request, const DescribeDepartsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDepartsOutcomeCallable describeDepartsCallable(const Model::DescribeDepartsRequest& request) const;
			DescribeDataHubSubscriptionsOutcome describeDataHubSubscriptions(const Model::DescribeDataHubSubscriptionsRequest &request)const;
			void describeDataHubSubscriptionsAsync(const Model::DescribeDataHubSubscriptionsRequest& request, const DescribeDataHubSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataHubSubscriptionsOutcomeCallable describeDataHubSubscriptionsCallable(const Model::DescribeDataHubSubscriptionsRequest& request) const;
			DescribeDataHubTopicsOutcome describeDataHubTopics(const Model::DescribeDataHubTopicsRequest &request)const;
			void describeDataHubTopicsAsync(const Model::DescribeDataHubTopicsRequest& request, const DescribeDataHubTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataHubTopicsOutcomeCallable describeDataHubTopicsCallable(const Model::DescribeDataHubTopicsRequest& request) const;
			DescribeCloudInstancesOutcome describeCloudInstances(const Model::DescribeCloudInstancesRequest &request)const;
			void describeCloudInstancesAsync(const Model::DescribeCloudInstancesRequest& request, const DescribeCloudInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudInstancesOutcomeCallable describeCloudInstancesCallable(const Model::DescribeCloudInstancesRequest& request) const;
			DescribeAccountsOutcome describeAccounts(const Model::DescribeAccountsRequest &request)const;
			void describeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountsOutcomeCallable describeAccountsCallable(const Model::DescribeAccountsRequest& request) const;
			DescribeOssObjectsOutcome describeOssObjects(const Model::DescribeOssObjectsRequest &request)const;
			void describeOssObjectsAsync(const Model::DescribeOssObjectsRequest& request, const DescribeOssObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssObjectsOutcomeCallable describeOssObjectsCallable(const Model::DescribeOssObjectsRequest& request) const;
			DescribeDataLimitsOutcome describeDataLimits(const Model::DescribeDataLimitsRequest &request)const;
			void describeDataLimitsAsync(const Model::DescribeDataLimitsRequest& request, const DescribeDataLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataLimitsOutcomeCallable describeDataLimitsCallable(const Model::DescribeDataLimitsRequest& request) const;
			DescribeEventsOutcome describeEvents(const Model::DescribeEventsRequest &request)const;
			void describeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventsOutcomeCallable describeEventsCallable(const Model::DescribeEventsRequest& request) const;
			CreateDataLimitOutcome createDataLimit(const Model::CreateDataLimitRequest &request)const;
			void createDataLimitAsync(const Model::CreateDataLimitRequest& request, const CreateDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataLimitOutcomeCallable createDataLimitCallable(const Model::CreateDataLimitRequest& request) const;
			ModifyRuleOutcome modifyRule(const Model::ModifyRuleRequest &request)const;
			void modifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRuleOutcomeCallable modifyRuleCallable(const Model::ModifyRuleRequest& request) const;
			DescribeEventDetailOutcome describeEventDetail(const Model::DescribeEventDetailRequest &request)const;
			void describeEventDetailAsync(const Model::DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventDetailOutcomeCallable describeEventDetailCallable(const Model::DescribeEventDetailRequest& request) const;
			ModifyDataLimitOutcome modifyDataLimit(const Model::ModifyDataLimitRequest &request)const;
			void modifyDataLimitAsync(const Model::ModifyDataLimitRequest& request, const ModifyDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDataLimitOutcomeCallable modifyDataLimitCallable(const Model::ModifyDataLimitRequest& request) const;
			DescribeTablesOutcome describeTables(const Model::DescribeTablesRequest &request)const;
			void describeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTablesOutcomeCallable describeTablesCallable(const Model::DescribeTablesRequest& request) const;
			DescribePrivilegesOutcome describePrivileges(const Model::DescribePrivilegesRequest &request)const;
			void describePrivilegesAsync(const Model::DescribePrivilegesRequest& request, const DescribePrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePrivilegesOutcomeCallable describePrivilegesCallable(const Model::DescribePrivilegesRequest& request) const;
			DescribeDataHubProjectsOutcome describeDataHubProjects(const Model::DescribeDataHubProjectsRequest &request)const;
			void describeDataHubProjectsAsync(const Model::DescribeDataHubProjectsRequest& request, const DescribeDataHubProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataHubProjectsOutcomeCallable describeDataHubProjectsCallable(const Model::DescribeDataHubProjectsRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			ModifyEventTypeStatusOutcome modifyEventTypeStatus(const Model::ModifyEventTypeStatusRequest &request)const;
			void modifyEventTypeStatusAsync(const Model::ModifyEventTypeStatusRequest& request, const ModifyEventTypeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEventTypeStatusOutcomeCallable modifyEventTypeStatusCallable(const Model::ModifyEventTypeStatusRequest& request) const;
			ModifyDefaultLevelOutcome modifyDefaultLevel(const Model::ModifyDefaultLevelRequest &request)const;
			void modifyDefaultLevelAsync(const Model::ModifyDefaultLevelRequest& request, const ModifyDefaultLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDefaultLevelOutcomeCallable modifyDefaultLevelCallable(const Model::ModifyDefaultLevelRequest& request) const;
			DescribeUserStatusOutcome describeUserStatus(const Model::DescribeUserStatusRequest &request)const;
			void describeUserStatusAsync(const Model::DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserStatusOutcomeCallable describeUserStatusCallable(const Model::DescribeUserStatusRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SDDP_SDDPCLIENT_H_
