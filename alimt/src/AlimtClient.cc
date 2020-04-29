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

#include <alibabacloud/alimt/AlimtClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Alimt;
using namespace AlibabaCloud::Alimt::Model;

namespace
{
	const std::string SERVICE_NAME = "alimt";
}

AlimtClient::AlimtClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alimt");
}

AlimtClient::AlimtClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alimt");
}

AlimtClient::AlimtClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alimt");
}

AlimtClient::~AlimtClient()
{}

AlimtClient::CreateDocTranslateTaskOutcome AlimtClient::createDocTranslateTask(const CreateDocTranslateTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDocTranslateTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDocTranslateTaskOutcome(CreateDocTranslateTaskResult(outcome.result()));
	else
		return CreateDocTranslateTaskOutcome(outcome.error());
}

void AlimtClient::createDocTranslateTaskAsync(const CreateDocTranslateTaskRequest& request, const CreateDocTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDocTranslateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlimtClient::CreateDocTranslateTaskOutcomeCallable AlimtClient::createDocTranslateTaskCallable(const CreateDocTranslateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDocTranslateTaskOutcome()>>(
			[this, request]()
			{
			return this->createDocTranslateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlimtClient::GetDetectLanguageOutcome AlimtClient::getDetectLanguage(const GetDetectLanguageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDetectLanguageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDetectLanguageOutcome(GetDetectLanguageResult(outcome.result()));
	else
		return GetDetectLanguageOutcome(outcome.error());
}

void AlimtClient::getDetectLanguageAsync(const GetDetectLanguageRequest& request, const GetDetectLanguageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDetectLanguage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlimtClient::GetDetectLanguageOutcomeCallable AlimtClient::getDetectLanguageCallable(const GetDetectLanguageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDetectLanguageOutcome()>>(
			[this, request]()
			{
			return this->getDetectLanguage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlimtClient::GetDocTranslateTaskOutcome AlimtClient::getDocTranslateTask(const GetDocTranslateTaskRequest &request) const
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

void AlimtClient::getDocTranslateTaskAsync(const GetDocTranslateTaskRequest& request, const GetDocTranslateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDocTranslateTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlimtClient::GetDocTranslateTaskOutcomeCallable AlimtClient::getDocTranslateTaskCallable(const GetDocTranslateTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDocTranslateTaskOutcome()>>(
			[this, request]()
			{
			return this->getDocTranslateTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlimtClient::TranslateOutcome AlimtClient::translate(const TranslateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TranslateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TranslateOutcome(TranslateResult(outcome.result()));
	else
		return TranslateOutcome(outcome.error());
}

void AlimtClient::translateAsync(const TranslateRequest& request, const TranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, translate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlimtClient::TranslateOutcomeCallable AlimtClient::translateCallable(const TranslateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TranslateOutcome()>>(
			[this, request]()
			{
			return this->translate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlimtClient::TranslateCertificateOutcome AlimtClient::translateCertificate(const TranslateCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TranslateCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TranslateCertificateOutcome(TranslateCertificateResult(outcome.result()));
	else
		return TranslateCertificateOutcome(outcome.error());
}

void AlimtClient::translateCertificateAsync(const TranslateCertificateRequest& request, const TranslateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, translateCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlimtClient::TranslateCertificateOutcomeCallable AlimtClient::translateCertificateCallable(const TranslateCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TranslateCertificateOutcome()>>(
			[this, request]()
			{
			return this->translateCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlimtClient::TranslateECommerceOutcome AlimtClient::translateECommerce(const TranslateECommerceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TranslateECommerceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TranslateECommerceOutcome(TranslateECommerceResult(outcome.result()));
	else
		return TranslateECommerceOutcome(outcome.error());
}

void AlimtClient::translateECommerceAsync(const TranslateECommerceRequest& request, const TranslateECommerceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, translateECommerce(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlimtClient::TranslateECommerceOutcomeCallable AlimtClient::translateECommerceCallable(const TranslateECommerceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TranslateECommerceOutcome()>>(
			[this, request]()
			{
			return this->translateECommerce(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlimtClient::TranslateGeneralOutcome AlimtClient::translateGeneral(const TranslateGeneralRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TranslateGeneralOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TranslateGeneralOutcome(TranslateGeneralResult(outcome.result()));
	else
		return TranslateGeneralOutcome(outcome.error());
}

void AlimtClient::translateGeneralAsync(const TranslateGeneralRequest& request, const TranslateGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, translateGeneral(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlimtClient::TranslateGeneralOutcomeCallable AlimtClient::translateGeneralCallable(const TranslateGeneralRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TranslateGeneralOutcome()>>(
			[this, request]()
			{
			return this->translateGeneral(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

