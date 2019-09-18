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

#ifndef ALIBABACLOUD_HTTPDNS_HTTPDNSCLIENT_H_
#define ALIBABACLOUD_HTTPDNS_HTTPDNSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "HttpdnsExport.h"
#include "model/AddDomainRequest.h"
#include "model/AddDomainResult.h"
#include "model/DeleteDomainRequest.h"
#include "model/DeleteDomainResult.h"
#include "model/DescribeDomainsRequest.h"
#include "model/DescribeDomainsResult.h"
#include "model/GetAccountInfoRequest.h"
#include "model/GetAccountInfoResult.h"
#include "model/GetResolveCountSummaryRequest.h"
#include "model/GetResolveCountSummaryResult.h"
#include "model/GetResolveStatisticsRequest.h"
#include "model/GetResolveStatisticsResult.h"
#include "model/ListDomainsRequest.h"
#include "model/ListDomainsResult.h"


namespace AlibabaCloud
{
	namespace Httpdns
	{
		class ALIBABACLOUD_HTTPDNS_EXPORT HttpdnsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddDomainResult> AddDomainOutcome;
			typedef std::future<AddDomainOutcome> AddDomainOutcomeCallable;
			typedef std::function<void(const HttpdnsClient*, const Model::AddDomainRequest&, const AddDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainResult> DeleteDomainOutcome;
			typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
			typedef std::function<void(const HttpdnsClient*, const Model::DeleteDomainRequest&, const DeleteDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainsResult> DescribeDomainsOutcome;
			typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
			typedef std::function<void(const HttpdnsClient*, const Model::DescribeDomainsRequest&, const DescribeDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
			typedef Outcome<Error, Model::GetAccountInfoResult> GetAccountInfoOutcome;
			typedef std::future<GetAccountInfoOutcome> GetAccountInfoOutcomeCallable;
			typedef std::function<void(const HttpdnsClient*, const Model::GetAccountInfoRequest&, const GetAccountInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountInfoAsyncHandler;
			typedef Outcome<Error, Model::GetResolveCountSummaryResult> GetResolveCountSummaryOutcome;
			typedef std::future<GetResolveCountSummaryOutcome> GetResolveCountSummaryOutcomeCallable;
			typedef std::function<void(const HttpdnsClient*, const Model::GetResolveCountSummaryRequest&, const GetResolveCountSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResolveCountSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetResolveStatisticsResult> GetResolveStatisticsOutcome;
			typedef std::future<GetResolveStatisticsOutcome> GetResolveStatisticsOutcomeCallable;
			typedef std::function<void(const HttpdnsClient*, const Model::GetResolveStatisticsRequest&, const GetResolveStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResolveStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ListDomainsResult> ListDomainsOutcome;
			typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
			typedef std::function<void(const HttpdnsClient*, const Model::ListDomainsRequest&, const ListDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDomainsAsyncHandler;

			HttpdnsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			HttpdnsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			HttpdnsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~HttpdnsClient();
			AddDomainOutcome addDomain(const Model::AddDomainRequest &request)const;
			void addDomainAsync(const Model::AddDomainRequest& request, const AddDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDomainOutcomeCallable addDomainCallable(const Model::AddDomainRequest& request) const;
			DeleteDomainOutcome deleteDomain(const Model::DeleteDomainRequest &request)const;
			void deleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainOutcomeCallable deleteDomainCallable(const Model::DeleteDomainRequest& request) const;
			DescribeDomainsOutcome describeDomains(const Model::DescribeDomainsRequest &request)const;
			void describeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainsOutcomeCallable describeDomainsCallable(const Model::DescribeDomainsRequest& request) const;
			GetAccountInfoOutcome getAccountInfo(const Model::GetAccountInfoRequest &request)const;
			void getAccountInfoAsync(const Model::GetAccountInfoRequest& request, const GetAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountInfoOutcomeCallable getAccountInfoCallable(const Model::GetAccountInfoRequest& request) const;
			GetResolveCountSummaryOutcome getResolveCountSummary(const Model::GetResolveCountSummaryRequest &request)const;
			void getResolveCountSummaryAsync(const Model::GetResolveCountSummaryRequest& request, const GetResolveCountSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResolveCountSummaryOutcomeCallable getResolveCountSummaryCallable(const Model::GetResolveCountSummaryRequest& request) const;
			GetResolveStatisticsOutcome getResolveStatistics(const Model::GetResolveStatisticsRequest &request)const;
			void getResolveStatisticsAsync(const Model::GetResolveStatisticsRequest& request, const GetResolveStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResolveStatisticsOutcomeCallable getResolveStatisticsCallable(const Model::GetResolveStatisticsRequest& request) const;
			ListDomainsOutcome listDomains(const Model::ListDomainsRequest &request)const;
			void listDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDomainsOutcomeCallable listDomainsCallable(const Model::ListDomainsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_HTTPDNS_HTTPDNSCLIENT_H_
