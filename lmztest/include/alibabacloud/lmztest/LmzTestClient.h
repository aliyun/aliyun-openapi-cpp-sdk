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

#ifndef ALIBABACLOUD_LMZTEST_LMZTESTCLIENT_H_
#define ALIBABACLOUD_LMZTEST_LMZTESTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "LmzTestExport.h"
#include "model/AAbckRequest.h"
#include "model/AAbckResult.h"
#include "model/AndBackRequest.h"
#include "model/AndBackResult.h"
#include "model/DataRateLimitTestRequest.h"
#include "model/DataRateLimitTestResult.h"
#include "model/DemoGrayReleaseTestRequest.h"
#include "model/DemoGrayReleaseTestResult.h"
#include "model/DemoGrayReleaseTestTwoRequest.h"
#include "model/DemoGrayReleaseTestTwoResult.h"
#include "model/DemoGreyReleaseTestRequest.h"
#include "model/DemoGreyReleaseTestResult.h"
#include "model/DemoHsfNineResponseRequest.h"
#include "model/DemoHsfNineResponseResult.h"
#include "model/DemoHsfSixTestRequest.h"
#include "model/DemoHsfSixTestResult.h"
#include "model/DemoHttpComplexResponseRequest.h"
#include "model/DemoHttpComplexResponseResult.h"
#include "model/DescribeDisksRequest.h"
#include "model/DescribeDisksResult.h"
#include "model/GetPackageStorageCredentialRequest.h"
#include "model/GetPackageStorageCredentialResult.h"
#include "model/GrayReleaseDemoRequest.h"
#include "model/GrayReleaseDemoResult.h"
#include "model/ListProductsByPopCodeRequest.h"
#include "model/ListProductsByPopCodeResult.h"
#include "model/LjxTestRequest.h"
#include "model/LjxTestResult.h"
#include "model/ReqBeanTestRequest.h"
#include "model/ReqBeanTestResult.h"
#include "model/RomeGetExecutionResultRequest.h"
#include "model/RomeGetExecutionResultResult.h"
#include "model/RpcHttpRequest.h"
#include "model/RpcHttpResult.h"
#include "model/TestPutApiAndGetApiRequest.h"
#include "model/TestPutApiAndGetApiResult.h"
#include "model/UpdateListenerRequest.h"
#include "model/UpdateListenerResult.h"


