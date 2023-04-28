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

#include <alibabacloud/dytnsapi/DytnsapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dytnsapi;
using namespace AlibabaCloud::Dytnsapi::Model;

namespace
{
	const std::string SERVICE_NAME = "Dytnsapi";
}

DytnsapiClient::DytnsapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DytnsapiClient::DytnsapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DytnsapiClient::DytnsapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DytnsapiClient::~DytnsapiClient()
{}

DytnsapiClient::DescribeEmptyNumberOutcome DytnsapiClient::describeEmptyNumber(const DescribeEmptyNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEmptyNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEmptyNumberOutcome(DescribeEmptyNumberResult(outcome.result()));
	else
		return DescribeEmptyNumberOutcome(outcome.error());
}

void DytnsapiClient::describeEmptyNumberAsync(const DescribeEmptyNumberRequest& request, const DescribeEmptyNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEmptyNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::DescribeEmptyNumberOutcomeCallable DytnsapiClient::describeEmptyNumberCallable(const DescribeEmptyNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEmptyNumberOutcome()>>(
			[this, request]()
			{
			return this->describeEmptyNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::DescribePhoneNumberAnalysisOutcome DytnsapiClient::describePhoneNumberAnalysis(const DescribePhoneNumberAnalysisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePhoneNumberAnalysisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePhoneNumberAnalysisOutcome(DescribePhoneNumberAnalysisResult(outcome.result()));
	else
		return DescribePhoneNumberAnalysisOutcome(outcome.error());
}

void DytnsapiClient::describePhoneNumberAnalysisAsync(const DescribePhoneNumberAnalysisRequest& request, const DescribePhoneNumberAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePhoneNumberAnalysis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::DescribePhoneNumberAnalysisOutcomeCallable DytnsapiClient::describePhoneNumberAnalysisCallable(const DescribePhoneNumberAnalysisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePhoneNumberAnalysisOutcome()>>(
			[this, request]()
			{
			return this->describePhoneNumberAnalysis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::DescribePhoneNumberOnlineTimeOutcome DytnsapiClient::describePhoneNumberOnlineTime(const DescribePhoneNumberOnlineTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePhoneNumberOnlineTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePhoneNumberOnlineTimeOutcome(DescribePhoneNumberOnlineTimeResult(outcome.result()));
	else
		return DescribePhoneNumberOnlineTimeOutcome(outcome.error());
}

void DytnsapiClient::describePhoneNumberOnlineTimeAsync(const DescribePhoneNumberOnlineTimeRequest& request, const DescribePhoneNumberOnlineTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePhoneNumberOnlineTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::DescribePhoneNumberOnlineTimeOutcomeCallable DytnsapiClient::describePhoneNumberOnlineTimeCallable(const DescribePhoneNumberOnlineTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePhoneNumberOnlineTimeOutcome()>>(
			[this, request]()
			{
			return this->describePhoneNumberOnlineTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::DescribePhoneNumberOperatorAttributeOutcome DytnsapiClient::describePhoneNumberOperatorAttribute(const DescribePhoneNumberOperatorAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePhoneNumberOperatorAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePhoneNumberOperatorAttributeOutcome(DescribePhoneNumberOperatorAttributeResult(outcome.result()));
	else
		return DescribePhoneNumberOperatorAttributeOutcome(outcome.error());
}

void DytnsapiClient::describePhoneNumberOperatorAttributeAsync(const DescribePhoneNumberOperatorAttributeRequest& request, const DescribePhoneNumberOperatorAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePhoneNumberOperatorAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::DescribePhoneNumberOperatorAttributeOutcomeCallable DytnsapiClient::describePhoneNumberOperatorAttributeCallable(const DescribePhoneNumberOperatorAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePhoneNumberOperatorAttributeOutcome()>>(
			[this, request]()
			{
			return this->describePhoneNumberOperatorAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::DescribePhoneTwiceTelVerifyOutcome DytnsapiClient::describePhoneTwiceTelVerify(const DescribePhoneTwiceTelVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePhoneTwiceTelVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePhoneTwiceTelVerifyOutcome(DescribePhoneTwiceTelVerifyResult(outcome.result()));
	else
		return DescribePhoneTwiceTelVerifyOutcome(outcome.error());
}

void DytnsapiClient::describePhoneTwiceTelVerifyAsync(const DescribePhoneTwiceTelVerifyRequest& request, const DescribePhoneTwiceTelVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePhoneTwiceTelVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::DescribePhoneTwiceTelVerifyOutcomeCallable DytnsapiClient::describePhoneTwiceTelVerifyCallable(const DescribePhoneTwiceTelVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePhoneTwiceTelVerifyOutcome()>>(
			[this, request]()
			{
			return this->describePhoneTwiceTelVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::InvalidPhoneNumberFilterOutcome DytnsapiClient::invalidPhoneNumberFilter(const InvalidPhoneNumberFilterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InvalidPhoneNumberFilterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InvalidPhoneNumberFilterOutcome(InvalidPhoneNumberFilterResult(outcome.result()));
	else
		return InvalidPhoneNumberFilterOutcome(outcome.error());
}

void DytnsapiClient::invalidPhoneNumberFilterAsync(const InvalidPhoneNumberFilterRequest& request, const InvalidPhoneNumberFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, invalidPhoneNumberFilter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::InvalidPhoneNumberFilterOutcomeCallable DytnsapiClient::invalidPhoneNumberFilterCallable(const InvalidPhoneNumberFilterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InvalidPhoneNumberFilterOutcome()>>(
			[this, request]()
			{
			return this->invalidPhoneNumberFilter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::PhoneNumberEncryptOutcome DytnsapiClient::phoneNumberEncrypt(const PhoneNumberEncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PhoneNumberEncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PhoneNumberEncryptOutcome(PhoneNumberEncryptResult(outcome.result()));
	else
		return PhoneNumberEncryptOutcome(outcome.error());
}

void DytnsapiClient::phoneNumberEncryptAsync(const PhoneNumberEncryptRequest& request, const PhoneNumberEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, phoneNumberEncrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::PhoneNumberEncryptOutcomeCallable DytnsapiClient::phoneNumberEncryptCallable(const PhoneNumberEncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PhoneNumberEncryptOutcome()>>(
			[this, request]()
			{
			return this->phoneNumberEncrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::PhoneNumberStatusForAccountOutcome DytnsapiClient::phoneNumberStatusForAccount(const PhoneNumberStatusForAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PhoneNumberStatusForAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PhoneNumberStatusForAccountOutcome(PhoneNumberStatusForAccountResult(outcome.result()));
	else
		return PhoneNumberStatusForAccountOutcome(outcome.error());
}

void DytnsapiClient::phoneNumberStatusForAccountAsync(const PhoneNumberStatusForAccountRequest& request, const PhoneNumberStatusForAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, phoneNumberStatusForAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::PhoneNumberStatusForAccountOutcomeCallable DytnsapiClient::phoneNumberStatusForAccountCallable(const PhoneNumberStatusForAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PhoneNumberStatusForAccountOutcome()>>(
			[this, request]()
			{
			return this->phoneNumberStatusForAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::PhoneNumberStatusForPublicOutcome DytnsapiClient::phoneNumberStatusForPublic(const PhoneNumberStatusForPublicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PhoneNumberStatusForPublicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PhoneNumberStatusForPublicOutcome(PhoneNumberStatusForPublicResult(outcome.result()));
	else
		return PhoneNumberStatusForPublicOutcome(outcome.error());
}

void DytnsapiClient::phoneNumberStatusForPublicAsync(const PhoneNumberStatusForPublicRequest& request, const PhoneNumberStatusForPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, phoneNumberStatusForPublic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::PhoneNumberStatusForPublicOutcomeCallable DytnsapiClient::phoneNumberStatusForPublicCallable(const PhoneNumberStatusForPublicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PhoneNumberStatusForPublicOutcome()>>(
			[this, request]()
			{
			return this->phoneNumberStatusForPublic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::PhoneNumberStatusForRealOutcome DytnsapiClient::phoneNumberStatusForReal(const PhoneNumberStatusForRealRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PhoneNumberStatusForRealOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PhoneNumberStatusForRealOutcome(PhoneNumberStatusForRealResult(outcome.result()));
	else
		return PhoneNumberStatusForRealOutcome(outcome.error());
}

void DytnsapiClient::phoneNumberStatusForRealAsync(const PhoneNumberStatusForRealRequest& request, const PhoneNumberStatusForRealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, phoneNumberStatusForReal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::PhoneNumberStatusForRealOutcomeCallable DytnsapiClient::phoneNumberStatusForRealCallable(const PhoneNumberStatusForRealRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PhoneNumberStatusForRealOutcome()>>(
			[this, request]()
			{
			return this->phoneNumberStatusForReal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::PhoneNumberStatusForSmsOutcome DytnsapiClient::phoneNumberStatusForSms(const PhoneNumberStatusForSmsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PhoneNumberStatusForSmsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PhoneNumberStatusForSmsOutcome(PhoneNumberStatusForSmsResult(outcome.result()));
	else
		return PhoneNumberStatusForSmsOutcome(outcome.error());
}

void DytnsapiClient::phoneNumberStatusForSmsAsync(const PhoneNumberStatusForSmsRequest& request, const PhoneNumberStatusForSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, phoneNumberStatusForSms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::PhoneNumberStatusForSmsOutcomeCallable DytnsapiClient::phoneNumberStatusForSmsCallable(const PhoneNumberStatusForSmsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PhoneNumberStatusForSmsOutcome()>>(
			[this, request]()
			{
			return this->phoneNumberStatusForSms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::PhoneNumberStatusForVirtualOutcome DytnsapiClient::phoneNumberStatusForVirtual(const PhoneNumberStatusForVirtualRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PhoneNumberStatusForVirtualOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PhoneNumberStatusForVirtualOutcome(PhoneNumberStatusForVirtualResult(outcome.result()));
	else
		return PhoneNumberStatusForVirtualOutcome(outcome.error());
}

void DytnsapiClient::phoneNumberStatusForVirtualAsync(const PhoneNumberStatusForVirtualRequest& request, const PhoneNumberStatusForVirtualAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, phoneNumberStatusForVirtual(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::PhoneNumberStatusForVirtualOutcomeCallable DytnsapiClient::phoneNumberStatusForVirtualCallable(const PhoneNumberStatusForVirtualRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PhoneNumberStatusForVirtualOutcome()>>(
			[this, request]()
			{
			return this->phoneNumberStatusForVirtual(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::PhoneNumberStatusForVoiceOutcome DytnsapiClient::phoneNumberStatusForVoice(const PhoneNumberStatusForVoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PhoneNumberStatusForVoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PhoneNumberStatusForVoiceOutcome(PhoneNumberStatusForVoiceResult(outcome.result()));
	else
		return PhoneNumberStatusForVoiceOutcome(outcome.error());
}

void DytnsapiClient::phoneNumberStatusForVoiceAsync(const PhoneNumberStatusForVoiceRequest& request, const PhoneNumberStatusForVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, phoneNumberStatusForVoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::PhoneNumberStatusForVoiceOutcomeCallable DytnsapiClient::phoneNumberStatusForVoiceCallable(const PhoneNumberStatusForVoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PhoneNumberStatusForVoiceOutcome()>>(
			[this, request]()
			{
			return this->phoneNumberStatusForVoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::ThreeElementsVerificationOutcome DytnsapiClient::threeElementsVerification(const ThreeElementsVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ThreeElementsVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ThreeElementsVerificationOutcome(ThreeElementsVerificationResult(outcome.result()));
	else
		return ThreeElementsVerificationOutcome(outcome.error());
}

void DytnsapiClient::threeElementsVerificationAsync(const ThreeElementsVerificationRequest& request, const ThreeElementsVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, threeElementsVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::ThreeElementsVerificationOutcomeCallable DytnsapiClient::threeElementsVerificationCallable(const ThreeElementsVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ThreeElementsVerificationOutcome()>>(
			[this, request]()
			{
			return this->threeElementsVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DytnsapiClient::TwoElementsVerificationOutcome DytnsapiClient::twoElementsVerification(const TwoElementsVerificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TwoElementsVerificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TwoElementsVerificationOutcome(TwoElementsVerificationResult(outcome.result()));
	else
		return TwoElementsVerificationOutcome(outcome.error());
}

void DytnsapiClient::twoElementsVerificationAsync(const TwoElementsVerificationRequest& request, const TwoElementsVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, twoElementsVerification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DytnsapiClient::TwoElementsVerificationOutcomeCallable DytnsapiClient::twoElementsVerificationCallable(const TwoElementsVerificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TwoElementsVerificationOutcome()>>(
			[this, request]()
			{
			return this->twoElementsVerification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

