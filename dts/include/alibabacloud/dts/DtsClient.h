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

#ifndef ALIBABACLOUD_DTS_DTSCLIENT_H_
#define ALIBABACLOUD_DTS_DTSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DtsExport.h"
#include "model/ConfigureDtsJobRequest.h"
#include "model/ConfigureDtsJobResult.h"
#include "model/ConfigureMigrationJobRequest.h"
#include "model/ConfigureMigrationJobResult.h"
#include "model/ConfigureMigrationJobAlertRequest.h"
#include "model/ConfigureMigrationJobAlertResult.h"
#include "model/ConfigureSubscriptionRequest.h"
#include "model/ConfigureSubscriptionResult.h"
#include "model/ConfigureSubscriptionInstanceRequest.h"
#include "model/ConfigureSubscriptionInstanceResult.h"
#include "model/ConfigureSubscriptionInstanceAlertRequest.h"
#include "model/ConfigureSubscriptionInstanceAlertResult.h"
#include "model/ConfigureSynchronizationJobRequest.h"
#include "model/ConfigureSynchronizationJobResult.h"
#include "model/ConfigureSynchronizationJobAlertRequest.h"
#include "model/ConfigureSynchronizationJobAlertResult.h"
#include "model/ConfigureSynchronizationJobReplicatorCompareRequest.h"
#include "model/ConfigureSynchronizationJobReplicatorCompareResult.h"
#include "model/CountJobByConditionRequest.h"
#include "model/CountJobByConditionResult.h"
#include "model/CreateConsumerChannelRequest.h"
#include "model/CreateConsumerChannelResult.h"
#include "model/CreateConsumerGroupRequest.h"
#include "model/CreateConsumerGroupResult.h"
#include "model/CreateDedicatedClusterMonitorRuleRequest.h"
#include "model/CreateDedicatedClusterMonitorRuleResult.h"
#include "model/CreateDtsInstanceRequest.h"
#include "model/CreateDtsInstanceResult.h"
#include "model/CreateJobMonitorRuleRequest.h"
#include "model/CreateJobMonitorRuleResult.h"
#include "model/CreateMigrationJobRequest.h"
#include "model/CreateMigrationJobResult.h"
#include "model/CreateSubscriptionInstanceRequest.h"
#include "model/CreateSubscriptionInstanceResult.h"
#include "model/CreateSynchronizationJobRequest.h"
#include "model/CreateSynchronizationJobResult.h"
#include "model/DeleteConsumerChannelRequest.h"
#include "model/DeleteConsumerChannelResult.h"
#include "model/DeleteConsumerGroupRequest.h"
#include "model/DeleteConsumerGroupResult.h"
#include "model/DeleteDtsJobRequest.h"
#include "model/DeleteDtsJobResult.h"
#include "model/DeleteDtsJobsRequest.h"
#include "model/DeleteDtsJobsResult.h"
#include "model/DeleteMigrationJobRequest.h"
#include "model/DeleteMigrationJobResult.h"
#include "model/DeleteSubscriptionInstanceRequest.h"
#include "model/DeleteSubscriptionInstanceResult.h"
#include "model/DeleteSynchronizationJobRequest.h"
#include "model/DeleteSynchronizationJobResult.h"
#include "model/DescribeChannelAccountRequest.h"
#include "model/DescribeChannelAccountResult.h"
#include "model/DescribeCheckJobsRequest.h"
#include "model/DescribeCheckJobsResult.h"
#include "model/DescribeClusterOperateLogsRequest.h"
#include "model/DescribeClusterOperateLogsResult.h"
#include "model/DescribeClusterUsedUtilizationRequest.h"
#include "model/DescribeClusterUsedUtilizationResult.h"
#include "model/DescribeConnectionStatusRequest.h"
#include "model/DescribeConnectionStatusResult.h"
#include "model/DescribeConsumerChannelRequest.h"
#include "model/DescribeConsumerChannelResult.h"
#include "model/DescribeConsumerGroupRequest.h"
#include "model/DescribeConsumerGroupResult.h"
#include "model/DescribeDTSIPRequest.h"
#include "model/DescribeDTSIPResult.h"
#include "model/DescribeDataCheckReportUrlRequest.h"
#include "model/DescribeDataCheckReportUrlResult.h"
#include "model/DescribeDataCheckTableDetailsRequest.h"
#include "model/DescribeDataCheckTableDetailsResult.h"
#include "model/DescribeDataCheckTableDiffDetailsRequest.h"
#include "model/DescribeDataCheckTableDiffDetailsResult.h"
#include "model/DescribeDedicatedClusterRequest.h"
#include "model/DescribeDedicatedClusterResult.h"
#include "model/DescribeDedicatedClusterMonitorRuleRequest.h"
#include "model/DescribeDedicatedClusterMonitorRuleResult.h"
#include "model/DescribeDtsEtlJobVersionInfoRequest.h"
#include "model/DescribeDtsEtlJobVersionInfoResult.h"
#include "model/DescribeDtsJobDetailRequest.h"
#include "model/DescribeDtsJobDetailResult.h"
#include "model/DescribeDtsJobsRequest.h"
#include "model/DescribeDtsJobsResult.h"
#include "model/DescribeDtsServiceLogRequest.h"
#include "model/DescribeDtsServiceLogResult.h"
#include "model/DescribeEndpointSwitchStatusRequest.h"
#include "model/DescribeEndpointSwitchStatusResult.h"
#include "model/DescribeEtlJobLogsRequest.h"
#include "model/DescribeEtlJobLogsResult.h"
#include "model/DescribeInitializationStatusRequest.h"
#include "model/DescribeInitializationStatusResult.h"
#include "model/DescribeJobMonitorRuleRequest.h"
#include "model/DescribeJobMonitorRuleResult.h"
#include "model/DescribeMetricListRequest.h"
#include "model/DescribeMetricListResult.h"
#include "model/DescribeMigrationJobAlertRequest.h"
#include "model/DescribeMigrationJobAlertResult.h"
#include "model/DescribeMigrationJobDetailRequest.h"
#include "model/DescribeMigrationJobDetailResult.h"
#include "model/DescribeMigrationJobStatusRequest.h"
#include "model/DescribeMigrationJobStatusResult.h"
#include "model/DescribeMigrationJobsRequest.h"
#include "model/DescribeMigrationJobsResult.h"
#include "model/DescribePreCheckStatusRequest.h"
#include "model/DescribePreCheckStatusResult.h"
#include "model/DescribeSubscriptionInstanceAlertRequest.h"
#include "model/DescribeSubscriptionInstanceAlertResult.h"
#include "model/DescribeSubscriptionInstanceStatusRequest.h"
#include "model/DescribeSubscriptionInstanceStatusResult.h"
#include "model/DescribeSubscriptionInstancesRequest.h"
#include "model/DescribeSubscriptionInstancesResult.h"
#include "model/DescribeSubscriptionMetaRequest.h"
#include "model/DescribeSubscriptionMetaResult.h"
#include "model/DescribeSynchronizationJobAlertRequest.h"
#include "model/DescribeSynchronizationJobAlertResult.h"
#include "model/DescribeSynchronizationJobReplicatorCompareRequest.h"
#include "model/DescribeSynchronizationJobReplicatorCompareResult.h"
#include "model/DescribeSynchronizationJobStatusRequest.h"
#include "model/DescribeSynchronizationJobStatusResult.h"
#include "model/DescribeSynchronizationJobStatusListRequest.h"
#include "model/DescribeSynchronizationJobStatusListResult.h"
#include "model/DescribeSynchronizationJobsRequest.h"
#include "model/DescribeSynchronizationJobsResult.h"
#include "model/DescribeSynchronizationObjectModifyStatusRequest.h"
#include "model/DescribeSynchronizationObjectModifyStatusResult.h"
#include "model/DescribeTagKeysRequest.h"
#include "model/DescribeTagKeysResult.h"
#include "model/DescribeTagValuesRequest.h"
#include "model/DescribeTagValuesResult.h"
#include "model/InitDtsRdsInstanceRequest.h"
#include "model/InitDtsRdsInstanceResult.h"
#include "model/ListDedicatedClusterRequest.h"
#include "model/ListDedicatedClusterResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyConsumerChannelRequest.h"
#include "model/ModifyConsumerChannelResult.h"
#include "model/ModifyConsumerGroupPasswordRequest.h"
#include "model/ModifyConsumerGroupPasswordResult.h"
#include "model/ModifyConsumptionTimestampRequest.h"
#include "model/ModifyConsumptionTimestampResult.h"
#include "model/ModifyDedicatedClusterRequest.h"
#include "model/ModifyDedicatedClusterResult.h"
#include "model/ModifyDtsJobRequest.h"
#include "model/ModifyDtsJobResult.h"
#include "model/ModifyDtsJobDedicatedClusterRequest.h"
#include "model/ModifyDtsJobDedicatedClusterResult.h"
#include "model/ModifyDtsJobDuLimitRequest.h"
#include "model/ModifyDtsJobDuLimitResult.h"
#include "model/ModifyDtsJobNameRequest.h"
#include "model/ModifyDtsJobNameResult.h"
#include "model/ModifyDtsJobPasswordRequest.h"
#include "model/ModifyDtsJobPasswordResult.h"
#include "model/ModifySubscriptionRequest.h"
#include "model/ModifySubscriptionResult.h"
#include "model/ModifySubscriptionObjectRequest.h"
#include "model/ModifySubscriptionObjectResult.h"
#include "model/ModifySynchronizationObjectRequest.h"
#include "model/ModifySynchronizationObjectResult.h"
#include "model/RenewInstanceRequest.h"
#include "model/RenewInstanceResult.h"
#include "model/ResetDtsJobRequest.h"
#include "model/ResetDtsJobResult.h"
#include "model/ResetSynchronizationJobRequest.h"
#include "model/ResetSynchronizationJobResult.h"
#include "model/ReverseTwoWayDirectionRequest.h"
#include "model/ReverseTwoWayDirectionResult.h"
#include "model/ShieldPrecheckRequest.h"
#include "model/ShieldPrecheckResult.h"
#include "model/SkipPreCheckRequest.h"
#include "model/SkipPreCheckResult.h"
#include "model/StartDtsJobRequest.h"
#include "model/StartDtsJobResult.h"
#include "model/StartDtsJobsRequest.h"
#include "model/StartDtsJobsResult.h"
#include "model/StartMigrationJobRequest.h"
#include "model/StartMigrationJobResult.h"
#include "model/StartSubscriptionInstanceRequest.h"
#include "model/StartSubscriptionInstanceResult.h"
#include "model/StartSynchronizationJobRequest.h"
#include "model/StartSynchronizationJobResult.h"
#include "model/StopDedicatedClusterRequest.h"
#include "model/StopDedicatedClusterResult.h"
#include "model/StopDtsJobRequest.h"
#include "model/StopDtsJobResult.h"
#include "model/StopDtsJobsRequest.h"
#include "model/StopDtsJobsResult.h"
#include "model/StopMigrationJobRequest.h"
#include "model/StopMigrationJobResult.h"
#include "model/SummaryJobDetailRequest.h"
#include "model/SummaryJobDetailResult.h"
#include "model/SuspendDtsJobRequest.h"
#include "model/SuspendDtsJobResult.h"
#include "model/SuspendDtsJobsRequest.h"
#include "model/SuspendDtsJobsResult.h"
#include "model/SuspendMigrationJobRequest.h"
#include "model/SuspendMigrationJobResult.h"
#include "model/SuspendSynchronizationJobRequest.h"
#include "model/SuspendSynchronizationJobResult.h"
#include "model/SwitchPhysicalDtsJobToCloudRequest.h"
#include "model/SwitchPhysicalDtsJobToCloudResult.h"
#include "model/SwitchSynchronizationEndpointRequest.h"
#include "model/SwitchSynchronizationEndpointResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TransferInstanceClassRequest.h"
#include "model/TransferInstanceClassResult.h"
#include "model/TransferPayTypeRequest.h"
#include "model/TransferPayTypeResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpgradeTwoWayRequest.h"
#include "model/UpgradeTwoWayResult.h"
#include "model/WhiteIpListRequest.h"
#include "model/WhiteIpListResult.h"


