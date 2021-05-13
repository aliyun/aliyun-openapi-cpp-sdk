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

#ifndef ALIBABACLOUD_QUOTAS_QUOTASCLIENT_H_
#define ALIBABACLOUD_QUOTAS_QUOTASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "QuotasExport.h"
#include "model/CreateQuotaAlarmRequest.h"
#include "model/CreateQuotaAlarmResult.h"
#include "model/CreateQuotaApplicationRequest.h"
#include "model/CreateQuotaApplicationResult.h"
#include "model/DeleteQuotaAlarmRequest.h"
#include "model/DeleteQuotaAlarmResult.h"
#include "model/GetProductQuotaRequest.h"
#include "model/GetProductQuotaResult.h"
#include "model/GetProductQuotaDimensionRequest.h"
#include "model/GetProductQuotaDimensionResult.h"
#include "model/GetQuotaAlarmRequest.h"
#include "model/GetQuotaAlarmResult.h"
#include "model/GetQuotaApplicationRequest.h"
#include "model/GetQuotaApplicationResult.h"
#include "model/ListAlarmHistoriesRequest.h"
#include "model/ListAlarmHistoriesResult.h"
#include "model/ListDependentQuotasRequest.h"
#include "model/ListDependentQuotasResult.h"
#include "model/ListProductDimensionGroupsRequest.h"
#include "model/ListProductDimensionGroupsResult.h"
#include "model/ListProductQuotaDimensionsRequest.h"
#include "model/ListProductQuotaDimensionsResult.h"
#include "model/ListProductQuotasRequest.h"
#include "model/ListProductQuotasResult.h"
#include "model/ListProductsRequest.h"
#include "model/ListProductsResult.h"
#include "model/ListQuotaAlarmsRequest.h"
#include "model/ListQuotaAlarmsResult.h"
#include "model/ListQuotaApplicationsRequest.h"
#include "model/ListQuotaApplicationsResult.h"
#include "model/UpdateQuotaAlarmRequest.h"
#include "model/UpdateQuotaAlarmResult.h"


