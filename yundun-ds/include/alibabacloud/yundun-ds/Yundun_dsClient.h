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

#ifndef ALIBABACLOUD_YUNDUN_DS_YUNDUN_DSCLIENT_H_
#define ALIBABACLOUD_YUNDUN_DS_YUNDUN_DSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Yundun_dsExport.h"
#include "model/CreateConfigRequest.h"
#include "model/CreateConfigResult.h"
#include "model/CreateDataLimitRequest.h"
#include "model/CreateDataLimitResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/CreateUserAuthRequest.h"
#include "model/CreateUserAuthResult.h"
#include "model/DeleteDataLimitRequest.h"
#include "model/DeleteDataLimitResult.h"
#include "model/DeleteRuleRequest.h"
#include "model/DeleteRuleResult.h"
#include "model/DescribeAccountDetailRequest.h"
#include "model/DescribeAccountDetailResult.h"
#include "model/DescribeAccountsRequest.h"
#include "model/DescribeAccountsResult.h"
#include "model/DescribeAuthAccountsRequest.h"
#include "model/DescribeAuthAccountsResult.h"
#include "model/DescribeColumnsRequest.h"
#include "model/DescribeColumnsResult.h"
#include "model/DescribeConditionsRequest.h"
#include "model/DescribeConditionsResult.h"
#include "model/DescribeConfigsRequest.h"
#include "model/DescribeConfigsResult.h"
#include "model/DescribeDataAssetsRequest.h"
#include "model/DescribeDataAssetsResult.h"
#include "model/DescribeDataCountsRequest.h"
#include "model/DescribeDataCountsResult.h"
#include "model/DescribeDataHubConnectorsRequest.h"
#include "model/DescribeDataHubConnectorsResult.h"
#include "model/DescribeDataHubProjectsRequest.h"
#include "model/DescribeDataHubProjectsResult.h"
#include "model/DescribeDataHubSubscriptionsRequest.h"
#include "model/DescribeDataHubSubscriptionsResult.h"
#include "model/DescribeDataHubTopicsRequest.h"
#include "model/DescribeDataHubTopicsResult.h"
#include "model/DescribeDataLimitSetRequest.h"
#include "model/DescribeDataLimitSetResult.h"
#include "model/DescribeDataTotalCountRequest.h"
#include "model/DescribeDataTotalCountResult.h"
#include "model/DescribeDepartCountsRequest.h"
#include "model/DescribeDepartCountsResult.h"
#include "model/DescribeDepartTotalCountRequest.h"
#include "model/DescribeDepartTotalCountResult.h"
#include "model/DescribeDepartsRequest.h"
#include "model/DescribeDepartsResult.h"
#include "model/DescribeEventCountsRequest.h"
#include "model/DescribeEventCountsResult.h"
#include "model/DescribeEventDetailRequest.h"
#include "model/DescribeEventDetailResult.h"
#include "model/DescribeEventTotalCountRequest.h"
#include "model/DescribeEventTotalCountResult.h"
#include "model/DescribeEventTypesRequest.h"
#include "model/DescribeEventTypesResult.h"
#include "model/DescribeEventsRequest.h"
#include "model/DescribeEventsResult.h"
#include "model/DescribeFlowTotalCountRequest.h"
#include "model/DescribeFlowTotalCountResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeOssObjectDetailRequest.h"
#include "model/DescribeOssObjectDetailResult.h"
#include "model/DescribeOssObjectsRequest.h"
#include "model/DescribeOssObjectsResult.h"
#include "model/DescribePackagesRequest.h"
#include "model/DescribePackagesResult.h"
#include "model/DescribePrivilegesRequest.h"
#include "model/DescribePrivilegesResult.h"
#include "model/DescribeRuleTotalCountRequest.h"
#include "model/DescribeRuleTotalCountResult.h"
#include "model/DescribeRulesRequest.h"
#include "model/DescribeRulesResult.h"
#include "model/DescribeTablesRequest.h"
#include "model/DescribeTablesResult.h"
#include "model/DescribeTotalCountRequest.h"
#include "model/DescribeTotalCountResult.h"
#include "model/DescribeTransferEventCountsRequest.h"
#include "model/DescribeTransferEventCountsResult.h"
#include "model/DescribeUserStatusRequest.h"
#include "model/DescribeUserStatusResult.h"
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
#include "model/ValidateConnectorRequest.h"
#include "model/ValidateConnectorResult.h"


namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		class ALIBABACLOUD_YUNDUN_DS_EXPORT Yundun_dsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateConfigResult> CreateConfigOutcome;
			typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::CreateConfigRequest&, const CreateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateDataLimitResult> CreateDataLimitOutcome;
			typedef std::future<CreateDataLimitOutcome> CreateDataLimitOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::CreateDataLimitRequest&, const CreateDataLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataLimitAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleResult> CreateRuleOutcome;
			typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::CreateRuleRequest&, const CreateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateUserAuthResult> CreateUserAuthOutcome;
			typedef std::future<CreateUserAuthOutcome> CreateUserAuthOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::CreateUserAuthRequest&, const CreateUserAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAuthAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataLimitResult> DeleteDataLimitOutcome;
			typedef std::future<DeleteDataLimitOutcome> DeleteDataLimitOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DeleteDataLimitRequest&, const DeleteDataLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataLimitAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleResult> DeleteRuleOutcome;
			typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DeleteRuleRequest&, const DeleteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountDetailResult> DescribeAccountDetailOutcome;
			typedef std::future<DescribeAccountDetailOutcome> DescribeAccountDetailOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeAccountDetailRequest&, const DescribeAccountDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountsResult> DescribeAccountsOutcome;
			typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeAccountsRequest&, const DescribeAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuthAccountsResult> DescribeAuthAccountsOutcome;
			typedef std::future<DescribeAuthAccountsOutcome> DescribeAuthAccountsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeAuthAccountsRequest&, const DescribeAuthAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeColumnsResult> DescribeColumnsOutcome;
			typedef std::future<DescribeColumnsOutcome> DescribeColumnsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeColumnsRequest&, const DescribeColumnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeColumnsAsyncHandler;
			typedef Outcome<Error, Model::DescribeConditionsResult> DescribeConditionsOutcome;
			typedef std::future<DescribeConditionsOutcome> DescribeConditionsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeConditionsRequest&, const DescribeConditionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConditionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigsResult> DescribeConfigsOutcome;
			typedef std::future<DescribeConfigsOutcome> DescribeConfigsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeConfigsRequest&, const DescribeConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataAssetsResult> DescribeDataAssetsOutcome;
			typedef std::future<DescribeDataAssetsOutcome> DescribeDataAssetsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDataAssetsRequest&, const DescribeDataAssetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataAssetsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataCountsResult> DescribeDataCountsOutcome;
			typedef std::future<DescribeDataCountsOutcome> DescribeDataCountsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDataCountsRequest&, const DescribeDataCountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataHubConnectorsResult> DescribeDataHubConnectorsOutcome;
			typedef std::future<DescribeDataHubConnectorsOutcome> DescribeDataHubConnectorsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDataHubConnectorsRequest&, const DescribeDataHubConnectorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataHubConnectorsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataHubProjectsResult> DescribeDataHubProjectsOutcome;
			typedef std::future<DescribeDataHubProjectsOutcome> DescribeDataHubProjectsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDataHubProjectsRequest&, const DescribeDataHubProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataHubProjectsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataHubSubscriptionsResult> DescribeDataHubSubscriptionsOutcome;
			typedef std::future<DescribeDataHubSubscriptionsOutcome> DescribeDataHubSubscriptionsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDataHubSubscriptionsRequest&, const DescribeDataHubSubscriptionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataHubSubscriptionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataHubTopicsResult> DescribeDataHubTopicsOutcome;
			typedef std::future<DescribeDataHubTopicsOutcome> DescribeDataHubTopicsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDataHubTopicsRequest&, const DescribeDataHubTopicsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataHubTopicsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataLimitSetResult> DescribeDataLimitSetOutcome;
			typedef std::future<DescribeDataLimitSetOutcome> DescribeDataLimitSetOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDataLimitSetRequest&, const DescribeDataLimitSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLimitSetAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataTotalCountResult> DescribeDataTotalCountOutcome;
			typedef std::future<DescribeDataTotalCountOutcome> DescribeDataTotalCountOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDataTotalCountRequest&, const DescribeDataTotalCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataTotalCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeDepartCountsResult> DescribeDepartCountsOutcome;
			typedef std::future<DescribeDepartCountsOutcome> DescribeDepartCountsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDepartCountsRequest&, const DescribeDepartCountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDepartCountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDepartTotalCountResult> DescribeDepartTotalCountOutcome;
			typedef std::future<DescribeDepartTotalCountOutcome> DescribeDepartTotalCountOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDepartTotalCountRequest&, const DescribeDepartTotalCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDepartTotalCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeDepartsResult> DescribeDepartsOutcome;
			typedef std::future<DescribeDepartsOutcome> DescribeDepartsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeDepartsRequest&, const DescribeDepartsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDepartsAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventCountsResult> DescribeEventCountsOutcome;
			typedef std::future<DescribeEventCountsOutcome> DescribeEventCountsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeEventCountsRequest&, const DescribeEventCountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventCountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventDetailResult> DescribeEventDetailOutcome;
			typedef std::future<DescribeEventDetailOutcome> DescribeEventDetailOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeEventDetailRequest&, const DescribeEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventTotalCountResult> DescribeEventTotalCountOutcome;
			typedef std::future<DescribeEventTotalCountOutcome> DescribeEventTotalCountOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeEventTotalCountRequest&, const DescribeEventTotalCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventTotalCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventTypesResult> DescribeEventTypesOutcome;
			typedef std::future<DescribeEventTypesOutcome> DescribeEventTypesOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeEventTypesRequest&, const DescribeEventTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventsResult> DescribeEventsOutcome;
			typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeEventsRequest&, const DescribeEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowTotalCountResult> DescribeFlowTotalCountOutcome;
			typedef std::future<DescribeFlowTotalCountOutcome> DescribeFlowTotalCountOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeFlowTotalCountRequest&, const DescribeFlowTotalCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowTotalCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssObjectDetailResult> DescribeOssObjectDetailOutcome;
			typedef std::future<DescribeOssObjectDetailOutcome> DescribeOssObjectDetailOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeOssObjectDetailRequest&, const DescribeOssObjectDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssObjectDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssObjectsResult> DescribeOssObjectsOutcome;
			typedef std::future<DescribeOssObjectsOutcome> DescribeOssObjectsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeOssObjectsRequest&, const DescribeOssObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssObjectsAsyncHandler;
			typedef Outcome<Error, Model::DescribePackagesResult> DescribePackagesOutcome;
			typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribePackagesRequest&, const DescribePackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackagesAsyncHandler;
			typedef Outcome<Error, Model::DescribePrivilegesResult> DescribePrivilegesOutcome;
			typedef std::future<DescribePrivilegesOutcome> DescribePrivilegesOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribePrivilegesRequest&, const DescribePrivilegesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivilegesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRuleTotalCountResult> DescribeRuleTotalCountOutcome;
			typedef std::future<DescribeRuleTotalCountOutcome> DescribeRuleTotalCountOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeRuleTotalCountRequest&, const DescribeRuleTotalCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleTotalCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeRulesResult> DescribeRulesOutcome;
			typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeRulesRequest&, const DescribeRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTablesResult> DescribeTablesOutcome;
			typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeTablesRequest&, const DescribeTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTotalCountResult> DescribeTotalCountOutcome;
			typedef std::future<DescribeTotalCountOutcome> DescribeTotalCountOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeTotalCountRequest&, const DescribeTotalCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTotalCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeTransferEventCountsResult> DescribeTransferEventCountsOutcome;
			typedef std::future<DescribeTransferEventCountsOutcome> DescribeTransferEventCountsOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeTransferEventCountsRequest&, const DescribeTransferEventCountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTransferEventCountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserStatusResult> DescribeUserStatusOutcome;
			typedef std::future<DescribeUserStatusOutcome> DescribeUserStatusOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::DescribeUserStatusRequest&, const DescribeUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyDefaultLevelResult> ModifyDefaultLevelOutcome;
			typedef std::future<ModifyDefaultLevelOutcome> ModifyDefaultLevelOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::ModifyDefaultLevelRequest&, const ModifyDefaultLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultLevelAsyncHandler;
			typedef Outcome<Error, Model::ModifyEventStatusResult> ModifyEventStatusOutcome;
			typedef std::future<ModifyEventStatusOutcome> ModifyEventStatusOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::ModifyEventStatusRequest&, const ModifyEventStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyEventTypeStatusResult> ModifyEventTypeStatusOutcome;
			typedef std::future<ModifyEventTypeStatusOutcome> ModifyEventTypeStatusOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::ModifyEventTypeStatusRequest&, const ModifyEventTypeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventTypeStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyRuleResult> ModifyRuleOutcome;
			typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::ModifyRuleRequest&, const ModifyRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyRuleStatusResult> ModifyRuleStatusOutcome;
			typedef std::future<ModifyRuleStatusOutcome> ModifyRuleStatusOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::ModifyRuleStatusRequest&, const ModifyRuleStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleStatusAsyncHandler;
			typedef Outcome<Error, Model::ValidateConnectorResult> ValidateConnectorOutcome;
			typedef std::future<ValidateConnectorOutcome> ValidateConnectorOutcomeCallable;
			typedef std::function<void(const Yundun_dsClient*, const Model::ValidateConnectorRequest&, const ValidateConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateConnectorAsyncHandler;

			Yundun_dsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Yundun_dsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Yundun_dsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Yundun_dsClient();
			CreateConfigOutcome createConfig(const Model::CreateConfigRequest &request)const;
			void createConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConfigOutcomeCallable createConfigCallable(const Model::CreateConfigRequest& request) const;
			CreateDataLimitOutcome createDataLimit(const Model::CreateDataLimitRequest &request)const;
			void createDataLimitAsync(const Model::CreateDataLimitRequest& request, const CreateDataLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataLimitOutcomeCallable createDataLimitCallable(const Model::CreateDataLimitRequest& request) const;
			CreateRuleOutcome createRule(const Model::CreateRuleRequest &request)const;
			void createRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleOutcomeCallable createRuleCallable(const Model::CreateRuleRequest& request) const;
			CreateUserAuthOutcome createUserAuth(const Model::CreateUserAuthRequest &request)const;
			void createUserAuthAsync(const Model::CreateUserAuthRequest& request, const CreateUserAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserAuthOutcomeCallable createUserAuthCallable(const Model::CreateUserAuthRequest& request) const;
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
			DescribeAuthAccountsOutcome describeAuthAccounts(const Model::DescribeAuthAccountsRequest &request)const;
			void describeAuthAccountsAsync(const Model::DescribeAuthAccountsRequest& request, const DescribeAuthAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuthAccountsOutcomeCallable describeAuthAccountsCallable(const Model::DescribeAuthAccountsRequest& request) const;
			DescribeColumnsOutcome describeColumns(const Model::DescribeColumnsRequest &request)const;
			void describeColumnsAsync(const Model::DescribeColumnsRequest& request, const DescribeColumnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeColumnsOutcomeCallable describeColumnsCallable(const Model::DescribeColumnsRequest& request) const;
			DescribeConditionsOutcome describeConditions(const Model::DescribeConditionsRequest &request)const;
			void describeConditionsAsync(const Model::DescribeConditionsRequest& request, const DescribeConditionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConditionsOutcomeCallable describeConditionsCallable(const Model::DescribeConditionsRequest& request) const;
			DescribeConfigsOutcome describeConfigs(const Model::DescribeConfigsRequest &request)const;
			void describeConfigsAsync(const Model::DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigsOutcomeCallable describeConfigsCallable(const Model::DescribeConfigsRequest& request) const;
			DescribeDataAssetsOutcome describeDataAssets(const Model::DescribeDataAssetsRequest &request)const;
			void describeDataAssetsAsync(const Model::DescribeDataAssetsRequest& request, const DescribeDataAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataAssetsOutcomeCallable describeDataAssetsCallable(const Model::DescribeDataAssetsRequest& request) const;
			DescribeDataCountsOutcome describeDataCounts(const Model::DescribeDataCountsRequest &request)const;
			void describeDataCountsAsync(const Model::DescribeDataCountsRequest& request, const DescribeDataCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataCountsOutcomeCallable describeDataCountsCallable(const Model::DescribeDataCountsRequest& request) const;
			DescribeDataHubConnectorsOutcome describeDataHubConnectors(const Model::DescribeDataHubConnectorsRequest &request)const;
			void describeDataHubConnectorsAsync(const Model::DescribeDataHubConnectorsRequest& request, const DescribeDataHubConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataHubConnectorsOutcomeCallable describeDataHubConnectorsCallable(const Model::DescribeDataHubConnectorsRequest& request) const;
			DescribeDataHubProjectsOutcome describeDataHubProjects(const Model::DescribeDataHubProjectsRequest &request)const;
			void describeDataHubProjectsAsync(const Model::DescribeDataHubProjectsRequest& request, const DescribeDataHubProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataHubProjectsOutcomeCallable describeDataHubProjectsCallable(const Model::DescribeDataHubProjectsRequest& request) const;
			DescribeDataHubSubscriptionsOutcome describeDataHubSubscriptions(const Model::DescribeDataHubSubscriptionsRequest &request)const;
			void describeDataHubSubscriptionsAsync(const Model::DescribeDataHubSubscriptionsRequest& request, const DescribeDataHubSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataHubSubscriptionsOutcomeCallable describeDataHubSubscriptionsCallable(const Model::DescribeDataHubSubscriptionsRequest& request) const;
			DescribeDataHubTopicsOutcome describeDataHubTopics(const Model::DescribeDataHubTopicsRequest &request)const;
			void describeDataHubTopicsAsync(const Model::DescribeDataHubTopicsRequest& request, const DescribeDataHubTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataHubTopicsOutcomeCallable describeDataHubTopicsCallable(const Model::DescribeDataHubTopicsRequest& request) const;
			DescribeDataLimitSetOutcome describeDataLimitSet(const Model::DescribeDataLimitSetRequest &request)const;
			void describeDataLimitSetAsync(const Model::DescribeDataLimitSetRequest& request, const DescribeDataLimitSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataLimitSetOutcomeCallable describeDataLimitSetCallable(const Model::DescribeDataLimitSetRequest& request) const;
			DescribeDataTotalCountOutcome describeDataTotalCount(const Model::DescribeDataTotalCountRequest &request)const;
			void describeDataTotalCountAsync(const Model::DescribeDataTotalCountRequest& request, const DescribeDataTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataTotalCountOutcomeCallable describeDataTotalCountCallable(const Model::DescribeDataTotalCountRequest& request) const;
			DescribeDepartCountsOutcome describeDepartCounts(const Model::DescribeDepartCountsRequest &request)const;
			void describeDepartCountsAsync(const Model::DescribeDepartCountsRequest& request, const DescribeDepartCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDepartCountsOutcomeCallable describeDepartCountsCallable(const Model::DescribeDepartCountsRequest& request) const;
			DescribeDepartTotalCountOutcome describeDepartTotalCount(const Model::DescribeDepartTotalCountRequest &request)const;
			void describeDepartTotalCountAsync(const Model::DescribeDepartTotalCountRequest& request, const DescribeDepartTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDepartTotalCountOutcomeCallable describeDepartTotalCountCallable(const Model::DescribeDepartTotalCountRequest& request) const;
			DescribeDepartsOutcome describeDeparts(const Model::DescribeDepartsRequest &request)const;
			void describeDepartsAsync(const Model::DescribeDepartsRequest& request, const DescribeDepartsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDepartsOutcomeCallable describeDepartsCallable(const Model::DescribeDepartsRequest& request) const;
			DescribeEventCountsOutcome describeEventCounts(const Model::DescribeEventCountsRequest &request)const;
			void describeEventCountsAsync(const Model::DescribeEventCountsRequest& request, const DescribeEventCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventCountsOutcomeCallable describeEventCountsCallable(const Model::DescribeEventCountsRequest& request) const;
			DescribeEventDetailOutcome describeEventDetail(const Model::DescribeEventDetailRequest &request)const;
			void describeEventDetailAsync(const Model::DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventDetailOutcomeCallable describeEventDetailCallable(const Model::DescribeEventDetailRequest& request) const;
			DescribeEventTotalCountOutcome describeEventTotalCount(const Model::DescribeEventTotalCountRequest &request)const;
			void describeEventTotalCountAsync(const Model::DescribeEventTotalCountRequest& request, const DescribeEventTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventTotalCountOutcomeCallable describeEventTotalCountCallable(const Model::DescribeEventTotalCountRequest& request) const;
			DescribeEventTypesOutcome describeEventTypes(const Model::DescribeEventTypesRequest &request)const;
			void describeEventTypesAsync(const Model::DescribeEventTypesRequest& request, const DescribeEventTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventTypesOutcomeCallable describeEventTypesCallable(const Model::DescribeEventTypesRequest& request) const;
			DescribeEventsOutcome describeEvents(const Model::DescribeEventsRequest &request)const;
			void describeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventsOutcomeCallable describeEventsCallable(const Model::DescribeEventsRequest& request) const;
			DescribeFlowTotalCountOutcome describeFlowTotalCount(const Model::DescribeFlowTotalCountRequest &request)const;
			void describeFlowTotalCountAsync(const Model::DescribeFlowTotalCountRequest& request, const DescribeFlowTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowTotalCountOutcomeCallable describeFlowTotalCountCallable(const Model::DescribeFlowTotalCountRequest& request) const;
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
			DescribePrivilegesOutcome describePrivileges(const Model::DescribePrivilegesRequest &request)const;
			void describePrivilegesAsync(const Model::DescribePrivilegesRequest& request, const DescribePrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePrivilegesOutcomeCallable describePrivilegesCallable(const Model::DescribePrivilegesRequest& request) const;
			DescribeRuleTotalCountOutcome describeRuleTotalCount(const Model::DescribeRuleTotalCountRequest &request)const;
			void describeRuleTotalCountAsync(const Model::DescribeRuleTotalCountRequest& request, const DescribeRuleTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRuleTotalCountOutcomeCallable describeRuleTotalCountCallable(const Model::DescribeRuleTotalCountRequest& request) const;
			DescribeRulesOutcome describeRules(const Model::DescribeRulesRequest &request)const;
			void describeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRulesOutcomeCallable describeRulesCallable(const Model::DescribeRulesRequest& request) const;
			DescribeTablesOutcome describeTables(const Model::DescribeTablesRequest &request)const;
			void describeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTablesOutcomeCallable describeTablesCallable(const Model::DescribeTablesRequest& request) const;
			DescribeTotalCountOutcome describeTotalCount(const Model::DescribeTotalCountRequest &request)const;
			void describeTotalCountAsync(const Model::DescribeTotalCountRequest& request, const DescribeTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTotalCountOutcomeCallable describeTotalCountCallable(const Model::DescribeTotalCountRequest& request) const;
			DescribeTransferEventCountsOutcome describeTransferEventCounts(const Model::DescribeTransferEventCountsRequest &request)const;
			void describeTransferEventCountsAsync(const Model::DescribeTransferEventCountsRequest& request, const DescribeTransferEventCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTransferEventCountsOutcomeCallable describeTransferEventCountsCallable(const Model::DescribeTransferEventCountsRequest& request) const;
			DescribeUserStatusOutcome describeUserStatus(const Model::DescribeUserStatusRequest &request)const;
			void describeUserStatusAsync(const Model::DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserStatusOutcomeCallable describeUserStatusCallable(const Model::DescribeUserStatusRequest& request) const;
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
			ValidateConnectorOutcome validateConnector(const Model::ValidateConnectorRequest &request)const;
			void validateConnectorAsync(const Model::ValidateConnectorRequest& request, const ValidateConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateConnectorOutcomeCallable validateConnectorCallable(const Model::ValidateConnectorRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_YUNDUN_DS_YUNDUN_DSCLIENT_H_
