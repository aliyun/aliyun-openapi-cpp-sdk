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
#include "model/ConfigureMigrationJobRequest.h"
#include "model/ConfigureMigrationJobResult.h"
#include "model/ConfigureMigrationJobAlertRequest.h"
#include "model/ConfigureMigrationJobAlertResult.h"
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
#include "model/CreateConsumerGroupRequest.h"
#include "model/CreateConsumerGroupResult.h"
#include "model/CreateMigrationJobRequest.h"
#include "model/CreateMigrationJobResult.h"
#include "model/CreateSubscriptionInstanceRequest.h"
#include "model/CreateSubscriptionInstanceResult.h"
#include "model/CreateSynchronizationJobRequest.h"
#include "model/CreateSynchronizationJobResult.h"
#include "model/DeleteConsumerGroupRequest.h"
#include "model/DeleteConsumerGroupResult.h"
#include "model/DeleteMigrationJobRequest.h"
#include "model/DeleteMigrationJobResult.h"
#include "model/DeleteSubscriptionInstanceRequest.h"
#include "model/DeleteSubscriptionInstanceResult.h"
#include "model/DeleteSynchronizationJobRequest.h"
#include "model/DeleteSynchronizationJobResult.h"
#include "model/DescribeConnectionStatusRequest.h"
#include "model/DescribeConnectionStatusResult.h"
#include "model/DescribeConsumerGroupRequest.h"
#include "model/DescribeConsumerGroupResult.h"
#include "model/DescribeDTSIPRequest.h"
#include "model/DescribeDTSIPResult.h"
#include "model/DescribeEndpointSwitchStatusRequest.h"
#include "model/DescribeEndpointSwitchStatusResult.h"
#include "model/DescribeInitializationStatusRequest.h"
#include "model/DescribeInitializationStatusResult.h"
#include "model/DescribeMigrationJobAlertRequest.h"
#include "model/DescribeMigrationJobAlertResult.h"
#include "model/DescribeMigrationJobDetailRequest.h"
#include "model/DescribeMigrationJobDetailResult.h"
#include "model/DescribeMigrationJobStatusRequest.h"
#include "model/DescribeMigrationJobStatusResult.h"
#include "model/DescribeMigrationJobsRequest.h"
#include "model/DescribeMigrationJobsResult.h"
#include "model/DescribeSubscriptionInstanceAlertRequest.h"
#include "model/DescribeSubscriptionInstanceAlertResult.h"
#include "model/DescribeSubscriptionInstanceStatusRequest.h"
#include "model/DescribeSubscriptionInstanceStatusResult.h"
#include "model/DescribeSubscriptionInstancesRequest.h"
#include "model/DescribeSubscriptionInstancesResult.h"
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
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyConsumerGroupPasswordRequest.h"
#include "model/ModifyConsumerGroupPasswordResult.h"
#include "model/ModifyConsumptionTimestampRequest.h"
#include "model/ModifyConsumptionTimestampResult.h"
#include "model/ModifyMigrationObjectRequest.h"
#include "model/ModifyMigrationObjectResult.h"
#include "model/ModifySubscriptionObjectRequest.h"
#include "model/ModifySubscriptionObjectResult.h"
#include "model/ModifySynchronizationObjectRequest.h"
#include "model/ModifySynchronizationObjectResult.h"
#include "model/ResetSynchronizationJobRequest.h"
#include "model/ResetSynchronizationJobResult.h"
#include "model/ShieldPrecheckRequest.h"
#include "model/ShieldPrecheckResult.h"
#include "model/StartMigrationJobRequest.h"
#include "model/StartMigrationJobResult.h"
#include "model/StartSubscriptionInstanceRequest.h"
#include "model/StartSubscriptionInstanceResult.h"
#include "model/StartSynchronizationJobRequest.h"
#include "model/StartSynchronizationJobResult.h"
#include "model/StopMigrationJobRequest.h"
#include "model/StopMigrationJobResult.h"
#include "model/SuspendMigrationJobRequest.h"
#include "model/SuspendMigrationJobResult.h"
#include "model/SuspendSynchronizationJobRequest.h"
#include "model/SuspendSynchronizationJobResult.h"
#include "model/SwitchSynchronizationEndpointRequest.h"
#include "model/SwitchSynchronizationEndpointResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Dts
	{
		class ALIBABACLOUD_DTS_EXPORT DtsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ConfigureMigrationJobResult> ConfigureMigrationJobOutcome;
			typedef std::future<ConfigureMigrationJobOutcome> ConfigureMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureMigrationJobRequest&, const ConfigureMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::ConfigureMigrationJobAlertResult> ConfigureMigrationJobAlertOutcome;
			typedef std::future<ConfigureMigrationJobAlertOutcome> ConfigureMigrationJobAlertOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureMigrationJobAlertRequest&, const ConfigureMigrationJobAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureMigrationJobAlertAsyncHandler;
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
			typedef Outcome<Error, Model::CreateConsumerGroupResult> CreateConsumerGroupOutcome;
			typedef std::future<CreateConsumerGroupOutcome> CreateConsumerGroupOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateConsumerGroupRequest&, const CreateConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateMigrationJobResult> CreateMigrationJobOutcome;
			typedef std::future<CreateMigrationJobOutcome> CreateMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateMigrationJobRequest&, const CreateMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::CreateSubscriptionInstanceResult> CreateSubscriptionInstanceOutcome;
			typedef std::future<CreateSubscriptionInstanceOutcome> CreateSubscriptionInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateSubscriptionInstanceRequest&, const CreateSubscriptionInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscriptionInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateSynchronizationJobResult> CreateSynchronizationJobOutcome;
			typedef std::future<CreateSynchronizationJobOutcome> CreateSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateSynchronizationJobRequest&, const CreateSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteConsumerGroupResult> DeleteConsumerGroupOutcome;
			typedef std::future<DeleteConsumerGroupOutcome> DeleteConsumerGroupOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteConsumerGroupRequest&, const DeleteConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteMigrationJobResult> DeleteMigrationJobOutcome;
			typedef std::future<DeleteMigrationJobOutcome> DeleteMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteMigrationJobRequest&, const DeleteMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteSubscriptionInstanceResult> DeleteSubscriptionInstanceOutcome;
			typedef std::future<DeleteSubscriptionInstanceOutcome> DeleteSubscriptionInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteSubscriptionInstanceRequest&, const DeleteSubscriptionInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubscriptionInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSynchronizationJobResult> DeleteSynchronizationJobOutcome;
			typedef std::future<DeleteSynchronizationJobOutcome> DeleteSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteSynchronizationJobRequest&, const DeleteSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeConnectionStatusResult> DescribeConnectionStatusOutcome;
			typedef std::future<DescribeConnectionStatusOutcome> DescribeConnectionStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeConnectionStatusRequest&, const DescribeConnectionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConnectionStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeConsumerGroupResult> DescribeConsumerGroupOutcome;
			typedef std::future<DescribeConsumerGroupOutcome> DescribeConsumerGroupOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeConsumerGroupRequest&, const DescribeConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeDTSIPResult> DescribeDTSIPOutcome;
			typedef std::future<DescribeDTSIPOutcome> DescribeDTSIPOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeDTSIPRequest&, const DescribeDTSIPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDTSIPAsyncHandler;
			typedef Outcome<Error, Model::DescribeEndpointSwitchStatusResult> DescribeEndpointSwitchStatusOutcome;
			typedef std::future<DescribeEndpointSwitchStatusOutcome> DescribeEndpointSwitchStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeEndpointSwitchStatusRequest&, const DescribeEndpointSwitchStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointSwitchStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeInitializationStatusResult> DescribeInitializationStatusOutcome;
			typedef std::future<DescribeInitializationStatusOutcome> DescribeInitializationStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeInitializationStatusRequest&, const DescribeInitializationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInitializationStatusAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeSubscriptionInstanceAlertResult> DescribeSubscriptionInstanceAlertOutcome;
			typedef std::future<DescribeSubscriptionInstanceAlertOutcome> DescribeSubscriptionInstanceAlertOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSubscriptionInstanceAlertRequest&, const DescribeSubscriptionInstanceAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionInstanceAlertAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubscriptionInstanceStatusResult> DescribeSubscriptionInstanceStatusOutcome;
			typedef std::future<DescribeSubscriptionInstanceStatusOutcome> DescribeSubscriptionInstanceStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSubscriptionInstanceStatusRequest&, const DescribeSubscriptionInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubscriptionInstancesResult> DescribeSubscriptionInstancesOutcome;
			typedef std::future<DescribeSubscriptionInstancesOutcome> DescribeSubscriptionInstancesOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSubscriptionInstancesRequest&, const DescribeSubscriptionInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionInstancesAsyncHandler;
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
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyConsumerGroupPasswordResult> ModifyConsumerGroupPasswordOutcome;
			typedef std::future<ModifyConsumerGroupPasswordOutcome> ModifyConsumerGroupPasswordOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyConsumerGroupPasswordRequest&, const ModifyConsumerGroupPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumerGroupPasswordAsyncHandler;
			typedef Outcome<Error, Model::ModifyConsumptionTimestampResult> ModifyConsumptionTimestampOutcome;
			typedef std::future<ModifyConsumptionTimestampOutcome> ModifyConsumptionTimestampOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyConsumptionTimestampRequest&, const ModifyConsumptionTimestampOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyConsumptionTimestampAsyncHandler;
			typedef Outcome<Error, Model::ModifyMigrationObjectResult> ModifyMigrationObjectOutcome;
			typedef std::future<ModifyMigrationObjectOutcome> ModifyMigrationObjectOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyMigrationObjectRequest&, const ModifyMigrationObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationObjectAsyncHandler;
			typedef Outcome<Error, Model::ModifySubscriptionObjectResult> ModifySubscriptionObjectOutcome;
			typedef std::future<ModifySubscriptionObjectOutcome> ModifySubscriptionObjectOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifySubscriptionObjectRequest&, const ModifySubscriptionObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscriptionObjectAsyncHandler;
			typedef Outcome<Error, Model::ModifySynchronizationObjectResult> ModifySynchronizationObjectOutcome;
			typedef std::future<ModifySynchronizationObjectOutcome> ModifySynchronizationObjectOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifySynchronizationObjectRequest&, const ModifySynchronizationObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySynchronizationObjectAsyncHandler;
			typedef Outcome<Error, Model::ResetSynchronizationJobResult> ResetSynchronizationJobOutcome;
			typedef std::future<ResetSynchronizationJobOutcome> ResetSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ResetSynchronizationJobRequest&, const ResetSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::ShieldPrecheckResult> ShieldPrecheckOutcome;
			typedef std::future<ShieldPrecheckOutcome> ShieldPrecheckOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ShieldPrecheckRequest&, const ShieldPrecheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ShieldPrecheckAsyncHandler;
			typedef Outcome<Error, Model::StartMigrationJobResult> StartMigrationJobOutcome;
			typedef std::future<StartMigrationJobOutcome> StartMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StartMigrationJobRequest&, const StartMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::StartSubscriptionInstanceResult> StartSubscriptionInstanceOutcome;
			typedef std::future<StartSubscriptionInstanceOutcome> StartSubscriptionInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StartSubscriptionInstanceRequest&, const StartSubscriptionInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartSubscriptionInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartSynchronizationJobResult> StartSynchronizationJobOutcome;
			typedef std::future<StartSynchronizationJobOutcome> StartSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StartSynchronizationJobRequest&, const StartSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::StopMigrationJobResult> StopMigrationJobOutcome;
			typedef std::future<StopMigrationJobOutcome> StopMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StopMigrationJobRequest&, const StopMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::SuspendMigrationJobResult> SuspendMigrationJobOutcome;
			typedef std::future<SuspendMigrationJobOutcome> SuspendMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SuspendMigrationJobRequest&, const SuspendMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::SuspendSynchronizationJobResult> SuspendSynchronizationJobOutcome;
			typedef std::future<SuspendSynchronizationJobOutcome> SuspendSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SuspendSynchronizationJobRequest&, const SuspendSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::SwitchSynchronizationEndpointResult> SwitchSynchronizationEndpointOutcome;
			typedef std::future<SwitchSynchronizationEndpointOutcome> SwitchSynchronizationEndpointOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SwitchSynchronizationEndpointRequest&, const SwitchSynchronizationEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchSynchronizationEndpointAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			DtsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DtsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DtsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DtsClient();
			ConfigureMigrationJobOutcome configureMigrationJob(const Model::ConfigureMigrationJobRequest &request)const;
			void configureMigrationJobAsync(const Model::ConfigureMigrationJobRequest& request, const ConfigureMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureMigrationJobOutcomeCallable configureMigrationJobCallable(const Model::ConfigureMigrationJobRequest& request) const;
			ConfigureMigrationJobAlertOutcome configureMigrationJobAlert(const Model::ConfigureMigrationJobAlertRequest &request)const;
			void configureMigrationJobAlertAsync(const Model::ConfigureMigrationJobAlertRequest& request, const ConfigureMigrationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureMigrationJobAlertOutcomeCallable configureMigrationJobAlertCallable(const Model::ConfigureMigrationJobAlertRequest& request) const;
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
			CreateConsumerGroupOutcome createConsumerGroup(const Model::CreateConsumerGroupRequest &request)const;
			void createConsumerGroupAsync(const Model::CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConsumerGroupOutcomeCallable createConsumerGroupCallable(const Model::CreateConsumerGroupRequest& request) const;
			CreateMigrationJobOutcome createMigrationJob(const Model::CreateMigrationJobRequest &request)const;
			void createMigrationJobAsync(const Model::CreateMigrationJobRequest& request, const CreateMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMigrationJobOutcomeCallable createMigrationJobCallable(const Model::CreateMigrationJobRequest& request) const;
			CreateSubscriptionInstanceOutcome createSubscriptionInstance(const Model::CreateSubscriptionInstanceRequest &request)const;
			void createSubscriptionInstanceAsync(const Model::CreateSubscriptionInstanceRequest& request, const CreateSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSubscriptionInstanceOutcomeCallable createSubscriptionInstanceCallable(const Model::CreateSubscriptionInstanceRequest& request) const;
			CreateSynchronizationJobOutcome createSynchronizationJob(const Model::CreateSynchronizationJobRequest &request)const;
			void createSynchronizationJobAsync(const Model::CreateSynchronizationJobRequest& request, const CreateSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSynchronizationJobOutcomeCallable createSynchronizationJobCallable(const Model::CreateSynchronizationJobRequest& request) const;
			DeleteConsumerGroupOutcome deleteConsumerGroup(const Model::DeleteConsumerGroupRequest &request)const;
			void deleteConsumerGroupAsync(const Model::DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConsumerGroupOutcomeCallable deleteConsumerGroupCallable(const Model::DeleteConsumerGroupRequest& request) const;
			DeleteMigrationJobOutcome deleteMigrationJob(const Model::DeleteMigrationJobRequest &request)const;
			void deleteMigrationJobAsync(const Model::DeleteMigrationJobRequest& request, const DeleteMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMigrationJobOutcomeCallable deleteMigrationJobCallable(const Model::DeleteMigrationJobRequest& request) const;
			DeleteSubscriptionInstanceOutcome deleteSubscriptionInstance(const Model::DeleteSubscriptionInstanceRequest &request)const;
			void deleteSubscriptionInstanceAsync(const Model::DeleteSubscriptionInstanceRequest& request, const DeleteSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSubscriptionInstanceOutcomeCallable deleteSubscriptionInstanceCallable(const Model::DeleteSubscriptionInstanceRequest& request) const;
			DeleteSynchronizationJobOutcome deleteSynchronizationJob(const Model::DeleteSynchronizationJobRequest &request)const;
			void deleteSynchronizationJobAsync(const Model::DeleteSynchronizationJobRequest& request, const DeleteSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSynchronizationJobOutcomeCallable deleteSynchronizationJobCallable(const Model::DeleteSynchronizationJobRequest& request) const;
			DescribeConnectionStatusOutcome describeConnectionStatus(const Model::DescribeConnectionStatusRequest &request)const;
			void describeConnectionStatusAsync(const Model::DescribeConnectionStatusRequest& request, const DescribeConnectionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConnectionStatusOutcomeCallable describeConnectionStatusCallable(const Model::DescribeConnectionStatusRequest& request) const;
			DescribeConsumerGroupOutcome describeConsumerGroup(const Model::DescribeConsumerGroupRequest &request)const;
			void describeConsumerGroupAsync(const Model::DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConsumerGroupOutcomeCallable describeConsumerGroupCallable(const Model::DescribeConsumerGroupRequest& request) const;
			DescribeDTSIPOutcome describeDTSIP(const Model::DescribeDTSIPRequest &request)const;
			void describeDTSIPAsync(const Model::DescribeDTSIPRequest& request, const DescribeDTSIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDTSIPOutcomeCallable describeDTSIPCallable(const Model::DescribeDTSIPRequest& request) const;
			DescribeEndpointSwitchStatusOutcome describeEndpointSwitchStatus(const Model::DescribeEndpointSwitchStatusRequest &request)const;
			void describeEndpointSwitchStatusAsync(const Model::DescribeEndpointSwitchStatusRequest& request, const DescribeEndpointSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEndpointSwitchStatusOutcomeCallable describeEndpointSwitchStatusCallable(const Model::DescribeEndpointSwitchStatusRequest& request) const;
			DescribeInitializationStatusOutcome describeInitializationStatus(const Model::DescribeInitializationStatusRequest &request)const;
			void describeInitializationStatusAsync(const Model::DescribeInitializationStatusRequest& request, const DescribeInitializationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInitializationStatusOutcomeCallable describeInitializationStatusCallable(const Model::DescribeInitializationStatusRequest& request) const;
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
			DescribeSubscriptionInstanceAlertOutcome describeSubscriptionInstanceAlert(const Model::DescribeSubscriptionInstanceAlertRequest &request)const;
			void describeSubscriptionInstanceAlertAsync(const Model::DescribeSubscriptionInstanceAlertRequest& request, const DescribeSubscriptionInstanceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionInstanceAlertOutcomeCallable describeSubscriptionInstanceAlertCallable(const Model::DescribeSubscriptionInstanceAlertRequest& request) const;
			DescribeSubscriptionInstanceStatusOutcome describeSubscriptionInstanceStatus(const Model::DescribeSubscriptionInstanceStatusRequest &request)const;
			void describeSubscriptionInstanceStatusAsync(const Model::DescribeSubscriptionInstanceStatusRequest& request, const DescribeSubscriptionInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionInstanceStatusOutcomeCallable describeSubscriptionInstanceStatusCallable(const Model::DescribeSubscriptionInstanceStatusRequest& request) const;
			DescribeSubscriptionInstancesOutcome describeSubscriptionInstances(const Model::DescribeSubscriptionInstancesRequest &request)const;
			void describeSubscriptionInstancesAsync(const Model::DescribeSubscriptionInstancesRequest& request, const DescribeSubscriptionInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionInstancesOutcomeCallable describeSubscriptionInstancesCallable(const Model::DescribeSubscriptionInstancesRequest& request) const;
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
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyConsumerGroupPasswordOutcome modifyConsumerGroupPassword(const Model::ModifyConsumerGroupPasswordRequest &request)const;
			void modifyConsumerGroupPasswordAsync(const Model::ModifyConsumerGroupPasswordRequest& request, const ModifyConsumerGroupPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConsumerGroupPasswordOutcomeCallable modifyConsumerGroupPasswordCallable(const Model::ModifyConsumerGroupPasswordRequest& request) const;
			ModifyConsumptionTimestampOutcome modifyConsumptionTimestamp(const Model::ModifyConsumptionTimestampRequest &request)const;
			void modifyConsumptionTimestampAsync(const Model::ModifyConsumptionTimestampRequest& request, const ModifyConsumptionTimestampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyConsumptionTimestampOutcomeCallable modifyConsumptionTimestampCallable(const Model::ModifyConsumptionTimestampRequest& request) const;
			ModifyMigrationObjectOutcome modifyMigrationObject(const Model::ModifyMigrationObjectRequest &request)const;
			void modifyMigrationObjectAsync(const Model::ModifyMigrationObjectRequest& request, const ModifyMigrationObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMigrationObjectOutcomeCallable modifyMigrationObjectCallable(const Model::ModifyMigrationObjectRequest& request) const;
			ModifySubscriptionObjectOutcome modifySubscriptionObject(const Model::ModifySubscriptionObjectRequest &request)const;
			void modifySubscriptionObjectAsync(const Model::ModifySubscriptionObjectRequest& request, const ModifySubscriptionObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySubscriptionObjectOutcomeCallable modifySubscriptionObjectCallable(const Model::ModifySubscriptionObjectRequest& request) const;
			ModifySynchronizationObjectOutcome modifySynchronizationObject(const Model::ModifySynchronizationObjectRequest &request)const;
			void modifySynchronizationObjectAsync(const Model::ModifySynchronizationObjectRequest& request, const ModifySynchronizationObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySynchronizationObjectOutcomeCallable modifySynchronizationObjectCallable(const Model::ModifySynchronizationObjectRequest& request) const;
			ResetSynchronizationJobOutcome resetSynchronizationJob(const Model::ResetSynchronizationJobRequest &request)const;
			void resetSynchronizationJobAsync(const Model::ResetSynchronizationJobRequest& request, const ResetSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetSynchronizationJobOutcomeCallable resetSynchronizationJobCallable(const Model::ResetSynchronizationJobRequest& request) const;
			ShieldPrecheckOutcome shieldPrecheck(const Model::ShieldPrecheckRequest &request)const;
			void shieldPrecheckAsync(const Model::ShieldPrecheckRequest& request, const ShieldPrecheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ShieldPrecheckOutcomeCallable shieldPrecheckCallable(const Model::ShieldPrecheckRequest& request) const;
			StartMigrationJobOutcome startMigrationJob(const Model::StartMigrationJobRequest &request)const;
			void startMigrationJobAsync(const Model::StartMigrationJobRequest& request, const StartMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartMigrationJobOutcomeCallable startMigrationJobCallable(const Model::StartMigrationJobRequest& request) const;
			StartSubscriptionInstanceOutcome startSubscriptionInstance(const Model::StartSubscriptionInstanceRequest &request)const;
			void startSubscriptionInstanceAsync(const Model::StartSubscriptionInstanceRequest& request, const StartSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartSubscriptionInstanceOutcomeCallable startSubscriptionInstanceCallable(const Model::StartSubscriptionInstanceRequest& request) const;
			StartSynchronizationJobOutcome startSynchronizationJob(const Model::StartSynchronizationJobRequest &request)const;
			void startSynchronizationJobAsync(const Model::StartSynchronizationJobRequest& request, const StartSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartSynchronizationJobOutcomeCallable startSynchronizationJobCallable(const Model::StartSynchronizationJobRequest& request) const;
			StopMigrationJobOutcome stopMigrationJob(const Model::StopMigrationJobRequest &request)const;
			void stopMigrationJobAsync(const Model::StopMigrationJobRequest& request, const StopMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMigrationJobOutcomeCallable stopMigrationJobCallable(const Model::StopMigrationJobRequest& request) const;
			SuspendMigrationJobOutcome suspendMigrationJob(const Model::SuspendMigrationJobRequest &request)const;
			void suspendMigrationJobAsync(const Model::SuspendMigrationJobRequest& request, const SuspendMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendMigrationJobOutcomeCallable suspendMigrationJobCallable(const Model::SuspendMigrationJobRequest& request) const;
			SuspendSynchronizationJobOutcome suspendSynchronizationJob(const Model::SuspendSynchronizationJobRequest &request)const;
			void suspendSynchronizationJobAsync(const Model::SuspendSynchronizationJobRequest& request, const SuspendSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendSynchronizationJobOutcomeCallable suspendSynchronizationJobCallable(const Model::SuspendSynchronizationJobRequest& request) const;
			SwitchSynchronizationEndpointOutcome switchSynchronizationEndpoint(const Model::SwitchSynchronizationEndpointRequest &request)const;
			void switchSynchronizationEndpointAsync(const Model::SwitchSynchronizationEndpointRequest& request, const SwitchSynchronizationEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchSynchronizationEndpointOutcomeCallable switchSynchronizationEndpointCallable(const Model::SwitchSynchronizationEndpointRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DTS_DTSCLIENT_H_
