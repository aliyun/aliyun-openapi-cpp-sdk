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

#ifndef ALIBABACLOUD_AMQP_OPEN_AMQP_OPENCLIENT_H_
#define ALIBABACLOUD_AMQP_OPEN_AMQP_OPENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Amqp_openExport.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateBindingRequest.h"
#include "model/CreateBindingResult.h"
#include "model/CreateExchangeRequest.h"
#include "model/CreateExchangeResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateQueueRequest.h"
#include "model/CreateQueueResult.h"
#include "model/CreateVirtualHostRequest.h"
#include "model/CreateVirtualHostResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteBindingRequest.h"
#include "model/DeleteBindingResult.h"
#include "model/DeleteExchangeRequest.h"
#include "model/DeleteExchangeResult.h"
#include "model/DeleteQueueRequest.h"
#include "model/DeleteQueueResult.h"
#include "model/DeleteVirtualHostRequest.h"
#include "model/DeleteVirtualHostResult.h"
#include "model/GetMetadataAmountRequest.h"
#include "model/GetMetadataAmountResult.h"
#include "model/ListAccountsRequest.h"
#include "model/ListAccountsResult.h"
#include "model/ListBindingsRequest.h"
#include "model/ListBindingsResult.h"
#include "model/ListDownStreamBindingsRequest.h"
#include "model/ListDownStreamBindingsResult.h"
#include "model/ListExchangeUpStreamBindingsRequest.h"
#include "model/ListExchangeUpStreamBindingsResult.h"
#include "model/ListExchangesRequest.h"
#include "model/ListExchangesResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListQueueConsumersRequest.h"
#include "model/ListQueueConsumersResult.h"
#include "model/ListQueueUpStreamBindingsRequest.h"
#include "model/ListQueueUpStreamBindingsResult.h"
#include "model/ListQueuesRequest.h"
#include "model/ListQueuesResult.h"
#include "model/ListVirtualHostsRequest.h"
#include "model/ListVirtualHostsResult.h"
#include "model/UpdateInstanceRequest.h"
#include "model/UpdateInstanceResult.h"
#include "model/UpdateInstanceNameRequest.h"
#include "model/UpdateInstanceNameResult.h"


