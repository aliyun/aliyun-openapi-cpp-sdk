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

#include <alibabacloud/dyvmsapi/DyvmsapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dyvmsapi;
using namespace AlibabaCloud::Dyvmsapi::Model;

namespace
{
	const std::string SERVICE_NAME = "Dyvmsapi";
}

DyvmsapiClient::DyvmsapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DyvmsapiClient::DyvmsapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DyvmsapiClient::DyvmsapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DyvmsapiClient::~DyvmsapiClient()
{}

DyvmsapiClient::SmartCallOutcome DyvmsapiClient::smartCall(const SmartCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SmartCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SmartCallOutcome(SmartCallResult(outcome.result()));
	else
		return SmartCallOutcome(outcome.error());
}

void DyvmsapiClient::smartCallAsync(const SmartCallRequest& request, const SmartCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, smartCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::SmartCallOutcomeCallable DyvmsapiClient::smartCallCallable(const SmartCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SmartCallOutcome()>>(
			[this, request]()
			{
			return this->smartCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::QueryCallDetailByCallIdOutcome DyvmsapiClient::queryCallDetailByCallId(const QueryCallDetailByCallIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCallDetailByCallIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCallDetailByCallIdOutcome(QueryCallDetailByCallIdResult(outcome.result()));
	else
		return QueryCallDetailByCallIdOutcome(outcome.error());
}

void DyvmsapiClient::queryCallDetailByCallIdAsync(const QueryCallDetailByCallIdRequest& request, const QueryCallDetailByCallIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCallDetailByCallId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::QueryCallDetailByCallIdOutcomeCallable DyvmsapiClient::queryCallDetailByCallIdCallable(const QueryCallDetailByCallIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCallDetailByCallIdOutcome()>>(
			[this, request]()
			{
			return this->queryCallDetailByCallId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::VoipAddAccountOutcome DyvmsapiClient::voipAddAccount(const VoipAddAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoipAddAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoipAddAccountOutcome(VoipAddAccountResult(outcome.result()));
	else
		return VoipAddAccountOutcome(outcome.error());
}

void DyvmsapiClient::voipAddAccountAsync(const VoipAddAccountRequest& request, const VoipAddAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voipAddAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::VoipAddAccountOutcomeCallable DyvmsapiClient::voipAddAccountCallable(const VoipAddAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoipAddAccountOutcome()>>(
			[this, request]()
			{
			return this->voipAddAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::CancelCallOutcome DyvmsapiClient::cancelCall(const CancelCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCallOutcome(CancelCallResult(outcome.result()));
	else
		return CancelCallOutcome(outcome.error());
}

void DyvmsapiClient::cancelCallAsync(const CancelCallRequest& request, const CancelCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::CancelCallOutcomeCallable DyvmsapiClient::cancelCallCallable(const CancelCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCallOutcome()>>(
			[this, request]()
			{
			return this->cancelCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::VoipGetTokenOutcome DyvmsapiClient::voipGetToken(const VoipGetTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoipGetTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoipGetTokenOutcome(VoipGetTokenResult(outcome.result()));
	else
		return VoipGetTokenOutcome(outcome.error());
}

void DyvmsapiClient::voipGetTokenAsync(const VoipGetTokenRequest& request, const VoipGetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voipGetToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::VoipGetTokenOutcomeCallable DyvmsapiClient::voipGetTokenCallable(const VoipGetTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoipGetTokenOutcome()>>(
			[this, request]()
			{
			return this->voipGetToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::ClickToDialOutcome DyvmsapiClient::clickToDial(const ClickToDialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClickToDialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClickToDialOutcome(ClickToDialResult(outcome.result()));
	else
		return ClickToDialOutcome(outcome.error());
}

void DyvmsapiClient::clickToDialAsync(const ClickToDialRequest& request, const ClickToDialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clickToDial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::ClickToDialOutcomeCallable DyvmsapiClient::clickToDialCallable(const ClickToDialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClickToDialOutcome()>>(
			[this, request]()
			{
			return this->clickToDial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::IvrCallOutcome DyvmsapiClient::ivrCall(const IvrCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IvrCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IvrCallOutcome(IvrCallResult(outcome.result()));
	else
		return IvrCallOutcome(outcome.error());
}

void DyvmsapiClient::ivrCallAsync(const IvrCallRequest& request, const IvrCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ivrCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::IvrCallOutcomeCallable DyvmsapiClient::ivrCallCallable(const IvrCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IvrCallOutcome()>>(
			[this, request]()
			{
			return this->ivrCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::SingleCallByVoiceOutcome DyvmsapiClient::singleCallByVoice(const SingleCallByVoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SingleCallByVoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SingleCallByVoiceOutcome(SingleCallByVoiceResult(outcome.result()));
	else
		return SingleCallByVoiceOutcome(outcome.error());
}

void DyvmsapiClient::singleCallByVoiceAsync(const SingleCallByVoiceRequest& request, const SingleCallByVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, singleCallByVoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::SingleCallByVoiceOutcomeCallable DyvmsapiClient::singleCallByVoiceCallable(const SingleCallByVoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SingleCallByVoiceOutcome()>>(
			[this, request]()
			{
			return this->singleCallByVoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyvmsapiClient::SingleCallByTtsOutcome DyvmsapiClient::singleCallByTts(const SingleCallByTtsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SingleCallByTtsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SingleCallByTtsOutcome(SingleCallByTtsResult(outcome.result()));
	else
		return SingleCallByTtsOutcome(outcome.error());
}

void DyvmsapiClient::singleCallByTtsAsync(const SingleCallByTtsRequest& request, const SingleCallByTtsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, singleCallByTts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyvmsapiClient::SingleCallByTtsOutcomeCallable DyvmsapiClient::singleCallByTtsCallable(const SingleCallByTtsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SingleCallByTtsOutcome()>>(
			[this, request]()
			{
			return this->singleCallByTts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