namespace AlibabaCloud
{
	namespace Dts
	{
		class ALIBABACLOUD_DTS_EXPORT DtsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ConfigureDtsJobResult> ConfigureDtsJobOutcome;
			typedef std::future<ConfigureDtsJobOutcome> ConfigureDtsJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureDtsJobRequest&, const ConfigureDtsJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureDtsJobAsyncHandler;
			typedef Outcome<Error, Model::ConfigureMigrationJobResult> ConfigureMigrationJobOutcome;
			typedef std::future<ConfigureMigrationJobOutcome> ConfigureMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureMigrationJobRequest&, const ConfigureMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::ConfigureMigrationJobAlertResult> ConfigureMigrationJobAlertOutcome;
			typedef std::future<ConfigureMigrationJobAlertOutcome> ConfigureMigrationJobAlertOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureMigrationJobAlertRequest&, const ConfigureMigrationJobAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureMigrationJobAlertAsyncHandler;
			typedef Outcome<Error, Model::ConfigureSubscriptionResult> ConfigureSubscriptionOutcome;
			typedef std::future<ConfigureSubscriptionOutcome> ConfigureSubscriptionOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureSubscriptionRequest&, const ConfigureSubscriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSubscriptionAsyncHandler;
			typedef Outcome<Error, Model::ConfigureSubscriptionInstanceResult> ConfigureSubscriptionInstanceOutcome;
			typedef std::future<ConfigureSubscriptionInstanceOutcome> ConfigureSubscriptionInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureSubscriptionInstanceRequest&, const ConfigureSubscriptionInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSubscriptionInstanceAsyncHandler;
			typedef Outcome<Error, Model::ConfigureSubscriptionInstanceAlertResult> ConfigureSubscriptionInstanceAlertOutcome;
			typedef std::future<ConfigureSubscriptionInstanceAlertOutcome> ConfigureSubscriptionInstanceAlertOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureSubscriptionInstanceAlertRequest&, const ConfigureSubscriptionInstanceAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSubscriptionInstanceAlertAsyncHandler;
			typedef Outcome<Error, Model::ConfigureSynchronizationJobResult> ConfigureSynchronizationJobOutcome;
			typedef std::future<ConfigureSynchronizationJobOutcome> ConfigureSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureSynchronizationJobRequest&, const ConfigureSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::ConfigureSynchronizationJobAlertResult> ConfigureSynchronizationJobAlertOutcome;
			typedef std::future<ConfigureSynchronizationJobAlertOutcome> ConfigureSynchronizationJobAlertOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureSynchronizationJobAlertRequest&, const ConfigureSynchronizationJobAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSynchronizationJobAlertAsyncHandler;
			typedef Outcome<Error, Model::ConfigureSynchronizationJobReplicatorCompareResult> ConfigureSynchronizationJobReplicatorCompareOutcome;
			typedef std::future<ConfigureSynchronizationJobReplicatorCompareOutcome> ConfigureSynchronizationJobReplicatorCompareOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureSynchronizationJobReplicatorCompareRequest&, const ConfigureSynchronizationJobReplicatorCompareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSynchronizationJobReplicatorCompareAsyncHandler;
			typedef Outcome<Error, Model::CountJobByConditionResult> CountJobByConditionOutcome;
			typedef std::future<CountJobByConditionOutcome> CountJobByConditionOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CountJobByConditionRequest&, const CountJobByConditionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountJobByConditionAsyncHandler;
			typedef Outcome<Error, Model::CreateConsumerChannelResult> CreateConsumerChannelOutcome;
			typedef std::future<CreateConsumerChannelOutcome> CreateConsumerChannelOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateConsumerChannelRequest&, const CreateConsumerChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerChannelAsyncHandler;
			typedef Outcome<Error, Model::CreateConsumerGroupResult> CreateConsumerGroupOutcome;
			typedef std::future<CreateConsumerGroupOutcome> CreateConsumerGroupOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateConsumerGroupRequest&, const CreateConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateDedicatedClusterMonitorRuleResult> CreateDedicatedClusterMonitorRuleOutcome;
			typedef std::future<CreateDedicatedClusterMonitorRuleOutcome> CreateDedicatedClusterMonitorRuleOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateDedicatedClusterMonitorRuleRequest&, const CreateDedicatedClusterMonitorRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDedicatedClusterMonitorRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateDtsInstanceResult> CreateDtsInstanceOutcome;
			typedef std::future<CreateDtsInstanceOutcome> CreateDtsInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateDtsInstanceRequest&, const CreateDtsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDtsInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateJobMonitorRuleResult> CreateJobMonitorRuleOutcome;
			typedef std::future<CreateJobMonitorRuleOutcome> CreateJobMonitorRuleOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateJobMonitorRuleRequest&, const CreateJobMonitorRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobMonitorRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateMigrationJobResult> CreateMigrationJobOutcome;
			typedef std::future<CreateMigrationJobOutcome> CreateMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateMigrationJobRequest&, const CreateMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::CreateSubscriptionInstanceResult> CreateSubscriptionInstanceOutcome;
			typedef std::future<CreateSubscriptionInstanceOutcome> CreateSubscriptionInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateSubscriptionInstanceRequest&, const CreateSubscriptionInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscriptionInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateSynchronizationJobResult> CreateSynchronizationJobOutcome;
			typedef std::future<CreateSynchronizationJobOutcome> CreateSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateSynchronizationJobRequest&, const CreateSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteConsumerChannelResult> DeleteConsumerChannelOutcome;
			typedef std::future<DeleteConsumerChannelOutcome> DeleteConsumerChannelOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteConsumerChannelRequest&, const DeleteConsumerChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerChannelAsyncHandler;
			typedef Outcome<Error, Model::DeleteConsumerGroupResult> DeleteConsumerGroupOutcome;
			typedef std::future<DeleteConsumerGroupOutcome> DeleteConsumerGroupOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteConsumerGroupRequest&, const DeleteConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDtsJobResult> DeleteDtsJobOutcome;
			typedef std::future<DeleteDtsJobOutcome> DeleteDtsJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteDtsJobRequest&, const DeleteDtsJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDtsJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteDtsJobsResult> DeleteDtsJobsOutcome;
			typedef std::future<DeleteDtsJobsOutcome> DeleteDtsJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteDtsJobsRequest&, const DeleteDtsJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDtsJobsAsyncHandler;
			typedef Outcome<Error, Model::DeleteMigrationJobResult> DeleteMigrationJobOutcome;
			typedef std::future<DeleteMigrationJobOutcome> DeleteMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteMigrationJobRequest&, const DeleteMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteSubscriptionInstanceResult> DeleteSubscriptionInstanceOutcome;
			typedef std::future<DeleteSubscriptionInstanceOutcome> DeleteSubscriptionInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteSubscriptionInstanceRequest&, const DeleteSubscriptionInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubscriptionInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSynchronizationJobResult> DeleteSynchronizationJobOutcome;
			typedef std::future<DeleteSynchronizationJobOutcome> DeleteSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteSynchronizationJobRequest&, const DeleteSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeChannelAccountResult> DescribeChannelAccountOutcome;
			typedef std::future<DescribeChannelAccountOutcome> DescribeChannelAccountOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeChannelAccountRequest&, const DescribeChannelAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeCheckJobsResult> DescribeCheckJobsOutcome;
			typedef std::future<DescribeCheckJobsOutcome> DescribeCheckJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeCheckJobsRequest&, const DescribeCheckJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterOperateLogsResult> DescribeClusterOperateLogsOutcome;
			typedef std::future<DescribeClusterOperateLogsOutcome> DescribeClusterOperateLogsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeClusterOperateLogsRequest&, const DescribeClusterOperateLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterOperateLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterUsedUtilizationResult> DescribeClusterUsedUtilizationOutcome;
			typedef std::future<DescribeClusterUsedUtilizationOutcome> DescribeClusterUsedUtilizationOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeClusterUsedUtilizationRequest&, const DescribeClusterUsedUtilizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterUsedUtilizationAsyncHandler;
			typedef Outcome<Error, Model::DescribeConnectionStatusResult> DescribeConnectionStatusOutcome;
			typedef std::future<DescribeConnectionStatusOutcome> DescribeConnectionStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeConnectionStatusRequest&, const DescribeConnectionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectionStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeConsumerChannelResult> DescribeConsumerChannelOutcome;
			typedef std::future<DescribeConsumerChannelOutcome> DescribeConsumerChannelOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeConsumerChannelRequest&, const DescribeConsumerChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerChannelAsyncHandler;
			typedef Outcome<Error, Model::DescribeConsumerGroupResult> DescribeConsumerGroupOutcome;
			typedef std::future<DescribeConsumerGroupOutcome> DescribeConsumerGroupOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeConsumerGroupRequest&, const DescribeConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeDTSIPResult> DescribeDTSIPOutcome;
			typedef std::future<DescribeDTSIPOutcome> DescribeDTSIPOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDTSIPRequest&, const DescribeDTSIPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDTSIPAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataCheckReportUrlResult> DescribeDataCheckReportUrlOutcome;
			typedef std::future<DescribeDataCheckReportUrlOutcome> DescribeDataCheckReportUrlOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDataCheckReportUrlRequest&, const DescribeDataCheckReportUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCheckReportUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataCheckTableDetailsResult> DescribeDataCheckTableDetailsOutcome;
			typedef std::future<DescribeDataCheckTableDetailsOutcome> DescribeDataCheckTableDetailsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDataCheckTableDetailsRequest&, const DescribeDataCheckTableDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCheckTableDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataCheckTableDiffDetailsResult> DescribeDataCheckTableDiffDetailsOutcome;
			typedef std::future<DescribeDataCheckTableDiffDetailsOutcome> DescribeDataCheckTableDiffDetailsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDataCheckTableDiffDetailsRequest&, const DescribeDataCheckTableDiffDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataCheckTableDiffDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDedicatedClusterResult> DescribeDedicatedClusterOutcome;
			typedef std::future<DescribeDedicatedClusterOutcome> DescribeDedicatedClusterOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDedicatedClusterRequest&, const DescribeDedicatedClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeDedicatedClusterMonitorRuleResult> DescribeDedicatedClusterMonitorRuleOutcome;
			typedef std::future<DescribeDedicatedClusterMonitorRuleOutcome> DescribeDedicatedClusterMonitorRuleOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDedicatedClusterMonitorRuleRequest&, const DescribeDedicatedClusterMonitorRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterMonitorRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeDtsEtlJobVersionInfoResult> DescribeDtsEtlJobVersionInfoOutcome;
			typedef std::future<DescribeDtsEtlJobVersionInfoOutcome> DescribeDtsEtlJobVersionInfoOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDtsEtlJobVersionInfoRequest&, const DescribeDtsEtlJobVersionInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDtsEtlJobVersionInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDtsJobDetailResult> DescribeDtsJobDetailOutcome;
			typedef std::future<DescribeDtsJobDetailOutcome> DescribeDtsJobDetailOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDtsJobDetailRequest&, const DescribeDtsJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDtsJobDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDtsJobsResult> DescribeDtsJobsOutcome;
			typedef std::future<DescribeDtsJobsOutcome> DescribeDtsJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDtsJobsRequest&, const DescribeDtsJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDtsJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDtsServiceLogResult> DescribeDtsServiceLogOutcome;
			typedef std::future<DescribeDtsServiceLogOutcome> DescribeDtsServiceLogOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDtsServiceLogRequest&, const DescribeDtsServiceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDtsServiceLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeEndpointSwitchStatusResult> DescribeEndpointSwitchStatusOutcome;
			typedef std::future<DescribeEndpointSwitchStatusOutcome> DescribeEndpointSwitchStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeEndpointSwitchStatusRequest&, const DescribeEndpointSwitchStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointSwitchStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeEtlJobLogsResult> DescribeEtlJobLogsOutcome;
			typedef std::future<DescribeEtlJobLogsOutcome> DescribeEtlJobLogsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeEtlJobLogsRequest&, const DescribeEtlJobLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEtlJobLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInitializationStatusResult> DescribeInitializationStatusOutcome;
			typedef std::future<DescribeInitializationStatusOutcome> DescribeInitializationStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeInitializationStatusRequest&, const DescribeInitializationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInitializationStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobMonitorRuleResult> DescribeJobMonitorRuleOutcome;
			typedef std::future<DescribeJobMonitorRuleOutcome> DescribeJobMonitorRuleOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeJobMonitorRuleRequest&, const DescribeJobMonitorRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobMonitorRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeMetricListResult> DescribeMetricListOutcome;
			typedef std::future<DescribeMetricListOutcome> DescribeMetricListOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeMetricListRequest&, const DescribeMetricListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMetricListAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobAlertResult> DescribeMigrationJobAlertOutcome;
			typedef std::future<DescribeMigrationJobAlertOutcome> DescribeMigrationJobAlertOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobAlertRequest&, const DescribeMigrationJobAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobAlertAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobDetailResult> DescribeMigrationJobDetailOutcome;
			typedef std::future<DescribeMigrationJobDetailOutcome> DescribeMigrationJobDetailOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobDetailRequest&, const DescribeMigrationJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobStatusResult> DescribeMigrationJobStatusOutcome;
			typedef std::future<DescribeMigrationJobStatusOutcome> DescribeMigrationJobStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobStatusRequest&, const DescribeMigrationJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobsResult> DescribeMigrationJobsOutcome;
			typedef std::future<DescribeMigrationJobsOutcome> DescribeMigrationJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobsRequest&, const DescribeMigrationJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribePreCheckStatusResult> DescribePreCheckStatusOutcome;
			typedef std::future<DescribePreCheckStatusOutcome> DescribePreCheckStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribePreCheckStatusRequest&, const DescribePreCheckStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreCheckStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubscriptionInstanceAlertResult> DescribeSubscriptionInstanceAlertOutcome;
			typedef std::future<DescribeSubscriptionInstanceAlertOutcome> DescribeSubscriptionInstanceAlertOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSubscriptionInstanceAlertRequest&, const DescribeSubscriptionInstanceAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionInstanceAlertAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubscriptionInstanceStatusResult> DescribeSubscriptionInstanceStatusOutcome;
			typedef std::future<DescribeSubscriptionInstanceStatusOutcome> DescribeSubscriptionInstanceStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSubscriptionInstanceStatusRequest&, const DescribeSubscriptionInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubscriptionInstancesResult> DescribeSubscriptionInstancesOutcome;
			typedef std::future<DescribeSubscriptionInstancesOutcome> DescribeSubscriptionInstancesOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSubscriptionInstancesRequest&, const DescribeSubscriptionInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubscriptionMetaResult> DescribeSubscriptionMetaOutcome;
			typedef std::future<DescribeSubscriptionMetaOutcome> DescribeSubscriptionMetaOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSubscriptionMetaRequest&, const DescribeSubscriptionMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionMetaAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationJobAlertResult> DescribeSynchronizationJobAlertOutcome;
			typedef std::future<DescribeSynchronizationJobAlertOutcome> DescribeSynchronizationJobAlertOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationJobAlertRequest&, const DescribeSynchronizationJobAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationJobAlertAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationJobReplicatorCompareResult> DescribeSynchronizationJobReplicatorCompareOutcome;
			typedef std::future<DescribeSynchronizationJobReplicatorCompareOutcome> DescribeSynchronizationJobReplicatorCompareOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationJobReplicatorCompareRequest&, const DescribeSynchronizationJobReplicatorCompareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationJobReplicatorCompareAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationJobStatusResult> DescribeSynchronizationJobStatusOutcome;
			typedef std::future<DescribeSynchronizationJobStatusOutcome> DescribeSynchronizationJobStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationJobStatusRequest&, const DescribeSynchronizationJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationJobStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationJobStatusListResult> DescribeSynchronizationJobStatusListOutcome;
			typedef std::future<DescribeSynchronizationJobStatusListOutcome> DescribeSynchronizationJobStatusListOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationJobStatusListRequest&, const DescribeSynchronizationJobStatusListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationJobStatusListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationJobsResult> DescribeSynchronizationJobsOutcome;
			typedef std::future<DescribeSynchronizationJobsOutcome> DescribeSynchronizationJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationJobsRequest&, const DescribeSynchronizationJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationObjectModifyStatusResult> DescribeSynchronizationObjectModifyStatusOutcome;
			typedef std::future<DescribeSynchronizationObjectModifyStatusOutcome> DescribeSynchronizationObjectModifyStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationObjectModifyStatusRequest&, const DescribeSynchronizationObjectModifyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationObjectModifyStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagKeysResult> DescribeTagKeysOutcome;
			typedef std::future<DescribeTagKeysOutcome> DescribeTagKeysOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeTagKeysRequest&, const DescribeTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagKeysAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagValuesResult> DescribeTagValuesOutcome;
			typedef std::future<DescribeTagValuesOutcome> DescribeTagValuesOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeTagValuesRequest&, const DescribeTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagValuesAsyncHandler;
			typedef Outcome<Error, Model::InitDtsRdsInstanceResult> InitDtsRdsInstanceOutcome;
			typedef std::future<InitDtsRdsInstanceOutcome> InitDtsRdsInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::InitDtsRdsInstanceRequest&, const InitDtsRdsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitDtsRdsInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListDedicatedClusterResult> ListDedicatedClusterOutcome;
			typedef std::future<ListDedicatedClusterOutcome> ListDedicatedClusterOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ListDedicatedClusterRequest&, const ListDedicatedClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDedicatedClusterAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyConsumerChannelResult> ModifyConsumerChannelOutcome;
			typedef std::future<ModifyConsumerChannelOutcome> ModifyConsumerChannelOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyConsumerChannelRequest&, const ModifyConsumerChannelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerChannelAsyncHandler;
			typedef Outcome<Error, Model::ModifyConsumerGroupPasswordResult> ModifyConsumerGroupPasswordOutcome;
			typedef std::future<ModifyConsumerGroupPasswordOutcome> ModifyConsumerGroupPasswordOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyConsumerGroupPasswordRequest&, const ModifyConsumerGroupPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerGroupPasswordAsyncHandler;
			typedef Outcome<Error, Model::ModifyConsumptionTimestampResult> ModifyConsumptionTimestampOutcome;
			typedef std::future<ModifyConsumptionTimestampOutcome> ModifyConsumptionTimestampOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyConsumptionTimestampRequest&, const ModifyConsumptionTimestampOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumptionTimestampAsyncHandler;
			typedef Outcome<Error, Model::ModifyDedicatedClusterResult> ModifyDedicatedClusterOutcome;
			typedef std::future<ModifyDedicatedClusterOutcome> ModifyDedicatedClusterOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyDedicatedClusterRequest&, const ModifyDedicatedClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDedicatedClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyDtsJobResult> ModifyDtsJobOutcome;
			typedef std::future<ModifyDtsJobOutcome> ModifyDtsJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyDtsJobRequest&, const ModifyDtsJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDtsJobAsyncHandler;
			typedef Outcome<Error, Model::ModifyDtsJobDedicatedClusterResult> ModifyDtsJobDedicatedClusterOutcome;
			typedef std::future<ModifyDtsJobDedicatedClusterOutcome> ModifyDtsJobDedicatedClusterOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyDtsJobDedicatedClusterRequest&, const ModifyDtsJobDedicatedClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDtsJobDedicatedClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyDtsJobDuLimitResult> ModifyDtsJobDuLimitOutcome;
			typedef std::future<ModifyDtsJobDuLimitOutcome> ModifyDtsJobDuLimitOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyDtsJobDuLimitRequest&, const ModifyDtsJobDuLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDtsJobDuLimitAsyncHandler;
			typedef Outcome<Error, Model::ModifyDtsJobNameResult> ModifyDtsJobNameOutcome;
			typedef std::future<ModifyDtsJobNameOutcome> ModifyDtsJobNameOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyDtsJobNameRequest&, const ModifyDtsJobNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDtsJobNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyDtsJobPasswordResult> ModifyDtsJobPasswordOutcome;
			typedef std::future<ModifyDtsJobPasswordOutcome> ModifyDtsJobPasswordOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyDtsJobPasswordRequest&, const ModifyDtsJobPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDtsJobPasswordAsyncHandler;
			typedef Outcome<Error, Model::ModifySubscriptionResult> ModifySubscriptionOutcome;
			typedef std::future<ModifySubscriptionOutcome> ModifySubscriptionOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifySubscriptionRequest&, const ModifySubscriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscriptionAsyncHandler;
			typedef Outcome<Error, Model::ModifySubscriptionObjectResult> ModifySubscriptionObjectOutcome;
			typedef std::future<ModifySubscriptionObjectOutcome> ModifySubscriptionObjectOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifySubscriptionObjectRequest&, const ModifySubscriptionObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscriptionObjectAsyncHandler;
			typedef Outcome<Error, Model::ModifySynchronizationObjectResult> ModifySynchronizationObjectOutcome;
			typedef std::future<ModifySynchronizationObjectOutcome> ModifySynchronizationObjectOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifySynchronizationObjectRequest&, const ModifySynchronizationObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySynchronizationObjectAsyncHandler;
			typedef Outcome<Error, Model::RenewInstanceResult> RenewInstanceOutcome;
			typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::RenewInstanceRequest&, const RenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResetDtsJobResult> ResetDtsJobOutcome;
			typedef std::future<ResetDtsJobOutcome> ResetDtsJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ResetDtsJobRequest&, const ResetDtsJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetDtsJobAsyncHandler;
			typedef Outcome<Error, Model::ResetSynchronizationJobResult> ResetSynchronizationJobOutcome;
			typedef std::future<ResetSynchronizationJobOutcome> ResetSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ResetSynchronizationJobRequest&, const ResetSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::ReverseTwoWayDirectionResult> ReverseTwoWayDirectionOutcome;
			typedef std::future<ReverseTwoWayDirectionOutcome> ReverseTwoWayDirectionOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ReverseTwoWayDirectionRequest&, const ReverseTwoWayDirectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReverseTwoWayDirectionAsyncHandler;
			typedef Outcome<Error, Model::ShieldPrecheckResult> ShieldPrecheckOutcome;
			typedef std::future<ShieldPrecheckOutcome> ShieldPrecheckOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ShieldPrecheckRequest&, const ShieldPrecheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShieldPrecheckAsyncHandler;
			typedef Outcome<Error, Model::SkipPreCheckResult> SkipPreCheckOutcome;
			typedef std::future<SkipPreCheckOutcome> SkipPreCheckOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SkipPreCheckRequest&, const SkipPreCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SkipPreCheckAsyncHandler;
			typedef Outcome<Error, Model::StartDtsJobResult> StartDtsJobOutcome;
			typedef std::future<StartDtsJobOutcome> StartDtsJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StartDtsJobRequest&, const StartDtsJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDtsJobAsyncHandler;
			typedef Outcome<Error, Model::StartDtsJobsResult> StartDtsJobsOutcome;
			typedef std::future<StartDtsJobsOutcome> StartDtsJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StartDtsJobsRequest&, const StartDtsJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDtsJobsAsyncHandler;
			typedef Outcome<Error, Model::StartMigrationJobResult> StartMigrationJobOutcome;
			typedef std::future<StartMigrationJobOutcome> StartMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StartMigrationJobRequest&, const StartMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::StartSubscriptionInstanceResult> StartSubscriptionInstanceOutcome;
			typedef std::future<StartSubscriptionInstanceOutcome> StartSubscriptionInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StartSubscriptionInstanceRequest&, const StartSubscriptionInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartSubscriptionInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartSynchronizationJobResult> StartSynchronizationJobOutcome;
			typedef std::future<StartSynchronizationJobOutcome> StartSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StartSynchronizationJobRequest&, const StartSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::StopDedicatedClusterResult> StopDedicatedClusterOutcome;
			typedef std::future<StopDedicatedClusterOutcome> StopDedicatedClusterOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StopDedicatedClusterRequest&, const StopDedicatedClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDedicatedClusterAsyncHandler;
			typedef Outcome<Error, Model::StopDtsJobResult> StopDtsJobOutcome;
			typedef std::future<StopDtsJobOutcome> StopDtsJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StopDtsJobRequest&, const StopDtsJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDtsJobAsyncHandler;
			typedef Outcome<Error, Model::StopDtsJobsResult> StopDtsJobsOutcome;
			typedef std::future<StopDtsJobsOutcome> StopDtsJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StopDtsJobsRequest&, const StopDtsJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDtsJobsAsyncHandler;
			typedef Outcome<Error, Model::StopMigrationJobResult> StopMigrationJobOutcome;
			typedef std::future<StopMigrationJobOutcome> StopMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StopMigrationJobRequest&, const StopMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::SummaryJobDetailResult> SummaryJobDetailOutcome;
			typedef std::future<SummaryJobDetailOutcome> SummaryJobDetailOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SummaryJobDetailRequest&, const SummaryJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SummaryJobDetailAsyncHandler;
			typedef Outcome<Error, Model::SuspendDtsJobResult> SuspendDtsJobOutcome;
			typedef std::future<SuspendDtsJobOutcome> SuspendDtsJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SuspendDtsJobRequest&, const SuspendDtsJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendDtsJobAsyncHandler;
			typedef Outcome<Error, Model::SuspendDtsJobsResult> SuspendDtsJobsOutcome;
			typedef std::future<SuspendDtsJobsOutcome> SuspendDtsJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SuspendDtsJobsRequest&, const SuspendDtsJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendDtsJobsAsyncHandler;
			typedef Outcome<Error, Model::SuspendMigrationJobResult> SuspendMigrationJobOutcome;
			typedef std::future<SuspendMigrationJobOutcome> SuspendMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SuspendMigrationJobRequest&, const SuspendMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::SuspendSynchronizationJobResult> SuspendSynchronizationJobOutcome;
			typedef std::future<SuspendSynchronizationJobOutcome> SuspendSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SuspendSynchronizationJobRequest&, const SuspendSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::SwitchPhysicalDtsJobToCloudResult> SwitchPhysicalDtsJobToCloudOutcome;
			typedef std::future<SwitchPhysicalDtsJobToCloudOutcome> SwitchPhysicalDtsJobToCloudOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SwitchPhysicalDtsJobToCloudRequest&, const SwitchPhysicalDtsJobToCloudOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchPhysicalDtsJobToCloudAsyncHandler;
			typedef Outcome<Error, Model::SwitchSynchronizationEndpointResult> SwitchSynchronizationEndpointOutcome;
			typedef std::future<SwitchSynchronizationEndpointOutcome> SwitchSynchronizationEndpointOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SwitchSynchronizationEndpointRequest&, const SwitchSynchronizationEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchSynchronizationEndpointAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TransferInstanceClassResult> TransferInstanceClassOutcome;
			typedef std::future<TransferInstanceClassOutcome> TransferInstanceClassOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::TransferInstanceClassRequest&, const TransferInstanceClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferInstanceClassAsyncHandler;
			typedef Outcome<Error, Model::TransferPayTypeResult> TransferPayTypeOutcome;
			typedef std::future<TransferPayTypeOutcome> TransferPayTypeOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::TransferPayTypeRequest&, const TransferPayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferPayTypeAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpgradeTwoWayResult> UpgradeTwoWayOutcome;
			typedef std::future<UpgradeTwoWayOutcome> UpgradeTwoWayOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::UpgradeTwoWayRequest&, const UpgradeTwoWayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeTwoWayAsyncHandler;
			typedef Outcome<Error, Model::WhiteIpListResult> WhiteIpListOutcome;
			typedef std::future<WhiteIpListOutcome> WhiteIpListOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::WhiteIpListRequest&, const WhiteIpListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WhiteIpListAsyncHandler;

			DtsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DtsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DtsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DtsClient();
			ConfigureDtsJobOutcome configureDtsJob(const Model::ConfigureDtsJobRequest &request)const;
			void configureDtsJobAsync(const Model::ConfigureDtsJobRequest& request, const ConfigureDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureDtsJobOutcomeCallable configureDtsJobCallable(const Model::ConfigureDtsJobRequest& request) const;
			ConfigureMigrationJobOutcome configureMigrationJob(const Model::ConfigureMigrationJobRequest &request)const;
			void configureMigrationJobAsync(const Model::ConfigureMigrationJobRequest& request, const ConfigureMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureMigrationJobOutcomeCallable configureMigrationJobCallable(const Model::ConfigureMigrationJobRequest& request) const;
			ConfigureMigrationJobAlertOutcome configureMigrationJobAlert(const Model::ConfigureMigrationJobAlertRequest &request)const;
			void configureMigrationJobAlertAsync(const Model::ConfigureMigrationJobAlertRequest& request, const ConfigureMigrationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureMigrationJobAlertOutcomeCallable configureMigrationJobAlertCallable(const Model::ConfigureMigrationJobAlertRequest& request) const;
			ConfigureSubscriptionOutcome configureSubscription(const Model::ConfigureSubscriptionRequest &request)const;
			void configureSubscriptionAsync(const Model::ConfigureSubscriptionRequest& request, const ConfigureSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSubscriptionOutcomeCallable configureSubscriptionCallable(const Model::ConfigureSubscriptionRequest& request) const;
			ConfigureSubscriptionInstanceOutcome configureSubscriptionInstance(const Model::ConfigureSubscriptionInstanceRequest &request)const;
			void configureSubscriptionInstanceAsync(const Model::ConfigureSubscriptionInstanceRequest& request, const ConfigureSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSubscriptionInstanceOutcomeCallable configureSubscriptionInstanceCallable(const Model::ConfigureSubscriptionInstanceRequest& request) const;
			ConfigureSubscriptionInstanceAlertOutcome configureSubscriptionInstanceAlert(const Model::ConfigureSubscriptionInstanceAlertRequest &request)const;
			void configureSubscriptionInstanceAlertAsync(const Model::ConfigureSubscriptionInstanceAlertRequest& request, const ConfigureSubscriptionInstanceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSubscriptionInstanceAlertOutcomeCallable configureSubscriptionInstanceAlertCallable(const Model::ConfigureSubscriptionInstanceAlertRequest& request) const;
			ConfigureSynchronizationJobOutcome configureSynchronizationJob(const Model::ConfigureSynchronizationJobRequest &request)const;
			void configureSynchronizationJobAsync(const Model::ConfigureSynchronizationJobRequest& request, const ConfigureSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSynchronizationJobOutcomeCallable configureSynchronizationJobCallable(const Model::ConfigureSynchronizationJobRequest& request) const;
			ConfigureSynchronizationJobAlertOutcome configureSynchronizationJobAlert(const Model::ConfigureSynchronizationJobAlertRequest &request)const;
			void configureSynchronizationJobAlertAsync(const Model::ConfigureSynchronizationJobAlertRequest& request, const ConfigureSynchronizationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSynchronizationJobAlertOutcomeCallable configureSynchronizationJobAlertCallable(const Model::ConfigureSynchronizationJobAlertRequest& request) const;
			ConfigureSynchronizationJobReplicatorCompareOutcome configureSynchronizationJobReplicatorCompare(const Model::ConfigureSynchronizationJobReplicatorCompareRequest &request)const;
			void configureSynchronizationJobReplicatorCompareAsync(const Model::ConfigureSynchronizationJobReplicatorCompareRequest& request, const ConfigureSynchronizationJobReplicatorCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSynchronizationJobReplicatorCompareOutcomeCallable configureSynchronizationJobReplicatorCompareCallable(const Model::ConfigureSynchronizationJobReplicatorCompareRequest& request) const;
			CountJobByConditionOutcome countJobByCondition(const Model::CountJobByConditionRequest &request)const;
			void countJobByConditionAsync(const Model::CountJobByConditionRequest& request, const CountJobByConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountJobByConditionOutcomeCallable countJobByConditionCallable(const Model::CountJobByConditionRequest& request) const;
			CreateConsumerChannelOutcome createConsumerChannel(const Model::CreateConsumerChannelRequest &request)const;
			void createConsumerChannelAsync(const Model::CreateConsumerChannelRequest& request, const CreateConsumerChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConsumerChannelOutcomeCallable createConsumerChannelCallable(const Model::CreateConsumerChannelRequest& request) const;
			CreateConsumerGroupOutcome createConsumerGroup(const Model::CreateConsumerGroupRequest &request)const;
			void createConsumerGroupAsync(const Model::CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConsumerGroupOutcomeCallable createConsumerGroupCallable(const Model::CreateConsumerGroupRequest& request) const;
			CreateDedicatedClusterMonitorRuleOutcome createDedicatedClusterMonitorRule(const Model::CreateDedicatedClusterMonitorRuleRequest &request)const;
			void createDedicatedClusterMonitorRuleAsync(const Model::CreateDedicatedClusterMonitorRuleRequest& request, const CreateDedicatedClusterMonitorRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDedicatedClusterMonitorRuleOutcomeCallable createDedicatedClusterMonitorRuleCallable(const Model::CreateDedicatedClusterMonitorRuleRequest& request) const;
			CreateDtsInstanceOutcome createDtsInstance(const Model::CreateDtsInstanceRequest &request)const;
			void createDtsInstanceAsync(const Model::CreateDtsInstanceRequest& request, const CreateDtsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDtsInstanceOutcomeCallable createDtsInstanceCallable(const Model::CreateDtsInstanceRequest& request) const;
			CreateJobMonitorRuleOutcome createJobMonitorRule(const Model::CreateJobMonitorRuleRequest &request)const;
			void createJobMonitorRuleAsync(const Model::CreateJobMonitorRuleRequest& request, const CreateJobMonitorRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobMonitorRuleOutcomeCallable createJobMonitorRuleCallable(const Model::CreateJobMonitorRuleRequest& request) const;
			CreateMigrationJobOutcome createMigrationJob(const Model::CreateMigrationJobRequest &request)const;
			void createMigrationJobAsync(const Model::CreateMigrationJobRequest& request, const CreateMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMigrationJobOutcomeCallable createMigrationJobCallable(const Model::CreateMigrationJobRequest& request) const;
			CreateSubscriptionInstanceOutcome createSubscriptionInstance(const Model::CreateSubscriptionInstanceRequest &request)const;
			void createSubscriptionInstanceAsync(const Model::CreateSubscriptionInstanceRequest& request, const CreateSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSubscriptionInstanceOutcomeCallable createSubscriptionInstanceCallable(const Model::CreateSubscriptionInstanceRequest& request) const;
			CreateSynchronizationJobOutcome createSynchronizationJob(const Model::CreateSynchronizationJobRequest &request)const;
			void createSynchronizationJobAsync(const Model::CreateSynchronizationJobRequest& request, const CreateSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSynchronizationJobOutcomeCallable createSynchronizationJobCallable(const Model::CreateSynchronizationJobRequest& request) const;
			DeleteConsumerChannelOutcome deleteConsumerChannel(const Model::DeleteConsumerChannelRequest &request)const;
			void deleteConsumerChannelAsync(const Model::DeleteConsumerChannelRequest& request, const DeleteConsumerChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConsumerChannelOutcomeCallable deleteConsumerChannelCallable(const Model::DeleteConsumerChannelRequest& request) const;
			DeleteConsumerGroupOutcome deleteConsumerGroup(const Model::DeleteConsumerGroupRequest &request)const;
			void deleteConsumerGroupAsync(const Model::DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConsumerGroupOutcomeCallable deleteConsumerGroupCallable(const Model::DeleteConsumerGroupRequest& request) const;
			DeleteDtsJobOutcome deleteDtsJob(const Model::DeleteDtsJobRequest &request)const;
			void deleteDtsJobAsync(const Model::DeleteDtsJobRequest& request, const DeleteDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDtsJobOutcomeCallable deleteDtsJobCallable(const Model::DeleteDtsJobRequest& request) const;
			DeleteDtsJobsOutcome deleteDtsJobs(const Model::DeleteDtsJobsRequest &request)const;
			void deleteDtsJobsAsync(const Model::DeleteDtsJobsRequest& request, const DeleteDtsJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDtsJobsOutcomeCallable deleteDtsJobsCallable(const Model::DeleteDtsJobsRequest& request) const;
			DeleteMigrationJobOutcome deleteMigrationJob(const Model::DeleteMigrationJobRequest &request)const;
			void deleteMigrationJobAsync(const Model::DeleteMigrationJobRequest& request, const DeleteMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMigrationJobOutcomeCallable deleteMigrationJobCallable(const Model::DeleteMigrationJobRequest& request) const;
			DeleteSubscriptionInstanceOutcome deleteSubscriptionInstance(const Model::DeleteSubscriptionInstanceRequest &request)const;
			void deleteSubscriptionInstanceAsync(const Model::DeleteSubscriptionInstanceRequest& request, const DeleteSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSubscriptionInstanceOutcomeCallable deleteSubscriptionInstanceCallable(const Model::DeleteSubscriptionInstanceRequest& request) const;
			DeleteSynchronizationJobOutcome deleteSynchronizationJob(const Model::DeleteSynchronizationJobRequest &request)const;
			void deleteSynchronizationJobAsync(const Model::DeleteSynchronizationJobRequest& request, const DeleteSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSynchronizationJobOutcomeCallable deleteSynchronizationJobCallable(const Model::DeleteSynchronizationJobRequest& request) const;
			DescribeChannelAccountOutcome describeChannelAccount(const Model::DescribeChannelAccountRequest &request)const;
			void describeChannelAccountAsync(const Model::DescribeChannelAccountRequest& request, const DescribeChannelAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChannelAccountOutcomeCallable describeChannelAccountCallable(const Model::DescribeChannelAccountRequest& request) const;
			DescribeCheckJobsOutcome describeCheckJobs(const Model::DescribeCheckJobsRequest &request)const;
			void describeCheckJobsAsync(const Model::DescribeCheckJobsRequest& request, const DescribeCheckJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCheckJobsOutcomeCallable describeCheckJobsCallable(const Model::DescribeCheckJobsRequest& request) const;
			DescribeClusterOperateLogsOutcome describeClusterOperateLogs(const Model::DescribeClusterOperateLogsRequest &request)const;
			void describeClusterOperateLogsAsync(const Model::DescribeClusterOperateLogsRequest& request, const DescribeClusterOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOperateLogsOutcomeCallable describeClusterOperateLogsCallable(const Model::DescribeClusterOperateLogsRequest& request) const;
			DescribeClusterUsedUtilizationOutcome describeClusterUsedUtilization(const Model::DescribeClusterUsedUtilizationRequest &request)const;
			void describeClusterUsedUtilizationAsync(const Model::DescribeClusterUsedUtilizationRequest& request, const DescribeClusterUsedUtilizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterUsedUtilizationOutcomeCallable describeClusterUsedUtilizationCallable(const Model::DescribeClusterUsedUtilizationRequest& request) const;
			DescribeConnectionStatusOutcome describeConnectionStatus(const Model::DescribeConnectionStatusRequest &request)const;
			void describeConnectionStatusAsync(const Model::DescribeConnectionStatusRequest& request, const DescribeConnectionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConnectionStatusOutcomeCallable describeConnectionStatusCallable(const Model::DescribeConnectionStatusRequest& request) const;
			DescribeConsumerChannelOutcome describeConsumerChannel(const Model::DescribeConsumerChannelRequest &request)const;
			void describeConsumerChannelAsync(const Model::DescribeConsumerChannelRequest& request, const DescribeConsumerChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConsumerChannelOutcomeCallable describeConsumerChannelCallable(const Model::DescribeConsumerChannelRequest& request) const;
			DescribeConsumerGroupOutcome describeConsumerGroup(const Model::DescribeConsumerGroupRequest &request)const;
			void describeConsumerGroupAsync(const Model::DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConsumerGroupOutcomeCallable describeConsumerGroupCallable(const Model::DescribeConsumerGroupRequest& request) const;
			DescribeDTSIPOutcome describeDTSIP(const Model::DescribeDTSIPRequest &request)const;
			void describeDTSIPAsync(const Model::DescribeDTSIPRequest& request, const DescribeDTSIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDTSIPOutcomeCallable describeDTSIPCallable(const Model::DescribeDTSIPRequest& request) const;
			DescribeDataCheckReportUrlOutcome describeDataCheckReportUrl(const Model::DescribeDataCheckReportUrlRequest &request)const;
			void describeDataCheckReportUrlAsync(const Model::DescribeDataCheckReportUrlRequest& request, const DescribeDataCheckReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataCheckReportUrlOutcomeCallable describeDataCheckReportUrlCallable(const Model::DescribeDataCheckReportUrlRequest& request) const;
			DescribeDataCheckTableDetailsOutcome describeDataCheckTableDetails(const Model::DescribeDataCheckTableDetailsRequest &request)const;
			void describeDataCheckTableDetailsAsync(const Model::DescribeDataCheckTableDetailsRequest& request, const DescribeDataCheckTableDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataCheckTableDetailsOutcomeCallable describeDataCheckTableDetailsCallable(const Model::DescribeDataCheckTableDetailsRequest& request) const;
			DescribeDataCheckTableDiffDetailsOutcome describeDataCheckTableDiffDetails(const Model::DescribeDataCheckTableDiffDetailsRequest &request)const;
			void describeDataCheckTableDiffDetailsAsync(const Model::DescribeDataCheckTableDiffDetailsRequest& request, const DescribeDataCheckTableDiffDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataCheckTableDiffDetailsOutcomeCallable describeDataCheckTableDiffDetailsCallable(const Model::DescribeDataCheckTableDiffDetailsRequest& request) const;
			DescribeDedicatedClusterOutcome describeDedicatedCluster(const Model::DescribeDedicatedClusterRequest &request)const;
			void describeDedicatedClusterAsync(const Model::DescribeDedicatedClusterRequest& request, const DescribeDedicatedClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDedicatedClusterOutcomeCallable describeDedicatedClusterCallable(const Model::DescribeDedicatedClusterRequest& request) const;
			DescribeDedicatedClusterMonitorRuleOutcome describeDedicatedClusterMonitorRule(const Model::DescribeDedicatedClusterMonitorRuleRequest &request)const;
			void describeDedicatedClusterMonitorRuleAsync(const Model::DescribeDedicatedClusterMonitorRuleRequest& request, const DescribeDedicatedClusterMonitorRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDedicatedClusterMonitorRuleOutcomeCallable describeDedicatedClusterMonitorRuleCallable(const Model::DescribeDedicatedClusterMonitorRuleRequest& request) const;
			DescribeDtsEtlJobVersionInfoOutcome describeDtsEtlJobVersionInfo(const Model::DescribeDtsEtlJobVersionInfoRequest &request)const;
			void describeDtsEtlJobVersionInfoAsync(const Model::DescribeDtsEtlJobVersionInfoRequest& request, const DescribeDtsEtlJobVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDtsEtlJobVersionInfoOutcomeCallable describeDtsEtlJobVersionInfoCallable(const Model::DescribeDtsEtlJobVersionInfoRequest& request) const;
			DescribeDtsJobDetailOutcome describeDtsJobDetail(const Model::DescribeDtsJobDetailRequest &request)const;
			void describeDtsJobDetailAsync(const Model::DescribeDtsJobDetailRequest& request, const DescribeDtsJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDtsJobDetailOutcomeCallable describeDtsJobDetailCallable(const Model::DescribeDtsJobDetailRequest& request) const;
			DescribeDtsJobsOutcome describeDtsJobs(const Model::DescribeDtsJobsRequest &request)const;
			void describeDtsJobsAsync(const Model::DescribeDtsJobsRequest& request, const DescribeDtsJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDtsJobsOutcomeCallable describeDtsJobsCallable(const Model::DescribeDtsJobsRequest& request) const;
			DescribeDtsServiceLogOutcome describeDtsServiceLog(const Model::DescribeDtsServiceLogRequest &request)const;
			void describeDtsServiceLogAsync(const Model::DescribeDtsServiceLogRequest& request, const DescribeDtsServiceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDtsServiceLogOutcomeCallable describeDtsServiceLogCallable(const Model::DescribeDtsServiceLogRequest& request) const;
			DescribeEndpointSwitchStatusOutcome describeEndpointSwitchStatus(const Model::DescribeEndpointSwitchStatusRequest &request)const;
			void describeEndpointSwitchStatusAsync(const Model::DescribeEndpointSwitchStatusRequest& request, const DescribeEndpointSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEndpointSwitchStatusOutcomeCallable describeEndpointSwitchStatusCallable(const Model::DescribeEndpointSwitchStatusRequest& request) const;
			DescribeEtlJobLogsOutcome describeEtlJobLogs(const Model::DescribeEtlJobLogsRequest &request)const;
			void describeEtlJobLogsAsync(const Model::DescribeEtlJobLogsRequest& request, const DescribeEtlJobLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEtlJobLogsOutcomeCallable describeEtlJobLogsCallable(const Model::DescribeEtlJobLogsRequest& request) const;
			DescribeInitializationStatusOutcome describeInitializationStatus(const Model::DescribeInitializationStatusRequest &request)const;
			void describeInitializationStatusAsync(const Model::DescribeInitializationStatusRequest& request, const DescribeInitializationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInitializationStatusOutcomeCallable describeInitializationStatusCallable(const Model::DescribeInitializationStatusRequest& request) const;
			DescribeJobMonitorRuleOutcome describeJobMonitorRule(const Model::DescribeJobMonitorRuleRequest &request)const;
			void describeJobMonitorRuleAsync(const Model::DescribeJobMonitorRuleRequest& request, const DescribeJobMonitorRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobMonitorRuleOutcomeCallable describeJobMonitorRuleCallable(const Model::DescribeJobMonitorRuleRequest& request) const;
			DescribeMetricListOutcome describeMetricList(const Model::DescribeMetricListRequest &request)const;
			void describeMetricListAsync(const Model::DescribeMetricListRequest& request, const DescribeMetricListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMetricListOutcomeCallable describeMetricListCallable(const Model::DescribeMetricListRequest& request) const;
			DescribeMigrationJobAlertOutcome describeMigrationJobAlert(const Model::DescribeMigrationJobAlertRequest &request)const;
			void describeMigrationJobAlertAsync(const Model::DescribeMigrationJobAlertRequest& request, const DescribeMigrationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobAlertOutcomeCallable describeMigrationJobAlertCallable(const Model::DescribeMigrationJobAlertRequest& request) const;
			DescribeMigrationJobDetailOutcome describeMigrationJobDetail(const Model::DescribeMigrationJobDetailRequest &request)const;
			void describeMigrationJobDetailAsync(const Model::DescribeMigrationJobDetailRequest& request, const DescribeMigrationJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobDetailOutcomeCallable describeMigrationJobDetailCallable(const Model::DescribeMigrationJobDetailRequest& request) const;
			DescribeMigrationJobStatusOutcome describeMigrationJobStatus(const Model::DescribeMigrationJobStatusRequest &request)const;
			void describeMigrationJobStatusAsync(const Model::DescribeMigrationJobStatusRequest& request, const DescribeMigrationJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobStatusOutcomeCallable describeMigrationJobStatusCallable(const Model::DescribeMigrationJobStatusRequest& request) const;
			DescribeMigrationJobsOutcome describeMigrationJobs(const Model::DescribeMigrationJobsRequest &request)const;
			void describeMigrationJobsAsync(const Model::DescribeMigrationJobsRequest& request, const DescribeMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobsOutcomeCallable describeMigrationJobsCallable(const Model::DescribeMigrationJobsRequest& request) const;
			DescribePreCheckStatusOutcome describePreCheckStatus(const Model::DescribePreCheckStatusRequest &request)const;
			void describePreCheckStatusAsync(const Model::DescribePreCheckStatusRequest& request, const DescribePreCheckStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePreCheckStatusOutcomeCallable describePreCheckStatusCallable(const Model::DescribePreCheckStatusRequest& request) const;
			DescribeSubscriptionInstanceAlertOutcome describeSubscriptionInstanceAlert(const Model::DescribeSubscriptionInstanceAlertRequest &request)const;
			void describeSubscriptionInstanceAlertAsync(const Model::DescribeSubscriptionInstanceAlertRequest& request, const DescribeSubscriptionInstanceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionInstanceAlertOutcomeCallable describeSubscriptionInstanceAlertCallable(const Model::DescribeSubscriptionInstanceAlertRequest& request) const;
			DescribeSubscriptionInstanceStatusOutcome describeSubscriptionInstanceStatus(const Model::DescribeSubscriptionInstanceStatusRequest &request)const;
			void describeSubscriptionInstanceStatusAsync(const Model::DescribeSubscriptionInstanceStatusRequest& request, const DescribeSubscriptionInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionInstanceStatusOutcomeCallable describeSubscriptionInstanceStatusCallable(const Model::DescribeSubscriptionInstanceStatusRequest& request) const;
			DescribeSubscriptionInstancesOutcome describeSubscriptionInstances(const Model::DescribeSubscriptionInstancesRequest &request)const;
			void describeSubscriptionInstancesAsync(const Model::DescribeSubscriptionInstancesRequest& request, const DescribeSubscriptionInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionInstancesOutcomeCallable describeSubscriptionInstancesCallable(const Model::DescribeSubscriptionInstancesRequest& request) const;
			DescribeSubscriptionMetaOutcome describeSubscriptionMeta(const Model::DescribeSubscriptionMetaRequest &request)const;
			void describeSubscriptionMetaAsync(const Model::DescribeSubscriptionMetaRequest& request, const DescribeSubscriptionMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionMetaOutcomeCallable describeSubscriptionMetaCallable(const Model::DescribeSubscriptionMetaRequest& request) const;
			DescribeSynchronizationJobAlertOutcome describeSynchronizationJobAlert(const Model::DescribeSynchronizationJobAlertRequest &request)const;
			void describeSynchronizationJobAlertAsync(const Model::DescribeSynchronizationJobAlertRequest& request, const DescribeSynchronizationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationJobAlertOutcomeCallable describeSynchronizationJobAlertCallable(const Model::DescribeSynchronizationJobAlertRequest& request) const;
			DescribeSynchronizationJobReplicatorCompareOutcome describeSynchronizationJobReplicatorCompare(const Model::DescribeSynchronizationJobReplicatorCompareRequest &request)const;
			void describeSynchronizationJobReplicatorCompareAsync(const Model::DescribeSynchronizationJobReplicatorCompareRequest& request, const DescribeSynchronizationJobReplicatorCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationJobReplicatorCompareOutcomeCallable describeSynchronizationJobReplicatorCompareCallable(const Model::DescribeSynchronizationJobReplicatorCompareRequest& request) const;
			DescribeSynchronizationJobStatusOutcome describeSynchronizationJobStatus(const Model::DescribeSynchronizationJobStatusRequest &request)const;
			void describeSynchronizationJobStatusAsync(const Model::DescribeSynchronizationJobStatusRequest& request, const DescribeSynchronizationJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationJobStatusOutcomeCallable describeSynchronizationJobStatusCallable(const Model::DescribeSynchronizationJobStatusRequest& request) const;
			DescribeSynchronizationJobStatusListOutcome describeSynchronizationJobStatusList(const Model::DescribeSynchronizationJobStatusListRequest &request)const;
			void describeSynchronizationJobStatusListAsync(const Model::DescribeSynchronizationJobStatusListRequest& request, const DescribeSynchronizationJobStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationJobStatusListOutcomeCallable describeSynchronizationJobStatusListCallable(const Model::DescribeSynchronizationJobStatusListRequest& request) const;
			DescribeSynchronizationJobsOutcome describeSynchronizationJobs(const Model::DescribeSynchronizationJobsRequest &request)const;
			void describeSynchronizationJobsAsync(const Model::DescribeSynchronizationJobsRequest& request, const DescribeSynchronizationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationJobsOutcomeCallable describeSynchronizationJobsCallable(const Model::DescribeSynchronizationJobsRequest& request) const;
			DescribeSynchronizationObjectModifyStatusOutcome describeSynchronizationObjectModifyStatus(const Model::DescribeSynchronizationObjectModifyStatusRequest &request)const;
			void describeSynchronizationObjectModifyStatusAsync(const Model::DescribeSynchronizationObjectModifyStatusRequest& request, const DescribeSynchronizationObjectModifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationObjectModifyStatusOutcomeCallable describeSynchronizationObjectModifyStatusCallable(const Model::DescribeSynchronizationObjectModifyStatusRequest& request) const;
			DescribeTagKeysOutcome describeTagKeys(const Model::DescribeTagKeysRequest &request)const;
			void describeTagKeysAsync(const Model::DescribeTagKeysRequest& request, const DescribeTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagKeysOutcomeCallable describeTagKeysCallable(const Model::DescribeTagKeysRequest& request) const;
			DescribeTagValuesOutcome describeTagValues(const Model::DescribeTagValuesRequest &request)const;
			void describeTagValuesAsync(const Model::DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagValuesOutcomeCallable describeTagValuesCallable(const Model::DescribeTagValuesRequest& request) const;
			InitDtsRdsInstanceOutcome initDtsRdsInstance(const Model::InitDtsRdsInstanceRequest &request)const;
			void initDtsRdsInstanceAsync(const Model::InitDtsRdsInstanceRequest& request, const InitDtsRdsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitDtsRdsInstanceOutcomeCallable initDtsRdsInstanceCallable(const Model::InitDtsRdsInstanceRequest& request) const;
			ListDedicatedClusterOutcome listDedicatedCluster(const Model::ListDedicatedClusterRequest &request)const;
			void listDedicatedClusterAsync(const Model::ListDedicatedClusterRequest& request, const ListDedicatedClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDedicatedClusterOutcomeCallable listDedicatedClusterCallable(const Model::ListDedicatedClusterRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyConsumerChannelOutcome modifyConsumerChannel(const Model::ModifyConsumerChannelRequest &request)const;
			void modifyConsumerChannelAsync(const Model::ModifyConsumerChannelRequest& request, const ModifyConsumerChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConsumerChannelOutcomeCallable modifyConsumerChannelCallable(const Model::ModifyConsumerChannelRequest& request) const;
			ModifyConsumerGroupPasswordOutcome modifyConsumerGroupPassword(const Model::ModifyConsumerGroupPasswordRequest &request)const;
			void modifyConsumerGroupPasswordAsync(const Model::ModifyConsumerGroupPasswordRequest& request, const ModifyConsumerGroupPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConsumerGroupPasswordOutcomeCallable modifyConsumerGroupPasswordCallable(const Model::ModifyConsumerGroupPasswordRequest& request) const;
			ModifyConsumptionTimestampOutcome modifyConsumptionTimestamp(const Model::ModifyConsumptionTimestampRequest &request)const;
			void modifyConsumptionTimestampAsync(const Model::ModifyConsumptionTimestampRequest& request, const ModifyConsumptionTimestampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConsumptionTimestampOutcomeCallable modifyConsumptionTimestampCallable(const Model::ModifyConsumptionTimestampRequest& request) const;
			ModifyDedicatedClusterOutcome modifyDedicatedCluster(const Model::ModifyDedicatedClusterRequest &request)const;
			void modifyDedicatedClusterAsync(const Model::ModifyDedicatedClusterRequest& request, const ModifyDedicatedClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDedicatedClusterOutcomeCallable modifyDedicatedClusterCallable(const Model::ModifyDedicatedClusterRequest& request) const;
			ModifyDtsJobOutcome modifyDtsJob(const Model::ModifyDtsJobRequest &request)const;
			void modifyDtsJobAsync(const Model::ModifyDtsJobRequest& request, const ModifyDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDtsJobOutcomeCallable modifyDtsJobCallable(const Model::ModifyDtsJobRequest& request) const;
			ModifyDtsJobDedicatedClusterOutcome modifyDtsJobDedicatedCluster(const Model::ModifyDtsJobDedicatedClusterRequest &request)const;
			void modifyDtsJobDedicatedClusterAsync(const Model::ModifyDtsJobDedicatedClusterRequest& request, const ModifyDtsJobDedicatedClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDtsJobDedicatedClusterOutcomeCallable modifyDtsJobDedicatedClusterCallable(const Model::ModifyDtsJobDedicatedClusterRequest& request) const;
			ModifyDtsJobDuLimitOutcome modifyDtsJobDuLimit(const Model::ModifyDtsJobDuLimitRequest &request)const;
			void modifyDtsJobDuLimitAsync(const Model::ModifyDtsJobDuLimitRequest& request, const ModifyDtsJobDuLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDtsJobDuLimitOutcomeCallable modifyDtsJobDuLimitCallable(const Model::ModifyDtsJobDuLimitRequest& request) const;
			ModifyDtsJobNameOutcome modifyDtsJobName(const Model::ModifyDtsJobNameRequest &request)const;
			void modifyDtsJobNameAsync(const Model::ModifyDtsJobNameRequest& request, const ModifyDtsJobNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDtsJobNameOutcomeCallable modifyDtsJobNameCallable(const Model::ModifyDtsJobNameRequest& request) const;
			ModifyDtsJobPasswordOutcome modifyDtsJobPassword(const Model::ModifyDtsJobPasswordRequest &request)const;
			void modifyDtsJobPasswordAsync(const Model::ModifyDtsJobPasswordRequest& request, const ModifyDtsJobPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDtsJobPasswordOutcomeCallable modifyDtsJobPasswordCallable(const Model::ModifyDtsJobPasswordRequest& request) const;
			ModifySubscriptionOutcome modifySubscription(const Model::ModifySubscriptionRequest &request)const;
			void modifySubscriptionAsync(const Model::ModifySubscriptionRequest& request, const ModifySubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySubscriptionOutcomeCallable modifySubscriptionCallable(const Model::ModifySubscriptionRequest& request) const;
			ModifySubscriptionObjectOutcome modifySubscriptionObject(const Model::ModifySubscriptionObjectRequest &request)const;
			void modifySubscriptionObjectAsync(const Model::ModifySubscriptionObjectRequest& request, const ModifySubscriptionObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySubscriptionObjectOutcomeCallable modifySubscriptionObjectCallable(const Model::ModifySubscriptionObjectRequest& request) const;
			ModifySynchronizationObjectOutcome modifySynchronizationObject(const Model::ModifySynchronizationObjectRequest &request)const;
			void modifySynchronizationObjectAsync(const Model::ModifySynchronizationObjectRequest& request, const ModifySynchronizationObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySynchronizationObjectOutcomeCallable modifySynchronizationObjectCallable(const Model::ModifySynchronizationObjectRequest& request) const;
			RenewInstanceOutcome renewInstance(const Model::RenewInstanceRequest &request)const;
			void renewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewInstanceOutcomeCallable renewInstanceCallable(const Model::RenewInstanceRequest& request) const;
			ResetDtsJobOutcome resetDtsJob(const Model::ResetDtsJobRequest &request)const;
			void resetDtsJobAsync(const Model::ResetDtsJobRequest& request, const ResetDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetDtsJobOutcomeCallable resetDtsJobCallable(const Model::ResetDtsJobRequest& request) const;
			ResetSynchronizationJobOutcome resetSynchronizationJob(const Model::ResetSynchronizationJobRequest &request)const;
			void resetSynchronizationJobAsync(const Model::ResetSynchronizationJobRequest& request, const ResetSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetSynchronizationJobOutcomeCallable resetSynchronizationJobCallable(const Model::ResetSynchronizationJobRequest& request) const;
			ReverseTwoWayDirectionOutcome reverseTwoWayDirection(const Model::ReverseTwoWayDirectionRequest &request)const;
			void reverseTwoWayDirectionAsync(const Model::ReverseTwoWayDirectionRequest& request, const ReverseTwoWayDirectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReverseTwoWayDirectionOutcomeCallable reverseTwoWayDirectionCallable(const Model::ReverseTwoWayDirectionRequest& request) const;
			ShieldPrecheckOutcome shieldPrecheck(const Model::ShieldPrecheckRequest &request)const;
			void shieldPrecheckAsync(const Model::ShieldPrecheckRequest& request, const ShieldPrecheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShieldPrecheckOutcomeCallable shieldPrecheckCallable(const Model::ShieldPrecheckRequest& request) const;
			SkipPreCheckOutcome skipPreCheck(const Model::SkipPreCheckRequest &request)const;
			void skipPreCheckAsync(const Model::SkipPreCheckRequest& request, const SkipPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SkipPreCheckOutcomeCallable skipPreCheckCallable(const Model::SkipPreCheckRequest& request) const;
			StartDtsJobOutcome startDtsJob(const Model::StartDtsJobRequest &request)const;
			void startDtsJobAsync(const Model::StartDtsJobRequest& request, const StartDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDtsJobOutcomeCallable startDtsJobCallable(const Model::StartDtsJobRequest& request) const;
			StartDtsJobsOutcome startDtsJobs(const Model::StartDtsJobsRequest &request)const;
			void startDtsJobsAsync(const Model::StartDtsJobsRequest& request, const StartDtsJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDtsJobsOutcomeCallable startDtsJobsCallable(const Model::StartDtsJobsRequest& request) const;
			StartMigrationJobOutcome startMigrationJob(const Model::StartMigrationJobRequest &request)const;
			void startMigrationJobAsync(const Model::StartMigrationJobRequest& request, const StartMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartMigrationJobOutcomeCallable startMigrationJobCallable(const Model::StartMigrationJobRequest& request) const;
			StartSubscriptionInstanceOutcome startSubscriptionInstance(const Model::StartSubscriptionInstanceRequest &request)const;
			void startSubscriptionInstanceAsync(const Model::StartSubscriptionInstanceRequest& request, const StartSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartSubscriptionInstanceOutcomeCallable startSubscriptionInstanceCallable(const Model::StartSubscriptionInstanceRequest& request) const;
			StartSynchronizationJobOutcome startSynchronizationJob(const Model::StartSynchronizationJobRequest &request)const;
			void startSynchronizationJobAsync(const Model::StartSynchronizationJobRequest& request, const StartSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartSynchronizationJobOutcomeCallable startSynchronizationJobCallable(const Model::StartSynchronizationJobRequest& request) const;
			StopDedicatedClusterOutcome stopDedicatedCluster(const Model::StopDedicatedClusterRequest &request)const;
			void stopDedicatedClusterAsync(const Model::StopDedicatedClusterRequest& request, const StopDedicatedClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDedicatedClusterOutcomeCallable stopDedicatedClusterCallable(const Model::StopDedicatedClusterRequest& request) const;
			StopDtsJobOutcome stopDtsJob(const Model::StopDtsJobRequest &request)const;
			void stopDtsJobAsync(const Model::StopDtsJobRequest& request, const StopDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDtsJobOutcomeCallable stopDtsJobCallable(const Model::StopDtsJobRequest& request) const;
			StopDtsJobsOutcome stopDtsJobs(const Model::StopDtsJobsRequest &request)const;
			void stopDtsJobsAsync(const Model::StopDtsJobsRequest& request, const StopDtsJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDtsJobsOutcomeCallable stopDtsJobsCallable(const Model::StopDtsJobsRequest& request) const;
			StopMigrationJobOutcome stopMigrationJob(const Model::StopMigrationJobRequest &request)const;
			void stopMigrationJobAsync(const Model::StopMigrationJobRequest& request, const StopMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMigrationJobOutcomeCallable stopMigrationJobCallable(const Model::StopMigrationJobRequest& request) const;
			SummaryJobDetailOutcome summaryJobDetail(const Model::SummaryJobDetailRequest &request)const;
			void summaryJobDetailAsync(const Model::SummaryJobDetailRequest& request, const SummaryJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SummaryJobDetailOutcomeCallable summaryJobDetailCallable(const Model::SummaryJobDetailRequest& request) const;
			SuspendDtsJobOutcome suspendDtsJob(const Model::SuspendDtsJobRequest &request)const;
			void suspendDtsJobAsync(const Model::SuspendDtsJobRequest& request, const SuspendDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendDtsJobOutcomeCallable suspendDtsJobCallable(const Model::SuspendDtsJobRequest& request) const;
			SuspendDtsJobsOutcome suspendDtsJobs(const Model::SuspendDtsJobsRequest &request)const;
			void suspendDtsJobsAsync(const Model::SuspendDtsJobsRequest& request, const SuspendDtsJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendDtsJobsOutcomeCallable suspendDtsJobsCallable(const Model::SuspendDtsJobsRequest& request) const;
			SuspendMigrationJobOutcome suspendMigrationJob(const Model::SuspendMigrationJobRequest &request)const;
			void suspendMigrationJobAsync(const Model::SuspendMigrationJobRequest& request, const SuspendMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendMigrationJobOutcomeCallable suspendMigrationJobCallable(const Model::SuspendMigrationJobRequest& request) const;
			SuspendSynchronizationJobOutcome suspendSynchronizationJob(const Model::SuspendSynchronizationJobRequest &request)const;
			void suspendSynchronizationJobAsync(const Model::SuspendSynchronizationJobRequest& request, const SuspendSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendSynchronizationJobOutcomeCallable suspendSynchronizationJobCallable(const Model::SuspendSynchronizationJobRequest& request) const;
			SwitchPhysicalDtsJobToCloudOutcome switchPhysicalDtsJobToCloud(const Model::SwitchPhysicalDtsJobToCloudRequest &request)const;
			void switchPhysicalDtsJobToCloudAsync(const Model::SwitchPhysicalDtsJobToCloudRequest& request, const SwitchPhysicalDtsJobToCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchPhysicalDtsJobToCloudOutcomeCallable switchPhysicalDtsJobToCloudCallable(const Model::SwitchPhysicalDtsJobToCloudRequest& request) const;
			SwitchSynchronizationEndpointOutcome switchSynchronizationEndpoint(const Model::SwitchSynchronizationEndpointRequest &request)const;
			void switchSynchronizationEndpointAsync(const Model::SwitchSynchronizationEndpointRequest& request, const SwitchSynchronizationEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchSynchronizationEndpointOutcomeCallable switchSynchronizationEndpointCallable(const Model::SwitchSynchronizationEndpointRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TransferInstanceClassOutcome transferInstanceClass(const Model::TransferInstanceClassRequest &request)const;
			void transferInstanceClassAsync(const Model::TransferInstanceClassRequest& request, const TransferInstanceClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferInstanceClassOutcomeCallable transferInstanceClassCallable(const Model::TransferInstanceClassRequest& request) const;
			TransferPayTypeOutcome transferPayType(const Model::TransferPayTypeRequest &request)const;
			void transferPayTypeAsync(const Model::TransferPayTypeRequest& request, const TransferPayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferPayTypeOutcomeCallable transferPayTypeCallable(const Model::TransferPayTypeRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpgradeTwoWayOutcome upgradeTwoWay(const Model::UpgradeTwoWayRequest &request)const;
			void upgradeTwoWayAsync(const Model::UpgradeTwoWayRequest& request, const UpgradeTwoWayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeTwoWayOutcomeCallable upgradeTwoWayCallable(const Model::UpgradeTwoWayRequest& request) const;
			WhiteIpListOutcome whiteIpList(const Model::WhiteIpListRequest &request)const;
			void whiteIpListAsync(const Model::WhiteIpListRequest& request, const WhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WhiteIpListOutcomeCallable whiteIpListCallable(const Model::WhiteIpListRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DTS_DTSCLIENT_H_
