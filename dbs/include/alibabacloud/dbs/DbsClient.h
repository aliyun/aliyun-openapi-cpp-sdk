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

#ifndef ALIBABACLOUD_DBS_DBSCLIENT_H_
#define ALIBABACLOUD_DBS_DBSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DbsExport.h"
#include "model/DescribeBackupPlanListRequest.h"
#include "model/DescribeBackupPlanListResult.h"
#include "model/CreateBackupPlanRequest.h"
#include "model/CreateBackupPlanResult.h"
#include "model/StartBackupPlanRequest.h"
#include "model/StartBackupPlanResult.h"
#include "model/RenewBackupPlanRequest.h"
#include "model/RenewBackupPlanResult.h"
#include "model/DescribeFullBackupListRequest.h"
#include "model/DescribeFullBackupListResult.h"
#include "model/DescribeRestoreTaskListRequest.h"
#include "model/DescribeRestoreTaskListResult.h"
#include "model/ModifyBackupPlanNameRequest.h"
#include "model/ModifyBackupPlanNameResult.h"
#include "model/StopBackupPlanRequest.h"
#include "model/StopBackupPlanResult.h"
#include "model/ModifyBackupSourceEndpointRequest.h"
#include "model/ModifyBackupSourceEndpointResult.h"
#include "model/DescribeBackupGatewayListRequest.h"
#include "model/DescribeBackupGatewayListResult.h"
#include "model/ModifyBackupObjectsRequest.h"
#include "model/ModifyBackupObjectsResult.h"
#include "model/DescribeIncrementBackupListRequest.h"
#include "model/DescribeIncrementBackupListResult.h"
#include "model/CreateRestoreTaskRequest.h"
#include "model/CreateRestoreTaskResult.h"
#include "model/ConfigureBackupPlanRequest.h"
#include "model/ConfigureBackupPlanResult.h"
#include "model/ModifyBackupStrategyRequest.h"
#include "model/ModifyBackupStrategyResult.h"
#include "model/StartRestoreTaskRequest.h"
#include "model/StartRestoreTaskResult.h"
#include "model/DescribeNodeCidrListRequest.h"
#include "model/DescribeNodeCidrListResult.h"


