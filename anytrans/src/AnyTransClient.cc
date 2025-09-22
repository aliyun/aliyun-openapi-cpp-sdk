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

#include <alibabacloud/anytrans/AnyTransClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::AnyTrans;
using namespace AlibabaCloud::AnyTrans::Model;

namespace
{
	const std::string SERVICE_NAME = "AnyTrans";
}

AnyTransClient::AnyTransClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AnyTransClient::AnyTransClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AnyTransClient::AnyTransClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AnyTransClient::~AnyTransClient()
{}

AnyTransClient::BatchTranslateOutcome AnyTransClient::batchTranslate(const BatchTranslateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchTranslateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchTranslateOutcome(BatchTranslateResult(outcome.result()));
	else
		return BatchTranslateOutcome(outcome.error());
}

void AnyTransClient::batchTranslateAsync(const BatchTranslateRequest& request, const BatchTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchTranslate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AnyTransClient::BatchTranslateOutcomeCallable AnyTransClient::batchTranslateCallable(const BatchTranslateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchTranslateOutcome()>>(
			[this, request]()
			{
			return this->batchTranslate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AnyTransClient::GetDocTranslateTaskOutcome AnyTransClient::getDocTranslateTask(const GetDocTranslateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDocTranslateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDocTranslateTaskOutcome(GetDocTranslateTaskResult(outcome.result()));
	else
		return GetDocTranslateTaskOutcome(outcome.error());
}

void AnyTransClient::getDocTranslateTaskAsync(const GetDocTranslateTaskRequest& request, const GetDocTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDocTranslateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AnyTransClient::GetDocTranslateTaskOutcomeCallable AnyTransClient::getDocTranslateTaskCallable(const GetDocTranslateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDocTranslateTaskOutcome()>>(
			[this, request]()
			{
			return this->getDocTranslateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AnyTransClient::GetHtmlTranslateTaskOutcome AnyTransClient::getHtmlTranslateTask(const GetHtmlTranslateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHtmlTranslateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHtmlTranslateTaskOutcome(GetHtmlTranslateTaskResult(outcome.result()));
	else
		return GetHtmlTranslateTaskOutcome(outcome.error());
}

void AnyTransClient::getHtmlTranslateTaskAsync(const GetHtmlTranslateTaskRequest& request, const GetHtmlTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHtmlTranslateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AnyTransClient::GetHtmlTranslateTaskOutcomeCallable AnyTransClient::getHtmlTranslateTaskCallable(const GetHtmlTranslateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHtmlTranslateTaskOutcome()>>(
			[this, request]()
			{
			return this->getHtmlTranslateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AnyTransClient::GetImageTranslateTaskOutcome AnyTransClient::getImageTranslateTask(const GetImageTranslateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetImageTranslateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetImageTranslateTaskOutcome(GetImageTranslateTaskResult(outcome.result()));
	else
		return GetImageTranslateTaskOutcome(outcome.error());
}

void AnyTransClient::getImageTranslateTaskAsync(const GetImageTranslateTaskRequest& request, const GetImageTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getImageTranslateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AnyTransClient::GetImageTranslateTaskOutcomeCallable AnyTransClient::getImageTranslateTaskCallable(const GetImageTranslateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetImageTranslateTaskOutcome()>>(
			[this, request]()
			{
			return this->getImageTranslateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AnyTransClient::GetLongTextTranslateTaskOutcome AnyTransClient::getLongTextTranslateTask(const GetLongTextTranslateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLongTextTranslateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLongTextTranslateTaskOutcome(GetLongTextTranslateTaskResult(outcome.result()));
	else
		return GetLongTextTranslateTaskOutcome(outcome.error());
}

void AnyTransClient::getLongTextTranslateTaskAsync(const GetLongTextTranslateTaskRequest& request, const GetLongTextTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLongTextTranslateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AnyTransClient::GetLongTextTranslateTaskOutcomeCallable AnyTransClient::getLongTextTranslateTaskCallable(const GetLongTextTranslateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLongTextTranslateTaskOutcome()>>(
			[this, request]()
			{
			return this->getLongTextTranslateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AnyTransClient::SubmitDocTranslateTaskOutcome AnyTransClient::submitDocTranslateTask(const SubmitDocTranslateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitDocTranslateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitDocTranslateTaskOutcome(SubmitDocTranslateTaskResult(outcome.result()));
	else
		return SubmitDocTranslateTaskOutcome(outcome.error());
}

void AnyTransClient::submitDocTranslateTaskAsync(const SubmitDocTranslateTaskRequest& request, const SubmitDocTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitDocTranslateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AnyTransClient::SubmitDocTranslateTaskOutcomeCallable AnyTransClient::submitDocTranslateTaskCallable(const SubmitDocTranslateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitDocTranslateTaskOutcome()>>(
			[this, request]()
			{
			return this->submitDocTranslateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AnyTransClient::SubmitHtmlTranslateTaskOutcome AnyTransClient::submitHtmlTranslateTask(const SubmitHtmlTranslateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitHtmlTranslateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitHtmlTranslateTaskOutcome(SubmitHtmlTranslateTaskResult(outcome.result()));
	else
		return SubmitHtmlTranslateTaskOutcome(outcome.error());
}

void AnyTransClient::submitHtmlTranslateTaskAsync(const SubmitHtmlTranslateTaskRequest& request, const SubmitHtmlTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitHtmlTranslateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AnyTransClient::SubmitHtmlTranslateTaskOutcomeCallable AnyTransClient::submitHtmlTranslateTaskCallable(const SubmitHtmlTranslateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitHtmlTranslateTaskOutcome()>>(
			[this, request]()
			{
			return this->submitHtmlTranslateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AnyTransClient::SubmitImageTranslateTaskOutcome AnyTransClient::submitImageTranslateTask(const SubmitImageTranslateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitImageTranslateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitImageTranslateTaskOutcome(SubmitImageTranslateTaskResult(outcome.result()));
	else
		return SubmitImageTranslateTaskOutcome(outcome.error());
}

void AnyTransClient::submitImageTranslateTaskAsync(const SubmitImageTranslateTaskRequest& request, const SubmitImageTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitImageTranslateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AnyTransClient::SubmitImageTranslateTaskOutcomeCallable AnyTransClient::submitImageTranslateTaskCallable(const SubmitImageTranslateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitImageTranslateTaskOutcome()>>(
			[this, request]()
			{
			return this->submitImageTranslateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AnyTransClient::SubmitLongTextTranslateTaskOutcome AnyTransClient::submitLongTextTranslateTask(const SubmitLongTextTranslateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitLongTextTranslateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitLongTextTranslateTaskOutcome(SubmitLongTextTranslateTaskResult(outcome.result()));
	else
		return SubmitLongTextTranslateTaskOutcome(outcome.error());
}

void AnyTransClient::submitLongTextTranslateTaskAsync(const SubmitLongTextTranslateTaskRequest& request, const SubmitLongTextTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitLongTextTranslateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AnyTransClient::SubmitLongTextTranslateTaskOutcomeCallable AnyTransClient::submitLongTextTranslateTaskCallable(const SubmitLongTextTranslateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitLongTextTranslateTaskOutcome()>>(
			[this, request]()
			{
			return this->submitLongTextTranslateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AnyTransClient::TextTranslateOutcome AnyTransClient::textTranslate(const TextTranslateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TextTranslateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TextTranslateOutcome(TextTranslateResult(outcome.result()));
	else
		return TextTranslateOutcome(outcome.error());
}

void AnyTransClient::textTranslateAsync(const TextTranslateRequest& request, const TextTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, textTranslate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AnyTransClient::TextTranslateOutcomeCallable AnyTransClient::textTranslateCallable(const TextTranslateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TextTranslateOutcome()>>(
			[this, request]()
			{
			return this->textTranslate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

