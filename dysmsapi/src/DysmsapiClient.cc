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

#include <alibabacloud/dysmsapi/DysmsapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dysmsapi;
using namespace AlibabaCloud::Dysmsapi::Model;

namespace
{
	const std::string SERVICE_NAME = "Dysmsapi";
}

DysmsapiClient::DysmsapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dysms");
}

DysmsapiClient::DysmsapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dysms");
}

DysmsapiClient::DysmsapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dysms");
}

DysmsapiClient::~DysmsapiClient()
{}

DysmsapiClient::AddSmsSignOutcome DysmsapiClient::addSmsSign(const AddSmsSignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSmsSignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSmsSignOutcome(AddSmsSignResult(outcome.result()));
	else
		return AddSmsSignOutcome(outcome.error());
}

void DysmsapiClient::addSmsSignAsync(const AddSmsSignRequest& request, const AddSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSmsSign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::AddSmsSignOutcomeCallable DysmsapiClient::addSmsSignCallable(const AddSmsSignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSmsSignOutcome()>>(
			[this, request]()
			{
			return this->addSmsSign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::AddSmsTemplateOutcome DysmsapiClient::addSmsTemplate(const AddSmsTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSmsTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSmsTemplateOutcome(AddSmsTemplateResult(outcome.result()));
	else
		return AddSmsTemplateOutcome(outcome.error());
}

void DysmsapiClient::addSmsTemplateAsync(const AddSmsTemplateRequest& request, const AddSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSmsTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::AddSmsTemplateOutcomeCallable DysmsapiClient::addSmsTemplateCallable(const AddSmsTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSmsTemplateOutcome()>>(
			[this, request]()
			{
			return this->addSmsTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::DeleteSmsSignOutcome DysmsapiClient::deleteSmsSign(const DeleteSmsSignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSmsSignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSmsSignOutcome(DeleteSmsSignResult(outcome.result()));
	else
		return DeleteSmsSignOutcome(outcome.error());
}

void DysmsapiClient::deleteSmsSignAsync(const DeleteSmsSignRequest& request, const DeleteSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSmsSign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::DeleteSmsSignOutcomeCallable DysmsapiClient::deleteSmsSignCallable(const DeleteSmsSignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSmsSignOutcome()>>(
			[this, request]()
			{
			return this->deleteSmsSign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::DeleteSmsTemplateOutcome DysmsapiClient::deleteSmsTemplate(const DeleteSmsTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSmsTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSmsTemplateOutcome(DeleteSmsTemplateResult(outcome.result()));
	else
		return DeleteSmsTemplateOutcome(outcome.error());
}

void DysmsapiClient::deleteSmsTemplateAsync(const DeleteSmsTemplateRequest& request, const DeleteSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSmsTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::DeleteSmsTemplateOutcomeCallable DysmsapiClient::deleteSmsTemplateCallable(const DeleteSmsTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSmsTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteSmsTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::ModifySmsSignOutcome DysmsapiClient::modifySmsSign(const ModifySmsSignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySmsSignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySmsSignOutcome(ModifySmsSignResult(outcome.result()));
	else
		return ModifySmsSignOutcome(outcome.error());
}

void DysmsapiClient::modifySmsSignAsync(const ModifySmsSignRequest& request, const ModifySmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySmsSign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::ModifySmsSignOutcomeCallable DysmsapiClient::modifySmsSignCallable(const ModifySmsSignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySmsSignOutcome()>>(
			[this, request]()
			{
			return this->modifySmsSign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::ModifySmsTemplateOutcome DysmsapiClient::modifySmsTemplate(const ModifySmsTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySmsTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySmsTemplateOutcome(ModifySmsTemplateResult(outcome.result()));
	else
		return ModifySmsTemplateOutcome(outcome.error());
}

void DysmsapiClient::modifySmsTemplateAsync(const ModifySmsTemplateRequest& request, const ModifySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySmsTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::ModifySmsTemplateOutcomeCallable DysmsapiClient::modifySmsTemplateCallable(const ModifySmsTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySmsTemplateOutcome()>>(
			[this, request]()
			{
			return this->modifySmsTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::QuerySendDetailsOutcome DysmsapiClient::querySendDetails(const QuerySendDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySendDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySendDetailsOutcome(QuerySendDetailsResult(outcome.result()));
	else
		return QuerySendDetailsOutcome(outcome.error());
}

void DysmsapiClient::querySendDetailsAsync(const QuerySendDetailsRequest& request, const QuerySendDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySendDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::QuerySendDetailsOutcomeCallable DysmsapiClient::querySendDetailsCallable(const QuerySendDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySendDetailsOutcome()>>(
			[this, request]()
			{
			return this->querySendDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::QuerySmsSignOutcome DysmsapiClient::querySmsSign(const QuerySmsSignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySmsSignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySmsSignOutcome(QuerySmsSignResult(outcome.result()));
	else
		return QuerySmsSignOutcome(outcome.error());
}

void DysmsapiClient::querySmsSignAsync(const QuerySmsSignRequest& request, const QuerySmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySmsSign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::QuerySmsSignOutcomeCallable DysmsapiClient::querySmsSignCallable(const QuerySmsSignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySmsSignOutcome()>>(
			[this, request]()
			{
			return this->querySmsSign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::QuerySmsTemplateOutcome DysmsapiClient::querySmsTemplate(const QuerySmsTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySmsTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySmsTemplateOutcome(QuerySmsTemplateResult(outcome.result()));
	else
		return QuerySmsTemplateOutcome(outcome.error());
}

void DysmsapiClient::querySmsTemplateAsync(const QuerySmsTemplateRequest& request, const QuerySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySmsTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::QuerySmsTemplateOutcomeCallable DysmsapiClient::querySmsTemplateCallable(const QuerySmsTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySmsTemplateOutcome()>>(
			[this, request]()
			{
			return this->querySmsTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::SendBatchSmsOutcome DysmsapiClient::sendBatchSms(const SendBatchSmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendBatchSmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendBatchSmsOutcome(SendBatchSmsResult(outcome.result()));
	else
		return SendBatchSmsOutcome(outcome.error());
}

void DysmsapiClient::sendBatchSmsAsync(const SendBatchSmsRequest& request, const SendBatchSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendBatchSms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::SendBatchSmsOutcomeCallable DysmsapiClient::sendBatchSmsCallable(const SendBatchSmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendBatchSmsOutcome()>>(
			[this, request]()
			{
			return this->sendBatchSms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DysmsapiClient::SendSmsOutcome DysmsapiClient::sendSms(const SendSmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendSmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendSmsOutcome(SendSmsResult(outcome.result()));
	else
		return SendSmsOutcome(outcome.error());
}

void DysmsapiClient::sendSmsAsync(const SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendSms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DysmsapiClient::SendSmsOutcomeCallable DysmsapiClient::sendSmsCallable(const SendSmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendSmsOutcome()>>(
			[this, request]()
			{
			return this->sendSms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

