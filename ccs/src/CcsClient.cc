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

#include <alibabacloud/ccs/CcsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ccs;
using namespace AlibabaCloud::Ccs::Model;

namespace
{
	const std::string SERVICE_NAME = "Ccs";
}

CcsClient::CcsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ccs");
}

CcsClient::CcsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ccs");
}

CcsClient::CcsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ccs");
}

CcsClient::~CcsClient()
{}

CcsClient::CreateTicketOutcome CcsClient::createTicket(const CreateTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTicketOutcome(CreateTicketResult(outcome.result()));
	else
		return CreateTicketOutcome(outcome.error());
}

void CcsClient::createTicketAsync(const CreateTicketRequest& request, const CreateTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CcsClient::CreateTicketOutcomeCallable CcsClient::createTicketCallable(const CreateTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTicketOutcome()>>(
			[this, request]()
			{
			return this->createTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CcsClient::GetHotlineRecordOutcome CcsClient::getHotlineRecord(const GetHotlineRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHotlineRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHotlineRecordOutcome(GetHotlineRecordResult(outcome.result()));
	else
		return GetHotlineRecordOutcome(outcome.error());
}

void CcsClient::getHotlineRecordAsync(const GetHotlineRecordRequest& request, const GetHotlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHotlineRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CcsClient::GetHotlineRecordOutcomeCallable CcsClient::getHotlineRecordCallable(const GetHotlineRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHotlineRecordOutcome()>>(
			[this, request]()
			{
			return this->getHotlineRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CcsClient::ProceedTicketOutcome CcsClient::proceedTicket(const ProceedTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProceedTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProceedTicketOutcome(ProceedTicketResult(outcome.result()));
	else
		return ProceedTicketOutcome(outcome.error());
}

void CcsClient::proceedTicketAsync(const ProceedTicketRequest& request, const ProceedTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, proceedTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CcsClient::ProceedTicketOutcomeCallable CcsClient::proceedTicketCallable(const ProceedTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProceedTicketOutcome()>>(
			[this, request]()
			{
			return this->proceedTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CcsClient::QueryHotlineRecordOutcome CcsClient::queryHotlineRecord(const QueryHotlineRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryHotlineRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryHotlineRecordOutcome(QueryHotlineRecordResult(outcome.result()));
	else
		return QueryHotlineRecordOutcome(outcome.error());
}

void CcsClient::queryHotlineRecordAsync(const QueryHotlineRecordRequest& request, const QueryHotlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryHotlineRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CcsClient::QueryHotlineRecordOutcomeCallable CcsClient::queryHotlineRecordCallable(const QueryHotlineRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryHotlineRecordOutcome()>>(
			[this, request]()
			{
			return this->queryHotlineRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CcsClient::QueryTicketOutcome CcsClient::queryTicket(const QueryTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTicketOutcome(QueryTicketResult(outcome.result()));
	else
		return QueryTicketOutcome(outcome.error());
}

void CcsClient::queryTicketAsync(const QueryTicketRequest& request, const QueryTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CcsClient::QueryTicketOutcomeCallable CcsClient::queryTicketCallable(const QueryTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTicketOutcome()>>(
			[this, request]()
			{
			return this->queryTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

