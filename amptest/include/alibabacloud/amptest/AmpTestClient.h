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

#ifndef ALIBABACLOUD_AMPTEST_AMPTESTCLIENT_H_
#define ALIBABACLOUD_AMPTEST_AMPTESTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AmpTestExport.h"
#include "model/CreateRulesRequest.h"
#include "model/CreateRulesResult.h"
#include "model/HuichengTestGrayRequest.h"
#include "model/HuichengTestGrayResult.h"
#include "model/HuichengTestGrayEightRequest.h"
#include "model/HuichengTestGrayEightResult.h"
#include "model/HuichengTestGrayFifthRequest.h"
#include "model/HuichengTestGrayFifthResult.h"
#include "model/HuichengTestGrayNineRequest.h"
#include "model/HuichengTestGrayNineResult.h"
#include "model/HuichengTestGraySecondRequest.h"
#include "model/HuichengTestGraySecondResult.h"
#include "model/HuichengTestGraySevenRequest.h"
#include "model/HuichengTestGraySevenResult.h"
#include "model/HuichengTestGraySixRequest.h"
#include "model/HuichengTestGraySixResult.h"
#include "model/HuichengTestGrayTenRequest.h"
#include "model/HuichengTestGrayTenResult.h"
#include "model/HuichengTestGrayThirdRequest.h"
#include "model/HuichengTestGrayThirdResult.h"
#include "model/HuichengTestResourceOwnerIdRequest.h"
#include "model/HuichengTestResourceOwnerIdResult.h"
#include "model/HuichengetRequest.h"
#include "model/HuichengetResult.h"
#include "model/HuichengetestRequest.h"
#include "model/HuichengetestResult.h"


