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

#ifndef ALIBABACLOUD_MARKET_MARKETCLIENT_H_
#define ALIBABACLOUD_MARKET_MARKETCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "MarketExport.h"
#include "model/NotifyContractEventRequest.h"
#include "model/NotifyContractEventResult.h"
#include "model/PushMeteringDataRequest.h"
#include "model/PushMeteringDataResult.h"
#include "model/DescribeOrderRequest.h"
#include "model/DescribeOrderResult.h"
#include "model/BindImagePackageRequest.h"
#include "model/BindImagePackageResult.h"
#include "model/QueryMarketImagesRequest.h"
#include "model/QueryMarketImagesResult.h"
#include "model/DescribeProductsRequest.h"
#include "model/DescribeProductsResult.h"
#include "model/CreateOrderRequest.h"
#include "model/CreateOrderResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"
#include "model/DescribeRateRequest.h"
#include "model/DescribeRateResult.h"
#include "model/QueryMarketCategoriesRequest.h"
#include "model/QueryMarketCategoriesResult.h"
#include "model/CreateRateRequest.h"
#include "model/CreateRateResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeLicenseRequest.h"
#include "model/DescribeLicenseResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/ActivateLicenseRequest.h"
#include "model/ActivateLicenseResult.h"
#include "model/DescribeCommodityRequest.h"
#include "model/DescribeCommodityResult.h"
#include "model/DescribeProductRequest.h"
#include "model/DescribeProductResult.h"
#include "model/CreateCommodityRequest.h"
#include "model/CreateCommodityResult.h"
#include "model/DeleteCommodityRequest.h"
#include "model/DeleteCommodityResult.h"
#include "model/UpdateCommodityRequest.h"
#include "model/UpdateCommodityResult.h"
#include "model/DescribeCommoditiesRequest.h"
#include "model/DescribeCommoditiesResult.h"
#include "model/UploadCommodityFileRequest.h"
#include "model/UploadCommodityFileResult.h"


