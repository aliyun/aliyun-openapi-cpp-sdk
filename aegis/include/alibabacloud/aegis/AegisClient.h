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

#ifndef ALIBABACLOUD_AEGIS_AEGISCLIENT_H_
#define ALIBABACLOUD_AEGIS_AEGISCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AegisExport.h"
#include "model/GetEntityListRequest.h"
#include "model/GetEntityListResult.h"
#include "model/GetStatisticsByUuidRequest.h"
#include "model/GetStatisticsByUuidResult.h"
#include "model/GetStatisticsRequest.h"
#include "model/GetStatisticsResult.h"
#include "model/DescribeVulDetailsRequest.h"
#include "model/DescribeVulDetailsResult.h"
#include "model/DeleteStrategyRequest.h"
#include "model/DeleteStrategyResult.h"
#include "model/GetCrackStatisticsRequest.h"
#include "model/GetCrackStatisticsResult.h"
#include "model/DescribeWarningRequest.h"
#include "model/DescribeWarningResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/DescribeSuspiciousEventsRequest.h"
#include "model/DescribeSuspiciousEventsResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/DescribeVulListRequest.h"
#include "model/DescribeVulListResult.h"
#include "model/UpgradeInstanceRequest.h"
#include "model/UpgradeInstanceResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/DescribeStrategyTargetRequest.h"
#include "model/DescribeStrategyTargetResult.h"
#include "model/QueryLoginEventRequest.h"
#include "model/QueryLoginEventResult.h"
#include "model/GetAccountStatisticsRequest.h"
#include "model/GetAccountStatisticsResult.h"
#include "model/ModifyStrategyRequest.h"
#include "model/ModifyStrategyResult.h"
#include "model/ModifyStrategyTargetRequest.h"
#include "model/ModifyStrategyTargetResult.h"
#include "model/ModifyBatchIgnoreVulRequest.h"
#include "model/ModifyBatchIgnoreVulResult.h"
#include "model/DescribeWebshellRequest.h"
#include "model/DescribeWebshellResult.h"
#include "model/DescribeStratetyDetailRequest.h"
#include "model/DescribeStratetyDetailResult.h"
#include "model/DescribeStratetyRequest.h"
#include "model/DescribeStratetyResult.h"
#include "model/DescribeLoginLogsRequest.h"
#include "model/DescribeLoginLogsResult.h"
#include "model/QueryCrackEventRequest.h"
#include "model/QueryCrackEventResult.h"


