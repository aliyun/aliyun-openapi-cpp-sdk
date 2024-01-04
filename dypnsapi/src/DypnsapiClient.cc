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

#include <alibabacloud/dypnsapi/DypnsapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dypnsapi;
using namespace AlibabaCloud::Dypnsapi::Model;

namespace
{
	const std::string SERVICE_NAME = "Dypnsapi";
}

DypnsapiClient::DypnsapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dypnsapi");
}

DypnsapiClient::DypnsapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dypnsapi");
}

DypnsapiClient::DypnsapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dypnsapi");
}

DypnsapiClient::~DypnsapiClient()
{}

DypnsapiClient::CheckSmsVerifyCodeOutcome DypnsapiClient::checkSmsVerifyCode(const CheckSmsVerifyCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckSmsVerifyCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckSmsVerifyCodeOutcome(CheckSmsVerifyCodeResult(outcome.result()));
	else
		return CheckSmsVerifyCodeOutcome(outcome.error());
}

void DypnsapiClient::checkSmsVerifyCodeAsync(const CheckSmsVerifyCodeRequest& request, const CheckSmsVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkSmsVerifyCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::CheckSmsVerifyCodeOutcomeCallable DypnsapiClient::checkSmsVerifyCodeCallable(const CheckSmsVerifyCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckSmsVerifyCodeOutcome()>>(
			[this, request]()
			{
			return this->checkSmsVerifyCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::CreateSchemeConfigOutcome DypnsapiClient::createSchemeConfig(const CreateSchemeConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSchemeConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSchemeConfigOutcome(CreateSchemeConfigResult(outcome.result()));
	else
		return CreateSchemeConfigOutcome(outcome.error());
}

void DypnsapiClient::createSchemeConfigAsync(const CreateSchemeConfigRequest& request, const CreateSchemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSchemeConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::CreateSchemeConfigOutcomeCallable DypnsapiClient::createSchemeConfigCallable(const CreateSchemeConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSchemeConfigOutcome()>>(
			[this, request]()
			{
			return this->createSchemeConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::CreateVerifySchemeOutcome DypnsapiClient::createVerifyScheme(const CreateVerifySchemeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVerifySchemeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVerifySchemeOutcome(CreateVerifySchemeResult(outcome.result()));
	else
		return CreateVerifySchemeOutcome(outcome.error());
}

void DypnsapiClient::createVerifySchemeAsync(const CreateVerifySchemeRequest& request, const CreateVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVerifyScheme(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::CreateVerifySchemeOutcomeCallable DypnsapiClient::createVerifySchemeCallable(const CreateVerifySchemeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVerifySchemeOutcome()>>(
			[this, request]()
			{
			return this->createVerifyScheme(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::DeleteVerifySchemeOutcome DypnsapiClient::deleteVerifyScheme(const DeleteVerifySchemeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVerifySchemeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVerifySchemeOutcome(DeleteVerifySchemeResult(outcome.result()));
	else
		return DeleteVerifySchemeOutcome(outcome.error());
}

void DypnsapiClient::deleteVerifySchemeAsync(const DeleteVerifySchemeRequest& request, const DeleteVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVerifyScheme(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::DeleteVerifySchemeOutcomeCallable DypnsapiClient::deleteVerifySchemeCallable(const DeleteVerifySchemeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVerifySchemeOutcome()>>(
			[this, request]()
			{
			return this->deleteVerifyScheme(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::DescribeVerifySchemeOutcome DypnsapiClient::describeVerifyScheme(const DescribeVerifySchemeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVerifySchemeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVerifySchemeOutcome(DescribeVerifySchemeResult(outcome.result()));
	else
		return DescribeVerifySchemeOutcome(outcome.error());
}

void DypnsapiClient::describeVerifySchemeAsync(const DescribeVerifySchemeRequest& request, const DescribeVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVerifyScheme(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::DescribeVerifySchemeOutcomeCallable DypnsapiClient::describeVerifySchemeCallable(const DescribeVerifySchemeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVerifySchemeOutcome()>>(
			[this, request]()
			{
			return this->describeVerifyScheme(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::GetAuthTokenOutcome DypnsapiClient::getAuthToken(const GetAuthTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuthTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuthTokenOutcome(GetAuthTokenResult(outcome.result()));
	else
		return GetAuthTokenOutcome(outcome.error());
}

void DypnsapiClient::getAuthTokenAsync(const GetAuthTokenRequest& request, const GetAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuthToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::GetAuthTokenOutcomeCallable DypnsapiClient::getAuthTokenCallable(const GetAuthTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuthTokenOutcome()>>(
			[this, request]()
			{
			return this->getAuthToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::GetAuthorizationUrlOutcome DypnsapiClient::getAuthorizationUrl(const GetAuthorizationUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuthorizationUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuthorizationUrlOutcome(GetAuthorizationUrlResult(outcome.result()));
	else
		return GetAuthorizationUrlOutcome(outcome.error());
}

void DypnsapiClient::getAuthorizationUrlAsync(const GetAuthorizationUrlRequest& request, const GetAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuthorizationUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::GetAuthorizationUrlOutcomeCallable DypnsapiClient::getAuthorizationUrlCallable(const GetAuthorizationUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuthorizationUrlOutcome()>>(
			[this, request]()
			{
			return this->getAuthorizationUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::GetFusionAuthTokenOutcome DypnsapiClient::getFusionAuthToken(const GetFusionAuthTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFusionAuthTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFusionAuthTokenOutcome(GetFusionAuthTokenResult(outcome.result()));
	else
		return GetFusionAuthTokenOutcome(outcome.error());
}

void DypnsapiClient::getFusionAuthTokenAsync(const GetFusionAuthTokenRequest& request, const GetFusionAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFusionAuthToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::GetFusionAuthTokenOutcomeCallable DypnsapiClient::getFusionAuthTokenCallable(const GetFusionAuthTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFusionAuthTokenOutcome()>>(
			[this, request]()
			{
			return this->getFusionAuthToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::GetMobileOutcome DypnsapiClient::getMobile(const GetMobileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMobileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMobileOutcome(GetMobileResult(outcome.result()));
	else
		return GetMobileOutcome(outcome.error());
}

void DypnsapiClient::getMobileAsync(const GetMobileRequest& request, const GetMobileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMobile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::GetMobileOutcomeCallable DypnsapiClient::getMobileCallable(const GetMobileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMobileOutcome()>>(
			[this, request]()
			{
			return this->getMobile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::GetPhoneWithTokenOutcome DypnsapiClient::getPhoneWithToken(const GetPhoneWithTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPhoneWithTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPhoneWithTokenOutcome(GetPhoneWithTokenResult(outcome.result()));
	else
		return GetPhoneWithTokenOutcome(outcome.error());
}

void DypnsapiClient::getPhoneWithTokenAsync(const GetPhoneWithTokenRequest& request, const GetPhoneWithTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPhoneWithToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::GetPhoneWithTokenOutcomeCallable DypnsapiClient::getPhoneWithTokenCallable(const GetPhoneWithTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPhoneWithTokenOutcome()>>(
			[this, request]()
			{
			return this->getPhoneWithToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::GetSmsAuthTokensOutcome DypnsapiClient::getSmsAuthTokens(const GetSmsAuthTokensRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSmsAuthTokensOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSmsAuthTokensOutcome(GetSmsAuthTokensResult(outcome.result()));
	else
		return GetSmsAuthTokensOutcome(outcome.error());
}

void DypnsapiClient::getSmsAuthTokensAsync(const GetSmsAuthTokensRequest& request, const GetSmsAuthTokensAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSmsAuthTokens(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::GetSmsAuthTokensOutcomeCallable DypnsapiClient::getSmsAuthTokensCallable(const GetSmsAuthTokensRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSmsAuthTokensOutcome()>>(
			[this, request]()
			{
			return this->getSmsAuthTokens(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::JyCreateVerifySchemeOutcome DypnsapiClient::jyCreateVerifyScheme(const JyCreateVerifySchemeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JyCreateVerifySchemeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JyCreateVerifySchemeOutcome(JyCreateVerifySchemeResult(outcome.result()));
	else
		return JyCreateVerifySchemeOutcome(outcome.error());
}

void DypnsapiClient::jyCreateVerifySchemeAsync(const JyCreateVerifySchemeRequest& request, const JyCreateVerifySchemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, jyCreateVerifyScheme(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::JyCreateVerifySchemeOutcomeCallable DypnsapiClient::jyCreateVerifySchemeCallable(const JyCreateVerifySchemeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JyCreateVerifySchemeOutcome()>>(
			[this, request]()
			{
			return this->jyCreateVerifyScheme(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::JyQueryAppInfoBySceneCodeOutcome DypnsapiClient::jyQueryAppInfoBySceneCode(const JyQueryAppInfoBySceneCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JyQueryAppInfoBySceneCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JyQueryAppInfoBySceneCodeOutcome(JyQueryAppInfoBySceneCodeResult(outcome.result()));
	else
		return JyQueryAppInfoBySceneCodeOutcome(outcome.error());
}

void DypnsapiClient::jyQueryAppInfoBySceneCodeAsync(const JyQueryAppInfoBySceneCodeRequest& request, const JyQueryAppInfoBySceneCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, jyQueryAppInfoBySceneCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::JyQueryAppInfoBySceneCodeOutcomeCallable DypnsapiClient::jyQueryAppInfoBySceneCodeCallable(const JyQueryAppInfoBySceneCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JyQueryAppInfoBySceneCodeOutcome()>>(
			[this, request]()
			{
			return this->jyQueryAppInfoBySceneCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::QueryGateVerifyBillingPublicOutcome DypnsapiClient::queryGateVerifyBillingPublic(const QueryGateVerifyBillingPublicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGateVerifyBillingPublicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGateVerifyBillingPublicOutcome(QueryGateVerifyBillingPublicResult(outcome.result()));
	else
		return QueryGateVerifyBillingPublicOutcome(outcome.error());
}

void DypnsapiClient::queryGateVerifyBillingPublicAsync(const QueryGateVerifyBillingPublicRequest& request, const QueryGateVerifyBillingPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGateVerifyBillingPublic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::QueryGateVerifyBillingPublicOutcomeCallable DypnsapiClient::queryGateVerifyBillingPublicCallable(const QueryGateVerifyBillingPublicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGateVerifyBillingPublicOutcome()>>(
			[this, request]()
			{
			return this->queryGateVerifyBillingPublic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::QueryGateVerifyStatisticPublicOutcome DypnsapiClient::queryGateVerifyStatisticPublic(const QueryGateVerifyStatisticPublicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryGateVerifyStatisticPublicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryGateVerifyStatisticPublicOutcome(QueryGateVerifyStatisticPublicResult(outcome.result()));
	else
		return QueryGateVerifyStatisticPublicOutcome(outcome.error());
}

void DypnsapiClient::queryGateVerifyStatisticPublicAsync(const QueryGateVerifyStatisticPublicRequest& request, const QueryGateVerifyStatisticPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryGateVerifyStatisticPublic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::QueryGateVerifyStatisticPublicOutcomeCallable DypnsapiClient::queryGateVerifyStatisticPublicCallable(const QueryGateVerifyStatisticPublicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryGateVerifyStatisticPublicOutcome()>>(
			[this, request]()
			{
			return this->queryGateVerifyStatisticPublic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::QuerySendDetailsOutcome DypnsapiClient::querySendDetails(const QuerySendDetailsRequest &request) const
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

void DypnsapiClient::querySendDetailsAsync(const QuerySendDetailsRequest& request, const QuerySendDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySendDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::QuerySendDetailsOutcomeCallable DypnsapiClient::querySendDetailsCallable(const QuerySendDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySendDetailsOutcome()>>(
			[this, request]()
			{
			return this->querySendDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::SendSmsVerifyCodeOutcome DypnsapiClient::sendSmsVerifyCode(const SendSmsVerifyCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendSmsVerifyCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendSmsVerifyCodeOutcome(SendSmsVerifyCodeResult(outcome.result()));
	else
		return SendSmsVerifyCodeOutcome(outcome.error());
}

void DypnsapiClient::sendSmsVerifyCodeAsync(const SendSmsVerifyCodeRequest& request, const SendSmsVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendSmsVerifyCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::SendSmsVerifyCodeOutcomeCallable DypnsapiClient::sendSmsVerifyCodeCallable(const SendSmsVerifyCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendSmsVerifyCodeOutcome()>>(
			[this, request]()
			{
			return this->sendSmsVerifyCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::VerifyMobileOutcome DypnsapiClient::verifyMobile(const VerifyMobileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyMobileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyMobileOutcome(VerifyMobileResult(outcome.result()));
	else
		return VerifyMobileOutcome(outcome.error());
}

void DypnsapiClient::verifyMobileAsync(const VerifyMobileRequest& request, const VerifyMobileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyMobile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::VerifyMobileOutcomeCallable DypnsapiClient::verifyMobileCallable(const VerifyMobileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyMobileOutcome()>>(
			[this, request]()
			{
			return this->verifyMobile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::VerifyPhoneWithTokenOutcome DypnsapiClient::verifyPhoneWithToken(const VerifyPhoneWithTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyPhoneWithTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyPhoneWithTokenOutcome(VerifyPhoneWithTokenResult(outcome.result()));
	else
		return VerifyPhoneWithTokenOutcome(outcome.error());
}

void DypnsapiClient::verifyPhoneWithTokenAsync(const VerifyPhoneWithTokenRequest& request, const VerifyPhoneWithTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyPhoneWithToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::VerifyPhoneWithTokenOutcomeCallable DypnsapiClient::verifyPhoneWithTokenCallable(const VerifyPhoneWithTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyPhoneWithTokenOutcome()>>(
			[this, request]()
			{
			return this->verifyPhoneWithToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::VerifySmsCodeOutcome DypnsapiClient::verifySmsCode(const VerifySmsCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifySmsCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifySmsCodeOutcome(VerifySmsCodeResult(outcome.result()));
	else
		return VerifySmsCodeOutcome(outcome.error());
}

void DypnsapiClient::verifySmsCodeAsync(const VerifySmsCodeRequest& request, const VerifySmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifySmsCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::VerifySmsCodeOutcomeCallable DypnsapiClient::verifySmsCodeCallable(const VerifySmsCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifySmsCodeOutcome()>>(
			[this, request]()
			{
			return this->verifySmsCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DypnsapiClient::VerifyWithFusionAuthTokenOutcome DypnsapiClient::verifyWithFusionAuthToken(const VerifyWithFusionAuthTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyWithFusionAuthTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyWithFusionAuthTokenOutcome(VerifyWithFusionAuthTokenResult(outcome.result()));
	else
		return VerifyWithFusionAuthTokenOutcome(outcome.error());
}

void DypnsapiClient::verifyWithFusionAuthTokenAsync(const VerifyWithFusionAuthTokenRequest& request, const VerifyWithFusionAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyWithFusionAuthToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::VerifyWithFusionAuthTokenOutcomeCallable DypnsapiClient::verifyWithFusionAuthTokenCallable(const VerifyWithFusionAuthTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyWithFusionAuthTokenOutcome()>>(
			[this, request]()
			{
			return this->verifyWithFusionAuthToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