namespace AlibabaCloud
{
	namespace Quotas
	{
		class ALIBABACLOUD_QUOTAS_EXPORT QuotasClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateQuotaAlarmResult> CreateQuotaAlarmOutcome;
			typedef std::future<CreateQuotaAlarmOutcome> CreateQuotaAlarmOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::CreateQuotaAlarmRequest&, const CreateQuotaAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQuotaAlarmAsyncHandler;
			typedef Outcome<Error, Model::CreateQuotaApplicationResult> CreateQuotaApplicationOutcome;
			typedef std::future<CreateQuotaApplicationOutcome> CreateQuotaApplicationOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::CreateQuotaApplicationRequest&, const CreateQuotaApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQuotaApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteQuotaAlarmResult> DeleteQuotaAlarmOutcome;
			typedef std::future<DeleteQuotaAlarmOutcome> DeleteQuotaAlarmOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::DeleteQuotaAlarmRequest&, const DeleteQuotaAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQuotaAlarmAsyncHandler;
			typedef Outcome<Error, Model::GetProductQuotaResult> GetProductQuotaOutcome;
			typedef std::future<GetProductQuotaOutcome> GetProductQuotaOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::GetProductQuotaRequest&, const GetProductQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProductQuotaAsyncHandler;
			typedef Outcome<Error, Model::GetProductQuotaDimensionResult> GetProductQuotaDimensionOutcome;
			typedef std::future<GetProductQuotaDimensionOutcome> GetProductQuotaDimensionOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::GetProductQuotaDimensionRequest&, const GetProductQuotaDimensionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProductQuotaDimensionAsyncHandler;
			typedef Outcome<Error, Model::GetQuotaAlarmResult> GetQuotaAlarmOutcome;
			typedef std::future<GetQuotaAlarmOutcome> GetQuotaAlarmOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::GetQuotaAlarmRequest&, const GetQuotaAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQuotaAlarmAsyncHandler;
			typedef Outcome<Error, Model::GetQuotaApplicationResult> GetQuotaApplicationOutcome;
			typedef std::future<GetQuotaApplicationOutcome> GetQuotaApplicationOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::GetQuotaApplicationRequest&, const GetQuotaApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQuotaApplicationAsyncHandler;
			typedef Outcome<Error, Model::ListAlarmHistoriesResult> ListAlarmHistoriesOutcome;
			typedef std::future<ListAlarmHistoriesOutcome> ListAlarmHistoriesOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListAlarmHistoriesRequest&, const ListAlarmHistoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmHistoriesAsyncHandler;
			typedef Outcome<Error, Model::ListDependentQuotasResult> ListDependentQuotasOutcome;
			typedef std::future<ListDependentQuotasOutcome> ListDependentQuotasOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListDependentQuotasRequest&, const ListDependentQuotasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDependentQuotasAsyncHandler;
			typedef Outcome<Error, Model::ListProductDimensionGroupsResult> ListProductDimensionGroupsOutcome;
			typedef std::future<ListProductDimensionGroupsOutcome> ListProductDimensionGroupsOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListProductDimensionGroupsRequest&, const ListProductDimensionGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductDimensionGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListProductQuotaDimensionsResult> ListProductQuotaDimensionsOutcome;
			typedef std::future<ListProductQuotaDimensionsOutcome> ListProductQuotaDimensionsOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListProductQuotaDimensionsRequest&, const ListProductQuotaDimensionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductQuotaDimensionsAsyncHandler;
			typedef Outcome<Error, Model::ListProductQuotasResult> ListProductQuotasOutcome;
			typedef std::future<ListProductQuotasOutcome> ListProductQuotasOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListProductQuotasRequest&, const ListProductQuotasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductQuotasAsyncHandler;
			typedef Outcome<Error, Model::ListProductsResult> ListProductsOutcome;
			typedef std::future<ListProductsOutcome> ListProductsOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListProductsRequest&, const ListProductsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductsAsyncHandler;
			typedef Outcome<Error, Model::ListQuotaAlarmsResult> ListQuotaAlarmsOutcome;
			typedef std::future<ListQuotaAlarmsOutcome> ListQuotaAlarmsOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListQuotaAlarmsRequest&, const ListQuotaAlarmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQuotaAlarmsAsyncHandler;
			typedef Outcome<Error, Model::ListQuotaApplicationsResult> ListQuotaApplicationsOutcome;
			typedef std::future<ListQuotaApplicationsOutcome> ListQuotaApplicationsOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListQuotaApplicationsRequest&, const ListQuotaApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQuotaApplicationsAsyncHandler;
			typedef Outcome<Error, Model::UpdateQuotaAlarmResult> UpdateQuotaAlarmOutcome;
			typedef std::future<UpdateQuotaAlarmOutcome> UpdateQuotaAlarmOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::UpdateQuotaAlarmRequest&, const UpdateQuotaAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateQuotaAlarmAsyncHandler;

			QuotasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			QuotasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			QuotasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~QuotasClient();
			CreateQuotaAlarmOutcome createQuotaAlarm(const Model::CreateQuotaAlarmRequest &request)const;
			void createQuotaAlarmAsync(const Model::CreateQuotaAlarmRequest& request, const CreateQuotaAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQuotaAlarmOutcomeCallable createQuotaAlarmCallable(const Model::CreateQuotaAlarmRequest& request) const;
			CreateQuotaApplicationOutcome createQuotaApplication(const Model::CreateQuotaApplicationRequest &request)const;
			void createQuotaApplicationAsync(const Model::CreateQuotaApplicationRequest& request, const CreateQuotaApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQuotaApplicationOutcomeCallable createQuotaApplicationCallable(const Model::CreateQuotaApplicationRequest& request) const;
			DeleteQuotaAlarmOutcome deleteQuotaAlarm(const Model::DeleteQuotaAlarmRequest &request)const;
			void deleteQuotaAlarmAsync(const Model::DeleteQuotaAlarmRequest& request, const DeleteQuotaAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQuotaAlarmOutcomeCallable deleteQuotaAlarmCallable(const Model::DeleteQuotaAlarmRequest& request) const;
			GetProductQuotaOutcome getProductQuota(const Model::GetProductQuotaRequest &request)const;
			void getProductQuotaAsync(const Model::GetProductQuotaRequest& request, const GetProductQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProductQuotaOutcomeCallable getProductQuotaCallable(const Model::GetProductQuotaRequest& request) const;
			GetProductQuotaDimensionOutcome getProductQuotaDimension(const Model::GetProductQuotaDimensionRequest &request)const;
			void getProductQuotaDimensionAsync(const Model::GetProductQuotaDimensionRequest& request, const GetProductQuotaDimensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProductQuotaDimensionOutcomeCallable getProductQuotaDimensionCallable(const Model::GetProductQuotaDimensionRequest& request) const;
			GetQuotaAlarmOutcome getQuotaAlarm(const Model::GetQuotaAlarmRequest &request)const;
			void getQuotaAlarmAsync(const Model::GetQuotaAlarmRequest& request, const GetQuotaAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQuotaAlarmOutcomeCallable getQuotaAlarmCallable(const Model::GetQuotaAlarmRequest& request) const;
			GetQuotaApplicationOutcome getQuotaApplication(const Model::GetQuotaApplicationRequest &request)const;
			void getQuotaApplicationAsync(const Model::GetQuotaApplicationRequest& request, const GetQuotaApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQuotaApplicationOutcomeCallable getQuotaApplicationCallable(const Model::GetQuotaApplicationRequest& request) const;
			ListAlarmHistoriesOutcome listAlarmHistories(const Model::ListAlarmHistoriesRequest &request)const;
			void listAlarmHistoriesAsync(const Model::ListAlarmHistoriesRequest& request, const ListAlarmHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlarmHistoriesOutcomeCallable listAlarmHistoriesCallable(const Model::ListAlarmHistoriesRequest& request) const;
			ListDependentQuotasOutcome listDependentQuotas(const Model::ListDependentQuotasRequest &request)const;
			void listDependentQuotasAsync(const Model::ListDependentQuotasRequest& request, const ListDependentQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDependentQuotasOutcomeCallable listDependentQuotasCallable(const Model::ListDependentQuotasRequest& request) const;
			ListProductDimensionGroupsOutcome listProductDimensionGroups(const Model::ListProductDimensionGroupsRequest &request)const;
			void listProductDimensionGroupsAsync(const Model::ListProductDimensionGroupsRequest& request, const ListProductDimensionGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductDimensionGroupsOutcomeCallable listProductDimensionGroupsCallable(const Model::ListProductDimensionGroupsRequest& request) const;
			ListProductQuotaDimensionsOutcome listProductQuotaDimensions(const Model::ListProductQuotaDimensionsRequest &request)const;
			void listProductQuotaDimensionsAsync(const Model::ListProductQuotaDimensionsRequest& request, const ListProductQuotaDimensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductQuotaDimensionsOutcomeCallable listProductQuotaDimensionsCallable(const Model::ListProductQuotaDimensionsRequest& request) const;
			ListProductQuotasOutcome listProductQuotas(const Model::ListProductQuotasRequest &request)const;
			void listProductQuotasAsync(const Model::ListProductQuotasRequest& request, const ListProductQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductQuotasOutcomeCallable listProductQuotasCallable(const Model::ListProductQuotasRequest& request) const;
			ListProductsOutcome listProducts(const Model::ListProductsRequest &request)const;
			void listProductsAsync(const Model::ListProductsRequest& request, const ListProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductsOutcomeCallable listProductsCallable(const Model::ListProductsRequest& request) const;
			ListQuotaAlarmsOutcome listQuotaAlarms(const Model::ListQuotaAlarmsRequest &request)const;
			void listQuotaAlarmsAsync(const Model::ListQuotaAlarmsRequest& request, const ListQuotaAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQuotaAlarmsOutcomeCallable listQuotaAlarmsCallable(const Model::ListQuotaAlarmsRequest& request) const;
			ListQuotaApplicationsOutcome listQuotaApplications(const Model::ListQuotaApplicationsRequest &request)const;
			void listQuotaApplicationsAsync(const Model::ListQuotaApplicationsRequest& request, const ListQuotaApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQuotaApplicationsOutcomeCallable listQuotaApplicationsCallable(const Model::ListQuotaApplicationsRequest& request) const;
			UpdateQuotaAlarmOutcome updateQuotaAlarm(const Model::UpdateQuotaAlarmRequest &request)const;
			void updateQuotaAlarmAsync(const Model::UpdateQuotaAlarmRequest& request, const UpdateQuotaAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateQuotaAlarmOutcomeCallable updateQuotaAlarmCallable(const Model::UpdateQuotaAlarmRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_QUOTAS_QUOTASCLIENT_H_
