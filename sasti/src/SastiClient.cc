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

#include <alibabacloud/sasti/SastiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Sasti;
using namespace AlibabaCloud::Sasti::Model;

namespace
{
	const std::string SERVICE_NAME = "Sasti";
}

SastiClient::SastiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SastiClient::SastiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SastiClient::SastiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

SastiClient::~SastiClient()
{}

SastiClient::DescribeDomainReportOutcome SastiClient::describeDomainReport(const DescribeDomainReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainReportOutcome(DescribeDomainReportResult(outcome.result()));
	else
		return DescribeDomainReportOutcome(outcome.error());
}

void SastiClient::describeDomainReportAsync(const DescribeDomainReportRequest& request, const DescribeDomainReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SastiClient::DescribeDomainReportOutcomeCallable SastiClient::describeDomainReportCallable(const DescribeDomainReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainReportOutcome()>>(
			[this, request]()
			{
			return this->describeDomainReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SastiClient::DescribeFileReportOutcome SastiClient::describeFileReport(const DescribeFileReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeFileReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeFileReportOutcome(DescribeFileReportResult(outcome.result()));
	else
		return DescribeFileReportOutcome(outcome.error());
}

void SastiClient::describeFileReportAsync(const DescribeFileReportRequest& request, const DescribeFileReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeFileReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SastiClient::DescribeFileReportOutcomeCallable SastiClient::describeFileReportCallable(const DescribeFileReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeFileReportOutcome()>>(
			[this, request]()
			{
			return this->describeFileReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SastiClient::DescribeIpReportOutcome SastiClient::describeIpReport(const DescribeIpReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpReportOutcome(DescribeIpReportResult(outcome.result()));
	else
		return DescribeIpReportOutcome(outcome.error());
}

void SastiClient::describeIpReportAsync(const DescribeIpReportRequest& request, const DescribeIpReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SastiClient::DescribeIpReportOutcomeCallable SastiClient::describeIpReportCallable(const DescribeIpReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpReportOutcome()>>(
			[this, request]()
			{
			return this->describeIpReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

SastiClient::GetGraphQueryTemplatesOutcome SastiClient::getGraphQueryTemplates(const GetGraphQueryTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGraphQueryTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGraphQueryTemplatesOutcome(GetGraphQueryTemplatesResult(outcome.result()));
	else
		return GetGraphQueryTemplatesOutcome(outcome.error());
}

void SastiClient::getGraphQueryTemplatesAsync(const GetGraphQueryTemplatesRequest& request, const GetGraphQueryTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGraphQueryTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

SastiClient::GetGraphQueryTemplatesOutcomeCallable SastiClient::getGraphQueryTemplatesCallable(const GetGraphQueryTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGraphQueryTemplatesOutcome()>>(
			[this, request]()
			{
			return this->getGraphQueryTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

