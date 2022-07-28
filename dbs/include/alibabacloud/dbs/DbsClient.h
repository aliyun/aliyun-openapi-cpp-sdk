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
#include "model/ConfigureBackupPlanRequest.h"
#include "model/ConfigureBackupPlanResult.h"
#include "model/CreateAndStartBackupPlanRequest.h"
#include "model/CreateAndStartBackupPlanResult.h"
#include "model/CreateBackupPlanRequest.h"
#include "model/CreateBackupPlanResult.h"
#include "model/CreateFullBackupSetDownloadRequest.h"
#include "model/CreateFullBackupSetDownloadResult.h"
#include "model/CreateGetDBListFromAgentTaskRequest.h"
#include "model/CreateGetDBListFromAgentTaskResult.h"
#include "model/CreateIncrementBackupSetDownloadRequest.h"
#include "model/CreateIncrementBackupSetDownloadResult.h"
#include "model/CreateRestoreTaskRequest.h"
#include "model/CreateRestoreTaskResult.h"
#include "model/DescribeBackupGatewayListRequest.h"
#include "model/DescribeBackupGatewayListResult.h"
#include "model/DescribeBackupPlanBillingRequest.h"
#include "model/DescribeBackupPlanBillingResult.h"
#include "model/DescribeBackupPlanListRequest.h"
#include "model/DescribeBackupPlanListResult.h"
#include "model/DescribeBackupSetDownloadTaskListRequest.h"
#include "model/DescribeBackupSetDownloadTaskListResult.h"
#include "model/DescribeDLAServiceRequest.h"
#include "model/DescribeDLAServiceResult.h"
#include "model/DescribeFullBackupListRequest.h"
#include "model/DescribeFullBackupListResult.h"
#include "model/DescribeIncrementBackupListRequest.h"
#include "model/DescribeIncrementBackupListResult.h"
#include "model/DescribeJobErrorCodeRequest.h"
#include "model/DescribeJobErrorCodeResult.h"
#include "model/DescribeNodeCidrListRequest.h"
#include "model/DescribeNodeCidrListResult.h"
#include "model/DescribePreCheckProgressListRequest.h"
#include "model/DescribePreCheckProgressListResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRestoreRangeInfoRequest.h"
#include "model/DescribeRestoreRangeInfoResult.h"
#include "model/DescribeRestoreTaskListRequest.h"
#include "model/DescribeRestoreTaskListResult.h"
#include "model/DisableBackupLogRequest.h"
#include "model/DisableBackupLogResult.h"
#include "model/EnableBackupLogRequest.h"
#include "model/EnableBackupLogResult.h"
#include "model/GetDBListFromAgentRequest.h"
#include "model/GetDBListFromAgentResult.h"
#include "model/InitializeDbsServiceLinkedRoleRequest.h"
#include "model/InitializeDbsServiceLinkedRoleResult.h"
#include "model/ModifyBackupObjectsRequest.h"
#include "model/ModifyBackupObjectsResult.h"
#include "model/ModifyBackupPlanNameRequest.h"
#include "model/ModifyBackupPlanNameResult.h"
#include "model/ModifyBackupSetDownloadRulesRequest.h"
#include "model/ModifyBackupSetDownloadRulesResult.h"
#include "model/ModifyBackupSourceEndpointRequest.h"
#include "model/ModifyBackupSourceEndpointResult.h"
#include "model/ModifyBackupStrategyRequest.h"
#include "model/ModifyBackupStrategyResult.h"
#include "model/ModifyStorageStrategyRequest.h"
#include "model/ModifyStorageStrategyResult.h"
#include "model/ReleaseBackupPlanRequest.h"
#include "model/ReleaseBackupPlanResult.h"
#include "model/RenewBackupPlanRequest.h"
#include "model/RenewBackupPlanResult.h"
#include "model/StartBackupPlanRequest.h"
#include "model/StartBackupPlanResult.h"
#include "model/StartRestoreTaskRequest.h"
#include "model/StartRestoreTaskResult.h"
#include "model/StopBackupPlanRequest.h"
#include "model/StopBackupPlanResult.h"
#include "model/UpgradeBackupPlanRequest.h"
#include "model/UpgradeBackupPlanResult.h"