namespace AlibabaCloud
{
	namespace Amqp_open
	{
		class ALIBABACLOUD_AMQP_OPEN_EXPORT Amqp_openClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateBindingResult> CreateBindingOutcome;
			typedef std::future<CreateBindingOutcome> CreateBindingOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::CreateBindingRequest&, const CreateBindingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBindingAsyncHandler;
			typedef Outcome<Error, Model::CreateExchangeResult> CreateExchangeOutcome;
			typedef std::future<CreateExchangeOutcome> CreateExchangeOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::CreateExchangeRequest&, const CreateExchangeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExchangeAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateQueueResult> CreateQueueOutcome;
			typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::CreateQueueRequest&, const CreateQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQueueAsyncHandler;
			typedef Outcome<Error, Model::CreateVirtualHostResult> CreateVirtualHostOutcome;
			typedef std::future<CreateVirtualHostOutcome> CreateVirtualHostOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::CreateVirtualHostRequest&, const CreateVirtualHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirtualHostAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteBindingResult> DeleteBindingOutcome;
			typedef std::future<DeleteBindingOutcome> DeleteBindingOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::DeleteBindingRequest&, const DeleteBindingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBindingAsyncHandler;
			typedef Outcome<Error, Model::DeleteExchangeResult> DeleteExchangeOutcome;
			typedef std::future<DeleteExchangeOutcome> DeleteExchangeOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::DeleteExchangeRequest&, const DeleteExchangeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExchangeAsyncHandler;
			typedef Outcome<Error, Model::DeleteQueueResult> DeleteQueueOutcome;
			typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::DeleteQueueRequest&, const DeleteQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQueueAsyncHandler;
			typedef Outcome<Error, Model::DeleteVirtualHostResult> DeleteVirtualHostOutcome;
			typedef std::future<DeleteVirtualHostOutcome> DeleteVirtualHostOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::DeleteVirtualHostRequest&, const DeleteVirtualHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVirtualHostAsyncHandler;
			typedef Outcome<Error, Model::GetMetadataAmountResult> GetMetadataAmountOutcome;
			typedef std::future<GetMetadataAmountOutcome> GetMetadataAmountOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::GetMetadataAmountRequest&, const GetMetadataAmountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetadataAmountAsyncHandler;
			typedef Outcome<Error, Model::ListAccountsResult> ListAccountsOutcome;
			typedef std::future<ListAccountsOutcome> ListAccountsOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::ListAccountsRequest&, const ListAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccountsAsyncHandler;
			typedef Outcome<Error, Model::ListBindingsResult> ListBindingsOutcome;
			typedef std::future<ListBindingsOutcome> ListBindingsOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::ListBindingsRequest&, const ListBindingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBindingsAsyncHandler;
			typedef Outcome<Error, Model::ListDownStreamBindingsResult> ListDownStreamBindingsOutcome;
			typedef std::future<ListDownStreamBindingsOutcome> ListDownStreamBindingsOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::ListDownStreamBindingsRequest&, const ListDownStreamBindingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDownStreamBindingsAsyncHandler;
			typedef Outcome<Error, Model::ListExchangeUpStreamBindingsResult> ListExchangeUpStreamBindingsOutcome;
			typedef std::future<ListExchangeUpStreamBindingsOutcome> ListExchangeUpStreamBindingsOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::ListExchangeUpStreamBindingsRequest&, const ListExchangeUpStreamBindingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExchangeUpStreamBindingsAsyncHandler;
			typedef Outcome<Error, Model::ListExchangesResult> ListExchangesOutcome;
			typedef std::future<ListExchangesOutcome> ListExchangesOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::ListExchangesRequest&, const ListExchangesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExchangesAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListQueueConsumersResult> ListQueueConsumersOutcome;
			typedef std::future<ListQueueConsumersOutcome> ListQueueConsumersOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::ListQueueConsumersRequest&, const ListQueueConsumersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQueueConsumersAsyncHandler;
			typedef Outcome<Error, Model::ListQueueUpStreamBindingsResult> ListQueueUpStreamBindingsOutcome;
			typedef std::future<ListQueueUpStreamBindingsOutcome> ListQueueUpStreamBindingsOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::ListQueueUpStreamBindingsRequest&, const ListQueueUpStreamBindingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQueueUpStreamBindingsAsyncHandler;
			typedef Outcome<Error, Model::ListQueuesResult> ListQueuesOutcome;
			typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::ListQueuesRequest&, const ListQueuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQueuesAsyncHandler;
			typedef Outcome<Error, Model::ListVirtualHostsResult> ListVirtualHostsOutcome;
			typedef std::future<ListVirtualHostsOutcome> ListVirtualHostsOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::ListVirtualHostsRequest&, const ListVirtualHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVirtualHostsAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceResult> UpdateInstanceOutcome;
			typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::UpdateInstanceRequest&, const UpdateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateInstanceNameResult> UpdateInstanceNameOutcome;
			typedef std::future<UpdateInstanceNameOutcome> UpdateInstanceNameOutcomeCallable;
			typedef std::function<void(const Amqp_openClient*, const Model::UpdateInstanceNameRequest&, const UpdateInstanceNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceNameAsyncHandler;

			Amqp_openClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Amqp_openClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Amqp_openClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Amqp_openClient();
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateBindingOutcome createBinding(const Model::CreateBindingRequest &request)const;
			void createBindingAsync(const Model::CreateBindingRequest& request, const CreateBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBindingOutcomeCallable createBindingCallable(const Model::CreateBindingRequest& request) const;
			CreateExchangeOutcome createExchange(const Model::CreateExchangeRequest &request)const;
			void createExchangeAsync(const Model::CreateExchangeRequest& request, const CreateExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExchangeOutcomeCallable createExchangeCallable(const Model::CreateExchangeRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateQueueOutcome createQueue(const Model::CreateQueueRequest &request)const;
			void createQueueAsync(const Model::CreateQueueRequest& request, const CreateQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQueueOutcomeCallable createQueueCallable(const Model::CreateQueueRequest& request) const;
			CreateVirtualHostOutcome createVirtualHost(const Model::CreateVirtualHostRequest &request)const;
			void createVirtualHostAsync(const Model::CreateVirtualHostRequest& request, const CreateVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVirtualHostOutcomeCallable createVirtualHostCallable(const Model::CreateVirtualHostRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteBindingOutcome deleteBinding(const Model::DeleteBindingRequest &request)const;
			void deleteBindingAsync(const Model::DeleteBindingRequest& request, const DeleteBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBindingOutcomeCallable deleteBindingCallable(const Model::DeleteBindingRequest& request) const;
			DeleteExchangeOutcome deleteExchange(const Model::DeleteExchangeRequest &request)const;
			void deleteExchangeAsync(const Model::DeleteExchangeRequest& request, const DeleteExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExchangeOutcomeCallable deleteExchangeCallable(const Model::DeleteExchangeRequest& request) const;
			DeleteQueueOutcome deleteQueue(const Model::DeleteQueueRequest &request)const;
			void deleteQueueAsync(const Model::DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQueueOutcomeCallable deleteQueueCallable(const Model::DeleteQueueRequest& request) const;
			DeleteVirtualHostOutcome deleteVirtualHost(const Model::DeleteVirtualHostRequest &request)const;
			void deleteVirtualHostAsync(const Model::DeleteVirtualHostRequest& request, const DeleteVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVirtualHostOutcomeCallable deleteVirtualHostCallable(const Model::DeleteVirtualHostRequest& request) const;
			GetMetadataAmountOutcome getMetadataAmount(const Model::GetMetadataAmountRequest &request)const;
			void getMetadataAmountAsync(const Model::GetMetadataAmountRequest& request, const GetMetadataAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetadataAmountOutcomeCallable getMetadataAmountCallable(const Model::GetMetadataAmountRequest& request) const;
			ListAccountsOutcome listAccounts(const Model::ListAccountsRequest &request)const;
			void listAccountsAsync(const Model::ListAccountsRequest& request, const ListAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccountsOutcomeCallable listAccountsCallable(const Model::ListAccountsRequest& request) const;
			ListBindingsOutcome listBindings(const Model::ListBindingsRequest &request)const;
			void listBindingsAsync(const Model::ListBindingsRequest& request, const ListBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBindingsOutcomeCallable listBindingsCallable(const Model::ListBindingsRequest& request) const;
			ListDownStreamBindingsOutcome listDownStreamBindings(const Model::ListDownStreamBindingsRequest &request)const;
			void listDownStreamBindingsAsync(const Model::ListDownStreamBindingsRequest& request, const ListDownStreamBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDownStreamBindingsOutcomeCallable listDownStreamBindingsCallable(const Model::ListDownStreamBindingsRequest& request) const;
			ListExchangeUpStreamBindingsOutcome listExchangeUpStreamBindings(const Model::ListExchangeUpStreamBindingsRequest &request)const;
			void listExchangeUpStreamBindingsAsync(const Model::ListExchangeUpStreamBindingsRequest& request, const ListExchangeUpStreamBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExchangeUpStreamBindingsOutcomeCallable listExchangeUpStreamBindingsCallable(const Model::ListExchangeUpStreamBindingsRequest& request) const;
			ListExchangesOutcome listExchanges(const Model::ListExchangesRequest &request)const;
			void listExchangesAsync(const Model::ListExchangesRequest& request, const ListExchangesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExchangesOutcomeCallable listExchangesCallable(const Model::ListExchangesRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListQueueConsumersOutcome listQueueConsumers(const Model::ListQueueConsumersRequest &request)const;
			void listQueueConsumersAsync(const Model::ListQueueConsumersRequest& request, const ListQueueConsumersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQueueConsumersOutcomeCallable listQueueConsumersCallable(const Model::ListQueueConsumersRequest& request) const;
			ListQueueUpStreamBindingsOutcome listQueueUpStreamBindings(const Model::ListQueueUpStreamBindingsRequest &request)const;
			void listQueueUpStreamBindingsAsync(const Model::ListQueueUpStreamBindingsRequest& request, const ListQueueUpStreamBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQueueUpStreamBindingsOutcomeCallable listQueueUpStreamBindingsCallable(const Model::ListQueueUpStreamBindingsRequest& request) const;
			ListQueuesOutcome listQueues(const Model::ListQueuesRequest &request)const;
			void listQueuesAsync(const Model::ListQueuesRequest& request, const ListQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQueuesOutcomeCallable listQueuesCallable(const Model::ListQueuesRequest& request) const;
			ListVirtualHostsOutcome listVirtualHosts(const Model::ListVirtualHostsRequest &request)const;
			void listVirtualHostsAsync(const Model::ListVirtualHostsRequest& request, const ListVirtualHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVirtualHostsOutcomeCallable listVirtualHostsCallable(const Model::ListVirtualHostsRequest& request) const;
			UpdateInstanceOutcome updateInstance(const Model::UpdateInstanceRequest &request)const;
			void updateInstanceAsync(const Model::UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceOutcomeCallable updateInstanceCallable(const Model::UpdateInstanceRequest& request) const;
			UpdateInstanceNameOutcome updateInstanceName(const Model::UpdateInstanceNameRequest &request)const;
			void updateInstanceNameAsync(const Model::UpdateInstanceNameRequest& request, const UpdateInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateInstanceNameOutcomeCallable updateInstanceNameCallable(const Model::UpdateInstanceNameRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AMQP_OPEN_AMQP_OPENCLIENT_H_
