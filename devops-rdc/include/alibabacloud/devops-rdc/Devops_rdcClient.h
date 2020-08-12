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

#ifndef ALIBABACLOUD_DEVOPS_RDC_DEVOPS_RDCCLIENT_H_
#define ALIBABACLOUD_DEVOPS_RDC_DEVOPS_RDCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Devops_rdcExport.h"
#include "model/CancelPipelineRequest.h"
#include "model/CancelPipelineResult.h"
#include "model/CreateCredentialRequest.h"
#include "model/CreateCredentialResult.h"
#include "model/CreatePipelineRequest.h"
#include "model/CreatePipelineResult.h"
#include "model/CreateServiceConnectionRequest.h"
#include "model/CreateServiceConnectionResult.h"
#include "model/ExecutePipelineRequest.h"
#include "model/ExecutePipelineResult.h"
#include "model/GetPipelineInstanceBuildNumberStatusRequest.h"
#include "model/GetPipelineInstanceBuildNumberStatusResult.h"
#include "model/GetPipelineInstanceGroupStatusRequest.h"
#include "model/GetPipelineInstanceGroupStatusResult.h"
#include "model/GetPipelineInstanceInfoRequest.h"
#include "model/GetPipelineInstanceInfoResult.h"
#include "model/GetPipelineInstanceStatusRequest.h"
#include "model/GetPipelineInstanceStatusResult.h"
#include "model/GetPipelineLogRequest.h"
#include "model/GetPipelineLogResult.h"
#include "model/GetPipleineLatestInstanceStatusRequest.h"
#include "model/GetPipleineLatestInstanceStatusResult.h"
#include "model/ListCredentialsRequest.h"
#include "model/ListCredentialsResult.h"
#include "model/ListPipelinesRequest.h"
#include "model/ListPipelinesResult.h"
#include "model/ListServiceConnectionsRequest.h"
#include "model/ListServiceConnectionsResult.h"


