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
#include "model/ActivateLicenseRequest.h"
#include "model/ActivateLicenseResult.h"
#include "model/AutoRenewInstanceRequest.h"
#include "model/AutoRenewInstanceResult.h"
#include "model/CreateOrderRequest.h"
#include "model/CreateOrderResult.h"
#include "model/CrossAccountVerifyTokenRequest.h"
#include "model/CrossAccountVerifyTokenResult.h"
#include "model/DescribeApiMeteringRequest.h"
#include "model/DescribeApiMeteringResult.h"
#include "model/DescribeCurrentNodeInfoRequest.h"
#include "model/DescribeCurrentNodeInfoResult.h"
#include "model/DescribeDistributionProductsRequest.h"
#include "model/DescribeDistributionProductsResult.h"
#include "model/DescribeDistributionProductsLinkRequest.h"
#include "model/DescribeDistributionProductsLinkResult.h"
#include "model/DescribeInstanceRequest.h"
#include "model/DescribeInstanceResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeLicenseRequest.h"
#include "model/DescribeLicenseResult.h"
#include "model/DescribeOrderRequest.h"
#include "model/DescribeOrderResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"
#include "model/DescribeProductRequest.h"
#include "model/DescribeProductResult.h"
#include "model/DescribeProductsRequest.h"
#include "model/DescribeProductsResult.h"
#include "model/DescribeProjectAttachmentsRequest.h"
#include "model/DescribeProjectAttachmentsResult.h"
#include "model/DescribeProjectInfoRequest.h"
#include "model/DescribeProjectInfoResult.h"
#include "model/DescribeProjectMessagesRequest.h"
#include "model/DescribeProjectMessagesResult.h"
#include "model/DescribeProjectNodesRequest.h"
#include "model/DescribeProjectNodesResult.h"
#include "model/DescribeProjectOperateLogsRequest.h"
#include "model/DescribeProjectOperateLogsResult.h"
#include "model/FinishCurrentProjectNodeRequest.h"
#include "model/FinishCurrentProjectNodeResult.h"
#include "model/PauseProjectRequest.h"
#include "model/PauseProjectResult.h"
#include "model/PushMeteringDataRequest.h"
#include "model/PushMeteringDataResult.h"
#include "model/ResumeProjectRequest.h"
#include "model/ResumeProjectResult.h"
#include "model/RollbackCurrentProjectNodeRequest.h"
#include "model/RollbackCurrentProjectNodeResult.h"


