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

#ifndef ALIBABACLOUD_ADDRESS_PURIFICATION_ADDRESS_PURIFICATIONCLIENT_H_
#define ALIBABACLOUD_ADDRESS_PURIFICATION_ADDRESS_PURIFICATIONCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Address_purificationExport.h"
#include "model/DescribeProductRequest.h"
#include "model/DescribeProductResult.h"
#include "model/GetAlgorithmResultRequest.h"
#include "model/GetAlgorithmResultResult.h"
#include "model/GetConsoleResultRequest.h"
#include "model/GetConsoleResultResult.h"
#include "model/GetReportRequest.h"
#include "model/GetReportResult.h"
#include "model/GetUserInfomationRequest.h"
#include "model/GetUserInfomationResult.h"


namespace AlibabaCloud
{
	namespace Address_purification
	{
		class ALIBABACLOUD_ADDRESS_PURIFICATION_EXPORT Address_purificationClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeProductResult> DescribeProductOutcome;
			typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::DescribeProductRequest&, const DescribeProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAsyncHandler;
			typedef Outcome<Error, Model::GetAlgorithmResultResult> GetAlgorithmResultOutcome;
			typedef std::future<GetAlgorithmResultOutcome> GetAlgorithmResultOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::GetAlgorithmResultRequest&, const GetAlgorithmResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAlgorithmResultAsyncHandler;
			typedef Outcome<Error, Model::GetConsoleResultResult> GetConsoleResultOutcome;
			typedef std::future<GetConsoleResultOutcome> GetConsoleResultOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::GetConsoleResultRequest&, const GetConsoleResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConsoleResultAsyncHandler;
			typedef Outcome<Error, Model::GetReportResult> GetReportOutcome;
			typedef std::future<GetReportOutcome> GetReportOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::GetReportRequest&, const GetReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetReportAsyncHandler;
			typedef Outcome<Error, Model::GetUserInfomationResult> GetUserInfomationOutcome;
			typedef std::future<GetUserInfomationOutcome> GetUserInfomationOutcomeCallable;
			typedef std::function<void(const Address_purificationClient*, const Model::GetUserInfomationRequest&, const GetUserInfomationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserInfomationAsyncHandler;

			Address_purificationClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Address_purificationClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Address_purificationClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Address_purificationClient();
			DescribeProductOutcome describeProduct(const Model::DescribeProductRequest &request)const;
			void describeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProductOutcomeCallable describeProductCallable(const Model::DescribeProductRequest& request) const;
			GetAlgorithmResultOutcome getAlgorithmResult(const Model::GetAlgorithmResultRequest &request)const;
			void getAlgorithmResultAsync(const Model::GetAlgorithmResultRequest& request, const GetAlgorithmResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAlgorithmResultOutcomeCallable getAlgorithmResultCallable(const Model::GetAlgorithmResultRequest& request) const;
			GetConsoleResultOutcome getConsoleResult(const Model::GetConsoleResultRequest &request)const;
			void getConsoleResultAsync(const Model::GetConsoleResultRequest& request, const GetConsoleResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConsoleResultOutcomeCallable getConsoleResultCallable(const Model::GetConsoleResultRequest& request) const;
			GetReportOutcome getReport(const Model::GetReportRequest &request)const;
			void getReportAsync(const Model::GetReportRequest& request, const GetReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetReportOutcomeCallable getReportCallable(const Model::GetReportRequest& request) const;
			GetUserInfomationOutcome getUserInfomation(const Model::GetUserInfomationRequest &request)const;
			void getUserInfomationAsync(const Model::GetUserInfomationRequest& request, const GetUserInfomationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserInfomationOutcomeCallable getUserInfomationCallable(const Model::GetUserInfomationRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ADDRESS_PURIFICATION_ADDRESS_PURIFICATIONCLIENT_H_
