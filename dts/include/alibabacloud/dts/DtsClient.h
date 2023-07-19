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
#include "model/ConfigureSynchronizationJobRequest.h"
#include "model/ConfigureSynchronizationJobResult.h"
#include "model/ConfigureSynchronizationJobAlertRequest.h"
#include "model/ConfigureSynchronizationJobAlertResult.h"
#include "model/CreateSynchronizationJobRequest.h"
#include "model/CreateSynchronizationJobResult.h"
#include "model/DeleteSynchronizationJobRequest.h"
#include "model/DeleteSynchronizationJobResult.h"
#include "model/DescribeEndpointSwitchStatusRequest.h"
#include "model/DescribeEndpointSwitchStatusResult.h"
#include "model/DescribeSynchronizationJobAlertRequest.h"
#include "model/DescribeSynchronizationJobAlertResult.h"
#include "model/DescribeSynchronizationJobStatusRequest.h"
#include "model/DescribeSynchronizationJobStatusResult.h"
#include "model/DescribeSynchronizationJobsRequest.h"
#include "model/DescribeSynchronizationJobsResult.h"
#include "model/DescribeSynchronizationObjectModifyStatusRequest.h"
#include "model/DescribeSynchronizationObjectModifyStatusResult.h"
#include "model/ModifySynchronizationObjectRequest.h"
#include "model/ModifySynchronizationObjectResult.h"
#include "model/ResetSynchronizationJobRequest.h"
#include "model/ResetSynchronizationJobResult.h"
#include "model/StartSynchronizationJobRequest.h"
#include "model/StartSynchronizationJobResult.h"
#include "model/SuspendSynchronizationJobRequest.h"
#include "model/SuspendSynchronizationJobResult.h"
#include "model/SwitchSynchronizationEndpointRequest.h"
#include "model/SwitchSynchronizationEndpointResult.h"


