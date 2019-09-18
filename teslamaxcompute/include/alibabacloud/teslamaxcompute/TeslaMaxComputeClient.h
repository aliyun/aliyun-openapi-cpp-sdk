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

#ifndef ALIBABACLOUD_TESLAMAXCOMPUTE_TESLAMAXCOMPUTECLIENT_H_
#define ALIBABACLOUD_TESLAMAXCOMPUTE_TESLAMAXCOMPUTECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "TeslaMaxComputeExport.h"
#include "model/GetClusterInstanceRequest.h"
#include "model/GetClusterInstanceResult.h"
#include "model/GetInstancesStatusCountRequest.h"
#include "model/GetInstancesStatusCountResult.h"
#include "model/GetProjectInstanceRequest.h"
#include "model/GetProjectInstanceResult.h"
#include "model/GetQuotaHistoryInfoRequest.h"
#include "model/GetQuotaHistoryInfoResult.h"
#include "model/GetQuotaInstanceRequest.h"
#include "model/GetQuotaInstanceResult.h"
#include "model/GetUserInstanceRequest.h"
#include "model/GetUserInstanceResult.h"
#include "model/ListUserQuotasRequest.h"
#include "model/ListUserQuotasResult.h"
#include "model/QueryCustomerSaleInfoRequest.h"
#include "model/QueryCustomerSaleInfoResult.h"
#include "model/QueryResourceInventoryRequest.h"
#include "model/QueryResourceInventoryResult.h"
#include "model/QueryTopologyRequest.h"
#include "model/QueryTopologyResult.h"


