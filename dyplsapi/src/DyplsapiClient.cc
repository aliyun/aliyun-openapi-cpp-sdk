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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dypls");
}

DyplsapiClient::DyplsapiClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dypls");
}

DyplsapiClient::DyplsapiClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dypls");
}

DyplsapiClient::~DyplsapiClient()
{}

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

DyplsapiClient::QueryCallStatusOutcome DyplsapiClient::queryCallStatus(const QueryCallStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCallStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCallStatusOutcome(QueryCallStatusResult(outcome.result()));
	else
		return QueryCallStatusOutcome(outcome.error());
}

void DyplsapiClient::queryCallStatusAsync(const QueryCallStatusRequest& request, const QueryCallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCallStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DyplsapiClient::QueryCallStatusOutcomeCallable DyplsapiClient::queryCallStatusCallable(const QueryCallStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCallStatusOutcome()>>(
			[this, request]()
			{
			return this->queryCallStatus(request);
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

