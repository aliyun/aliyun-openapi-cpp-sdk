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
#include "model/ConfigurationSynchronizationJobRequest.h"
#include "model/ConfigurationSynchronizationJobResult.h"
#include "model/ConfigureMigrationJobRequest.h"
#include "model/ConfigureMigrationJobResult.h"
#include "model/ConfigureSubscriptionInstanceRequest.h"
#include "model/ConfigureSubscriptionInstanceResult.h"
#include "model/ConfigureSynchronizationJobRequest.h"
#include "model/ConfigureSynchronizationJobResult.h"
#include "model/CreateMigrationJobRequest.h"
#include "model/CreateMigrationJobResult.h"
#include "model/CreateSubscriptionInstanceRequest.h"
#include "model/CreateSubscriptionInstanceResult.h"
#include "model/CreateSynchronizationJobRequest.h"
#include "model/CreateSynchronizationJobResult.h"
#include "model/DeleteMigrationJobRequest.h"
#include "model/DeleteMigrationJobResult.h"
#include "model/DeleteSubscriptionInstanceRequest.h"
#include "model/DeleteSubscriptionInstanceResult.h"
#include "model/DeleteSynchronizationJobRequest.h"
#include "model/DeleteSynchronizationJobResult.h"
#include "model/DescirbeMigrationJobsRequest.h"
#include "model/DescirbeMigrationJobsResult.h"
#include "model/DescribeInitializationStatusRequest.h"
#include "model/DescribeInitializationStatusResult.h"
#include "model/DescribeMigrationJobDetailRequest.h"
#include "model/DescribeMigrationJobDetailResult.h"
#include "model/DescribeMigrationJobStatusRequest.h"
#include "model/DescribeMigrationJobStatusResult.h"
#include "model/DescribeMigrationJobsRequest.h"
#include "model/DescribeMigrationJobsResult.h"
#include "model/DescribeSubscriptionInstanceStatusRequest.h"
#include "model/DescribeSubscriptionInstanceStatusResult.h"
#include "model/DescribeSubscriptionInstancesRequest.h"
#include "model/DescribeSubscriptionInstancesResult.h"
#include "model/DescribeSubscriptionObjectModifyStatusRequest.h"
#include "model/DescribeSubscriptionObjectModifyStatusResult.h"
#include "model/DescribeSynchronizationJobStatusRequest.h"
#include "model/DescribeSynchronizationJobStatusResult.h"
#include "model/DescribeSynchronizationJobsRequest.h"
#include "model/DescribeSynchronizationJobsResult.h"
#include "model/DescribeSynchronizationObjectModifyStatusRequest.h"
#include "model/DescribeSynchronizationObjectModifyStatusResult.h"
#include "model/ModifyConsumptionTimestampRequest.h"
#include "model/ModifyConsumptionTimestampResult.h"
#include "model/ModifyMigrationObjectRequest.h"
#include "model/ModifyMigrationObjectResult.h"
#include "model/ModifySubscriptionObjectRequest.h"
#include "model/ModifySubscriptionObjectResult.h"
#include "model/ModifySynchronizationObjectRequest.h"
#include "model/ModifySynchronizationObjectResult.h"
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


