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

#ifndef ALIBABACLOUD_ARMS_ARMSCLIENT_H_
#define ALIBABACLOUD_ARMS_ARMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ARMSExport.h"
#include "model/SearchAlertContactRequest.h"
#include "model/SearchAlertContactResult.h"
#include "model/GetTraceRequest.h"
#include "model/GetTraceResult.h"
#include "model/ListTraceAppsRequest.h"
#include "model/ListTraceAppsResult.h"
#include "model/DeleteRetcodeAppRequest.h"
#include "model/DeleteRetcodeAppResult.h"
#include "model/SearchTraceAppByPageRequest.h"
#include "model/SearchTraceAppByPageResult.h"
#include "model/ImportAppAlertRulesRequest.h"
#include "model/ImportAppAlertRulesResult.h"
#include "model/CreateAlertContactGroupRequest.h"
#include "model/CreateAlertContactGroupResult.h"
#include "model/QueryDatasetRequest.h"
#include "model/QueryDatasetResult.h"
#include "model/SearchTraceAppByNameRequest.h"
#include "model/SearchTraceAppByNameResult.h"
#include "model/SearchRetcodeAppByPageRequest.h"
#include "model/SearchRetcodeAppByPageResult.h"
#include "model/ListRetcodeAppsRequest.h"
#include "model/ListRetcodeAppsResult.h"
#include "model/GetSpanNamesRequest.h"
#include "model/GetSpanNamesResult.h"
#include "model/GetServicesRequest.h"
#include "model/GetServicesResult.h"
#include "model/MetricQueryRequest.h"
#include "model/MetricQueryResult.h"
#include "model/SearchTracesRequest.h"
#include "model/SearchTracesResult.h"
#include "model/SearchAlertContactGroupRequest.h"
#include "model/SearchAlertContactGroupResult.h"
#include "model/CreateAlertContactRequest.h"
#include "model/CreateAlertContactResult.h"
#include "model/QueryMetricRequest.h"
#include "model/QueryMetricResult.h"
#include "model/SearchTraceCountRequest.h"
#include "model/SearchTraceCountResult.h"
#include "model/GetTagKeyRequest.h"
#include "model/GetTagKeyResult.h"
#include "model/ARMSQueryDataSetRequest.h"
#include "model/ARMSQueryDataSetResult.h"
#include "model/CreateRetcodeAppRequest.h"
#include "model/CreateRetcodeAppResult.h"
#include "model/GetTagValRequest.h"
#include "model/GetTagValResult.h"


