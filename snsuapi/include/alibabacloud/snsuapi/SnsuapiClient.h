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

#ifndef ALIBABACLOUD_SNSUAPI_SNSUAPICLIENT_H_
#define ALIBABACLOUD_SNSUAPI_SNSUAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SnsuapiExport.h"
#include "model/BandOfferOrderRequest.h"
#include "model/BandOfferOrderResult.h"
#include "model/BandPrecheckRequest.h"
#include "model/BandPrecheckResult.h"
#include "model/BandStartSpeedUpRequest.h"
#include "model/BandStartSpeedUpResult.h"
#include "model/BandStatusQueryRequest.h"
#include "model/BandStatusQueryResult.h"
#include "model/BandStopSpeedUpRequest.h"
#include "model/BandStopSpeedUpResult.h"
#include "model/MobileStartSpeedUpRequest.h"
#include "model/MobileStartSpeedUpResult.h"
#include "model/MobileStatusQueryRequest.h"
#include "model/MobileStatusQueryResult.h"
#include "model/MobileStopSpeedUpRequest.h"
#include "model/MobileStopSpeedUpResult.h"


namespace AlibabaCloud
{
	namespace Snsuapi
	{
		class ALIBABACLOUD_SNSUAPI_EXPORT SnsuapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BandOfferOrderResult> BandOfferOrderOutcome;
			typedef std::future<BandOfferOrderOutcome> BandOfferOrderOutcomeCallable;
			typedef std::function<void(const SnsuapiClient*, const Model::BandOfferOrderRequest&, const BandOfferOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BandOfferOrderAsyncHandler;
			typedef Outcome<Error, Model::BandPrecheckResult> BandPrecheckOutcome;
			typedef std::future<BandPrecheckOutcome> BandPrecheckOutcomeCallable;
			typedef std::function<void(const SnsuapiClient*, const Model::BandPrecheckRequest&, const BandPrecheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BandPrecheckAsyncHandler;
			typedef Outcome<Error, Model::BandStartSpeedUpResult> BandStartSpeedUpOutcome;
			typedef std::future<BandStartSpeedUpOutcome> BandStartSpeedUpOutcomeCallable;
			typedef std::function<void(const SnsuapiClient*, const Model::BandStartSpeedUpRequest&, const BandStartSpeedUpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BandStartSpeedUpAsyncHandler;
			typedef Outcome<Error, Model::BandStatusQueryResult> BandStatusQueryOutcome;
			typedef std::future<BandStatusQueryOutcome> BandStatusQueryOutcomeCallable;
			typedef std::function<void(const SnsuapiClient*, const Model::BandStatusQueryRequest&, const BandStatusQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BandStatusQueryAsyncHandler;
			typedef Outcome<Error, Model::BandStopSpeedUpResult> BandStopSpeedUpOutcome;
			typedef std::future<BandStopSpeedUpOutcome> BandStopSpeedUpOutcomeCallable;
			typedef std::function<void(const SnsuapiClient*, const Model::BandStopSpeedUpRequest&, const BandStopSpeedUpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BandStopSpeedUpAsyncHandler;
			typedef Outcome<Error, Model::MobileStartSpeedUpResult> MobileStartSpeedUpOutcome;
			typedef std::future<MobileStartSpeedUpOutcome> MobileStartSpeedUpOutcomeCallable;
			typedef std::function<void(const SnsuapiClient*, const Model::MobileStartSpeedUpRequest&, const MobileStartSpeedUpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MobileStartSpeedUpAsyncHandler;
			typedef Outcome<Error, Model::MobileStatusQueryResult> MobileStatusQueryOutcome;
			typedef std::future<MobileStatusQueryOutcome> MobileStatusQueryOutcomeCallable;
			typedef std::function<void(const SnsuapiClient*, const Model::MobileStatusQueryRequest&, const MobileStatusQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MobileStatusQueryAsyncHandler;
			typedef Outcome<Error, Model::MobileStopSpeedUpResult> MobileStopSpeedUpOutcome;
			typedef std::future<MobileStopSpeedUpOutcome> MobileStopSpeedUpOutcomeCallable;
			typedef std::function<void(const SnsuapiClient*, const Model::MobileStopSpeedUpRequest&, const MobileStopSpeedUpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MobileStopSpeedUpAsyncHandler;

			SnsuapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SnsuapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SnsuapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SnsuapiClient();
			BandOfferOrderOutcome bandOfferOrder(const Model::BandOfferOrderRequest &request)const;
			void bandOfferOrderAsync(const Model::BandOfferOrderRequest& request, const BandOfferOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BandOfferOrderOutcomeCallable bandOfferOrderCallable(const Model::BandOfferOrderRequest& request) const;
			BandPrecheckOutcome bandPrecheck(const Model::BandPrecheckRequest &request)const;
			void bandPrecheckAsync(const Model::BandPrecheckRequest& request, const BandPrecheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BandPrecheckOutcomeCallable bandPrecheckCallable(const Model::BandPrecheckRequest& request) const;
			BandStartSpeedUpOutcome bandStartSpeedUp(const Model::BandStartSpeedUpRequest &request)const;
			void bandStartSpeedUpAsync(const Model::BandStartSpeedUpRequest& request, const BandStartSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BandStartSpeedUpOutcomeCallable bandStartSpeedUpCallable(const Model::BandStartSpeedUpRequest& request) const;
			BandStatusQueryOutcome bandStatusQuery(const Model::BandStatusQueryRequest &request)const;
			void bandStatusQueryAsync(const Model::BandStatusQueryRequest& request, const BandStatusQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BandStatusQueryOutcomeCallable bandStatusQueryCallable(const Model::BandStatusQueryRequest& request) const;
			BandStopSpeedUpOutcome bandStopSpeedUp(const Model::BandStopSpeedUpRequest &request)const;
			void bandStopSpeedUpAsync(const Model::BandStopSpeedUpRequest& request, const BandStopSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BandStopSpeedUpOutcomeCallable bandStopSpeedUpCallable(const Model::BandStopSpeedUpRequest& request) const;
			MobileStartSpeedUpOutcome mobileStartSpeedUp(const Model::MobileStartSpeedUpRequest &request)const;
			void mobileStartSpeedUpAsync(const Model::MobileStartSpeedUpRequest& request, const MobileStartSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MobileStartSpeedUpOutcomeCallable mobileStartSpeedUpCallable(const Model::MobileStartSpeedUpRequest& request) const;
			MobileStatusQueryOutcome mobileStatusQuery(const Model::MobileStatusQueryRequest &request)const;
			void mobileStatusQueryAsync(const Model::MobileStatusQueryRequest& request, const MobileStatusQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MobileStatusQueryOutcomeCallable mobileStatusQueryCallable(const Model::MobileStatusQueryRequest& request) const;
			MobileStopSpeedUpOutcome mobileStopSpeedUp(const Model::MobileStopSpeedUpRequest &request)const;
			void mobileStopSpeedUpAsync(const Model::MobileStopSpeedUpRequest& request, const MobileStopSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MobileStopSpeedUpOutcomeCallable mobileStopSpeedUpCallable(const Model::MobileStopSpeedUpRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SNSUAPI_SNSUAPICLIENT_H_
