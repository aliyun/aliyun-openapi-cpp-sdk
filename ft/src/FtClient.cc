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

#include <alibabacloud/ft/FtClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

namespace
{
	const std::string SERVICE_NAME = "Ft";
}

FtClient::FtClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::FtClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::FtClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::~FtClient()
{}

FtClient::BatchAuditTest01Outcome FtClient::batchAuditTest01(const BatchAuditTest01Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAuditTest01Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAuditTest01Outcome(BatchAuditTest01Result(outcome.result()));
	else
		return BatchAuditTest01Outcome(outcome.error());
}

void FtClient::batchAuditTest01Async(const BatchAuditTest01Request& request, const BatchAuditTest01AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAuditTest01(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::BatchAuditTest01OutcomeCallable FtClient::batchAuditTest01Callable(const BatchAuditTest01Request &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAuditTest01Outcome()>>(
			[this, request]()
			{
			return this->batchAuditTest01(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FTApiAliasApiOutcome FtClient::fTApiAliasApi(const FTApiAliasApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FTApiAliasApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FTApiAliasApiOutcome(FTApiAliasApiResult(outcome.result()));
	else
		return FTApiAliasApiOutcome(outcome.error());
}

void FtClient::fTApiAliasApiAsync(const FTApiAliasApiRequest& request, const FTApiAliasApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fTApiAliasApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FTApiAliasApiOutcomeCallable FtClient::fTApiAliasApiCallable(const FTApiAliasApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FTApiAliasApiOutcome()>>(
			[this, request]()
			{
			return this->fTApiAliasApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtDynamicAddressDubboOutcome FtClient::ftDynamicAddressDubbo(const FtDynamicAddressDubboRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtDynamicAddressDubboOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtDynamicAddressDubboOutcome(FtDynamicAddressDubboResult(outcome.result()));
	else
		return FtDynamicAddressDubboOutcome(outcome.error());
}

void FtClient::ftDynamicAddressDubboAsync(const FtDynamicAddressDubboRequest& request, const FtDynamicAddressDubboAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftDynamicAddressDubbo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtDynamicAddressDubboOutcomeCallable FtClient::ftDynamicAddressDubboCallable(const FtDynamicAddressDubboRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtDynamicAddressDubboOutcome()>>(
			[this, request]()
			{
			return this->ftDynamicAddressDubbo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtDynamicAddressHsfOutcome FtClient::ftDynamicAddressHsf(const FtDynamicAddressHsfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtDynamicAddressHsfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtDynamicAddressHsfOutcome(FtDynamicAddressHsfResult(outcome.result()));
	else
		return FtDynamicAddressHsfOutcome(outcome.error());
}

void FtClient::ftDynamicAddressHsfAsync(const FtDynamicAddressHsfRequest& request, const FtDynamicAddressHsfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftDynamicAddressHsf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtDynamicAddressHsfOutcomeCallable FtClient::ftDynamicAddressHsfCallable(const FtDynamicAddressHsfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtDynamicAddressHsfOutcome()>>(
			[this, request]()
			{
			return this->ftDynamicAddressHsf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtDynamicAddressHttpVpcOutcome FtClient::ftDynamicAddressHttpVpc(const FtDynamicAddressHttpVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtDynamicAddressHttpVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtDynamicAddressHttpVpcOutcome(FtDynamicAddressHttpVpcResult(outcome.result()));
	else
		return FtDynamicAddressHttpVpcOutcome(outcome.error());
}

void FtClient::ftDynamicAddressHttpVpcAsync(const FtDynamicAddressHttpVpcRequest& request, const FtDynamicAddressHttpVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftDynamicAddressHttpVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtDynamicAddressHttpVpcOutcomeCallable FtClient::ftDynamicAddressHttpVpcCallable(const FtDynamicAddressHttpVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtDynamicAddressHttpVpcOutcome()>>(
			[this, request]()
			{
			return this->ftDynamicAddressHttpVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtEagleEyeOutcome FtClient::ftEagleEye(const FtEagleEyeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtEagleEyeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtEagleEyeOutcome(FtEagleEyeResult(outcome.result()));
	else
		return FtEagleEyeOutcome(outcome.error());
}

void FtClient::ftEagleEyeAsync(const FtEagleEyeRequest& request, const FtEagleEyeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftEagleEye(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtEagleEyeOutcomeCallable FtClient::ftEagleEyeCallable(const FtEagleEyeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtEagleEyeOutcome()>>(
			[this, request]()
			{
			return this->ftEagleEye(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtFlowSpecialOutcome FtClient::ftFlowSpecial(const FtFlowSpecialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtFlowSpecialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtFlowSpecialOutcome(FtFlowSpecialResult(outcome.result()));
	else
		return FtFlowSpecialOutcome(outcome.error());
}

void FtClient::ftFlowSpecialAsync(const FtFlowSpecialRequest& request, const FtFlowSpecialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftFlowSpecial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtFlowSpecialOutcomeCallable FtClient::ftFlowSpecialCallable(const FtFlowSpecialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtFlowSpecialOutcome()>>(
			[this, request]()
			{
			return this->ftFlowSpecial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtGatedLaunchPolicy4Outcome FtClient::ftGatedLaunchPolicy4(const FtGatedLaunchPolicy4Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtGatedLaunchPolicy4Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtGatedLaunchPolicy4Outcome(FtGatedLaunchPolicy4Result(outcome.result()));
	else
		return FtGatedLaunchPolicy4Outcome(outcome.error());
}

void FtClient::ftGatedLaunchPolicy4Async(const FtGatedLaunchPolicy4Request& request, const FtGatedLaunchPolicy4AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftGatedLaunchPolicy4(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtGatedLaunchPolicy4OutcomeCallable FtClient::ftGatedLaunchPolicy4Callable(const FtGatedLaunchPolicy4Request &request) const
{
	auto task = std::make_shared<std::packaged_task<FtGatedLaunchPolicy4Outcome()>>(
			[this, request]()
			{
			return this->ftGatedLaunchPolicy4(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtIpFlowControlOutcome FtClient::ftIpFlowControl(const FtIpFlowControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtIpFlowControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtIpFlowControlOutcome(FtIpFlowControlResult(outcome.result()));
	else
		return FtIpFlowControlOutcome(outcome.error());
}

void FtClient::ftIpFlowControlAsync(const FtIpFlowControlRequest& request, const FtIpFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftIpFlowControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtIpFlowControlOutcomeCallable FtClient::ftIpFlowControlCallable(const FtIpFlowControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtIpFlowControlOutcome()>>(
			[this, request]()
			{
			return this->ftIpFlowControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtParamListOutcome FtClient::ftParamList(const FtParamListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtParamListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtParamListOutcome(FtParamListResult(outcome.result()));
	else
		return FtParamListOutcome(outcome.error());
}

void FtClient::ftParamListAsync(const FtParamListRequest& request, const FtParamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftParamList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtParamListOutcomeCallable FtClient::ftParamListCallable(const FtParamListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtParamListOutcome()>>(
			[this, request]()
			{
			return this->ftParamList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::TestFlowStrategy01Outcome FtClient::testFlowStrategy01(const TestFlowStrategy01Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestFlowStrategy01Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestFlowStrategy01Outcome(TestFlowStrategy01Result(outcome.result()));
	else
		return TestFlowStrategy01Outcome(outcome.error());
}

void FtClient::testFlowStrategy01Async(const TestFlowStrategy01Request& request, const TestFlowStrategy01AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testFlowStrategy01(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::TestFlowStrategy01OutcomeCallable FtClient::testFlowStrategy01Callable(const TestFlowStrategy01Request &request) const
{
	auto task = std::make_shared<std::packaged_task<TestFlowStrategy01Outcome()>>(
			[this, request]()
			{
			return this->testFlowStrategy01(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::TestHttpApiOutcome FtClient::testHttpApi(const TestHttpApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestHttpApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestHttpApiOutcome(TestHttpApiResult(outcome.result()));
	else
		return TestHttpApiOutcome(outcome.error());
}

void FtClient::testHttpApiAsync(const TestHttpApiRequest& request, const TestHttpApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testHttpApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::TestHttpApiOutcomeCallable FtClient::testHttpApiCallable(const TestHttpApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestHttpApiOutcome()>>(
			[this, request]()
			{
			return this->testHttpApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

