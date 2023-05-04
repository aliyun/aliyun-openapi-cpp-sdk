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

#include <alibabacloud/dyplsapi/DyplsapiClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

namespace
{
	const std::string SERVICE_NAME = "Dyplsapi";
}

DyplsapiClient::DyplsapiClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DyplsapiClient::DyplsapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DyplsapiClient::DyplsapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DyplsapiClient::~DyplsapiClient()
{}

DyplsapiClient::AddAxnTrackNoOutcome DyplsapiClient::addAxnTrackNo(const AddAxnTrackNoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAxnTrackNoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAxnTrackNoOutcome(AddAxnTrackNoResult(outcome.result()));
	else
		return AddAxnTrackNoOutcome(outcome.error());
}

void DyplsapiClient::addAxnTrackNoAsync(const AddAxnTrackNoRequest& request, const AddAxnTrackNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAxnTrackNo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::AddAxnTrackNoOutcomeCallable DyplsapiClient::addAxnTrackNoCallable(const AddAxnTrackNoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAxnTrackNoOutcome()>>(
			[this, request]()
			{
			return this->addAxnTrackNo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::AddSecretBlacklistOutcome DyplsapiClient::addSecretBlacklist(const AddSecretBlacklistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSecretBlacklistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSecretBlacklistOutcome(AddSecretBlacklistResult(outcome.result()));
	else
		return AddSecretBlacklistOutcome(outcome.error());
}

void DyplsapiClient::addSecretBlacklistAsync(const AddSecretBlacklistRequest& request, const AddSecretBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSecretBlacklist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::AddSecretBlacklistOutcomeCallable DyplsapiClient::addSecretBlacklistCallable(const AddSecretBlacklistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSecretBlacklistOutcome()>>(
			[this, request]()
			{
			return this->addSecretBlacklist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::BindAxbOutcome DyplsapiClient::bindAxb(const BindAxbRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindAxbOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindAxbOutcome(BindAxbResult(outcome.result()));
	else
		return BindAxbOutcome(outcome.error());
}

void DyplsapiClient::bindAxbAsync(const BindAxbRequest& request, const BindAxbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindAxb(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::BindAxbOutcomeCallable DyplsapiClient::bindAxbCallable(const BindAxbRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindAxbOutcome()>>(
			[this, request]()
			{
			return this->bindAxb(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::BindAxgOutcome DyplsapiClient::bindAxg(const BindAxgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindAxgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindAxgOutcome(BindAxgResult(outcome.result()));
	else
		return BindAxgOutcome(outcome.error());
}

void DyplsapiClient::bindAxgAsync(const BindAxgRequest& request, const BindAxgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindAxg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::BindAxgOutcomeCallable DyplsapiClient::bindAxgCallable(const BindAxgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindAxgOutcome()>>(
			[this, request]()
			{
			return this->bindAxg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::BindAxnOutcome DyplsapiClient::bindAxn(const BindAxnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindAxnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindAxnOutcome(BindAxnResult(outcome.result()));
	else
		return BindAxnOutcome(outcome.error());
}

void DyplsapiClient::bindAxnAsync(const BindAxnRequest& request, const BindAxnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindAxn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::BindAxnOutcomeCallable DyplsapiClient::bindAxnCallable(const BindAxnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindAxnOutcome()>>(
			[this, request]()
			{
			return this->bindAxn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::BindAxnExtensionOutcome DyplsapiClient::bindAxnExtension(const BindAxnExtensionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindAxnExtensionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindAxnExtensionOutcome(BindAxnExtensionResult(outcome.result()));
	else
		return BindAxnExtensionOutcome(outcome.error());
}

void DyplsapiClient::bindAxnExtensionAsync(const BindAxnExtensionRequest& request, const BindAxnExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindAxnExtension(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::BindAxnExtensionOutcomeCallable DyplsapiClient::bindAxnExtensionCallable(const BindAxnExtensionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindAxnExtensionOutcome()>>(
			[this, request]()
			{
			return this->bindAxnExtension(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::BindBatchAxgOutcome DyplsapiClient::bindBatchAxg(const BindBatchAxgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindBatchAxgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindBatchAxgOutcome(BindBatchAxgResult(outcome.result()));
	else
		return BindBatchAxgOutcome(outcome.error());
}

void DyplsapiClient::bindBatchAxgAsync(const BindBatchAxgRequest& request, const BindBatchAxgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindBatchAxg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::BindBatchAxgOutcomeCallable DyplsapiClient::bindBatchAxgCallable(const BindBatchAxgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindBatchAxgOutcome()>>(
			[this, request]()
			{
			return this->bindBatchAxg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::BuySecretNoOutcome DyplsapiClient::buySecretNo(const BuySecretNoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BuySecretNoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BuySecretNoOutcome(BuySecretNoResult(outcome.result()));
	else
		return BuySecretNoOutcome(outcome.error());
}

void DyplsapiClient::buySecretNoAsync(const BuySecretNoRequest& request, const BuySecretNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, buySecretNo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::BuySecretNoOutcomeCallable DyplsapiClient::buySecretNoCallable(const BuySecretNoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BuySecretNoOutcome()>>(
			[this, request]()
			{
			return this->buySecretNo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::CancelPickUpWaybillOutcome DyplsapiClient::cancelPickUpWaybill(const CancelPickUpWaybillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelPickUpWaybillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelPickUpWaybillOutcome(CancelPickUpWaybillResult(outcome.result()));
	else
		return CancelPickUpWaybillOutcome(outcome.error());
}

void DyplsapiClient::cancelPickUpWaybillAsync(const CancelPickUpWaybillRequest& request, const CancelPickUpWaybillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelPickUpWaybill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::CancelPickUpWaybillOutcomeCallable DyplsapiClient::cancelPickUpWaybillCallable(const CancelPickUpWaybillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelPickUpWaybillOutcome()>>(
			[this, request]()
			{
			return this->cancelPickUpWaybill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::CreateAxgGroupOutcome DyplsapiClient::createAxgGroup(const CreateAxgGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAxgGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAxgGroupOutcome(CreateAxgGroupResult(outcome.result()));
	else
		return CreateAxgGroupOutcome(outcome.error());
}

void DyplsapiClient::createAxgGroupAsync(const CreateAxgGroupRequest& request, const CreateAxgGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAxgGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::CreateAxgGroupOutcomeCallable DyplsapiClient::createAxgGroupCallable(const CreateAxgGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAxgGroupOutcome()>>(
			[this, request]()
			{
			return this->createAxgGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::CreatePickUpWaybillOutcome DyplsapiClient::createPickUpWaybill(const CreatePickUpWaybillRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePickUpWaybillOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePickUpWaybillOutcome(CreatePickUpWaybillResult(outcome.result()));
	else
		return CreatePickUpWaybillOutcome(outcome.error());
}

void DyplsapiClient::createPickUpWaybillAsync(const CreatePickUpWaybillRequest& request, const CreatePickUpWaybillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPickUpWaybill(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::CreatePickUpWaybillOutcomeCallable DyplsapiClient::createPickUpWaybillCallable(const CreatePickUpWaybillRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePickUpWaybillOutcome()>>(
			[this, request]()
			{
			return this->createPickUpWaybill(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::CreatePickUpWaybillPreQueryOutcome DyplsapiClient::createPickUpWaybillPreQuery(const CreatePickUpWaybillPreQueryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePickUpWaybillPreQueryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePickUpWaybillPreQueryOutcome(CreatePickUpWaybillPreQueryResult(outcome.result()));
	else
		return CreatePickUpWaybillPreQueryOutcome(outcome.error());
}

void DyplsapiClient::createPickUpWaybillPreQueryAsync(const CreatePickUpWaybillPreQueryRequest& request, const CreatePickUpWaybillPreQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPickUpWaybillPreQuery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::CreatePickUpWaybillPreQueryOutcomeCallable DyplsapiClient::createPickUpWaybillPreQueryCallable(const CreatePickUpWaybillPreQueryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePickUpWaybillPreQueryOutcome()>>(
			[this, request]()
			{
			return this->createPickUpWaybillPreQuery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::DeleteAxgGroupOutcome DyplsapiClient::deleteAxgGroup(const DeleteAxgGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAxgGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAxgGroupOutcome(DeleteAxgGroupResult(outcome.result()));
	else
		return DeleteAxgGroupOutcome(outcome.error());
}

void DyplsapiClient::deleteAxgGroupAsync(const DeleteAxgGroupRequest& request, const DeleteAxgGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAxgGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::DeleteAxgGroupOutcomeCallable DyplsapiClient::deleteAxgGroupCallable(const DeleteAxgGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAxgGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteAxgGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::DeleteSecretBlacklistOutcome DyplsapiClient::deleteSecretBlacklist(const DeleteSecretBlacklistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecretBlacklistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecretBlacklistOutcome(DeleteSecretBlacklistResult(outcome.result()));
	else
		return DeleteSecretBlacklistOutcome(outcome.error());
}

void DyplsapiClient::deleteSecretBlacklistAsync(const DeleteSecretBlacklistRequest& request, const DeleteSecretBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecretBlacklist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::DeleteSecretBlacklistOutcomeCallable DyplsapiClient::deleteSecretBlacklistCallable(const DeleteSecretBlacklistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecretBlacklistOutcome()>>(
			[this, request]()
			{
			return this->deleteSecretBlacklist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::GetSecretAsrDetailOutcome DyplsapiClient::getSecretAsrDetail(const GetSecretAsrDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSecretAsrDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSecretAsrDetailOutcome(GetSecretAsrDetailResult(outcome.result()));
	else
		return GetSecretAsrDetailOutcome(outcome.error());
}

void DyplsapiClient::getSecretAsrDetailAsync(const GetSecretAsrDetailRequest& request, const GetSecretAsrDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSecretAsrDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::GetSecretAsrDetailOutcomeCallable DyplsapiClient::getSecretAsrDetailCallable(const GetSecretAsrDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSecretAsrDetailOutcome()>>(
			[this, request]()
			{
			return this->getSecretAsrDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::GetTotalPublicUrlOutcome DyplsapiClient::getTotalPublicUrl(const GetTotalPublicUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTotalPublicUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTotalPublicUrlOutcome(GetTotalPublicUrlResult(outcome.result()));
	else
		return GetTotalPublicUrlOutcome(outcome.error());
}

void DyplsapiClient::getTotalPublicUrlAsync(const GetTotalPublicUrlRequest& request, const GetTotalPublicUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTotalPublicUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::GetTotalPublicUrlOutcomeCallable DyplsapiClient::getTotalPublicUrlCallable(const GetTotalPublicUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTotalPublicUrlOutcome()>>(
			[this, request]()
			{
			return this->getTotalPublicUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::LockSecretNoOutcome DyplsapiClient::lockSecretNo(const LockSecretNoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LockSecretNoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LockSecretNoOutcome(LockSecretNoResult(outcome.result()));
	else
		return LockSecretNoOutcome(outcome.error());
}

void DyplsapiClient::lockSecretNoAsync(const LockSecretNoRequest& request, const LockSecretNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, lockSecretNo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::LockSecretNoOutcomeCallable DyplsapiClient::lockSecretNoCallable(const LockSecretNoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LockSecretNoOutcome()>>(
			[this, request]()
			{
			return this->lockSecretNo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::OperateAxgGroupOutcome DyplsapiClient::operateAxgGroup(const OperateAxgGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateAxgGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateAxgGroupOutcome(OperateAxgGroupResult(outcome.result()));
	else
		return OperateAxgGroupOutcome(outcome.error());
}

void DyplsapiClient::operateAxgGroupAsync(const OperateAxgGroupRequest& request, const OperateAxgGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateAxgGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::OperateAxgGroupOutcomeCallable DyplsapiClient::operateAxgGroupCallable(const OperateAxgGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateAxgGroupOutcome()>>(
			[this, request]()
			{
			return this->operateAxgGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::OperateBlackNoOutcome DyplsapiClient::operateBlackNo(const OperateBlackNoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OperateBlackNoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OperateBlackNoOutcome(OperateBlackNoResult(outcome.result()));
	else
		return OperateBlackNoOutcome(outcome.error());
}

void DyplsapiClient::operateBlackNoAsync(const OperateBlackNoRequest& request, const OperateBlackNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, operateBlackNo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::OperateBlackNoOutcomeCallable DyplsapiClient::operateBlackNoCallable(const OperateBlackNoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OperateBlackNoOutcome()>>(
			[this, request]()
			{
			return this->operateBlackNo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::QueryPhoneNoAByTrackNoOutcome DyplsapiClient::queryPhoneNoAByTrackNo(const QueryPhoneNoAByTrackNoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPhoneNoAByTrackNoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPhoneNoAByTrackNoOutcome(QueryPhoneNoAByTrackNoResult(outcome.result()));
	else
		return QueryPhoneNoAByTrackNoOutcome(outcome.error());
}

void DyplsapiClient::queryPhoneNoAByTrackNoAsync(const QueryPhoneNoAByTrackNoRequest& request, const QueryPhoneNoAByTrackNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPhoneNoAByTrackNo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::QueryPhoneNoAByTrackNoOutcomeCallable DyplsapiClient::queryPhoneNoAByTrackNoCallable(const QueryPhoneNoAByTrackNoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPhoneNoAByTrackNoOutcome()>>(
			[this, request]()
			{
			return this->queryPhoneNoAByTrackNo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::QueryRecordFileDownloadUrlOutcome DyplsapiClient::queryRecordFileDownloadUrl(const QueryRecordFileDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRecordFileDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRecordFileDownloadUrlOutcome(QueryRecordFileDownloadUrlResult(outcome.result()));
	else
		return QueryRecordFileDownloadUrlOutcome(outcome.error());
}

void DyplsapiClient::queryRecordFileDownloadUrlAsync(const QueryRecordFileDownloadUrlRequest& request, const QueryRecordFileDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRecordFileDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::QueryRecordFileDownloadUrlOutcomeCallable DyplsapiClient::queryRecordFileDownloadUrlCallable(const QueryRecordFileDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRecordFileDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->queryRecordFileDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::QuerySecretNoDetailOutcome DyplsapiClient::querySecretNoDetail(const QuerySecretNoDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySecretNoDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySecretNoDetailOutcome(QuerySecretNoDetailResult(outcome.result()));
	else
		return QuerySecretNoDetailOutcome(outcome.error());
}

void DyplsapiClient::querySecretNoDetailAsync(const QuerySecretNoDetailRequest& request, const QuerySecretNoDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySecretNoDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::QuerySecretNoDetailOutcomeCallable DyplsapiClient::querySecretNoDetailCallable(const QuerySecretNoDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySecretNoDetailOutcome()>>(
			[this, request]()
			{
			return this->querySecretNoDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::QuerySecretNoRemainOutcome DyplsapiClient::querySecretNoRemain(const QuerySecretNoRemainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySecretNoRemainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySecretNoRemainOutcome(QuerySecretNoRemainResult(outcome.result()));
	else
		return QuerySecretNoRemainOutcome(outcome.error());
}

void DyplsapiClient::querySecretNoRemainAsync(const QuerySecretNoRemainRequest& request, const QuerySecretNoRemainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySecretNoRemain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::QuerySecretNoRemainOutcomeCallable DyplsapiClient::querySecretNoRemainCallable(const QuerySecretNoRemainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySecretNoRemainOutcome()>>(
			[this, request]()
			{
			return this->querySecretNoRemain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::QuerySubsIdOutcome DyplsapiClient::querySubsId(const QuerySubsIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySubsIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySubsIdOutcome(QuerySubsIdResult(outcome.result()));
	else
		return QuerySubsIdOutcome(outcome.error());
}

void DyplsapiClient::querySubsIdAsync(const QuerySubsIdRequest& request, const QuerySubsIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySubsId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::QuerySubsIdOutcomeCallable DyplsapiClient::querySubsIdCallable(const QuerySubsIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySubsIdOutcome()>>(
			[this, request]()
			{
			return this->querySubsId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::QuerySubscriptionDetailOutcome DyplsapiClient::querySubscriptionDetail(const QuerySubscriptionDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySubscriptionDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySubscriptionDetailOutcome(QuerySubscriptionDetailResult(outcome.result()));
	else
		return QuerySubscriptionDetailOutcome(outcome.error());
}

void DyplsapiClient::querySubscriptionDetailAsync(const QuerySubscriptionDetailRequest& request, const QuerySubscriptionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySubscriptionDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::QuerySubscriptionDetailOutcomeCallable DyplsapiClient::querySubscriptionDetailCallable(const QuerySubscriptionDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySubscriptionDetailOutcome()>>(
			[this, request]()
			{
			return this->querySubscriptionDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::ReleaseSecretNoOutcome DyplsapiClient::releaseSecretNo(const ReleaseSecretNoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseSecretNoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseSecretNoOutcome(ReleaseSecretNoResult(outcome.result()));
	else
		return ReleaseSecretNoOutcome(outcome.error());
}

void DyplsapiClient::releaseSecretNoAsync(const ReleaseSecretNoRequest& request, const ReleaseSecretNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseSecretNo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::ReleaseSecretNoOutcomeCallable DyplsapiClient::releaseSecretNoCallable(const ReleaseSecretNoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseSecretNoOutcome()>>(
			[this, request]()
			{
			return this->releaseSecretNo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::UnbindSubscriptionOutcome DyplsapiClient::unbindSubscription(const UnbindSubscriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindSubscriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindSubscriptionOutcome(UnbindSubscriptionResult(outcome.result()));
	else
		return UnbindSubscriptionOutcome(outcome.error());
}

void DyplsapiClient::unbindSubscriptionAsync(const UnbindSubscriptionRequest& request, const UnbindSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindSubscription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::UnbindSubscriptionOutcomeCallable DyplsapiClient::unbindSubscriptionCallable(const UnbindSubscriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindSubscriptionOutcome()>>(
			[this, request]()
			{
			return this->unbindSubscription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::UnlockSecretNoOutcome DyplsapiClient::unlockSecretNo(const UnlockSecretNoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnlockSecretNoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnlockSecretNoOutcome(UnlockSecretNoResult(outcome.result()));
	else
		return UnlockSecretNoOutcome(outcome.error());
}

void DyplsapiClient::unlockSecretNoAsync(const UnlockSecretNoRequest& request, const UnlockSecretNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unlockSecretNo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::UnlockSecretNoOutcomeCallable DyplsapiClient::unlockSecretNoCallable(const UnlockSecretNoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnlockSecretNoOutcome()>>(
			[this, request]()
			{
			return this->unlockSecretNo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DyplsapiClient::UpdateSubscriptionOutcome DyplsapiClient::updateSubscription(const UpdateSubscriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSubscriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSubscriptionOutcome(UpdateSubscriptionResult(outcome.result()));
	else
		return UpdateSubscriptionOutcome(outcome.error());
}

void DyplsapiClient::updateSubscriptionAsync(const UpdateSubscriptionRequest& request, const UpdateSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSubscription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::UpdateSubscriptionOutcomeCallable DyplsapiClient::updateSubscriptionCallable(const UpdateSubscriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSubscriptionOutcome()>>(
			[this, request]()
			{
			return this->updateSubscription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

