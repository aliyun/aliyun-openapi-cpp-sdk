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

#include <alibabacloud/xtrace/XtraceClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Xtrace;
using namespace AlibabaCloud::Xtrace::Model;

namespace
{
	const std::string SERVICE_NAME = "xtrace";
}

XtraceClient::XtraceClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

XtraceClient::XtraceClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

XtraceClient::XtraceClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

XtraceClient::~XtraceClient()
{}

XtraceClient::GetTagKeyOutcome XtraceClient::getTagKey(const GetTagKeyRequest &request) const
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

void XtraceClient::getTagKeyAsync(const GetTagKeyRequest& request, const GetTagKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTagKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XtraceClient::GetTagKeyOutcomeCallable XtraceClient::getTagKeyCallable(const GetTagKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTagKeyOutcome()>>(
			[this, request]()
			{
			return this->getTagKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

XtraceClient::GetTagValOutcome XtraceClient::getTagVal(const GetTagValRequest &request) const
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

void XtraceClient::getTagValAsync(const GetTagValRequest& request, const GetTagValAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTagVal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XtraceClient::GetTagValOutcomeCallable XtraceClient::getTagValCallable(const GetTagValRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTagValOutcome()>>(
			[this, request]()
			{
			return this->getTagVal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

XtraceClient::GetTokenOutcome XtraceClient::getToken(const GetTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTokenOutcome(GetTokenResult(outcome.result()));
	else
		return GetTokenOutcome(outcome.error());
}

void XtraceClient::getTokenAsync(const GetTokenRequest& request, const GetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XtraceClient::GetTokenOutcomeCallable XtraceClient::getTokenCallable(const GetTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTokenOutcome()>>(
			[this, request]()
			{
			return this->getToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

XtraceClient::GetTraceOutcome XtraceClient::getTrace(const GetTraceRequest &request) const
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

void XtraceClient::getTraceAsync(const GetTraceRequest& request, const GetTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTrace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XtraceClient::GetTraceOutcomeCallable XtraceClient::getTraceCallable(const GetTraceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTraceOutcome()>>(
			[this, request]()
			{
			return this->getTrace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

XtraceClient::GetTraceAnalysisOutcome XtraceClient::getTraceAnalysis(const GetTraceAnalysisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTraceAnalysisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTraceAnalysisOutcome(GetTraceAnalysisResult(outcome.result()));
	else
		return GetTraceAnalysisOutcome(outcome.error());
}

void XtraceClient::getTraceAnalysisAsync(const GetTraceAnalysisRequest& request, const GetTraceAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTraceAnalysis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XtraceClient::GetTraceAnalysisOutcomeCallable XtraceClient::getTraceAnalysisCallable(const GetTraceAnalysisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTraceAnalysisOutcome()>>(
			[this, request]()
			{
			return this->getTraceAnalysis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

XtraceClient::ListIpOrHostsOutcome XtraceClient::listIpOrHosts(const ListIpOrHostsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIpOrHostsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIpOrHostsOutcome(ListIpOrHostsResult(outcome.result()));
	else
		return ListIpOrHostsOutcome(outcome.error());
}

void XtraceClient::listIpOrHostsAsync(const ListIpOrHostsRequest& request, const ListIpOrHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIpOrHosts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XtraceClient::ListIpOrHostsOutcomeCallable XtraceClient::listIpOrHostsCallable(const ListIpOrHostsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIpOrHostsOutcome()>>(
			[this, request]()
			{
			return this->listIpOrHosts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

XtraceClient::ListServicesOutcome XtraceClient::listServices(const ListServicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListServicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListServicesOutcome(ListServicesResult(outcome.result()));
	else
		return ListServicesOutcome(outcome.error());
}

void XtraceClient::listServicesAsync(const ListServicesRequest& request, const ListServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listServices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XtraceClient::ListServicesOutcomeCallable XtraceClient::listServicesCallable(const ListServicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListServicesOutcome()>>(
			[this, request]()
			{
			return this->listServices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

XtraceClient::ListSpanNamesOutcome XtraceClient::listSpanNames(const ListSpanNamesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSpanNamesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSpanNamesOutcome(ListSpanNamesResult(outcome.result()));
	else
		return ListSpanNamesOutcome(outcome.error());
}

void XtraceClient::listSpanNamesAsync(const ListSpanNamesRequest& request, const ListSpanNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSpanNames(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XtraceClient::ListSpanNamesOutcomeCallable XtraceClient::listSpanNamesCallable(const ListSpanNamesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSpanNamesOutcome()>>(
			[this, request]()
			{
			return this->listSpanNames(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

XtraceClient::QueryMetricOutcome XtraceClient::queryMetric(const QueryMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMetricOutcome(QueryMetricResult(outcome.result()));
	else
		return QueryMetricOutcome(outcome.error());
}

void XtraceClient::queryMetricAsync(const QueryMetricRequest& request, const QueryMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XtraceClient::QueryMetricOutcomeCallable XtraceClient::queryMetricCallable(const QueryMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMetricOutcome()>>(
			[this, request]()
			{
			return this->queryMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

XtraceClient::SearchTracesOutcome XtraceClient::searchTraces(const SearchTracesRequest &request) const
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

void XtraceClient::searchTracesAsync(const SearchTracesRequest& request, const SearchTracesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTraces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

XtraceClient::SearchTracesOutcomeCallable XtraceClient::searchTracesCallable(const SearchTracesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTracesOutcome()>>(
			[this, request]()
			{
			return this->searchTraces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