namespace AlibabaCloud
{
	namespace ARMS
	{
		class ALIBABACLOUD_ARMS_EXPORT ARMSClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::SearchAlertContactResult> SearchAlertContactOutcome;
			typedef std::future<SearchAlertContactOutcome> SearchAlertContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchAlertContactRequest&, const SearchAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchAlertContactAsyncHandler;
			typedef Outcome<Error, Model::GetTraceResult> GetTraceOutcome;
			typedef std::future<GetTraceOutcome> GetTraceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTraceRequest&, const GetTraceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTraceAsyncHandler;
			typedef Outcome<Error, Model::ListTraceAppsResult> ListTraceAppsOutcome;
			typedef std::future<ListTraceAppsOutcome> ListTraceAppsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListTraceAppsRequest&, const ListTraceAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTraceAppsAsyncHandler;
			typedef Outcome<Error, Model::DeleteRetcodeAppResult> DeleteRetcodeAppOutcome;
			typedef std::future<DeleteRetcodeAppOutcome> DeleteRetcodeAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteRetcodeAppRequest&, const DeleteRetcodeAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRetcodeAppAsyncHandler;
			typedef Outcome<Error, Model::SearchTraceAppByPageResult> SearchTraceAppByPageOutcome;
			typedef std::future<SearchTraceAppByPageOutcome> SearchTraceAppByPageOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchTraceAppByPageRequest&, const SearchTraceAppByPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTraceAppByPageAsyncHandler;
			typedef Outcome<Error, Model::ImportAppAlertRulesResult> ImportAppAlertRulesOutcome;
			typedef std::future<ImportAppAlertRulesOutcome> ImportAppAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ImportAppAlertRulesRequest&, const ImportAppAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportAppAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateAlertContactGroupResult> CreateAlertContactGroupOutcome;
			typedef std::future<CreateAlertContactGroupOutcome> CreateAlertContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateAlertContactGroupRequest&, const CreateAlertContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertContactGroupAsyncHandler;
			typedef Outcome<Error, Model::QueryDatasetResult> QueryDatasetOutcome;
			typedef std::future<QueryDatasetOutcome> QueryDatasetOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::QueryDatasetRequest&, const QueryDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDatasetAsyncHandler;
			typedef Outcome<Error, Model::SearchTraceAppByNameResult> SearchTraceAppByNameOutcome;
			typedef std::future<SearchTraceAppByNameOutcome> SearchTraceAppByNameOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchTraceAppByNameRequest&, const SearchTraceAppByNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTraceAppByNameAsyncHandler;
			typedef Outcome<Error, Model::SearchRetcodeAppByPageResult> SearchRetcodeAppByPageOutcome;
			typedef std::future<SearchRetcodeAppByPageOutcome> SearchRetcodeAppByPageOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchRetcodeAppByPageRequest&, const SearchRetcodeAppByPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchRetcodeAppByPageAsyncHandler;
			typedef Outcome<Error, Model::ListRetcodeAppsResult> ListRetcodeAppsOutcome;
			typedef std::future<ListRetcodeAppsOutcome> ListRetcodeAppsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListRetcodeAppsRequest&, const ListRetcodeAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRetcodeAppsAsyncHandler;
			typedef Outcome<Error, Model::GetSpanNamesResult> GetSpanNamesOutcome;
			typedef std::future<GetSpanNamesOutcome> GetSpanNamesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSpanNamesRequest&, const GetSpanNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSpanNamesAsyncHandler;
			typedef Outcome<Error, Model::GetServicesResult> GetServicesOutcome;
			typedef std::future<GetServicesOutcome> GetServicesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetServicesRequest&, const GetServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServicesAsyncHandler;
			typedef Outcome<Error, Model::MetricQueryResult> MetricQueryOutcome;
			typedef std::future<MetricQueryOutcome> MetricQueryOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::MetricQueryRequest&, const MetricQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetricQueryAsyncHandler;
			typedef Outcome<Error, Model::SearchTracesResult> SearchTracesOutcome;
			typedef std::future<SearchTracesOutcome> SearchTracesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchTracesRequest&, const SearchTracesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTracesAsyncHandler;
			typedef Outcome<Error, Model::SearchAlertContactGroupResult> SearchAlertContactGroupOutcome;
			typedef std::future<SearchAlertContactGroupOutcome> SearchAlertContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchAlertContactGroupRequest&, const SearchAlertContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchAlertContactGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateAlertContactResult> CreateAlertContactOutcome;
			typedef std::future<CreateAlertContactOutcome> CreateAlertContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateAlertContactRequest&, const CreateAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertContactAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricResult> QueryMetricOutcome;
			typedef std::future<QueryMetricOutcome> QueryMetricOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::QueryMetricRequest&, const QueryMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricAsyncHandler;
			typedef Outcome<Error, Model::SearchTraceCountResult> SearchTraceCountOutcome;
			typedef std::future<SearchTraceCountOutcome> SearchTraceCountOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchTraceCountRequest&, const SearchTraceCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTraceCountAsyncHandler;
			typedef Outcome<Error, Model::GetTagKeyResult> GetTagKeyOutcome;
			typedef std::future<GetTagKeyOutcome> GetTagKeyOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTagKeyRequest&, const GetTagKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTagKeyAsyncHandler;
			typedef Outcome<Error, Model::ARMSQueryDataSetResult> ARMSQueryDataSetOutcome;
			typedef std::future<ARMSQueryDataSetOutcome> ARMSQueryDataSetOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ARMSQueryDataSetRequest&, const ARMSQueryDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ARMSQueryDataSetAsyncHandler;
			typedef Outcome<Error, Model::CreateRetcodeAppResult> CreateRetcodeAppOutcome;
			typedef std::future<CreateRetcodeAppOutcome> CreateRetcodeAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateRetcodeAppRequest&, const CreateRetcodeAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRetcodeAppAsyncHandler;
			typedef Outcome<Error, Model::GetTagValResult> GetTagValOutcome;
			typedef std::future<GetTagValOutcome> GetTagValOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTagValRequest&, const GetTagValOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTagValAsyncHandler;

			ARMSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ARMSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ARMSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ARMSClient();
			SearchAlertContactOutcome searchAlertContact(const Model::SearchAlertContactRequest &request)const;
			void searchAlertContactAsync(const Model::SearchAlertContactRequest& request, const SearchAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchAlertContactOutcomeCallable searchAlertContactCallable(const Model::SearchAlertContactRequest& request) const;
			GetTraceOutcome getTrace(const Model::GetTraceRequest &request)const;
			void getTraceAsync(const Model::GetTraceRequest& request, const GetTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTraceOutcomeCallable getTraceCallable(const Model::GetTraceRequest& request) const;
			ListTraceAppsOutcome listTraceApps(const Model::ListTraceAppsRequest &request)const;
			void listTraceAppsAsync(const Model::ListTraceAppsRequest& request, const ListTraceAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTraceAppsOutcomeCallable listTraceAppsCallable(const Model::ListTraceAppsRequest& request) const;
			DeleteRetcodeAppOutcome deleteRetcodeApp(const Model::DeleteRetcodeAppRequest &request)const;
			void deleteRetcodeAppAsync(const Model::DeleteRetcodeAppRequest& request, const DeleteRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRetcodeAppOutcomeCallable deleteRetcodeAppCallable(const Model::DeleteRetcodeAppRequest& request) const;
			SearchTraceAppByPageOutcome searchTraceAppByPage(const Model::SearchTraceAppByPageRequest &request)const;
			void searchTraceAppByPageAsync(const Model::SearchTraceAppByPageRequest& request, const SearchTraceAppByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTraceAppByPageOutcomeCallable searchTraceAppByPageCallable(const Model::SearchTraceAppByPageRequest& request) const;
			ImportAppAlertRulesOutcome importAppAlertRules(const Model::ImportAppAlertRulesRequest &request)const;
			void importAppAlertRulesAsync(const Model::ImportAppAlertRulesRequest& request, const ImportAppAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportAppAlertRulesOutcomeCallable importAppAlertRulesCallable(const Model::ImportAppAlertRulesRequest& request) const;
			CreateAlertContactGroupOutcome createAlertContactGroup(const Model::CreateAlertContactGroupRequest &request)const;
			void createAlertContactGroupAsync(const Model::CreateAlertContactGroupRequest& request, const CreateAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlertContactGroupOutcomeCallable createAlertContactGroupCallable(const Model::CreateAlertContactGroupRequest& request) const;
			QueryDatasetOutcome queryDataset(const Model::QueryDatasetRequest &request)const;
			void queryDatasetAsync(const Model::QueryDatasetRequest& request, const QueryDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDatasetOutcomeCallable queryDatasetCallable(const Model::QueryDatasetRequest& request) const;
			SearchTraceAppByNameOutcome searchTraceAppByName(const Model::SearchTraceAppByNameRequest &request)const;
			void searchTraceAppByNameAsync(const Model::SearchTraceAppByNameRequest& request, const SearchTraceAppByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTraceAppByNameOutcomeCallable searchTraceAppByNameCallable(const Model::SearchTraceAppByNameRequest& request) const;
			SearchRetcodeAppByPageOutcome searchRetcodeAppByPage(const Model::SearchRetcodeAppByPageRequest &request)const;
			void searchRetcodeAppByPageAsync(const Model::SearchRetcodeAppByPageRequest& request, const SearchRetcodeAppByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchRetcodeAppByPageOutcomeCallable searchRetcodeAppByPageCallable(const Model::SearchRetcodeAppByPageRequest& request) const;
			ListRetcodeAppsOutcome listRetcodeApps(const Model::ListRetcodeAppsRequest &request)const;
			void listRetcodeAppsAsync(const Model::ListRetcodeAppsRequest& request, const ListRetcodeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRetcodeAppsOutcomeCallable listRetcodeAppsCallable(const Model::ListRetcodeAppsRequest& request) const;
			GetSpanNamesOutcome getSpanNames(const Model::GetSpanNamesRequest &request)const;
			void getSpanNamesAsync(const Model::GetSpanNamesRequest& request, const GetSpanNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSpanNamesOutcomeCallable getSpanNamesCallable(const Model::GetSpanNamesRequest& request) const;
			GetServicesOutcome getServices(const Model::GetServicesRequest &request)const;
			void getServicesAsync(const Model::GetServicesRequest& request, const GetServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServicesOutcomeCallable getServicesCallable(const Model::GetServicesRequest& request) const;
			MetricQueryOutcome metricQuery(const Model::MetricQueryRequest &request)const;
			void metricQueryAsync(const Model::MetricQueryRequest& request, const MetricQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetricQueryOutcomeCallable metricQueryCallable(const Model::MetricQueryRequest& request) const;
			SearchTracesOutcome searchTraces(const Model::SearchTracesRequest &request)const;
			void searchTracesAsync(const Model::SearchTracesRequest& request, const SearchTracesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTracesOutcomeCallable searchTracesCallable(const Model::SearchTracesRequest& request) const;
			SearchAlertContactGroupOutcome searchAlertContactGroup(const Model::SearchAlertContactGroupRequest &request)const;
			void searchAlertContactGroupAsync(const Model::SearchAlertContactGroupRequest& request, const SearchAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchAlertContactGroupOutcomeCallable searchAlertContactGroupCallable(const Model::SearchAlertContactGroupRequest& request) const;
			CreateAlertContactOutcome createAlertContact(const Model::CreateAlertContactRequest &request)const;
			void createAlertContactAsync(const Model::CreateAlertContactRequest& request, const CreateAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlertContactOutcomeCallable createAlertContactCallable(const Model::CreateAlertContactRequest& request) const;
			QueryMetricOutcome queryMetric(const Model::QueryMetricRequest &request)const;
			void queryMetricAsync(const Model::QueryMetricRequest& request, const QueryMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMetricOutcomeCallable queryMetricCallable(const Model::QueryMetricRequest& request) const;
			SearchTraceCountOutcome searchTraceCount(const Model::SearchTraceCountRequest &request)const;
			void searchTraceCountAsync(const Model::SearchTraceCountRequest& request, const SearchTraceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTraceCountOutcomeCallable searchTraceCountCallable(const Model::SearchTraceCountRequest& request) const;
			GetTagKeyOutcome getTagKey(const Model::GetTagKeyRequest &request)const;
			void getTagKeyAsync(const Model::GetTagKeyRequest& request, const GetTagKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTagKeyOutcomeCallable getTagKeyCallable(const Model::GetTagKeyRequest& request) const;
			ARMSQueryDataSetOutcome aRMSQueryDataSet(const Model::ARMSQueryDataSetRequest &request)const;
			void aRMSQueryDataSetAsync(const Model::ARMSQueryDataSetRequest& request, const ARMSQueryDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ARMSQueryDataSetOutcomeCallable aRMSQueryDataSetCallable(const Model::ARMSQueryDataSetRequest& request) const;
			CreateRetcodeAppOutcome createRetcodeApp(const Model::CreateRetcodeAppRequest &request)const;
			void createRetcodeAppAsync(const Model::CreateRetcodeAppRequest& request, const CreateRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRetcodeAppOutcomeCallable createRetcodeAppCallable(const Model::CreateRetcodeAppRequest& request) const;
			GetTagValOutcome getTagVal(const Model::GetTagValRequest &request)const;
			void getTagValAsync(const Model::GetTagValRequest& request, const GetTagValAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTagValOutcomeCallable getTagValCallable(const Model::GetTagValRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ARMS_ARMSCLIENT_H_