namespace AlibabaCloud
{
	namespace Aegis
	{
		class ALIBABACLOUD_AEGIS_EXPORT AegisClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetEntityListResult> GetEntityListOutcome;			
			typedef std::future<GetEntityListOutcome> GetEntityListOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::GetEntityListRequest&, const GetEntityListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEntityListAsyncHandler;
			typedef Outcome<Error, Model::GetStatisticsByUuidResult> GetStatisticsByUuidOutcome;			
			typedef std::future<GetStatisticsByUuidOutcome> GetStatisticsByUuidOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::GetStatisticsByUuidRequest&, const GetStatisticsByUuidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStatisticsByUuidAsyncHandler;
			typedef Outcome<Error, Model::GetStatisticsResult> GetStatisticsOutcome;			
			typedef std::future<GetStatisticsOutcome> GetStatisticsOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::GetStatisticsRequest&, const GetStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulDetailsResult> DescribeVulDetailsOutcome;			
			typedef std::future<DescribeVulDetailsOutcome> DescribeVulDetailsOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::DescribeVulDetailsRequest&, const DescribeVulDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDetailsAsyncHandler;
			typedef Outcome<Error, Model::DeleteStrategyResult> DeleteStrategyOutcome;			
			typedef std::future<DeleteStrategyOutcome> DeleteStrategyOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::DeleteStrategyRequest&, const DeleteStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStrategyAsyncHandler;
			typedef Outcome<Error, Model::GetCrackStatisticsResult> GetCrackStatisticsOutcome;			
			typedef std::future<GetCrackStatisticsOutcome> GetCrackStatisticsOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::GetCrackStatisticsRequest&, const GetCrackStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCrackStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWarningResult> DescribeWarningOutcome;			
			typedef std::future<DescribeWarningOutcome> DescribeWarningOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::DescribeWarningRequest&, const DescribeWarningOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;			
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspiciousEventsResult> DescribeSuspiciousEventsOutcome;			
			typedef std::future<DescribeSuspiciousEventsOutcome> DescribeSuspiciousEventsOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::DescribeSuspiciousEventsRequest&, const DescribeSuspiciousEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspiciousEventsAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;			
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulListResult> DescribeVulListOutcome;			
			typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::DescribeVulListRequest&, const DescribeVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
			typedef Outcome<Error, Model::UpgradeInstanceResult> UpgradeInstanceOutcome;			
			typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::UpgradeInstanceRequest&, const UpgradeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;			
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyTargetResult> DescribeStrategyTargetOutcome;			
			typedef std::future<DescribeStrategyTargetOutcome> DescribeStrategyTargetOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::DescribeStrategyTargetRequest&, const DescribeStrategyTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyTargetAsyncHandler;
			typedef Outcome<Error, Model::QueryLoginEventResult> QueryLoginEventOutcome;			
			typedef std::future<QueryLoginEventOutcome> QueryLoginEventOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::QueryLoginEventRequest&, const QueryLoginEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryLoginEventAsyncHandler;
			typedef Outcome<Error, Model::GetAccountStatisticsResult> GetAccountStatisticsOutcome;			
			typedef std::future<GetAccountStatisticsOutcome> GetAccountStatisticsOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::GetAccountStatisticsRequest&, const GetAccountStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ModifyStrategyResult> ModifyStrategyOutcome;			
			typedef std::future<ModifyStrategyOutcome> ModifyStrategyOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::ModifyStrategyRequest&, const ModifyStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStrategyAsyncHandler;
			typedef Outcome<Error, Model::ModifyStrategyTargetResult> ModifyStrategyTargetOutcome;			
			typedef std::future<ModifyStrategyTargetOutcome> ModifyStrategyTargetOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::ModifyStrategyTargetRequest&, const ModifyStrategyTargetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStrategyTargetAsyncHandler;
			typedef Outcome<Error, Model::ModifyBatchIgnoreVulResult> ModifyBatchIgnoreVulOutcome;			
			typedef std::future<ModifyBatchIgnoreVulOutcome> ModifyBatchIgnoreVulOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::ModifyBatchIgnoreVulRequest&, const ModifyBatchIgnoreVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBatchIgnoreVulAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebshellResult> DescribeWebshellOutcome;			
			typedef std::future<DescribeWebshellOutcome> DescribeWebshellOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::DescribeWebshellRequest&, const DescribeWebshellOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebshellAsyncHandler;
			typedef Outcome<Error, Model::DescribeStratetyDetailResult> DescribeStratetyDetailOutcome;			
			typedef std::future<DescribeStratetyDetailOutcome> DescribeStratetyDetailOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::DescribeStratetyDetailRequest&, const DescribeStratetyDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStratetyDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeStratetyResult> DescribeStratetyOutcome;			
			typedef std::future<DescribeStratetyOutcome> DescribeStratetyOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::DescribeStratetyRequest&, const DescribeStratetyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStratetyAsyncHandler;
			typedef Outcome<Error, Model::DescribeLoginLogsResult> DescribeLoginLogsOutcome;			
			typedef std::future<DescribeLoginLogsOutcome> DescribeLoginLogsOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::DescribeLoginLogsRequest&, const DescribeLoginLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginLogsAsyncHandler;
			typedef Outcome<Error, Model::QueryCrackEventResult> QueryCrackEventOutcome;			
			typedef std::future<QueryCrackEventOutcome> QueryCrackEventOutcomeCallable;			
			typedef std::function<void(const AegisClient*, const Model::QueryCrackEventRequest&, const QueryCrackEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCrackEventAsyncHandler;

			AegisClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AegisClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AegisClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AegisClient();
            GetEntityListOutcome getEntityList(const Model::GetEntityListRequest &request)const;
            void getEntityListAsync(const Model::GetEntityListRequest& request, const GetEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetEntityListOutcomeCallable getEntityListCallable(const Model::GetEntityListRequest& request) const;
            GetStatisticsByUuidOutcome getStatisticsByUuid(const Model::GetStatisticsByUuidRequest &request)const;
            void getStatisticsByUuidAsync(const Model::GetStatisticsByUuidRequest& request, const GetStatisticsByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetStatisticsByUuidOutcomeCallable getStatisticsByUuidCallable(const Model::GetStatisticsByUuidRequest& request) const;
            GetStatisticsOutcome getStatistics(const Model::GetStatisticsRequest &request)const;
            void getStatisticsAsync(const Model::GetStatisticsRequest& request, const GetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetStatisticsOutcomeCallable getStatisticsCallable(const Model::GetStatisticsRequest& request) const;
            DescribeVulDetailsOutcome describeVulDetails(const Model::DescribeVulDetailsRequest &request)const;
            void describeVulDetailsAsync(const Model::DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVulDetailsOutcomeCallable describeVulDetailsCallable(const Model::DescribeVulDetailsRequest& request) const;
            DeleteStrategyOutcome deleteStrategy(const Model::DeleteStrategyRequest &request)const;
            void deleteStrategyAsync(const Model::DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteStrategyOutcomeCallable deleteStrategyCallable(const Model::DeleteStrategyRequest& request) const;
            GetCrackStatisticsOutcome getCrackStatistics(const Model::GetCrackStatisticsRequest &request)const;
            void getCrackStatisticsAsync(const Model::GetCrackStatisticsRequest& request, const GetCrackStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetCrackStatisticsOutcomeCallable getCrackStatisticsCallable(const Model::GetCrackStatisticsRequest& request) const;
            DescribeWarningOutcome describeWarning(const Model::DescribeWarningRequest &request)const;
            void describeWarningAsync(const Model::DescribeWarningRequest& request, const DescribeWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeWarningOutcomeCallable describeWarningCallable(const Model::DescribeWarningRequest& request) const;
            ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
            void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
            DescribeSuspiciousEventsOutcome describeSuspiciousEvents(const Model::DescribeSuspiciousEventsRequest &request)const;
            void describeSuspiciousEventsAsync(const Model::DescribeSuspiciousEventsRequest& request, const DescribeSuspiciousEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeSuspiciousEventsOutcomeCallable describeSuspiciousEventsCallable(const Model::DescribeSuspiciousEventsRequest& request) const;
            CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
            void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
            DescribeVulListOutcome describeVulList(const Model::DescribeVulListRequest &request)const;
            void describeVulListAsync(const Model::DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeVulListOutcomeCallable describeVulListCallable(const Model::DescribeVulListRequest& request) const;
            UpgradeInstanceOutcome upgradeInstance(const Model::UpgradeInstanceRequest &request)const;
            void upgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpgradeInstanceOutcomeCallable upgradeInstanceCallable(const Model::UpgradeInstanceRequest& request) const;
            RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
            void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
            DescribeStrategyTargetOutcome describeStrategyTarget(const Model::DescribeStrategyTargetRequest &request)const;
            void describeStrategyTargetAsync(const Model::DescribeStrategyTargetRequest& request, const DescribeStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeStrategyTargetOutcomeCallable describeStrategyTargetCallable(const Model::DescribeStrategyTargetRequest& request) const;
            QueryLoginEventOutcome queryLoginEvent(const Model::QueryLoginEventRequest &request)const;
            void queryLoginEventAsync(const Model::QueryLoginEventRequest& request, const QueryLoginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QueryLoginEventOutcomeCallable queryLoginEventCallable(const Model::QueryLoginEventRequest& request) const;
            GetAccountStatisticsOutcome getAccountStatistics(const Model::GetAccountStatisticsRequest &request)const;
            void getAccountStatisticsAsync(const Model::GetAccountStatisticsRequest& request, const GetAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetAccountStatisticsOutcomeCallable getAccountStatisticsCallable(const Model::GetAccountStatisticsRequest& request) const;
            ModifyStrategyOutcome modifyStrategy(const Model::ModifyStrategyRequest &request)const;
            void modifyStrategyAsync(const Model::ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyStrategyOutcomeCallable modifyStrategyCallable(const Model::ModifyStrategyRequest& request) const;
            ModifyStrategyTargetOutcome modifyStrategyTarget(const Model::ModifyStrategyTargetRequest &request)const;
            void modifyStrategyTargetAsync(const Model::ModifyStrategyTargetRequest& request, const ModifyStrategyTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyStrategyTargetOutcomeCallable modifyStrategyTargetCallable(const Model::ModifyStrategyTargetRequest& request) const;
            ModifyBatchIgnoreVulOutcome modifyBatchIgnoreVul(const Model::ModifyBatchIgnoreVulRequest &request)const;
            void modifyBatchIgnoreVulAsync(const Model::ModifyBatchIgnoreVulRequest& request, const ModifyBatchIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyBatchIgnoreVulOutcomeCallable modifyBatchIgnoreVulCallable(const Model::ModifyBatchIgnoreVulRequest& request) const;
            DescribeWebshellOutcome describeWebshell(const Model::DescribeWebshellRequest &request)const;
            void describeWebshellAsync(const Model::DescribeWebshellRequest& request, const DescribeWebshellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeWebshellOutcomeCallable describeWebshellCallable(const Model::DescribeWebshellRequest& request) const;
            DescribeStratetyDetailOutcome describeStratetyDetail(const Model::DescribeStratetyDetailRequest &request)const;
            void describeStratetyDetailAsync(const Model::DescribeStratetyDetailRequest& request, const DescribeStratetyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeStratetyDetailOutcomeCallable describeStratetyDetailCallable(const Model::DescribeStratetyDetailRequest& request) const;
            DescribeStratetyOutcome describeStratety(const Model::DescribeStratetyRequest &request)const;
            void describeStratetyAsync(const Model::DescribeStratetyRequest& request, const DescribeStratetyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeStratetyOutcomeCallable describeStratetyCallable(const Model::DescribeStratetyRequest& request) const;
            DescribeLoginLogsOutcome describeLoginLogs(const Model::DescribeLoginLogsRequest &request)const;
            void describeLoginLogsAsync(const Model::DescribeLoginLogsRequest& request, const DescribeLoginLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeLoginLogsOutcomeCallable describeLoginLogsCallable(const Model::DescribeLoginLogsRequest& request) const;
            QueryCrackEventOutcome queryCrackEvent(const Model::QueryCrackEventRequest &request)const;
            void queryCrackEventAsync(const Model::QueryCrackEventRequest& request, const QueryCrackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            QueryCrackEventOutcomeCallable queryCrackEventCallable(const Model::QueryCrackEventRequest& request) const;
	
		private:
			virtual EndpointOutcome endpoint()const override;
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AEGIS_AEGISCLIENT_H_
