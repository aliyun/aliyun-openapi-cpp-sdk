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

#include <alibabacloud/sas-api/Sas-apiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Sas-api;
using namespace AlibabaCloud::Sas-api::Model;

namespace
{
	const std::string SERVICE_NAME = "Sas-api";
}

Sas-apiClient::Sas-apiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sas-api");
}

Sas-apiClient::Sas-apiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sas-api");
}

Sas-apiClient::Sas-apiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "sas-api");
}

Sas-apiClient::~Sas-apiClient()
{}

Sas-apiClient::DescribeAccountProfileByKeyWordOutcome Sas-apiClient::describeAccountProfileByKeyWord(const DescribeAccountProfileByKeyWordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountProfileByKeyWordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountProfileByKeyWordOutcome(DescribeAccountProfileByKeyWordResult(outcome.result()));
	else
		return DescribeAccountProfileByKeyWordOutcome(outcome.error());
}

void Sas-apiClient::describeAccountProfileByKeyWordAsync(const DescribeAccountProfileByKeyWordRequest& request, const DescribeAccountProfileByKeyWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountProfileByKeyWord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::DescribeAccountProfileByKeyWordOutcomeCallable Sas-apiClient::describeAccountProfileByKeyWordCallable(const DescribeAccountProfileByKeyWordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountProfileByKeyWordOutcome()>>(
			[this, request]()
			{
			return this->describeAccountProfileByKeyWord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::DescribeThreatTypeLinesOutcome Sas-apiClient::describeThreatTypeLines(const DescribeThreatTypeLinesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeThreatTypeLinesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeThreatTypeLinesOutcome(DescribeThreatTypeLinesResult(outcome.result()));
	else
		return DescribeThreatTypeLinesOutcome(outcome.error());
}

void Sas-apiClient::describeThreatTypeLinesAsync(const DescribeThreatTypeLinesRequest& request, const DescribeThreatTypeLinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeThreatTypeLines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::DescribeThreatTypeLinesOutcomeCallable Sas-apiClient::describeThreatTypeLinesCallable(const DescribeThreatTypeLinesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeThreatTypeLinesOutcome()>>(
			[this, request]()
			{
			return this->describeThreatTypeLines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::DescribeThreatDistributeOutcome Sas-apiClient::describeThreatDistribute(const DescribeThreatDistributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeThreatDistributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeThreatDistributeOutcome(DescribeThreatDistributeResult(outcome.result()));
	else
		return DescribeThreatDistributeOutcome(outcome.error());
}

void Sas-apiClient::describeThreatDistributeAsync(const DescribeThreatDistributeRequest& request, const DescribeThreatDistributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeThreatDistribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::DescribeThreatDistributeOutcomeCallable Sas-apiClient::describeThreatDistributeCallable(const DescribeThreatDistributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeThreatDistributeOutcome()>>(
			[this, request]()
			{
			return this->describeThreatDistribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::GetPhoneProfileOutcome Sas-apiClient::getPhoneProfile(const GetPhoneProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPhoneProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPhoneProfileOutcome(GetPhoneProfileResult(outcome.result()));
	else
		return GetPhoneProfileOutcome(outcome.error());
}

void Sas-apiClient::getPhoneProfileAsync(const GetPhoneProfileRequest& request, const GetPhoneProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPhoneProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::GetPhoneProfileOutcomeCallable Sas-apiClient::getPhoneProfileCallable(const GetPhoneProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPhoneProfileOutcome()>>(
			[this, request]()
			{
			return this->getPhoneProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::DescribeAccountProfileByKeyOutcome Sas-apiClient::describeAccountProfileByKey(const DescribeAccountProfileByKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountProfileByKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountProfileByKeyOutcome(DescribeAccountProfileByKeyResult(outcome.result()));
	else
		return DescribeAccountProfileByKeyOutcome(outcome.error());
}

void Sas-apiClient::describeAccountProfileByKeyAsync(const DescribeAccountProfileByKeyRequest& request, const DescribeAccountProfileByKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountProfileByKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::DescribeAccountProfileByKeyOutcomeCallable Sas-apiClient::describeAccountProfileByKeyCallable(const DescribeAccountProfileByKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountProfileByKeyOutcome()>>(
			[this, request]()
			{
			return this->describeAccountProfileByKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::GetInstanceCountOutcome Sas-apiClient::getInstanceCount(const GetInstanceCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceCountOutcome(GetInstanceCountResult(outcome.result()));
	else
		return GetInstanceCountOutcome(outcome.error());
}

void Sas-apiClient::getInstanceCountAsync(const GetInstanceCountRequest& request, const GetInstanceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::GetInstanceCountOutcomeCallable Sas-apiClient::getInstanceCountCallable(const GetInstanceCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceCountOutcome()>>(
			[this, request]()
			{
			return this->getInstanceCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::DescribePerDateDataOutcome Sas-apiClient::describePerDateData(const DescribePerDateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePerDateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePerDateDataOutcome(DescribePerDateDataResult(outcome.result()));
	else
		return DescribePerDateDataOutcome(outcome.error());
}

void Sas-apiClient::describePerDateDataAsync(const DescribePerDateDataRequest& request, const DescribePerDateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePerDateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::DescribePerDateDataOutcomeCallable Sas-apiClient::describePerDateDataCallable(const DescribePerDateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePerDateDataOutcome()>>(
			[this, request]()
			{
			return this->describePerDateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::GetAccountProfileOutcome Sas-apiClient::getAccountProfile(const GetAccountProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountProfileOutcome(GetAccountProfileResult(outcome.result()));
	else
		return GetAccountProfileOutcome(outcome.error());
}

void Sas-apiClient::getAccountProfileAsync(const GetAccountProfileRequest& request, const GetAccountProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::GetAccountProfileOutcomeCallable Sas-apiClient::getAccountProfileCallable(const GetAccountProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountProfileOutcome()>>(
			[this, request]()
			{
			return this->getAccountProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::DescribeTotalAndRateLineOutcome Sas-apiClient::describeTotalAndRateLine(const DescribeTotalAndRateLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTotalAndRateLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTotalAndRateLineOutcome(DescribeTotalAndRateLineResult(outcome.result()));
	else
		return DescribeTotalAndRateLineOutcome(outcome.error());
}

void Sas-apiClient::describeTotalAndRateLineAsync(const DescribeTotalAndRateLineRequest& request, const DescribeTotalAndRateLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTotalAndRateLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::DescribeTotalAndRateLineOutcomeCallable Sas-apiClient::describeTotalAndRateLineCallable(const DescribeTotalAndRateLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTotalAndRateLineOutcome()>>(
			[this, request]()
			{
			return this->describeTotalAndRateLine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::GetIpProfileOutcome Sas-apiClient::getIpProfile(const GetIpProfileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetIpProfileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetIpProfileOutcome(GetIpProfileResult(outcome.result()));
	else
		return GetIpProfileOutcome(outcome.error());
}

void Sas-apiClient::getIpProfileAsync(const GetIpProfileRequest& request, const GetIpProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getIpProfile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::GetIpProfileOutcomeCallable Sas-apiClient::getIpProfileCallable(const GetIpProfileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetIpProfileOutcome()>>(
			[this, request]()
			{
			return this->getIpProfile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::DescribeHitRateColumnOutcome Sas-apiClient::describeHitRateColumn(const DescribeHitRateColumnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHitRateColumnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHitRateColumnOutcome(DescribeHitRateColumnResult(outcome.result()));
	else
		return DescribeHitRateColumnOutcome(outcome.error());
}

void Sas-apiClient::describeHitRateColumnAsync(const DescribeHitRateColumnRequest& request, const DescribeHitRateColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHitRateColumn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::DescribeHitRateColumnOutcomeCallable Sas-apiClient::describeHitRateColumnCallable(const DescribeHitRateColumnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHitRateColumnOutcome()>>(
			[this, request]()
			{
			return this->describeHitRateColumn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Sas-apiClient::DescribeHitRatePieOutcome Sas-apiClient::describeHitRatePie(const DescribeHitRatePieRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHitRatePieOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHitRatePieOutcome(DescribeHitRatePieResult(outcome.result()));
	else
		return DescribeHitRatePieOutcome(outcome.error());
}

void Sas-apiClient::describeHitRatePieAsync(const DescribeHitRatePieRequest& request, const DescribeHitRatePieAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHitRatePie(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Sas-apiClient::DescribeHitRatePieOutcomeCallable Sas-apiClient::describeHitRatePieCallable(const DescribeHitRatePieRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHitRatePieOutcome()>>(
			[this, request]()
			{
			return this->describeHitRatePie(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