namespace AlibabaCloud
{
	namespace AmpTest
	{
		class ALIBABACLOUD_AMPTEST_EXPORT AmpTestClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateRulesResult> CreateRulesOutcome;
			typedef std::future<CreateRulesOutcome> CreateRulesOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::CreateRulesRequest&, const CreateRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRulesAsyncHandler;
			typedef Outcome<Error, Model::HuichengTestGrayResult> HuichengTestGrayOutcome;
			typedef std::future<HuichengTestGrayOutcome> HuichengTestGrayOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengTestGrayRequest&, const HuichengTestGrayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengTestGrayAsyncHandler;
			typedef Outcome<Error, Model::HuichengTestGrayEightResult> HuichengTestGrayEightOutcome;
			typedef std::future<HuichengTestGrayEightOutcome> HuichengTestGrayEightOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengTestGrayEightRequest&, const HuichengTestGrayEightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengTestGrayEightAsyncHandler;
			typedef Outcome<Error, Model::HuichengTestGrayFifthResult> HuichengTestGrayFifthOutcome;
			typedef std::future<HuichengTestGrayFifthOutcome> HuichengTestGrayFifthOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengTestGrayFifthRequest&, const HuichengTestGrayFifthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengTestGrayFifthAsyncHandler;
			typedef Outcome<Error, Model::HuichengTestGrayNineResult> HuichengTestGrayNineOutcome;
			typedef std::future<HuichengTestGrayNineOutcome> HuichengTestGrayNineOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengTestGrayNineRequest&, const HuichengTestGrayNineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengTestGrayNineAsyncHandler;
			typedef Outcome<Error, Model::HuichengTestGraySecondResult> HuichengTestGraySecondOutcome;
			typedef std::future<HuichengTestGraySecondOutcome> HuichengTestGraySecondOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengTestGraySecondRequest&, const HuichengTestGraySecondOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengTestGraySecondAsyncHandler;
			typedef Outcome<Error, Model::HuichengTestGraySevenResult> HuichengTestGraySevenOutcome;
			typedef std::future<HuichengTestGraySevenOutcome> HuichengTestGraySevenOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengTestGraySevenRequest&, const HuichengTestGraySevenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengTestGraySevenAsyncHandler;
			typedef Outcome<Error, Model::HuichengTestGraySixResult> HuichengTestGraySixOutcome;
			typedef std::future<HuichengTestGraySixOutcome> HuichengTestGraySixOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengTestGraySixRequest&, const HuichengTestGraySixOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengTestGraySixAsyncHandler;
			typedef Outcome<Error, Model::HuichengTestGrayTenResult> HuichengTestGrayTenOutcome;
			typedef std::future<HuichengTestGrayTenOutcome> HuichengTestGrayTenOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengTestGrayTenRequest&, const HuichengTestGrayTenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengTestGrayTenAsyncHandler;
			typedef Outcome<Error, Model::HuichengTestGrayThirdResult> HuichengTestGrayThirdOutcome;
			typedef std::future<HuichengTestGrayThirdOutcome> HuichengTestGrayThirdOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengTestGrayThirdRequest&, const HuichengTestGrayThirdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengTestGrayThirdAsyncHandler;
			typedef Outcome<Error, Model::HuichengTestResourceOwnerIdResult> HuichengTestResourceOwnerIdOutcome;
			typedef std::future<HuichengTestResourceOwnerIdOutcome> HuichengTestResourceOwnerIdOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengTestResourceOwnerIdRequest&, const HuichengTestResourceOwnerIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengTestResourceOwnerIdAsyncHandler;
			typedef Outcome<Error, Model::HuichengetResult> HuichengetOutcome;
			typedef std::future<HuichengetOutcome> HuichengetOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengetRequest&, const HuichengetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengetAsyncHandler;
			typedef Outcome<Error, Model::HuichengetestResult> HuichengetestOutcome;
			typedef std::future<HuichengetestOutcome> HuichengetestOutcomeCallable;
			typedef std::function<void(const AmpTestClient*, const Model::HuichengetestRequest&, const HuichengetestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HuichengetestAsyncHandler;

			AmpTestClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AmpTestClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AmpTestClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AmpTestClient();
			CreateRulesOutcome createRules(const Model::CreateRulesRequest &request)const;
			void createRulesAsync(const Model::CreateRulesRequest& request, const CreateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRulesOutcomeCallable createRulesCallable(const Model::CreateRulesRequest& request) const;
			HuichengTestGrayOutcome huichengTestGray(const Model::HuichengTestGrayRequest &request)const;
			void huichengTestGrayAsync(const Model::HuichengTestGrayRequest& request, const HuichengTestGrayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengTestGrayOutcomeCallable huichengTestGrayCallable(const Model::HuichengTestGrayRequest& request) const;
			HuichengTestGrayEightOutcome huichengTestGrayEight(const Model::HuichengTestGrayEightRequest &request)const;
			void huichengTestGrayEightAsync(const Model::HuichengTestGrayEightRequest& request, const HuichengTestGrayEightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengTestGrayEightOutcomeCallable huichengTestGrayEightCallable(const Model::HuichengTestGrayEightRequest& request) const;
			HuichengTestGrayFifthOutcome huichengTestGrayFifth(const Model::HuichengTestGrayFifthRequest &request)const;
			void huichengTestGrayFifthAsync(const Model::HuichengTestGrayFifthRequest& request, const HuichengTestGrayFifthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengTestGrayFifthOutcomeCallable huichengTestGrayFifthCallable(const Model::HuichengTestGrayFifthRequest& request) const;
			HuichengTestGrayNineOutcome huichengTestGrayNine(const Model::HuichengTestGrayNineRequest &request)const;
			void huichengTestGrayNineAsync(const Model::HuichengTestGrayNineRequest& request, const HuichengTestGrayNineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengTestGrayNineOutcomeCallable huichengTestGrayNineCallable(const Model::HuichengTestGrayNineRequest& request) const;
			HuichengTestGraySecondOutcome huichengTestGraySecond(const Model::HuichengTestGraySecondRequest &request)const;
			void huichengTestGraySecondAsync(const Model::HuichengTestGraySecondRequest& request, const HuichengTestGraySecondAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengTestGraySecondOutcomeCallable huichengTestGraySecondCallable(const Model::HuichengTestGraySecondRequest& request) const;
			HuichengTestGraySevenOutcome huichengTestGraySeven(const Model::HuichengTestGraySevenRequest &request)const;
			void huichengTestGraySevenAsync(const Model::HuichengTestGraySevenRequest& request, const HuichengTestGraySevenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengTestGraySevenOutcomeCallable huichengTestGraySevenCallable(const Model::HuichengTestGraySevenRequest& request) const;
			HuichengTestGraySixOutcome huichengTestGraySix(const Model::HuichengTestGraySixRequest &request)const;
			void huichengTestGraySixAsync(const Model::HuichengTestGraySixRequest& request, const HuichengTestGraySixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengTestGraySixOutcomeCallable huichengTestGraySixCallable(const Model::HuichengTestGraySixRequest& request) const;
			HuichengTestGrayTenOutcome huichengTestGrayTen(const Model::HuichengTestGrayTenRequest &request)const;
			void huichengTestGrayTenAsync(const Model::HuichengTestGrayTenRequest& request, const HuichengTestGrayTenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengTestGrayTenOutcomeCallable huichengTestGrayTenCallable(const Model::HuichengTestGrayTenRequest& request) const;
			HuichengTestGrayThirdOutcome huichengTestGrayThird(const Model::HuichengTestGrayThirdRequest &request)const;
			void huichengTestGrayThirdAsync(const Model::HuichengTestGrayThirdRequest& request, const HuichengTestGrayThirdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengTestGrayThirdOutcomeCallable huichengTestGrayThirdCallable(const Model::HuichengTestGrayThirdRequest& request) const;
			HuichengTestResourceOwnerIdOutcome huichengTestResourceOwnerId(const Model::HuichengTestResourceOwnerIdRequest &request)const;
			void huichengTestResourceOwnerIdAsync(const Model::HuichengTestResourceOwnerIdRequest& request, const HuichengTestResourceOwnerIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengTestResourceOwnerIdOutcomeCallable huichengTestResourceOwnerIdCallable(const Model::HuichengTestResourceOwnerIdRequest& request) const;
			HuichengetOutcome huichenget(const Model::HuichengetRequest &request)const;
			void huichengetAsync(const Model::HuichengetRequest& request, const HuichengetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengetOutcomeCallable huichengetCallable(const Model::HuichengetRequest& request) const;
			HuichengetestOutcome huichengetest(const Model::HuichengetestRequest &request)const;
			void huichengetestAsync(const Model::HuichengetestRequest& request, const HuichengetestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HuichengetestOutcomeCallable huichengetestCallable(const Model::HuichengetestRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_AMPTEST_AMPTESTCLIENT_H_
