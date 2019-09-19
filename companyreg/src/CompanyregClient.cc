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

#include <alibabacloud/companyreg/CompanyregClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

namespace
{
	const std::string SERVICE_NAME = "companyreg";
}

CompanyregClient::CompanyregClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "companyreg");
}

CompanyregClient::CompanyregClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "companyreg");
}

CompanyregClient::CompanyregClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "companyreg");
}

CompanyregClient::~CompanyregClient()
{}

CompanyregClient::GenerateCompanyRegUploadPolicyOutcome CompanyregClient::generateCompanyRegUploadPolicy(const GenerateCompanyRegUploadPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateCompanyRegUploadPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateCompanyRegUploadPolicyOutcome(GenerateCompanyRegUploadPolicyResult(outcome.result()));
	else
		return GenerateCompanyRegUploadPolicyOutcome(outcome.error());
}

void CompanyregClient::generateCompanyRegUploadPolicyAsync(const GenerateCompanyRegUploadPolicyRequest& request, const GenerateCompanyRegUploadPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateCompanyRegUploadPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GenerateCompanyRegUploadPolicyOutcomeCallable CompanyregClient::generateCompanyRegUploadPolicyCallable(const GenerateCompanyRegUploadPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateCompanyRegUploadPolicyOutcome()>>(
			[this, request]()
			{
			return this->generateCompanyRegUploadPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::GetCompanyRegOrderOutcome CompanyregClient::getCompanyRegOrder(const GetCompanyRegOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCompanyRegOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCompanyRegOrderOutcome(GetCompanyRegOrderResult(outcome.result()));
	else
		return GetCompanyRegOrderOutcome(outcome.error());
}

void CompanyregClient::getCompanyRegOrderAsync(const GetCompanyRegOrderRequest& request, const GetCompanyRegOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCompanyRegOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::GetCompanyRegOrderOutcomeCallable CompanyregClient::getCompanyRegOrderCallable(const GetCompanyRegOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCompanyRegOrderOutcome()>>(
			[this, request]()
			{
			return this->getCompanyRegOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListCompanyRegConsultationsOutcome CompanyregClient::listCompanyRegConsultations(const ListCompanyRegConsultationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCompanyRegConsultationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCompanyRegConsultationsOutcome(ListCompanyRegConsultationsResult(outcome.result()));
	else
		return ListCompanyRegConsultationsOutcome(outcome.error());
}

void CompanyregClient::listCompanyRegConsultationsAsync(const ListCompanyRegConsultationsRequest& request, const ListCompanyRegConsultationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCompanyRegConsultations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListCompanyRegConsultationsOutcomeCallable CompanyregClient::listCompanyRegConsultationsCallable(const ListCompanyRegConsultationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCompanyRegConsultationsOutcome()>>(
			[this, request]()
			{
			return this->listCompanyRegConsultations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ListCompanyRegOrdersOutcome CompanyregClient::listCompanyRegOrders(const ListCompanyRegOrdersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCompanyRegOrdersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCompanyRegOrdersOutcome(ListCompanyRegOrdersResult(outcome.result()));
	else
		return ListCompanyRegOrdersOutcome(outcome.error());
}

void CompanyregClient::listCompanyRegOrdersAsync(const ListCompanyRegOrdersRequest& request, const ListCompanyRegOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCompanyRegOrders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ListCompanyRegOrdersOutcomeCallable CompanyregClient::listCompanyRegOrdersCallable(const ListCompanyRegOrdersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCompanyRegOrdersOutcome()>>(
			[this, request]()
			{
			return this->listCompanyRegOrders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::ProcessCompanyRegOrderOutcome CompanyregClient::processCompanyRegOrder(const ProcessCompanyRegOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ProcessCompanyRegOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ProcessCompanyRegOrderOutcome(ProcessCompanyRegOrderResult(outcome.result()));
	else
		return ProcessCompanyRegOrderOutcome(outcome.error());
}

void CompanyregClient::processCompanyRegOrderAsync(const ProcessCompanyRegOrderRequest& request, const ProcessCompanyRegOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, processCompanyRegOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::ProcessCompanyRegOrderOutcomeCallable CompanyregClient::processCompanyRegOrderCallable(const ProcessCompanyRegOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ProcessCompanyRegOrderOutcome()>>(
			[this, request]()
			{
			return this->processCompanyRegOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SendVcodeOutcome CompanyregClient::sendVcode(const SendVcodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendVcodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendVcodeOutcome(SendVcodeResult(outcome.result()));
	else
		return SendVcodeOutcome(outcome.error());
}

void CompanyregClient::sendVcodeAsync(const SendVcodeRequest& request, const SendVcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendVcode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SendVcodeOutcomeCallable CompanyregClient::sendVcodeCallable(const SendVcodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendVcodeOutcome()>>(
			[this, request]()
			{
			return this->sendVcode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SubmitCommunicationNoteOutcome CompanyregClient::submitCommunicationNote(const SubmitCommunicationNoteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCommunicationNoteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCommunicationNoteOutcome(SubmitCommunicationNoteResult(outcome.result()));
	else
		return SubmitCommunicationNoteOutcome(outcome.error());
}

void CompanyregClient::submitCommunicationNoteAsync(const SubmitCommunicationNoteRequest& request, const SubmitCommunicationNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCommunicationNote(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SubmitCommunicationNoteOutcomeCallable CompanyregClient::submitCommunicationNoteCallable(const SubmitCommunicationNoteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCommunicationNoteOutcome()>>(
			[this, request]()
			{
			return this->submitCommunicationNote(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CompanyregClient::SubmitConsultationOutcome CompanyregClient::submitConsultation(const SubmitConsultationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitConsultationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitConsultationOutcome(SubmitConsultationResult(outcome.result()));
	else
		return SubmitConsultationOutcome(outcome.error());
}

void CompanyregClient::submitConsultationAsync(const SubmitConsultationRequest& request, const SubmitConsultationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitConsultation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CompanyregClient::SubmitConsultationOutcomeCallable CompanyregClient::submitConsultationCallable(const SubmitConsultationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitConsultationOutcome()>>(
			[this, request]()
			{
			return this->submitConsultation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

