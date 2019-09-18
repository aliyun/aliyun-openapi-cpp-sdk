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

#ifndef ALIBABACLOUD_YUNDUN_YUNDUNCLIENT_H_
#define ALIBABACLOUD_YUNDUN_YUNDUNCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "YundunExport.h"
#include "model/AllMalwareNumRequest.h"
#include "model/AllMalwareNumResult.h"
#include "model/CurrentDdosAttackNumRequest.h"
#include "model/CurrentDdosAttackNumResult.h"
#include "model/TodayAegisOnlineRateRequest.h"
#include "model/TodayAegisOnlineRateResult.h"
#include "model/TodayAllkbpsRequest.h"
#include "model/TodayAllkbpsResult.h"
#include "model/TodayAllppsRequest.h"
#include "model/TodayAllppsResult.h"
#include "model/TodayBackdoorRequest.h"
#include "model/TodayBackdoorResult.h"
#include "model/TodayCrackInterceptRequest.h"
#include "model/TodayCrackInterceptResult.h"
#include "model/TodayMalwareNumRequest.h"
#include "model/TodayMalwareNumResult.h"
#include "model/TodayqpsByRegionRequest.h"
#include "model/TodayqpsByRegionResult.h"
#include "model/WebAttackNumRequest.h"
#include "model/WebAttackNumResult.h"


