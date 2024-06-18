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

#ifndef ALIBABACLOUD_COMPUTENEST_COMPUTENESTCLIENT_H_
#define ALIBABACLOUD_COMPUTENEST_COMPUTENESTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ComputeNestExport.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/ContinueDeployServiceInstanceRequest.h"
#include "model/ContinueDeployServiceInstanceResult.h"
#include "model/CreateServiceInstanceRequest.h"
#include "model/CreateServiceInstanceResult.h"
#include "model/DeleteServiceInstancesRequest.h"
#include "model/DeleteServiceInstancesResult.h"
#include "model/GetServiceInstanceRequest.h"
#include "model/GetServiceInstanceResult.h"
#include "model/GetServiceTemplateParameterConstraintsRequest.h"
#include "model/GetServiceTemplateParameterConstraintsResult.h"
#include "model/ListServiceInstanceLogsRequest.h"
#include "model/ListServiceInstanceLogsResult.h"
#include "model/ListServiceInstanceResourcesRequest.h"
#include "model/ListServiceInstanceResourcesResult.h"
#include "model/ListServiceInstancesRequest.h"
#include "model/ListServiceInstancesResult.h"
#include "model/RestartServiceInstanceRequest.h"
#include "model/RestartServiceInstanceResult.h"
#include "model/StartServiceInstanceRequest.h"
#include "model/StartServiceInstanceResult.h"
#include "model/StopServiceInstanceRequest.h"
#include "model/StopServiceInstanceResult.h"


