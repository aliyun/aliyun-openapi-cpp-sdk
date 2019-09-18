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

#include <alibabacloud/openanalytics/OpenanalyticsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Openanalytics;
using namespace AlibabaCloud::Openanalytics::Model;

namespace
{
	const std::string SERVICE_NAME = "openanalytics";
}

OpenanalyticsClient::OpenanalyticsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "openanalytics");
}

OpenanalyticsClient::OpenanalyticsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "openanalytics");
}

OpenanalyticsClient::OpenanalyticsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "openanalytics");
}

OpenanalyticsClient::~OpenanalyticsClient()
{}

OpenanalyticsClient::CloseProductAccountOutcome OpenanalyticsClient::closeProductAccount(const CloseProductAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseProductAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseProductAccountOutcome(CloseProductAccountResult(outcome.result()));
	else
		return CloseProductAccountOutcome(outcome.error());
}

void OpenanalyticsClient::closeProductAccountAsync(const CloseProductAccountRequest& request, const CloseProductAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeProductAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenanalyticsClient::CloseProductAccountOutcomeCallable OpenanalyticsClient::closeProductAccountCallable(const CloseProductAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseProductAccountOutcome()>>(
			[this, request]()
			{
			return this->closeProductAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenanalyticsClient::DescribeRegionListOutcome OpenanalyticsClient::describeRegionList(const DescribeRegionListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionListOutcome(DescribeRegionListResult(outcome.result()));
	else
		return DescribeRegionListOutcome(outcome.error());
}

void OpenanalyticsClient::describeRegionListAsync(const DescribeRegionListRequest& request, const DescribeRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenanalyticsClient::DescribeRegionListOutcomeCallable OpenanalyticsClient::describeRegionListCallable(const DescribeRegionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionListOutcome()>>(
			[this, request]()
			{
			return this->describeRegionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenanalyticsClient::GetAllowIPOutcome OpenanalyticsClient::getAllowIP(const GetAllowIPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllowIPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllowIPOutcome(GetAllowIPResult(outcome.result()));
	else
		return GetAllowIPOutcome(outcome.error());
}

void OpenanalyticsClient::getAllowIPAsync(const GetAllowIPRequest& request, const GetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllowIP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenanalyticsClient::GetAllowIPOutcomeCallable OpenanalyticsClient::getAllowIPCallable(const GetAllowIPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllowIPOutcome()>>(
			[this, request]()
			{
			return this->getAllowIP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenanalyticsClient::GetEndPointByDomainOutcome OpenanalyticsClient::getEndPointByDomain(const GetEndPointByDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEndPointByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEndPointByDomainOutcome(GetEndPointByDomainResult(outcome.result()));
	else
		return GetEndPointByDomainOutcome(outcome.error());
}

void OpenanalyticsClient::getEndPointByDomainAsync(const GetEndPointByDomainRequest& request, const GetEndPointByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEndPointByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenanalyticsClient::GetEndPointByDomainOutcomeCallable OpenanalyticsClient::getEndPointByDomainCallable(const GetEndPointByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEndPointByDomainOutcome()>>(
			[this, request]()
			{
			return this->getEndPointByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenanalyticsClient::GetProductStatusOutcome OpenanalyticsClient::getProductStatus(const GetProductStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProductStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProductStatusOutcome(GetProductStatusResult(outcome.result()));
	else
		return GetProductStatusOutcome(outcome.error());
}

void OpenanalyticsClient::getProductStatusAsync(const GetProductStatusRequest& request, const GetProductStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProductStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenanalyticsClient::GetProductStatusOutcomeCallable OpenanalyticsClient::getProductStatusCallable(const GetProductStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProductStatusOutcome()>>(
			[this, request]()
			{
			return this->getProductStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenanalyticsClient::GetRegionStatusOutcome OpenanalyticsClient::getRegionStatus(const GetRegionStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRegionStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRegionStatusOutcome(GetRegionStatusResult(outcome.result()));
	else
		return GetRegionStatusOutcome(outcome.error());
}

void OpenanalyticsClient::getRegionStatusAsync(const GetRegionStatusRequest& request, const GetRegionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRegionStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenanalyticsClient::GetRegionStatusOutcomeCallable OpenanalyticsClient::getRegionStatusCallable(const GetRegionStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRegionStatusOutcome()>>(
			[this, request]()
			{
			return this->getRegionStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenanalyticsClient::OpenProductAccountOutcome OpenanalyticsClient::openProductAccount(const OpenProductAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenProductAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenProductAccountOutcome(OpenProductAccountResult(outcome.result()));
	else
		return OpenProductAccountOutcome(outcome.error());
}

void OpenanalyticsClient::openProductAccountAsync(const OpenProductAccountRequest& request, const OpenProductAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openProductAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenanalyticsClient::OpenProductAccountOutcomeCallable OpenanalyticsClient::openProductAccountCallable(const OpenProductAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenProductAccountOutcome()>>(
			[this, request]()
			{
			return this->openProductAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenanalyticsClient::QueryEndPointListOutcome OpenanalyticsClient::queryEndPointList(const QueryEndPointListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEndPointListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEndPointListOutcome(QueryEndPointListResult(outcome.result()));
	else
		return QueryEndPointListOutcome(outcome.error());
}

void OpenanalyticsClient::queryEndPointListAsync(const QueryEndPointListRequest& request, const QueryEndPointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEndPointList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenanalyticsClient::QueryEndPointListOutcomeCallable OpenanalyticsClient::queryEndPointListCallable(const QueryEndPointListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEndPointListOutcome()>>(
			[this, request]()
			{
			return this->queryEndPointList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OpenanalyticsClient::SetAllowIPOutcome OpenanalyticsClient::setAllowIP(const SetAllowIPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAllowIPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAllowIPOutcome(SetAllowIPResult(outcome.result()));
	else
		return SetAllowIPOutcome(outcome.error());
}

void OpenanalyticsClient::setAllowIPAsync(const SetAllowIPRequest& request, const SetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAllowIP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OpenanalyticsClient::SetAllowIPOutcomeCallable OpenanalyticsClient::setAllowIPCallable(const SetAllowIPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAllowIPOutcome()>>(
			[this, request]()
			{
			return this->setAllowIP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