namespace AlibabaCloud
{
	namespace Dts
	{
		class ALIBABACLOUD_DTS_EXPORT DtsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ConfigureSynchronizationJobResult> ConfigureSynchronizationJobOutcome;
			typedef std::future<ConfigureSynchronizationJobOutcome> ConfigureSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureSynchronizationJobRequest&, const ConfigureSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::ConfigureSynchronizationJobAlertResult> ConfigureSynchronizationJobAlertOutcome;
			typedef std::future<ConfigureSynchronizationJobAlertOutcome> ConfigureSynchronizationJobAlertOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ConfigureSynchronizationJobAlertRequest&, const ConfigureSynchronizationJobAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureSynchronizationJobAlertAsyncHandler;
			typedef Outcome<Error, Model::CreateSynchronizationJobResult> CreateSynchronizationJobOutcome;
			typedef std::future<CreateSynchronizationJobOutcome> CreateSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::CreateSynchronizationJobRequest&, const CreateSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteSynchronizationJobResult> DeleteSynchronizationJobOutcome;
			typedef std::future<DeleteSynchronizationJobOutcome> DeleteSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DeleteSynchronizationJobRequest&, const DeleteSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeEndpointSwitchStatusResult> DescribeEndpointSwitchStatusOutcome;
			typedef std::future<DescribeEndpointSwitchStatusOutcome> DescribeEndpointSwitchStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeEndpointSwitchStatusRequest&, const DescribeEndpointSwitchStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointSwitchStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationJobAlertResult> DescribeSynchronizationJobAlertOutcome;
			typedef std::future<DescribeSynchronizationJobAlertOutcome> DescribeSynchronizationJobAlertOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationJobAlertRequest&, const DescribeSynchronizationJobAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationJobAlertAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationJobStatusResult> DescribeSynchronizationJobStatusOutcome;
			typedef std::future<DescribeSynchronizationJobStatusOutcome> DescribeSynchronizationJobStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationJobStatusRequest&, const DescribeSynchronizationJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationJobStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationJobsResult> DescribeSynchronizationJobsOutcome;
			typedef std::future<DescribeSynchronizationJobsOutcome> DescribeSynchronizationJobsOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationJobsRequest&, const DescribeSynchronizationJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSynchronizationObjectModifyStatusResult> DescribeSynchronizationObjectModifyStatusOutcome;
			typedef std::future<DescribeSynchronizationObjectModifyStatusOutcome> DescribeSynchronizationObjectModifyStatusOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::DescribeSynchronizationObjectModifyStatusRequest&, const DescribeSynchronizationObjectModifyStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSynchronizationObjectModifyStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifySynchronizationObjectResult> ModifySynchronizationObjectOutcome;
			typedef std::future<ModifySynchronizationObjectOutcome> ModifySynchronizationObjectOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ModifySynchronizationObjectRequest&, const ModifySynchronizationObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySynchronizationObjectAsyncHandler;
			typedef Outcome<Error, Model::ResetSynchronizationJobResult> ResetSynchronizationJobOutcome;
			typedef std::future<ResetSynchronizationJobOutcome> ResetSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::ResetSynchronizationJobRequest&, const ResetSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::StartSynchronizationJobResult> StartSynchronizationJobOutcome;
			typedef std::future<StartSynchronizationJobOutcome> StartSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::StartSynchronizationJobRequest&, const StartSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::SuspendSynchronizationJobResult> SuspendSynchronizationJobOutcome;
			typedef std::future<SuspendSynchronizationJobOutcome> SuspendSynchronizationJobOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SuspendSynchronizationJobRequest&, const SuspendSynchronizationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendSynchronizationJobAsyncHandler;
			typedef Outcome<Error, Model::SwitchSynchronizationEndpointResult> SwitchSynchronizationEndpointOutcome;
			typedef std::future<SwitchSynchronizationEndpointOutcome> SwitchSynchronizationEndpointOutcomeCallable;
			typedef std::function<void(const DtsClient*, const Model::SwitchSynchronizationEndpointRequest&, const SwitchSynchronizationEndpointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchSynchronizationEndpointAsyncHandler;

			DtsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DtsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DtsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DtsClient();
			ConfigureSynchronizationJobOutcome configureSynchronizationJob(const Model::ConfigureSynchronizationJobRequest &request)const;
			void configureSynchronizationJobAsync(const Model::ConfigureSynchronizationJobRequest& request, const ConfigureSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSynchronizationJobOutcomeCallable configureSynchronizationJobCallable(const Model::ConfigureSynchronizationJobRequest& request) const;
			ConfigureSynchronizationJobAlertOutcome configureSynchronizationJobAlert(const Model::ConfigureSynchronizationJobAlertRequest &request)const;
			void configureSynchronizationJobAlertAsync(const Model::ConfigureSynchronizationJobAlertRequest& request, const ConfigureSynchronizationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigureSynchronizationJobAlertOutcomeCallable configureSynchronizationJobAlertCallable(const Model::ConfigureSynchronizationJobAlertRequest& request) const;
			CreateSynchronizationJobOutcome createSynchronizationJob(const Model::CreateSynchronizationJobRequest &request)const;
			void createSynchronizationJobAsync(const Model::CreateSynchronizationJobRequest& request, const CreateSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSynchronizationJobOutcomeCallable createSynchronizationJobCallable(const Model::CreateSynchronizationJobRequest& request) const;
			DeleteSynchronizationJobOutcome deleteSynchronizationJob(const Model::DeleteSynchronizationJobRequest &request)const;
			void deleteSynchronizationJobAsync(const Model::DeleteSynchronizationJobRequest& request, const DeleteSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSynchronizationJobOutcomeCallable deleteSynchronizationJobCallable(const Model::DeleteSynchronizationJobRequest& request) const;
			DescribeEndpointSwitchStatusOutcome describeEndpointSwitchStatus(const Model::DescribeEndpointSwitchStatusRequest &request)const;
			void describeEndpointSwitchStatusAsync(const Model::DescribeEndpointSwitchStatusRequest& request, const DescribeEndpointSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEndpointSwitchStatusOutcomeCallable describeEndpointSwitchStatusCallable(const Model::DescribeEndpointSwitchStatusRequest& request) const;
			DescribeSynchronizationJobAlertOutcome describeSynchronizationJobAlert(const Model::DescribeSynchronizationJobAlertRequest &request)const;
			void describeSynchronizationJobAlertAsync(const Model::DescribeSynchronizationJobAlertRequest& request, const DescribeSynchronizationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationJobAlertOutcomeCallable describeSynchronizationJobAlertCallable(const Model::DescribeSynchronizationJobAlertRequest& request) const;
			DescribeSynchronizationJobStatusOutcome describeSynchronizationJobStatus(const Model::DescribeSynchronizationJobStatusRequest &request)const;
			void describeSynchronizationJobStatusAsync(const Model::DescribeSynchronizationJobStatusRequest& request, const DescribeSynchronizationJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationJobStatusOutcomeCallable describeSynchronizationJobStatusCallable(const Model::DescribeSynchronizationJobStatusRequest& request) const;
			DescribeSynchronizationJobsOutcome describeSynchronizationJobs(const Model::DescribeSynchronizationJobsRequest &request)const;
			void describeSynchronizationJobsAsync(const Model::DescribeSynchronizationJobsRequest& request, const DescribeSynchronizationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationJobsOutcomeCallable describeSynchronizationJobsCallable(const Model::DescribeSynchronizationJobsRequest& request) const;
			DescribeSynchronizationObjectModifyStatusOutcome describeSynchronizationObjectModifyStatus(const Model::DescribeSynchronizationObjectModifyStatusRequest &request)const;
			void describeSynchronizationObjectModifyStatusAsync(const Model::DescribeSynchronizationObjectModifyStatusRequest& request, const DescribeSynchronizationObjectModifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSynchronizationObjectModifyStatusOutcomeCallable describeSynchronizationObjectModifyStatusCallable(const Model::DescribeSynchronizationObjectModifyStatusRequest& request) const;
			ModifySynchronizationObjectOutcome modifySynchronizationObject(const Model::ModifySynchronizationObjectRequest &request)const;
			void modifySynchronizationObjectAsync(const Model::ModifySynchronizationObjectRequest& request, const ModifySynchronizationObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySynchronizationObjectOutcomeCallable modifySynchronizationObjectCallable(const Model::ModifySynchronizationObjectRequest& request) const;
			ResetSynchronizationJobOutcome resetSynchronizationJob(const Model::ResetSynchronizationJobRequest &request)const;
			void resetSynchronizationJobAsync(const Model::ResetSynchronizationJobRequest& request, const ResetSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetSynchronizationJobOutcomeCallable resetSynchronizationJobCallable(const Model::ResetSynchronizationJobRequest& request) const;
			StartSynchronizationJobOutcome startSynchronizationJob(const Model::StartSynchronizationJobRequest &request)const;
			void startSynchronizationJobAsync(const Model::StartSynchronizationJobRequest& request, const StartSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartSynchronizationJobOutcomeCallable startSynchronizationJobCallable(const Model::StartSynchronizationJobRequest& request) const;
			SuspendSynchronizationJobOutcome suspendSynchronizationJob(const Model::SuspendSynchronizationJobRequest &request)const;
			void suspendSynchronizationJobAsync(const Model::SuspendSynchronizationJobRequest& request, const SuspendSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendSynchronizationJobOutcomeCallable suspendSynchronizationJobCallable(const Model::SuspendSynchronizationJobRequest& request) const;
			SwitchSynchronizationEndpointOutcome switchSynchronizationEndpoint(const Model::SwitchSynchronizationEndpointRequest &request)const;
			void switchSynchronizationEndpointAsync(const Model::SwitchSynchronizationEndpointRequest& request, const SwitchSynchronizationEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchSynchronizationEndpointOutcomeCallable switchSynchronizationEndpointCallable(const Model::SwitchSynchronizationEndpointRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DTS_DTSCLIENT_H_
