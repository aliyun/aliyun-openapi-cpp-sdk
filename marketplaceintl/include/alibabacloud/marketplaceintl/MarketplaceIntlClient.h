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

#ifndef ALIBABACLOUD_MARKETPLACEINTL_MARKETPLACEINTLCLIENT_H_
#define ALIBABACLOUD_MARKETPLACEINTL_MARKETPLACEINTLCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "MarketplaceIntlExport.h"
#include "model/DescribePushMeteringDataRequest.h"
#include "model/DescribePushMeteringDataResult.h"
#include "model/DescribeSellerInstancesRequest.h"
#include "model/DescribeSellerInstancesResult.h"
#include "model/NoticeInstanceUserRequest.h"
#include "model/NoticeInstanceUserResult.h"
#include "model/PushMeteringDataRequest.h"
#include "model/PushMeteringDataResult.h"


namespace AlibabaCloud
{
	namespace MarketplaceIntl
	{
		class ALIBABACLOUD_MARKETPLACEINTL_EXPORT MarketplaceIntlClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribePushMeteringDataResult> DescribePushMeteringDataOutcome;
			typedef std::future<DescribePushMeteringDataOutcome> DescribePushMeteringDataOutcomeCallable;
			typedef std::function<void(const MarketplaceIntlClient*, const Model::DescribePushMeteringDataRequest&, const DescribePushMeteringDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePushMeteringDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeSellerInstancesResult> DescribeSellerInstancesOutcome;
			typedef std::future<DescribeSellerInstancesOutcome> DescribeSellerInstancesOutcomeCallable;
			typedef std::function<void(const MarketplaceIntlClient*, const Model::DescribeSellerInstancesRequest&, const DescribeSellerInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSellerInstancesAsyncHandler;
			typedef Outcome<Error, Model::NoticeInstanceUserResult> NoticeInstanceUserOutcome;
			typedef std::future<NoticeInstanceUserOutcome> NoticeInstanceUserOutcomeCallable;
			typedef std::function<void(const MarketplaceIntlClient*, const Model::NoticeInstanceUserRequest&, const NoticeInstanceUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NoticeInstanceUserAsyncHandler;
			typedef Outcome<Error, Model::PushMeteringDataResult> PushMeteringDataOutcome;
			typedef std::future<PushMeteringDataOutcome> PushMeteringDataOutcomeCallable;
			typedef std::function<void(const MarketplaceIntlClient*, const Model::PushMeteringDataRequest&, const PushMeteringDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushMeteringDataAsyncHandler;

			MarketplaceIntlClient(const Credentials &credentials, const ClientConfiguration &configuration);
			MarketplaceIntlClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			MarketplaceIntlClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~MarketplaceIntlClient();
			DescribePushMeteringDataOutcome describePushMeteringData(const Model::DescribePushMeteringDataRequest &request)const;
			void describePushMeteringDataAsync(const Model::DescribePushMeteringDataRequest& request, const DescribePushMeteringDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePushMeteringDataOutcomeCallable describePushMeteringDataCallable(const Model::DescribePushMeteringDataRequest& request) const;
			DescribeSellerInstancesOutcome describeSellerInstances(const Model::DescribeSellerInstancesRequest &request)const;
			void describeSellerInstancesAsync(const Model::DescribeSellerInstancesRequest& request, const DescribeSellerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSellerInstancesOutcomeCallable describeSellerInstancesCallable(const Model::DescribeSellerInstancesRequest& request) const;
			NoticeInstanceUserOutcome noticeInstanceUser(const Model::NoticeInstanceUserRequest &request)const;
			void noticeInstanceUserAsync(const Model::NoticeInstanceUserRequest& request, const NoticeInstanceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NoticeInstanceUserOutcomeCallable noticeInstanceUserCallable(const Model::NoticeInstanceUserRequest& request) const;
			PushMeteringDataOutcome pushMeteringData(const Model::PushMeteringDataRequest &request)const;
			void pushMeteringDataAsync(const Model::PushMeteringDataRequest& request, const PushMeteringDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushMeteringDataOutcomeCallable pushMeteringDataCallable(const Model::PushMeteringDataRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_MARKETPLACEINTL_MARKETPLACEINTLCLIENT_H_
