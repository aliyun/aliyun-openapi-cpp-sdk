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

#include <alibabacloud/lmztest/LmzTestClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::LmzTest;
using namespace AlibabaCloud::LmzTest::Model;

namespace
{
	const std::string SERVICE_NAME = "LmzTest";
}

LmzTestClient::LmzTestClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

LmzTestClient::LmzTestClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

LmzTestClient::LmzTestClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

LmzTestClient::~LmzTestClient()
{}

LmzTestClient::AAbckOutcome LmzTestClient::aAbck(const AAbckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AAbckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AAbckOutcome(AAbckResult(outcome.result()));
	else
		return AAbckOutcome(outcome.error());
}

void LmzTestClient::aAbckAsync(const AAbckRequest& request, const AAbckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aAbck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::AAbckOutcomeCallable LmzTestClient::aAbckCallable(const AAbckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AAbckOutcome()>>(
			[this, request]()
			{
			return this->aAbck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::AndBackOutcome LmzTestClient::andBack(const AndBackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AndBackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AndBackOutcome(AndBackResult(outcome.result()));
	else
		return AndBackOutcome(outcome.error());
}

void LmzTestClient::andBackAsync(const AndBackRequest& request, const AndBackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, andBack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::AndBackOutcomeCallable LmzTestClient::andBackCallable(const AndBackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AndBackOutcome()>>(
			[this, request]()
			{
			return this->andBack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::DataRateLimitTestOutcome LmzTestClient::dataRateLimitTest(const DataRateLimitTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DataRateLimitTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DataRateLimitTestOutcome(DataRateLimitTestResult(outcome.result()));
	else
		return DataRateLimitTestOutcome(outcome.error());
}

void LmzTestClient::dataRateLimitTestAsync(const DataRateLimitTestRequest& request, const DataRateLimitTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dataRateLimitTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::DataRateLimitTestOutcomeCallable LmzTestClient::dataRateLimitTestCallable(const DataRateLimitTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DataRateLimitTestOutcome()>>(
			[this, request]()
			{
			return this->dataRateLimitTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::DemoGrayReleaseTestOutcome LmzTestClient::demoGrayReleaseTest(const DemoGrayReleaseTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DemoGrayReleaseTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DemoGrayReleaseTestOutcome(DemoGrayReleaseTestResult(outcome.result()));
	else
		return DemoGrayReleaseTestOutcome(outcome.error());
}

void LmzTestClient::demoGrayReleaseTestAsync(const DemoGrayReleaseTestRequest& request, const DemoGrayReleaseTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, demoGrayReleaseTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::DemoGrayReleaseTestOutcomeCallable LmzTestClient::demoGrayReleaseTestCallable(const DemoGrayReleaseTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DemoGrayReleaseTestOutcome()>>(
			[this, request]()
			{
			return this->demoGrayReleaseTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::DemoGrayReleaseTestTwoOutcome LmzTestClient::demoGrayReleaseTestTwo(const DemoGrayReleaseTestTwoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DemoGrayReleaseTestTwoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DemoGrayReleaseTestTwoOutcome(DemoGrayReleaseTestTwoResult(outcome.result()));
	else
		return DemoGrayReleaseTestTwoOutcome(outcome.error());
}

void LmzTestClient::demoGrayReleaseTestTwoAsync(const DemoGrayReleaseTestTwoRequest& request, const DemoGrayReleaseTestTwoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, demoGrayReleaseTestTwo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::DemoGrayReleaseTestTwoOutcomeCallable LmzTestClient::demoGrayReleaseTestTwoCallable(const DemoGrayReleaseTestTwoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DemoGrayReleaseTestTwoOutcome()>>(
			[this, request]()
			{
			return this->demoGrayReleaseTestTwo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::DemoGreyReleaseTestOutcome LmzTestClient::demoGreyReleaseTest(const DemoGreyReleaseTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DemoGreyReleaseTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DemoGreyReleaseTestOutcome(DemoGreyReleaseTestResult(outcome.result()));
	else
		return DemoGreyReleaseTestOutcome(outcome.error());
}

void LmzTestClient::demoGreyReleaseTestAsync(const DemoGreyReleaseTestRequest& request, const DemoGreyReleaseTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, demoGreyReleaseTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::DemoGreyReleaseTestOutcomeCallable LmzTestClient::demoGreyReleaseTestCallable(const DemoGreyReleaseTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DemoGreyReleaseTestOutcome()>>(
			[this, request]()
			{
			return this->demoGreyReleaseTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::DemoHsfNineResponseOutcome LmzTestClient::demoHsfNineResponse(const DemoHsfNineResponseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DemoHsfNineResponseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DemoHsfNineResponseOutcome(DemoHsfNineResponseResult(outcome.result()));
	else
		return DemoHsfNineResponseOutcome(outcome.error());
}

void LmzTestClient::demoHsfNineResponseAsync(const DemoHsfNineResponseRequest& request, const DemoHsfNineResponseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, demoHsfNineResponse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::DemoHsfNineResponseOutcomeCallable LmzTestClient::demoHsfNineResponseCallable(const DemoHsfNineResponseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DemoHsfNineResponseOutcome()>>(
			[this, request]()
			{
			return this->demoHsfNineResponse(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::DemoHsfSixTestOutcome LmzTestClient::demoHsfSixTest(const DemoHsfSixTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DemoHsfSixTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DemoHsfSixTestOutcome(DemoHsfSixTestResult(outcome.result()));
	else
		return DemoHsfSixTestOutcome(outcome.error());
}

void LmzTestClient::demoHsfSixTestAsync(const DemoHsfSixTestRequest& request, const DemoHsfSixTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, demoHsfSixTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::DemoHsfSixTestOutcomeCallable LmzTestClient::demoHsfSixTestCallable(const DemoHsfSixTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DemoHsfSixTestOutcome()>>(
			[this, request]()
			{
			return this->demoHsfSixTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::DemoHttpComplexResponseOutcome LmzTestClient::demoHttpComplexResponse(const DemoHttpComplexResponseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DemoHttpComplexResponseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DemoHttpComplexResponseOutcome(DemoHttpComplexResponseResult(outcome.result()));
	else
		return DemoHttpComplexResponseOutcome(outcome.error());
}

void LmzTestClient::demoHttpComplexResponseAsync(const DemoHttpComplexResponseRequest& request, const DemoHttpComplexResponseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, demoHttpComplexResponse(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::DemoHttpComplexResponseOutcomeCallable LmzTestClient::demoHttpComplexResponseCallable(const DemoHttpComplexResponseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DemoHttpComplexResponseOutcome()>>(
			[this, request]()
			{
			return this->demoHttpComplexResponse(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::DescribeDisksOutcome LmzTestClient::describeDisks(const DescribeDisksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDisksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDisksOutcome(DescribeDisksResult(outcome.result()));
	else
		return DescribeDisksOutcome(outcome.error());
}

void LmzTestClient::describeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDisks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::DescribeDisksOutcomeCallable LmzTestClient::describeDisksCallable(const DescribeDisksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDisksOutcome()>>(
			[this, request]()
			{
			return this->describeDisks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::GetPackageStorageCredentialOutcome LmzTestClient::getPackageStorageCredential(const GetPackageStorageCredentialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPackageStorageCredentialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPackageStorageCredentialOutcome(GetPackageStorageCredentialResult(outcome.result()));
	else
		return GetPackageStorageCredentialOutcome(outcome.error());
}

void LmzTestClient::getPackageStorageCredentialAsync(const GetPackageStorageCredentialRequest& request, const GetPackageStorageCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPackageStorageCredential(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::GetPackageStorageCredentialOutcomeCallable LmzTestClient::getPackageStorageCredentialCallable(const GetPackageStorageCredentialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPackageStorageCredentialOutcome()>>(
			[this, request]()
			{
			return this->getPackageStorageCredential(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::GrayReleaseDemoOutcome LmzTestClient::grayReleaseDemo(const GrayReleaseDemoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrayReleaseDemoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrayReleaseDemoOutcome(GrayReleaseDemoResult(outcome.result()));
	else
		return GrayReleaseDemoOutcome(outcome.error());
}

void LmzTestClient::grayReleaseDemoAsync(const GrayReleaseDemoRequest& request, const GrayReleaseDemoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grayReleaseDemo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::GrayReleaseDemoOutcomeCallable LmzTestClient::grayReleaseDemoCallable(const GrayReleaseDemoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrayReleaseDemoOutcome()>>(
			[this, request]()
			{
			return this->grayReleaseDemo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::ListProductsByPopCodeOutcome LmzTestClient::listProductsByPopCode(const ListProductsByPopCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListProductsByPopCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListProductsByPopCodeOutcome(ListProductsByPopCodeResult(outcome.result()));
	else
		return ListProductsByPopCodeOutcome(outcome.error());
}

void LmzTestClient::listProductsByPopCodeAsync(const ListProductsByPopCodeRequest& request, const ListProductsByPopCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listProductsByPopCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::ListProductsByPopCodeOutcomeCallable LmzTestClient::listProductsByPopCodeCallable(const ListProductsByPopCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListProductsByPopCodeOutcome()>>(
			[this, request]()
			{
			return this->listProductsByPopCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::LjxTestOutcome LmzTestClient::ljxTest(const LjxTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LjxTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LjxTestOutcome(LjxTestResult(outcome.result()));
	else
		return LjxTestOutcome(outcome.error());
}

void LmzTestClient::ljxTestAsync(const LjxTestRequest& request, const LjxTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ljxTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::LjxTestOutcomeCallable LmzTestClient::ljxTestCallable(const LjxTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LjxTestOutcome()>>(
			[this, request]()
			{
			return this->ljxTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::ReqBeanTestOutcome LmzTestClient::reqBeanTest(const ReqBeanTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReqBeanTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReqBeanTestOutcome(ReqBeanTestResult(outcome.result()));
	else
		return ReqBeanTestOutcome(outcome.error());
}

void LmzTestClient::reqBeanTestAsync(const ReqBeanTestRequest& request, const ReqBeanTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reqBeanTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::ReqBeanTestOutcomeCallable LmzTestClient::reqBeanTestCallable(const ReqBeanTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReqBeanTestOutcome()>>(
			[this, request]()
			{
			return this->reqBeanTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::RomeGetExecutionResultOutcome LmzTestClient::romeGetExecutionResult(const RomeGetExecutionResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RomeGetExecutionResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RomeGetExecutionResultOutcome(RomeGetExecutionResultResult(outcome.result()));
	else
		return RomeGetExecutionResultOutcome(outcome.error());
}

void LmzTestClient::romeGetExecutionResultAsync(const RomeGetExecutionResultRequest& request, const RomeGetExecutionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, romeGetExecutionResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::RomeGetExecutionResultOutcomeCallable LmzTestClient::romeGetExecutionResultCallable(const RomeGetExecutionResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RomeGetExecutionResultOutcome()>>(
			[this, request]()
			{
			return this->romeGetExecutionResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::RpcHttpOutcome LmzTestClient::rpcHttp(const RpcHttpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RpcHttpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RpcHttpOutcome(RpcHttpResult(outcome.result()));
	else
		return RpcHttpOutcome(outcome.error());
}

void LmzTestClient::rpcHttpAsync(const RpcHttpRequest& request, const RpcHttpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rpcHttp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::RpcHttpOutcomeCallable LmzTestClient::rpcHttpCallable(const RpcHttpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RpcHttpOutcome()>>(
			[this, request]()
			{
			return this->rpcHttp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::TestPutApiAndGetApiOutcome LmzTestClient::testPutApiAndGetApi(const TestPutApiAndGetApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestPutApiAndGetApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestPutApiAndGetApiOutcome(TestPutApiAndGetApiResult(outcome.result()));
	else
		return TestPutApiAndGetApiOutcome(outcome.error());
}

void LmzTestClient::testPutApiAndGetApiAsync(const TestPutApiAndGetApiRequest& request, const TestPutApiAndGetApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testPutApiAndGetApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::TestPutApiAndGetApiOutcomeCallable LmzTestClient::testPutApiAndGetApiCallable(const TestPutApiAndGetApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestPutApiAndGetApiOutcome()>>(
			[this, request]()
			{
			return this->testPutApiAndGetApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LmzTestClient::UpdateListenerOutcome LmzTestClient::updateListener(const UpdateListenerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateListenerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateListenerOutcome(UpdateListenerResult(outcome.result()));
	else
		return UpdateListenerOutcome(outcome.error());
}

void LmzTestClient::updateListenerAsync(const UpdateListenerRequest& request, const UpdateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateListener(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LmzTestClient::UpdateListenerOutcomeCallable LmzTestClient::updateListenerCallable(const UpdateListenerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateListenerOutcome()>>(
			[this, request]()
			{
			return this->updateListener(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

