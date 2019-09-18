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

#include <alibabacloud/jarvis/JarvisClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Jarvis;
using namespace AlibabaCloud::Jarvis::Model;

namespace
{
	const std::string SERVICE_NAME = "jarvis";
}

JarvisClient::JarvisClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "jarvis");
}

JarvisClient::JarvisClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "jarvis");
}

JarvisClient::JarvisClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "jarvis");
}

JarvisClient::~JarvisClient()
{}

JarvisClient::CreateAccessWhiteListGroupOutcome JarvisClient::createAccessWhiteListGroup(const CreateAccessWhiteListGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAccessWhiteListGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAccessWhiteListGroupOutcome(CreateAccessWhiteListGroupResult(outcome.result()));
	else
		return CreateAccessWhiteListGroupOutcome(outcome.error());
}

void JarvisClient::createAccessWhiteListGroupAsync(const CreateAccessWhiteListGroupRequest& request, const CreateAccessWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAccessWhiteListGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::CreateAccessWhiteListGroupOutcomeCallable JarvisClient::createAccessWhiteListGroupCallable(const CreateAccessWhiteListGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAccessWhiteListGroupOutcome()>>(
			[this, request]()
			{
			return this->createAccessWhiteListGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::CreateAllEcsWhiteListOutcome JarvisClient::createAllEcsWhiteList(const CreateAllEcsWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAllEcsWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAllEcsWhiteListOutcome(CreateAllEcsWhiteListResult(outcome.result()));
	else
		return CreateAllEcsWhiteListOutcome(outcome.error());
}

void JarvisClient::createAllEcsWhiteListAsync(const CreateAllEcsWhiteListRequest& request, const CreateAllEcsWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAllEcsWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::CreateAllEcsWhiteListOutcomeCallable JarvisClient::createAllEcsWhiteListCallable(const CreateAllEcsWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAllEcsWhiteListOutcome()>>(
			[this, request]()
			{
			return this->createAllEcsWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::CreateCdnIpOutcome JarvisClient::createCdnIp(const CreateCdnIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCdnIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCdnIpOutcome(CreateCdnIpResult(outcome.result()));
	else
		return CreateCdnIpOutcome(outcome.error());
}

void JarvisClient::createCdnIpAsync(const CreateCdnIpRequest& request, const CreateCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCdnIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::CreateCdnIpOutcomeCallable JarvisClient::createCdnIpCallable(const CreateCdnIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCdnIpOutcome()>>(
			[this, request]()
			{
			return this->createCdnIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::CreateCdnSubscriptionOutcome JarvisClient::createCdnSubscription(const CreateCdnSubscriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCdnSubscriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCdnSubscriptionOutcome(CreateCdnSubscriptionResult(outcome.result()));
	else
		return CreateCdnSubscriptionOutcome(outcome.error());
}

void JarvisClient::createCdnSubscriptionAsync(const CreateCdnSubscriptionRequest& request, const CreateCdnSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCdnSubscription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::CreateCdnSubscriptionOutcomeCallable JarvisClient::createCdnSubscriptionCallable(const CreateCdnSubscriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCdnSubscriptionOutcome()>>(
			[this, request]()
			{
			return this->createCdnSubscription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::CreateConsoleAccessWhiteListOutcome JarvisClient::createConsoleAccessWhiteList(const CreateConsoleAccessWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConsoleAccessWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConsoleAccessWhiteListOutcome(CreateConsoleAccessWhiteListResult(outcome.result()));
	else
		return CreateConsoleAccessWhiteListOutcome(outcome.error());
}

void JarvisClient::createConsoleAccessWhiteListAsync(const CreateConsoleAccessWhiteListRequest& request, const CreateConsoleAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConsoleAccessWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::CreateConsoleAccessWhiteListOutcomeCallable JarvisClient::createConsoleAccessWhiteListCallable(const CreateConsoleAccessWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConsoleAccessWhiteListOutcome()>>(
			[this, request]()
			{
			return this->createConsoleAccessWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::CreateCpmcPunishFeedBackOutcome JarvisClient::createCpmcPunishFeedBack(const CreateCpmcPunishFeedBackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCpmcPunishFeedBackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCpmcPunishFeedBackOutcome(CreateCpmcPunishFeedBackResult(outcome.result()));
	else
		return CreateCpmcPunishFeedBackOutcome(outcome.error());
}

void JarvisClient::createCpmcPunishFeedBackAsync(const CreateCpmcPunishFeedBackRequest& request, const CreateCpmcPunishFeedBackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCpmcPunishFeedBack(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::CreateCpmcPunishFeedBackOutcomeCallable JarvisClient::createCpmcPunishFeedBackCallable(const CreateCpmcPunishFeedBackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCpmcPunishFeedBackOutcome()>>(
			[this, request]()
			{
			return this->createCpmcPunishFeedBack(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::CreateIpWhiteBaselineOutcome JarvisClient::createIpWhiteBaseline(const CreateIpWhiteBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIpWhiteBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIpWhiteBaselineOutcome(CreateIpWhiteBaselineResult(outcome.result()));
	else
		return CreateIpWhiteBaselineOutcome(outcome.error());
}

void JarvisClient::createIpWhiteBaselineAsync(const CreateIpWhiteBaselineRequest& request, const CreateIpWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIpWhiteBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::CreateIpWhiteBaselineOutcomeCallable JarvisClient::createIpWhiteBaselineCallable(const CreateIpWhiteBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIpWhiteBaselineOutcome()>>(
			[this, request]()
			{
			return this->createIpWhiteBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::CreateUidWhiteBaselineOutcome JarvisClient::createUidWhiteBaseline(const CreateUidWhiteBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUidWhiteBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUidWhiteBaselineOutcome(CreateUidWhiteBaselineResult(outcome.result()));
	else
		return CreateUidWhiteBaselineOutcome(outcome.error());
}

void JarvisClient::createUidWhiteBaselineAsync(const CreateUidWhiteBaselineRequest& request, const CreateUidWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUidWhiteBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::CreateUidWhiteBaselineOutcomeCallable JarvisClient::createUidWhiteBaselineCallable(const CreateUidWhiteBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUidWhiteBaselineOutcome()>>(
			[this, request]()
			{
			return this->createUidWhiteBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::CreateUidWhiteListGroupOutcome JarvisClient::createUidWhiteListGroup(const CreateUidWhiteListGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUidWhiteListGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUidWhiteListGroupOutcome(CreateUidWhiteListGroupResult(outcome.result()));
	else
		return CreateUidWhiteListGroupOutcome(outcome.error());
}

void JarvisClient::createUidWhiteListGroupAsync(const CreateUidWhiteListGroupRequest& request, const CreateUidWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUidWhiteListGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::CreateUidWhiteListGroupOutcomeCallable JarvisClient::createUidWhiteListGroupCallable(const CreateUidWhiteListGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUidWhiteListGroupOutcome()>>(
			[this, request]()
			{
			return this->createUidWhiteListGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DeleteAccessWhiteListGroupOutcome JarvisClient::deleteAccessWhiteListGroup(const DeleteAccessWhiteListGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccessWhiteListGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccessWhiteListGroupOutcome(DeleteAccessWhiteListGroupResult(outcome.result()));
	else
		return DeleteAccessWhiteListGroupOutcome(outcome.error());
}

void JarvisClient::deleteAccessWhiteListGroupAsync(const DeleteAccessWhiteListGroupRequest& request, const DeleteAccessWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccessWhiteListGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DeleteAccessWhiteListGroupOutcomeCallable JarvisClient::deleteAccessWhiteListGroupCallable(const DeleteAccessWhiteListGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccessWhiteListGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteAccessWhiteListGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DeleteCdnIpOutcome JarvisClient::deleteCdnIp(const DeleteCdnIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCdnIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCdnIpOutcome(DeleteCdnIpResult(outcome.result()));
	else
		return DeleteCdnIpOutcome(outcome.error());
}

void JarvisClient::deleteCdnIpAsync(const DeleteCdnIpRequest& request, const DeleteCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCdnIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DeleteCdnIpOutcomeCallable JarvisClient::deleteCdnIpCallable(const DeleteCdnIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCdnIpOutcome()>>(
			[this, request]()
			{
			return this->deleteCdnIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DeleteCdnSubscriptionOutcome JarvisClient::deleteCdnSubscription(const DeleteCdnSubscriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCdnSubscriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCdnSubscriptionOutcome(DeleteCdnSubscriptionResult(outcome.result()));
	else
		return DeleteCdnSubscriptionOutcome(outcome.error());
}

void JarvisClient::deleteCdnSubscriptionAsync(const DeleteCdnSubscriptionRequest& request, const DeleteCdnSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCdnSubscription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DeleteCdnSubscriptionOutcomeCallable JarvisClient::deleteCdnSubscriptionCallable(const DeleteCdnSubscriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCdnSubscriptionOutcome()>>(
			[this, request]()
			{
			return this->deleteCdnSubscription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DeleteConsoleAccessWhiteListOutcome JarvisClient::deleteConsoleAccessWhiteList(const DeleteConsoleAccessWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConsoleAccessWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConsoleAccessWhiteListOutcome(DeleteConsoleAccessWhiteListResult(outcome.result()));
	else
		return DeleteConsoleAccessWhiteListOutcome(outcome.error());
}

void JarvisClient::deleteConsoleAccessWhiteListAsync(const DeleteConsoleAccessWhiteListRequest& request, const DeleteConsoleAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConsoleAccessWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DeleteConsoleAccessWhiteListOutcomeCallable JarvisClient::deleteConsoleAccessWhiteListCallable(const DeleteConsoleAccessWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConsoleAccessWhiteListOutcome()>>(
			[this, request]()
			{
			return this->deleteConsoleAccessWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DeleteIpWhiteBaselineOutcome JarvisClient::deleteIpWhiteBaseline(const DeleteIpWhiteBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIpWhiteBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIpWhiteBaselineOutcome(DeleteIpWhiteBaselineResult(outcome.result()));
	else
		return DeleteIpWhiteBaselineOutcome(outcome.error());
}

void JarvisClient::deleteIpWhiteBaselineAsync(const DeleteIpWhiteBaselineRequest& request, const DeleteIpWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIpWhiteBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DeleteIpWhiteBaselineOutcomeCallable JarvisClient::deleteIpWhiteBaselineCallable(const DeleteIpWhiteBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIpWhiteBaselineOutcome()>>(
			[this, request]()
			{
			return this->deleteIpWhiteBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DeleteUidWhiteBaselineOutcome JarvisClient::deleteUidWhiteBaseline(const DeleteUidWhiteBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUidWhiteBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUidWhiteBaselineOutcome(DeleteUidWhiteBaselineResult(outcome.result()));
	else
		return DeleteUidWhiteBaselineOutcome(outcome.error());
}

void JarvisClient::deleteUidWhiteBaselineAsync(const DeleteUidWhiteBaselineRequest& request, const DeleteUidWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUidWhiteBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DeleteUidWhiteBaselineOutcomeCallable JarvisClient::deleteUidWhiteBaselineCallable(const DeleteUidWhiteBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUidWhiteBaselineOutcome()>>(
			[this, request]()
			{
			return this->deleteUidWhiteBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DeleteUidWhiteListGroupOutcome JarvisClient::deleteUidWhiteListGroup(const DeleteUidWhiteListGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUidWhiteListGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUidWhiteListGroupOutcome(DeleteUidWhiteListGroupResult(outcome.result()));
	else
		return DeleteUidWhiteListGroupOutcome(outcome.error());
}

void JarvisClient::deleteUidWhiteListGroupAsync(const DeleteUidWhiteListGroupRequest& request, const DeleteUidWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUidWhiteListGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DeleteUidWhiteListGroupOutcomeCallable JarvisClient::deleteUidWhiteListGroupCallable(const DeleteUidWhiteListGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUidWhiteListGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteUidWhiteListGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DeleteWhiteListConditionalOutcome JarvisClient::deleteWhiteListConditional(const DeleteWhiteListConditionalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWhiteListConditionalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWhiteListConditionalOutcome(DeleteWhiteListConditionalResult(outcome.result()));
	else
		return DeleteWhiteListConditionalOutcome(outcome.error());
}

void JarvisClient::deleteWhiteListConditionalAsync(const DeleteWhiteListConditionalRequest& request, const DeleteWhiteListConditionalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWhiteListConditional(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DeleteWhiteListConditionalOutcomeCallable JarvisClient::deleteWhiteListConditionalCallable(const DeleteWhiteListConditionalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWhiteListConditionalOutcome()>>(
			[this, request]()
			{
			return this->deleteWhiteListConditional(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DeleteWhiteListDbItemConditionalOutcome JarvisClient::deleteWhiteListDbItemConditional(const DeleteWhiteListDbItemConditionalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWhiteListDbItemConditionalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWhiteListDbItemConditionalOutcome(DeleteWhiteListDbItemConditionalResult(outcome.result()));
	else
		return DeleteWhiteListDbItemConditionalOutcome(outcome.error());
}

void JarvisClient::deleteWhiteListDbItemConditionalAsync(const DeleteWhiteListDbItemConditionalRequest& request, const DeleteWhiteListDbItemConditionalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWhiteListDbItemConditional(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DeleteWhiteListDbItemConditionalOutcomeCallable JarvisClient::deleteWhiteListDbItemConditionalCallable(const DeleteWhiteListDbItemConditionalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWhiteListDbItemConditionalOutcome()>>(
			[this, request]()
			{
			return this->deleteWhiteListDbItemConditional(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeAccessWhiteListEipListOutcome JarvisClient::describeAccessWhiteListEipList(const DescribeAccessWhiteListEipListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessWhiteListEipListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessWhiteListEipListOutcome(DescribeAccessWhiteListEipListResult(outcome.result()));
	else
		return DescribeAccessWhiteListEipListOutcome(outcome.error());
}

void JarvisClient::describeAccessWhiteListEipListAsync(const DescribeAccessWhiteListEipListRequest& request, const DescribeAccessWhiteListEipListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessWhiteListEipList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeAccessWhiteListEipListOutcomeCallable JarvisClient::describeAccessWhiteListEipListCallable(const DescribeAccessWhiteListEipListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessWhiteListEipListOutcome()>>(
			[this, request]()
			{
			return this->describeAccessWhiteListEipList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeAccessWhiteListGroupOutcome JarvisClient::describeAccessWhiteListGroup(const DescribeAccessWhiteListGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessWhiteListGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessWhiteListGroupOutcome(DescribeAccessWhiteListGroupResult(outcome.result()));
	else
		return DescribeAccessWhiteListGroupOutcome(outcome.error());
}

void JarvisClient::describeAccessWhiteListGroupAsync(const DescribeAccessWhiteListGroupRequest& request, const DescribeAccessWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessWhiteListGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeAccessWhiteListGroupOutcomeCallable JarvisClient::describeAccessWhiteListGroupCallable(const DescribeAccessWhiteListGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessWhiteListGroupOutcome()>>(
			[this, request]()
			{
			return this->describeAccessWhiteListGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeAccessWhiteListSlbListOutcome JarvisClient::describeAccessWhiteListSlbList(const DescribeAccessWhiteListSlbListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessWhiteListSlbListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessWhiteListSlbListOutcome(DescribeAccessWhiteListSlbListResult(outcome.result()));
	else
		return DescribeAccessWhiteListSlbListOutcome(outcome.error());
}

void JarvisClient::describeAccessWhiteListSlbListAsync(const DescribeAccessWhiteListSlbListRequest& request, const DescribeAccessWhiteListSlbListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessWhiteListSlbList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeAccessWhiteListSlbListOutcomeCallable JarvisClient::describeAccessWhiteListSlbListCallable(const DescribeAccessWhiteListSlbListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessWhiteListSlbListOutcome()>>(
			[this, request]()
			{
			return this->describeAccessWhiteListSlbList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeAccessWhitelistEcsListOutcome JarvisClient::describeAccessWhitelistEcsList(const DescribeAccessWhitelistEcsListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessWhitelistEcsListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessWhitelistEcsListOutcome(DescribeAccessWhitelistEcsListResult(outcome.result()));
	else
		return DescribeAccessWhitelistEcsListOutcome(outcome.error());
}

void JarvisClient::describeAccessWhitelistEcsListAsync(const DescribeAccessWhitelistEcsListRequest& request, const DescribeAccessWhitelistEcsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessWhitelistEcsList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeAccessWhitelistEcsListOutcomeCallable JarvisClient::describeAccessWhitelistEcsListCallable(const DescribeAccessWhitelistEcsListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessWhitelistEcsListOutcome()>>(
			[this, request]()
			{
			return this->describeAccessWhitelistEcsList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeCdnCertifyOutcome JarvisClient::describeCdnCertify(const DescribeCdnCertifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnCertifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnCertifyOutcome(DescribeCdnCertifyResult(outcome.result()));
	else
		return DescribeCdnCertifyOutcome(outcome.error());
}

void JarvisClient::describeCdnCertifyAsync(const DescribeCdnCertifyRequest& request, const DescribeCdnCertifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnCertify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeCdnCertifyOutcomeCallable JarvisClient::describeCdnCertifyCallable(const DescribeCdnCertifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnCertifyOutcome()>>(
			[this, request]()
			{
			return this->describeCdnCertify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeCdnIpListOutcome JarvisClient::describeCdnIpList(const DescribeCdnIpListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnIpListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnIpListOutcome(DescribeCdnIpListResult(outcome.result()));
	else
		return DescribeCdnIpListOutcome(outcome.error());
}

void JarvisClient::describeCdnIpListAsync(const DescribeCdnIpListRequest& request, const DescribeCdnIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnIpList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeCdnIpListOutcomeCallable JarvisClient::describeCdnIpListCallable(const DescribeCdnIpListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnIpListOutcome()>>(
			[this, request]()
			{
			return this->describeCdnIpList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeCdnSubscriptionOutcome JarvisClient::describeCdnSubscription(const DescribeCdnSubscriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnSubscriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnSubscriptionOutcome(DescribeCdnSubscriptionResult(outcome.result()));
	else
		return DescribeCdnSubscriptionOutcome(outcome.error());
}

void JarvisClient::describeCdnSubscriptionAsync(const DescribeCdnSubscriptionRequest& request, const DescribeCdnSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnSubscription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeCdnSubscriptionOutcomeCallable JarvisClient::describeCdnSubscriptionCallable(const DescribeCdnSubscriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnSubscriptionOutcome()>>(
			[this, request]()
			{
			return this->describeCdnSubscription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeCdnVendorOutcome JarvisClient::describeCdnVendor(const DescribeCdnVendorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCdnVendorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCdnVendorOutcome(DescribeCdnVendorResult(outcome.result()));
	else
		return DescribeCdnVendorOutcome(outcome.error());
}

void JarvisClient::describeCdnVendorAsync(const DescribeCdnVendorRequest& request, const DescribeCdnVendorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCdnVendor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeCdnVendorOutcomeCallable JarvisClient::describeCdnVendorCallable(const DescribeCdnVendorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCdnVendorOutcome()>>(
			[this, request]()
			{
			return this->describeCdnVendor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeConsoleAccessWhiteListOutcome JarvisClient::describeConsoleAccessWhiteList(const DescribeConsoleAccessWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConsoleAccessWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConsoleAccessWhiteListOutcome(DescribeConsoleAccessWhiteListResult(outcome.result()));
	else
		return DescribeConsoleAccessWhiteListOutcome(outcome.error());
}

void JarvisClient::describeConsoleAccessWhiteListAsync(const DescribeConsoleAccessWhiteListRequest& request, const DescribeConsoleAccessWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConsoleAccessWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeConsoleAccessWhiteListOutcomeCallable JarvisClient::describeConsoleAccessWhiteListCallable(const DescribeConsoleAccessWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConsoleAccessWhiteListOutcome()>>(
			[this, request]()
			{
			return this->describeConsoleAccessWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeCpmcPunishListOutcome JarvisClient::describeCpmcPunishList(const DescribeCpmcPunishListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCpmcPunishListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCpmcPunishListOutcome(DescribeCpmcPunishListResult(outcome.result()));
	else
		return DescribeCpmcPunishListOutcome(outcome.error());
}

void JarvisClient::describeCpmcPunishListAsync(const DescribeCpmcPunishListRequest& request, const DescribeCpmcPunishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCpmcPunishList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeCpmcPunishListOutcomeCallable JarvisClient::describeCpmcPunishListCallable(const DescribeCpmcPunishListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCpmcPunishListOutcome()>>(
			[this, request]()
			{
			return this->describeCpmcPunishList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeDdosDefenseInfoOutcome JarvisClient::describeDdosDefenseInfo(const DescribeDdosDefenseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDdosDefenseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDdosDefenseInfoOutcome(DescribeDdosDefenseInfoResult(outcome.result()));
	else
		return DescribeDdosDefenseInfoOutcome(outcome.error());
}

void JarvisClient::describeDdosDefenseInfoAsync(const DescribeDdosDefenseInfoRequest& request, const DescribeDdosDefenseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDdosDefenseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeDdosDefenseInfoOutcomeCallable JarvisClient::describeDdosDefenseInfoCallable(const DescribeDdosDefenseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDdosDefenseInfoOutcome()>>(
			[this, request]()
			{
			return this->describeDdosDefenseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeEcsListPageOutcome JarvisClient::describeEcsListPage(const DescribeEcsListPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEcsListPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEcsListPageOutcome(DescribeEcsListPageResult(outcome.result()));
	else
		return DescribeEcsListPageOutcome(outcome.error());
}

void JarvisClient::describeEcsListPageAsync(const DescribeEcsListPageRequest& request, const DescribeEcsListPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEcsListPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeEcsListPageOutcomeCallable JarvisClient::describeEcsListPageCallable(const DescribeEcsListPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEcsListPageOutcome()>>(
			[this, request]()
			{
			return this->describeEcsListPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeIpWhiteBaselineOutcome JarvisClient::describeIpWhiteBaseline(const DescribeIpWhiteBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIpWhiteBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIpWhiteBaselineOutcome(DescribeIpWhiteBaselineResult(outcome.result()));
	else
		return DescribeIpWhiteBaselineOutcome(outcome.error());
}

void JarvisClient::describeIpWhiteBaselineAsync(const DescribeIpWhiteBaselineRequest& request, const DescribeIpWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIpWhiteBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeIpWhiteBaselineOutcomeCallable JarvisClient::describeIpWhiteBaselineCallable(const DescribeIpWhiteBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIpWhiteBaselineOutcome()>>(
			[this, request]()
			{
			return this->describeIpWhiteBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribePhoneInfoOutcome JarvisClient::describePhoneInfo(const DescribePhoneInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePhoneInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePhoneInfoOutcome(DescribePhoneInfoResult(outcome.result()));
	else
		return DescribePhoneInfoOutcome(outcome.error());
}

void JarvisClient::describePhoneInfoAsync(const DescribePhoneInfoRequest& request, const DescribePhoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePhoneInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribePhoneInfoOutcomeCallable JarvisClient::describePhoneInfoCallable(const DescribePhoneInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePhoneInfoOutcome()>>(
			[this, request]()
			{
			return this->describePhoneInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribePunishListOutcome JarvisClient::describePunishList(const DescribePunishListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePunishListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePunishListOutcome(DescribePunishListResult(outcome.result()));
	else
		return DescribePunishListOutcome(outcome.error());
}

void JarvisClient::describePunishListAsync(const DescribePunishListRequest& request, const DescribePunishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePunishList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribePunishListOutcomeCallable JarvisClient::describePunishListCallable(const DescribePunishListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePunishListOutcome()>>(
			[this, request]()
			{
			return this->describePunishList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeResetRecordListOutcome JarvisClient::describeResetRecordList(const DescribeResetRecordListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResetRecordListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResetRecordListOutcome(DescribeResetRecordListResult(outcome.result()));
	else
		return DescribeResetRecordListOutcome(outcome.error());
}

void JarvisClient::describeResetRecordListAsync(const DescribeResetRecordListRequest& request, const DescribeResetRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResetRecordList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeResetRecordListOutcomeCallable JarvisClient::describeResetRecordListCallable(const DescribeResetRecordListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResetRecordListOutcome()>>(
			[this, request]()
			{
			return this->describeResetRecordList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeResetRecordQueryCountOutcome JarvisClient::describeResetRecordQueryCount(const DescribeResetRecordQueryCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResetRecordQueryCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResetRecordQueryCountOutcome(DescribeResetRecordQueryCountResult(outcome.result()));
	else
		return DescribeResetRecordQueryCountOutcome(outcome.error());
}

void JarvisClient::describeResetRecordQueryCountAsync(const DescribeResetRecordQueryCountRequest& request, const DescribeResetRecordQueryCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResetRecordQueryCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeResetRecordQueryCountOutcomeCallable JarvisClient::describeResetRecordQueryCountCallable(const DescribeResetRecordQueryCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResetRecordQueryCountOutcome()>>(
			[this, request]()
			{
			return this->describeResetRecordQueryCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeRiskListDetailOutcome JarvisClient::describeRiskListDetail(const DescribeRiskListDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskListDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskListDetailOutcome(DescribeRiskListDetailResult(outcome.result()));
	else
		return DescribeRiskListDetailOutcome(outcome.error());
}

void JarvisClient::describeRiskListDetailAsync(const DescribeRiskListDetailRequest& request, const DescribeRiskListDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskListDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeRiskListDetailOutcomeCallable JarvisClient::describeRiskListDetailCallable(const DescribeRiskListDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskListDetailOutcome()>>(
			[this, request]()
			{
			return this->describeRiskListDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeRiskTrendOutcome JarvisClient::describeRiskTrend(const DescribeRiskTrendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRiskTrendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRiskTrendOutcome(DescribeRiskTrendResult(outcome.result()));
	else
		return DescribeRiskTrendOutcome(outcome.error());
}

void JarvisClient::describeRiskTrendAsync(const DescribeRiskTrendRequest& request, const DescribeRiskTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRiskTrend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeRiskTrendOutcomeCallable JarvisClient::describeRiskTrendCallable(const DescribeRiskTrendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRiskTrendOutcome()>>(
			[this, request]()
			{
			return this->describeRiskTrend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeSpecialEcsOutcome JarvisClient::describeSpecialEcs(const DescribeSpecialEcsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSpecialEcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSpecialEcsOutcome(DescribeSpecialEcsResult(outcome.result()));
	else
		return DescribeSpecialEcsOutcome(outcome.error());
}

void JarvisClient::describeSpecialEcsAsync(const DescribeSpecialEcsRequest& request, const DescribeSpecialEcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSpecialEcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeSpecialEcsOutcomeCallable JarvisClient::describeSpecialEcsCallable(const DescribeSpecialEcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSpecialEcsOutcome()>>(
			[this, request]()
			{
			return this->describeSpecialEcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeUidGcLevelOutcome JarvisClient::describeUidGcLevel(const DescribeUidGcLevelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUidGcLevelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUidGcLevelOutcome(DescribeUidGcLevelResult(outcome.result()));
	else
		return DescribeUidGcLevelOutcome(outcome.error());
}

void JarvisClient::describeUidGcLevelAsync(const DescribeUidGcLevelRequest& request, const DescribeUidGcLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUidGcLevel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeUidGcLevelOutcomeCallable JarvisClient::describeUidGcLevelCallable(const DescribeUidGcLevelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUidGcLevelOutcome()>>(
			[this, request]()
			{
			return this->describeUidGcLevel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeUidWhiteBaselineOutcome JarvisClient::describeUidWhiteBaseline(const DescribeUidWhiteBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUidWhiteBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUidWhiteBaselineOutcome(DescribeUidWhiteBaselineResult(outcome.result()));
	else
		return DescribeUidWhiteBaselineOutcome(outcome.error());
}

void JarvisClient::describeUidWhiteBaselineAsync(const DescribeUidWhiteBaselineRequest& request, const DescribeUidWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUidWhiteBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeUidWhiteBaselineOutcomeCallable JarvisClient::describeUidWhiteBaselineCallable(const DescribeUidWhiteBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUidWhiteBaselineOutcome()>>(
			[this, request]()
			{
			return this->describeUidWhiteBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::DescribeUidWhiteListGroupOutcome JarvisClient::describeUidWhiteListGroup(const DescribeUidWhiteListGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUidWhiteListGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUidWhiteListGroupOutcome(DescribeUidWhiteListGroupResult(outcome.result()));
	else
		return DescribeUidWhiteListGroupOutcome(outcome.error());
}

void JarvisClient::describeUidWhiteListGroupAsync(const DescribeUidWhiteListGroupRequest& request, const DescribeUidWhiteListGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUidWhiteListGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::DescribeUidWhiteListGroupOutcomeCallable JarvisClient::describeUidWhiteListGroupCallable(const DescribeUidWhiteListGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUidWhiteListGroupOutcome()>>(
			[this, request]()
			{
			return this->describeUidWhiteListGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::ModifyAccessWhiteListAutoShareOutcome JarvisClient::modifyAccessWhiteListAutoShare(const ModifyAccessWhiteListAutoShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAccessWhiteListAutoShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAccessWhiteListAutoShareOutcome(ModifyAccessWhiteListAutoShareResult(outcome.result()));
	else
		return ModifyAccessWhiteListAutoShareOutcome(outcome.error());
}

void JarvisClient::modifyAccessWhiteListAutoShareAsync(const ModifyAccessWhiteListAutoShareRequest& request, const ModifyAccessWhiteListAutoShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAccessWhiteListAutoShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::ModifyAccessWhiteListAutoShareOutcomeCallable JarvisClient::modifyAccessWhiteListAutoShareCallable(const ModifyAccessWhiteListAutoShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAccessWhiteListAutoShareOutcome()>>(
			[this, request]()
			{
			return this->modifyAccessWhiteListAutoShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::ModifyIpWhiteBaselineOutcome JarvisClient::modifyIpWhiteBaseline(const ModifyIpWhiteBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIpWhiteBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIpWhiteBaselineOutcome(ModifyIpWhiteBaselineResult(outcome.result()));
	else
		return ModifyIpWhiteBaselineOutcome(outcome.error());
}

void JarvisClient::modifyIpWhiteBaselineAsync(const ModifyIpWhiteBaselineRequest& request, const ModifyIpWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIpWhiteBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::ModifyIpWhiteBaselineOutcomeCallable JarvisClient::modifyIpWhiteBaselineCallable(const ModifyIpWhiteBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIpWhiteBaselineOutcome()>>(
			[this, request]()
			{
			return this->modifyIpWhiteBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::ModifyUidWhiteBaselineOutcome JarvisClient::modifyUidWhiteBaseline(const ModifyUidWhiteBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUidWhiteBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUidWhiteBaselineOutcome(ModifyUidWhiteBaselineResult(outcome.result()));
	else
		return ModifyUidWhiteBaselineOutcome(outcome.error());
}

void JarvisClient::modifyUidWhiteBaselineAsync(const ModifyUidWhiteBaselineRequest& request, const ModifyUidWhiteBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUidWhiteBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::ModifyUidWhiteBaselineOutcomeCallable JarvisClient::modifyUidWhiteBaselineCallable(const ModifyUidWhiteBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUidWhiteBaselineOutcome()>>(
			[this, request]()
			{
			return this->modifyUidWhiteBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

JarvisClient::ModifyUidWhiteListAutoShareOutcome JarvisClient::modifyUidWhiteListAutoShare(const ModifyUidWhiteListAutoShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUidWhiteListAutoShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUidWhiteListAutoShareOutcome(ModifyUidWhiteListAutoShareResult(outcome.result()));
	else
		return ModifyUidWhiteListAutoShareOutcome(outcome.error());
}

void JarvisClient::modifyUidWhiteListAutoShareAsync(const ModifyUidWhiteListAutoShareRequest& request, const ModifyUidWhiteListAutoShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUidWhiteListAutoShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

JarvisClient::ModifyUidWhiteListAutoShareOutcomeCallable JarvisClient::modifyUidWhiteListAutoShareCallable(const ModifyUidWhiteListAutoShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUidWhiteListAutoShareOutcome()>>(
			[this, request]()
			{
			return this->modifyUidWhiteListAutoShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