namespace AlibabaCloud
{
	namespace Market
	{
		class ALIBABACLOUD_MARKET_EXPORT MarketClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateLicenseResult> ActivateLicenseOutcome;
			typedef std::future<ActivateLicenseOutcome> ActivateLicenseOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::ActivateLicenseRequest&, const ActivateLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateLicenseAsyncHandler;
			typedef Outcome<Error, Model::AutoRenewInstanceResult> AutoRenewInstanceOutcome;
			typedef std::future<AutoRenewInstanceOutcome> AutoRenewInstanceOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::AutoRenewInstanceRequest&, const AutoRenewInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AutoRenewInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderResult> CreateOrderOutcome;
			typedef std::future<CreateOrderOutcome> CreateOrderOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::CreateOrderRequest&, const CreateOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderAsyncHandler;
			typedef Outcome<Error, Model::CrossAccountVerifyTokenResult> CrossAccountVerifyTokenOutcome;
			typedef std::future<CrossAccountVerifyTokenOutcome> CrossAccountVerifyTokenOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::CrossAccountVerifyTokenRequest&, const CrossAccountVerifyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CrossAccountVerifyTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiMeteringResult> DescribeApiMeteringOutcome;
			typedef std::future<DescribeApiMeteringOutcome> DescribeApiMeteringOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeApiMeteringRequest&, const DescribeApiMeteringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiMeteringAsyncHandler;
			typedef Outcome<Error, Model::DescribeCurrentNodeInfoResult> DescribeCurrentNodeInfoOutcome;
			typedef std::future<DescribeCurrentNodeInfoOutcome> DescribeCurrentNodeInfoOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeCurrentNodeInfoRequest&, const DescribeCurrentNodeInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCurrentNodeInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDistributionProductsResult> DescribeDistributionProductsOutcome;
			typedef std::future<DescribeDistributionProductsOutcome> DescribeDistributionProductsOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeDistributionProductsRequest&, const DescribeDistributionProductsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDistributionProductsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDistributionProductsLinkResult> DescribeDistributionProductsLinkOutcome;
			typedef std::future<DescribeDistributionProductsLinkOutcome> DescribeDistributionProductsLinkOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeDistributionProductsLinkRequest&, const DescribeDistributionProductsLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDistributionProductsLinkAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceResult> DescribeInstanceOutcome;
			typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeInstanceRequest&, const DescribeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLicenseResult> DescribeLicenseOutcome;
			typedef std::future<DescribeLicenseOutcome> DescribeLicenseOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeLicenseRequest&, const DescribeLicenseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrderResult> DescribeOrderOutcome;
			typedef std::future<DescribeOrderOutcome> DescribeOrderOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeOrderRequest&, const DescribeOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeProductResult> DescribeProductOutcome;
			typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeProductRequest&, const DescribeProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAsyncHandler;
			typedef Outcome<Error, Model::DescribeProductsResult> DescribeProductsOutcome;
			typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeProductsRequest&, const DescribeProductsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductsAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectAttachmentsResult> DescribeProjectAttachmentsOutcome;
			typedef std::future<DescribeProjectAttachmentsOutcome> DescribeProjectAttachmentsOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeProjectAttachmentsRequest&, const DescribeProjectAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAttachmentsAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectInfoResult> DescribeProjectInfoOutcome;
			typedef std::future<DescribeProjectInfoOutcome> DescribeProjectInfoOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeProjectInfoRequest&, const DescribeProjectInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectMessagesResult> DescribeProjectMessagesOutcome;
			typedef std::future<DescribeProjectMessagesOutcome> DescribeProjectMessagesOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeProjectMessagesRequest&, const DescribeProjectMessagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectMessagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectNodesResult> DescribeProjectNodesOutcome;
			typedef std::future<DescribeProjectNodesOutcome> DescribeProjectNodesOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeProjectNodesRequest&, const DescribeProjectNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectNodesAsyncHandler;
			typedef Outcome<Error, Model::DescribeProjectOperateLogsResult> DescribeProjectOperateLogsOutcome;
			typedef std::future<DescribeProjectOperateLogsOutcome> DescribeProjectOperateLogsOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::DescribeProjectOperateLogsRequest&, const DescribeProjectOperateLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectOperateLogsAsyncHandler;
			typedef Outcome<Error, Model::FinishCurrentProjectNodeResult> FinishCurrentProjectNodeOutcome;
			typedef std::future<FinishCurrentProjectNodeOutcome> FinishCurrentProjectNodeOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::FinishCurrentProjectNodeRequest&, const FinishCurrentProjectNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FinishCurrentProjectNodeAsyncHandler;
			typedef Outcome<Error, Model::PauseProjectResult> PauseProjectOutcome;
			typedef std::future<PauseProjectOutcome> PauseProjectOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::PauseProjectRequest&, const PauseProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PauseProjectAsyncHandler;
			typedef Outcome<Error, Model::PushMeteringDataResult> PushMeteringDataOutcome;
			typedef std::future<PushMeteringDataOutcome> PushMeteringDataOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::PushMeteringDataRequest&, const PushMeteringDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PushMeteringDataAsyncHandler;
			typedef Outcome<Error, Model::ResumeProjectResult> ResumeProjectOutcome;
			typedef std::future<ResumeProjectOutcome> ResumeProjectOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::ResumeProjectRequest&, const ResumeProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeProjectAsyncHandler;
			typedef Outcome<Error, Model::RollbackCurrentProjectNodeResult> RollbackCurrentProjectNodeOutcome;
			typedef std::future<RollbackCurrentProjectNodeOutcome> RollbackCurrentProjectNodeOutcomeCallable;
			typedef std::function<void(const MarketClient*, const Model::RollbackCurrentProjectNodeRequest&, const RollbackCurrentProjectNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackCurrentProjectNodeAsyncHandler;

			MarketClient(const Credentials &credentials, const ClientConfiguration &configuration);
			MarketClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			MarketClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~MarketClient();
			ActivateLicenseOutcome activateLicense(const Model::ActivateLicenseRequest &request)const;
			void activateLicenseAsync(const Model::ActivateLicenseRequest& request, const ActivateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateLicenseOutcomeCallable activateLicenseCallable(const Model::ActivateLicenseRequest& request) const;
			AutoRenewInstanceOutcome autoRenewInstance(const Model::AutoRenewInstanceRequest &request)const;
			void autoRenewInstanceAsync(const Model::AutoRenewInstanceRequest& request, const AutoRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AutoRenewInstanceOutcomeCallable autoRenewInstanceCallable(const Model::AutoRenewInstanceRequest& request) const;
			CreateOrderOutcome createOrder(const Model::CreateOrderRequest &request)const;
			void createOrderAsync(const Model::CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderOutcomeCallable createOrderCallable(const Model::CreateOrderRequest& request) const;
			CrossAccountVerifyTokenOutcome crossAccountVerifyToken(const Model::CrossAccountVerifyTokenRequest &request)const;
			void crossAccountVerifyTokenAsync(const Model::CrossAccountVerifyTokenRequest& request, const CrossAccountVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CrossAccountVerifyTokenOutcomeCallable crossAccountVerifyTokenCallable(const Model::CrossAccountVerifyTokenRequest& request) const;
			DescribeApiMeteringOutcome describeApiMetering(const Model::DescribeApiMeteringRequest &request)const;
			void describeApiMeteringAsync(const Model::DescribeApiMeteringRequest& request, const DescribeApiMeteringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiMeteringOutcomeCallable describeApiMeteringCallable(const Model::DescribeApiMeteringRequest& request) const;
			DescribeCurrentNodeInfoOutcome describeCurrentNodeInfo(const Model::DescribeCurrentNodeInfoRequest &request)const;
			void describeCurrentNodeInfoAsync(const Model::DescribeCurrentNodeInfoRequest& request, const DescribeCurrentNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCurrentNodeInfoOutcomeCallable describeCurrentNodeInfoCallable(const Model::DescribeCurrentNodeInfoRequest& request) const;
			DescribeDistributionProductsOutcome describeDistributionProducts(const Model::DescribeDistributionProductsRequest &request)const;
			void describeDistributionProductsAsync(const Model::DescribeDistributionProductsRequest& request, const DescribeDistributionProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDistributionProductsOutcomeCallable describeDistributionProductsCallable(const Model::DescribeDistributionProductsRequest& request) const;
			DescribeDistributionProductsLinkOutcome describeDistributionProductsLink(const Model::DescribeDistributionProductsLinkRequest &request)const;
			void describeDistributionProductsLinkAsync(const Model::DescribeDistributionProductsLinkRequest& request, const DescribeDistributionProductsLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDistributionProductsLinkOutcomeCallable describeDistributionProductsLinkCallable(const Model::DescribeDistributionProductsLinkRequest& request) const;
			DescribeInstanceOutcome describeInstance(const Model::DescribeInstanceRequest &request)const;
			void describeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceOutcomeCallable describeInstanceCallable(const Model::DescribeInstanceRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeLicenseOutcome describeLicense(const Model::DescribeLicenseRequest &request)const;
			void describeLicenseAsync(const Model::DescribeLicenseRequest& request, const DescribeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLicenseOutcomeCallable describeLicenseCallable(const Model::DescribeLicenseRequest& request) const;
			DescribeOrderOutcome describeOrder(const Model::DescribeOrderRequest &request)const;
			void describeOrderAsync(const Model::DescribeOrderRequest& request, const DescribeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrderOutcomeCallable describeOrderCallable(const Model::DescribeOrderRequest& request) const;
			DescribePriceOutcome describePrice(const Model::DescribePriceRequest &request)const;
			void describePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePriceOutcomeCallable describePriceCallable(const Model::DescribePriceRequest& request) const;
			DescribeProductOutcome describeProduct(const Model::DescribeProductRequest &request)const;
			void describeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProductOutcomeCallable describeProductCallable(const Model::DescribeProductRequest& request) const;
			DescribeProductsOutcome describeProducts(const Model::DescribeProductsRequest &request)const;
			void describeProductsAsync(const Model::DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProductsOutcomeCallable describeProductsCallable(const Model::DescribeProductsRequest& request) const;
			DescribeProjectAttachmentsOutcome describeProjectAttachments(const Model::DescribeProjectAttachmentsRequest &request)const;
			void describeProjectAttachmentsAsync(const Model::DescribeProjectAttachmentsRequest& request, const DescribeProjectAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectAttachmentsOutcomeCallable describeProjectAttachmentsCallable(const Model::DescribeProjectAttachmentsRequest& request) const;
			DescribeProjectInfoOutcome describeProjectInfo(const Model::DescribeProjectInfoRequest &request)const;
			void describeProjectInfoAsync(const Model::DescribeProjectInfoRequest& request, const DescribeProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectInfoOutcomeCallable describeProjectInfoCallable(const Model::DescribeProjectInfoRequest& request) const;
			DescribeProjectMessagesOutcome describeProjectMessages(const Model::DescribeProjectMessagesRequest &request)const;
			void describeProjectMessagesAsync(const Model::DescribeProjectMessagesRequest& request, const DescribeProjectMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectMessagesOutcomeCallable describeProjectMessagesCallable(const Model::DescribeProjectMessagesRequest& request) const;
			DescribeProjectNodesOutcome describeProjectNodes(const Model::DescribeProjectNodesRequest &request)const;
			void describeProjectNodesAsync(const Model::DescribeProjectNodesRequest& request, const DescribeProjectNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectNodesOutcomeCallable describeProjectNodesCallable(const Model::DescribeProjectNodesRequest& request) const;
			DescribeProjectOperateLogsOutcome describeProjectOperateLogs(const Model::DescribeProjectOperateLogsRequest &request)const;
			void describeProjectOperateLogsAsync(const Model::DescribeProjectOperateLogsRequest& request, const DescribeProjectOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProjectOperateLogsOutcomeCallable describeProjectOperateLogsCallable(const Model::DescribeProjectOperateLogsRequest& request) const;
			FinishCurrentProjectNodeOutcome finishCurrentProjectNode(const Model::FinishCurrentProjectNodeRequest &request)const;
			void finishCurrentProjectNodeAsync(const Model::FinishCurrentProjectNodeRequest& request, const FinishCurrentProjectNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FinishCurrentProjectNodeOutcomeCallable finishCurrentProjectNodeCallable(const Model::FinishCurrentProjectNodeRequest& request) const;
			PauseProjectOutcome pauseProject(const Model::PauseProjectRequest &request)const;
			void pauseProjectAsync(const Model::PauseProjectRequest& request, const PauseProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PauseProjectOutcomeCallable pauseProjectCallable(const Model::PauseProjectRequest& request) const;
			PushMeteringDataOutcome pushMeteringData(const Model::PushMeteringDataRequest &request)const;
			void pushMeteringDataAsync(const Model::PushMeteringDataRequest& request, const PushMeteringDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PushMeteringDataOutcomeCallable pushMeteringDataCallable(const Model::PushMeteringDataRequest& request) const;
			ResumeProjectOutcome resumeProject(const Model::ResumeProjectRequest &request)const;
			void resumeProjectAsync(const Model::ResumeProjectRequest& request, const ResumeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeProjectOutcomeCallable resumeProjectCallable(const Model::ResumeProjectRequest& request) const;
			RollbackCurrentProjectNodeOutcome rollbackCurrentProjectNode(const Model::RollbackCurrentProjectNodeRequest &request)const;
			void rollbackCurrentProjectNodeAsync(const Model::RollbackCurrentProjectNodeRequest& request, const RollbackCurrentProjectNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackCurrentProjectNodeOutcomeCallable rollbackCurrentProjectNodeCallable(const Model::RollbackCurrentProjectNodeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_MARKET_MARKETCLIENT_H_
