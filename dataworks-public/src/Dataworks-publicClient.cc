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

#include <alibabacloud/dataworks-public/Dataworks_publicClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

namespace
{
	const std::string SERVICE_NAME = "dataworks-public";
}

Dataworks_publicClient::Dataworks_publicClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dide");
}

Dataworks_publicClient::Dataworks_publicClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dide");
}

Dataworks_publicClient::Dataworks_publicClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dide");
}

Dataworks_publicClient::~Dataworks_publicClient()
{}

Dataworks_publicClient::AbolishDataServiceApiOutcome Dataworks_publicClient::abolishDataServiceApi(const AbolishDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbolishDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbolishDataServiceApiOutcome(AbolishDataServiceApiResult(outcome.result()));
	else
		return AbolishDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::abolishDataServiceApiAsync(const AbolishDataServiceApiRequest& request, const AbolishDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abolishDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::AbolishDataServiceApiOutcomeCallable Dataworks_publicClient::abolishDataServiceApiCallable(const AbolishDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbolishDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->abolishDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::AddToMetaCategoryOutcome Dataworks_publicClient::addToMetaCategory(const AddToMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddToMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddToMetaCategoryOutcome(AddToMetaCategoryResult(outcome.result()));
	else
		return AddToMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::addToMetaCategoryAsync(const AddToMetaCategoryRequest& request, const AddToMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addToMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::AddToMetaCategoryOutcomeCallable Dataworks_publicClient::addToMetaCategoryCallable(const AddToMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddToMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->addToMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CheckMetaPartitionOutcome Dataworks_publicClient::checkMetaPartition(const CheckMetaPartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckMetaPartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckMetaPartitionOutcome(CheckMetaPartitionResult(outcome.result()));
	else
		return CheckMetaPartitionOutcome(outcome.error());
}

void Dataworks_publicClient::checkMetaPartitionAsync(const CheckMetaPartitionRequest& request, const CheckMetaPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkMetaPartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CheckMetaPartitionOutcomeCallable Dataworks_publicClient::checkMetaPartitionCallable(const CheckMetaPartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckMetaPartitionOutcome()>>(
			[this, request]()
			{
			return this->checkMetaPartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CheckMetaTableOutcome Dataworks_publicClient::checkMetaTable(const CheckMetaTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckMetaTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckMetaTableOutcome(CheckMetaTableResult(outcome.result()));
	else
		return CheckMetaTableOutcome(outcome.error());
}

void Dataworks_publicClient::checkMetaTableAsync(const CheckMetaTableRequest& request, const CheckMetaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkMetaTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CheckMetaTableOutcomeCallable Dataworks_publicClient::checkMetaTableCallable(const CheckMetaTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckMetaTableOutcome()>>(
			[this, request]()
			{
			return this->checkMetaTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateConnectionOutcome Dataworks_publicClient::createConnection(const CreateConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConnectionOutcome(CreateConnectionResult(outcome.result()));
	else
		return CreateConnectionOutcome(outcome.error());
}

void Dataworks_publicClient::createConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateConnectionOutcomeCallable Dataworks_publicClient::createConnectionCallable(const CreateConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConnectionOutcome()>>(
			[this, request]()
			{
			return this->createConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateDataServiceApiOutcome Dataworks_publicClient::createDataServiceApi(const CreateDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDataServiceApiOutcome(CreateDataServiceApiResult(outcome.result()));
	else
		return CreateDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::createDataServiceApiAsync(const CreateDataServiceApiRequest& request, const CreateDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateDataServiceApiOutcomeCallable Dataworks_publicClient::createDataServiceApiCallable(const CreateDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->createDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateFileOutcome Dataworks_publicClient::createFile(const CreateFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFileOutcome(CreateFileResult(outcome.result()));
	else
		return CreateFileOutcome(outcome.error());
}

void Dataworks_publicClient::createFileAsync(const CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateFileOutcomeCallable Dataworks_publicClient::createFileCallable(const CreateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFileOutcome()>>(
			[this, request]()
			{
			return this->createFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateFolderOutcome Dataworks_publicClient::createFolder(const CreateFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateFolderOutcome(CreateFolderResult(outcome.result()));
	else
		return CreateFolderOutcome(outcome.error());
}

void Dataworks_publicClient::createFolderAsync(const CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateFolderOutcomeCallable Dataworks_publicClient::createFolderCallable(const CreateFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateFolderOutcome()>>(
			[this, request]()
			{
			return this->createFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateMetaCategoryOutcome Dataworks_publicClient::createMetaCategory(const CreateMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMetaCategoryOutcome(CreateMetaCategoryResult(outcome.result()));
	else
		return CreateMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::createMetaCategoryAsync(const CreateMetaCategoryRequest& request, const CreateMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateMetaCategoryOutcomeCallable Dataworks_publicClient::createMetaCategoryCallable(const CreateMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->createMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateNodeComplementOutcome Dataworks_publicClient::createNodeComplement(const CreateNodeComplementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNodeComplementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNodeComplementOutcome(CreateNodeComplementResult(outcome.result()));
	else
		return CreateNodeComplementOutcome(outcome.error());
}

void Dataworks_publicClient::createNodeComplementAsync(const CreateNodeComplementRequest& request, const CreateNodeComplementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNodeComplement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateNodeComplementOutcomeCallable Dataworks_publicClient::createNodeComplementCallable(const CreateNodeComplementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNodeComplementOutcome()>>(
			[this, request]()
			{
			return this->createNodeComplement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateNodeTestOutcome Dataworks_publicClient::createNodeTest(const CreateNodeTestRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNodeTestOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNodeTestOutcome(CreateNodeTestResult(outcome.result()));
	else
		return CreateNodeTestOutcome(outcome.error());
}

void Dataworks_publicClient::createNodeTestAsync(const CreateNodeTestRequest& request, const CreateNodeTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNodeTest(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateNodeTestOutcomeCallable Dataworks_publicClient::createNodeTestCallable(const CreateNodeTestRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNodeTestOutcome()>>(
			[this, request]()
			{
			return this->createNodeTest(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateQualityEntityOutcome Dataworks_publicClient::createQualityEntity(const CreateQualityEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQualityEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQualityEntityOutcome(CreateQualityEntityResult(outcome.result()));
	else
		return CreateQualityEntityOutcome(outcome.error());
}

void Dataworks_publicClient::createQualityEntityAsync(const CreateQualityEntityRequest& request, const CreateQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQualityEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateQualityEntityOutcomeCallable Dataworks_publicClient::createQualityEntityCallable(const CreateQualityEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQualityEntityOutcome()>>(
			[this, request]()
			{
			return this->createQualityEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateQualityFollowerOutcome Dataworks_publicClient::createQualityFollower(const CreateQualityFollowerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQualityFollowerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQualityFollowerOutcome(CreateQualityFollowerResult(outcome.result()));
	else
		return CreateQualityFollowerOutcome(outcome.error());
}

void Dataworks_publicClient::createQualityFollowerAsync(const CreateQualityFollowerRequest& request, const CreateQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQualityFollower(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateQualityFollowerOutcomeCallable Dataworks_publicClient::createQualityFollowerCallable(const CreateQualityFollowerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQualityFollowerOutcome()>>(
			[this, request]()
			{
			return this->createQualityFollower(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateQualityRelativeNodeOutcome Dataworks_publicClient::createQualityRelativeNode(const CreateQualityRelativeNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQualityRelativeNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQualityRelativeNodeOutcome(CreateQualityRelativeNodeResult(outcome.result()));
	else
		return CreateQualityRelativeNodeOutcome(outcome.error());
}

void Dataworks_publicClient::createQualityRelativeNodeAsync(const CreateQualityRelativeNodeRequest& request, const CreateQualityRelativeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQualityRelativeNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateQualityRelativeNodeOutcomeCallable Dataworks_publicClient::createQualityRelativeNodeCallable(const CreateQualityRelativeNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQualityRelativeNodeOutcome()>>(
			[this, request]()
			{
			return this->createQualityRelativeNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateQualityRuleOutcome Dataworks_publicClient::createQualityRule(const CreateQualityRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateQualityRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateQualityRuleOutcome(CreateQualityRuleResult(outcome.result()));
	else
		return CreateQualityRuleOutcome(outcome.error());
}

void Dataworks_publicClient::createQualityRuleAsync(const CreateQualityRuleRequest& request, const CreateQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createQualityRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateQualityRuleOutcomeCallable Dataworks_publicClient::createQualityRuleCallable(const CreateQualityRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateQualityRuleOutcome()>>(
			[this, request]()
			{
			return this->createQualityRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateRemindOutcome Dataworks_publicClient::createRemind(const CreateRemindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRemindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRemindOutcome(CreateRemindResult(outcome.result()));
	else
		return CreateRemindOutcome(outcome.error());
}

void Dataworks_publicClient::createRemindAsync(const CreateRemindRequest& request, const CreateRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRemind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateRemindOutcomeCallable Dataworks_publicClient::createRemindCallable(const CreateRemindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRemindOutcome()>>(
			[this, request]()
			{
			return this->createRemind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::CreateUdfFileOutcome Dataworks_publicClient::createUdfFile(const CreateUdfFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUdfFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUdfFileOutcome(CreateUdfFileResult(outcome.result()));
	else
		return CreateUdfFileOutcome(outcome.error());
}

void Dataworks_publicClient::createUdfFileAsync(const CreateUdfFileRequest& request, const CreateUdfFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUdfFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::CreateUdfFileOutcomeCallable Dataworks_publicClient::createUdfFileCallable(const CreateUdfFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUdfFileOutcome()>>(
			[this, request]()
			{
			return this->createUdfFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteBusinessOutcome Dataworks_publicClient::deleteBusiness(const DeleteBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBusinessOutcome(DeleteBusinessResult(outcome.result()));
	else
		return DeleteBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::deleteBusinessAsync(const DeleteBusinessRequest& request, const DeleteBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteBusinessOutcomeCallable Dataworks_publicClient::deleteBusinessCallable(const DeleteBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBusinessOutcome()>>(
			[this, request]()
			{
			return this->deleteBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteConnectionOutcome Dataworks_publicClient::deleteConnection(const DeleteConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConnectionOutcome(DeleteConnectionResult(outcome.result()));
	else
		return DeleteConnectionOutcome(outcome.error());
}

void Dataworks_publicClient::deleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteConnectionOutcomeCallable Dataworks_publicClient::deleteConnectionCallable(const DeleteConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConnectionOutcome()>>(
			[this, request]()
			{
			return this->deleteConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteDataServiceApiOutcome Dataworks_publicClient::deleteDataServiceApi(const DeleteDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataServiceApiOutcome(DeleteDataServiceApiResult(outcome.result()));
	else
		return DeleteDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::deleteDataServiceApiAsync(const DeleteDataServiceApiRequest& request, const DeleteDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteDataServiceApiOutcomeCallable Dataworks_publicClient::deleteDataServiceApiCallable(const DeleteDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->deleteDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteFileOutcome Dataworks_publicClient::deleteFile(const DeleteFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFileOutcome(DeleteFileResult(outcome.result()));
	else
		return DeleteFileOutcome(outcome.error());
}

void Dataworks_publicClient::deleteFileAsync(const DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteFileOutcomeCallable Dataworks_publicClient::deleteFileCallable(const DeleteFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFileOutcome()>>(
			[this, request]()
			{
			return this->deleteFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteFolderOutcome Dataworks_publicClient::deleteFolder(const DeleteFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFolderOutcome(DeleteFolderResult(outcome.result()));
	else
		return DeleteFolderOutcome(outcome.error());
}

void Dataworks_publicClient::deleteFolderAsync(const DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteFolderOutcomeCallable Dataworks_publicClient::deleteFolderCallable(const DeleteFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFolderOutcome()>>(
			[this, request]()
			{
			return this->deleteFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteFromMetaCategoryOutcome Dataworks_publicClient::deleteFromMetaCategory(const DeleteFromMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFromMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFromMetaCategoryOutcome(DeleteFromMetaCategoryResult(outcome.result()));
	else
		return DeleteFromMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::deleteFromMetaCategoryAsync(const DeleteFromMetaCategoryRequest& request, const DeleteFromMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFromMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteFromMetaCategoryOutcomeCallable Dataworks_publicClient::deleteFromMetaCategoryCallable(const DeleteFromMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFromMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteFromMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteMetaCategoryOutcome Dataworks_publicClient::deleteMetaCategory(const DeleteMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMetaCategoryOutcome(DeleteMetaCategoryResult(outcome.result()));
	else
		return DeleteMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::deleteMetaCategoryAsync(const DeleteMetaCategoryRequest& request, const DeleteMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteMetaCategoryOutcomeCallable Dataworks_publicClient::deleteMetaCategoryCallable(const DeleteMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->deleteMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteQualityEntityOutcome Dataworks_publicClient::deleteQualityEntity(const DeleteQualityEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQualityEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQualityEntityOutcome(DeleteQualityEntityResult(outcome.result()));
	else
		return DeleteQualityEntityOutcome(outcome.error());
}

void Dataworks_publicClient::deleteQualityEntityAsync(const DeleteQualityEntityRequest& request, const DeleteQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQualityEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteQualityEntityOutcomeCallable Dataworks_publicClient::deleteQualityEntityCallable(const DeleteQualityEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQualityEntityOutcome()>>(
			[this, request]()
			{
			return this->deleteQualityEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteQualityFollowerOutcome Dataworks_publicClient::deleteQualityFollower(const DeleteQualityFollowerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQualityFollowerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQualityFollowerOutcome(DeleteQualityFollowerResult(outcome.result()));
	else
		return DeleteQualityFollowerOutcome(outcome.error());
}

void Dataworks_publicClient::deleteQualityFollowerAsync(const DeleteQualityFollowerRequest& request, const DeleteQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQualityFollower(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteQualityFollowerOutcomeCallable Dataworks_publicClient::deleteQualityFollowerCallable(const DeleteQualityFollowerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQualityFollowerOutcome()>>(
			[this, request]()
			{
			return this->deleteQualityFollower(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteQualityRelativeNodeOutcome Dataworks_publicClient::deleteQualityRelativeNode(const DeleteQualityRelativeNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQualityRelativeNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQualityRelativeNodeOutcome(DeleteQualityRelativeNodeResult(outcome.result()));
	else
		return DeleteQualityRelativeNodeOutcome(outcome.error());
}

void Dataworks_publicClient::deleteQualityRelativeNodeAsync(const DeleteQualityRelativeNodeRequest& request, const DeleteQualityRelativeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQualityRelativeNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteQualityRelativeNodeOutcomeCallable Dataworks_publicClient::deleteQualityRelativeNodeCallable(const DeleteQualityRelativeNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQualityRelativeNodeOutcome()>>(
			[this, request]()
			{
			return this->deleteQualityRelativeNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteQualityRuleOutcome Dataworks_publicClient::deleteQualityRule(const DeleteQualityRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteQualityRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteQualityRuleOutcome(DeleteQualityRuleResult(outcome.result()));
	else
		return DeleteQualityRuleOutcome(outcome.error());
}

void Dataworks_publicClient::deleteQualityRuleAsync(const DeleteQualityRuleRequest& request, const DeleteQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteQualityRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteQualityRuleOutcomeCallable Dataworks_publicClient::deleteQualityRuleCallable(const DeleteQualityRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteQualityRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteQualityRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeleteRemindOutcome Dataworks_publicClient::deleteRemind(const DeleteRemindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRemindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRemindOutcome(DeleteRemindResult(outcome.result()));
	else
		return DeleteRemindOutcome(outcome.error());
}

void Dataworks_publicClient::deleteRemindAsync(const DeleteRemindRequest& request, const DeleteRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRemind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeleteRemindOutcomeCallable Dataworks_publicClient::deleteRemindCallable(const DeleteRemindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRemindOutcome()>>(
			[this, request]()
			{
			return this->deleteRemind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::DeployFileOutcome Dataworks_publicClient::deployFile(const DeployFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployFileOutcome(DeployFileResult(outcome.result()));
	else
		return DeployFileOutcome(outcome.error());
}

void Dataworks_publicClient::deployFileAsync(const DeployFileRequest& request, const DeployFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::DeployFileOutcomeCallable Dataworks_publicClient::deployFileCallable(const DeployFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployFileOutcome()>>(
			[this, request]()
			{
			return this->deployFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::EstablishRelationTableToBusinessOutcome Dataworks_publicClient::establishRelationTableToBusiness(const EstablishRelationTableToBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EstablishRelationTableToBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EstablishRelationTableToBusinessOutcome(EstablishRelationTableToBusinessResult(outcome.result()));
	else
		return EstablishRelationTableToBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::establishRelationTableToBusinessAsync(const EstablishRelationTableToBusinessRequest& request, const EstablishRelationTableToBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, establishRelationTableToBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::EstablishRelationTableToBusinessOutcomeCallable Dataworks_publicClient::establishRelationTableToBusinessCallable(const EstablishRelationTableToBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EstablishRelationTableToBusinessOutcome()>>(
			[this, request]()
			{
			return this->establishRelationTableToBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetBaselineConfigOutcome Dataworks_publicClient::getBaselineConfig(const GetBaselineConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBaselineConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBaselineConfigOutcome(GetBaselineConfigResult(outcome.result()));
	else
		return GetBaselineConfigOutcome(outcome.error());
}

void Dataworks_publicClient::getBaselineConfigAsync(const GetBaselineConfigRequest& request, const GetBaselineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBaselineConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetBaselineConfigOutcomeCallable Dataworks_publicClient::getBaselineConfigCallable(const GetBaselineConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBaselineConfigOutcome()>>(
			[this, request]()
			{
			return this->getBaselineConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetBaselineKeyPathOutcome Dataworks_publicClient::getBaselineKeyPath(const GetBaselineKeyPathRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBaselineKeyPathOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBaselineKeyPathOutcome(GetBaselineKeyPathResult(outcome.result()));
	else
		return GetBaselineKeyPathOutcome(outcome.error());
}

void Dataworks_publicClient::getBaselineKeyPathAsync(const GetBaselineKeyPathRequest& request, const GetBaselineKeyPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBaselineKeyPath(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetBaselineKeyPathOutcomeCallable Dataworks_publicClient::getBaselineKeyPathCallable(const GetBaselineKeyPathRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBaselineKeyPathOutcome()>>(
			[this, request]()
			{
			return this->getBaselineKeyPath(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetBaselineStatusOutcome Dataworks_publicClient::getBaselineStatus(const GetBaselineStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBaselineStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBaselineStatusOutcome(GetBaselineStatusResult(outcome.result()));
	else
		return GetBaselineStatusOutcome(outcome.error());
}

void Dataworks_publicClient::getBaselineStatusAsync(const GetBaselineStatusRequest& request, const GetBaselineStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBaselineStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetBaselineStatusOutcomeCallable Dataworks_publicClient::getBaselineStatusCallable(const GetBaselineStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBaselineStatusOutcome()>>(
			[this, request]()
			{
			return this->getBaselineStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetBusinessOutcome Dataworks_publicClient::getBusiness(const GetBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBusinessOutcome(GetBusinessResult(outcome.result()));
	else
		return GetBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::getBusinessAsync(const GetBusinessRequest& request, const GetBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetBusinessOutcomeCallable Dataworks_publicClient::getBusinessCallable(const GetBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBusinessOutcome()>>(
			[this, request]()
			{
			return this->getBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceApiOutcome Dataworks_publicClient::getDataServiceApi(const GetDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceApiOutcome(GetDataServiceApiResult(outcome.result()));
	else
		return GetDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceApiAsync(const GetDataServiceApiRequest& request, const GetDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceApiOutcomeCallable Dataworks_publicClient::getDataServiceApiCallable(const GetDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServiceApplicationOutcome Dataworks_publicClient::getDataServiceApplication(const GetDataServiceApplicationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServiceApplicationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServiceApplicationOutcome(GetDataServiceApplicationResult(outcome.result()));
	else
		return GetDataServiceApplicationOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServiceApplicationAsync(const GetDataServiceApplicationRequest& request, const GetDataServiceApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServiceApplication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServiceApplicationOutcomeCallable Dataworks_publicClient::getDataServiceApplicationCallable(const GetDataServiceApplicationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServiceApplicationOutcome()>>(
			[this, request]()
			{
			return this->getDataServiceApplication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDataServicePublishedApiOutcome Dataworks_publicClient::getDataServicePublishedApi(const GetDataServicePublishedApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataServicePublishedApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataServicePublishedApiOutcome(GetDataServicePublishedApiResult(outcome.result()));
	else
		return GetDataServicePublishedApiOutcome(outcome.error());
}

void Dataworks_publicClient::getDataServicePublishedApiAsync(const GetDataServicePublishedApiRequest& request, const GetDataServicePublishedApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataServicePublishedApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDataServicePublishedApiOutcomeCallable Dataworks_publicClient::getDataServicePublishedApiCallable(const GetDataServicePublishedApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataServicePublishedApiOutcome()>>(
			[this, request]()
			{
			return this->getDataServicePublishedApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetDeploymentOutcome Dataworks_publicClient::getDeployment(const GetDeploymentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDeploymentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDeploymentOutcome(GetDeploymentResult(outcome.result()));
	else
		return GetDeploymentOutcome(outcome.error());
}

void Dataworks_publicClient::getDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDeployment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetDeploymentOutcomeCallable Dataworks_publicClient::getDeploymentCallable(const GetDeploymentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDeploymentOutcome()>>(
			[this, request]()
			{
			return this->getDeployment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetFileOutcome Dataworks_publicClient::getFile(const GetFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileOutcome(GetFileResult(outcome.result()));
	else
		return GetFileOutcome(outcome.error());
}

void Dataworks_publicClient::getFileAsync(const GetFileRequest& request, const GetFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetFileOutcomeCallable Dataworks_publicClient::getFileCallable(const GetFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileOutcome()>>(
			[this, request]()
			{
			return this->getFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetFileVersionOutcome Dataworks_publicClient::getFileVersion(const GetFileVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFileVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFileVersionOutcome(GetFileVersionResult(outcome.result()));
	else
		return GetFileVersionOutcome(outcome.error());
}

void Dataworks_publicClient::getFileVersionAsync(const GetFileVersionRequest& request, const GetFileVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFileVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetFileVersionOutcomeCallable Dataworks_publicClient::getFileVersionCallable(const GetFileVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFileVersionOutcome()>>(
			[this, request]()
			{
			return this->getFileVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetFolderOutcome Dataworks_publicClient::getFolder(const GetFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFolderOutcome(GetFolderResult(outcome.result()));
	else
		return GetFolderOutcome(outcome.error());
}

void Dataworks_publicClient::getFolderAsync(const GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetFolderOutcomeCallable Dataworks_publicClient::getFolderCallable(const GetFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFolderOutcome()>>(
			[this, request]()
			{
			return this->getFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetInstanceOutcome Dataworks_publicClient::getInstance(const GetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceOutcome(GetInstanceResult(outcome.result()));
	else
		return GetInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetInstanceOutcomeCallable Dataworks_publicClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetInstanceLogOutcome Dataworks_publicClient::getInstanceLog(const GetInstanceLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceLogOutcome(GetInstanceLogResult(outcome.result()));
	else
		return GetInstanceLogOutcome(outcome.error());
}

void Dataworks_publicClient::getInstanceLogAsync(const GetInstanceLogRequest& request, const GetInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetInstanceLogOutcomeCallable Dataworks_publicClient::getInstanceLogCallable(const GetInstanceLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceLogOutcome()>>(
			[this, request]()
			{
			return this->getInstanceLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaCategoryOutcome Dataworks_publicClient::getMetaCategory(const GetMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaCategoryOutcome(GetMetaCategoryResult(outcome.result()));
	else
		return GetMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaCategoryAsync(const GetMetaCategoryRequest& request, const GetMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaCategoryOutcomeCallable Dataworks_publicClient::getMetaCategoryCallable(const GetMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->getMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaColumnLineageOutcome Dataworks_publicClient::getMetaColumnLineage(const GetMetaColumnLineageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaColumnLineageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaColumnLineageOutcome(GetMetaColumnLineageResult(outcome.result()));
	else
		return GetMetaColumnLineageOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaColumnLineageAsync(const GetMetaColumnLineageRequest& request, const GetMetaColumnLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaColumnLineage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaColumnLineageOutcomeCallable Dataworks_publicClient::getMetaColumnLineageCallable(const GetMetaColumnLineageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaColumnLineageOutcome()>>(
			[this, request]()
			{
			return this->getMetaColumnLineage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaDBInfoOutcome Dataworks_publicClient::getMetaDBInfo(const GetMetaDBInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaDBInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaDBInfoOutcome(GetMetaDBInfoResult(outcome.result()));
	else
		return GetMetaDBInfoOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaDBInfoAsync(const GetMetaDBInfoRequest& request, const GetMetaDBInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaDBInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaDBInfoOutcomeCallable Dataworks_publicClient::getMetaDBInfoCallable(const GetMetaDBInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaDBInfoOutcome()>>(
			[this, request]()
			{
			return this->getMetaDBInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaDBTableListOutcome Dataworks_publicClient::getMetaDBTableList(const GetMetaDBTableListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaDBTableListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaDBTableListOutcome(GetMetaDBTableListResult(outcome.result()));
	else
		return GetMetaDBTableListOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaDBTableListAsync(const GetMetaDBTableListRequest& request, const GetMetaDBTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaDBTableList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaDBTableListOutcomeCallable Dataworks_publicClient::getMetaDBTableListCallable(const GetMetaDBTableListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaDBTableListOutcome()>>(
			[this, request]()
			{
			return this->getMetaDBTableList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableBasicInfoOutcome Dataworks_publicClient::getMetaTableBasicInfo(const GetMetaTableBasicInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableBasicInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableBasicInfoOutcome(GetMetaTableBasicInfoResult(outcome.result()));
	else
		return GetMetaTableBasicInfoOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableBasicInfoAsync(const GetMetaTableBasicInfoRequest& request, const GetMetaTableBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableBasicInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableBasicInfoOutcomeCallable Dataworks_publicClient::getMetaTableBasicInfoCallable(const GetMetaTableBasicInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableBasicInfoOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableBasicInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableChangeLogOutcome Dataworks_publicClient::getMetaTableChangeLog(const GetMetaTableChangeLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableChangeLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableChangeLogOutcome(GetMetaTableChangeLogResult(outcome.result()));
	else
		return GetMetaTableChangeLogOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableChangeLogAsync(const GetMetaTableChangeLogRequest& request, const GetMetaTableChangeLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableChangeLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableChangeLogOutcomeCallable Dataworks_publicClient::getMetaTableChangeLogCallable(const GetMetaTableChangeLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableChangeLogOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableChangeLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableColumnOutcome Dataworks_publicClient::getMetaTableColumn(const GetMetaTableColumnRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableColumnOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableColumnOutcome(GetMetaTableColumnResult(outcome.result()));
	else
		return GetMetaTableColumnOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableColumnAsync(const GetMetaTableColumnRequest& request, const GetMetaTableColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableColumn(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableColumnOutcomeCallable Dataworks_publicClient::getMetaTableColumnCallable(const GetMetaTableColumnRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableColumnOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableColumn(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableFullInfoOutcome Dataworks_publicClient::getMetaTableFullInfo(const GetMetaTableFullInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableFullInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableFullInfoOutcome(GetMetaTableFullInfoResult(outcome.result()));
	else
		return GetMetaTableFullInfoOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableFullInfoAsync(const GetMetaTableFullInfoRequest& request, const GetMetaTableFullInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableFullInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableFullInfoOutcomeCallable Dataworks_publicClient::getMetaTableFullInfoCallable(const GetMetaTableFullInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableFullInfoOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableFullInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableIntroWikiOutcome Dataworks_publicClient::getMetaTableIntroWiki(const GetMetaTableIntroWikiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableIntroWikiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableIntroWikiOutcome(GetMetaTableIntroWikiResult(outcome.result()));
	else
		return GetMetaTableIntroWikiOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableIntroWikiAsync(const GetMetaTableIntroWikiRequest& request, const GetMetaTableIntroWikiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableIntroWiki(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableIntroWikiOutcomeCallable Dataworks_publicClient::getMetaTableIntroWikiCallable(const GetMetaTableIntroWikiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableIntroWikiOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableIntroWiki(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableLineageOutcome Dataworks_publicClient::getMetaTableLineage(const GetMetaTableLineageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableLineageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableLineageOutcome(GetMetaTableLineageResult(outcome.result()));
	else
		return GetMetaTableLineageOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableLineageAsync(const GetMetaTableLineageRequest& request, const GetMetaTableLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableLineage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableLineageOutcomeCallable Dataworks_publicClient::getMetaTableLineageCallable(const GetMetaTableLineageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableLineageOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableLineage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableListByCategoryOutcome Dataworks_publicClient::getMetaTableListByCategory(const GetMetaTableListByCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableListByCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableListByCategoryOutcome(GetMetaTableListByCategoryResult(outcome.result()));
	else
		return GetMetaTableListByCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableListByCategoryAsync(const GetMetaTableListByCategoryRequest& request, const GetMetaTableListByCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableListByCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableListByCategoryOutcomeCallable Dataworks_publicClient::getMetaTableListByCategoryCallable(const GetMetaTableListByCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableListByCategoryOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableListByCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTableOutputOutcome Dataworks_publicClient::getMetaTableOutput(const GetMetaTableOutputRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTableOutputOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTableOutputOutcome(GetMetaTableOutputResult(outcome.result()));
	else
		return GetMetaTableOutputOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTableOutputAsync(const GetMetaTableOutputRequest& request, const GetMetaTableOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTableOutput(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTableOutputOutcomeCallable Dataworks_publicClient::getMetaTableOutputCallable(const GetMetaTableOutputRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTableOutputOutcome()>>(
			[this, request]()
			{
			return this->getMetaTableOutput(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetMetaTablePartitionOutcome Dataworks_publicClient::getMetaTablePartition(const GetMetaTablePartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMetaTablePartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMetaTablePartitionOutcome(GetMetaTablePartitionResult(outcome.result()));
	else
		return GetMetaTablePartitionOutcome(outcome.error());
}

void Dataworks_publicClient::getMetaTablePartitionAsync(const GetMetaTablePartitionRequest& request, const GetMetaTablePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMetaTablePartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetMetaTablePartitionOutcomeCallable Dataworks_publicClient::getMetaTablePartitionCallable(const GetMetaTablePartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMetaTablePartitionOutcome()>>(
			[this, request]()
			{
			return this->getMetaTablePartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetNodeOutcome Dataworks_publicClient::getNode(const GetNodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeOutcome(GetNodeResult(outcome.result()));
	else
		return GetNodeOutcome(outcome.error());
}

void Dataworks_publicClient::getNodeAsync(const GetNodeRequest& request, const GetNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetNodeOutcomeCallable Dataworks_publicClient::getNodeCallable(const GetNodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeOutcome()>>(
			[this, request]()
			{
			return this->getNode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetNodeCodeOutcome Dataworks_publicClient::getNodeCode(const GetNodeCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeCodeOutcome(GetNodeCodeResult(outcome.result()));
	else
		return GetNodeCodeOutcome(outcome.error());
}

void Dataworks_publicClient::getNodeCodeAsync(const GetNodeCodeRequest& request, const GetNodeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetNodeCodeOutcomeCallable Dataworks_publicClient::getNodeCodeCallable(const GetNodeCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeCodeOutcome()>>(
			[this, request]()
			{
			return this->getNodeCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetNodeOnBaselineOutcome Dataworks_publicClient::getNodeOnBaseline(const GetNodeOnBaselineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNodeOnBaselineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNodeOnBaselineOutcome(GetNodeOnBaselineResult(outcome.result()));
	else
		return GetNodeOnBaselineOutcome(outcome.error());
}

void Dataworks_publicClient::getNodeOnBaselineAsync(const GetNodeOnBaselineRequest& request, const GetNodeOnBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNodeOnBaseline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetNodeOnBaselineOutcomeCallable Dataworks_publicClient::getNodeOnBaselineCallable(const GetNodeOnBaselineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNodeOnBaselineOutcome()>>(
			[this, request]()
			{
			return this->getNodeOnBaseline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetProjectDetailOutcome Dataworks_publicClient::getProjectDetail(const GetProjectDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetProjectDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetProjectDetailOutcome(GetProjectDetailResult(outcome.result()));
	else
		return GetProjectDetailOutcome(outcome.error());
}

void Dataworks_publicClient::getProjectDetailAsync(const GetProjectDetailRequest& request, const GetProjectDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getProjectDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetProjectDetailOutcomeCallable Dataworks_publicClient::getProjectDetailCallable(const GetProjectDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetProjectDetailOutcome()>>(
			[this, request]()
			{
			return this->getProjectDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetQualityEntityOutcome Dataworks_publicClient::getQualityEntity(const GetQualityEntityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQualityEntityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQualityEntityOutcome(GetQualityEntityResult(outcome.result()));
	else
		return GetQualityEntityOutcome(outcome.error());
}

void Dataworks_publicClient::getQualityEntityAsync(const GetQualityEntityRequest& request, const GetQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQualityEntity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetQualityEntityOutcomeCallable Dataworks_publicClient::getQualityEntityCallable(const GetQualityEntityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQualityEntityOutcome()>>(
			[this, request]()
			{
			return this->getQualityEntity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetQualityFollowerOutcome Dataworks_publicClient::getQualityFollower(const GetQualityFollowerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQualityFollowerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQualityFollowerOutcome(GetQualityFollowerResult(outcome.result()));
	else
		return GetQualityFollowerOutcome(outcome.error());
}

void Dataworks_publicClient::getQualityFollowerAsync(const GetQualityFollowerRequest& request, const GetQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQualityFollower(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetQualityFollowerOutcomeCallable Dataworks_publicClient::getQualityFollowerCallable(const GetQualityFollowerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQualityFollowerOutcome()>>(
			[this, request]()
			{
			return this->getQualityFollower(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetQualityRuleOutcome Dataworks_publicClient::getQualityRule(const GetQualityRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQualityRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQualityRuleOutcome(GetQualityRuleResult(outcome.result()));
	else
		return GetQualityRuleOutcome(outcome.error());
}

void Dataworks_publicClient::getQualityRuleAsync(const GetQualityRuleRequest& request, const GetQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQualityRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetQualityRuleOutcomeCallable Dataworks_publicClient::getQualityRuleCallable(const GetQualityRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQualityRuleOutcome()>>(
			[this, request]()
			{
			return this->getQualityRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetRemindOutcome Dataworks_publicClient::getRemind(const GetRemindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRemindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRemindOutcome(GetRemindResult(outcome.result()));
	else
		return GetRemindOutcome(outcome.error());
}

void Dataworks_publicClient::getRemindAsync(const GetRemindRequest& request, const GetRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRemind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetRemindOutcomeCallable Dataworks_publicClient::getRemindCallable(const GetRemindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRemindOutcome()>>(
			[this, request]()
			{
			return this->getRemind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetTopicOutcome Dataworks_publicClient::getTopic(const GetTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTopicOutcome(GetTopicResult(outcome.result()));
	else
		return GetTopicOutcome(outcome.error());
}

void Dataworks_publicClient::getTopicAsync(const GetTopicRequest& request, const GetTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetTopicOutcomeCallable Dataworks_publicClient::getTopicCallable(const GetTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTopicOutcome()>>(
			[this, request]()
			{
			return this->getTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::GetTopicInfluenceOutcome Dataworks_publicClient::getTopicInfluence(const GetTopicInfluenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTopicInfluenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTopicInfluenceOutcome(GetTopicInfluenceResult(outcome.result()));
	else
		return GetTopicInfluenceOutcome(outcome.error());
}

void Dataworks_publicClient::getTopicInfluenceAsync(const GetTopicInfluenceRequest& request, const GetTopicInfluenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTopicInfluence(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::GetTopicInfluenceOutcomeCallable Dataworks_publicClient::getTopicInfluenceCallable(const GetTopicInfluenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTopicInfluenceOutcome()>>(
			[this, request]()
			{
			return this->getTopicInfluence(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListAlertMessagesOutcome Dataworks_publicClient::listAlertMessages(const ListAlertMessagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlertMessagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlertMessagesOutcome(ListAlertMessagesResult(outcome.result()));
	else
		return ListAlertMessagesOutcome(outcome.error());
}

void Dataworks_publicClient::listAlertMessagesAsync(const ListAlertMessagesRequest& request, const ListAlertMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlertMessages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListAlertMessagesOutcomeCallable Dataworks_publicClient::listAlertMessagesCallable(const ListAlertMessagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlertMessagesOutcome()>>(
			[this, request]()
			{
			return this->listAlertMessages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListBaselineConfigsOutcome Dataworks_publicClient::listBaselineConfigs(const ListBaselineConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaselineConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaselineConfigsOutcome(ListBaselineConfigsResult(outcome.result()));
	else
		return ListBaselineConfigsOutcome(outcome.error());
}

void Dataworks_publicClient::listBaselineConfigsAsync(const ListBaselineConfigsRequest& request, const ListBaselineConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaselineConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListBaselineConfigsOutcomeCallable Dataworks_publicClient::listBaselineConfigsCallable(const ListBaselineConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaselineConfigsOutcome()>>(
			[this, request]()
			{
			return this->listBaselineConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListBaselineStatusesOutcome Dataworks_publicClient::listBaselineStatuses(const ListBaselineStatusesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBaselineStatusesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBaselineStatusesOutcome(ListBaselineStatusesResult(outcome.result()));
	else
		return ListBaselineStatusesOutcome(outcome.error());
}

void Dataworks_publicClient::listBaselineStatusesAsync(const ListBaselineStatusesRequest& request, const ListBaselineStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBaselineStatuses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListBaselineStatusesOutcomeCallable Dataworks_publicClient::listBaselineStatusesCallable(const ListBaselineStatusesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBaselineStatusesOutcome()>>(
			[this, request]()
			{
			return this->listBaselineStatuses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListBusinessOutcome Dataworks_publicClient::listBusiness(const ListBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBusinessOutcome(ListBusinessResult(outcome.result()));
	else
		return ListBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::listBusinessAsync(const ListBusinessRequest& request, const ListBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListBusinessOutcomeCallable Dataworks_publicClient::listBusinessCallable(const ListBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBusinessOutcome()>>(
			[this, request]()
			{
			return this->listBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListCalcEnginesOutcome Dataworks_publicClient::listCalcEngines(const ListCalcEnginesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCalcEnginesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCalcEnginesOutcome(ListCalcEnginesResult(outcome.result()));
	else
		return ListCalcEnginesOutcome(outcome.error());
}

void Dataworks_publicClient::listCalcEnginesAsync(const ListCalcEnginesRequest& request, const ListCalcEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCalcEngines(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListCalcEnginesOutcomeCallable Dataworks_publicClient::listCalcEnginesCallable(const ListCalcEnginesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCalcEnginesOutcome()>>(
			[this, request]()
			{
			return this->listCalcEngines(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListConnectionsOutcome Dataworks_publicClient::listConnections(const ListConnectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConnectionsOutcome(ListConnectionsResult(outcome.result()));
	else
		return ListConnectionsOutcome(outcome.error());
}

void Dataworks_publicClient::listConnectionsAsync(const ListConnectionsRequest& request, const ListConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListConnectionsOutcomeCallable Dataworks_publicClient::listConnectionsCallable(const ListConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConnectionsOutcome()>>(
			[this, request]()
			{
			return this->listConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceApiAuthoritiesOutcome Dataworks_publicClient::listDataServiceApiAuthorities(const ListDataServiceApiAuthoritiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceApiAuthoritiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceApiAuthoritiesOutcome(ListDataServiceApiAuthoritiesResult(outcome.result()));
	else
		return ListDataServiceApiAuthoritiesOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceApiAuthoritiesAsync(const ListDataServiceApiAuthoritiesRequest& request, const ListDataServiceApiAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceApiAuthorities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceApiAuthoritiesOutcomeCallable Dataworks_publicClient::listDataServiceApiAuthoritiesCallable(const ListDataServiceApiAuthoritiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceApiAuthoritiesOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceApiAuthorities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceApisOutcome Dataworks_publicClient::listDataServiceApis(const ListDataServiceApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceApisOutcome(ListDataServiceApisResult(outcome.result()));
	else
		return ListDataServiceApisOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceApisAsync(const ListDataServiceApisRequest& request, const ListDataServiceApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceApisOutcomeCallable Dataworks_publicClient::listDataServiceApisCallable(const ListDataServiceApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceApisOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceApplicationsOutcome Dataworks_publicClient::listDataServiceApplications(const ListDataServiceApplicationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceApplicationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceApplicationsOutcome(ListDataServiceApplicationsResult(outcome.result()));
	else
		return ListDataServiceApplicationsOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceApplicationsAsync(const ListDataServiceApplicationsRequest& request, const ListDataServiceApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceApplications(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceApplicationsOutcomeCallable Dataworks_publicClient::listDataServiceApplicationsCallable(const ListDataServiceApplicationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceApplicationsOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceApplications(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServiceAuthorizedApisOutcome Dataworks_publicClient::listDataServiceAuthorizedApis(const ListDataServiceAuthorizedApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServiceAuthorizedApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServiceAuthorizedApisOutcome(ListDataServiceAuthorizedApisResult(outcome.result()));
	else
		return ListDataServiceAuthorizedApisOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServiceAuthorizedApisAsync(const ListDataServiceAuthorizedApisRequest& request, const ListDataServiceAuthorizedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServiceAuthorizedApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServiceAuthorizedApisOutcomeCallable Dataworks_publicClient::listDataServiceAuthorizedApisCallable(const ListDataServiceAuthorizedApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServiceAuthorizedApisOutcome()>>(
			[this, request]()
			{
			return this->listDataServiceAuthorizedApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListDataServicePublishedApisOutcome Dataworks_publicClient::listDataServicePublishedApis(const ListDataServicePublishedApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataServicePublishedApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataServicePublishedApisOutcome(ListDataServicePublishedApisResult(outcome.result()));
	else
		return ListDataServicePublishedApisOutcome(outcome.error());
}

void Dataworks_publicClient::listDataServicePublishedApisAsync(const ListDataServicePublishedApisRequest& request, const ListDataServicePublishedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataServicePublishedApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListDataServicePublishedApisOutcomeCallable Dataworks_publicClient::listDataServicePublishedApisCallable(const ListDataServicePublishedApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataServicePublishedApisOutcome()>>(
			[this, request]()
			{
			return this->listDataServicePublishedApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListFileVersionsOutcome Dataworks_publicClient::listFileVersions(const ListFileVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFileVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFileVersionsOutcome(ListFileVersionsResult(outcome.result()));
	else
		return ListFileVersionsOutcome(outcome.error());
}

void Dataworks_publicClient::listFileVersionsAsync(const ListFileVersionsRequest& request, const ListFileVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFileVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListFileVersionsOutcomeCallable Dataworks_publicClient::listFileVersionsCallable(const ListFileVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFileVersionsOutcome()>>(
			[this, request]()
			{
			return this->listFileVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListFilesOutcome Dataworks_publicClient::listFiles(const ListFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFilesOutcome(ListFilesResult(outcome.result()));
	else
		return ListFilesOutcome(outcome.error());
}

void Dataworks_publicClient::listFilesAsync(const ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListFilesOutcomeCallable Dataworks_publicClient::listFilesCallable(const ListFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFilesOutcome()>>(
			[this, request]()
			{
			return this->listFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListFoldersOutcome Dataworks_publicClient::listFolders(const ListFoldersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFoldersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFoldersOutcome(ListFoldersResult(outcome.result()));
	else
		return ListFoldersOutcome(outcome.error());
}

void Dataworks_publicClient::listFoldersAsync(const ListFoldersRequest& request, const ListFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFolders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListFoldersOutcomeCallable Dataworks_publicClient::listFoldersCallable(const ListFoldersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFoldersOutcome()>>(
			[this, request]()
			{
			return this->listFolders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListInstancesOutcome Dataworks_publicClient::listInstances(const ListInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesOutcome(ListInstancesResult(outcome.result()));
	else
		return ListInstancesOutcome(outcome.error());
}

void Dataworks_publicClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListInstancesOutcomeCallable Dataworks_publicClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListNodeIOOutcome Dataworks_publicClient::listNodeIO(const ListNodeIORequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodeIOOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodeIOOutcome(ListNodeIOResult(outcome.result()));
	else
		return ListNodeIOOutcome(outcome.error());
}

void Dataworks_publicClient::listNodeIOAsync(const ListNodeIORequest& request, const ListNodeIOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodeIO(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListNodeIOOutcomeCallable Dataworks_publicClient::listNodeIOCallable(const ListNodeIORequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodeIOOutcome()>>(
			[this, request]()
			{
			return this->listNodeIO(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListNodesOutcome Dataworks_publicClient::listNodes(const ListNodesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNodesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNodesOutcome(ListNodesResult(outcome.result()));
	else
		return ListNodesOutcome(outcome.error());
}

void Dataworks_publicClient::listNodesAsync(const ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNodes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListNodesOutcomeCallable Dataworks_publicClient::listNodesCallable(const ListNodesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNodesOutcome()>>(
			[this, request]()
			{
			return this->listNodes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListQualityRulesOutcome Dataworks_publicClient::listQualityRules(const ListQualityRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListQualityRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListQualityRulesOutcome(ListQualityRulesResult(outcome.result()));
	else
		return ListQualityRulesOutcome(outcome.error());
}

void Dataworks_publicClient::listQualityRulesAsync(const ListQualityRulesRequest& request, const ListQualityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listQualityRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListQualityRulesOutcomeCallable Dataworks_publicClient::listQualityRulesCallable(const ListQualityRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListQualityRulesOutcome()>>(
			[this, request]()
			{
			return this->listQualityRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListRemindsOutcome Dataworks_publicClient::listReminds(const ListRemindsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRemindsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRemindsOutcome(ListRemindsResult(outcome.result()));
	else
		return ListRemindsOutcome(outcome.error());
}

void Dataworks_publicClient::listRemindsAsync(const ListRemindsRequest& request, const ListRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listReminds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListRemindsOutcomeCallable Dataworks_publicClient::listRemindsCallable(const ListRemindsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRemindsOutcome()>>(
			[this, request]()
			{
			return this->listReminds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListResourceGroupsOutcome Dataworks_publicClient::listResourceGroups(const ListResourceGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceGroupsOutcome(ListResourceGroupsResult(outcome.result()));
	else
		return ListResourceGroupsOutcome(outcome.error());
}

void Dataworks_publicClient::listResourceGroupsAsync(const ListResourceGroupsRequest& request, const ListResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListResourceGroupsOutcomeCallable Dataworks_publicClient::listResourceGroupsCallable(const ListResourceGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceGroupsOutcome()>>(
			[this, request]()
			{
			return this->listResourceGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ListTopicsOutcome Dataworks_publicClient::listTopics(const ListTopicsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTopicsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTopicsOutcome(ListTopicsResult(outcome.result()));
	else
		return ListTopicsOutcome(outcome.error());
}

void Dataworks_publicClient::listTopicsAsync(const ListTopicsRequest& request, const ListTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTopics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ListTopicsOutcomeCallable Dataworks_publicClient::listTopicsCallable(const ListTopicsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTopicsOutcome()>>(
			[this, request]()
			{
			return this->listTopics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::PublishDataServiceApiOutcome Dataworks_publicClient::publishDataServiceApi(const PublishDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishDataServiceApiOutcome(PublishDataServiceApiResult(outcome.result()));
	else
		return PublishDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::publishDataServiceApiAsync(const PublishDataServiceApiRequest& request, const PublishDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::PublishDataServiceApiOutcomeCallable Dataworks_publicClient::publishDataServiceApiCallable(const PublishDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->publishDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::RestartInstanceOutcome Dataworks_publicClient::restartInstance(const RestartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartInstanceOutcome(RestartInstanceResult(outcome.result()));
	else
		return RestartInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::restartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::RestartInstanceOutcomeCallable Dataworks_publicClient::restartInstanceCallable(const RestartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
			[this, request]()
			{
			return this->restartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::ResumeInstanceOutcome Dataworks_publicClient::resumeInstance(const ResumeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeInstanceOutcome(ResumeInstanceResult(outcome.result()));
	else
		return ResumeInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::resumeInstanceAsync(const ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::ResumeInstanceOutcomeCallable Dataworks_publicClient::resumeInstanceCallable(const ResumeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeInstanceOutcome()>>(
			[this, request]()
			{
			return this->resumeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SearchMetaTablesOutcome Dataworks_publicClient::searchMetaTables(const SearchMetaTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchMetaTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchMetaTablesOutcome(SearchMetaTablesResult(outcome.result()));
	else
		return SearchMetaTablesOutcome(outcome.error());
}

void Dataworks_publicClient::searchMetaTablesAsync(const SearchMetaTablesRequest& request, const SearchMetaTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchMetaTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SearchMetaTablesOutcomeCallable Dataworks_publicClient::searchMetaTablesCallable(const SearchMetaTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchMetaTablesOutcome()>>(
			[this, request]()
			{
			return this->searchMetaTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SetSuccessInstanceOutcome Dataworks_publicClient::setSuccessInstance(const SetSuccessInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSuccessInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSuccessInstanceOutcome(SetSuccessInstanceResult(outcome.result()));
	else
		return SetSuccessInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::setSuccessInstanceAsync(const SetSuccessInstanceRequest& request, const SetSuccessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSuccessInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SetSuccessInstanceOutcomeCallable Dataworks_publicClient::setSuccessInstanceCallable(const SetSuccessInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSuccessInstanceOutcome()>>(
			[this, request]()
			{
			return this->setSuccessInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::StopInstanceOutcome Dataworks_publicClient::stopInstance(const StopInstanceRequest &request) const
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

void Dataworks_publicClient::stopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::StopInstanceOutcomeCallable Dataworks_publicClient::stopInstanceCallable(const StopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SubmitFileOutcome Dataworks_publicClient::submitFile(const SubmitFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitFileOutcome(SubmitFileResult(outcome.result()));
	else
		return SubmitFileOutcome(outcome.error());
}

void Dataworks_publicClient::submitFileAsync(const SubmitFileRequest& request, const SubmitFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SubmitFileOutcomeCallable Dataworks_publicClient::submitFileCallable(const SubmitFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitFileOutcome()>>(
			[this, request]()
			{
			return this->submitFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::SuspendInstanceOutcome Dataworks_publicClient::suspendInstance(const SuspendInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendInstanceOutcome(SuspendInstanceResult(outcome.result()));
	else
		return SuspendInstanceOutcome(outcome.error());
}

void Dataworks_publicClient::suspendInstanceAsync(const SuspendInstanceRequest& request, const SuspendInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::SuspendInstanceOutcomeCallable Dataworks_publicClient::suspendInstanceCallable(const SuspendInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendInstanceOutcome()>>(
			[this, request]()
			{
			return this->suspendInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateBusinessOutcome Dataworks_publicClient::updateBusiness(const UpdateBusinessRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateBusinessOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateBusinessOutcome(UpdateBusinessResult(outcome.result()));
	else
		return UpdateBusinessOutcome(outcome.error());
}

void Dataworks_publicClient::updateBusinessAsync(const UpdateBusinessRequest& request, const UpdateBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateBusiness(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateBusinessOutcomeCallable Dataworks_publicClient::updateBusinessCallable(const UpdateBusinessRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateBusinessOutcome()>>(
			[this, request]()
			{
			return this->updateBusiness(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateConnectionOutcome Dataworks_publicClient::updateConnection(const UpdateConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConnectionOutcome(UpdateConnectionResult(outcome.result()));
	else
		return UpdateConnectionOutcome(outcome.error());
}

void Dataworks_publicClient::updateConnectionAsync(const UpdateConnectionRequest& request, const UpdateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateConnectionOutcomeCallable Dataworks_publicClient::updateConnectionCallable(const UpdateConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConnectionOutcome()>>(
			[this, request]()
			{
			return this->updateConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateDataServiceApiOutcome Dataworks_publicClient::updateDataServiceApi(const UpdateDataServiceApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDataServiceApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDataServiceApiOutcome(UpdateDataServiceApiResult(outcome.result()));
	else
		return UpdateDataServiceApiOutcome(outcome.error());
}

void Dataworks_publicClient::updateDataServiceApiAsync(const UpdateDataServiceApiRequest& request, const UpdateDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataServiceApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateDataServiceApiOutcomeCallable Dataworks_publicClient::updateDataServiceApiCallable(const UpdateDataServiceApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDataServiceApiOutcome()>>(
			[this, request]()
			{
			return this->updateDataServiceApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateFileOutcome Dataworks_publicClient::updateFile(const UpdateFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFileOutcome(UpdateFileResult(outcome.result()));
	else
		return UpdateFileOutcome(outcome.error());
}

void Dataworks_publicClient::updateFileAsync(const UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateFileOutcomeCallable Dataworks_publicClient::updateFileCallable(const UpdateFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFileOutcome()>>(
			[this, request]()
			{
			return this->updateFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateFolderOutcome Dataworks_publicClient::updateFolder(const UpdateFolderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateFolderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateFolderOutcome(UpdateFolderResult(outcome.result()));
	else
		return UpdateFolderOutcome(outcome.error());
}

void Dataworks_publicClient::updateFolderAsync(const UpdateFolderRequest& request, const UpdateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateFolder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateFolderOutcomeCallable Dataworks_publicClient::updateFolderCallable(const UpdateFolderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateFolderOutcome()>>(
			[this, request]()
			{
			return this->updateFolder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateMetaCategoryOutcome Dataworks_publicClient::updateMetaCategory(const UpdateMetaCategoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMetaCategoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMetaCategoryOutcome(UpdateMetaCategoryResult(outcome.result()));
	else
		return UpdateMetaCategoryOutcome(outcome.error());
}

void Dataworks_publicClient::updateMetaCategoryAsync(const UpdateMetaCategoryRequest& request, const UpdateMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMetaCategory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateMetaCategoryOutcomeCallable Dataworks_publicClient::updateMetaCategoryCallable(const UpdateMetaCategoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMetaCategoryOutcome()>>(
			[this, request]()
			{
			return this->updateMetaCategory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateQualityFollowerOutcome Dataworks_publicClient::updateQualityFollower(const UpdateQualityFollowerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateQualityFollowerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateQualityFollowerOutcome(UpdateQualityFollowerResult(outcome.result()));
	else
		return UpdateQualityFollowerOutcome(outcome.error());
}

void Dataworks_publicClient::updateQualityFollowerAsync(const UpdateQualityFollowerRequest& request, const UpdateQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateQualityFollower(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateQualityFollowerOutcomeCallable Dataworks_publicClient::updateQualityFollowerCallable(const UpdateQualityFollowerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateQualityFollowerOutcome()>>(
			[this, request]()
			{
			return this->updateQualityFollower(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateQualityRuleOutcome Dataworks_publicClient::updateQualityRule(const UpdateQualityRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateQualityRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateQualityRuleOutcome(UpdateQualityRuleResult(outcome.result()));
	else
		return UpdateQualityRuleOutcome(outcome.error());
}

void Dataworks_publicClient::updateQualityRuleAsync(const UpdateQualityRuleRequest& request, const UpdateQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateQualityRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateQualityRuleOutcomeCallable Dataworks_publicClient::updateQualityRuleCallable(const UpdateQualityRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateQualityRuleOutcome()>>(
			[this, request]()
			{
			return this->updateQualityRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateRemindOutcome Dataworks_publicClient::updateRemind(const UpdateRemindRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRemindOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRemindOutcome(UpdateRemindResult(outcome.result()));
	else
		return UpdateRemindOutcome(outcome.error());
}

void Dataworks_publicClient::updateRemindAsync(const UpdateRemindRequest& request, const UpdateRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRemind(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateRemindOutcomeCallable Dataworks_publicClient::updateRemindCallable(const UpdateRemindRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRemindOutcome()>>(
			[this, request]()
			{
			return this->updateRemind(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dataworks_publicClient::UpdateUdfFileOutcome Dataworks_publicClient::updateUdfFile(const UpdateUdfFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUdfFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUdfFileOutcome(UpdateUdfFileResult(outcome.result()));
	else
		return UpdateUdfFileOutcome(outcome.error());
}

void Dataworks_publicClient::updateUdfFileAsync(const UpdateUdfFileRequest& request, const UpdateUdfFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUdfFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dataworks_publicClient::UpdateUdfFileOutcomeCallable Dataworks_publicClient::updateUdfFileCallable(const UpdateUdfFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUdfFileOutcome()>>(
			[this, request]()
			{
			return this->updateUdfFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

