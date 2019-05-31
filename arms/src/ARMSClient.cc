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

#include <alibabacloud/arms/ARMSClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

namespace
{
	const std::string SERVICE_NAME = "ARMS";
}

ARMSClient::ARMSClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ARMSClient::ARMSClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ARMSClient::ARMSClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ARMSClient::~ARMSClient()
{}

ARMSClient::GetTraceOutcome ARMSClient::getTrace(const GetTraceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTraceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTraceOutcome(GetTraceResult(outcome.result()));
	else
		return GetTraceOutcome(outcome.error());
}

void ARMSClient::getTraceAsync(const GetTraceRequest& request, const GetTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTrace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetTraceOutcomeCallable ARMSClient::getTraceCallable(const GetTraceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTraceOutcome()>>(
			[this, request]()
			{
			return this->getTrace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchTracesOutcome ARMSClient::searchTraces(const SearchTracesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTracesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTracesOutcome(SearchTracesResult(outcome.result()));
	else
		return SearchTracesOutcome(outcome.error());
}

void ARMSClient::searchTracesAsync(const SearchTracesRequest& request, const SearchTracesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTraces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchTracesOutcomeCallable ARMSClient::searchTracesCallable(const SearchTracesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTracesOutcome()>>(
			[this, request]()
			{
			return this->searchTraces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::SearchTraceCountOutcome ARMSClient::searchTraceCount(const SearchTraceCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTraceCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTraceCountOutcome(SearchTraceCountResult(outcome.result()));
	else
		return SearchTraceCountOutcome(outcome.error());
}

void ARMSClient::searchTraceCountAsync(const SearchTraceCountRequest& request, const SearchTraceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTraceCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::SearchTraceCountOutcomeCallable ARMSClient::searchTraceCountCallable(const SearchTraceCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTraceCountOutcome()>>(
			[this, request]()
			{
			return this->searchTraceCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetTagKeyOutcome ARMSClient::getTagKey(const GetTagKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTagKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTagKeyOutcome(GetTagKeyResult(outcome.result()));
	else
		return GetTagKeyOutcome(outcome.error());
}

void ARMSClient::getTagKeyAsync(const GetTagKeyRequest& request, const GetTagKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTagKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetTagKeyOutcomeCallable ARMSClient::getTagKeyCallable(const GetTagKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTagKeyOutcome()>>(
			[this, request]()
			{
			return this->getTagKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::ARMSQueryDataSetOutcome ARMSClient::aRMSQueryDataSet(const ARMSQueryDataSetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ARMSQueryDataSetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ARMSQueryDataSetOutcome(ARMSQueryDataSetResult(outcome.result()));
	else
		return ARMSQueryDataSetOutcome(outcome.error());
}

void ARMSClient::aRMSQueryDataSetAsync(const ARMSQueryDataSetRequest& request, const ARMSQueryDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, aRMSQueryDataSet(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::ARMSQueryDataSetOutcomeCallable ARMSClient::aRMSQueryDataSetCallable(const ARMSQueryDataSetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ARMSQueryDataSetOutcome()>>(
			[this, request]()
			{
			return this->aRMSQueryDataSet(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetSpanNamesOutcome ARMSClient::getSpanNames(const GetSpanNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSpanNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSpanNamesOutcome(GetSpanNamesResult(outcome.result()));
	else
		return GetSpanNamesOutcome(outcome.error());
}

void ARMSClient::getSpanNamesAsync(const GetSpanNamesRequest& request, const GetSpanNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSpanNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetSpanNamesOutcomeCallable ARMSClient::getSpanNamesCallable(const GetSpanNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSpanNamesOutcome()>>(
			[this, request]()
			{
			return this->getSpanNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetServicesOutcome ARMSClient::getServices(const GetServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServicesOutcome(GetServicesResult(outcome.result()));
	else
		return GetServicesOutcome(outcome.error());
}

void ARMSClient::getServicesAsync(const GetServicesRequest& request, const GetServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetServicesOutcomeCallable ARMSClient::getServicesCallable(const GetServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServicesOutcome()>>(
			[this, request]()
			{
			return this->getServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::MetricQueryOutcome ARMSClient::metricQuery(const MetricQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MetricQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MetricQueryOutcome(MetricQueryResult(outcome.result()));
	else
		return MetricQueryOutcome(outcome.error());
}

void ARMSClient::metricQueryAsync(const MetricQueryRequest& request, const MetricQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, metricQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::MetricQueryOutcomeCallable ARMSClient::metricQueryCallable(const MetricQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MetricQueryOutcome()>>(
			[this, request]()
			{
			return this->metricQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ARMSClient::GetTagValOutcome ARMSClient::getTagVal(const GetTagValRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTagValOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTagValOutcome(GetTagValResult(outcome.result()));
	else
		return GetTagValOutcome(outcome.error());
}

void ARMSClient::getTagValAsync(const GetTagValRequest& request, const GetTagValAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTagVal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ARMSClient::GetTagValOutcomeCallable ARMSClient::getTagValCallable(const GetTagValRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTagValOutcome()>>(
			[this, request]()
			{
			return this->getTagVal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

