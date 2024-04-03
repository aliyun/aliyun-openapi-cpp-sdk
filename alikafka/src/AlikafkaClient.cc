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

#include <alibabacloud/alikafka/AlikafkaClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Alikafka;
using namespace AlibabaCloud::Alikafka::Model;

namespace
{
	const std::string SERVICE_NAME = "alikafka";
}

AlikafkaClient::AlikafkaClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alikafka");
}

AlikafkaClient::AlikafkaClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alikafka");
}

AlikafkaClient::AlikafkaClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "alikafka");
}

AlikafkaClient::~AlikafkaClient()
{}

AlikafkaClient::ChangeResourceGroupOutcome AlikafkaClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceGroupOutcome(ChangeResourceGroupResult(outcome.result()));
	else
		return ChangeResourceGroupOutcome(outcome.error());
}

void AlikafkaClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::ChangeResourceGroupOutcomeCallable AlikafkaClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::ConvertPostPayOrderOutcome AlikafkaClient::convertPostPayOrder(const ConvertPostPayOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConvertPostPayOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConvertPostPayOrderOutcome(ConvertPostPayOrderResult(outcome.result()));
	else
		return ConvertPostPayOrderOutcome(outcome.error());
}

void AlikafkaClient::convertPostPayOrderAsync(const ConvertPostPayOrderRequest& request, const ConvertPostPayOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, convertPostPayOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::ConvertPostPayOrderOutcomeCallable AlikafkaClient::convertPostPayOrderCallable(const ConvertPostPayOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConvertPostPayOrderOutcome()>>(
			[this, request]()
			{
			return this->convertPostPayOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::CreateAclOutcome AlikafkaClient::createAcl(const CreateAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAclOutcome(CreateAclResult(outcome.result()));
	else
		return CreateAclOutcome(outcome.error());
}

void AlikafkaClient::createAclAsync(const CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::CreateAclOutcomeCallable AlikafkaClient::createAclCallable(const CreateAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAclOutcome()>>(
			[this, request]()
			{
			return this->createAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::CreateConsumerGroupOutcome AlikafkaClient::createConsumerGroup(const CreateConsumerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConsumerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConsumerGroupOutcome(CreateConsumerGroupResult(outcome.result()));
	else
		return CreateConsumerGroupOutcome(outcome.error());
}

void AlikafkaClient::createConsumerGroupAsync(const CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConsumerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::CreateConsumerGroupOutcomeCallable AlikafkaClient::createConsumerGroupCallable(const CreateConsumerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConsumerGroupOutcome()>>(
			[this, request]()
			{
			return this->createConsumerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::CreatePostPayOrderOutcome AlikafkaClient::createPostPayOrder(const CreatePostPayOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePostPayOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePostPayOrderOutcome(CreatePostPayOrderResult(outcome.result()));
	else
		return CreatePostPayOrderOutcome(outcome.error());
}

void AlikafkaClient::createPostPayOrderAsync(const CreatePostPayOrderRequest& request, const CreatePostPayOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPostPayOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::CreatePostPayOrderOutcomeCallable AlikafkaClient::createPostPayOrderCallable(const CreatePostPayOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePostPayOrderOutcome()>>(
			[this, request]()
			{
			return this->createPostPayOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::CreatePrePayOrderOutcome AlikafkaClient::createPrePayOrder(const CreatePrePayOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePrePayOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePrePayOrderOutcome(CreatePrePayOrderResult(outcome.result()));
	else
		return CreatePrePayOrderOutcome(outcome.error());
}

void AlikafkaClient::createPrePayOrderAsync(const CreatePrePayOrderRequest& request, const CreatePrePayOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPrePayOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::CreatePrePayOrderOutcomeCallable AlikafkaClient::createPrePayOrderCallable(const CreatePrePayOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePrePayOrderOutcome()>>(
			[this, request]()
			{
			return this->createPrePayOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::CreateSaslUserOutcome AlikafkaClient::createSaslUser(const CreateSaslUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSaslUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSaslUserOutcome(CreateSaslUserResult(outcome.result()));
	else
		return CreateSaslUserOutcome(outcome.error());
}

void AlikafkaClient::createSaslUserAsync(const CreateSaslUserRequest& request, const CreateSaslUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSaslUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::CreateSaslUserOutcomeCallable AlikafkaClient::createSaslUserCallable(const CreateSaslUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSaslUserOutcome()>>(
			[this, request]()
			{
			return this->createSaslUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::CreateTopicOutcome AlikafkaClient::createTopic(const CreateTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTopicOutcome(CreateTopicResult(outcome.result()));
	else
		return CreateTopicOutcome(outcome.error());
}

void AlikafkaClient::createTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::CreateTopicOutcomeCallable AlikafkaClient::createTopicCallable(const CreateTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTopicOutcome()>>(
			[this, request]()
			{
			return this->createTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::DeleteAclOutcome AlikafkaClient::deleteAcl(const DeleteAclRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAclOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAclOutcome(DeleteAclResult(outcome.result()));
	else
		return DeleteAclOutcome(outcome.error());
}

void AlikafkaClient::deleteAclAsync(const DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAcl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::DeleteAclOutcomeCallable AlikafkaClient::deleteAclCallable(const DeleteAclRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAclOutcome()>>(
			[this, request]()
			{
			return this->deleteAcl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::DeleteConsumerGroupOutcome AlikafkaClient::deleteConsumerGroup(const DeleteConsumerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConsumerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConsumerGroupOutcome(DeleteConsumerGroupResult(outcome.result()));
	else
		return DeleteConsumerGroupOutcome(outcome.error());
}

void AlikafkaClient::deleteConsumerGroupAsync(const DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConsumerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::DeleteConsumerGroupOutcomeCallable AlikafkaClient::deleteConsumerGroupCallable(const DeleteConsumerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConsumerGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteConsumerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::DeleteInstanceOutcome AlikafkaClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceOutcome(DeleteInstanceResult(outcome.result()));
	else
		return DeleteInstanceOutcome(outcome.error());
}

void AlikafkaClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::DeleteInstanceOutcomeCallable AlikafkaClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::DeleteSaslUserOutcome AlikafkaClient::deleteSaslUser(const DeleteSaslUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSaslUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSaslUserOutcome(DeleteSaslUserResult(outcome.result()));
	else
		return DeleteSaslUserOutcome(outcome.error());
}

void AlikafkaClient::deleteSaslUserAsync(const DeleteSaslUserRequest& request, const DeleteSaslUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSaslUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::DeleteSaslUserOutcomeCallable AlikafkaClient::deleteSaslUserCallable(const DeleteSaslUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSaslUserOutcome()>>(
			[this, request]()
			{
			return this->deleteSaslUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::DeleteTopicOutcome AlikafkaClient::deleteTopic(const DeleteTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTopicOutcome(DeleteTopicResult(outcome.result()));
	else
		return DeleteTopicOutcome(outcome.error());
}

void AlikafkaClient::deleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::DeleteTopicOutcomeCallable AlikafkaClient::deleteTopicCallable(const DeleteTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTopicOutcome()>>(
			[this, request]()
			{
			return this->deleteTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::DescribeAclsOutcome AlikafkaClient::describeAcls(const DescribeAclsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAclsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAclsOutcome(DescribeAclsResult(outcome.result()));
	else
		return DescribeAclsOutcome(outcome.error());
}

void AlikafkaClient::describeAclsAsync(const DescribeAclsRequest& request, const DescribeAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAcls(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::DescribeAclsOutcomeCallable AlikafkaClient::describeAclsCallable(const DescribeAclsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAclsOutcome()>>(
			[this, request]()
			{
			return this->describeAcls(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::DescribeSaslUsersOutcome AlikafkaClient::describeSaslUsers(const DescribeSaslUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSaslUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSaslUsersOutcome(DescribeSaslUsersResult(outcome.result()));
	else
		return DescribeSaslUsersOutcome(outcome.error());
}

void AlikafkaClient::describeSaslUsersAsync(const DescribeSaslUsersRequest& request, const DescribeSaslUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSaslUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::DescribeSaslUsersOutcomeCallable AlikafkaClient::describeSaslUsersCallable(const DescribeSaslUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSaslUsersOutcome()>>(
			[this, request]()
			{
			return this->describeSaslUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::EnableAutoGroupCreationOutcome AlikafkaClient::enableAutoGroupCreation(const EnableAutoGroupCreationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAutoGroupCreationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAutoGroupCreationOutcome(EnableAutoGroupCreationResult(outcome.result()));
	else
		return EnableAutoGroupCreationOutcome(outcome.error());
}

void AlikafkaClient::enableAutoGroupCreationAsync(const EnableAutoGroupCreationRequest& request, const EnableAutoGroupCreationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAutoGroupCreation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::EnableAutoGroupCreationOutcomeCallable AlikafkaClient::enableAutoGroupCreationCallable(const EnableAutoGroupCreationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAutoGroupCreationOutcome()>>(
			[this, request]()
			{
			return this->enableAutoGroupCreation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::EnableAutoTopicCreationOutcome AlikafkaClient::enableAutoTopicCreation(const EnableAutoTopicCreationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAutoTopicCreationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAutoTopicCreationOutcome(EnableAutoTopicCreationResult(outcome.result()));
	else
		return EnableAutoTopicCreationOutcome(outcome.error());
}

void AlikafkaClient::enableAutoTopicCreationAsync(const EnableAutoTopicCreationRequest& request, const EnableAutoTopicCreationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAutoTopicCreation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::EnableAutoTopicCreationOutcomeCallable AlikafkaClient::enableAutoTopicCreationCallable(const EnableAutoTopicCreationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAutoTopicCreationOutcome()>>(
			[this, request]()
			{
			return this->enableAutoTopicCreation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::GetAllInstanceIdListOutcome AlikafkaClient::getAllInstanceIdList(const GetAllInstanceIdListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllInstanceIdListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllInstanceIdListOutcome(GetAllInstanceIdListResult(outcome.result()));
	else
		return GetAllInstanceIdListOutcome(outcome.error());
}

void AlikafkaClient::getAllInstanceIdListAsync(const GetAllInstanceIdListRequest& request, const GetAllInstanceIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllInstanceIdList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::GetAllInstanceIdListOutcomeCallable AlikafkaClient::getAllInstanceIdListCallable(const GetAllInstanceIdListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllInstanceIdListOutcome()>>(
			[this, request]()
			{
			return this->getAllInstanceIdList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::GetAllowedIpListOutcome AlikafkaClient::getAllowedIpList(const GetAllowedIpListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllowedIpListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllowedIpListOutcome(GetAllowedIpListResult(outcome.result()));
	else
		return GetAllowedIpListOutcome(outcome.error());
}

void AlikafkaClient::getAllowedIpListAsync(const GetAllowedIpListRequest& request, const GetAllowedIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllowedIpList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::GetAllowedIpListOutcomeCallable AlikafkaClient::getAllowedIpListCallable(const GetAllowedIpListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllowedIpListOutcome()>>(
			[this, request]()
			{
			return this->getAllowedIpList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::GetConsumerListOutcome AlikafkaClient::getConsumerList(const GetConsumerListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConsumerListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConsumerListOutcome(GetConsumerListResult(outcome.result()));
	else
		return GetConsumerListOutcome(outcome.error());
}

void AlikafkaClient::getConsumerListAsync(const GetConsumerListRequest& request, const GetConsumerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConsumerList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::GetConsumerListOutcomeCallable AlikafkaClient::getConsumerListCallable(const GetConsumerListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConsumerListOutcome()>>(
			[this, request]()
			{
			return this->getConsumerList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::GetConsumerProgressOutcome AlikafkaClient::getConsumerProgress(const GetConsumerProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConsumerProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConsumerProgressOutcome(GetConsumerProgressResult(outcome.result()));
	else
		return GetConsumerProgressOutcome(outcome.error());
}

void AlikafkaClient::getConsumerProgressAsync(const GetConsumerProgressRequest& request, const GetConsumerProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConsumerProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::GetConsumerProgressOutcomeCallable AlikafkaClient::getConsumerProgressCallable(const GetConsumerProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConsumerProgressOutcome()>>(
			[this, request]()
			{
			return this->getConsumerProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::GetInstanceListOutcome AlikafkaClient::getInstanceList(const GetInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceListOutcome(GetInstanceListResult(outcome.result()));
	else
		return GetInstanceListOutcome(outcome.error());
}

void AlikafkaClient::getInstanceListAsync(const GetInstanceListRequest& request, const GetInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::GetInstanceListOutcomeCallable AlikafkaClient::getInstanceListCallable(const GetInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceListOutcome()>>(
			[this, request]()
			{
			return this->getInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::GetQuotaTipOutcome AlikafkaClient::getQuotaTip(const GetQuotaTipRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQuotaTipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQuotaTipOutcome(GetQuotaTipResult(outcome.result()));
	else
		return GetQuotaTipOutcome(outcome.error());
}

void AlikafkaClient::getQuotaTipAsync(const GetQuotaTipRequest& request, const GetQuotaTipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQuotaTip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::GetQuotaTipOutcomeCallable AlikafkaClient::getQuotaTipCallable(const GetQuotaTipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQuotaTipOutcome()>>(
			[this, request]()
			{
			return this->getQuotaTip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::GetTopicListOutcome AlikafkaClient::getTopicList(const GetTopicListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTopicListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTopicListOutcome(GetTopicListResult(outcome.result()));
	else
		return GetTopicListOutcome(outcome.error());
}

void AlikafkaClient::getTopicListAsync(const GetTopicListRequest& request, const GetTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTopicList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::GetTopicListOutcomeCallable AlikafkaClient::getTopicListCallable(const GetTopicListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTopicListOutcome()>>(
			[this, request]()
			{
			return this->getTopicList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::GetTopicStatusOutcome AlikafkaClient::getTopicStatus(const GetTopicStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTopicStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTopicStatusOutcome(GetTopicStatusResult(outcome.result()));
	else
		return GetTopicStatusOutcome(outcome.error());
}

void AlikafkaClient::getTopicStatusAsync(const GetTopicStatusRequest& request, const GetTopicStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTopicStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::GetTopicStatusOutcomeCallable AlikafkaClient::getTopicStatusCallable(const GetTopicStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTopicStatusOutcome()>>(
			[this, request]()
			{
			return this->getTopicStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::GetTopicSubscribeStatusOutcome AlikafkaClient::getTopicSubscribeStatus(const GetTopicSubscribeStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTopicSubscribeStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTopicSubscribeStatusOutcome(GetTopicSubscribeStatusResult(outcome.result()));
	else
		return GetTopicSubscribeStatusOutcome(outcome.error());
}

void AlikafkaClient::getTopicSubscribeStatusAsync(const GetTopicSubscribeStatusRequest& request, const GetTopicSubscribeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTopicSubscribeStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::GetTopicSubscribeStatusOutcomeCallable AlikafkaClient::getTopicSubscribeStatusCallable(const GetTopicSubscribeStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTopicSubscribeStatusOutcome()>>(
			[this, request]()
			{
			return this->getTopicSubscribeStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::ListTagResourcesOutcome AlikafkaClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void AlikafkaClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::ListTagResourcesOutcomeCallable AlikafkaClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::ModifyInstanceNameOutcome AlikafkaClient::modifyInstanceName(const ModifyInstanceNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceNameOutcome(ModifyInstanceNameResult(outcome.result()));
	else
		return ModifyInstanceNameOutcome(outcome.error());
}

void AlikafkaClient::modifyInstanceNameAsync(const ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstanceName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::ModifyInstanceNameOutcomeCallable AlikafkaClient::modifyInstanceNameCallable(const ModifyInstanceNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceNameOutcome()>>(
			[this, request]()
			{
			return this->modifyInstanceName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::ModifyPartitionNumOutcome AlikafkaClient::modifyPartitionNum(const ModifyPartitionNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPartitionNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPartitionNumOutcome(ModifyPartitionNumResult(outcome.result()));
	else
		return ModifyPartitionNumOutcome(outcome.error());
}

void AlikafkaClient::modifyPartitionNumAsync(const ModifyPartitionNumRequest& request, const ModifyPartitionNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPartitionNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::ModifyPartitionNumOutcomeCallable AlikafkaClient::modifyPartitionNumCallable(const ModifyPartitionNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPartitionNumOutcome()>>(
			[this, request]()
			{
			return this->modifyPartitionNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::ModifyTopicRemarkOutcome AlikafkaClient::modifyTopicRemark(const ModifyTopicRemarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTopicRemarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTopicRemarkOutcome(ModifyTopicRemarkResult(outcome.result()));
	else
		return ModifyTopicRemarkOutcome(outcome.error());
}

void AlikafkaClient::modifyTopicRemarkAsync(const ModifyTopicRemarkRequest& request, const ModifyTopicRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTopicRemark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::ModifyTopicRemarkOutcomeCallable AlikafkaClient::modifyTopicRemarkCallable(const ModifyTopicRemarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTopicRemarkOutcome()>>(
			[this, request]()
			{
			return this->modifyTopicRemark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::QueryMessageOutcome AlikafkaClient::queryMessage(const QueryMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMessageOutcome(QueryMessageResult(outcome.result()));
	else
		return QueryMessageOutcome(outcome.error());
}

void AlikafkaClient::queryMessageAsync(const QueryMessageRequest& request, const QueryMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::QueryMessageOutcomeCallable AlikafkaClient::queryMessageCallable(const QueryMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMessageOutcome()>>(
			[this, request]()
			{
			return this->queryMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::ReleaseInstanceOutcome AlikafkaClient::releaseInstance(const ReleaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceOutcome(ReleaseInstanceResult(outcome.result()));
	else
		return ReleaseInstanceOutcome(outcome.error());
}

void AlikafkaClient::releaseInstanceAsync(const ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::ReleaseInstanceOutcomeCallable AlikafkaClient::releaseInstanceCallable(const ReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::ReopenInstanceOutcome AlikafkaClient::reopenInstance(const ReopenInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReopenInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReopenInstanceOutcome(ReopenInstanceResult(outcome.result()));
	else
		return ReopenInstanceOutcome(outcome.error());
}

void AlikafkaClient::reopenInstanceAsync(const ReopenInstanceRequest& request, const ReopenInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reopenInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::ReopenInstanceOutcomeCallable AlikafkaClient::reopenInstanceCallable(const ReopenInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReopenInstanceOutcome()>>(
			[this, request]()
			{
			return this->reopenInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::StartInstanceOutcome AlikafkaClient::startInstance(const StartInstanceRequest &request) const
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

void AlikafkaClient::startInstanceAsync(const StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::StartInstanceOutcomeCallable AlikafkaClient::startInstanceCallable(const StartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartInstanceOutcome()>>(
			[this, request]()
			{
			return this->startInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::StopInstanceOutcome AlikafkaClient::stopInstance(const StopInstanceRequest &request) const
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

void AlikafkaClient::stopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::StopInstanceOutcomeCallable AlikafkaClient::stopInstanceCallable(const StopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::TagResourcesOutcome AlikafkaClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void AlikafkaClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::TagResourcesOutcomeCallable AlikafkaClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::UntagResourcesOutcome AlikafkaClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void AlikafkaClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::UntagResourcesOutcomeCallable AlikafkaClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::UpdateAllowedIpOutcome AlikafkaClient::updateAllowedIp(const UpdateAllowedIpRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAllowedIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAllowedIpOutcome(UpdateAllowedIpResult(outcome.result()));
	else
		return UpdateAllowedIpOutcome(outcome.error());
}

void AlikafkaClient::updateAllowedIpAsync(const UpdateAllowedIpRequest& request, const UpdateAllowedIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAllowedIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::UpdateAllowedIpOutcomeCallable AlikafkaClient::updateAllowedIpCallable(const UpdateAllowedIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAllowedIpOutcome()>>(
			[this, request]()
			{
			return this->updateAllowedIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::UpdateConsumerOffsetOutcome AlikafkaClient::updateConsumerOffset(const UpdateConsumerOffsetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConsumerOffsetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConsumerOffsetOutcome(UpdateConsumerOffsetResult(outcome.result()));
	else
		return UpdateConsumerOffsetOutcome(outcome.error());
}

void AlikafkaClient::updateConsumerOffsetAsync(const UpdateConsumerOffsetRequest& request, const UpdateConsumerOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConsumerOffset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::UpdateConsumerOffsetOutcomeCallable AlikafkaClient::updateConsumerOffsetCallable(const UpdateConsumerOffsetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConsumerOffsetOutcome()>>(
			[this, request]()
			{
			return this->updateConsumerOffset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::UpdateInstanceConfigOutcome AlikafkaClient::updateInstanceConfig(const UpdateInstanceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceConfigOutcome(UpdateInstanceConfigResult(outcome.result()));
	else
		return UpdateInstanceConfigOutcome(outcome.error());
}

void AlikafkaClient::updateInstanceConfigAsync(const UpdateInstanceConfigRequest& request, const UpdateInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::UpdateInstanceConfigOutcomeCallable AlikafkaClient::updateInstanceConfigCallable(const UpdateInstanceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceConfigOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::UpdateTopicConfigOutcome AlikafkaClient::updateTopicConfig(const UpdateTopicConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTopicConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTopicConfigOutcome(UpdateTopicConfigResult(outcome.result()));
	else
		return UpdateTopicConfigOutcome(outcome.error());
}

void AlikafkaClient::updateTopicConfigAsync(const UpdateTopicConfigRequest& request, const UpdateTopicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTopicConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::UpdateTopicConfigOutcomeCallable AlikafkaClient::updateTopicConfigCallable(const UpdateTopicConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTopicConfigOutcome()>>(
			[this, request]()
			{
			return this->updateTopicConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::UpgradeInstanceVersionOutcome AlikafkaClient::upgradeInstanceVersion(const UpgradeInstanceVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeInstanceVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeInstanceVersionOutcome(UpgradeInstanceVersionResult(outcome.result()));
	else
		return UpgradeInstanceVersionOutcome(outcome.error());
}

void AlikafkaClient::upgradeInstanceVersionAsync(const UpgradeInstanceVersionRequest& request, const UpgradeInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeInstanceVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::UpgradeInstanceVersionOutcomeCallable AlikafkaClient::upgradeInstanceVersionCallable(const UpgradeInstanceVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeInstanceVersionOutcome()>>(
			[this, request]()
			{
			return this->upgradeInstanceVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::UpgradePostPayOrderOutcome AlikafkaClient::upgradePostPayOrder(const UpgradePostPayOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradePostPayOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradePostPayOrderOutcome(UpgradePostPayOrderResult(outcome.result()));
	else
		return UpgradePostPayOrderOutcome(outcome.error());
}

void AlikafkaClient::upgradePostPayOrderAsync(const UpgradePostPayOrderRequest& request, const UpgradePostPayOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradePostPayOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::UpgradePostPayOrderOutcomeCallable AlikafkaClient::upgradePostPayOrderCallable(const UpgradePostPayOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradePostPayOrderOutcome()>>(
			[this, request]()
			{
			return this->upgradePostPayOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AlikafkaClient::UpgradePrePayOrderOutcome AlikafkaClient::upgradePrePayOrder(const UpgradePrePayOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradePrePayOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradePrePayOrderOutcome(UpgradePrePayOrderResult(outcome.result()));
	else
		return UpgradePrePayOrderOutcome(outcome.error());
}

void AlikafkaClient::upgradePrePayOrderAsync(const UpgradePrePayOrderRequest& request, const UpgradePrePayOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradePrePayOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AlikafkaClient::UpgradePrePayOrderOutcomeCallable AlikafkaClient::upgradePrePayOrderCallable(const UpgradePrePayOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradePrePayOrderOutcome()>>(
			[this, request]()
			{
			return this->upgradePrePayOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