namespace AlibabaCloud
{
	namespace Dbs
	{
		class ALIBABACLOUD_DBS_EXPORT DbsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeBackupPlanListResult> DescribeBackupPlanListOutcome;
			typedef std::future<DescribeBackupPlanListOutcome> DescribeBackupPlanListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeBackupPlanListRequest&, const DescribeBackupPlanListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlanListAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupPlanResult> CreateBackupPlanOutcome;
			typedef std::future<CreateBackupPlanOutcome> CreateBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::CreateBackupPlanRequest&, const CreateBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::StartBackupPlanResult> StartBackupPlanOutcome;
			typedef std::future<StartBackupPlanOutcome> StartBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::StartBackupPlanRequest&, const StartBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::RenewBackupPlanResult> RenewBackupPlanOutcome;
			typedef std::future<RenewBackupPlanOutcome> RenewBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::RenewBackupPlanRequest&, const RenewBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::DescribeFullBackupListResult> DescribeFullBackupListOutcome;
			typedef std::future<DescribeFullBackupListOutcome> DescribeFullBackupListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeFullBackupListRequest&, const DescribeFullBackupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFullBackupListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreTaskListResult> DescribeRestoreTaskListOutcome;
			typedef std::future<DescribeRestoreTaskListOutcome> DescribeRestoreTaskListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeRestoreTaskListRequest&, const DescribeRestoreTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreTaskListAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPlanNameResult> ModifyBackupPlanNameOutcome;
			typedef std::future<ModifyBackupPlanNameOutcome> ModifyBackupPlanNameOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ModifyBackupPlanNameRequest&, const ModifyBackupPlanNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPlanNameAsyncHandler;
			typedef Outcome<Error, Model::StopBackupPlanResult> StopBackupPlanOutcome;
			typedef std::future<StopBackupPlanOutcome> StopBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::StopBackupPlanRequest&, const StopBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupSourceEndpointResult> ModifyBackupSourceEndpointOutcome;
			typedef std::future<ModifyBackupSourceEndpointOutcome> ModifyBackupSourceEndpointOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ModifyBackupSourceEndpointRequest&, const ModifyBackupSourceEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupSourceEndpointAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupGatewayListResult> DescribeBackupGatewayListOutcome;
			typedef std::future<DescribeBackupGatewayListOutcome> DescribeBackupGatewayListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeBackupGatewayListRequest&, const DescribeBackupGatewayListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupGatewayListAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupObjectsResult> ModifyBackupObjectsOutcome;
			typedef std::future<ModifyBackupObjectsOutcome> ModifyBackupObjectsOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ModifyBackupObjectsRequest&, const ModifyBackupObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupObjectsAsyncHandler;
			typedef Outcome<Error, Model::DescribeIncrementBackupListResult> DescribeIncrementBackupListOutcome;
			typedef std::future<DescribeIncrementBackupListOutcome> DescribeIncrementBackupListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeIncrementBackupListRequest&, const DescribeIncrementBackupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIncrementBackupListAsyncHandler;
			typedef Outcome<Error, Model::CreateRestoreTaskResult> CreateRestoreTaskOutcome;
			typedef std::future<CreateRestoreTaskOutcome> CreateRestoreTaskOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::CreateRestoreTaskRequest&, const CreateRestoreTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRestoreTaskAsyncHandler;
			typedef Outcome<Error, Model::ConfigureBackupPlanResult> ConfigureBackupPlanOutcome;
			typedef std::future<ConfigureBackupPlanOutcome> ConfigureBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ConfigureBackupPlanRequest&, const ConfigureBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupStrategyResult> ModifyBackupStrategyOutcome;
			typedef std::future<ModifyBackupStrategyOutcome> ModifyBackupStrategyOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ModifyBackupStrategyRequest&, const ModifyBackupStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupStrategyAsyncHandler;
			typedef Outcome<Error, Model::StartRestoreTaskResult> StartRestoreTaskOutcome;
			typedef std::future<StartRestoreTaskOutcome> StartRestoreTaskOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::StartRestoreTaskRequest&, const StartRestoreTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRestoreTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeNodeCidrListResult> DescribeNodeCidrListOutcome;
			typedef std::future<DescribeNodeCidrListOutcome> DescribeNodeCidrListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeNodeCidrListRequest&, const DescribeNodeCidrListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeCidrListAsyncHandler;

			DbsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DbsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DbsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DbsClient();
			DescribeBackupPlanListOutcome describeBackupPlanList(const Model::DescribeBackupPlanListRequest &request)const;
			void describeBackupPlanListAsync(const Model::DescribeBackupPlanListRequest& request, const DescribeBackupPlanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPlanListOutcomeCallable describeBackupPlanListCallable(const Model::DescribeBackupPlanListRequest& request) const;
			CreateBackupPlanOutcome createBackupPlan(const Model::CreateBackupPlanRequest &request)const;
			void createBackupPlanAsync(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupPlanOutcomeCallable createBackupPlanCallable(const Model::CreateBackupPlanRequest& request) const;
			StartBackupPlanOutcome startBackupPlan(const Model::StartBackupPlanRequest &request)const;
			void startBackupPlanAsync(const Model::StartBackupPlanRequest& request, const StartBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBackupPlanOutcomeCallable startBackupPlanCallable(const Model::StartBackupPlanRequest& request) const;
			RenewBackupPlanOutcome renewBackupPlan(const Model::RenewBackupPlanRequest &request)const;
			void renewBackupPlanAsync(const Model::RenewBackupPlanRequest& request, const RenewBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewBackupPlanOutcomeCallable renewBackupPlanCallable(const Model::RenewBackupPlanRequest& request) const;
			DescribeFullBackupListOutcome describeFullBackupList(const Model::DescribeFullBackupListRequest &request)const;
			void describeFullBackupListAsync(const Model::DescribeFullBackupListRequest& request, const DescribeFullBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFullBackupListOutcomeCallable describeFullBackupListCallable(const Model::DescribeFullBackupListRequest& request) const;
			DescribeRestoreTaskListOutcome describeRestoreTaskList(const Model::DescribeRestoreTaskListRequest &request)const;
			void describeRestoreTaskListAsync(const Model::DescribeRestoreTaskListRequest& request, const DescribeRestoreTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreTaskListOutcomeCallable describeRestoreTaskListCallable(const Model::DescribeRestoreTaskListRequest& request) const;
			ModifyBackupPlanNameOutcome modifyBackupPlanName(const Model::ModifyBackupPlanNameRequest &request)const;
			void modifyBackupPlanNameAsync(const Model::ModifyBackupPlanNameRequest& request, const ModifyBackupPlanNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPlanNameOutcomeCallable modifyBackupPlanNameCallable(const Model::ModifyBackupPlanNameRequest& request) const;
			StopBackupPlanOutcome stopBackupPlan(const Model::StopBackupPlanRequest &request)const;
			void stopBackupPlanAsync(const Model::StopBackupPlanRequest& request, const StopBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopBackupPlanOutcomeCallable stopBackupPlanCallable(const Model::StopBackupPlanRequest& request) const;
			ModifyBackupSourceEndpointOutcome modifyBackupSourceEndpoint(const Model::ModifyBackupSourceEndpointRequest &request)const;
			void modifyBackupSourceEndpointAsync(const Model::ModifyBackupSourceEndpointRequest& request, const ModifyBackupSourceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupSourceEndpointOutcomeCallable modifyBackupSourceEndpointCallable(const Model::ModifyBackupSourceEndpointRequest& request) const;
			DescribeBackupGatewayListOutcome describeBackupGatewayList(const Model::DescribeBackupGatewayListRequest &request)const;
			void describeBackupGatewayListAsync(const Model::DescribeBackupGatewayListRequest& request, const DescribeBackupGatewayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupGatewayListOutcomeCallable describeBackupGatewayListCallable(const Model::DescribeBackupGatewayListRequest& request) const;
			ModifyBackupObjectsOutcome modifyBackupObjects(const Model::ModifyBackupObjectsRequest &request)const;
			void modifyBackupObjectsAsync(const Model::ModifyBackupObjectsRequest& request, const ModifyBackupObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupObjectsOutcomeCallable modifyBackupObjectsCallable(const Model::ModifyBackupObjectsRequest& request) const;
			DescribeIncrementBackupListOutcome describeIncrementBackupList(const Model::DescribeIncrementBackupListRequest &request)const;
			void describeIncrementBackupListAsync(const Model::DescribeIncrementBackupListRequest& request, const DescribeIncrementBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIncrementBackupListOutcomeCallable describeIncrementBackupListCallable(const Model::DescribeIncrementBackupListRequest& request) const;
			CreateRestoreTaskOutcome createRestoreTask(const Model::CreateRestoreTaskRequest &request)const;
			void createRestoreTaskAsync(const Model::CreateRestoreTaskRequest& request, const CreateRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRestoreTaskOutcomeCallable createRestoreTaskCallable(const Model::CreateRestoreTaskRequest& request) const;
			ConfigureBackupPlanOutcome configureBackupPlan(const Model::ConfigureBackupPlanRequest &request)const;
			void configureBackupPlanAsync(const Model::ConfigureBackupPlanRequest& request, const ConfigureBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureBackupPlanOutcomeCallable configureBackupPlanCallable(const Model::ConfigureBackupPlanRequest& request) const;
			ModifyBackupStrategyOutcome modifyBackupStrategy(const Model::ModifyBackupStrategyRequest &request)const;
			void modifyBackupStrategyAsync(const Model::ModifyBackupStrategyRequest& request, const ModifyBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupStrategyOutcomeCallable modifyBackupStrategyCallable(const Model::ModifyBackupStrategyRequest& request) const;
			StartRestoreTaskOutcome startRestoreTask(const Model::StartRestoreTaskRequest &request)const;
			void startRestoreTaskAsync(const Model::StartRestoreTaskRequest& request, const StartRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRestoreTaskOutcomeCallable startRestoreTaskCallable(const Model::StartRestoreTaskRequest& request) const;
			DescribeNodeCidrListOutcome describeNodeCidrList(const Model::DescribeNodeCidrListRequest &request)const;
			void describeNodeCidrListAsync(const Model::DescribeNodeCidrListRequest& request, const DescribeNodeCidrListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNodeCidrListOutcomeCallable describeNodeCidrListCallable(const Model::DescribeNodeCidrListRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DBS_DBSCLIENT_H_