namespace AlibabaCloud
{
	namespace ComputeNest
	{
		class ALIBABACLOUD_COMPUTENEST_EXPORT ComputeNestClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ContinueDeployServiceInstanceResult> ContinueDeployServiceInstanceOutcome;
			typedef std::future<ContinueDeployServiceInstanceOutcome> ContinueDeployServiceInstanceOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::ContinueDeployServiceInstanceRequest&, const ContinueDeployServiceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContinueDeployServiceInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceInstanceResult> CreateServiceInstanceOutcome;
			typedef std::future<CreateServiceInstanceOutcome> CreateServiceInstanceOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::CreateServiceInstanceRequest&, const CreateServiceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceInstancesResult> DeleteServiceInstancesOutcome;
			typedef std::future<DeleteServiceInstancesOutcome> DeleteServiceInstancesOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::DeleteServiceInstancesRequest&, const DeleteServiceInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceInstancesAsyncHandler;
			typedef Outcome<Error, Model::GetServiceInstanceResult> GetServiceInstanceOutcome;
			typedef std::future<GetServiceInstanceOutcome> GetServiceInstanceOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::GetServiceInstanceRequest&, const GetServiceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetServiceTemplateParameterConstraintsResult> GetServiceTemplateParameterConstraintsOutcome;
			typedef std::future<GetServiceTemplateParameterConstraintsOutcome> GetServiceTemplateParameterConstraintsOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::GetServiceTemplateParameterConstraintsRequest&, const GetServiceTemplateParameterConstraintsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceTemplateParameterConstraintsAsyncHandler;
			typedef Outcome<Error, Model::ListServiceInstanceLogsResult> ListServiceInstanceLogsOutcome;
			typedef std::future<ListServiceInstanceLogsOutcome> ListServiceInstanceLogsOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::ListServiceInstanceLogsRequest&, const ListServiceInstanceLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceInstanceLogsAsyncHandler;
			typedef Outcome<Error, Model::ListServiceInstanceResourcesResult> ListServiceInstanceResourcesOutcome;
			typedef std::future<ListServiceInstanceResourcesOutcome> ListServiceInstanceResourcesOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::ListServiceInstanceResourcesRequest&, const ListServiceInstanceResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceInstanceResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListServiceInstancesResult> ListServiceInstancesOutcome;
			typedef std::future<ListServiceInstancesOutcome> ListServiceInstancesOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::ListServiceInstancesRequest&, const ListServiceInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceInstancesAsyncHandler;
			typedef Outcome<Error, Model::RestartServiceInstanceResult> RestartServiceInstanceOutcome;
			typedef std::future<RestartServiceInstanceOutcome> RestartServiceInstanceOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::RestartServiceInstanceRequest&, const RestartServiceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartServiceInstanceAsyncHandler;
			typedef Outcome<Error, Model::StartServiceInstanceResult> StartServiceInstanceOutcome;
			typedef std::future<StartServiceInstanceOutcome> StartServiceInstanceOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::StartServiceInstanceRequest&, const StartServiceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartServiceInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopServiceInstanceResult> StopServiceInstanceOutcome;
			typedef std::future<StopServiceInstanceOutcome> StopServiceInstanceOutcomeCallable;
			typedef std::function<void(const ComputeNestClient*, const Model::StopServiceInstanceRequest&, const StopServiceInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopServiceInstanceAsyncHandler;

			ComputeNestClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ComputeNestClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ComputeNestClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ComputeNestClient();
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			ContinueDeployServiceInstanceOutcome continueDeployServiceInstance(const Model::ContinueDeployServiceInstanceRequest &request)const;
			void continueDeployServiceInstanceAsync(const Model::ContinueDeployServiceInstanceRequest& request, const ContinueDeployServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContinueDeployServiceInstanceOutcomeCallable continueDeployServiceInstanceCallable(const Model::ContinueDeployServiceInstanceRequest& request) const;
			CreateServiceInstanceOutcome createServiceInstance(const Model::CreateServiceInstanceRequest &request)const;
			void createServiceInstanceAsync(const Model::CreateServiceInstanceRequest& request, const CreateServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceInstanceOutcomeCallable createServiceInstanceCallable(const Model::CreateServiceInstanceRequest& request) const;
			DeleteServiceInstancesOutcome deleteServiceInstances(const Model::DeleteServiceInstancesRequest &request)const;
			void deleteServiceInstancesAsync(const Model::DeleteServiceInstancesRequest& request, const DeleteServiceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceInstancesOutcomeCallable deleteServiceInstancesCallable(const Model::DeleteServiceInstancesRequest& request) const;
			GetServiceInstanceOutcome getServiceInstance(const Model::GetServiceInstanceRequest &request)const;
			void getServiceInstanceAsync(const Model::GetServiceInstanceRequest& request, const GetServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceInstanceOutcomeCallable getServiceInstanceCallable(const Model::GetServiceInstanceRequest& request) const;
			GetServiceTemplateParameterConstraintsOutcome getServiceTemplateParameterConstraints(const Model::GetServiceTemplateParameterConstraintsRequest &request)const;
			void getServiceTemplateParameterConstraintsAsync(const Model::GetServiceTemplateParameterConstraintsRequest& request, const GetServiceTemplateParameterConstraintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceTemplateParameterConstraintsOutcomeCallable getServiceTemplateParameterConstraintsCallable(const Model::GetServiceTemplateParameterConstraintsRequest& request) const;
			ListServiceInstanceLogsOutcome listServiceInstanceLogs(const Model::ListServiceInstanceLogsRequest &request)const;
			void listServiceInstanceLogsAsync(const Model::ListServiceInstanceLogsRequest& request, const ListServiceInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceInstanceLogsOutcomeCallable listServiceInstanceLogsCallable(const Model::ListServiceInstanceLogsRequest& request) const;
			ListServiceInstanceResourcesOutcome listServiceInstanceResources(const Model::ListServiceInstanceResourcesRequest &request)const;
			void listServiceInstanceResourcesAsync(const Model::ListServiceInstanceResourcesRequest& request, const ListServiceInstanceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceInstanceResourcesOutcomeCallable listServiceInstanceResourcesCallable(const Model::ListServiceInstanceResourcesRequest& request) const;
			ListServiceInstancesOutcome listServiceInstances(const Model::ListServiceInstancesRequest &request)const;
			void listServiceInstancesAsync(const Model::ListServiceInstancesRequest& request, const ListServiceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceInstancesOutcomeCallable listServiceInstancesCallable(const Model::ListServiceInstancesRequest& request) const;
			RestartServiceInstanceOutcome restartServiceInstance(const Model::RestartServiceInstanceRequest &request)const;
			void restartServiceInstanceAsync(const Model::RestartServiceInstanceRequest& request, const RestartServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartServiceInstanceOutcomeCallable restartServiceInstanceCallable(const Model::RestartServiceInstanceRequest& request) const;
			StartServiceInstanceOutcome startServiceInstance(const Model::StartServiceInstanceRequest &request)const;
			void startServiceInstanceAsync(const Model::StartServiceInstanceRequest& request, const StartServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartServiceInstanceOutcomeCallable startServiceInstanceCallable(const Model::StartServiceInstanceRequest& request) const;
			StopServiceInstanceOutcome stopServiceInstance(const Model::StopServiceInstanceRequest &request)const;
			void stopServiceInstanceAsync(const Model::StopServiceInstanceRequest& request, const StopServiceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopServiceInstanceOutcomeCallable stopServiceInstanceCallable(const Model::StopServiceInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_COMPUTENEST_COMPUTENESTCLIENT_H_