namespace AlibabaCloud
{
	namespace TeslaMaxCompute
	{
		class ALIBABACLOUD_TESLAMAXCOMPUTE_EXPORT TeslaMaxComputeClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetClusterInstanceResult> GetClusterInstanceOutcome;
			typedef std::future<GetClusterInstanceOutcome> GetClusterInstanceOutcomeCallable;
			typedef std::function<void(const TeslaMaxComputeClient*, const Model::GetClusterInstanceRequest&, const GetClusterInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetInstancesStatusCountResult> GetInstancesStatusCountOutcome;
			typedef std::future<GetInstancesStatusCountOutcome> GetInstancesStatusCountOutcomeCallable;
			typedef std::function<void(const TeslaMaxComputeClient*, const Model::GetInstancesStatusCountRequest&, const GetInstancesStatusCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstancesStatusCountAsyncHandler;
			typedef Outcome<Error, Model::GetProjectInstanceResult> GetProjectInstanceOutcome;
			typedef std::future<GetProjectInstanceOutcome> GetProjectInstanceOutcomeCallable;
			typedef std::function<void(const TeslaMaxComputeClient*, const Model::GetProjectInstanceRequest&, const GetProjectInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetQuotaHistoryInfoResult> GetQuotaHistoryInfoOutcome;
			typedef std::future<GetQuotaHistoryInfoOutcome> GetQuotaHistoryInfoOutcomeCallable;
			typedef std::function<void(const TeslaMaxComputeClient*, const Model::GetQuotaHistoryInfoRequest&, const GetQuotaHistoryInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQuotaHistoryInfoAsyncHandler;
			typedef Outcome<Error, Model::GetQuotaInstanceResult> GetQuotaInstanceOutcome;
			typedef std::future<GetQuotaInstanceOutcome> GetQuotaInstanceOutcomeCallable;
			typedef std::function<void(const TeslaMaxComputeClient*, const Model::GetQuotaInstanceRequest&, const GetQuotaInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQuotaInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetUserInstanceResult> GetUserInstanceOutcome;
			typedef std::future<GetUserInstanceOutcome> GetUserInstanceOutcomeCallable;
			typedef std::function<void(const TeslaMaxComputeClient*, const Model::GetUserInstanceRequest&, const GetUserInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListUserQuotasResult> ListUserQuotasOutcome;
			typedef std::future<ListUserQuotasOutcome> ListUserQuotasOutcomeCallable;
			typedef std::function<void(const TeslaMaxComputeClient*, const Model::ListUserQuotasRequest&, const ListUserQuotasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserQuotasAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomerSaleInfoResult> QueryCustomerSaleInfoOutcome;
			typedef std::future<QueryCustomerSaleInfoOutcome> QueryCustomerSaleInfoOutcomeCallable;
			typedef std::function<void(const TeslaMaxComputeClient*, const Model::QueryCustomerSaleInfoRequest&, const QueryCustomerSaleInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomerSaleInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryResourceInventoryResult> QueryResourceInventoryOutcome;
			typedef std::future<QueryResourceInventoryOutcome> QueryResourceInventoryOutcomeCallable;
			typedef std::function<void(const TeslaMaxComputeClient*, const Model::QueryResourceInventoryRequest&, const QueryResourceInventoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryResourceInventoryAsyncHandler;
			typedef Outcome<Error, Model::QueryTopologyResult> QueryTopologyOutcome;
			typedef std::future<QueryTopologyOutcome> QueryTopologyOutcomeCallable;
			typedef std::function<void(const TeslaMaxComputeClient*, const Model::QueryTopologyRequest&, const QueryTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTopologyAsyncHandler;

			TeslaMaxComputeClient(const Credentials &credentials, const ClientConfiguration &configuration);
			TeslaMaxComputeClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			TeslaMaxComputeClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~TeslaMaxComputeClient();
			GetClusterInstanceOutcome getClusterInstance(const Model::GetClusterInstanceRequest &request)const;
			void getClusterInstanceAsync(const Model::GetClusterInstanceRequest& request, const GetClusterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterInstanceOutcomeCallable getClusterInstanceCallable(const Model::GetClusterInstanceRequest& request) const;
			GetInstancesStatusCountOutcome getInstancesStatusCount(const Model::GetInstancesStatusCountRequest &request)const;
			void getInstancesStatusCountAsync(const Model::GetInstancesStatusCountRequest& request, const GetInstancesStatusCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstancesStatusCountOutcomeCallable getInstancesStatusCountCallable(const Model::GetInstancesStatusCountRequest& request) const;
			GetProjectInstanceOutcome getProjectInstance(const Model::GetProjectInstanceRequest &request)const;
			void getProjectInstanceAsync(const Model::GetProjectInstanceRequest& request, const GetProjectInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectInstanceOutcomeCallable getProjectInstanceCallable(const Model::GetProjectInstanceRequest& request) const;
			GetQuotaHistoryInfoOutcome getQuotaHistoryInfo(const Model::GetQuotaHistoryInfoRequest &request)const;
			void getQuotaHistoryInfoAsync(const Model::GetQuotaHistoryInfoRequest& request, const GetQuotaHistoryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQuotaHistoryInfoOutcomeCallable getQuotaHistoryInfoCallable(const Model::GetQuotaHistoryInfoRequest& request) const;
			GetQuotaInstanceOutcome getQuotaInstance(const Model::GetQuotaInstanceRequest &request)const;
			void getQuotaInstanceAsync(const Model::GetQuotaInstanceRequest& request, const GetQuotaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQuotaInstanceOutcomeCallable getQuotaInstanceCallable(const Model::GetQuotaInstanceRequest& request) const;
			GetUserInstanceOutcome getUserInstance(const Model::GetUserInstanceRequest &request)const;
			void getUserInstanceAsync(const Model::GetUserInstanceRequest& request, const GetUserInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserInstanceOutcomeCallable getUserInstanceCallable(const Model::GetUserInstanceRequest& request) const;
			ListUserQuotasOutcome listUserQuotas(const Model::ListUserQuotasRequest &request)const;
			void listUserQuotasAsync(const Model::ListUserQuotasRequest& request, const ListUserQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserQuotasOutcomeCallable listUserQuotasCallable(const Model::ListUserQuotasRequest& request) const;
			QueryCustomerSaleInfoOutcome queryCustomerSaleInfo(const Model::QueryCustomerSaleInfoRequest &request)const;
			void queryCustomerSaleInfoAsync(const Model::QueryCustomerSaleInfoRequest& request, const QueryCustomerSaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomerSaleInfoOutcomeCallable queryCustomerSaleInfoCallable(const Model::QueryCustomerSaleInfoRequest& request) const;
			QueryResourceInventoryOutcome queryResourceInventory(const Model::QueryResourceInventoryRequest &request)const;
			void queryResourceInventoryAsync(const Model::QueryResourceInventoryRequest& request, const QueryResourceInventoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryResourceInventoryOutcomeCallable queryResourceInventoryCallable(const Model::QueryResourceInventoryRequest& request) const;
			QueryTopologyOutcome queryTopology(const Model::QueryTopologyRequest &request)const;
			void queryTopologyAsync(const Model::QueryTopologyRequest& request, const QueryTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTopologyOutcomeCallable queryTopologyCallable(const Model::QueryTopologyRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_TESLAMAXCOMPUTE_TESLAMAXCOMPUTECLIENT_H_
