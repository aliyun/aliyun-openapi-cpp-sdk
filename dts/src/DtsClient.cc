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

