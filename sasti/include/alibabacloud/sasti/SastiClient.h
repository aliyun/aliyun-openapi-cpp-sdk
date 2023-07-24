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

#ifndef ALIBABACLOUD_SASTI_SASTICLIENT_H_
#define ALIBABACLOUD_SASTI_SASTICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SastiExport.h"
#include "model/DescribeDomainReportRequest.h"
#include "model/DescribeDomainReportResult.h"
#include "model/DescribeFileReportRequest.h"
#include "model/DescribeFileReportResult.h"
#include "model/DescribeIpReportRequest.h"
#include "model/DescribeIpReportResult.h"
#include "model/GetGraphQueryTemplatesRequest.h"
#include "model/GetGraphQueryTemplatesResult.h"


namespace AlibabaCloud
{
	namespace Sasti
	{
		class ALIBABACLOUD_SASTI_EXPORT SastiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeDomainReportResult> DescribeDomainReportOutcome;
			typedef std::future<DescribeDomainReportOutcome> DescribeDomainReportOutcomeCallable;
			typedef std::function<void(const SastiClient*, const Model::DescribeDomainReportRequest&, const DescribeDomainReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeFileReportResult> DescribeFileReportOutcome;
			typedef std::future<DescribeFileReportOutcome> DescribeFileReportOutcomeCallable;
			typedef std::function<void(const SastiClient*, const Model::DescribeFileReportRequest&, const DescribeFileReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpReportResult> DescribeIpReportOutcome;
			typedef std::future<DescribeIpReportOutcome> DescribeIpReportOutcomeCallable;
			typedef std::function<void(const SastiClient*, const Model::DescribeIpReportRequest&, const DescribeIpReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpReportAsyncHandler;
			typedef Outcome<Error, Model::GetGraphQueryTemplatesResult> GetGraphQueryTemplatesOutcome;
			typedef std::future<GetGraphQueryTemplatesOutcome> GetGraphQueryTemplatesOutcomeCallable;
			typedef std::function<void(const SastiClient*, const Model::GetGraphQueryTemplatesRequest&, const GetGraphQueryTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGraphQueryTemplatesAsyncHandler;

			SastiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SastiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SastiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SastiClient();
			DescribeDomainReportOutcome describeDomainReport(const Model::DescribeDomainReportRequest &request)const;
			void describeDomainReportAsync(const Model::DescribeDomainReportRequest& request, const DescribeDomainReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainReportOutcomeCallable describeDomainReportCallable(const Model::DescribeDomainReportRequest& request) const;
			DescribeFileReportOutcome describeFileReport(const Model::DescribeFileReportRequest &request)const;
			void describeFileReportAsync(const Model::DescribeFileReportRequest& request, const DescribeFileReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFileReportOutcomeCallable describeFileReportCallable(const Model::DescribeFileReportRequest& request) const;
			DescribeIpReportOutcome describeIpReport(const Model::DescribeIpReportRequest &request)const;
			void describeIpReportAsync(const Model::DescribeIpReportRequest& request, const DescribeIpReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpReportOutcomeCallable describeIpReportCallable(const Model::DescribeIpReportRequest& request) const;
			GetGraphQueryTemplatesOutcome getGraphQueryTemplates(const Model::GetGraphQueryTemplatesRequest &request)const;
			void getGraphQueryTemplatesAsync(const Model::GetGraphQueryTemplatesRequest& request, const GetGraphQueryTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGraphQueryTemplatesOutcomeCallable getGraphQueryTemplatesCallable(const Model::GetGraphQueryTemplatesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SASTI_SASTICLIENT_H_
