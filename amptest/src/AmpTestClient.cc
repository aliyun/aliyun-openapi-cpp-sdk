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

#include <alibabacloud/amptest/AmpTestClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::AmpTest;
using namespace AlibabaCloud::AmpTest::Model;

namespace
{
	const std::string SERVICE_NAME = "AmpTest";
}

AmpTestClient::AmpTestClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "AmpTest");
}

AmpTestClient::AmpTestClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "AmpTest");
}

AmpTestClient::AmpTestClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "AmpTest");
}

AmpTestClient::~AmpTestClient()
{}

AmpTestClient::CreateRulesOutcome AmpTestClient::createRules(const CreateRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRulesOutcome(CreateRulesResult(outcome.result()));
	else
		return CreateRulesOutcome(outcome.error());
}

void AmpTestClient::createRulesAsync(const CreateRulesRequest& request, const CreateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::CreateRulesOutcomeCallable AmpTestClient::createRulesCallable(const CreateRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRulesOutcome()>>(
			[this, request]()
			{
			return this->createRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengTestGrayOutcome AmpTestClient::huichengTestGray(const HuichengTestGrayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengTestGrayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengTestGrayOutcome(HuichengTestGrayResult(outcome.result()));
	else
		return HuichengTestGrayOutcome(outcome.error());
}

void AmpTestClient::huichengTestGrayAsync(const HuichengTestGrayRequest& request, const HuichengTestGrayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengTestGray(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengTestGrayOutcomeCallable AmpTestClient::huichengTestGrayCallable(const HuichengTestGrayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengTestGrayOutcome()>>(
			[this, request]()
			{
			return this->huichengTestGray(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengTestGrayEightOutcome AmpTestClient::huichengTestGrayEight(const HuichengTestGrayEightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengTestGrayEightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengTestGrayEightOutcome(HuichengTestGrayEightResult(outcome.result()));
	else
		return HuichengTestGrayEightOutcome(outcome.error());
}

void AmpTestClient::huichengTestGrayEightAsync(const HuichengTestGrayEightRequest& request, const HuichengTestGrayEightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengTestGrayEight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengTestGrayEightOutcomeCallable AmpTestClient::huichengTestGrayEightCallable(const HuichengTestGrayEightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengTestGrayEightOutcome()>>(
			[this, request]()
			{
			return this->huichengTestGrayEight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengTestGrayFifthOutcome AmpTestClient::huichengTestGrayFifth(const HuichengTestGrayFifthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengTestGrayFifthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengTestGrayFifthOutcome(HuichengTestGrayFifthResult(outcome.result()));
	else
		return HuichengTestGrayFifthOutcome(outcome.error());
}

void AmpTestClient::huichengTestGrayFifthAsync(const HuichengTestGrayFifthRequest& request, const HuichengTestGrayFifthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengTestGrayFifth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengTestGrayFifthOutcomeCallable AmpTestClient::huichengTestGrayFifthCallable(const HuichengTestGrayFifthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengTestGrayFifthOutcome()>>(
			[this, request]()
			{
			return this->huichengTestGrayFifth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengTestGrayNineOutcome AmpTestClient::huichengTestGrayNine(const HuichengTestGrayNineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengTestGrayNineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengTestGrayNineOutcome(HuichengTestGrayNineResult(outcome.result()));
	else
		return HuichengTestGrayNineOutcome(outcome.error());
}

void AmpTestClient::huichengTestGrayNineAsync(const HuichengTestGrayNineRequest& request, const HuichengTestGrayNineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengTestGrayNine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengTestGrayNineOutcomeCallable AmpTestClient::huichengTestGrayNineCallable(const HuichengTestGrayNineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengTestGrayNineOutcome()>>(
			[this, request]()
			{
			return this->huichengTestGrayNine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengTestGraySecondOutcome AmpTestClient::huichengTestGraySecond(const HuichengTestGraySecondRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengTestGraySecondOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengTestGraySecondOutcome(HuichengTestGraySecondResult(outcome.result()));
	else
		return HuichengTestGraySecondOutcome(outcome.error());
}

void AmpTestClient::huichengTestGraySecondAsync(const HuichengTestGraySecondRequest& request, const HuichengTestGraySecondAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengTestGraySecond(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengTestGraySecondOutcomeCallable AmpTestClient::huichengTestGraySecondCallable(const HuichengTestGraySecondRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengTestGraySecondOutcome()>>(
			[this, request]()
			{
			return this->huichengTestGraySecond(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengTestGraySevenOutcome AmpTestClient::huichengTestGraySeven(const HuichengTestGraySevenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengTestGraySevenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengTestGraySevenOutcome(HuichengTestGraySevenResult(outcome.result()));
	else
		return HuichengTestGraySevenOutcome(outcome.error());
}

void AmpTestClient::huichengTestGraySevenAsync(const HuichengTestGraySevenRequest& request, const HuichengTestGraySevenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengTestGraySeven(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengTestGraySevenOutcomeCallable AmpTestClient::huichengTestGraySevenCallable(const HuichengTestGraySevenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengTestGraySevenOutcome()>>(
			[this, request]()
			{
			return this->huichengTestGraySeven(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengTestGraySixOutcome AmpTestClient::huichengTestGraySix(const HuichengTestGraySixRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengTestGraySixOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengTestGraySixOutcome(HuichengTestGraySixResult(outcome.result()));
	else
		return HuichengTestGraySixOutcome(outcome.error());
}

void AmpTestClient::huichengTestGraySixAsync(const HuichengTestGraySixRequest& request, const HuichengTestGraySixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengTestGraySix(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengTestGraySixOutcomeCallable AmpTestClient::huichengTestGraySixCallable(const HuichengTestGraySixRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengTestGraySixOutcome()>>(
			[this, request]()
			{
			return this->huichengTestGraySix(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengTestGrayTenOutcome AmpTestClient::huichengTestGrayTen(const HuichengTestGrayTenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengTestGrayTenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengTestGrayTenOutcome(HuichengTestGrayTenResult(outcome.result()));
	else
		return HuichengTestGrayTenOutcome(outcome.error());
}

void AmpTestClient::huichengTestGrayTenAsync(const HuichengTestGrayTenRequest& request, const HuichengTestGrayTenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengTestGrayTen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengTestGrayTenOutcomeCallable AmpTestClient::huichengTestGrayTenCallable(const HuichengTestGrayTenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengTestGrayTenOutcome()>>(
			[this, request]()
			{
			return this->huichengTestGrayTen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengTestGrayThirdOutcome AmpTestClient::huichengTestGrayThird(const HuichengTestGrayThirdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengTestGrayThirdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengTestGrayThirdOutcome(HuichengTestGrayThirdResult(outcome.result()));
	else
		return HuichengTestGrayThirdOutcome(outcome.error());
}

void AmpTestClient::huichengTestGrayThirdAsync(const HuichengTestGrayThirdRequest& request, const HuichengTestGrayThirdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengTestGrayThird(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengTestGrayThirdOutcomeCallable AmpTestClient::huichengTestGrayThirdCallable(const HuichengTestGrayThirdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengTestGrayThirdOutcome()>>(
			[this, request]()
			{
			return this->huichengTestGrayThird(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengTestResourceOwnerIdOutcome AmpTestClient::huichengTestResourceOwnerId(const HuichengTestResourceOwnerIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengTestResourceOwnerIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengTestResourceOwnerIdOutcome(HuichengTestResourceOwnerIdResult(outcome.result()));
	else
		return HuichengTestResourceOwnerIdOutcome(outcome.error());
}

void AmpTestClient::huichengTestResourceOwnerIdAsync(const HuichengTestResourceOwnerIdRequest& request, const HuichengTestResourceOwnerIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengTestResourceOwnerId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengTestResourceOwnerIdOutcomeCallable AmpTestClient::huichengTestResourceOwnerIdCallable(const HuichengTestResourceOwnerIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengTestResourceOwnerIdOutcome()>>(
			[this, request]()
			{
			return this->huichengTestResourceOwnerId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengetOutcome AmpTestClient::huichenget(const HuichengetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengetOutcome(HuichengetResult(outcome.result()));
	else
		return HuichengetOutcome(outcome.error());
}

void AmpTestClient::huichengetAsync(const HuichengetRequest& request, const HuichengetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichenget(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengetOutcomeCallable AmpTestClient::huichengetCallable(const HuichengetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengetOutcome()>>(
			[this, request]()
			{
			return this->huichenget(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AmpTestClient::HuichengetestOutcome AmpTestClient::huichengetest(const HuichengetestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HuichengetestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HuichengetestOutcome(HuichengetestResult(outcome.result()));
	else
		return HuichengetestOutcome(outcome.error());
}

void AmpTestClient::huichengetestAsync(const HuichengetestRequest& request, const HuichengetestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, huichengetest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AmpTestClient::HuichengetestOutcomeCallable AmpTestClient::huichengetestCallable(const HuichengetestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HuichengetestOutcome()>>(
			[this, request]()
			{
			return this->huichengetest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

