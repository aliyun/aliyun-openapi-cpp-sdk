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

#include <alibabacloud/avatar/AvatarClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Avatar;
using namespace AlibabaCloud::Avatar::Model;

namespace
{
	const std::string SERVICE_NAME = "avatar";
}

AvatarClient::AvatarClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AvatarClient::AvatarClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AvatarClient::AvatarClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AvatarClient::~AvatarClient()
{}

AvatarClient::CancelVideoTaskOutcome AvatarClient::cancelVideoTask(const CancelVideoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelVideoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelVideoTaskOutcome(CancelVideoTaskResult(outcome.result()));
	else
		return CancelVideoTaskOutcome(outcome.error());
}

void AvatarClient::cancelVideoTaskAsync(const CancelVideoTaskRequest& request, const CancelVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelVideoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::CancelVideoTaskOutcomeCallable AvatarClient::cancelVideoTaskCallable(const CancelVideoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelVideoTaskOutcome()>>(
			[this, request]()
			{
			return this->cancelVideoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::ClientAuthOutcome AvatarClient::clientAuth(const ClientAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClientAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClientAuthOutcome(ClientAuthResult(outcome.result()));
	else
		return ClientAuthOutcome(outcome.error());
}

void AvatarClient::clientAuthAsync(const ClientAuthRequest& request, const ClientAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clientAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::ClientAuthOutcomeCallable AvatarClient::clientAuthCallable(const ClientAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClientAuthOutcome()>>(
			[this, request]()
			{
			return this->clientAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::ClientStartOutcome AvatarClient::clientStart(const ClientStartRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClientStartOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClientStartOutcome(ClientStartResult(outcome.result()));
	else
		return ClientStartOutcome(outcome.error());
}

void AvatarClient::clientStartAsync(const ClientStartRequest& request, const ClientStartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clientStart(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::ClientStartOutcomeCallable AvatarClient::clientStartCallable(const ClientStartRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClientStartOutcome()>>(
			[this, request]()
			{
			return this->clientStart(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::ClientUnbindDeviceOutcome AvatarClient::clientUnbindDevice(const ClientUnbindDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ClientUnbindDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ClientUnbindDeviceOutcome(ClientUnbindDeviceResult(outcome.result()));
	else
		return ClientUnbindDeviceOutcome(outcome.error());
}

void AvatarClient::clientUnbindDeviceAsync(const ClientUnbindDeviceRequest& request, const ClientUnbindDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, clientUnbindDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::ClientUnbindDeviceOutcomeCallable AvatarClient::clientUnbindDeviceCallable(const ClientUnbindDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ClientUnbindDeviceOutcome()>>(
			[this, request]()
			{
			return this->clientUnbindDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::CloseTimedResetOperateOutcome AvatarClient::closeTimedResetOperate(const CloseTimedResetOperateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseTimedResetOperateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseTimedResetOperateOutcome(CloseTimedResetOperateResult(outcome.result()));
	else
		return CloseTimedResetOperateOutcome(outcome.error());
}

void AvatarClient::closeTimedResetOperateAsync(const CloseTimedResetOperateRequest& request, const CloseTimedResetOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeTimedResetOperate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::CloseTimedResetOperateOutcomeCallable AvatarClient::closeTimedResetOperateCallable(const CloseTimedResetOperateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseTimedResetOperateOutcome()>>(
			[this, request]()
			{
			return this->closeTimedResetOperate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::ConfirmAvatar2dTrainOutcome AvatarClient::confirmAvatar2dTrain(const ConfirmAvatar2dTrainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmAvatar2dTrainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmAvatar2dTrainOutcome(ConfirmAvatar2dTrainResult(outcome.result()));
	else
		return ConfirmAvatar2dTrainOutcome(outcome.error());
}

void AvatarClient::confirmAvatar2dTrainAsync(const ConfirmAvatar2dTrainRequest& request, const ConfirmAvatar2dTrainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmAvatar2dTrain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::ConfirmAvatar2dTrainOutcomeCallable AvatarClient::confirmAvatar2dTrainCallable(const ConfirmAvatar2dTrainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmAvatar2dTrainOutcome()>>(
			[this, request]()
			{
			return this->confirmAvatar2dTrain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::Create2dAvatarOutcome AvatarClient::create2dAvatar(const Create2dAvatarRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Create2dAvatarOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Create2dAvatarOutcome(Create2dAvatarResult(outcome.result()));
	else
		return Create2dAvatarOutcome(outcome.error());
}

void AvatarClient::create2dAvatarAsync(const Create2dAvatarRequest& request, const Create2dAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, create2dAvatar(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::Create2dAvatarOutcomeCallable AvatarClient::create2dAvatarCallable(const Create2dAvatarRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Create2dAvatarOutcome()>>(
			[this, request]()
			{
			return this->create2dAvatar(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::DeleteAvatarOutcome AvatarClient::deleteAvatar(const DeleteAvatarRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAvatarOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAvatarOutcome(DeleteAvatarResult(outcome.result()));
	else
		return DeleteAvatarOutcome(outcome.error());
}

void AvatarClient::deleteAvatarAsync(const DeleteAvatarRequest& request, const DeleteAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAvatar(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::DeleteAvatarOutcomeCallable AvatarClient::deleteAvatarCallable(const DeleteAvatarRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAvatarOutcome()>>(
			[this, request]()
			{
			return this->deleteAvatar(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::DuplexDecisionOutcome AvatarClient::duplexDecision(const DuplexDecisionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DuplexDecisionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DuplexDecisionOutcome(DuplexDecisionResult(outcome.result()));
	else
		return DuplexDecisionOutcome(outcome.error());
}

void AvatarClient::duplexDecisionAsync(const DuplexDecisionRequest& request, const DuplexDecisionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, duplexDecision(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::DuplexDecisionOutcomeCallable AvatarClient::duplexDecisionCallable(const DuplexDecisionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DuplexDecisionOutcome()>>(
			[this, request]()
			{
			return this->duplexDecision(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::GetVideoTaskInfoOutcome AvatarClient::getVideoTaskInfo(const GetVideoTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoTaskInfoOutcome(GetVideoTaskInfoResult(outcome.result()));
	else
		return GetVideoTaskInfoOutcome(outcome.error());
}

void AvatarClient::getVideoTaskInfoAsync(const GetVideoTaskInfoRequest& request, const GetVideoTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideoTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::GetVideoTaskInfoOutcomeCallable AvatarClient::getVideoTaskInfoCallable(const GetVideoTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->getVideoTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::LicenseAuthOutcome AvatarClient::licenseAuth(const LicenseAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LicenseAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LicenseAuthOutcome(LicenseAuthResult(outcome.result()));
	else
		return LicenseAuthOutcome(outcome.error());
}

void AvatarClient::licenseAuthAsync(const LicenseAuthRequest& request, const LicenseAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, licenseAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::LicenseAuthOutcomeCallable AvatarClient::licenseAuthCallable(const LicenseAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LicenseAuthOutcome()>>(
			[this, request]()
			{
			return this->licenseAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::QueryAvatarOutcome AvatarClient::queryAvatar(const QueryAvatarRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAvatarOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAvatarOutcome(QueryAvatarResult(outcome.result()));
	else
		return QueryAvatarOutcome(outcome.error());
}

void AvatarClient::queryAvatarAsync(const QueryAvatarRequest& request, const QueryAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAvatar(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::QueryAvatarOutcomeCallable AvatarClient::queryAvatarCallable(const QueryAvatarRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAvatarOutcome()>>(
			[this, request]()
			{
			return this->queryAvatar(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::QueryAvatarListOutcome AvatarClient::queryAvatarList(const QueryAvatarListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAvatarListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAvatarListOutcome(QueryAvatarListResult(outcome.result()));
	else
		return QueryAvatarListOutcome(outcome.error());
}

void AvatarClient::queryAvatarListAsync(const QueryAvatarListRequest& request, const QueryAvatarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAvatarList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::QueryAvatarListOutcomeCallable AvatarClient::queryAvatarListCallable(const QueryAvatarListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAvatarListOutcome()>>(
			[this, request]()
			{
			return this->queryAvatarList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::QueryRunningInstanceOutcome AvatarClient::queryRunningInstance(const QueryRunningInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRunningInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRunningInstanceOutcome(QueryRunningInstanceResult(outcome.result()));
	else
		return QueryRunningInstanceOutcome(outcome.error());
}

void AvatarClient::queryRunningInstanceAsync(const QueryRunningInstanceRequest& request, const QueryRunningInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRunningInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::QueryRunningInstanceOutcomeCallable AvatarClient::queryRunningInstanceCallable(const QueryRunningInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRunningInstanceOutcome()>>(
			[this, request]()
			{
			return this->queryRunningInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::QueryTimedResetOperateStatusOutcome AvatarClient::queryTimedResetOperateStatus(const QueryTimedResetOperateStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTimedResetOperateStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTimedResetOperateStatusOutcome(QueryTimedResetOperateStatusResult(outcome.result()));
	else
		return QueryTimedResetOperateStatusOutcome(outcome.error());
}

void AvatarClient::queryTimedResetOperateStatusAsync(const QueryTimedResetOperateStatusRequest& request, const QueryTimedResetOperateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTimedResetOperateStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::QueryTimedResetOperateStatusOutcomeCallable AvatarClient::queryTimedResetOperateStatusCallable(const QueryTimedResetOperateStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTimedResetOperateStatusOutcome()>>(
			[this, request]()
			{
			return this->queryTimedResetOperateStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::QueryVideoTaskInfoOutcome AvatarClient::queryVideoTaskInfo(const QueryVideoTaskInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryVideoTaskInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryVideoTaskInfoOutcome(QueryVideoTaskInfoResult(outcome.result()));
	else
		return QueryVideoTaskInfoOutcome(outcome.error());
}

void AvatarClient::queryVideoTaskInfoAsync(const QueryVideoTaskInfoRequest& request, const QueryVideoTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryVideoTaskInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::QueryVideoTaskInfoOutcomeCallable AvatarClient::queryVideoTaskInfoCallable(const QueryVideoTaskInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryVideoTaskInfoOutcome()>>(
			[this, request]()
			{
			return this->queryVideoTaskInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::Render3dAvatarOutcome AvatarClient::render3dAvatar(const Render3dAvatarRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Render3dAvatarOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Render3dAvatarOutcome(Render3dAvatarResult(outcome.result()));
	else
		return Render3dAvatarOutcome(outcome.error());
}

void AvatarClient::render3dAvatarAsync(const Render3dAvatarRequest& request, const Render3dAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, render3dAvatar(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::Render3dAvatarOutcomeCallable AvatarClient::render3dAvatarCallable(const Render3dAvatarRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Render3dAvatarOutcome()>>(
			[this, request]()
			{
			return this->render3dAvatar(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::SendCommandOutcome AvatarClient::sendCommand(const SendCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendCommandOutcome(SendCommandResult(outcome.result()));
	else
		return SendCommandOutcome(outcome.error());
}

void AvatarClient::sendCommandAsync(const SendCommandRequest& request, const SendCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::SendCommandOutcomeCallable AvatarClient::sendCommandCallable(const SendCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendCommandOutcome()>>(
			[this, request]()
			{
			return this->sendCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::SendMessageOutcome AvatarClient::sendMessage(const SendMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendMessageOutcome(SendMessageResult(outcome.result()));
	else
		return SendMessageOutcome(outcome.error());
}

void AvatarClient::sendMessageAsync(const SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::SendMessageOutcomeCallable AvatarClient::sendMessageCallable(const SendMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendMessageOutcome()>>(
			[this, request]()
			{
			return this->sendMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::SendTextOutcome AvatarClient::sendText(const SendTextRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendTextOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendTextOutcome(SendTextResult(outcome.result()));
	else
		return SendTextOutcome(outcome.error());
}

void AvatarClient::sendTextAsync(const SendTextRequest& request, const SendTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendText(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::SendTextOutcomeCallable AvatarClient::sendTextCallable(const SendTextRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendTextOutcome()>>(
			[this, request]()
			{
			return this->sendText(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::SendVamlOutcome AvatarClient::sendVaml(const SendVamlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendVamlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendVamlOutcome(SendVamlResult(outcome.result()));
	else
		return SendVamlOutcome(outcome.error());
}

void AvatarClient::sendVamlAsync(const SendVamlRequest& request, const SendVamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendVaml(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::SendVamlOutcomeCallable AvatarClient::sendVamlCallable(const SendVamlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendVamlOutcome()>>(
			[this, request]()
			{
			return this->sendVaml(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::StartInstanceOutcome AvatarClient::startInstance(const StartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartInstanceOutcome(StartInstanceResult(outcome.result()));
	else
		return StartInstanceOutcome(outcome.error());
}

void AvatarClient::startInstanceAsync(const StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::StartInstanceOutcomeCallable AvatarClient::startInstanceCallable(const StartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartInstanceOutcome()>>(
			[this, request]()
			{
			return this->startInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::StartTimedResetOperateOutcome AvatarClient::startTimedResetOperate(const StartTimedResetOperateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartTimedResetOperateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartTimedResetOperateOutcome(StartTimedResetOperateResult(outcome.result()));
	else
		return StartTimedResetOperateOutcome(outcome.error());
}

void AvatarClient::startTimedResetOperateAsync(const StartTimedResetOperateRequest& request, const StartTimedResetOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startTimedResetOperate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::StartTimedResetOperateOutcomeCallable AvatarClient::startTimedResetOperateCallable(const StartTimedResetOperateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartTimedResetOperateOutcome()>>(
			[this, request]()
			{
			return this->startTimedResetOperate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::StopInstanceOutcome AvatarClient::stopInstance(const StopInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInstanceOutcome(StopInstanceResult(outcome.result()));
	else
		return StopInstanceOutcome(outcome.error());
}

void AvatarClient::stopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::StopInstanceOutcomeCallable AvatarClient::stopInstanceCallable(const StopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::SubmitAudioTo2DAvatarVideoTaskOutcome AvatarClient::submitAudioTo2DAvatarVideoTask(const SubmitAudioTo2DAvatarVideoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAudioTo2DAvatarVideoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAudioTo2DAvatarVideoTaskOutcome(SubmitAudioTo2DAvatarVideoTaskResult(outcome.result()));
	else
		return SubmitAudioTo2DAvatarVideoTaskOutcome(outcome.error());
}

void AvatarClient::submitAudioTo2DAvatarVideoTaskAsync(const SubmitAudioTo2DAvatarVideoTaskRequest& request, const SubmitAudioTo2DAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAudioTo2DAvatarVideoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::SubmitAudioTo2DAvatarVideoTaskOutcomeCallable AvatarClient::submitAudioTo2DAvatarVideoTaskCallable(const SubmitAudioTo2DAvatarVideoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAudioTo2DAvatarVideoTaskOutcome()>>(
			[this, request]()
			{
			return this->submitAudioTo2DAvatarVideoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::SubmitAudioTo3DAvatarVideoTaskOutcome AvatarClient::submitAudioTo3DAvatarVideoTask(const SubmitAudioTo3DAvatarVideoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAudioTo3DAvatarVideoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAudioTo3DAvatarVideoTaskOutcome(SubmitAudioTo3DAvatarVideoTaskResult(outcome.result()));
	else
		return SubmitAudioTo3DAvatarVideoTaskOutcome(outcome.error());
}

void AvatarClient::submitAudioTo3DAvatarVideoTaskAsync(const SubmitAudioTo3DAvatarVideoTaskRequest& request, const SubmitAudioTo3DAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAudioTo3DAvatarVideoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::SubmitAudioTo3DAvatarVideoTaskOutcomeCallable AvatarClient::submitAudioTo3DAvatarVideoTaskCallable(const SubmitAudioTo3DAvatarVideoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAudioTo3DAvatarVideoTaskOutcome()>>(
			[this, request]()
			{
			return this->submitAudioTo3DAvatarVideoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::SubmitAvatarVideoTaskOutcome AvatarClient::submitAvatarVideoTask(const SubmitAvatarVideoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitAvatarVideoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitAvatarVideoTaskOutcome(SubmitAvatarVideoTaskResult(outcome.result()));
	else
		return SubmitAvatarVideoTaskOutcome(outcome.error());
}

void AvatarClient::submitAvatarVideoTaskAsync(const SubmitAvatarVideoTaskRequest& request, const SubmitAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitAvatarVideoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::SubmitAvatarVideoTaskOutcomeCallable AvatarClient::submitAvatarVideoTaskCallable(const SubmitAvatarVideoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitAvatarVideoTaskOutcome()>>(
			[this, request]()
			{
			return this->submitAvatarVideoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::SubmitTextTo2DAvatarVideoTaskOutcome AvatarClient::submitTextTo2DAvatarVideoTask(const SubmitTextTo2DAvatarVideoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitTextTo2DAvatarVideoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitTextTo2DAvatarVideoTaskOutcome(SubmitTextTo2DAvatarVideoTaskResult(outcome.result()));
	else
		return SubmitTextTo2DAvatarVideoTaskOutcome(outcome.error());
}

void AvatarClient::submitTextTo2DAvatarVideoTaskAsync(const SubmitTextTo2DAvatarVideoTaskRequest& request, const SubmitTextTo2DAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitTextTo2DAvatarVideoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::SubmitTextTo2DAvatarVideoTaskOutcomeCallable AvatarClient::submitTextTo2DAvatarVideoTaskCallable(const SubmitTextTo2DAvatarVideoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitTextTo2DAvatarVideoTaskOutcome()>>(
			[this, request]()
			{
			return this->submitTextTo2DAvatarVideoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::SubmitTextTo3DAvatarVideoTaskOutcome AvatarClient::submitTextTo3DAvatarVideoTask(const SubmitTextTo3DAvatarVideoTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitTextTo3DAvatarVideoTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitTextTo3DAvatarVideoTaskOutcome(SubmitTextTo3DAvatarVideoTaskResult(outcome.result()));
	else
		return SubmitTextTo3DAvatarVideoTaskOutcome(outcome.error());
}

void AvatarClient::submitTextTo3DAvatarVideoTaskAsync(const SubmitTextTo3DAvatarVideoTaskRequest& request, const SubmitTextTo3DAvatarVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitTextTo3DAvatarVideoTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::SubmitTextTo3DAvatarVideoTaskOutcomeCallable AvatarClient::submitTextTo3DAvatarVideoTaskCallable(const SubmitTextTo3DAvatarVideoTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitTextTo3DAvatarVideoTaskOutcome()>>(
			[this, request]()
			{
			return this->submitTextTo3DAvatarVideoTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AvatarClient::Update2dAvatarOutcome AvatarClient::update2dAvatar(const Update2dAvatarRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return Update2dAvatarOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return Update2dAvatarOutcome(Update2dAvatarResult(outcome.result()));
	else
		return Update2dAvatarOutcome(outcome.error());
}

void AvatarClient::update2dAvatarAsync(const Update2dAvatarRequest& request, const Update2dAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, update2dAvatar(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AvatarClient::Update2dAvatarOutcomeCallable AvatarClient::update2dAvatarCallable(const Update2dAvatarRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<Update2dAvatarOutcome()>>(
			[this, request]()
			{
			return this->update2dAvatar(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

