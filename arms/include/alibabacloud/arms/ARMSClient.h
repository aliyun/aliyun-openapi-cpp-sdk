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
#include "model/GetIpOrHostsRequest.h"
#include "model/GetIpOrHostsResult.h"
#include "model/ImportAppAlertRulesRequest.h"
#include "model/ImportAppAlertRulesResult.h"
#include "model/CreateAlertContactGroupRequest.h"
#include "model/CreateAlertContactGroupResult.h"
#include "model/GetSpanNamesRequest.h"
#include "model/GetSpanNamesResult.h"
#include "model/GetServicesRequest.h"
#include "model/GetServicesResult.h"
#include "model/GetTokenRequest.h"
#include "model/GetTokenResult.h"
#include "model/MetricQueryRequest.h"
#include "model/MetricQueryResult.h"
#include "model/SearchTracesRequest.h"
#include "model/SearchTracesResult.h"
#include "model/SearchAlertContactGroupRequest.h"
#include "model/SearchAlertContactGroupResult.h"
#include "model/CreateAlertContactRequest.h"
#include "model/CreateAlertContactResult.h"
#include "model/SearchTraceCountRequest.h"
#include "model/SearchTraceCountResult.h"
#include "model/GetTagKeyRequest.h"
#include "model/GetTagKeyResult.h"
#include "model/GetTraceAppsRequest.h"
#include "model/GetTraceAppsResult.h"
#include "model/ARMSQueryDataSetRequest.h"
#include "model/ARMSQueryDataSetResult.h"
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
			typedef Outcome<Error, Model::GetIpOrHostsResult> GetIpOrHostsOutcome;
			typedef std::future<GetIpOrHostsOutcome> GetIpOrHostsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetIpOrHostsRequest&, const GetIpOrHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIpOrHostsAsyncHandler;
			typedef Outcome<Error, Model::ImportAppAlertRulesResult> ImportAppAlertRulesOutcome;
			typedef std::future<ImportAppAlertRulesOutcome> ImportAppAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ImportAppAlertRulesRequest&, const ImportAppAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportAppAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateAlertContactGroupResult> CreateAlertContactGroupOutcome;
			typedef std::future<CreateAlertContactGroupOutcome> CreateAlertContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateAlertContactGroupRequest&, const CreateAlertContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertContactGroupAsyncHandler;
			typedef Outcome<Error, Model::GetSpanNamesResult> GetSpanNamesOutcome;
			typedef std::future<GetSpanNamesOutcome> GetSpanNamesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSpanNamesRequest&, const GetSpanNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSpanNamesAsyncHandler;
			typedef Outcome<Error, Model::GetServicesResult> GetServicesOutcome;
			typedef std::future<GetServicesOutcome> GetServicesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetServicesRequest&, const GetServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServicesAsyncHandler;
			typedef Outcome<Error, Model::GetTokenResult> GetTokenOutcome;
			typedef std::future<GetTokenOutcome> GetTokenOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTokenRequest&, const GetTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTokenAsyncHandler;
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
			typedef Outcome<Error, Model::SearchTraceCountResult> SearchTraceCountOutcome;
			typedef std::future<SearchTraceCountOutcome> SearchTraceCountOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchTraceCountRequest&, const SearchTraceCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTraceCountAsyncHandler;
			typedef Outcome<Error, Model::GetTagKeyResult> GetTagKeyOutcome;
			typedef std::future<GetTagKeyOutcome> GetTagKeyOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTagKeyRequest&, const GetTagKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTagKeyAsyncHandler;
			typedef Outcome<Error, Model::GetTraceAppsResult> GetTraceAppsOutcome;
			typedef std::future<GetTraceAppsOutcome> GetTraceAppsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTraceAppsRequest&, const GetTraceAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTraceAppsAsyncHandler;
			typedef Outcome<Error, Model::ARMSQueryDataSetResult> ARMSQueryDataSetOutcome;
			typedef std::future<ARMSQueryDataSetOutcome> ARMSQueryDataSetOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ARMSQueryDataSetRequest&, const ARMSQueryDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ARMSQueryDataSetAsyncHandler;
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
			GetIpOrHostsOutcome getIpOrHosts(const Model::GetIpOrHostsRequest &request)const;
			void getIpOrHostsAsync(const Model::GetIpOrHostsRequest& request, const GetIpOrHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIpOrHostsOutcomeCallable getIpOrHostsCallable(const Model::GetIpOrHostsRequest& request) const;
			ImportAppAlertRulesOutcome importAppAlertRules(const Model::ImportAppAlertRulesRequest &request)const;
			void importAppAlertRulesAsync(const Model::ImportAppAlertRulesRequest& request, const ImportAppAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportAppAlertRulesOutcomeCallable importAppAlertRulesCallable(const Model::ImportAppAlertRulesRequest& request) const;
			CreateAlertContactGroupOutcome createAlertContactGroup(const Model::CreateAlertContactGroupRequest &request)const;
			void createAlertContactGroupAsync(const Model::CreateAlertContactGroupRequest& request, const CreateAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlertContactGroupOutcomeCallable createAlertContactGroupCallable(const Model::CreateAlertContactGroupRequest& request) const;
			GetSpanNamesOutcome getSpanNames(const Model::GetSpanNamesRequest &request)const;
			void getSpanNamesAsync(const Model::GetSpanNamesRequest& request, const GetSpanNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSpanNamesOutcomeCallable getSpanNamesCallable(const Model::GetSpanNamesRequest& request) const;
			GetServicesOutcome getServices(const Model::GetServicesRequest &request)const;
			void getServicesAsync(const Model::GetServicesRequest& request, const GetServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServicesOutcomeCallable getServicesCallable(const Model::GetServicesRequest& request) const;
			GetTokenOutcome getToken(const Model::GetTokenRequest &request)const;
			void getTokenAsync(const Model::GetTokenRequest& request, const GetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTokenOutcomeCallable getTokenCallable(const Model::GetTokenRequest& request) const;
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
			SearchTraceCountOutcome searchTraceCount(const Model::SearchTraceCountRequest &request)const;
			void searchTraceCountAsync(const Model::SearchTraceCountRequest& request, const SearchTraceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTraceCountOutcomeCallable searchTraceCountCallable(const Model::SearchTraceCountRequest& request) const;
			GetTagKeyOutcome getTagKey(const Model::GetTagKeyRequest &request)const;
			void getTagKeyAsync(const Model::GetTagKeyRequest& request, const GetTagKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTagKeyOutcomeCallable getTagKeyCallable(const Model::GetTagKeyRequest& request) const;
			GetTraceAppsOutcome getTraceApps(const Model::GetTraceAppsRequest &request)const;
			void getTraceAppsAsync(const Model::GetTraceAppsRequest& request, const GetTraceAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTraceAppsOutcomeCallable getTraceAppsCallable(const Model::GetTraceAppsRequest& request) const;
			ARMSQueryDataSetOutcome aRMSQueryDataSet(const Model::ARMSQueryDataSetRequest &request)const;
			void aRMSQueryDataSetAsync(const Model::ARMSQueryDataSetRequest& request, const ARMSQueryDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ARMSQueryDataSetOutcomeCallable aRMSQueryDataSetCallable(const Model::ARMSQueryDataSetRequest& request) const;
			GetTagValOutcome getTagVal(const Model::GetTagValRequest &request)const;
			void getTagValAsync(const Model::GetTagValRequest& request, const GetTagValAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTagValOutcomeCallable getTagValCallable(const Model::GetTagValRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ARMS_ARMSCLIENT_H_
