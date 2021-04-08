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

#include <alibabacloud/dts/DtsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

namespace
{
	const std::string SERVICE_NAME = "Dts";
}

DtsClient::DtsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dts");
}

DtsClient::DtsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dts");
}

DtsClient::DtsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "dts");
}

DtsClient::~DtsClient()
{}

DtsClient::ConfigureDtsJobOutcome DtsClient::configureDtsJob(const ConfigureDtsJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigureDtsJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigureDtsJobOutcome(ConfigureDtsJobResult(outcome.result()));
	else
		return ConfigureDtsJobOutcome(outcome.error());
}

void DtsClient::configureDtsJobAsync(const ConfigureDtsJobRequest& request, const ConfigureDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configureDtsJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ConfigureDtsJobOutcomeCallable DtsClient::configureDtsJobCallable(const ConfigureDtsJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigureDtsJobOutcome()>>(
			[this, request]()
			{
			return this->configureDtsJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ConfigureMigrationJobOutcome DtsClient::configureMigrationJob(const ConfigureMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigureMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigureMigrationJobOutcome(ConfigureMigrationJobResult(outcome.result()));
	else
		return ConfigureMigrationJobOutcome(outcome.error());
}

void DtsClient::configureMigrationJobAsync(const ConfigureMigrationJobRequest& request, const ConfigureMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configureMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ConfigureMigrationJobOutcomeCallable DtsClient::configureMigrationJobCallable(const ConfigureMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigureMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->configureMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ConfigureMigrationJobAlertOutcome DtsClient::configureMigrationJobAlert(const ConfigureMigrationJobAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigureMigrationJobAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigureMigrationJobAlertOutcome(ConfigureMigrationJobAlertResult(outcome.result()));
	else
		return ConfigureMigrationJobAlertOutcome(outcome.error());
}

void DtsClient::configureMigrationJobAlertAsync(const ConfigureMigrationJobAlertRequest& request, const ConfigureMigrationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configureMigrationJobAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ConfigureMigrationJobAlertOutcomeCallable DtsClient::configureMigrationJobAlertCallable(const ConfigureMigrationJobAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigureMigrationJobAlertOutcome()>>(
			[this, request]()
			{
			return this->configureMigrationJobAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ConfigureSubscriptionInstanceOutcome DtsClient::configureSubscriptionInstance(const ConfigureSubscriptionInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigureSubscriptionInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigureSubscriptionInstanceOutcome(ConfigureSubscriptionInstanceResult(outcome.result()));
	else
		return ConfigureSubscriptionInstanceOutcome(outcome.error());
}

void DtsClient::configureSubscriptionInstanceAsync(const ConfigureSubscriptionInstanceRequest& request, const ConfigureSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configureSubscriptionInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ConfigureSubscriptionInstanceOutcomeCallable DtsClient::configureSubscriptionInstanceCallable(const ConfigureSubscriptionInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigureSubscriptionInstanceOutcome()>>(
			[this, request]()
			{
			return this->configureSubscriptionInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ConfigureSubscriptionInstanceAlertOutcome DtsClient::configureSubscriptionInstanceAlert(const ConfigureSubscriptionInstanceAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigureSubscriptionInstanceAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigureSubscriptionInstanceAlertOutcome(ConfigureSubscriptionInstanceAlertResult(outcome.result()));
	else
		return ConfigureSubscriptionInstanceAlertOutcome(outcome.error());
}

void DtsClient::configureSubscriptionInstanceAlertAsync(const ConfigureSubscriptionInstanceAlertRequest& request, const ConfigureSubscriptionInstanceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configureSubscriptionInstanceAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ConfigureSubscriptionInstanceAlertOutcomeCallable DtsClient::configureSubscriptionInstanceAlertCallable(const ConfigureSubscriptionInstanceAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigureSubscriptionInstanceAlertOutcome()>>(
			[this, request]()
			{
			return this->configureSubscriptionInstanceAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ConfigureSynchronizationJobOutcome DtsClient::configureSynchronizationJob(const ConfigureSynchronizationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigureSynchronizationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigureSynchronizationJobOutcome(ConfigureSynchronizationJobResult(outcome.result()));
	else
		return ConfigureSynchronizationJobOutcome(outcome.error());
}

void DtsClient::configureSynchronizationJobAsync(const ConfigureSynchronizationJobRequest& request, const ConfigureSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configureSynchronizationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ConfigureSynchronizationJobOutcomeCallable DtsClient::configureSynchronizationJobCallable(const ConfigureSynchronizationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigureSynchronizationJobOutcome()>>(
			[this, request]()
			{
			return this->configureSynchronizationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ConfigureSynchronizationJobAlertOutcome DtsClient::configureSynchronizationJobAlert(const ConfigureSynchronizationJobAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigureSynchronizationJobAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigureSynchronizationJobAlertOutcome(ConfigureSynchronizationJobAlertResult(outcome.result()));
	else
		return ConfigureSynchronizationJobAlertOutcome(outcome.error());
}

void DtsClient::configureSynchronizationJobAlertAsync(const ConfigureSynchronizationJobAlertRequest& request, const ConfigureSynchronizationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configureSynchronizationJobAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ConfigureSynchronizationJobAlertOutcomeCallable DtsClient::configureSynchronizationJobAlertCallable(const ConfigureSynchronizationJobAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigureSynchronizationJobAlertOutcome()>>(
			[this, request]()
			{
			return this->configureSynchronizationJobAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ConfigureSynchronizationJobReplicatorCompareOutcome DtsClient::configureSynchronizationJobReplicatorCompare(const ConfigureSynchronizationJobReplicatorCompareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigureSynchronizationJobReplicatorCompareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigureSynchronizationJobReplicatorCompareOutcome(ConfigureSynchronizationJobReplicatorCompareResult(outcome.result()));
	else
		return ConfigureSynchronizationJobReplicatorCompareOutcome(outcome.error());
}

void DtsClient::configureSynchronizationJobReplicatorCompareAsync(const ConfigureSynchronizationJobReplicatorCompareRequest& request, const ConfigureSynchronizationJobReplicatorCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configureSynchronizationJobReplicatorCompare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ConfigureSynchronizationJobReplicatorCompareOutcomeCallable DtsClient::configureSynchronizationJobReplicatorCompareCallable(const ConfigureSynchronizationJobReplicatorCompareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigureSynchronizationJobReplicatorCompareOutcome()>>(
			[this, request]()
			{
			return this->configureSynchronizationJobReplicatorCompare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::CreateConsumerGroupOutcome DtsClient::createConsumerGroup(const CreateConsumerGroupRequest &request) const
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

void DtsClient::createConsumerGroupAsync(const CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConsumerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::CreateConsumerGroupOutcomeCallable DtsClient::createConsumerGroupCallable(const CreateConsumerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConsumerGroupOutcome()>>(
			[this, request]()
			{
			return this->createConsumerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::CreateDtsInstanceOutcome DtsClient::createDtsInstance(const CreateDtsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDtsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDtsInstanceOutcome(CreateDtsInstanceResult(outcome.result()));
	else
		return CreateDtsInstanceOutcome(outcome.error());
}

void DtsClient::createDtsInstanceAsync(const CreateDtsInstanceRequest& request, const CreateDtsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDtsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::CreateDtsInstanceOutcomeCallable DtsClient::createDtsInstanceCallable(const CreateDtsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDtsInstanceOutcome()>>(
			[this, request]()
			{
			return this->createDtsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::CreateMigrationJobOutcome DtsClient::createMigrationJob(const CreateMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMigrationJobOutcome(CreateMigrationJobResult(outcome.result()));
	else
		return CreateMigrationJobOutcome(outcome.error());
}

void DtsClient::createMigrationJobAsync(const CreateMigrationJobRequest& request, const CreateMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::CreateMigrationJobOutcomeCallable DtsClient::createMigrationJobCallable(const CreateMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->createMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::CreateSubscriptionInstanceOutcome DtsClient::createSubscriptionInstance(const CreateSubscriptionInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSubscriptionInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSubscriptionInstanceOutcome(CreateSubscriptionInstanceResult(outcome.result()));
	else
		return CreateSubscriptionInstanceOutcome(outcome.error());
}

void DtsClient::createSubscriptionInstanceAsync(const CreateSubscriptionInstanceRequest& request, const CreateSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSubscriptionInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::CreateSubscriptionInstanceOutcomeCallable DtsClient::createSubscriptionInstanceCallable(const CreateSubscriptionInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSubscriptionInstanceOutcome()>>(
			[this, request]()
			{
			return this->createSubscriptionInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::CreateSynchronizationJobOutcome DtsClient::createSynchronizationJob(const CreateSynchronizationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSynchronizationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSynchronizationJobOutcome(CreateSynchronizationJobResult(outcome.result()));
	else
		return CreateSynchronizationJobOutcome(outcome.error());
}

void DtsClient::createSynchronizationJobAsync(const CreateSynchronizationJobRequest& request, const CreateSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSynchronizationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::CreateSynchronizationJobOutcomeCallable DtsClient::createSynchronizationJobCallable(const CreateSynchronizationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSynchronizationJobOutcome()>>(
			[this, request]()
			{
			return this->createSynchronizationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DeleteConsumerGroupOutcome DtsClient::deleteConsumerGroup(const DeleteConsumerGroupRequest &request) const
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

void DtsClient::deleteConsumerGroupAsync(const DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConsumerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DeleteConsumerGroupOutcomeCallable DtsClient::deleteConsumerGroupCallable(const DeleteConsumerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConsumerGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteConsumerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DeleteDtsJobOutcome DtsClient::deleteDtsJob(const DeleteDtsJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDtsJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDtsJobOutcome(DeleteDtsJobResult(outcome.result()));
	else
		return DeleteDtsJobOutcome(outcome.error());
}

void DtsClient::deleteDtsJobAsync(const DeleteDtsJobRequest& request, const DeleteDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDtsJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DeleteDtsJobOutcomeCallable DtsClient::deleteDtsJobCallable(const DeleteDtsJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDtsJobOutcome()>>(
			[this, request]()
			{
			return this->deleteDtsJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DeleteMigrationJobOutcome DtsClient::deleteMigrationJob(const DeleteMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMigrationJobOutcome(DeleteMigrationJobResult(outcome.result()));
	else
		return DeleteMigrationJobOutcome(outcome.error());
}

void DtsClient::deleteMigrationJobAsync(const DeleteMigrationJobRequest& request, const DeleteMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DeleteMigrationJobOutcomeCallable DtsClient::deleteMigrationJobCallable(const DeleteMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->deleteMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DeleteSubscriptionInstanceOutcome DtsClient::deleteSubscriptionInstance(const DeleteSubscriptionInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSubscriptionInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSubscriptionInstanceOutcome(DeleteSubscriptionInstanceResult(outcome.result()));
	else
		return DeleteSubscriptionInstanceOutcome(outcome.error());
}

void DtsClient::deleteSubscriptionInstanceAsync(const DeleteSubscriptionInstanceRequest& request, const DeleteSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSubscriptionInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DeleteSubscriptionInstanceOutcomeCallable DtsClient::deleteSubscriptionInstanceCallable(const DeleteSubscriptionInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSubscriptionInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteSubscriptionInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DeleteSynchronizationJobOutcome DtsClient::deleteSynchronizationJob(const DeleteSynchronizationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSynchronizationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSynchronizationJobOutcome(DeleteSynchronizationJobResult(outcome.result()));
	else
		return DeleteSynchronizationJobOutcome(outcome.error());
}

void DtsClient::deleteSynchronizationJobAsync(const DeleteSynchronizationJobRequest& request, const DeleteSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSynchronizationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DeleteSynchronizationJobOutcomeCallable DtsClient::deleteSynchronizationJobCallable(const DeleteSynchronizationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSynchronizationJobOutcome()>>(
			[this, request]()
			{
			return this->deleteSynchronizationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeConnectionStatusOutcome DtsClient::describeConnectionStatus(const DescribeConnectionStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConnectionStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConnectionStatusOutcome(DescribeConnectionStatusResult(outcome.result()));
	else
		return DescribeConnectionStatusOutcome(outcome.error());
}

void DtsClient::describeConnectionStatusAsync(const DescribeConnectionStatusRequest& request, const DescribeConnectionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConnectionStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeConnectionStatusOutcomeCallable DtsClient::describeConnectionStatusCallable(const DescribeConnectionStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConnectionStatusOutcome()>>(
			[this, request]()
			{
			return this->describeConnectionStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeConsumerGroupOutcome DtsClient::describeConsumerGroup(const DescribeConsumerGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConsumerGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConsumerGroupOutcome(DescribeConsumerGroupResult(outcome.result()));
	else
		return DescribeConsumerGroupOutcome(outcome.error());
}

void DtsClient::describeConsumerGroupAsync(const DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConsumerGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeConsumerGroupOutcomeCallable DtsClient::describeConsumerGroupCallable(const DescribeConsumerGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConsumerGroupOutcome()>>(
			[this, request]()
			{
			return this->describeConsumerGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeDTSIPOutcome DtsClient::describeDTSIP(const DescribeDTSIPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDTSIPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDTSIPOutcome(DescribeDTSIPResult(outcome.result()));
	else
		return DescribeDTSIPOutcome(outcome.error());
}

void DtsClient::describeDTSIPAsync(const DescribeDTSIPRequest& request, const DescribeDTSIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDTSIP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeDTSIPOutcomeCallable DtsClient::describeDTSIPCallable(const DescribeDTSIPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDTSIPOutcome()>>(
			[this, request]()
			{
			return this->describeDTSIP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeDtsJobDetailOutcome DtsClient::describeDtsJobDetail(const DescribeDtsJobDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDtsJobDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDtsJobDetailOutcome(DescribeDtsJobDetailResult(outcome.result()));
	else
		return DescribeDtsJobDetailOutcome(outcome.error());
}

void DtsClient::describeDtsJobDetailAsync(const DescribeDtsJobDetailRequest& request, const DescribeDtsJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDtsJobDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeDtsJobDetailOutcomeCallable DtsClient::describeDtsJobDetailCallable(const DescribeDtsJobDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDtsJobDetailOutcome()>>(
			[this, request]()
			{
			return this->describeDtsJobDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeDtsJobsOutcome DtsClient::describeDtsJobs(const DescribeDtsJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDtsJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDtsJobsOutcome(DescribeDtsJobsResult(outcome.result()));
	else
		return DescribeDtsJobsOutcome(outcome.error());
}

void DtsClient::describeDtsJobsAsync(const DescribeDtsJobsRequest& request, const DescribeDtsJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDtsJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeDtsJobsOutcomeCallable DtsClient::describeDtsJobsCallable(const DescribeDtsJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDtsJobsOutcome()>>(
			[this, request]()
			{
			return this->describeDtsJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeEndpointSwitchStatusOutcome DtsClient::describeEndpointSwitchStatus(const DescribeEndpointSwitchStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEndpointSwitchStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEndpointSwitchStatusOutcome(DescribeEndpointSwitchStatusResult(outcome.result()));
	else
		return DescribeEndpointSwitchStatusOutcome(outcome.error());
}

void DtsClient::describeEndpointSwitchStatusAsync(const DescribeEndpointSwitchStatusRequest& request, const DescribeEndpointSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEndpointSwitchStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeEndpointSwitchStatusOutcomeCallable DtsClient::describeEndpointSwitchStatusCallable(const DescribeEndpointSwitchStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEndpointSwitchStatusOutcome()>>(
			[this, request]()
			{
			return this->describeEndpointSwitchStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeInitializationStatusOutcome DtsClient::describeInitializationStatus(const DescribeInitializationStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInitializationStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInitializationStatusOutcome(DescribeInitializationStatusResult(outcome.result()));
	else
		return DescribeInitializationStatusOutcome(outcome.error());
}

void DtsClient::describeInitializationStatusAsync(const DescribeInitializationStatusRequest& request, const DescribeInitializationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInitializationStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeInitializationStatusOutcomeCallable DtsClient::describeInitializationStatusCallable(const DescribeInitializationStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInitializationStatusOutcome()>>(
			[this, request]()
			{
			return this->describeInitializationStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeMigrationJobAlertOutcome DtsClient::describeMigrationJobAlert(const DescribeMigrationJobAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrationJobAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrationJobAlertOutcome(DescribeMigrationJobAlertResult(outcome.result()));
	else
		return DescribeMigrationJobAlertOutcome(outcome.error());
}

void DtsClient::describeMigrationJobAlertAsync(const DescribeMigrationJobAlertRequest& request, const DescribeMigrationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrationJobAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeMigrationJobAlertOutcomeCallable DtsClient::describeMigrationJobAlertCallable(const DescribeMigrationJobAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrationJobAlertOutcome()>>(
			[this, request]()
			{
			return this->describeMigrationJobAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeMigrationJobDetailOutcome DtsClient::describeMigrationJobDetail(const DescribeMigrationJobDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrationJobDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrationJobDetailOutcome(DescribeMigrationJobDetailResult(outcome.result()));
	else
		return DescribeMigrationJobDetailOutcome(outcome.error());
}

void DtsClient::describeMigrationJobDetailAsync(const DescribeMigrationJobDetailRequest& request, const DescribeMigrationJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrationJobDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeMigrationJobDetailOutcomeCallable DtsClient::describeMigrationJobDetailCallable(const DescribeMigrationJobDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrationJobDetailOutcome()>>(
			[this, request]()
			{
			return this->describeMigrationJobDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeMigrationJobStatusOutcome DtsClient::describeMigrationJobStatus(const DescribeMigrationJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrationJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrationJobStatusOutcome(DescribeMigrationJobStatusResult(outcome.result()));
	else
		return DescribeMigrationJobStatusOutcome(outcome.error());
}

void DtsClient::describeMigrationJobStatusAsync(const DescribeMigrationJobStatusRequest& request, const DescribeMigrationJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrationJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeMigrationJobStatusOutcomeCallable DtsClient::describeMigrationJobStatusCallable(const DescribeMigrationJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrationJobStatusOutcome()>>(
			[this, request]()
			{
			return this->describeMigrationJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeMigrationJobsOutcome DtsClient::describeMigrationJobs(const DescribeMigrationJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMigrationJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMigrationJobsOutcome(DescribeMigrationJobsResult(outcome.result()));
	else
		return DescribeMigrationJobsOutcome(outcome.error());
}

void DtsClient::describeMigrationJobsAsync(const DescribeMigrationJobsRequest& request, const DescribeMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMigrationJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeMigrationJobsOutcomeCallable DtsClient::describeMigrationJobsCallable(const DescribeMigrationJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMigrationJobsOutcome()>>(
			[this, request]()
			{
			return this->describeMigrationJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribePreCheckStatusOutcome DtsClient::describePreCheckStatus(const DescribePreCheckStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePreCheckStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePreCheckStatusOutcome(DescribePreCheckStatusResult(outcome.result()));
	else
		return DescribePreCheckStatusOutcome(outcome.error());
}

void DtsClient::describePreCheckStatusAsync(const DescribePreCheckStatusRequest& request, const DescribePreCheckStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePreCheckStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribePreCheckStatusOutcomeCallable DtsClient::describePreCheckStatusCallable(const DescribePreCheckStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePreCheckStatusOutcome()>>(
			[this, request]()
			{
			return this->describePreCheckStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeSubscriptionInstanceAlertOutcome DtsClient::describeSubscriptionInstanceAlert(const DescribeSubscriptionInstanceAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSubscriptionInstanceAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSubscriptionInstanceAlertOutcome(DescribeSubscriptionInstanceAlertResult(outcome.result()));
	else
		return DescribeSubscriptionInstanceAlertOutcome(outcome.error());
}

void DtsClient::describeSubscriptionInstanceAlertAsync(const DescribeSubscriptionInstanceAlertRequest& request, const DescribeSubscriptionInstanceAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSubscriptionInstanceAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeSubscriptionInstanceAlertOutcomeCallable DtsClient::describeSubscriptionInstanceAlertCallable(const DescribeSubscriptionInstanceAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSubscriptionInstanceAlertOutcome()>>(
			[this, request]()
			{
			return this->describeSubscriptionInstanceAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeSubscriptionInstanceStatusOutcome DtsClient::describeSubscriptionInstanceStatus(const DescribeSubscriptionInstanceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSubscriptionInstanceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSubscriptionInstanceStatusOutcome(DescribeSubscriptionInstanceStatusResult(outcome.result()));
	else
		return DescribeSubscriptionInstanceStatusOutcome(outcome.error());
}

void DtsClient::describeSubscriptionInstanceStatusAsync(const DescribeSubscriptionInstanceStatusRequest& request, const DescribeSubscriptionInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSubscriptionInstanceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeSubscriptionInstanceStatusOutcomeCallable DtsClient::describeSubscriptionInstanceStatusCallable(const DescribeSubscriptionInstanceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSubscriptionInstanceStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSubscriptionInstanceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeSubscriptionInstancesOutcome DtsClient::describeSubscriptionInstances(const DescribeSubscriptionInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSubscriptionInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSubscriptionInstancesOutcome(DescribeSubscriptionInstancesResult(outcome.result()));
	else
		return DescribeSubscriptionInstancesOutcome(outcome.error());
}

void DtsClient::describeSubscriptionInstancesAsync(const DescribeSubscriptionInstancesRequest& request, const DescribeSubscriptionInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSubscriptionInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeSubscriptionInstancesOutcomeCallable DtsClient::describeSubscriptionInstancesCallable(const DescribeSubscriptionInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSubscriptionInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeSubscriptionInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeSynchronizationJobAlertOutcome DtsClient::describeSynchronizationJobAlert(const DescribeSynchronizationJobAlertRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSynchronizationJobAlertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSynchronizationJobAlertOutcome(DescribeSynchronizationJobAlertResult(outcome.result()));
	else
		return DescribeSynchronizationJobAlertOutcome(outcome.error());
}

void DtsClient::describeSynchronizationJobAlertAsync(const DescribeSynchronizationJobAlertRequest& request, const DescribeSynchronizationJobAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSynchronizationJobAlert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeSynchronizationJobAlertOutcomeCallable DtsClient::describeSynchronizationJobAlertCallable(const DescribeSynchronizationJobAlertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSynchronizationJobAlertOutcome()>>(
			[this, request]()
			{
			return this->describeSynchronizationJobAlert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeSynchronizationJobReplicatorCompareOutcome DtsClient::describeSynchronizationJobReplicatorCompare(const DescribeSynchronizationJobReplicatorCompareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSynchronizationJobReplicatorCompareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSynchronizationJobReplicatorCompareOutcome(DescribeSynchronizationJobReplicatorCompareResult(outcome.result()));
	else
		return DescribeSynchronizationJobReplicatorCompareOutcome(outcome.error());
}

void DtsClient::describeSynchronizationJobReplicatorCompareAsync(const DescribeSynchronizationJobReplicatorCompareRequest& request, const DescribeSynchronizationJobReplicatorCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSynchronizationJobReplicatorCompare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeSynchronizationJobReplicatorCompareOutcomeCallable DtsClient::describeSynchronizationJobReplicatorCompareCallable(const DescribeSynchronizationJobReplicatorCompareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSynchronizationJobReplicatorCompareOutcome()>>(
			[this, request]()
			{
			return this->describeSynchronizationJobReplicatorCompare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeSynchronizationJobStatusOutcome DtsClient::describeSynchronizationJobStatus(const DescribeSynchronizationJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSynchronizationJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSynchronizationJobStatusOutcome(DescribeSynchronizationJobStatusResult(outcome.result()));
	else
		return DescribeSynchronizationJobStatusOutcome(outcome.error());
}

void DtsClient::describeSynchronizationJobStatusAsync(const DescribeSynchronizationJobStatusRequest& request, const DescribeSynchronizationJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSynchronizationJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeSynchronizationJobStatusOutcomeCallable DtsClient::describeSynchronizationJobStatusCallable(const DescribeSynchronizationJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSynchronizationJobStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSynchronizationJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeSynchronizationJobStatusListOutcome DtsClient::describeSynchronizationJobStatusList(const DescribeSynchronizationJobStatusListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSynchronizationJobStatusListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSynchronizationJobStatusListOutcome(DescribeSynchronizationJobStatusListResult(outcome.result()));
	else
		return DescribeSynchronizationJobStatusListOutcome(outcome.error());
}

void DtsClient::describeSynchronizationJobStatusListAsync(const DescribeSynchronizationJobStatusListRequest& request, const DescribeSynchronizationJobStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSynchronizationJobStatusList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeSynchronizationJobStatusListOutcomeCallable DtsClient::describeSynchronizationJobStatusListCallable(const DescribeSynchronizationJobStatusListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSynchronizationJobStatusListOutcome()>>(
			[this, request]()
			{
			return this->describeSynchronizationJobStatusList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeSynchronizationJobsOutcome DtsClient::describeSynchronizationJobs(const DescribeSynchronizationJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSynchronizationJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSynchronizationJobsOutcome(DescribeSynchronizationJobsResult(outcome.result()));
	else
		return DescribeSynchronizationJobsOutcome(outcome.error());
}

void DtsClient::describeSynchronizationJobsAsync(const DescribeSynchronizationJobsRequest& request, const DescribeSynchronizationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSynchronizationJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeSynchronizationJobsOutcomeCallable DtsClient::describeSynchronizationJobsCallable(const DescribeSynchronizationJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSynchronizationJobsOutcome()>>(
			[this, request]()
			{
			return this->describeSynchronizationJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::DescribeSynchronizationObjectModifyStatusOutcome DtsClient::describeSynchronizationObjectModifyStatus(const DescribeSynchronizationObjectModifyStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSynchronizationObjectModifyStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSynchronizationObjectModifyStatusOutcome(DescribeSynchronizationObjectModifyStatusResult(outcome.result()));
	else
		return DescribeSynchronizationObjectModifyStatusOutcome(outcome.error());
}

void DtsClient::describeSynchronizationObjectModifyStatusAsync(const DescribeSynchronizationObjectModifyStatusRequest& request, const DescribeSynchronizationObjectModifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSynchronizationObjectModifyStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeSynchronizationObjectModifyStatusOutcomeCallable DtsClient::describeSynchronizationObjectModifyStatusCallable(const DescribeSynchronizationObjectModifyStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSynchronizationObjectModifyStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSynchronizationObjectModifyStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ListTagResourcesOutcome DtsClient::listTagResources(const ListTagResourcesRequest &request) const
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

void DtsClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ListTagResourcesOutcomeCallable DtsClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ModifyConsumerGroupPasswordOutcome DtsClient::modifyConsumerGroupPassword(const ModifyConsumerGroupPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyConsumerGroupPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyConsumerGroupPasswordOutcome(ModifyConsumerGroupPasswordResult(outcome.result()));
	else
		return ModifyConsumerGroupPasswordOutcome(outcome.error());
}

void DtsClient::modifyConsumerGroupPasswordAsync(const ModifyConsumerGroupPasswordRequest& request, const ModifyConsumerGroupPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyConsumerGroupPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ModifyConsumerGroupPasswordOutcomeCallable DtsClient::modifyConsumerGroupPasswordCallable(const ModifyConsumerGroupPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyConsumerGroupPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyConsumerGroupPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ModifyConsumptionTimestampOutcome DtsClient::modifyConsumptionTimestamp(const ModifyConsumptionTimestampRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyConsumptionTimestampOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyConsumptionTimestampOutcome(ModifyConsumptionTimestampResult(outcome.result()));
	else
		return ModifyConsumptionTimestampOutcome(outcome.error());
}

void DtsClient::modifyConsumptionTimestampAsync(const ModifyConsumptionTimestampRequest& request, const ModifyConsumptionTimestampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyConsumptionTimestamp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ModifyConsumptionTimestampOutcomeCallable DtsClient::modifyConsumptionTimestampCallable(const ModifyConsumptionTimestampRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyConsumptionTimestampOutcome()>>(
			[this, request]()
			{
			return this->modifyConsumptionTimestamp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ModifyDtsJobOutcome DtsClient::modifyDtsJob(const ModifyDtsJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDtsJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDtsJobOutcome(ModifyDtsJobResult(outcome.result()));
	else
		return ModifyDtsJobOutcome(outcome.error());
}

void DtsClient::modifyDtsJobAsync(const ModifyDtsJobRequest& request, const ModifyDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDtsJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ModifyDtsJobOutcomeCallable DtsClient::modifyDtsJobCallable(const ModifyDtsJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDtsJobOutcome()>>(
			[this, request]()
			{
			return this->modifyDtsJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ModifyDtsJobNameOutcome DtsClient::modifyDtsJobName(const ModifyDtsJobNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDtsJobNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDtsJobNameOutcome(ModifyDtsJobNameResult(outcome.result()));
	else
		return ModifyDtsJobNameOutcome(outcome.error());
}

void DtsClient::modifyDtsJobNameAsync(const ModifyDtsJobNameRequest& request, const ModifyDtsJobNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDtsJobName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ModifyDtsJobNameOutcomeCallable DtsClient::modifyDtsJobNameCallable(const ModifyDtsJobNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDtsJobNameOutcome()>>(
			[this, request]()
			{
			return this->modifyDtsJobName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ModifyDtsJobPasswordOutcome DtsClient::modifyDtsJobPassword(const ModifyDtsJobPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDtsJobPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDtsJobPasswordOutcome(ModifyDtsJobPasswordResult(outcome.result()));
	else
		return ModifyDtsJobPasswordOutcome(outcome.error());
}

void DtsClient::modifyDtsJobPasswordAsync(const ModifyDtsJobPasswordRequest& request, const ModifyDtsJobPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDtsJobPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ModifyDtsJobPasswordOutcomeCallable DtsClient::modifyDtsJobPasswordCallable(const ModifyDtsJobPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDtsJobPasswordOutcome()>>(
			[this, request]()
			{
			return this->modifyDtsJobPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ModifySubscriptionObjectOutcome DtsClient::modifySubscriptionObject(const ModifySubscriptionObjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySubscriptionObjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySubscriptionObjectOutcome(ModifySubscriptionObjectResult(outcome.result()));
	else
		return ModifySubscriptionObjectOutcome(outcome.error());
}

void DtsClient::modifySubscriptionObjectAsync(const ModifySubscriptionObjectRequest& request, const ModifySubscriptionObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySubscriptionObject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ModifySubscriptionObjectOutcomeCallable DtsClient::modifySubscriptionObjectCallable(const ModifySubscriptionObjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySubscriptionObjectOutcome()>>(
			[this, request]()
			{
			return this->modifySubscriptionObject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ModifySynchronizationObjectOutcome DtsClient::modifySynchronizationObject(const ModifySynchronizationObjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySynchronizationObjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySynchronizationObjectOutcome(ModifySynchronizationObjectResult(outcome.result()));
	else
		return ModifySynchronizationObjectOutcome(outcome.error());
}

void DtsClient::modifySynchronizationObjectAsync(const ModifySynchronizationObjectRequest& request, const ModifySynchronizationObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySynchronizationObject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ModifySynchronizationObjectOutcomeCallable DtsClient::modifySynchronizationObjectCallable(const ModifySynchronizationObjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySynchronizationObjectOutcome()>>(
			[this, request]()
			{
			return this->modifySynchronizationObject(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ResetDtsJobOutcome DtsClient::resetDtsJob(const ResetDtsJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetDtsJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetDtsJobOutcome(ResetDtsJobResult(outcome.result()));
	else
		return ResetDtsJobOutcome(outcome.error());
}

void DtsClient::resetDtsJobAsync(const ResetDtsJobRequest& request, const ResetDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetDtsJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ResetDtsJobOutcomeCallable DtsClient::resetDtsJobCallable(const ResetDtsJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetDtsJobOutcome()>>(
			[this, request]()
			{
			return this->resetDtsJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ResetSynchronizationJobOutcome DtsClient::resetSynchronizationJob(const ResetSynchronizationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetSynchronizationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetSynchronizationJobOutcome(ResetSynchronizationJobResult(outcome.result()));
	else
		return ResetSynchronizationJobOutcome(outcome.error());
}

void DtsClient::resetSynchronizationJobAsync(const ResetSynchronizationJobRequest& request, const ResetSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetSynchronizationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ResetSynchronizationJobOutcomeCallable DtsClient::resetSynchronizationJobCallable(const ResetSynchronizationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetSynchronizationJobOutcome()>>(
			[this, request]()
			{
			return this->resetSynchronizationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::ShieldPrecheckOutcome DtsClient::shieldPrecheck(const ShieldPrecheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ShieldPrecheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ShieldPrecheckOutcome(ShieldPrecheckResult(outcome.result()));
	else
		return ShieldPrecheckOutcome(outcome.error());
}

void DtsClient::shieldPrecheckAsync(const ShieldPrecheckRequest& request, const ShieldPrecheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, shieldPrecheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ShieldPrecheckOutcomeCallable DtsClient::shieldPrecheckCallable(const ShieldPrecheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ShieldPrecheckOutcome()>>(
			[this, request]()
			{
			return this->shieldPrecheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::SkipPreCheckOutcome DtsClient::skipPreCheck(const SkipPreCheckRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SkipPreCheckOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SkipPreCheckOutcome(SkipPreCheckResult(outcome.result()));
	else
		return SkipPreCheckOutcome(outcome.error());
}

void DtsClient::skipPreCheckAsync(const SkipPreCheckRequest& request, const SkipPreCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, skipPreCheck(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::SkipPreCheckOutcomeCallable DtsClient::skipPreCheckCallable(const SkipPreCheckRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SkipPreCheckOutcome()>>(
			[this, request]()
			{
			return this->skipPreCheck(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::StartDtsJobOutcome DtsClient::startDtsJob(const StartDtsJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartDtsJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartDtsJobOutcome(StartDtsJobResult(outcome.result()));
	else
		return StartDtsJobOutcome(outcome.error());
}

void DtsClient::startDtsJobAsync(const StartDtsJobRequest& request, const StartDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startDtsJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::StartDtsJobOutcomeCallable DtsClient::startDtsJobCallable(const StartDtsJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartDtsJobOutcome()>>(
			[this, request]()
			{
			return this->startDtsJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::StartMigrationJobOutcome DtsClient::startMigrationJob(const StartMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartMigrationJobOutcome(StartMigrationJobResult(outcome.result()));
	else
		return StartMigrationJobOutcome(outcome.error());
}

void DtsClient::startMigrationJobAsync(const StartMigrationJobRequest& request, const StartMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::StartMigrationJobOutcomeCallable DtsClient::startMigrationJobCallable(const StartMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->startMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::StartSubscriptionInstanceOutcome DtsClient::startSubscriptionInstance(const StartSubscriptionInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartSubscriptionInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartSubscriptionInstanceOutcome(StartSubscriptionInstanceResult(outcome.result()));
	else
		return StartSubscriptionInstanceOutcome(outcome.error());
}

void DtsClient::startSubscriptionInstanceAsync(const StartSubscriptionInstanceRequest& request, const StartSubscriptionInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startSubscriptionInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::StartSubscriptionInstanceOutcomeCallable DtsClient::startSubscriptionInstanceCallable(const StartSubscriptionInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartSubscriptionInstanceOutcome()>>(
			[this, request]()
			{
			return this->startSubscriptionInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::StartSynchronizationJobOutcome DtsClient::startSynchronizationJob(const StartSynchronizationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartSynchronizationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartSynchronizationJobOutcome(StartSynchronizationJobResult(outcome.result()));
	else
		return StartSynchronizationJobOutcome(outcome.error());
}

void DtsClient::startSynchronizationJobAsync(const StartSynchronizationJobRequest& request, const StartSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startSynchronizationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::StartSynchronizationJobOutcomeCallable DtsClient::startSynchronizationJobCallable(const StartSynchronizationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartSynchronizationJobOutcome()>>(
			[this, request]()
			{
			return this->startSynchronizationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::StopDtsJobOutcome DtsClient::stopDtsJob(const StopDtsJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopDtsJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopDtsJobOutcome(StopDtsJobResult(outcome.result()));
	else
		return StopDtsJobOutcome(outcome.error());
}

void DtsClient::stopDtsJobAsync(const StopDtsJobRequest& request, const StopDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopDtsJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::StopDtsJobOutcomeCallable DtsClient::stopDtsJobCallable(const StopDtsJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopDtsJobOutcome()>>(
			[this, request]()
			{
			return this->stopDtsJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::StopMigrationJobOutcome DtsClient::stopMigrationJob(const StopMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopMigrationJobOutcome(StopMigrationJobResult(outcome.result()));
	else
		return StopMigrationJobOutcome(outcome.error());
}

void DtsClient::stopMigrationJobAsync(const StopMigrationJobRequest& request, const StopMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::StopMigrationJobOutcomeCallable DtsClient::stopMigrationJobCallable(const StopMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->stopMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::SuspendDtsJobOutcome DtsClient::suspendDtsJob(const SuspendDtsJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendDtsJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendDtsJobOutcome(SuspendDtsJobResult(outcome.result()));
	else
		return SuspendDtsJobOutcome(outcome.error());
}

void DtsClient::suspendDtsJobAsync(const SuspendDtsJobRequest& request, const SuspendDtsJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendDtsJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::SuspendDtsJobOutcomeCallable DtsClient::suspendDtsJobCallable(const SuspendDtsJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendDtsJobOutcome()>>(
			[this, request]()
			{
			return this->suspendDtsJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::SuspendMigrationJobOutcome DtsClient::suspendMigrationJob(const SuspendMigrationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendMigrationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendMigrationJobOutcome(SuspendMigrationJobResult(outcome.result()));
	else
		return SuspendMigrationJobOutcome(outcome.error());
}

void DtsClient::suspendMigrationJobAsync(const SuspendMigrationJobRequest& request, const SuspendMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendMigrationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::SuspendMigrationJobOutcomeCallable DtsClient::suspendMigrationJobCallable(const SuspendMigrationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendMigrationJobOutcome()>>(
			[this, request]()
			{
			return this->suspendMigrationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::SuspendSynchronizationJobOutcome DtsClient::suspendSynchronizationJob(const SuspendSynchronizationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendSynchronizationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendSynchronizationJobOutcome(SuspendSynchronizationJobResult(outcome.result()));
	else
		return SuspendSynchronizationJobOutcome(outcome.error());
}

void DtsClient::suspendSynchronizationJobAsync(const SuspendSynchronizationJobRequest& request, const SuspendSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendSynchronizationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::SuspendSynchronizationJobOutcomeCallable DtsClient::suspendSynchronizationJobCallable(const SuspendSynchronizationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendSynchronizationJobOutcome()>>(
			[this, request]()
			{
			return this->suspendSynchronizationJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::SwitchSynchronizationEndpointOutcome DtsClient::switchSynchronizationEndpoint(const SwitchSynchronizationEndpointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchSynchronizationEndpointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchSynchronizationEndpointOutcome(SwitchSynchronizationEndpointResult(outcome.result()));
	else
		return SwitchSynchronizationEndpointOutcome(outcome.error());
}

void DtsClient::switchSynchronizationEndpointAsync(const SwitchSynchronizationEndpointRequest& request, const SwitchSynchronizationEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchSynchronizationEndpoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::SwitchSynchronizationEndpointOutcomeCallable DtsClient::switchSynchronizationEndpointCallable(const SwitchSynchronizationEndpointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchSynchronizationEndpointOutcome()>>(
			[this, request]()
			{
			return this->switchSynchronizationEndpoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::TagResourcesOutcome DtsClient::tagResources(const TagResourcesRequest &request) const
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

void DtsClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::TagResourcesOutcomeCallable DtsClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

DtsClient::UntagResourcesOutcome DtsClient::untagResources(const UntagResourcesRequest &request) const
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

void DtsClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::UntagResourcesOutcomeCallable DtsClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

