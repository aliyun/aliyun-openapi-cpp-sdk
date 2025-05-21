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

#include <alibabacloud/mseap/MseapClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Mseap;
using namespace AlibabaCloud::Mseap::Model;

namespace
{
	const std::string SERVICE_NAME = "mseap";
}

MseapClient::MseapClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

MseapClient::MseapClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

MseapClient::MseapClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

MseapClient::~MseapClient()
{}

MseapClient::ActivateLicenseOutcome MseapClient::activateLicense(const ActivateLicenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateLicenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateLicenseOutcome(ActivateLicenseResult(outcome.result()));
	else
		return ActivateLicenseOutcome(outcome.error());
}

void MseapClient::activateLicenseAsync(const ActivateLicenseRequest& request, const ActivateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateLicense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::ActivateLicenseOutcomeCallable MseapClient::activateLicenseCallable(const ActivateLicenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateLicenseOutcome()>>(
			[this, request]()
			{
			return this->activateLicense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::CallbackTaskOutcome MseapClient::callbackTask(const CallbackTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CallbackTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CallbackTaskOutcome(CallbackTaskResult(outcome.result()));
	else
		return CallbackTaskOutcome(outcome.error());
}

void MseapClient::callbackTaskAsync(const CallbackTaskRequest& request, const CallbackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, callbackTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::CallbackTaskOutcomeCallable MseapClient::callbackTaskCallable(const CallbackTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CallbackTaskOutcome()>>(
			[this, request]()
			{
			return this->callbackTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::DescribeAgreementStatusOutcome MseapClient::describeAgreementStatus(const DescribeAgreementStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAgreementStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAgreementStatusOutcome(DescribeAgreementStatusResult(outcome.result()));
	else
		return DescribeAgreementStatusOutcome(outcome.error());
}

void MseapClient::describeAgreementStatusAsync(const DescribeAgreementStatusRequest& request, const DescribeAgreementStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAgreementStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::DescribeAgreementStatusOutcomeCallable MseapClient::describeAgreementStatusCallable(const DescribeAgreementStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAgreementStatusOutcome()>>(
			[this, request]()
			{
			return this->describeAgreementStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::GenerateUploadFilePolicyForPartnerOutcome MseapClient::generateUploadFilePolicyForPartner(const GenerateUploadFilePolicyForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateUploadFilePolicyForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateUploadFilePolicyForPartnerOutcome(GenerateUploadFilePolicyForPartnerResult(outcome.result()));
	else
		return GenerateUploadFilePolicyForPartnerOutcome(outcome.error());
}

void MseapClient::generateUploadFilePolicyForPartnerAsync(const GenerateUploadFilePolicyForPartnerRequest& request, const GenerateUploadFilePolicyForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateUploadFilePolicyForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::GenerateUploadFilePolicyForPartnerOutcomeCallable MseapClient::generateUploadFilePolicyForPartnerCallable(const GenerateUploadFilePolicyForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateUploadFilePolicyForPartnerOutcome()>>(
			[this, request]()
			{
			return this->generateUploadFilePolicyForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::GetNodeByFlowIdOutcome MseapClient::getNodeByFlowId(const GetNodeByFlowIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeByFlowIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeByFlowIdOutcome(GetNodeByFlowIdResult(outcome.result()));
	else
		return GetNodeByFlowIdOutcome(outcome.error());
}

void MseapClient::getNodeByFlowIdAsync(const GetNodeByFlowIdRequest& request, const GetNodeByFlowIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeByFlowId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::GetNodeByFlowIdOutcomeCallable MseapClient::getNodeByFlowIdCallable(const GetNodeByFlowIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeByFlowIdOutcome()>>(
			[this, request]()
			{
			return this->getNodeByFlowId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::GetNodeByTemplateIdOutcome MseapClient::getNodeByTemplateId(const GetNodeByTemplateIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeByTemplateIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeByTemplateIdOutcome(GetNodeByTemplateIdResult(outcome.result()));
	else
		return GetNodeByTemplateIdOutcome(outcome.error());
}

void MseapClient::getNodeByTemplateIdAsync(const GetNodeByTemplateIdRequest& request, const GetNodeByTemplateIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeByTemplateId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::GetNodeByTemplateIdOutcomeCallable MseapClient::getNodeByTemplateIdCallable(const GetNodeByTemplateIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeByTemplateIdOutcome()>>(
			[this, request]()
			{
			return this->getNodeByTemplateId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::GetPlatformUserInfoForPartnerOutcome MseapClient::getPlatformUserInfoForPartner(const GetPlatformUserInfoForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPlatformUserInfoForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPlatformUserInfoForPartnerOutcome(GetPlatformUserInfoForPartnerResult(outcome.result()));
	else
		return GetPlatformUserInfoForPartnerOutcome(outcome.error());
}

void MseapClient::getPlatformUserInfoForPartnerAsync(const GetPlatformUserInfoForPartnerRequest& request, const GetPlatformUserInfoForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPlatformUserInfoForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::GetPlatformUserInfoForPartnerOutcomeCallable MseapClient::getPlatformUserInfoForPartnerCallable(const GetPlatformUserInfoForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPlatformUserInfoForPartnerOutcome()>>(
			[this, request]()
			{
			return this->getPlatformUserInfoForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::GetProxyByTypeOutcome MseapClient::getProxyByType(const GetProxyByTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProxyByTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProxyByTypeOutcome(GetProxyByTypeResult(outcome.result()));
	else
		return GetProxyByTypeOutcome(outcome.error());
}

void MseapClient::getProxyByTypeAsync(const GetProxyByTypeRequest& request, const GetProxyByTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProxyByType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::GetProxyByTypeOutcomeCallable MseapClient::getProxyByTypeCallable(const GetProxyByTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProxyByTypeOutcome()>>(
			[this, request]()
			{
			return this->getProxyByType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::GetRedisValueOutcome MseapClient::getRedisValue(const GetRedisValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRedisValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRedisValueOutcome(GetRedisValueResult(outcome.result()));
	else
		return GetRedisValueOutcome(outcome.error());
}

void MseapClient::getRedisValueAsync(const GetRedisValueRequest& request, const GetRedisValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRedisValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::GetRedisValueOutcomeCallable MseapClient::getRedisValueCallable(const GetRedisValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRedisValueOutcome()>>(
			[this, request]()
			{
			return this->getRedisValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::GetVariableOutcome MseapClient::getVariable(const GetVariableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVariableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVariableOutcome(GetVariableResult(outcome.result()));
	else
		return GetVariableOutcome(outcome.error());
}

void MseapClient::getVariableAsync(const GetVariableRequest& request, const GetVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVariable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::GetVariableOutcomeCallable MseapClient::getVariableCallable(const GetVariableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVariableOutcome()>>(
			[this, request]()
			{
			return this->getVariable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::IdentifyCodeOutcome MseapClient::identifyCode(const IdentifyCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return IdentifyCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return IdentifyCodeOutcome(IdentifyCodeResult(outcome.result()));
	else
		return IdentifyCodeOutcome(outcome.error());
}

void MseapClient::identifyCodeAsync(const IdentifyCodeRequest& request, const IdentifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, identifyCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::IdentifyCodeOutcomeCallable MseapClient::identifyCodeCallable(const IdentifyCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<IdentifyCodeOutcome()>>(
			[this, request]()
			{
			return this->identifyCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::PullRpaModelOutcome MseapClient::pullRpaModel(const PullRpaModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PullRpaModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PullRpaModelOutcome(PullRpaModelResult(outcome.result()));
	else
		return PullRpaModelOutcome(outcome.error());
}

void MseapClient::pullRpaModelAsync(const PullRpaModelRequest& request, const PullRpaModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pullRpaModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::PullRpaModelOutcomeCallable MseapClient::pullRpaModelCallable(const PullRpaModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PullRpaModelOutcome()>>(
			[this, request]()
			{
			return this->pullRpaModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::PullTaskOutcome MseapClient::pullTask(const PullTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PullTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PullTaskOutcome(PullTaskResult(outcome.result()));
	else
		return PullTaskOutcome(outcome.error());
}

void MseapClient::pullTaskAsync(const PullTaskRequest& request, const PullTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pullTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::PullTaskOutcomeCallable MseapClient::pullTaskCallable(const PullTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PullTaskOutcome()>>(
			[this, request]()
			{
			return this->pullTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::PushRpaTaskOutcome MseapClient::pushRpaTask(const PushRpaTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushRpaTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushRpaTaskOutcome(PushRpaTaskResult(outcome.result()));
	else
		return PushRpaTaskOutcome(outcome.error());
}

void MseapClient::pushRpaTaskAsync(const PushRpaTaskRequest& request, const PushRpaTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushRpaTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::PushRpaTaskOutcomeCallable MseapClient::pushRpaTaskCallable(const PushRpaTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushRpaTaskOutcome()>>(
			[this, request]()
			{
			return this->pushRpaTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::PushRpaTaskDetailOutcome MseapClient::pushRpaTaskDetail(const PushRpaTaskDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushRpaTaskDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushRpaTaskDetailOutcome(PushRpaTaskDetailResult(outcome.result()));
	else
		return PushRpaTaskDetailOutcome(outcome.error());
}

void MseapClient::pushRpaTaskDetailAsync(const PushRpaTaskDetailRequest& request, const PushRpaTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushRpaTaskDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::PushRpaTaskDetailOutcomeCallable MseapClient::pushRpaTaskDetailCallable(const PushRpaTaskDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushRpaTaskDetailOutcome()>>(
			[this, request]()
			{
			return this->pushRpaTaskDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::SendNotificationForPartnerOutcome MseapClient::sendNotificationForPartner(const SendNotificationForPartnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendNotificationForPartnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendNotificationForPartnerOutcome(SendNotificationForPartnerResult(outcome.result()));
	else
		return SendNotificationForPartnerOutcome(outcome.error());
}

void MseapClient::sendNotificationForPartnerAsync(const SendNotificationForPartnerRequest& request, const SendNotificationForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendNotificationForPartner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::SendNotificationForPartnerOutcomeCallable MseapClient::sendNotificationForPartnerCallable(const SendNotificationForPartnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendNotificationForPartnerOutcome()>>(
			[this, request]()
			{
			return this->sendNotificationForPartner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::SetRedisValueOutcome MseapClient::setRedisValue(const SetRedisValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetRedisValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRedisValueOutcome(SetRedisValueResult(outcome.result()));
	else
		return SetRedisValueOutcome(outcome.error());
}

void MseapClient::setRedisValueAsync(const SetRedisValueRequest& request, const SetRedisValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRedisValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::SetRedisValueOutcomeCallable MseapClient::setRedisValueCallable(const SetRedisValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRedisValueOutcome()>>(
			[this, request]()
			{
			return this->setRedisValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

MseapClient::UpdateAgreementStatusOutcome MseapClient::updateAgreementStatus(const UpdateAgreementStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAgreementStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAgreementStatusOutcome(UpdateAgreementStatusResult(outcome.result()));
	else
		return UpdateAgreementStatusOutcome(outcome.error());
}

void MseapClient::updateAgreementStatusAsync(const UpdateAgreementStatusRequest& request, const UpdateAgreementStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAgreementStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

MseapClient::UpdateAgreementStatusOutcomeCallable MseapClient::updateAgreementStatusCallable(const UpdateAgreementStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAgreementStatusOutcome()>>(
			[this, request]()
			{
			return this->updateAgreementStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

