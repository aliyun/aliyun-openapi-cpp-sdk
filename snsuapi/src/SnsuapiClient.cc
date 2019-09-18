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

#include <alibabacloud/snsuapi/SnsuapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Snsuapi;
using namespace AlibabaCloud::Snsuapi::Model;

namespace
{
	const std::string SERVICE_NAME = "Snsuapi";
}

SnsuapiClient::SnsuapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "snsuapi");
}

SnsuapiClient::SnsuapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "snsuapi");
}

SnsuapiClient::SnsuapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "snsuapi");
}

SnsuapiClient::~SnsuapiClient()
{}

SnsuapiClient::BandOfferOrderOutcome SnsuapiClient::bandOfferOrder(const BandOfferOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BandOfferOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BandOfferOrderOutcome(BandOfferOrderResult(outcome.result()));
	else
		return BandOfferOrderOutcome(outcome.error());
}

void SnsuapiClient::bandOfferOrderAsync(const BandOfferOrderRequest& request, const BandOfferOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bandOfferOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SnsuapiClient::BandOfferOrderOutcomeCallable SnsuapiClient::bandOfferOrderCallable(const BandOfferOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BandOfferOrderOutcome()>>(
			[this, request]()
			{
			return this->bandOfferOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SnsuapiClient::BandPrecheckOutcome SnsuapiClient::bandPrecheck(const BandPrecheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BandPrecheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BandPrecheckOutcome(BandPrecheckResult(outcome.result()));
	else
		return BandPrecheckOutcome(outcome.error());
}

void SnsuapiClient::bandPrecheckAsync(const BandPrecheckRequest& request, const BandPrecheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bandPrecheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SnsuapiClient::BandPrecheckOutcomeCallable SnsuapiClient::bandPrecheckCallable(const BandPrecheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BandPrecheckOutcome()>>(
			[this, request]()
			{
			return this->bandPrecheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SnsuapiClient::BandStartSpeedUpOutcome SnsuapiClient::bandStartSpeedUp(const BandStartSpeedUpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BandStartSpeedUpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BandStartSpeedUpOutcome(BandStartSpeedUpResult(outcome.result()));
	else
		return BandStartSpeedUpOutcome(outcome.error());
}

void SnsuapiClient::bandStartSpeedUpAsync(const BandStartSpeedUpRequest& request, const BandStartSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bandStartSpeedUp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SnsuapiClient::BandStartSpeedUpOutcomeCallable SnsuapiClient::bandStartSpeedUpCallable(const BandStartSpeedUpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BandStartSpeedUpOutcome()>>(
			[this, request]()
			{
			return this->bandStartSpeedUp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SnsuapiClient::BandStatusQueryOutcome SnsuapiClient::bandStatusQuery(const BandStatusQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BandStatusQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BandStatusQueryOutcome(BandStatusQueryResult(outcome.result()));
	else
		return BandStatusQueryOutcome(outcome.error());
}

void SnsuapiClient::bandStatusQueryAsync(const BandStatusQueryRequest& request, const BandStatusQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bandStatusQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SnsuapiClient::BandStatusQueryOutcomeCallable SnsuapiClient::bandStatusQueryCallable(const BandStatusQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BandStatusQueryOutcome()>>(
			[this, request]()
			{
			return this->bandStatusQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SnsuapiClient::BandStopSpeedUpOutcome SnsuapiClient::bandStopSpeedUp(const BandStopSpeedUpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BandStopSpeedUpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BandStopSpeedUpOutcome(BandStopSpeedUpResult(outcome.result()));
	else
		return BandStopSpeedUpOutcome(outcome.error());
}

void SnsuapiClient::bandStopSpeedUpAsync(const BandStopSpeedUpRequest& request, const BandStopSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bandStopSpeedUp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SnsuapiClient::BandStopSpeedUpOutcomeCallable SnsuapiClient::bandStopSpeedUpCallable(const BandStopSpeedUpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BandStopSpeedUpOutcome()>>(
			[this, request]()
			{
			return this->bandStopSpeedUp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SnsuapiClient::MobileStartSpeedUpOutcome SnsuapiClient::mobileStartSpeedUp(const MobileStartSpeedUpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MobileStartSpeedUpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MobileStartSpeedUpOutcome(MobileStartSpeedUpResult(outcome.result()));
	else
		return MobileStartSpeedUpOutcome(outcome.error());
}

void SnsuapiClient::mobileStartSpeedUpAsync(const MobileStartSpeedUpRequest& request, const MobileStartSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mobileStartSpeedUp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SnsuapiClient::MobileStartSpeedUpOutcomeCallable SnsuapiClient::mobileStartSpeedUpCallable(const MobileStartSpeedUpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MobileStartSpeedUpOutcome()>>(
			[this, request]()
			{
			return this->mobileStartSpeedUp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SnsuapiClient::MobileStatusQueryOutcome SnsuapiClient::mobileStatusQuery(const MobileStatusQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MobileStatusQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MobileStatusQueryOutcome(MobileStatusQueryResult(outcome.result()));
	else
		return MobileStatusQueryOutcome(outcome.error());
}

void SnsuapiClient::mobileStatusQueryAsync(const MobileStatusQueryRequest& request, const MobileStatusQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mobileStatusQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SnsuapiClient::MobileStatusQueryOutcomeCallable SnsuapiClient::mobileStatusQueryCallable(const MobileStatusQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MobileStatusQueryOutcome()>>(
			[this, request]()
			{
			return this->mobileStatusQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SnsuapiClient::MobileStopSpeedUpOutcome SnsuapiClient::mobileStopSpeedUp(const MobileStopSpeedUpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MobileStopSpeedUpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MobileStopSpeedUpOutcome(MobileStopSpeedUpResult(outcome.result()));
	else
		return MobileStopSpeedUpOutcome(outcome.error());
}

void SnsuapiClient::mobileStopSpeedUpAsync(const MobileStopSpeedUpRequest& request, const MobileStopSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, mobileStopSpeedUp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SnsuapiClient::MobileStopSpeedUpOutcomeCallable SnsuapiClient::mobileStopSpeedUpCallable(const MobileStopSpeedUpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MobileStopSpeedUpOutcome()>>(
			[this, request]()
			{
			return this->mobileStopSpeedUp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

