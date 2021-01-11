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

#ifndef ALIBABACLOUD_XTRACE_XTRACECLIENT_H_
#define ALIBABACLOUD_XTRACE_XTRACECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "XtraceExport.h"
#include "model/GetTagKeyRequest.h"
#include "model/GetTagKeyResult.h"
#include "model/GetTagValRequest.h"
#include "model/GetTagValResult.h"
#include "model/GetTokenRequest.h"
#include "model/GetTokenResult.h"
#include "model/GetTraceRequest.h"
#include "model/GetTraceResult.h"
#include "model/GetTraceAnalysisRequest.h"
#include "model/GetTraceAnalysisResult.h"
#include "model/ListIpOrHostsRequest.h"
#include "model/ListIpOrHostsResult.h"
#include "model/ListServicesRequest.h"
#include "model/ListServicesResult.h"
#include "model/ListSpanNamesRequest.h"
#include "model/ListSpanNamesResult.h"
#include "model/QueryMetricRequest.h"
#include "model/QueryMetricResult.h"
#include "model/SearchTracesRequest.h"
#include "model/SearchTracesResult.h"


namespace AlibabaCloud
{
	namespace Xtrace
	{
		class ALIBABACLOUD_XTRACE_EXPORT XtraceClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetTagKeyResult> GetTagKeyOutcome;
			typedef std::future<GetTagKeyOutcome> GetTagKeyOutcomeCallable;
			typedef std::function<void(const XtraceClient*, const Model::GetTagKeyRequest&, const GetTagKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTagKeyAsyncHandler;
			typedef Outcome<Error, Model::GetTagValResult> GetTagValOutcome;
			typedef std::future<GetTagValOutcome> GetTagValOutcomeCallable;
			typedef std::function<void(const XtraceClient*, const Model::GetTagValRequest&, const GetTagValOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTagValAsyncHandler;
			typedef Outcome<Error, Model::GetTokenResult> GetTokenOutcome;
			typedef std::future<GetTokenOutcome> GetTokenOutcomeCallable;
			typedef std::function<void(const XtraceClient*, const Model::GetTokenRequest&, const GetTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTokenAsyncHandler;
			typedef Outcome<Error, Model::GetTraceResult> GetTraceOutcome;
			typedef std::future<GetTraceOutcome> GetTraceOutcomeCallable;
			typedef std::function<void(const XtraceClient*, const Model::GetTraceRequest&, const GetTraceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTraceAsyncHandler;
			typedef Outcome<Error, Model::GetTraceAnalysisResult> GetTraceAnalysisOutcome;
			typedef std::future<GetTraceAnalysisOutcome> GetTraceAnalysisOutcomeCallable;
			typedef std::function<void(const XtraceClient*, const Model::GetTraceAnalysisRequest&, const GetTraceAnalysisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTraceAnalysisAsyncHandler;
			typedef Outcome<Error, Model::ListIpOrHostsResult> ListIpOrHostsOutcome;
			typedef std::future<ListIpOrHostsOutcome> ListIpOrHostsOutcomeCallable;
			typedef std::function<void(const XtraceClient*, const Model::ListIpOrHostsRequest&, const ListIpOrHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIpOrHostsAsyncHandler;
			typedef Outcome<Error, Model::ListServicesResult> ListServicesOutcome;
			typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
			typedef std::function<void(const XtraceClient*, const Model::ListServicesRequest&, const ListServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServicesAsyncHandler;
			typedef Outcome<Error, Model::ListSpanNamesResult> ListSpanNamesOutcome;
			typedef std::future<ListSpanNamesOutcome> ListSpanNamesOutcomeCallable;
			typedef std::function<void(const XtraceClient*, const Model::ListSpanNamesRequest&, const ListSpanNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSpanNamesAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricResult> QueryMetricOutcome;
			typedef std::future<QueryMetricOutcome> QueryMetricOutcomeCallable;
			typedef std::function<void(const XtraceClient*, const Model::QueryMetricRequest&, const QueryMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricAsyncHandler;
			typedef Outcome<Error, Model::SearchTracesResult> SearchTracesOutcome;
			typedef std::future<SearchTracesOutcome> SearchTracesOutcomeCallable;
			typedef std::function<void(const XtraceClient*, const Model::SearchTracesRequest&, const SearchTracesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTracesAsyncHandler;

			XtraceClient(const Credentials &credentials, const ClientConfiguration &configuration);
			XtraceClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			XtraceClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~XtraceClient();
			GetTagKeyOutcome getTagKey(const Model::GetTagKeyRequest &request)const;
			void getTagKeyAsync(const Model::GetTagKeyRequest& request, const GetTagKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTagKeyOutcomeCallable getTagKeyCallable(const Model::GetTagKeyRequest& request) const;
			GetTagValOutcome getTagVal(const Model::GetTagValRequest &request)const;
			void getTagValAsync(const Model::GetTagValRequest& request, const GetTagValAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTagValOutcomeCallable getTagValCallable(const Model::GetTagValRequest& request) const;
			GetTokenOutcome getToken(const Model::GetTokenRequest &request)const;
			void getTokenAsync(const Model::GetTokenRequest& request, const GetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTokenOutcomeCallable getTokenCallable(const Model::GetTokenRequest& request) const;
			GetTraceOutcome getTrace(const Model::GetTraceRequest &request)const;
			void getTraceAsync(const Model::GetTraceRequest& request, const GetTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTraceOutcomeCallable getTraceCallable(const Model::GetTraceRequest& request) const;
			GetTraceAnalysisOutcome getTraceAnalysis(const Model::GetTraceAnalysisRequest &request)const;
			void getTraceAnalysisAsync(const Model::GetTraceAnalysisRequest& request, const GetTraceAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTraceAnalysisOutcomeCallable getTraceAnalysisCallable(const Model::GetTraceAnalysisRequest& request) const;
			ListIpOrHostsOutcome listIpOrHosts(const Model::ListIpOrHostsRequest &request)const;
			void listIpOrHostsAsync(const Model::ListIpOrHostsRequest& request, const ListIpOrHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIpOrHostsOutcomeCallable listIpOrHostsCallable(const Model::ListIpOrHostsRequest& request) const;
			ListServicesOutcome listServices(const Model::ListServicesRequest &request)const;
			void listServicesAsync(const Model::ListServicesRequest& request, const ListServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServicesOutcomeCallable listServicesCallable(const Model::ListServicesRequest& request) const;
			ListSpanNamesOutcome listSpanNames(const Model::ListSpanNamesRequest &request)const;
			void listSpanNamesAsync(const Model::ListSpanNamesRequest& request, const ListSpanNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSpanNamesOutcomeCallable listSpanNamesCallable(const Model::ListSpanNamesRequest& request) const;
			QueryMetricOutcome queryMetric(const Model::QueryMetricRequest &request)const;
			void queryMetricAsync(const Model::QueryMetricRequest& request, const QueryMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMetricOutcomeCallable queryMetricCallable(const Model::QueryMetricRequest& request) const;
			SearchTracesOutcome searchTraces(const Model::SearchTracesRequest &request)const;
			void searchTracesAsync(const Model::SearchTracesRequest& request, const SearchTracesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTracesOutcomeCallable searchTracesCallable(const Model::SearchTracesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_XTRACE_XTRACECLIENT_H_
