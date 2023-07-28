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

DtsClient::ConfigurationSynchronizationJobOutcome DtsClient::configurationSynchronizationJob(const ConfigurationSynchronizationJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigurationSynchronizationJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigurationSynchronizationJobOutcome(ConfigurationSynchronizationJobResult(outcome.result()));
	else
		return ConfigurationSynchronizationJobOutcome(outcome.error());
}

void DtsClient::configurationSynchronizationJobAsync(const ConfigurationSynchronizationJobRequest& request, const ConfigurationSynchronizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configurationSynchronizationJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ConfigurationSynchronizationJobOutcomeCallable DtsClient::configurationSynchronizationJobCallable(const ConfigurationSynchronizationJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigurationSynchronizationJobOutcome()>>(
			[this, request]()
			{
			return this->configurationSynchronizationJob(request);
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

DtsClient::DescirbeMigrationJobsOutcome DtsClient::descirbeMigrationJobs(const DescirbeMigrationJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescirbeMigrationJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescirbeMigrationJobsOutcome(DescirbeMigrationJobsResult(outcome.result()));
	else
		return DescirbeMigrationJobsOutcome(outcome.error());
}

void DtsClient::descirbeMigrationJobsAsync(const DescirbeMigrationJobsRequest& request, const DescirbeMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, descirbeMigrationJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescirbeMigrationJobsOutcomeCallable DtsClient::descirbeMigrationJobsCallable(const DescirbeMigrationJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescirbeMigrationJobsOutcome()>>(
			[this, request]()
			{
			return this->descirbeMigrationJobs(request);
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

DtsClient::DescribeSubscriptionObjectModifyStatusOutcome DtsClient::describeSubscriptionObjectModifyStatus(const DescribeSubscriptionObjectModifyStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSubscriptionObjectModifyStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSubscriptionObjectModifyStatusOutcome(DescribeSubscriptionObjectModifyStatusResult(outcome.result()));
	else
		return DescribeSubscriptionObjectModifyStatusOutcome(outcome.error());
}

void DtsClient::describeSubscriptionObjectModifyStatusAsync(const DescribeSubscriptionObjectModifyStatusRequest& request, const DescribeSubscriptionObjectModifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSubscriptionObjectModifyStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::DescribeSubscriptionObjectModifyStatusOutcomeCallable DtsClient::describeSubscriptionObjectModifyStatusCallable(const DescribeSubscriptionObjectModifyStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSubscriptionObjectModifyStatusOutcome()>>(
			[this, request]()
			{
			return this->describeSubscriptionObjectModifyStatus(request);
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

DtsClient::ModifyMigrationObjectOutcome DtsClient::modifyMigrationObject(const ModifyMigrationObjectRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMigrationObjectOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMigrationObjectOutcome(ModifyMigrationObjectResult(outcome.result()));
	else
		return ModifyMigrationObjectOutcome(outcome.error());
}

void DtsClient::modifyMigrationObjectAsync(const ModifyMigrationObjectRequest& request, const ModifyMigrationObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMigrationObject(request), context);
	};

	asyncExecute(new Runnable(fn));
}

DtsClient::ModifyMigrationObjectOutcomeCallable DtsClient::modifyMigrationObjectCallable(const ModifyMigrationObjectRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMigrationObjectOutcome()>>(
			[this, request]()
			{
			return this->modifyMigrationObject(request);
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