namespace AlibabaCloud
{
	namespace Yundun
	{
		class ALIBABACLOUD_YUNDUN_EXPORT YundunClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AllMalwareNumResult> AllMalwareNumOutcome;
			typedef std::future<AllMalwareNumOutcome> AllMalwareNumOutcomeCallable;
			typedef std::function<void(const YundunClient*, const Model::AllMalwareNumRequest&, const AllMalwareNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllMalwareNumAsyncHandler;
			typedef Outcome<Error, Model::CurrentDdosAttackNumResult> CurrentDdosAttackNumOutcome;
			typedef std::future<CurrentDdosAttackNumOutcome> CurrentDdosAttackNumOutcomeCallable;
			typedef std::function<void(const YundunClient*, const Model::CurrentDdosAttackNumRequest&, const CurrentDdosAttackNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CurrentDdosAttackNumAsyncHandler;
			typedef Outcome<Error, Model::TodayAegisOnlineRateResult> TodayAegisOnlineRateOutcome;
			typedef std::future<TodayAegisOnlineRateOutcome> TodayAegisOnlineRateOutcomeCallable;
			typedef std::function<void(const YundunClient*, const Model::TodayAegisOnlineRateRequest&, const TodayAegisOnlineRateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TodayAegisOnlineRateAsyncHandler;
			typedef Outcome<Error, Model::TodayAllkbpsResult> TodayAllkbpsOutcome;
			typedef std::future<TodayAllkbpsOutcome> TodayAllkbpsOutcomeCallable;
			typedef std::function<void(const YundunClient*, const Model::TodayAllkbpsRequest&, const TodayAllkbpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TodayAllkbpsAsyncHandler;
			typedef Outcome<Error, Model::TodayAllppsResult> TodayAllppsOutcome;
			typedef std::future<TodayAllppsOutcome> TodayAllppsOutcomeCallable;
			typedef std::function<void(const YundunClient*, const Model::TodayAllppsRequest&, const TodayAllppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TodayAllppsAsyncHandler;
			typedef Outcome<Error, Model::TodayBackdoorResult> TodayBackdoorOutcome;
			typedef std::future<TodayBackdoorOutcome> TodayBackdoorOutcomeCallable;
			typedef std::function<void(const YundunClient*, const Model::TodayBackdoorRequest&, const TodayBackdoorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TodayBackdoorAsyncHandler;
			typedef Outcome<Error, Model::TodayCrackInterceptResult> TodayCrackInterceptOutcome;
			typedef std::future<TodayCrackInterceptOutcome> TodayCrackInterceptOutcomeCallable;
			typedef std::function<void(const YundunClient*, const Model::TodayCrackInterceptRequest&, const TodayCrackInterceptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TodayCrackInterceptAsyncHandler;
			typedef Outcome<Error, Model::TodayMalwareNumResult> TodayMalwareNumOutcome;
			typedef std::future<TodayMalwareNumOutcome> TodayMalwareNumOutcomeCallable;
			typedef std::function<void(const YundunClient*, const Model::TodayMalwareNumRequest&, const TodayMalwareNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TodayMalwareNumAsyncHandler;
			typedef Outcome<Error, Model::TodayqpsByRegionResult> TodayqpsByRegionOutcome;
			typedef std::future<TodayqpsByRegionOutcome> TodayqpsByRegionOutcomeCallable;
			typedef std::function<void(const YundunClient*, const Model::TodayqpsByRegionRequest&, const TodayqpsByRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TodayqpsByRegionAsyncHandler;
			typedef Outcome<Error, Model::WebAttackNumResult> WebAttackNumOutcome;
			typedef std::future<WebAttackNumOutcome> WebAttackNumOutcomeCallable;
			typedef std::function<void(const YundunClient*, const Model::WebAttackNumRequest&, const WebAttackNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WebAttackNumAsyncHandler;

			YundunClient(const Credentials &credentials, const ClientConfiguration &configuration);
			YundunClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			YundunClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~YundunClient();
			AllMalwareNumOutcome allMalwareNum(const Model::AllMalwareNumRequest &request)const;
			void allMalwareNumAsync(const Model::AllMalwareNumRequest& request, const AllMalwareNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllMalwareNumOutcomeCallable allMalwareNumCallable(const Model::AllMalwareNumRequest& request) const;
			CurrentDdosAttackNumOutcome currentDdosAttackNum(const Model::CurrentDdosAttackNumRequest &request)const;
			void currentDdosAttackNumAsync(const Model::CurrentDdosAttackNumRequest& request, const CurrentDdosAttackNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CurrentDdosAttackNumOutcomeCallable currentDdosAttackNumCallable(const Model::CurrentDdosAttackNumRequest& request) const;
			TodayAegisOnlineRateOutcome todayAegisOnlineRate(const Model::TodayAegisOnlineRateRequest &request)const;
			void todayAegisOnlineRateAsync(const Model::TodayAegisOnlineRateRequest& request, const TodayAegisOnlineRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TodayAegisOnlineRateOutcomeCallable todayAegisOnlineRateCallable(const Model::TodayAegisOnlineRateRequest& request) const;
			TodayAllkbpsOutcome todayAllkbps(const Model::TodayAllkbpsRequest &request)const;
			void todayAllkbpsAsync(const Model::TodayAllkbpsRequest& request, const TodayAllkbpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TodayAllkbpsOutcomeCallable todayAllkbpsCallable(const Model::TodayAllkbpsRequest& request) const;
			TodayAllppsOutcome todayAllpps(const Model::TodayAllppsRequest &request)const;
			void todayAllppsAsync(const Model::TodayAllppsRequest& request, const TodayAllppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TodayAllppsOutcomeCallable todayAllppsCallable(const Model::TodayAllppsRequest& request) const;
			TodayBackdoorOutcome todayBackdoor(const Model::TodayBackdoorRequest &request)const;
			void todayBackdoorAsync(const Model::TodayBackdoorRequest& request, const TodayBackdoorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TodayBackdoorOutcomeCallable todayBackdoorCallable(const Model::TodayBackdoorRequest& request) const;
			TodayCrackInterceptOutcome todayCrackIntercept(const Model::TodayCrackInterceptRequest &request)const;
			void todayCrackInterceptAsync(const Model::TodayCrackInterceptRequest& request, const TodayCrackInterceptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TodayCrackInterceptOutcomeCallable todayCrackInterceptCallable(const Model::TodayCrackInterceptRequest& request) const;
			TodayMalwareNumOutcome todayMalwareNum(const Model::TodayMalwareNumRequest &request)const;
			void todayMalwareNumAsync(const Model::TodayMalwareNumRequest& request, const TodayMalwareNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TodayMalwareNumOutcomeCallable todayMalwareNumCallable(const Model::TodayMalwareNumRequest& request) const;
			TodayqpsByRegionOutcome todayqpsByRegion(const Model::TodayqpsByRegionRequest &request)const;
			void todayqpsByRegionAsync(const Model::TodayqpsByRegionRequest& request, const TodayqpsByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TodayqpsByRegionOutcomeCallable todayqpsByRegionCallable(const Model::TodayqpsByRegionRequest& request) const;
			WebAttackNumOutcome webAttackNum(const Model::WebAttackNumRequest &request)const;
			void webAttackNumAsync(const Model::WebAttackNumRequest& request, const WebAttackNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WebAttackNumOutcomeCallable webAttackNumCallable(const Model::WebAttackNumRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_YUNDUN_YUNDUNCLIENT_H_