namespace AlibabaCloud
{
	namespace Dbs
	{
		class ALIBABACLOUD_DBS_EXPORT DbsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ConfigureBackupPlanResult> ConfigureBackupPlanOutcome;
			typedef std::future<ConfigureBackupPlanOutcome> ConfigureBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ConfigureBackupPlanRequest&, const ConfigureBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::CreateAndStartBackupPlanResult> CreateAndStartBackupPlanOutcome;
			typedef std::future<CreateAndStartBackupPlanOutcome> CreateAndStartBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::CreateAndStartBackupPlanRequest&, const CreateAndStartBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndStartBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::CreateBackupPlanResult> CreateBackupPlanOutcome;
			typedef std::future<CreateBackupPlanOutcome> CreateBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::CreateBackupPlanRequest&, const CreateBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::CreateFullBackupSetDownloadResult> CreateFullBackupSetDownloadOutcome;
			typedef std::future<CreateFullBackupSetDownloadOutcome> CreateFullBackupSetDownloadOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::CreateFullBackupSetDownloadRequest&, const CreateFullBackupSetDownloadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFullBackupSetDownloadAsyncHandler;
			typedef Outcome<Error, Model::CreateGetDBListFromAgentTaskResult> CreateGetDBListFromAgentTaskOutcome;
			typedef std::future<CreateGetDBListFromAgentTaskOutcome> CreateGetDBListFromAgentTaskOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::CreateGetDBListFromAgentTaskRequest&, const CreateGetDBListFromAgentTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGetDBListFromAgentTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateIncrementBackupSetDownloadResult> CreateIncrementBackupSetDownloadOutcome;
			typedef std::future<CreateIncrementBackupSetDownloadOutcome> CreateIncrementBackupSetDownloadOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::CreateIncrementBackupSetDownloadRequest&, const CreateIncrementBackupSetDownloadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIncrementBackupSetDownloadAsyncHandler;
			typedef Outcome<Error, Model::CreateRestoreTaskResult> CreateRestoreTaskOutcome;
			typedef std::future<CreateRestoreTaskOutcome> CreateRestoreTaskOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::CreateRestoreTaskRequest&, const CreateRestoreTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRestoreTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupGatewayListResult> DescribeBackupGatewayListOutcome;
			typedef std::future<DescribeBackupGatewayListOutcome> DescribeBackupGatewayListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeBackupGatewayListRequest&, const DescribeBackupGatewayListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupGatewayListAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPlanBillingResult> DescribeBackupPlanBillingOutcome;
			typedef std::future<DescribeBackupPlanBillingOutcome> DescribeBackupPlanBillingOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeBackupPlanBillingRequest&, const DescribeBackupPlanBillingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlanBillingAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupPlanListResult> DescribeBackupPlanListOutcome;
			typedef std::future<DescribeBackupPlanListOutcome> DescribeBackupPlanListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeBackupPlanListRequest&, const DescribeBackupPlanListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupPlanListAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackupSetDownloadTaskListResult> DescribeBackupSetDownloadTaskListOutcome;
			typedef std::future<DescribeBackupSetDownloadTaskListOutcome> DescribeBackupSetDownloadTaskListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeBackupSetDownloadTaskListRequest&, const DescribeBackupSetDownloadTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSetDownloadTaskListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDLAServiceResult> DescribeDLAServiceOutcome;
			typedef std::future<DescribeDLAServiceOutcome> DescribeDLAServiceOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeDLAServiceRequest&, const DescribeDLAServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDLAServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeFullBackupListResult> DescribeFullBackupListOutcome;
			typedef std::future<DescribeFullBackupListOutcome> DescribeFullBackupListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeFullBackupListRequest&, const DescribeFullBackupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFullBackupListAsyncHandler;
			typedef Outcome<Error, Model::DescribeIncrementBackupListResult> DescribeIncrementBackupListOutcome;
			typedef std::future<DescribeIncrementBackupListOutcome> DescribeIncrementBackupListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeIncrementBackupListRequest&, const DescribeIncrementBackupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIncrementBackupListAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobErrorCodeResult> DescribeJobErrorCodeOutcome;
			typedef std::future<DescribeJobErrorCodeOutcome> DescribeJobErrorCodeOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeJobErrorCodeRequest&, const DescribeJobErrorCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobErrorCodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeNodeCidrListResult> DescribeNodeCidrListOutcome;
			typedef std::future<DescribeNodeCidrListOutcome> DescribeNodeCidrListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeNodeCidrListRequest&, const DescribeNodeCidrListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeCidrListAsyncHandler;
			typedef Outcome<Error, Model::DescribePreCheckProgressListResult> DescribePreCheckProgressListOutcome;
			typedef std::future<DescribePreCheckProgressListOutcome> DescribePreCheckProgressListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribePreCheckProgressListRequest&, const DescribePreCheckProgressListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreCheckProgressListAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreRangeInfoResult> DescribeRestoreRangeInfoOutcome;
			typedef std::future<DescribeRestoreRangeInfoOutcome> DescribeRestoreRangeInfoOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeRestoreRangeInfoRequest&, const DescribeRestoreRangeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreRangeInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeRestoreTaskListResult> DescribeRestoreTaskListOutcome;
			typedef std::future<DescribeRestoreTaskListOutcome> DescribeRestoreTaskListOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DescribeRestoreTaskListRequest&, const DescribeRestoreTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreTaskListAsyncHandler;
			typedef Outcome<Error, Model::DisableBackupLogResult> DisableBackupLogOutcome;
			typedef std::future<DisableBackupLogOutcome> DisableBackupLogOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::DisableBackupLogRequest&, const DisableBackupLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableBackupLogAsyncHandler;
			typedef Outcome<Error, Model::EnableBackupLogResult> EnableBackupLogOutcome;
			typedef std::future<EnableBackupLogOutcome> EnableBackupLogOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::EnableBackupLogRequest&, const EnableBackupLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableBackupLogAsyncHandler;
			typedef Outcome<Error, Model::GetDBListFromAgentResult> GetDBListFromAgentOutcome;
			typedef std::future<GetDBListFromAgentOutcome> GetDBListFromAgentOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::GetDBListFromAgentRequest&, const GetDBListFromAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDBListFromAgentAsyncHandler;
			typedef Outcome<Error, Model::InitializeDbsServiceLinkedRoleResult> InitializeDbsServiceLinkedRoleOutcome;
			typedef std::future<InitializeDbsServiceLinkedRoleOutcome> InitializeDbsServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::InitializeDbsServiceLinkedRoleRequest&, const InitializeDbsServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitializeDbsServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupObjectsResult> ModifyBackupObjectsOutcome;
			typedef std::future<ModifyBackupObjectsOutcome> ModifyBackupObjectsOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ModifyBackupObjectsRequest&, const ModifyBackupObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupObjectsAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupPlanNameResult> ModifyBackupPlanNameOutcome;
			typedef std::future<ModifyBackupPlanNameOutcome> ModifyBackupPlanNameOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ModifyBackupPlanNameRequest&, const ModifyBackupPlanNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupPlanNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupSetDownloadRulesResult> ModifyBackupSetDownloadRulesOutcome;
			typedef std::future<ModifyBackupSetDownloadRulesOutcome> ModifyBackupSetDownloadRulesOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ModifyBackupSetDownloadRulesRequest&, const ModifyBackupSetDownloadRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupSetDownloadRulesAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupSourceEndpointResult> ModifyBackupSourceEndpointOutcome;
			typedef std::future<ModifyBackupSourceEndpointOutcome> ModifyBackupSourceEndpointOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ModifyBackupSourceEndpointRequest&, const ModifyBackupSourceEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupSourceEndpointAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackupStrategyResult> ModifyBackupStrategyOutcome;
			typedef std::future<ModifyBackupStrategyOutcome> ModifyBackupStrategyOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ModifyBackupStrategyRequest&, const ModifyBackupStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupStrategyAsyncHandler;
			typedef Outcome<Error, Model::ModifyStorageStrategyResult> ModifyStorageStrategyOutcome;
			typedef std::future<ModifyStorageStrategyOutcome> ModifyStorageStrategyOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ModifyStorageStrategyRequest&, const ModifyStorageStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStorageStrategyAsyncHandler;
			typedef Outcome<Error, Model::ReleaseBackupPlanResult> ReleaseBackupPlanOutcome;
			typedef std::future<ReleaseBackupPlanOutcome> ReleaseBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::ReleaseBackupPlanRequest&, const ReleaseBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::RenewBackupPlanResult> RenewBackupPlanOutcome;
			typedef std::future<RenewBackupPlanOutcome> RenewBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::RenewBackupPlanRequest&, const RenewBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::StartBackupPlanResult> StartBackupPlanOutcome;
			typedef std::future<StartBackupPlanOutcome> StartBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::StartBackupPlanRequest&, const StartBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::StartRestoreTaskResult> StartRestoreTaskOutcome;
			typedef std::future<StartRestoreTaskOutcome> StartRestoreTaskOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::StartRestoreTaskRequest&, const StartRestoreTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRestoreTaskAsyncHandler;
			typedef Outcome<Error, Model::StopBackupPlanResult> StopBackupPlanOutcome;
			typedef std::future<StopBackupPlanOutcome> StopBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::StopBackupPlanRequest&, const StopBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopBackupPlanAsyncHandler;
			typedef Outcome<Error, Model::UpgradeBackupPlanResult> UpgradeBackupPlanOutcome;
			typedef std::future<UpgradeBackupPlanOutcome> UpgradeBackupPlanOutcomeCallable;
			typedef std::function<void(const DbsClient*, const Model::UpgradeBackupPlanRequest&, const UpgradeBackupPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeBackupPlanAsyncHandler;

			DbsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DbsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DbsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DbsClient();
			ConfigureBackupPlanOutcome configureBackupPlan(const Model::ConfigureBackupPlanRequest &request)const;
			void configureBackupPlanAsync(const Model::ConfigureBackupPlanRequest& request, const ConfigureBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureBackupPlanOutcomeCallable configureBackupPlanCallable(const Model::ConfigureBackupPlanRequest& request) const;
			CreateAndStartBackupPlanOutcome createAndStartBackupPlan(const Model::CreateAndStartBackupPlanRequest &request)const;
			void createAndStartBackupPlanAsync(const Model::CreateAndStartBackupPlanRequest& request, const CreateAndStartBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAndStartBackupPlanOutcomeCallable createAndStartBackupPlanCallable(const Model::CreateAndStartBackupPlanRequest& request) const;
			CreateBackupPlanOutcome createBackupPlan(const Model::CreateBackupPlanRequest &request)const;
			void createBackupPlanAsync(const Model::CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackupPlanOutcomeCallable createBackupPlanCallable(const Model::CreateBackupPlanRequest& request) const;
			CreateFullBackupSetDownloadOutcome createFullBackupSetDownload(const Model::CreateFullBackupSetDownloadRequest &request)const;
			void createFullBackupSetDownloadAsync(const Model::CreateFullBackupSetDownloadRequest& request, const CreateFullBackupSetDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFullBackupSetDownloadOutcomeCallable createFullBackupSetDownloadCallable(const Model::CreateFullBackupSetDownloadRequest& request) const;
			CreateGetDBListFromAgentTaskOutcome createGetDBListFromAgentTask(const Model::CreateGetDBListFromAgentTaskRequest &request)const;
			void createGetDBListFromAgentTaskAsync(const Model::CreateGetDBListFromAgentTaskRequest& request, const CreateGetDBListFromAgentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGetDBListFromAgentTaskOutcomeCallable createGetDBListFromAgentTaskCallable(const Model::CreateGetDBListFromAgentTaskRequest& request) const;
			CreateIncrementBackupSetDownloadOutcome createIncrementBackupSetDownload(const Model::CreateIncrementBackupSetDownloadRequest &request)const;
			void createIncrementBackupSetDownloadAsync(const Model::CreateIncrementBackupSetDownloadRequest& request, const CreateIncrementBackupSetDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIncrementBackupSetDownloadOutcomeCallable createIncrementBackupSetDownloadCallable(const Model::CreateIncrementBackupSetDownloadRequest& request) const;
			CreateRestoreTaskOutcome createRestoreTask(const Model::CreateRestoreTaskRequest &request)const;
			void createRestoreTaskAsync(const Model::CreateRestoreTaskRequest& request, const CreateRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRestoreTaskOutcomeCallable createRestoreTaskCallable(const Model::CreateRestoreTaskRequest& request) const;
			DescribeBackupGatewayListOutcome describeBackupGatewayList(const Model::DescribeBackupGatewayListRequest &request)const;
			void describeBackupGatewayListAsync(const Model::DescribeBackupGatewayListRequest& request, const DescribeBackupGatewayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupGatewayListOutcomeCallable describeBackupGatewayListCallable(const Model::DescribeBackupGatewayListRequest& request) const;
			DescribeBackupPlanBillingOutcome describeBackupPlanBilling(const Model::DescribeBackupPlanBillingRequest &request)const;
			void describeBackupPlanBillingAsync(const Model::DescribeBackupPlanBillingRequest& request, const DescribeBackupPlanBillingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPlanBillingOutcomeCallable describeBackupPlanBillingCallable(const Model::DescribeBackupPlanBillingRequest& request) const;
			DescribeBackupPlanListOutcome describeBackupPlanList(const Model::DescribeBackupPlanListRequest &request)const;
			void describeBackupPlanListAsync(const Model::DescribeBackupPlanListRequest& request, const DescribeBackupPlanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupPlanListOutcomeCallable describeBackupPlanListCallable(const Model::DescribeBackupPlanListRequest& request) const;
			DescribeBackupSetDownloadTaskListOutcome describeBackupSetDownloadTaskList(const Model::DescribeBackupSetDownloadTaskListRequest &request)const;
			void describeBackupSetDownloadTaskListAsync(const Model::DescribeBackupSetDownloadTaskListRequest& request, const DescribeBackupSetDownloadTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackupSetDownloadTaskListOutcomeCallable describeBackupSetDownloadTaskListCallable(const Model::DescribeBackupSetDownloadTaskListRequest& request) const;
			DescribeDLAServiceOutcome describeDLAService(const Model::DescribeDLAServiceRequest &request)const;
			void describeDLAServiceAsync(const Model::DescribeDLAServiceRequest& request, const DescribeDLAServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDLAServiceOutcomeCallable describeDLAServiceCallable(const Model::DescribeDLAServiceRequest& request) const;
			DescribeFullBackupListOutcome describeFullBackupList(const Model::DescribeFullBackupListRequest &request)const;
			void describeFullBackupListAsync(const Model::DescribeFullBackupListRequest& request, const DescribeFullBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFullBackupListOutcomeCallable describeFullBackupListCallable(const Model::DescribeFullBackupListRequest& request) const;
			DescribeIncrementBackupListOutcome describeIncrementBackupList(const Model::DescribeIncrementBackupListRequest &request)const;
			void describeIncrementBackupListAsync(const Model::DescribeIncrementBackupListRequest& request, const DescribeIncrementBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIncrementBackupListOutcomeCallable describeIncrementBackupListCallable(const Model::DescribeIncrementBackupListRequest& request) const;
			DescribeJobErrorCodeOutcome describeJobErrorCode(const Model::DescribeJobErrorCodeRequest &request)const;
			void describeJobErrorCodeAsync(const Model::DescribeJobErrorCodeRequest& request, const DescribeJobErrorCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobErrorCodeOutcomeCallable describeJobErrorCodeCallable(const Model::DescribeJobErrorCodeRequest& request) const;
			DescribeNodeCidrListOutcome describeNodeCidrList(const Model::DescribeNodeCidrListRequest &request)const;
			void describeNodeCidrListAsync(const Model::DescribeNodeCidrListRequest& request, const DescribeNodeCidrListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNodeCidrListOutcomeCallable describeNodeCidrListCallable(const Model::DescribeNodeCidrListRequest& request) const;
			DescribePreCheckProgressListOutcome describePreCheckProgressList(const Model::DescribePreCheckProgressListRequest &request)const;
			void describePreCheckProgressListAsync(const Model::DescribePreCheckProgressListRequest& request, const DescribePreCheckProgressListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePreCheckProgressListOutcomeCallable describePreCheckProgressListCallable(const Model::DescribePreCheckProgressListRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRestoreRangeInfoOutcome describeRestoreRangeInfo(const Model::DescribeRestoreRangeInfoRequest &request)const;
			void describeRestoreRangeInfoAsync(const Model::DescribeRestoreRangeInfoRequest& request, const DescribeRestoreRangeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreRangeInfoOutcomeCallable describeRestoreRangeInfoCallable(const Model::DescribeRestoreRangeInfoRequest& request) const;
			DescribeRestoreTaskListOutcome describeRestoreTaskList(const Model::DescribeRestoreTaskListRequest &request)const;
			void describeRestoreTaskListAsync(const Model::DescribeRestoreTaskListRequest& request, const DescribeRestoreTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRestoreTaskListOutcomeCallable describeRestoreTaskListCallable(const Model::DescribeRestoreTaskListRequest& request) const;
			DisableBackupLogOutcome disableBackupLog(const Model::DisableBackupLogRequest &request)const;
			void disableBackupLogAsync(const Model::DisableBackupLogRequest& request, const DisableBackupLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableBackupLogOutcomeCallable disableBackupLogCallable(const Model::DisableBackupLogRequest& request) const;
			EnableBackupLogOutcome enableBackupLog(const Model::EnableBackupLogRequest &request)const;
			void enableBackupLogAsync(const Model::EnableBackupLogRequest& request, const EnableBackupLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableBackupLogOutcomeCallable enableBackupLogCallable(const Model::EnableBackupLogRequest& request) const;
			GetDBListFromAgentOutcome getDBListFromAgent(const Model::GetDBListFromAgentRequest &request)const;
			void getDBListFromAgentAsync(const Model::GetDBListFromAgentRequest& request, const GetDBListFromAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDBListFromAgentOutcomeCallable getDBListFromAgentCallable(const Model::GetDBListFromAgentRequest& request) const;
			InitializeDbsServiceLinkedRoleOutcome initializeDbsServiceLinkedRole(const Model::InitializeDbsServiceLinkedRoleRequest &request)const;
			void initializeDbsServiceLinkedRoleAsync(const Model::InitializeDbsServiceLinkedRoleRequest& request, const InitializeDbsServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitializeDbsServiceLinkedRoleOutcomeCallable initializeDbsServiceLinkedRoleCallable(const Model::InitializeDbsServiceLinkedRoleRequest& request) const;
			ModifyBackupObjectsOutcome modifyBackupObjects(const Model::ModifyBackupObjectsRequest &request)const;
			void modifyBackupObjectsAsync(const Model::ModifyBackupObjectsRequest& request, const ModifyBackupObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupObjectsOutcomeCallable modifyBackupObjectsCallable(const Model::ModifyBackupObjectsRequest& request) const;
			ModifyBackupPlanNameOutcome modifyBackupPlanName(const Model::ModifyBackupPlanNameRequest &request)const;
			void modifyBackupPlanNameAsync(const Model::ModifyBackupPlanNameRequest& request, const ModifyBackupPlanNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupPlanNameOutcomeCallable modifyBackupPlanNameCallable(const Model::ModifyBackupPlanNameRequest& request) const;
			ModifyBackupSetDownloadRulesOutcome modifyBackupSetDownloadRules(const Model::ModifyBackupSetDownloadRulesRequest &request)const;
			void modifyBackupSetDownloadRulesAsync(const Model::ModifyBackupSetDownloadRulesRequest& request, const ModifyBackupSetDownloadRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupSetDownloadRulesOutcomeCallable modifyBackupSetDownloadRulesCallable(const Model::ModifyBackupSetDownloadRulesRequest& request) const;
			ModifyBackupSourceEndpointOutcome modifyBackupSourceEndpoint(const Model::ModifyBackupSourceEndpointRequest &request)const;
			void modifyBackupSourceEndpointAsync(const Model::ModifyBackupSourceEndpointRequest& request, const ModifyBackupSourceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupSourceEndpointOutcomeCallable modifyBackupSourceEndpointCallable(const Model::ModifyBackupSourceEndpointRequest& request) const;
			ModifyBackupStrategyOutcome modifyBackupStrategy(const Model::ModifyBackupStrategyRequest &request)const;
			void modifyBackupStrategyAsync(const Model::ModifyBackupStrategyRequest& request, const ModifyBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackupStrategyOutcomeCallable modifyBackupStrategyCallable(const Model::ModifyBackupStrategyRequest& request) const;
			ModifyStorageStrategyOutcome modifyStorageStrategy(const Model::ModifyStorageStrategyRequest &request)const;
			void modifyStorageStrategyAsync(const Model::ModifyStorageStrategyRequest& request, const ModifyStorageStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStorageStrategyOutcomeCallable modifyStorageStrategyCallable(const Model::ModifyStorageStrategyRequest& request) const;
			ReleaseBackupPlanOutcome releaseBackupPlan(const Model::ReleaseBackupPlanRequest &request)const;
			void releaseBackupPlanAsync(const Model::ReleaseBackupPlanRequest& request, const ReleaseBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseBackupPlanOutcomeCallable releaseBackupPlanCallable(const Model::ReleaseBackupPlanRequest& request) const;
			RenewBackupPlanOutcome renewBackupPlan(const Model::RenewBackupPlanRequest &request)const;
			void renewBackupPlanAsync(const Model::RenewBackupPlanRequest& request, const RenewBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewBackupPlanOutcomeCallable renewBackupPlanCallable(const Model::RenewBackupPlanRequest& request) const;
			StartBackupPlanOutcome startBackupPlan(const Model::StartBackupPlanRequest &request)const;
			void startBackupPlanAsync(const Model::StartBackupPlanRequest& request, const StartBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBackupPlanOutcomeCallable startBackupPlanCallable(const Model::StartBackupPlanRequest& request) const;
			StartRestoreTaskOutcome startRestoreTask(const Model::StartRestoreTaskRequest &request)const;
			void startRestoreTaskAsync(const Model::StartRestoreTaskRequest& request, const StartRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRestoreTaskOutcomeCallable startRestoreTaskCallable(const Model::StartRestoreTaskRequest& request) const;
			StopBackupPlanOutcome stopBackupPlan(const Model::StopBackupPlanRequest &request)const;
			void stopBackupPlanAsync(const Model::StopBackupPlanRequest& request, const StopBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopBackupPlanOutcomeCallable stopBackupPlanCallable(const Model::StopBackupPlanRequest& request) const;
			UpgradeBackupPlanOutcome upgradeBackupPlan(const Model::UpgradeBackupPlanRequest &request)const;
			void upgradeBackupPlanAsync(const Model::UpgradeBackupPlanRequest& request, const UpgradeBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeBackupPlanOutcomeCallable upgradeBackupPlanCallable(const Model::UpgradeBackupPlanRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DBS_DBSCLIENT_H_
