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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPENANALYTICSCLIENT_H_
#define ALIBABACLOUD_OPENANALYTICS_OPENANALYTICSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OpenanalyticsExport.h"
#include "model/CloseProductAccountRequest.h"
#include "model/CloseProductAccountResult.h"
#include "model/DescribeRegionListRequest.h"
#include "model/DescribeRegionListResult.h"
#include "model/GetAllowIPRequest.h"
#include "model/GetAllowIPResult.h"
#include "model/GetEndPointByDomainRequest.h"
#include "model/GetEndPointByDomainResult.h"
#include "model/GetProductStatusRequest.h"
#include "model/GetProductStatusResult.h"
#include "model/GetRegionStatusRequest.h"
#include "model/GetRegionStatusResult.h"
#include "model/OpenProductAccountRequest.h"
#include "model/OpenProductAccountResult.h"
#include "model/QueryEndPointListRequest.h"
#include "model/QueryEndPointListResult.h"
#include "model/SetAllowIPRequest.h"
#include "model/SetAllowIPResult.h"


namespace AlibabaCloud
{
	namespace Openanalytics
	{
		class ALIBABACLOUD_OPENANALYTICS_EXPORT OpenanalyticsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CloseProductAccountResult> CloseProductAccountOutcome;
			typedef std::future<CloseProductAccountOutcome> CloseProductAccountOutcomeCallable;
			typedef std::function<void(const OpenanalyticsClient*, const Model::CloseProductAccountRequest&, const CloseProductAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseProductAccountAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionListResult> DescribeRegionListOutcome;
			typedef std::future<DescribeRegionListOutcome> DescribeRegionListOutcomeCallable;
			typedef std::function<void(const OpenanalyticsClient*, const Model::DescribeRegionListRequest&, const DescribeRegionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionListAsyncHandler;
			typedef Outcome<Error, Model::GetAllowIPResult> GetAllowIPOutcome;
			typedef std::future<GetAllowIPOutcome> GetAllowIPOutcomeCallable;
			typedef std::function<void(const OpenanalyticsClient*, const Model::GetAllowIPRequest&, const GetAllowIPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllowIPAsyncHandler;
			typedef Outcome<Error, Model::GetEndPointByDomainResult> GetEndPointByDomainOutcome;
			typedef std::future<GetEndPointByDomainOutcome> GetEndPointByDomainOutcomeCallable;
			typedef std::function<void(const OpenanalyticsClient*, const Model::GetEndPointByDomainRequest&, const GetEndPointByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEndPointByDomainAsyncHandler;
			typedef Outcome<Error, Model::GetProductStatusResult> GetProductStatusOutcome;
			typedef std::future<GetProductStatusOutcome> GetProductStatusOutcomeCallable;
			typedef std::function<void(const OpenanalyticsClient*, const Model::GetProductStatusRequest&, const GetProductStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProductStatusAsyncHandler;
			typedef Outcome<Error, Model::GetRegionStatusResult> GetRegionStatusOutcome;
			typedef std::future<GetRegionStatusOutcome> GetRegionStatusOutcomeCallable;
			typedef std::function<void(const OpenanalyticsClient*, const Model::GetRegionStatusRequest&, const GetRegionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRegionStatusAsyncHandler;
			typedef Outcome<Error, Model::OpenProductAccountResult> OpenProductAccountOutcome;
			typedef std::future<OpenProductAccountOutcome> OpenProductAccountOutcomeCallable;
			typedef std::function<void(const OpenanalyticsClient*, const Model::OpenProductAccountRequest&, const OpenProductAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenProductAccountAsyncHandler;
			typedef Outcome<Error, Model::QueryEndPointListResult> QueryEndPointListOutcome;
			typedef std::future<QueryEndPointListOutcome> QueryEndPointListOutcomeCallable;
			typedef std::function<void(const OpenanalyticsClient*, const Model::QueryEndPointListRequest&, const QueryEndPointListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEndPointListAsyncHandler;
			typedef Outcome<Error, Model::SetAllowIPResult> SetAllowIPOutcome;
			typedef std::future<SetAllowIPOutcome> SetAllowIPOutcomeCallable;
			typedef std::function<void(const OpenanalyticsClient*, const Model::SetAllowIPRequest&, const SetAllowIPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAllowIPAsyncHandler;

			OpenanalyticsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OpenanalyticsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OpenanalyticsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OpenanalyticsClient();
			CloseProductAccountOutcome closeProductAccount(const Model::CloseProductAccountRequest &request)const;
			void closeProductAccountAsync(const Model::CloseProductAccountRequest& request, const CloseProductAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseProductAccountOutcomeCallable closeProductAccountCallable(const Model::CloseProductAccountRequest& request) const;
			DescribeRegionListOutcome describeRegionList(const Model::DescribeRegionListRequest &request)const;
			void describeRegionListAsync(const Model::DescribeRegionListRequest& request, const DescribeRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionListOutcomeCallable describeRegionListCallable(const Model::DescribeRegionListRequest& request) const;
			GetAllowIPOutcome getAllowIP(const Model::GetAllowIPRequest &request)const;
			void getAllowIPAsync(const Model::GetAllowIPRequest& request, const GetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllowIPOutcomeCallable getAllowIPCallable(const Model::GetAllowIPRequest& request) const;
			GetEndPointByDomainOutcome getEndPointByDomain(const Model::GetEndPointByDomainRequest &request)const;
			void getEndPointByDomainAsync(const Model::GetEndPointByDomainRequest& request, const GetEndPointByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEndPointByDomainOutcomeCallable getEndPointByDomainCallable(const Model::GetEndPointByDomainRequest& request) const;
			GetProductStatusOutcome getProductStatus(const Model::GetProductStatusRequest &request)const;
			void getProductStatusAsync(const Model::GetProductStatusRequest& request, const GetProductStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProductStatusOutcomeCallable getProductStatusCallable(const Model::GetProductStatusRequest& request) const;
			GetRegionStatusOutcome getRegionStatus(const Model::GetRegionStatusRequest &request)const;
			void getRegionStatusAsync(const Model::GetRegionStatusRequest& request, const GetRegionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRegionStatusOutcomeCallable getRegionStatusCallable(const Model::GetRegionStatusRequest& request) const;
			OpenProductAccountOutcome openProductAccount(const Model::OpenProductAccountRequest &request)const;
			void openProductAccountAsync(const Model::OpenProductAccountRequest& request, const OpenProductAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenProductAccountOutcomeCallable openProductAccountCallable(const Model::OpenProductAccountRequest& request) const;
			QueryEndPointListOutcome queryEndPointList(const Model::QueryEndPointListRequest &request)const;
			void queryEndPointListAsync(const Model::QueryEndPointListRequest& request, const QueryEndPointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEndPointListOutcomeCallable queryEndPointListCallable(const Model::QueryEndPointListRequest& request) const;
			SetAllowIPOutcome setAllowIP(const Model::SetAllowIPRequest &request)const;
			void setAllowIPAsync(const Model::SetAllowIPRequest& request, const SetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAllowIPOutcomeCallable setAllowIPCallable(const Model::SetAllowIPRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OPENANALYTICS_OPENANALYTICSCLIENT_H_
