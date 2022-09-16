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

#include <alibabacloud/antiddos-public/Antiddos_publicClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Antiddos_public;
using namespace AlibabaCloud::Antiddos_public::Model;

namespace
{
	const std::string SERVICE_NAME = "antiddos-public";
}

Antiddos_publicClient::Antiddos_publicClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ddosbasic");
}

Antiddos_publicClient::Antiddos_publicClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ddosbasic");
}

Antiddos_publicClient::Antiddos_publicClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ddosbasic");
}

Antiddos_publicClient::~Antiddos_publicClient()
{}

Antiddos_publicClient::DescribeBgpPackByIpOutcome Antiddos_publicClient::describeBgpPackByIp(const DescribeBgpPackByIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBgpPackByIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBgpPackByIpOutcome(DescribeBgpPackByIpResult(outcome.result()));
	else
		return DescribeBgpPackByIpOutcome(outcome.error());
}

void Antiddos_publicClient::describeBgpPackByIpAsync(const DescribeBgpPackByIpRequest& request, const DescribeBgpPackByIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBgpPackByIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeBgpPackByIpOutcomeCallable Antiddos_publicClient::describeBgpPackByIpCallable(const DescribeBgpPackByIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBgpPackByIpOutcome()>>(
			[this, request]()
			{
			return this->describeBgpPackByIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::DescribeCapOutcome Antiddos_publicClient::describeCap(const DescribeCapRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCapOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCapOutcome(DescribeCapResult(outcome.result()));
	else
		return DescribeCapOutcome(outcome.error());
}

void Antiddos_publicClient::describeCapAsync(const DescribeCapRequest& request, const DescribeCapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCap(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeCapOutcomeCallable Antiddos_publicClient::describeCapCallable(const DescribeCapRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCapOutcome()>>(
			[this, request]()
			{
			return this->describeCap(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::DescribeDdosCountOutcome Antiddos_publicClient::describeDdosCount(const DescribeDdosCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDdosCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDdosCountOutcome(DescribeDdosCountResult(outcome.result()));
	else
		return DescribeDdosCountOutcome(outcome.error());
}

void Antiddos_publicClient::describeDdosCountAsync(const DescribeDdosCountRequest& request, const DescribeDdosCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDdosCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeDdosCountOutcomeCallable Antiddos_publicClient::describeDdosCountCallable(const DescribeDdosCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDdosCountOutcome()>>(
			[this, request]()
			{
			return this->describeDdosCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::DescribeDdosCreditOutcome Antiddos_publicClient::describeDdosCredit(const DescribeDdosCreditRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDdosCreditOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDdosCreditOutcome(DescribeDdosCreditResult(outcome.result()));
	else
		return DescribeDdosCreditOutcome(outcome.error());
}

void Antiddos_publicClient::describeDdosCreditAsync(const DescribeDdosCreditRequest& request, const DescribeDdosCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDdosCredit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeDdosCreditOutcomeCallable Antiddos_publicClient::describeDdosCreditCallable(const DescribeDdosCreditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDdosCreditOutcome()>>(
			[this, request]()
			{
			return this->describeDdosCredit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::DescribeDdosEventListOutcome Antiddos_publicClient::describeDdosEventList(const DescribeDdosEventListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDdosEventListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDdosEventListOutcome(DescribeDdosEventListResult(outcome.result()));
	else
		return DescribeDdosEventListOutcome(outcome.error());
}

void Antiddos_publicClient::describeDdosEventListAsync(const DescribeDdosEventListRequest& request, const DescribeDdosEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDdosEventList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeDdosEventListOutcomeCallable Antiddos_publicClient::describeDdosEventListCallable(const DescribeDdosEventListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDdosEventListOutcome()>>(
			[this, request]()
			{
			return this->describeDdosEventList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::DescribeDdosThresholdOutcome Antiddos_publicClient::describeDdosThreshold(const DescribeDdosThresholdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDdosThresholdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDdosThresholdOutcome(DescribeDdosThresholdResult(outcome.result()));
	else
		return DescribeDdosThresholdOutcome(outcome.error());
}

void Antiddos_publicClient::describeDdosThresholdAsync(const DescribeDdosThresholdRequest& request, const DescribeDdosThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDdosThreshold(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeDdosThresholdOutcomeCallable Antiddos_publicClient::describeDdosThresholdCallable(const DescribeDdosThresholdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDdosThresholdOutcome()>>(
			[this, request]()
			{
			return this->describeDdosThreshold(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::DescribeInstanceOutcome Antiddos_publicClient::describeInstance(const DescribeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceOutcome(DescribeInstanceResult(outcome.result()));
	else
		return DescribeInstanceOutcome(outcome.error());
}

void Antiddos_publicClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeInstanceOutcomeCallable Antiddos_publicClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::DescribeInstanceIpAddressOutcome Antiddos_publicClient::describeInstanceIpAddress(const DescribeInstanceIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceIpAddressOutcome(DescribeInstanceIpAddressResult(outcome.result()));
	else
		return DescribeInstanceIpAddressOutcome(outcome.error());
}

void Antiddos_publicClient::describeInstanceIpAddressAsync(const DescribeInstanceIpAddressRequest& request, const DescribeInstanceIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstanceIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeInstanceIpAddressOutcomeCallable Antiddos_publicClient::describeInstanceIpAddressCallable(const DescribeInstanceIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceIpAddressOutcome()>>(
			[this, request]()
			{
			return this->describeInstanceIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::DescribeIpDdosThresholdOutcome Antiddos_publicClient::describeIpDdosThreshold(const DescribeIpDdosThresholdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpDdosThresholdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpDdosThresholdOutcome(DescribeIpDdosThresholdResult(outcome.result()));
	else
		return DescribeIpDdosThresholdOutcome(outcome.error());
}

void Antiddos_publicClient::describeIpDdosThresholdAsync(const DescribeIpDdosThresholdRequest& request, const DescribeIpDdosThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpDdosThreshold(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeIpDdosThresholdOutcomeCallable Antiddos_publicClient::describeIpDdosThresholdCallable(const DescribeIpDdosThresholdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpDdosThresholdOutcome()>>(
			[this, request]()
			{
			return this->describeIpDdosThreshold(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::DescribeIpLocationServiceOutcome Antiddos_publicClient::describeIpLocationService(const DescribeIpLocationServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpLocationServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpLocationServiceOutcome(DescribeIpLocationServiceResult(outcome.result()));
	else
		return DescribeIpLocationServiceOutcome(outcome.error());
}

void Antiddos_publicClient::describeIpLocationServiceAsync(const DescribeIpLocationServiceRequest& request, const DescribeIpLocationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpLocationService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeIpLocationServiceOutcomeCallable Antiddos_publicClient::describeIpLocationServiceCallable(const DescribeIpLocationServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpLocationServiceOutcome()>>(
			[this, request]()
			{
			return this->describeIpLocationService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::DescribeRegionsOutcome Antiddos_publicClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void Antiddos_publicClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::DescribeRegionsOutcomeCallable Antiddos_publicClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::ModifyDdosStatusOutcome Antiddos_publicClient::modifyDdosStatus(const ModifyDdosStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDdosStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDdosStatusOutcome(ModifyDdosStatusResult(outcome.result()));
	else
		return ModifyDdosStatusOutcome(outcome.error());
}

void Antiddos_publicClient::modifyDdosStatusAsync(const ModifyDdosStatusRequest& request, const ModifyDdosStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDdosStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::ModifyDdosStatusOutcomeCallable Antiddos_publicClient::modifyDdosStatusCallable(const ModifyDdosStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDdosStatusOutcome()>>(
			[this, request]()
			{
			return this->modifyDdosStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::ModifyDefenseThresholdOutcome Antiddos_publicClient::modifyDefenseThreshold(const ModifyDefenseThresholdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDefenseThresholdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDefenseThresholdOutcome(ModifyDefenseThresholdResult(outcome.result()));
	else
		return ModifyDefenseThresholdOutcome(outcome.error());
}

void Antiddos_publicClient::modifyDefenseThresholdAsync(const ModifyDefenseThresholdRequest& request, const ModifyDefenseThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDefenseThreshold(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::ModifyDefenseThresholdOutcomeCallable Antiddos_publicClient::modifyDefenseThresholdCallable(const ModifyDefenseThresholdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDefenseThresholdOutcome()>>(
			[this, request]()
			{
			return this->modifyDefenseThreshold(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Antiddos_publicClient::ModifyIpDefenseThresholdOutcome Antiddos_publicClient::modifyIpDefenseThreshold(const ModifyIpDefenseThresholdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpDefenseThresholdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpDefenseThresholdOutcome(ModifyIpDefenseThresholdResult(outcome.result()));
	else
		return ModifyIpDefenseThresholdOutcome(outcome.error());
}

void Antiddos_publicClient::modifyIpDefenseThresholdAsync(const ModifyIpDefenseThresholdRequest& request, const ModifyIpDefenseThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpDefenseThreshold(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Antiddos_publicClient::ModifyIpDefenseThresholdOutcomeCallable Antiddos_publicClient::modifyIpDefenseThresholdCallable(const ModifyIpDefenseThresholdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpDefenseThresholdOutcome()>>(
			[this, request]()
			{
			return this->modifyIpDefenseThreshold(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

