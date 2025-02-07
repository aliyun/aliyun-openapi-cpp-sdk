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

#ifndef ALIBABACLOUD_WSS_WSSCLIENT_H_
#define ALIBABACLOUD_WSS_WSSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "WssExport.h"
#include "model/DescribeDeliveryAddressRequest.h"
#include "model/DescribeDeliveryAddressResult.h"
#include "model/DescribePackageDeductionsRequest.h"
#include "model/DescribePackageDeductionsResult.h"
#include "model/ModifyInstancePropertiesRequest.h"
#include "model/ModifyInstancePropertiesResult.h"


namespace AlibabaCloud
{
	namespace Wss
	{
		class ALIBABACLOUD_WSS_EXPORT WssClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeDeliveryAddressResult> DescribeDeliveryAddressOutcome;
			typedef std::future<DescribeDeliveryAddressOutcome> DescribeDeliveryAddressOutcomeCallable;
			typedef std::function<void(const WssClient*, const Model::DescribeDeliveryAddressRequest&, const DescribeDeliveryAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeliveryAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribePackageDeductionsResult> DescribePackageDeductionsOutcome;
			typedef std::future<DescribePackageDeductionsOutcome> DescribePackageDeductionsOutcomeCallable;
			typedef std::function<void(const WssClient*, const Model::DescribePackageDeductionsRequest&, const DescribePackageDeductionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackageDeductionsAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstancePropertiesResult> ModifyInstancePropertiesOutcome;
			typedef std::future<ModifyInstancePropertiesOutcome> ModifyInstancePropertiesOutcomeCallable;
			typedef std::function<void(const WssClient*, const Model::ModifyInstancePropertiesRequest&, const ModifyInstancePropertiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancePropertiesAsyncHandler;

			WssClient(const Credentials &credentials, const ClientConfiguration &configuration);
			WssClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			WssClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~WssClient();
			DescribeDeliveryAddressOutcome describeDeliveryAddress(const Model::DescribeDeliveryAddressRequest &request)const;
			void describeDeliveryAddressAsync(const Model::DescribeDeliveryAddressRequest& request, const DescribeDeliveryAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeliveryAddressOutcomeCallable describeDeliveryAddressCallable(const Model::DescribeDeliveryAddressRequest& request) const;
			DescribePackageDeductionsOutcome describePackageDeductions(const Model::DescribePackageDeductionsRequest &request)const;
			void describePackageDeductionsAsync(const Model::DescribePackageDeductionsRequest& request, const DescribePackageDeductionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePackageDeductionsOutcomeCallable describePackageDeductionsCallable(const Model::DescribePackageDeductionsRequest& request) const;
			ModifyInstancePropertiesOutcome modifyInstanceProperties(const Model::ModifyInstancePropertiesRequest &request)const;
			void modifyInstancePropertiesAsync(const Model::ModifyInstancePropertiesRequest& request, const ModifyInstancePropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstancePropertiesOutcomeCallable modifyInstancePropertiesCallable(const Model::ModifyInstancePropertiesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_WSS_WSSCLIENT_H_
