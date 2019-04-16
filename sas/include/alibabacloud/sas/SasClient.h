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

#ifndef ALIBABACLOUD_SAS_SASCLIENT_H_
#define ALIBABACLOUD_SAS_SASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SasExport.h"
#include "model/DescribeAlarmEventDetailRequest.h"
#include "model/DescribeAlarmEventDetailResult.h"
#include "model/DescribeAlarmEventListRequest.h"
#include "model/DescribeAlarmEventListResult.h"
#include "model/DescribeSuspEventsRequest.h"
#include "model/DescribeSuspEventsResult.h"
#include "model/DescribeConcernNecessityRequest.h"
#include "model/DescribeConcernNecessityResult.h"
#include "model/ModifySecurityCheckScheduleConfigRequest.h"
#include "model/ModifySecurityCheckScheduleConfigResult.h"
#include "model/DescribeCheckWarningSummaryRequest.h"
#include "model/DescribeCheckWarningSummaryResult.h"
#include "model/DescribeEmgVulGroupRequest.h"
#include "model/DescribeEmgVulGroupResult.h"
#include "model/DescribeAutoDelConfigRequest.h"
#include "model/DescribeAutoDelConfigResult.h"
#include "model/DescribeVulListRequest.h"
#include "model/DescribeVulListResult.h"
#include "model/DescribeVulWhitelistRequest.h"
#include "model/DescribeVulWhitelistResult.h"
#include "model/ModifyRiskCheckStatusRequest.h"
#include "model/ModifyRiskCheckStatusResult.h"
#include "model/DescribeSecurityCheckScheduleConfigRequest.h"
#include "model/DescribeSecurityCheckScheduleConfigResult.h"
#include "model/StartBaselineSecurityCheckRequest.h"
#include "model/StartBaselineSecurityCheckResult.h"
#include "model/ModifyPushAllTaskRequest.h"
#include "model/ModifyPushAllTaskResult.h"
#include "model/DescribeRiskCheckResultRequest.h"
#include "model/DescribeRiskCheckResultResult.h"
#include "model/DescribeCheckWarningDetailRequest.h"
#include "model/DescribeCheckWarningDetailResult.h"
#include "model/DescribeSuspEventDetailRequest.h"
#include "model/DescribeSuspEventDetailResult.h"
#include "model/DescribeStratetyRequest.h"
#include "model/DescribeStratetyResult.h"
#include "model/DescribeWarningMachinesRequest.h"
#include "model/DescribeWarningMachinesResult.h"
#include "model/ModifyRiskSingleResultStatusRequest.h"
#include "model/ModifyRiskSingleResultStatusResult.h"
#include "model/ModifyAutoDelConfigRequest.h"
#include "model/ModifyAutoDelConfigResult.h"
#include "model/ModifyEmgVulSubmitRequest.h"
#include "model/ModifyEmgVulSubmitResult.h"
#include "model/DescribeVulDetailsRequest.h"
#include "model/DescribeVulDetailsResult.h"
#include "model/ModifyCreateVulWhitelistRequest.h"
#include "model/ModifyCreateVulWhitelistResult.h"
#include "model/DescribeGroupedVulRequest.h"
#include "model/DescribeGroupedVulResult.h"
#include "model/ModifyDeleteVulWhitelistRequest.h"
#include "model/ModifyDeleteVulWhitelistResult.h"
#include "model/DescribeStrategyExecDetailRequest.h"
#include "model/DescribeStrategyExecDetailResult.h"
#include "model/DescribeRiskCheckSummaryRequest.h"
#include "model/DescribeRiskCheckSummaryResult.h"
#include "model/ModifyOperateVulRequest.h"
#include "model/ModifyOperateVulResult.h"
#include "model/DescribeRiskItemTypeRequest.h"
#include "model/DescribeRiskItemTypeResult.h"
#include "model/DescribeUserBaselineAuthorizationRequest.h"
#include "model/DescribeUserBaselineAuthorizationResult.h"
#include "model/DescribeCheckWarningsRequest.h"
#include "model/DescribeCheckWarningsResult.h"
#include "model/ModifyConcernNecessityRequest.h"
#include "model/ModifyConcernNecessityResult.h"


