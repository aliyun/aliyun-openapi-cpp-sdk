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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DtsClient::DtsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DtsClient::DtsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

DtsClient::~DtsClient()
{}

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