namespace AlibabaCloud
{
	namespace Market
	{
		class ALIBABACLOUD_MARKET_EXPORT MarketClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::NotifyContractEventResult> NotifyContractEventOutcome;
			typedef std::future<NotifyContractEventOutcome> NotifyContractEventOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::NotifyContractEventRequest&, const NotifyContractEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> NotifyContractEventAsyncHandler;
			typedef Outcome<Error, Model::PushMeteringDataResult> PushMeteringDataOutcome;
			typedef std::future<PushMeteringDataOutcome> PushMeteringDataOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::PushMeteringDataRequest&, const PushMeteringDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushMeteringDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrderResult> DescribeOrderOutcome;
			typedef std::future<DescribeOrderOutcome> DescribeOrderOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeOrderRequest&, const DescribeOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderAsyncHandler;
			typedef Outcome<Error, Model::BindImagePackageResult> BindImagePackageOutcome;
			typedef std::future<BindImagePackageOutcome> BindImagePackageOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::BindImagePackageRequest&, const BindImagePackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindImagePackageAsyncHandler;
			typedef Outcome<Error, Model::QueryMarketImagesResult> QueryMarketImagesOutcome;
			typedef std::future<QueryMarketImagesOutcome> QueryMarketImagesOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::QueryMarketImagesRequest&, const QueryMarketImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMarketImagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeProductsResult> DescribeProductsOutcome;
			typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeProductsRequest&, const DescribeProductsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductsAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderResult> CreateOrderOutcome;
			typedef std::future<CreateOrderOutcome> CreateOrderOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::CreateOrderRequest&, const CreateOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRateResult> DescribeRateOutcome;
			typedef std::future<DescribeRateOutcome> DescribeRateOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeRateRequest&, const DescribeRateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRateAsyncHandler;
			typedef Outcome<Error, Model::QueryMarketCategoriesResult> QueryMarketCategoriesOutcome;
			typedef std::future<QueryMarketCategoriesOutcome> QueryMarketCategoriesOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::QueryMarketCategoriesRequest&, const QueryMarketCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMarketCategoriesAsyncHandler;
			typedef Outcome<Error, Model::CreateRateResult> CreateRateOutcome;
			typedef std::future<CreateRateOutcome> CreateRateOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::CreateRateRequest&, const CreateRateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRateAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeLicenseResult> DescribeLicenseOutcome;
			typedef std::future<DescribeLicenseOutcome> DescribeLicenseOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeLicenseRequest&, const DescribeLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::ActivateLicenseResult> ActivateLicenseOutcome;
			typedef std::future<ActivateLicenseOutcome> ActivateLicenseOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::ActivateLicenseRequest&, const ActivateLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateLicenseAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommodityResult> DescribeCommodityOutcome;
			typedef std::future<DescribeCommodityOutcome> DescribeCommodityOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeCommodityRequest&, const DescribeCommodityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommodityAsyncHandler;
			typedef Outcome<Error, Model::DescribeProductResult> DescribeProductOutcome;
			typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeProductRequest&, const DescribeProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAsyncHandler;
			typedef Outcome<Error, Model::CreateCommodityResult> CreateCommodityOutcome;
			typedef std::future<CreateCommodityOutcome> CreateCommodityOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::CreateCommodityRequest&, const CreateCommodityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommodityAsyncHandler;
			typedef Outcome<Error, Model::DeleteCommodityResult> DeleteCommodityOutcome;
			typedef std::future<DeleteCommodityOutcome> DeleteCommodityOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DeleteCommodityRequest&, const DeleteCommodityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCommodityAsyncHandler;
			typedef Outcome<Error, Model::UpdateCommodityResult> UpdateCommodityOutcome;
			typedef std::future<UpdateCommodityOutcome> UpdateCommodityOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::UpdateCommodityRequest&, const UpdateCommodityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCommodityAsyncHandler;
			typedef Outcome<Error, Model::DescribeCommoditiesResult> DescribeCommoditiesOutcome;
			typedef std::future<DescribeCommoditiesOutcome> DescribeCommoditiesOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeCommoditiesRequest&, const DescribeCommoditiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommoditiesAsyncHandler;
			typedef Outcome<Error, Model::UploadCommodityFileResult> UploadCommodityFileOutcome;
			typedef std::future<UploadCommodityFileOutcome> UploadCommodityFileOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::UploadCommodityFileRequest&, const UploadCommodityFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadCommodityFileAsyncHandler;

			MarketClient(const Credentials &credentials, const ClientConfiguration &configuration);
			MarketClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			MarketClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~MarketClient();
			NotifyContractEventOutcome notifyContractEvent(const Model::NotifyContractEventRequest &request)const;
			void notifyContractEventAsync(const Model::NotifyContractEventRequest& request, const NotifyContractEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			NotifyContractEventOutcomeCallable notifyContractEventCallable(const Model::NotifyContractEventRequest& request) const;
			PushMeteringDataOutcome pushMeteringData(const Model::PushMeteringDataRequest &request)const;
			void pushMeteringDataAsync(const Model::PushMeteringDataRequest& request, const PushMeteringDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushMeteringDataOutcomeCallable pushMeteringDataCallable(const Model::PushMeteringDataRequest& request) const;
			DescribeOrderOutcome describeOrder(const Model::DescribeOrderRequest &request)const;
			void describeOrderAsync(const Model::DescribeOrderRequest& request, const DescribeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrderOutcomeCallable describeOrderCallable(const Model::DescribeOrderRequest& request) const;
			BindImagePackageOutcome bindImagePackage(const Model::BindImagePackageRequest &request)const;
			void bindImagePackageAsync(const Model::BindImagePackageRequest& request, const BindImagePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindImagePackageOutcomeCallable bindImagePackageCallable(const Model::BindImagePackageRequest& request) const;
			QueryMarketImagesOutcome queryMarketImages(const Model::QueryMarketImagesRequest &request)const;
			void queryMarketImagesAsync(const Model::QueryMarketImagesRequest& request, const QueryMarketImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMarketImagesOutcomeCallable queryMarketImagesCallable(const Model::QueryMarketImagesRequest& request) const;
			DescribeProductsOutcome describeProducts(const Model::DescribeProductsRequest &request)const;
			void describeProductsAsync(const Model::DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProductsOutcomeCallable describeProductsCallable(const Model::DescribeProductsRequest& request) const;
			CreateOrderOutcome createOrder(const Model::CreateOrderRequest &request)const;
			void createOrderAsync(const Model::CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderOutcomeCallable createOrderCallable(const Model::CreateOrderRequest& request) const;
			DescribePriceOutcome describePrice(const Model::DescribePriceRequest &request)const;
			void describePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePriceOutcomeCallable describePriceCallable(const Model::DescribePriceRequest& request) const;
			DescribeRateOutcome describeRate(const Model::DescribeRateRequest &request)const;
			void describeRateAsync(const Model::DescribeRateRequest& request, const DescribeRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRateOutcomeCallable describeRateCallable(const Model::DescribeRateRequest& request) const;
			QueryMarketCategoriesOutcome queryMarketCategories(const Model::QueryMarketCategoriesRequest &request)const;
			void queryMarketCategoriesAsync(const Model::QueryMarketCategoriesRequest& request, const QueryMarketCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMarketCategoriesOutcomeCallable queryMarketCategoriesCallable(const Model::QueryMarketCategoriesRequest& request) const;
			CreateRateOutcome createRate(const Model::CreateRateRequest &request)const;
			void createRateAsync(const Model::CreateRateRequest& request, const CreateRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRateOutcomeCallable createRateCallable(const Model::CreateRateRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeLicenseOutcome describeLicense(const Model::DescribeLicenseRequest &request)const;
			void describeLicenseAsync(const Model::DescribeLicenseRequest& request, const DescribeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLicenseOutcomeCallable describeLicenseCallable(const Model::DescribeLicenseRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			ActivateLicenseOutcome activateLicense(const Model::ActivateLicenseRequest &request)const;
			void activateLicenseAsync(const Model::ActivateLicenseRequest& request, const ActivateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateLicenseOutcomeCallable activateLicenseCallable(const Model::ActivateLicenseRequest& request) const;
			DescribeCommodityOutcome describeCommodity(const Model::DescribeCommodityRequest &request)const;
			void describeCommodityAsync(const Model::DescribeCommodityRequest& request, const DescribeCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommodityOutcomeCallable describeCommodityCallable(const Model::DescribeCommodityRequest& request) const;
			DescribeProductOutcome describeProduct(const Model::DescribeProductRequest &request)const;
			void describeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProductOutcomeCallable describeProductCallable(const Model::DescribeProductRequest& request) const;
			CreateCommodityOutcome createCommodity(const Model::CreateCommodityRequest &request)const;
			void createCommodityAsync(const Model::CreateCommodityRequest& request, const CreateCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCommodityOutcomeCallable createCommodityCallable(const Model::CreateCommodityRequest& request) const;
			DeleteCommodityOutcome deleteCommodity(const Model::DeleteCommodityRequest &request)const;
			void deleteCommodityAsync(const Model::DeleteCommodityRequest& request, const DeleteCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCommodityOutcomeCallable deleteCommodityCallable(const Model::DeleteCommodityRequest& request) const;
			UpdateCommodityOutcome updateCommodity(const Model::UpdateCommodityRequest &request)const;
			void updateCommodityAsync(const Model::UpdateCommodityRequest& request, const UpdateCommodityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCommodityOutcomeCallable updateCommodityCallable(const Model::UpdateCommodityRequest& request) const;
			DescribeCommoditiesOutcome describeCommodities(const Model::DescribeCommoditiesRequest &request)const;
			void describeCommoditiesAsync(const Model::DescribeCommoditiesRequest& request, const DescribeCommoditiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCommoditiesOutcomeCallable describeCommoditiesCallable(const Model::DescribeCommoditiesRequest& request) const;
			UploadCommodityFileOutcome uploadCommodityFile(const Model::UploadCommodityFileRequest &request)const;
			void uploadCommodityFileAsync(const Model::UploadCommodityFileRequest& request, const UploadCommodityFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadCommodityFileOutcomeCallable uploadCommodityFileCallable(const Model::UploadCommodityFileRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_MARKET_MARKETCLIENT_H_