namespace AlibabaCloud
{
	namespace Sas
	{
		class ALIBABACLOUD_SAS_EXPORT SasClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeAlarmEventDetailResult> DescribeAlarmEventDetailOutcome;
			typedef std::future<DescribeAlarmEventDetailOutcome> DescribeAlarmEventDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAlarmEventDetailRequest&, const DescribeAlarmEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmEventListResult> DescribeAlarmEventListOutcome;
			typedef std::future<DescribeAlarmEventListOutcome> DescribeAlarmEventListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAlarmEventListRequest&, const DescribeAlarmEventListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventsResult> DescribeSuspEventsOutcome;
			typedef std::future<DescribeSuspEventsOutcome> DescribeSuspEventsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventsRequest&, const DescribeSuspEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeConcernNecessityResult> DescribeConcernNecessityOutcome;
			typedef std::future<DescribeConcernNecessityOutcome> DescribeConcernNecessityOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeConcernNecessityRequest&, const DescribeConcernNecessityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConcernNecessityAsyncHandler;
			typedef Outcome<Error, Model::ModifySecurityCheckScheduleConfigResult> ModifySecurityCheckScheduleConfigOutcome;
			typedef std::future<ModifySecurityCheckScheduleConfigOutcome> ModifySecurityCheckScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifySecurityCheckScheduleConfigRequest&, const ModifySecurityCheckScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityCheckScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningSummaryResult> DescribeCheckWarningSummaryOutcome;
			typedef std::future<DescribeCheckWarningSummaryOutcome> DescribeCheckWarningSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningSummaryRequest&, const DescribeCheckWarningSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningSummaryAsyncHandler;
			typedef Outcome<Error, Model::DescribeEmgVulGroupResult> DescribeEmgVulGroupOutcome;
			typedef std::future<DescribeEmgVulGroupOutcome> DescribeEmgVulGroupOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeEmgVulGroupRequest&, const DescribeEmgVulGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmgVulGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoDelConfigResult> DescribeAutoDelConfigOutcome;
			typedef std::future<DescribeAutoDelConfigOutcome> DescribeAutoDelConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeAutoDelConfigRequest&, const DescribeAutoDelConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoDelConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulListResult> DescribeVulListOutcome;
			typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulListRequest&, const DescribeVulListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulWhitelistResult> DescribeVulWhitelistOutcome;
			typedef std::future<DescribeVulWhitelistOutcome> DescribeVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulWhitelistRequest&, const DescribeVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyRiskCheckStatusResult> ModifyRiskCheckStatusOutcome;
			typedef std::future<ModifyRiskCheckStatusOutcome> ModifyRiskCheckStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyRiskCheckStatusRequest&, const ModifyRiskCheckStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCheckStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityCheckScheduleConfigResult> DescribeSecurityCheckScheduleConfigOutcome;
			typedef std::future<DescribeSecurityCheckScheduleConfigOutcome> DescribeSecurityCheckScheduleConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSecurityCheckScheduleConfigRequest&, const DescribeSecurityCheckScheduleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityCheckScheduleConfigAsyncHandler;
			typedef Outcome<Error, Model::StartBaselineSecurityCheckResult> StartBaselineSecurityCheckOutcome;
			typedef std::future<StartBaselineSecurityCheckOutcome> StartBaselineSecurityCheckOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::StartBaselineSecurityCheckRequest&, const StartBaselineSecurityCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartBaselineSecurityCheckAsyncHandler;
			typedef Outcome<Error, Model::ModifyPushAllTaskResult> ModifyPushAllTaskOutcome;
			typedef std::future<ModifyPushAllTaskOutcome> ModifyPushAllTaskOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyPushAllTaskRequest&, const ModifyPushAllTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPushAllTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskCheckResultResult> DescribeRiskCheckResultOutcome;
			typedef std::future<DescribeRiskCheckResultOutcome> DescribeRiskCheckResultOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskCheckResultRequest&, const DescribeRiskCheckResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCheckResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningDetailResult> DescribeCheckWarningDetailOutcome;
			typedef std::future<DescribeCheckWarningDetailOutcome> DescribeCheckWarningDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningDetailRequest&, const DescribeCheckWarningDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeSuspEventDetailResult> DescribeSuspEventDetailOutcome;
			typedef std::future<DescribeSuspEventDetailOutcome> DescribeSuspEventDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeSuspEventDetailRequest&, const DescribeSuspEventDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspEventDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeStratetyResult> DescribeStratetyOutcome;
			typedef std::future<DescribeStratetyOutcome> DescribeStratetyOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeStratetyRequest&, const DescribeStratetyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStratetyAsyncHandler;
			typedef Outcome<Error, Model::DescribeWarningMachinesResult> DescribeWarningMachinesOutcome;
			typedef std::future<DescribeWarningMachinesOutcome> DescribeWarningMachinesOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeWarningMachinesRequest&, const DescribeWarningMachinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningMachinesAsyncHandler;
			typedef Outcome<Error, Model::ModifyRiskSingleResultStatusResult> ModifyRiskSingleResultStatusOutcome;
			typedef std::future<ModifyRiskSingleResultStatusOutcome> ModifyRiskSingleResultStatusOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyRiskSingleResultStatusRequest&, const ModifyRiskSingleResultStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskSingleResultStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyAutoDelConfigResult> ModifyAutoDelConfigOutcome;
			typedef std::future<ModifyAutoDelConfigOutcome> ModifyAutoDelConfigOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyAutoDelConfigRequest&, const ModifyAutoDelConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoDelConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyEmgVulSubmitResult> ModifyEmgVulSubmitOutcome;
			typedef std::future<ModifyEmgVulSubmitOutcome> ModifyEmgVulSubmitOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyEmgVulSubmitRequest&, const ModifyEmgVulSubmitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEmgVulSubmitAsyncHandler;
			typedef Outcome<Error, Model::DescribeVulDetailsResult> DescribeVulDetailsOutcome;
			typedef std::future<DescribeVulDetailsOutcome> DescribeVulDetailsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeVulDetailsRequest&, const DescribeVulDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDetailsAsyncHandler;
			typedef Outcome<Error, Model::ModifyCreateVulWhitelistResult> ModifyCreateVulWhitelistOutcome;
			typedef std::future<ModifyCreateVulWhitelistOutcome> ModifyCreateVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyCreateVulWhitelistRequest&, const ModifyCreateVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCreateVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupedVulResult> DescribeGroupedVulOutcome;
			typedef std::future<DescribeGroupedVulOutcome> DescribeGroupedVulOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeGroupedVulRequest&, const DescribeGroupedVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupedVulAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeleteVulWhitelistResult> ModifyDeleteVulWhitelistOutcome;
			typedef std::future<ModifyDeleteVulWhitelistOutcome> ModifyDeleteVulWhitelistOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyDeleteVulWhitelistRequest&, const ModifyDeleteVulWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeleteVulWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeStrategyExecDetailResult> DescribeStrategyExecDetailOutcome;
			typedef std::future<DescribeStrategyExecDetailOutcome> DescribeStrategyExecDetailOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeStrategyExecDetailRequest&, const DescribeStrategyExecDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyExecDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskCheckSummaryResult> DescribeRiskCheckSummaryOutcome;
			typedef std::future<DescribeRiskCheckSummaryOutcome> DescribeRiskCheckSummaryOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskCheckSummaryRequest&, const DescribeRiskCheckSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCheckSummaryAsyncHandler;
			typedef Outcome<Error, Model::ModifyOperateVulResult> ModifyOperateVulOutcome;
			typedef std::future<ModifyOperateVulOutcome> ModifyOperateVulOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyOperateVulRequest&, const ModifyOperateVulOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOperateVulAsyncHandler;
			typedef Outcome<Error, Model::DescribeRiskItemTypeResult> DescribeRiskItemTypeOutcome;
			typedef std::future<DescribeRiskItemTypeOutcome> DescribeRiskItemTypeOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeRiskItemTypeRequest&, const DescribeRiskItemTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskItemTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserBaselineAuthorizationResult> DescribeUserBaselineAuthorizationOutcome;
			typedef std::future<DescribeUserBaselineAuthorizationOutcome> DescribeUserBaselineAuthorizationOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeUserBaselineAuthorizationRequest&, const DescribeUserBaselineAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBaselineAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckWarningsResult> DescribeCheckWarningsOutcome;
			typedef std::future<DescribeCheckWarningsOutcome> DescribeCheckWarningsOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::DescribeCheckWarningsRequest&, const DescribeCheckWarningsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckWarningsAsyncHandler;
			typedef Outcome<Error, Model::ModifyConcernNecessityResult> ModifyConcernNecessityOutcome;
			typedef std::future<ModifyConcernNecessityOutcome> ModifyConcernNecessityOutcomeCallable;
			typedef std::function<void(const SasClient*, const Model::ModifyConcernNecessityRequest&, const ModifyConcernNecessityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConcernNecessityAsyncHandler;

			SasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SasClient();
			DescribeAlarmEventDetailOutcome describeAlarmEventDetail(const Model::DescribeAlarmEventDetailRequest &request)const;
			void describeAlarmEventDetailAsync(const Model::DescribeAlarmEventDetailRequest& request, const DescribeAlarmEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventDetailOutcomeCallable describeAlarmEventDetailCallable(const Model::DescribeAlarmEventDetailRequest& request) const;
			DescribeAlarmEventListOutcome describeAlarmEventList(const Model::DescribeAlarmEventListRequest &request)const;
			void describeAlarmEventListAsync(const Model::DescribeAlarmEventListRequest& request, const DescribeAlarmEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmEventListOutcomeCallable describeAlarmEventListCallable(const Model::DescribeAlarmEventListRequest& request) const;
			DescribeSuspEventsOutcome describeSuspEvents(const Model::DescribeSuspEventsRequest &request)const;
			void describeSuspEventsAsync(const Model::DescribeSuspEventsRequest& request, const DescribeSuspEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventsOutcomeCallable describeSuspEventsCallable(const Model::DescribeSuspEventsRequest& request) const;
			DescribeConcernNecessityOutcome describeConcernNecessity(const Model::DescribeConcernNecessityRequest &request)const;
			void describeConcernNecessityAsync(const Model::DescribeConcernNecessityRequest& request, const DescribeConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConcernNecessityOutcomeCallable describeConcernNecessityCallable(const Model::DescribeConcernNecessityRequest& request) const;
			ModifySecurityCheckScheduleConfigOutcome modifySecurityCheckScheduleConfig(const Model::ModifySecurityCheckScheduleConfigRequest &request)const;
			void modifySecurityCheckScheduleConfigAsync(const Model::ModifySecurityCheckScheduleConfigRequest& request, const ModifySecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySecurityCheckScheduleConfigOutcomeCallable modifySecurityCheckScheduleConfigCallable(const Model::ModifySecurityCheckScheduleConfigRequest& request) const;
			DescribeCheckWarningSummaryOutcome describeCheckWarningSummary(const Model::DescribeCheckWarningSummaryRequest &request)const;
			void describeCheckWarningSummaryAsync(const Model::DescribeCheckWarningSummaryRequest& request, const DescribeCheckWarningSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningSummaryOutcomeCallable describeCheckWarningSummaryCallable(const Model::DescribeCheckWarningSummaryRequest& request) const;
			DescribeEmgVulGroupOutcome describeEmgVulGroup(const Model::DescribeEmgVulGroupRequest &request)const;
			void describeEmgVulGroupAsync(const Model::DescribeEmgVulGroupRequest& request, const DescribeEmgVulGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmgVulGroupOutcomeCallable describeEmgVulGroupCallable(const Model::DescribeEmgVulGroupRequest& request) const;
			DescribeAutoDelConfigOutcome describeAutoDelConfig(const Model::DescribeAutoDelConfigRequest &request)const;
			void describeAutoDelConfigAsync(const Model::DescribeAutoDelConfigRequest& request, const DescribeAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoDelConfigOutcomeCallable describeAutoDelConfigCallable(const Model::DescribeAutoDelConfigRequest& request) const;
			DescribeVulListOutcome describeVulList(const Model::DescribeVulListRequest &request)const;
			void describeVulListAsync(const Model::DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulListOutcomeCallable describeVulListCallable(const Model::DescribeVulListRequest& request) const;
			DescribeVulWhitelistOutcome describeVulWhitelist(const Model::DescribeVulWhitelistRequest &request)const;
			void describeVulWhitelistAsync(const Model::DescribeVulWhitelistRequest& request, const DescribeVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulWhitelistOutcomeCallable describeVulWhitelistCallable(const Model::DescribeVulWhitelistRequest& request) const;
			ModifyRiskCheckStatusOutcome modifyRiskCheckStatus(const Model::ModifyRiskCheckStatusRequest &request)const;
			void modifyRiskCheckStatusAsync(const Model::ModifyRiskCheckStatusRequest& request, const ModifyRiskCheckStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRiskCheckStatusOutcomeCallable modifyRiskCheckStatusCallable(const Model::ModifyRiskCheckStatusRequest& request) const;
			DescribeSecurityCheckScheduleConfigOutcome describeSecurityCheckScheduleConfig(const Model::DescribeSecurityCheckScheduleConfigRequest &request)const;
			void describeSecurityCheckScheduleConfigAsync(const Model::DescribeSecurityCheckScheduleConfigRequest& request, const DescribeSecurityCheckScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityCheckScheduleConfigOutcomeCallable describeSecurityCheckScheduleConfigCallable(const Model::DescribeSecurityCheckScheduleConfigRequest& request) const;
			StartBaselineSecurityCheckOutcome startBaselineSecurityCheck(const Model::StartBaselineSecurityCheckRequest &request)const;
			void startBaselineSecurityCheckAsync(const Model::StartBaselineSecurityCheckRequest& request, const StartBaselineSecurityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartBaselineSecurityCheckOutcomeCallable startBaselineSecurityCheckCallable(const Model::StartBaselineSecurityCheckRequest& request) const;
			ModifyPushAllTaskOutcome modifyPushAllTask(const Model::ModifyPushAllTaskRequest &request)const;
			void modifyPushAllTaskAsync(const Model::ModifyPushAllTaskRequest& request, const ModifyPushAllTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPushAllTaskOutcomeCallable modifyPushAllTaskCallable(const Model::ModifyPushAllTaskRequest& request) const;
			DescribeRiskCheckResultOutcome describeRiskCheckResult(const Model::DescribeRiskCheckResultRequest &request)const;
			void describeRiskCheckResultAsync(const Model::DescribeRiskCheckResultRequest& request, const DescribeRiskCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskCheckResultOutcomeCallable describeRiskCheckResultCallable(const Model::DescribeRiskCheckResultRequest& request) const;
			DescribeCheckWarningDetailOutcome describeCheckWarningDetail(const Model::DescribeCheckWarningDetailRequest &request)const;
			void describeCheckWarningDetailAsync(const Model::DescribeCheckWarningDetailRequest& request, const DescribeCheckWarningDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningDetailOutcomeCallable describeCheckWarningDetailCallable(const Model::DescribeCheckWarningDetailRequest& request) const;
			DescribeSuspEventDetailOutcome describeSuspEventDetail(const Model::DescribeSuspEventDetailRequest &request)const;
			void describeSuspEventDetailAsync(const Model::DescribeSuspEventDetailRequest& request, const DescribeSuspEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSuspEventDetailOutcomeCallable describeSuspEventDetailCallable(const Model::DescribeSuspEventDetailRequest& request) const;
			DescribeStratetyOutcome describeStratety(const Model::DescribeStratetyRequest &request)const;
			void describeStratetyAsync(const Model::DescribeStratetyRequest& request, const DescribeStratetyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStratetyOutcomeCallable describeStratetyCallable(const Model::DescribeStratetyRequest& request) const;
			DescribeWarningMachinesOutcome describeWarningMachines(const Model::DescribeWarningMachinesRequest &request)const;
			void describeWarningMachinesAsync(const Model::DescribeWarningMachinesRequest& request, const DescribeWarningMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWarningMachinesOutcomeCallable describeWarningMachinesCallable(const Model::DescribeWarningMachinesRequest& request) const;
			ModifyRiskSingleResultStatusOutcome modifyRiskSingleResultStatus(const Model::ModifyRiskSingleResultStatusRequest &request)const;
			void modifyRiskSingleResultStatusAsync(const Model::ModifyRiskSingleResultStatusRequest& request, const ModifyRiskSingleResultStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRiskSingleResultStatusOutcomeCallable modifyRiskSingleResultStatusCallable(const Model::ModifyRiskSingleResultStatusRequest& request) const;
			ModifyAutoDelConfigOutcome modifyAutoDelConfig(const Model::ModifyAutoDelConfigRequest &request)const;
			void modifyAutoDelConfigAsync(const Model::ModifyAutoDelConfigRequest& request, const ModifyAutoDelConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAutoDelConfigOutcomeCallable modifyAutoDelConfigCallable(const Model::ModifyAutoDelConfigRequest& request) const;
			ModifyEmgVulSubmitOutcome modifyEmgVulSubmit(const Model::ModifyEmgVulSubmitRequest &request)const;
			void modifyEmgVulSubmitAsync(const Model::ModifyEmgVulSubmitRequest& request, const ModifyEmgVulSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyEmgVulSubmitOutcomeCallable modifyEmgVulSubmitCallable(const Model::ModifyEmgVulSubmitRequest& request) const;
			DescribeVulDetailsOutcome describeVulDetails(const Model::DescribeVulDetailsRequest &request)const;
			void describeVulDetailsAsync(const Model::DescribeVulDetailsRequest& request, const DescribeVulDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVulDetailsOutcomeCallable describeVulDetailsCallable(const Model::DescribeVulDetailsRequest& request) const;
			ModifyCreateVulWhitelistOutcome modifyCreateVulWhitelist(const Model::ModifyCreateVulWhitelistRequest &request)const;
			void modifyCreateVulWhitelistAsync(const Model::ModifyCreateVulWhitelistRequest& request, const ModifyCreateVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCreateVulWhitelistOutcomeCallable modifyCreateVulWhitelistCallable(const Model::ModifyCreateVulWhitelistRequest& request) const;
			DescribeGroupedVulOutcome describeGroupedVul(const Model::DescribeGroupedVulRequest &request)const;
			void describeGroupedVulAsync(const Model::DescribeGroupedVulRequest& request, const DescribeGroupedVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupedVulOutcomeCallable describeGroupedVulCallable(const Model::DescribeGroupedVulRequest& request) const;
			ModifyDeleteVulWhitelistOutcome modifyDeleteVulWhitelist(const Model::ModifyDeleteVulWhitelistRequest &request)const;
			void modifyDeleteVulWhitelistAsync(const Model::ModifyDeleteVulWhitelistRequest& request, const ModifyDeleteVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeleteVulWhitelistOutcomeCallable modifyDeleteVulWhitelistCallable(const Model::ModifyDeleteVulWhitelistRequest& request) const;
			DescribeStrategyExecDetailOutcome describeStrategyExecDetail(const Model::DescribeStrategyExecDetailRequest &request)const;
			void describeStrategyExecDetailAsync(const Model::DescribeStrategyExecDetailRequest& request, const DescribeStrategyExecDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStrategyExecDetailOutcomeCallable describeStrategyExecDetailCallable(const Model::DescribeStrategyExecDetailRequest& request) const;
			DescribeRiskCheckSummaryOutcome describeRiskCheckSummary(const Model::DescribeRiskCheckSummaryRequest &request)const;
			void describeRiskCheckSummaryAsync(const Model::DescribeRiskCheckSummaryRequest& request, const DescribeRiskCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskCheckSummaryOutcomeCallable describeRiskCheckSummaryCallable(const Model::DescribeRiskCheckSummaryRequest& request) const;
			ModifyOperateVulOutcome modifyOperateVul(const Model::ModifyOperateVulRequest &request)const;
			void modifyOperateVulAsync(const Model::ModifyOperateVulRequest& request, const ModifyOperateVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOperateVulOutcomeCallable modifyOperateVulCallable(const Model::ModifyOperateVulRequest& request) const;
			DescribeRiskItemTypeOutcome describeRiskItemType(const Model::DescribeRiskItemTypeRequest &request)const;
			void describeRiskItemTypeAsync(const Model::DescribeRiskItemTypeRequest& request, const DescribeRiskItemTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRiskItemTypeOutcomeCallable describeRiskItemTypeCallable(const Model::DescribeRiskItemTypeRequest& request) const;
			DescribeUserBaselineAuthorizationOutcome describeUserBaselineAuthorization(const Model::DescribeUserBaselineAuthorizationRequest &request)const;
			void describeUserBaselineAuthorizationAsync(const Model::DescribeUserBaselineAuthorizationRequest& request, const DescribeUserBaselineAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserBaselineAuthorizationOutcomeCallable describeUserBaselineAuthorizationCallable(const Model::DescribeUserBaselineAuthorizationRequest& request) const;
			DescribeCheckWarningsOutcome describeCheckWarnings(const Model::DescribeCheckWarningsRequest &request)const;
			void describeCheckWarningsAsync(const Model::DescribeCheckWarningsRequest& request, const DescribeCheckWarningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckWarningsOutcomeCallable describeCheckWarningsCallable(const Model::DescribeCheckWarningsRequest& request) const;
			ModifyConcernNecessityOutcome modifyConcernNecessity(const Model::ModifyConcernNecessityRequest &request)const;
			void modifyConcernNecessityAsync(const Model::ModifyConcernNecessityRequest& request, const ModifyConcernNecessityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConcernNecessityOutcomeCallable modifyConcernNecessityCallable(const Model::ModifyConcernNecessityRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SAS_SASCLIENT_H_
