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
#include "model/CreateMigrationJobRequest.h"
#include "model/CreateMigrationJobResult.h"
#include "model/DeleteMigrationJobRequest.h"
#include "model/DeleteMigrationJobResult.h"
#include "model/DescirbeMigrationJobsRequest.h"
#include "model/DescirbeMigrationJobsResult.h"
#include "model/DescribeMigrationJobDetailRequest.h"
#include "model/DescribeMigrationJobDetailResult.h"
#include "model/DescribeMigrationJobStatusRequest.h"
#include "model/DescribeMigrationJobStatusResult.h"
#include "model/ModifyMigrationObjectRequest.h"
#include "model/ModifyMigrationObjectResult.h"
#include "model/StartMigrationJobRequest.h"
#include "model/StartMigrationJobResult.h"
#include "model/StopMigrationJobRequest.h"
#include "model/StopMigrationJobResult.h"
#include "model/SuspendMigrationJobRequest.h"
#include "model/SuspendMigrationJobResult.h"


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
			typedef Outcome<Error, Model::CreateMigrationJobResult> CreateMigrationJobOutcome;
			typedef std::future<CreateMigrationJobOutcome> CreateMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateMigrationJobRequest&, const CreateMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteMigrationJobResult> DeleteMigrationJobOutcome;
			typedef std::future<DeleteMigrationJobOutcome> DeleteMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteMigrationJobRequest&, const DeleteMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::DescirbeMigrationJobsResult> DescirbeMigrationJobsOutcome;
			typedef std::future<DescirbeMigrationJobsOutcome> DescirbeMigrationJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescirbeMigrationJobsRequest&, const DescirbeMigrationJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescirbeMigrationJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobDetailResult> DescribeMigrationJobDetailOutcome;
			typedef std::future<DescribeMigrationJobDetailOutcome> DescribeMigrationJobDetailOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobDetailRequest&, const DescribeMigrationJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobStatusResult> DescribeMigrationJobStatusOutcome;
			typedef std::future<DescribeMigrationJobStatusOutcome> DescribeMigrationJobStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeMigrationJobStatusRequest&, const DescribeMigrationJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyMigrationObjectResult> ModifyMigrationObjectOutcome;
			typedef std::future<ModifyMigrationObjectOutcome> ModifyMigrationObjectOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifyMigrationObjectRequest&, const ModifyMigrationObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationObjectAsyncHandler;
			typedef Outcome<Error, Model::StartMigrationJobResult> StartMigrationJobOutcome;
			typedef std::future<StartMigrationJobOutcome> StartMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StartMigrationJobRequest&, const StartMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::StopMigrationJobResult> StopMigrationJobOutcome;
			typedef std::future<StopMigrationJobOutcome> StopMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StopMigrationJobRequest&, const StopMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::SuspendMigrationJobResult> SuspendMigrationJobOutcome;
			typedef std::future<SuspendMigrationJobOutcome> SuspendMigrationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SuspendMigrationJobRequest&, const SuspendMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendMigrationJobAsyncHandler;

			DtsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DtsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DtsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DtsClient();
			ConfigureMigrationJobOutcome configureMigrationJob(const Model::ConfigureMigrationJobRequest &request)const;
			void configureMigrationJobAsync(const Model::ConfigureMigrationJobRequest& request, const ConfigureMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureMigrationJobOutcomeCallable configureMigrationJobCallable(const Model::ConfigureMigrationJobRequest& request) const;
			CreateMigrationJobOutcome createMigrationJob(const Model::CreateMigrationJobRequest &request)const;
			void createMigrationJobAsync(const Model::CreateMigrationJobRequest& request, const CreateMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMigrationJobOutcomeCallable createMigrationJobCallable(const Model::CreateMigrationJobRequest& request) const;
			DeleteMigrationJobOutcome deleteMigrationJob(const Model::DeleteMigrationJobRequest &request)const;
			void deleteMigrationJobAsync(const Model::DeleteMigrationJobRequest& request, const DeleteMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMigrationJobOutcomeCallable deleteMigrationJobCallable(const Model::DeleteMigrationJobRequest& request) const;
			DescirbeMigrationJobsOutcome descirbeMigrationJobs(const Model::DescirbeMigrationJobsRequest &request)const;
			void descirbeMigrationJobsAsync(const Model::DescirbeMigrationJobsRequest& request, const DescirbeMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescirbeMigrationJobsOutcomeCallable descirbeMigrationJobsCallable(const Model::DescirbeMigrationJobsRequest& request) const;
			DescribeMigrationJobDetailOutcome describeMigrationJobDetail(const Model::DescribeMigrationJobDetailRequest &request)const;
			void describeMigrationJobDetailAsync(const Model::DescribeMigrationJobDetailRequest& request, const DescribeMigrationJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobDetailOutcomeCallable describeMigrationJobDetailCallable(const Model::DescribeMigrationJobDetailRequest& request) const;
			DescribeMigrationJobStatusOutcome describeMigrationJobStatus(const Model::DescribeMigrationJobStatusRequest &request)const;
			void describeMigrationJobStatusAsync(const Model::DescribeMigrationJobStatusRequest& request, const DescribeMigrationJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobStatusOutcomeCallable describeMigrationJobStatusCallable(const Model::DescribeMigrationJobStatusRequest& request) const;
			ModifyMigrationObjectOutcome modifyMigrationObject(const Model::ModifyMigrationObjectRequest &request)const;
			void modifyMigrationObjectAsync(const Model::ModifyMigrationObjectRequest& request, const ModifyMigrationObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMigrationObjectOutcomeCallable modifyMigrationObjectCallable(const Model::ModifyMigrationObjectRequest& request) const;
			StartMigrationJobOutcome startMigrationJob(const Model::StartMigrationJobRequest &request)const;
			void startMigrationJobAsync(const Model::StartMigrationJobRequest& request, const StartMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartMigrationJobOutcomeCallable startMigrationJobCallable(const Model::StartMigrationJobRequest& request) const;
			StopMigrationJobOutcome stopMigrationJob(const Model::StopMigrationJobRequest &request)const;
			void stopMigrationJobAsync(const Model::StopMigrationJobRequest& request, const StopMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMigrationJobOutcomeCallable stopMigrationJobCallable(const Model::StopMigrationJobRequest& request) const;
			SuspendMigrationJobOutcome suspendMigrationJob(const Model::SuspendMigrationJobRequest &request)const;
			void suspendMigrationJobAsync(const Model::SuspendMigrationJobRequest& request, const SuspendMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendMigrationJobOutcomeCallable suspendMigrationJobCallable(const Model::SuspendMigrationJobRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DTS_DTSCLIENT_H_
