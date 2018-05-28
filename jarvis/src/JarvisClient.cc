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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

JarvisClient::JarvisClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

JarvisClient::JarvisClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

JarvisClient::~JarvisClient()
{}

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