namespace AlibabaCloud
{
	namespace Devops_rdc
	{
		class ALIBABACLOUD_DEVOPS_RDC_EXPORT Devops_rdcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CancelPipelineResult> CancelPipelineOutcome;
			typedef std::future<CancelPipelineOutcome> CancelPipelineOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CancelPipelineRequest&, const CancelPipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelPipelineAsyncHandler;
			typedef Outcome<Error, Model::CreateCredentialResult> CreateCredentialOutcome;
			typedef std::future<CreateCredentialOutcome> CreateCredentialOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CreateCredentialRequest&, const CreateCredentialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCredentialAsyncHandler;
			typedef Outcome<Error, Model::CreatePipelineResult> CreatePipelineOutcome;
			typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CreatePipelineRequest&, const CreatePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePipelineAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceConnectionResult> CreateServiceConnectionOutcome;
			typedef std::future<CreateServiceConnectionOutcome> CreateServiceConnectionOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::CreateServiceConnectionRequest&, const CreateServiceConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceConnectionAsyncHandler;
			typedef Outcome<Error, Model::ExecutePipelineResult> ExecutePipelineOutcome;
			typedef std::future<ExecutePipelineOutcome> ExecutePipelineOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ExecutePipelineRequest&, const ExecutePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecutePipelineAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineInstanceBuildNumberStatusResult> GetPipelineInstanceBuildNumberStatusOutcome;
			typedef std::future<GetPipelineInstanceBuildNumberStatusOutcome> GetPipelineInstanceBuildNumberStatusOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipelineInstanceBuildNumberStatusRequest&, const GetPipelineInstanceBuildNumberStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineInstanceBuildNumberStatusAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineInstanceGroupStatusResult> GetPipelineInstanceGroupStatusOutcome;
			typedef std::future<GetPipelineInstanceGroupStatusOutcome> GetPipelineInstanceGroupStatusOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipelineInstanceGroupStatusRequest&, const GetPipelineInstanceGroupStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineInstanceGroupStatusAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineInstanceInfoResult> GetPipelineInstanceInfoOutcome;
			typedef std::future<GetPipelineInstanceInfoOutcome> GetPipelineInstanceInfoOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipelineInstanceInfoRequest&, const GetPipelineInstanceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineInstanceInfoAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineInstanceStatusResult> GetPipelineInstanceStatusOutcome;
			typedef std::future<GetPipelineInstanceStatusOutcome> GetPipelineInstanceStatusOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipelineInstanceStatusRequest&, const GetPipelineInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetPipelineLogResult> GetPipelineLogOutcome;
			typedef std::future<GetPipelineLogOutcome> GetPipelineLogOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipelineLogRequest&, const GetPipelineLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipelineLogAsyncHandler;
			typedef Outcome<Error, Model::GetPipleineLatestInstanceStatusResult> GetPipleineLatestInstanceStatusOutcome;
			typedef std::future<GetPipleineLatestInstanceStatusOutcome> GetPipleineLatestInstanceStatusOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::GetPipleineLatestInstanceStatusRequest&, const GetPipleineLatestInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPipleineLatestInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::ListCredentialsResult> ListCredentialsOutcome;
			typedef std::future<ListCredentialsOutcome> ListCredentialsOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListCredentialsRequest&, const ListCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCredentialsAsyncHandler;
			typedef Outcome<Error, Model::ListPipelinesResult> ListPipelinesOutcome;
			typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListPipelinesRequest&, const ListPipelinesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPipelinesAsyncHandler;
			typedef Outcome<Error, Model::ListServiceConnectionsResult> ListServiceConnectionsOutcome;
			typedef std::future<ListServiceConnectionsOutcome> ListServiceConnectionsOutcomeCallable;
			typedef std::function<void(const Devops_rdcClient*, const Model::ListServiceConnectionsRequest&, const ListServiceConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceConnectionsAsyncHandler;

			Devops_rdcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Devops_rdcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Devops_rdcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Devops_rdcClient();
			CancelPipelineOutcome cancelPipeline(const Model::CancelPipelineRequest &request)const;
			void cancelPipelineAsync(const Model::CancelPipelineRequest& request, const CancelPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelPipelineOutcomeCallable cancelPipelineCallable(const Model::CancelPipelineRequest& request) const;
			CreateCredentialOutcome createCredential(const Model::CreateCredentialRequest &request)const;
			void createCredentialAsync(const Model::CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCredentialOutcomeCallable createCredentialCallable(const Model::CreateCredentialRequest& request) const;
			CreatePipelineOutcome createPipeline(const Model::CreatePipelineRequest &request)const;
			void createPipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePipelineOutcomeCallable createPipelineCallable(const Model::CreatePipelineRequest& request) const;
			CreateServiceConnectionOutcome createServiceConnection(const Model::CreateServiceConnectionRequest &request)const;
			void createServiceConnectionAsync(const Model::CreateServiceConnectionRequest& request, const CreateServiceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceConnectionOutcomeCallable createServiceConnectionCallable(const Model::CreateServiceConnectionRequest& request) const;
			ExecutePipelineOutcome executePipeline(const Model::ExecutePipelineRequest &request)const;
			void executePipelineAsync(const Model::ExecutePipelineRequest& request, const ExecutePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecutePipelineOutcomeCallable executePipelineCallable(const Model::ExecutePipelineRequest& request) const;
			GetPipelineInstanceBuildNumberStatusOutcome getPipelineInstanceBuildNumberStatus(const Model::GetPipelineInstanceBuildNumberStatusRequest &request)const;
			void getPipelineInstanceBuildNumberStatusAsync(const Model::GetPipelineInstanceBuildNumberStatusRequest& request, const GetPipelineInstanceBuildNumberStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineInstanceBuildNumberStatusOutcomeCallable getPipelineInstanceBuildNumberStatusCallable(const Model::GetPipelineInstanceBuildNumberStatusRequest& request) const;
			GetPipelineInstanceGroupStatusOutcome getPipelineInstanceGroupStatus(const Model::GetPipelineInstanceGroupStatusRequest &request)const;
			void getPipelineInstanceGroupStatusAsync(const Model::GetPipelineInstanceGroupStatusRequest& request, const GetPipelineInstanceGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineInstanceGroupStatusOutcomeCallable getPipelineInstanceGroupStatusCallable(const Model::GetPipelineInstanceGroupStatusRequest& request) const;
			GetPipelineInstanceInfoOutcome getPipelineInstanceInfo(const Model::GetPipelineInstanceInfoRequest &request)const;
			void getPipelineInstanceInfoAsync(const Model::GetPipelineInstanceInfoRequest& request, const GetPipelineInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineInstanceInfoOutcomeCallable getPipelineInstanceInfoCallable(const Model::GetPipelineInstanceInfoRequest& request) const;
			GetPipelineInstanceStatusOutcome getPipelineInstanceStatus(const Model::GetPipelineInstanceStatusRequest &request)const;
			void getPipelineInstanceStatusAsync(const Model::GetPipelineInstanceStatusRequest& request, const GetPipelineInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineInstanceStatusOutcomeCallable getPipelineInstanceStatusCallable(const Model::GetPipelineInstanceStatusRequest& request) const;
			GetPipelineLogOutcome getPipelineLog(const Model::GetPipelineLogRequest &request)const;
			void getPipelineLogAsync(const Model::GetPipelineLogRequest& request, const GetPipelineLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipelineLogOutcomeCallable getPipelineLogCallable(const Model::GetPipelineLogRequest& request) const;
			GetPipleineLatestInstanceStatusOutcome getPipleineLatestInstanceStatus(const Model::GetPipleineLatestInstanceStatusRequest &request)const;
			void getPipleineLatestInstanceStatusAsync(const Model::GetPipleineLatestInstanceStatusRequest& request, const GetPipleineLatestInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPipleineLatestInstanceStatusOutcomeCallable getPipleineLatestInstanceStatusCallable(const Model::GetPipleineLatestInstanceStatusRequest& request) const;
			ListCredentialsOutcome listCredentials(const Model::ListCredentialsRequest &request)const;
			void listCredentialsAsync(const Model::ListCredentialsRequest& request, const ListCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCredentialsOutcomeCallable listCredentialsCallable(const Model::ListCredentialsRequest& request) const;
			ListPipelinesOutcome listPipelines(const Model::ListPipelinesRequest &request)const;
			void listPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPipelinesOutcomeCallable listPipelinesCallable(const Model::ListPipelinesRequest& request) const;
			ListServiceConnectionsOutcome listServiceConnections(const Model::ListServiceConnectionsRequest &request)const;
			void listServiceConnectionsAsync(const Model::ListServiceConnectionsRequest& request, const ListServiceConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceConnectionsOutcomeCallable listServiceConnectionsCallable(const Model::ListServiceConnectionsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DEVOPS_RDC_DEVOPS_RDCCLIENT_H_
