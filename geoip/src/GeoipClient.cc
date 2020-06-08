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

#include <alibabacloud/geoip/GeoipClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Geoip;
using namespace AlibabaCloud::Geoip::Model;

namespace
{
	const std::string SERVICE_NAME = "geoip";
}

GeoipClient::GeoipClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "geoip");
}

GeoipClient::GeoipClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "geoip");
}

GeoipClient::GeoipClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "geoip");
}

GeoipClient::~GeoipClient()
{}

GeoipClient::DescribeGeoipInstanceOutcome GeoipClient::describeGeoipInstance(const DescribeGeoipInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGeoipInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGeoipInstanceOutcome(DescribeGeoipInstanceResult(outcome.result()));
	else
		return DescribeGeoipInstanceOutcome(outcome.error());
}

void GeoipClient::describeGeoipInstanceAsync(const DescribeGeoipInstanceRequest& request, const DescribeGeoipInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGeoipInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GeoipClient::DescribeGeoipInstanceOutcomeCallable GeoipClient::describeGeoipInstanceCallable(const DescribeGeoipInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGeoipInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeGeoipInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GeoipClient::DescribeGeoipInstanceDataInfosOutcome GeoipClient::describeGeoipInstanceDataInfos(const DescribeGeoipInstanceDataInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGeoipInstanceDataInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGeoipInstanceDataInfosOutcome(DescribeGeoipInstanceDataInfosResult(outcome.result()));
	else
		return DescribeGeoipInstanceDataInfosOutcome(outcome.error());
}

void GeoipClient::describeGeoipInstanceDataInfosAsync(const DescribeGeoipInstanceDataInfosRequest& request, const DescribeGeoipInstanceDataInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGeoipInstanceDataInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GeoipClient::DescribeGeoipInstanceDataInfosOutcomeCallable GeoipClient::describeGeoipInstanceDataInfosCallable(const DescribeGeoipInstanceDataInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGeoipInstanceDataInfosOutcome()>>(
			[this, request]()
			{
			return this->describeGeoipInstanceDataInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GeoipClient::DescribeGeoipInstanceDataUrlOutcome GeoipClient::describeGeoipInstanceDataUrl(const DescribeGeoipInstanceDataUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGeoipInstanceDataUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGeoipInstanceDataUrlOutcome(DescribeGeoipInstanceDataUrlResult(outcome.result()));
	else
		return DescribeGeoipInstanceDataUrlOutcome(outcome.error());
}

void GeoipClient::describeGeoipInstanceDataUrlAsync(const DescribeGeoipInstanceDataUrlRequest& request, const DescribeGeoipInstanceDataUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGeoipInstanceDataUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GeoipClient::DescribeGeoipInstanceDataUrlOutcomeCallable GeoipClient::describeGeoipInstanceDataUrlCallable(const DescribeGeoipInstanceDataUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGeoipInstanceDataUrlOutcome()>>(
			[this, request]()
			{
			return this->describeGeoipInstanceDataUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GeoipClient::DescribeGeoipInstanceStatisticsOutcome GeoipClient::describeGeoipInstanceStatistics(const DescribeGeoipInstanceStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGeoipInstanceStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGeoipInstanceStatisticsOutcome(DescribeGeoipInstanceStatisticsResult(outcome.result()));
	else
		return DescribeGeoipInstanceStatisticsOutcome(outcome.error());
}

void GeoipClient::describeGeoipInstanceStatisticsAsync(const DescribeGeoipInstanceStatisticsRequest& request, const DescribeGeoipInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGeoipInstanceStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GeoipClient::DescribeGeoipInstanceStatisticsOutcomeCallable GeoipClient::describeGeoipInstanceStatisticsCallable(const DescribeGeoipInstanceStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGeoipInstanceStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeGeoipInstanceStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GeoipClient::DescribeGeoipInstancesOutcome GeoipClient::describeGeoipInstances(const DescribeGeoipInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGeoipInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGeoipInstancesOutcome(DescribeGeoipInstancesResult(outcome.result()));
	else
		return DescribeGeoipInstancesOutcome(outcome.error());
}

void GeoipClient::describeGeoipInstancesAsync(const DescribeGeoipInstancesRequest& request, const DescribeGeoipInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGeoipInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GeoipClient::DescribeGeoipInstancesOutcomeCallable GeoipClient::describeGeoipInstancesCallable(const DescribeGeoipInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGeoipInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeGeoipInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GeoipClient::DescribeIpv4LocationOutcome GeoipClient::describeIpv4Location(const DescribeIpv4LocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpv4LocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpv4LocationOutcome(DescribeIpv4LocationResult(outcome.result()));
	else
		return DescribeIpv4LocationOutcome(outcome.error());
}

void GeoipClient::describeIpv4LocationAsync(const DescribeIpv4LocationRequest& request, const DescribeIpv4LocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpv4Location(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GeoipClient::DescribeIpv4LocationOutcomeCallable GeoipClient::describeIpv4LocationCallable(const DescribeIpv4LocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpv4LocationOutcome()>>(
			[this, request]()
			{
			return this->describeIpv4Location(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GeoipClient::DescribeIpv6LocationOutcome GeoipClient::describeIpv6Location(const DescribeIpv6LocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpv6LocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpv6LocationOutcome(DescribeIpv6LocationResult(outcome.result()));
	else
		return DescribeIpv6LocationOutcome(outcome.error());
}

void GeoipClient::describeIpv6LocationAsync(const DescribeIpv6LocationRequest& request, const DescribeIpv6LocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpv6Location(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GeoipClient::DescribeIpv6LocationOutcomeCallable GeoipClient::describeIpv6LocationCallable(const DescribeIpv6LocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpv6LocationOutcome()>>(
			[this, request]()
			{
			return this->describeIpv6Location(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

