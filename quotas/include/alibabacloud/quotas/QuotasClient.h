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
#include "model/CreateQuotaApplicationsForTemplateRequest.h"
#include "model/CreateQuotaApplicationsForTemplateResult.h"
#include "model/CreateTemplateQuotaItemRequest.h"
#include "model/CreateTemplateQuotaItemResult.h"
#include "model/DeleteQuotaAlarmRequest.h"
#include "model/DeleteQuotaAlarmResult.h"
#include "model/DeleteTemplateQuotaItemRequest.h"
#include "model/DeleteTemplateQuotaItemResult.h"
#include "model/GetProductQuotaRequest.h"
#include "model/GetProductQuotaResult.h"
#include "model/GetProductQuotaDimensionRequest.h"
#include "model/GetProductQuotaDimensionResult.h"
#include "model/GetQuotaAlarmRequest.h"
#include "model/GetQuotaAlarmResult.h"
#include "model/GetQuotaApplicationRequest.h"
#include "model/GetQuotaApplicationResult.h"
#include "model/GetQuotaApplicationApprovalRequest.h"
#include "model/GetQuotaApplicationApprovalResult.h"
#include "model/GetQuotaTemplateServiceStatusRequest.h"
#include "model/GetQuotaTemplateServiceStatusResult.h"
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
#include "model/ListQuotaApplicationTemplatesRequest.h"
#include "model/ListQuotaApplicationTemplatesResult.h"
#include "model/ListQuotaApplicationsRequest.h"
#include "model/ListQuotaApplicationsResult.h"
#include "model/ListQuotaApplicationsDetailForTemplateRequest.h"
#include "model/ListQuotaApplicationsDetailForTemplateResult.h"
#include "model/ListQuotaApplicationsForTemplateRequest.h"
#include "model/ListQuotaApplicationsForTemplateResult.h"
#include "model/ModifyQuotaTemplateServiceStatusRequest.h"
#include "model/ModifyQuotaTemplateServiceStatusResult.h"
#include "model/ModifyTemplateQuotaItemRequest.h"
#include "model/ModifyTemplateQuotaItemResult.h"
#include "model/RemindQuotaApplicationApprovalRequest.h"
#include "model/RemindQuotaApplicationApprovalResult.h"
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
			typedef Outcome<Error, Model::CreateQuotaApplicationsForTemplateResult> CreateQuotaApplicationsForTemplateOutcome;
			typedef std::future<CreateQuotaApplicationsForTemplateOutcome> CreateQuotaApplicationsForTemplateOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::CreateQuotaApplicationsForTemplateRequest&, const CreateQuotaApplicationsForTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQuotaApplicationsForTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateTemplateQuotaItemResult> CreateTemplateQuotaItemOutcome;
			typedef std::future<CreateTemplateQuotaItemOutcome> CreateTemplateQuotaItemOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::CreateTemplateQuotaItemRequest&, const CreateTemplateQuotaItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTemplateQuotaItemAsyncHandler;
			typedef Outcome<Error, Model::DeleteQuotaAlarmResult> DeleteQuotaAlarmOutcome;
			typedef std::future<DeleteQuotaAlarmOutcome> DeleteQuotaAlarmOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::DeleteQuotaAlarmRequest&, const DeleteQuotaAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQuotaAlarmAsyncHandler;
			typedef Outcome<Error, Model::DeleteTemplateQuotaItemResult> DeleteTemplateQuotaItemOutcome;
			typedef std::future<DeleteTemplateQuotaItemOutcome> DeleteTemplateQuotaItemOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::DeleteTemplateQuotaItemRequest&, const DeleteTemplateQuotaItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTemplateQuotaItemAsyncHandler;
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
			typedef Outcome<Error, Model::GetQuotaApplicationApprovalResult> GetQuotaApplicationApprovalOutcome;
			typedef std::future<GetQuotaApplicationApprovalOutcome> GetQuotaApplicationApprovalOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::GetQuotaApplicationApprovalRequest&, const GetQuotaApplicationApprovalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQuotaApplicationApprovalAsyncHandler;
			typedef Outcome<Error, Model::GetQuotaTemplateServiceStatusResult> GetQuotaTemplateServiceStatusOutcome;
			typedef std::future<GetQuotaTemplateServiceStatusOutcome> GetQuotaTemplateServiceStatusOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::GetQuotaTemplateServiceStatusRequest&, const GetQuotaTemplateServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQuotaTemplateServiceStatusAsyncHandler;
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
			typedef Outcome<Error, Model::ListQuotaApplicationTemplatesResult> ListQuotaApplicationTemplatesOutcome;
			typedef std::future<ListQuotaApplicationTemplatesOutcome> ListQuotaApplicationTemplatesOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListQuotaApplicationTemplatesRequest&, const ListQuotaApplicationTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQuotaApplicationTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListQuotaApplicationsResult> ListQuotaApplicationsOutcome;
			typedef std::future<ListQuotaApplicationsOutcome> ListQuotaApplicationsOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListQuotaApplicationsRequest&, const ListQuotaApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQuotaApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListQuotaApplicationsDetailForTemplateResult> ListQuotaApplicationsDetailForTemplateOutcome;
			typedef std::future<ListQuotaApplicationsDetailForTemplateOutcome> ListQuotaApplicationsDetailForTemplateOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListQuotaApplicationsDetailForTemplateRequest&, const ListQuotaApplicationsDetailForTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQuotaApplicationsDetailForTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListQuotaApplicationsForTemplateResult> ListQuotaApplicationsForTemplateOutcome;
			typedef std::future<ListQuotaApplicationsForTemplateOutcome> ListQuotaApplicationsForTemplateOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ListQuotaApplicationsForTemplateRequest&, const ListQuotaApplicationsForTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQuotaApplicationsForTemplateAsyncHandler;
			typedef Outcome<Error, Model::ModifyQuotaTemplateServiceStatusResult> ModifyQuotaTemplateServiceStatusOutcome;
			typedef std::future<ModifyQuotaTemplateServiceStatusOutcome> ModifyQuotaTemplateServiceStatusOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ModifyQuotaTemplateServiceStatusRequest&, const ModifyQuotaTemplateServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQuotaTemplateServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyTemplateQuotaItemResult> ModifyTemplateQuotaItemOutcome;
			typedef std::future<ModifyTemplateQuotaItemOutcome> ModifyTemplateQuotaItemOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::ModifyTemplateQuotaItemRequest&, const ModifyTemplateQuotaItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTemplateQuotaItemAsyncHandler;
			typedef Outcome<Error, Model::RemindQuotaApplicationApprovalResult> RemindQuotaApplicationApprovalOutcome;
			typedef std::future<RemindQuotaApplicationApprovalOutcome> RemindQuotaApplicationApprovalOutcomeCallable;
			typedef std::function<void(const QuotasClient*, const Model::RemindQuotaApplicationApprovalRequest&, const RemindQuotaApplicationApprovalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemindQuotaApplicationApprovalAsyncHandler;
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
			CreateQuotaApplicationsForTemplateOutcome createQuotaApplicationsForTemplate(const Model::CreateQuotaApplicationsForTemplateRequest &request)const;
			void createQuotaApplicationsForTemplateAsync(const Model::CreateQuotaApplicationsForTemplateRequest& request, const CreateQuotaApplicationsForTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQuotaApplicationsForTemplateOutcomeCallable createQuotaApplicationsForTemplateCallable(const Model::CreateQuotaApplicationsForTemplateRequest& request) const;
			CreateTemplateQuotaItemOutcome createTemplateQuotaItem(const Model::CreateTemplateQuotaItemRequest &request)const;
			void createTemplateQuotaItemAsync(const Model::CreateTemplateQuotaItemRequest& request, const CreateTemplateQuotaItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTemplateQuotaItemOutcomeCallable createTemplateQuotaItemCallable(const Model::CreateTemplateQuotaItemRequest& request) const;
			DeleteQuotaAlarmOutcome deleteQuotaAlarm(const Model::DeleteQuotaAlarmRequest &request)const;
			void deleteQuotaAlarmAsync(const Model::DeleteQuotaAlarmRequest& request, const DeleteQuotaAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQuotaAlarmOutcomeCallable deleteQuotaAlarmCallable(const Model::DeleteQuotaAlarmRequest& request) const;
			DeleteTemplateQuotaItemOutcome deleteTemplateQuotaItem(const Model::DeleteTemplateQuotaItemRequest &request)const;
			void deleteTemplateQuotaItemAsync(const Model::DeleteTemplateQuotaItemRequest& request, const DeleteTemplateQuotaItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTemplateQuotaItemOutcomeCallable deleteTemplateQuotaItemCallable(const Model::DeleteTemplateQuotaItemRequest& request) const;
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
			GetQuotaApplicationApprovalOutcome getQuotaApplicationApproval(const Model::GetQuotaApplicationApprovalRequest &request)const;
			void getQuotaApplicationApprovalAsync(const Model::GetQuotaApplicationApprovalRequest& request, const GetQuotaApplicationApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQuotaApplicationApprovalOutcomeCallable getQuotaApplicationApprovalCallable(const Model::GetQuotaApplicationApprovalRequest& request) const;
			GetQuotaTemplateServiceStatusOutcome getQuotaTemplateServiceStatus(const Model::GetQuotaTemplateServiceStatusRequest &request)const;
			void getQuotaTemplateServiceStatusAsync(const Model::GetQuotaTemplateServiceStatusRequest& request, const GetQuotaTemplateServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQuotaTemplateServiceStatusOutcomeCallable getQuotaTemplateServiceStatusCallable(const Model::GetQuotaTemplateServiceStatusRequest& request) const;
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
			ListQuotaApplicationTemplatesOutcome listQuotaApplicationTemplates(const Model::ListQuotaApplicationTemplatesRequest &request)const;
			void listQuotaApplicationTemplatesAsync(const Model::ListQuotaApplicationTemplatesRequest& request, const ListQuotaApplicationTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQuotaApplicationTemplatesOutcomeCallable listQuotaApplicationTemplatesCallable(const Model::ListQuotaApplicationTemplatesRequest& request) const;
			ListQuotaApplicationsOutcome listQuotaApplications(const Model::ListQuotaApplicationsRequest &request)const;
			void listQuotaApplicationsAsync(const Model::ListQuotaApplicationsRequest& request, const ListQuotaApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQuotaApplicationsOutcomeCallable listQuotaApplicationsCallable(const Model::ListQuotaApplicationsRequest& request) const;
			ListQuotaApplicationsDetailForTemplateOutcome listQuotaApplicationsDetailForTemplate(const Model::ListQuotaApplicationsDetailForTemplateRequest &request)const;
			void listQuotaApplicationsDetailForTemplateAsync(const Model::ListQuotaApplicationsDetailForTemplateRequest& request, const ListQuotaApplicationsDetailForTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQuotaApplicationsDetailForTemplateOutcomeCallable listQuotaApplicationsDetailForTemplateCallable(const Model::ListQuotaApplicationsDetailForTemplateRequest& request) const;
			ListQuotaApplicationsForTemplateOutcome listQuotaApplicationsForTemplate(const Model::ListQuotaApplicationsForTemplateRequest &request)const;
			void listQuotaApplicationsForTemplateAsync(const Model::ListQuotaApplicationsForTemplateRequest& request, const ListQuotaApplicationsForTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQuotaApplicationsForTemplateOutcomeCallable listQuotaApplicationsForTemplateCallable(const Model::ListQuotaApplicationsForTemplateRequest& request) const;
			ModifyQuotaTemplateServiceStatusOutcome modifyQuotaTemplateServiceStatus(const Model::ModifyQuotaTemplateServiceStatusRequest &request)const;
			void modifyQuotaTemplateServiceStatusAsync(const Model::ModifyQuotaTemplateServiceStatusRequest& request, const ModifyQuotaTemplateServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyQuotaTemplateServiceStatusOutcomeCallable modifyQuotaTemplateServiceStatusCallable(const Model::ModifyQuotaTemplateServiceStatusRequest& request) const;
			ModifyTemplateQuotaItemOutcome modifyTemplateQuotaItem(const Model::ModifyTemplateQuotaItemRequest &request)const;
			void modifyTemplateQuotaItemAsync(const Model::ModifyTemplateQuotaItemRequest& request, const ModifyTemplateQuotaItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTemplateQuotaItemOutcomeCallable modifyTemplateQuotaItemCallable(const Model::ModifyTemplateQuotaItemRequest& request) const;
			RemindQuotaApplicationApprovalOutcome remindQuotaApplicationApproval(const Model::RemindQuotaApplicationApprovalRequest &request)const;
			void remindQuotaApplicationApprovalAsync(const Model::RemindQuotaApplicationApprovalRequest& request, const RemindQuotaApplicationApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemindQuotaApplicationApprovalOutcomeCallable remindQuotaApplicationApprovalCallable(const Model::RemindQuotaApplicationApprovalRequest& request) const;
			UpdateQuotaAlarmOutcome updateQuotaAlarm(const Model::UpdateQuotaAlarmRequest &request)const;
			void updateQuotaAlarmAsync(const Model::UpdateQuotaAlarmRequest& request, const UpdateQuotaAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateQuotaAlarmOutcomeCallable updateQuotaAlarmCallable(const Model::UpdateQuotaAlarmRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_QUOTAS_QUOTASCLIENT_H_