namespace AlibabaCloud
{
	namespace LmzTest
	{
		class ALIBABACLOUD_LMZTEST_EXPORT LmzTestClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AAbckResult> AAbckOutcome;
			typedef std::future<AAbckOutcome> AAbckOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::AAbckRequest&, const AAbckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AAbckAsyncHandler;
			typedef Outcome<Error, Model::AndBackResult> AndBackOutcome;
			typedef std::future<AndBackOutcome> AndBackOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::AndBackRequest&, const AndBackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AndBackAsyncHandler;
			typedef Outcome<Error, Model::DataRateLimitTestResult> DataRateLimitTestOutcome;
			typedef std::future<DataRateLimitTestOutcome> DataRateLimitTestOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::DataRateLimitTestRequest&, const DataRateLimitTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DataRateLimitTestAsyncHandler;
			typedef Outcome<Error, Model::DemoGrayReleaseTestResult> DemoGrayReleaseTestOutcome;
			typedef std::future<DemoGrayReleaseTestOutcome> DemoGrayReleaseTestOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::DemoGrayReleaseTestRequest&, const DemoGrayReleaseTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DemoGrayReleaseTestAsyncHandler;
			typedef Outcome<Error, Model::DemoGrayReleaseTestTwoResult> DemoGrayReleaseTestTwoOutcome;
			typedef std::future<DemoGrayReleaseTestTwoOutcome> DemoGrayReleaseTestTwoOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::DemoGrayReleaseTestTwoRequest&, const DemoGrayReleaseTestTwoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DemoGrayReleaseTestTwoAsyncHandler;
			typedef Outcome<Error, Model::DemoGreyReleaseTestResult> DemoGreyReleaseTestOutcome;
			typedef std::future<DemoGreyReleaseTestOutcome> DemoGreyReleaseTestOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::DemoGreyReleaseTestRequest&, const DemoGreyReleaseTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DemoGreyReleaseTestAsyncHandler;
			typedef Outcome<Error, Model::DemoHsfNineResponseResult> DemoHsfNineResponseOutcome;
			typedef std::future<DemoHsfNineResponseOutcome> DemoHsfNineResponseOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::DemoHsfNineResponseRequest&, const DemoHsfNineResponseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DemoHsfNineResponseAsyncHandler;
			typedef Outcome<Error, Model::DemoHsfSixTestResult> DemoHsfSixTestOutcome;
			typedef std::future<DemoHsfSixTestOutcome> DemoHsfSixTestOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::DemoHsfSixTestRequest&, const DemoHsfSixTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DemoHsfSixTestAsyncHandler;
			typedef Outcome<Error, Model::DemoHttpComplexResponseResult> DemoHttpComplexResponseOutcome;
			typedef std::future<DemoHttpComplexResponseOutcome> DemoHttpComplexResponseOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::DemoHttpComplexResponseRequest&, const DemoHttpComplexResponseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DemoHttpComplexResponseAsyncHandler;
			typedef Outcome<Error, Model::DescribeDisksResult> DescribeDisksOutcome;
			typedef std::future<DescribeDisksOutcome> DescribeDisksOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::DescribeDisksRequest&, const DescribeDisksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksAsyncHandler;
			typedef Outcome<Error, Model::GetPackageStorageCredentialResult> GetPackageStorageCredentialOutcome;
			typedef std::future<GetPackageStorageCredentialOutcome> GetPackageStorageCredentialOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::GetPackageStorageCredentialRequest&, const GetPackageStorageCredentialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPackageStorageCredentialAsyncHandler;
			typedef Outcome<Error, Model::GrayReleaseDemoResult> GrayReleaseDemoOutcome;
			typedef std::future<GrayReleaseDemoOutcome> GrayReleaseDemoOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::GrayReleaseDemoRequest&, const GrayReleaseDemoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrayReleaseDemoAsyncHandler;
			typedef Outcome<Error, Model::ListProductsByPopCodeResult> ListProductsByPopCodeOutcome;
			typedef std::future<ListProductsByPopCodeOutcome> ListProductsByPopCodeOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::ListProductsByPopCodeRequest&, const ListProductsByPopCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProductsByPopCodeAsyncHandler;
			typedef Outcome<Error, Model::LjxTestResult> LjxTestOutcome;
			typedef std::future<LjxTestOutcome> LjxTestOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::LjxTestRequest&, const LjxTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LjxTestAsyncHandler;
			typedef Outcome<Error, Model::ReqBeanTestResult> ReqBeanTestOutcome;
			typedef std::future<ReqBeanTestOutcome> ReqBeanTestOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::ReqBeanTestRequest&, const ReqBeanTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReqBeanTestAsyncHandler;
			typedef Outcome<Error, Model::RomeGetExecutionResultResult> RomeGetExecutionResultOutcome;
			typedef std::future<RomeGetExecutionResultOutcome> RomeGetExecutionResultOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::RomeGetExecutionResultRequest&, const RomeGetExecutionResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RomeGetExecutionResultAsyncHandler;
			typedef Outcome<Error, Model::RpcHttpResult> RpcHttpOutcome;
			typedef std::future<RpcHttpOutcome> RpcHttpOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::RpcHttpRequest&, const RpcHttpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RpcHttpAsyncHandler;
			typedef Outcome<Error, Model::TestPutApiAndGetApiResult> TestPutApiAndGetApiOutcome;
			typedef std::future<TestPutApiAndGetApiOutcome> TestPutApiAndGetApiOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::TestPutApiAndGetApiRequest&, const TestPutApiAndGetApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestPutApiAndGetApiAsyncHandler;
			typedef Outcome<Error, Model::UpdateListenerResult> UpdateListenerOutcome;
			typedef std::future<UpdateListenerOutcome> UpdateListenerOutcomeCallable;
			typedef std::function<void(const LmzTestClient*, const Model::UpdateListenerRequest&, const UpdateListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateListenerAsyncHandler;

			LmzTestClient(const Credentials &credentials, const ClientConfiguration &configuration);
			LmzTestClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			LmzTestClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~LmzTestClient();
			AAbckOutcome aAbck(const Model::AAbckRequest &request)const;
			void aAbckAsync(const Model::AAbckRequest& request, const AAbckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AAbckOutcomeCallable aAbckCallable(const Model::AAbckRequest& request) const;
			AndBackOutcome andBack(const Model::AndBackRequest &request)const;
			void andBackAsync(const Model::AndBackRequest& request, const AndBackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AndBackOutcomeCallable andBackCallable(const Model::AndBackRequest& request) const;
			DataRateLimitTestOutcome dataRateLimitTest(const Model::DataRateLimitTestRequest &request)const;
			void dataRateLimitTestAsync(const Model::DataRateLimitTestRequest& request, const DataRateLimitTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DataRateLimitTestOutcomeCallable dataRateLimitTestCallable(const Model::DataRateLimitTestRequest& request) const;
			DemoGrayReleaseTestOutcome demoGrayReleaseTest(const Model::DemoGrayReleaseTestRequest &request)const;
			void demoGrayReleaseTestAsync(const Model::DemoGrayReleaseTestRequest& request, const DemoGrayReleaseTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DemoGrayReleaseTestOutcomeCallable demoGrayReleaseTestCallable(const Model::DemoGrayReleaseTestRequest& request) const;
			DemoGrayReleaseTestTwoOutcome demoGrayReleaseTestTwo(const Model::DemoGrayReleaseTestTwoRequest &request)const;
			void demoGrayReleaseTestTwoAsync(const Model::DemoGrayReleaseTestTwoRequest& request, const DemoGrayReleaseTestTwoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DemoGrayReleaseTestTwoOutcomeCallable demoGrayReleaseTestTwoCallable(const Model::DemoGrayReleaseTestTwoRequest& request) const;
			DemoGreyReleaseTestOutcome demoGreyReleaseTest(const Model::DemoGreyReleaseTestRequest &request)const;
			void demoGreyReleaseTestAsync(const Model::DemoGreyReleaseTestRequest& request, const DemoGreyReleaseTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DemoGreyReleaseTestOutcomeCallable demoGreyReleaseTestCallable(const Model::DemoGreyReleaseTestRequest& request) const;
			DemoHsfNineResponseOutcome demoHsfNineResponse(const Model::DemoHsfNineResponseRequest &request)const;
			void demoHsfNineResponseAsync(const Model::DemoHsfNineResponseRequest& request, const DemoHsfNineResponseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DemoHsfNineResponseOutcomeCallable demoHsfNineResponseCallable(const Model::DemoHsfNineResponseRequest& request) const;
			DemoHsfSixTestOutcome demoHsfSixTest(const Model::DemoHsfSixTestRequest &request)const;
			void demoHsfSixTestAsync(const Model::DemoHsfSixTestRequest& request, const DemoHsfSixTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DemoHsfSixTestOutcomeCallable demoHsfSixTestCallable(const Model::DemoHsfSixTestRequest& request) const;
			DemoHttpComplexResponseOutcome demoHttpComplexResponse(const Model::DemoHttpComplexResponseRequest &request)const;
			void demoHttpComplexResponseAsync(const Model::DemoHttpComplexResponseRequest& request, const DemoHttpComplexResponseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DemoHttpComplexResponseOutcomeCallable demoHttpComplexResponseCallable(const Model::DemoHttpComplexResponseRequest& request) const;
			DescribeDisksOutcome describeDisks(const Model::DescribeDisksRequest &request)const;
			void describeDisksAsync(const Model::DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDisksOutcomeCallable describeDisksCallable(const Model::DescribeDisksRequest& request) const;
			GetPackageStorageCredentialOutcome getPackageStorageCredential(const Model::GetPackageStorageCredentialRequest &request)const;
			void getPackageStorageCredentialAsync(const Model::GetPackageStorageCredentialRequest& request, const GetPackageStorageCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPackageStorageCredentialOutcomeCallable getPackageStorageCredentialCallable(const Model::GetPackageStorageCredentialRequest& request) const;
			GrayReleaseDemoOutcome grayReleaseDemo(const Model::GrayReleaseDemoRequest &request)const;
			void grayReleaseDemoAsync(const Model::GrayReleaseDemoRequest& request, const GrayReleaseDemoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrayReleaseDemoOutcomeCallable grayReleaseDemoCallable(const Model::GrayReleaseDemoRequest& request) const;
			ListProductsByPopCodeOutcome listProductsByPopCode(const Model::ListProductsByPopCodeRequest &request)const;
			void listProductsByPopCodeAsync(const Model::ListProductsByPopCodeRequest& request, const ListProductsByPopCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProductsByPopCodeOutcomeCallable listProductsByPopCodeCallable(const Model::ListProductsByPopCodeRequest& request) const;
			LjxTestOutcome ljxTest(const Model::LjxTestRequest &request)const;
			void ljxTestAsync(const Model::LjxTestRequest& request, const LjxTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LjxTestOutcomeCallable ljxTestCallable(const Model::LjxTestRequest& request) const;
			ReqBeanTestOutcome reqBeanTest(const Model::ReqBeanTestRequest &request)const;
			void reqBeanTestAsync(const Model::ReqBeanTestRequest& request, const ReqBeanTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReqBeanTestOutcomeCallable reqBeanTestCallable(const Model::ReqBeanTestRequest& request) const;
			RomeGetExecutionResultOutcome romeGetExecutionResult(const Model::RomeGetExecutionResultRequest &request)const;
			void romeGetExecutionResultAsync(const Model::RomeGetExecutionResultRequest& request, const RomeGetExecutionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RomeGetExecutionResultOutcomeCallable romeGetExecutionResultCallable(const Model::RomeGetExecutionResultRequest& request) const;
			RpcHttpOutcome rpcHttp(const Model::RpcHttpRequest &request)const;
			void rpcHttpAsync(const Model::RpcHttpRequest& request, const RpcHttpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RpcHttpOutcomeCallable rpcHttpCallable(const Model::RpcHttpRequest& request) const;
			TestPutApiAndGetApiOutcome testPutApiAndGetApi(const Model::TestPutApiAndGetApiRequest &request)const;
			void testPutApiAndGetApiAsync(const Model::TestPutApiAndGetApiRequest& request, const TestPutApiAndGetApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestPutApiAndGetApiOutcomeCallable testPutApiAndGetApiCallable(const Model::TestPutApiAndGetApiRequest& request) const;
			UpdateListenerOutcome updateListener(const Model::UpdateListenerRequest &request)const;
			void updateListenerAsync(const Model::UpdateListenerRequest& request, const UpdateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateListenerOutcomeCallable updateListenerCallable(const Model::UpdateListenerRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_LMZTEST_LMZTESTCLIENT_H_