namespace AlibabaCloud
{
	namespace Dts
	{
		class ALIBABACLOUD_DTS_EXPORT DtsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ConfigurationSynchronizationJobResult> ConfigurationSynchronizationJobOutcome;
			typedef std::future<ConfigurationSynchronizationJobOutcome> ConfigurationSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigurationSynchronizationJobRequest&, const ConfigurationSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigurationSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::ConfigureMigrationJobResult> ConfigureMigrationJobOutcome;
			typedef std::future<ConfigureMigrationJobOutcome> ConfigureMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureMigrationJobRequest&, const ConfigureMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::ConfigureSubscriptionInstanceResult> ConfigureSubscriptionInstanceOutcome;
			typedef std::future<ConfigureSubscriptionInstanceOutcome> ConfigureSubscriptionInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureSubscriptionInstanceRequest&, const ConfigureSubscriptionInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSubscriptionInstanceAsyncHandler;
			typedef Outcome<Error, Model::ConfigureSynchronizationJobResult> ConfigureSynchronizationJobOutcome;
			typedef std::future<ConfigureSynchronizationJobOutcome> ConfigureSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureSynchronizationJobRequest&, const ConfigureSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::CreateMigrationJobResult> CreateMigrationJobOutcome;
			typedef std::future<CreateMigrationJobOutcome> CreateMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateMigrationJobRequest&, const CreateMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::CreateSubscriptionInstanceResult> CreateSubscriptionInstanceOutcome;
			typedef std::future<CreateSubscriptionInstanceOutcome> CreateSubscriptionInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateSubscriptionInstanceRequest&, const CreateSubscriptionInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscriptionInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateSynchronizationJobResult> CreateSynchronizationJobOutcome;
			typedef std::future<CreateSynchronizationJobOutcome> CreateSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateSynchronizationJobRequest&, const CreateSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteMigrationJobResult> DeleteMigrationJobOutcome;
			typedef std::future<DeleteMigrationJobOutcome> DeleteMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteMigrationJobRequest&, const DeleteMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteSubscriptionInstanceResult> DeleteSubscriptionInstanceOutcome;
			typedef std::future<DeleteSubscriptionInstanceOutcome> DeleteSubscriptionInstanceOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteSubscriptionInstanceRequest&, const DeleteSubscriptionInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubscriptionInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSynchronizationJobResult> DeleteSynchronizationJobOutcome;
			typedef std::future<DeleteSynchronizationJobOutcome> DeleteSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteSynchronizationJobRequest&, const DeleteSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::DescirbeMigrationJobsResult> DescirbeMigrationJobsOutcome;
			typedef std::future<DescirbeMigrationJobsOutcome> DescirbeMigrationJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescirbeMigrationJobsRequest&, const DescirbeMigrationJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescirbeMigrationJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInitializationStatusResult> DescribeInitializationStatusOutcome;
			typedef std::future<DescribeInitializationStatusOutcome> DescribeInitializationStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeInitializationStatusRequest&, const DescribeInitializationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInitializationStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobDetailResult> DescribeMigrationJobDetailOutcome;
			typedef std::future<DescribeMigrationJobDetailOutcome> DescribeMigrationJobDetailOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobDetailRequest&, const DescribeMigrationJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobStatusResult> DescribeMigrationJobStatusOutcome;
			typedef std::future<DescribeMigrationJobStatusOutcome> DescribeMigrationJobStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobStatusRequest&, const DescribeMigrationJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobsResult> DescribeMigrationJobsOutcome;
			typedef std::future<DescribeMigrationJobsOutcome> DescribeMigrationJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobsRequest&, const DescribeMigrationJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubscriptionInstanceStatusResult> DescribeSubscriptionInstanceStatusOutcome;
			typedef std::future<DescribeSubscriptionInstanceStatusOutcome> DescribeSubscriptionInstanceStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSubscriptionInstanceStatusRequest&, const DescribeSubscriptionInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubscriptionInstancesResult> DescribeSubscriptionInstancesOutcome;
			typedef std::future<DescribeSubscriptionInstancesOutcome> DescribeSubscriptionInstancesOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSubscriptionInstancesRequest&, const DescribeSubscriptionInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubscriptionObjectModifyStatusResult> DescribeSubscriptionObjectModifyStatusOutcome;
			typedef std::future<DescribeSubscriptionObjectModifyStatusOutcome> DescribeSubscriptionObjectModifyStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSubscriptionObjectModifyStatusRequest&, const DescribeSubscriptionObjectModifyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionObjectModifyStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationJobStatusResult> DescribeSynchronizationJobStatusOutcome;
			typedef std::future<DescribeSynchronizationJobStatusOutcome> DescribeSynchronizationJobStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationJobStatusRequest&, const DescribeSynchronizationJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationJobStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationJobsResult> DescribeSynchronizationJobsOutcome;
			typedef std::future<DescribeSynchronizationJobsOutcome> DescribeSynchronizationJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationJobsRequest&, const DescribeSynchronizationJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationObjectModifyStatusResult> DescribeSynchronizationObjectModifyStatusOutcome;
			typedef std::future<DescribeSynchronizationObjectModifyStatusOutcome> DescribeSynchronizationObjectModifyStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationObjectModifyStatusRequest&, const DescribeSynchronizationObjectModifyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationObjectModifyStatusAsyncHandler;
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

			DtsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DtsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DtsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DtsClient();
			ConfigurationSynchronizationJobOutcome configurationSynchronizationJob(const Model::ConfigurationSynchronizationJobRequest &request)const;
			void configurationSynchronizationJobAsync(const Model::ConfigurationSynchronizationJobRequest& request, const ConfigurationSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigurationSynchronizationJobOutcomeCallable configurationSynchronizationJobCallable(const Model::ConfigurationSynchronizationJobRequest& request) const;
			ConfigureMigrationJobOutcome configureMigrationJob(const Model::ConfigureMigrationJobRequest &request)const;
			void configureMigrationJobAsync(const Model::ConfigureMigrationJobRequest& request, const ConfigureMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureMigrationJobOutcomeCallable configureMigrationJobCallable(const Model::ConfigureMigrationJobRequest& request) const;
			ConfigureSubscriptionInstanceOutcome configureSubscriptionInstance(const Model::ConfigureSubscriptionInstanceRequest &request)const;
			void configureSubscriptionInstanceAsync(const Model::ConfigureSubscriptionInstanceRequest& request, const ConfigureSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSubscriptionInstanceOutcomeCallable configureSubscriptionInstanceCallable(const Model::ConfigureSubscriptionInstanceRequest& request) const;
			ConfigureSynchronizationJobOutcome configureSynchronizationJob(const Model::ConfigureSynchronizationJobRequest &request)const;
			void configureSynchronizationJobAsync(const Model::ConfigureSynchronizationJobRequest& request, const ConfigureSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSynchronizationJobOutcomeCallable configureSynchronizationJobCallable(const Model::ConfigureSynchronizationJobRequest& request) const;
			CreateMigrationJobOutcome createMigrationJob(const Model::CreateMigrationJobRequest &request)const;
			void createMigrationJobAsync(const Model::CreateMigrationJobRequest& request, const CreateMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMigrationJobOutcomeCallable createMigrationJobCallable(const Model::CreateMigrationJobRequest& request) const;
			CreateSubscriptionInstanceOutcome createSubscriptionInstance(const Model::CreateSubscriptionInstanceRequest &request)const;
			void createSubscriptionInstanceAsync(const Model::CreateSubscriptionInstanceRequest& request, const CreateSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSubscriptionInstanceOutcomeCallable createSubscriptionInstanceCallable(const Model::CreateSubscriptionInstanceRequest& request) const;
			CreateSynchronizationJobOutcome createSynchronizationJob(const Model::CreateSynchronizationJobRequest &request)const;
			void createSynchronizationJobAsync(const Model::CreateSynchronizationJobRequest& request, const CreateSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSynchronizationJobOutcomeCallable createSynchronizationJobCallable(const Model::CreateSynchronizationJobRequest& request) const;
			DeleteMigrationJobOutcome deleteMigrationJob(const Model::DeleteMigrationJobRequest &request)const;
			void deleteMigrationJobAsync(const Model::DeleteMigrationJobRequest& request, const DeleteMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMigrationJobOutcomeCallable deleteMigrationJobCallable(const Model::DeleteMigrationJobRequest& request) const;
			DeleteSubscriptionInstanceOutcome deleteSubscriptionInstance(const Model::DeleteSubscriptionInstanceRequest &request)const;
			void deleteSubscriptionInstanceAsync(const Model::DeleteSubscriptionInstanceRequest& request, const DeleteSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSubscriptionInstanceOutcomeCallable deleteSubscriptionInstanceCallable(const Model::DeleteSubscriptionInstanceRequest& request) const;
			DeleteSynchronizationJobOutcome deleteSynchronizationJob(const Model::DeleteSynchronizationJobRequest &request)const;
			void deleteSynchronizationJobAsync(const Model::DeleteSynchronizationJobRequest& request, const DeleteSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSynchronizationJobOutcomeCallable deleteSynchronizationJobCallable(const Model::DeleteSynchronizationJobRequest& request) const;
			DescirbeMigrationJobsOutcome descirbeMigrationJobs(const Model::DescirbeMigrationJobsRequest &request)const;
			void descirbeMigrationJobsAsync(const Model::DescirbeMigrationJobsRequest& request, const DescirbeMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescirbeMigrationJobsOutcomeCallable descirbeMigrationJobsCallable(const Model::DescirbeMigrationJobsRequest& request) const;
			DescribeInitializationStatusOutcome describeInitializationStatus(const Model::DescribeInitializationStatusRequest &request)const;
			void describeInitializationStatusAsync(const Model::DescribeInitializationStatusRequest& request, const DescribeInitializationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInitializationStatusOutcomeCallable describeInitializationStatusCallable(const Model::DescribeInitializationStatusRequest& request) const;
			DescribeMigrationJobDetailOutcome describeMigrationJobDetail(const Model::DescribeMigrationJobDetailRequest &request)const;
			void describeMigrationJobDetailAsync(const Model::DescribeMigrationJobDetailRequest& request, const DescribeMigrationJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobDetailOutcomeCallable describeMigrationJobDetailCallable(const Model::DescribeMigrationJobDetailRequest& request) const;
			DescribeMigrationJobStatusOutcome describeMigrationJobStatus(const Model::DescribeMigrationJobStatusRequest &request)const;
			void describeMigrationJobStatusAsync(const Model::DescribeMigrationJobStatusRequest& request, const DescribeMigrationJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobStatusOutcomeCallable describeMigrationJobStatusCallable(const Model::DescribeMigrationJobStatusRequest& request) const;
			DescribeMigrationJobsOutcome describeMigrationJobs(const Model::DescribeMigrationJobsRequest &request)const;
			void describeMigrationJobsAsync(const Model::DescribeMigrationJobsRequest& request, const DescribeMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobsOutcomeCallable describeMigrationJobsCallable(const Model::DescribeMigrationJobsRequest& request) const;
			DescribeSubscriptionInstanceStatusOutcome describeSubscriptionInstanceStatus(const Model::DescribeSubscriptionInstanceStatusRequest &request)const;
			void describeSubscriptionInstanceStatusAsync(const Model::DescribeSubscriptionInstanceStatusRequest& request, const DescribeSubscriptionInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionInstanceStatusOutcomeCallable describeSubscriptionInstanceStatusCallable(const Model::DescribeSubscriptionInstanceStatusRequest& request) const;
			DescribeSubscriptionInstancesOutcome describeSubscriptionInstances(const Model::DescribeSubscriptionInstancesRequest &request)const;
			void describeSubscriptionInstancesAsync(const Model::DescribeSubscriptionInstancesRequest& request, const DescribeSubscriptionInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionInstancesOutcomeCallable describeSubscriptionInstancesCallable(const Model::DescribeSubscriptionInstancesRequest& request) const;
			DescribeSubscriptionObjectModifyStatusOutcome describeSubscriptionObjectModifyStatus(const Model::DescribeSubscriptionObjectModifyStatusRequest &request)const;
			void describeSubscriptionObjectModifyStatusAsync(const Model::DescribeSubscriptionObjectModifyStatusRequest& request, const DescribeSubscriptionObjectModifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionObjectModifyStatusOutcomeCallable describeSubscriptionObjectModifyStatusCallable(const Model::DescribeSubscriptionObjectModifyStatusRequest& request) const;
			DescribeSynchronizationJobStatusOutcome describeSynchronizationJobStatus(const Model::DescribeSynchronizationJobStatusRequest &request)const;
			void describeSynchronizationJobStatusAsync(const Model::DescribeSynchronizationJobStatusRequest& request, const DescribeSynchronizationJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationJobStatusOutcomeCallable describeSynchronizationJobStatusCallable(const Model::DescribeSynchronizationJobStatusRequest& request) const;
			DescribeSynchronizationJobsOutcome describeSynchronizationJobs(const Model::DescribeSynchronizationJobsRequest &request)const;
			void describeSynchronizationJobsAsync(const Model::DescribeSynchronizationJobsRequest& request, const DescribeSynchronizationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationJobsOutcomeCallable describeSynchronizationJobsCallable(const Model::DescribeSynchronizationJobsRequest& request) const;
			DescribeSynchronizationObjectModifyStatusOutcome describeSynchronizationObjectModifyStatus(const Model::DescribeSynchronizationObjectModifyStatusRequest &request)const;
			void describeSynchronizationObjectModifyStatusAsync(const Model::DescribeSynchronizationObjectModifyStatusRequest& request, const DescribeSynchronizationObjectModifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationObjectModifyStatusOutcomeCallable describeSynchronizationObjectModifyStatusCallable(const Model::DescribeSynchronizationObjectModifyStatusRequest& request) const;
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
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DTS_DTSCLIENT_H_
