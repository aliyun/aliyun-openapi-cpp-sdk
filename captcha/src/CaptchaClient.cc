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

#include <alibabacloud/captcha/CaptchaClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Captcha;
using namespace AlibabaCloud::Captcha::Model;

namespace
{
	const std::string SERVICE_NAME = "captcha";
}

CaptchaClient::CaptchaClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CaptchaClient::CaptchaClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CaptchaClient::CaptchaClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

CaptchaClient::~CaptchaClient()
{}

CaptchaClient::VerifyCaptchaOutcome CaptchaClient::verifyCaptcha(const VerifyCaptchaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyCaptchaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyCaptchaOutcome(VerifyCaptchaResult(outcome.result()));
	else
		return VerifyCaptchaOutcome(outcome.error());
}

void CaptchaClient::verifyCaptchaAsync(const VerifyCaptchaRequest& request, const VerifyCaptchaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyCaptcha(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CaptchaClient::VerifyCaptchaOutcomeCallable CaptchaClient::verifyCaptchaCallable(const VerifyCaptchaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyCaptchaOutcome()>>(
			[this, request]()
			{
			return this->verifyCaptcha(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CaptchaClient::VerifyIntelligentCaptchaOutcome CaptchaClient::verifyIntelligentCaptcha(const VerifyIntelligentCaptchaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyIntelligentCaptchaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyIntelligentCaptchaOutcome(VerifyIntelligentCaptchaResult(outcome.result()));
	else
		return VerifyIntelligentCaptchaOutcome(outcome.error());
}

void CaptchaClient::verifyIntelligentCaptchaAsync(const VerifyIntelligentCaptchaRequest& request, const VerifyIntelligentCaptchaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyIntelligentCaptcha(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CaptchaClient::VerifyIntelligentCaptchaOutcomeCallable CaptchaClient::verifyIntelligentCaptchaCallable(const VerifyIntelligentCaptchaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyIntelligentCaptchaOutcome()>>(
			[this, request]()
			{
			return this->verifyIntelligentCaptcha(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

