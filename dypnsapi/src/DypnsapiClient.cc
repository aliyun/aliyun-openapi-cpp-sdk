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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DypnsapiClient::DypnsapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DypnsapiClient::DypnsapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DypnsapiClient::~DypnsapiClient()
{}

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

DypnsapiClient::TwiceTelVerifyOutcome DypnsapiClient::twiceTelVerify(const TwiceTelVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TwiceTelVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TwiceTelVerifyOutcome(TwiceTelVerifyResult(outcome.result()));
	else
		return TwiceTelVerifyOutcome(outcome.error());
}

void DypnsapiClient::twiceTelVerifyAsync(const TwiceTelVerifyRequest& request, const TwiceTelVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, twiceTelVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DypnsapiClient::TwiceTelVerifyOutcomeCallable DypnsapiClient::twiceTelVerifyCallable(const TwiceTelVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TwiceTelVerifyOutcome()>>(
			[this, request]()
			{
			return this->twiceTelVerify(request);
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

