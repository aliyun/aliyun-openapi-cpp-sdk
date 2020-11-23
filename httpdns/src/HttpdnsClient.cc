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

#include <alibabacloud/httpdns/HttpdnsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Httpdns;
using namespace AlibabaCloud::Httpdns::Model;

namespace
{
	const std::string SERVICE_NAME = "Httpdns";
}

HttpdnsClient::HttpdnsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

HttpdnsClient::HttpdnsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

HttpdnsClient::HttpdnsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

HttpdnsClient::~HttpdnsClient()
{}

HttpdnsClient::AddDomainOutcome HttpdnsClient::addDomain(const AddDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDomainOutcome(AddDomainResult(outcome.result()));
	else
		return AddDomainOutcome(outcome.error());
}

void HttpdnsClient::addDomainAsync(const AddDomainRequest& request, const AddDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HttpdnsClient::AddDomainOutcomeCallable HttpdnsClient::addDomainCallable(const AddDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDomainOutcome()>>(
			[this, request]()
			{
			return this->addDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HttpdnsClient::DeleteDomainOutcome HttpdnsClient::deleteDomain(const DeleteDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDomainOutcome(DeleteDomainResult(outcome.result()));
	else
		return DeleteDomainOutcome(outcome.error());
}

void HttpdnsClient::deleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HttpdnsClient::DeleteDomainOutcomeCallable HttpdnsClient::deleteDomainCallable(const DeleteDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HttpdnsClient::DescribeDomainsOutcome HttpdnsClient::describeDomains(const DescribeDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainsOutcome(DescribeDomainsResult(outcome.result()));
	else
		return DescribeDomainsOutcome(outcome.error());
}

void HttpdnsClient::describeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HttpdnsClient::DescribeDomainsOutcomeCallable HttpdnsClient::describeDomainsCallable(const DescribeDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HttpdnsClient::GetAccountInfoOutcome HttpdnsClient::getAccountInfo(const GetAccountInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAccountInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAccountInfoOutcome(GetAccountInfoResult(outcome.result()));
	else
		return GetAccountInfoOutcome(outcome.error());
}

void HttpdnsClient::getAccountInfoAsync(const GetAccountInfoRequest& request, const GetAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAccountInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HttpdnsClient::GetAccountInfoOutcomeCallable HttpdnsClient::getAccountInfoCallable(const GetAccountInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAccountInfoOutcome()>>(
			[this, request]()
			{
			return this->getAccountInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HttpdnsClient::GetResolveCountSummaryOutcome HttpdnsClient::getResolveCountSummary(const GetResolveCountSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResolveCountSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResolveCountSummaryOutcome(GetResolveCountSummaryResult(outcome.result()));
	else
		return GetResolveCountSummaryOutcome(outcome.error());
}

void HttpdnsClient::getResolveCountSummaryAsync(const GetResolveCountSummaryRequest& request, const GetResolveCountSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResolveCountSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HttpdnsClient::GetResolveCountSummaryOutcomeCallable HttpdnsClient::getResolveCountSummaryCallable(const GetResolveCountSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResolveCountSummaryOutcome()>>(
			[this, request]()
			{
			return this->getResolveCountSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HttpdnsClient::GetResolveStatisticsOutcome HttpdnsClient::getResolveStatistics(const GetResolveStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetResolveStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetResolveStatisticsOutcome(GetResolveStatisticsResult(outcome.result()));
	else
		return GetResolveStatisticsOutcome(outcome.error());
}

void HttpdnsClient::getResolveStatisticsAsync(const GetResolveStatisticsRequest& request, const GetResolveStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getResolveStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HttpdnsClient::GetResolveStatisticsOutcomeCallable HttpdnsClient::getResolveStatisticsCallable(const GetResolveStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetResolveStatisticsOutcome()>>(
			[this, request]()
			{
			return this->getResolveStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HttpdnsClient::ListDomainsOutcome HttpdnsClient::listDomains(const ListDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDomainsOutcome(ListDomainsResult(outcome.result()));
	else
		return ListDomainsOutcome(outcome.error());
}

void HttpdnsClient::listDomainsAsync(const ListDomainsRequest& request, const ListDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HttpdnsClient::ListDomainsOutcomeCallable HttpdnsClient::listDomainsCallable(const ListDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDomainsOutcome()>>(
			[this, request]()
			{
			return this->listDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

